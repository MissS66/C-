#include<iostream>
#include<cmath>
#include<string>
using namespace std;
/*class Point {
public:
	Point(int nx = 0, int ny = 0);//构造函数
	Point(Point&);//拷贝构造函数
	~Point() {}//析构函数，不要参数，只能有一个
	double getx()const {  return x; }//成员函数访问接口，允许别的类通过该接口进行访问
	void static shoecount() { cout << "jishu" << endl; }//静态成员函数，访问静态的数据成员
	friend double dist(Point& s, Point& e);//友元函数，普通函数，不是成员函数
private:
	double x, y;
	static int count;//对象的计数，类的静态成员数据，作用域：类作用域
};
double dist(Point& s, Point& e) {
	double x = s.x - e.y;
	double y = s.y - e.y;
	return sqrt(x * x - y * y);
}
Point::Point(int nx, int ny):x(nx),y(ny) {//声明时给默认形参，定义时就不要再给了会报错
	//x=nx;y=ny
}
Point::Point(Point& tp) :x(tp.x), y(tp.y) { cout << "L" << endl; }
class Line {
private:
	double x, y;
	Point start, end;
	double len;
public:
	Line();
	Line(Point np1, Point np2);
};
Line::Line() {cout<<" "<<endl; }
Line::Line(Point np1, Point np2) {

}
int Point::count = 0;//类的静态数据成员初始化，类外，带数据类型
int main(){
	Point P1;
	Point P2(10, 10);
	Line L1;
	Line L2(P1, P2);//两次复制
	Line L3(L2);//两次复制
	dist(P1, P2);
	return 0;
}*/

//前项引用声明
/*class B;//B标识符是合法的
class A {
public:
	void fa(B b);//不可以内联{cout << "a" << endl;}  声明可以放在类B声明之前，但函数的定义需要放在B类之下
private:
};
class B {
public:
	void fb(A a) { cout << "b" <<endl; }
};
void A::fa(B b) {
	cout << "a" << endl;
}
int main() {
	B xb;
	A xa;
	return 0;
}*/

//结构体和联合体：结构体关键字：struct
/*struct Student {
	int id;
	string name;
	int age;
	char gender;
};
int main() {
	//Student s1;
	//cin >> s1.id >> s1.name;//太麻烦了
	Student s1{ 111,"zhangsan",18,'m' };//初始化
	cout << s1.id << endl << s1.name <<endl<< s1.age << endl << s1.gender << endl;//检验是否嵌入
	return 0;
}*/

//struct S {
//	int i;
//	char c;
//	double d;
//	short s;
//}s2, s3, s4;//定义结构体类型的变量用于全局作用域
//int main() {
//	S 
//}

//namespace
/*char c = 'G';
namespace A {
	char c = 'a';
};
namespace B {
	char c = 'b';
};
using namespace A;//输出A中a
int main() {
	char c = 'M';
	cout << c << endl;//局部
	cout << ::c << endl;//全局
	//std::cout<<"d"<<std::endl;这种写法是没有namespace头文件时用
}*/

//银行账户管理

//class SavingAmount {
//private:
//	int id;//账号
//	double balance;//余额
//	double rate;//年利率
//	int lastDate;//上一次操作的时间
//	double accumulation;//累计日余额总和
//public:
//	SavingAmount(int id,double balance,{}
//};