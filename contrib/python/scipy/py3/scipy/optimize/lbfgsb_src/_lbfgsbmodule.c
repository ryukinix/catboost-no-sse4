/* File: _lbfgsbmodule.c
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
#include <string.h>
#include <math.h>

/**************** See f2py2e/rules.py: mod_rules['modulebody'] ****************/
static PyObject *_lbfgsb_error;
static PyObject *_lbfgsb_module;

/*********************** See f2py2e/cfuncs.py: typedefs ***********************/
typedef char * string;

/****************** See f2py2e/cfuncs.py: typedefs_generated ******************/
/*need_typedefs_generated*/

/********************** See f2py2e/cfuncs.py: cppmacros **********************/

#define STRINGMALLOC(str,len)\
    if ((str = (string)malloc(len+1)) == NULL) {\
        PyErr_SetString(PyExc_MemoryError, "out of memory");\
        goto capi_fail;\
    } else {\
        (str)[len] = '\0';\
    }

#define FAILNULL(p) do {                                            \
    if ((p) == NULL) {                                              \
        PyErr_SetString(PyExc_MemoryError, "NULL pointer found");   \
        goto capi_fail;                                             \
    }                                                               \
} while (0)


#define PRINTPYOBJERR(obj)\
    fprintf(stderr,"_lbfgsb.error is related to ");\
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


/*
STRINGPADN replaces null values with padding values from the right.

`to` must have size of at least N bytes.

If the `to[N-1]` has null value, then replace it and all the
preceding, nulls with the given padding.

STRINGPADN(to, N, PADDING, NULLVALUE) is an inverse operation.
*/
#define STRINGPADN(to, N, NULLVALUE, PADDING)                   \
    do {                                                        \
        int _m = (N);                                           \
        char *_to = (to);                                       \
        for (_m -= 1; _m >= 0 && _to[_m] == NULLVALUE; _m--) {  \
             _to[_m] = PADDING;                                 \
        }                                                       \
    } while (0)


#define STRINGFREE(str) do {if (!(str == NULL)) free(str);} while (0)


#define CHECKSCALAR(check,tcheck,name,show,var)\
    if (!(check)) {\
        char errstring[256];\
        sprintf(errstring, "%s: "show, "("tcheck") failed for "name, var);\
        PyErr_SetString(_lbfgsb_error,errstring);\
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


/*
STRINGCOPYN copies N bytes.

`to` and `from` buffers must have sizes of at least N bytes.
*/
#define STRINGCOPYN(to,from,N)                                  \
    do {                                                        \
        int _m = (N);                                           \
        char *_to = (to);                                       \
        char *_from = (from);                                   \
        FAILNULL(_to); FAILNULL(_from);                         \
        (void)strncpy(_to, _from, _m);             \
    } while (0)


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


/*
  try_pyarr_from_string copies str[:len(obj)] to the data of an `ndarray`.

  If obj is an `ndarray`, it is assumed to be contiguous.

  If the specified len==-1, str must be null-terminated.
*/
static int try_pyarr_from_string(PyObject *obj,
                                 const string str, const int len) {
#ifdef DEBUGCFUNCS
fprintf(stderr, "try_pyarr_from_string(str='%s', len=%d, obj=%p)\n",
        (char*)str,len, obj);
#endif
    if (!obj) return -2; /* Object missing */
    if (obj == Py_None) return -1; /* None */
    if (!PyArray_Check(obj)) goto capi_fail; /* not an ndarray */
    if (PyArray_Check(obj)) {
        PyArrayObject *arr = (PyArrayObject *)obj;
        assert(ISCONTIGUOUS(arr));
        string buf = PyArray_DATA(arr);
        npy_intp n = len;
        if (n == -1) {
            /* Assuming null-terminated str. */
            n = strlen(str);
        }
        if (n > PyArray_NBYTES(arr)) {
            n = PyArray_NBYTES(arr);
        }
        STRINGCOPYN(buf, str, n);
        return 1;
    }
capi_fail:
    PRINTPYOBJERR(obj);
    PyErr_SetString(_lbfgsb_error, "try_pyarr_from_string failed");
    return 0;
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
            err = _lbfgsb_error;
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
        if (err==NULL) err = _lbfgsb_error;
        PyErr_SetString(err,errmess);
    }
    return 0;
}


