#include <stdio.h>

// arr = [5, 2, 7, 1]

// pivot = 5
// left = [2, 1]
// right = [7]

// QuickSort([2, 1]) → [1, 2]
// QuickSort([7]) → [7]

// Result = [1, 2] + [5] + [7] = [1, 2, 5, 7]



// PROCEDURE QuickSort(arr)
//     IF length of arr < 2 THEN
//         RETURN arr        // Already sorted

//     pivot = arr[0]        // Choose first element as pivot
//     left = elements in arr[1:] less than pivot
//     right = elements in arr[1:] greater than or equal to pivot

//     RETURN QuickSort(left) + [pivot] + QuickSort(right)
// END PROCEDURE

void QuickSort(int arr[], int left, int right) {
    if (left < right) {
        int pivot = arr[left];
        int i = left + 1;
        int j = right;

        while (i <= j) {
            while (i <= right && arr[i] < pivot) i++;
            while (j >= left && arr[j] > pivot) j--;
            if (i < j) {
                // Swap arr[i] and arr[j]
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        // Swap pivot with arr[j]
        arr[left] = arr[j];
        arr[j] = pivot;

        // Recursively sort the left and right parts
        QuickSort(arr, left, j - 1);
        QuickSort(arr, j + 1, right);
    }
}
