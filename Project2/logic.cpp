
bool logic(int** matrix, int vertical, int horizontal, int n,
	int x, int y) {
	for (int i = 0; i < vertical; i++) {
		for (int j = 0; j < vertical; j++) {
			if (i != y && j != x) {
				if (n == *(*(matrix + i) + j)) {
					return true;
				}
			}
		}
	}

	return false;
}

bool the_same_value(int** matrix, int vertical, int horizontal) {
	if (vertical <= 0 || horizontal <= 0) {
		return false;
	}

	for (int i = 0; i < vertical; i++) {
		for (int j = 0; j < vertical; j++) {
			if (logic(matrix, vertical, horizontal, *(*(matrix + i) + j), j, i)) {
				return true;
			}
		}
	}
	
	return false;
}