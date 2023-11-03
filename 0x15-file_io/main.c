#include "stdio.h"
#include <unistd.h>

int main(void)
{
		pid_t mypid, ppid;
		mypid = getpid();
		ppid = getppid();
		printf("%u\n", mypid);
		printf("%u\n", ppid);
}
