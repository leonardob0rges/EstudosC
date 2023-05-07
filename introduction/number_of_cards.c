/*
Program to calculate the number of cards in the shoe.
...
*/

#include <stdio.h>

int main(){
    int decks;
    char player_name[10];
    
    puts("Enter a number of decks: ");
    scanf("%i", &decks);

    puts("Enter the player name: ");
    scanf("%s", player_name);
    
    if(decks < 1){
        puts("That isn't a valid number of decks");
        return 1;
    }

    printf("There are %i cards\n", (decks * 52));
    printf("%s says the count is %i\n", player_name, decks);
    return 0;
}