#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }

    void show()
    {
        cout << val << " " << next << endl;
    }
};

int main()
{
    Node *a = new Node(10);
    Node *b = new Node(20);

    a->next = b;

    cout << a->val << endl;
    cout << a->next->val << endl;
    // cout<<(*(*a).next).val;
    cout << b->val << endl;

    // int a1 = 5;
    // int *b1 = &a1;
    // cout << a1 << " " << b1 << " " << &a1 << " " << *b1;

    return 0;
}