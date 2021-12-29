#include <stdio.h>
#include <string.h>

float commandLineAddMoney(char* currencyType, char* currencyAmount);

float insert_Money();
void display_Selections();
float calculateChange(float money, int option);
void addOptions();
float commandLineAddMoney(char* currencyType, char* currencyAmount);


int main(int argc, char *argv[]){
  //-s stock
  //-h help
  printf("Welcome to the Vending Machine!\n\n");

  char help[] = "-h", stock[] = "-s", quarters[] = "-q", dimes[] = "-d", nickels[] = "-n", pennies[] = "-p";
  int initial = 0;
  int option = 0;
  float money = 0;

  if(strcmp(argv[1], help) == 0)
  {
    printf("This is the help menu \n");
    printf("-s shows what item you want to display\n");
    printf("-q indicates quarters and the number after -q indicates how many quarters you inputted\n");
  }
  else if(strcmp(argv[1], stock) == 0)
  {
    display_Selections();
  }
  else if(strcmp(argv[1], quarters) == 0)
  {
    money = commandLineAddMoney("quarters", argv[2]); //insert money argv 2
    display_Selections();
  //  printf("Please select an Option\n");
  //  scanf("%d", &option); //check if broken then need to fix ?? when insert oiption  = yes?
    option = atoi(argv[3]);
    //printf("OPTION IS %d", option);
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
        printf("\nYou chose to cancel selection!");
       //maybe write sojmething like Thanks see below for your change etc
              //printf("See below for your change, thanks, have a great day!\n");
        break;
      default : printf("Please select a valid option\n");
                break;
    }
  }
/*
printf("Would you like to make a purchase or add an item to the machine? Press 1 for making a purchase, 2 for adding an item.\n");
    //if make purchase, proceed as normal with insert money method
  scanf("%d", &initial);
  if(initial == 2)
  {
    addOptions();
  }
  //if add item, then ask user what item and how much the item is to add. <- these things might need to add to uml
  //insert money now
  printf("Please insert your money.\n");
  money = insert_Money();

  printf("You inserted: $%.2f \n", money);
*/
  return 0;
}

/*
    Function inserts money into machine asking user for choices.
    Then inputs that into the variable for userMoney.
    Returns the total Input or the amount of money inserted for processing
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
      printf("\nThanks, dispensing item. Please collect it below. Please collect your change $%.2f. \n", change);
    }
    else
    {
      printf("\nPlease add more money to be able to make this purchase.\n");
      option = 6;
    }
    //do calcluation for the choices added etc.

    return change;
}

    /*do this function last. might mess up code in the beginning. */
/* Function to add options to machine
*/
void addOptions()
{
  printf("\nWhat is the name of the item you want to add?");

  printf("\nHow much is this item?");
}

float commandLineAddMoney(char* currencyType, char* currencyAmount)
{
  float money = 0;
  int pennies, nickels, dimes, quarters = 0;
  if(strcmp(currencyType, "quarters") == 0)
  {
    quarters = atoi(currencyAmount);
  }
  else if(strcmp(currencyType, "nickels") == 0)
  {
    nickels = atoi(currencyAmount);
  }
  else if(strcmp(currencyType, "dimes") == 0)
  {
    dimes = atoi(currencyAmount);
  }
  else if(strcmp(currencyType, "pennies") == 0)
  {
    pennies = atoi(currencyAmount);
  }

  money = quarters*0.25;
  //money = pennies*0.01 + nickels*0.05 + dimes*0.10 + quarters*0.25; <- threw error because pennies / other things were missing
//  printf("MONEY IS %f", money);
  return money;
}

