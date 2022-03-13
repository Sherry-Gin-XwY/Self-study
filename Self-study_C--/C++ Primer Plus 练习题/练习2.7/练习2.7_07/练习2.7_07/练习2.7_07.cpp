// 编写一个程序，要求用户输入小时数和分钟数。在main（）函数肿，将这两个值传递给一个void 函数，后者以下面这样的格式显示这两个值：

#include <iostream>

using namespace std;
void timeCreater(int hour, int minute);

int main() {
	int hour;
	int minute;
	cout << "Enter the number of hours: ";
	cin >> hour;
	cout << "Enter the number of minutes: ";
	cin >> minute;
	timeCreater(hour, minute);
}

void timeCreater(int hour, int minute) {
	cout << "Time: " << hour << ":" << minute << endl;
}