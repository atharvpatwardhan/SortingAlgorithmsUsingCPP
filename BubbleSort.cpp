
#include <iostream>

using namespace std;

void BubbleSort(int A[],int n){
    for (int k=0;k<n-1;k++){
        for (int i=0;i<n-k-1;i++){
            if (A[i]>A[i+1]){
                swap(A[i],A[i+1]);
            }
        }
    }
}


void swap(int x,int y){
    int tmp = x;
    x=y;
    y=tmp;
}


void display(int A[],int n){
    for(int i=0;i<n;i++){
        cout<<"\t"<<A[i];
    }
}

int main(){
    int x[] = {10,-10,20,-20,30,-30,50,-50,40,-40};
    cout<<"\n\nArray before sorting : ";
    display(x,10);

    BubbleSort(x,10);

    cout<<"\n\nArray after sorting : ";
    display(x,10);

    return 0;
}

