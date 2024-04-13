#include <iostream>
using namespace std;
//task 1.1
int coutdmm(int mm, int yyyy)
{
	if (mm%2==1)
	{
		return 31;
	}
	else
	{
		if (mm==2)
		{
			if (yyyy%4==0)
			{
				return 28;
			}
			else
			{
				return 29;
			}
		}
		else
		{
			return 30;
		}
	}
}
void years(int yyyy, int mm, int dd, int yyyy2, int mm2, int dd2)
{
	int res = 0;
	while (yyyy!=yyyy2 || mm != mm2 || dd != dd2)
	{
		for (size_t i = mm; i < 13; i++)
		{
			for (size_t i = dd; i < coutdmm(mm, yyyy)+1; i++)
			{
				if (yyyy == yyyy2 && mm == mm2 && dd == dd2)
				{
					cout << res;
					break;
				}
				dd++;
				res++;
			}
			mm++;
			dd = 1;
		}
		yyyy++;
		mm = 1;
	}
	cout << res;
}

//task 1.2
void serarr(int arr[], int size)
{
	float sum = 0;
	for (size_t i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	cout << sum / size;
}


//task 1.3
void pnn(int arr[], int size)
{
	int p = 0, nu = 0, ne = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i]>=0)
		{
			if (arr[i]==0)
			{
				nu++;
			}
			else
			{
				p++;
			}
		}
		else
		{
			ne++;
		}
	}
	cout << "positive : " << p << "\nnull : " << nu << "\nnegative : " << ne;
}

//task 2.1
void fillmatrix(int* matrix[], int size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << "Enter row (after each number press enter) :\n";
		for (size_t j = 0; j < size; j++)
		{
			cin >> matrix[i][j];
		}
	}
}
void fillmatrix(double* matrix[], int size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << "Enter row (after each number press enter) :\n";
		for (size_t j = 0; j < size; j++)
		{
			cin >> matrix[i][j];
		}
	}
}
void fillmatrix(char* matrix[], int size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << "Enter row (after each symbol press enter) :\n";
		for (size_t j = 0; j < size; j++)
		{
			cin >> matrix[i][j];
		}
	}
}

void showmatrix(int* matrix[], int size)
{
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}
void showmatrix(double* matrix[], int size)
{
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}
void showmatrix(char* matrix[], int size)
{
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}


void findmaxofdiag(int* matrix[], int size)
{
	int* diag = new int[size];
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			diag[i] = matrix[i][i];
		}
	}
	int max = diag[0];
	for (size_t i = 1; i < size; i++)
	{
		if (diag[i]>max)
		{
			max = diag[i];
		}
	}
	cout << max;
}
void findmaxofdiag(double* matrix[], int size)
{
	double* diag = new double[size];
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			diag[i] = matrix[i][i];
		}
	}
	int max = diag[0];
	for (size_t i = 1; i < size; i++)
	{
		if (diag[i] > max)
		{
			max = diag[i];
		}
	}
	cout << max;
}

void bubbleSort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
void bubbleSort(double arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				double temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void sortmatrix(int* matrix[], int size)
{
	for (size_t i = 0; i < size; i++)
	{
		int* row = new int[size];
		for (size_t j = 0; j < size; j++)
		{
			row[j] = matrix[i][j];
		}
		bubbleSort(row, size);
		for (size_t j = 0; j < size; j++)
		{
			matrix[i][j] = row[j];
		}
		delete[] row;
	}
}
void sortmatrix(double *matrix[], int size)
{
	for (size_t i = 0; i < size; i++)
	{
		double* row = new double[size];
		for (size_t j = 0; j < size; j++)
		{
			row[j] = matrix[i][j];
		}
		bubbleSort(row, size);
		for (size_t j = 0; j < size; j++)
		{
			matrix[i][j] = row[j];
		}
		delete[] row;
	}
}


//task 2.2
void findmaxd(int a, int b)
{
	int maxd = 1, dila, dilb;
	while (a!=b)
	{
		if (a%2==0)
		{
			a/=2;
			dila = 2;
		}
		else
		{
			int i=3;
			do
			{
				a /= i;
				i++;
			} while (a%i!=0);
			dila = i;
		}
		if (b % 2 == 0)
		{
			b /= 2;
			dilb = 2;
		}
		else
		{
			int i = 3;
			do
			{
				b /= i;
				i++;
			} while (b % i != 0);
			dilb = i;
		}
		if (dila==dilb)
		{
			maxd *= dila;
		}
	}
	cout << maxd;
}

//task 2.3
void bullsandcows()
{
	int a=0, b = rand()%9000+1000, tr=0;
	while (a!=b)
	{
		int  bulls = 0, cows = 0;
		cout << "Enter number : ";
		cin >> a;
		for (size_t i = 0; i < 4; i++)
		{
			int sqr = 1;
			for (size_t j = 1; j < i+1; j++)
			{
				sqr *= 10;
			}
			if (a % (10 * sqr) / (1 * sqr) == b % (10 * sqr) / (1 * sqr))
			{
				cows++;
			}
			else if (a % (10 * sqr) / sqr==b%10 || a % (10 * sqr) / sqr == b % 100/10 || a % (10 * sqr) / sqr == b % 1000/100 || a % (10 * sqr) /  sqr == b/1000)
			{
				bulls++;
			}
		}
		cout << "bulls : " << bulls << "\ncows : " << cows << endl;
		tr++;
	}
	cout << "You won\n attempt : " << tr;
}

int main()
{
	srand(time(0));
	///*task 1.1*/
	//years(2000, 1, 1, 2000, 1, 1);
	///*task 1.2*/
	//int arr[10]{ 1,2,3,4,5,6,7,8,9,10 };
	//serarr(arr, 10);
	///*task 1.3*/
	//int arr[10]{ 0,2,0,4,-5,6,7,8,9,10 };
	//pnn(arr, 10);
	///*task 2.1*/
	//int n;	
	//cout << "enter the size of matrix (nxn): ";
	//cin >> n;
	//int** matrix = new int* [n];//навіть зрозумів

	//for (int i = 0; i < n; i++) {
	//	matrix[i] = new int[n];
	//}
	//fillmatrix(matrix, n);
	//findmaxofdiag(matrix, n);
	//sortmatrix(matrix, n);
	//showmatrix(matrix, n);
	///*findmaxofdiag(matrix, n);*/
	//for (int i = 0; i < n; i++) {
	//	delete[] matrix[i];
	//}
	//delete[] matrix;
	///*task 2.2*/
	//findmaxd(96, 64);
	///*task 2.3*/
	//bullsandcows();
}
