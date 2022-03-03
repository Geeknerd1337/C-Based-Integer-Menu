#include "major1.h"

//This is a function which validates and returns input
unsigned int GetValidNumber(){
    //This is bizarre, but take in the input as a long long as it can have numbers outside our boundry, making it way easier to check
    long long input; 

    //Contiously check to see if the input is valid
    while(true){
        //Get the input from the user
        printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively):");
        scanf(" %Ld",&input);
        if(input >= 1 && input <= 4294967295){
            unsigned int output = (unsigned int)input;
            return output;
        }
    }
}

//This is really dirty and could be condensed down to one method but I'm doing this alone and I'm really tired
//So this is what we get
//Josh Wilson 3-2-22
unsigned int GetValidRotation(){
    //This is bizarre, but take in the input as a long long as it can have numbers outside our boundry, making it way easier to check
    long long input; 

    //Contiously check to see if the input is valid
    while(true){
        //Get the input from the user
        printf("Enter the number of positions to rotate-right the input (between 0 and 31, inclusively):");
        scanf(" %Ld",&input);
        if(input >= 0 && input <= 31){
            unsigned int output = (unsigned int)input;
            return output;
        }
    }
}


int main() {
    bool running = true;
    
    //Initialize variable for our choice, make it a character for simplicities sake
    char choice;

    while(running){
        //Initial Introduction
        printf("\nEnter the menu option for the operation to perform:\n(1) Count Leading Zeros\n(2) Perform an Endian Swap\n");
        printf("(3) Rotate an Integer\n(4) Parity\n(5) Exit\n-->");
        //Take the input of our choice
        //Important to note that there is space 
        scanf(" %c",&choice);

        switch(choice){
            case '1':
                countZeros();
            break;
            case '2':
                endianSwap();
            break;
            case '3':
                rotateRight();
            break;
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