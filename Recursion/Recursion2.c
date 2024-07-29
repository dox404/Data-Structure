#include<stdio.h>

void func1(int n){
    if(n>0){
        func1(n-1);
        printf("%d\n",n);
        
    }
}


int main(){
    int x=3;
    func1(x);
}