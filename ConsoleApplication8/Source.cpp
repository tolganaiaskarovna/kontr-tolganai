#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <time.h>
using namespace std;


void main()
{
	setlocale(LC_ALL, "Rus");
	int nz = 0;
	cout << "введите номер задания";
	cin >> nz;
	if (nz == 1)
	{
		//1.Дана последовательность чисел а1, а2, …, аn
		// Выяснить, сколько чисел и какие входят в последовательность более чем по одному разу

		srand(time(NULL));
		int a[10], sum = 0, odinak,S[10] = { 0 };
		for (int i = 0; i < 10; i++) {
			a[i] = 1 + rand() % 20;

			cout << a[i] << endl;
		}
		cout << "______" << endl;
			
		
		for (int i = 9; i < 0; i++)
			{odinak = a[i];
				if (a[i] == a[i])
				{
					odinak = a[i];
					sum += 1;
									
				}
				cout << "\n summa чисел: " << sum << endl;
			}

	}

	
	else if (nz == 2){
		//2.Дана последовательность чисел а1, а2, …, аn.
	//Определить число элементов этой последовательности, не превышающих среднего арифметического положительных элементов
		srand(time(NULL));
	int a[10], summ = 0, summa = 0, sred = 0;
	for (int i = 0; i < 10; i++) {
		a[i] = 1 + rand() % 20;

		cout << a[i] << endl;
	}
	for (int i = 0; i < 10; i++) {
		summa += a[i];
	}
		sred = summa / 10;
		cout << " средняя -" <<sred  << endl;
		for (int i = 0; i < 10; i++) {
			if (a[i] < sred) {
				summ = summ + i;
			}
		}
	cout << "число элементов -" << summ << endl;
}

	

	else if (nz == 3) {
		//3.	Дан массив целых чисел {ai} (i=1, 2, …,n).
		//Написать программу, проверки упорядочены ли значения компонентов массива по убыванию.

		srand(time(NULL));
		int mas[12];
		int max; int temp;
		for (int i = 0; i < 12; i++)
		{

			mas[i] = 1 + rand() % 10;

			cout << mas[i] << endl;
		}
		cout << "______" << endl;
		for (int i = 0; i < 11; i++)
		{
			max = i;
			for (int j = i + 1; j < 12; j++)
			{
				if (mas[j] > mas[max])
					max = j;
			}
			temp = mas[i];
			mas[i] = mas[max];
			mas[max] = temp;
		}
		for (int i = 0; i < 12; i++)
			cout << mas[i] << endl;
	}
	else if (nz == 4) {
		//4.	Найдите произведение элементов массива с нечетными номерами

		srand(time(NULL));
		float Z[8];
		float summnechet = 0;

		
		for (int i = 0; i < 8; i++) {
			Z[i] = 1 + rand() % 10;
			cout << Z[i] << " - " << endl;
		}
		cout << "______" << endl;
		for (int i = 0; i < 8; i++)
		{
			if (i % 2!= 0)
				summnechet = summnechet + Z[i];

			cout << Z[i] << " - " << endl;

		}
		cout << "summnechet=" << summnechet << endl;
		
	}
	else if (nz == 5) {
		//5.	Найдите наибольший элемент массива
		srand(time(NULL));
		int c[10], max=0, temp,mas[10];
		float summnechet = 0;


		for (int i = 0; i < 10; i++) {
			c[i] = 1 + rand() % 20;
			cout << c[i] << " - " << endl;
		}
		cout << "______" << endl;
		for (int i = 0; i < 10; i++)
		{
			max = i;
			for (int j = i + 1; j < 9; j++)
			{
				if (mas[j] > mas[max])
					max = j;
			}
			temp = mas[i];
			mas[i] = mas[max];
			mas[max] = temp;
		}
		
			cout << max << endl;
	}

	system("pause");
}