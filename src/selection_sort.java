import java.util.*;

class Solution2 {

    void selectionSort(int arr[], int n) {

        for (int i = 0; i < n - 1; i++) {

            int minIndex = i;

            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[minIndex]) {
                    minIndex = j;
                }
            }

            // Swap
            int temp = arr[minIndex];
            arr[minIndex] = arr[i];
            arr[i] = temp;
        }
    }
}

public class selection_sort {

    public static void main(String[] args) {

        int arr[] = {64, 25, 12, 22, 11};

        Solution2 obj = new Solution2();
        obj.selectionSort(arr, arr.length);

        System.out.println(Arrays.toString(arr));
    }
}
