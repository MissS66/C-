#define _CRT_SECURE_NO_WARNINGS//解决strcpy报错问题
#include<iostream>
#include<cstring>//strlen、strcpy
using namespace std;
//new堆
//int main() {
//	int* px = new int(2);//new申请的是地址，堆，因此要对px取地址
//	delete px;//new申请空间要手动删除，系统不负责回收。
//	return 0;
//}

//动态创建多维数组
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

////动态点类
//class Point {
//public:
//	Point():x(0),y(0) {
//		cout << "hahah" << endl;
//	}//如果存在会使p报错,说Point包含多个默认构造函数，无法确定选择哪个
//	Point(double nx, double ny) :x(nx), y(ny) { cout << "h" << endl; }
//	double getx()const { return x; }
//	double gety()const { return y; }
//	~Point() { cout << "deatructor..." << endl; };//析构函数没有参数没有重载
//	void showxy()const { cout << "(" << x << "," << y << ")" << endl; }
//	void set(double nx, double ny) { x = ny; y = ny; }
//private:
//	double x, y;
//};
//class Pointsarr {
//public:
//	Pointsarr(int n) :size(n), points(new Point[n]){}
//	~Pointsarr() { delete[]points; }
//	void display();//显示每一个点坐标
//	void randomSet();//设置数组中每个点的坐标，随机产生坐标
//	Point& element(int index);//返回查询的某个点
//private:
//	Point* points;
//	int size;
//};
//void Pointsarr::display() {
//	int a;
//	cout << "点类数组元素个数：" << size << endl;
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
//	cout << "第" << index + 1 << "个" << ":";
//	if (index < 0 || index >= size) {
//		throw out_of_range("索引超出范围！");
//	}
//	return points[index];
//}
//
//
//int main() {
//	int n; int index;//数组大小，用户输入
//	cout << "输入数组的大小：";
//	cin >> n;
//	Pointsarr pa1(n);//创建一个具有n个元素的点类数组
//	pa1.randomSet();
//	pa1.display();
//	cout << "请输入要查询的下标：";
//	try {
//		cin >> index;
//		pa1.element(index).showxy();
//	}
//	catch (out_of_range& e) {
//		cerr << "Error:" << e.what() << endl;//cerr与cout的区别：cout在缓冲区里，cerr在设备
//	}
//	return 0;
//}

//简单的动态数组类：
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
//		throw out_of_range("索引超出数组范围！");
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
//	cout << "请输入" << capacity << "个元素：";
//	for (int i = 0; i < capacity; i++) {
//		cin >> data[i];
//	}
//}
//void DynamicIntArr::output() {
//	cout << "数组有：" << capacity << "个元素" << endl;
//	for (int i = 0; i < capacity; i++) {
//		cout << data[i] << "\t";
//	}
//	cout << endl;
//}
//	int main() {
//	int size;
//	cout << "请输入元素个数，即数组大小：" << endl;
//	cin >> size;
//	DynamicIntArr iarr(size);//动态建立数组
//	iarr.innitRandom();//初始化数组元素，随机赋值
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

//字符串
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
//	//cin只适合输入一个单词，当cin遇到空格、回车就提取结束了，剩下的词被提取到剩下的cin里
//	//可以看出很麻烦，因此定义一个string类将其封装
//	return 0;
//}

//Mystring类
class Mystring {
public:
	Mystring(const char*);	//构造函数的声明
	Mystring() { data = nullptr, len = 0; }
	~Mystring() { delete[]data; }//析构函数的声明
	Mystring(Mystring& str);//拷贝函数的声明
	int getlen()const { return len; }
	void changeDate(const char* newDate);
	void show() { if (data) { cout << data << endl; } 
	else { cout << " " << endl; }
	}
	void clera();//清空字符
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
	data = new char[len + 1];	//申请空间
	strcpy(data, newDate);
}
//构造函数不同形式的声明，对参数进行初始化，new一个空间
Mystring::Mystring(const char*s) {
	if (s != nullptr) {//等价于if（s）
		len = strlen(s);//获得长度的底层函数，不包含\0
		data = new char[len + 1];//加一是为了包含\0
		strcpy(data, s);	//string类的内置函数用来拷贝
	}//底层函数之拷贝函数
	else {
		data = nullptr;
		len = 0;
	}
}
//拷贝构造函数的声明
Mystring::Mystring(Mystring& str) {
	if (str.data) {
		//申请空间，复制已存在对象的数据成员
		//深层复制
		len = str.len;
		data = new char[len + 1];
		strcpy(data, str.data);//strcpy(目的,原始)

		////浅层复制
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
	Mystring str1("Hello!");//自动调用构造函数
	Mystring str2("");	//自动调用构造函数
	Mystring str3;		//自动调用构造函数
	Mystring str4(str1);//自动调用拷贝构造函数	

	str2 = str1;	//会警告，因为是浅层复制，占用相同空间，导致析构函数对同一空间操作两次
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