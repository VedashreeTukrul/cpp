#include<iostream>
using namespace std;

int main(){
	cout << (5/3) << endl;
	// Typecasting -> change of resulting datatype
	
	// Implicit Typecasting 
	// Float + Int 
	cout << (5/3.0) << endl;
	cout << (5.0/3) << endl;
	
	// Char + Int
	char letter = 'A';
	cout << letter << endl;
	cout << letter + 1 << endl;
	letter = letter + 1;
	cout << letter << endl;
	
	char ch = 67;
	cout << ch << endl;
	
	// Boolean + Int = Int 
	cout << (false + 5 )<< endl;
	
	return 0;
	
	
}
