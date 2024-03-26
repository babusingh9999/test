//
//  main.cpp
//  CPP_examples
//
//  Created by Babu Singh on 2024-01-16.
//

#include <iostream>
using namespace std;
int compare1(int a,int b)
{
    if(a>b) return -1;
    else return 1;
}
int compare2(int a,int b)
{
    if(a>b) return 1;
    else return -1;
}
void sort(int A[], int n, int (*compare)(int,int))
{
    for (int i = 0; i<n; i++)
    {
        for (int j= 0;j<n-1; j++)
        {
            if(compare(A[j],A[j+1]) > 0)
            {
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    //void (*fptr)();
    //fptr = PrintHello;
    //CallBack(fptr);
    int A[] = {3,2,1,5,6,4};
    sort(A,6,compare2);
    for(int i=0;i<6;i++)
        cout<<A[i];
    return 0;
}
