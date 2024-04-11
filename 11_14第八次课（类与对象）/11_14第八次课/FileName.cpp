#include<iostream>
#include<cmath>
using namespace std;
/*class Clock {
public:
	Clock(int nh, int nm, int ns);//有参构造函数，被系统自动调用
	Clock(){}
	//Clock() = default;//无参的构造函数用编译器自己的
    //Clock() :Clock(0, 0, 0) {}//委托构造函数
	Clock(Clock & rc);//拷贝构造函数，复制构造函数
	~Clock();//析构函数
	Clock& operator=(Clock& rc) ;//对象的赋值运算，重载，赋值运算符=
	void setTime(int nh, int nm, int ns);
	void showTime();
	void setHour(int nh) { hour = nh; }
	int getHour() {
		return hour;
	}
private:
	int hour, minute, second;//私有数据成员，类作用域
};
Clock::~Clock() {
	cout << "析构函数被调用";
}
Clock& Clock::operator=(Clock& rc) {
	this->hour = rc.hour;
	this->minute = rc.minute;
	this->second = rc.second;
	return *this;
}
Clock::Clock(Clock& rc) {
	hour = rc.hour;
	minute = rc.minute;
	second = rc.second;
	cout << "有参构造函数被调用" << endl;
}
Clock::Clock(int nh, int nm, int ns):hour(nh),minute(nm),second(ns)//初始化列表，效率更高
{}
void Clock::setTime(int nh, int nm, int ns) {
	hour = nh;
	minute = nm;
	second = ns;
}
void Clock::showTime() {
	cout << hour << minute << second;
}
void fun(Clock c1) {//对象作为函数的形参
	int x;
	x = c1.getHour() + 12;
	cout << "x" << x << endl;
}
Clock fun2() {
	Clock fc(10, 10, 10);
	return fc;//对象作为函数的返回值返回,局部作用
}
int x;//全局作用域，文件作用域
int main() {//自己构造函数，默认构造函数失效，形成有参构造函数，需要再构造默认构造函数(无参)
	//Clock c1;//声明并定义一个对象，内存分配空间//局部对象//调用编译器的默认构造函数
	//Clock c2(0,0,0);//定义对象的同时，初始化
	//Clock c3(c2);//用已存在的对象初始化将要创建的对象
	//c3.showTime();
	//fun(c3);//对象作为函数的实参
	/*Clock c1;
	Clock c2(5, 5, 5);
	c2 = c1;
	c2.showTime();*/
/*	Clock c1(0, 0, 0);
	c1.showTime();
	return 0;
}
*/
//线段类型
/*class Point
{
public:
	Point() { cout << "Point default constructor is called." << endl; }
	Point(double nx, double ny);
	Point(Point& rp);
	~Point();
	double getX() { return x; }
	double getY() { return y; }
private:
	double x = 0;
	double y = 0;//类内初始值
};

Point::~Point()
{
	cout << "Point destructor..." << "Point(" << x << ',' << y << ")is destroyed." << endl;
}
Point::Point(double nx, double ny) :x(nx), y(ny)
{
	cout << "Point constructor is called." << "Point(" << x << ',' << y << ")is created." << endl;
}
Point::Point(Point& rp)
{
	x = rp.x;
	y = rp.y;
	cout << "copy constructor." << "Point(" << x << ',' << y << ")is copyed." << endl;
}
class Line
	{
public:
		Line() {};
		Line(Point p1, Point p2);
		Line(Line& nline);
		~Line() { cout << "Line is destroyed." << endl; }
		double getLen() { return len; }
private:
		double len;
		Point start, end;
	};
	Line::Line(Point p1, Point p2) :start(p1), end(p2)
	{
		double delx, dely;
		delx = p1.getX() - p2.getX();
		dely = p1.getY() - p2.getY();
		len = sqrt(delx * delx + dely * dely);
		cout << "Line constructor is called." << endl;
	}
	Line::Line(Line& nline) :start(nline.start),end(nline.end),len(nline.len)
	{
		cout << "Line copy constructor is called." << endl;
	}
	int main()
		{
			Point p1(1, 1), p2(5, 5);
			Line line1(p1, p2);
			cout << "Line1 Length:" << line1.getLen() << endl;
			return 0;
		}
	*/

