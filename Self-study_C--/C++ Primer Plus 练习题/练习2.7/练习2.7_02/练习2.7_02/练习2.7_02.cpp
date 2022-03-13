#include <iostream>

using namespace std;
long longtoMa(long);

int main() {

	long longvalue;
	cout << "Please enter a long value" << endl;
	cin >> longvalue;
	long mavalue = longtoMa(longvalue);
	cout << "ma is " << mavalue << endl;
}

long longtoMa(long longvalue) {
	long mavalue;
	mavalue = longvalue * 200;
	return mavalue;
}