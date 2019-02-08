 /***********************************************/
 /* Assignment No: 1 */
 /* Professor Tang - MWF 3:00-3:50 */
 /* Name: Iann Akoulouze Bika - loq204 */
 /* This program computes total amount of pennies,*/
 /* nickels, dimes, and quarters into a dollar amount */
 /***********************************************/
#include<stdio.h>
int main(){
int pennies;
int nickels;
int dimes;
int quarters;
int dollars;
int cents;
int sum;
 /* Prompts the user to enter the number of coins in the correct order */
printf("Enter the number of pennies, nickels, dimes and quarters \n");
 /* Scans and takes in user's input */
scanf("%d %d %d %d",&pennies,&nickels,&dimes,&quarters);
 /* Convert's user's input into its corresponding dollar amount and then adds the sum of their dollar amount */
sum = quarters * 25 + dimes * 10 + nickels * 5+ pennies;
 /* Computes the dollar amount of coins */
dollars = sum / 100;
 /* Computes the amount of cents left over by using the '%' remainder operation */
cents = sum % 100;
 /* Prints the user's pennies, nickels, dimes, and quarters into a dollar amount */
printf("\nYou have %d dollars and %d cents\n",dollars,cents);
return 0;
}
