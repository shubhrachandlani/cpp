#include <iostream>
using namespace std;
int main() {

    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]); 

    int sum = 0;

    for(int i = 0; i < size; ++i) {
        sum += arr[i];
    }

    std::cout << "The sum of the array elements is: " << sum << std::endl;

return 0;
}