/* Question #06:-
Write a C++ program that finds the sum of squares of integer from 1 to n. Where n is a positive
value entered by user */

#include<iostream>
using namespace std;
//if n =3 then result = (1*1)+(2*2)+(3*3)
int main(){
	int n,result ;
	cout<<"Enter A Positive Integer : ";
	cin>>n;
	
	for(int i = 1;i<=n;i++){
		result= result + (i*i);
	}
	
	cout<<"The Sum Of Square Of Numbers From 1 To "<<n<<" Is "<<result<<endl;
	return 0;
}

