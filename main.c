#include <stdio.h>

float userAmount = 0;
float quarter = 0.25;
float dime = 0.10;
float nickel = 0.05;
float penny = 0.01;

void insert_Money(); //unsure if need this method ? yet probably do 
void display_Selections();
float calculateChange();

int main(){
  //variables for use
  int option = 0;

  printf("Welcome to the Vending Machine!\n\n");
  //inseart money now


  while(option!=3) { //TESTING PURPSOES< NEED TO CHAGNME MAYBE? :???

    printf("Please make a Choice\n");
    display_Selections();

  }


  printf("Thanks, have a great day!\n");


  return 0;
}

void insert_Money()
{

}

void display_Selections()
{
  printf("\n1. Cheetos: $0.50");
  printf("\n2. Lays: $0.75");
  printf("\n3. Oreos: $1.50");
  printf("\n4. Gummy Bears: $0.50");
  printf("\n5. Ritz Crackers: $1.00");
  printf("\n6. Cancel Selection");
}

float calculateChange()
{

}
