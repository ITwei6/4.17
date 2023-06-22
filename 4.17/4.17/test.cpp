#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

//namespace wei
//{
//	int a = 10;//可以定义变量
//	
//	int Add(int x, int y)//可以定义函数
//	{
//		return x + y;
//	}
//
//	struct Node//可以定义类
//	{
//		int data;
//		struct Node* next;
//	};
//}
//
//using namespace wei;
int main()
{
	//printf("%d\n", wei::a);//加命名空间名称与域作用限定符
	//printf("%d\n", Add(2, 5));
	//struct Node n;
	cout << "hello world" << endl;
	int a;
	double b;
	char c;
	cin >> a;
	cin >> b >> c;
	cout<<"\n" << a << endl;
	cout << b << "  " << c << endl;
	return 0;
}









//namespace tao1
//{
//	int a = 10;
//	int b = 20;
//	namespace tao2
//	{
//		int a = 1;
//		int b = 2;
//		namespace tao3
//		{
//			int a = 3;
//			int b = 4;
//		}
//	}
//}