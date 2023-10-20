#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>

//variable declarations
char nameofUser[100];
char addressofUser[100];
char cellNumofUser[100];

//sets the coordinates of print statement
COORD coord = { 0, 0 };

void gotoxy(int x, int y) {
    coord.X = x; coord.Y = y;

     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}




//print company name function
void companyname_header()
{
  gotoxy(17,6);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 PAYFOOD \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
  gotoxy(17,7);
  printf("\xB2\xB2\xB2 ONLINE FOOD ORDER SYSTEM \xB2\xB2\xB2\xB2");
void line();
}

//print divider line
void line()
{
  gotoxy(17,8);
  printf("----------------------------------------\n");
}
//customer name function
void customer_name()
{
  gotoxy(17,10);
  printf("Enter your name: ");
  fgets(nameofUser, sizeof(nameofUser),stdin);
}
//customer address function
void customer_address()
{
  gotoxy(17,12);
  printf("Enter your address: ");
  fgets(addressofUser, sizeof(addressofUser),stdin);
}
//customer cellphone# function
void customer_cellphoneNo()
{
  gotoxy(17,14);
  printf("Enter your cellphone#: ");
  fgets(cellNumofUser, sizeof(cellNumofUser),stdin);
  gotoxy(17,16);
  printf("Press ENTER ");
  getch();
  system("cls");
}
//function for printing new lines
void spaceI()
{
  printf("\n");
}
//function for printing new lines
void spaceII()
{
  printf("\n\n");
}
//function for printing new lines
void spaceIII()
{
  printf("\n\n\n");
}
//function for printing new lines
void spaceIV()
{
  printf("\n\n\n\n");
}
//function for printing new lines
void spaceV()
{
  printf("\n\n\n\n\n");
}

