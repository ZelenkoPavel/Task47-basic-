#include <iostream>
#include <string>

using namespace std;


string convert_to_string(int** matrix) {
	string msg = "";

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (*(*(matrix + i) + j) > 99) {
				msg += to_string(*(*(matrix + i) + j)) + " ";
			}
			else if (*(*(matrix + i) + j) > 9 && *(*(matrix + i) + j) < 100) {
				msg += to_string (*(*(matrix + i) + j)) + "  ";
			}
			else {
				msg += to_string(*(*(matrix + i) + j)) + "   ";
			}
		}
		msg += "\n";
	}

	return msg;
}