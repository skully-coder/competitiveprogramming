import java.util.*;
public class PeakElement {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = scan.nextInt();
        }
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
