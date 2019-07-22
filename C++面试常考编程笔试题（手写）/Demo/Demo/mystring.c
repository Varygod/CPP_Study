#include "mystring.h"
#include <assert.h>

/**
  *  @brief  实现字符串拷贝函数
  *  @param[in]   strDest,strSrc
  *  @param[out]  char *
  *  @Return:     char *
  *  - TRUE
  *  - FALSE
  *  @note   注意边界条件，注意返回的指针地址
  *  @see    other functions
**/
char * mystrcpy(char *strDest, const char *strSrc)
{
	assert(strDest != NULL && strSrc != NULL);
	char *address = strDest;
	while ((*strDest++ = *strSrc++) != '\0')
	{
		;
	}
	return address;
}


/**
  *  @brief  实现内存块拷贝函数
  *  @param[in]   strDest,strSrc,count
  *  @param[out]  void *
  *  @Return:     void *
  *  - TRUE
  *  - FALSE
  *  @note   注意内存重叠问题
  *  @see    other functions   
**/
void * mymemcpy(char *strDest, const char *strSrc, size_t count)
{
	if (strDest == NULL || strSrc == NULL || count == 0)
		return NULL;
	char *pDest = strDest;
	const char *pSrc = strDest;
	if (pDest > pSrc && pDest <(pSrc+count))
	{
		for (size_t i=count-1; i != -1; --i)
		{
			pDest[i] = pSrc[i];
		}
	} 
	else
	{
		for (size_t i = 0; i<count; ++i)
		{
			pDest[i] = pSrc[i];
		}
	}
	return strDest;
}

/**
  *  @brief  字符串转整数
  *  @param[in]   str
  *  @param[out]  int
  *  @Return:     int
  *  - TRUE
  *  - FALSE
  *  @note   matters needing attention
  *  @see    other functions   
**/
int myatoi(char *str)
{
	if (str==NULL)
	{
		return -1;
	}

	//step1  判断首个字符为空
	while (*str == ' ')//遇到空字符跳过
	{
		str++;
	}
	//step2 判断首个有效字符是否为负号
	int nSign = (*str == '-') ? (-1) : (1);
	//step3 符号判别后，继续向后移
	if (*str == '-' || *str == '+')
	{
		str++;
	}
	int nResult = 0;
	while (*str>='0' && *str<='9')
	{
		nResult = nResult * 10 + (*str - '0');
	}
	return nResult * nSign;
}


char *myitoa(int num)
{
	
}