/* print following patterns 
     *****
    *****
   *****
  *****
 *****              */
  
#include<iostream>
using namespace std;
int main(){
	int n = 5;
	for(int i = 0;i<5;i++){
		for(int j =i;j<n;j++){
			cout<<" ";
		}
		for(int j =1;j<5;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}

