﻿// task1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(int argc, char* argv[])
{


	int i = 0,max,c;
	int temp;
	short int a[1000];
	float prc = 0.9, interv, poz, ost, cel, perc,sr=0,med,mx,min;
	char* str = new char[20];
	ifstream file(argv[1]);
	while (!file.eof())
	{
		file >> a[i];
		max=i++;
	}
	file.close();
	
	for (int j = 0; j < i - 1; j++) {
		
		for (int k = 0; k < i - j - 1; k++) {
			if (a[k] > a[k + 1]) {
				// меняем элементы местами
				temp = a[k];
				a[k] = a[k + 1];
				a[k + 1] = temp;
			}
		}
		
	}
	


	for (int j = 0; j < i; j++) {
		//printf("%.2f\n", a[j]);
		sr += a[j];
		
	}

	interv = 1. /(i-1);
	poz = prc / interv;
	ost = modf(poz, &cel);
	int b = poz;
	perc = a[b] + (a[b + 1] - a[b]) * ost;
	min = a[0];
	mx = a[max];

	if (i%2==1)
	{
		c = (max / 2);
		med = a[c];
	}
	else
	{
		c = round (max / 2.);
		med = (a[c] + a[c - 1]) / 2.;
	}
	printf("%.2f\n", perc);
	printf("%.2f\n", med);
	printf("%.2f\n", mx);
	printf("%.2f\n", min);
	printf("%.2f\n", sr/i);
	
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
