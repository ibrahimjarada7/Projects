#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "gen_num.h"

int generate_number(int len)
{
    srand(time(0));
    int num = 0;
    for (int i = 0; i < len; i++)
    {
        num = num * 10 + rand() % 10;
    }
    return num;
}
