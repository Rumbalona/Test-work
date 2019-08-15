// task 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <stdio.h>
#include <math.h>
#include<string>
#include<Windows.h>

using namespace std;

int main(int argc, char* argv[])
{


	int i , m , n , l , h , inter = 1;
	float a[16], b[16], c[16], d[16], e[16], sum[16],max;
	
	SetCurrentDirectory(argv[1]);

	i = m = n = l = h = 0;
	ifstream file("Cash1.txt");
	while (!file.eof())
	{
		file >> a[i];
		i++;
	}
	file.close();

	ifstream fin("Cash2.txt");
	while (!fin.eof())
	{
		fin >> b[m];
		m++;
	}
	fin.close();

	ifstream fil("Cash3.txt");
	while (!fil.eof())
	{
		fil >> c[n];
		n++;
	}
	fil.close();

	ifstream fi("Cash4.txt");
	while (!fi.eof())
	{
		fi >> d[l];
		l++;
	}
	fi.close();

	ifstream f("Cash5.txt");
	while (!f.eof())
	{
		f >> e[h];
		h++;
	}
	f.close();

	for (int j = 0; j < 16; j++)
	{
		sum[j] = a[j] + b[j] + c[j] + d[j] + e[j];

	}

	max = sum[0];
	for (int k = 1; k < 16; k++) {
		if (sum[k] > max) {
			max = sum[k];
			inter = k + 1;
		}
	}

	cout << inter << endl;
	
	return 0;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
