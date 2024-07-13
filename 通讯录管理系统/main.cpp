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
			// 添加联系人函数
			Add(&abs);
			break;
		case 2:
			// 显示联系人函数
			Show(&abs);
			break;
		case 3:
			// 删除联系人函数
			Delete(&abs);
			break;
		case 4:
			// 查找联系人函数
			Find(&abs);
			break;
		case 5:
			// 修改联系人函数
			Change(&abs);
			break;
		case 6:
			// 清空联系人函数
			Clear(&abs);
			break;
		}

	}
		

	system("pause");

	return 0;
}