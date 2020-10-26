#include <iostream>

using namespace std;

class Queue {
    int j;
    int front;
    int rear;
public:
    int a[5];
    Queue()
    {
        j=5;
        front=-1;
        rear=-1;
    }
    void enqueue();
    void dequeue();
    void frontt();
    void display();
};

void Queue::frontt()
{
    cout<<"FRONT = "<<a[front]<<endl;
}

void Queue::enqueue()
{
    int ele;
    cout<<"Enter element to be added "<<endl;
    cin>>ele;
    if(front==0&&rear==4)
        cout<<"Queue full \n";
    else if((front==rear+1)&&(j!=0))
        cout<<"Queue full \n";
    else
    {
        if(rear==-1)
        {
            front=rear=0;
            a[0]=ele;
        }
        else
            rear=(rear+1)%5;
        a[rear]=ele;
    }
    if(j==0)
        j=1;
}

void Queue::dequeue()
{
    int temp;
    if(j==0)
        cout<<"Queue Empty \n";
    else
    {
        if((front==rear)&&(front!=-1))
            j=0;
        if(front==-1)
            cout<<"Queue empty \n";
        else
        {
            temp=a[front];
            front=(front+1)%5;
        }
        cout<<"DELETED ITEM IS "<<temp<<"\n";
    }
}

void Queue::display()
{
    int i;
    if(j==0)
        cout<<"QUEUE EMPTY \n";
    else if(front==-1)
        cout<<"Queue Empty \n";
    else
    {
        cout<<"THE RESULTANT QUEUE IS \n";
        if(rear>=front)
        {
            for(i=front;i<=rear;i++)
                cout<<a[i]<<endl;
        }
        else
        {
            i=front-1;
            do
            {
                i=(i+1)%5;
                cout<<a[i]<<endl;
            }while(i!=rear);
        }
        cout<<"\n";
    }
}


int main()
{
    class Queue a;
    int choice;
    do
    {
        cout<<" MENU "<<endl;
        cout<<"1. ENQUEUE "<<endl;
        cout<<"2. DEQUEUE "<<endl;
        cout<<"3. FRONT "<<endl;
        cout<<"4. DISPLAY "<<endl;
        cout<<"5. EXIT "<<endl;
        cout<<"Enter your choice ";
        cin>>choice;
        switch(choice)
        {
            case 1:a.enqueue();
                break;
            case 2:a.dequeue();
                break;
            case 3:a.frontt();
                break;
            case 4:a.display();
                break;
            case 5:break;
            default:break;
        }
    }while(choice!=5);
    return 0;
}

