#include "argtypes.h"

static PyObject *hello_types(PyObject *self, PyObject *args) {
  PyObject input1;
  PyObject *output_dict = PyDict_New();

  if (!PyArg_ParseTuple(args, "O", &input1)) {
    return NULL;
  }

  // s: um ponteiro para uma string C que será convertida em um objeto Python
  // str
  char *string = "Olá mundo!";
  PyObject *Py_Object_string = Py_BuildValue("s", string);
  PyDict_SetItemString(output_dict, "Py_Object_string", Py_Object_string);

  // i: um valor inteiro C que será convertido em um objeto Python int
  int integer = 1;
  PyObject *Py_Object_integer = Py_BuildValue("i", integer);
  PyDict_SetItemString(output_dict, "Py_Object_integer", Py_Object_integer);

  // f: um valor de ponto flutuante C que será convertido em um objeto Python
  // float. NOTA: lembre-se que 1.0 é entendido como double em C e por isso o
  // cast
  float flutuante = (float)1.0;
  PyObject *Py_Object_flutuante = Py_BuildValue("f", flutuante);
  PyDict_SetItemString(output_dict, "Py_Object_flutuante", Py_Object_flutuante);

  // d: um valor de ponto flutuante de dupla precisão C que será convertido
  // em um objeto Python float.
  double flutuante_duplo = 2.7182818284590452353602;
  PyObject *Py_Object_flutuante_duplo = Py_BuildValue("d", flutuante_duplo);
  PyDict_SetItemString(output_dict, "Py_Object_flutuante_duplo",
                       Py_Object_flutuante_duplo);

  // O: um ponteiro para um objeto Python que será incorporado em outro
  // objeto Python.
  PyObject *Py_Object_ref_input1 = Py_BuildValue("O", input1);
  PyDict_SetItemString(output_dict, "Py_Object_ref_input1",
                       Py_Object_ref_input1);

  // (): uma tupla Python vazia
  // (a1, a2, a3, ...): ou uma tupla Python populada
  int valor1 = 1;
  int valor2 = 2;
  PyObject *Py_Object_tupla_vazia = Py_BuildValue("()");
  PyObject *Py_Object_tupla = Py_BuildValue("(i, i)", valor1, valor2);
  PyDict_SetItemString(output_dict, "Py_Object_tupla", Py_Object_tupla);
  PyDict_SetItemString(output_dict, "Py_Object_tupla_vazia",
                       Py_Object_tupla_vazia);

  // []: uma lista Python vazia
  // [a1, a2, a3, ...]: ou uma lista Python populada
  PyObject *Py_Object_lista_vazia = Py_BuildValue("()");
  PyObject *Py_Object_lista = Py_BuildValue("[i, i]", valor1, valor2);
  PyDict_SetItemString(output_dict, "Py_Object_lista", Py_Object_lista);
  PyDict_SetItemString(output_dict, "Py_Object_lista_vazia",
                       Py_Object_lista_vazia);

  // {}: um dicionário Python vazio
  // [a1, a2, a3, ...]: ou uma lista Python populada
  PyObject *Py_Object_dict_vazio = Py_BuildValue("{}");
  PyObject *Py_Object_dict = Py_BuildValue("{i: i}", valor1, valor2);
  PyDict_SetItemString(output_dict, "Py_Object_dict", Py_Object_dict);
  PyDict_SetItemString(output_dict, "Py_Object_dict_vazio",
                       Py_Object_dict_vazio);

  // b: um valor booleano C que será convertido em um objeto
  // Python bool.
  int boleano = valor1 > valor2 ? 0 : 1;
  PyObject *Py_Object_boleano = Py_BuildValue("b", boleano);
  PyDict_SetItemString(output_dict, "Py_Object_boleano", Py_Object_boleano);

  return output_dict;
}

PyMODINIT_FUNC PyInit_argtypes(void) {
  //
  return PyModule_Create(&argtypes_module);
}