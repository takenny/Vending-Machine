#include <stdio.h>
//using struct to store items and to display items.
struct item
{
  char name[20];
  int price;
};
//array item to store items in vending machine
struct item arr_item[10];

float insert_Money(); //unsure if need this method ? yet probably do
void display_Selections();
float calculateChange(float money, int option);

int main(){
  //variables for use
  int option = 0;
  float money = 0;

  printf("Welcome to the Vending Machine!\n\n");
  //print if want to make purchase or add item to the thing
    //if make purchase, proceed as normal with insert money method
    //if add item, then ask user what item and how much the item is to add. <- these things might need to add to uml

  //inseart money now
  printf("Please insert your money.\n");
  scanf("%f", &money);
  //money = insert_Money(); //COMMENTED FOR NOW. SHOULD BE WORKING
  printf("You inserted: $%.2f \n", money);

  while(option!=6 && money > 0) {

    display_Selections();
    printf("Please select an Option\n");
    scanf("%d", &option); //check if broken then need to fix ?? when insert oiption  = yes?

    switch(option)
    {
      case 1: money = calculateChange(money, option);
        break;
      case 2: money = calculateChange(money, option);
        break;
      case 3: money = calculateChange(money, option);
        break;
      case 4: money = calculateChange(money, option);
        break;
      case 5: money = calculateChange(money, option);
        break;
      case 6:
        option = 6;
       //maybe write sojmething like Thanks see below for your change etc
              //printf("See below for your change, thanks, have a great day!\n");
        break;
      default : printf("Please select a valid option\n");
                break;
    }
    if (money==0)
    {
        printf("\nYou have no more money in the machine!");
        option = 6;
    }

  }

  printf("\nThanks, have a great day!\n");
  return 0;
}

/*
    Function inserts money into machine asking user for choices.
    Then inputs that into the variable for userMoney.

*/
float insert_Money()
{
    float totalInput = 0;
    int pennies, nickels, dimes, quarters;
    printf("How many pennies are you inserting?\n");
    scanf("%d", &pennies);
    printf("How many nickels are you inserting? \n");
    scanf("%d", &nickels);
    printf("How many dimes?\n");
    scanf("%d", &dimes);
    printf("Quarters?\n");
    scanf("%d", &quarters);

    totalInput = pennies*0.01 + nickels*0.05 + dimes*0.10 + quarters*0.25;

    return totalInput;

}

/*
  Function displays the selections for the vending machine so user can see.
*/
void display_Selections()
{
  printf("\nWhat would you like to purchase?");
  printf("\n1. Cheetos: $0.50");
  printf("\n2. Lays: $0.75");
  printf("\n3. Oreos: $1.50");
  printf("\n4. Gummy Bears: $0.50");
  printf("\n5. Ritz Crackers: $1.00");
  printf("\n6. Cancel Selection\n");
}

/*
    Function calculates the change from the transaction and returns change to user
    Function will take in 2 params, 1 from selection chosen, another from the amount the user inputs
*/
float calculateChange(float money, int option)
{
    float change = 0;
    float cheetos = 0.50;
    float gummy_Bears = 0.50;
    float lays = 0.75;
    float ritz_Crackers = 1.00;
    float oreos = 1.50;
    switch(option)
    {
      case 1:
      printf("\nYou have selected Cheetos for $0.50.");
      change = money - cheetos; break;
      case 2:
      printf("\nYou have selected Lays for $0.75.");
      change = money - lays; break;
      case 3:
      printf("\nYou have selected Oreos for $1.50.");
      change = money - oreos; break;
      case 4:
      printf("\nYou have selected Gummy Bears for $0.50.");
      change = money - gummy_Bears; break;
      case 5:
      printf("\nYou have selected Ritz Crackers for $1.00.");
      change = money - ritz_Crackers; break;

      default: printf("Please insert more money\n"); break;
    }
    if(change >= 0)
    {
      printf("\nThanks, dispensing item. This is your change! $%.2f Please collect it below \n", change);
    }
    else
    {
      change = 0;
    }
    //do calcluation for the choices added etc.

    return change;
}

void addOptions()
{
    /*do this function last. might mess up code in the beginning. */

}
