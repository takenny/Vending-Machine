#include <stdio.h>

//might change this idk if store globally is okay
float userAmount = 0;
float quarter = 0.25;
float dime = 0.10;
float nickel = 0.05;
float penny = 0.01;

float insert_Money(); //unsure if need this method ? yet probably do
void display_Selections();
float calculateChange();

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
  printf("You inserted: $%f \n", money);

  while(option!=6) {

    display_Selections();
    printf("Please select an Option\n");
    scanf("%d", &option); //check if broken then need to fix ?? when insert oiption  = yes?

    switch(option)
    {
      case 1: money = calculateChange(money, option);
              printf("%f this is THE MONEY HOW MUCH ", money);
        break;
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
  printf("\n What would you like to purchase?");
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
float calculateChange(money, userChoice)
{
    float change = 0;
    float cheetos = 0.50;
    float gummy_Bears = 0.50;
    float lays = 0.75;
    float ritz_Crackers = 1.00;
    float oreos = 1.50;

    change = money - cheetos;
    printf("This is your change! $%f", cheetos);
    //do calcluation for the choices added etc.

    return change;
}

void addOptions()
{
    /*do this function last. might mess up code in the beginning. */

}
