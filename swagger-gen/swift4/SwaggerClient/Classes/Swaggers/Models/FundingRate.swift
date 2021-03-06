//
// FundingRate.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


/** Get the last funding Rate */

public struct FundingRate: Codable {

    public var symbol: String?
    public var fundingRate: String?
    public var fundingRateTimestamp: Double?

    public init(symbol: String?, fundingRate: String?, fundingRateTimestamp: Double?) {
        self.symbol = symbol
        self.fundingRate = fundingRate
        self.fundingRateTimestamp = fundingRateTimestamp
    }

    public enum CodingKeys: String, CodingKey { 
        case symbol
        case fundingRate = "funding_rate"
        case fundingRateTimestamp = "funding_rate_timestamp"
    }


}

