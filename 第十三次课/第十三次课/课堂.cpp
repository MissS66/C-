#define _CRT_SECURE_NO_WARNINGS//���strcpy��������
#include<iostream>
#include<cstring>//strlen��strcpy
using namespace std;
//new��
//int main() {
//	int* px = new int(2);//new������ǵ�ַ���ѣ����Ҫ��pxȡ��ַ
//	delete px;//new����ռ�Ҫ�ֶ�ɾ����ϵͳ��������ա�
//	return 0;
//}

//��̬������ά����
//int main() {
//	srand((unsigned)time(NULL));
//	int(*cp)[9][8] = new int[7] [9] [8];
//	for (int i = 0; i < 7; i++) {
//		for (int j = 0; j < 9; j++) {
//			for (int s = 0; s < 8; s++) {
//				*(*(*(cp+i)+j)+s) = rand() % 10;
//				cout << cp[i][j][s] << " ";
//			}
//			cout << endl;
//		}
//		cout << endl;
//	}
//	delete[]cp;
//	return 0;
//}

////��̬����
//class Point {
//public:
//	Point():x(0),y(0) {
//		cout << "hahah" << endl;
//	}//������ڻ�ʹp����,˵Point�������Ĭ�Ϲ��캯�����޷�ȷ��ѡ���ĸ�
//	Point(double nx, double ny) :x(nx), y(ny) { cout << "h" << endl; }
//	double getx()const { return x; }
//	double gety()const { return y; }
//	~Point() { cout << "deatructor..." << endl; };//��������û�в���û������
//	void showxy()const { cout << "(" << x << "," << y << ")" << endl; }
//	void set(double nx, double ny) { x = ny; y = ny; }
//private:
//	double x, y;
//};
//class Pointsarr {
//public:
//	Pointsarr(int n) :size(n), points(new Point[n]){}
//	~Pointsarr() { delete[]points; }
//	void display();//��ʾÿһ��������
//	void randomSet();//����������ÿ��������꣬�����������
//	Point& element(int index);//���ز�ѯ��ĳ����
//private:
//	Point* points;
//	int size;
//};
//void Pointsarr::display() {
//	int a;
//	cout << "��������Ԫ�ظ�����" << size << endl;
//	for (int i = 0; i < size; i++) {
//		points[i].showxy();
//	}
//}
//void Pointsarr::randomSet() {
//	for (int i = 0; i < size; i++) {
//		points[i].set(rand() % 10, rand() % 10);
//	}
//	}
//Point& Pointsarr::element(int index) {
//	cout << "��" << index + 1 << "��" << ":";
//	if (index < 0 || index >= size) {
//		throw out_of_range("����������Χ��");
//	}
//	return points[index];
//}
//
//
//int main() {
//	int n; int index;//�����С���û�����
//	cout << "��������Ĵ�С��";
//	cin >> n;
//	Pointsarr pa1(n);//����һ������n��Ԫ�صĵ�������
//	pa1.randomSet();
//	pa1.display();
//	cout << "������Ҫ��ѯ���±꣺";
//	try {
//		cin >> index;
//		pa1.element(index).showxy();
//	}
//	catch (out_of_range& e) {
//		cerr << "Error:" << e.what() << endl;//cerr��cout������cout�ڻ������cerr���豸
//	}
//	return 0;
//}

//�򵥵Ķ�̬�����ࣺ
//class DynamicIntArr {
//public:
//	DynamicIntArr(int n) :data(new int [n]), capacity(n){}
//	~DynamicIntArr() { delete[]data; }
//	int get(int index);
//	int set(int index, int value);
//	int size()const { return capacity; }
//	void innitRandom();
//	void input(); 
//	void output();
//private:
//	int* data;
//	int capacity;
//};
//int DynamicIntArr::get(int index) {
//	if (index < 0 || index >= capacity) {
//		throw out_of_range("�����������鷶Χ��");
//	}
//	return data[index];
//}
//int DynamicIntArr::set(int index, int value) {
//	return data[index] = value;
//}
//void DynamicIntArr::innitRandom() {
//	for (int i = 0; i < capacity; i++) {
//		data[i] = rand() % 10;
//	}
//}
//void DynamicIntArr::input() {
//	cout << "������" << capacity << "��Ԫ�أ�";
//	for (int i = 0; i < capacity; i++) {
//		cin >> data[i];
//	}
//}
//void DynamicIntArr::output() {
//	cout << "�����У�" << capacity << "��Ԫ��" << endl;
//	for (int i = 0; i < capacity; i++) {
//		cout << data[i] << "\t";
//	}
//	cout << endl;
//}
//	int main() {
//	int size;
//	cout << "������Ԫ�ظ������������С��" << endl;
//	cin >> size;
//	DynamicIntArr iarr(size);//��̬��������
//	iarr.innitRandom();//��ʼ������Ԫ�أ������ֵ
//	iarr.output();
//	try {
//		iarr.set(1, 333);
//	}
//	catch (out_of_range& e) {
//		cerr << "Error!" << e.what() << endl;
//	}
//	iarr.output();
//	return 0;
//}

