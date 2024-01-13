/*
某幼儿园里，有 5 个小朋友编号为 1、2、3、4、5，
他们按自己的编号顺序围坐在一张圆桌旁。
他们身上都有若千个糖果(键盘输入)现在他们做一个分糖果游戏。
从 1 号小朋友开始，将自己的糖果均分三份 (如果有多余的糖果，则立即吃掉)，
自己留一份，其余两份分给他的相邻的两个小朋友。接着 2 号、3 号、4号、5 号小朋友同样这么做。
问一轮后，每个小朋友手上分别有多少糖果。
*/

#include<bits/stdc++.h>

using namespace std;

int a[6]; 

void jiao(int l, int m, int r);

int main()
{
	for(int i = 1; i <= 5; i ++)
		cin >> a[i];
		
	jiao(5, 1, 2);
	jiao(1, 2, 3);
	jiao(2, 3, 4);
	jiao(3, 4, 5);
	jiao(4, 5, 1);
	for(int i = 1; i <= 5; i ++)
		cout << a[i] << " ";
	cout << endl;
	
	system("pause");
	return 0;
}

void jiao(int l, int m, int r)
{
	a[m] /= 3;
	a[l] += a[m];
	a[r] += a[m];
}
