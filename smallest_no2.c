#include <stdio.h>

int main() {
    int x, y, smallest;

    printf("Enter two number: ");
    scanf("%d %d", &x, &y);

    if (x > y) {
        smallest = y;
    }

    if (y > x) { 
        smallest = x;
    }

    printf("smallest is: %d", smallest);

    return 0;
}
