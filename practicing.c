
#include <stdio.h> 
#include <math.h> 
#include <string.h> 
#include <stdlib.h> 
#include <sys/types.h> 
#include <unistd.h>

int main() { 
    printf("Hello, world \n");

    char *fullday = malloc(sizeof(char)*6);  
    strcpy(fullday, "Friday");
    printf("What day is it: %s \n", fullday); 
    free(fullday); 

    int pid; 
    pid = fork();  

    if (pid == 0) { 
        printf("This is the child: returned pid: %d, ppid: %d \n", pid, getppid()); 
    }else if (pid != -1 ) { 
        printf("The child pid is: %d \n", pid); 
    }

}