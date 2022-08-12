#include <stdio.h>

int fib(){
    int n[10],i=0,cont;
    
    for (i=0; i <= 10; i++){
        
        if(n[i] == 0 && i==0){
            n[i] = 0;
             
            
        } else if(n[i]==0 && i == 1){
            n[i] = 1;
        }else{
            n[i] = n[i-2]+n[i-1];
        }
        printf("%d ",n[i]);
    }
    
    
    return 0;
}


int main(){
    //!showMemory(start=6562)
    int i;
    
    
    fib();
}