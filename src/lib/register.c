#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
    data = readusers(0);
    if(data.id==-1) {
        return 1;
    } else {
        return data.id+1;
    }
}

void usersdata()
{
    FILE *outfile;
    outfile=fopen("users.dat", "w");
    if(outfile==NULL) {
        fprintf(stderr, "\nError. Cannot open file.\n");
        exit(1);
    }

    struct users admin = {1, "Niku", "Nitin", "nick", "nick", "admin", 1};
    struct users customer1 = {2, "Nitin", "Niku", "nitin", "nitin", "customer", 1};
    struct users customer2 = {3, "Akash", "Nigam", "akash", "akash", "customer", 1};
    struct users customer3 = {4, "Rahul", "Pratap", "rahul", "rahul", "customer", 1};
    struct users customer4 = {5, "Rohit", "Prasad", "rohit", "rohit", "customer", 1};

    fwrite(&admin, sizeof(struct users), 1, outfile);
    fwrite(&customer1, sizeof(struct users), 1, outfile);
    fwrite(&customer2, sizeof(struct users), 1, outfile);
    fwrite(&customer3, sizeof(struct users), 1, outfile);
    fwrite(&customer4, sizeof(struct users), 1, outfile);

    if(fwrite != 0) {
        printf("Data added successfully\n");
    } else {
        printf("Error. Cannot write to file\n");
    }

    fclose(outfile);
}
