#include <stdio.h>


int stringlength(const char *string); //defining a function and creating a parameter constant character pointer. Value cannot be changed anywhere now

int main() {
    
    printf("%d \n", stringlength("stringlength test"));
    printf("%d \n", stringlength("Indigo"));
    printf("%d \n", stringlength("Raksha Misra"));
    
    
    return 0;
    
}
    
int stringlength(const char *string) //calling the function
{
    const char *lastaddress = string; //creating another pointer which points to the null terminator and equating it to string pointer.
     
    while(*lastaddress)
        ++lastaddress; //A loop where count will increment until the last character is reached.
        
    return lastaddress - string; // The length of string will be displayed as null terminator is subtracted from the actual word, giving the actual length.
    
    
    
}   
    
    
    
