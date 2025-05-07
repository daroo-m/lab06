#include <iostream>
int main(int argc, char* argv[]) {
    // Iterate through arguments in reverse order (excluding argv[0])
    for (int i = argc - 1; i > 0; --i) {
        std::cout << argv[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}