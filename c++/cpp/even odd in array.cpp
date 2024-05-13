#include <iostream>
#include <vector>

class EvenOddCounter {
private:
    std::vector<int> arr;

public:
    EvenOddCounter(std::vector<int> array) {
        arr = array;
    }

    std::pair<int, int> countEvenOdd() {
        int evenCount = 0;
        int oddCount = 0;
        for (int num : arr) {
            if (num % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }
        return std::make_pair(evenCount, oddCount);
    }
};

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    EvenOddCounter counter(arr);
    std::pair<int, int> counts = counter.countEvenOdd();
    std::cout << "Number of even numbers: " << counts.first << std::endl;
    std::cout << "Number of odd numbers: " << counts.second << std::endl;
    return 0;
}