#include <iostream>
using namespace std;

int binarysearch(int arr[], int size, int key){
 int s=0;
 int e=size-1;
 int mid= s+((e-s)/2);
while(s<=e){
    if (arr[mid]==key){
        return mid;
    }
    if(arr[mid]>key){
        e=mid-1;
    }
    else{
        s=mid+1;
    } 
    mid= s+((e-s)/2);
}
    return -1;
}

int main(){
int arr1[5]={0,1,3,4,5};
int arr2[6]={4,6,7,8,90,107};

//int index= binarysearch(arr1, 5, 4);
int index2=binarysearch(arr2,6,107);
cout<<"Index of 4 is "<< binarysearch(arr1, 5, 4)<<endl;
cout<<"Index of 107 is "<< index2<<endl;

return 0;
}
