//���鲻�ǻ�������
//#include<iostream>
//using namespace std;
/*int main() {
	//��ֵ����һ��forѭ��
	int a[10];
	int i;
	for (i = 0; i < 10; i++)
		cin >> a[i];
	//����һ��һ����ֵ
	a[9] = 888;
	//���������±�ű���
	double x[100];
	//��ά���飺
	int m[3][4];
}*/

//���������
//for��auto&e��a�����壺�����ѭ�����޸�a��ֵ����ôe��ֵҲ��ı�
/*int main() {
	int a[10], b[10];
	for (int i = 0; i < 10; i++) {
		a[i] = i * 2-1;
		b[10 - i - 1] = a[i];
	}
	for (const auto& e : a)
		cout << e << " ";
	cout << endl;
	for (int i = 0; i < 10; i++) 
		cout << b[i] << " ";
	cout << endl;
	return 0;
}*/
//����������һ������
#include<ctime>
/*int main() {
	srand((unsigned)time(NULL));
	int a[110], n, i;
	cin >> n;
	for (i = 0; i < n; i++) {
		a[i] = rand() % (10000 - 1) + 1;
		cout << a[i] << " ";
	}
	cout << endl;
	for (i = n - 1; i >= 0; i--)
		cout << a[i] << " ";
	cout << endl;
	//�ȼ��ڣ�
	for (i = 0; i < n; i++)
		cout << a[n - i - 1] << " ";
	cout << endl;
	return 0;
}*/
//Ԫ�������ϵĵ��������ڴ�����
//��������һ�����������ܱ�����

//��ʼ������Ԫ��
#include<cstdlib>
/*int main() {
	char b[4]={ '$','#' };
	cout << b[3] << endl;//���Ϊ\0��Ĭ�ϸ�ֵ\0
	double c[5]={ 1.00,2.88 };//0.0
	cout << c[2] << endl;
	int d[6]={ 1,2,3 };//0
	cout << d[5] << endl;
	return 0;
}*/

//��������Ԫ�أ�
/*#include<iostream>
using namespace std;
void myswap(int &a, int &b);
int main() {
	int a[110] = {};
	int n;
	cout << "������Ԫ�ظ�����n<100" << endl;
	cin >> n;
	//�����������Ԫ��
	int i;
	for (i = 0; i < n; i++) {
		a[i] = rand() % 100;
		cout << a[i] << "\t";
	}
	cout << endl;
	//������
	for (i = 0; i < (n / 2); i++)
	{
		/*int t;
		t = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = t; */
		//������
		/*myswap(a[i], a[n - i - 1]);//���ý�����������������Ԫ�أ�ʵ����Ҫ����������Ԫ��
	}

	for (i = 0; i < n; i++) {
		cout << a[i] << "\t ";
	}
    cout << endl;
	return 0;
}
void myswap(int& a, int& b)
{
	int t;
	t = a;
	a = b;
	b = t;
}*/
//�ȴ�С
/*#include<iostream>
using namespace std;
int main() {
	srand((unsigned)time(NULL));
	int a[110] = {};
	int n, max, maxi = 0;
	cout << "������Ԫ�ظ�����n<100" << endl;
	cin >> n;
	int i;
	for (i = 0; i < n; i++) {
		a[i] = rand() % 100;
		cout << a[i] << " ";
	}
	max = a[0];
	for (i = 1; i < n; i++) {
		if (max < a[i]) {
			max = a[i];
			maxi = i;
		}
	}
	cout << endl;
	cout << "���:" << max << "�ǣ�" << maxi << "��" << endl;
	return 0;
}*/

//����
/*#include<iostream>
using namespace std;
int a[110][110];//��̬���䣬��Χ��
int main() {
	srand((unsigned)time(NULL));
	int n, m;
	int i, j;
	cout << "������������������<100����" << endl;
	cin >> n >> m;
	//������ά����Ԫ��
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			a[i][j] = rand() % 100;
		}
	}
	//�����ά����Ԫ�أ�
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			cout << a[i][j] << "\t";
		}
		cout << endl;//����
	}
	//���ֵ��λ��
	int max=a[0][0], maxi = 0, maxj = 0;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (max < a[i][j]) {
				max = a[i][j];
				maxi = i; maxj = j;
			}
		}
	}
		cout << "MAX:" << max << "NUM" << maxi << "," << maxj << endl;
	return 0;
}*/

