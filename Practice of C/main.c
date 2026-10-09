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

// Average Number
#include <cs50.h>
#include <stdio.h>

float average(int length, int number[]);

int main(void)
{
    const int N = 3;
    int scores[N];
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("scores: ");
    }
    
    printf("Average: %f\n", average(N, scores));
}
