// bit.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<cstring>
#include<iostream>
using namespace std;
#include<stdio.h>
int main(){
	char s[100];
	double x = 999.999;
	itoa(x,s,2);
	printf("%X",x);
	getchar();
	return 0;
}

//#include<iostream>
//using namespace std;
//#include<stdio.h>
//int main( )
//{
//char s[60];
//int a=1234; //10 ��������
//itoa(a,s,2); 
//// printf("%d -- %s\n",a,s); // c ����
//cout << a << " -- " << s <<endl; //c++ ����
//getchar();
//return 0;
//}