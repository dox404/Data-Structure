#include<stdio.h>


int fun(int x){
    int n=0;
    if(x>0){
        n++;
        return fun(x-1)+n;
    }
    return 0;
}

int main(){
    int a=5;
    printf("%d",fun(a));
    printf("%d",fun(a));
}

