#include "header.h"
 ///Global Type
 FILE *fp,*ft,*dp,*dt;
FILE *ffp,*fft,fdp,*fft;
int s;
char findrecord;
int again;
int quantity;
double total1=0;
int t=0,k=0;
//char password[10]="foodiegoodie";

void administration(void)
{
	//Password();
	e :
	system("cls");
	printf("**************************************WELCOME TO THE ADMIN SECTION************************************************\n\n");
	printf("          1. Add New Record\n\n          2. Search Record\n\n          3. Delete Record\n\n          4. View THe Records\n\n          5. View previous orders placed\n\n           6.Update food record\n\n           7. total1 Cash today\n\n           8. View Card Pay\n\n           9. Instant Food List\n\n          0. Back To Main Menu \n\n             Enter Your Choice --->");
	int n;
	scanf("%d",&n);
		printf("\n\n");
	//printf("In progress :");

	printf("\n\n");
	if(n==1)
	{
		addfoodrecord();
	}
	else if(n==2)
	{
		/*searchrecord();*/
	}
	else if(n==3)
	{
		deletefoodrecord();
	}
	else if(n==4)
	{
		viewfoodrecord();
	}
		else if(n==5)
	{
		display_file("order.txt");
	}
	else if(n==6)
    {
        updatefoodrecord();
    }
    else if(n==7)
    {
        total1cash();
    }
    else if(n==8)
    {
        viewcardpay();
    }
    else if(n==9)
    {
        foodlist();
    }
	else if(n==0)
	{
		system("cls");
		/*mainmenu();*/
	}
	else
	{
		printf("Wrong Input !! PLease Re-enter The Correct Option");
        exit(0);
	}
	
}


void addfoodrecord(void)
{
    char response;
	system("cls");
	ffp=fopen("record2.txt","a");
	if(getfooddata()==1)
	{   printf("SUCCESS");
		fseek(ffp,0,SEEK_END);
		fwrite(&food,sizeof(food),1,ffp);
		fclose(ffp);
		printf("\n\n");
		printf("The Record Is Successfully Saved ! !\n\n");
		int wait=0;
		for(wait=0;wait<=10000;wait++)
	{
		printf("\rSuccessfully added recorde....exiting wait : %d",wait/1000);
	}
	   exit(0);
		printf("Save any more?(Y / N): ");
        scanf("%c",&response);
		if(response=='n')
	    	administration();
		else
	    	system("cls");
	    	addfoodrecord();
	}	
}

void deletefoodrecord(void)
{
	system("cls");
    int del;
    char anotherf='y';
    while(anotherf=='y')  //infinite loop
    {
	system("cls");
	printf("                Enter The Food ID To Delete :");
	scanf("%d",&del);
	ffp=fopen("record2.txt","r+");
	rewind(ffp);
	while(fread(&food,sizeof(food),1,ffp)==1)
	{
	    if(food.id==del)
	    {
			printf("\n\n");
			printf("                               .....................The Food Record Is Available....................\n\n");
			printf("               Food Name Is %s\n\n",food.foodname);
		/*	printf("               Employee's Date  OF Birth Is %d/%d/%d\n\n",e.dd,e.mm,e.yyyy);*/
			findrecord='t';
	    }
	}
	if(findrecord!='t')
	{
	    printf("                                    .........................No record is found modify the search..........................\n\n");
	    administration();
	}
	if(findrecord=='t' )
	{
		char response;
	    printf("Do You Want To Delete THe Record ? (Y/N) ");
		scanf(" %c", &response);
	    if(response=='y')
	    {
			fft=fopen("test2.txt","w");  //temporary file for delete
			rewind(ffp);
			while(fread(&food,sizeof(food),1,ffp)==1)
			{
		    	if(food.id!=del)
		    	{
					fseek(fft,0,SEEK_CUR);
					fwrite(&food,sizeof(food),1,fft); //write all in tempory file except that
		    	}                              //we want to delete
			}
			fclose(fft);
			fclose(ffp);
			remove("record2.txt");
			rename("test2.txt","record2.txt"); //copy all item from temporary file to fp except that
			ffp=fopen("record2.txt","r");    //we want to delete
			if(findrecord=='t')
			{
		    	printf("        THE RECORD IS SUCCESSFULLY DELETED.\n\n");
		    	printf("        Delete Another Record ? (Y/N) : ");
			}
	    }
		else
		administration();
		fflush(stdin);
		anotherf='n';
	}
}
administration();
}

