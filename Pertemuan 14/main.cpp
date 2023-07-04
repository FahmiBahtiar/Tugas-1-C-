/*
Fahmi Bahtiar Adi Nugroho
A11.2022.14270

*/


#include <iostream>
#include <chrono>

using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
}

int binarySearch(int arr[], int low, int high, int target)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int linearSearch(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}
template<typename Fungsi>
double TimeComplexity(Fungsi&& function)
{
    auto start = chrono::high_resolution_clock::now();
    function();
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double, micro> duration = end - start;
    return duration.count();
}
int main()
{
    // Pengujian kompleksitas waktu Insertion Sort
    int arrInsertionSort[] = {5, 2, 4, 6, 1, 3};
    int nInsertionSort = sizeof(arrInsertionSort) / sizeof(arrInsertionSort[0]);

    double insertionSortTime = TimeComplexity([&]()
    {
        insertionSort(arrInsertionSort, nInsertionSort);
    });
    cout << "Insertion Sort Time: " << insertionSortTime << " microseconds" << endl;

    // Pengujian kompleksitas waktu Bubble Sort
    int arrBubbleSort[] = {5, 2, 4, 6, 1, 3};
    int nBubbleSort = sizeof(arrBubbleSort) / sizeof(arrBubbleSort[0]);

    double bubbleSortTime = TimeComplexity([&]()
    {
        bubbleSort(arrBubbleSort, nBubbleSort);
    });
    cout << "Bubble Sort Time: " << bubbleSortTime << " microseconds" << endl;

    // Pengujian kompleksitas waktu Selection Sort
    int arrSelectionSort[] = {5, 2, 4, 6, 1, 3};
    int nSelectionSort = sizeof(arrSelectionSort) / sizeof(arrSelectionSort[0]);

    double selectionSortTime = TimeComplexity([&]()
    {
        selectionSort(arrSelectionSort, nSelectionSort);
    });
    cout << "Selection Sort Time: " << selectionSortTime << " microseconds" << endl;

    // Pengujian kompleksitas waktu Binary Search
    int arrBinarySearch[] = {1, 2, 3, 4, 5, 6};
    int nBinarySearch = sizeof(arrBinarySearch) / sizeof(arrBinarySearch[0]);
    int targetBinarySearch = 4;

    double binarySearchTime = TimeComplexity([&]()
    {
        binarySearch(arrBinarySearch, 0, nBinarySearch - 1, targetBinarySearch);
    });
    cout << "Binary Search Time: " << binarySearchTime << " microseconds" << endl;

    // Pengujian kompleksitas waktu Linear Search
    int arrLinearSearch[] = {1, 2, 3, 4, 5, 6};
    int nLinearSearch = sizeof(arrLinearSearch) / sizeof(arrLinearSearch[0]);
    int targetLinearSearch = 4;

    double linearSearchTime = TimeComplexity([&]()
    {
        linearSearch(arrLinearSearch, nLinearSearch, targetLinearSearch);
    });
    cout << "Linear Search Time: " << linearSearchTime << " microseconds" << endl;

    return 0;
}
