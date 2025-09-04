#include <stdio.h>
#include <stdlib.h>
#include <time.h> //random number generator

int main() {
    
    int randomnumber = 0;
    int guess = 0;
    int tries;
    time_t t;
    
    //initializing the random number
    srand((unsigned) time(&t));
    
    //getting random number
    randomnumber = rand() % 21;
    char str[100];
    
    printf("Hello and welcome. Please tell me your name: \n");
    
    scanf("%s", str);
    
    printf("\nHello %s. This is a guessing game\n", str);
    
    printf("\nI have chosen a number betweeen 0 and 20, which you must guess\n");
    
    for(tries = 5; tries > 0; --tries) //creating a loop. First initializing tries, then creating a condition and then the action per iteration on it.
    {
        printf("\nYou have %d tr%s left.\n", tries, tries == 1 ? "y" : "ies");
        printf("\nEnter your guess: \n");
        scanf("%d", &guess);
        
        if (guess == randomnumber)
        {
            printf("\nCongratulations! You guessed the number.\n");
            return; //makes sure the defualt printf doesnt display after you won.
        }
            else if (guess < 0 || guess > 20)
                printf("\nI said the number is between 0 and 20.\n");
            else if (guess < randomnumber)
                printf("\nSorry %d is wrong. My number is greater than that.\n", guess);
            else if (guess > randomnumber)
                printf("\nSorry %d is wrong. My number is less than that.\n", guess);
            
        }
            
        printf ("\nSorry you could not guess the number. The number was %d. Game over\n", randomnumber); //default case outside the loops.
        
        
       return 0; 
        
    }