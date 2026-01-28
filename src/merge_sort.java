import java.util.*;

class merge_sort {

    public int[] sortArray(int[] nums) {
        ArrayList<Integer> list = new ArrayList<>();
        for (int x : nums) list.add(x);

        mergeSort(list, 0, list.size() - 1);

        for (int i = 0; i < nums.length; i++) {
            nums[i] = list.get(i);
        }
        return nums;
    }

    void mergeSort(ArrayList<Integer> arr, int left, int right) {
        if (left >= right) return;

        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }

    void merge(ArrayList<Integer> arr, int left, int mid, int right) {

        ArrayList<Integer> temp = new ArrayList<>();

        int i = left;
        int j = mid + 1;

        // merge both halves
        while (i <= mid && j <= right) {
            if (arr.get(i) <= arr.get(j)) {
                temp.add(arr.get(i));
                i++;
            } else {
                temp.add(arr.get(j));
                j++;
            }
        }

        while (i <= mid) {
            temp.add(arr.get(i));
            i++;
        }

        while (j <= right) {
            temp.add(arr.get(j));
            j++;
        }

        for (int k = 0; k < temp.size(); k++) {
            arr.set(left + k, temp.get(k));
        }
    }
}
