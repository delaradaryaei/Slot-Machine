#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/*
    This program is a fruit slot machine game  
 

    Written by Delara Daryaei
*/

// Slot Elements
const int Cherry = 0; 
const int Apple = 1; 
const int Lemon = 2; 
const int Orange = 3; 

void printSlot(int value)
{
    if(value==Cherry)
    printf("Cherry\n");
    else if(value==Apple)
    printf("Apple\n");
    else if(value==Lemon)
    printf("Lemon\n");
    else if(value==Orange)
    printf("Orange\n");
}
int main()
{
// set bet
srand(time(0));
float bet;
printf("Enter Bet Amount:  ");
scanf("%f", &bet);

// Randomize Slots
int slot1, slot2, slot3;
    slot1 = rand() %4;
    slot2 = rand() %4;
    slot3 = rand() %4;

printSlot(slot1);
printSlot(slot2);
printSlot(slot3);

// Winning Rules
    if (slot1 == slot2 && slot1 == slot3)
    printf("You Won! $%.2f\n",bet*8);
    else if (slot1 == Cherry && slot2 == Cherry)
    printf("You Won! $%.2f\n",bet*3);
    else if (slot1 == Cherry)
    printf("You Won! $%.2f\n",bet);
    else 
    printf("You Lost! $%0.2f\n", bet);

system("Pause");
}

/*
OUTPUT
    Enter Bet Amount:  10
    Lemon
    Apple
    Orange
    You Lost! $10.00

    Enter Bet Amount:  50
    Apple
    Apple
    Orange
    You Lost! $50.00

    Enter Bet Amount:  80
    Cherry
    Lemon
    Lemon
    You Won! $80.00

    Enter Bet Amount:  50
    Cherry
    Cherry
    Cherry
    You Won! $400.00

    Enter Bet Amount:  100
    Lemon
    Cherry
    Orange
    You Lost! $100.00
*/