#include "mystring.h"
#include <stdlib.h>
#include <stdio.h>

int  main(int argc, char* argv[])
{
	char *str = "abcdefg";
	char buf[1024] = { 0 };
	mystrcpy(buf, str);
	printf("buf = %s", buf);
	system("pause");
}
