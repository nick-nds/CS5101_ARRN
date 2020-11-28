#include<stdio.h> 
int main() 
{ 	
	char str[] = "ADMIN"; 
	char str1[] = "User Search ";
	char str2[] = "Search Result";
	char str3[] = "User ID"; 
	char str4[] = "User Name";
	char str6[] = "User Status";
	//char str7[] = "Product Stock";
	char str5[] = "Enter [Back] to return to Main Page";
	char edituser[] = "Enter User ID to edit it's status";

	
	printf("\n\n\n\n%63s\n\n" , str );
	printf("%67s\n\n\n\n"  ,str1); 
	
	printf("%68s\n\n\n" , str2 );
	
	printf("%30s",str3);
	printf("%25s",str4);
	printf("%25s",str6);
	//printf("%25s",str7);
	printf("\n\n");
	
	
	char id1[] = "ID1" ;char name1[] = "Name_1"; int status1 = 1;
	char id2[] = "ID2" ;char name2[] = "Name_2"; int status2 = 1;
	char id3[] = "ID3" ;char name3[] = "Name_3"; int status3 = 0;
	
	
	
	
	printf("%30s",id1);
	printf("%25s",name1);
	printf("%25d",status1);
	printf("\n");
	
	
	
	printf("%30s",id2);
	printf("%25s",name2);
	printf("%25d",status2);
	printf("\n");
	
	
	printf("%30s",id3);
	printf("%25s",name3);
	printf("%25d",status3);
	printf("\n");
	
	
	
	
	
	
	
	printf("\n\n\n%100s\n" , str5 );
	
	
	char input[50];
	printf("\n\n\n%s:-" , edituser);
	scanf("%s",&input);
	printf("You have searched for: %s",input);
} 

