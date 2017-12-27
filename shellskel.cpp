#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main(){
	/* The command buffer */
	string cmdBuff;
	
	/* The ID of the child process */
	pid_t pid;
	
	/* Keep running until the user has typed "exit" */
	do {
		/* Prompt the user to enter the command */
		cerr << "cmd>";
		cin >> cmdBuff;
		
		/* If the user wants to exit */
		if(cmdBuff != "exit"){
			/* Create a child */
			pid = fork();
			if (pid < 0) {
				perror("A forking error occured");
				exit(-1);
			}
			/* Call execlp() to replace my program with that specified at the command line */
			else if (pid == 0) {
				if (execlp(cmdBuff.c_str(), cmdBuff.c_str(), NULL) < 0) {
					perror("An execlp error occured");
					exit(-1);
				}
			}
			/* Wait for the child process to terminate */
			else {
				if (wait(NULL) < 0) {
					perror("A wait error occured");
					exit(-1);
				}
			}
		}
	}
	while(cmdBuff != "exit");
	
	return 0;	
}
