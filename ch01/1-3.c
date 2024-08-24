/* 
 
Chapter 1 
Excersize 1 - 3

Modify the temperature conversion progrma to print a heading above the table.

*/

#include<stdio.h> 
int main()

{
    int upper = 300;
    int lower = 0;
    int step = 20;
    float celcius;
    float fahr; 

   printf("Fahrenheit to Celcius Conversion Table\n");
    fahr = lower;
    while(fahr <= upper) {
        celcius = 5 * (fahr - 32) / 9;
        printf("%3.1f\t%6.2f\n",fahr, celcius); // 3 and 6 here states how wide the placement is 
        fahr = fahr + step;
    }
}