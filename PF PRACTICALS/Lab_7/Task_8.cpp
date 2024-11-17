/* Question # 08
Write a C++ program to reverse a number entered by user using loop. */

#include<iostream>
using namespace std;
int main(){
	int num, revers_num = 0, remainder;
	cout<<"Enter a Number : ";
	cin>>num;
	
	while (num != 0) {
    	remainder = num % 10;          // Get the last digit
    	revers_num = revers_num * 10 + remainder; // Save Last digit to reversedNum
    	num = num / 10;                     // Remove the last digit from given number
    }
    cout<<"Reversed Number : "<<revers_num;
	return 0;
}
