#include<stdio.h>
int factorial(int a);
int main(){
    int num = 10, fact;
    fact = factorial(num);
    printf("Factorial =  %d", fact);
    return 0;
}
int factorial(int a){
    if(a == 1)
    return(1);
    else
    return(a * factorial(a-1));
}
