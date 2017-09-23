
#include <stdlib.h>
#include <stdio.h>
int main(){
	char cmd[128];
while(1)
{
	scanf("%s",cmd);
	if(!strcmp(cmd,"help"))
		printf("this is help \n");
	else if(!strcmp(cmd,"quit"))
		exit(0);
	else
		printf("error \n");
	}

}