//个人银行账户管理
/*class SavingsAccount {  //储蓄账户类·
private:
	int id;        //账号
	double balance;      //余额
	double rate;        //存款的年利率
	int lastDate;        //上次变更余额的时期
	double accumulation;  //余额按日累加之和
//记录一笔账，date为日期，amount为金额，desc为说明
	void record(int date, double amount);
	//获得到指定日期为止的存款金额按日累计值
	double accumulate(int date)const {
		return accumulation + balance * (date - lastDate);
	}
public:
	SavingsAccount(int date, int id, double rate);
	int getID() { return id; }
	double getBalance() { return balance; }
	double getRate() { return rate; }
	void deposit(int date, double amount);//存入现金
	void withdraw(int date, double amount);//取出现金
	//结算利息，每年一月一日调用一次该函数
	void settle(int date);
	//显示账户信息
	void show();
};//SavingAccount相关成员函数的实现
SavingsAccount::SavingsAccount(int date, int id, double rate) :id(id), balance(0), rate(rate), lastDate(date), accumulation(0) {
	cout << date << "\t#" << id << "is created." << endl;
}
void SavingsAccount::record(int date,double amount){//再次向账户里存钱
	accumulation = accumulate(date);
	lastDate = date;
	amount = floor(amount * 100 + 0.5) / 100;//保留小数点后两位
	balance += amount;
	cout << date << "\t#" << id << "\t" << amount << "\t" << balance << endl;
}
void SavingsAccount::deposit(int date, double amount) {
	record(date, amount);
}
void SavingsAccount::withdraw(int date, double amount) {
	if (amount > getBalance())
		cout << "Error:not enough money!" << endl;
	else
		record(date, -amount);
}
void SavingsAccount::settle(int date) {
	double interest = accumulate(date) * rate / 365;//计算年息
	if (interest != 0)
		record(date, interest);
	accumulation = 0;
}
void SavingsAccount::show() {
	cout << "#" << id << "\tBalance:" << balance;
}
int main() {
	//建立几个账户：
	SavingsAccount sa0(1, 21325302, 0.015);
	SavingsAccount sa1(1, 58320212, 0.015);
	//几笔账目
	sa0.deposit(5, 5000);
	sa1.deposit(25, 10000);
	sa0.deposit(45, 5500);
	sa1.withdraw(60, 4000);
	//开户后九十天到了银行的计息日，结算所有账户的年息
	sa0.settle(90);
	sa1.settle(90);
	//输出各个账户信息
	sa0.show(); cout << endl;
	sa1.show(); cout << endl;
	return 0;
}*/

//位域记录学生学号年级成绩信息
/*enum Level { FRESMAN, SOPHMORE, JUNIOR, SENIOR };
enum Grade{A,B,C,D};
class Student {
public:
	Student(unsigned number, Level level, Grade grade) :
		number(number), level(level), grade(grade) {}
	void show();
private:
	unsigned number : 27;
	Level level : 2;
	Grade grade : 2;
};
void Student::show() {
	cout << "Number:   " << number << endl;
	cout << "Level:   ";
	switch (level) {
	case FRESMAN:cout << "freshman"; break;
	case SOPHMORE:cout << "sophmore"; break;
	case JUNIOR:cout << "junior"; break;
	case SENIOR:cout << "senior"; break;
	}
	cout << endl;
	cout << "Gread:   ";
	switch (grade) {
	case A:cout << "A"; break;
	case B:cout << "B"; break;
	case C:cout << "C"; break;
	case D:cout << "D"; break;
	}
	cout << endl;
}
int main() {
	Student s(12345678, SOPHMORE, B);
	cout << "Size of Student:" << sizeof(Student) << endl;
	s.show();
	return 0;

}*/
//int main() {
//	cout << "nihu" << endl;
//	return 0;
//}
class Rectangle {
private:
	double width = 1, height = 1;
public:
	Rectangle() = default;
	Rectangle(double w, double h);
	double getW() { return width; }
	double getH() { return height; }
	double getArea() { return width * height; }
	double getPerimeter() { return (width + height) * 2; }
};
Rectangle::Rectangle(double w, double h) :width(w), height(h) {
}
int main() {
	Rectangle c1(4, 40);
	Rectangle c2(3.5, 35.9);
	cout << "矩形c1的宽为：" << c1.getW() << "，高为：" << c1.getH() << endl;
	cout << "矩形c1的面积为：" << c1.getArea() << endl;
	cout << "矩形c1的周长为：" << c1.getPerimeter() << endl;
	cout << "矩形c2的宽为：" << c2.getW() << "，高为：" << c2.getH() << endl;
	cout << "矩形c2的面积为：" << c2.getArea() << endl;
	cout << "矩形c2的周长为：" << c2.getPerimeter() << endl;
	return 0;
}