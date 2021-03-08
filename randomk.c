#include "randomk.h"

#define RANDOM_MOD 0x7FFFFFFF
#define RANDOM_MUL 1103515245
#define RANDOM_INC 12345

static int seed = 67867823;

void srand(int val)
{
    seed = val;
}

int rand()
{
    int oldSeed = seed;
    seed = (RANDOM_MUL * seed + RANDOM_INC) % RANDOM_MOD;

    return oldSeed;
}
