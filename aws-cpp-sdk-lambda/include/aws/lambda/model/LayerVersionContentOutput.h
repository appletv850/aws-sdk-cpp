﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
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
namespace Lambda
{
namespace Model
{

  /**
   * <p>Details about a version of an <a
   * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">Lambda
   * layer</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/LayerVersionContentOutput">AWS
   * API Reference</a></p>
   */
  class AWS_LAMBDA_API LayerVersionContentOutput
  {
  public:
    LayerVersionContentOutput();
    LayerVersionContentOutput(Aws::Utils::Json::JsonView jsonValue);
    LayerVersionContentOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A link to the layer archive in Amazon S3 that is valid for 10 minutes.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>A link to the layer archive in Amazon S3 that is valid for 10 minutes.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>A link to the layer archive in Amazon S3 that is valid for 10 minutes.</p>
     */
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>A link to the layer archive in Amazon S3 that is valid for 10 minutes.</p>
     */
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>A link to the layer archive in Amazon S3 that is valid for 10 minutes.</p>
     */
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    /**
     * <p>A link to the layer archive in Amazon S3 that is valid for 10 minutes.</p>
     */
    inline LayerVersionContentOutput& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>A link to the layer archive in Amazon S3 that is valid for 10 minutes.</p>
     */
    inline LayerVersionContentOutput& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>A link to the layer archive in Amazon S3 that is valid for 10 minutes.</p>
     */
    inline LayerVersionContentOutput& WithLocation(const char* value) { SetLocation(value); return *this;}


    /**
     * <p>The SHA-256 hash of the layer archive.</p>
     */
    inline const Aws::String& GetCodeSha256() const{ return m_codeSha256; }

    /**
     * <p>The SHA-256 hash of the layer archive.</p>
     */
    inline bool CodeSha256HasBeenSet() const { return m_codeSha256HasBeenSet; }

    /**
     * <p>The SHA-256 hash of the layer archive.</p>
     */
    inline void SetCodeSha256(const Aws::String& value) { m_codeSha256HasBeenSet = true; m_codeSha256 = value; }

    /**
     * <p>The SHA-256 hash of the layer archive.</p>
     */
    inline void SetCodeSha256(Aws::String&& value) { m_codeSha256HasBeenSet = true; m_codeSha256 = std::move(value); }

    /**
     * <p>The SHA-256 hash of the layer archive.</p>
     */
    inline void SetCodeSha256(const char* value) { m_codeSha256HasBeenSet = true; m_codeSha256.assign(value); }

    /**
     * <p>The SHA-256 hash of the layer archive.</p>
     */
    inline LayerVersionContentOutput& WithCodeSha256(const Aws::String& value) { SetCodeSha256(value); return *this;}

    /**
     * <p>The SHA-256 hash of the layer archive.</p>
     */
    inline LayerVersionContentOutput& WithCodeSha256(Aws::String&& value) { SetCodeSha256(std::move(value)); return *this;}

    /**
     * <p>The SHA-256 hash of the layer archive.</p>
     */
    inline LayerVersionContentOutput& WithCodeSha256(const char* value) { SetCodeSha256(value); return *this;}


    /**
     * <p>The size of the layer archive in bytes.</p>
     */
    inline long long GetCodeSize() const{ return m_codeSize; }

    /**
     * <p>The size of the layer archive in bytes.</p>
     */
    inline bool CodeSizeHasBeenSet() const { return m_codeSizeHasBeenSet; }

    /**
     * <p>The size of the layer archive in bytes.</p>
     */
    inline void SetCodeSize(long long value) { m_codeSizeHasBeenSet = true; m_codeSize = value; }

    /**
     * <p>The size of the layer archive in bytes.</p>
     */
    inline LayerVersionContentOutput& WithCodeSize(long long value) { SetCodeSize(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for a signing profile version.</p>
     */
    inline const Aws::String& GetSigningProfileVersionArn() const{ return m_signingProfileVersionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for a signing profile version.</p>
     */
    inline bool SigningProfileVersionArnHasBeenSet() const { return m_signingProfileVersionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for a signing profile version.</p>
     */
    inline void SetSigningProfileVersionArn(const Aws::String& value) { m_signingProfileVersionArnHasBeenSet = true; m_signingProfileVersionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for a signing profile version.</p>
     */
    inline void SetSigningProfileVersionArn(Aws::String&& value) { m_signingProfileVersionArnHasBeenSet = true; m_signingProfileVersionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for a signing profile version.</p>
     */
    inline void SetSigningProfileVersionArn(const char* value) { m_signingProfileVersionArnHasBeenSet = true; m_signingProfileVersionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for a signing profile version.</p>
     */
    inline LayerVersionContentOutput& WithSigningProfileVersionArn(const Aws::String& value) { SetSigningProfileVersionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for a signing profile version.</p>
     */
    inline LayerVersionContentOutput& WithSigningProfileVersionArn(Aws::String&& value) { SetSigningProfileVersionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for a signing profile version.</p>
     */
    inline LayerVersionContentOutput& WithSigningProfileVersionArn(const char* value) { SetSigningProfileVersionArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of a signing job.</p>
     */
    inline const Aws::String& GetSigningJobArn() const{ return m_signingJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of a signing job.</p>
     */
    inline bool SigningJobArnHasBeenSet() const { return m_signingJobArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a signing job.</p>
     */
    inline void SetSigningJobArn(const Aws::String& value) { m_signingJobArnHasBeenSet = true; m_signingJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a signing job.</p>
     */
    inline void SetSigningJobArn(Aws::String&& value) { m_signingJobArnHasBeenSet = true; m_signingJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a signing job.</p>
     */
    inline void SetSigningJobArn(const char* value) { m_signingJobArnHasBeenSet = true; m_signingJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a signing job.</p>
     */
    inline LayerVersionContentOutput& WithSigningJobArn(const Aws::String& value) { SetSigningJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a signing job.</p>
     */
    inline LayerVersionContentOutput& WithSigningJobArn(Aws::String&& value) { SetSigningJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a signing job.</p>
     */
    inline LayerVersionContentOutput& WithSigningJobArn(const char* value) { SetSigningJobArn(value); return *this;}

  private:

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_codeSha256;
    bool m_codeSha256HasBeenSet = false;

    long long m_codeSize;
    bool m_codeSizeHasBeenSet = false;

    Aws::String m_signingProfileVersionArn;
    bool m_signingProfileVersionArnHasBeenSet = false;

    Aws::String m_signingJobArn;
    bool m_signingJobArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
