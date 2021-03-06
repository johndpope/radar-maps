/* Copyright (c) 2007 Google Inc.
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
//  GDataColumnCount.h
//

#import "GDataObject.h"

// For rowCount and colCount, like:
//   <gs:rowCount>100</gs:rowCount>
//
// http://code.google.com/apis/spreadsheets/reference.html#gs_reference

@interface GDataRowColumnCount : GDataObject <NSCopying> {
  int count_;
}

- (id)initWithXMLElement:(NSXMLElement *)element
                  parent:(GDataObject *)parent;

- (NSXMLElement *)XMLElement;

- (int)count;
- (void)setCount:(int)val;

@end

@interface GDataColumnCount : GDataRowColumnCount <GDataExtension>

+ (GDataColumnCount *)columnCountWithInt:(int)val;

@end

@interface GDataRowCount : GDataRowColumnCount <GDataExtension>

+ (GDataRowCount *)rowCountWithInt:(int)val;

@end

