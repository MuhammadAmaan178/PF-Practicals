/* Question #05
According to your grading system mark the user entered numbers as Grade A, B, C, D, F? */

#include <iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter Your Numbers : ";
	cin>>num;
	
	if(num>=70){
		cout<<"You Got "<<num<<" Numbers And A Grade"<<endl;
	}
	else if(num>=60){
		cout<<"You Got "<<num<<" Numbers And B Grade"<<endl;
	}
	else if(num>=50){
		cout<<"You Got "<<num<<" Numbers And C Grade"<<endl;
	}
	else if(num>=40){
		cout<<"You Got "<<num<<" Numbers And D Grade"<<endl;
	}
	else if(num<40){
		cout<<"You Got "<<num<<" Numbers And F Grade"<<endl;
	}
	else{
		cout<<"Error Occured!!! Try Again";
	}
	return 0;
}
