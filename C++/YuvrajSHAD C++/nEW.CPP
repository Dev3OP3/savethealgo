#include<iostream>

using namespace std;

class Queue{
 private:
  int front;
  int rear;
  int arr[5];
  
 public:
  Queue(){
   front=-1;
   rear=-1;
   for(int i=0;i<5;i++){
    arr[i]=0;
   }
  }
  
 bool isEmpty(){
  if(front==-1 && rear==-1){
   return true;
  }
  else{
   return false;
  }
 }
 bool isFull(){
 if(rear==4)
  return true;
  else
    return false;
 }
 //To insert elements into the queue
 void enqueue(int val){
  if(isFull()){
   cout<<"Queue space is full now."<<endl;
   return;
  }
  else if(isEmpty()){
   rear=0;
   front=0;
   arr[rear]=val;
  }
  else{
   rear++;
   arr[rear]=val;
  }
 }
 
 int dequeue(){
  int x=0;
  if(isEmpty()){
   cout<<"Queue space is empty now"<<endl;
   return x;
  }
  else if(rear==front){
   x=arr[rear];
   rear=-1;
   front=-1;
   return x;
  }
  else{
   cout<<"front value of the queue is:"<<front<<endl;
   x=arr[front];
   arr[front]=0;
   front++;
   return x;
  }
 }
 
 int count(){
  return(rear-front+1);
 }
 void display(){
  cout<<"All values in the queue are:"<<endl;
  for(int i=0; i<5; i++){
   cout<<arr[i]<<" ";
  }
 }
};

int main(){
 Queue q1;
 int value, option;
 
 do{
  cout<<"\n\nMenu to perform operation on user choice.Select option number.Enter 0 to exit"<<endl;
  cout<<"1.Enter the element -Enqueue()"<<endl;
  cout<<"2.Delete the element-Dequeue()"<<endl;
  cout<<"3.Check the status of the queue:- isEmpty()"<<endl;
  cout<<"4.Check the status of the queue: -isFull()"<<endl;
  cout<<"5.Counting the total no. of elements in Queue- count()"<<endl;
  cout<<"6.To print the items- display()"<<endl;
  cout<<"7.Clear Screen"<<endl<<endl;
  
  cin>>option;
  
  switch(option){
   case 0:
    break;
   case 1:
    cout<<"Enqueue operation is activated now. \n You can enter an item to enqueue in the queue"<<endl;
    cin>>value;
    q1.enqueue(value);
    break;
   case 2:
    cout<<"Dequeue operation is activated now. \n You can delete an item from the queue- Dequeued Value:"<<q1.dequeue()<<endl;
    break;
   case 3:
     if(q1.isEmpty())
     cout<<"Queue is empty now"<<endl;
     else
     cout<<"Queue is not empty now"<<endl;
     break;
     
   case 4:
     if(q1.isFull())
     cout<<"Queue isFull now "<<endl;
     else
     cout<<"Queue is not full yet"<<endl;
     break;
   case 5:
    cout<<"Count Operation \nCount of items in Queue:"<< q1.count()<<endl;
    break;
    
   case 6:
    cout<<"Display Function Called-"<<endl;
    q1.display();
    break;
   case 7:
    system("cls");
    break;
    default:
    cout<<"Enter proper Option number"<<endl;
  }
 }
 while(option!=0);
 return 0;
}