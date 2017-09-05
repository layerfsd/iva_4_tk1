/***************************************************************
ģ�� �� �ļ���ؽӿ�ͷ�ļ�                        
�ļ� �� oal_file.h
���� �� Ripple Lee(libozjw@163.com)
�汾 �� V1.0
���� �� 2017-01-18
*****************************************************************/
#ifndef __OAL_FILE_H__
#define __OAL_FILE_H__
#include "oal_typedef.h"
#include "pthread.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef WIN32
#define R_OK 0x4 /* Test for read permission. */
#define W_OK 0x2 /* Test for write permission. */
#define X_OK 0x1 /* Test for execute permission. */
#define F_OK 0x0 /* Test for existence. */
#include <io.h>
#define access(file, flag) _access(file,flag)

#else
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#endif

	/*****************************************************************************
	* ��������: OAL_MakeDirByPath
	* ��������: ����·��ѭ�������ļ���
	* �������: ps8Path����'/'��β���ַ���(WIN32��'\\')
	* �������: ��
	* ��������: �ɹ����򷵻�SUCCESS��ʧ�ܣ��򷵻�FAILURE
	******************************************************************************/
	OAL_API int OAL_MakeDirByPath(const char *ps8Path);

	/*****************************************************************************
	* ��������: OAL_FileExist
	* ��������: ����·���ж��ļ��Ƿ����
	* �������: ps8Path�ļ�ȫ·����
	* �������: ��
	* ��������: ���ڣ��򷵻�SUCCESS�������ڣ��򷵻�FAILURE��
	******************************************************************************/
	OAL_API int OAL_FileExist(const char *ps8Path);

	/*****************************************************************************
	* ��������: OAL_FileSize
	* ��������: ����·�������ļ���С
	* �������: ps8Path�ļ�ȫ·����
	* �������: ��
	* ��������: �ɹ����򷵻ش�С��ʧ�ܣ��򷵻�FAILURE��
	******************************************************************************/
	OAL_API long OAL_FileSize(const char *ps8Path);

	/*****************************************************************************
	* ��������: OAL_DeleteFile
	* ��������: ����·��ɾ��һ���ļ�
	* �������: ps8Path�ļ�ȫ·����
	* �������: ��
	* ��������: �ɹ����򷵻�SUCCESS��ʧ�ܣ��򷵻�FAILURE��
	******************************************************************************/
	OAL_API int OAL_DeleteFile(const char *ps8Path);

	/*****************************************************************************
	* ��������: OAL_CopyFile
	* ��������: �����ļ��������ļ�����һ���ļ���
	* �������: ps8Path�ļ�ȫ·����
	* �������: ��
	* ��������: �ɹ����򷵻�SUCCESS��ʧ�ܣ��򷵻�FAILURE��
	******************************************************************************/
	OAL_API int OAL_CopyFile(const char *ps8Path, const char * ps8DstPath);



#ifdef __cplusplus
}
#endif


#endif