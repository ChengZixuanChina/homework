/*
输入半径r，输出圆的直径、周长、面积，
数与数之间以一个空格分开，每个数保留小数点后 4 位。
*/

#include<bits/stdc++.h>

using namespace std;

const float PI = 3.14159;

int main()
{
	float r, d, c, s;
	cin >> r;
	d = 2 * r;
	c = 2 * PI * r;
	s = PI * r * r;
	printf("d = %.4f C ≈ %.4f S ≈ %.4f\n", d, c, s);
	
	system("pause");
	return 0;
} 
