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
    Node a(10), b(20);
    a.next = &b;

    // a.val = 10;
    // b.val = 20;

    // a.next = &b;
    // b.next = NULL;

    cout << a.val << endl;
    cout << a.next->val << endl;
    // cout << (*a.next).val << endl;

    // a.show();
    // b.show();

    return 0;
}