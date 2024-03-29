

int max_sum_of_matrix_row_elements(int** matrix, int vertical, int horizontal) {
	int max = -2147483648;

	for (int i = 0; i < vertical; i++)
	{
		int sum = 0;
		for (int j = 0; j < horizontal; j++)
		{
			sum += *(*(matrix + i) + j);
		}
		if (sum > max) {
			max = sum;
		}
	}

	return max;
}

int extreme_sum_of_matrix_row_elements(int** matrix, int vertical, int horizontal) {
	if (vertical <= 0 || horizontal <= 0) {
		return -1;
	}

	int max = max_sum_of_matrix_row_elements(matrix, vertical, horizontal);

	for (int i = 0; i < vertical; i++)
	{
		int sum = 0;
		for (int j = 0; j < horizontal; j++)
		{
			sum += *(*(matrix + i) + j);
		}
		if (sum == max) {
			return i + 1;
		}
	}
}