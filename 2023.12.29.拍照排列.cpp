/*
合影效果:
小云和朋友们去爬香山，为美丽的景色所陶醉，想合影留念。
如果他们站成一排，男生全部在左(从拍照者的角度)，并按照从矮到高的顺序从左到右排，女生全部在右，并按照从高到矮的顺序从左到右排，
请问他们合影的效果是什么样的(所有人的身高都不同)?
6
male 1.72
male 1.78
female 1.61
male 1.65
female 1.70
female 1.56
*/
//又:新年快乐！
#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

struct P
{
	string sex;
	double high;
	bool operator< (const P &another) const
	{
		if(sex != another.sex)
		{
			return another.sex == "male" ? false : true; // 男的在左，女的在右 
		}
		if(sex == "male")
		{
			return another.high > high; // 男生按从矮到高的顺序从左到右排 
		}
		else //这里就是女生 
		{
			return another.high < high; // 女生按从高到矮的顺序从左到右排 
		}
	}
	friend istream & operator>>(istream &in, P &A) // 这里偷懒，下面cin不用输入一长串 
	{
    	in >> A.sex >> A.high;
    	return in;
	}
};

int main()
{
	P a[101];
	int n;
	cin >> n;
	for(int i = 1; i <= n; i ++)
	{
		cin >> a[i];
	}
	for(int i = 1; i <= n; i ++)
	{
		for(int j = 1; j <= n - 1; j ++)
		{
			if(a[j + 1] < a[j])
			{
				swap(a[j + 1], a[j]);
			}
		}
	}
	for(int i = 1; i <= n; i ++)
	{
		printf("%.2lf ", a[i].high);
	}
	cout << endl;
	
	system("pause");
	return 0;
}
