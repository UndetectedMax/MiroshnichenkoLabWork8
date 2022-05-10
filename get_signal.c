#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

static void sig_usr(int signo)
{
	if(signo == SIGUSR2)
		printf("Process of Miroshnichenko got signal\n");
}

int main(void)
{
 
	for( ; ; )
		pause();
	return EXIT_SUCCESS;
}
