#include <stdio.h>

int main(void) {

    float value1, value2;
    char operator;
    
    printf(" Please enter the expression for calculation in format: number1 (an operator) number2\n");
    scanf("%f %c %f", &value1, &operator, &value2);
    
    switch(operator) //switch is same as multiple if else but simplifies the situation.
    {
    
        case '+':// make cases according to situation with proper syntax.
        printf("The value is: %.2f\n", value1 + value2);
        break;// make sure to use break so code doesnt read next code line in this case.
        
        case '-':
        printf("The value is: %.2f\n", value1-value2);
        break;
        
        case '*':
        printf("The value is: %.2f\n", value1*value2);
        break;
        
        case '/':
    
        if ( value2==0 )
            printf("Error: Division by zero not allowed\n");
        else
            printf("The value is: %.2f\n", value1/value2);
        break;    
            
        default://default is basically the overall else. The case the program would do if none of the cases satisfy.
        printf("Unknown Operator\n");
        break;
        
        
}
    
    
    return 0;

}