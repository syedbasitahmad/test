#include "header.h"


int total_bill;
int cash_mode()
{
printf("Kindly Pay The Amount of %d by Cash \n\n",total_bill);
printf("Enter The Cash Given By Customer : ");

    int customer_cash;
    scanf("%d",&customer_cash);

    int pending_amount; 

    if(customer_cash>total_bill)
    {
        pending_amount=customer_cash-total_bill;
        printf("Kindly Collect The Change of %d from the counter. \n\n",pending_amount);
        printf("Payment Successful !");
        


    }
    else if(customer_cash<total_bill)
    {
        pending_amount=total_bill-customer_cash;
        printf("Kindly Pay %d More ",pending_amount);
        

    }
    else
    {
        char flag[4]="Cash";
        FILE *fptr;
        fptr=fopen("pay.txt","a+");
        fprintf(fptr," %s ---> %d\n",flag,total_bill);




        printf("Cash Payment Done !\n\n");
        
    }

}


int card_mode(long long int card_num)
{
printf(" Kindly Pay The Amount of %d by Card \n",total_bill);
    //long long int card_num;

   // printf("Enter The 16 Digit Card Number : ");
    //scanf("%lld",&card_num);

    long long int count=0;
    while(card_num!=0)
    {
        card_num =card_num/10;
        ++count;

    }
    long long int card_count=count;

    if(card_count<16)
    {
        printf("The Card Number Entered is Less Than 16 Digits\n.");
        printf("Current Transaction Failed !");
        //pay_mode();

    }
    else if (card_count>16)
    {
        printf("The Card Number Entered is More Than 16 Digits\n.");
        printf("Current Transaction Failed !");
        //pay_mode();
    }
    else
    {
        int discount_price,final_bill;
        discount_price=(total_bill*7)/100;
        final_bill=total_bill-discount_price;

        printf("Congratulations You Have Availed The Offer \n\n");
        printf("The Total Bill Was : %d \n\n",total_bill);
        printf("Offer Price : %d \n\n\n",final_bill);
        
        
        char flag[4]="Card";
        FILE *fptr;
        fptr=fopen("pay.txt","a+");
        fprintf(fptr," %s ---> %d\n",flag,final_bill);

        //FILE *fptr;
        

        printf("Transaction Successful !\n\n");
        
    }

}

int f_add()
{
    int sum = 0, num, i = 0;
int state = 0;
FILE* f;

    if ((f = fopen("pay.txt", "r")) == NULL)
        return -1;

    while ((i = fgetc(f)) != EOF) {
        switch(state) {
        case 0: // processing text
            if (isdigit(i)) {
                num = i - 0;
                state = 1;
            }
            break;
        case 1: // processing number
            if (isdigit(i)) {
                num *= 10;
                num += i - 0;
            }
            else {
                sum += num;
                num = 0;
                state = 0;
            }
            break;
        }
    }

    if (state == 1) {
        sum += num;
    }

    printf("Closing Balance : Rs. %i \n", sum);
    fclose(f);
    return 0;
}


int pay_mode()
{


printf("            *-*-*- Welcome to The Payment Section *-*-*- \n\n\n");
printf("Kindly Choose The mode of Payment\n\n");

printf("            7 Percent Instant Discount On Card Payments !!!!\n\n");
printf("1. Pay with Cash\n");
printf("2. Pay with Card\n");
printf("\n");

int choice;

printf("Enter your choice of Payment : ");
scanf("%d",&choice);
printf("\n");

if(choice==1)
{
    cash_mode();

}
else if(choice==2)
{
    long long int c_num;
    printf("Enter The 16 Digit Card Number : ");
    scanf("%lld",&c_num);
    card_mode(c_num);
    FILE *cptr;
    cptr=fopen("card.txt","a+");
    fprintf(cptr,"%lld -----> %d \n",c_num,total_bill);


    
}
else
{
    printf("Invalid Choice \n\n");
    printf("Kindly Choose 1 or 2 \n\n");
    pay_mode();
}

}



int get_payment(int tb)
{
    /* printf("Enter The Amount to Be paid : ");
    scanf("%d",&total_bill); */
    total_bill=tb;
    pay_mode();
    f_add();
}


