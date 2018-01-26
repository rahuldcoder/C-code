#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> enqueue, dequeue;
    bool isContinue = true;

    do
    {
        int option;
        cout << "Press 1 for Enqueue and 2 for Dequeue" << endl;
        cin >> option;
        if (option == 1)
        {
            int value;
            cout << "Enter Value to be pushed" << endl;
            cin >> value;
            enqueue.push(value);
        }
        else
        {   cout<<"Popping"<<endl;
            if(!dequeue.empty())
            {

                cout<<"Dequeued element = "<<dequeue.top()<<endl;
                dequeue.pop();


            }
            else if(dequeue.empty())
            {   
                cout<<"dequeue  Empty"<<endl;

                while(!enqueue.empty())
                {
                    dequeue.push(enqueue.top());
                    enqueue.pop();

                }

                cout<<"Dequeued element = "<<dequeue.top()<<endl;
                dequeue.pop();

            }
        }

    } while (isContinue);


}