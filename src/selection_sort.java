import java.util.*;
class Solution {

    void selectionSort(int arr[], int n) {

        for (int i = 0; i < n - 1; i++) {

            int minIndex = i;

            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[minIndex]) {
                    minIndex = j;
                }
            }

            int temp = arr[minIndex];
            arr[minIndex] = arr[i];
            arr[i] = temp;
        }
    }
}


    public class selection_sort {
        public static void main(String[] args) {

            int arr[] = {64, 25, 12, 22, 11};
            int n = arr.length;

            Solution obj = new Solution();
            obj.selectionSort(arr, n);

            System.out.println(Arrays.toString(arr));
        }
    }

