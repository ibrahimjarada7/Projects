#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "display.h"

int main() {    
    int roll_count, sum;
    char command;

    int capacity = 10;

    int *rolls = malloc(sizeof(int) * capacity);

    if (rolls == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    printf("Welcome to the Dice Game!\n");
    printf("Press 'r' to roll the dice, or 'a' to average the rolls, or 'q' to quit: \n");
    printf("If you choose to average the rolls, the program will calculate the average of all of your rolls.\n");
    scanf(" %c", &command);
    
    srand(time(NULL));

    while (1){
        switch (command)
        {
            case 'r':
                {
                    int rand_int = (rand() % 6) + 1;
                    display_dice(rand_int);
                    if(roll_count == capacity){
                        capacity *= 2;
                        int *temp = realloc(rolls, sizeof(*rolls) * capacity);
                        rolls = temp;
                    }
                    
                    rolls[roll_count] = rand_int;
                    roll_count++;
                    sum += rand_int;
                    break;
                }
                case 'a':
                {
                    double average = (double)sum / roll_count;
                    printf("Average of your last %d rolls: %.2f\n", roll_count, average);
                    break;
                }
            case 'q':
                {
                    free(rolls);
                    return 0;
                }
            default:
                {
                    printf("Invalid command. Please try again.\n");
                    break;
                }
        }
        printf("Press 'r' to roll the dice, or 'a' to average the rolls, or 'q' to quit: \n");
        scanf(" %c", &command);
    }
    return 0;
}

