#include "stdafx.h"
#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_CTYPE, "Russian_Russia.1251");
	
	int k[20];
	int a[20];
	int key;
	k[0]=8;
	a[0]=0;

	for(int i=1; i<20; i++){
		k[i]=k[i-1]+8; // -ключ
	}
	for(int i=0; i<20; i++){
		a[i]=i+1; // -порядковый номер
	}
	for(int i=0; i<20; i++){
		cout<<"k["<<i<<"]="<<k[i]<<endl;
	}
	for(int i=0; i<20; i++){
		cout<<"a["<<i<<"]="<<a[i]<<endl;
	}

	cout<<"Введите ключ: ";
	cin>>key;
	cout<<endl;

	int left = 0;
	int right = 19;
	int search = -1;
	int mid=0;
	while (left <= right){
		mid=(left + right)/2;
		if (key == k[mid]){
			search = mid;
			break;
		}
		if (key < k[mid]){
			right = mid - 1;
		}else{
			left = mid + 1;
		}
	}
	if (search == -1){
		cout<<"Элемент не найден"<<endl;
	}else{
		cout<<"k["<<search<<"]="<<k[search]<<endl; // -ключ
		cout<<"a["<<search<<"]="<<a[search]<<endl; // -порядковый номер
	}
	

	system("pause");
}