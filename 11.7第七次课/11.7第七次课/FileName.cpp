#include<iostream>
#include<cstdlib>
#include<string.h>
using namespace std;
//static int step=0：static修饰局部变量，是一个静态区，修改的生命周期；只在局部有效，但生命周期内存分配直至程序运行结束才被回收
// 引起二义性的原因：1.形参个数一直，仅仅是形参名或者返回值不同
// 2.重载函数有一个形参有默认参数时。3.重载函数形参在同位置分别类型为传值或者传引用
// //时钟类的完整程序：
/*class Clock {         //时钟类的定义
public:                //外部接口，公有成员函数
	void setTime(int newH = 0, int newM = 0, int S = 0);
	void showTime();
private:              //私有数据成员
	int hour, minute, second;
};
//时钟类成员函数的具体实现
void Clock::setTime(int newH, int newM, int newS) {//::双冒号操作符被称为域操作符和，含义和用法如下：
	hour = newH;                     //在类外部声明成员函数，如左侧就是这种用法
	minute = newM;                //调用全局函数，有局部与全局两个相同变量名时，优先调用局部变量，但我们想调用全局变量，就用：：
	second = newS;                  //调用类的静态方法
}
inline void Clock::showTime() {        //inline：内联函数的显式声明
	cout << hour << ":" << minute << ":" << second << ":" << endl;
}//主函数
int main() {
	Clock myClock;   //定义对象myClock
	cout << "First time set and output:" << endl;
	myClock.setTime();       //设置时间为默认值
	myClock.showTime();       //显示时间
	cout << "Second time set and output:" << endl;
	myClock.setTime(8,30,30);//设置时间
	myClock.showTime();    //显示时间
	return 0;
}*/

//对上示例进行构造函数修改
/*class Clock {
public:
	Clock(int newH, int newM, int S);  //构造函数
	//Clock() {};//无参构造函数
	void setTime(int newH, int newM, int S );
	void showTime();
private:
	int hour, minute, second;
};
Clock::Clock(int newH, int newM, int newS) : hour(newH), minute(newM), second(newS) {}
void Clock::setTime(int newH, int newM, int newS) {
	hour = newH;
	minute = newM;
	second = newS;
}
inline void Clock::showTime() {
	cout << hour << ":" << minute << ":" << second <<  endl;
}
//构造函数的实现
int main() {
	Clock c(0, 0, 0);//系统自动调用构造函数，调用的是定义好的构造函数
	//Clock c2;   //调用默认
	c.setTime(8, 30, 32);
	c.showTime();
		ret`urn 0;
}*/

//定义日期类
/*class Date {
public:
	Date(int y, int m, int d);
	Date() {};
	void setDate(int y, int m, int d);
	void showDate();
private:
	int year, month, day;
};
void Date::setDate(int y, int m, int d) {
	year = y;
	month = m;
	day = d;
}
inline void Date::showDate() {
	cout << year << "/" << month << "/" << day << endl;
}
int main() {
	Date getDate;
	cout << "初始日期：" << endl;
	getDate.setDate(23, 11, 7);
	getDate.showDate();
	return 0;
}*/

//定义点类
/*class Point {
public:
	void setXY(int nx, int ny);
	void show() {
		cout << "当前坐标为："<<X<<","<<Y << endl;
	}
private:
	int X, Y;
};
void Point::setXY(int nx, int ny) {
	X = nx;
	Y = ny;
}

int main() {
	Point p1;
	p1.show();
	p1.setXY(5, 10);
	p1.show();
	return 0;
}*/

////函数cgoods类
//class CGoods
//{
//public:
//	//成员方法 _thiscall调用约定 
//	//实现方式有2中：一、类中定义；二、类外定义
//	void Register(const char* name, int amount, float price);
//	void Show()
//	{
//		cout << " " << _name << " " << _amount << " " << _price << endl;
//	}
//
//	void SetName(const char* name)
//	{
//		strcpy(_name, name);
//	}
//	void SetAmount(int amount);
//	void SetPrice(float price);
//
//	void GetName(const char* name);
//	char* GetName();
//	//这两种有什么区别呢？
//	//第一种是把内容拷贝到自己定义的一个变量name中，修改的也是那么中的值
//	//直接返回char*就相当于直接把私有内存的地址传递过去，在外部可以通过解引用修改其值，不安全。
//	int GetAmount();
//	float GetPrice();
//private://私有成员并不能被外界访问，所以要提供一系类共有的接口
//	char _name[20];
//	int _amount;
//	float _price;
//};
//void CGoods::Register(const char* name, int amount, float price)
//{
//	strcpy(_name, name);
//	//这里_name指的是类中的成员变量吗？
//	//其实不是，成员变量是不占内存的，这里是this指针指向的对象的成员变量。
//	_amount = amount;
//	_price = price;
//}
////成员方法实现在类外，必须加类作用域
////成员方法在类中实现和类外实现的区别？
////    1、类中实现自动被编译器处理成内联函数，类外实现和普通函数一样，有栈帧开辟和回退
////    2、如果把类定义在头文件a.h中，b.cpp和c.cpp都包含“#include<a.h>”，类外实现会出现符号重定义错误，类中实现不会出现错误
//
//int main()
//{
//	CGoods good1;//vs的命令提示符，cl xx.cpp/dlreportSingleClassLayoutCGoods查看类的内存布局
//	CGoods good2;
//
//	good1.Register("mianbao", 10, 5.5);
//	good1.Show();
//
//	good2.Register("kele", 15, 4.5);
//	//函数怎么知道是那个对象？
//	/*
//		good2.Register("kele",15,4.5);
//		00EA511D  push        ecx
//		00EA511E  movss       xmm0,dword ptr ds:[0EACD58h]
//		00EA5126  movss       dword ptr [esp],xmm0
//		00EA512B  push        0Fh
//		00EA512D  push        0EACC84h
//		00EA5132  lea         ecx,[good2]  在实现时还是要把对象地址传进去
//		00EA5135  call        CGoods::Register (0EA12E4h)
//	*/
//	//有一个实参肯定有一个形参接受，也就是CGoods*const this，加const防止指向其他对象。
//	//也就是说，实际上每个成员函数都会对一个形参，CGoods*const this用来接收对象的地址。
//	//例如void Register(CGoods*const this，char *name,int amount,float price);
//	//写代码时并不需要自己写this指针，默认this指向调用该成员函数的对象
//	good2.Show();
//
//
//	return 0;
//}


//定义CGoods类：
/*class CGoods {
public:
	void li(const char* name, int amount, double price);
	void Show(){
		cout << " " << n << " " << a << " " << p << endl;
	}
private:
	const char* n;
	int a;
	double p;
};
void CGoods::li(const char* name, int amount, double price) {
	n = name;
	a = amount;
	p = price;
}
int main() {
	CGoods mygoods;
	mygoods.li("mianbao", 5, 3.3);
	mygoods.Show();
	return 0;
}*/

//4-8Dog类：
class Dog {
public:
	void xinxi(int age, double weight, double high);
	void Show() {
		cout << "年龄是："<< a << "\n" << "体重是：" << w  <<"\n""身高是：" << h << endl;
	}
private:
	int a, w, h;
};
void Dog::xinxi(int age, double weight, double high) {
	a = age;
	w = weight;
	h = high;
}
int main() {
	Dog li;
	li.xinxi(1, 50.6, 1.69);
	li.Show();
	return 0;

}