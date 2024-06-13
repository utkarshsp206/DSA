#include<bits/stdc++.h>
using namespace std;
 
class Heap{
    int *arr;
    int size;

    public:
    Heap(){
        size=0;
    }

    //*Insert
    void insert(int val){

        //^Step 1: Increase size value and add element at the end
        size++;
        int i=size-1;
        arr[i]=val;

        //^Step 2: Place the inserted element at the correct position by comparing with the parent
        while(i>0){
            int parent=(i-1)/2;
            if(arr[parent]<arr[i]){
                swap(arr[parent],arr[i]);
                i=parent;
            }
            else{
                return;
            }
        }
        
    }

    //*Print
    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }


    //*Heapify Method
    void heapify(int i){
        int leftIndex = 2*i+1;
        int rightIndex = 2*i+2;

        while(i<size){
            if(leftIndex<size && arr[leftIndex]>arr[i]){
                swap(arr[leftIndex],arr[i]);
                heapify(leftIndex);
            }
            if(rightIndex<size && arr[leftIndex]>arr[i]){
                swap(arr[rightIndex],arr[i]);
                heapify(rightIndex);
            }
            else{
                return;
            }
        }
    }

      //*Delete Method
    void deleteEle(){
        if(size==0){
            cout<<"Nothing to delete ";
        }
        else{

            //^Delete Element
            arr[0]=arr[size-1];
            size--;

            //^Check if still Heap
            // int i=0;
            // while(i<size){
            //     int leftIndex = 2*i+1;
            //     int rightIndex = 2*i+2;
            //     if(leftIndex<size && arr[leftIndex]>arr[i]){
            //         swap(arr[leftIndex],arr[i]);
            //         i=leftIndex;
            //     }
            //     if(rightIndex<size && arr[rightIndex]>arr[i]){
            //         swap(arr[rightIndex],arr[i]);
            //         i=rightIndex;
            //     }
            //     else{
            //         return;
            //     }

            // }

            heapify(0);
        }
    }

};

int main() {

Heap h;
h.insert(20);
h.insert(30);
h.insert(40);
h.insert(10);
h.insert(15);
h.insert(5);
h.insert(25);
h.insert(50);
h.print();
cout<<endl;
h.deleteEle();
h.print();

return 0;
}