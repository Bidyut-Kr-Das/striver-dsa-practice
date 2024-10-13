#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *prev;
    ListNode *next;

    ListNode(int x)
    {
        this->val = x;
        this->prev = NULL;
        this->next = NULL;
    }
};

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    // 5 1 2 3 4 5
    ListNode *head = NULL;
    ListNode *current;
    ListNode *back;
    ListNode *tail = NULL;

    for (int ele : arr)
    {
        ListNode *temp = new ListNode(ele);

        if (!head)
        {
            head = temp;
            current = head;
        }
        else
        {
            back = current;
            current->next = temp;
            current = current->next;
            current->prev = back;
        }

        if (current->val == arr[n - 1])
            tail = current;
    }

    // for(int i = 0;i<n;i++)
    //     ListNode * temp = new ListNode(arr[i]);

    ListNode *head_ptr = head;

    ListNode *tail_ptr = tail;

    cout << "forward printing: " << endl;
    while (head_ptr != NULL)
    {
        cout << head_ptr->val << " ";
        head_ptr = head_ptr->next;
    }
    cout << endl;
    cout << "backward printing: " << endl;
    while (tail_ptr != NULL)
    {
        cout << tail_ptr->val << " ";
        tail_ptr = tail_ptr->prev;
    }

    return 0;
}