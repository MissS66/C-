#include<iostream>
#include<cstdlib>
#include<string.h>
using namespace std;
//static int step=0��static���ξֲ���������һ����̬�����޸ĵ��������ڣ�ֻ�ھֲ���Ч�������������ڴ����ֱ���������н����ű�����
// ��������Ե�ԭ��1.�βθ���һֱ���������β������߷���ֵ��ͬ
// 2.���غ�����һ���β���Ĭ�ϲ���ʱ��3.���غ����β���ͬλ�÷ֱ�����Ϊ��ֵ���ߴ�����
// //ʱ�������������
/*class Clock {         //ʱ����Ķ���
public:                //�ⲿ�ӿڣ����г�Ա����
	void setTime(int newH = 0, int newM = 0, int S = 0);
	void showTime();
private:              //˽�����ݳ�Ա
	int hour, minute, second;
};
//ʱ�����Ա�����ľ���ʵ��
void Clock::setTime(int newH, int newM, int newS) {//::˫ð�Ų���������Ϊ��������ͣ�������÷����£�
	hour = newH;                     //�����ⲿ������Ա�������������������÷�
	minute = newM;                //����ȫ�ֺ������оֲ���ȫ��������ͬ������ʱ�����ȵ��þֲ������������������ȫ�ֱ��������ã���
	second = newS;                  //������ľ�̬����
}
inline void Clock::showTime() {        //inline��������������ʽ����
	cout << hour << ":" << minute << ":" << second << ":" << endl;
}//������
int main() {
	Clock myClock;   //�������myClock
	cout << "First time set and output:" << endl;
	myClock.setTime();       //����ʱ��ΪĬ��ֵ
	myClock.showTime();       //��ʾʱ��
	cout << "Second time set and output:" << endl;
	myClock.setTime(8,30,30);//����ʱ��
	myClock.showTime();    //��ʾʱ��
	return 0;
}*/

//����ʾ�����й��캯���޸�
/*class Clock {
public:
	Clock(int newH, int newM, int S);  //���캯��
	//Clock() {};//�޲ι��캯��
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
//���캯����ʵ��
int main() {
	Clock c(0, 0, 0);//ϵͳ�Զ����ù��캯�������õ��Ƕ���õĹ��캯��
	//Clock c2;   //����Ĭ��
	c.setTime(8, 30, 32);
	c.showTime();
		ret`urn 0;
}*/

//����������
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
	cout << "��ʼ���ڣ�" << endl;
	getDate.setDate(23, 11, 7);
	getDate.showDate();
	return 0;
}*/

//�������
/*class Point {
public:
	void setXY(int nx, int ny);
	void show() {
		cout << "��ǰ����Ϊ��"<<X<<","<<Y << endl;
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

////����cgoods��
//class CGoods
//{
//public:
//	//��Ա���� _thiscall����Լ�� 
//	//ʵ�ַ�ʽ��2�У�һ�����ж��壻�������ⶨ��
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
//	//��������ʲô�����أ�
//	//��һ���ǰ����ݿ������Լ������һ������name�У��޸ĵ�Ҳ����ô�е�ֵ
//	//ֱ�ӷ���char*���൱��ֱ�Ӱ�˽���ڴ�ĵ�ַ���ݹ�ȥ�����ⲿ����ͨ���������޸���ֵ������ȫ��
//	int GetAmount();
//	float GetPrice();
//private://˽�г�Ա�����ܱ������ʣ�����Ҫ�ṩһϵ�๲�еĽӿ�
//	char _name[20];
//	int _amount;
//	float _price;
//};
//void CGoods::Register(const char* name, int amount, float price)
//{
//	strcpy(_name, name);
//	//����_nameָ�������еĳ�Ա������
//	//��ʵ���ǣ���Ա�����ǲ�ռ�ڴ�ģ�������thisָ��ָ��Ķ���ĳ�Ա������
//	_amount = amount;
//	_price = price;
//}
////��Ա����ʵ�������⣬�������������
////��Ա����������ʵ�ֺ�����ʵ�ֵ�����
////    1������ʵ���Զ����������������������������ʵ�ֺ���ͨ����һ������ջ֡���ٺͻ���
////    2��������ඨ����ͷ�ļ�a.h�У�b.cpp��c.cpp��������#include<a.h>��������ʵ�ֻ���ַ����ض����������ʵ�ֲ�����ִ���
//
//int main()
//{
//	CGoods good1;//vs��������ʾ����cl xx.cpp/dlreportSingleClassLayoutCGoods�鿴����ڴ沼��
//	CGoods good2;
//
//	good1.Register("mianbao", 10, 5.5);
//	good1.Show();
//
//	good2.Register("kele", 15, 4.5);
//	//������ô֪�����Ǹ�����
//	/*
//		good2.Register("kele",15,4.5);
//		00EA511D  push        ecx
//		00EA511E  movss       xmm0,dword ptr ds:[0EACD58h]
//		00EA5126  movss       dword ptr [esp],xmm0
//		00EA512B  push        0Fh
//		00EA512D  push        0EACC84h
//		00EA5132  lea         ecx,[good2]  ��ʵ��ʱ����Ҫ�Ѷ����ַ����ȥ
//		00EA5135  call        CGoods::Register (0EA12E4h)
//	*/
//	//��һ��ʵ�ο϶���һ���βν��ܣ�Ҳ����CGoods*const this����const��ָֹ����������
//	//Ҳ����˵��ʵ����ÿ����Ա���������һ���βΣ�CGoods*const this�������ն���ĵ�ַ��
//	//����void Register(CGoods*const this��char *name,int amount,float price);
//	//д����ʱ������Ҫ�Լ�дthisָ�룬Ĭ��thisָ����øó�Ա�����Ķ���
//	good2.Show();
//
//
//	return 0;
//}


//����CGoods�ࣺ
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

//4-8Dog�ࣺ
class Dog {
public:
	void xinxi(int age, double weight, double high);
	void Show() {
		cout << "�����ǣ�"<< a << "\n" << "�����ǣ�" << w  <<"\n""����ǣ�" << h << endl;
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