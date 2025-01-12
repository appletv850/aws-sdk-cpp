﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/s3-crt/model/AnalyticsS3BucketDestination.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Crt
{
namespace Model
{

  /**
   * <p>Where to publish the analytics results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/AnalyticsExportDestination">AWS
   * API Reference</a></p>
   */
  class AWS_S3CRT_API AnalyticsExportDestination
  {
  public:
    AnalyticsExportDestination();
    AnalyticsExportDestination(const Aws::Utils::Xml::XmlNode& xmlNode);
    AnalyticsExportDestination& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>A destination signifying output to an S3 bucket.</p>
     */
    inline const AnalyticsS3BucketDestination& GetS3BucketDestination() const{ return m_s3BucketDestination; }

    /**
     * <p>A destination signifying output to an S3 bucket.</p>
     */
    inline bool S3BucketDestinationHasBeenSet() const { return m_s3BucketDestinationHasBeenSet; }

    /**
     * <p>A destination signifying output to an S3 bucket.</p>
     */
    inline void SetS3BucketDestination(const AnalyticsS3BucketDestination& value) { m_s3BucketDestinationHasBeenSet = true; m_s3BucketDestination = value; }

    /**
     * <p>A destination signifying output to an S3 bucket.</p>
     */
    inline void SetS3BucketDestination(AnalyticsS3BucketDestination&& value) { m_s3BucketDestinationHasBeenSet = true; m_s3BucketDestination = std::move(value); }

    /**
     * <p>A destination signifying output to an S3 bucket.</p>
     */
    inline AnalyticsExportDestination& WithS3BucketDestination(const AnalyticsS3BucketDestination& value) { SetS3BucketDestination(value); return *this;}

    /**
     * <p>A destination signifying output to an S3 bucket.</p>
     */
    inline AnalyticsExportDestination& WithS3BucketDestination(AnalyticsS3BucketDestination&& value) { SetS3BucketDestination(std::move(value)); return *this;}

  private:

    AnalyticsS3BucketDestination m_s3BucketDestination;
    bool m_s3BucketDestinationHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Crt
} // namespace Aws
