#include <stdio.h>

/* linear search compare the item with each index...

linear search fuction need 3 parameter => array list, size of array list, the searching item.

make a loop start from i=0 that goes to the last size of the array & if arr[i]=match the finding return it...

*/

int search(int arr[], int size, int finding);

int main(void)
{
    int arr[] = {2, 33, 112, 31, 10, 23, 10, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int finding = 5;
    int found = search(arr, size, finding);
    if (found == -1)
    {
        printf("item is not in the list.");
    }
    else
    {
        printf("The item is at the index of %d", found);
    }
}

int search(int arr[], int size, int finding)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == finding)
        {
            return i;
        }
    }
    return -1;
}