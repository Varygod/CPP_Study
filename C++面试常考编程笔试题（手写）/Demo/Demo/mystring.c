#include "mystring.h"
#include <assert.h>

/**
  *  @brief  ʵ���ַ�����������
  *  @param[in]   strDest,strSrc
  *  @param[out]  char *
  *  @Return:     char *
  *  - TRUE
  *  - FALSE
  *  @note   ע��߽�������ע�ⷵ�ص�ָ���ַ
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
  *  @brief  ʵ���ڴ�鿽������
  *  @param[in]   strDest,strSrc,count
  *  @param[out]  void *
  *  @Return:     void *
  *  - TRUE
  *  - FALSE
  *  @note   ע���ڴ��ص�����
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
  *  @brief  �ַ���ת����
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

	//step1  �ж��׸��ַ�Ϊ��
	while (*str == ' ')//�������ַ�����
	{
		str++;
	}
	//step2 �ж��׸���Ч�ַ��Ƿ�Ϊ����
	int nSign = (*str == '-') ? (-1) : (1);
	//step3 �����б�󣬼��������
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
	char str[1024];
	char temp[11];
	int sign = num;
	int i = 0, j = 0;
	if (sign<0)
	{
		num = -num;
	}
	do 
	{
		temp[i] = num % 10 + '0';
		num /= 10;
		i++;
	} while (num>0);

	if(sign<0)
	{
		temp[i++] = '-';

	}
	temp[i] = '\0';
	i--;
	while (i>=0)
	{
		str[i--] = temp[j++];
	}
	str[j] = '\0';
	return  str;
}