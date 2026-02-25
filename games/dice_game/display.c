#include <stdio.h>


int display_dice(int dice_value) {
    if (dice_value == 1) {
        printf("Dice value: %d\n", dice_value);
        printf("-------\n");
        printf("|     |\n");
        printf("|  *  |\n");
        printf("|     |\n");
        printf("-------\n");
    } else if (dice_value == 2) {
        printf("Dice value: %d\n", dice_value);
        printf("-------\n");
        printf("|*    |\n");
        printf("|     |\n");
        printf("|    *|\n");
        printf("-------\n");
    } else if (dice_value == 3) {
        printf("Dice value: %d\n", dice_value);
        printf("-------\n");
        printf("|*    |\n");
        printf("|  *  |\n");
        printf("|    *|\n");
        printf("-------\n");
    } else if (dice_value == 4) {
        printf("Dice value: %d\n", dice_value);
        printf("-------\n");
        printf("|*   *|\n");
        printf("|     |\n");
        printf("|*   *|\n");
        printf("-------\n");
    } else if (dice_value == 5) {
        printf("Dice value: %d\n", dice_value);
        printf("-------\n");
        printf("|*   *|\n");
        printf("|  *  |\n");
        printf("|*   *|\n");
        printf("-------\n");
    } else if (dice_value == 6) {
        printf("Dice value: %d\n", dice_value);
        printf("-------\n");
        printf("|*   *|\n");
        printf("|*   *|\n");
        printf("|*   *|\n");
        printf("-------\n");
    }

    return 0;
}