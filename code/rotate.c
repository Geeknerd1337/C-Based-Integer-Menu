#include "major1.h"


void rotateRight(){
    //A variable for holding our initial integer unsigned integer input
    //Josh Wilson 3-2-22 TODO: Use %u in scanf for this
    unsigned int number = GetValidNumber();
    unsigned int rotation = GetValidRotation();

    unsigned int bitShifted = number >> rotation;

    unsigned int rotatedBits = number << (32-number);

    unsigned int combinedBits = bitShifted | rotatedBits;

    printf("%u rotated by %u gives: %u", number,rotation, combinedBits);
    return;
}