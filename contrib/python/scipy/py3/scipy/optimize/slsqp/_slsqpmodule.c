/* File: _slsqpmodule.c
 * This file is auto-generated with f2py (version:1.26.3).
 * f2py is a Fortran to Python Interface Generator (FPIG), Second Edition,
 * written by Pearu Peterson <pearu@cens.ioc.ee>.
 * Generation date: Wed Nov 24 04:33:34 2021
 * Do not edit this file directly unless you know what you are doing!!!
 */

#ifdef __cplusplus
extern "C" {
#endif

#ifndef PY_SSIZE_T_CLEAN
#define PY_SSIZE_T_CLEAN
#endif /* PY_SSIZE_T_CLEAN */

/* Unconditionally included */
#include <Python.h>
#include <numpy/npy_os.h>

/*********************** See f2py2e/cfuncs.py: includes ***********************/
#include "fortranobject.h"
#include <math.h>

/**************** See f2py2e/rules.py: mod_rules['modulebody'] ****************/
static PyObject *_slsqp_error;
static PyObject *_slsqp_module;

/*********************** See f2py2e/cfuncs.py: typedefs ***********************/
typedef signed char signed_char;

/****************** See f2py2e/cfuncs.py: typedefs_generated ******************/
/*need_typedefs_generated*/

/********************** See f2py2e/cfuncs.py: cppmacros **********************/

#define pyobj_from_int1(v) (PyLong_FromLong(v))


#define PRINTPYOBJERR(obj)\
    fprintf(stderr,"_slsqp.error is related to ");\
    PyObject_Print((PyObject *)obj,stderr,Py_PRINT_RAW);\
    fprintf(stderr,"\n");


#define pyobj_from_double1(v) (PyFloat_FromDouble(v))

#if defined(PREPEND_FORTRAN)
#if defined(NO_APPEND_FORTRAN)
#if defined(UPPERCASE_FORTRAN)
#define F_FUNC(f,F) _##F
#else
#define F_FUNC(f,F) _##f
#endif
#else
#if defined(UPPERCASE_FORTRAN)
#define F_FUNC(f,F) _##F##_
#else
#define F_FUNC(f,F) _##f##_
#endif
#endif
#else
#if defined(NO_APPEND_FORTRAN)
#if defined(UPPERCASE_FORTRAN)
#define F_FUNC(f,F) F
#else
#define F_FUNC(f,F) f
#endif
#else
#if defined(UPPERCASE_FORTRAN)
#define F_FUNC(f,F) F##_
#else
#define F_FUNC(f,F) f##_
#endif
#endif
#endif
#if defined(UNDERSCORE_G77)
#define F_FUNC_US(f,F) F_FUNC(f##_,F##_)
#else
#define F_FUNC_US(f,F) F_FUNC(f,F)
#endif


/* See fortranobject.h for definitions. The macros here are provided for BC. */
#define rank f2py_rank
#define shape f2py_shape
#define fshape f2py_shape
#define len f2py_len
#define flen f2py_flen
#define slen f2py_slen
#define size f2py_size


#define CHECKSCALAR(check,tcheck,name,show,var)\
    if (!(check)) {\
        char errstring[256];\
        sprintf(errstring, "%s: "show, "("tcheck") failed for "name, var);\
        PyErr_SetString(_slsqp_error,errstring);\
        /*goto capi_fail;*/\
    } else 

#ifdef DEBUGCFUNCS
#define CFUNCSMESS(mess) fprintf(stderr,"debug-capi:"mess);
#define CFUNCSMESSPY(mess,obj) CFUNCSMESS(mess) \
    PyObject_Print((PyObject *)obj,stderr,Py_PRINT_RAW);\
    fprintf(stderr,"\n");
#else
#define CFUNCSMESS(mess)
#define CFUNCSMESSPY(mess,obj)
#endif


#ifndef max
#define max(a,b) ((a > b) ? (a) : (b))
#endif
#ifndef min
#define min(a,b) ((a < b) ? (a) : (b))
#endif
#ifndef MAX
#define MAX(a,b) ((a > b) ? (a) : (b))
#endif
#ifndef MIN
#define MIN(a,b) ((a < b) ? (a) : (b))
#endif


/* New SciPy */
#define TRYPYARRAYTEMPLATECHAR case NPY_STRING: *(char *)(PyArray_DATA(arr))=*v; break;
#define TRYPYARRAYTEMPLATELONG case NPY_LONG: *(long *)(PyArray_DATA(arr))=*v; break;
#define TRYPYARRAYTEMPLATEOBJECT case NPY_OBJECT: PyArray_SETITEM(arr,PyArray_DATA(arr),pyobj_from_ ## ctype ## 1(*v)); break;

#define TRYPYARRAYTEMPLATE(ctype,typecode) \
        PyArrayObject *arr = NULL;\
        if (!obj) return -2;\
        if (!PyArray_Check(obj)) return -1;\
        if (!(arr=(PyArrayObject *)obj)) {fprintf(stderr,"TRYPYARRAYTEMPLATE:");PRINTPYOBJERR(obj);return 0;}\
        if (PyArray_DESCR(arr)->type==typecode)  {*(ctype *)(PyArray_DATA(arr))=*v; return 1;}\
        switch (PyArray_TYPE(arr)) {\
                case NPY_DOUBLE: *(npy_double *)(PyArray_DATA(arr))=*v; break;\
                case NPY_INT: *(npy_int *)(PyArray_DATA(arr))=*v; break;\
                case NPY_LONG: *(npy_long *)(PyArray_DATA(arr))=*v; break;\
                case NPY_FLOAT: *(npy_float *)(PyArray_DATA(arr))=*v; break;\
                case NPY_CDOUBLE: *(npy_double *)(PyArray_DATA(arr))=*v; break;\
                case NPY_CFLOAT: *(npy_float *)(PyArray_DATA(arr))=*v; break;\
                case NPY_BOOL: *(npy_bool *)(PyArray_DATA(arr))=(*v!=0); break;\
                case NPY_UBYTE: *(npy_ubyte *)(PyArray_DATA(arr))=*v; break;\
                case NPY_BYTE: *(npy_byte *)(PyArray_DATA(arr))=*v; break;\
                case NPY_SHORT: *(npy_short *)(PyArray_DATA(arr))=*v; break;\
                case NPY_USHORT: *(npy_ushort *)(PyArray_DATA(arr))=*v; break;\
                case NPY_UINT: *(npy_uint *)(PyArray_DATA(arr))=*v; break;\
                case NPY_ULONG: *(npy_ulong *)(PyArray_DATA(arr))=*v; break;\
                case NPY_LONGLONG: *(npy_longlong *)(PyArray_DATA(arr))=*v; break;\
                case NPY_ULONGLONG: *(npy_ulonglong *)(PyArray_DATA(arr))=*v; break;\
                case NPY_LONGDOUBLE: *(npy_longdouble *)(PyArray_DATA(arr))=*v; break;\
                case NPY_CLONGDOUBLE: *(npy_longdouble *)(PyArray_DATA(arr))=*v; break;\
                case NPY_OBJECT: PyArray_SETITEM(arr, PyArray_DATA(arr), pyobj_from_ ## ctype ## 1(*v)); break;\
        default: return -2;\
        };\
        return 1


/************************ See f2py2e/cfuncs.py: cfuncs ************************/
static int try_pyarr_from_double(PyObject* obj,double* v) {
    TRYPYARRAYTEMPLATE(double,'d');
}

static int try_pyarr_from_int(PyObject* obj,int* v) {
    TRYPYARRAYTEMPLATE(int,'i');
}


static int
int_from_pyobj(int* v, PyObject *obj, const char *errmess)
{
    PyObject* tmp = NULL;

    if (PyLong_Check(obj)) {
        *v = Npy__PyLong_AsInt(obj);
        return !(*v == -1 && PyErr_Occurred());
    }

    tmp = PyNumber_Long(obj);
    if (tmp) {
        *v = Npy__PyLong_AsInt(tmp);
        Py_DECREF(tmp);
        return !(*v == -1 && PyErr_Occurred());
    }

    if (PyComplex_Check(obj)) {
        PyErr_Clear();
        tmp = PyObject_GetAttrString(obj,"real");
    }
    else if (PyBytes_Check(obj) || PyUnicode_Check(obj)) {
        /*pass*/;
    }
    else if (PySequence_Check(obj)) {
        PyErr_Clear();
        tmp = PySequence_GetItem(obj, 0);
    }

    if (tmp) {
        if (int_from_pyobj(v, tmp, errmess)) {
            Py_DECREF(tmp);
            return 1;
        }
        Py_DECREF(tmp);
    }

    {
        PyObject* err = PyErr_Occurred();
        if (err == NULL) {
            err = _slsqp_error;
        }
        PyErr_SetString(err, errmess);
    }
    return 0;
}


static int
double_from_pyobj(double* v, PyObject *obj, const char *errmess)
{
    PyObject* tmp = NULL;
    if (PyFloat_Check(obj)) {
        *v = PyFloat_AsDouble(obj);
        return !(*v == -1.0 && PyErr_Occurred());
    }

    tmp = PyNumber_Float(obj);
    if (tmp) {
        *v = PyFloat_AsDouble(tmp);
        Py_DECREF(tmp);
        return !(*v == -1.0 && PyErr_Occurred());
    }

    if (PyComplex_Check(obj)) {
        PyErr_Clear();
        tmp = PyObject_GetAttrString(obj,"real");
    }
    else if (PyBytes_Check(obj) || PyUnicode_Check(obj)) {
        /*pass*/;
    }
    else if (PySequence_Check(obj)) {
        PyErr_Clear();
        tmp = PySequence_GetItem(obj, 0);
    }

    if (tmp) {
        if (double_from_pyobj(v,tmp,errmess)) {Py_DECREF(tmp); return 1;}
        Py_DECREF(tmp);
    }
    {
        PyObject* err = PyErr_Occurred();
        if (err==NULL) err = _slsqp_error;
        PyErr_SetString(err,errmess);
    }
    return 0;
}


/********************* See f2py2e/cfuncs.py: userincludes *********************/
/*need_userincludes*/

/********************* See f2py2e/capi_rules.py: usercode *********************/


/* See f2py2e/rules.py */
extern void F_FUNC(slsqp,SLSQP)(int*,int*,int*,int*,double*,double*,double*,double*,double*,double*,double*,double*,int*,int*,double*,int*,int*,int*,double*,double*,double*,double*,double*,double*,double*,double*,double*,double*,int*,int*,int*,int*,int*,int*,int*,int*);
/*eof externroutines*/

/******************** See f2py2e/capi_rules.py: usercode1 ********************/


/******************* See f2py2e/cb_rules.py: buildcallback *******************/
/*need_callbacks*/

/*********************** See f2py2e/rules.py: buildapi ***********************/

/*********************************** slsqp ***********************************/
static char doc_f2py_rout__slsqp_slsqp[] = "\
slsqp(m,meq,x,xl,xu,f,c,g,a,acc,iter,mode,w,jw,alpha,f0,gs,h1,h2,h3,h4,t,t0,tol,iexact,incons,ireset,itermx,line,n1,n2,n3,[la,n,l_w,l_jw])\n\nWrapper for ``slsqp``.\
\n\nParameters\n----------\n"
"m : input int\n"
"meq : input int\n"
"x : in/output rank-1 array('d') with bounds (n)\n"
"xl : input rank-1 array('d') with bounds (n)\n"
"xu : input rank-1 array('d') with bounds (n)\n"
"f : input float\n"
"c : input rank-1 array('d') with bounds (la)\n"
"g : input rank-1 array('d') with bounds (1 + n)\n"
"a : input rank-2 array('d') with bounds (la,1 + n)\n"
"acc : in/output rank-0 array(float,'d')\n"
"iter : in/output rank-0 array(int,'i')\n"
"mode : in/output rank-0 array(int,'i')\n"
"w : input rank-1 array('d') with bounds (l_w)\n"
"jw : input rank-1 array('i') with bounds (l_jw)\n"
"alpha : in/output rank-0 array(float,'d')\n"
"f0 : in/output rank-0 array(float,'d')\n"
"gs : in/output rank-0 array(float,'d')\n"
"h1 : in/output rank-0 array(float,'d')\n"
"h2 : in/output rank-0 array(float,'d')\n"
"h3 : in/output rank-0 array(float,'d')\n"
"h4 : in/output rank-0 array(float,'d')\n"
"t : in/output rank-0 array(float,'d')\n"
"t0 : in/output rank-0 array(float,'d')\n"
"tol : in/output rank-0 array(float,'d')\n"
"iexact : in/output rank-0 array(int,'i')\n"
"incons : in/output rank-0 array(int,'i')\n"
"ireset : in/output rank-0 array(int,'i')\n"
"itermx : in/output rank-0 array(int,'i')\n"
"line : in/output rank-0 array(int,'i')\n"
"n1 : in/output rank-0 array(int,'i')\n"
"n2 : in/output rank-0 array(int,'i')\n"
"n3 : in/output rank-0 array(int,'i')\n"
"\nOther Parameters\n----------------\n"
"la : input int, optional\n    Default: len(c)\n"
"n : input int, optional\n    Default: len(x)\n"
"l_w : input int, optional\n    Default: len(w)\n"
"l_jw : input int, optional\n    Default: len(jw)";
/* extern void F_FUNC(slsqp,SLSQP)(int*,int*,int*,int*,double*,double*,double*,double*,double*,double*,double*,double*,int*,int*,double*,int*,int*,int*,double*,double*,double*,double*,double*,double*,double*,double*,double*,double*,int*,int*,int*,int*,int*,int*,int*,int*); */
static PyObject *f2py_rout__slsqp_slsqp(const PyObject *capi_self,
                           PyObject *capi_args,
                           PyObject *capi_keywds,
                           void (*f2py_func)(int*,int*,int*,int*,double*,double*,double*,double*,double*,double*,double*,double*,int*,int*,double*,int*,int*,int*,double*,double*,double*,double*,double*,double*,double*,double*,double*,double*,int*,int*,int*,int*,int*,int*,int*,int*)) {
    PyObject * volatile capi_buildvalue = NULL;
    volatile int f2py_success = 1;
/*decl*/

    int m = 0;
    PyObject *m_capi = Py_None;
    int meq = 0;
    PyObject *meq_capi = Py_None;
    int la = 0;
    PyObject *la_capi = Py_None;
    int n = 0;
    PyObject *n_capi = Py_None;
    double *x = NULL;
    npy_intp x_Dims[1] = {-1};
    const int x_Rank = 1;
    PyArrayObject *capi_x_as_array = NULL;
    int capi_x_intent = 0;
    PyObject *x_capi = Py_None;
    double *xl = NULL;
    npy_intp xl_Dims[1] = {-1};
    const int xl_Rank = 1;
    PyArrayObject *capi_xl_as_array = NULL;
    int capi_xl_intent = 0;
    PyObject *xl_capi = Py_None;
    double *xu = NULL;
    npy_intp xu_Dims[1] = {-1};
    const int xu_Rank = 1;
    PyArrayObject *capi_xu_as_array = NULL;
    int capi_xu_intent = 0;
    PyObject *xu_capi = Py_None;
    double f = 0;
    PyObject *f_capi = Py_None;
    double *c = NULL;
    npy_intp c_Dims[1] = {-1};
    const int c_Rank = 1;
    PyArrayObject *capi_c_as_array = NULL;
    int capi_c_intent = 0;
    PyObject *c_capi = Py_None;
    double *g = NULL;
    npy_intp g_Dims[1] = {-1};
    const int g_Rank = 1;
    PyArrayObject *capi_g_as_array = NULL;
    int capi_g_intent = 0;
    PyObject *g_capi = Py_None;
    double *a = NULL;
    npy_intp a_Dims[2] = {-1, -1};
    const int a_Rank = 2;
    PyArrayObject *capi_a_as_array = NULL;
    int capi_a_intent = 0;
    PyObject *a_capi = Py_None;
    double acc = 0;
    PyObject *acc_capi = Py_None;
    int iter = 0;
    PyObject *iter_capi = Py_None;
    int mode = 0;
    PyObject *mode_capi = Py_None;
    double *w = NULL;
    npy_intp w_Dims[1] = {-1};
    const int w_Rank = 1;
    PyArrayObject *capi_w_as_array = NULL;
    int capi_w_intent = 0;
    PyObject *w_capi = Py_None;
    int l_w = 0;
    PyObject *l_w_capi = Py_None;
    int *jw = NULL;
    npy_intp jw_Dims[1] = {-1};
    const int jw_Rank = 1;
    PyArrayObject *capi_jw_as_array = NULL;
    int capi_jw_intent = 0;
    PyObject *jw_capi = Py_None;
    int l_jw = 0;
    PyObject *l_jw_capi = Py_None;
    double alpha = 0;
    PyObject *alpha_capi = Py_None;
    double f0 = 0;
    PyObject *f0_capi = Py_None;
    double gs = 0;
    PyObject *gs_capi = Py_None;
    double h1 = 0;
    PyObject *h1_capi = Py_None;
    double h2 = 0;
    PyObject *h2_capi = Py_None;
    double h3 = 0;
    PyObject *h3_capi = Py_None;
    double h4 = 0;
    PyObject *h4_capi = Py_None;
    double t = 0;
    PyObject *t_capi = Py_None;
    double t0 = 0;
    PyObject *t0_capi = Py_None;
    double tol = 0;
    PyObject *tol_capi = Py_None;
    int iexact = 0;
    PyObject *iexact_capi = Py_None;
    int incons = 0;
    PyObject *incons_capi = Py_None;
    int ireset = 0;
    PyObject *ireset_capi = Py_None;
    int itermx = 0;
    PyObject *itermx_capi = Py_None;
    int line = 0;
    PyObject *line_capi = Py_None;
    int n1 = 0;
    PyObject *n1_capi = Py_None;
    int n2 = 0;
    PyObject *n2_capi = Py_None;
    int n3 = 0;
    PyObject *n3_capi = Py_None;
    static char *capi_kwlist[] = {"m","meq","x","xl","xu","f","c","g","a","acc","iter","mode","w","jw","alpha","f0","gs","h1","h2","h3","h4","t","t0","tol","iexact","incons","ireset","itermx","line","n1","n2","n3","la","n","l_w","l_jw",NULL};

/*routdebugenter*/
#ifdef F2PY_REPORT_ATEXIT
f2py_start_clock();
#endif
    if (!PyArg_ParseTupleAndKeywords(capi_args,capi_keywds,\
        "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO|OOOO:_slsqp.slsqp",\
        capi_kwlist,&m_capi,&meq_capi,&x_capi,&xl_capi,&xu_capi,&f_capi,&c_capi,&g_capi,&a_capi,&acc_capi,&iter_capi,&mode_capi,&w_capi,&jw_capi,&alpha_capi,&f0_capi,&gs_capi,&h1_capi,&h2_capi,&h3_capi,&h4_capi,&t_capi,&t0_capi,&tol_capi,&iexact_capi,&incons_capi,&ireset_capi,&itermx_capi,&line_capi,&n1_capi,&n2_capi,&n3_capi,&la_capi,&n_capi,&l_w_capi,&l_jw_capi))
        return NULL;
/*frompyobj*/
    /* Processing variable m */
        f2py_success = int_from_pyobj(&m,m_capi,"_slsqp.slsqp() 1st argument (m) can't be converted to int");
    if (f2py_success) {
    /* Processing variable meq */
        f2py_success = int_from_pyobj(&meq,meq_capi,"_slsqp.slsqp() 2nd argument (meq) can't be converted to int");
    if (f2py_success) {
    /* Processing variable x */
    ;
    capi_x_intent |= F2PY_INTENT_INOUT;
    const char * capi_errmess = "_slsqp._slsqp.slsqp: failed to create array from the 3rd argument `x`";
    capi_x_as_array = ndarray_from_pyobj(  NPY_DOUBLE,1,x_Dims,x_Rank,  capi_x_intent,x_capi,capi_errmess);
    if (capi_x_as_array == NULL) {
        PyObject* capi_err = PyErr_Occurred();
        if (capi_err == NULL) {
            capi_err = _slsqp_error;
            PyErr_SetString(capi_err, capi_errmess);
        }
    } else {
        x = (double *)(PyArray_DATA(capi_x_as_array));

    /* Processing variable f */
        f2py_success = double_from_pyobj(&f,f_capi,"_slsqp.slsqp() 6th argument (f) can't be converted to double");
    if (f2py_success) {
    /* Processing variable c */
    ;
    capi_c_intent |= F2PY_INTENT_IN;
    const char * capi_errmess = "_slsqp._slsqp.slsqp: failed to create array from the 7th argument `c`";
    capi_c_as_array = ndarray_from_pyobj(  NPY_DOUBLE,1,c_Dims,c_Rank,  capi_c_intent,c_capi,capi_errmess);
    if (capi_c_as_array == NULL) {
        PyObject* capi_err = PyErr_Occurred();
        if (capi_err == NULL) {
            capi_err = _slsqp_error;
            PyErr_SetString(capi_err, capi_errmess);
        }
    } else {
        c = (double *)(PyArray_DATA(capi_c_as_array));

    /* Processing variable acc */
        f2py_success = double_from_pyobj(&acc,acc_capi,"_slsqp.slsqp() 10th argument (acc) can't be converted to double");
    if (f2py_success) {
    /* Processing variable iter */
        f2py_success = int_from_pyobj(&iter,iter_capi,"_slsqp.slsqp() 11st argument (iter) can't be converted to int");
    if (f2py_success) {
    /* Processing variable mode */
        f2py_success = int_from_pyobj(&mode,mode_capi,"_slsqp.slsqp() 12nd argument (mode) can't be converted to int");
    if (f2py_success) {
    /* Processing variable w */
    ;
    capi_w_intent |= F2PY_INTENT_IN;
    const char * capi_errmess = "_slsqp._slsqp.slsqp: failed to create array from the 13rd argument `w`";
    capi_w_as_array = ndarray_from_pyobj(  NPY_DOUBLE,1,w_Dims,w_Rank,  capi_w_intent,w_capi,capi_errmess);
    if (capi_w_as_array == NULL) {
        PyObject* capi_err = PyErr_Occurred();
        if (capi_err == NULL) {
            capi_err = _slsqp_error;
            PyErr_SetString(capi_err, capi_errmess);
        }
    } else {
        w = (double *)(PyArray_DATA(capi_w_as_array));

    /* Processing variable jw */
    ;
    capi_jw_intent |= F2PY_INTENT_IN;
    const char * capi_errmess = "_slsqp._slsqp.slsqp: failed to create array from the 14th argument `jw`";
    capi_jw_as_array = ndarray_from_pyobj(  NPY_INT,1,jw_Dims,jw_Rank,  capi_jw_intent,jw_capi,capi_errmess);
    if (capi_jw_as_array == NULL) {
        PyObject* capi_err = PyErr_Occurred();
        if (capi_err == NULL) {
            capi_err = _slsqp_error;
            PyErr_SetString(capi_err, capi_errmess);
        }
    } else {
        jw = (int *)(PyArray_DATA(capi_jw_as_array));

    /* Processing variable alpha */
        f2py_success = double_from_pyobj(&alpha,alpha_capi,"_slsqp.slsqp() 15th argument (alpha) can't be converted to double");
    if (f2py_success) {
    /* Processing variable f0 */
        f2py_success = double_from_pyobj(&f0,f0_capi,"_slsqp.slsqp() 16th argument (f0) can't be converted to double");
    if (f2py_success) {
    /* Processing variable gs */
        f2py_success = double_from_pyobj(&gs,gs_capi,"_slsqp.slsqp() 17th argument (gs) can't be converted to double");
    if (f2py_success) {
    /* Processing variable h1 */
        f2py_success = double_from_pyobj(&h1,h1_capi,"_slsqp.slsqp() 18th argument (h1) can't be converted to double");
    if (f2py_success) {
    /* Processing variable h2 */
        f2py_success = double_from_pyobj(&h2,h2_capi,"_slsqp.slsqp() 19th argument (h2) can't be converted to double");
    if (f2py_success) {
    /* Processing variable h3 */
        f2py_success = double_from_pyobj(&h3,h3_capi,"_slsqp.slsqp() 20th argument (h3) can't be converted to double");
    if (f2py_success) {
    /* Processing variable h4 */
        f2py_success = double_from_pyobj(&h4,h4_capi,"_slsqp.slsqp() 21st argument (h4) can't be converted to double");
    if (f2py_success) {
    /* Processing variable t */
        f2py_success = double_from_pyobj(&t,t_capi,"_slsqp.slsqp() 22nd argument (t) can't be converted to double");
    if (f2py_success) {
    /* Processing variable t0 */
        f2py_success = double_from_pyobj(&t0,t0_capi,"_slsqp.slsqp() 23rd argument (t0) can't be converted to double");
    if (f2py_success) {
    /* Processing variable tol */
        f2py_success = double_from_pyobj(&tol,tol_capi,"_slsqp.slsqp() 24th argument (tol) can't be converted to double");
    if (f2py_success) {
    /* Processing variable iexact */
        f2py_success = int_from_pyobj(&iexact,iexact_capi,"_slsqp.slsqp() 25th argument (iexact) can't be converted to int");
    if (f2py_success) {
    /* Processing variable incons */
        f2py_success = int_from_pyobj(&incons,incons_capi,"_slsqp.slsqp() 26th argument (incons) can't be converted to int");
    if (f2py_success) {
    /* Processing variable ireset */
        f2py_success = int_from_pyobj(&ireset,ireset_capi,"_slsqp.slsqp() 27th argument (ireset) can't be converted to int");
    if (f2py_success) {
    /* Processing variable itermx */
        f2py_success = int_from_pyobj(&itermx,itermx_capi,"_slsqp.slsqp() 28th argument (itermx) can't be converted to int");
    if (f2py_success) {
    /* Processing variable line */
        f2py_success = int_from_pyobj(&line,line_capi,"_slsqp.slsqp() 29th argument (line) can't be converted to int");
    if (f2py_success) {
    /* Processing variable n1 */
        f2py_success = int_from_pyobj(&n1,n1_capi,"_slsqp.slsqp() 30th argument (n1) can't be converted to int");
    if (f2py_success) {
    /* Processing variable n2 */
        f2py_success = int_from_pyobj(&n2,n2_capi,"_slsqp.slsqp() 31st argument (n2) can't be converted to int");
    if (f2py_success) {
    /* Processing variable n3 */
        f2py_success = int_from_pyobj(&n3,n3_capi,"_slsqp.slsqp() 32nd argument (n3) can't be converted to int");
    if (f2py_success) {
    /* Processing variable la */
    if (la_capi == Py_None) la = len(c); else
        f2py_success = int_from_pyobj(&la,la_capi,"_slsqp.slsqp() 1st keyword (la) can't be converted to int");
    if (f2py_success) {
    CHECKSCALAR(len(c)>=la,"len(c)>=la","1st keyword la","slsqp:la=%d",la) {
    /* Processing variable n */
    if (n_capi == Py_None) n = len(x); else
        f2py_success = int_from_pyobj(&n,n_capi,"_slsqp.slsqp() 2nd keyword (n) can't be converted to int");
    if (f2py_success) {
    CHECKSCALAR(len(x)>=n,"len(x)>=n","2nd keyword n","slsqp:n=%d",n) {
    /* Processing variable xl */
    xl_Dims[0]=n;
    capi_xl_intent |= F2PY_INTENT_IN;
    const char * capi_errmess = "_slsqp._slsqp.slsqp: failed to create array from the 4th argument `xl`";
    capi_xl_as_array = ndarray_from_pyobj(  NPY_DOUBLE,1,xl_Dims,xl_Rank,  capi_xl_intent,xl_capi,capi_errmess);
    if (capi_xl_as_array == NULL) {
        PyObject* capi_err = PyErr_Occurred();
        if (capi_err == NULL) {
            capi_err = _slsqp_error;
            PyErr_SetString(capi_err, capi_errmess);
        }
    } else {
        xl = (double *)(PyArray_DATA(capi_xl_as_array));

    /* Processing variable xu */
    xu_Dims[0]=n;
    capi_xu_intent |= F2PY_INTENT_IN;
    const char * capi_errmess = "_slsqp._slsqp.slsqp: failed to create array from the 5th argument `xu`";
    capi_xu_as_array = ndarray_from_pyobj(  NPY_DOUBLE,1,xu_Dims,xu_Rank,  capi_xu_intent,xu_capi,capi_errmess);
    if (capi_xu_as_array == NULL) {
        PyObject* capi_err = PyErr_Occurred();
        if (capi_err == NULL) {
            capi_err = _slsqp_error;
            PyErr_SetString(capi_err, capi_errmess);
        }
    } else {
        xu = (double *)(PyArray_DATA(capi_xu_as_array));

    /* Processing variable g */
    g_Dims[0]=1 + n;
    capi_g_intent |= F2PY_INTENT_IN;
    const char * capi_errmess = "_slsqp._slsqp.slsqp: failed to create array from the 8th argument `g`";
    capi_g_as_array = ndarray_from_pyobj(  NPY_DOUBLE,1,g_Dims,g_Rank,  capi_g_intent,g_capi,capi_errmess);
    if (capi_g_as_array == NULL) {
        PyObject* capi_err = PyErr_Occurred();
        if (capi_err == NULL) {
            capi_err = _slsqp_error;
            PyErr_SetString(capi_err, capi_errmess);
        }
    } else {
        g = (double *)(PyArray_DATA(capi_g_as_array));

    /* Processing variable a */
    a_Dims[0]=la,a_Dims[1]=1 + n;
    capi_a_intent |= F2PY_INTENT_IN;
    const char * capi_errmess = "_slsqp._slsqp.slsqp: failed to create array from the 9th argument `a`";
    capi_a_as_array = ndarray_from_pyobj(  NPY_DOUBLE,1,a_Dims,a_Rank,  capi_a_intent,a_capi,capi_errmess);
    if (capi_a_as_array == NULL) {
        PyObject* capi_err = PyErr_Occurred();
        if (capi_err == NULL) {
            capi_err = _slsqp_error;
            PyErr_SetString(capi_err, capi_errmess);
        }
    } else {
        a = (double *)(PyArray_DATA(capi_a_as_array));

    /* Processing variable l_w */
    if (l_w_capi == Py_None) l_w = len(w); else
        f2py_success = int_from_pyobj(&l_w,l_w_capi,"_slsqp.slsqp() 3rd keyword (l_w) can't be converted to int");
    if (f2py_success) {
    CHECKSCALAR(len(w)>=l_w,"len(w)>=l_w","3rd keyword l_w","slsqp:l_w=%d",l_w) {
    /* Processing variable l_jw */
    if (l_jw_capi == Py_None) l_jw = len(jw); else
        f2py_success = int_from_pyobj(&l_jw,l_jw_capi,"_slsqp.slsqp() 4th keyword (l_jw) can't be converted to int");
    if (f2py_success) {
    CHECKSCALAR(len(jw)>=l_jw,"len(jw)>=l_jw","4th keyword l_jw","slsqp:l_jw=%d",l_jw) {
/*end of frompyobj*/
#ifdef F2PY_REPORT_ATEXIT
f2py_start_call_clock();
#endif
/*callfortranroutine*/
                (*f2py_func)(&m,&meq,&la,&n,x,xl,xu,&f,c,g,a,&acc,&iter,&mode,w,&l_w,jw,&l_jw,&alpha,&f0,&gs,&h1,&h2,&h3,&h4,&t,&t0,&tol,&iexact,&incons,&ireset,&itermx,&line,&n1,&n2,&n3);
if (PyErr_Occurred())
  f2py_success = 0;
#ifdef F2PY_REPORT_ATEXIT
f2py_stop_call_clock();
#endif
/*end of callfortranroutine*/
        if (f2py_success) {
/*pyobjfrom*/
    f2py_success = try_pyarr_from_double(acc_capi,&acc);
    if (f2py_success) {
    f2py_success = try_pyarr_from_int(iter_capi,&iter);
    if (f2py_success) {
    f2py_success = try_pyarr_from_int(mode_capi,&mode);
    if (f2py_success) {
    f2py_success = try_pyarr_from_double(alpha_capi,&alpha);
    if (f2py_success) {
    f2py_success = try_pyarr_from_double(f0_capi,&f0);
    if (f2py_success) {
    f2py_success = try_pyarr_from_double(gs_capi,&gs);
    if (f2py_success) {
    f2py_success = try_pyarr_from_double(h1_capi,&h1);
    if (f2py_success) {
    f2py_success = try_pyarr_from_double(h2_capi,&h2);
    if (f2py_success) {
    f2py_success = try_pyarr_from_double(h3_capi,&h3);
    if (f2py_success) {
    f2py_success = try_pyarr_from_double(h4_capi,&h4);
    if (f2py_success) {
    f2py_success = try_pyarr_from_double(t_capi,&t);
    if (f2py_success) {
    f2py_success = try_pyarr_from_double(t0_capi,&t0);
    if (f2py_success) {
    f2py_success = try_pyarr_from_double(tol_capi,&tol);
    if (f2py_success) {
    f2py_success = try_pyarr_from_int(iexact_capi,&iexact);
    if (f2py_success) {
    f2py_success = try_pyarr_from_int(incons_capi,&incons);
    if (f2py_success) {
    f2py_success = try_pyarr_from_int(ireset_capi,&ireset);
    if (f2py_success) {
    f2py_success = try_pyarr_from_int(itermx_capi,&itermx);
    if (f2py_success) {
    f2py_success = try_pyarr_from_int(line_capi,&line);
    if (f2py_success) {
    f2py_success = try_pyarr_from_int(n1_capi,&n1);
    if (f2py_success) {
    f2py_success = try_pyarr_from_int(n2_capi,&n2);
    if (f2py_success) {
    f2py_success = try_pyarr_from_int(n3_capi,&n3);
    if (f2py_success) {
/*end of pyobjfrom*/
        CFUNCSMESS("Building return value.\n");
        capi_buildvalue = Py_BuildValue("");
/*closepyobjfrom*/
    } /*if (f2py_success) of n3 pyobjfrom*/
    } /*if (f2py_success) of n2 pyobjfrom*/
    } /*if (f2py_success) of n1 pyobjfrom*/
    } /*if (f2py_success) of line pyobjfrom*/
    } /*if (f2py_success) of itermx pyobjfrom*/
    } /*if (f2py_success) of ireset pyobjfrom*/
    } /*if (f2py_success) of incons pyobjfrom*/
    } /*if (f2py_success) of iexact pyobjfrom*/
    } /*if (f2py_success) of tol pyobjfrom*/
    } /*if (f2py_success) of t0 pyobjfrom*/
    } /*if (f2py_success) of t pyobjfrom*/
    } /*if (f2py_success) of h4 pyobjfrom*/
    } /*if (f2py_success) of h3 pyobjfrom*/
    } /*if (f2py_success) of h2 pyobjfrom*/
    } /*if (f2py_success) of h1 pyobjfrom*/
    } /*if (f2py_success) of gs pyobjfrom*/
    } /*if (f2py_success) of f0 pyobjfrom*/
    } /*if (f2py_success) of alpha pyobjfrom*/
    } /*if (f2py_success) of mode pyobjfrom*/
    } /*if (f2py_success) of iter pyobjfrom*/
    } /*if (f2py_success) of acc pyobjfrom*/
/*end of closepyobjfrom*/
        } /*if (f2py_success) after callfortranroutine*/
/*cleanupfrompyobj*/
    } /*CHECKSCALAR(len(jw)>=l_jw)*/
    } /*if (f2py_success) of l_jw*/
    /* End of cleaning variable l_jw */
    } /*CHECKSCALAR(len(w)>=l_w)*/
    } /*if (f2py_success) of l_w*/
    /* End of cleaning variable l_w */
    if((PyObject *)capi_a_as_array!=a_capi) {
        Py_XDECREF(capi_a_as_array); }
    }  /* if (capi_a_as_array == NULL) ... else of a */
    /* End of cleaning variable a */
    if((PyObject *)capi_g_as_array!=g_capi) {
        Py_XDECREF(capi_g_as_array); }
    }  /* if (capi_g_as_array == NULL) ... else of g */
    /* End of cleaning variable g */
    if((PyObject *)capi_xu_as_array!=xu_capi) {
        Py_XDECREF(capi_xu_as_array); }
    }  /* if (capi_xu_as_array == NULL) ... else of xu */
    /* End of cleaning variable xu */
    if((PyObject *)capi_xl_as_array!=xl_capi) {
        Py_XDECREF(capi_xl_as_array); }
    }  /* if (capi_xl_as_array == NULL) ... else of xl */
    /* End of cleaning variable xl */
    } /*CHECKSCALAR(len(x)>=n)*/
    } /*if (f2py_success) of n*/
    /* End of cleaning variable n */
    } /*CHECKSCALAR(len(c)>=la)*/
    } /*if (f2py_success) of la*/
    /* End of cleaning variable la */
    } /*if (f2py_success) of n3*/
    /* End of cleaning variable n3 */
    } /*if (f2py_success) of n2*/
    /* End of cleaning variable n2 */
    } /*if (f2py_success) of n1*/
    /* End of cleaning variable n1 */
    } /*if (f2py_success) of line*/
    /* End of cleaning variable line */
    } /*if (f2py_success) of itermx*/
    /* End of cleaning variable itermx */
    } /*if (f2py_success) of ireset*/
    /* End of cleaning variable ireset */
    } /*if (f2py_success) of incons*/
    /* End of cleaning variable incons */
    } /*if (f2py_success) of iexact*/
    /* End of cleaning variable iexact */
    } /*if (f2py_success) of tol*/
    /* End of cleaning variable tol */
    } /*if (f2py_success) of t0*/
    /* End of cleaning variable t0 */
    } /*if (f2py_success) of t*/
    /* End of cleaning variable t */
    } /*if (f2py_success) of h4*/
    /* End of cleaning variable h4 */
    } /*if (f2py_success) of h3*/
    /* End of cleaning variable h3 */
    } /*if (f2py_success) of h2*/
    /* End of cleaning variable h2 */
    } /*if (f2py_success) of h1*/
    /* End of cleaning variable h1 */
    } /*if (f2py_success) of gs*/
    /* End of cleaning variable gs */
    } /*if (f2py_success) of f0*/
    /* End of cleaning variable f0 */
    } /*if (f2py_success) of alpha*/
    /* End of cleaning variable alpha */
    if((PyObject *)capi_jw_as_array!=jw_capi) {
        Py_XDECREF(capi_jw_as_array); }
    }  /* if (capi_jw_as_array == NULL) ... else of jw */
    /* End of cleaning variable jw */
    if((PyObject *)capi_w_as_array!=w_capi) {
        Py_XDECREF(capi_w_as_array); }
    }  /* if (capi_w_as_array == NULL) ... else of w */
    /* End of cleaning variable w */
    } /*if (f2py_success) of mode*/
    /* End of cleaning variable mode */
    } /*if (f2py_success) of iter*/
    /* End of cleaning variable iter */
    } /*if (f2py_success) of acc*/
    /* End of cleaning variable acc */
    if((PyObject *)capi_c_as_array!=c_capi) {
        Py_XDECREF(capi_c_as_array); }
    }  /* if (capi_c_as_array == NULL) ... else of c */
    /* End of cleaning variable c */
    } /*if (f2py_success) of f*/
    /* End of cleaning variable f */
    if((PyObject *)capi_x_as_array!=x_capi) {
        Py_XDECREF(capi_x_as_array); }
    }  /* if (capi_x_as_array == NULL) ... else of x */
    /* End of cleaning variable x */
    } /*if (f2py_success) of meq*/
    /* End of cleaning variable meq */
    } /*if (f2py_success) of m*/
    /* End of cleaning variable m */
/*end of cleanupfrompyobj*/
    if (capi_buildvalue == NULL) {
/*routdebugfailure*/
    } else {
/*routdebugleave*/
    }
    CFUNCSMESS("Freeing memory.\n");
/*freemem*/
#ifdef F2PY_REPORT_ATEXIT
f2py_stop_clock();
#endif
    return capi_buildvalue;
}
/******************************** end of slsqp ********************************/
/*eof body*/

/******************* See f2py2e/f90mod_rules.py: buildhooks *******************/
/*need_f90modhooks*/

/************** See f2py2e/rules.py: module_rules['modulebody'] **************/

/******************* See f2py2e/common_rules.py: buildhooks *******************/

/*need_commonhooks*/

/**************************** See f2py2e/rules.py ****************************/

static FortranDataDef f2py_routine_defs[] = {
    {"slsqp",-1,{{-1}},0,0,(char *)  F_FUNC(slsqp,SLSQP),  (f2py_init_func)f2py_rout__slsqp_slsqp,doc_f2py_rout__slsqp_slsqp},

/*eof routine_defs*/
    {NULL}
};

static PyMethodDef f2py_module_methods[] = {

    {NULL,NULL}
};

static struct PyModuleDef moduledef = {
    PyModuleDef_HEAD_INIT,
    "_slsqp",
    NULL,
    -1,
    f2py_module_methods,
    NULL,
    NULL,
    NULL,
    NULL
};

PyMODINIT_FUNC PyInit__slsqp(void) {
    int i;
    PyObject *m,*d, *s, *tmp;
    m = _slsqp_module = PyModule_Create(&moduledef);
    Py_SET_TYPE(&PyFortran_Type, &PyType_Type);
    import_array();
    if (PyErr_Occurred())
        {PyErr_SetString(PyExc_ImportError, "can't initialize module _slsqp (failed to import numpy)"); return m;}
    d = PyModule_GetDict(m);
    s = PyUnicode_FromString("1.26.3");
    PyDict_SetItemString(d, "__version__", s);
    Py_DECREF(s);
    s = PyUnicode_FromString(
        "This module '_slsqp' is auto-generated with f2py (version:1.26.3).\nFunctions:\n"
"    slsqp(m,meq,x,xl,xu,f,c,g,a,acc,iter,mode,w,jw,alpha,f0,gs,h1,h2,h3,h4,t,t0,tol,iexact,incons,ireset,itermx,line,n1,n2,n3,la=len(c),n=len(x),l_w=len(w),l_jw=len(jw))\n"
".");
    PyDict_SetItemString(d, "__doc__", s);
    Py_DECREF(s);
    s = PyUnicode_FromString("1.26.3");
    PyDict_SetItemString(d, "__f2py_numpy_version__", s);
    Py_DECREF(s);
    _slsqp_error = PyErr_NewException ("_slsqp.error", NULL, NULL);
    /*
     * Store the error object inside the dict, so that it could get deallocated.
     * (in practice, this is a module, so it likely will not and cannot.)
     */
    PyDict_SetItemString(d, "__slsqp_error", _slsqp_error);
    Py_DECREF(_slsqp_error);
    for(i=0;f2py_routine_defs[i].name!=NULL;i++) {
        tmp = PyFortranObject_NewAsAttr(&f2py_routine_defs[i]);
        PyDict_SetItemString(d, f2py_routine_defs[i].name, tmp);
        Py_DECREF(tmp);
    }

/*eof initf2pywraphooks*/
/*eof initf90modhooks*/

/*eof initcommonhooks*/


#ifdef F2PY_REPORT_ATEXIT
    if (! PyErr_Occurred())
        on_exit(f2py_report_on_exit,(void*)"_slsqp");
#endif
    return m;
}
#ifdef __cplusplus
}
#endif
