#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#include"password.h"

char* generate_password(int length)
{
    char random;
    char* temp = (char*)calloc(length, sizeof(char));
    //(char*)malloc((length + 1) * sizeof(char));
    //temp[length] = '\0';

    for (int i = 0; i < length; ++i) {
        random = (rand() % 94) + 33;
        temp[i] = random;
    }

    return temp;
}