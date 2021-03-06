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

package io.swagger.client.model;

import io.swagger.client.model.V2ConditionalListRes;
import java.util.*;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

/**
 * Get order list response
 **/
@ApiModel(description = "Get order list response")
public class ConditionalOrdersRes {
  
  @SerializedName("data")
  private List<V2ConditionalListRes> data = null;
  @SerializedName("cursor")
  private String cursor = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public List<V2ConditionalListRes> getData() {
    return data;
  }
  public void setData(List<V2ConditionalListRes> data) {
    this.data = data;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getCursor() {
    return cursor;
  }
  public void setCursor(String cursor) {
    this.cursor = cursor;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ConditionalOrdersRes conditionalOrdersRes = (ConditionalOrdersRes) o;
    return (this.data == null ? conditionalOrdersRes.data == null : this.data.equals(conditionalOrdersRes.data)) &&
        (this.cursor == null ? conditionalOrdersRes.cursor == null : this.cursor.equals(conditionalOrdersRes.cursor));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.data == null ? 0: this.data.hashCode());
    result = 31 * result + (this.cursor == null ? 0: this.cursor.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ConditionalOrdersRes {\n");
    
    sb.append("  data: ").append(data).append("\n");
    sb.append("  cursor: ").append(cursor).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
