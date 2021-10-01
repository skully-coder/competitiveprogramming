public class PeakElement {
    public static void main(String[] args) {
        int[] arr = { 5, 10, 15, 53, 23 };
        System.out.println(peak(arr, 0, arr.length - 1));
    }

    static int peak(int[] arr, int left, int right) {
        if (arr[left] > arr[left + 1]) {
            return arr[left];
        }
       else if (arr[right] > arr[right - 1]) {
            return arr[right];
        }
        else {
            left++;
            right--;
            while (left <= right) {
                int mid = (left + right) / 2;
                if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
                    return arr[mid];
                } else if (arr[mid] < arr[mid - 1]) {
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            }
        }
        return -1;
    }
} 
