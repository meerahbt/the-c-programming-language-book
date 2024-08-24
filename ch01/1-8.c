/* 
 
Chapter 1 
Excersize 1 - 8

Write a program to count blanks, tabs, and newlines. 

NOTE: Need to terminate to get result

*/

#include<stdio.h> 
int main()

{

    int nc, c;
    nc = 0;
    while((c = getchar()) != EOF) {
        if (c == ' ')
            ++nc;
        if(c == '\t')
            ++nc;
        if(c=='\n')
            ++nc;
        
    }

    printf("%d",nc);
}