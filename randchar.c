#include <stdlib.h>
#include <time.h>
#include "randchar.h"

char randchar(void){
    
    //define the range
    char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int charset_length = sizeof(charset) - 1; //exlude the null terminator

    int random_index = rand() % charset_length;

    return charset[random_index];


}