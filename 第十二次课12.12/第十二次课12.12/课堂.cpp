#include<iostream>
#include<string>
#include<stdexcept>
using namespace std;
//ָ������
//int main() {
//	int line1[3] = { 1,2,3 };
//	int line2[3] = { 0,1,0 };
//	int line3[3] = { 0,0,1 };
//	int* pline[3] = { line1,line2,line3 };
//	cout << *(pline[0]+ 1) << endl;//���line1�ĵڶ���Ԫ�صȼ���pline[0][1]
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

//��ά����
//int main() {
//	int a[3][3] = { {1,2,3},{2,3,4},{6,7,8} };
//	cout << a + 1 << endl;//��ά��������ĵ�ַ+ƫ�ƣ���
//	cout << *(a + 1) << endl;//�����ã���ȡ�е�ַ������Ԫ�ص�ַ
//	cout << &a[1][0] << endl;//����Ԫ�ص�ַ
//	//�������ȼ�a[1][0]
//	cout << *(*(a + 1) + 1) << endl;//*�����ó���Ϊ3
//	return 0;
//}
//ָ�������ָ��
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
//	int(*p)[3];//һ��ָ�룬ָ��һ����������Ԫ�صġ��С�
//	//()����ʡ,*p[3]����һ��ָ������
//	/*p = a; 
//	p = a + 1;//�е�ַ��p=*(a+i)+j,��i+1�е�j+1��Ԫ�ص�ַ
//	cout << p << endl;
//	p = a + 2;
//	cout << p << endl; */
//	print2Darr(a, 3, 3);
//	return 0;
//}

//ָ�뽻��
//void myswap(int x, int y) {
//	int t;
//	t = x;
//	x = y;
//	y = t;
//}
//void newswap(int *x, int *y) {//ָ����Ϊ�������β�
//	int t;
//	t = *x;
//	*x = *y;
//	*y = t;
//}
//int main() {
//	int a = 10; int b = 100;
//	myswap(a, b);//���ú���
//	cout << a << endl;
//	cout << b << endl;
//	newswap(&a,& b);
//	cout << a << endl;
//	cout << b << endl;
//	return 0;
//}

//һ����������������С�����ַֿ�
//void splitFloat(float x, int *n, float *y) {//�����ǺŶ�n��y�Ĳ����������ں�������
//	*n = static_cast<int>(x);
//	*y = x - *n;
//	cout << x << "�����������ǣ�" << *n << endl;
//	cout << x << "��С�������ǣ�" << *y << endl;
//}
//int main() {
//	float x,y; int n;
//	cout << "������һ����������";
//	cin >> x;
//	splitFloat(x, &n, &y);
//	return 0;
//}

//void splitFloat(float x, int n, float y) {
//	n = static_cast<int>(x);
//	y = x - n;
//	cout << x << "�����������ǣ�" << n << endl;
//	cout << x << "��С�������ǣ�" << y << endl;
//}
//int main() {
//	float x, y; int n;
//	cout << "������һ����������";
//	cin >> x;
//	splitFloat(x, n, y);
//	return 0;
//}
//ָ����Ϊ�����ķ�������
//���Ƽ�����
//int* fun() {
//	int x = 3;//��Ҫ���Ǿ�̬�ֲ���ַ��Ϊ����ֵ
//	return &x;
//}
//	int main() {
//		int* p;
//		p = fun();
//		cout << *p << endl;
//		return 0;
//	}
//new int�����Ƚϰ�ȫ��
//int* f() {
//	int* x;
//	x = new int;
//	return x;
//}
//int main() {
//	int* p;
//	p = f();
//	cout << *p << endl;
//	delete p;//��Ҫ��delete�ͷ���ָ��Ŀռ�
//	return 0;
//}
//new���÷�
//1.�����ڴ棬��̬�����ڴ�
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
//	int* pi = new int(1000);//����һ�����Ϳռ䣬���ҳ�ʼ��Ϊ1000����
//	int* pi2 = new int;//����һ�����Ϳռ䣬����ʼ��
//	*pi2 = 100;
//	int *pins = new int[100];
//	string* ps = new string("cold");
//	Point * pp = new Point[2];
//	cout << pp[0].getx() << endl;
//	cout << pp->getx() << endl;
//	delete pi;//�ͷſռ�
//	delete pi2;
//	delete[] pins;
//	delete ps;
//	delete pp;//�����ͷ��ڴ棬��������ö�����������
//}

//��̬����
//int* createArray(int size) {
//	int* p = new int[size] {0};
//	return p;
//}
//int main() {
//	int* parr;
//	int n;//����Ԫ�ظ���
//	n = 90;
//	parr = createArray(n);//���ú�����������
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
//	int(*psum)(int, int);//����ָ�������
//	psum = sum;
//	cout << sum(10, 10) << endl;
//	cout << psum(10, 10) << endl;
//	int(*p2)(int, int) = sum;//��ʼ��
//	int(*p3)(int, int) { sum };//��ʼ��
//	double(*p4)(double, double) { sum2 };
//	return 0;
//}

//�����ص�
//void attackS() {
//	cout << "\n��������" << endl;
//	cout << "biubiu..." << endl;
//}
//void defenseS() {
//	cout << "\n��������" << endl;
//	cout << "dundun..." << endl;
//}
//void escapeS() {
//	cout << "\n���ܲ���" << endl;
//	cout << "runrun..." << endl;
//}
//void playGame(void(*gameFun)()) {//�β���һ��ָ������ָ��
//	cout << "GameBegin!" << endl;
//	gameFun();//���ݴ��ݽ����ĺ������е���
//}
//int main() {
//	void(*gameS)() = nullptr;
//	int select;
//	while (1) {
//		cout << "\n1������2���ܣ�3������" << endl;
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
//		playGame(gameS);//����
//	}
//}

//thisָ��
//class Clock {
//public:
//	void setTime(int nh, int nm, int ns) {
//		this->hour = nh;//���this->д��д�����ԣ���Ϊ����������
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
//�򵥶�̬������
class DynamicArray {
public:
	DynamicArray(int size):capacity(size),data(new int [size]){}
	~DynamicArray() { delete[] data; }//�����������͵�������ɾ��ʱ��Ҫ��[]
	int get(int index)const;//��ȡԪ��
	void set(int index, int value);//����Ԫ��
	int size()const { return capacity; }//��ȡ��������
	void input();//��������Ԫ�صĻ��
	void output();//����Ԫ�ص��������
private:
	int *data;//ָ��̬���������
	int capacity;//�����������������Ԫ�صĸ���
};
//��ȡԪ�أ�
int DynamicArray::get(int index)const {
	if (index < 0 || index >= capacity) {
		//cout << "����������Χ" << endl;
		throw out_of_range("����������Χ");
	}
	return data[index];
}
//����Ԫ��:
void DynamicArray::set(int index, int value) {
	if (index < 0 || index >= capacity) {
		//cout << "����������Χ" << endl;
		throw out_of_range("����������Χ");
	}
	data[index] = value;
}
//��������Ԫ�صĻ��:
void DynamicArray::input() {
	for (int i = 0; i < capacity; i++) {
		data[i] = rand() % 100;
	}
}
//����Ԫ�ص��������:
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
		cout << "������������ʵ�����Ԫ���±꣺" << endl;
		cin >> i;
		cout << arr.get(i) << endl;
	}
	catch (const out_of_range& e) {
		cerr << "�����쳣��" << e.what() << endl;
	}
	return 0;
}



