#include<iostream>
#include "stdafx.h"
using namespace std;
	int main() {
        int flag=0;
        long y=0;
        int a[100]={0};
        int i=0;
        int j=0;
	    int x=121;
        if(x<0){
            flag=1;
            x=x*(-1);
        }
        while(x>0){
            a[i++]=x%10;
            x/=10;
        }
        while(a[j]==0){
            j=j+1;
        }
        for(j;j<i;j++){
            y=y*10+a[j];
        }
        if(flag)
            y=y*(-1);
		printf("%d",y);
		getchar();
        return 0;
    }