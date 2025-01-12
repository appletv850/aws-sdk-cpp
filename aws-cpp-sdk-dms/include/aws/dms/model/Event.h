﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/SourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Describes an identifiable significant activity that affects a replication
   * instance or task. This object can provide the message, the available event
   * categories, the date and source of the event, and the DMS resource
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/Event">AWS API
   * Reference</a></p>
   */
  class AWS_DATABASEMIGRATIONSERVICE_API Event
  {
  public:
    Event();
    Event(Aws::Utils::Json::JsonView jsonValue);
    Event& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The identifier of an event source.</p>
     */
    inline const Aws::String& GetSourceIdentifier() const{ return m_sourceIdentifier; }

    /**
     * <p> The identifier of an event source.</p>
     */
    inline bool SourceIdentifierHasBeenSet() const { return m_sourceIdentifierHasBeenSet; }

    /**
     * <p> The identifier of an event source.</p>
     */
    inline void SetSourceIdentifier(const Aws::String& value) { m_sourceIdentifierHasBeenSet = true; m_sourceIdentifier = value; }

    /**
     * <p> The identifier of an event source.</p>
     */
    inline void SetSourceIdentifier(Aws::String&& value) { m_sourceIdentifierHasBeenSet = true; m_sourceIdentifier = std::move(value); }

    /**
     * <p> The identifier of an event source.</p>
     */
    inline void SetSourceIdentifier(const char* value) { m_sourceIdentifierHasBeenSet = true; m_sourceIdentifier.assign(value); }

    /**
     * <p> The identifier of an event source.</p>
     */
    inline Event& WithSourceIdentifier(const Aws::String& value) { SetSourceIdentifier(value); return *this;}

    /**
     * <p> The identifier of an event source.</p>
     */
    inline Event& WithSourceIdentifier(Aws::String&& value) { SetSourceIdentifier(std::move(value)); return *this;}

    /**
     * <p> The identifier of an event source.</p>
     */
    inline Event& WithSourceIdentifier(const char* value) { SetSourceIdentifier(value); return *this;}


    /**
     * <p> The type of DMS resource that generates events. </p> <p>Valid values:
     * replication-instance | endpoint | replication-task</p>
     */
    inline const SourceType& GetSourceType() const{ return m_sourceType; }

    /**
     * <p> The type of DMS resource that generates events. </p> <p>Valid values:
     * replication-instance | endpoint | replication-task</p>
     */
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }

    /**
     * <p> The type of DMS resource that generates events. </p> <p>Valid values:
     * replication-instance | endpoint | replication-task</p>
     */
    inline void SetSourceType(const SourceType& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /**
     * <p> The type of DMS resource that generates events. </p> <p>Valid values:
     * replication-instance | endpoint | replication-task</p>
     */
    inline void SetSourceType(SourceType&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }

    /**
     * <p> The type of DMS resource that generates events. </p> <p>Valid values:
     * replication-instance | endpoint | replication-task</p>
     */
    inline Event& WithSourceType(const SourceType& value) { SetSourceType(value); return *this;}

    /**
     * <p> The type of DMS resource that generates events. </p> <p>Valid values:
     * replication-instance | endpoint | replication-task</p>
     */
    inline Event& WithSourceType(SourceType&& value) { SetSourceType(std::move(value)); return *this;}


    /**
     * <p>The event message.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The event message.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The event message.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The event message.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The event message.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The event message.</p>
     */
    inline Event& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The event message.</p>
     */
    inline Event& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The event message.</p>
     */
    inline Event& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The event categories available for the specified source type.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEventCategories() const{ return m_eventCategories; }

    /**
     * <p>The event categories available for the specified source type.</p>
     */
    inline bool EventCategoriesHasBeenSet() const { return m_eventCategoriesHasBeenSet; }

    /**
     * <p>The event categories available for the specified source type.</p>
     */
    inline void SetEventCategories(const Aws::Vector<Aws::String>& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories = value; }

    /**
     * <p>The event categories available for the specified source type.</p>
     */
    inline void SetEventCategories(Aws::Vector<Aws::String>&& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories = std::move(value); }

    /**
     * <p>The event categories available for the specified source type.</p>
     */
    inline Event& WithEventCategories(const Aws::Vector<Aws::String>& value) { SetEventCategories(value); return *this;}

    /**
     * <p>The event categories available for the specified source type.</p>
     */
    inline Event& WithEventCategories(Aws::Vector<Aws::String>&& value) { SetEventCategories(std::move(value)); return *this;}

    /**
     * <p>The event categories available for the specified source type.</p>
     */
    inline Event& AddEventCategories(const Aws::String& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories.push_back(value); return *this; }

    /**
     * <p>The event categories available for the specified source type.</p>
     */
    inline Event& AddEventCategories(Aws::String&& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories.push_back(std::move(value)); return *this; }

    /**
     * <p>The event categories available for the specified source type.</p>
     */
    inline Event& AddEventCategories(const char* value) { m_eventCategoriesHasBeenSet = true; m_eventCategories.push_back(value); return *this; }


    /**
     * <p>The date of the event.</p>
     */
    inline const Aws::Utils::DateTime& GetDate() const{ return m_date; }

    /**
     * <p>The date of the event.</p>
     */
    inline bool DateHasBeenSet() const { return m_dateHasBeenSet; }

    /**
     * <p>The date of the event.</p>
     */
    inline void SetDate(const Aws::Utils::DateTime& value) { m_dateHasBeenSet = true; m_date = value; }

    /**
     * <p>The date of the event.</p>
     */
    inline void SetDate(Aws::Utils::DateTime&& value) { m_dateHasBeenSet = true; m_date = std::move(value); }

    /**
     * <p>The date of the event.</p>
     */
    inline Event& WithDate(const Aws::Utils::DateTime& value) { SetDate(value); return *this;}

    /**
     * <p>The date of the event.</p>
     */
    inline Event& WithDate(Aws::Utils::DateTime&& value) { SetDate(std::move(value)); return *this;}

  private:

    Aws::String m_sourceIdentifier;
    bool m_sourceIdentifierHasBeenSet = false;

    SourceType m_sourceType;
    bool m_sourceTypeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Vector<Aws::String> m_eventCategories;
    bool m_eventCategoriesHasBeenSet = false;

    Aws::Utils::DateTime m_date;
    bool m_dateHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
