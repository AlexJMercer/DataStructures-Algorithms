import java.util.Scanner;

class TreeNode {
    int val;
    TreeNode right, left;

    TreeNode (int val) {
        this.val = val;
        right = left = null;
    }
}

public class BinarySearchTree {
    static TreeNode root;

    static void insert(int data) {
        root = insert(root, data);
    }

    static TreeNode insert(TreeNode root, int data) {
        if (root == null) {
            root = new TreeNode(data);
            return root;
        }
        else if (root.val >= data)
            root.left = insert(root.left, data);
        else
            root.right = insert(root.right, data);
        
        return root;
    }

    static void deleteNode(int data) {
        root = deleteNode(root, data);
    }

    static TreeNode deleteNode(TreeNode root, int data) {
        if (root == null)
            return null;
        
        if (data < root.val)
            root.left = deleteNode(root.left, data);
        else if (data > root.val)
            root.right = deleteNode(root.right, data);
  
        else {
            if (root.left == null)
                return root.right;
            else if (root.right == null)
                return root.left;
  
            root.val = minValue(root.right);
            root.right = deleteNode(root.right, root.val);
        }
  
        return root;
    }

    static int minValue(TreeNode root) {
        int minv = root.val;
        while (root.left != null) 
        {
            minv = root.left.val;
            root = root.left;
        }
        return minv;
    }

    static void traverseInorder(TreeNode node) {
        if (node != null) {
            traverseInorder(node.left);
            System.out.print(node.val + " ");
            traverseInorder(node.right);
        }
    }

    static void traversePreorder(TreeNode node) {
        if (node != null) {
            System.out.print(node.val + " ");
            traversePreorder(node.left);
            traversePreorder(node.right);
        }
    }

    static void traversePostorder(TreeNode node) {
        if (node != null) {
            traversePostorder(node.left);
            traversePostorder(node.right);
            System.out.print(node.val + " ");
        }
    }
    public static void main(String[] args) {
        Scanner x = new Scanner(System.in);

        int choice;
        do {
            System.out.println("\n\n--------- \t MENU \t ---------");
            System.out.println("\n1) Insert a Node" +
                                "\n2) Delete a Node" +
                                "\n3) Preorder Traversal" +
                                "\n4) Inorder Traversal" +
                                "\n5) Postorder Traversal" +
                                "\n6) Exit");
            System.out.print("\nEnter your choice : ");
            choice = x.nextInt();
            switch (choice) {
                case 1:
                    System.out.print("Enter data to be inserted: ");
                    insert(x.nextInt());
                    break;
                case 2:
                    System.out.print("Enter data to be deleted: ");
                    deleteNode(x.nextInt());
                    break;
                case 3:
                    traversePreorder(root);
                    break;
                case 4:
                    traverseInorder(root);
                    break;           
                case 5:
                    traversePostorder(root);
                    break;
                default:
                    break;
            }
        } while (choice < 6);
        x.close();
    }
}
