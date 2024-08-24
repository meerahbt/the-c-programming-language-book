/* 
 
Chapter 1 
Excersize 1 - 4

Write a program to print the corresponding Celsius to Fahrenheit table.

*/

#include<stdio.h> 
int main()

{
int step = 20, upper = 300;
    float celsius, fahr;
    celsius = 0;

    printf("Celsius to Fahrenheit Conversion Table\n");
    while(celsius <= upper) {
        fahr = celsius * (9.0/5.0) + 32;
        printf("%3.1f\t%6.2f\n", celsius, fahr);
        celsius = celsius + step;
}

}