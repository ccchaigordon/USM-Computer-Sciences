#include <iostream>

using namespace std;

class LinkedList
{
private:
    struct ListNode
    {
        int val;
        ListNode *next;
    };

    ListNode *head;

public:
    LinkedList();
    ~LinkedList();
    void append(int);
    void insert(int);
    void dlt(int);
    void display() const;
};

int main()
{
    LinkedList list;
    
    for (int i = 0; i < 10; i++)
    {
        list.append(i);
    }

    list.display();
    cout << endl;
    list.dlt(3);
    list.dlt(5);
    list.display();
    cout << endl;
    list.insert(5);
    list.display();

    return 0;
}

// Constructor
LinkedList::LinkedList()
{
    head = nullptr;
}

// Display
void LinkedList::display() const
{
    ListNode *nodePtr;

    if (!head) { cout << "The list is empty.\n"; }
    else
    {
        nodePtr = head;

        while (nodePtr != nullptr)
        {
            cout << nodePtr->val << " ";
            nodePtr = nodePtr->next;
        }
    }
}

// Append
void LinkedList::append(int val)
{
    ListNode *nodePtr;
    ListNode *newNode;
    newNode = new ListNode;
    newNode->val = val;
    newNode->next = nullptr;

    if (!head)
    {
        head = newNode;
    }

    else
    {
        nodePtr = head;
        
        while (nodePtr->next != nullptr)
        {
            nodePtr = nodePtr->next;
        }

        nodePtr->next = newNode;
    }
}

// Insert
void LinkedList::insert(int val)
{
    ListNode *nodePtr;
    ListNode *prevNode;
    ListNode *newNode;
    newNode = new ListNode;
    newNode->val = val;
    newNode->next = nullptr;

    if (!head)
    {
        head = newNode;
    }

    else
    {
        nodePtr = head;
        prevNode = nullptr;

        while (nodePtr != nullptr && nodePtr->val < val)
        {
            prevNode = nodePtr;
            nodePtr = nodePtr->next;
        }

        if (prevNode == nullptr)
        {
            head = newNode;
            newNode->next = nodePtr;
        }
        else
        {
            prevNode->next = newNode;
            newNode->next = nodePtr;
        }
    }
}

// Delete node
void LinkedList::dlt(int val)
{
    ListNode *nodePtr;
    ListNode *prevNode;

    if (!head) { return; }
    else
    {
        nodePtr = head;
        prevNode = nullptr;

        while (nodePtr != nullptr && nodePtr->val != val)
        {
            prevNode = nodePtr;
            nodePtr = nodePtr->next;
        }

        if (prevNode == nullptr)
        {
            nodePtr = nodePtr->next;
            delete head;
            head = nodePtr;
        }
        else
        {
            prevNode->next = nodePtr->next;
            delete nodePtr;
        }
    }
}

// Destructor
LinkedList::~LinkedList()
{
    ListNode *nodePtr;
    ListNode *nextNode;
    nodePtr = head;

    while (nodePtr != nullptr)
    {
        nextNode = nodePtr->next;
        delete nodePtr;
        nodePtr = nextNode;
    }
}
