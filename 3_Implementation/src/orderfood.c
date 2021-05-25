
#include "header.h"
int total=0;
char any;
error_t vegetarian()
    {
        int choice_veg;
	    int again_veg;
	    int quantity_veg;
	    
        printf("\n\nEnter What You Want :");
	    scanf("%d",&choice_veg);

    // CHOICE 1
	    if(choice_veg==1)
	    {
		    printf("Quantity :  ");
		    scanf("%d",&quantity_veg);
		    total = total + 60*(quantity_veg); // price has to be changed
		    
		    printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\nEnter Your Choice :->");
		    scanf("%d",&again_veg);

		    if(again_veg==1)
		    {
			    printf("\n\n");
			    veg();
		    }
		    else if(again_veg==2)
		    {
                // payment option is called with total as arguement
			    //details(total);
			    printf("Total is %d \n",total);
			    get_payment(total);
			    return SUCCESS;
		    }
            else
            {
                printf("Invalid Input... Enter any key to continue");
                if(scanf("%c",&any))
                vegetarian();

            }
	    }

    // CHOICE 2
	    else if(choice_veg==2)
	    {
		    printf("Quantity :  ");
		    scanf("%d",&quantity_veg);
		    total = total + 45*(quantity_veg); // price has to be changed
		    
		    printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\nEnter Your Choice :->");
		    scanf("%d",&again_veg);

		    if(again_veg==1)
		    {
			    printf("\n\n");
			    veg();
		    }
		    else if(again_veg==2)
		    {
                // payment option is called with total as arguement
			    //details(total);
			    printf("Total is %d \n",total);
			    get_payment(total);
			    return SUCCESS;
		    }
            else
            {
                printf("Invalid Input... Enter any key to continue");
                if(scanf("%c",&any))
                veg();

            }
	    }

    // CHOICE 3
	    else if(choice_veg==3)
	    {
		    printf("Quantity :  ");
		    scanf("%d",&quantity_veg);
		    total = total + 150*(quantity_veg); // price has to be changed
		    
		    printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\nEnter Your Choice :->");
		    scanf("%d",&again_veg);

		    if(again_veg==1)
		    {
			    printf("\n\n");
			    veg();
		    }
		    else if(again_veg==2)
		    {
                // payment option is called with total as arguement
			    //details(total);
			    printf("Total is %d \n",total);
			    get_payment(total);
			    return SUCCESS;
		    }
            else
            {
                printf("Invalid Input... Enter any key to continue");
                if(scanf("%c",&any))
                veg();

            }
	    }
	
    // BACK MAIN MENU
	    else if(choice_veg==4)
	    {
		    system("cls");
		    customer();
	    }

    // INVALID
	    else
	    {
		    printf("Wrong Input! Re-enter THe Correct Option\n\n");
		    if(scanf("%c",&any))
		    customer();
	    }
    }

error_t non_vegetarian()
    {
        int choice_nonveg;
	    int again_nonveg;
	    int quantity_nonveg;
	    
        printf("\n\nEnter What You Want :");
	    scanf("%d",&choice_nonveg);

    // CHOICE 1
	    if(choice_nonveg==1)
	    {
		    printf("Quantity :  ");
		    scanf("%d",&quantity_nonveg);
		    total = total + 85*(quantity_nonveg); // price has to be changed
		    
		    printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\nEnter Your Choice :->");
		    scanf("%d",&again_nonveg);

		    if(again_nonveg==1)
		    {
			    printf("\n\n");
			    non_veg();
		    }
		    else if(again_nonveg==2)
		    {
                // payment option is called with total as arguement
			    //details(total);
			    printf("Total is %d \n",total);
			    get_payment(total);
			    return SUCCESS;
		    }
            else
            {
                printf("Invalid Input... Enter any key to continue");
                if(scanf("%c",&any))
                non_veg();

            }
	    }

    // CHOICE 2
	    else if(choice_nonveg==2)
	    {
		    printf("Quantity :  ");
		    scanf("%d",&quantity_nonveg);
		    total = total + 35*(quantity_nonveg); // price has to be changed
		    
		    printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\nEnter Your Choice :->");
		    scanf("%d",&again_nonveg);

		    if(again_nonveg==1)
		    {
			    printf("\n\n");
			    non_veg();
		    }
		    else if(again_nonveg==2)
		    {
                // payment option is called with total as arguement
			    //detail(total);
			   printf("Total is %d \n",total);
			    get_payment(total);
			    return SUCCESS;
		    }
            else
            {
                printf("Invalid Input... Enter any key to continue");
                if(scanf("%c",&any))
                non_veg();

            }
	    }

    // CHOICE 3
	    else if(choice_nonveg==3)
	    {
		    printf("Quantity :  ");
		    scanf("%d",&quantity_nonveg);
		    total = total + 90*(quantity_nonveg); // price has to be changed
		    
		    printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\nEnter Your Choice :->");
		    scanf("%d",&again_nonveg);

		    if(again_nonveg==1)
		    {
			    printf("\n\n");
			    non_veg();
		    }
		    else if(again_nonveg==2)
		    {
                // payment option is called with total as arguement
			    //details(total);
			   printf("Total is %d \n",total);
			    get_payment(total);
			    return SUCCESS;
		    }
            else
            {
                printf("Invalid Input... Enter any key to continue");
                if(scanf("%c",&any))
                non_veg();

            }
	    }
	
    // BACK MAIN MENU
	    else if(choice_nonveg==4)
	    {
		    system("cls");
		    customer();
	    }

    // INVALID
	    else
	    {
		    printf("Wrong Input! Re-enter THe Correct Option\n\n");
		    if(scanf("%c",&any))
			system("cls");
		    customer();
	    }
    }

