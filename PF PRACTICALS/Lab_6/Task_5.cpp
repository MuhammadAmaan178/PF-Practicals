/* Write a program that find the even upto a given number and add all the
those even numbers? (use do-while loop)*/


#include<iostream>
using namespace std;
int main(){
	int num, i =2,sum =0;
	cout<<"Enter The Number : ";
	cin>>num;
	
	do{
		if (i <= num){
			sum = sum + i;
		}
		i = i + 2;
	} while (i<=num);
	
	cout<<sum<<endl;
	
	return 0;
}
