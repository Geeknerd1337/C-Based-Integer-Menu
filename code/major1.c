#include <stdio.h>
#include <stdbool.h>
int main() {
    bool running = true;
    
    //Initialize variable for our choice, make it a character for simplicities sake
    char choice;

    while(running){
        //Initial Introduction
        printf("\nWelcome to the Major 1 Integer Menu!\nPlease input one of the following commands.\n1- Count Leading Zeros\n2- Perform an Endian Swap\n");
        printf("3- Rotate an Integer\n4- Parity\n5- Exit\nYour Input: ");
        //Take the input of our choice
        scanf("%c",&choice);

        switch(choice){
            case '5':
                printf("\n Program Terminating... goodbye...\n");
                return 0;
            break;
            default:
            printf("\nYou have input invalid input, please try again...");
        }
    }
    return 0;
}