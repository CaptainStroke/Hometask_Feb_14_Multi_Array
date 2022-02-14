﻿//1. Дан двумерный массив размерностью M х N, заполненный случайными числами из диапазона от 0 до 20. 
//Определить сумму элементов массива, среднее арифметическое, минимальный и максимальный элемент.

#include <iostream>
#include <algorithm>
#include <ctime>
using namespace std;
int main()
{
	srand(time(NULL));
	const int M = 15;
	const int N = 8;
	int box[M][N];
	int max = 0;
	int min = 0;
	int sum = 0;
	float med;
	for (int y = 0; y < M; y++)
	{
		for (int x = 0; x < N; x++)
		{
			box[y][x] = rand() % 21;
			cout << box[y][x] << "\t";
			sum += box[y][x];
			if (box[y][x] > max && box[0][0]) max = box[y][x], min = box[y][x];
			else if (box[y][x] > max) max = box[y][x];
			else if (box[y][x] < min) min = box[y][x];
		}
		cout << endl;
	}
	med = float(sum) / M * N;
	cout << "Total sum = " << sum << endl;
	cout << "Medium ariphmetic = " << med << endl;
	cout << "MAX = " << max << endl;
	cout << "MIN = " << min << endl;
}


//2. Дан двумерный массив размерностью M х M, заполненный случайными числами из диапазона от 0 до 20. Определить сумму элементов, расположенных на главной диагонали, а также сумму элементов, расположенных на побочной диагонали.
//3. Дан двумерный массив размерностью M х N, заполненный случайными числами из диапазона от - 10 до 10. Определить количество положительных, отрицательных и нулевых элементов.
//4. Дан двумерный массив размерностью M х N, заполненный случайными числами из диапазона от 0 до 20. Определить сумму по каждой строке и по каждому столбцу массива.
//5. Заполнить массив M x N двузначными числами так, чтобы первая цифра указывала  номер строки, а вторая – номер столбца.
//6. В двумерном массиве размерности M x N поменять местами чётные строки с нечётными.
//7. Дан двумерный массив размерностью M x N, заполненный случайными числами из диапазона от - 100 до 100. Определить сумму элементов массива, расположенных между минимальным и максимальным элементами.
//8. Заполнить квадратную матрицу размером M x N по спирали.Число 1 ставится в центр матрицы, а затем массив заполняется по спирали против часовой стрелки значениями по возрастанию.
//9. То же самое, только число 1 ставится в угловой(например, верхний левый) элемент, и спираль закручивается к центру матрицы.
//10. Заполнить массив M x N следующим образом :
//
//11. Заполнить массив M x N следующим образом :
//
//12. Заполнить массив M x N следующим образом :
//
//13. Заполнить трёхмерный массив N x N x N нулями.В получившийся куб вписать шар, состоящий из единиц.После чего, разрезать куб на N слоёв, и показать каждый слой в виде двумерного массива N x N на экране консоли.
//14. Реализовать преобразование двумерного массива в одномерный, и наоборот.
//15. Создать массив размерностью M x N, заполненный случайными числами.Вывести на экран  строку, для которой среднее арифметическое элементов максимально отличается от среднего арифметического значения для всех элементов массива.
//16. В кинотеатре M рядов по N мест в каждом.В двумерном массиве хранится информация о проданных билетах.Число 1 означает, что билет на данное место уже продан, число 0 означает, что место свободно.Поступил запрос на продажу K билетов на соседние места в одном ряду.Определите, можно ли выполнить такой запрос.Число занятых мест, и какие места заняты на момент запроса, определяется случайным образом.Вывести исходный массив на экран консоли.
//17. * Клиент банка хочет снять со своего счёта N гривен при помощи банкомата.Внутри банкомата есть от 4 до 6 кассет с купюрами(определяется случайным образом).В кассету помещается от 2 до 3 тысяч купюр(количество купюр определяется случайным образом для каждой кассеты).Каждая кассета настроена на определённый номинал(номиналы задаются отдельным массивом на K элементов, например – 1, 2, 5, 10, 20, 50, 100, 200, 500).На какой именно номинал настроена кассета – определяется случайным образом, номиналы кассет могут повторяться.Более 40 купюр за раз не выдаётся.Банкомат должен выдать сумму минимальным количеством банкнот, или же сообщить, что запрашиваемую сумму выдать нельзя.
//18*/. * Сделать программу - заставку «Снегопад».На нижнюю часть консоли падают снежинки, некоторые просто вертикально, некоторые покачиваясь.Фон – чёрный или тёмно - синий.Снежинки – белые, серые, или ярко - голубые.Снежинки должны накапливаться в сугробы.