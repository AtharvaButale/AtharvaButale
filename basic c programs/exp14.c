#include <stdio.h>
#include <string.h>

void print_array(char arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%c", arr[i]);
    }
}

int string_length(char arr[]) {
    int length = 0;
    while (arr[length] != '\0') {
        length++;
    }
    return length;
}

void copy_string(char source[], char destination[]) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
}

int main() {
    char arr[] = "Hello, world!";
    int size = strlen(arr);
    printf("The original array is: ");
    print_array(arr, size);
    printf("\n");
    printf("The length of the array is: %d\n", string_length(arr));
    char copied_arr[size];
    copy_string(arr, copied_arr);
    printf("The copied array is: ");
    print_array(copied_arr, size);
    printf("\n");
    return 0;
}

