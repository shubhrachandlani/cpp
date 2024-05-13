#include <iostream>
#include <vector>

class ArrayReverser {
private:
    std::vector<int> arr;

public:
    ArrayReverser(std::vector<int> array) {
        arr = array;
    }

    void reverseArray() {
        int start = 0;
        int end = arr.size() - 1;
        while (start < end) {

            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;

            start++;
            end--;
        }
    }

    std::vector<int> getReversedArray() {
        return arr;
    }
};

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5};
    ArrayReverser reverser(arr);
    std::cout << "Original Array:" << std::endl;
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    reverser.reverseArray();
    std::vector<int> reversedArr = reverser.getReversedArray();
    std::cout << "Reversed Array:" << std::endl;
    for (int num : reversedArr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}