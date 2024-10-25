/*
Program File Name: Ch4Ex10
Programmer: Josh Richards
Date: October 25, 2024
Requirements:

Write a program that asks the user to enter the month (letting the user enter an integer in the range of 1 through 12) and the year. 
The program should then display the number of days in that month. Use the following criteria to identify leap years:

Determine whether the year is divisible by 100. If it is, then it is a leap year if and only if it is divisible by 400. 

    For example, 2000 is a leap year but 2100 is not.

If the year is not divisible by 100, then it is a leap year if and only if it is divisible by 4. 

    For example, 2008 is a leap year but 2009 is not.

Here is a sample run of the program:

    Enter a month (1–12): 2 [Enter]
    Enter a year: 2008 [Enter]
    29 days

*/

#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    if (year % 100 == 0) {
        return year % 400 == 0;
    }
    else {
        return year % 4 == 0;
    }
}

int getDaysInMonth(int month, int year) {
    switch (month) {
    case 4: case 6: case 9: case 11:
        return 30;
    case 2:
        return isLeapYear(year) ? 29 : 28;
    default:
        return 31;
    }
}

int main()
{
    int month, year;

    cout << "Enter a month (1-12): ";
    cin >> month;

    if (month < 1 || month > 12) {
        cout << "Invalid month, Please enter a value from 1 to 12." << endl;
        return 1;
    }

    cout << "Enter a year: ";
    cin >> year;

    int days = getDaysInMonth(month, year);

    cout << days << " days" << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
