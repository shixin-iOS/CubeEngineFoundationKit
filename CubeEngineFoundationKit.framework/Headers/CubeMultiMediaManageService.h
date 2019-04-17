//
//  CubeMultiMediaManageService.h
//  CubeEngineFoundationKit
//
//  Created by Ashine on 2018/11/21.
//  Copyright © 2018年 CubeTeam. All rights reserved.
//

#import <CubeEngineFoundationKit/CubeService.h>

@protocol CubeMultiMediaManageServiceDelegate <NSObject>


/*
 @describe
 为了方便上层管理及查看登陆账号下的进行的所有会议、白板(包括该cubeId所在群组内进行,但未加入的),引擎在内存中维护了一系列会议及白板对象的集合,通过conferenceId、groupId、whiteBoardId的更新通知,可在对应服务中查询到更新的会议或白板对象.
 */

@optional
/**
 当前cubeId下所有会议的更新回调(包含未加入的会议的更新,包括会议的增删改操作)
 @note 不代表返回的集合中就说明当前cubeId或者其所在群组中正在进行该会议,需要进行查询操作来获取到具体会议对象(比如会议的销毁,需要通过该接口回调出销毁的会议id或其群id,再查询到该会议对象为空,即可确认该会议更新是指会议已经销毁),另外CubeEngine进行断网重联以后会同步一次最新的所有会议.保证了数据的可靠性
 @param conferences [groupId,conferenceId,...] groupId和conferenceId的集合, 提供了查询的条件,再通过改查询条件到对应服务中去查询具体的模型对象,查询结果如果存在该对象表明当前是存在该会议的,且该会议的所有信息已更新为最新状态
 */
- (void)onConferenceUpdateManage:(NSArray *)conferences;


/**
 @note 同上
 当前cubeId下所有白板更新回调

 @param whiteBoards [groupId,whiteBoardId,....]
 */
- (void)onWhiteBoardUpdateManage:(NSArray *)whiteBoards;


/**
 白板及会议更新的总回调及以上两个接口返回数据的总和
 @note 引擎提供了综合的回调接口,您可以通过此接口涵盖以上两种回调结果,通过conference取到会议的更新集合,通过whiteBoard取到白板更新集合
 @param updates {"conference":[groupId,conferenceId,...,..], "whiteBoard":[whiteBoardId,groupId,..,..]}
 */
- (void)onMultiMediaUpdateManage:(NSDictionary *)updates;



@end

@protocol CubeMultiMediaManageService <CubeService>

@property (nonatomic,weak) id<CubeMultiMediaManageServiceDelegate> delegate;

@end


