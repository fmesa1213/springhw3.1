/*
Author: Frida Mesa
Course: CSCI-135
Instructor: 
Assignment: E3.1
Wrote a program that reads an integer and prints whether it is negative, zero, or positive.
*/

#include <iostream>
using namespace std;

int main ()
{
int number;
  cout << "Enter an interger: " << endl;
  cin >> number;
  
  if (number > 0)
  {
  cout << "It is positive." << endl;
  }
  
  if (number < 0)
  {
  cout << "It is negative." << endl;
  }
  
  else
  {
  cout << "It is zero." << endl;
  }
  return 0;
}
