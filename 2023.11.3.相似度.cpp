/*
����������ͬ��С�ĺڰ�ͼ��(��0-1����)��ʾ�������ǵ����ƶȡ� 
˵��:������ͼ������ͬλ���ϵ����ص���ɫ��ͬ����������ڸ�λ�þ�����ͬ�����ص㡣
����ͼ������ƶȶ���Ϊ��ͬ���ص���ռ�����ص����İٷֱȡ�
[��������]
3 3
1 0 1
0 0 1
1 1 0
1 1 0
0 0 1
0 0 1
[�������]
44.44%
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, m, deg = 0;
	cin >> n >> m;
	int sum = n * m; 
	int a[114][114], b[114][114];
	for(int i = 1; i <= n; i ++)
		for(int j = 1; j <= m; j ++)
			cin >> a[i][j];
	for(int i = 1; i <= n; i ++)
		for(int j = 1; j <= m; j ++)
			cin >> b[i][j];
			
	for(int i = 1; i <= n; i ++)
	{
		for(int j = 1; j <= m; j ++)
		{
			if(a[i][j] == b[i][j]) deg += 1;
		}
	}
	printf("%.2f%%\n", (deg * 1.0 / sum * 1.0 * 100));
	
	system("pause");
	return 0;
}
