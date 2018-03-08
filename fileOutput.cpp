#include <iostream>
#include <fstream>
using namespace std;

int main(){
	int number;
	ofstream out_a;
	char cont = 'y';

	out_a.open("number.dat");
	if (out_a_fail()) {
		cout << "unable to open file numbers.dat" << endl;
		exit (1);
	}

	while (cont == 'y') {
		cout << "Type a number to save to file: ";
		cin >> number;

		out_a << number;

		cout << "Type another number (y/n)";
		cin >> cont;
	
	
	}
	return 0;
}