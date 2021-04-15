#include"dice.h"
#include<time.h>
#include<stdlib.h>
int dice_output()
{
    int upper = 6, lower = 1, dice;
    
    #ifdef VALGRIND
    srand (0);
    #else
    srand (time (0));
    #endif
    
    A:dice = (rand () % (upper - lower + 1)) + lower;
    if (dice == 0)
      goto A;
    else
      return dice;
}
