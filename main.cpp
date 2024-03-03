#include <iostream>

enum name {
    Jacob = 80,
    Jordan = 50,
    John = 45,
    Jake = 95,
};


int main() {
    int jacob = Jacob;
    int jordan = Jordan;
    int john = John;
    int jake = Jake;

    int names[4] = {jacob, jordan, john, jake};

    int largest = names[0];
    int largestIndex = 0;

    std::string name[4] = {"jacob", "jordan", "john", "jake"};

    for (int i = 1; i < 4; i++)
        if (names[i] > largest) {
            largest = names[i];
            largestIndex = i;
        }

    for (int i = 0; i < 4; i++) {
        if (names[i] > 60) {
            std::cout << name[i] << " Passed!" << std::endl;
        } else {
            std::cout << name[i] << " BAGSAK!" << std::endl;
        }
    }

    std::cout << "The name with the highest grade is: " << name[largestIndex] << std::endl;

    return 0;
}