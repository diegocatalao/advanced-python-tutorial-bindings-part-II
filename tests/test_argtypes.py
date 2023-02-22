import unittest

import pybinding.argtypes


class TestHelloTypes(unittest.TestCase):
    """unittest to HelloTypes"""

    def test_hello_types(self):
        """test hello types function internaly"""
        input1 = "test_input"
        output_dict = pybinding.argtypes.hello_types(input1)

        expected_dict = {
            "Py_Object_string": "Olá mundo!",
            "Py_Object_integer": 1,
            "Py_Object_flutuante": 1.0,
            "Py_Object_flutuante_duplo": 2.718281828459045,
            "Py_Object_ref_input1": input1,
            "Py_Object_tupla_vazia": (),
            "Py_Object_tupla": (1, 2),
            "Py_Object_lista_vazia": (),
            "Py_Object_lista": [1, 2],
            "Py_Object_dict_vazio": {},
            "Py_Object_dict": {1: 2},
            "Py_Object_boleano": 1,
        }

        self.assertDictEqual(output_dict, expected_dict)
