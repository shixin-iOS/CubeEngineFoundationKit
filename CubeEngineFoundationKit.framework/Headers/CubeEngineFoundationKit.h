//
//  CubeEngineFoundationKit.h
//  CubeEngineFoundationKit
//
//  Created by jianchengpan on 2018/5/8.
//  Copyright © 2018年 CubeTeam. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for CubeEngineFoundationKit.
FOUNDATION_EXPORT double CubeEngineFoundationKitVersionNumber;

//! Project version string for CubeEngineFoundationKit.
FOUNDATION_EXPORT const unsigned char CubeEngineFoundationKitVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <CubeEngineFoundationKit/PublicHeader.h>

#pragma - mark dependence

#import <Genie/Genie.h>

#pragma mark - engine

#import <CubeEngineFoundationKit/CubeConfig.h>
#import <CubeEngineFoundationKit/CubeEngineWorkType.h>
#import <CubeEngineFoundationKit/CubeEngine.h>



#pragma mark - services
#import <CubeEngineFoundationKit/CubeService.h>
#import <CubeEngineFoundationKit/CubeUserService.h>
#import <CubeEngineFoundationKit/CubeMessageService.h>
#import <CubeEngineFoundationKit/CubeCallService.h>
#import <CubeEngineFoundationKit/CubeGroupService.h>
#import <CubeEngineFoundationKit/CubeConferenceService.h>
#import <CubeEngineFoundationKit/CubeFileService.h>
#import <CubeEngineFoundationKit/CubeShareDesktopService.h>
#import <CubeEngineFoundationKit/CubeWhiteboardService.h>
#import <CubeEngineFoundationKit/CubeMediaService.h>
#import <CubeEngineFoundationKit/CubeShareDesktopService.h>
#import <CubeEngineFoundationKit/CubeNetworkMonitorService.h>
#import <CubeEngineFoundationKit/CubeSettingService.h>
#import <CubeEngineFoundationKit/CubeMultiMediaManageService.h>



#pragma mark - service - Userservice

// ------ model ------
#import <CubeEngineFoundationKit/CubeUser.h>
#import <CubeEngineFoundationKit/CubeDeviceInfo.h>




#pragma mark - service - GroupService

// ------ model ------
#import <CubeEngineFoundationKit/CubeGroup.h>
#import <CubeEngineFoundationKit/CubeGroupMember.h>
#import <CubeEngineFoundationKit/CubeGroupConfig.h>
#import <CubeEngineFoundationKit/CubeGroupPageInfo.h>
#import <CubeEngineFoundationKit/CubeGroupQuery.h>

// ------ enum ------
#import <CubeEngineFoundationKit/CubeGroupType.h>
#import <CubeEngineFoundationKit/CubeMemberRole.h>

// ------ util ------
#import <CubeEngineFoundationKit/CubeGroupUtil.h>




#pragma mark - service - netWorkMonitor service
#import <CubeEngineFoundationKit/CubeNetworkState.h>




#pragma mark - service - SettingService

// ------ enum ------
#import <CubeEngineFoundationKit/CubeSetting.h>





#pragma mark - Public

// ------ Util ------

#import <CubeEngineFoundationKit/CubeJsonUtil.h>
#import <CubeEngineFoundationKit/CubeFileUtil.h>
#import <CubeEngineFoundationKit/CubeFilePathUtil.h>

//------ protocls
#import <CubeEngineFoundationKit/CubeJsonObject.h>

//------ model ------
#import <CubeEngineFoundationKit/CubeError.h>

// ------ Enum ------
//state
#import <CubeEngineFoundationKit/CubeConnectionState.h>
#import <CubeEngineFoundationKit/CubeServiceState.h>
//error
#import <CubeEngineFoundationKit/CubeErrorType.h>

//media
#import <CubeEngineFoundationKit/CubemediaType.h>
#import <CubeEngineFoundationKit/CubeCallType.h>

// file
#import <CubeEngineFoundationKit/CubeFileType.h>
#import <CubeEngineFoundationKit/CubeFilePermission.h>
// conference
#import <CubeEngineFoundationKit/CubeConferenceControlAction.h>
// call
#import <CubeEngineFoundationKit/CubeCallActionDefine.h>
