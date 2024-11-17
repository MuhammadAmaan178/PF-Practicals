/* Question # 09
Write a program to find first and last digit of a number. */

#include <iostream>
using namespace std;
int main(){
	int num,f_num,l_num;
	cout<<"Enter a Number : ";
	cin>>num;
	
	l_num = num%10;
	
	f_num = num;
	while(f_num>=10){
		f_num = f_num/10;
	}
	
	cout<<"First Digit : "<<f_num<<endl;
	cout<<"Last Digit : "<<l_num<<endl;


	return 0;
}
