#include "types.h"
#include "stat.h"
#include "user.h"


#define N 30


int main(void){
    int pid;
    //changePolicy(1);
    for(int n=0; n<N; n++){
        pid = fork();

        if(pid < 0)
            break;
        if(pid == 0)
            exit();
        if(pid > 0){
            if (n < 5){
                setPriority(6);
            }
            if(n <  10 && n >= 5){
                setPriority(5);
            }
            if(n < 15 && n >= 10){
                setPriority(4);
            }
            if(n < 20 && n >= 15){
                setPriority(3);
            }
            if(n < 25 && n >= 20){
                setPriority(2);
            }
            if(n >= 25){
                setPriority(1);
            }
            for(int i=0; i<250; i++){
                printf(1,"/%d/ : /%d/ \n", pid, i+1);
            }
        }
    }
    exit();
}