import unittest

import pybinding.argparser


class TestSumParseTuple(unittest.TestCase):
    """test case for multiples args kwargs functions"""

    def test_sum_parse_tuple(self):
        """parse tuple test"""
        expected_result = 5
        result = pybinding.argparser.sum_ParseTuple(2, 3)
        self.assertEqual(result, expected_result)

    def test_sum_parse_tuple_and_keywords(self):
        """keyargs test"""
        expected_result = 15
        result = pybinding.argparser.sum_ParseTupleAndKeywords(2, 3, z=10)
        self.assertEqual(result, expected_result)

    def test_sum_parse_tuple_and_keywords_without_kw(self):
        """keyargs without kwargs test"""
        expected_result = 5
        result = pybinding.argparser.sum_ParseTupleAndKeywords(2, 3)
        self.assertEqual(result, expected_result)

    def test_sum_unpacktuple(self):
        """unpack tuple tests"""
        expected_result = 5
        result = pybinding.argparser.sum_UnpackTuple(2, 3)
        self.assertEqual(result, expected_result)
