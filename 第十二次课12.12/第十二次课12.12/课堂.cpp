#include<iostream>
#include<string>
#include<stdexcept>
using namespace std;
//指针数组
//int main() {
//	int line1[3] = { 1,2,3 };
//	int line2[3] = { 0,1,0 };
//	int line3[3] = { 0,0,1 };
//	int* pline[3] = { line1,line2,line3 };
//	cout << *(pline[0]+ 1) << endl;//输出line1的第二个元素等价于pline[0][1]
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			cout << pline[i][j] << "\t";
//		}
//		cout << endl;
//	}
//	cout << line1 << endl;
//	cout << &line1[0] << endl;
//	return 0;
//}

//二维数组
//int main() {
//	int a[3][3] = { {1,2,3},{2,3,4},{6,7,8} };
//	cout << a + 1 << endl;//二维数组整体的地址+偏移，行
//	cout << *(a + 1) << endl;//解引用，获取行地址，行首元素地址
//	cout << &a[1][0] << endl;//行首元素地址
//	//这三个等价a[1][0]
//	cout << *(*(a + 1) + 1) << endl;//*解引用出来为3
//	return 0;
//}
//指向数组的指针
//void print2Darr(int(*p2arr)[3],int r,int c) {
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			cout << p2arr[i][j] << endl;
//			cout << *(*(p2arr + i) + j )<< endl;
//		}
//		cout << endl;
//	}
//}
//int main() {
//	int a[3][3] = { {1,2,3},{2,3,4},{6,7,8} };
//	int(*p)[3];//一个指针，指向一个含有三个元素的“行”
//	//()不能省,*p[3]代表一个指针数组
//	/*p = a; 
//	p = a + 1;//行地址；p=*(a+i)+j,第i+1行第j+1个元素地址
//	cout << p << endl;
//	p = a + 2;
//	cout << p << endl; */
//	print2Darr(a, 3, 3);
//	return 0;
//}

//指针交换
//void myswap(int x, int y) {
//	int t;
//	t = x;
//	x = y;
//	y = t;
//}
//void newswap(int *x, int *y) {//指针作为函数的形参
//	int t;
//	t = *x;
//	*x = *y;
//	*y = t;
//}
//int main() {
//	int a = 10; int b = 100;
//	myswap(a, b);//调用函数
//	cout << a << endl;
//	cout << b << endl;
//	newswap(&a,& b);
//	cout << a << endl;
//	cout << b << endl;
//	return 0;
//}

//一个浮点数整数部分小数部分分开
//void splitFloat(float x, int *n, float *y) {//不加星号对n，y的操作仅存在于函数体中
//	*n = static_cast<int>(x);
//	*y = x - *n;
//	cout << x << "的整数部分是：" << *n << endl;
//	cout << x << "的小数部分是：" << *y << endl;
//}
//int main() {
//	float x,y; int n;
//	cout << "请输入一个浮点数：";
//	cin >> x;
//	splitFloat(x, &n, &y);
//	return 0;
//}

//void splitFloat(float x, int n, float y) {
//	n = static_cast<int>(x);
//	y = x - n;
//	cout << x << "的整数部分是：" << n << endl;
//	cout << x << "的小数部分是：" << y << endl;
//}
//int main() {
//	float x, y; int n;
//	cout << "请输入一个浮点数：";
//	cin >> x;
//	splitFloat(x, n, y);
//	return 0;
//}
//指针作为函数的返回类型
//不推荐方法
//int* fun() {
//	int x = 3;//不要将非静态局部地址作为返回值
//	return &x;
//}
//	int main() {
//		int* p;
//		p = fun();
//		cout << *p << endl;
//		return 0;
//	}
//new int法（比较安全）
//int* f() {
//	int* x;
//	x = new int;
//	return x;
//}
//int main() {
//	int* p;
//	p = f();
//	cout << *p << endl;
//	delete p;//都要用delete释放所指向的空间
//	return 0;
//}
//new的用法
//1.分配内存，动态分配内存
//class Point {
//public:
//	Point(double nx = 0, double ny = 0) :x(nx), y(ny) { cout << "constructor..." << endl; }
//	~Point() { cout << "destructor..." << endl; }
//	double getx() { return x; }
//	double gety() { return y;  }
//private:
//	double x, y;
//};
//int main() {
//	int* pi = new int(1000);//申请一个整型空间，并且初始化为1000，堆
//	int* pi2 = new int;//申请一个整型空间，不初始化
//	*pi2 = 100;
//	int *pins = new int[100];
//	string* ps = new string("cold");
//	Point * pp = new Point[2];
//	cout << pp[0].getx() << endl;
//	cout << pp->getx() << endl;
//	delete pi;//释放空间
//	delete pi2;
//	delete[] pins;
//	delete ps;
//	delete pp;//除了释放内存，还负责调用对象析构函数
//}

