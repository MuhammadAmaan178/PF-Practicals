/* Question #04
Write a menu driven C++ program for simple calculator using if-else. */

#include<iostream>
using namespace std;

int main(){
	int choice;
	float num1,num2;
	
	cout<<"Enter First Number : ";
	cin>>num1;
	cout<<"Enter Second Number : ";
	cin>>num2;
	
	cout<<"************************************"<<endl;
	cout<<"\t\tMENU"<<endl;
	cout<<"************************************"<<endl;
	cout<<"1.Addition"<<endl;
	cout<<"************************************"<<endl;
	cout<<"2.Subtraction"<<endl;
	cout<<"************************************"<<endl;
	cout<<"3.Multiplication"<<endl;
	cout<<"************************************"<<endl;
	cout<<"4.Division"<<endl;
	cout<<"************************************"<<endl;
	cout<<"5.Modulus"<<endl;
	cout<<"************************************"<<endl;
	cout<<"Enter Which Operation You Want To Perform By Entering Number From 1 to 5 : ";
	cin>>choice;
	
	if (choice == 1){
		cout<<"By Adding "<<num1<<" And "<<num2<<" We Get "<<num1+num2<<endl;
	}
	else if (choice==2){
		cout<<"By Subtracting "<<num2<<" From "<<num1<<" We Get "<<num1-num2<<endl;
	}
	else if (choice==3){
		cout<<"By Multiplying "<<num1<<" And "<<num2<<" We Get "<<num1*num2<<endl;
	}
	else if (choice==4){
		cout<<"By Dividing "<<num1<<" By "<<num2<<" We Get "<<num1/num2<<endl;
	}
	else if (choice==5){
		cout<<"The Remainder By Dividing "<<num1<<" By "<<num2<<" We Get "<<(int)num1%(int)num2<<endl;	
	}
	else{
		cout<<"Invalid Choice"<<endl;
	}
	
	return 0;
}
