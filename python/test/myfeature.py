import sys
sys.path.append('..')

from unittest import TestCase
import feature

class TestCase1(TestCase):
    def test_mysum1(self):
        self.assertEqual(feature.mysum(1, 1), 2)
        self.assertEqual(feature.mysum(1, 2), 3)

    def test_mysum2(self):
        self.assertEqual(feature.mysum(2, 2), 3)
