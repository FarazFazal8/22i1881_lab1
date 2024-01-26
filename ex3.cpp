#include<iostream>
using namespace std;
int main()
{
	int rows, col;
	cout << "Enter the number of rows  : ";
	cin >> rows;

	cout << "Enter the number of cols : ";
	cin >> col;

	int size = rows * col;

	int** matrix = new int*[rows];

	for (int i = 0; i < rows; i++)
	{
		matrix[i] = new int[col];
	}
	char c;
	do {

		cout << "--------Menu-------- " << endl;
		cout << "1. Input  elements" << endl;
		cout << "2. Display  elements" << endl;
		cout << "3. Total sum" << endl;
		cout << "4. Row wise sum" << endl;
		cout << "5. Column wise sum" << endl;
		cout << "6. Transpose" << endl;

		int choice;

		cout << "Enter choice : ";
		cin >> choice;

		if (choice == 1)
		{
			for (int i = 0; i < rows; i++)
			{
				for (int j = 0; j < col; j++)
				{
					cout << "(" << i << "," << j << ") :";
					cin >> matrix[i][j];
				}
			}
		}


		if (choice == 2)
		{
			for (int i = 0; i < rows; i++)
			{
				for (int j = 0; j < col; j++)
				{
					cout << matrix[i][j] << " ";
				}

				cout << endl;
			}
		}

		if (choice == 3)
		{
			int sum = 0;
			for (int i = 0; i < rows; i++)
			{
				for (int j = 0; j < col; j++)
				{
					sum = sum + matrix[i][j];
				}

				

			}
			cout << "sum is : " << sum << endl;
			
		}

		if (choice == 4)
		{
			int row = 0;
			for (int i = 0; i < rows; i++)
			{
				for (int j = 0; j < col; j++)
				{
					row = row + matrix[i][j];
				}

				cout << "The sum of row " << i + 1 << " is : " << row << endl;
				row = 0;
			}
		}


		if (choice == 5)
		{
			int temp;
			temp = rows;
			rows = col;
			col = temp;
			int** matrix_3 = new int* [rows];

			for (int i = 0; i < rows; i++)
			{
				matrix_3[i] = new int[col];
			}


			for (int i = 0; i < rows; i++)
			{
				for (int j = 0; j < col; j++)
				{
					matrix_3[i][j] = matrix[j][i];
				}
			}

			int row = 0;
			for (int i = 0; i < rows; i++)
			{
				for (int j = 0; j < col; j++)
				{
					row = row + matrix_3[i][j];
				}

				cout << "The sum of col " << i + 1 << " is : " << row << endl;
				row = 0;
			}


		}


		if (choice == 6)
		{

			int temp;
			temp = rows;
			rows = col;
			col = temp;
			int** matrix_2 = new int* [rows];

			for (int i = 0; i < rows; i++)
			{
				matrix_2[i] = new int[col];
			}


			for (int i = 0; i < rows; i++)
			{
				for (int j = 0; j < col; j++)
				{
					matrix_2[i][j] = matrix[j][i];
				}
			}

			for (int i = 0; i < rows; i++)
			{
				for (int j = 0; j < col; j++)
				{
					cout <<matrix_2[i][j] << " ";
				}

				cout << endl;
			}


		}
		
		cout << "Do you want to continue ? ";
		cin >> c;
	}while (c ==  'y');
}