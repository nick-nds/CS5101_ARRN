#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../../headers/userstruct.h" //struct datatype for users and products
#include "../../headers/db.h" //struct datatype for users and products


/*
 * function to read users data from users.dat file
 * usage: refer documentation
 */

struct users readusers(int id)
{
    FILE *infile;
    int userscount=getid("users");

    infile=fopen("users.dat", "r");
    if(infile==NULL)
    {
        fprintf(stderr, "\nError. Cannot open file\n");
        exit(1);
    }

    struct users input;

    if(id<=userscount) {
        fseek(infile, (id-1)*sizeof(struct users), 0);
        fread(&input, sizeof(struct users), 1, infile);
    }
    printf("Users: %s\n", input.fname);
    return input;
}


/*
 * function to read products data from products.dat file
 * usage: refer documentation
 */

struct products readproducts(int id)
{
    FILE *infile;
    int productscount=getid("products");

    infile=fopen("products.dat", "r");
    if(infile==NULL)
    {
        fprintf(stderr, "\nError. Cannot open file\n");
        exit(1);
    }

    struct products input;

    if(id<=productscount) {
        fseek(infile, (id-1)*sizeof(struct products), 0);
        fread(&input, sizeof(struct products), 1, infile);
    }
    printf("dfsdf: %s\n", input.pname);
    return input;
}


/*
 * function to write users data to users.dat file
 * usage: refer documentation
 */

void writeusers(struct users input)
{
    FILE *outfile;

    outfile=fopen("users.dat", "a");
    if(outfile==NULL)
    {
        fprintf(stderr, "\nError. Cannot open file\n");
        exit(1);
    }

    fwrite (&input, sizeof(struct users), 1, outfile);
    if(fwrite != 0)
    {
        fclose(outfile);
        printf("Data added Successfully\n");
    } else {
        fclose(outfile);
        printf("Fail\n");
        exit(1);
    }
}


/*
 * function to write products data to products.dat file
 * usage: refer documentation
 */

void writeproducts(struct products input)
{
    FILE *outfile;

    outfile=fopen("products.dat", "a");
    if(outfile==NULL)
    {
        fprintf(stderr, "\nError. Cannot open file\n");
        exit(1);
    }

    fwrite (&input, sizeof(struct products), 1, outfile);
    if(fwrite != 0)
    {
        fclose(outfile);
        printf("Data added Successfully\n");
    } else {
        fclose(outfile);
        printf("Fail\n");
        exit(1);
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
        printf("User Data added successfully\n");
    } else {
        printf("Error. Cannot write to file\n");
    }

    fclose(outfile);
}


void productsdata()
{
    FILE *outfile;
    outfile=fopen("products.dat", "w");
    if(outfile==NULL) {
        fprintf(stderr, "\nError. Cannot open file.\n");
        exit(1);
    }

    struct products product1 = {1, "Reebok", "Shoes", "Asian", 1499.0, 167, 1};
    struct products product2 = {2, "Nike", "Shoes", "Chineese", 1499.0, 167, 1};

    fwrite(&product1, sizeof(struct products), 1, outfile);
    fwrite(&product2, sizeof(struct products), 1, outfile);
    //fwrite(&product3, sizeof(struct products), 1, outfile);
    //fwrite(&product4, sizeof(struct products), 1, outfile);
    //fwrite(&product5, sizeof(struct products), 1, outfile);

    if(fwrite != 0) {
        printf("Products Data added successfully\n");
    } else {
        printf("Error. Cannot write to file\n");
    }

    fclose(outfile);
}

int getid(char target[])
{
    FILE *infile;
    int i;
    i=0;
    if(strcmp(target, "users")==0) {
        infile=fopen("users.dat", "r");
        if(infile==NULL)
        {
            fprintf(stderr, "\nError. Cannot open file\n");
            exit(1);
        }

        fseek(infile, 0L, SEEK_END);
        int sz;
        sz=ftell(infile);
        i=sz/sizeof(struct users);
        return i;

    } else {
        infile=fopen("products.dat", "r");
        if(infile==NULL)
        {
            fprintf(stderr, "\nError. Cannot open file\n");
            exit(1);
        }

        fseek(infile, 0L, SEEK_END);
        int sz;
        sz=ftell(infile);
        i=sz/sizeof(struct products);
        return i;
    }
}
