#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main (void)
{
	pid_t pid = fork();
	if(pid == 0)
	{
		fprintf(stderr,"I am Zombie-process of Miroshnichenko\n");
		_exit(0);
	}
	else
	sleep(10);
return EXIT_SUCCESS;
}	
