/*
*  Copyright (C), 2012-2019, CS&S. Co., Ltd.
*  @file        ʵ��strcpy����.c
*  @author      pengsh(pshenghua2006@163.com)
*  @date        2019/07/22 0:33:35
*  @brief       brief
*  @note        ��ʹ�ÿ⺯����ʵ�ַ�������
*  @version
*    - vVerNO    2019/07/22 0:33:35   pengsh    VerNoBrief
*/
#include "mystring.h"
#include <assert.h>

char * mystrcpy(char *strDest,const char *strSrc)
{
	assert(strDest != NULL && strSrc != NULL);
	char *address = strDest;
	while ((*strDest++ = *strSrc++)!='\0')
	{
		;
	}
	return address;
}

