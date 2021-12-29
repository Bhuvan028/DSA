#include<bits/stdc++.h>
#include <climits>
using namespace std;

class stackusingarr{
    
    int *data; 
    int capacity;
    int nextindex;
    public:
    stackusingarr(int totsize){
        data = new int[totsize];
        capacity = totsize;
        nextindex = 0;
    }
    int size(){
    return nextindex;
}

bool isempty(){
    // if(nextindex == 0){
    //     return true;
    // }
    // else
    // return false;
    return nextindex == 0;

}

void push(int x){
    if(nextindex == capacity){
        cout<<"Stack is Full"<<endl;
        return;
    }
    data[nextindex] = x;
    nextindex++;
    
}

int pop(){
    if(isempty()){
        cout <<"Stack is Empty"<<endl;
        return INT_MIN;
    }
    nextindex--;
    return data[nextindex];
}

int top(){
    if(isempty()){
        cout <<"Stack is Empty"<<endl;
        return INT_MIN;
    }
    return data[nextindex-1];
}
};
int main()
{ stackusingarr b(5);

b.push(10);
b.push(20);
b.push(30);
b.push(40);

b.push(50);

cout<<b.pop()<<endl;
cout<<b.pop()<<endl;
cout<<b.top()<<endl;
cout<<b.pop()<<endl;
cout<<b.isempty()<<endl;
cout<<b.size()<<endl;
 
   
    return 0;
}
