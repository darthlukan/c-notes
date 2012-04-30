#include <stdio.h>

struct xample {
    int x;
};

int main()
{
    struct xample structure;
    struct xampl *ptr;

    structure.x = 12;
    ptr = &structure;

    printf("%d\n", ptr->x);
    getchar();

    return 0;
}
