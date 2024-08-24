/* 
 
Chapter 1 
Excersize 1 - 12

Write a program that prints its input on word per line.

NOTE: Has limitations i.e. counts numbers as word, limited in lines, etcs. 
It's pretty much set to make every space (" ") create a new line 

*/

#include<stdio.h> 
int main()

{
    int c;

    while((c = getchar()) != EOF) {
        if (c == ' ') {
            while((c = getchar()) == ' ') // this is here to remove the space 
                ;
            putchar('\n'); // and just puts the next 'word' on a new line 
        }
    putchar(c);
    }

}
