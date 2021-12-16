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
  float money = 0;

  printf("Welcome to the Vending Machine!\n\n");
  //inseart money now
  printf("Please insert your money.\n");
  scanf("%f", &money);
  printf("You inserted: $%f \n", money);

  while(option!=6) {

    display_Selections();
    printf("Please select an Option\n");
    scanf("%d", &option);

    switch(option)
    {
      case 1: break;
      case 2: break;
      case 3: break;
      case 4: break;
      case 5: break;
      case 6: option = 6; //maybe write sojmething like Thanks see below for your change etc
              break;

      default : printf("Please select a valid option\n");
                break;
    }


   //temporary terminal operator
  }

  printf("\nThanks, have a great day!\n");


  return 0;
}

void insert_Money()
{

}

/*
  Function displays the selections for the vending machine so user can see.
*/
void display_Selections()
{
  printf("\n1. Cheetos: $0.50");
  printf("\n2. Lays: $0.75");
  printf("\n3. Oreos: $1.50");
  printf("\n4. Gummy Bears: $0.50");
  printf("\n5. Ritz Crackers: $1.00");
  printf("\n6. Cancel Selection\n");
}

float calculateChange()
{

}
