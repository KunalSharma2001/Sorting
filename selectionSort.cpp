//selection sort 
#include<iostream>
using namespace std;
void selectionSort(int *A, int n)
{
    int indexOfmin, temp;
    cout<<"Selection Sort"<<endl;
    for(int i=0; i<n-1; i++) // loop formoving the elemnts from the assumed min element to the n-1 post. , as after the sort of n-1 elem, the last one would be the highest elem only
    {
        indexOfmin = i;
        for(int j=i+1; j<n; j++) //its i+1 bpz the pointer is already on the 1st post so no need to inclde that. so we start srting from i+1 point
        {
            if(A[j] < A[indexOfmin]){
                indexOfmin = j; //puting the value of the min cmpered elem to the min_index.
            }
        }

        temp = A[i]; //swapping
        A[i] = A[indexOfmin];
        A[indexOfmin] = temp;
    }

}

void printArray(int A[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        cout<<A[i];
        cout<<" ";
    }
    cout<<endl;
}

int main()
{
    int A[] = {3, 6, 2, 13,12};
    int n=5; //size of array i.e no.of elements in the array
    printArray(A, n);
    selectionSort(A, n);
    printArray(A, n);
    return 0;
}