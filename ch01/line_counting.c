#include <stdio.h>

int main(void)
{
    int c, count;

    count = 0;

    while ((c = getchar()) != EOF) {
      if (c == '\n')
        count++;
    };
    printf("Num of Lines: %d", count);
}
