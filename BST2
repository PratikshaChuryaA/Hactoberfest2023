#include<iostream>
using namespace std;

    struct Node
    {
        int data;
        Node *lchild;
        Node *rchild;
        Node(int value)
        {
            data=value;
            lchild=NULL;
            rchild=NULL;
        }
    };
    class BST{
        Node *root;
        public:
        BST()
        {
            root=NULL;
        }
        Node *getRoot()
        {
            return root;
        }
        void insert(int);
        void inorderTraversal(Node *);
        void preorderTraversal(Node *);
        void postorderTraversal(Node *);
        bool search(int);
        int findLargestElement(Node *);


    };
    void BST::insert(int val)
    {
        Node *ptr=new Node(val);
        if(root==NULL)
            root=ptr;
        else{
            Node *curr=root;
            Node *parent=NULL;
            while(curr!=NULL)
            {
                parent=curr;
                if(val<curr->data)
                    curr=curr->lchild;
                else
                    curr=curr->rchild;
                
            }
            if(val<parent->data)
                parent->lchild=ptr;
            else
                parent->rchild=ptr;
        }
        return;
    }
    void BST::inorderTraversal(Node *tree)
    {
        if(tree!=NULL)
        {
            inorderTraversal(tree->lchild);
            cout<<tree->data<<endl;
            inorderTraversal(tree->rchild);

        }
    }
    void BST::preorderTraversal(Node *tree)
    {
        if(tree!=NULL)
        {
            cout<<tree->data<<endl;
            preorderTraversal(tree->lchild);
            preorderTraversal(tree->rchild);

        }
    }
    void BST::postorderTraversal(Node *tree)
    {
        if(tree!=NULL)
        {
            postorderTraversal(tree->lchild);
            postorderTraversal(tree->rchild);
            cout<<tree->data<<endl;
        }
    }
    bool BST::search(int key)
    {
        if(root==NULL) return false;
        Node *curr=root;
        while(curr!=NULL)
        {
            if(key<curr->data) curr=curr->lchild;
            else if(key>curr->data) curr=curr->rchild;
            else return true;

        }
        return false;
    }
    // int BST::findLargestestElement(Node *tree)
    // {
    //     if(root==NULL) return INT_MIN;
    //     else if(tree->rchild==NULL) return tree->data;
    //     else return findLargestElement(tree->rchild)
    // }
int main()
{
    BST MyTree;
    int choice,value,key;
    do{
        cout<<"1. Insert any value: "<<endl;
        cout<<"2. for inordertraversal for the tree:"<<endl;
        cout<<"3. for preordertraversal for the tree"<<endl;
        cout<<"4. for postordertraversal of the tree"<<endl;
        cout<<"5. search any element in the tree"<<endl;
        // cout << "6. Find the largest element in the tree" << endl;
        cout<<"Enter your choice:"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"Enter value to insert";
                cin>>value;
                MyTree.insert(value);
                break;
            case 2:
                MyTree.inorderTraversal(MyTree.getRoot());
                break;
            case 3:
                MyTree.preorderTraversal(MyTree.getRoot());
                break;
            case 4:
                MyTree.postorderTraversal(MyTree.getRoot());
                break;
            case 5:
                cout << "Enter value to search: ";
                cin >> key;
                if (MyTree.search(key))
                    cout << "Element found in the tree." << endl;
                else
                    cout << "Element not found in the tree." << endl;
                break;
            // case 6:
            // int largest = MyTree.findLargestElement(MyTree.getRoot());
            // if (largest != INT_MIN)
            //     cout << "The largest element in the tree is: " << largest << endl;
            // else
            //     cout << "The tree is empty." << endl;
            // break;
            case 0:
                cout<<"exit......."<<endl;
                break;
            default:
                cout<<"Invalid choice"<<endl;
        }
    }while(choice!=0);
    return 0;
}
