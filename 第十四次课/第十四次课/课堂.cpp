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
// 输入输出字符
//int main() {
//	char ch[100];
//	cin >> ch;		//asdf 123     对于提取符来讲，只装遇到空格或\0之前的字符
//	cout << ch;		//asdf
//	return 0;
//}

//可以用getline()来解决输入不能全部输出的问题
//int main() {
//	string ch;
//	getline(cin, ch,'#');	//格式：getline（输入，名称，到那个字符结束）
//	cout << ch;
//	return 0;
//}

//回文串
//法一：函数定义法：
//bool palin(char* s) {
//	char* h, * r;
//	h = r = s;		//全都指向首字母
//	while (*++r);		//将r移动到\0
//	r--;		//将r移到最后一个字符
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
//	cout << "请输入一串字符判断是否为回文：" << endl;
//	cin >> str;
//	if (palin(str)) {
//		cout << "yes" << endl;
//	}
//	else
//		cout << "No" << endl;
//	return 0;
//}
//法二：string类标准库
//bool palin(string s) {
//	string s1(s);
//	reverse(s1.begin(), s1.end());
//	return s1 == s;
//}
//int main() {
//	string str;
//	cout << "请输入一串字符判断是否为回文：" << endl;
//	cin >> str;
//	if (palin(str)) {
//	cout << "yes" << endl;}
//	else
//		cout << "No" << endl;
//	return 0;
//}

////回文子串：
//bool palin(string str) {	//需要string类
//	string s1(str);
//	reverse(s1.begin(), s1.end());
//	return s1 == str;
//}
//int main() {
//	string str;
//	int len;
//	cout << "请输入字符串：" << endl;
//	cin >> str;
//	len = str.length();
//	//先按子串长度遍历
//	for (int sublen = 2; sublen <= len; ++sublen) {
//		//然后对于每个长度，遍历整个字符串查找回文子串
//		for (int start = 0; start <= len - sublen; ++start) {
//			string substr = str.substr(start, sublen);
//			if (palin(substr))
//				cout << substr << endl;
//		}
//	}
//	return 0;
//}

//Mystring类在上次课的代码中

//链表类：
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
	//判断链表是否为空，在链表末尾添加节点，遍历链表及清空链表
	bool IsEmpty();//判断是否为空
	void Append(Node* pnode);//末尾添加节点
	void Trave(void(*fun)(Node*));//遍历
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
		return false;//等价于return size==0;
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