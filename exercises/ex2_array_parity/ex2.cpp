
#include <vector>

int solve (const std::vector<int>& vector) {
    std::sort(vector.begin(), vector.end());

    int last_number = 0;
    int sum = 0;

    for (int number: vector) {

        // Check if the number appeared during last iteration
        if (last_number == number) {
            return number;
        }

        // If not, save and sum this number
        last_number = number;
        sum += number;
    }

    return sum;
}

