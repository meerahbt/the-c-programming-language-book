/* 
 
Chapter 1 
Excersize 1 - 5

Modify the temperature conversion program to print the table in reverse order,
that is from 300 degrees to 0.

*/

#include<stdio.h> 
int main()

{

    int step = 20, lower = 0;
    float celsius, fahr;
    celsius = 300;

    printf("Celsius to Fahrenheit Conversion Table\n");
    while(celsius >= lower) {
        fahr = celsius * (9.0/5.0) + 32;
        printf("%3.1f\t%6.2f\n", celsius, fahr);
        celsius = celsius - step;
    }
}