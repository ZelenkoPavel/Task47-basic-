

void matrix_multiplication_table(int** matrix) {
	for (int i = 1; i < 11; i++) {
		for (int j = 1; j < 11; j++) {
			*(*(matrix + i - 1) + j - 1) = i * j;
		}
	}
}