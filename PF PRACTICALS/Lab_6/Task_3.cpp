/* Write a program that find the sum of all the digits from 1 to given number??? (use
while loop) */

#include<iostream>
using namespace std;

/* if 5 = 1+2+3+4+5*/

int main(){
	int num, i =1,sum =0;
	cout<<"Enter The Number : ";
	cin>>num;
	
	while(i<=num){
		sum = sum+i;
		i= i +1;
	}
	cout<<sum;
	return 0;
}