//main
int main()
{
  companyname_header();
  customer_name();
  customer_address();
  customer_cellphoneNo();
  spaceII();
  time_t t;
  time(&t);

  //food menu variable data storage
  typedef struct foodies
  {
    float foodprice;
    char foodname[100];
    char itemID[5];
  }foodSection;
  foodSection foodies[5];

  //F1 Hamburger Variables
  strcpy(foodies[0].foodname,"Hamburger");
  strcpy(foodies[0].itemID,"F1");
  foodies[0].foodprice = 24.00;

  //F2 Fries Variables
  strcpy(foodies[1].foodname,"Fries");
  strcpy(foodies[1].itemID,"F2");
  foodies[1].foodprice = 20.00;

  //F3 Fried Chicken Variables
  strcpy(foodies[2].foodname,"Fried Chicken");
  strcpy(foodies[2].itemID,"F3");
  foodies[2].foodprice = 20.00;

  //F4 Beef Steak Variables
  strcpy(foodies[3].foodname,"Beef Steak");
  strcpy(foodies[3].itemID,"F4");
  foodies[3].foodprice = 50.00;

  //F5 Rice Variables
  strcpy(foodies[4].foodname,"Rice");
  strcpy(foodies[4].itemID,"F5");
  foodies[4].foodprice = 10.00;
  //database ends here

  //food order data storage
  typedef struct foodorder
  {
    char reciept_foodname[100];
    char reciept_itemID[5];
    float reciept_foodprice;
    int receipt_foodquantity;
  }foodorderVar;
  foodorderVar foodorder[10];

  //Food Order Slot 1
  strcpy(foodorder[0].reciept_foodname, " ");
  strcpy(foodorder[0].reciept_itemID, " ");
  foodorder[0].reciept_foodprice = 0.00;
  foodorder[0].receipt_foodquantity = 0;

  //Food Order Slot 2
  strcpy(foodorder[1].reciept_foodname, " ");
  strcpy(foodorder[1].reciept_itemID, " ");
  foodorder[1].reciept_foodprice = 0.00;
  foodorder[1].receipt_foodquantity = 0;

  //Food Order Slot 3
  strcpy(foodorder[2].reciept_foodname, " ");
  strcpy(foodorder[2].reciept_itemID, " ");
  foodorder[2].reciept_foodprice = 0.00;
  foodorder[2].receipt_foodquantity = 0;

  //Food Order Slot 4
  strcpy(foodorder[3].reciept_foodname, " ");
  strcpy(foodorder[3].reciept_itemID, " ");
  foodorder[3].reciept_foodprice = 0.00;
  foodorder[3].receipt_foodquantity = 0;

  //Food Order Slot 5
  strcpy(foodorder[4].reciept_foodname, " ");
  strcpy(foodorder[4].reciept_itemID, " ");
  foodorder[4].reciept_foodprice = 0.00;
  foodorder[4].receipt_foodquantity = 0;

  //Food Order Slot 6
  strcpy(foodorder[5].reciept_foodname, " ");
  strcpy(foodorder[5].reciept_itemID, " ");
  foodorder[5].reciept_foodprice = 0.00;
  foodorder[5].receipt_foodquantity = 0;

  //Food Order Slot 7
  strcpy(foodorder[6].reciept_foodname, " ");
  strcpy(foodorder[6].reciept_itemID, " ");
  foodorder[6].reciept_foodprice = 0.00;
  foodorder[6].receipt_foodquantity = 0;

  //Food Order Slot 8
  strcpy(foodorder[7].reciept_foodname, " ");
  strcpy(foodorder[7].reciept_itemID, " ");
  foodorder[7].reciept_foodprice = 0.00;
  foodorder[7].receipt_foodquantity = 0;

  //Food Order Slot 9
  strcpy(foodorder[8].reciept_foodname, " ");
  strcpy(foodorder[8].reciept_itemID, " ");
  foodorder[8].reciept_foodprice = 0.00;
  foodorder[8].receipt_foodquantity = 0;

  //Food Order Slot 10
  strcpy(foodorder[9].reciept_foodname, " ");
  strcpy(foodorder[9].reciept_itemID, " ");
  foodorder[9].reciept_foodprice = 0.00;
  foodorder[9].receipt_foodquantity = 0;
  //database ends here

  //database for drinks section
  typedef struct drinks
  {
    float drinkprice;
    char drinkname[100];
    char itemID[5];
  }drinks_Section;
  drinks_Section drinks[6];


  //B1 Coke Variables
  strcpy(drinks[0].drinkname,"Coke");
  strcpy(drinks[0].itemID,"B1");
  drinks[0].drinkprice = 18.00;

  //B2 CokeFloat Variables
  strcpy(drinks[1].drinkname,"CokeFloat");
  strcpy(drinks[1].itemID,"B2");
  drinks[1].drinkprice = 24.00;

  //B3 Sprite Variables
  strcpy(drinks[2].drinkname,"Sprite");
  strcpy(drinks[2].itemID,"B3");
  drinks[2].drinkprice = 18.00;

  //B4 SpriteFloat Variables
  strcpy(drinks[3].drinkname,"SpriteFloat");
  strcpy(drinks[3].itemID,"B4");
  drinks[3].drinkprice = 24.00;

  //B5 Smoothie Variables
  strcpy(drinks[4].drinkname,"Smoothie");
  strcpy(drinks[4].itemID,"B5");
  drinks[4].drinkprice = 25.00;

  //B6 BubbleTea Variables
  strcpy(drinks[5].drinkname,"Bubble Tea");
  strcpy(drinks[5].itemID,"B6");
  drinks[5].drinkprice = 25.00;
  //database ends here

  //drinks order data storage
  typedef struct drinkorder
  {
    char reciept_drinkname[100];
    char reciept_itemID[5];
    float reciept_drinkprice;
    int receipt_drinkquantity;
  }drinkorderVar;
  drinkorderVar drinkorder[10];

  //Drink Order Slot 1
  strcpy(drinkorder[0].reciept_drinkname, " ");
  strcpy(drinkorder[0].reciept_itemID, " ");
  drinkorder[0].reciept_drinkprice = 0.00;
  drinkorder[0].receipt_drinkquantity = 0;

  //Drink Order Slot 2
  strcpy(drinkorder[1].reciept_drinkname, " ");
  strcpy(drinkorder[1].reciept_itemID, " ");
  drinkorder[1].reciept_drinkprice = 0.00;
  drinkorder[1].receipt_drinkquantity = 0;

  //Drink Order Slot 3
  strcpy(drinkorder[2].reciept_drinkname, " ");
  strcpy(drinkorder[2].reciept_itemID, " ");
  drinkorder[2].reciept_drinkprice = 0.00;
  drinkorder[2].receipt_drinkquantity = 0;

  //Drink Order Slot 4
  strcpy(drinkorder[3].reciept_drinkname, " ");
  strcpy(drinkorder[3].reciept_itemID, " ");
  drinkorder[3].reciept_drinkprice = 0.00;
  drinkorder[3].receipt_drinkquantity = 0;

  //Drink Order Slot 5
  strcpy(drinkorder[4].reciept_drinkname, " ");
  strcpy(drinkorder[4].reciept_itemID, " ");
  drinkorder[4].reciept_drinkprice = 0.00;
  drinkorder[4].receipt_drinkquantity = 0;

  //Drink Order Slot 6
  strcpy(drinkorder[5].reciept_drinkname, " ");
  strcpy(drinkorder[5].reciept_itemID, " ");
  drinkorder[5].reciept_drinkprice = 0.00;
  drinkorder[5].receipt_drinkquantity = 0;

  //Drink Order Slot 7
  strcpy(drinkorder[6].reciept_drinkname, " ");
  strcpy(drinkorder[6].reciept_itemID, " ");
  drinkorder[6].reciept_drinkprice = 0.00;
  drinkorder[6].receipt_drinkquantity = 0;

  //Drink Order Slot 8
  strcpy(drinkorder[7].reciept_drinkname, " ");
  strcpy(drinkorder[7].reciept_itemID, " ");
  drinkorder[7].reciept_drinkprice = 0.00;
  drinkorder[7].receipt_drinkquantity = 0;

  //Drink Order Slot 9
  strcpy(drinkorder[8].reciept_drinkname, " ");
  strcpy(drinkorder[8].reciept_itemID, " ");
  drinkorder[8].reciept_drinkprice = 0.00;
  drinkorder[9].receipt_drinkquantity = 0;

  //Drink Order Slot 10
  strcpy(drinkorder[9].reciept_drinkname, " ");
  strcpy(drinkorder[9].reciept_itemID, " ");
  drinkorder[9].reciept_drinkprice = 0.00;
  drinkorder[9].receipt_drinkquantity = 0;
  //database ends here

  //database for dessert section
  typedef struct desserts
  {
    float dessertprice;
    char dessertname[100];
    char itemID[5];
  }dessertSection;
  dessertSection desserts[3];

  //D1 Chocolate Cake Variables
  strcpy(desserts[0].dessertname,"Chocolate Cake");
  strcpy(desserts[0].itemID,"D1");
  desserts[0].dessertprice = 24.00;

  //D2 Muffins Variables
  strcpy(desserts[1].dessertname,"Muffins");
  strcpy(desserts[1].itemID,"D2");
  desserts[1].dessertprice = 20.00;

  //D3 Doughnut Variables
  strcpy(desserts[2].dessertname,"Doughnut");
  strcpy(desserts[2].itemID,"D3");
  desserts[2].dessertprice = 20.00;
  //database ends here

  //dessert order data storage
  typedef struct dessertorder
  {
    char reciept_dessertname[100];
    char reciept_itemID[5];
    float reciept_dessertprice;
    int receipt_dessertquantity;
  }dessertorderVar;
  dessertorderVar dessertorder[10];

  //Dessert Order Slot 1
  strcpy(dessertorder[0].reciept_dessertname, " ");
  strcpy(dessertorder[0].reciept_itemID, " ");
  dessertorder[0].reciept_dessertprice = 0.00;
  dessertorder[0].receipt_dessertquantity = 0;

  //Dessert Order Slot 2
  strcpy(dessertorder[1].reciept_dessertname, " ");
  strcpy(dessertorder[1].reciept_itemID, " ");
  dessertorder[1].reciept_dessertprice = 0.00;
  dessertorder[1].receipt_dessertquantity = 0;

  //Dessert Order Slot 3
  strcpy(dessertorder[2].reciept_dessertname, " ");
  strcpy(dessertorder[2].reciept_itemID, " ");
  dessertorder[2].reciept_dessertprice = 0.00;
  dessertorder[2].receipt_dessertquantity = 0;

  //Dessert Order Slot 4
  strcpy(dessertorder[3].reciept_dessertname, " ");
  strcpy(dessertorder[3].reciept_itemID, " ");
  dessertorder[3].reciept_dessertprice = 0.00;
  dessertorder[3].receipt_dessertquantity = 0;

  //Dessert Order Slot 5
  strcpy(dessertorder[4].reciept_dessertname, " ");
  strcpy(dessertorder[4].reciept_itemID, " ");
  dessertorder[4].reciept_dessertprice = 0.00;
  dessertorder[4].receipt_dessertquantity = 0;

  //Dessert Order Slot 6
  strcpy(dessertorder[5].reciept_dessertname, " ");
  strcpy(dessertorder[5].reciept_itemID, " ");
  dessertorder[5].reciept_dessertprice = 0.00;
  dessertorder[5].receipt_dessertquantity = 0;

  //Dessert Order Slot 7
  strcpy(dessertorder[6].reciept_dessertname, " ");
  strcpy(dessertorder[6].reciept_itemID, " ");
  dessertorder[6].reciept_dessertprice = 0.00;
  dessertorder[6].receipt_dessertquantity = 0;

  //Dessert Order Slot 8
  strcpy(dessertorder[7].reciept_dessertname, " ");
  strcpy(dessertorder[7].reciept_itemID, " ");
  dessertorder[7].reciept_dessertprice = 0.00;
  dessertorder[7].receipt_dessertquantity = 0;

  //Dessert Order Slot 9
  strcpy(dessertorder[8].reciept_dessertname, " ");
  strcpy(dessertorder[8].reciept_itemID, " ");
  dessertorder[8].reciept_dessertprice = 0.00;
  dessertorder[8].receipt_dessertquantity = 0;

  //Dessert Order Slot 10
  strcpy(dessertorder[9].reciept_dessertname, " ");
  strcpy(dessertorder[9].reciept_itemID, " ");
  dessertorder[9].reciept_dessertprice = 0.00;
  dessertorder[9].receipt_dessertquantity = 0;
  //database ends here

  //database for VIP Meal
  typedef struct vipMeal
  {
    float vipMealprice;
    char vipMealname[100];
    char itemID[10];
  }vipmeal_list;
  vipmeal_list vipMeal[7];

  //King Hamburger Variables
  strcpy(vipMeal[0].vipMealname,"King Hamburger");
  strcpy(vipMeal[0].itemID,"VIP_01");
  vipMeal[0].vipMealprice = 40.00;

  //Spree CokeFloat Variables
  strcpy(vipMeal[1].vipMealname,"Spree CokeFloat");
  strcpy(vipMeal[1].itemID,"VIP_02");
  vipMeal[1].vipMealprice = 30.00;

  //Duke Muffin Variables
  strcpy(vipMeal[2].vipMealname,"Duke Muffin");
  strcpy(vipMeal[2].itemID,"VIP_03");
  vipMeal[2].vipMealprice = 30.00;

  //Royal Doughnut Variables
  strcpy(vipMeal[3].vipMealname,"Royal Doughnut");
  strcpy(vipMeal[3].itemID,"VIP_04");
  vipMeal[3].vipMealprice = 35.00;

  //North Pole Smoothie Variables
  strcpy(vipMeal[4].vipMealname,"North Pole Smoothie");
  strcpy(vipMeal[4].itemID,"VIP_05");
  vipMeal[4].vipMealprice = 30.00;

  //Dutch Chocolate Cake Variables
  strcpy(vipMeal[5].vipMealname,"Dutch Chocolate Cake");
  strcpy(vipMeal[5].itemID,"VIP_06");
  vipMeal[5].vipMealprice = 40.00;

  //Special French Fries Variables
  strcpy(vipMeal[6].vipMealname,"Special French Fries");
  strcpy(vipMeal[6].itemID,"VIP_07");
  vipMeal[6].vipMealprice = 40.00;
  //database ends here

  //database for discounted items here
  typedef struct discItems
  {
    float discprice;
    char discname[100];
    char itemID[5];
  }discountedSection;
  discountedSection discItems[5];

  //CM ComboMeal Variables
  strcpy(discItems[0].discname,"ComboMeal");
  strcpy(discItems[0].itemID,"CM");
  //cm initialization
  float cmSum;
  float cmDiscount;
  float comboPrice;
  float cm1 = foodies[0].foodprice * 1;
  float cm2 = drinks[0].drinkprice * 1;
  float cm3 = foodies[2].foodprice * 1;
  float cm4 = foodies[3].foodprice * 1;
  float cm5 = foodies[4].foodprice * 2;
  //operations
  cmSum = cm1 + cm2 + cm3 + cm4 + cm5;
  cmDiscount = cmSum * 0.05;
  comboPrice = cmSum - cmDiscount;
  discItems[0].discprice = comboPrice;

  //FSM FamilySizeMeal Variables
  strcpy(discItems[1].discname,"FamilySizeMeal");
  strcpy(discItems[1].itemID,"FSM");
  //fsm initialization
  float famSum;
  float famDiscount;
  float familyPrice;
  float fam1 = foodies[0].foodprice * 6;
  float fam2 = drinks[0].drinkprice * 5;
  float fam3 = foodies[2].foodprice * 10;
  float fam4 = foodies[3].foodprice * 4;
  float fam5 = foodies[4].foodprice * 15;
  float fam6 = desserts[0].dessertprice * 5;
  //operations
  famSum = fam1 + fam2 + fam3 + fam4 + fam5 + fam6;
  famDiscount = famSum * 0.20;
  familyPrice = famSum - famDiscount;
  discItems[1].discprice = familyPrice;

  //DC DessertCombo Variables
  strcpy(discItems[2].discname,"DessertCombo");
  strcpy(discItems[2].itemID,"DC");
  //DC initialization
  float dcSum;
  float dcDiscount;
  float dessertComboPrice;
  float dc1 = foodies[0].foodprice * 2;
  float dc2 = drinks[1].drinkprice * 2;
  float dc3 = desserts[1].dessertprice * 2;
  float dc4 = desserts[2].dessertprice * 2;
  float dc5 = drinks[4].drinkprice * 2;
  float dc6 = desserts[0].dessertprice * 2;
  //operations
  dcSum = dc1 + dc2 + dc3 + dc4 + dc5 + dc6;
  dcDiscount = dcSum * 0.10;
  dessertComboPrice = dcSum - dcDiscount;
  discItems[2].discprice = dessertComboPrice;

  //VIP V.I.P Meal Variables
  strcpy(discItems[3].discname,"V.I.P Meal");
  strcpy(discItems[3].itemID,"VIP");
  //VIP initialization
  float vipSum;
  float vipDiscount;
  float vipPrice;
  float vipM1 = vipMeal[0].vipMealprice * 1;
  float vipM2 = vipMeal[1].vipMealprice * 1;
  float vipM3 = vipMeal[2].vipMealprice * 1;
  float vipM4 = vipMeal[3].vipMealprice * 1;
  float vipM5 = vipMeal[4].vipMealprice * 1;
  float vipM6 = vipMeal[5].vipMealprice * 1;
  float vipM7 = vipMeal[6].vipMealprice * 1;
  //operations
  vipSum = vipM1 + vipM2 + vipM3 + vipM4 + vipM5 + vipM6 + vipM7;
  vipDiscount = vipSum * 0.20;
  vipPrice = vipSum - vipDiscount;
  discItems[3].discprice = vipPrice;

  //BM BudgetMeal Variables
  strcpy(discItems[4].discname,"BudgetMeal");
  strcpy(discItems[4].itemID,"BM");
  //BM initialization
  float bmSum;
  float bmDiscount;
  float budgetPrice;
  float bm1 = foodies[4].foodprice * 2;
  float bm2 = drinks[0].drinkprice * 1;
  float bm3 = foodies[2].foodprice * 1;
  //operations
  bmSum = bm1 + bm2 + bm3;
  bmDiscount = bmSum * 0.05;
  budgetPrice = bmSum - bmDiscount;
  discItems[4].discprice = budgetPrice;
  //database ends here

  //discounted items order data storage
  typedef struct discItemsorder
  {
    char reciept_discname[100];
    char reciept_itemID[5];
    float reciept_discprice;
    int receipt_discquantity;
  }discItemsorderVar;
  discItemsorderVar discItemsorder[9];

  //Discounted Items Order Slot 1
  strcpy(discItemsorder[0].reciept_discname, " ");
  strcpy(discItemsorder[0].reciept_itemID, " ");
  discItemsorder[0].reciept_discprice = 0.00;
  discItemsorder[0].receipt_discquantity = 0;

  //Discounted Items Order Slot 2
  strcpy(discItemsorder[1].reciept_discname, " ");
  strcpy(discItemsorder[1].reciept_itemID, " ");
  discItemsorder[1].reciept_discprice = 0.00;
  discItemsorder[1].receipt_discquantity = 0;

  //Discounted Items Order Slot 3
  strcpy(discItemsorder[2].reciept_discname, " ");
  strcpy(discItemsorder[2].reciept_itemID, " ");
  discItemsorder[2].reciept_discprice = 0.00;
  discItemsorder[2].receipt_discquantity = 0;

  //Discounted Items Order Slot 4
  strcpy(discItemsorder[3].reciept_discname, " ");
  strcpy(discItemsorder[3].reciept_itemID, " ");
  discItemsorder[3].reciept_discprice = 0.00;
  discItemsorder[3].receipt_discquantity = 0;

  //Discounted Items Order Slot 5
  strcpy(discItemsorder[4].reciept_discname, " ");
  strcpy(discItemsorder[4].reciept_itemID, " ");
  discItemsorder[4].reciept_discprice = 0.00;
  discItemsorder[4].receipt_discquantity = 0;
  //database ends here

  //database for exclusives
  typedef struct exclusives
  {
    float exclusiveprice;
    char exclusivename[100];
    char itemID[5];
  }exclusiveSection;
  exclusiveSection exclusives[3];

  //EX_1 T-Shirt Variables
  strcpy(exclusives[0].exclusivename,"PayFood T-Shirt");
  strcpy(exclusives[0].itemID,"TS");
  exclusives[0].exclusiveprice = 70.00;

  //EX_2 T-Shirt Variables
  strcpy(exclusives[1].exclusivename,"PayFood KeyChain");
  strcpy(exclusives[1].itemID,"KC");
  exclusives[1].exclusiveprice = 10.00;

  //EX_3 T-Shirt Variables
  strcpy(exclusives[2].exclusivename,"PayFood Mug");
  strcpy(exclusives[2].itemID,"MG");
  exclusives[2].exclusiveprice = 40.00;
  //database ends here

  //exclusives order data storage
  typedef struct exclusiveOrder
  {
    char reciept_Exclusivename[100];
    char reciept_itemID[5];
    float reciept_Exclusiveprice;
    int receipt_Exclusivequantity;
  }exclusiveOrderVar;
  exclusiveOrderVar exclusiveOrder[2];

  //Exclusive Order Slot 1
  strcpy(exclusiveOrder[0].reciept_Exclusivename, " ");
  strcpy(exclusiveOrder[0].reciept_itemID, " ");
  exclusiveOrder[0].reciept_Exclusiveprice = 0.00;
  exclusiveOrder[0].receipt_Exclusivequantity = 0;

  //Exclusive Order Slot 2
  strcpy(exclusiveOrder[1].reciept_Exclusivename, " ");
  strcpy(exclusiveOrder[1].reciept_itemID, " ");
  exclusiveOrder[1].reciept_Exclusiveprice = 0.00;
  exclusiveOrder[1].receipt_Exclusivequantity = 0;
  //database ends here
  gotoxy(17,6);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 PAYFOOD \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
  gotoxy(17,7);
  printf("\xB2\xB2\xB2 ONLINE FOOD ORDER SYSTEM \xB2\xB2\xB2\xB2");
  gotoxy(17,8);
  printf("=================================");
  gotoxy(17,9);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 FOOD SECTION \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
  gotoxy(17,10);
  printf("=================================");
  gotoxy(17,11);
  printf("ItemID\t Product Name\t Price\n");
  gotoxy(17,13);
  printf("  F1 -\t Hamburger\tPhp%1.2f\n",foodies[0].foodprice);
  gotoxy(17,15);
  printf("  F2 -\t Fries\t\tPhp%1.2f\n",foodies[1].foodprice);
  gotoxy(17,17);
  printf("  F3 -\t Fried Chicken\tPhp%1.2f\n",foodies[2].foodprice);
  gotoxy(17,19);
  printf("  F4 -\t Beef Steak\tPhp%1.2f\n",foodies[3].foodprice);
  gotoxy(17,21);
  printf("  F5 -\t Rice\t\tPhp%1.2f\n",foodies[4].foodprice);
  gotoxy(17,23);
  printf("=================================");
  char finish[7] = {"X"};
  char tocomp[7];

  int n = 0;
  int food_count = 0;
  int foodquantity;

  //Input Order in Food Section
  gotoxy(17,25);
  printf("\nWhat is your order in the Food Section: \n");
  printf("Enter item ID, press X to finish: \n\n");
  do{
    scanf("%s",foodorder[n].reciept_itemID);
    strcpy(tocomp,foodorder[n].reciept_itemID);
       for(int l = 0; l < 6; ++l)
       {
        if(strcmp(tocomp,foodies[l].itemID) == 0)
          {
            printf("Quantity: ");
            scanf("%d",&foodquantity);
            strcpy(foodorder[n].reciept_foodname,foodies[l].foodname);
            strcpy(foodorder[n].reciept_itemID,foodies[l].itemID);
            foodorder[n].reciept_foodprice = foodies[l].foodprice;
            foodorder[n].receipt_foodquantity = foodquantity;
            food_count++;

          }
       }
    if(strcmp(tocomp,finish) != 0)
    {
      printf("\nwhat else?\n");
    }
    n++;
  }while(strcmp(tocomp,finish));
  system("cls");
  //food loop ends here


  spaceI();
  spaceII();
  gotoxy(17,9);
  printf("==============================");
  gotoxy(17,10);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2 DRINK SECTION \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
  gotoxy(17,11);
  printf("==============================");
  gotoxy(17,13);
  printf("ItemID\t Product Name\t Price\n");
  gotoxy(17,15);
  printf(" B1 -\t Coke          Php%1.2f\n",drinks[0].drinkprice);
  gotoxy(17,17);
  printf(" B2 -\t CokeFloat     Php%1.2f\n",drinks[1].drinkprice);
  gotoxy(17,19);
  printf(" B3 -\t Sprite        Php%1.2f\n",drinks[2].drinkprice);
  gotoxy(17,21);
  printf(" B4 -\t SpriteFloat   Php%1.2f\n",drinks[3].drinkprice);
  gotoxy(17,23);
  printf(" B5 -\t Smoothie      Php%1.2f\n",drinks[4].drinkprice);
  gotoxy(17,25);
  printf(" B6 -\t Bubble Tea    Php%1.2f\n",drinks[5].drinkprice);
  gotoxy(17,26);
  printf("==============================");
  int m = 0;
  int drink_count = 0;
  int drinkquantity;

  //Input Order in Drinks Section
  gotoxy(17,28);
  printf("\nWhat is your order in the Drinks Section: \n");
  printf("Enter item ID, press X to finish: \n\n");
  do{
    scanf("%s",drinkorder[m].reciept_itemID);
    strcpy(tocomp,drinkorder[m].reciept_itemID);
       for(int d = 0; d < 7; d++)
       {
        if(strcmp(tocomp,drinks[d].itemID) == 0)
          {
            printf("Quantity: ");
            scanf("%d",&drinkquantity);
            strcpy(drinkorder[m].reciept_drinkname,drinks[d].drinkname);
            strcpy(drinkorder[m].reciept_itemID,drinks[d].itemID);
            drinkorder[m].reciept_drinkprice = drinks[d].drinkprice;
            drinkorder[m].receipt_drinkquantity = drinkquantity;
            drink_count++;
          }
       }
    if(strcmp(tocomp,finish) != 0)
    {
      printf("\nwhat else?\n");
    }
    m++;
  }while(strcmp(tocomp,finish));
  system("cls");
  //drink loop ends here

  spaceI();
  spaceII();
  gotoxy(17,9);
  printf("==================================");
  gotoxy(17,10);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 DESSERT SECTION \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
  gotoxy(17,11);
  printf("==================================");
  gotoxy(17,13);
  printf("Code\t Product Name\t   Price\n");
  gotoxy(17,15);
  printf(" D1 -\t Chocolate Cake    Php%1.2f\n",desserts[0].dessertprice);
  gotoxy(17,17);
  printf(" D2 -\t Muffins           Php%1.2f\n",desserts[1].dessertprice);
  gotoxy(17,19);
  printf(" D3 -\t Doughnut          Php%1.2f\n",desserts[2].dessertprice);
  gotoxy(17,21);
  printf("==================================");
  int p = 0;
  int dessert_count = 0;
  int dessertquantity;

  //Input Order in Desserts Section
  gotoxy(17,23);
  printf("\nWhat is your order in the Desserts Section: \n");
  printf("Enter item ID, press X to finish: \n\n");
  do{
    scanf("%s",dessertorder[p].reciept_itemID);
    strcpy(tocomp,dessertorder[p].reciept_itemID);
       for(int u = 0; u < 4; u++)
       {
        if(strcmp(tocomp,desserts[u].itemID) == 0)
          {
            printf("Quantity: ");
            scanf("%d",&dessertquantity);
            strcpy(dessertorder[p].reciept_dessertname,desserts[u].dessertname);
            strcpy(dessertorder[p].reciept_itemID,desserts[u].itemID);
            dessertorder[p].reciept_dessertprice = desserts[u].dessertprice;
            dessertorder[p].receipt_dessertquantity = dessertquantity;
            dessert_count++;
          }
       }
    if(strcmp(tocomp,finish) != 0)
    {
      printf("\nwhat else?\n");
    }
    p++;
  }while(strcmp(tocomp,finish));
  system("cls");
  //dessert loop ends here
  spaceI();
  spaceII();
  gotoxy(17,9);
  printf("====================================================");
  gotoxy(17,10);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 DISCOUNTED ITEM SECTION \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
  gotoxy(17,11);
  printf("====================================================");
  gotoxy(17,13);
  printf(" CM  - Combo Meal       \t    Price: Php%1.2f\n",discItems[0].discprice);
  gotoxy(17,15);
  printf("       [5%% discount]           \t    prices\n");
  gotoxy(17,17);
  printf("        (1) F1 - Hamburger     \t    Php%1.2f\n",foodies[0].foodprice);
  gotoxy(17,19);
  printf("        (1) B1 - Coke          \t    Php%1.2f\n",drinks[0].drinkprice);
  gotoxy(17,21);
  printf("        (1) F3 - Fried Chicken \t    Php%1.2f\n",foodies[2].foodprice);
  gotoxy(17,23);
  printf("        (1) F4 - Beef Steak    \t    Php%1.2f\n",foodies[3].foodprice);
  gotoxy(17,25);
  printf("        (2) F5 - Rice          \t    Php%1.2f\n",foodies[4].foodprice * 2);
  gotoxy(17,27);
  printf("             \t     Without Discount: Php%1.2f\n",cmSum);
  gotoxy(17,28);
  printf("====================================================");
  spaceI();
  gotoxy(17,30);
  printf(" FSM - Family Size Meal    \t    Price: ₱%1.2f\n",discItems[1].discprice);
   gotoxy(17,32);
  printf("       [20%% discount]             \t    prices\n");
   gotoxy(17,34);
  printf("        (6) F1 - Hamburger        \t    Php%1.2f\n",foodies[0].foodprice * 6);
   gotoxy(17,36);
  printf("        (5) B1 - Coke             \t    Php%1.2f\n",drinks[0].drinkprice * 5);
   gotoxy(17,38);
  printf("        (10)F3 - Fried Chicken    \t    Php%1.2f\n",foodies[2].foodprice * 10);
   gotoxy(17,40);
  printf("        (4) F4 - Beef Steak       \t    Php%1.2f\n",foodies[3].foodprice * 4);
   gotoxy(17,42);
  printf("        (15)F5 - Rice             \t    Php%1.2f\n",foodies[4].foodprice * 15);
  gotoxy(17,44);
  printf("        (5) D1 - Chocolate Cake   \t    Php%1.2f\n",desserts[0].dessertprice * 5);
  gotoxy(17,46);
  printf("                \t  Without Discount: Php%1.2f\n",famSum);
  gotoxy(17,47);
  printf("====================================================");
  spaceI();
  gotoxy(17,49);
  printf(" DC  - Dessert Combo      \t    Price: Php%1.2f\n",discItems[2].discprice);
  gotoxy(17,51);
  printf("       [10%% discount]            \t    prices\n");
  gotoxy(17,53);
  printf("        (2) F1 - Hamburger       \t    Php%1.2f\n",foodies[0].foodprice * 2);
  gotoxy(17,55);
  printf("        (2) B2 - CokeFloat       \t    Php%1.2f\n",drinks[1].drinkprice * 2);
  gotoxy(17,57);
  printf("        (2) D2 - Muffins         \t    Php%1.2f\n",desserts[1].dessertprice * 2);
  gotoxy(17,59);
  printf("        (2) D3 - Doughnut        \t    Php%1.2f\n",desserts[2].dessertprice * 2);
  gotoxy(17,61);
  printf("        (2) B5 - Smoothie        \t    Php%1.2f\n",drinks[4].drinkprice * 2);
  gotoxy(17,63);
  printf("        (2) D1 - Chocolate Cake  \t    Php%1.2f\n",desserts[0].dessertprice * 2);
  gotoxy(17,65);
  printf("               \t  Without Discount: Php%1.2f\n",dcSum);
  gotoxy(17,66);
  printf("====================================================");
  spaceI();
  gotoxy(17,68);
  printf(" VIP - V.I.P Meal                   Price: Php%1.2f\n",discItems[3].discprice);
  gotoxy(17,70);
  printf("       [20%% discount]                      prices\n");
  gotoxy(17,72);
  printf("        (1) VIP_01 - King Hamburger        Php%1.2f\n",vipMeal[0].vipMealprice);
  gotoxy(17,74);
  printf("        (1) VIP_02 - Spree CokeFloat       Php%1.2f\n",vipMeal[1].vipMealprice);
  gotoxy(17,76);
  printf("        (1) VIP_03 - Duke Muffin           Php%1.2f\n",vipMeal[2].vipMealprice);
  gotoxy(17,78);
  printf("        (1) VIP_04 - Royal Doughnut        Php%1.2f\n",vipMeal[3].vipMealprice);
  gotoxy(17,80);
  printf("        (1) VIP_05 - North Pole Smoothie   Php%1.2f\n",vipMeal[4].vipMealprice);
  gotoxy(17,82);
  printf("        (1) VIP_06 - Dutch Chocolate Cake  Php%1.2f\n",vipMeal[5].vipMealprice);
  gotoxy(17,84);
  printf("        (1) VIP_07 - Special French Fries  Php%1.2f\n",vipMeal[6].vipMealprice);
  gotoxy(17,86);
  printf("                         Without Discount: Php%1.2f\n",vipSum);
  gotoxy(17,87);
  printf("====================================================");
  spaceI();
  gotoxy(17,89);
  printf(" BM  - Budget Meal      \t     Price: Php%1.2f\n",discItems[4].discprice);
  gotoxy(17,91);
  printf("       [5%% discount]           \t    prices\n");
  gotoxy(17,93);
  printf("        (2) F5 - Rice          \t    Php%1.2f\n",foodies[4].foodprice * 2);
  gotoxy(17,95);
  printf("        (1) B1 - Coke          \t    Php%1.2f\n",drinks[0].drinkprice);
  gotoxy(17,97);
  printf("        (1) F3 - Fried Chicken \t    Php%1.2f\n",foodies[2].foodprice);
  gotoxy(17,100);
  printf("             \t          Without Discount: Php%1.2f\n",bmSum);
  gotoxy(17,101);
  printf("====================================================");

  int s = 0;
  int discItems_count = 0;
  int discItemsquantity;

  //Input Order in Discounted Items Section
  gotoxy(17,104);
  printf("\nWhat is your order in the Discounted Items Section: \n");
  printf("Enter item ID, press X to finish: \n\n");
  do{
    scanf("%s",discItemsorder[s].reciept_itemID);
    strcpy(tocomp,discItemsorder[s].reciept_itemID);
       for(int w = 0; w < 6; w++)
       {
        if(strcmp(tocomp,discItems[w].itemID) == 0)
          {
            printf("Quantity: ");
            scanf("%d",&discItemsquantity);
            strcpy(discItemsorder[s].reciept_discname,discItems[w].discname);
            strcpy(discItemsorder[s].reciept_itemID,discItems[w].itemID);
            discItemsorder[s].reciept_discprice = discItems[w].discprice;
            discItemsorder[s].receipt_discquantity = discItemsquantity;
            discItems_count++;
          }
       }
    if(strcmp(tocomp,finish) != 0)
    {
      printf("\nwhat else?\n");
    }
    s++;
  }while(strcmp(tocomp,finish));
  system("cls");
//Loop ends here of discounted item section

  spaceI();
  spaceII();
  gotoxy(17,9);
  printf("==================================");
  gotoxy(17,10);
  printf("%5s%s"," ","\tExclusive Section\n");
  gotoxy(17,11);
  printf("==================================");
  gotoxy(17,13);
  printf(" TS - PayFood T-Shirt   Php%1.2f\n",exclusives[0].exclusiveprice);
  gotoxy(17,15);
  printf(" KC - PayFood KeyChain  Php%1.2f\n",exclusives[1].exclusiveprice);
  gotoxy(17,17);
  printf(" MG - PayFood Mug       Php%1.2f\n",exclusives[2].exclusiveprice);

  int exclusive_count = 0;
  int z = 0;
  float exclusiveDiscount = 0;
  int exclusivequantity;
  int allowDiscount = 0;

  //Input Order in Discounted Items Section
  printf("\nOnly Choose 1 Amongst the 3 to get 10%% discount: \n");
  printf("Enter item ID, press X to finish: \n\n");
  do{
    scanf("%s",exclusiveOrder[z].reciept_itemID);
    strcpy(tocomp,exclusiveOrder[z].reciept_itemID);
       for(int e = 0; e < 4; e++)
       {
        if(strcmp(tocomp,exclusives[e].itemID) == 0)
          {
            printf("Quantity: ");
            scanf("%d",&exclusivequantity);
            strcpy(exclusiveOrder[z].reciept_Exclusivename,exclusives[e].exclusivename);
            strcpy(exclusiveOrder[z].reciept_itemID,exclusives[e].itemID);
            exclusiveOrder[z].reciept_Exclusiveprice = exclusives[e].exclusiveprice;
            exclusiveOrder[z].receipt_Exclusivequantity = exclusivequantity;
            exclusiveDiscount = 0.10;
            allowDiscount = 2;
            exclusive_count++;
          }
       }
   if(strcmp(tocomp,finish) != 0)
    {
      printf("\nEnter X to finish\n");
    }
    z++;
  }while(strcmp(tocomp,finish));
    system("cls");
 //loop ends here of exclusive items
  int final_quantity;
  float final_Amount;
  float final_balance;
  char final_discount[10] = {"None"};
  float discount;

  //condition to allow 10% discount
  if (allowDiscount == 2)
  {
    strcpy(final_discount,"10%");
  }

  //final food var
  char final_foodname[100];
  char final_foodID[4];
  float final_foodprice;

  //final drink var
  char final_drinkname[100];
  char final_drinkID[4];
  float final_drinkprice;

  //final dessert var
  char final_dessertname[100];
  char final_dessertID[4];
  float final_dessertprice;

  //final discItems var
  char final_discname[100];
  char final_discID[4];
  float final_discprice;

  //final exclusives var
  char final_exclusivename[100];
  char final_exclusiveID[4];
  float final_exclusiveprice;

  spaceII();
  //Receipt Part

  gotoxy(17,1);
  printf("                      PayFood                \n");
  gotoxy(17,2);
  printf("                  Lanao del Norte,           \n");
  gotoxy(17,3);
  printf("                      Region X               \n");
  gotoxy(17,4);
  printf("                    Tel#255-555              \n");
  gotoxy(17,5);
  printf(" %11s%s"," ",ctime(&t));
  gotoxy(17,6);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 DIGITAL RECEIPT \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
  gotoxy(17,7);
  printf("=====================================================");
  gotoxy(17,8);
  printf("%9s%15s%15s%12s","Item ID","Items","Quantity","Price\n");
  //food section print loop
  int f;
  int b;
  int d;
  int g;
  int j;

  for( f = 0; f < food_count; f++)
  {
    strcpy(final_foodname,foodorder[f].reciept_foodname);
    strcpy(final_foodID,foodorder[f].reciept_itemID);
    final_foodprice = foodorder[f].reciept_foodprice * foodorder[f].receipt_foodquantity;
    final_quantity = foodorder[f].receipt_foodquantity;
    gotoxy(17,10+f);
    printf("    %3s %17s      %5d        Php%1.2f",final_foodID,final_foodname,final_quantity,final_foodprice);
    final_Amount += final_foodprice;

  }
  //drinks section print loop
  for( b = 0; b < drink_count; b++)
  {
    strcpy(final_drinkname,drinkorder[b].reciept_drinkname);
    strcpy(final_drinkID,drinkorder[b].reciept_itemID);
    final_drinkprice = drinkorder[b].reciept_drinkprice * drinkorder[b].receipt_drinkquantity;
    final_quantity = drinkorder[b].receipt_drinkquantity;
    gotoxy(17,10+f+b);
    printf("    %3s %17s      %5d        Php%1.2f",final_drinkID,final_drinkname,final_quantity,final_drinkprice);
    final_Amount += final_drinkprice;

  }
  //desserts section print loop
  for( d = 0; d < dessert_count; d++)
  {
    strcpy(final_dessertname,dessertorder[d].reciept_dessertname);
    strcpy(final_dessertID,dessertorder[d].reciept_itemID);
    final_dessertprice = dessertorder[d].reciept_dessertprice * dessertorder[d].receipt_dessertquantity;
    final_quantity = dessertorder[d].receipt_dessertquantity;
    gotoxy(17,10+f+b+d);
    printf("    %3s %17s      %5d        Php%1.2f",final_dessertID,final_dessertname,final_quantity,final_dessertprice);
    final_Amount += final_dessertprice;

  }
  //discounted items print loop
  for( g = 0; g < discItems_count; g++)
  {
    strcpy(final_discname,discItemsorder[g].reciept_discname);
    strcpy(final_discID,discItemsorder[g].reciept_itemID);
    final_discprice = discItemsorder[g].reciept_discprice * discItemsorder[g].receipt_discquantity;
    final_quantity = discItemsorder[g].receipt_discquantity;
    gotoxy(17,10+f+b+d+g);
    printf("    %3s %17s      %5d        Php%1.2f",final_discID,final_discname,final_quantity,final_discprice);
    final_Amount += final_discprice;
  }
  //exclusives print loop
  for( j = 0; j < exclusive_count; j++)
  {

    strcpy(final_exclusivename,exclusiveOrder[j].reciept_Exclusivename);
    strcpy(final_exclusiveID,exclusiveOrder[j].reciept_itemID);
    final_exclusiveprice = exclusiveOrder[j].reciept_Exclusiveprice * exclusiveOrder[j].receipt_Exclusivequantity;
    final_quantity = exclusiveOrder[j].receipt_Exclusivequantity;
    gotoxy(17,10+f+b+d+g+j);
    printf("    %3s %17s      %5d        Php%1.2f",final_exclusiveID,final_exclusivename,final_quantity,final_exclusiveprice);
    final_Amount += final_exclusiveprice;
  }
  //Final Operations
  int add_on = f+b+d+g+j;
  discount = final_Amount * exclusiveDiscount;
  final_balance = final_Amount - discount;
  gotoxy(17,10+add_on);
  add_on+=2;
  printf("=====================================================");
  gotoxy(17,10+add_on);
  add_on+=2;
  printf("Amount:\t\t\t\t     Php%1.2f\n",final_Amount);
  gotoxy(17,10+add_on);
  add_on+=2;
  printf("Discount:\t\t\t\t           %s\n",final_discount);
  gotoxy(17,10+add_on);
  add_on+=2;
  printf("Balance:\t\t\t\t     Php%1.2f\n",final_balance);
  gotoxy(17,10+add_on);
  add_on+=2;
  printf("=====================================================");
  gotoxy(17,10+add_on);
  add_on+=2;
  printf("Name of Customer: %s",nameofUser);
  gotoxy(17,10+add_on);
  add_on+=2;
  printf("Address: %s",addressofUser);
  gotoxy(17,10+add_on);
  add_on+=2;
  printf("Callphone#: %s",cellNumofUser);
  gotoxy(17,10+add_on);
  add_on+=2;
  printf("=====================================================");
  gotoxy(17,10+add_on);
  add_on+=2;
  printf("Total:\t\t\t\t             Php%1.2f\n",final_balance);
  gotoxy(17,10+add_on);
  add_on+=2;
  printf("\t%25s","Approved");
  gotoxy(17,10+add_on);
  add_on+=2;
  printf("\t%25s\n\n","Thank you");
  return 0;
}
