#include "major1.h"
#define UINT_SIZE sizeof(int) * 8

void countZeros(){
    //A variable for holding our initial integer unsigned integer input
    //Josh Wilson 3-2-22 TODO: Use %u in scanf for this
    unsigned int number = GetValidNumber();

    //The number of leading 0s
    unsigned int count;
    count=0;

    //Got some help online for this one, but essentially as I Understand it this is setting the most significant bit to be one
    unsigned int mostSignificantBit;
    mostSignificantBit = 1 << (UINT_SIZE - 1);

    //This iterates over each bit
    for(int i=0; i<UINT_SIZE; i++)
    {
        //If we reach the end of the number, terminate the loop
        if((number << i) & mostSignificantBit)
        {
            break;
        }

        count++;
    }

    printf("The number of leading zeros in %d is %d", number, count);
    return;
}