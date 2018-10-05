// minus.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


#include<stdio.h>
int main(){
	double a;
	int b;
	a = 11.5;
	b = 8;
	//scanf("%d",&a,&b);
	printf("%04f",a+(~b)+1);
	//system('pause');
	getchar();
	return 0;
}
