import java.util.*;
public class Permutations {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        // Input any numbers for generating all the possible permutations
        List<Integer> nums = new ArrayList<>();
        int n = scan.nextInt();
        for (int i = 0; i < n; i++) {
            nums.add(scan.nextInt());
        }
        List<List<Integer>> output = new ArrayList<>();
        solve(0, output, nums);
        System.out.println(output);
    }
    // starts backtracking
    static void solve(int index, List<List<Integer>> output, List<Integer> array) {
        if (index == array.size() - 1) {
            output.add(new ArrayList<>(array));
            return;
        }
        for (int i = index; i < array.size(); i++) {
            swap(index, i, array);
            solve(index + 1, output, array);
            swap(i, index, array);
        }
    }

    static void swap(int i, int j, List<Integer> array) {
        int temp = array.get(i);
        array.set(i, array.get(j));
        array.set(j, temp);
    }
}
