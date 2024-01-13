#include<iostream>
#include<cstring>

using namespace std;

typedef struct Student
{
	string name;
	int chinese;
	int math;
	int total;
	int num;
	friend istream & operator>> (istream &in, Student &a)
	{
		in >> a.name >> a.chinese >> a.math;
		a.total = a.chinese + a.math;
		return in;
	}
	friend ostream & operator<< (ostream &out, Student &a)
	{
		out << a.name << " " << a.chinese << " " << a.math << " " << a.total;
		return out;
	}
} stu;

int main()
{
	stu a[101];
	int n;
	cin >> n;
	for(int i = 1; i <= n; i ++)
	{
		cin >> a[i];
		a[i].num = i;
	}
	for(int i = 1; i <= n; i ++)
	{
		for(int j = 1; j <= n - 1; j ++)
		{
			if(a[j].total < a[j + 1].total)
			{
				swap(a[j], a[j + 1]);
			}
			else if(a[j].num > a[j + 1].num)
			{
				swap(a[j], a[j + 1]);
			}
		}
	}
	for(int i = 1; i <= n; i ++)
	{
		cout << a[i] << endl;
	}
	
	return 0;
}