/*
  Create a new string buffer `str` of at most length `len` from a
  Python string-like object `obj`.

  The string buffer has given size (len) or the size of inistr when len==-1.

  The string buffer is padded with blanks: in Fortran, trailing blanks
  are insignificant contrary to C nulls.
 */
static int
string_from_pyobj(string *str, int *len, const string inistr, PyObject *obj,
                  const char *errmess)
{
    PyObject *tmp = NULL;
    string buf = NULL;
    npy_intp n = -1;
#ifdef DEBUGCFUNCS
fprintf(stderr,"string_from_pyobj(str='%s',len=%d,inistr='%s',obj=%p)\n",
               (char*)str, *len, (char *)inistr, obj);
#endif
    if (obj == Py_None) {
        n = strlen(inistr);
        buf = inistr;
    }
    else if (PyArray_Check(obj)) {
        PyArrayObject *arr = (PyArrayObject *)obj;
        if (!ISCONTIGUOUS(arr)) {
            PyErr_SetString(PyExc_ValueError,
                            "array object is non-contiguous.");
            goto capi_fail;
        }
        n = PyArray_NBYTES(arr);
        buf = PyArray_DATA(arr);
        n = strnlen(buf, n);
    }
    else {
        if (PyBytes_Check(obj)) {
            tmp = obj;
            Py_INCREF(tmp);
        }
        else if (PyUnicode_Check(obj)) {
            tmp = PyUnicode_AsASCIIString(obj);
        }
        else {
            PyObject *tmp2;
            tmp2 = PyObject_Str(obj);
            if (tmp2) {
                tmp = PyUnicode_AsASCIIString(tmp2);
                Py_DECREF(tmp2);
            }
            else {
                tmp = NULL;
            }
        }
        if (tmp == NULL) goto capi_fail;
        n = PyBytes_GET_SIZE(tmp);
        buf = PyBytes_AS_STRING(tmp);
    }
    if (*len == -1) {
        /* TODO: change the type of `len` so that we can remove this */
        if (n > NPY_MAX_INT) {
            PyErr_SetString(PyExc_OverflowError,
                            "object too large for a 32-bit int");
            goto capi_fail;
        }
        *len = n;
    }
    else if (*len < n) {
        /* discard the last (len-n) bytes of input buf */
        n = *len;
    }
    if (n < 0 || *len < 0 || buf == NULL) {
        goto capi_fail;
    }
    STRINGMALLOC(*str, *len);  // *str is allocated with size (*len + 1)
    if (n < *len) {
        /*
          Pad fixed-width string with nulls. The caller will replace
          nulls with blanks when the corresponding argument is not
          intent(c).
        */
        memset(*str + n, '\0', *len - n);
    }
    STRINGCOPYN(*str, buf, n);
    Py_XDECREF(tmp);
    return 1;
capi_fail:
    Py_XDECREF(tmp);
    {
        PyObject* err = PyErr_Occurred();
        if (err == NULL) {
            err = _lbfgsb_error;
        }
        PyErr_SetString(err, errmess);
    }
    return 0;
}


/********************* See f2py2e/cfuncs.py: userincludes *********************/
/*need_userincludes*/

/********************* See f2py2e/capi_rules.py: usercode *********************/


/* See f2py2e/rules.py */
extern void F_FUNC(setulb,SETULB)(int*,int*,double*,double*,double*,int*,double*,double*,double*,double*,double*,int*,string,int*,string,int*,int*,double*,int*,size_t,size_t);
/*eof externroutines*/

/******************** See f2py2e/capi_rules.py: usercode1 ********************/


/******************* See f2py2e/cb_rules.py: buildcallback *******************/
/*need_callbacks*/

/*********************** See f2py2e/rules.py: buildapi ***********************/