void viewfoodrecord(void) 
{
    system("cls");
    printf("                              ********************** Food Details**********************\n\n");
    printf("                 FOODNAME             QUANTITY              PRICE               Food Id\n\n");
    
    ffp=fopen("record2.txt","r");
    while(fread(&food,sizeof(food),1,ffp)==1)
    {
		printf("                 %s",food.foodname);
		printf("                 %d",food.quantity);
		printf("                 %f",food.price);
		printf("                 %d",food.id);
		printf("\n\n");
	}
      
   /*   fclose(ffp);
      returnfunc();*/
	  	int wait=0;
		for(wait=0;wait<=10000;wait++)
	{
		printf("\rRedirecting to main menu : %d",wait/1000);
	}
	  administration();
}

void returnfunc(void)
{
    int response;
    {
		printf(" Press 0 to return to main menu");
        scanf("%d",&response);
    }
	e:
    if(response =0) //allow only use of enter
    administration();
    else
    goto e;
}


int checkfid(int c)  //check whether the record is exist in list or not
{
	rewind(ffp);
	while(fread(&food,sizeof(food),1,ffp)==1)
	if(food.id==c)
	
	return 0;  //returns 0 if food exits
    
	return 1; //return 1 if it not
}

int getfooddata()
{
	//*int t;
	printf("        Food ID :\t");
	scanf("%d",&k);

	if(checkfid(k)==0)
	{
		printf("\n\n");
		printf("\a                        The Food Record Already Exists !!!\a");
		/*mainmenu();*/
		return 1;
	}
	food.id=k;
	printf("        Food Name : ");
	scanf("%s",food.foodname);
	printf("        Quantity :");
	scanf("%d",&food.quantity);
	printf("        Price :");
	scanf("%f",&food.price);
	printf("        data :");
	scanf("%d",&food.data);
    printf("SUCCESS");
	return 1;
}
error_t display_file(char *file_name)
{
    FILE *f = fopen(file_name, "r");      // open the specified file
    if (f != NULL)
    {
        int c;

        while ((c = fgetc(f)) != EOF)     // read character from file until EOF
        {
            putchar(c);                   // output character
        }
        fclose(f);
    }
	return SUCCESS;
}
void updatefoodrecord(void)
{
	system("cls");
    int d, found = 0;
    char another='y';
    while(another=='y')  //infinite loop
    {
	system("cls");
	printf("                Enter the Food ID To Modify :");
	scanf(" %d",&d);
	fp=fopen("record2.txt","r+");
	rewind(fp);
	while(fread(&food,sizeof(food),1,fp)==1)
	{
	    if(food.id==d)
	    {
			printf("\nEnter new name, quantity, price and data:");
            scanf("%s %d %f %d",&food.foodname,&food.quantity,&food.price,&food.data);
            fseek(fp,-(long)sizeof(food),1);
            fwrite(&food,sizeof(food),1,fp);
			printf("\n Record Updated");
			administration();
			found = 1;
	    }
	}
	if(found == 0)
	{
	    printf("                                    .........................No record is found modify the search..........................\n\n");
	    administration();
	}
	}
}

error_t total1cash()
{
    printf("                    ****************************************\n                                  Cash Payments\n                    ****************************************\n\n");
	char v;
	FILE *file1;
	
    file1=fopen("pay.txt","rt");
	while((v=getc(file1))!=EOF)
        {
        	printf("%c",v);
		}
		int wait =0;
			for(wait=0;wait<=100000;wait++)
	{
		printf("\rSuccessfully added recorde....exiting wait : %d",wait/1000);
	}
    fclose(file1);
	system("cls");
//	returnfunc();
	return SUCCESS;
}

error_t viewcardpay(void)
{
    system("cls");
    printf(" ____________________________\n");
	printf("|   Card NO.   |   Money $   |\n");
	char v;
	FILE *file1;
	
    file1=fopen("pay.txt","rt");
	while((v=getc(file1))!=EOF)
        {
        	printf("%c",v);
		}
		int wait =0;
			for(wait=0;wait<=100000;wait++)
	{
		printf("\rSuccessfully added recorde....exiting wait : %d",wait/1000);
	}
    fclose(file1);
	system("cls");
  //  returnfunc();
	return SUCCESS;
}

error_t foodlist()
{
	printf("                    ****************************************\n                                  VEGETARIAN MENU\n                    ****************************************\n\n");
	char v;
	FILE *file1;
	
    file1=fopen("veg.txt","rt");
	while((v=getc(file1))!=EOF)
        {
        	printf("%c",v);
		}
    fclose(file1);
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
		 administration();   
     return SUCCESS; 
}
