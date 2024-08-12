 #include <stdio.h>


int findMax(int arr[], int size) 
{
    int max = arr[0]; 

    for (int i = 1; i < size; ++i) 
    {
        if (arr[i] > max) 
        {
            max = arr[i];
        }
    }

    return max;
}

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int myArray[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; ++i) 
    {
        scanf("%d", &myArray[i]);
    }

    int maximum = findMax(myArray, n);
    printf("The maximum value in the array is: %d\n", maximum);

    return 0;
}
