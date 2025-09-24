#include <iostream> 
using namespace std; 
#define MAX 5 
class Queue { 
    private: 
        int front,rear; 
        int ele[MAX]; 
    public: 
        Queue() { //Inisialisasi queue  
            front =  0; 
            rear  = -1;
            } 
  
        int  isFull(); 
        int  isEmpty(); 
        void insertQueue(int  item); 
        int  deleteQueue(int *item); 
}; 
  
// Untuk mengecek antrian sudah penuh atau belum 
int Queue::isFull() { 
    int full = 0 ; 
  
    if( rear == MAX-1 ) 
        full = 1; 
  
    return full; 
} 
  
// Untuk memeriksa antrian kosong atau tidak 
int Queue::isEmpty() { 
    int empty = 0 ; 
  
    if( front == rear + 1 ) 
        empty = 1; 
  
    return empty; 
} 
  
  
// Masukkan Item ke queue 
void Queue:: insertQueue(int item) { 
    if( isFull() ) { 
        cout<<"\nQueue OverFlow" << endl; 
        return; 
    }    
  
    ele[++rear]=item; 
    cout<<"\nNilai yang disisipkan :" << item; 
} 
  
//hapus item dari queue 
int Queue:: deleteQueue(int *item) { 
    if( isEmpty() ) { 
        cout<<"\nQueue Underflow" << endl; 
        return -1; 
    } 
  
    *item = ele[front++]; 
    return 0; 
} 
  
int main() { 
    int item=0; 
  
    Queue q = Queue(); 
  
    q.insertQueue(10); 
    q.insertQueue(20); 
    q.insertQueue(30); 
    q.insertQueue(40); 
    q.insertQueue(50); 
    q.insertQueue(60);   
  
    if(q.deleteQueue( &item)==0)     
        cout<<"\nItem dihapus : "<< item; 
  
    if(q.deleteQueue( &item)==0)     
        cout<<"\nItem dihapus : "<< item; 
  
    if(q.deleteQueue( &item)==0)     
        cout<<"\nItem dihapus : "<< item; 
  
    if(q.deleteQueue( &item)==0)     
        cout<<"\nItem dihapus : "<< item; 
  
    if(q.deleteQueue( &item)==0)     
        cout<<"\nItem dihapus : "<< item; 
  
    if(q.deleteQueue( &item)==0)     
        cout<<"\nItem dihapus : "<< item; 
  
    cout<< endl; 
    return 0;
}
