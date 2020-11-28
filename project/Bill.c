#include<stdio.h> 
int main() 
{ 	
	char str[] = "User"; 
	char str1[] = "Thank you for your ORDER!";
	char str2[] = "Company Name";
	char str3[] = "Bill Statement"; 
	char str4[] = "Date : 29th September 2020";
	char str5[] = "Enter [Back] to return to Main Page:-";
	char str6[] = "______________________________________________________________________________________________";
	char name[] = "User Name";
	char mode[] = "Mode of Payment";
	char payment[] = "Cash on Delivery";
	char info[] = "You will revieve the BILL on your Email and it will be attached with your product as well.\n Thankyou for shopping with us.";

	
	printf("\n\n\n\n%63s\n\n" , str );
	printf("%75s\n\n\n\n"  ,str1); 
	
	printf("%68s\n\n\n" , str2 );
	
	int n = 32;
	int i;
	for(i=1;i<=n;i=i+1){
		printf(" ");
	}
	i = 0;
	printf("%s",str3);
	for(i=1;i<=n;i=i+1){
		printf(" ");
	}
	printf("%s\n",str4);
	
	n = 32;
	i = 0 ;
	printf("\n");
	for(i=1;i<=n;i=i+1){
		printf(" ");
	}
	i = 0;
	printf("Name: ");
	
	printf("%s", name );
	for(i=1;i<=n;i=i+1){
		printf(" ");
	}
	printf("         \n\n");
	
	
	
	
	
	
	
	
	/*     List of Items            */
	
	
	char Product[] = "Products Name";
	char Quantity[] = "Quantity";
	char Price[] = "Price Per Unit($)";
	char Cost[] = "Cost($)" ;
	char Total[] = "Total";
	char Net_Cost[]= "Net Cost";
	char gst[] = "GST";
	
	char item1[] = "Item_1"; int qitem1 = 2; int price1 = 50;
	char item2[] = "Item_2"; int qitem2 = 1; int price2 = 30;
	char item3[] = "Item_3"; int qitem3 = 5; int price3 = 20;
	
	
	n=120;
	for(i=1;i<=n;i=i+1){ 
		printf("_");

	}
	printf("\n");
	
	
	
	n = 15;
	for(i=1;i<=n;i=i+1){
		printf(" ");
	}
	i = 0;
	printf("%s",Product);
	for(i=1;i<=n;i=i+1){
		printf(" ");
	}
	printf("%s",Quantity);
	for(i=1;i<=n;i=i+1){
		printf(" ");
	}
	printf("%s",Price);

	for(i=1;i<=n;i=i+1){
		printf(" ");
	}
	printf("%s\n",Cost);
	
	
	
	printf("%108s\n\n",str6);
	

	// item 1
	printf("%27s",item1);
	printf("%21d",qitem1);
	printf("%28d",price1);
	printf("%27d",price1*qitem1);
	printf("\n");
	
	// item 2 
	
	printf("%27s",item2);
	printf("%21d",qitem2);
	printf("%28d",price2);
	printf("%27d",price2*qitem2);
	printf("\n");	
	
	// item 3
	
	printf("%27s",item3);
	printf("%21d",qitem3);
	printf("%28d",price3);
	printf("%27d",price3*qitem3);
	printf("\n");	
	
	
	
	int total = price1*qitem1+price2*qitem2+price3*qitem3;
	int tax = total*0.17;
	int net_cost = total+tax;
	
	printf("%108s",str6);
	
	
	printf("\n\n%80s",Total);	
	printf("%23d",total);
	
	printf("\n\n%80s",gst);	
	printf("%23d",tax);
	
	
	printf("\n\n%80s",Net_Cost);	
	printf("%23d",net_cost);	
	
	
	
	n=120;
	printf("\n");
	for(i=1;i<=n;i=i+1){ 
		printf("_");
	}
	
	

	
	
	
	
	
	
	
	
	
	printf("\n%56s:-      %s\n\n\n " , mode,payment );
	
	printf("%s",info);
	char input[50];
	printf(" \n\n%s",str5);
	
	scanf("%s",&input);
	printf("You have selected for: %s",input);
} 

