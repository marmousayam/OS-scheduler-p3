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
            printf(1, "pid: %d\n", pid);
            printf(1, "turnaround time = %d\n", getttime(pid)-getctime(pid));
            printf(1, "burst time = %d\n", getrtime());
            printf(1 , "waiting time = %d\n". getttime()-getctime()-getrtime());
            wait();
        }
        //sleep(300);
    
        
    }
}

int main(void){
    testingRoundRobin();
    exit();
}