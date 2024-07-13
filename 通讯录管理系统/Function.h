#pragma once
#include "Datastruct.h"

// 添加联系人
void Add(Addressbooks* abs)
{
	string name;
	string telephone;
	string address;
	int age;
	int sex;		// 0->女, 1->男
	
	cout << "请输入姓名：" << endl;
	cin >> name;
	cout << "请输入电话：" << endl;
	cin >> telephone;
	cout << "请输入地址：" << endl;
	cin >> address;
	cout << "请输入年龄：" << endl;
	cin >> age;
	cout << "请输入性别：" << endl;
	cin >> sex;
	
	abs->personArray[abs->m_Size].name = name;
	abs->personArray[abs->m_Size].telephone = telephone;
	abs->personArray[abs->m_Size].address = address;
	abs->personArray[abs->m_Size].age = age;
	abs->personArray[abs->m_Size].sex = sex;
	abs->m_Size++;

	cout << "添加成功!" << endl;

	system("pause");
	system("cls");
}

// 显示所有联系人
void Show(Addressbooks* abs)
{
	int i = 0;

	if (abs->m_Size == 0)
	{
		cout << "暂无联系人!" << endl;
	}
	else
	{
		cout << "姓名\t\t性别（女：0，男：1）\t\t年龄\t\t电话\t\t地址" << endl;

		while (i < abs->m_Size)
		{
			cout << abs->personArray[i].name << "\t\t"
				<< abs->personArray[i].sex << "\t\t\t\t"
				<< abs->personArray[i].age << "\t\t"
				<< abs->personArray[i].telephone << "\t\t"
				<< abs->personArray[i].address << endl;
			i++;
		}
	}

	system("pause");
	system("cls");
}

// 删除联系人
void Delete(Addressbooks* abs)
{
	cout << "输入要删除联系人姓名:" << endl;
	string name_d;
	cin >> name_d;

	// 判断该联系人是否存在
	int flag = -1;
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->personArray[i].name == name_d)
		{
			flag = i;
			break;
		}
	}

	if (flag != -1)
	{
		for (int i = flag; i < abs->m_Size; i++)
		{
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;
		cout << " 删除成功!" << endl;
	}
	else 
	{
		cout << "不存在该联系人！" << endl;
	}

	system("puase");
	system("cls");
}

// 查找联系人
void Find(Addressbooks* abs)
{
	cout << "输入要查找联系人姓名:" << endl;
	string name_d;
	cin >> name_d;

	// 判断该联系人是否存在
	int flag = -1;
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->personArray[i].name == name_d)
		{
			flag = i;
			break;
		}
	}

	if (flag != -1)
	{
		cout << " 查找结果如下：" << endl;
		cout << "姓名\t\t性别（女：0，男：1）\t\t年龄\t\t电话\t\t地址" << endl;
		cout << abs->personArray[flag].name << "\t\t"
			<< abs->personArray[flag].sex << "\t\t\t\t"
			<< abs->personArray[flag].age << "\t\t"
			<< abs->personArray[flag].telephone << "\t\t"
			<< abs->personArray[flag].address << endl;
	}
	else
	{
		cout << "不存在该联系人！" << endl;
	}

	system("puase");
	system("cls");
}

// 修改联系人信息
void Change(Addressbooks* abs)
{
	cout << "输入要修改联系人姓名:" << endl;
	string name_d;
	cin >> name_d;

	// 判断该联系人是否存在
	int flag = -1;
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->personArray[i].name == name_d)
		{
			flag = i;
			break;
		}
	}

	if (flag != -1)
	{
		string name;
		string telephone;
		string address;
		int age;
		int sex;		// 0->女, 1->男

		cout << "请输入更改后姓名：" << endl;
		cin >> name;
		cout << "请输入更改后电话：" << endl;
		cin >> telephone;
		cout << "请输入更改后地址：" << endl;
		cin >> address;
		cout << "请输入更改后年龄：" << endl;
		cin >> age;
		cout << "请输入更改后性别：" << endl;
		cin >> sex;

		abs->personArray[flag].name = name;
		abs->personArray[flag].telephone = telephone;
		abs->personArray[flag].address = address;
		abs->personArray[flag].age = age;
		abs->personArray[flag].sex = sex;

		cout << "修改成功！" << endl;
	}
	else
	{
		cout << "不存在该联系人！" << endl;
	}
	
	system("puase");
	system("cls");
}

// 清空联系人
void Clear(Addressbooks* abs)
{
	abs->m_Size = 0;
	cout << "已清空！" << endl;
	system("puase");
	system("cls");
}