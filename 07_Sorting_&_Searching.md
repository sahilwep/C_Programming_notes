# Sorting & Searching

## Sorting
* Sorting is a process in which we sort the value of index of array in ascending of descending order.
* For sorting the list of array we have so many algorithms but we are going to learn the bubble sort.

|4|2|6|1|5|3| Unsorted list|
|-|-|-|-|-|-|-|
|1|2|3|4|5|6| Sorted list|

### Bubble Sort
* Bubble sort is a sorting algorithm that compares two adjacent elements and swap them until they are in the same index order.
* Just like the movement of air bubble in water that rises up to the surface, each element of the array move to the end in each iteration. therefore it is called bubble sort.

![Image](/Programming_methodology/07_sorting_&_searching/bubble-sort.gif)

#### Working of Bubble sort

* Suppose we are trying to sort the elements in ascending order.

|array list |-2|45|0|11|-9|
|-|--|--|--|--|--|


* First iteration (Compare & Swap).
  * Starting from the first index compare the first & the second.
  * The first element is grater than the second element, they are swapped.
  * Now compare second & third element swap them if they are not in order.
  * The above process goes until the last element.

---
**Step 0 : Compare the adjacent elements.**
|i = 0|-2|45|0|11|-9|
|--|--|--|--|--|--|
|Compare  | ⬆ | ⬆ | | | |

Compare `-2` and `45` , Order is good.

|i = 1|-2|45|0|11|-9|
|--|--|--|--|--|--|
|Swap | | ⬆ | ⬆ | | |

Compare `45` and `0` & swap `45` to right

|i = 2|-2|0|45|11|-9|
|--|--|--|--|--|--|
|Swap | | | ⬆ | ⬆  | |

Compare `45` and `11` & swap `45` to right

|i = 3|-2|0|11|45| -9|
|--|--|--|--|--|--|
|Swap | | | |  ⬆ | ⬆ |

Compare `45` and `9` & swap `45` to right

|Result|-2|0|11|-9|45|
|--|--|--|--|--|--|
Rest of them are fine.


---

* Remaining iteration
  * The same process goes on for the remaining iteration.
  * After each element the largest element among the unsorted element is placed at the end.

---

**Step 1 : Put the largest element at the end.**
|i = 0 |-2|0|11|-9|45|
|--|--|--|--|--|--|
|Compare  | ⬆ | ⬆ | | | |

Compare `-2` and `0` the order is fine.

|i = 1 |-2|0|11|-9|45|
|--|--|--|--|--|--|
|Compare  | | ⬆ | ⬆ | | | 

Compare `0` and  `11` the order is fine.


|i = 2 |-2|0|11|-9|45|
|--|--|--|--|--|--|
|swap  | | | ⬆ | ⬆ |  | 

Compare `11` and `-9 ` & Swap 11 to right.


| Result |-2|0|-9|11 |45|
|--|--|--|--|--|--|

Rest of them are fine.

---

* In each iteration the compare takes place to the last unsorted element.
--- 

**Step 2 : Compare the adjacent elements.**

|i = 0 |-2|0|-9|11 |45|
|--|--|--|--|--|--|
|Compare  |  ⬆| ⬆ | | | | 

Compare `-2` and `0 ` the order is fine.

|i = 1 |-2|0|-9|11 |45|
|--|--|--|--|--|--|
|Swap  |  | ⬆| ⬆  | | | 

Compare `0` and `-9` & Swap `0` to right.


|Result |-2|-9|0|11 |45|
|--|--|--|--|--|--|

Rest of them are fine.

---

The array is sorted when all the unsorted element are placed at their correct order positions.

---

**Step 3 : Compare in the adjacent elements.**

|i = 0 | -2|-9|0|11 |45|
|--|--|--|--|--|--|
|Swap  | ⬆| ⬆ | |  | | | 

Compare `-2` and `-9` & Swap `-2` to right.


| Result | -2|-9|0|11 |45|
|--|--|--|--|--|--|

---


#### Algorithm


```C
bubbleSort(array)
  for i <- 1 to indexOfLastUnsortedElement-1
    if leftElement > rightElement
      swap leftElement and rightElement
end bubbleSort
```
> Example

```C
#include <stdio.h>

void print(int a[], int n) // function to print array elements
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
void bubble(int a[], int n) // function to implement bubble sort
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
void main()
{
    int i, j, temp;
    int a[5] = {10, 35, 32, 13, 26};
    int n = sizeof(a) / sizeof(a[0]);
    printf("Before sorting array elements are - \n");
    print(a, n);
    bubble(a, n);
    printf("\nAfter sorting array elements are - \n");
    print(a, n);
}
```

## Searching
* Searching mean locating a particular element in the collection of elements.
* We have many searching algorithm but we are looking into in linear search and binary search.

### Binary Search
* Binary searching is searching algorithm for finding the element position in a stored array.
* In this method the element of is searched in the middle of position of array.
* Binary search implement only on sorted array list.

```C
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
```
---


### Linear Search
* Linear search is sequential searching algorithm that start at one end and goes through each element of the list until desired element is found otherwise search is continue till the end of the data set.
* It is easier searching algorithm.
* Liner search no need for sorted list of array.

|index|0 | 1| 2|3 |4 |5 |6 |7 |8 |9 |
|-----|--|--|--|--|--|--|--|--|--|--|
|Array|10|90|30|10|70|25|99|103|102| 7 |

* Suppose we want to find `25`, then we are comparing `25` with each array element until we find `25`.



```C
#include <stdio.h>

/* linear search compare the item with each index...

linear search function need 3 parameter => array list, size of array list, the searching item.

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
```


***
>End :)

> Thanks for Reading ;). Support [@veilsec](https://sahilwep.github.io/about/) [@sahilwep](https://sahilwep.github.io/about/) 
 

> Respect Open Source {-_*}!
***
