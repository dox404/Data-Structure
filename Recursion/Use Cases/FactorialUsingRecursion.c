#include<stdio.h>

int fun(int n){
    if(n==0){
        return 1;
    }else{
        return (fun(n-1))*n;
    }
}

int main(){
    int x;
    x=fun(20);
    printf("%d",x);
    return 0;
}