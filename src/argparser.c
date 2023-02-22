#include "argparser.h"

static PyObject *sum_ParseTuple(PyObject *self, PyObject *args) {
  int x, y;
  PyObject *to_return;

  if (!PyArg_ParseTuple(args, "ii", &x, &y)) {
    return NULL;
  }

  to_return = Py_BuildValue("i", x + y);
  return to_return;
}

static PyObject *sum_ParseTupleAndKeywords(PyObject *self, PyObject *args,
                                           PyObject *kwargs) {
  int x, y, z = 0;
  PyObject *to_return;
  char *kwlist[] = {"x", "y", "z", NULL};

  if (!PyArg_ParseTupleAndKeywords(args, kwargs, "ii|i", kwlist, &x, &y, &z)) {
    return NULL;
  }

  to_return = Py_BuildValue("i", x + y + z);
  return to_return;
}

static PyObject *sum_UnpackTuple(PyObject *self, PyObject *args) {
  PyObject *x = NULL;
  PyObject *y = NULL;

  if (!PyArg_UnpackTuple(args, "sum_UnpackTuple", 2, 2, &x, &y)) {
    return NULL;
  }

  return PyNumber_Add(x, y);
}

PyMODINIT_FUNC PyInit_argparser(void) {
  return PyModule_Create(&argparser_module);
}