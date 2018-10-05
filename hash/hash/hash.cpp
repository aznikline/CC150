// hash.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include<stdio.h>
#include<malloc.h>
#include<cstring>
int main(){
	char *record = (char *)malloc(100);
	memset(record,0,sizeof(record));
	return 0;
}