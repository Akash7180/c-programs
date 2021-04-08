//first program
#include<stdio.h>
int main() {
    int intType;
    float floatType;
    double doubleType;
    char charType;


    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of float: %zu bytes\n", sizeof(floatType));
    printf("Size of double: %zu bytes\n", sizeof(doubleType));
    printf("Size of char: %zu byte\n", sizeof(charType));
    
    return 0;
}

//second program
cout<< "Product of two numbers";
#include <iostream>
using namespace std;

int main()
{
    double firstnumber, secondnumber, productOfTwoNumbers;
    cout << "Enter two numbers: ";
    cin >> firstnumber >> secondnumber;
    productOfTwoNumbers = firstnumber * secondnumber;  
    cout << "Product = " << productOfTwoNumbers;    
    return 0;
}
