#include <stdio.h>

int addition(int a, int b);
int subtraction(int a, int b);
int multiplication(int a, int b);
int division(int a, int b);

void main(){
    int op = 0;
    int a = 0, b = 0;
    printf("Please select an operation to perform:\n");
    printf("1: Addition, 2: Subtraction, 3: Multiplication, 4: Division\n");
    scanf("%d", &op);
    printf("please input two numbers.\n");
    scanf("%d", &a);
    scanf("%d", &b);
    switch(op){
        case 1: 
            printf("The sum is: %d", addition(a, b));
            break;
        case 2:
            printf("The Difference is: %d", subtraction(a, b));
            break;
        case 3:
            printf("The product is: %d", multiplication(a, b));
            break;
        case 4:
            printf("the quotient is: %d", division(a, b));
            break;
    }
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