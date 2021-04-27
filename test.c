#include <stdio.h> 
#include <pthread.h> 
#include <string.h> 
#include <sys/types.h> 
#include <sys/wait.h> 
#include <unistd.h>
#include <stdio.h>


 int main() { 
    printf("Hello World \n");

    char name[] = "Mark"; 

    for (int i = 0; i < strlen(name); i++) { 
        printf("%c", name[i]);
    }
    printf("\n");

    int j = 0; 
    while(j < strlen(name)) { 
        printf("%c", name[j]); 
        j++; 
    }
    printf("\n"); 

    int process; 
    process = fork(); 

    if(process == 0) { 
        printf("We are using the child process: %d, parents PID %d\n", getpid(), getppid()); 
    }else if(process != -1) { 
        wait(0); 
        printf("This is the parent process: %d \n", getpid()); 
    }

 }
