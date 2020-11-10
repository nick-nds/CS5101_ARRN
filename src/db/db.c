#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../lib/userstruct.h" //struct datatype for users and products



/*
 * function to read users data from users.dat file
 * usage: refer documentation
 */

struct users readusers(int id, char username[])
{
    FILE *infile;

    infile=fopen("users.dat", "r");
    if(infile==NULL)
    {
        fprintf(stderr, "\nError. Cannot open file\n");
        exit(1);
    }

    struct users outstruct;
    struct users input;

    while(fread(&input, sizeof(struct users), 1, infile))
    {
        if(username==NULL) {
            if(id!=0) {
                if(input.id==id) {
                    outstruct = input;
                }
            } else {
                outstruct = input;
            }
        } else {
            if(input.username==username) {
                outstruct = input;
            }
        }
    }

    fclose(infile);
    return outstruct;
}


/*
 * function to read products data from products.dat file
 * usage: refer documentation
 */

struct products readproducts(int id)
{
    FILE *infile;

    infile=fopen("products.dat", "r");
    if(infile==NULL)
    {
        fprintf(stderr, "\nError. Cannot open file\n");
        exit(1);
    }

    struct products outstruct;
    struct products input;

    while(fread(&input, sizeof(struct products), 1, infile))
    {
        if(id!=0) {
            if(input.id==id) {
                outstruct = input;
            }
        } else {
            outstruct = input;
        }
    }
    fclose(infile);
    return outstruct;
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
