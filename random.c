/*
random.c
The function randchar() is a character function
that returns a random character from ‘A’ – ‘Z’. The character is
used in the main program to generate a random 7 letter word.
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char alpha[]= {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

char randchar(void){
    int random = rand() %26 ;
    return alpha[random];

}//end randchar