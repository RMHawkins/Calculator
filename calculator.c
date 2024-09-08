#include <stdio.h>

int addition(int a, int b);
int subtraction(int a, int b);
int multiplication(int a, int b);
int division(int a, int b);

void main(){
    
}

int addition(int a, int b){
    return a + b;
}

int subtraction(int a, int b){
    return a - b;
}

int multiplication(int a, int b){
    return a * b;
}
int division(int a, int b){
    // follows method of a / b
    if( b == 0){
        printf("Divide by zero error\n");
        return 0;
    }
    else return a/b;
}