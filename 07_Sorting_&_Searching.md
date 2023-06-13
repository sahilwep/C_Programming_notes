# Sorting & Searching

## Sorting
* Sorting is a method in with we sort the list or array elements in ascending or descending order.
* For sorting the list or array we have many algorithms, but we are going to learn the bubble sort.

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
bubbleSort(arr_list, size){
    // To access the arr_list.
    for(i = 0 ; i < size -1 ; i++){
        // To compare the accessed element with each element.
        for(j = 0 ; j < size -1; j++){
            // If left element is > than right element
            if(arr_list[j] > arr_list[j+1]){
                // swap
                int temp = arr_list[j];
                arr_list[j] = arr_list[j+1];
                arr_list[j+1] = temp;
            }
        }
    }
}
```
> Example

```C
// Sorting : Bubble Sort.
#include <stdio.h>

// Bubble sort function.
void sort(int list[], int size){
    for(int i = 0 ; i < size -1; i++){
        for(int j = 0 ; j < size -1; j++){
            if(list[j] > list[j+1]){
                int temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }
    }
}

// To print the list.
void display(int list[], int size){
    printf("\n Array list : ");
    for(int i = 0; i < size ;i++){
        printf("%d  ", list[i]);
    }
}

int main(void){
    int list[] = {10, 7, 8, 5, 6, 4, 1, 2, 3};
    int size = sizeof(list)/sizeof(list[0]);
    
    display(list, size);
    sort(list, size);
    printf("\n\n After sorted \n");
    display(list, size);

    return 0;
}
```

## Searching
* Searching mean `locating` a `particular` `element` in the `collection` of `elements`.
* We have many searching algorithm but we are looking into in linear search and binary search.

### Binary Search
* Binary searching is searching algorithm for finding the element position in a stored array.
* In this method the element of is searched in the middle of position of array, by dividing the list into half until we find the target element.
* Binary search implement only on sorted array list.
* Binary Search is much more efficient than linear search. 

```C
// Binary Search
#include <stdio.h>

// To sort the unsorted elements in list.
void sort(int list[], int size){
    for(int i = 0 ; i < size -1 ; i++){
        for(int j = 0 ; j < size -1 ; j++){
            if(list[j] > list[j+1]){
                int temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }
    }
}

// To print the elements in list.
void print(int list[], int size){
    printf("\n Array List : ");
    for(int i = 0; i < size ; i++){
        printf("%d  ", list[i]);
    }
}

// Binary Searching Function.
int binarySearch(int list[], int size, int target){
    int start = 0; 
    int end = size -1;
    int mid = ((start + end)/2);
    for(int i = start ; start <= end; i++){
        if(target == list[mid]){
            return mid;
        }
        if(target < list[mid]){
            end = mid -1;
        }
        if(target > list[mid]){
            start = mid +1;
        }
        mid = (start + end)/2;
    }

    return -1;
}

int main(void){

    int list[] = {11, 10, 9, 7, 8, 5, 6, 4, 1, 2, 3};
    int size = sizeof(list)/sizeof(list[0]);
    int target = 1;

    sort(list, size);
    print(list, size);

    int result = binarySearch(list, size, target);
    (result == -1) ? printf("\n Not Found.") : printf("\n Found at index : %d", result);

    return 0;
}
```
---


### Linear Search
* Linear search is sequential searching algorithm that start at one end and goes through each element of the list until desired element is found otherwise search is continue till the end of the data set.
* It is easier searching algorithm.
* There is no need of sorted list to use this algorithm. 
* Not efficient searching algorithms.

|index|0 | 1| 2|3 |4 |5 |6 |7 |8 |9 |
|-----|--|--|--|--|--|--|--|--|--|--|
|Array|10|90|30|10|70|25|99|103|102| 7 |

* Suppose we want to find `25`, then we are comparing `25` with each array element until we find `25`.



```C
// Linear Search
#include <stdio.h>

// Linear Search function.
int linearSearch(int list[], int size, int target){
    if(list[size] == 0 ){
        return -1;
    }
    for(int i = 0; i <= size - 1 ;i++){
        if(target == list[i]){
            return i;
        }
    }
    return -1;
}
int main(void){
    
    int list[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int size = sizeof(list)/sizeof(list[0]);
    int target = 7;

    int result = linearSearch(list, size, target);
    (result == -1) ? printf("\n Not Found") : printf("\n Found at index : %d", result); 

    return 0;
}
```


***
>End :)

> Thanks for Reading ;). Support [@veilsec](https://sahilwep.github.io/about/) [@sahilwep](https://sahilwep.github.io/about/) 
 

> Respect Open Source {-_*}!
***
