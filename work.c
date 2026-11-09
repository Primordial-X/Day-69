#include <stdio.h>
#include <string.h>

// Q119: Write a program to take an integer array as input.
// Only one element will be repeated. Print the repeated element.
// Try to find the result in one single iteration.

/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/

int main() {
    int nums1[] = {0, 4, 1, 1, 5}; // Example input
    int size = sizeof(nums1) / sizeof(nums1[0]);
    int repeated = -1; // Variable to store the repeated element

    for (int i = 0; i < size; i++) {
        // Check if the current element has already been seen
        if (nums1[abs(nums1[i])] < 0) {
            repeated = abs(nums1[i]);
            break;
        } else {
            // Mark the element as seen by negating the value at its index
            nums1[abs(nums1[i])] = -nums1[abs(nums1[i])];
        }
    }

    if (repeated != -1) {
        printf("Repeated element: %d\n", repeated);
    } else {
        printf("No repeated element found.\n");
    }

    return 0;
}