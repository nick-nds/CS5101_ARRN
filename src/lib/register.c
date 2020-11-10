#include<stdio.h>
#include<string.h>
#include "../db/db.h"
#include "userstruct.h"
int getnewid();

void regi()
{
    struct users input;
    input.id=getnewid();
    printf("\nFirst Name: ");
    scanf("%s", input.fname);

    printf("\nLast Name: ");
    scanf("%s", input.lname);

    printf("\nUsername: ");
    scanf("%s", input.username);

    printf("\nPassword: ");
    scanf("%s", input.password);
    strcpy(input.role, "customer");
    writeusers(input);
}

int getnewid()
{
    struct users data;
    data = readusers(0, "");
    if(data.id==-1) {
        return 1;
    } else {
        return data.id+1;
    }
}
