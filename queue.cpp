#include<iostream>
using namespace std;

class Queue
{
    private:
    int front;
    int rear;
    int arr[5];
    

    public:
    //Intially queue is null..
     Queue()
        {
         front=-1;
         rear=-1;
        
             for(int i=0;i<5;i++)
             {
                 arr[i]=0;
             }
        }
        // Check the queue is empty or not?
    
        bool isEmpty() // bool is a data type with two possible values: true or false
        {
            if(front==-1 && rear==-1)
                return true;
            else
                return false;
        }
        // Check the queue os full or not?
        
        bool isFull() // bool is a data type with two possible values: true or false
        {
            if(rear==4)
                return true;
            else
                return false;
        }
        // For enqueue(elements are added from one end (Rear / Back)) the value in the stack..
         
        void enqueue(int val)
        {
            if(isFull()) //Check the queue is full..
            {
                cout<<"Queue is Full"<<endl;
                return;
            }
            else if(isEmpty()) //Check the queue is empty..
            {
                rear=0;
                front=0;
                arr[rear] =val;
            }
            else
            {
                rear++;
                arr[rear] = val;
            }
            
        }
        //For dequeue(elements are removed from one end (Head / Front)) the value in dequeue..
    
        int dequeue()
        {
        int x = 0;
        if (isEmpty()) 
        {
          cout << "Queue is Empty" << endl;
          return x;
        } 
        else if (rear == front) 
        {
          x = arr[rear];
          rear = -1;
          front = -1;
          return x;
        } 
        else 
        {
          cout << "front value: " << front << endl;
          x = arr[front];
          arr[front] = 0;
          front++;
          return x;
        }
  }
        // For count(get the number of items in the queue) the value in the queue..
 
        int count() 
        {
          return (rear - front + 1);
        }
        // For display(display all items in the queue) the value in the queue..
 
        void display() 
        {
          cout << "All values in the Queue are - " << endl;
          for (int i = 0; i < 5; i++) {
          cout << arr[i] << "  ";
        }
  
    }
};
int main()
{
    Queue q1;
    int value, option;
    // Run all operations..
    do
    {
        cout<<"What operation do you want to perform?Select option number.Enter 0 for exit"<<endl;
        cout<<"1. Enqueue()"<<endl;
        cout<<"2. Dequeue()"<<endl;
        cout<<"3. isEmpty()"<<endl;
        cout<<"4. isFull()"<<endl;
        cout<<"5. count()"<<endl;
        cout<<"6. display()"<<endl;
        cout<<"7. clear Screen"<<endl;

        cin>>option;
        switch(option)
        {
            case 0:
              break;

            case 1://For enqueue operation
              cout << "Enqueue Operation \nEnter an item to Enqueue in the Queue" << endl;
              cin >> value;
              q1.enqueue(value);
              break;
               
            case 2://For dequeue operation
              cout << "Dequeue Operation \nDequeued Value : " << q1.dequeue() << endl;
              break;
               
            case 3://For isEmpty operation
              if (q1.isEmpty())
                cout << "Queue is Empty" << endl;
              else
                cout << "Queue is not Empty" << endl;
              break;
               
            case 4://For isFull operation
              if (q1.isFull())
                cout << "Queue is Full" << endl;
              else
                cout << "Queue is not Full" << endl;
              break;
               
            case 5://For count opertion
                cout << "Count Operation \nCount of items in Queue : " << q1.count() << endl;
              break;
               
            case 6://For display operation
                cout << "Display Function Called - " << endl;
                q1.display();
              break;
               
            case 7://For clear screen
                system("cls");
              break;
            default:
                cout << "Enter Proper Option number " << endl;
        }
    }while(option!=0);
    return 0;
    
}
