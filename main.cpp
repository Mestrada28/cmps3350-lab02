// CMPS 3350 - lab 02 is all about source control
// Marvin Estrada - Program should print in reverse now
// Prints each command-line argument passed into the program, one per line
#include <stdio.h>

int main(int argc, char ** argv)
{
    for(int i = argc - 1; i > 0; i--) {
        printf("arg %d: %s\n", i, argv[i]);
    }
    return 0;
}

