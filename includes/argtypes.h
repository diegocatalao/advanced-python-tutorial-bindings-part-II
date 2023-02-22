
#ifndef _H_PYSIGNATURE_
#define _H_PYSIGNATURE_

#include <Python.h>

static PyObject *hello_types(PyObject *self, PyObject *args);

static PyMethodDef argtypesMethods[] = {
    {
        .ml_name = "hello_types",
        .ml_meth = hello_types,
        .ml_flags = METH_VARARGS,
        .ml_doc = "Mostra alguns tipos de dados em Python/C",
    },
};

static struct PyModuleDef argtypes_module = {
    .m_base = PyModuleDef_HEAD_INIT,
    .m_doc = "Module to show some input types in Python/C",
    .m_name = "argtypes",
    .m_methods = argtypesMethods,
};

PyMODINIT_FUNC PyInit_argtypes(void);

#endif