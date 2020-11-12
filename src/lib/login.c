#include<stdio.h>
#include<string.h>
#include "../db/db.h"
#include "userstruct.h"

int login(char username[], char password[])
{
    struct users data;
    data=readusers(2);
    printf("Fname: %s", data.username);
    printf("Role: %s", data.password);
    printf("\n%s", password);
    /*
    if(data.password == password) {
        printf("Success");
        return 0;
    } else {
        printf("Fail");
        return 1;
    }
    */
    return 0;
}
