#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node * next;
};

class LinkedList{
    private:
    node * header;
 
    public:

    LinkedList()
    {
       header=new node;
       header->data=-1;
       header->next=NULL;
    }
    void addNodeAtBack(int value){
        if(header->next==NULL )
        {
            node * temp=new node;
            temp->data=value;
            temp->next=NULL;
            header->next=temp;

        }
        else
        {
            node *mover=header;
            while(mover->next!=NULL)
            {
                mover=mover->next;
            }
            
            node * temp=new node;
            temp->data=value;
            temp->next=NULL;
            mover->next=temp;

        }
    }

    void addNodeAtFront(int value)
    {
            node * temp=new node;
            temp->next=header->next;
            temp->data=value;
            header->next=temp;  

    }

    void addNodeAfterValue(int nodeValue,int afterValue)
    {
        node *temp = header;

        while(temp->data!=nodeValue && temp->next!=NULL)
        {                         
            temp=temp->next;        
        }
    

            node *tempNode =new node;
            tempNode->data=afterValue;
            tempNode->next=temp->next;
            temp->next=tempNode;

       



    }

    void printList()
    {   node * temp=header;
        while(temp!=NULL)
        {   

            printf("%d\n",temp->data);
            temp=temp->next;
        }    
    }


};



int main()
{
    LinkedList firstList;
    firstList.addNodeAtBack(5);
    firstList.addNodeAtBack(6);
    firstList.addNodeAtFront(0);
    firstList.addNodeAtFront(10);
    firstList.addNodeAfterValue(0,100);

    firstList.printList();
}