
#include <iostream>

using namespace std;

void InsertionSort(int A[],int n){
    int i,j,key;
    for (i=1;i<n;i++){
        key = A[i];
        j = i;
        while (j>0 && A[j-1]>key){
            A[j] = A[j-1];
            j = j-1;
        }
        A[j] = key;
    }
}


void display(int A[],int n){
    for(int i = 0;i<n;i++){
        cout<<"\t"<<A[i];
    }
}


int main(){
    int x[] = {10,-10,20,-20,30,-30,50,-50,40,-40};
    cout<<"\n\nArray before sorting : ";
    display(x,10);
    InsertionSort(x,10);
    cout<<"\n\nArray after sorting : ";
    display(x,10);

    return 0;
}


