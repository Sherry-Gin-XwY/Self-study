#include <iostream>
#include <string>

using namespace std;
void firstline();
void secondline();

int main() {
	firstline();
	firstline();
	secondline();
	secondline();

}

void firstline() {
	cout << "Three blind mice" << endl;
}

void secondline() {
	cout << "Sww how they run" << endl;
}
