//
//  CubeGroupType.h
//  CubeEngine
//
//  Created by zhangdi on 2018/5/15.
//  Copyright © 2018年 CubeTeam. All rights reserved.
//

#ifndef CubeGroupType_h
#define CubeGroupType_h


// groupTypeString
// fs type
// 普通群组
#define CubeGroupType_Normal_String                    @"normal"
// 多人语音
#define CubeGroupType_Voice_Call_String                @"voice-call"
// 多人视频
#define CubeGroupType_Video_Call_String                @"video-call"
// 音频会议
#define CubeGroupType_Voice_Conference_String          @"voice-conference"
// 视频会议
#define CubeGroupType_Video_Conference_String          @"video-conference"
// 融屏会议
#define CubeGroupType_Mux_Conference_String            @"mux-conference"
// 思科语音会议
#define CubeGroupType_Voice_Cisco_Conference_String    @"voice-cisco-conference"
// 思科视频会议
#define CubeGroupType_Video_Cisco_Conference_String    @"video-cisco-conference"
//屏幕分享会议 （webRTC模式）
#define CubeGroupType_Share_Desktop_Conference_String  @"share-screen"
// 共享桌面
#define CubeGroupType_Share_Desktop_String             @"share-desktop"
// 共享白板
#define CubeGroupType_Share_WB_String                  @"share-wb"
// 直播
#define CubeGroupType_Live_String                      @"live"

// sfu type
// 多人语音
#define CubeGroupType_Voice_Call_sfu_String                @"sfu-voice-call"
// 多人视频
#define CubeGroupType_Video_Call_sfu_String                @"sfu-video-call"
// 音频会议
#define CubeGroupType_Voice_Conference_sfu_String          @"sfu-voice-conference"
// 视频会议
#define CubeGroupType_Video_Conference_sfu_String          @"sfu-video-conference"
// 思科语音会议
#define CubeGroupType_Voice_Cisco_Conference_sfu_String    @"sfu-voice-cisco-conference"
// 思科视频会议
#define CubeGroupType_Video_Cisco_Conference_sfu_String    @"sfu-video-cisco-conference"
// 共享桌面
#define CubeGroupType_Share_Desktop_sfu_String             @"sfu-share-desktop"
// 共享白板
#define CubeGroupType_Share_WB_sfu_String                  @"sfu-share-wb"


typedef enum : NSUInteger {
    // fs type
    CubeGroupType_Normal                    = 1 << 0,                // 普通群组
    CubeGroupType_Voice_Call                = 1 << 1,                // 多人语音
    CubeGroupType_Video_Call                = 1 << 2,                // 多人视频
    CubeGroupType_Voice_Conference          = 1 << 3,                // 音频会议
    CubeGroupType_Video_Conference          = 1 << 4,                // 视频会议
    CubeGroupType_Mux_Conference            = 1 << 5,                // 融屏会议
    CubeGroupType_Voice_Cisco_Conference    = 1 << 6,                // 思科语音会议
    CubeGroupType_Video_Cisco_Conference    = 1 << 7,                // 思科视频会议
    CubeGroupType_Share_Desktop_Conference  = 1 << 8,                // 屏幕分享会议 （webRTC模式）
    CubeGroupType_Share_Desktop             = 1 << 9,                // 共享桌面
    CubeGroupType_Share_WB                  = 1 << 10,               // 共享白板
    CubeGroupType_Live                      = 1 << 11,               // 直播
    
    // sfu type
    CubeGroupType_Voice_Call_sfu                 = 1 << 12,                // 多人语音
    CubeGroupType_Video_Call_sfu                 = 1 << 13,                // 多人视频
    CubeGroupType_Voice_Conference_sfu           = 1 << 14,                // 音频会议
    CubeGroupType_Video_Conference_sfu           = 1 << 15,                // 视频会议
    CubeGroupType_Voice_Cisco_Conference_sfu     = 1 << 16,                // 思科语音会议
    CubeGroupType_Video_Cisco_Conference_sfu     = 1 << 17,                // 思科视频会议
    CubeGroupType_Share_Desktop_sfu              = 1 << 18,                // 共享桌面
    CubeGroupType_Share_WB_sfu                   = 1 << 19,                // 共享白板
} CubeGroupType;


// All kind of type of group multi-media macro define
#define CubeGroupType_All (CubeGroupType_Normal | CubeGroupType_Voice_Call | CubeGroupType_Video_Call | CubeGroupType_Voice_Conference | CubeGroupType_Video_Conference | CubeGroupType_Mux_Conference | CubeGroupType_Voice_Cisco_Conference | CubeGroupType_Video_Cisco_Conference | CubeGroupType_Share_Desktop_Conference | CubeGroupType_Share_Desktop | CubeGroupType_Share_WB | CubeGroupType_Live)

#define CubeCallConferenceType_Video (CubeGroupType_Video_Conference | CubeGroupType_Video_Call | CubeGroupType_Video_Conference_sfu | CubeGroupType_Video_Call_sfu | CubeGroupType_Video_Cisco_Conference | CubeGroupType_Video_Cisco_Conference_sfu)

#define CubeCallConferenceType_Voice (CubeGroupType_Voice_Conference | CubeGroupType_Voice_Call | CubeGroupType_Voice_Conference_sfu | CubeGroupType_Voice_Call_sfu | CubeGroupType_Voice_Cisco_Conference | CubeGroupType_Voice_Cisco_Conference_sfu)


#endif /* CubeGroupType_h */
