#include <iostream>
using namespace std;

int main()
{
	int menu;
	while (true)
	{
		cout << "========�޴�========" << endl;
		cout << "1. ����  2. ����  3. ����  4. ������ 5.����" << endl;
		cout << "������ �������ּ��� (�����Է�) : ";
		cin >> menu;

		if (menu == 5) {
			cout << "�����մϴ�.";
			exit(0);
		}

		int num1, num2;
		cout << "�� ���ڸ� �Է����ּ��� : ";
		cin >> num1 >> num2;

		switch (menu)
		{
		case 1:
			cout <<"���ϱ� �������� : "<< num1 + num2 <<" �Դϴ�."<< endl;
			break;
		case 2:
			cout << "�̱����Դϴ�" << endl;
			break;
		case 3:
			cout << "�̱����Դϴ�" << endl;
			break;
		case 4:
			cout << "�̱����Դϴ�" << endl;
			break;
		}
		cout << endl;
	}
	return 0;
}