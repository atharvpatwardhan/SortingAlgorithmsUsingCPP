#include <iostream>

using namespace std;

void SelectionSort(int A[],int n){
    int minpos;
    for (int i=0;i<n-1;i++){
        minpos = i;
        for(int j = i+1;j<n;j++){
            minpos = j;
        }
        swap(A[i],A[minpos]);
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

    SelectionSort(x,10);

    cout<<"\n\nArray after sorting : ";
    display(x,10);

    return 0;
}

