import java.util.Arrays;

class Solution {

    void bubbleSort(int arr[], int n) {

        for (int i = 0; i < n - 1; i++) {

            boolean swapped = false;

            for (int j = 0; j < n - i - 1; j++) {

                if (arr[j] > arr[j + 1]) {

                    // swap
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;

                    swapped = true;
                }
            }

            // Optimization: stop if already sorted
            if (!swapped) {
                break;
            }
        }
    }
}

public class bubble_sort {

    public static void main(String[] args) {

        int arr[] = {5, 1, 4, 2, 8};

        Solution obj = new Solution();
        obj.bubbleSort(arr, arr.length);

        System.out.println(Arrays.toString(arr));
    }
}
