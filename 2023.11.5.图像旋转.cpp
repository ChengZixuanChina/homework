/*
[��Ŀ����]
����һ��n��m�еĺڰ�ͼ�񣬽���˳ʱ����ת90�Ⱥ������
*/

#include<iostream>

using namespace std;

int main()
{
	int n, m, a[114][114];
	cin >> n >> m;
	for(int i = 1; i <= n; i ++)
		for(int j = 1; j <= m; j ++)
			cin >> a[i][j];
	
	for(int i = 1; i <= n; i ++)
	{
		for(int j = m; j >0; j --)
			cout << a[j][i] << " ";
		cout << endl;
	}
	
	system("pause");
	return 0;
}
