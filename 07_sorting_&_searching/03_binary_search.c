/* In binary search we are making a function that need the array list, the finding value , the lowest index and the highest index .
we need to find the array mid value
mid = low + (high - low) / 2


*/

#include <stdio.h>

int binary(int arr[], int x, int low, int high);

int main(void)
{

    int arr[] = {4,5,6,7,8,9}; // the array list.
    int n = sizeof(arr) / sizeof(arr[0]);   // the size of array list.
    int x = 8;                              // the finding value.
    int store;
    store = binary(arr, x, 0, n - 1); // function passing 4 parameter -> array list, finding value , lowest index , highest index.
    if (store == -1)
    {
        printf("The element is not in the list.");
    }
    else
    {
        printf("The element is at the index of %d", store);
    }
    return 0;
}

int binary(int arr[], int x, int low, int high)
{
    // loop runs until the low meets high point.
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        if (arr[mid] < x)
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