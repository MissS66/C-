#include<iostream>
#include<string>
using namespace std;
//int main() {
//	const char* pst = "program";
//	int a[10] = { 0 };
//	cout << pst << endl;
//	cout << *pst << endl;
//	cout << a << endl;
//	return 0;
// program
//p
//00000064EBCFFB88
//}
// 
// ��������ַ�
//int main() {
//	char ch[100];
//	cin >> ch;		//asdf 123     ������ȡ��������ֻװ�����ո��\0֮ǰ���ַ�
//	cout << ch;		//asdf
//	return 0;
//}

//������getline()��������벻��ȫ�����������
//int main() {
//	string ch;
//	getline(cin, ch,'#');	//��ʽ��getline�����룬���ƣ����Ǹ��ַ�������
//	cout << ch;
//	return 0;
//}

//���Ĵ�
//��һ���������巨��
//bool palin(char* s) {
//	char* h, * r;
//	h = r = s;		//ȫ��ָ������ĸ
//	while (*++r);		//��r�ƶ���\0
//	r--;		//��r�Ƶ����һ���ַ�
//	while (h <= r) {
//		if (*h != *r)
//			return false;
//		h++;
//		r--;
//	}
//	return true;
//}
//int main() {
//	char str[100];
//	cout << "������һ���ַ��ж��Ƿ�Ϊ���ģ�" << endl;
//	cin >> str;
//	if (palin(str)) {
//		cout << "yes" << endl;
//	}
//	else
//		cout << "No" << endl;
//	return 0;
//}
//������string���׼��
//bool palin(string s) {
//	string s1(s);
//	reverse(s1.begin(), s1.end());
//	return s1 == s;
//}
//int main() {
//	string str;
//	cout << "������һ���ַ��ж��Ƿ�Ϊ���ģ�" << endl;
//	cin >> str;
//	if (palin(str)) {
//	cout << "yes" << endl;}
//	else
//		cout << "No" << endl;
//	return 0;
//}

////�����Ӵ���
//bool palin(string str) {	//��Ҫstring��
//	string s1(str);
//	reverse(s1.begin(), s1.end());
//	return s1 == str;
//}
//int main() {
//	string str;
//	int len;
//	cout << "�������ַ�����" << endl;
//	cin >> str;
//	len = str.length();
//	//�Ȱ��Ӵ����ȱ���
//	for (int sublen = 2; sublen <= len; ++sublen) {
//		//Ȼ�����ÿ�����ȣ����������ַ������һ����Ӵ�
//		for (int start = 0; start <= len - sublen; ++start) {
//			string substr = str.substr(start, sublen);
//			if (palin(substr))
//				cout << substr << endl;
//		}
//	}
//	return 0;
//}

//Mystring�����ϴοεĴ�����

//�����ࣺ
struct Data {
	int x, y;
	string ch;
	int color;
	Data():x(0),y(0),ch(""),color(0){}
	Data(int nx,int ny,string ns,int nc):x(nx),y(ny),ch(ns),color(nc){}
};
struct Node {
	Data data;
	Node* pnext;
	Node() :data(), pnext(nullptr) {}
	Node(const Data& nd, Node* pn) :data(nd), pnext() {}
};
class Mylist {
public:
	Mylist():head(nullptr),tail(nullptr),size(0){}
	//�ж������Ƿ�Ϊ�գ�������ĩβ��ӽڵ㣬���������������
	bool IsEmpty();//�ж��Ƿ�Ϊ��
	void Append(Node* pnode);//ĩβ��ӽڵ�
	void Trave(void(*fun)(Node*));//����
	void Clear();
private:
	Node* head;
	Node* tail;
	int size;
};
bool Mylist::IsEmpty() {
	if (size == 0)
		return true;
	else
		return false;//�ȼ���return size==0;
}
void Mylist::Append(Node* pnode) {
	if (size == 0) {
		head = tail = pnode;
	}
	else {
		tail->pnext = pnode;
		tail = pnode;
	}
	size++;
}