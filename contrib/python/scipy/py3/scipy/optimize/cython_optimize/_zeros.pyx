"""Cython wrappers for root finders in c_zeros"""

from . cimport c_zeros


# callback function wrapper that extracts function, args from params struct
cdef double scipy_zeros_functions_func(double x, void *params) noexcept:
    cdef zeros_parameters *myparams = <zeros_parameters *> params
    cdef void* args = myparams.args
    cdef callback_type f = myparams.function
    # callback_type takes a double and a struct
    return f(x, args)


#
# cythonized way to call scalar bisect
cdef double bisect(
        callback_type f, double xa, double xb, void *args, double xtol,
        double rtol, int iter, zeros_full_output *full_output) noexcept nogil:
    cdef c_zeros.scipy_zeros_info solver_stats
    cdef zeros_parameters myparams
    cdef double root
    # create params struct
    myparams.args = args
    myparams.function = f
    root = c_zeros.bisect(
        scipy_zeros_functions_func, xa, xb, xtol, rtol, iter,
        <void *> &myparams, &solver_stats)
    if full_output is not NULL:
        full_output.funcalls = solver_stats.funcalls
        full_output.iterations = solver_stats.iterations
        full_output.error_num = solver_stats.error_num
        full_output.root = root
    return root


#
# cythonized way to call scalar ridder
cdef double ridder(
        callback_type f, double xa, double xb, void *args, double xtol,
        double rtol, int iter, zeros_full_output *full_output) noexcept nogil:
    cdef c_zeros.scipy_zeros_info solver_stats
    cdef zeros_parameters myparams
    cdef double root
    # create params struct
    myparams.args = args
    myparams.function = f
    root = c_zeros.ridder(
        scipy_zeros_functions_func, xa, xb, xtol, rtol, iter,
        <void *> &myparams, &solver_stats)
    if full_output is not NULL:
        full_output.funcalls = solver_stats.funcalls
        full_output.iterations = solver_stats.iterations
        full_output.error_num = solver_stats.error_num
        full_output.root = root
    return root


#
# cythonized way to call scalar brenth
cdef double brenth(
        callback_type f, double xa, double xb, void *args, double xtol,
        double rtol, int iter, zeros_full_output *full_output) noexcept nogil:
    cdef c_zeros.scipy_zeros_info solver_stats
    cdef zeros_parameters myparams
    cdef double root
    # create params struct
    myparams.args = args
    myparams.function = f
    root = c_zeros.brenth(
        scipy_zeros_functions_func, xa, xb, xtol, rtol, iter,
        <void *> &myparams, &solver_stats)
    if full_output is not NULL:
        full_output.funcalls = solver_stats.funcalls
        full_output.iterations = solver_stats.iterations
        full_output.error_num = solver_stats.error_num
        full_output.root = root
    return root


#
# cythonized way to call scalar brentq
cdef double brentq(
        callback_type f, double xa, double xb, void *args, double xtol,
        double rtol, int iter, zeros_full_output *full_output) noexcept nogil:
    cdef c_zeros.scipy_zeros_info solver_stats
    cdef zeros_parameters myparams
    cdef double root
    # create params struct
    myparams.args = args
    myparams.function = f
    root = c_zeros.brentq(
        scipy_zeros_functions_func, xa, xb, xtol, rtol, iter,
        <void *> &myparams, &solver_stats)
    if full_output is not NULL:
        full_output.funcalls = solver_stats.funcalls
        full_output.iterations = solver_stats.iterations
        full_output.error_num = solver_stats.error_num
        full_output.root = root
    return root


#

# examples for optimize/tests/test_cython_optimize.py


# extra parameters
ctypedef struct extra_params:
    double[4] a


# callback function
cdef double f_example(double x, void *args) noexcept:
    cdef extra_params *myargs = <extra_params *> args
    cdef double[4] a
    # unpack structure
    a = myargs.a
    # use Horner's method
    return ((a[3]*x + a[2])*x + a[1])*x + a[0]


#
# bisect example
cdef double bisect_example(
        tuple args, float xa, float xb, float xtol, float rtol, int mitr) noexcept:
    cdef extra_params myargs
    myargs.a = args
    return bisect(
        f_example, xa, xb, &myargs, xtol, rtol, mitr, NULL)


#
# ridder example
cdef double ridder_example(
        tuple args, float xa, float xb, float xtol, float rtol, int mitr) noexcept:
    cdef extra_params myargs
    myargs.a = args
    return ridder(
        f_example, xa, xb, &myargs, xtol, rtol, mitr, NULL)


#
# brenth example
cdef double brenth_example(
        tuple args, float xa, float xb, float xtol, float rtol, int mitr) noexcept:
    cdef extra_params myargs
    myargs.a = args
    return brenth(
        f_example, xa, xb, &myargs, xtol, rtol, mitr, NULL)


#
# brentq example
cdef double brentq_example(
        tuple args, float xa, float xb, float xtol, float rtol, int mitr) noexcept:
    cdef extra_params myargs
    myargs.a = args
    return brentq(
        f_example, xa, xb, &myargs, xtol, rtol, mitr, NULL)


#

# map of example functions
EXAMPLES_MAP = {
    'bisect': bisect_example,
    'ridder': ridder_example,
    'brenth': brenth_example,
    'brentq': brentq_example,
}


# python function
def loop_example(method, a0, args, xa, xb, xtol, rtol, mitr):
    """
    Example of Cython optimize zeros functions with map.

    Parameters
    ----------
    method : str
        name of the Cython optimize zeros function to call
    a0 : sequence of float
        first extra argument which is mapped to output
    args : sequence of float
        the remaining extra arguments which are constant
    xa : float
        first bound of zero function
    xb : float
        second bound of zero function
    xtol : float
        absolute tolerance of zero function
    rtol : float
        relative tolerance of zero function
    mitr : int
        max. iteration of zero function

    Returns
    -------
    roots : sequence of float
        the root for each of the values of `a0`

    This example finds the roots of a 3rd order polynomial given a sequence of
    constant terms as `a0` and fixed 1st, 2nd, and 3rd order terms in `args`.
    """
    method = EXAMPLES_MAP[method.lower()]
    args = [(a0_,) + args for a0_ in a0]
    return map(lambda a: method(a, xa, xb, xtol, rtol, mitr), args)


# brentq example with full ouptut
cdef zeros_full_output brentq_full_output_example(
        tuple args, float xa, float xb, float xtol, float rtol, int mitr) noexcept:
    cdef zeros_full_output full_output
    cdef extra_params myargs
    myargs.a = args
    brentq(f_example, xa, xb, &myargs, xtol, rtol, mitr, &full_output)
    return full_output


# python function
def full_output_example(args, xa, xb, xtol, rtol, mitr):
    """
    Example of Cython optimize zeros functions with full output.

    Parameters
    ----------
    args : sequence of float
        extra arguments of zero function
    xa : float
        first boundary of zero function
    xb : float
        second boundary of zero function
    xtol : float
        absolute tolerance of zero function
    rtol : float
        relative tolerance of zero function
    mitr : int
        max. iteration of zero function

    Returns
    -------
    full_output : dict
        the root, number of function calls, number of iterations, and the zero
        function error number 

    This example finds the roots of a 3rd order polynomial with coefficients
    given as `args`.
    """
    return brentq_full_output_example(args, xa, xb, xtol, rtol, mitr)
