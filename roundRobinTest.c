#include "types.h"
#include "stat.h"
#include "user.h"

void testingRoundRobin(void){
    int pid;

    for(int n=0; n<3; n++){
        pid = fork();
        if (pid == 0){
            for(int i=0; i<10; i++){
                printf(1, "/%d/ : /%d/ \n", pid, i+1);
            }
        }
        //sleep(300);
    
        
    }
}

int main(void){
    testingRoundRobin();
    exit();
}