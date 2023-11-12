#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0)); // seed the random number generator

    int consecutiveHeads = 0;
    int totalFlips = 0;

    while (consecutiveHeads < 5) {
        bool isHead = std::rand() % 2 == 0; // randomly generate 0 or 1 for head/tail
        totalFlips++;

        if (isHead) {
            consecutiveHeads++;
            std::cout << "Head ";
        } else {
            consecutiveHeads = 0; // reset if it's a tail
            std::cout << "Tail ";
        }
    }

    std::cout << "\nIt took " << totalFlips << " flips to get 5 heads in a row." << std::endl;

    return 0;
}
