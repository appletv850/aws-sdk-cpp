﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/ElasticsearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>Revokes access to an Amazon OpenSearch Service domain that was provided
   * through an interface VPC endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/RevokeVpcEndpointAccessRequest">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICSEARCHSERVICE_API RevokeVpcEndpointAccessRequest : public ElasticsearchServiceRequest
  {
  public:
    RevokeVpcEndpointAccessRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RevokeVpcEndpointAccess"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the OpenSearch Service domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The name of the OpenSearch Service domain.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The name of the OpenSearch Service domain.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The name of the OpenSearch Service domain.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The name of the OpenSearch Service domain.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The name of the OpenSearch Service domain.</p>
     */
    inline RevokeVpcEndpointAccessRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the OpenSearch Service domain.</p>
     */
    inline RevokeVpcEndpointAccessRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The name of the OpenSearch Service domain.</p>
     */
    inline RevokeVpcEndpointAccessRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The account ID to revoke access from.</p>
     */
    inline const Aws::String& GetAccount() const{ return m_account; }

    /**
     * <p>The account ID to revoke access from.</p>
     */
    inline bool AccountHasBeenSet() const { return m_accountHasBeenSet; }

    /**
     * <p>The account ID to revoke access from.</p>
     */
    inline void SetAccount(const Aws::String& value) { m_accountHasBeenSet = true; m_account = value; }

    /**
     * <p>The account ID to revoke access from.</p>
     */
    inline void SetAccount(Aws::String&& value) { m_accountHasBeenSet = true; m_account = std::move(value); }

    /**
     * <p>The account ID to revoke access from.</p>
     */
    inline void SetAccount(const char* value) { m_accountHasBeenSet = true; m_account.assign(value); }

    /**
     * <p>The account ID to revoke access from.</p>
     */
    inline RevokeVpcEndpointAccessRequest& WithAccount(const Aws::String& value) { SetAccount(value); return *this;}

    /**
     * <p>The account ID to revoke access from.</p>
     */
    inline RevokeVpcEndpointAccessRequest& WithAccount(Aws::String&& value) { SetAccount(std::move(value)); return *this;}

    /**
     * <p>The account ID to revoke access from.</p>
     */
    inline RevokeVpcEndpointAccessRequest& WithAccount(const char* value) { SetAccount(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_account;
    bool m_accountHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
