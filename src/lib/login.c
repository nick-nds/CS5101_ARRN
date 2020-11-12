#include<stdio.h>
#include<string.h>
#include "../db/db.h"
#include "userstruct.h"

int login(char username[], char password[])
{
    struct users data;
    data=readusers(266, NULL);
    printf("Password: %s", data.fname);
    if(data.password == password) {
        printf("Success");
        return 0;
    } else {
        printf("Fail");
        return 1;
    }
}
