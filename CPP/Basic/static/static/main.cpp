#include<iostream>//static跟private类似，是static后的变量只能在该编译单元使用，外部无法访问
static int s_hld = 1026;//如果删掉static，会出现编译错误，因为static_test.cpp中也有该变量
extern int s_yzx;//通过extern引用外部变量
struct Entity {
	int x, y;//用static修饰x，y，则只有struct中的成员能访问x，y
	void Print() {
		std::cout << x << "," << y << std::endl;//结构体和类中不能直接写执行语句，需要通过函数
	}
	};
struct Whu {
	static int a, b;
	void Print() {
		std::cout << a << "," << b << std::endl;
	}//用static修饰变量后，对结构体的实例化就没用了，a，b变量只存在一个
};
	int Whu::a;
	int Whu::b;
int main() {
	std::cout << s_hld << std::endl;
	Entity e;
	e.x = 2;e.y = 3;
	Entity e1{ 2,6 };
	e.Print();e1.Print();
	Whu yzx;//这里yzx和hld打印出来的a，b值都是相同的,因为a，b有且仅有一个
	yzx.a = 10;yzx.b = 26;
	Whu hld;
	hld.a = 11;hld.b = 01;
	yzx.Print();
	hld.Print();





}
