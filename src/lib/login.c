#include<stdio.h>
#include<string.h>
#include "../db/db.h"
#include "userstruct.h"

int login(char username[], char password[])
{
    struct users data;
    int i;
    for(i=0; i<5; i++) {
        data=readusers(i);
        if(strcmp(data.username, username)==0) {
            if(strcmp(data.password, password)==0) {
                printf("Login Success for user: %s.\n", data.fname);
                break;
            }
        }
    }
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
