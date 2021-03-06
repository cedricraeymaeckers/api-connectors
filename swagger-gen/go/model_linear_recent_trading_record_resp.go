/*
 * Bybit API
 *
 * ## REST API for the Bybit Exchange. Base URI: [https://api.bybit.com]  
 *
 * API version: 0.2.10
 * Contact: support@bybit.com
 * Generated by: Swagger Codegen (https://github.com/swagger-api/swagger-codegen.git)
 */

package swagger

type LinearRecentTradingRecordResp struct {
	Id string `json:"id,omitempty"`
	Price float64 `json:"price,omitempty"`
	Qty float64 `json:"qty,omitempty"`
	Side string `json:"side,omitempty"`
	Symbol string `json:"symbol,omitempty"`
	Time string `json:"time,omitempty"`
	TradeTimeMs int64 `json:"trade_time_ms,omitempty"`
}