//动态数组
//int* createArray(int size) {
//	int* p = new int[size] {0};
//	return p;
//}
//int main() {
//	int* parr;
//	int n;//数组元素个数
//	n = 90;
//	parr = createArray(n);//调用函数创建数组
//	for (int i = 0; i < n; i++) {
//		cout << parr[i] << endl;
//	}
//	delete[]parr;
//
//	return 0;
//}
//int sum(int a, int b) {
//	return a + b;
//}
//double sum2(double a, double b) {
//	return a + b;
//}
//int main() {
//	int(*psum)(int, int);//函数指针的声明
//	psum = sum;
//	cout << sum(10, 10) << endl;
//	cout << psum(10, 10) << endl;
//	int(*p2)(int, int) = sum;//初始化
//	int(*p3)(int, int) { sum };//初始化
//	double(*p4)(double, double) { sum2 };
//	return 0;
//}

//函数回调
//void attackS() {
//	cout << "\n攻击策略" << endl;
//	cout << "biubiu..." << endl;
//}
//void defenseS() {
//	cout << "\n防御策略" << endl;
//	cout << "dundun..." << endl;
//}
//void escapeS() {
//	cout << "\n逃跑策略" << endl;
//	cout << "runrun..." << endl;
//}
//void playGame(void(*gameFun)()) {//形参是一个指向函数的指针
//	cout << "GameBegin!" << endl;
//	gameFun();//根据传递进来的函数进行调用
//}
//int main() {
//	void(*gameS)() = nullptr;
//	int select;
//	while (1) {
//		cout << "\n1攻击，2逃跑，3防御：" << endl;
//		cin >> select;
//		switch (select) {
//		case 1:
//			gameS = attackS; break;
//		case 2:
//			gameS = escapeS; break;
//		case 3:
//			gameS = defenseS; break;
//		default:
//			return 0;
//		}
//		playGame(gameS);//调用
//	}
//}

//this指针
//class Clock {
//public:
//	void setTime(int nh, int nm, int ns) {
//		this->hour = nh;//这个this->写不写都可以，因为是隐藏内容
//		this->minute = nm;
//		this->second = ns;
//	}
//private:
//	int hour, minute, second;
//};
//int main() {
//	Clock c1;
//	c1.setTime(7, 0, 0);
//	return 0;
//}
//
//简单动态数组类
class DynamicArray {
public:
	DynamicArray(int size):capacity(size),data(new int [size]){}
	~DynamicArray() { delete[] data; }//数组或基本类型的数组在删除时都要加[]
	int get(int index)const;//获取元素
	void set(int index, int value);//设置元素
	int size()const { return capacity; }//获取数组容量
	void input();//数组整体元素的获得
	void output();//数组元素的整体输出
private:
	int *data;//指向动态分配的数组
	int capacity;//数组的容量，即数组元素的个数
};
//获取元素：
int DynamicArray::get(int index)const {
	if (index < 0 || index >= capacity) {
		//cout << "索引超出范围" << endl;
		throw out_of_range("索引超出范围");
	}
	return data[index];
}
//设置元素:
void DynamicArray::set(int index, int value) {
	if (index < 0 || index >= capacity) {
		//cout << "索引超出范围" << endl;
		throw out_of_range("索引超出范围");
	}
	data[index] = value;
}
//数组整体元素的获得:
void DynamicArray::input() {
	for (int i = 0; i < capacity; i++) {
		data[i] = rand() % 100;
	}
}
//数组元素的整体输出:
void DynamicArray::output() {
	for (int i = 0; i < capacity; i++) {
		cout << "arr[" << i << "]=" << data[i] << endl;
	}
}
int main() {
	DynamicArray arr(10);
	arr.input();
	arr.output();
	int i;
	try {
		cout << "请输入你想访问的数组元素下标：" << endl;
		cin >> i;
		cout << arr.get(i) << endl;
	}
	catch (const out_of_range& e) {
		cerr << "捕获到异常：" << e.what() << endl;
	}
	return 0;
}



