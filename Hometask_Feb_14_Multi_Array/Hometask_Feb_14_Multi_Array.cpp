//1. Дан двумерный массив размерностью M х N, заполненный случайными числами из диапазона от 0 до 20. 
//Определить сумму элементов массива, среднее арифметическое, минимальный и максимальный элемент.

//#include <iostream>
//#include <algorithm>
//#include <ctime>
//using namespace std;
//int main()
//{
//	srand(time(NULL));
//	const int M = 15;
//	const int N = 8;
//	int box[M][N];
//	int max = 0;
//	int min = 0;
//	int sum = 0;
//	float med;
//	for (int y = 0; y < M; y++)
//	{
//		for (int x = 0; x < N; x++)
//		{
//			box[y][x] = rand() % 21;
//			cout << box[y][x] << "\t";
//			sum += box[y][x];
//			if (box[y][x] > max && box[0][0]) max = box[y][x], min = box[y][x];
//			else if (box[y][x] > max) max = box[y][x];
//			else if (box[y][x] < min) min = box[y][x];
//		}
//		cout << endl;
//	}
//	med = float(sum) / M * N;
//	cout << "Total sum = " << sum << endl;
//	cout << "Medium ariphmetic = " << med << endl;
//	cout << "MAX = " << max << endl;
//	cout << "MIN = " << min << endl;
//}


//2. Дан двумерный массив размерностью M х M, заполненный случайными числами из диапазона от 0 до 20.
//Определить сумму элементов, расположенных на главной диагонали, а также сумму элементов, 
//расположенных на побочной диагонали.

//#include <iostream>
//#include <ctime>
//#include <algorithm>
//#include <Windows.h>
//using namespace std;
//int main()
//{
//	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//	srand(time(NULL));
//	const int H = 8;
//	const int L = 8;
//	int plane[H][L];
//	int sum = 0;
//	for (int y = 0; y < H; y++)
//	{
//		
//		for (int x = 0; x < L; x++)
//		{			
//			plane[y][x] = rand() % 21;
//			if (y == x)
//			{
//				sum += plane[y][x];
//				SetConsoleTextAttribute(h, 7);//white letters
//				cout << plane[y][x] << "\t";
//			}
//			else
//			{
//				SetConsoleTextAttribute(h, 0);//black letters
//				cout << plane[y][x] << "\t";
//			}
//		}
//		cout << "\n\n";
//	}
//	SetConsoleTextAttribute(h, 9);//blue letters
//	cout << "Sum of main diagonal = " << sum;
//	SetConsoleTextAttribute(h, 7);
//}

//3. Дан двумерный массив размерностью M х N, заполненный случайными числами из диапазона от - 10 до 10.
//  Определить количество положительных, отрицательных и нулевых элементов.
//
//#include <iostream>
//#include <Windows.h>
//#include <algorithm>
//#include <ctime>
//using namespace std;
//int main()
//{
//	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//	srand(time(NULL));
//	const int M = 8;
//	const int N = 10;
//	int box[M][N];
//	int pos = 0;
//	int zero = 0;
//	int neg = 0;
//	for (int y = 0; y < M; y++)
//	{
//		for (int x = 0; x < N; x++)
//		{
//			box[y][x] = rand() % 21 - 10;
//			if (box[y][x] > 0) pos++, SetConsoleTextAttribute(h, 2), cout << box[y][x] << "\t";
//			else if (box[y][x] < 0) neg++, SetConsoleTextAttribute(h, 9), cout << box[y][x] << "\t";//blue letters;
//			else if (box[y][x] == 0) zero++, SetConsoleTextAttribute(h, 5), cout << box[y][x] << "\t";
//		}
//		cout << endl;
//	}
//	SetConsoleTextAttribute(h, 7);
//	cout << "Positive number - " << pos << endl;
//	cout << "Nagative numbers - " << neg << endl;
//	cout << "Zeros - " << zero << endl;
//}

//4. Дан двумерный массив размерностью M х N, заполненный случайными числами из диапазона от 0 до 20.
//  Определить сумму по каждой строке и по каждому столбцу массива.

