/*Question # 6: Write a program to take input base and height of triangle. 
Now calculate area by using formula Area=1/2 x base x height;. */

#include<iostream>
using namespace std;

int main(){
	float base,height,area;
	
	cout<<"Enter Base Of Triangle : ";
	cin>>base;
	cout<<"Enter Height Of Triangle : ";
	cin>>height;
	
	area = (base*height)/2;
	
	cout<<"Area Of Triangle is "<<area<<endl;
	
	return 0;
}
	
