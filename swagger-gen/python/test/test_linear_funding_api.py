# coding: utf-8

"""
    Bybit API

    ## REST API for the Bybit Exchange. Base URI: [https://api.bybit.com]    # noqa: E501

    OpenAPI spec version: 0.2.11
    Contact: support@bybit.com
    Generated by: https://github.com/swagger-api/swagger-codegen.git
"""


from __future__ import absolute_import

import unittest

import swagger_client
from swagger_client.api.linear_funding_api import LinearFundingApi  # noqa: E501
from swagger_client.rest import ApiException


class TestLinearFundingApi(unittest.TestCase):
    """LinearFundingApi unit test stubs"""

    def setUp(self):
        self.api = swagger_client.api.linear_funding_api.LinearFundingApi()  # noqa: E501

    def tearDown(self):
        pass

    def test_linear_funding_my_last_fee(self):
        """Test case for linear_funding_my_last_fee

        Get prev funding  # noqa: E501
        """
        pass

    def test_linear_funding_predicted(self):
        """Test case for linear_funding_predicted

        Get predicted funding rate and funding fee.  # noqa: E501
        """
        pass

    def test_linear_funding_prev_rate(self):
        """Test case for linear_funding_prev_rate

        Get prev funding  # noqa: E501
        """
        pass


if __name__ == '__main__':
    unittest.main()
