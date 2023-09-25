#include <iostream>
using namespace std;





// Task 1

/*
class Node
{
public:
    int value;
    Node* next1;
    Node* next2;

    Node() {
        value = 0;
        next1 = nullptr;
        next2 = nullptr;
    }
};

int main()
{
    Node* node = new Node(); // First node
    node->next1 = new Node(); // Second node
    node->next1->next2 = new Node(); // Third node
    node->next2 = new Node(); // Fourth node

    // Set values for nodes
    node->value = 1;
    node->next1->value = 2;
    node->next1->next2->value = 3;
    node->next2->value = 4;


    // Give pointers

    // Second node
    node->next1->next1 = node;
    node->next1->next2 = node->next1->next2;

    // Third node
    node->next1->next2->next1 = node->next1;
    node->next1->next2->next2 = node->next2;


    // Four node
    node->next2->next1 = node->next1;
    node->next2->next2 = nullptr;
}*/






/*
class Node
{
public:
    int value;
    Node* next1;
    Node* next2;

    Node() {
        value = 0;
        next1 = nullptr;
        next2 = nullptr;
    }
};


int main()
{
    // Create nodes
    Node* node = new Node(); // First node
    node->next1 = new Node(); // Second node
    node->next2 = new Node(); // Third node
    node->next1->next1 = new Node(); // Fourth node


    // Give values for nodes
    node->value = 1;
    node->next1->value = 2;
    node->next2->value = 3;
    node->next1->next1->value = 4;


    // Give pointers

    // Second node
    node->next1->next1 = node->next2->next2;
    node->next1->next2 = node;

    // Third node
    node->next2->next1 = node->next1;
    node->next2->next2 = node->next1->next1;

    // Fourth node
    node->next1->next1->next1 = node;
    node->next1->next1->next2 = node->next1;
}*/







/*
class Node {
public:
    int value;
    Node* next;

    Node()
    {
        value = 0;
        next = nullptr;
    }
    Node(int value)
    {
        this->value = value;
        this->next = nullptr;
    }
};

void putNodeToTail(Node*& head, int value)
{
    Node* newNode = new Node(value);

    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    Node* tmp = new Node();
    tmp = head;

    while (tmp->next != nullptr)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void display(Node* head)
{
    cout << "All numbers: \n";
    while (head != nullptr)
    {
        cout << head->value << " ";
        head = head->next;
    }
    cout << "\n\n";
}

void displayNegative(Node* head)
{
    Node* temp;
    temp = head;   
    
    int negative = 0;
    cout << "Negative numbers:\n";
    while (temp != nullptr)
    {
        if (temp->value < 0)
        {
            cout << temp->value << " ";
            temp = temp->next;
            negative++;
        }
        else
        {
            temp = temp->next;
        }
    }
    if (negative == 0) {
        cout << "There are no negative numbers!\n\n\n";
    }
    else {
        cout << "\n\n\n";
    }
}

void increase_Values(int increase, Node* &head)
{
    Node* temp;
    temp = head;
    while (temp != nullptr)
    {
        temp->value += increase;
        temp = temp->next;
    }
    cout << "The values successfully increased by " << increase << "!\n\n\n";
}

bool removeNumber(int remove, Node*& head)
{
    if (head->value == remove)
    {
        if (head->next == nullptr)
        {
            head = nullptr;
            return false;
        }
        head = head->next;
        return true;
    }

    Node* temp2 = head;

    while (temp2->next != nullptr)
    {
        if (temp2->next->value == remove)
        {
            if (temp2->next->next == nullptr)
            {
                temp2->next = nullptr;
                return false;
            }
            temp2->next = temp2->next->next;
            return true;
        }
        temp2 = temp2->next;
    }
    return false;
}

void removeNumbers(Node* &head, int remove)
{
    while (removeNumber(remove, head))
    {
        cout << "Number " << remove << " was deleted \n\n";
    }
}



int main() {
    Node* head = nullptr; // Create start node
    cout << "Enter 5 numbers to the list:\n";

    for (int i = 0; i < 5; i++) // The user input 5 values in list
    {
        int value = 0;
        cout << "Enter " << i + 1 << " number: ";
        cin >> value;
        putNodeToTail(head, value); // Put node to the end of the list
    }
    cout << "\n\n\n\n";
    display(head); // Display all list of values
    displayNegative(head); // Display all negative numbers in list

    int increase = 0;
    cout << "Enter the value to increase all numbers on this value: "; cin >> increase; // The user input value
    increase_Values(increase, head); // Increase all numbers with the given by the user value
    display(head); // Display all list of values

    int remove = 0;
    cout << "Enter the value to delete all numbers with this value: "; cin >> remove; // The user input value
    removeNumbers(head, remove); // Delete all numbers with the given by the user value     
    display(head); // Display all list of values
}*/

