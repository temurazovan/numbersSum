#include <iostream>

int sum(int arr[], int result, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size; j++) {
            if (result == arr[i] + arr[j]) {
                std::cout << arr[i] << " " << arr[j];
                return 0;
            }
        }
    }
    return -1;
}

int main() {
    int array[] = {7, 7, 11, 15, 2};
    int size = sizeof(array)/ sizeof(array[0]);
    int result = 9;
    sum(array, result, size);
    return 0;
}
