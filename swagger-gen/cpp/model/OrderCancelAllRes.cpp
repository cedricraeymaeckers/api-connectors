/**
 * Bybit API
 * ## REST API for the Bybit Exchange. Base URI: [https://api-testnet.bybit.com]  
 *
 * OpenAPI spec version: 1.0.0
 * Contact: support@bybit.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.8.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "OrderCancelAllRes.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

OrderCancelAllRes::OrderCancelAllRes()
{
    m_ClOrdID = utility::conversions::to_string_t("");
    m_ClOrdIDIsSet = false;
    m_User_id = 0.0;
    m_User_idIsSet = false;
    m_Side = utility::conversions::to_string_t("");
    m_SideIsSet = false;
    m_Order_type = utility::conversions::to_string_t("");
    m_Order_typeIsSet = false;
    m_Price = utility::conversions::to_string_t("");
    m_PriceIsSet = false;
    m_Qty = utility::conversions::to_string_t("");
    m_QtyIsSet = false;
    m_Time_in_force = utility::conversions::to_string_t("");
    m_Time_in_forceIsSet = false;
    m_Create_type = utility::conversions::to_string_t("");
    m_Create_typeIsSet = false;
    m_Order_status = utility::conversions::to_string_t("");
    m_Order_statusIsSet = false;
    m_Leaves_qty = 0.0;
    m_Leaves_qtyIsSet = false;
    m_Leaves_value = 0.0;
    m_Leaves_valueIsSet = false;
    m_Created_at = utility::conversions::to_string_t("");
    m_Created_atIsSet = false;
    m_Updated_at = utility::conversions::to_string_t("");
    m_Updated_atIsSet = false;
    m_Cross_status = utility::conversions::to_string_t("");
    m_Cross_statusIsSet = false;
    m_Cross_seq = 0.0;
    m_Cross_seqIsSet = false;
}

OrderCancelAllRes::~OrderCancelAllRes()
{
}

void OrderCancelAllRes::validate()
{
    // TODO: implement validation
}

web::json::value OrderCancelAllRes::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_ClOrdIDIsSet)
    {
        val[utility::conversions::to_string_t("clOrdID")] = ModelBase::toJson(m_ClOrdID);
    }
    if(m_User_idIsSet)
    {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(m_User_id);
    }
    if(m_SideIsSet)
    {
        val[utility::conversions::to_string_t("side")] = ModelBase::toJson(m_Side);
    }
    if(m_Order_typeIsSet)
    {
        val[utility::conversions::to_string_t("order_type")] = ModelBase::toJson(m_Order_type);
    }
    if(m_PriceIsSet)
    {
        val[utility::conversions::to_string_t("price")] = ModelBase::toJson(m_Price);
    }
    if(m_QtyIsSet)
    {
        val[utility::conversions::to_string_t("qty")] = ModelBase::toJson(m_Qty);
    }
    if(m_Time_in_forceIsSet)
    {
        val[utility::conversions::to_string_t("time_in_force")] = ModelBase::toJson(m_Time_in_force);
    }
    if(m_Create_typeIsSet)
    {
        val[utility::conversions::to_string_t("create_type")] = ModelBase::toJson(m_Create_type);
    }
    if(m_Order_statusIsSet)
    {
        val[utility::conversions::to_string_t("order_status")] = ModelBase::toJson(m_Order_status);
    }
    if(m_Leaves_qtyIsSet)
    {
        val[utility::conversions::to_string_t("leaves_qty")] = ModelBase::toJson(m_Leaves_qty);
    }
    if(m_Leaves_valueIsSet)
    {
        val[utility::conversions::to_string_t("leaves_value")] = ModelBase::toJson(m_Leaves_value);
    }
    if(m_Created_atIsSet)
    {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(m_Created_at);
    }
    if(m_Updated_atIsSet)
    {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(m_Updated_at);
    }
    if(m_Cross_statusIsSet)
    {
        val[utility::conversions::to_string_t("cross_status")] = ModelBase::toJson(m_Cross_status);
    }
    if(m_Cross_seqIsSet)
    {
        val[utility::conversions::to_string_t("cross_seq")] = ModelBase::toJson(m_Cross_seq);
    }

    return val;
}

void OrderCancelAllRes::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("clOrdID")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("clOrdID")];
        if(!fieldValue.is_null())
        {
            setClOrdID(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_id")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("user_id")];
        if(!fieldValue.is_null())
        {
            setUserId(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("side")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("side")];
        if(!fieldValue.is_null())
        {
            setSide(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order_type")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("order_type")];
        if(!fieldValue.is_null())
        {
            setOrderType(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("price")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("price")];
        if(!fieldValue.is_null())
        {
            setPrice(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("qty")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("qty")];
        if(!fieldValue.is_null())
        {
            setQty(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time_in_force")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("time_in_force")];
        if(!fieldValue.is_null())
        {
            setTimeInForce(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_type")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("create_type")];
        if(!fieldValue.is_null())
        {
            setCreateType(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order_status")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("order_status")];
        if(!fieldValue.is_null())
        {
            setOrderStatus(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("leaves_qty")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("leaves_qty")];
        if(!fieldValue.is_null())
        {
            setLeavesQty(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("leaves_value")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("leaves_value")];
        if(!fieldValue.is_null())
        {
            setLeavesValue(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("created_at")];
        if(!fieldValue.is_null())
        {
            setCreatedAt(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("updated_at")];
        if(!fieldValue.is_null())
        {
            setUpdatedAt(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cross_status")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("cross_status")];
        if(!fieldValue.is_null())
        {
            setCrossStatus(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cross_seq")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("cross_seq")];
        if(!fieldValue.is_null())
        {
            setCrossSeq(ModelBase::doubleFromJson(fieldValue));
        }
    }
}

void OrderCancelAllRes::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_ClOrdIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("clOrdID"), m_ClOrdID));
        
    }
    if(m_User_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("user_id"), m_User_id));
    }
    if(m_SideIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("side"), m_Side));
        
    }
    if(m_Order_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("order_type"), m_Order_type));
        
    }
    if(m_PriceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("price"), m_Price));
        
    }
    if(m_QtyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("qty"), m_Qty));
        
    }
    if(m_Time_in_forceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("time_in_force"), m_Time_in_force));
        
    }
    if(m_Create_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("create_type"), m_Create_type));
        
    }
    if(m_Order_statusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("order_status"), m_Order_status));
        
    }
    if(m_Leaves_qtyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("leaves_qty"), m_Leaves_qty));
    }
    if(m_Leaves_valueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("leaves_value"), m_Leaves_value));
    }
    if(m_Created_atIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("created_at"), m_Created_at));
        
    }
    if(m_Updated_atIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("updated_at"), m_Updated_at));
        
    }
    if(m_Cross_statusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("cross_status"), m_Cross_status));
        
    }
    if(m_Cross_seqIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("cross_seq"), m_Cross_seq));
    }
}

void OrderCancelAllRes::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("clOrdID")))
    {
        setClOrdID(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("clOrdID"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("user_id")))
    {
        setUserId(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("user_id"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("side")))
    {
        setSide(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("side"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("order_type")))
    {
        setOrderType(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("order_type"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("price")))
    {
        setPrice(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("price"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("qty")))
    {
        setQty(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("qty"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("time_in_force")))
    {
        setTimeInForce(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("time_in_force"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("create_type")))
    {
        setCreateType(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("create_type"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("order_status")))
    {
        setOrderStatus(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("order_status"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("leaves_qty")))
    {
        setLeavesQty(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("leaves_qty"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("leaves_value")))
    {
        setLeavesValue(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("leaves_value"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("created_at")))
    {
        setCreatedAt(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("created_at"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("updated_at")))
    {
        setUpdatedAt(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("updated_at"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("cross_status")))
    {
        setCrossStatus(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("cross_status"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("cross_seq")))
    {
        setCrossSeq(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("cross_seq"))));
    }
}

utility::string_t OrderCancelAllRes::getClOrdID() const
{
    return m_ClOrdID;
}


void OrderCancelAllRes::setClOrdID(utility::string_t value)
{
    m_ClOrdID = value;
    m_ClOrdIDIsSet = true;
}
bool OrderCancelAllRes::clOrdIDIsSet() const
{
    return m_ClOrdIDIsSet;
}

void OrderCancelAllRes::unsetClOrdID()
{
    m_ClOrdIDIsSet = false;
}

double OrderCancelAllRes::getUserId() const
{
    return m_User_id;
}


void OrderCancelAllRes::setUserId(double value)
{
    m_User_id = value;
    m_User_idIsSet = true;
}
bool OrderCancelAllRes::userIdIsSet() const
{
    return m_User_idIsSet;
}

void OrderCancelAllRes::unsetUser_id()
{
    m_User_idIsSet = false;
}

utility::string_t OrderCancelAllRes::getSide() const
{
    return m_Side;
}


void OrderCancelAllRes::setSide(utility::string_t value)
{
    m_Side = value;
    m_SideIsSet = true;
}
bool OrderCancelAllRes::sideIsSet() const
{
    return m_SideIsSet;
}

void OrderCancelAllRes::unsetSide()
{
    m_SideIsSet = false;
}

utility::string_t OrderCancelAllRes::getOrderType() const
{
    return m_Order_type;
}


void OrderCancelAllRes::setOrderType(utility::string_t value)
{
    m_Order_type = value;
    m_Order_typeIsSet = true;
}
bool OrderCancelAllRes::orderTypeIsSet() const
{
    return m_Order_typeIsSet;
}

void OrderCancelAllRes::unsetOrder_type()
{
    m_Order_typeIsSet = false;
}

utility::string_t OrderCancelAllRes::getPrice() const
{
    return m_Price;
}


void OrderCancelAllRes::setPrice(utility::string_t value)
{
    m_Price = value;
    m_PriceIsSet = true;
}
bool OrderCancelAllRes::priceIsSet() const
{
    return m_PriceIsSet;
}

void OrderCancelAllRes::unsetPrice()
{
    m_PriceIsSet = false;
}

utility::string_t OrderCancelAllRes::getQty() const
{
    return m_Qty;
}


void OrderCancelAllRes::setQty(utility::string_t value)
{
    m_Qty = value;
    m_QtyIsSet = true;
}
bool OrderCancelAllRes::qtyIsSet() const
{
    return m_QtyIsSet;
}

void OrderCancelAllRes::unsetQty()
{
    m_QtyIsSet = false;
}

utility::string_t OrderCancelAllRes::getTimeInForce() const
{
    return m_Time_in_force;
}


void OrderCancelAllRes::setTimeInForce(utility::string_t value)
{
    m_Time_in_force = value;
    m_Time_in_forceIsSet = true;
}
bool OrderCancelAllRes::timeInForceIsSet() const
{
    return m_Time_in_forceIsSet;
}

void OrderCancelAllRes::unsetTime_in_force()
{
    m_Time_in_forceIsSet = false;
}

utility::string_t OrderCancelAllRes::getCreateType() const
{
    return m_Create_type;
}


void OrderCancelAllRes::setCreateType(utility::string_t value)
{
    m_Create_type = value;
    m_Create_typeIsSet = true;
}
bool OrderCancelAllRes::createTypeIsSet() const
{
    return m_Create_typeIsSet;
}

void OrderCancelAllRes::unsetCreate_type()
{
    m_Create_typeIsSet = false;
}

utility::string_t OrderCancelAllRes::getOrderStatus() const
{
    return m_Order_status;
}


void OrderCancelAllRes::setOrderStatus(utility::string_t value)
{
    m_Order_status = value;
    m_Order_statusIsSet = true;
}
bool OrderCancelAllRes::orderStatusIsSet() const
{
    return m_Order_statusIsSet;
}

void OrderCancelAllRes::unsetOrder_status()
{
    m_Order_statusIsSet = false;
}

double OrderCancelAllRes::getLeavesQty() const
{
    return m_Leaves_qty;
}


void OrderCancelAllRes::setLeavesQty(double value)
{
    m_Leaves_qty = value;
    m_Leaves_qtyIsSet = true;
}
bool OrderCancelAllRes::leavesQtyIsSet() const
{
    return m_Leaves_qtyIsSet;
}

void OrderCancelAllRes::unsetLeaves_qty()
{
    m_Leaves_qtyIsSet = false;
}

double OrderCancelAllRes::getLeavesValue() const
{
    return m_Leaves_value;
}


void OrderCancelAllRes::setLeavesValue(double value)
{
    m_Leaves_value = value;
    m_Leaves_valueIsSet = true;
}
bool OrderCancelAllRes::leavesValueIsSet() const
{
    return m_Leaves_valueIsSet;
}

void OrderCancelAllRes::unsetLeaves_value()
{
    m_Leaves_valueIsSet = false;
}

utility::string_t OrderCancelAllRes::getCreatedAt() const
{
    return m_Created_at;
}


void OrderCancelAllRes::setCreatedAt(utility::string_t value)
{
    m_Created_at = value;
    m_Created_atIsSet = true;
}
bool OrderCancelAllRes::createdAtIsSet() const
{
    return m_Created_atIsSet;
}

void OrderCancelAllRes::unsetCreated_at()
{
    m_Created_atIsSet = false;
}

utility::string_t OrderCancelAllRes::getUpdatedAt() const
{
    return m_Updated_at;
}


void OrderCancelAllRes::setUpdatedAt(utility::string_t value)
{
    m_Updated_at = value;
    m_Updated_atIsSet = true;
}
bool OrderCancelAllRes::updatedAtIsSet() const
{
    return m_Updated_atIsSet;
}

void OrderCancelAllRes::unsetUpdated_at()
{
    m_Updated_atIsSet = false;
}

utility::string_t OrderCancelAllRes::getCrossStatus() const
{
    return m_Cross_status;
}


void OrderCancelAllRes::setCrossStatus(utility::string_t value)
{
    m_Cross_status = value;
    m_Cross_statusIsSet = true;
}
bool OrderCancelAllRes::crossStatusIsSet() const
{
    return m_Cross_statusIsSet;
}

void OrderCancelAllRes::unsetCross_status()
{
    m_Cross_statusIsSet = false;
}

double OrderCancelAllRes::getCrossSeq() const
{
    return m_Cross_seq;
}


void OrderCancelAllRes::setCrossSeq(double value)
{
    m_Cross_seq = value;
    m_Cross_seqIsSet = true;
}
bool OrderCancelAllRes::crossSeqIsSet() const
{
    return m_Cross_seqIsSet;
}

void OrderCancelAllRes::unsetCross_seq()
{
    m_Cross_seqIsSet = false;
}

}
}
}
}
