> problem 1

Find largest number in an array

- c++

```c++
int findMax(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}
```

- python

```python
def findMax(arr):
    return max(arr)
```

> Find second largest element without sorting

Problem 2

> check if array is sorted

Problem 3

> left rotate array by one place and n place
