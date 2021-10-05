public class CaseSpecificSortingInString {

    public static String buildHeap(char[] c) {

        for (int i = (c.length - 1) / 2; i >= 0; i--) {
            heapify(c, c.length, i);
        }
        String result = "";
        for (int i = c.length - 1; i >= 0; i--) {
            result += String.valueOf(c[0]);
            char temp = c[0];
            c[0] = c[i];
            c[i] = temp;

            heapify(c, i, 0);
        }

        return result;
    }

    public static void heapify(char c[], int n, int i) {

        int smallest = i;
        int l = 2 * i + 1;
        int r = 2 * i + 2;

        if (l < n && (int) c[l] < (int) c[smallest])
            smallest = l;
        if (r < n && (int) c[r] < (int) c[smallest])
            smallest = r;

        if (smallest != i) {
            char temp = c[smallest];
            c[smallest] = c[i];
            c[i] = temp;
            heapify(c, n, smallest);
        }
    }

    // Function to perform case-specific sorting of strings.
    public static String caseSort(String a) {
        char ch[] = a.toCharArray();

        String sortedStr = buildHeap(ch);
        char copy[] = a.toCharArray();

        int index = 0;
        for (int i = 0; i < copy.length; i++) {

            if (copy[i] >= 'A' && copy[i] <= 'Z')
                copy[i] = sortedStr.charAt(index++);
        }
        for (int i = 0; i < copy.length; i++) {

            if (copy[i] >= 'a' && copy[i] <= 'z')
                copy[i] = sortedStr.charAt(index++);
        }

        return new String(copy);
    }

    public static void main(String args[]) {

        System.out.println(caseSort("defRTSersUXI"));
    }

}