//#include <iostream>
//#include <algorithm>
//#include <ctime>
//using namespace std;
//int main()
//{
//	srand(time(NULL));
//	const int M = 8;
//	const int N = 10;
//	int box[M][N];
//	int sum = 0;
//	for (int y = 0; y < M; y++)
//	{
//		for (int x = 0; x < N; x++)
//		{
//			box[y][x] = rand() % 21;
//			cout << box[y][x] << "\t";
//		}
//		cout << "\n";
//	}
//	cout << "\tSum of Rows\n";
//	for (int y = 0; y < N; y++)
//	{
//		sum = 0;
//		for (int x = 0; x < M; x++)
//		{
//			sum += box[x][y];
//		}
//		cout << sum << "\t";
//	}
//	cout << "\n\tSum of Lines\n";
//	for (int y = 0; y < M; y++)
//	{
//		sum = 0;
//		for (int x = 0; x < N; x++)
//		{
//			sum += box[y][x];
//		}
//		cout << sum << "\n";
//	}
//	cout << endl;
//}

////5. Заполнить массив M x N двузначными числами так, чтобы первая цифра указывала  номер строки,
//  а вторая – номер столбца.
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	const int M = 9;
//	const int N = 8;
//	int box[M][N];
//	int x = 0;
//	int  Y = 0;
//	int X = 0;
//	for (int y = 0; y < M; y++)
//	{
//		Y = 10 * (y + 1);
//		X = 0;
//		for ( x = 0; x < N; x++)
//		{
//			X = x + 1;
//			box[y][x] = Y + X;
//			cout << box[y][x] << "\t";
//		}
//		cout << "\n";
//	}
//}

//6. В двумерном массиве размерности M x N поменять местами чётные строки с нечётными.
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	const int M = 6;
//	const int N = 7;
//	int box[M][N];
//	int j = 0;
//	for (int y = 0; y < M; y++)
//	{
//		for (int x = 0; x < N; x++)
//		{
//			j++;
//			box[y][x] = j;
//		}
//	}
//	for (int y = 0; y < M; y++)
//	{
//		for (int x = 0; x < N; x++)
//		{
//			if (y % 2 != 0) cout << box[y - 1][x] << "\t";
//			else if (y % 2 == 0) cout <<	box[y + 1][x] << "\t";
//		}
//		cout << "\n";
//	}
//}

//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	const int M = 6;
//	const int N = 7;
//	int box[M][N];
//	int j = 0;
//	for (int y = 0; y < M; y++)
//	{
//		for (int x = 0; x < N; x++)
//		{
//			if (y % 2 != 0) j++ , box[y - 1][x] = j;
//			else if (y % 2 == 0) j++, box[y + 1][x] = j;
//		}
//	}
//	for (int y = 0; y < M; y++)
//	{
//		for (int x = 0; x < N; x++)
//		{
//			cout << box[y][x] << "\t";
//		}
//		cout << "\n";
//	}
//}

//7. Дан двумерный массив размерностью M x N, заполненный случайными числами из диапазона от - 100 до 100.
//  Определить сумму элементов массива, расположенных между минимальным и максимальным элементами.
//
//#include <iostream>
//#include <ctime>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	srand(time(NULL));
//	const int M = 8;
//	const int N = 7;
//	int box[M][N];
//	int j = 0;
//	int min = 0;
//	int max = 0;
//	int sum = 0;
//	for (int y = 0; y < M; y++)
//	{
//		for (int x = 0; x < N; x++)
//		{
//			box[y][x] = rand() % 101;
//		    if (y == 0 && x == 0) min = box[y][x], max = box[y][x];
//		}
//	}
//	cout << "\nLooking for min and max\n";
//	for (int y = 0; y < M; y++)
//	{
//		for (int x = 0; x < N; x++)
//		{
//			cout << box[y][x] << "\t";
//		}
//		cout << "\n";
//	}
//	for (int y = 0; y < M; y++)
//	{
//		for (int x = 0; x < N; x++)
//		{
//			if (min > box[y][x]) min = box[y][x];
//			if (max < box[y][x]) max = box[y][x];
//		}
//	}
//	j = 0;
//	for (int y = 0; y < M; y++)
//	{
//		for (int x = 0; x < N; x++)
//		{
//			if (min == box[y][x] && j == 0 &&  sum == 0 || max == box[y][x] && j == 0 && sum == 0) j++, sum += box[y][x];
//			else if (min == box[y][x] && j != 0 || max == box[y][x] && j != 0)
//			{
//				sum += box[y][x];
//				j=0;
//			}
//			else if (j > 0) sum += box[y][x];
//		}
//	}
//	cout << "\nMinimum number - " << min << "\n";
//	cout << "Maximum number - " << max << "\n";
//	cout << "Total - " << sum << "\n";
//}