//����ͼ�����ƶȣ�
/*#include<iostream>
using namespace std;
int main() {
	int a[10][10], b[10][10];
	srand((unsigned)time(NULL));
	int n, m;
	int i, j,s=0;
	cout << "������������������<100����" << endl;
	cin >> n >> m;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			a[i][j] = rand() % 2;
			cout << a[i][j] << " ";
			}
		}
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			b[i][j] = rand() % 2;
			cout << b[i][j] << " ";

		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (a[i][j] == b[i][j]) {
				s++;
			}
		}
	}
	cout << "���ƶ�Ϊ��" << 100 * s / (m * n) << "%" << endl;
	return 0;
}*/

//���󽻻��У�
/*#include<iostream>
using namespace std;
void myswap(int &x, int &y) {
	int t;t = x; x = y; y = t;
}
int main() {
	int a[5][5];
	int m,n,i, j;
	for (i = 0; i <5; i++) {
		for (j = 0; j < 5; j++) {
			cin >> a[i][j];
		}
	}
	cout << "����������Ҫ������������1--5��" << endl;
	cin >> m >> n;
	for (i = 0; i <5; i++) {
		myswap(a[m-1][i], a[n-1][i]);
	}
	for (i =0; i <5; i++) {
		for (j =0; j <5; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}*/
//��������Ϊ�������������ݵ��ǵ�ַ���������飩
//һά���飨��ͣ���
/*include<iostream>
using namespace std;
int sumall(int t[],int n) {//��������Ϊ�β�ʱ[]һ��Ҫ����
	int i,sum=0;
	for (i = 0; i < n; i++) {
		sum += t[i];
	}
	return sum;
}
int main() {
	int i;
	int s[100] = { 0 };
	for (i = 0; i < 100; i++) {
		s[i] = rand()%10;
		cout << s[i] << " ";
	}
	cout << endl;
	//�����ú������
	cout << "һά����Ԫ�غ�Ϊ��" << sumall(s, 100) << endl;
	return 0;
}*/

//��ά����Ĵ���(���)��
//#include<iostream>
//using namespace std;
//const int NUM = 10;
//void sumall(int t[][NUM], int n) {//�����βΣ���ά���飬��ά����ʡ������
//	int i,j, sum = 0;
//	for (i = 0; i < n; i++) {
//		sum = 0;
//		for (j = 0; j < NUM; j++) {
//			sum += t[i][j];
//		}
//	    t[i][0] = sum;
//	}
//
//}
//int main() {
//	int i,j;
//	int s[10][NUM] = {0};
//	//������ά����Ԫ��
//	for (i = 0; i < NUM; i++) {
//		for (j = 0; j < NUM; j++)
//			s[i][j] = rand() % 10;
//		cout << s[i][j] << " ";
//	}
//	cout << endl;
//	//�����ú�����ÿһ�еĺͣ�������ӹ���������
//	sumall(s, NUM);
//	cout << endl;
//	for (i = 0; i < NUM; i++) {
//		for (j = 0; j < NUM; j++) {
//			cout << s[i][j] << " ";
//		}
//		cout << endl;
//	}
//	
//	//cout << "һά����Ԫ�غ�Ϊ��" << sumall(s, NUM) << endl;
//	return 0;
//}

#include<iostream>
#include<string>
#include<cmath>
#include<ctime>
using namespace std;
double mean(double a[], int n) {
	int i; double sum1 = 0;
	for (i = 0; i < n; i++) {
		sum1 += a[i];
	}
	return sum1 / n;
}
int main() {
	double a[10];
	int i,n=10;
	for (i = 0; i < n; i++) {
		a[i] = rand() % (10 - (-10) + 1) - 10;//��Ҫʹ��rand���� % ��b - a + 1��+ a==[a,b]
		cout << a[i] << " ";
	}
	cout << endl;
	cout << mean(a, n);
	return 0;
}