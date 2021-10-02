import java.util.*;
   class TreeNode {
     int val;
     TreeNode left;
     TreeNode right;
     TreeNode() {}
    TreeNode(int val) { this.val = val; }
     TreeNode(int val, TreeNode left, TreeNode right) {
         this.val = val;
         this.left = left;
         this.right = right;
    }
 }
 
class SolutionSymmetric {
	TreeNode root;
    public boolean mirror(TreeNode n1,TreeNode n2){
        if(n1==null && n2==null){
            return true;
        }
        if(n1 !=null && n2!=null && n1.val==n2.val){
            return (mirror(n1.left,n2.right) &&
            mirror(n1.right,n2.left));
        }
        
        
        return false;
    }
    public boolean isSymmetric(TreeNode root) {
        
        
    return mirror(root.left,root.right);

    }

public static void main(String args[])  
    { 
        SolutionSymmetric tree = new SolutionSymmetric(); 
        tree.root = new TreeNode(1); 
        tree.root.left = new TreeNode(2); 
        tree.root.right = new TreeNode(2); 
        tree.root.left.left = new TreeNode(3); 
        tree.root.left.right = new TreeNode(4); 
        tree.root.right.left = new TreeNode(4); 
        tree.root.right.right = new TreeNode(3); 
        boolean output = tree.isSymmetric(tree.root); 
        if (output == true) 
            System.out.println("SYMMETRIC"); 
        else
            System.out.println(" NOT SYMMETRIC"); 
    } 
 
}