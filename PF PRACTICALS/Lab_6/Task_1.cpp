/*Get a number from user and calculate its factorial*/

#include<iostream>
using namespace std;
int main(){
	int num;
	int factorial=1;
	cout<<"Enter The Number Of You Want Factorial : ";
	cin>>num;
	
	for (int i = 1; i <= num; ++i) {
            factorial = factorial * i;
        }
    cout << "Factorial of " << num << " is " << factorial;
    
	return 0;
}
