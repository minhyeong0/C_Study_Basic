#include <stdio.h>

extern int g_int; //referencing declaration

void fun_third()
{
	g_int += 1;
	printf("g_int int fun_third() %d %p\n", g_int, &g_int);
}