#include <iostream>
#include <string>

int main() {
	int i = 5;
	while (i <= 50) {
		if (i % 5 == 0) {
			std::cout << i << std::endl;
		}
		i++;
	}
	return 0;
}