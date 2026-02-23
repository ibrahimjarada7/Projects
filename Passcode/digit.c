#include <stdio.h>
#include <stdlib.h>
#include "gen_num.h"


int main(void)
{
    printf("Digit Guesser!\n");
    
    printf("Enter the length of the passcode: \n");
    scanf("%d", &len);

    generate_number(len);

    return 0;
}

