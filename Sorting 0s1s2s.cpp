#include<iostream>
using namespace std;

void sort012(int *arr,int n){
    int count0 = 0, count1 = 0, count2 = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==0)
        count0++;
        if(arr[i]==1)
        count1++;
        if(arr[i]==2)
        count2++;
    }
    for(int i=0;i<count0;i++){
        arr[i]=0;
    }
    for(int i=count0;i<(count0+count1);i++){
        arr[i]=1;
    }
    for(int i=(count0+count1);i<n;i++){
        arr[i]=2;
    }
    return;
}
void printarr(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
int main()
{
    int n, arr[100];
     //n = sizeof(arr)/sizeof(arr[0]);
    cin>>n;     
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort012 (arr,n);
    cout<<"After sorting : "<<endl;
    printarr (arr,n);
    return 0;
}
