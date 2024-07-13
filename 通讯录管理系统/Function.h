#pragma once
#include "Datastruct.h"

// �����ϵ��
void Add(Addressbooks* abs)
{
	string name;
	string telephone;
	string address;
	int age;
	int sex;		// 0->Ů, 1->��
	
	cout << "������������" << endl;
	cin >> name;
	cout << "������绰��" << endl;
	cin >> telephone;
	cout << "�������ַ��" << endl;
	cin >> address;
	cout << "���������䣺" << endl;
	cin >> age;
	cout << "�������Ա�" << endl;
	cin >> sex;
	
	abs->personArray[abs->m_Size].name = name;
	abs->personArray[abs->m_Size].telephone = telephone;
	abs->personArray[abs->m_Size].address = address;
	abs->personArray[abs->m_Size].age = age;
	abs->personArray[abs->m_Size].sex = sex;
	abs->m_Size++;

	cout << "��ӳɹ�!" << endl;

	system("pause");
	system("cls");
}

// ��ʾ������ϵ��
void Show(Addressbooks* abs)
{
	int i = 0;

	if (abs->m_Size == 0)
	{
		cout << "������ϵ��!" << endl;
	}
	else
	{
		cout << "����\t\t�Ա�Ů��0���У�1��\t\t����\t\t�绰\t\t��ַ" << endl;

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

// ɾ����ϵ��
void Delete(Addressbooks* abs)
{
	cout << "����Ҫɾ����ϵ������:" << endl;
	string name_d;
	cin >> name_d;

	// �жϸ���ϵ���Ƿ����
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
		cout << " ɾ���ɹ�!" << endl;
	}
	else 
	{
		cout << "�����ڸ���ϵ�ˣ�" << endl;
	}

	system("puase");
	system("cls");
}

// ������ϵ��
void Find(Addressbooks* abs)
{
	cout << "����Ҫ������ϵ������:" << endl;
	string name_d;
	cin >> name_d;

	// �жϸ���ϵ���Ƿ����
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
		cout << " ���ҽ�����£�" << endl;
		cout << "����\t\t�Ա�Ů��0���У�1��\t\t����\t\t�绰\t\t��ַ" << endl;
		cout << abs->personArray[flag].name << "\t\t"
			<< abs->personArray[flag].sex << "\t\t\t\t"
			<< abs->personArray[flag].age << "\t\t"
			<< abs->personArray[flag].telephone << "\t\t"
			<< abs->personArray[flag].address << endl;
	}
	else
	{
		cout << "�����ڸ���ϵ�ˣ�" << endl;
	}

	system("puase");
	system("cls");
}

// �޸���ϵ����Ϣ
void Change(Addressbooks* abs)
{
	cout << "����Ҫ�޸���ϵ������:" << endl;
	string name_d;
	cin >> name_d;

	// �жϸ���ϵ���Ƿ����
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
		int sex;		// 0->Ů, 1->��

		cout << "��������ĺ�������" << endl;
		cin >> name;
		cout << "��������ĺ�绰��" << endl;
		cin >> telephone;
		cout << "��������ĺ��ַ��" << endl;
		cin >> address;
		cout << "��������ĺ����䣺" << endl;
		cin >> age;
		cout << "��������ĺ��Ա�" << endl;
		cin >> sex;

		abs->personArray[flag].name = name;
		abs->personArray[flag].telephone = telephone;
		abs->personArray[flag].address = address;
		abs->personArray[flag].age = age;
		abs->personArray[flag].sex = sex;

		cout << "�޸ĳɹ���" << endl;
	}
	else
	{
		cout << "�����ڸ���ϵ�ˣ�" << endl;
	}
	
	system("puase");
	system("cls");
}

// �����ϵ��
void Clear(Addressbooks* abs)
{
	abs->m_Size = 0;
	cout << "����գ�" << endl;
	system("puase");
	system("cls");
}