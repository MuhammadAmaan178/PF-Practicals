/*Question#01:-
Print Diamond using escape sequence "\n" and "\t"? In single cout statement?
Output should be like 
			*
		*	*	*
	*	*	*	*	*
		*	*	*
			*
*/			


#include <iostream>
using namespace std;

int main(){
	// "\t" is also a escape sequence use to give some space
	cout << "\t\t*\n\t*\t*\t*\n*\t*\t*\t*\t*\n\t*\t*\n\t\t*";
	return 0;
}
