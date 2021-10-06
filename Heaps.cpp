#include<bits/stdc++.h>
using namespace std;

int Parent(int i){
    return i/2;
}
int Left(int i){
    return 2*i;
}

int Right(int i){
    return 2*i +1;
}

void max_heapify(int A [] ,int i,int n ){
        int l = 2*i;
        int r = 2*i+1;
        int largest = i;
        if(l<=n & A[l]>A[i] ){
            largest =l;
        }
        if(r<=n & A[r]>A[largest] ){
            largest =r;
        }
        if(largest !=i){
            swap(A[i],A[largest]);
            max_heapify(A,largest,n);
        }

}
void Build_max_heap(int A [],int n){
    int hs=n;
    for(int i=n/2;i>=1;i--){
        max_heapify(A,i,n);
    }
}

void Heapsort(int A[],int n){
    Build_max_heap(A,n);
    for(int i=n;i>=2;i--){
        swap(A[1],A[i]);
        n=n-1;
        max_heapify(A,1,n);
    }
}

int Heap_Max(int A[]){
    return A[1];
}
int heap_extract_max(int A[],int n){
    if(n<1){
        cout<<"error";
    }
    int max=A[1];
    A[1]=A[n];
    n=n-1;
    max_heapify(A,1,n);
    return max;
}
void heap_increase_key(int A[],int i,int key){
    if(key<A[i]){
        cout<<"error";
    }
    A[i]=key;
    while(i>1 & A[Parent(i)]<A[i]){
        swap(A[i],A[Parent(i)]);
        i=Parent(i);
    }
}


int main(){
    int a[] = {0,23,17,14,6,13,10,1,5,7,12};
    Build_max_heap(a,10);
    for(int i=0;i<=10;i++){
        cout<<a[i]<<" ";
    }
    int n=10;
    cout<<n<<endl;;

    
    cout<<heap_extract_max(a,n)<<endl;
    cout<<n<<endl;
    for(int i=1;i<n;i++){
        cout<<a[i]<<" ";
    }


    
}