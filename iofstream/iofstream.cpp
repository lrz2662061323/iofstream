

#include <iostream>
#include <fstream>

int main()
{
	std::string name = "abc";
	int age = 49;
	char data[100];

	std::ofstream fout;
	fout.open("TE哈哈哈哈.txt");


	std::cout << "Writing to the file" << std::endl;
	std::cout << "Enter your name: ";
	std::cin.getline(data, 100);
	std::cout << "Enter your age: ";
	std::cin >> data;
	std::cin.ignore();
	fout.close();
	return 0;
}

