#include<iostream>
#include<cmath>
using namespace std;
/*class Clock {
public:
	Clock(int nh, int nm, int ns);//�вι��캯������ϵͳ�Զ�����
	Clock(){}
	//Clock() = default;//�޲εĹ��캯���ñ������Լ���
    //Clock() :Clock(0, 0, 0) {}//ί�й��캯��
	Clock(Clock & rc);//�������캯�������ƹ��캯��
	~Clock();//��������
	Clock& operator=(Clock& rc) ;//����ĸ�ֵ���㣬���أ���ֵ�����=
	void setTime(int nh, int nm, int ns);
	void showTime();
	void setHour(int nh) { hour = nh; }
	int getHour() {
		return hour;
	}
private:
	int hour, minute, second;//˽�����ݳ�Ա����������
};
Clock::~Clock() {
	cout << "��������������";
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
	cout << "�вι��캯��������" << endl;
}
Clock::Clock(int nh, int nm, int ns):hour(nh),minute(nm),second(ns)//��ʼ���б�Ч�ʸ���
{}
void Clock::setTime(int nh, int nm, int ns) {
	hour = nh;
	minute = nm;
	second = ns;
}
void Clock::showTime() {
	cout << hour << minute << second;
}
void fun(Clock c1) {//������Ϊ�������β�
	int x;
	x = c1.getHour() + 12;
	cout << "x" << x << endl;
}
Clock fun2() {
	Clock fc(10, 10, 10);
	return fc;//������Ϊ�����ķ���ֵ����,�ֲ�����
}
int x;//ȫ���������ļ�������
int main() {//�Լ����캯����Ĭ�Ϲ��캯��ʧЧ���γ��вι��캯������Ҫ�ٹ���Ĭ�Ϲ��캯��(�޲�)
	//Clock c1;//����������һ�������ڴ����ռ�//�ֲ�����//���ñ�������Ĭ�Ϲ��캯��
	//Clock c2(0,0,0);//��������ͬʱ����ʼ��
	//Clock c3(c2);//���Ѵ��ڵĶ����ʼ����Ҫ�����Ķ���
	//c3.showTime();
	//fun(c3);//������Ϊ������ʵ��
	/*Clock c1;
	Clock c2(5, 5, 5);
	c2 = c1;
	c2.showTime();*/
/*	Clock c1(0, 0, 0);
	c1.showTime();
	return 0;
}
*/
//�߶�����
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
	double y = 0;//���ڳ�ʼֵ
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

//���������˻�����
/*class SavingsAccount {  //�����˻��ࡤ
private:
	int id;        //�˺�
	double balance;      //���
	double rate;        //����������
	int lastDate;        //�ϴα������ʱ��
	double accumulation;  //�����ۼ�֮��
//��¼һ���ˣ�dateΪ���ڣ�amountΪ��descΪ˵��
	void record(int date, double amount);
	//��õ�ָ������Ϊֹ�Ĵ������ۼ�ֵ
	double accumulate(int date)const {
		return accumulation + balance * (date - lastDate);
	}
public:
	SavingsAccount(int date, int id, double rate);
	int getID() { return id; }
	double getBalance() { return balance; }
	double getRate() { return rate; }
	void deposit(int date, double amount);//�����ֽ�
	void withdraw(int date, double amount);//ȡ���ֽ�
	//������Ϣ��ÿ��һ��һ�յ���һ�θú���
	void settle(int date);
	//��ʾ�˻���Ϣ
	void show();
};//SavingAccount��س�Ա������ʵ��
SavingsAccount::SavingsAccount(int date, int id, double rate) :id(id), balance(0), rate(rate), lastDate(date), accumulation(0) {
	cout << date << "\t#" << id << "is created." << endl;
}
void SavingsAccount::record(int date,double amount){//�ٴ����˻����Ǯ
	accumulation = accumulate(date);
	lastDate = date;
	amount = floor(amount * 100 + 0.5) / 100;//����С�������λ
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
	double interest = accumulate(date) * rate / 365;//������Ϣ
	if (interest != 0)
		record(date, interest);
	accumulation = 0;
}
void SavingsAccount::show() {
	cout << "#" << id << "\tBalance:" << balance;
}
int main() {
	//���������˻���
	SavingsAccount sa0(1, 21325302, 0.015);
	SavingsAccount sa1(1, 58320212, 0.015);
	//������Ŀ
	sa0.deposit(5, 5000);
	sa1.deposit(25, 10000);
	sa0.deposit(45, 5500);
	sa1.withdraw(60, 4000);
	//�������ʮ�쵽�����еļ�Ϣ�գ����������˻�����Ϣ
	sa0.settle(90);
	sa1.settle(90);
	//��������˻���Ϣ
	sa0.show(); cout << endl;
	sa1.show(); cout << endl;
	return 0;
}*/

//λ���¼ѧ��ѧ���꼶�ɼ���Ϣ
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
	cout << "����c1�Ŀ�Ϊ��" << c1.getW() << "����Ϊ��" << c1.getH() << endl;
	cout << "����c1�����Ϊ��" << c1.getArea() << endl;
	cout << "����c1���ܳ�Ϊ��" << c1.getPerimeter() << endl;
	cout << "����c2�Ŀ�Ϊ��" << c2.getW() << "����Ϊ��" << c2.getH() << endl;
	cout << "����c2�����Ϊ��" << c2.getArea() << endl;
	cout << "����c2���ܳ�Ϊ��" << c2.getPerimeter() << endl;
	return 0;
}