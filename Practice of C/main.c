#include <stdio.h>

int main(){
    char c = get_char("Do you Agree? (y/n): ");

    if (c == 'y' || c == 'Y'){

        printf("You agreed!\n");

}  else if (c == 'n' || c == 'N'){

        printf("You disagreed!\n");
        
    } else {

        printf("Invalid input!\n");
    }

}