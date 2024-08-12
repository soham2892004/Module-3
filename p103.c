 #include <stdio.h>


void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void main() {
    int numbers[5];

    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &numbers[i]);
    }

    
    bubbleSort(numbers, 5);

    printf("Sorted numbers (ascending order):\n");
    for (int i = 0; i < 5; ++i) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    
}
