/***************************************************************
模块 ： 缓存队列定义                        
文件 ： oal_queue.h
作者 ： Ripple Lee(libozjw@163.com)
版本 ： V1.0
日期 ： 2017-01-18
*****************************************************************/
#ifndef __OAL_QUEUE_H__
#define __OAL_QUEUE_H__

#include "oal_typedef.h"
#include "oal_log.h"

#ifdef __cplusplus
extern "C" {
#endif

#define TIMEOUT_NONE          0   /* 不等待超时 */
#define TIMEOUT_FOREVER      -1   /* 永远等待   */

typedef void * TQueHndl;

/******************************************************************************************
* 函数名称: QueCreate
* 函数功能: 创建一个队列
* 输入参数: maxLen:最大的队列节点数
* 输出参数: 无
* 函数返回: 队列句柄
*******************************************************************************************/
OAL_API TQueHndl QueCreate(u32 maxLen);

/******************************************************************************************
* 函数名称: QueDelete
* 函数功能: 删除队列。对应节点的内存，如果分配者不回收将造成泄露
* 输入参数: hndl： 队列句柄
* 输出参数: 无
* 函数返回: 成功，则返回SUCCESS，失败，则返回FAILURE
*******************************************************************************************/
OAL_API int QueDelete(TQueHndl hndl);

/******************************************************************************************
* 函数名称: QueSize
* 函数功能: 获取队列节点数
* 输入参数: hndl： 队列句柄
* 输出参数: 无
* 函数返回: 成功，则返回节点数，失败，则返回FAILURE
*******************************************************************************************/
OAL_API int QueSize(TQueHndl hndl);

/******************************************************************************************
* 函数名称: QueEmpty
* 函数功能: 清空队列。对应节点的内存，如果分配者不回收将造成泄露
* 输入参数: hndl： 队列句柄
* 输出参数: 无
* 函数返回: 成功，则返回SUCCESS，失败，则返回FAILURE
*******************************************************************************************/
OAL_API int QueEmpty(TQueHndl hndl);

/******************************************************************************************
* 函数名称: QuePush
* 函数功能: 入队
* 输入参数: hndl： 队列句柄 value:队列节点值 timeout:超时时间(TIMEOUT_NONE/TIMEOUT_FOREVER/秒数)。
* 输出参数: 无
* 函数返回: 成功，则返回SUCCESS，失败，则返回FAILURE
*******************************************************************************************/
OAL_API int QuePush(TQueHndl hndl, void *value, s32 timeout);

/******************************************************************************************
* 函数名称: QuePop
* 函数功能: 出队
* 输入参数: hndl： 队列句柄 timeout:超时时间(TIMEOUT_NONE/TIMEOUT_FOREVER/秒数)。
* 输出参数: 无
* 函数返回: 队列节点值
*******************************************************************************************/
OAL_API void* QuePop(TQueHndl hndl, s32 timeout);

#ifdef __cplusplus
}
#endif

#endif

