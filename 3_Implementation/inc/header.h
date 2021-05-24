#ifndef Food_H_
#define Food_H_


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Food{
    
    int id;
	char foodname[50];
	int quantity;
	float price;
	int data;

};

struct Food food ;
typedef enum error_t {
    ERROR_DIV_BY_ZERO = -2, /**< Division by 0 error */
    ERROR_NULL_PTR = -1,    /**< Null pointer dereferncing error */
    SUCCESS = 0,
    FAILURE=-3             /**< Compute operation is successful */
}error_t;

void returnfunc(void);
 error_t display_file(char *file_name);
#include<ctype.h>

void returnfunc(void);
error_t display_file(char *file_name);
/*void mainmenu(void);*/

void admin(void);
error_t customer(void);
void veg(void);
void non_veg(void);
error_t close(void);

void administration(void);
//void customer(void);

//void addrecord(void);
void addfoodrecord(void);
//void deleterecord(void);

void deletefoodrecord(void);
void searchrecord(void);
//void viewrecord(void);
void updatefoodrecord(void);
void viewfoodrecord(void);
error_t total1cash(void);
error_t viewcardpay(void);
error_t foodlist(void);
void itemcounter(void);

// Order Food Part
error_t vegetarian(void);
error_t non_vegetarian(void);

//Payment functions
int cash_mode();
int card_mode(long long int card_num);
int f_add();
int pay_mode();
int get_payment(int tb);



//void details(void);
//void aboutus(void);

//void Password(void);
//int getdata();
int getfooddata();



 ///Global Type

//char password[10]="foodiegoodie";

#endif
