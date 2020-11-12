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

    /*
    struct users admin;
    struct users customer1;
    struct users customer2;
    struct users customer3;
    struct users customer4;

    admin.id = 1;
    strcpy(admin.fname, "Niku");
    strcpy(admin.lname, "Nitin");
    strcpy(admin.username, "nick");
    strcpy(admin.password, "nick");
    strcpy(admin.role, "admin");
    admin.status = 1;
    
    customer1.id = 2;
    strcpy(customer1.fname, "Nitin");
    strcpy(customer1.lname, "Niku");
    strcpy(customer1.username, "nitin");
    strcpy(customer1.password, "nitin");
    strcpy(customer1.role, "customer");
    customer1.status = 1;
    
    customer2.id = 3;
    strcpy(customer2.fname, "Akash");
    strcpy(customer2.lname, "Nigam");
    strcpy(customer2.username, "akash");
    strcpy(customer2.password, "akash");
    strcpy(customer2.role, "customer");
    customer2.status = 1;
    
    customer3.id = 4;
    strcpy(customer3.fname, "Rahul");
    strcpy(customer3.lname, "Pratap");
    strcpy(customer3.username, "rahul");
    strcpy(customer3.password, "rahul");
    strcpy(customer3.role, "customer");
    customer3.status = 1;
    
    customer4.id = 5;
    strcpy(customer4.fname, "Rohit");
    strcpy(customer4.lname, "Prasad");
    strcpy(customer4.username, "rohit");
    strcpy(customer4.password, "rohit");
    strcpy(customer4.role, "customer");
    customer4.status = 1;
    
    writeusers(admin);
    writeusers(customer1);
    writeusers(customer2);
    writeusers(customer3);
    writeusers(customer4);
    */
}
