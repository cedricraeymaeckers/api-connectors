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

import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

/**
 * Get the last funding fee
 **/
@ApiModel(description = "Get the last funding fee")
public class FundingPredicted {
  
  @SerializedName("predicted_funding_rate")
  private Double predictedFundingRate = null;
  @SerializedName("predicted_funding_fee")
  private Double predictedFundingFee = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public Double getPredictedFundingRate() {
    return predictedFundingRate;
  }
  public void setPredictedFundingRate(Double predictedFundingRate) {
    this.predictedFundingRate = predictedFundingRate;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Double getPredictedFundingFee() {
    return predictedFundingFee;
  }
  public void setPredictedFundingFee(Double predictedFundingFee) {
    this.predictedFundingFee = predictedFundingFee;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    FundingPredicted fundingPredicted = (FundingPredicted) o;
    return (this.predictedFundingRate == null ? fundingPredicted.predictedFundingRate == null : this.predictedFundingRate.equals(fundingPredicted.predictedFundingRate)) &&
        (this.predictedFundingFee == null ? fundingPredicted.predictedFundingFee == null : this.predictedFundingFee.equals(fundingPredicted.predictedFundingFee));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.predictedFundingRate == null ? 0: this.predictedFundingRate.hashCode());
    result = 31 * result + (this.predictedFundingFee == null ? 0: this.predictedFundingFee.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class FundingPredicted {\n");
    
    sb.append("  predictedFundingRate: ").append(predictedFundingRate).append("\n");
    sb.append("  predictedFundingFee: ").append(predictedFundingFee).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
