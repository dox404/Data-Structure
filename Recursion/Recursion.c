#include<stdio.h>

void func1(int n){
    if(n>0){
        printf("%d\n",n);
        func1(n-1);
    }
}


int main(){
    int x=3;
    func1(x);
}