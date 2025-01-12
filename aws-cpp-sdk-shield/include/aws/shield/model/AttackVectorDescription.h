﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Shield
{
namespace Model
{

  /**
   * <p>Describes the attack.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/AttackVectorDescription">AWS
   * API Reference</a></p>
   */
  class AWS_SHIELD_API AttackVectorDescription
  {
  public:
    AttackVectorDescription();
    AttackVectorDescription(Aws::Utils::Json::JsonView jsonValue);
    AttackVectorDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The attack type. Valid values:</p> <ul> <li> <p>UDP_TRAFFIC</p> </li> <li>
     * <p>UDP_FRAGMENT</p> </li> <li> <p>GENERIC_UDP_REFLECTION</p> </li> <li>
     * <p>DNS_REFLECTION</p> </li> <li> <p>NTP_REFLECTION</p> </li> <li>
     * <p>CHARGEN_REFLECTION</p> </li> <li> <p>SSDP_REFLECTION</p> </li> <li>
     * <p>PORT_MAPPER</p> </li> <li> <p>RIP_REFLECTION</p> </li> <li>
     * <p>SNMP_REFLECTION</p> </li> <li> <p>MSSQL_REFLECTION</p> </li> <li>
     * <p>NET_BIOS_REFLECTION</p> </li> <li> <p>SYN_FLOOD</p> </li> <li>
     * <p>ACK_FLOOD</p> </li> <li> <p>REQUEST_FLOOD</p> </li> <li>
     * <p>HTTP_REFLECTION</p> </li> <li> <p>UDS_REFLECTION</p> </li> <li>
     * <p>MEMCACHED_REFLECTION</p> </li> </ul>
     */
    inline const Aws::String& GetVectorType() const{ return m_vectorType; }

    /**
     * <p>The attack type. Valid values:</p> <ul> <li> <p>UDP_TRAFFIC</p> </li> <li>
     * <p>UDP_FRAGMENT</p> </li> <li> <p>GENERIC_UDP_REFLECTION</p> </li> <li>
     * <p>DNS_REFLECTION</p> </li> <li> <p>NTP_REFLECTION</p> </li> <li>
     * <p>CHARGEN_REFLECTION</p> </li> <li> <p>SSDP_REFLECTION</p> </li> <li>
     * <p>PORT_MAPPER</p> </li> <li> <p>RIP_REFLECTION</p> </li> <li>
     * <p>SNMP_REFLECTION</p> </li> <li> <p>MSSQL_REFLECTION</p> </li> <li>
     * <p>NET_BIOS_REFLECTION</p> </li> <li> <p>SYN_FLOOD</p> </li> <li>
     * <p>ACK_FLOOD</p> </li> <li> <p>REQUEST_FLOOD</p> </li> <li>
     * <p>HTTP_REFLECTION</p> </li> <li> <p>UDS_REFLECTION</p> </li> <li>
     * <p>MEMCACHED_REFLECTION</p> </li> </ul>
     */
    inline bool VectorTypeHasBeenSet() const { return m_vectorTypeHasBeenSet; }

    /**
     * <p>The attack type. Valid values:</p> <ul> <li> <p>UDP_TRAFFIC</p> </li> <li>
     * <p>UDP_FRAGMENT</p> </li> <li> <p>GENERIC_UDP_REFLECTION</p> </li> <li>
     * <p>DNS_REFLECTION</p> </li> <li> <p>NTP_REFLECTION</p> </li> <li>
     * <p>CHARGEN_REFLECTION</p> </li> <li> <p>SSDP_REFLECTION</p> </li> <li>
     * <p>PORT_MAPPER</p> </li> <li> <p>RIP_REFLECTION</p> </li> <li>
     * <p>SNMP_REFLECTION</p> </li> <li> <p>MSSQL_REFLECTION</p> </li> <li>
     * <p>NET_BIOS_REFLECTION</p> </li> <li> <p>SYN_FLOOD</p> </li> <li>
     * <p>ACK_FLOOD</p> </li> <li> <p>REQUEST_FLOOD</p> </li> <li>
     * <p>HTTP_REFLECTION</p> </li> <li> <p>UDS_REFLECTION</p> </li> <li>
     * <p>MEMCACHED_REFLECTION</p> </li> </ul>
     */
    inline void SetVectorType(const Aws::String& value) { m_vectorTypeHasBeenSet = true; m_vectorType = value; }

    /**
     * <p>The attack type. Valid values:</p> <ul> <li> <p>UDP_TRAFFIC</p> </li> <li>
     * <p>UDP_FRAGMENT</p> </li> <li> <p>GENERIC_UDP_REFLECTION</p> </li> <li>
     * <p>DNS_REFLECTION</p> </li> <li> <p>NTP_REFLECTION</p> </li> <li>
     * <p>CHARGEN_REFLECTION</p> </li> <li> <p>SSDP_REFLECTION</p> </li> <li>
     * <p>PORT_MAPPER</p> </li> <li> <p>RIP_REFLECTION</p> </li> <li>
     * <p>SNMP_REFLECTION</p> </li> <li> <p>MSSQL_REFLECTION</p> </li> <li>
     * <p>NET_BIOS_REFLECTION</p> </li> <li> <p>SYN_FLOOD</p> </li> <li>
     * <p>ACK_FLOOD</p> </li> <li> <p>REQUEST_FLOOD</p> </li> <li>
     * <p>HTTP_REFLECTION</p> </li> <li> <p>UDS_REFLECTION</p> </li> <li>
     * <p>MEMCACHED_REFLECTION</p> </li> </ul>
     */
    inline void SetVectorType(Aws::String&& value) { m_vectorTypeHasBeenSet = true; m_vectorType = std::move(value); }

    /**
     * <p>The attack type. Valid values:</p> <ul> <li> <p>UDP_TRAFFIC</p> </li> <li>
     * <p>UDP_FRAGMENT</p> </li> <li> <p>GENERIC_UDP_REFLECTION</p> </li> <li>
     * <p>DNS_REFLECTION</p> </li> <li> <p>NTP_REFLECTION</p> </li> <li>
     * <p>CHARGEN_REFLECTION</p> </li> <li> <p>SSDP_REFLECTION</p> </li> <li>
     * <p>PORT_MAPPER</p> </li> <li> <p>RIP_REFLECTION</p> </li> <li>
     * <p>SNMP_REFLECTION</p> </li> <li> <p>MSSQL_REFLECTION</p> </li> <li>
     * <p>NET_BIOS_REFLECTION</p> </li> <li> <p>SYN_FLOOD</p> </li> <li>
     * <p>ACK_FLOOD</p> </li> <li> <p>REQUEST_FLOOD</p> </li> <li>
     * <p>HTTP_REFLECTION</p> </li> <li> <p>UDS_REFLECTION</p> </li> <li>
     * <p>MEMCACHED_REFLECTION</p> </li> </ul>
     */
    inline void SetVectorType(const char* value) { m_vectorTypeHasBeenSet = true; m_vectorType.assign(value); }

    /**
     * <p>The attack type. Valid values:</p> <ul> <li> <p>UDP_TRAFFIC</p> </li> <li>
     * <p>UDP_FRAGMENT</p> </li> <li> <p>GENERIC_UDP_REFLECTION</p> </li> <li>
     * <p>DNS_REFLECTION</p> </li> <li> <p>NTP_REFLECTION</p> </li> <li>
     * <p>CHARGEN_REFLECTION</p> </li> <li> <p>SSDP_REFLECTION</p> </li> <li>
     * <p>PORT_MAPPER</p> </li> <li> <p>RIP_REFLECTION</p> </li> <li>
     * <p>SNMP_REFLECTION</p> </li> <li> <p>MSSQL_REFLECTION</p> </li> <li>
     * <p>NET_BIOS_REFLECTION</p> </li> <li> <p>SYN_FLOOD</p> </li> <li>
     * <p>ACK_FLOOD</p> </li> <li> <p>REQUEST_FLOOD</p> </li> <li>
     * <p>HTTP_REFLECTION</p> </li> <li> <p>UDS_REFLECTION</p> </li> <li>
     * <p>MEMCACHED_REFLECTION</p> </li> </ul>
     */
    inline AttackVectorDescription& WithVectorType(const Aws::String& value) { SetVectorType(value); return *this;}

    /**
     * <p>The attack type. Valid values:</p> <ul> <li> <p>UDP_TRAFFIC</p> </li> <li>
     * <p>UDP_FRAGMENT</p> </li> <li> <p>GENERIC_UDP_REFLECTION</p> </li> <li>
     * <p>DNS_REFLECTION</p> </li> <li> <p>NTP_REFLECTION</p> </li> <li>
     * <p>CHARGEN_REFLECTION</p> </li> <li> <p>SSDP_REFLECTION</p> </li> <li>
     * <p>PORT_MAPPER</p> </li> <li> <p>RIP_REFLECTION</p> </li> <li>
     * <p>SNMP_REFLECTION</p> </li> <li> <p>MSSQL_REFLECTION</p> </li> <li>
     * <p>NET_BIOS_REFLECTION</p> </li> <li> <p>SYN_FLOOD</p> </li> <li>
     * <p>ACK_FLOOD</p> </li> <li> <p>REQUEST_FLOOD</p> </li> <li>
     * <p>HTTP_REFLECTION</p> </li> <li> <p>UDS_REFLECTION</p> </li> <li>
     * <p>MEMCACHED_REFLECTION</p> </li> </ul>
     */
    inline AttackVectorDescription& WithVectorType(Aws::String&& value) { SetVectorType(std::move(value)); return *this;}

    /**
     * <p>The attack type. Valid values:</p> <ul> <li> <p>UDP_TRAFFIC</p> </li> <li>
     * <p>UDP_FRAGMENT</p> </li> <li> <p>GENERIC_UDP_REFLECTION</p> </li> <li>
     * <p>DNS_REFLECTION</p> </li> <li> <p>NTP_REFLECTION</p> </li> <li>
     * <p>CHARGEN_REFLECTION</p> </li> <li> <p>SSDP_REFLECTION</p> </li> <li>
     * <p>PORT_MAPPER</p> </li> <li> <p>RIP_REFLECTION</p> </li> <li>
     * <p>SNMP_REFLECTION</p> </li> <li> <p>MSSQL_REFLECTION</p> </li> <li>
     * <p>NET_BIOS_REFLECTION</p> </li> <li> <p>SYN_FLOOD</p> </li> <li>
     * <p>ACK_FLOOD</p> </li> <li> <p>REQUEST_FLOOD</p> </li> <li>
     * <p>HTTP_REFLECTION</p> </li> <li> <p>UDS_REFLECTION</p> </li> <li>
     * <p>MEMCACHED_REFLECTION</p> </li> </ul>
     */
    inline AttackVectorDescription& WithVectorType(const char* value) { SetVectorType(value); return *this;}

  private:

    Aws::String m_vectorType;
    bool m_vectorTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
