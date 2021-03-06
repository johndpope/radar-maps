/* Copyright (c) 2009 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//
//  GDataFeedCalendarSettings.m
//

#import "GDataFeedCalendarSettings.h"
#import "GDataEntryCalendar.h"
#import "GDataEntryCalendarEvent.h"

@implementation GDataFeedCalendarSettings

+ (NSString *)standardFeedKind {
  return kGDataCategoryCalendarSettings;
}

+ (void)load {
  [self registerFeedClass];
}

+ (NSString *)defaultServiceVersion {
  return kGDataCalendarDefaultServiceVersion;
}

- (Class)classForEntries {
  // TODO - temporary; waiting for kind category elements per http://b/1694419
  // so we can remove this method
  return NSClassFromString(@"GDataEntryCalendarSettings");
}

@end
