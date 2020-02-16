#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	struct X
	{
		int a;
		X* right;
		X *down;
	};
	int i, j, m, n;
	cout << "Введите m и n" << '\n';
	cin >> m >> n;
	int* strm, * stlm;
	strm = new int[n];
	stlm = new int[m];
	X* top=NULL,*str,*stl;
	str = top;
	stl = top;
	for (i = 0; i < m; i++)
	{
		j = 0;
		str = new X;
		cout << "Введите элемент " << j + 1 << " " << i + 1 << '\n';
		cin >> str->a;
		if (i == 0)
		{
			strm[i] = str->a;
			stlm[i] = str->a;
		}
		stl = str->down;
		str = str->right;
		for (j = 1; j < n;j++)
		{
			stl = new X;
			cout << "Введите элемент " << j + 1 << " " << i + 1 << '\n';
			cin >> stl->a;
			if (stl->a > stlm[i])
				stlm[i] = stl->a;
			if (stl->a > strm[j])
				strm[j] = stl->a;
			stl = stl->down;
		}

	}
	cout << "Вывод максимумов строк соответственно: ";
	for (i = 0; i < n; i++)
		cout << strm[i] << '\t';
	cout << '\n' << "Вывод максимумов столбцов соответственно: ";
	for (i=0; i<m; i++)
		cout << stlm[i] << '\t';
	

}