/*********************************** setulb ***********************************/
static char doc_f2py_rout__lbfgsb_setulb[] = "\
setulb(m,x,l,u,nbd,f,g,factr,pgtol,wa,iwa,task,iprint,csave,lsave,isave,dsave,maxls,[n])\n\nWrapper for ``setulb``.\
\n\nParameters\n----------\n"
"m : input int\n"
"x : in/output rank-1 array('d') with bounds (n)\n"
"l : input rank-1 array('d') with bounds (n)\n"
"u : input rank-1 array('d') with bounds (n)\n"
"nbd : input rank-1 array('i') with bounds (n)\n"
"f : in/output rank-0 array(float,'d')\n"
"g : in/output rank-1 array('d') with bounds (n)\n"
"factr : input float\n"
"pgtol : input float\n"
"wa : in/output rank-1 array('d') with bounds (8 * m + 5 * n + 2 * m * n + 11 * m * m)\n"
"iwa : in/output rank-1 array('i') with bounds (3 * n)\n"
"task : in/output rank-0 array(string(len=60),'c')\n"
"iprint : input int\n"
"csave : in/output rank-0 array(string(len=60),'c')\n"
"lsave : in/output rank-1 array('i') with bounds (4)\n"
"isave : in/output rank-1 array('i') with bounds (44)\n"
"dsave : in/output rank-1 array('d') with bounds (29)\n"
"maxls : input int\n"
"\nOther Parameters\n----------------\n"
"n : input int, optional\n    Default: len(x)";
/* extern void F_FUNC(setulb,SETULB)(int*,int*,double*,double*,double*,int*,double*,double*,double*,double*,double*,int*,string,int*,string,int*,int*,double*,int*,size_t,size_t); */
static PyObject *f2py_rout__lbfgsb_setulb(const PyObject *capi_self,
                           PyObject *capi_args,
                           PyObject *capi_keywds,
                           void (*f2py_func)(int*,int*,double*,double*,double*,int*,double*,double*,double*,double*,double*,int*,string,int*,string,int*,int*,double*,int*,size_t,size_t)) {
    PyObject * volatile capi_buildvalue = NULL;
    volatile int f2py_success = 1;
/*decl*/

    int n = 0;
    PyObject *n_capi = Py_None;
    int m = 0;
    PyObject *m_capi = Py_None;
    double *x = NULL;
    npy_intp x_Dims[1] = {-1};
    const int x_Rank = 1;
    PyArrayObject *capi_x_as_array = NULL;
    int capi_x_intent = 0;
    PyObject *x_capi = Py_None;
    double *l = NULL;
    npy_intp l_Dims[1] = {-1};
    const int l_Rank = 1;
    PyArrayObject *capi_l_as_array = NULL;
    int capi_l_intent = 0;
    PyObject *l_capi = Py_None;
    double *u = NULL;
    npy_intp u_Dims[1] = {-1};
    const int u_Rank = 1;
    PyArrayObject *capi_u_as_array = NULL;
    int capi_u_intent = 0;
    PyObject *u_capi = Py_None;
    int *nbd = NULL;
    npy_intp nbd_Dims[1] = {-1};
    const int nbd_Rank = 1;
    PyArrayObject *capi_nbd_as_array = NULL;
    int capi_nbd_intent = 0;
    PyObject *nbd_capi = Py_None;
    double f = 0;
    PyObject *f_capi = Py_None;
    double *g = NULL;
    npy_intp g_Dims[1] = {-1};
    const int g_Rank = 1;
    PyArrayObject *capi_g_as_array = NULL;
    int capi_g_intent = 0;
    PyObject *g_capi = Py_None;
    double factr = 0;
    PyObject *factr_capi = Py_None;
    double pgtol = 0;
    PyObject *pgtol_capi = Py_None;
    double *wa = NULL;
    npy_intp wa_Dims[1] = {-1};
    const int wa_Rank = 1;
    PyArrayObject *capi_wa_as_array = NULL;
    int capi_wa_intent = 0;
    PyObject *wa_capi = Py_None;
    int *iwa = NULL;
    npy_intp iwa_Dims[1] = {-1};
    const int iwa_Rank = 1;
    PyArrayObject *capi_iwa_as_array = NULL;
    int capi_iwa_intent = 0;
    PyObject *iwa_capi = Py_None;
    string task = NULL;
    int slen(task);
    PyObject *task_capi = Py_None;
    int iprint = 0;
    PyObject *iprint_capi = Py_None;
    string csave = NULL;
    int slen(csave);
    PyObject *csave_capi = Py_None;
    int *lsave = NULL;
    npy_intp lsave_Dims[1] = {-1};
    const int lsave_Rank = 1;
    PyArrayObject *capi_lsave_as_array = NULL;
    int capi_lsave_intent = 0;
    PyObject *lsave_capi = Py_None;
    int *isave = NULL;
    npy_intp isave_Dims[1] = {-1};
    const int isave_Rank = 1;
    PyArrayObject *capi_isave_as_array = NULL;
    int capi_isave_intent = 0;
    PyObject *isave_capi = Py_None;
    double *dsave = NULL;
    npy_intp dsave_Dims[1] = {-1};
    const int dsave_Rank = 1;
    PyArrayObject *capi_dsave_as_array = NULL;
    int capi_dsave_intent = 0;
    PyObject *dsave_capi = Py_None;
    int maxls = 0;
    PyObject *maxls_capi = Py_None;
    static char *capi_kwlist[] = {"m","x","l","u","nbd","f","g","factr","pgtol","wa","iwa","task","iprint","csave","lsave","isave","dsave","maxls","n",NULL};

/*routdebugenter*/
#ifdef F2PY_REPORT_ATEXIT
f2py_start_clock();
#endif
    if (!PyArg_ParseTupleAndKeywords(capi_args,capi_keywds,\
        "OOOOOOOOOOOOOOOOOO|O:_lbfgsb.setulb",\
        capi_kwlist,&m_capi,&x_capi,&l_capi,&u_capi,&nbd_capi,&f_capi,&g_capi,&factr_capi,&pgtol_capi,&wa_capi,&iwa_capi,&task_capi,&iprint_capi,&csave_capi,&lsave_capi,&isave_capi,&dsave_capi,&maxls_capi,&n_capi))
        return NULL;
/*frompyobj*/
    /* Processing variable m */
        f2py_success = int_from_pyobj(&m,m_capi,"_lbfgsb.setulb() 1st argument (m) can't be converted to int");
    if (f2py_success) {
    /* Processing variable x */
    ;
    capi_x_intent |= F2PY_INTENT_INOUT;
    const char * capi_errmess = "_lbfgsb._lbfgsb.setulb: failed to create array from the 2nd argument `x`";
    capi_x_as_array = ndarray_from_pyobj(  NPY_DOUBLE,1,x_Dims,x_Rank,  capi_x_intent,x_capi,capi_errmess);
    if (capi_x_as_array == NULL) {
        PyObject* capi_err = PyErr_Occurred();
        if (capi_err == NULL) {
            capi_err = _lbfgsb_error;
            PyErr_SetString(capi_err, capi_errmess);
        }
    } else {
        x = (double *)(PyArray_DATA(capi_x_as_array));

    /* Processing variable f */
        f2py_success = double_from_pyobj(&f,f_capi,"_lbfgsb.setulb() 6th argument (f) can't be converted to double");
    if (f2py_success) {
    /* Processing variable factr */
        f2py_success = double_from_pyobj(&factr,factr_capi,"_lbfgsb.setulb() 8th argument (factr) can't be converted to double");
    if (f2py_success) {
    /* Processing variable pgtol */
        f2py_success = double_from_pyobj(&pgtol,pgtol_capi,"_lbfgsb.setulb() 9th argument (pgtol) can't be converted to double");
    if (f2py_success) {
    /* Processing variable task */
    slen(task) = 60;
    f2py_success = string_from_pyobj(&task,&slen(task),"",task_capi,"string_from_pyobj failed in converting 12nd argument`task' of _lbfgsb.setulb to C string");
    if (f2py_success) {
        STRINGPADN(task, slen(task), '\0', ' ');
    /* Processing variable iprint */
        f2py_success = int_from_pyobj(&iprint,iprint_capi,"_lbfgsb.setulb() 13rd argument (iprint) can't be converted to int");
    if (f2py_success) {
    /* Processing variable csave */
    slen(csave) = 60;
    f2py_success = string_from_pyobj(&csave,&slen(csave),"",csave_capi,"string_from_pyobj failed in converting 14th argument`csave' of _lbfgsb.setulb to C string");
    if (f2py_success) {
        STRINGPADN(csave, slen(csave), '\0', ' ');
    /* Processing variable lsave */
    lsave_Dims[0]=4;
    capi_lsave_intent |= F2PY_INTENT_INOUT;
    const char * capi_errmess = "_lbfgsb._lbfgsb.setulb: failed to create array from the 15th argument `lsave`";
    capi_lsave_as_array = ndarray_from_pyobj(  NPY_INT,1,lsave_Dims,lsave_Rank,  capi_lsave_intent,lsave_capi,capi_errmess);
    if (capi_lsave_as_array == NULL) {
        PyObject* capi_err = PyErr_Occurred();
        if (capi_err == NULL) {
            capi_err = _lbfgsb_error;
            PyErr_SetString(capi_err, capi_errmess);
        }
    } else {
        lsave = (int *)(PyArray_DATA(capi_lsave_as_array));

    /* Processing variable isave */
    isave_Dims[0]=44;
    capi_isave_intent |= F2PY_INTENT_INOUT;
    const char * capi_errmess = "_lbfgsb._lbfgsb.setulb: failed to create array from the 16th argument `isave`";
    capi_isave_as_array = ndarray_from_pyobj(  NPY_INT,1,isave_Dims,isave_Rank,  capi_isave_intent,isave_capi,capi_errmess);
    if (capi_isave_as_array == NULL) {
        PyObject* capi_err = PyErr_Occurred();
        if (capi_err == NULL) {
            capi_err = _lbfgsb_error;
            PyErr_SetString(capi_err, capi_errmess);
        }
    } else {
        isave = (int *)(PyArray_DATA(capi_isave_as_array));

    /* Processing variable dsave */
    dsave_Dims[0]=29;
    capi_dsave_intent |= F2PY_INTENT_INOUT;
    const char * capi_errmess = "_lbfgsb._lbfgsb.setulb: failed to create array from the 17th argument `dsave`";
    capi_dsave_as_array = ndarray_from_pyobj(  NPY_DOUBLE,1,dsave_Dims,dsave_Rank,  capi_dsave_intent,dsave_capi,capi_errmess);
    if (capi_dsave_as_array == NULL) {
        PyObject* capi_err = PyErr_Occurred();
        if (capi_err == NULL) {
            capi_err = _lbfgsb_error;
            PyErr_SetString(capi_err, capi_errmess);
        }
    } else {
        dsave = (double *)(PyArray_DATA(capi_dsave_as_array));

    /* Processing variable maxls */
        f2py_success = int_from_pyobj(&maxls,maxls_capi,"_lbfgsb.setulb() 18th argument (maxls) can't be converted to int");
    if (f2py_success) {
    /* Processing variable n */
    if (n_capi == Py_None) n = len(x); else
        f2py_success = int_from_pyobj(&n,n_capi,"_lbfgsb.setulb() 1st keyword (n) can't be converted to int");
    if (f2py_success) {
    CHECKSCALAR(len(x)>=n,"len(x)>=n","1st keyword n","setulb:n=%d",n) {
    /* Processing variable l */
    l_Dims[0]=n;
    capi_l_intent |= F2PY_INTENT_IN;
    const char * capi_errmess = "_lbfgsb._lbfgsb.setulb: failed to create array from the 3rd argument `l`";
    capi_l_as_array = ndarray_from_pyobj(  NPY_DOUBLE,1,l_Dims,l_Rank,  capi_l_intent,l_capi,capi_errmess);
    if (capi_l_as_array == NULL) {
        PyObject* capi_err = PyErr_Occurred();
        if (capi_err == NULL) {
            capi_err = _lbfgsb_error;
            PyErr_SetString(capi_err, capi_errmess);
        }
    } else {
        l = (double *)(PyArray_DATA(capi_l_as_array));

    /* Processing variable u */
    u_Dims[0]=n;
    capi_u_intent |= F2PY_INTENT_IN;
    const char * capi_errmess = "_lbfgsb._lbfgsb.setulb: failed to create array from the 4th argument `u`";
    capi_u_as_array = ndarray_from_pyobj(  NPY_DOUBLE,1,u_Dims,u_Rank,  capi_u_intent,u_capi,capi_errmess);
    if (capi_u_as_array == NULL) {
        PyObject* capi_err = PyErr_Occurred();
        if (capi_err == NULL) {
            capi_err = _lbfgsb_error;
            PyErr_SetString(capi_err, capi_errmess);
        }
    } else {
        u = (double *)(PyArray_DATA(capi_u_as_array));

    /* Processing variable nbd */
    nbd_Dims[0]=n;
    capi_nbd_intent |= F2PY_INTENT_IN;
    const char * capi_errmess = "_lbfgsb._lbfgsb.setulb: failed to create array from the 5th argument `nbd`";
    capi_nbd_as_array = ndarray_from_pyobj(  NPY_INT,1,nbd_Dims,nbd_Rank,  capi_nbd_intent,nbd_capi,capi_errmess);
    if (capi_nbd_as_array == NULL) {
        PyObject* capi_err = PyErr_Occurred();
        if (capi_err == NULL) {
            capi_err = _lbfgsb_error;
            PyErr_SetString(capi_err, capi_errmess);
        }
    } else {
        nbd = (int *)(PyArray_DATA(capi_nbd_as_array));

    /* Processing variable g */
    g_Dims[0]=n;
    capi_g_intent |= F2PY_INTENT_INOUT;
    const char * capi_errmess = "_lbfgsb._lbfgsb.setulb: failed to create array from the 7th argument `g`";
    capi_g_as_array = ndarray_from_pyobj(  NPY_DOUBLE,1,g_Dims,g_Rank,  capi_g_intent,g_capi,capi_errmess);
    if (capi_g_as_array == NULL) {
        PyObject* capi_err = PyErr_Occurred();
        if (capi_err == NULL) {
            capi_err = _lbfgsb_error;
            PyErr_SetString(capi_err, capi_errmess);
        }
    } else {
        g = (double *)(PyArray_DATA(capi_g_as_array));

    /* Processing variable wa */
    wa_Dims[0]=8 * m + 5 * n + 2 * m * n + 11 * m * m;
    capi_wa_intent |= F2PY_INTENT_INOUT;
    const char * capi_errmess = "_lbfgsb._lbfgsb.setulb: failed to create array from the 10th argument `wa`";
    capi_wa_as_array = ndarray_from_pyobj(  NPY_DOUBLE,1,wa_Dims,wa_Rank,  capi_wa_intent,wa_capi,capi_errmess);
    if (capi_wa_as_array == NULL) {
        PyObject* capi_err = PyErr_Occurred();
        if (capi_err == NULL) {
            capi_err = _lbfgsb_error;
            PyErr_SetString(capi_err, capi_errmess);
        }
    } else {
        wa = (double *)(PyArray_DATA(capi_wa_as_array));

    /* Processing variable iwa */
    iwa_Dims[0]=3 * n;
    capi_iwa_intent |= F2PY_INTENT_INOUT;
    const char * capi_errmess = "_lbfgsb._lbfgsb.setulb: failed to create array from the 11st argument `iwa`";
    capi_iwa_as_array = ndarray_from_pyobj(  NPY_INT,1,iwa_Dims,iwa_Rank,  capi_iwa_intent,iwa_capi,capi_errmess);
    if (capi_iwa_as_array == NULL) {
        PyObject* capi_err = PyErr_Occurred();
        if (capi_err == NULL) {
            capi_err = _lbfgsb_error;
            PyErr_SetString(capi_err, capi_errmess);
        }
    } else {
        iwa = (int *)(PyArray_DATA(capi_iwa_as_array));

/*end of frompyobj*/
#ifdef F2PY_REPORT_ATEXIT
f2py_start_call_clock();
#endif
/*callfortranroutine*/
                (*f2py_func)(&n,&m,x,l,u,nbd,&f,g,&factr,&pgtol,wa,iwa,task,&iprint,csave,lsave,isave,dsave,&maxls,slen(task),slen(csave));
if (PyErr_Occurred())
  f2py_success = 0;
#ifdef F2PY_REPORT_ATEXIT
f2py_stop_call_clock();
#endif
/*end of callfortranroutine*/
        if (f2py_success) {
/*pyobjfrom*/
    f2py_success = try_pyarr_from_double(f_capi,&f);
    if (f2py_success) {
        STRINGPADN(task, slen(task), ' ', '\0');
    f2py_success = try_pyarr_from_string(task_capi, task,
                                          slen(task));
    if (f2py_success) {
        STRINGPADN(csave, slen(csave), ' ', '\0');
    f2py_success = try_pyarr_from_string(csave_capi, csave,
                                          slen(csave));
    if (f2py_success) {
/*end of pyobjfrom*/
        CFUNCSMESS("Building return value.\n");
        capi_buildvalue = Py_BuildValue("");
/*closepyobjfrom*/
    } /*if (f2py_success) of csave pyobjfrom*/
    } /*if (f2py_success) of task pyobjfrom*/
    } /*if (f2py_success) of f pyobjfrom*/
/*end of closepyobjfrom*/
        } /*if (f2py_success) after callfortranroutine*/
/*cleanupfrompyobj*/
    if((PyObject *)capi_iwa_as_array!=iwa_capi) {
        Py_XDECREF(capi_iwa_as_array); }
    }  /* if (capi_iwa_as_array == NULL) ... else of iwa */
    /* End of cleaning variable iwa */
    if((PyObject *)capi_wa_as_array!=wa_capi) {
        Py_XDECREF(capi_wa_as_array); }
    }  /* if (capi_wa_as_array == NULL) ... else of wa */
    /* End of cleaning variable wa */
    if((PyObject *)capi_g_as_array!=g_capi) {
        Py_XDECREF(capi_g_as_array); }
    }  /* if (capi_g_as_array == NULL) ... else of g */
    /* End of cleaning variable g */
    if((PyObject *)capi_nbd_as_array!=nbd_capi) {
        Py_XDECREF(capi_nbd_as_array); }
    }  /* if (capi_nbd_as_array == NULL) ... else of nbd */
    /* End of cleaning variable nbd */
    if((PyObject *)capi_u_as_array!=u_capi) {
        Py_XDECREF(capi_u_as_array); }
    }  /* if (capi_u_as_array == NULL) ... else of u */
    /* End of cleaning variable u */
    if((PyObject *)capi_l_as_array!=l_capi) {
        Py_XDECREF(capi_l_as_array); }
    }  /* if (capi_l_as_array == NULL) ... else of l */
    /* End of cleaning variable l */
    } /*CHECKSCALAR(len(x)>=n)*/
    } /*if (f2py_success) of n*/
    /* End of cleaning variable n */
    } /*if (f2py_success) of maxls*/
    /* End of cleaning variable maxls */
    if((PyObject *)capi_dsave_as_array!=dsave_capi) {
        Py_XDECREF(capi_dsave_as_array); }
    }  /* if (capi_dsave_as_array == NULL) ... else of dsave */
    /* End of cleaning variable dsave */
    if((PyObject *)capi_isave_as_array!=isave_capi) {
        Py_XDECREF(capi_isave_as_array); }
    }  /* if (capi_isave_as_array == NULL) ... else of isave */
    /* End of cleaning variable isave */
    if((PyObject *)capi_lsave_as_array!=lsave_capi) {
        Py_XDECREF(capi_lsave_as_array); }
    }  /* if (capi_lsave_as_array == NULL) ... else of lsave */
    /* End of cleaning variable lsave */
        STRINGFREE(csave);
    }  /*if (f2py_success) of csave*/
    /* End of cleaning variable csave */
    } /*if (f2py_success) of iprint*/
    /* End of cleaning variable iprint */
        STRINGFREE(task);
    }  /*if (f2py_success) of task*/
    /* End of cleaning variable task */
    } /*if (f2py_success) of pgtol*/
    /* End of cleaning variable pgtol */
    } /*if (f2py_success) of factr*/
    /* End of cleaning variable factr */
    } /*if (f2py_success) of f*/
    /* End of cleaning variable f */
    if((PyObject *)capi_x_as_array!=x_capi) {
        Py_XDECREF(capi_x_as_array); }
    }  /* if (capi_x_as_array == NULL) ... else of x */
    /* End of cleaning variable x */
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
/******************************* end of setulb *******************************/
/*eof body*/

/******************* See f2py2e/f90mod_rules.py: buildhooks *******************/
/*need_f90modhooks*/

/************** See f2py2e/rules.py: module_rules['modulebody'] **************/

/******************* See f2py2e/common_rules.py: buildhooks *******************/

static FortranDataDef f2py_types_def[] = {
  {"intvar",0,{{-1}},NPY_INT, 1},
  {NULL}
};
static void f2py_setup_types(char *intvar) {
  int i_f2py=0;
  f2py_types_def[i_f2py++].data = intvar;
}
extern void F_FUNC(f2pyinittypes,F2PYINITTYPES)(void(*)(char*));
static void f2py_init_types(void) {
  F_FUNC(f2pyinittypes,F2PYINITTYPES)(f2py_setup_types);
}

/*need_commonhooks*/

/**************************** See f2py2e/rules.py ****************************/

static FortranDataDef f2py_routine_defs[] = {
    {"setulb",-1,{{-1}},0,0,(char *)  F_FUNC(setulb,SETULB),  (f2py_init_func)f2py_rout__lbfgsb_setulb,doc_f2py_rout__lbfgsb_setulb},

/*eof routine_defs*/
    {NULL}
};

static PyMethodDef f2py_module_methods[] = {

    {NULL,NULL}
};

static struct PyModuleDef moduledef = {
    PyModuleDef_HEAD_INIT,
    "_lbfgsb",
    NULL,
    -1,
    f2py_module_methods,
    NULL,
    NULL,
    NULL,
    NULL
};

PyMODINIT_FUNC PyInit__lbfgsb(void) {
    int i;
    PyObject *m,*d, *s, *tmp;
    m = _lbfgsb_module = PyModule_Create(&moduledef);
    Py_SET_TYPE(&PyFortran_Type, &PyType_Type);
    import_array();
    if (PyErr_Occurred())
        {PyErr_SetString(PyExc_ImportError, "can't initialize module _lbfgsb (failed to import numpy)"); return m;}
    d = PyModule_GetDict(m);
    s = PyUnicode_FromString("1.26.3");
    PyDict_SetItemString(d, "__version__", s);
    Py_DECREF(s);
    s = PyUnicode_FromString(
        "This module '_lbfgsb' is auto-generated with f2py (version:1.26.3).\nFunctions:\n"
"    setulb(m,x,l,u,nbd,f,g,factr,pgtol,wa,iwa,task,iprint,csave,lsave,isave,dsave,maxls,n=len(x))\n"
"COMMON blocks:\n""  /types/ intvar\n"".");
    PyDict_SetItemString(d, "__doc__", s);
    Py_DECREF(s);
    s = PyUnicode_FromString("1.26.3");
    PyDict_SetItemString(d, "__f2py_numpy_version__", s);
    Py_DECREF(s);
    _lbfgsb_error = PyErr_NewException ("_lbfgsb.error", NULL, NULL);
    /*
     * Store the error object inside the dict, so that it could get deallocated.
     * (in practice, this is a module, so it likely will not and cannot.)
     */
    PyDict_SetItemString(d, "__lbfgsb_error", _lbfgsb_error);
    Py_DECREF(_lbfgsb_error);
    for(i=0;f2py_routine_defs[i].name!=NULL;i++) {
        tmp = PyFortranObject_NewAsAttr(&f2py_routine_defs[i]);
        PyDict_SetItemString(d, f2py_routine_defs[i].name, tmp);
        Py_DECREF(tmp);
    }

/*eof initf2pywraphooks*/
/*eof initf90modhooks*/

  tmp = PyFortranObject_New(f2py_types_def,f2py_init_types);
  if (tmp == NULL) return NULL;
  if (F2PyDict_SetItemString(d, "types", tmp) == -1) return NULL;
  Py_DECREF(tmp);
/*eof initcommonhooks*/


#ifdef F2PY_REPORT_ATEXIT
    if (! PyErr_Occurred())
        on_exit(f2py_report_on_exit,(void*)"_lbfgsb");
#endif
    return m;
}
#ifdef __cplusplus
}
#endif
