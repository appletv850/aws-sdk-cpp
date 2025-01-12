﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/OnSuccess.h>
#include <aws/lambda/model/OnFailure.h>
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
namespace Lambda
{
namespace Model
{

  /**
   * <p>A configuration object that specifies the destination of an event after
   * Lambda processes it.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DestinationConfig">AWS
   * API Reference</a></p>
   */
  class AWS_LAMBDA_API DestinationConfig
  {
  public:
    DestinationConfig();
    DestinationConfig(Aws::Utils::Json::JsonView jsonValue);
    DestinationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The destination configuration for successful invocations.</p>
     */
    inline const OnSuccess& GetOnSuccess() const{ return m_onSuccess; }

    /**
     * <p>The destination configuration for successful invocations.</p>
     */
    inline bool OnSuccessHasBeenSet() const { return m_onSuccessHasBeenSet; }

    /**
     * <p>The destination configuration for successful invocations.</p>
     */
    inline void SetOnSuccess(const OnSuccess& value) { m_onSuccessHasBeenSet = true; m_onSuccess = value; }

    /**
     * <p>The destination configuration for successful invocations.</p>
     */
    inline void SetOnSuccess(OnSuccess&& value) { m_onSuccessHasBeenSet = true; m_onSuccess = std::move(value); }

    /**
     * <p>The destination configuration for successful invocations.</p>
     */
    inline DestinationConfig& WithOnSuccess(const OnSuccess& value) { SetOnSuccess(value); return *this;}

    /**
     * <p>The destination configuration for successful invocations.</p>
     */
    inline DestinationConfig& WithOnSuccess(OnSuccess&& value) { SetOnSuccess(std::move(value)); return *this;}


    /**
     * <p>The destination configuration for failed invocations.</p>
     */
    inline const OnFailure& GetOnFailure() const{ return m_onFailure; }

    /**
     * <p>The destination configuration for failed invocations.</p>
     */
    inline bool OnFailureHasBeenSet() const { return m_onFailureHasBeenSet; }

    /**
     * <p>The destination configuration for failed invocations.</p>
     */
    inline void SetOnFailure(const OnFailure& value) { m_onFailureHasBeenSet = true; m_onFailure = value; }

    /**
     * <p>The destination configuration for failed invocations.</p>
     */
    inline void SetOnFailure(OnFailure&& value) { m_onFailureHasBeenSet = true; m_onFailure = std::move(value); }

    /**
     * <p>The destination configuration for failed invocations.</p>
     */
    inline DestinationConfig& WithOnFailure(const OnFailure& value) { SetOnFailure(value); return *this;}

    /**
     * <p>The destination configuration for failed invocations.</p>
     */
    inline DestinationConfig& WithOnFailure(OnFailure&& value) { SetOnFailure(std::move(value)); return *this;}

  private:

    OnSuccess m_onSuccess;
    bool m_onSuccessHasBeenSet = false;

    OnFailure m_onFailure;
    bool m_onFailureHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
