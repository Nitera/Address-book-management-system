#include "Print.h"
#include "Datastruct.h"
#include "Function.h"

int main()
{
	int yourchoose = 0;

	Addressbooks abs;
	abs.m_Size = 0;
	
	while (true)
	{
		showMenu();

		cin >> yourchoose;

		switch (yourchoose)
		{
		case 0:
			exit(0);
			break;
		case 1:
			// �����ϵ�˺���
			Add(&abs);
			break;
		case 2:
			// ��ʾ��ϵ�˺���
			Show(&abs);
			break;
		case 3:
			// ɾ����ϵ�˺���
			Delete(&abs);
			break;
		case 4:
			// ������ϵ�˺���
			Find(&abs);
			break;
		case 5:
			// �޸���ϵ�˺���
			Change(&abs);
			break;
		case 6:
			// �����ϵ�˺���
			Clear(&abs);
			break;
		}

	}
		

	system("pause");

	return 0;
}