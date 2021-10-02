import java.util.*;
public class TwoDArraySearch{
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int row = scan.nextInt();
        int col = scan.nextInt();
        int[][] arr = new int[row][col];
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                arr[i][j] = scan.nextInt();
            }
        }
        int searchElement = scan.nextInt();
        int[] output = search(arr, searchElement);
        System.out.println(output[0] + " " + output[1]);
    }
    
    static int[] search(int[][] arr, int target) {
        int i = 0;
        int j = arr[0].length - 1;
        while (j >= 0 && i<=arr.length-1) {
            if (arr[i][j] == target) {
                return new int[] { i, j };
            } else if (arr[i][j] > target) {
                j--;
            } else {
                i++;
            }
        }
        return new int[] {-1,-1};
    }
}