// Prime.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main(){
	int prime[3] = {3,5,7};
	int list[10000] = {0};
	list[1] = 3;
	list[2] = 5;
	list[3] = 7;
	int i,j,k;
	int current = 7;
	int min;
	for(i=4;i<=20;i++){
		min = current*3;
		for(j=0;j<=2;j++){
			for(k=1;k<i;k++){
				int num = list[k]*prime[j];
				if (num<=current) continue;
				if (num<min) min = num;
			}
		}
		current = min;
		list[i] = current;
	}
	for(i = 1;i<20;i++)printf("%d ",list[i]);
	getchar();
	return 0;
}