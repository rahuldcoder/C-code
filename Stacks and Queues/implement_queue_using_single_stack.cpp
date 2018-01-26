#include <bits/stdc++.h>
using namespace std;

//Implementation of queue using using single stack


int recursive_dequeue(stack<int>& stack_under_consideration)
{
    if (!stack_under_consideration.empty())
    {
        if (stack_under_consideration.size() == 1)
        {
            int element_to_be_popped = stack_under_consideration.top();
            stack_under_consideration.pop();
            return element_to_be_popped;
        }

        int value = stack_under_consideration.top();
        stack_under_consideration.pop();
        int returned_value = recursive_dequeue(stack_under_consideration);
        stack_under_consideration.push(value);
        return returned_value;
    }
}

int main()
{
    stack<int> stack_as_queue;
    bool isContinue = true;

    do
    {
        int option;
        cout << "Enter 1 for enqueue and 2 for dequeue" << endl;
        cin >> option;
        if (option == 1)
        {
            int value;
            cout << "Enter value to be pushed" << endl;
            cin >> value;
            stack_as_queue.push(value);
        }
        else
        {
            int value_popped = recursive_dequeue(stack_as_queue);
            cout << "Value Popped = " << value_popped << endl;
        }
        cout << "Do you want to continue 1/0" << endl;
        cin >> isContinue;

    } while (isContinue);
}