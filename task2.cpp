#include <iostream>
#include <fstream>
#include <vector>
#include <ctime>

void painting_size_initialization(std::vector <std::vector <int>>& vec, int& rows, int& cols) {	

	std::srand(std::time(nullptr));

	std::cout << "Enter the number of rows: ";
	std::cin >> rows;

	std::cout << "Enter the number of cols: ";
	std::cin >> cols;

	for (int i = 0; i < rows; ++i) {

		std::vector <int> vec_cols;

		for (int j = 0; j < cols; ++j) {

			vec_cols.push_back(rand() % 2);

		}

		vec.push_back(vec_cols);

	}	
}

int main() {

	int rows;
	int cols;	
	
	std::vector <std::vector <int>> vec; 	

	painting_size_initialization(vec, rows, cols);

	std::ofstream picture("D:\\Skillbox\\C++\\working\\Practice 20 (Writing to files)\\task2\\pic.txt");
	
	if (picture.is_open()) {

		std::cout << "File is open\n";		

		for (int i = 0; i < rows; ++i) {

			for (int j = 0; j < cols; ++j) {

				picture << vec[i][j];

			}				

			picture << std::endl;

		}
	}
	else {

		std::cout << "WARNING!\n";
		std::cout << "ERROR!!!\n";
		std::cout << "File is not open\n";

	}	
		
	picture.close();
}