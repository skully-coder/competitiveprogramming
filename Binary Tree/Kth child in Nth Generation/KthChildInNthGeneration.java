public class KthChildInNthGeneration {

    public static String kthChildInNthGeneration(String root_node, int n, int k) {
        if (n == 1 || k == 1) {
            return root_node;
        }
        double noOfChild = Math.pow(2, n - 1);
        int temp = (int) noOfChild / 2;
        if (k > temp) {
            String new_root = "Male";
            if (root_node.equals("Male")) {
                new_root = "Female";
            }
            return kthChildInNthGeneration(new_root, n - 1, k - temp);
        } else
            return kthChildInNthGeneration(root_node, n - 1, k);
    }

    public static void main(String args[]) {
        int n = 3, k = 4;
        System.out.println(k + "th Child of " + n + " Generation id : " + kthChildInNthGeneration("Male", n, k));
    }
}