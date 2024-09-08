//directive for standard in/out library
#include <stdio.h>

//prototypes for functions
void addition(int a, int b);
void subtraction(int a, int b);
void multiplication(int a, int b);
void division(int a, int b);

void main(){
    int op = 0, a = 0, b = 0; // declared and initialize variables used in program.
    printf("Please select an operation to perform:\n");             //asks user for desired operation
    printf("1: Addition, 2: Subtraction, 3: Multiplication, 4: Division\n");
    scanf("%d", &op);       //recieves user input
    if(op < 5 && op > 0){              //checks if user input is within the range of 1 to 4. If so then the program continues, if not then the program terminates after a prompt.
        printf("please input two numbers.\n");  //asks the user to input two values to be stored in variables a and b respectibly.
        scanf("%d", &a);
        scanf("%d", &b);
        switch(op){                 //switch statement to call the desired function based on the value of the 'op' variable.
            case 1: 
                addition(a, b);     //calls addition function with user input.
                break;
            case 2:
                subtraction(a, b);  //calls the subtraction function wither user input.
                break;
            case 3:
                multiplication(a, b);   // calls the multiplication function with user inputs.
                break;
            case 4:
                division(a, b);        //calls the division function wiht user inputs.
                break;
            default:
                break;                  // default case ends program. 
        }
    }
    else printf("invalid operation selected");      //prompt that user recieves if incorrect operation is chosen.
    
}

void addition(int a, int b){                //addition function that prints the sum of variabes a and b then returns to main.
    printf("The sum is: %d", a + b);
    return;
}

void subtraction(int a, int b){
    printf("The Difference is: %d", a-b);       //subtraction function that prints the difference of variables a and b then returns to main.
    return;
}

void multiplication(int a, int b){
    printf("The product is: %d", a*b);          //multiplication function that prints the product of variables a and b then returns to main.
    return;
}
void division(int a, int b){                //division function that first checks if b (denominator) is equal to zero. if so the progrma prints an error message then returns to main. If false, then the function prints the quotient then returns to main.
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