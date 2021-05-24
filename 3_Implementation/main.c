#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "header.h"


int main()
{
   int a; double b;
   char n1[]=    "\n\n \t Better Food Better Mood ";
   char n2[]=    "\n\n \t\t\t Order your Favourite Food without waiting in a queue ";
   char n3[]=    "\n\n \t\t\t\t\t\t Hungry...? just click any key and start ordering";
    printf("\n\n");
    for(a=0; n1[a]!=0; a++)
   {
   	
     printf("%c",n1[a]);
      for(b=0; b<=6666666; b++)
      {
      }
   }
   printf("\n\n");
    for(a=0; n2[a]!=0; a++)
   {
     printf("%c",n2[a]);
      for(b=0; b<=6666666; b++)
      {
      }
   }
   printf("\n\n");
    for(a=0; n3[a]!=0; a++)
   {
     printf("%c",n3[a]);
      for(b=0; b<=6666666; b++)
      {
      }
   }
   char m;
   scanf("%c",&m);

	system("cls");
	printf("                                 **************************************************************************\n");
	printf("                                                     WELCOME TO FOOD ORDER SYSTEM\n");
	printf("                                 **************************************************************************\n\n\n");
	printf("          1. ADMIN SECTION \n\n          2. CUSTOMER SECTION \n\n          3. Exit \n\n\n             Enter Your Choice: ");
	int option;
	scanf("%d", &option);
	switch(option)
	{
		case 1:admin();
		        break;
		case 2:customer();
		        break;
		case 3:close();
		       break;
	   
	}
   return 0;
}
