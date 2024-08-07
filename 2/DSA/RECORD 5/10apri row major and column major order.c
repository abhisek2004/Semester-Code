//Given a matrix Q[7][8] in which the size of each memory location is 4 bytes.
//Find the address of Q[5][2]in row major order and column major order when the base address is 5000
//assignment 5 q2

#include <stdio.h>
int main() 
{
    int Q[7][8];
    int baseAddress = 5000;
    int size = 4;
    int row = 5;
    int column = 2;

    // Calculate the address in row major order
    int addressRowMajor = baseAddress + ((row * 8) + column) * size;
    printf("The address of Q[5][2] in row major order is: %d\n", addressRowMajor);

    // Calculate the address in column major order
    int addressColumnMajor = baseAddress + ((column * 7) + row) * size;
    printf("The address of Q[5][2] in column major order is: %d\n", addressColumnMajor);
    return 0;
}