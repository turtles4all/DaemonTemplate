#include <stdlib.h>
#include <sys/ioctl.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char **argv){
	pid_t pid, sid;
	pid = fork();
	if (pid < 0){
		exit(1);
	}
	if (pid > 0){ 
		exit(0);
	}
	umask(0);
	sid = setsid();
	if (sid < 0){         
                exit(0);
        }
	if ((chdir("/")) < 0){
		exit(0);
	}
        close(STDIN_FILENO);
        close(STDOUT_FILENO);
        close(STDERR_FILENO);
	int looping = 1;
	while(looping){
	sleep(30);
	}
	
}