//8. Заполнить квадратную матрицу размером M x N по спирали.Число 1 ставится в центр матрицы, а затем массив
//  заполняется по спирали против часовой стрелки значениями по возрастанию.

//#include <iostream>
//using namespace std;
//int main() 
//{
//	const int n = 7, m = 7;
//	int a[n + 2][m + 2];
//
//	for (int i = 0; i <= n + 1; i++) 
//	{
//		for (int j = 0; j <= m + 1; j++) 
//		{
//			a[i][j] = -1;
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			a[i][j] = 0;
//		}
//	}
//	int num = 0, row = 1, col = 0;
//	num = n * m + 1;
//	while (num > 1)
//	{
//		while (a[row][col + 1] == 0)
//		{
//			col++;
//			num--;
//			a[row][col] = num;
//		}
//		while (a[row + 1][col] == 0) {
//			row++;
//			num--;
//			a[row][col] = num;
//		}
//		while (a[row][col - 1] == 0) {
//			col--;
//			num--;
//			a[row][col] = num;
//		}
//		while (a[row - 1][col] == 0) {
//			row--;
//			num--;
//			a[row][col] = num;
//		}
//	}
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			if (a[i][j] % 10 == a[i][j]) cout << "   ";
//			else if (a[i][j] % 100 == a[i][j]) cout << "  ";
//			else if (a[i][j] % 1000 == a[i][j]) cout << " ";
//			cout << a[i][j];
//		}
//		cout << endl;
//	}
//	return 0;
//}

//9. То же самое, только число 1 ставится в угловой(например, верхний левый) элемент, и спираль закручивается к 
// центру матрицы.
//
//#include <iostream>
//using namespace std;
//int main() {
//    const int n = 7, m = 7;
//    int a[n + 2][m + 2];
//    for (int i = 0; i <= n + 1; i++) 
//    {
//        for (int j = 0; j <= m + 1; j++)
//        {
//            a[i][j] = -1;
//        }
//    }
//    for (int i = 1; i <= n; i++) 
//    {
//        for (int j = 1; j <= m; j++) 
//        {
//            a[i][j] = 0;
//        }
//    }
//    int num = 0, row = 1, col = 0;
//    while (num < n*m) 
//    {
//        while (a[row][col + 1] == 0)
//        {
//            col++;
//            num++;
//            a[row][col] = num;
//        }
//        while (a[row + 1][col] == 0) 
//        {
//            row++;
//            num++;
//            a[row][col] = num;
//        }
//        while (a[row][col - 1] == 0) 
//        {
//            col--;
//            num++;
//            a[row][col] = num;
//        }
//        while (a[row - 1][col] == 0) 
//        {
//            row--;
//            num++;
//            a[row][col] = num;
//        }
//    }
//    for (int i = 1; i <= n; i++) 
//    {
//        for (int j = 1; j <= m; j++) 
//        {
//            if (a[i][j] % 10 == a[i][j]) cout << "   ";
//            else if (a[i][j] % 100 == a[i][j]) cout << "  ";
//            else if (a[i][j] % 1000 == a[i][j]) cout << " ";
//            cout << a[i][j];
//        }
//        cout << endl;
//    }
//    return 0;
//}

//10. Заполнить массив M x N следующим образом :

//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	const int N = 5;
//	const int M = 6;
//	int box[N][M];
//	int j = 0;
//	for (int y = 0; y < N; y++)
//	{
//		for (int x = 0; x < M; x++)
//		{
//			j++;
//			box[y][x] = j;
//			cout << box[y][x] << "\t";
//		}
//		cout << "\n";
//	}
//}


//11. Заполнить массив M x N следующим образом :
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	const int N = 6;
//	const int M = 6;
//	int box[N][M];
//	int j = 0;
//		for (int y = 0; y < N; y++)
//	{
//		for (int x = 0; x < M; x++)
//		{
//			if (y % 2 == 0) j++, box[y][x] = j;
//			else if (y % 2 != 0) j++, box[y][M - 1 - x] = j;
//		}
//	}
//	for (int y = 0; y < N; y++)
//	{
//		for (int x = 0; x < M; x++)
//		{
//			cout << box[y][x] << "\t";
//		}
//		cout << "\n";
//	}	
//}

