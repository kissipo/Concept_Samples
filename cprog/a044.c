#include <stdio.h>

int main()
{
    int x = 1, y = 1, z = 0;

    printf("!(y || z) || x = %d\n", !(y || z) || x);
    printf("!y || (z || !x) = %d\n", !y || (z || !x));
    printf("z || (x && (y || z)) = %d\n", z || (x && (y || z)));
    printf("(x || x) && z = %d\n", (x || x) && z);

    return 0;
}
