#include<iostream>

using namespace std;

int Partition(int A[], int l, int r)
{
int p = A[l];
int i = l;
int j = r+1;

while(true){
        do{i++;}while(i<=r&&A[i]<=p);
        do{j--;}while(A[j]>=p);
        if(i>=j)break;
        swap(A[i],A[j]);
}
swap(A[l],A[j]);
return j;
}
void Quicksort(int A[], int l, int r){
if(l<r){
    int s= Partition(A,l,r);
    Quicksort(A,l,s-1);
    Quicksort(A,s+1,r);
}
}
int main()
{
    int i, n;
    cout<< "Enter the number of elements in the array: ";
    cin>>n;

    int A[n];

    cout<<"Enter the elements in the array:";
    for(i=0;i<n;i++)
        cin >> A[i];

    Quicksort(A,0,n-1);

for(int x:A)
    cout<<x<<"   ";
return 0;
}
