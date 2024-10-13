#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int data;
    ListNode *next;

    ListNode()
    {
        this->data = 0;
        this->next = NULL;
    }

    ListNode(int x)
    {
        this->data = x;
        this->next = NULL;
    }

    ListNode(int x, ListNode *abcd)
    {
        this->data = x;
        this->next = abcd;
    }
};

void print_list(ListNode *head)
{
    ListNode *current = head;
    cout << "The linked list is: ";
    while (current != NULL)
    {
        cout << current->data << "->";
        current = current->next;
    }
    cout << "NULL" << endl;
}

void delete_node(ListNode *head, int x)
{

    // int x = 0, y = 0;
    ListNode *prev = head, *temp = head;

    while (temp != NULL)
    {
        if (temp->data == x)
            prev->next = temp->next;
        else
            prev = temp;
        temp = temp->next;
    }
}

void insert_node_at_end(ListNode *head, int x)
{
    ListNode *current = head;

    while (current != NULL)
    {
        if (current->next == NULL)
        {
            current->next = new ListNode(x);
            break;
        }
        current = current->next;
    }
}

int main()
{
    // ListNode *head = new ListNode(10);
    // ListNode *temp2 = new ListNode(20, temp1);
    // ListNode *temp3 = new ListNode(30, temp2);
    // ListNode *head = new ListNode(40, temp3);

    // cout<<"This is temp data: "<<temp->data<<endl;

    // cout<<"This is head data: "<<head->data<<endl;

    // int finalValue = head->next->next->next->next->data;

    // cout<<"This is temp data from head: "<<finalValue<<endl;
    // ListNode *current = head;

    // float *curr = NULL;

    //  ListNode * temp = new ListNode(10);

    //  ListNode * temp2 = new ListNode(20,temp);

    //  ListNode * head = new ListNode(30,temp2);

    // ListNode *temp = head,*prev = head;
    // ListNode *prev = head;

    // while (temp != NULL)
    // {
    //     if(temp->data==20){
    //         prev->next = temp->next;
    //     }
    //     else{
    //         prev = temp;
    //     }
    //     temp = temp->next;

    // }

    // logic of printing
    // while (current != NULL)
    // {

    //     cout << current->data << " ";

    //     current = current->next;
    // }

    ListNode *head = new ListNode(1);

    insert_node_at_end(head, 1);
    insert_node_at_end(head, 2);
    insert_node_at_end(head, 3);
    insert_node_at_end(head, 3);

    print_list(head);


    ListNode* head_ptr = head;
    ListNode * current = head,* prev = head;

    // delete_node(head, 50);

    // print_list(head);

    while (current)
    {
        current = current->next;

        if(prev->data==current->data){
            cout<<"current: "<<current->data<<endl;
            prev->next = current->next;
        }
        else{
            prev = current;
        }
//  1->1->1 1 3 4 5
        
    }

    // print_list(head_ptr);

    return 0;
}