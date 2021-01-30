
#include <vector>

/**
 * Return the averages numbers of a given array.
 * @param vector An array of number.
 * @return A std::vector of the mean of the array.
 */
std::vector<double> averages(const std::vector<int>& array) {

    std::vector<double> averages = {};
    bool is_first_loop = true;
    int last_number = 0;

    for (int number: array) {

        // Avoid math the average for the first iteration
        if (is_first_loop) {
            is_first_loop = false;
        }

        // Append the average of two numbers
        else {
            averages.push_back(double (last_number + number) / 2);
        }

        last_number = number;
    }

    return averages;
}
