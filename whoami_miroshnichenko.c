#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

extern char**environ;

int main(void)
{
	char* args[] = { "whoami","--help",NULL };
	pid_t pid = fork();
	if(pid != 0)
 	{
	printf("The child of Miroshnichenko prints next info:\n");
	execve("/bin/whoami", args,environ);
	}
	else
	return EXIT_FAILURE;
return EXIT_SUCCESS;
}

