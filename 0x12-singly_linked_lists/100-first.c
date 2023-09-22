#include <stdio.h>
void __attribute__((constructor)) be_main(void);
/**
*be_main - print string before main function
*/
void be_main(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
