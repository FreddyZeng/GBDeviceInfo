//
//  GBDeviceInfo_OSX.h
//  GBDeviceInfo
//
//  Created by Luka Mirosevic on 14/03/2013.
//  Copyright (c) 2013 Goonbee. All rights reserved.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.

#import "GBDeviceInfoTypes_Common.h"
#import "GBDeviceInfoTypes_OSX.h"
#import "GBDeviceInfoInterface.h"

@interface GBDeviceInfo : NSObject <GBDeviceInfoInterface>

/**
 The raw system info string, e.g. "iMac13,2".
 */
@property (strong, atomic, readonly) NSString           *rawSystemInfoString;

/**
 The node name on the network, e.g. "MyMachine.local".
 */
@property (strong, atomic, readonly) NSString           *nodeName;

/**
 The device family. e.g. GBDeviceFamilyiMac.
 */
@property (assign, atomic, readonly) GBDeviceFamily     family;

/**
 The device version. e.g. {13, 2}.
 */
@property (assign, atomic, readonly) GBDeviceVersion    deviceVersion;

/**
 Information about the CPU.
 */
@property (assign, atomic, readonly) GBCPUInfo          cpuInfo;

/**
 Amount of physical memory (RAM) available to the system, in GB.
 */
@property (assign, atomic, readonly) CGFloat            physicalMemory;         // GB (gibi)

/**
 System byte order, e.g. GBByteOrderLittleEndian.
 */
@property (assign, atomic, readonly) GBByteOrder        systemByteOrder;

/**
 Information about the display.
 */
@property (assign, atomic, readonly) GBDisplayInfo      displayInfo;

/**
 Information about the system's OS. e.g. {10, 8, 2}.
 */
@property (assign, atomic, readonly) GBOSVersion        osVersion;

/**
 Indicates whether the app store is available on this machine.
 */
@property (assign, atomic, readonly) BOOL               isMacAppStoreAvailable; //YES if OSX >= 10.6.6

/**
 Indicates whether IAP is available on this machine.
 */
@property (assign, atomic, readonly) BOOL               isIAPAvailable;         //YES if OSX >= 10.7

@end
