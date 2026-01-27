import java.util.Arrays;

class Sol {

    void insertionSort(int arr[], int n) {

        for (int i = 1; i < n; i++) {

            int key = arr[i];
            int j = i - 1;

            // Move elements greater than key one position ahead
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }

            arr[j + 1] = key;
        }
    }
}

public class insertion_sort {

    public static void main(String[] args) {

        int arr[] = {5, 1, 4, 2, 8};

        Sol obj = new Sol();
        obj.insertionSort(arr, arr.length);

        System.out.println(Arrays.toString(arr));
    }
}
