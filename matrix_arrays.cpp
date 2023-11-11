#include <iostream>

using namespace std;

int main() {
	int matrix[2][3][3] =
		{
			{
				{
					1, 2, 3
				}
				{
					4, 5, 6
				}
				{
					7, 8, 9
				}
			}
			{
				{
					9, 8, 7
				}
				{
					6, 5, 4
				}
				{
					3, 2, 1
			}
		}

	cout << matrix << endl;

	return 0;
}
