/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Nikolai Coletta
 */

#include "std_lib_facilities.h"

int main() {
    double input1, input2, output;
    String operation;

    cout << "Please type an operator and then two operands, separated by a space:" << endl;
    cin >> operation;
    cin >> input1;
    cin >> input2;

    if(operation == "+" || operation == "plus")
        output = input1 + input2;
    else if (operation == "-" || operation == "minus")
        output = input1 - input2;
    else if (operation == "*" || operation == "mul")
        output = input1 * input2;
    else if (operation == "/" || operation == "div")
        output = input1 / input2;
    else
    {
        cout << "Invalid input.";
        return 1;
    }

    cout << "The result of " << input1 << " " << operation << " " << input2 << " is: " << output;

    return 0;
}
