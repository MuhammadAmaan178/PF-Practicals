/*Question # 4: Take an amount from user, interest rate and number of 
years from user let suppose 1000, 5% and 3. Find Interest amount for 
those years. (e.g. output for above values is 150) */

#include<iostream>
using namespace std;

int main(){
	double amount,rate,years,rate_per,in_am;
	
	cout<<"Enter The Amount :";
	cin>>amount;
	cout<<"Enter The Interest Rate :";
	cin>>rate;
	cout<<"Enter The Number Of Years :";
	cin>>years;
	
	rate_per = (rate/100)*amount;
	in_am = rate_per * years;
	
	cout<<"*****************************"<<endl;
	cout<<"\tYour Details"<<endl;
	cout<<"*****************************"<<endl;
	cout<<"Amount : "<<amount<<endl;
	cout<<"Interest Rate : "<<rate<<endl;
	cout<<"Number Of Years : "<<years<<endl;
	cout<<"*****************************"<<endl;
	cout<<"Interest Rate Per Year : "<<rate_per<<endl;
	cout<<"Interest Rate "<<years<<" Years : "<<in_am<<endl;
	cout<<"*****************************"<<endl;
	
	return 0;
}
