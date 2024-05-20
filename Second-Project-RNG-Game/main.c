#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_number(int min, int max)
{
    int random_number;
    random_number = (rand() % (max - min + 1)) + min;
    return random_number;
}

int main()
{      
    int rand_int, int_choice;
    char choice;

    printf("Welcome to the random number guessing game\n");
    printf("You will be able to choose a number between 0 and 20 if you guess correctly you'll win.\n");
    printf("Want to play? y/n : ");
    fflush(stdout);
    
    scanf(" %c", &choice);

    if(choice == 'y')
    {
        int tries = 3;
        while(tries > 0)
        {
            rand_int = 15;//random_number(0, 20);
            printf("Choose a number between 0 and 20: ");
            fflush(stdout);

            scanf(" %d", &int_choice);

            if(int_choice == rand_int) {
                printf("Good job you win!\nWant to play again? y/n : ");
                fflush(stdout);
                fflush(stdin);
                scanf(" %c", &choice);

                if(choice == 'y') {
                    tries = 3;
                    continue;
                }else {
                    break;
                }
            }else {
                printf("Wrong\n");
                tries -= 1;
                printf("You have %d tries left.\n", tries);
            }
        }
    }

    return 0;
}