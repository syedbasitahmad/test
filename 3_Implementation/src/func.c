#include "header.h"

/*
@brief  function to come out of the program

*/
error_t close()
{
   system("cls");  
   int a; double b;
   char n2[]=    "\n\n \t\t\t Thank You for visting our site............ ";
   char n3[]=    "\n\n \t\t\t\t\t\t If u feel hungry just visit our site again.. ";
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
   char j;
   scanf("%c",&j);	
   return SUCCESS;
}

/*
@brief  function to display the vegeterian menu

*/
error_t veg()
{    
    system("cls");
	printf("                    ****************************************\n                                  VEGETARIAN MENU\n                    ****************************************\n\n");
	char v;
	FILE *file1;
	
    file1=fopen("veg.txt","rt");
	while((v=getc(file1))!=EOF)
        {
        	printf("%c",v);
		}
         fclose(file1);    
         vegetarian(); // Vegetarian function is called
	return SUCCESS;
}

/*
@brief  function to display the non-vegeterian menu

*/

error_t non_veg()
{
	system("cls");
	printf("                    ****************************************\n                                  NON-VEGETARIAN MENU\n                    ****************************************\n\n");
	char a;
	FILE *file2;
	
    file2=fopen("nonveg.txt","rt");
	while((a=getc(file2))!=EOF)
        {
        	printf("%c",a);
		}
         fclose(file2);
        non_vegetarian(); // Non Vegetarian function is called
	return SUCCESS;
}

/*
@brief  function to enter the admin section

*/
error_t admin()
{
	char uname[10],passcode[10];
	char str[10]="admin";
	system("cls");
	printf("                                 **************************************************************************\n");
	printf("                                                     WELCOME TO ADMIN SECTION\n");
	printf("                                 **************************************************************************\n\n\n");
	printf("          ENTER USERNAME: ");
	scanf("%s",uname);
	printf("\n\n");
	printf("          ENTER PASSWORD: ");
	scanf("%s",passcode);
    int a= strcmp(str,uname);
	int b= strcmp(str,passcode);   
   if(a==0 && b==0 )  
     administration();  
   else 
   {
   	 printf("\n\n");
     printf("          Incorrect username or password\t");
    char k;
   scanf("%c",&k);
     administration();
}
	return SUCCESS;
}

/*
@brief  function to enter the customer section

*/
error_t customer()
{
	system("cls");
    printf("                                 **************************************************************************\n");
	printf("                                                     WELCOME TO MENU SECTION\n");
	printf("                                 **************************************************************************\n\n\n");
	printf("          1. Veg \n\n          2. Non Veg \n\n          3. Exit \n\n\n             Enter Your Choice: ");
		int option;
	scanf("%d", &option);
   
	switch(option)
	{
		case 1:veg();
		        break;
		case 2:non_veg();
		        break;
		case 3:close();
		       break;
	   
	}
	return SUCCESS;
}
