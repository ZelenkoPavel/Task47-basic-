#include <iostream>

using namespace std;

void matrix_multiplication_table(int** matrix);
string convert_to_string(int** matrix);

int main() {

	int** matrix = new int*[10];
	for (int i = 0; i < 10; i++) {
		*(matrix + i) = new int[10];
	}

	matrix_multiplication_table(matrix);

	cout << convert_to_string(matrix) << endl;

	for (int i = 0; i < 10; i++) {
		delete[] *(matrix + i);
	}
	delete[] matrix;

	return 0;
}