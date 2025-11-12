#include<iostream>
#define max_size 100

using namespace std;

struct queue{
	int value;
	queue* front;
	queue* rear;
};

class queue{
private:
	int arr[max_size];
    int front;
    int rear;

public:
	queue() {
        front = 0;
        rear = 0;
    }
	
    void enque(int value){
        if(rear<max_size){
        	arr[rear]=value;            
            rear++;
            return;
	    }else{
		    cout<<"queue is full"<<endl;
	    }
    }

    void dequeue(){
    	if(front==rear){
    		cout<<"queue is empty"<<endl;
        }else{
        	front++;
            return;
		}
    }

    void display(){
        for(int i=front; i<=rear-1; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    int arr[max_size];
    int front,rear,value;
    front=0;
    rear=0;

    queue q;
    q.enque(10);
    q.enque(20);
    q.enque(30);
    q.enque(40);
    
    q.display();
    
    q.dequeue();
    
    q.display();
} 