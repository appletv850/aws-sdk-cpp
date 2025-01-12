﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/s3-crt/model/ReplicaModificationsStatus.h>
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
   * <p>A filter that you can specify for selection for modifications on replicas.
   * Amazon S3 doesn't replicate replica modifications by default. In the latest
   * version of replication configuration (when <code>Filter</code> is specified),
   * you can specify this element and set the status to <code>Enabled</code> to
   * replicate modifications on replicas. </p>  <p> If you don't specify the
   * <code>Filter</code> element, Amazon S3 assumes that the replication
   * configuration is the earlier version, V1. In the earlier version, this element
   * is not allowed.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/ReplicaModifications">AWS
   * API Reference</a></p>
   */
  class AWS_S3CRT_API ReplicaModifications
  {
  public:
    ReplicaModifications();
    ReplicaModifications(const Aws::Utils::Xml::XmlNode& xmlNode);
    ReplicaModifications& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Specifies whether Amazon S3 replicates modifications on replicas.</p>
     */
    inline const ReplicaModificationsStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Specifies whether Amazon S3 replicates modifications on replicas.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Specifies whether Amazon S3 replicates modifications on replicas.</p>
     */
    inline void SetStatus(const ReplicaModificationsStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Specifies whether Amazon S3 replicates modifications on replicas.</p>
     */
    inline void SetStatus(ReplicaModificationsStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Specifies whether Amazon S3 replicates modifications on replicas.</p>
     */
    inline ReplicaModifications& WithStatus(const ReplicaModificationsStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Specifies whether Amazon S3 replicates modifications on replicas.</p>
     */
    inline ReplicaModifications& WithStatus(ReplicaModificationsStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    ReplicaModificationsStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Crt
} // namespace Aws
