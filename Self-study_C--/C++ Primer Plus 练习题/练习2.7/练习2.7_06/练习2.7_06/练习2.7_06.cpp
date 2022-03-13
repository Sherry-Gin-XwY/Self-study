//6. 编写一个程序，其main() 调用一个用户定义地函数（以光年值为参数，并返回对应天文单位的值).该程序按西面的格式要求用户输入光年值，并且显示结果:
//Enter the number of light years: 4.2
//4.2 light years = 265608 astronomiocal units

//天文单位是从地球到太阳的平均距离（约150000000 公里或93000000英里），光年是光一年走的距离（约10万亿公里或6万亿英里）
//除太旺外，最近的恒星大约离地球4.2光年）。请使用double类型（参见程序清单2.4），转换公式为：
//1光年 = 63240天文单位


#include <iostream>

using namespace std;
double guanglian(double number);

int main() {
	
	double number;

	cout << "Enter the number of light years: ";
	cin >> number;
	cout << number << " light years = " << guanglian(number) << " astronomical units.";

}

double guanglian(double number) {
	return number * 63240;
}