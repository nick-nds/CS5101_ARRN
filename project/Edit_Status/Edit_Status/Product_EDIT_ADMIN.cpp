#include<stdio.h> 
#include <stdlib.h>
int main() 
{ 	
	char str[] = "ADMIN"; 
	char str1[] = "Product EDIT ";
	//char str2[] = "Search Result";
	char str3[] = "Product ID"; 
	char productid[] = "Id of the product";
	char str4[] = "Product Name";
	char str6[] = "Product Price";
	char str7[] = "Product Stock";
	char str8[] = "Product Status";
	char str5[] = "Enter [Back] to return to Main Page";
	//char productedit[] = "Enter Product ID to edit it's Status";

	
	printf("\n\n\n\n%63s\n\n" , str );
	printf("%67s\n\n\n\n"  ,str1); 
	
	printf("%60s : " , str3 );
	printf("%s", productid);
	
	
	printf("\n\n\n");
	
	printf("%30s",str4);
	printf("%25s",str6);
	printf("%25s",str7);
	printf("%25s",str8);
	printf("\n\n");
	
	
	char item[] = "Item"; int qitem = 2; int price = 50; int status = 1;
	
	
	
	
	printf("%30s",item);
	printf("%25d",price);
	printf("%25d",qitem);
	printf("%25d",status);
	printf("\n");
	
	
	//printf("\n\n\n%100s\n" , str5 );
	
	
	int input_price;
	printf("\n\n\nEnter New Price:-");
	scanf("%d",&input_price);
	price = input_price;
	
	
	int input_qitem;
	printf("\n\nEnter New Quantity:-");
	scanf("%d",&input_qitem);
	qitem = input_qitem;
	
	
	int input_status;
	printf("\n\nEnter Product's status[0,1]:-");
	scanf("%d",&input_status);
	status = input_status;
	
	
	
	system("cls");
	
	
	
	printf("\n\n\n\n%63s\n\n" , str );
	printf("%67s\n\n\n\n"  ,str1); 
	
	printf("%60s : " , str3 );
	printf("%s", productid);
	
	
	printf("\n\n\n");
	
	printf("%30s",str4);
	printf("%25s",str6);
	printf("%25s",str7);
	printf("%25s",str8);
	printf("\n\n");


	
	printf("%30s",item);
	printf("%25d",price);
	printf("%25d",qitem);
	printf("%25d",status);
	printf("\n");
	
	
	char input_back[50];
	printf("\n\n\n%s:-" , str5 );
	scanf("%s",&input_back);
	
	
	
	
} 

