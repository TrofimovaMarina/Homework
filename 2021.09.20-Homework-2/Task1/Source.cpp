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
		cout << "дев€тьсот ";
		break;
	}

	case 8:
	{
		cout << "восемьсот ";
		break;
	}

	case 7:
	{
		cout << "семьсот ";
		break;
	}
	case 6:
	{
		cout << "шестьсот ";
		break;
	}
	case 5:
	{
		cout << "п€тьсот ";
		break;
	}
	case 4:
	{
		cout << "четыреста ";
		break;
	}
	case 3:
	{
		cout << "триста ";
		break;
	}
	case 2:
	{
		cout << "двести ";
		break;
	}
	case 1:
	{
		cout << "сто ";
		break;
	}
	}


	switch (t2)
	{
	case 9:
	{
		cout << "дев€носто ";
		break;
	}

	case 8:
	{
		cout << "восемьдес€т ";
		break;
	}

	case 7:
	{
		cout << "семьдес€т ";
		break;
	}
	case 6:
	{
		cout << "шестьдес€т ";
		break;
	}
	case 5:
	{
		cout << "п€тьдес€т ";
		break;
	}
	case 4:
	{
		cout << "сорок ";
		break;
	}
	case 3:
	{
		cout << "тридцать ";
		break;
	}
	case 2:
	{
		cout << "двадцать ";
		break;
	}
	case 1:
	{
		if (t3 == 0)
		{
			cout << "дес€ть ";
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
			cout << "дев€тнадцать ";
		}
		else
		{
			cout << "дев€ть ";
		}
		cout << "бананов";
		break;
	}

	case 8:
	{
		if (t2 == 1)
		{
			cout << "восемнадцать ";
		}
		else
		{
			cout << "восемь ";
		}
		cout << "бананов";
		break;
	}

	case 7:
	{
		if (t2 == 1)
		{
			cout << "семнадцать ";
		}
		else
		{
			cout << "семь ";
		}
		cout << "бананов";
		break;
	}
	case 6:
	{
		if (t2 == 1)
		{
			cout << "шестнадцать ";
		}
		else
		{
			cout << "шесть ";
		}
		cout << "бананов";
		break;
	}
	case 5:
	{
		if (t2 == 1)
		{
			cout << "п€тнадцать ";
		}
		else
		{
			cout << "п€ть ";
		}
		cout << "бананов";
		break;
	}
	case 4:
	{
		if (t2 == 1)
		{
			cout << "четырнадцать бананов";
		}
		else
		{
			cout << "четыре банана";
		}
		break;
	}
	case 3:
	{
		if (t2 == 1)
		{
			cout << "тринадцать бананов";
		}
		else
		{
			cout << "три банана";
		}
		break;
	}
	case 2:
	{
		if (t2 == 1)
		{
			cout << "двенадцать бананов";
		}
		else
		{
			cout << "два банана";
		}
		break;
	}
	case 1:
	{
		if (t2 == 1)
		{
			cout << "одиннадцать бананов";
		}
		else
		{
			cout << "один банан";
		}
		break;
	}
	case 0:
	{
		if (n == 0)
		{
			cout << "ноль ";
		}
		cout << "бананов";
		break;
	}
	}

	return EXIT_SUCCESS;
}