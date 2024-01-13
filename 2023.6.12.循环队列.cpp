#include<iostream>

using namespace std;

int main()
{
	int n;//ѧ������
	int i, j;//ѭ������
	int math, english, grade;//��ѧ�ɼ���Ӣ��ɼ����ܷ�
	int result[500][2] = { 0 }, chinese[500] = { 0 };//�ּܷ�ѧ�ţ����ĳɼ�
	cin >> n;//����ѧ������
	for (i = 1; i <= n; i++)
	{
		cin >> chinese[i] >> math >> english;//�����������ģ���ѧ��Ӣ��ɼ�
		grade = chinese[i] + math + english;//�����ܷ�
		result[i][0] = i;//����ѧ��
		result[i][1] = grade;//�����ܷ�
	}
	//ð������
	for (i = 1; i <= n - 1; i++)
	{
		for (int j = 1; j <= n - i; j++)
		{
			if (result[j][1] < result[j + 1][1])//���ܷ���
			{
				//����
				swap(result[j][0], result[j + 1][0]);
				swap(result[j][1], result[j + 1][1]);
				swap(chinese[j], chinese[j + 1]);
			}
			else if (result[j][1] == result[j + 1][1] && chinese[j] < chinese[j + 1])//�����ĳɼ���
			{
				//����
				swap(result[j][0], result[j + 1][0]);
				swap(result[j][1], result[j + 1][1]);
				swap(chinese[j], chinese[j + 1]);
			}
			else if (result[j][1] == result[j + 1][1] && chinese[j] == chinese[j + 1] && result[j][0] > result[j + 1][0])//��ѧ����
			{
				//����
				swap(result[j][0], result[j + 1][0]);
				swap(result[j][1], result[j + 1][1]);
				swap(chinese[j], chinese[j + 1]);
			}
		}
	}
	//������
	for (i = 1; i <= 5; i++)
	{
		cout << result[i][0] << " " << result[i][1] << endl;
	}

	system("pause");
	return 0;
}