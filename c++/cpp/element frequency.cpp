#include <iostream>
#include <unordered_map>
#include <vector>

class ElementFrequencyCounter {
private:
    std::vector<int> arr;

public:
    ElementFrequencyCounter(std::vector<int> array) {
        arr = array;
    }

    std::unordered_map<int, int> countFrequency() {
        std::unordered_map<int, int> frequencyMap;
        for (int num : arr) {
            frequencyMap[num]++;
        }
        return frequencyMap;
    }
};

int main() {
    std::vector<int> arr = {1, 2, 3, 2, 1, 4, 2, 5, 6, 5};
    ElementFrequencyCounter counter(arr);
    std::unordered_map<int, int> frequencyMap = counter.countFrequency();

    std::cout << "Element Frequency:" << std::endl;
    for (const auto& pair : frequencyMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}