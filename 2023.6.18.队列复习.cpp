#include<iostream>
#include<queue>

using namespace std;//ʹ����Ϊstd�������ռ䣬�󲿷ֵ�ͷ�ļ���ʹ��std�����ռ� 

int main()
{
	queue<int> stu, xin;//���ѧ�����Ա� 
	int n, m;//������������ 
	cin >> m;//�������� 
	for (int i = 1; i <= m; i++)//ѭ�������� 
	{
		int j;
		cin >> j;//�����Ա� 
		xin.push(j);//���Ա���� 
		stu.push(i);//��ѧ����� 
	}
	cin >> n;//��������� 
	int i = 1;//ѡ���� 
	while (!xin.empty() && !stu.empty())//���Ա���������Ϊ�գ� 
	{
		if (i % n == 0)//�����ǰ����Ϊ������ 
		{
			if (xin.front() == 0)//�����ǰѧ��Ϊ���� 
			{
				//���� 
				xin.pop();
				stu.pop();
				i = 0;//���±��� 
			}
			else if (xin.front() == 1)//�����ǰѧ��ΪŮ�� 
			{
				//���·ŵ���β 
				int tmp = stu.front();
				stu.pop();
				stu.push(tmp);
				//����һ�λ���(����Ϊ ������ ��) 
				xin.pop();
				xin.push(0);
				i = 0;//���±��� 
			}
		}
		if(stu.size() == 1)//���ֻʣһ��(������ѡ���е������) 
		{
			cout << stu.front() << endl;//�����ǰ�� 
			break;//����ѭ�� 
		}

		i++;//��һ���� 
	}

	system("pause");//.exe�ļ���������� ���밴���������... ������ 
	return 0;//���������� 
}
