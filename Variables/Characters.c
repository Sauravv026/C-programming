/*
Characters
In C, the char data type is used to store a single character. Characters in C are enclosed in single quotes.

Declare a character variable:
char letter;
Assign a character to the variable:
letter = 'A';
You can also declare and initialize in one line:
char grade = 'B';
A character occupies 1 byte of memory and is actually stored as an integer representing its ASCII value.
For example, 'A' is stored as 65, 'B' as 66, and so on.
You can print a character using the %c format specifier:
printf("The letter is: %c\n", letter);
CODE: */
#include<stdio.h>
int main(){
    char symbol = 'R';
    printf("The symbol is: %c", symbol); 
}

