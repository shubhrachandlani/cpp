#include <iostream>
#include <vector>

class PalindromeChecker {
private:
    std::vector<int> arr;

public:
    PalindromeChecker(std::vector<int> array) {
        arr = array;
    }

    bool isPalindrome() {
        int start = 0;
        int end = arr.size() - 1;
        while (start < end) {
            if (arr[start] != arr[end]) {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};

int main() {
    std::vector<int> arr1 = {1, 2, 3, 2, 1};
    std::vector<int> arr2 = {1, 2, 3, 4, 5};
    
    PalindromeChecker checker1(arr1);
    PalindromeChecker checker2(arr2);
    
    std::cout << "Array 1 is " << (checker1.isPalindrome() ? "a palindrome." : "not a palindrome.") << std::endl;
    std::cout << "Array 2 is " << (checker2.isPalindrome() ? "a palindrome." : "not a palindrome.") << std::endl;

    return 0;
}