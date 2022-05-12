#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(void)
{	pid_t pid = fork();
	int j;
	if(pid !=0)
	{
	sleep(7+1);
	_exit(0);
	}
	else
	{
	for(j = 0;j<(2*7+1);j++)
	{
	printf("I am a child with pid = %d. My parent pid = %d\n", getpid(),getppid());
	sleep(1);	
 	}

	}
return 0;
}		

