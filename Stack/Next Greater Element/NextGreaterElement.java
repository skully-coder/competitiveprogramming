import java.util.*;

public class NextGreaterElement {

    Stack<Integer> s;
    int arr[];

    NextGreaterElement(int size) {
        arr = new int[size];
        s = new Stack();
    }

    public void nextGreaterElement() {
        int nge[] = new int[arr.length];
        for (int i = arr.length - 1; i >= 0; i--) {
            if (!s.isEmpty()) {
                while (!s.isEmpty() && s.peek() <= arr[i]) {
                    s.pop();
                }
            }
            nge[i] = s.isEmpty() ? -1 : s.peek();
            s.push(arr[i]);
        }
        for (int i = 0; i < 4; i++) {
            System.out.print(arr[i] + "-->" + nge[i] + "\n");
        }
    }

    public static void main(String args[]) {

        NextGreaterElement element = new NextGreaterElement(4);
        element.arr = new int[] { 4, 5, 2, 25 };
        element.nextGreaterElement();
    }
}