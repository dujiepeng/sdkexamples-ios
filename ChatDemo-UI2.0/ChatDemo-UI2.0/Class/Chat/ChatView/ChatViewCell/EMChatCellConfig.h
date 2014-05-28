//
//  EMChatCellConfig.h
//  ChatDemo-UI2.0
//
//  Created by dujiepeng on 14-5-26.
//  Copyright (c) 2014年 dujiepeng. All rights reserved.
//

#ifndef EaseMob_EMChatCellConfig_h
#define EaseMob_EMChatCellConfig_h

#define CHATCELL_SPACING                                                // chatCell之间的间距

#define CHATCELL_HEAD_X_SPACING 8                                       // 头像距离cell边的距离
#define CHATCELL_HEAD_Y_SPACING 0                                       // 头像距离cell顶部的距离
#define CHATCELL_HEAD_SIZE 40                                           // chatCell中，头像的大小
#define CHATCELL_HEAD_DEFAULT_IMAGE @"chatListCellHead"                                 // 默认显示头像

#define CHATCELL_CHATNAME_HEAD_HEIGHT 4                                 // 头像距离名字的距离（群聊中，显示人名用）
#define CHATCELL_CHATNAMAE_HEIGHT 10                                    // nameLabel 高度

#define CHATCELL_BUBBLE_LEFT_IMAGE @"chat_receiver_bg"                  // 左bubbleView 默认图片
#define CHATCELL_BUBBLE_LEFT_HIGHLIGHT_IMAGE @"chat_receiver_bg"        // 左bubbleView 高亮图片
#define CHATCELL_BUBBLE_RIGHT_IMAGE @"chat_sender_bg"                   // 右bubbleView 默认图片
#define CHATCELL_BUBBLE_RIGHT_HIGHLIGHT_IMAGE @"chat_sender_bg"         // 右bubbleView 高亮图片
#define CHATCELL_BUBBLE_ARROW_WIDTH 4                                   // bubble箭头宽度
#define CHATCELL_BUBBLE_PADDING 5                                       // bubble距离头像的距离(实际距离是bubblePadding + ArrowWidth)
#define CHATCELL_BUBBLE_WITHIN_PADDING 8                                // bubble与内部控件的内边距
#define CHATCELL_BUBBLE_WIDTH 200                                       // chatBubble最大宽度(不算箭头宽度)
#define CHATCELL_BUBBLE_RIGHT_LEFT_CAP_WIDTH 5                          //  右侧时,bubble用于拉伸点的X坐标
#define CHATCELL_BUBBLE_RIGHT_TOP_CAP_HEIGHT 35                         //  右侧时,bubble用于拉伸点的Y坐标

#define CHATCELL_BUBBLE_LEFT_LEFT_CAP_WIDTH 35                          //  左侧时,bubble用于拉伸点的X坐标
#define CHATCELL_BUBBLE_LEFT_TOP_CAP_HEIGHT 35                          //  左侧时,bubble用于拉伸点的Y坐标


////////////////////////////////////////////////////
// textbubble
#define LABEL_FONT_SIZE 14
////////////////////////////////////////////////////
// imagebubble
#define IMAGE_MAX_SIZE 110

////////////////////////////////////////////////////
// locationbubble
#define LOCATION_DEFAULT_IMAGE @"chat_location_preview"
#define LOCATION_ADDRESS_SPACING 3                                      // 文字距离边框左右间距
#define LOCATION_ADDRESS_WIDTH 100                                      // 文字的最大宽度
#define LOCATION_ADDRESS_HEIGHT 30                                      // 文字的最大高度
#define LOCATION_ADDRESS_FONTSIZE 12
////////////////////////////////////////////////////
// voicebubble
#define VOICE_SPEAKER_IMAGE_WIDTH 30
#define VOICE_SPEAKER_IMAGE_HEIGHT 30

#define VOICE_LEFT_DEFAULT_IMAGE @"chat_receiver_audio_playing_full"
#define VOICE_LEFT_SPEAKER_IMAGE1 @"chat_receiver_audio_playing000"
#define VOICE_LEFT_SPEAKER_IMAGE2 @"chat_receiver_audio_playing001"
#define VOICE_LEFT_SPEAKER_IMAGE3 @"chat_receiver_audio_playing002"
#define VOICE_LEFT_SPEAKER_IMAGE4 @"chat_receiver_audio_playing003"

#define VOICE_RIGHT_DEFAULT_IMAGE @"chat_sender_audio_playing_full"
#define VOICE_RIGHT_SPEAKER_IMAGE1 @"chat_sender_audio_playing_000"
#define VOICE_RIGHT_SPEAKER_IMAGE2 @"chat_sender_audio_playing_001"
#define VOICE_RIGHT_SPEAKER_IMAGE3 @"chat_sender_audio_playing_002"
#define VOICE_RIGHT_SPEAKER_IMAGE4 @"chat_sender_audio_playing_003"


#define VOICE_TIMELABEL_WIDTH 30
#define VOICE_TIMELABEL_HEIGHT 30
#define VOICE_TIMELABEL_SPEAKER_SPACING 5

#endif