//12. Заполнить массив M x N следующим образом :
  
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	const int M = 6;
//	const int N = 10;
//	int box[M][N];
//	int j = 0;
//	for (int y = 0; y < M; y++)
//	{
//		for (int x = 0; x < N; x++)
//		{
//			if (y == x) j++, box[x][y] = j;
//		}
//	}
//	for (int y = 0; y < M; y++)
//	{
//		for (int x = 0; x < N; x++)
//		{
//			cout << box[y][x] << "\t";
//		}
//		cout << "\n";
//	}
//}

//13. Заполнить трёхмерный массив N x N x N нулями.В получившийся куб вписать шар, состоящий из единиц.
// После чего, разрезать куб на N слоёв, и показать каждый слой в виде двумерного массива N x N на экране консоли.
//14. Реализовать преобразование двумерного массива в одномерный, и наоборот.M
//#include <iostream>
//using namespace std;
//int main()
//{
//	const int M = 6;
//	const int N = 7;
//	int mn[M][N];
//	const int Z = 42;
//	int z[Z]; 
//	int l = 0;
//	int k = 0;
//	for (int i = 0; i < M; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			l++;
//			k++;
//			mn[i][j] = l;
//			z[k] = l;
//		}
//	}
//	for (int i = 0; i < M; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			cout << mn[i][j] << "\t";
//		}
//		cout << "\n";
//	}
//	for (int i = 0; i < Z; i++)
//	{
//		cout << z[i] << ", ";
//	}
//	cout << "\n";
//}

//15. Создать массив размерностью M x N, заполненный случайными числами.
// Вывести на экран  строку, для которой среднее арифметическое элементов максимально отличается от среднего
// арифметического значения для всех элементов массива.

//#include <iostream>
//#include <ctime>
//using namespace std;
//int main()
//{
//	const int M = 6;
//	const int N = 5;
//	int box[M][M];
//	int sum = 0;
//	int med = 0;
//	int max = 0;
//	const int LINE = M;
//	int line[LINE];
//	for (int i = 0; i < M; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			box[i][j] = rand() % 101;
//
//		}
//	}
//	for (int i = 0; i < M; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			cout << box[i][j] << "\t";
//		}
//		cout << "\n";
//	}
//	for (int i = 0; i < M; i++)
//	{
//		sum = 0;
//		for (int j = 0; j < N; j++)
//		{
//			sum += box[i][j];
//		}
//		if (max < sum) max = sum;
//		cout << sum << "\n";
//	}
//	cout << "\nMaximum value lane - " << max << ". Mediana - " << max/M << "\n";	
//}

//16. В кинотеатре M рядов по N мест в каждом.В двумерном массиве хранится информация о проданных билетах.
// Число 1 означает, что билет на данное место уже продан, число 0 означает, что место свободно.
// Поступил запрос на продажу K билетов на соседние места в одном ряду.
// Определите, можно ли выполнить такой запрос.
// Число занятых мест, и какие места заняты на момент запроса, определяется случайным образом.
// Вывести исходный массив на экран консоли.



//17. * Клиент банка хочет снять со своего счёта N гривен при помощи банкомата.Внутри банкомата есть от 4 до 6 кассет с купюрами(определяется случайным образом).В кассету помещается от 2 до 3 тысяч купюр(количество купюр определяется случайным образом для каждой кассеты).Каждая кассета настроена на определённый номинал(номиналы задаются отдельным массивом на K элементов, например – 1, 2, 5, 10, 20, 50, 100, 200, 500).На какой именно номинал настроена кассета – определяется случайным образом, номиналы кассет могут повторяться.Более 40 купюр за раз не выдаётся.Банкомат должен выдать сумму минимальным количеством банкнот, или же сообщить, что запрашиваемую сумму выдать нельзя.
//18*/. * Сделать программу - заставку «Снегопад».На нижнюю часть консоли падают снежинки, некоторые просто вертикально, некоторые покачиваясь.Фон – чёрный или тёмно - синий.Снежинки – белые, серые, или ярко - голубые.Снежинки должны накапливаться в сугробы.