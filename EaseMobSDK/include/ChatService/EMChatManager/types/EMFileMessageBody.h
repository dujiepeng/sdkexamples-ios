/*!
 @header EMFileMessageBody.h
 @abstract 聊天的文件消息体对象类型
 @author EaseMob Inc.
 @version 1.00 2014/01/01 Creation (1.00)
 */

#import "EMMessageBody.h"

@class EMChatFile;

/*!
 @class
 @abstract 聊天的文件消息体对象
 */
@interface EMFileMessageBody : EMMessageBody

/*!
 @property
 @abstract 文件消息体的显示名
 */
@property (nonatomic, readonly) NSString *displayName;

/*!
 @property
 @abstract 文件消息体的本地文件路径
 */
@property (nonatomic, readonly) NSString *localPath;

/*!
 @property
 @abstract 文件消息体的服务器远程文件路径
 */
@property (nonatomic, copy) NSString *remotePath;

/*!
 @property
 @abstract 文件消息体的文件长度, 以字节为单位
 */
@property (nonatomic, readonly) long long fileLength;

/*!
 @method
 @abstract 以文件对象创建文件消息体实例
 @discussion
 @param aChatFile 文件对象
 @result 文件消息体
 */
- (id)initWithChatObject:(EMChatFile *)aChatFile;

@end