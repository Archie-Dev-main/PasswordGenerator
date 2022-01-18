#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#include"password.h"

int main(int argc, char *argv[])
{
    if (argc < 2) {
        printf("No arguments!");
        return 1;
    }

    srand(time(0));

    char* password = NULL;

    password = generate_password(atoi(argv[1]));

    printf("%s", password);
}