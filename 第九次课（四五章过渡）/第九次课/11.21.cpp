#include<iostream>
#include<cmath>
#include<string>
using namespace std;
/*class Point {
public:
	Point(int nx = 0, int ny = 0);//���캯��
	Point(Point&);//�������캯��
	~Point() {}//������������Ҫ������ֻ����һ��
	double getx()const {  return x; }//��Ա�������ʽӿڣ���������ͨ���ýӿڽ��з���
	void static shoecount() { cout << "jishu" << endl; }//��̬��Ա���������ʾ�̬�����ݳ�Ա
	friend double dist(Point& s, Point& e);//��Ԫ��������ͨ���������ǳ�Ա����
private:
	double x, y;
	static int count;//����ļ�������ľ�̬��Ա���ݣ���������������
};
double dist(Point& s, Point& e) {
	double x = s.x - e.y;
	double y = s.y - e.y;
	return sqrt(x * x - y * y);
}
Point::Point(int nx, int ny):x(nx),y(ny) {//����ʱ��Ĭ���βΣ�����ʱ�Ͳ�Ҫ�ٸ��˻ᱨ��
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
int Point::count = 0;//��ľ�̬���ݳ�Ա��ʼ�������⣬����������
int main(){
	Point P1;
	Point P2(10, 10);
	Line L1;
	Line L2(P1, P2);//���θ���
	Line L3(L2);//���θ���
	dist(P1, P2);
	return 0;
}*/

//ǰ����������
/*class B;//B��ʶ���ǺϷ���
class A {
public:
	void fa(B b);//����������{cout << "a" << endl;}  �������Է�����B����֮ǰ���������Ķ�����Ҫ����B��֮��
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

//�ṹ��������壺�ṹ��ؼ��֣�struct
/*struct Student {
	int id;
	string name;
	int age;
	char gender;
};
int main() {
	//Student s1;
	//cin >> s1.id >> s1.name;//̫�鷳��
	Student s1{ 111,"zhangsan",18,'m' };//��ʼ��
	cout << s1.id << endl << s1.name <<endl<< s1.age << endl << s1.gender << endl;//�����Ƿ�Ƕ��
	return 0;
}*/

//struct S {
//	int i;
//	char c;
//	double d;
//	short s;
//}s2, s3, s4;//����ṹ�����͵ı�������ȫ��������
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
using namespace A;//���A��a
int main() {
	char c = 'M';
	cout << c << endl;//�ֲ�
	cout << ::c << endl;//ȫ��
	//std::cout<<"d"<<std::endl;����д����û��namespaceͷ�ļ�ʱ��
}*/

//�����˻�����

//class SavingAmount {
//private:
//	int id;//�˺�
//	double balance;//���
//	double rate;//������
//	int lastDate;//��һ�β�����ʱ��
//	double accumulation;//�ۼ�������ܺ�
//public:
//	SavingAmount(int id,double balance,{}
//};