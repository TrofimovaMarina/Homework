#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int t1 = 0;
	int t2 = 0;
	int t3 = 0;

	cin >> n;

	setlocale(LC_ALL, "Russian");

	t1 = n / 100;
	t2 = (n % 100) / 10;
	t3 = n - t1 * 100 - t2 * 10;

	switch (t1)
	{
	case 9:
	{
		cout << "��������� ";
		break;
	}

	case 8:
	{
		cout << "��������� ";
		break;
	}

	case 7:
	{
		cout << "������� ";
		break;
	}
	case 6:
	{
		cout << "�������� ";
		break;
	}
	case 5:
	{
		cout << "������� ";
		break;
	}
	case 4:
	{
		cout << "��������� ";
		break;
	}
	case 3:
	{
		cout << "������ ";
		break;
	}
	case 2:
	{
		cout << "������ ";
		break;
	}
	case 1:
	{
		cout << "��� ";
		break;
	}
	}


	switch (t2)
	{
	case 9:
	{
		cout << "��������� ";
		break;
	}

	case 8:
	{
		cout << "����������� ";
		break;
	}

	case 7:
	{
		cout << "��������� ";
		break;
	}
	case 6:
	{
		cout << "���������� ";
		break;
	}
	case 5:
	{
		cout << "��������� ";
		break;
	}
	case 4:
	{
		cout << "����� ";
		break;
	}
	case 3:
	{
		cout << "�������� ";
		break;
	}
	case 2:
	{
		cout << "�������� ";
		break;
	}
	case 1:
	{
		if (t3 == 0)
		{
			cout << "������ ";
		}
		break;
	}
	}

	switch (t3)
	{
	case 9:
	{
		if (t2 == 1)
		{
			cout << "������������ ";
		}
		else
		{
			cout << "������ ";
		}
		cout << "�������";
		break;
	}

	case 8:
	{
		if (t2 == 1)
		{
			cout << "������������ ";
		}
		else
		{
			cout << "������ ";
		}
		cout << "�������";
		break;
	}

	case 7:
	{
		if (t2 == 1)
		{
			cout << "���������� ";
		}
		else
		{
			cout << "���� ";
		}
		cout << "�������";
		break;
	}
	case 6:
	{
		if (t2 == 1)
		{
			cout << "����������� ";
		}
		else
		{
			cout << "����� ";
		}
		cout << "�������";
		break;
	}
	case 5:
	{
		if (t2 == 1)
		{
			cout << "���������� ";
		}
		else
		{
			cout << "���� ";
		}
		cout << "�������";
		break;
	}
	case 4:
	{
		if (t2 == 1)
		{
			cout << "������������ �������";
		}
		else
		{
			cout << "������ ������";
		}
		break;
	}
	case 3:
	{
		if (t2 == 1)
		{
			cout << "���������� �������";
		}
		else
		{
			cout << "��� ������";
		}
		break;
	}
	case 2:
	{
		if (t2 == 1)
		{
			cout << "���������� �������";
		}
		else
		{
			cout << "��� ������";
		}
		break;
	}
	case 1:
	{
		if (t2 == 1)
		{
			cout << "����������� �������";
		}
		else
		{
			cout << "���� �����";
		}
		break;
	}
	case 0:
	{
		if (n == 0)
		{
			cout << "���� ";
		}
		cout << "�������";
		break;
	}
	}

	return EXIT_SUCCESS;
}