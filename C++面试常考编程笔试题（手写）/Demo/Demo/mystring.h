#pragma once
#ifndef __MYSTRING_H__
#define __MYSTRING_H__
#include <stddef.h>
char * mystrcpy(char *strDest, const char *strSrc);
void * mymemcpy(char *strDest, const char *strSrc, size_t count);
#endif  //__MYSTRING_H__