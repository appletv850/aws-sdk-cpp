﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies a <code>grok</code> classifier for <code>CreateClassifier</code> to
   * create.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateGrokClassifierRequest">AWS
   * API Reference</a></p>
   */
  class AWS_GLUE_API CreateGrokClassifierRequest
  {
  public:
    CreateGrokClassifierRequest();
    CreateGrokClassifierRequest(Aws::Utils::Json::JsonView jsonValue);
    CreateGrokClassifierRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An identifier of the data format that the classifier matches, such as
     * Twitter, JSON, Omniture logs, Amazon CloudWatch Logs, and so on.</p>
     */
    inline const Aws::String& GetClassification() const{ return m_classification; }

    /**
     * <p>An identifier of the data format that the classifier matches, such as
     * Twitter, JSON, Omniture logs, Amazon CloudWatch Logs, and so on.</p>
     */
    inline bool ClassificationHasBeenSet() const { return m_classificationHasBeenSet; }

    /**
     * <p>An identifier of the data format that the classifier matches, such as
     * Twitter, JSON, Omniture logs, Amazon CloudWatch Logs, and so on.</p>
     */
    inline void SetClassification(const Aws::String& value) { m_classificationHasBeenSet = true; m_classification = value; }

    /**
     * <p>An identifier of the data format that the classifier matches, such as
     * Twitter, JSON, Omniture logs, Amazon CloudWatch Logs, and so on.</p>
     */
    inline void SetClassification(Aws::String&& value) { m_classificationHasBeenSet = true; m_classification = std::move(value); }

    /**
     * <p>An identifier of the data format that the classifier matches, such as
     * Twitter, JSON, Omniture logs, Amazon CloudWatch Logs, and so on.</p>
     */
    inline void SetClassification(const char* value) { m_classificationHasBeenSet = true; m_classification.assign(value); }

    /**
     * <p>An identifier of the data format that the classifier matches, such as
     * Twitter, JSON, Omniture logs, Amazon CloudWatch Logs, and so on.</p>
     */
    inline CreateGrokClassifierRequest& WithClassification(const Aws::String& value) { SetClassification(value); return *this;}

    /**
     * <p>An identifier of the data format that the classifier matches, such as
     * Twitter, JSON, Omniture logs, Amazon CloudWatch Logs, and so on.</p>
     */
    inline CreateGrokClassifierRequest& WithClassification(Aws::String&& value) { SetClassification(std::move(value)); return *this;}

    /**
     * <p>An identifier of the data format that the classifier matches, such as
     * Twitter, JSON, Omniture logs, Amazon CloudWatch Logs, and so on.</p>
     */
    inline CreateGrokClassifierRequest& WithClassification(const char* value) { SetClassification(value); return *this;}


    /**
     * <p>The name of the new classifier.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the new classifier.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the new classifier.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the new classifier.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the new classifier.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the new classifier.</p>
     */
    inline CreateGrokClassifierRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the new classifier.</p>
     */
    inline CreateGrokClassifierRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the new classifier.</p>
     */
    inline CreateGrokClassifierRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The grok pattern used by this classifier.</p>
     */
    inline const Aws::String& GetGrokPattern() const{ return m_grokPattern; }

    /**
     * <p>The grok pattern used by this classifier.</p>
     */
    inline bool GrokPatternHasBeenSet() const { return m_grokPatternHasBeenSet; }

    /**
     * <p>The grok pattern used by this classifier.</p>
     */
    inline void SetGrokPattern(const Aws::String& value) { m_grokPatternHasBeenSet = true; m_grokPattern = value; }

    /**
     * <p>The grok pattern used by this classifier.</p>
     */
    inline void SetGrokPattern(Aws::String&& value) { m_grokPatternHasBeenSet = true; m_grokPattern = std::move(value); }

    /**
     * <p>The grok pattern used by this classifier.</p>
     */
    inline void SetGrokPattern(const char* value) { m_grokPatternHasBeenSet = true; m_grokPattern.assign(value); }

    /**
     * <p>The grok pattern used by this classifier.</p>
     */
    inline CreateGrokClassifierRequest& WithGrokPattern(const Aws::String& value) { SetGrokPattern(value); return *this;}

    /**
     * <p>The grok pattern used by this classifier.</p>
     */
    inline CreateGrokClassifierRequest& WithGrokPattern(Aws::String&& value) { SetGrokPattern(std::move(value)); return *this;}

    /**
     * <p>The grok pattern used by this classifier.</p>
     */
    inline CreateGrokClassifierRequest& WithGrokPattern(const char* value) { SetGrokPattern(value); return *this;}


    /**
     * <p>Optional custom grok patterns used by this classifier.</p>
     */
    inline const Aws::String& GetCustomPatterns() const{ return m_customPatterns; }

    /**
     * <p>Optional custom grok patterns used by this classifier.</p>
     */
    inline bool CustomPatternsHasBeenSet() const { return m_customPatternsHasBeenSet; }

    /**
     * <p>Optional custom grok patterns used by this classifier.</p>
     */
    inline void SetCustomPatterns(const Aws::String& value) { m_customPatternsHasBeenSet = true; m_customPatterns = value; }

    /**
     * <p>Optional custom grok patterns used by this classifier.</p>
     */
    inline void SetCustomPatterns(Aws::String&& value) { m_customPatternsHasBeenSet = true; m_customPatterns = std::move(value); }

    /**
     * <p>Optional custom grok patterns used by this classifier.</p>
     */
    inline void SetCustomPatterns(const char* value) { m_customPatternsHasBeenSet = true; m_customPatterns.assign(value); }

    /**
     * <p>Optional custom grok patterns used by this classifier.</p>
     */
    inline CreateGrokClassifierRequest& WithCustomPatterns(const Aws::String& value) { SetCustomPatterns(value); return *this;}

    /**
     * <p>Optional custom grok patterns used by this classifier.</p>
     */
    inline CreateGrokClassifierRequest& WithCustomPatterns(Aws::String&& value) { SetCustomPatterns(std::move(value)); return *this;}

    /**
     * <p>Optional custom grok patterns used by this classifier.</p>
     */
    inline CreateGrokClassifierRequest& WithCustomPatterns(const char* value) { SetCustomPatterns(value); return *this;}

  private:

    Aws::String m_classification;
    bool m_classificationHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_grokPattern;
    bool m_grokPatternHasBeenSet = false;

    Aws::String m_customPatterns;
    bool m_customPatternsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
