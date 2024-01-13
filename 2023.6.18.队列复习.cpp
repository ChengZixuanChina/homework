#include<iostream>
#include<queue>

using namespace std;//使用名为std的命名空间，大部分的头文件都使用std命名空间 

int main()
{
	queue<int> stu, xin;//存放学号与性别。 
	int n, m;//出局数和人数 
	cin >> m;//输入人数 
	for (int i = 1; i <= m; i++)//循环人数次 
	{
		int j;
		cin >> j;//输入性别 
		xin.push(j);//将性别入队 
		stu.push(i);//将学号入队 
	}
	cin >> n;//输入出局数 
	int i = 1;//选择编号 
	while (!xin.empty() && !stu.empty())//当性别与人数不为空： 
	{
		if (i % n == 0)//如果当前数字为出局数 
		{
			if (xin.front() == 0)//如果当前学生为男生 
			{
				//出局 
				xin.pop();
				stu.pop();
				i = 0;//重新报数 
			}
			else if (xin.front() == 1)//如果当前学生为女生 
			{
				//重新放到队尾 
				int tmp = stu.front();
				stu.pop();
				stu.push(tmp);
				//消耗一次机会(即变为 “男生 ”) 
				xin.pop();
				xin.push(0);
				i = 0;//重新报数 
			}
		}
		if(stu.size() == 1)//如果只剩一人(即已挑选出切蛋糕的人) 
		{
			cout << stu.front() << endl;//输出当前人 
			break;//结束循环 
		}

		i++;//下一个数 
	}

	system("pause");//.exe文件结束后出现 “请按任意键继续... ”字样 
	return 0;//主函数结束 
}
