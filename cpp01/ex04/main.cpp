#include <iostream>
#include <fstream>

int main(int ac, const char **av) {
	if (ac == 4) {
		std::ifstream file(av[1]);
		if (!file) {
			std::cerr << "Error: Could not open file " << av[1] << std::endl;
			return 1;
		}

		std::string inname = av[1];
		std::string outputFilename = inname + ".replace";
		std::ofstream outputFile(outputFilename);
		if (!outputFile) {
			std::cerr << "Error: Could not create output file " << outputFilename << std::endl;
			return 1;
		}

		std::string line;
		std::string erase_s = av[2];
		std::string insert_s = av[3];

		while (std::getline(file, line)) {
			size_t pos = 0;
			while ((pos = line.find(erase_s, pos)) != std::string::npos) {
				line.erase(pos, erase_s.length());
				line.insert(pos, insert_s);
				pos += insert_s.length();
			}
			outputFile << line << std::endl;
		}
	} else {
		std::cerr << "Error: Wrong input, please enter <filename> <s1> <s2>" << std::endl;
		return 1;
	}

	return 0;
}
