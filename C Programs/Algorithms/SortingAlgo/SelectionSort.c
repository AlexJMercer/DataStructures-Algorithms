#include<stdio.h>
#include<stdlib.h>

int *selection_sort(int *arr, int size)
{
    int temp, min;
    for (int i = 0; i < size; ++i)
    {
        min = i;
        for (int j = i + 1; j < size; ++j)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
    return arr;
}

int main()
{
    int size;
    printf("Enter number of elements : ");
    scanf("%d", &size);
    
    int *arr = (int*)malloc(size * sizeof(int));
    
    printf("\nEnter Array : ");
    for (int i=0; i<size; ++i)
    {
        int num;
        scanf("%d", &arr[i]);
    }

    selection_sort(arr, size);

    printf("\nSorted Array : ");
    for (int i=0; i<size; ++i)
    {
        if (i == (size - 1))
            printf("%d", arr[i]);
        else    
            printf("%d, ", arr[i]);
    }
    free(arr);

    return 0;
}