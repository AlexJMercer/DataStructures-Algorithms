import java.util.Scanner;

class AVLNode {
    int val, height;
    AVLNode left, right;

    AVLNode(int val) {
        this.val = val;
        height = 1;
    }
}

public class AVL_Tree {
    static AVLNode root;

    static int height(AVLNode node) {
        if (node == null)
            return 0;
        return node.height;
    }

    static int max(int a, int b) {
        return (a > b) ? a : b;
    }

    static AVLNode rightRotate(AVLNode yNode) {
        AVLNode xNode = yNode.left;
        AVLNode tNode = xNode.left;

        xNode.right = yNode;
        yNode.left = tNode;

        yNode.height = max(height(yNode.left), height(yNode.right)) + 1;
        xNode.height = max(height(xNode.left), height(xNode.right)) + 1;

        return xNode;
    }

    static AVLNode leftRotate(AVLNode xNode) {
        AVLNode yNode = xNode.right;
        AVLNode tNode = yNode.left;

        yNode.left = xNode;
        xNode.right = tNode;

        xNode.height = max(height(xNode.left), height(xNode.right)) + 1;
        yNode.height = max(height(yNode.left), height(yNode.right)) + 1;

        return yNode;
    }

    static int getBalance(AVLNode node) {
        if (node == null)
            return 0;
        return (height(node.left) - height(node.right));
    }

    static AVLNode insert(AVLNode node, int data) {
        if (node == null)
            return (new AVLNode(data));
        if (data < node.val)
            node.left = insert(node.left, data);
        else if (data > node.val)
            node.right = insert(node.right, data);
        else
            return node;

        node.height = 1 + max(height(node.left), height(node.right));
        int bal = getBalance(node);

        if ((bal > 1) && (data < node.left.val))
            return rightRotate(node);
        
        if ((bal < -1) && (data > node.right.val))
            return leftRotate(node);

        if ((bal > 1) && (data > node.left.val)) {
            node.left = leftRotate(node.left);
            return rightRotate(node);
        }
        
        if ((bal < -1) && (data > node.right.val)) {
            node.right = rightRotate(node.right);
            return leftRotate(node);
        }

        return node;
    }

    static AVLNode minValueNode(AVLNode node) { 
        AVLNode current = node; 
  
        while (current.left != null) 
        current = current.left; 
  
        return current; 
    } 
  
    static AVLNode deleteNode(AVLNode root, int key) { 
        if (root == null) 
            return root;  
        if (key < root.val) 
            root.left = deleteNode(root.left, key); 
        else if (key > root.val) 
            root.right = deleteNode(root.right, key); 
        else {
            if ((root.left == null) || (root.right == null)) { 
                AVLNode temp = null; 
                if (temp == root.left) 
                    temp = root.right; 
                else
                    temp = root.left; 
  
                if (temp == null) 
                { 
                    temp = root; 
                    root = null; 
                } 
                else 
                    root = temp;
            } 
            else { 
                AVLNode temp = minValueNode(root.right); 
                root.val = temp.val; 
                root.right = deleteNode(root.right, temp.val); 
            } 
        } 
        if (root == null) 
            return root; 
  
        root.height = max(height(root.left), height(root.right)) + 1; 
        int balance = getBalance(root); 
  
        if (balance > 1 && getBalance(root.left) >= 0) 
            return rightRotate(root); 
        if (balance > 1 && getBalance(root.left) < 0) 
        { 
            root.left = leftRotate(root.left); 
            return rightRotate(root); 
        } 
  
        if (balance < -1 && getBalance(root.right) <= 0) 
            return leftRotate(root); 
  
        if (balance < -1 && getBalance(root.right) > 0) 
        { 
            root.right = rightRotate(root.right); 
            return leftRotate(root); 
        } 
  
        return root; 
    }

    static void preOrder(AVLNode node) {
        if (node != null) {
            System.out.print(node.val + " ");
            preOrder(node.left);
            preOrder(node.right);
        }
    }

    static void inOrder(AVLNode node) {
        if (node != null) {
            inOrder(node.left);
            System.out.print(node.val + " ");
            inOrder(node.right);
        }
    }

    static void postOrder(AVLNode node) {
        if (node != null) {
            postOrder(node.left);
            postOrder(node.right);
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
                    insert(root, x.nextInt());
                    break;
                case 2:
                    System.out.print("Enter data to be deleted: ");
                    deleteNode(root, x.nextInt());
                    break;
                case 3:
                    preOrder(root);
                    break;
                case 4:
                    inOrder(root);
                    break;           
                case 5:
                    postOrder(root);
                    break;
                default:
                    break;
            }
        } while (choice < 6);
        x.close();
    }
}