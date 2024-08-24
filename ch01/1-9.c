/* 
 
Chapter 1 
Excersize 1 - 9

Write a program to copy its input to its output, replacing each string of
one or more blanks by a single blank.

NOTE: rewrote this code after solving 1-10

*/

#include<stdio.h> 
int main()

{

    int c;

        while ((c = getchar()) != EOF) {
            if (c == ' ') {
                while ((c = getchar()) == ' ')
                    ;
                putchar(' ');
            }
        putchar(c);
        }

}