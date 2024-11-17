/* Question #07
Write a C++ program counts the number of digits in the number entered by user? */

#include<iostream>
using namespace std;

int main(){
	int num , digits ;
	cout<<"Enter The Number : ";
	cin>>num;
	int x = num;
	
	if (num==0){
		digits = 1;
	}
	else{
		while(num!=0){
			num = num/10;
			digits++;
		}
	}
	
	cout<<"The Number Of Digits "<<x<<" Contains Is "<<digits<<endl;
	return 0;
}


