 #include <stdio.h>


void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


void bubbleSort(int arr[], int n, int ascending) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if ((ascending && arr[j] > arr[j + 1]) || (!ascending && arr[j] < arr[j + 1])) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the size of the arrays: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];
    printf("Enter elements for the first array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements for the second array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    int choice;
    printf("Enter 1 to sort in ascending order or 2 to sort in descending order: ");
    scanf("%d", &choice);

    if (choice == 1) {
        bubbleSort(arr1, n, 1); 
        bubbleSort(arr2, n, 1); 
    } else if (choice == 2) {
        bubbleSort(arr1, n, 0); 
        bubbleSort(arr2, n, 0); 
    } else {
        printf("Invalid choice. Please enter 1 or 2.\n");
        return 1;
    }

    printf("Sorted first array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("Sorted second array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}
