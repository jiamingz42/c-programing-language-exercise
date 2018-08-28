// Exercise 1-9
// Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.
#include <stdio.h>

#define NONBLANK 'a'

int main(void)
{
    int c, last_c;

    last_c = NONBLANK;

    while ((c = getchar()) != EOF) {
      if (c == ' ') {
        if (last_c != ' ')
          putchar(c);
      } else
        putchar(c);

      last_c = c;
    }
}
