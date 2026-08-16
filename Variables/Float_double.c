/*
  Float and double are data types used to store decimal numbers in C.

Declare a float variable:

float price = 19.99f;
Notice the 'f' suffix, which tells C this is a float value.

Declare a double variable:

double pi = 3.14159265359;
The main differences between float and double:

Precision: Double has higher precision than float
Float: ~7 decimal digits
Double: ~15 decimal digits

Size:
Float: 4 bytes
Double: 8 bytes
  
Range:
Float: 1.2E-38 to 3.4E+38
Double: 2.3E-308 to 1.7E+308
  
Print a float value:
float temperature = 98.6f;
printf("Temperature is %f degrees\n", temperature);
Print with specific decimal places:

printf("Temperature is %.1f degrees\n", temperature);
This will show: “Temperature is 98.6 degrees”
 CODE: */
#include<stdio.h>
int main(){
    float celsius = 25.0f;
    double fahrenheit;

    // converting celsius into fahrenheit//
    fahrenheit = (celsius * 9/5) + 32;
    printf(" %.1f degrees celsius is equal to %.1f degrees Fahrenheit",  celsius,fahrenheit);
    
}
