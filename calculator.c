#include <stdio.h>

void addition(int a, int b);
void subtraction(int a, int b);
void multiplication(int a, int b);
void division(int a, int b);

void main(){
    int op = 0;
    int a = 0, b = 0;
    printf("Please select an operation to perform:\n");
    printf("1: Addition, 2: Subtraction, 3: Multiplication, 4: Division\n");
    scanf("%d", &op);
    if(op < 5 && op > 0){
        printf("please input two numbers.\n");
        scanf("%d", &a);
        scanf("%d", &b);
        switch(op){
            case 1: 
                addition(a, b);
                break;
            case 2:
                subtraction(a, b);
                break;
            case 3:
                multiplication(a, b);
                break;
            case 4:
                division(a, b);
                break;
            default:
                break;
        }
    }
    else printf("invalid operation selected");
    
}

void addition(int a, int b){
    printf("The sum is: %d", a + b);
    return;
}

void subtraction(int a, int b){
    printf("The Difference is: %d", a-b);
    return;
}

void multiplication(int a, int b){
    printf("The product is: %d", a*b);
    return;
}
void division(int a, int b){
    // follows method of a / b
    if( b == 0){
        printf("error\n");
        return;
    }
    else{
        printf("The quotient is: %d", a/b);
        return;
    }
}