#include<stdio.h> 
int main() 
{ 	
	char str[] = "User"; 
	char str1[] = "Product Search ";
	char str2[] = "Search Result";
	char str3[] = "Product ID"; 
	char str4[] = "Product Name";
	char str6[] = "Product Price";
	char str7[] = "Product Stock";
	char str5[] = "Enter [Back] to return to Main Page";

	
	printf("\n\n\n\n%63s\n\n" , str );
	printf("%69s\n\n\n\n"  ,str1); 
	
	printf("%68s\n\n\n" , str2 );
	
	printf("%30s",str3);
	printf("%25s",str4);
	printf("%25s",str6);
	printf("%25s",str7);
	printf("\n\n");
	
	
	char id1[] = "ID1" ; char item1[] = "Item_1"; int qitem1 = 2; int price1 = 50;
	char id2[] = "ID2" ;char item2[] = "Item_2"; int qitem2 = 1; int price2 = 30;
	char id3[] = "ID3" ;char item3[] = "Item_3"; int qitem3 = 5; int price3 = 20;
	
	
	
	
	printf("%30s",id1);
	printf("%25s",item1);
	printf("%25d",price1);
	printf("%25d",qitem1);
	printf("\n");
	
	
	
	printf("%30s",id2);
	printf("%25s",item2);
	printf("%25d",price2);
	printf("%25d",qitem2);
	printf("\n");
	
	
	printf("%30s",id3);
	printf("%25s",item3);
	printf("%25d",price3);
	printf("%25d",qitem3);
	printf("\n");
	
	
	
	
	
	
	
	printf("\n\n\n%100s\n\n\n" , str5 );
	
	
	char input[50];
	printf("Enter product ID to add to cart:-");
	scanf("%s",&input);
	printf("You have searched for: %s",input);
} 

