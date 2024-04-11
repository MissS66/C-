//数组不是基本类型
//#include<iostream>
//using namespace std;
/*int main() {
	//赋值方法一，for循环
	int a[10];
	int i;
	for (i = 0; i < 10; i++)
		cin >> a[i];
	//二：一个一个赋值
	a[9] = 888;
	//不可以在下标放变量
	double x[100];
	//二维数组：
	int m[3][4];
}*/

//正序倒序输出
//for（auto&e：a）意义：如果在循环中修改a的值，那么e的值也会改变
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
//随机反向输出一组数字
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
	//等价于：
	for (i = 0; i < n; i++)
		cout << a[n - i - 1] << " ";
	cout << endl;
	return 0;
}*/
//元素物理上的的相邻与内存相邻
//数组名是一个常量，不能被复制

//初始化部分元素
#include<cstdlib>
/*int main() {
	char b[4]={ '$','#' };
	cout << b[3] << endl;//输出为\0，默认赋值\0
	double c[5]={ 1.00,2.88 };//0.0
	cout << c[2] << endl;
	int d[6]={ 1,2,3 };//0
	cout << d[5] << endl;
	return 0;
}*/

//产生数组元素：
/*#include<iostream>
using namespace std;
void myswap(int &a, int &b);
int main() {
	int a[110] = {};
	int n;
	cout << "请输入元素个数：n<100" << endl;
	cin >> n;
	//随机产生数组元素
	int i;
	for (i = 0; i < n; i++) {
		a[i] = rand() % 100;
		cout << a[i] << "\t";
	}
	cout << endl;
	//逆序存放
	for (i = 0; i < (n / 2); i++)
	{
		/*int t;
		t = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = t; */
		//函数法
		/*myswap(a[i], a[n - i - 1]);//调用交换函数，交换数组元素，实参是要交换的数组元素
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
//比大小
/*#include<iostream>
using namespace std;
int main() {
	srand((unsigned)time(NULL));
	int a[110] = {};
	int n, max, maxi = 0;
	cout << "请输入元素个数：n<100" << endl;
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
	cout << "最大:" << max << "是：" << maxi << "个" << endl;
	return 0;
}*/

//矩阵：
/*#include<iostream>
using namespace std;
int a[110][110];//静态区间，范围大
int main() {
	srand((unsigned)time(NULL));
	int n, m;
	int i, j;
	cout << "请输入行数和列数（<100）：" << endl;
	cin >> n >> m;
	//产生二维数组元素
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			a[i][j] = rand() % 100;
		}
	}
	//输出二维数组元素：
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			cout << a[i][j] << "\t";
		}
		cout << endl;//换行
	}
	//最大值及位置
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

//计算图像相似度：
/*#include<iostream>
using namespace std;
int main() {
	int a[10][10], b[10][10];
	srand((unsigned)time(NULL));
	int n, m;
	int i, j,s=0;
	cout << "请输入行数和列数（<100）：" << endl;
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
	cout << "相似度为：" << 100 * s / (m * n) << "%" << endl;
	return 0;
}*/

//矩阵交换行：
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
	cout << "请输入你想要交换的行数（1--5）" << endl;
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
//数组名作为函数参数：传递的是地址（整个数组）
//一维数组（求和）：
/*include<iostream>
using namespace std;
int sumall(int t[],int n) {//数组名作为形参时[]一定要加上
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
	//调用用函数求和
	cout << "一维数组元素和为：" << sumall(s, 100) << endl;
	return 0;
}*/

//二维数组的传参(求和)：
//#include<iostream>
//using namespace std;
//const int NUM = 10;
//void sumall(int t[][NUM], int n) {//函数形参：二维数组，二维不能省，行数
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
//	//产生二维数组元素
//	for (i = 0; i < NUM; i++) {
//		for (j = 0; j < NUM; j++)
//			s[i][j] = rand() % 10;
//		cout << s[i][j] << " ";
//	}
//	cout << endl;
//	//调用用函数求每一行的和，并将其接过置于行首
//	sumall(s, NUM);
//	cout << endl;
//	for (i = 0; i < NUM; i++) {
//		for (j = 0; j < NUM; j++) {
//			cout << s[i][j] << " ";
//		}
//		cout << endl;
//	}
//	
//	//cout << "一维数组元素和为：" << sumall(s, NUM) << endl;
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
		a[i] = rand() % (10 - (-10) + 1) - 10;//需要使用rand（） % （b - a + 1）+ a==[a,b]
		cout << a[i] << " ";
	}
	cout << endl;
	cout << mean(a, n);
	return 0;
}