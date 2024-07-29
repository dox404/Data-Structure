#include<stdio.h>

int n=0;
int fun(int x){
    
    if(x>0){
        n++;
        return fun(x-1)+n;
    }
    return 0;
}

int main(){
    int a=5;
    printf("%d",fun(a));
}

