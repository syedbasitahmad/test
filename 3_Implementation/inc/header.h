/**
 * @file header.h
 * @author Team 24 (you@domain.com) Syed basit . Isha , Raghav , suraksha
 * @brief all function here related to food ordering management system
 * @version 0.1
 * @date 2021-05-25
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef Food_H_
#define Food_H_


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/**
 * @brief structure for food
 * 
 */
struct Food{
    
    int id;
	char foodname[50];
	int quantity;
	float price;
	int data;

};

struct Food food ;
/**
 * @brief for check void functions enumerated
 * @author syed basit Ahmmad 99004312
 */
typedef enum error_t {
    ERROR_DIV_BY_ZERO = -2, /**< Division by 0 error */
    ERROR_NULL_PTR = -1,    /**< Null pointer dereferncing error */
    SUCCESS = 0,
    FAILURE=-3             /**< Compute operation is successful */
}error_t;

/**
 * @brief this will return you to the main function
 * 
 */
void returnfunc(void);
/**
 * @brief for displaying  a particular file 
 * @author syed basit ahmad
 * 
 * @param file_name 
 * @return error_t 
 */
 error_t display_file(char *file_name);
#include<ctype.h>
/**
 * @brief return to main menu
 * 
 */
void returnfunc(void);
/**
 * @brief display the whole file
 * 
 */
error_t display_file(char *file_name);
/*void mainmenu(void);*/
/**
 * @brief redirect to menu section
 * 
 */
error_t admin(void);
/**
 * @brief redirect to customer section
 * 
 */
error_t customer(void);
error_t veg(void);
error_t non_veg(void);
error_t close(void);
int checkfid(int);
void administration(void);
//void customer(void);
/**
 * @brief to chech if order file is point to NULL
 * 
 */
int null_checker();
int null_checker2();
//void addrecord(void);
/**
 * @brief Add all food records as a struct
 * 
 */
void addfoodrecord(void);
//void deleterecord(void);
/**
 * @brief delete food item
 * 
 */
void deletefoodrecord(void);
//void searchrecord(void);
//void viewrecord(void);
//void updatefoodrecord(void);
/**
 * @brief view menu from admin section
 * 
 */
void viewfoodrecord(void);
error_t total1cash(void);
error_t viewcardpay(void);
error_t foodlist(void);
void itemcounter(void);
void yellow_t();
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
