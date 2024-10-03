#include <stdio.h>

// Fungsi untuk sorting array dengan algoritma selection sort
void sort(int arr[], int n) {
    int i, j, temp;
    
    // Loop untuk elemen pertama hingga elemen ke-n-1
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {  // Memulai loop dari elemen setelah i
            if (arr[j] < arr[i]) {   // Mengganti elemen jika elemen yang lebih kecil ditemukan
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    // Memanggil fungsi sort
    sort(arr, n);
    
    // Menampilkan array yang sudah disortir
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
