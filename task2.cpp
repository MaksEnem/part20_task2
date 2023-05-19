#include <iostream>
#include <vector>


int main() {

	int rows;
	int cols ;

	std::cout << "Enter the number of rows: ";
	std::cin >> rows;

	std::cout << "Enter the number of cols: ";
	std::cin >> cols;


	std::vector <std::vector <int>> vec; 

	for (int i = 0; i < rows; ++i) {

		std::vector <int> temp;

		for (int j = 0; j < cols; ++j) {

			temp.push_back(rand() % 2);

		}

		vec.push_back(temp);

	}

	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {

			std::cout << vec[i][j];

		}
		std::cout << std::endl;
	}


	

}