#include<stdio.h>

int fun(int x){
    if(x>0){
    return fun(x-1)+x;
    }
    return 0;
}

int main(){
    int a=5;
    printf("%d",fun(a));

}