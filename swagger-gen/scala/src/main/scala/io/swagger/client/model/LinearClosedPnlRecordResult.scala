/**
 * Bybit API
 * ## REST API for the Bybit Exchange. Base URI: [https://api.bybit.com]  
 *
 * OpenAPI spec version: 0.2.10
 * Contact: support@bybit.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

package io.swagger.client.model


case class LinearClosedPnlRecordResult (
  avgEntryPrice: Option[Double] = None,
  avgExitPrice: Option[Double] = None,
  closedPnl: Option[Double] = None,
  closedSize: Option[Double] = None,
  createdAt: Option[Long] = None,
  cumEntryValue: Option[Double] = None,
  cumExitValue: Option[Double] = None,
  execType: Option[String] = None,
  fillCount: Option[Integer] = None,
  id: Option[Long] = None,
  leverage: Option[Double] = None,
  orderId: Option[String] = None,
  orderPrice: Option[Double] = None,
  orderType: Option[String] = None,
  qty: Option[Double] = None,
  side: Option[String] = None,
  symbol: Option[String] = None,
  userId: Option[Long] = None
)

