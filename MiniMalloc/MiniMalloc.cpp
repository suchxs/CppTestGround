#include <iostream>

// Cpp PlayGround Mini Malloc

// Goal - void* minimalloc(size_t size)

using namespace std;


struct Block {
	size_t size; // Size of Block (in bytes)
	Block* next; // Pointer to Next Byte
};

int main() {

	char* memoryPool = nullptr;
	size_t poolSize = 0;
	cout << "Will put some stuff here As I learn about shit";

	return 0;
}


/* To do:
*/