/*
[��Ŀ����]
nxm����󲿷�Ԫ����0�ľ����Ϊϡ�����
������k����0Ԫ�أ���ɰ�ϡ�������Kx3������֮��
���е�һ�����кţ��ڶ������кţ��������Ǹ��С������µķ�0Ԫ�ص�ֵ��
*/

#include<iostream>

using namespace std;

int main()
{
	int n, m, a[114][114], b[114][4], count = 0;
	cin >> n >> m;
	
	for(int i = 1; i <= n; i ++)
		for(int j = 1; j <= m; j ++)
		{
			cin >> a[i][j];
			if(a[i][j] != 0)
			{
				++ count;
				b[count][1] = i;
				b[count][2] = j;
				b[count][3] = a[i][j];
			}
		}
		
	for(int i = 1; i <= count; i ++)
			cout << b[i][1] << " " << b[i][2] << " " << b[i][3] << endl;
	
	system("pause");
	return 0;
}
