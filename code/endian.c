#include "major1.h"
#define UINT_SIZE sizeof(int) * 8

void endianSwap(){
    //A variable for holding our initial integer unsigned integer input
    //Josh Wilson 3-2-22 TODO: Use %u in scanf for this
    unsigned int number = GetValidNumber();

    //The following is not directly copied from the internet, but does share similarities with techniques I saw to perform an endian swap
    //Josh Wlson 3-2-22
    //Setting up these bytes so we can perform the swap
    unsigned int left_byte;
    unsigned int left_middle_byte;
    unsigned int right_middle_byte;
    unsigned int right_byte;


    //Store the result into an integer
    int result;

    //As I understand it, this isolates the left most bits
    left_byte = (number & 0x000000FF) >> 0;


    left_middle_byte = (number & 0x0000FF00) >> 8;
    right_middle_byte = (number & 0x00FF0000) >> 16;

    //Get the right most bits
    right_byte = (number & 0xFF000000) >> 24;

    //Shift the left byte to the right
    left_byte <<= 24;

    //Shift the middle bits
    left_middle_byte <<= 16;
    right_middle_byte <<= 8;

    right_byte <<= 0;

    //Reconstruct the result
    result = (left_byte | left_middle_byte | right_middle_byte | right_byte);

    printf("Endian swap of %u gives %u",number, result);

    return;
}