//�ַ���
//void func(const char* p) {
//
//}
//int main() {
//	char str[100];
//	char str2[100];
//	cin >> str;//shanghai yangpu
//	cout << str;
//	cin >> str2;
//	cout << str2;//shanghaiyangpu
//	//cinֻ�ʺ�����һ�����ʣ���cin�����ո񡢻س�����ȡ�����ˣ�ʣ�µĴʱ���ȡ��ʣ�µ�cin��
//	//���Կ������鷳����˶���һ��string�ཫ���װ
//	return 0;
//}

//Mystring��
class Mystring {
public:
	Mystring(const char*);	//���캯��������
	Mystring() { data = nullptr, len = 0; }
	~Mystring() { delete[]data; }//��������������
	Mystring(Mystring& str);//��������������
	int getlen()const { return len; }
	void changeDate(const char* newDate);
	void show() { if (data) { cout << data << endl; } 
	else { cout << " " << endl; }
	}
	void clera();//����ַ�
	Mystring& operator=(Mystring& str);
	friend ostream& operator<<(ostream& cout, Mystring& str);
	friend istream& operator>>(istream& cin, Mystring& str);
private:
	char* data;
	int len;
};
Mystring&Mystring::operator=(Mystring& str) {
	if (this != &str) {
		if (str.data) {
			delete[]data;
			len = str.len;
			data = new char[len + 1];
			strcpy(data, str.data);
		}
		else {
			data = nullptr;
			len = 0;
		}
	}
	return *this;
}
void Mystring::clera() {
	delete[]data;
	data = nullptr;
	len = 0;
}
void Mystring::changeDate(const char* newDate) {
	delete[]data;
	len = strlen(newDate);
	data = new char[len + 1];	//����ռ�
	strcpy(data, newDate);
}
//���캯����ͬ��ʽ���������Բ������г�ʼ����newһ���ռ�
Mystring::Mystring(const char*s) {
	if (s != nullptr) {//�ȼ���if��s��
		len = strlen(s);//��ó��ȵĵײ㺯����������\0
		data = new char[len + 1];//��һ��Ϊ�˰���\0
		strcpy(data, s);	//string������ú�����������
	}//�ײ㺯��֮��������
	else {
		data = nullptr;
		len = 0;
	}
}
//�������캯��������
Mystring::Mystring(Mystring& str) {
	if (str.data) {
		//����ռ䣬�����Ѵ��ڶ�������ݳ�Ա
		//��㸴��
		len = str.len;
		data = new char[len + 1];
		strcpy(data, str.data);//strcpy(Ŀ��,ԭʼ)

		////ǳ�㸴��
		//data = str.data;
		//len = str.len;
	}
	else {
		data = nullptr;
		len = 0;
	}
}
ostream& operator<<(ostream& cout, Mystring& str) {
	cout << str.data << endl;
	return cout;
}
istream& operator>>(istream& cin, Mystring& str) {
	char temp[100];
	cin >> temp;
	strcpy(str.data,temp);
	return cin;
}

int main() {
	Mystring str1("Hello!");//�Զ����ù��캯��
	Mystring str2("");	//�Զ����ù��캯��
	Mystring str3;		//�Զ����ù��캯��
	Mystring str4(str1);//�Զ����ÿ������캯��	

	str2 = str1;	//�ᾯ�棬��Ϊ��ǳ�㸴�ƣ�ռ����ͬ�ռ䣬��������������ͬһ�ռ��������
	//str1.operator=(str2)
	str1.show();
	str2.show();
	str3.show();
	str4.show();
	str1.changeDate("world");
	str1.show();
	cout << str2.getlen() << endl;
	string str5("hhh");
	cout << str5.length() << endl;
	return 0;
}