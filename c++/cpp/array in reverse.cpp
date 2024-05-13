#include <iostream>
#include <vector>

class ArrayPrinter {
private:
    std::vector<int> arr;

public:
    ArrayPrinter(std::vector<int> array) {
        arr = array;
    }

    void printReverse() {
        for (int i = arr.size() - 1; i >= 0; i--) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5};
    ArrayPrinter printer(arr);
    std::cout << "Original Array:" << std::endl;
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Array in Reverse:" << std::endl;
    printer.printReverse();

    return 0;
}