﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AnonymousUserEmbeddingExperienceConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

AnonymousUserEmbeddingExperienceConfiguration::AnonymousUserEmbeddingExperienceConfiguration() : 
    m_dashboardHasBeenSet(false),
    m_dashboardVisualHasBeenSet(false)
{
}

AnonymousUserEmbeddingExperienceConfiguration::AnonymousUserEmbeddingExperienceConfiguration(JsonView jsonValue) : 
    m_dashboardHasBeenSet(false),
    m_dashboardVisualHasBeenSet(false)
{
  *this = jsonValue;
}

AnonymousUserEmbeddingExperienceConfiguration& AnonymousUserEmbeddingExperienceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Dashboard"))
  {
    m_dashboard = jsonValue.GetObject("Dashboard");

    m_dashboardHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DashboardVisual"))
  {
    m_dashboardVisual = jsonValue.GetObject("DashboardVisual");

    m_dashboardVisualHasBeenSet = true;
  }

  return *this;
}

JsonValue AnonymousUserEmbeddingExperienceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_dashboardHasBeenSet)
  {
   payload.WithObject("Dashboard", m_dashboard.Jsonize());

  }

  if(m_dashboardVisualHasBeenSet)
  {
   payload.WithObject("DashboardVisual", m_dashboardVisual.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
