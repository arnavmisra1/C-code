#include <stdio.h>

int main(void) {
    
    int number = 0; //variable initialized to zero
    int *pnumber = NULL; // a variable that can point to int
    
    number = 10;
    printf("The address of the number is: %p\n", &number); //output for address of number. 16 hexadecimal digits system.
    printf("The value of the number is: %d\n", number); // oytput for number value
    
    pnumber = &number; // initializing the pointer and storing number address in the pointer memory.
    
    printf("The address of the pointer is: %p\n", (void*)&pnumber); // cast address of pointer 
    printf("The value of the pointer is: %p\n", pnumber); // value of the pointer int
    printf("The size of the pointer is: %d bytes\n", sizeof(pnumber)); // size of operator for size of pointer usually 32 bytes
    printf("Value pointed to: %d\n", *pnumber);    // output of value pointed to original int.
    
    return 0;
    
}