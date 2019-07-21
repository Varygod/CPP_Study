#include "mystring.h"


void * mymemcpy(char *strDest, const char *strSrc, size_t count)
{
	if (strDest == NULL || strSrc == NULL || count == 0)
		return NULL;
	char *pDest = strDest;
	const char *pSrc = strDest;
	if (pDest > pSrc && pDest <(pSrc+count))
	{
	} 
	else
	{
	}
}
