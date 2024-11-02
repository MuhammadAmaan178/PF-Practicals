/* Question #03
Write a C++ program to check whether a character is vowel or consonant.
*/

#include<iostream>
using namespace std;

int main(){
	char x;
	cout<<"Enter The Character : ";
	cin>>x;
	
	if ((x>='a' && x<='z')||(x>='A' && x<='Z')){
		if((x=='a')||(x=='e')||(x=='i')||(x=='o')||(x=='u')||(x=='A')||(x=='E')||(x=='I')||(x=='O')||(x=='u')){
			cout<<"Given Character Is Vowel";
		}
		else{
			cout<<"Given Character Is Consonant";
		}
	}
	else{
		cout<<"Given Character Is Not Alphabet...Please Enter Alphabet";
	}
	return 0;
}
