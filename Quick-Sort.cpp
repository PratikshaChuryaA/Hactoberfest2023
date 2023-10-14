#include <iostream>
#include <vector>

// Function to partition the array into two segments
int partition(std::vector<int> &arr, int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }

    std::swap(arr[i + 1], arr[high]);
    return (i + 1);
}

// Function to perform QuickSort
void quickSort(std::vector<int> &arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    std::vector<int> arr = {12, 11, 13, 5, 6, 7};

    std::cout << "Unsorted array: ";
    for (int val : arr) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    quickSort(arr, 0, arr.size() - 1);

    std::cout << "Sorted array: ";
    for (int val : arr) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}
