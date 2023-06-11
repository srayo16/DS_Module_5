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

    return 0;
}