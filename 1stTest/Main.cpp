#include "print.h"
#include <chrono>

// First Test !
int main() {

	std::string testString{};

	std::cout << "I'll say what you'll say but twice!\n";
	std::getline(std::cin, testString);

	// Start Clock
	auto start = std::chrono::high_resolution_clock::now();
	std::cout << testString << '\n' << testString << '\n';

	auto end = std::chrono::high_resolution_clock::now();

	std::chrono::duration<double> duration = end - start;

	std::cout << "Total Execution TimeL " << duration.count() << "seconds" << '\n';

	return 0;
}