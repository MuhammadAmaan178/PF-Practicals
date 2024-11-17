/* Question # 10
Write a program to calculate product of digits of a number. */


#include<iostream>
using namespace std;
int main(){
	int num, product = 1, digit;
	
	cout<<"Enter a Number : ";
	cin>>num;
	
	if(num==0){
		product = 0;
	}else{
		while (num != 0) {
	    	digit = num % 10;          
	    	product = product * digit;
	    	num = num / 10;                 
	    }
	}
    cout<<"Product Of Given Numbers Digit Is : "<<product;
	return 0;
}
