//
//  PlugIn.h
//  CMIOMinimalSample
//
//  Created by John Boiles  on 4/9/20.
//
//  CMIOMinimalSample is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 2 of the License, or
//  (at your option) any later version.
//
//  CMIOMinimalSample is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with CMIOMinimalSample. If not, see <http://www.gnu.org/licenses/>.

#import <Foundation/Foundation.h>
#import <CoreMediaIO/CMIOHardwarePlugIn.h>

#import "ObjectStore.h"
#import "MachClient.h"

NS_ASSUME_NONNULL_BEGIN

@interface PlugIn : NSObject <CMIOObject>

@property CMIOObjectID objectId;
@property (readonly) MachClient *machClient;

+ (PlugIn *)SharedPlugIn;

- (void)initialize;

- (void)teardown;

@end

NS_ASSUME_NONNULL_END