#include <iostream>

using namespace std;
double degreetoFahrenheit(double degree);

int main() {

	double degree;
	cout << "Please enter a Celsius value: ";
	cin >> degree;
	cout << degree << " degrees Celsius is " << degreetoFahrenheit(degree) << " degrees Fahrenheit" << endl;

}

double degreetoFahrenheit(double degree) {
	
	double Fahrenheit;
	Fahrenheit = 1.8 * degree + 32.0;
	return Fahrenheit;
}

