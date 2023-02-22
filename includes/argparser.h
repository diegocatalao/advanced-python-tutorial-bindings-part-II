#ifndef _H_FUNCTION_PARSER_
#define _H_FUNCTION_PARSER_

#include <Python.h>

static PyObject *sum_ParseTuple(PyObject *self, PyObject *args);

static PyObject *sum_ParseTupleAndKeywords(PyObject *self, PyObject *args,
                                           PyObject *kwargs);

static PyObject *sum_UnpackTuple(PyObject *self, PyObject *args);

static PyMethodDef parserMethods[] = {
    {
        .ml_name = "sum_ParseTuple",
        .ml_doc = "sum_ParseTuple",
        .ml_meth = (PyCFunction)sum_ParseTuple,
        .ml_flags = METH_VARARGS,
    },
    {
        .ml_name = "sum_ParseTupleAndKeywords",
        .ml_doc = "sum_ParseTupleAndKeywords",
        .ml_meth = (PyCFunction)sum_ParseTupleAndKeywords,
        .ml_flags = METH_VARARGS | METH_KEYWORDS,
    },
    {
        .ml_name = "sum_UnpackTuple",
        .ml_doc = "sum_UnpackTuple",
        .ml_meth = (PyCFunction)sum_UnpackTuple,
        .ml_flags = METH_VARARGS,
    },
};

static struct PyModuleDef argparser_module = {
    .m_base = PyModuleDef_HEAD_INIT,
    .m_doc = "Este módulo apresenta as funções de parser de argumentos",
    .m_name = "argparser",
    .m_methods = parserMethods,
};

PyMODINIT_FUNC PyInit_argparser(void);

#endif