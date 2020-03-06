#include <iostream>
using namespace std;

int main(){
	int a = 5;
	int b = 10;
	int* point = &a;
	
	cout << point << endl;
	cout << *point << endl;
	*point = *point + 25;
	
	point = &b;
	cout << point << endl;
	cout << *point << endl;
	
	point = &a;
	cout << point << endl;
	cout << *point << endl;
	
	return 0;
}