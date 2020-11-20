#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "headers/colors.h"
#include "headers/register.h"
#include "headers/login.h"
#include "headers/db.h"
#include "headers/addproducts.h"
#include "headers/interface.h"
#include "headers/userstruct.h"

int main(void)
{
    //regi();
    //login("nick", "nick");
    //usersdata();
    //system("clear");
    //addProducts();
    //readproducts(0);
    readusers(1);
    readusers(2);
    readusers(3);
    readusers(4);
    readusers(6);
    readproducts(3);
    //readproducts(2);
    //printf("Here\n");
    //int id;
    //id=getid("products");
    //printf("From main: %d\n", id);


    /*
    if(main_interface()==1) {
        login_interface();
        //login("akash", "akash");
    } else if(main_interface()==2) {

        char regiArr[5][20];
        regiLabel:
        register_interface(regiArr);
        if(strcmp(regiArr[0], "s")==0) {
            regi(regiArr[1], regiArr[2], regiArr[3], regiArr[4]);
        } else {
            goto regiLabel;
        }

    } else {
        printf("Invalid input.");
        exit(1);
    }
    return 1;
    */
}
