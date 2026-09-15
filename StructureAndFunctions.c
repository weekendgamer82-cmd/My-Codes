/*
Function and Structure Example

Raghav
15/9/26
*/

#include<stdio.h>
#include<stdlib.h>

//----------------Prototype---------------
void InputArray(int A[], int N);
void PrintArray(int A[], int N);
int BubbleSort(int A[], int N);
int BinarySearch(int A[], int N, int Key, int Found);

int main()
{
    int A[100], N, Key, Found, Loc;

    printf("Program to use bubble sort and binary search\n");
    printf("Enter the limit: \n");
    scanf("%d", &N);

    printf("Enter the elements: \n");
    InputArray(A, N);

    printf("The elements are: \n");
    PrintArray(A, N);

    printf("The sorted elements are: \n");
    BubbleSort(A, N);

    printf("\nThe key is: \n");
    scanf("%d", &Key);

    printf("Binary search: \n");
    Loc = BinarySearch(A, N, Key, Found);

    

}

//----------------Functions----------------
void InputArray(int A[], int N)
{
    int i;
    for(i=1; i<=N; i++){
        scanf("%d", &A[i]);
    }
}

void PrintArray(int A[], int N)
{
    int i;
    for(i=1; i<=N; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
}

int BubbleSort(int A[], int N)
{
    int i, j, Temp;
    for(i=1; i<=N; i++){
        for(j=1; j<=N-i; j++){
            if(A[j]>A[j+1]){
                Temp=A[j];
                A[j]=A[j+1];
                A[j+1]=Temp;
            }
        }
    }

    for(i=1; i<=N; i++){
        printf("%d ", A[i]);
    }
    
    return 0;
}

int BinarySearch(int A[], int N, int Key, int Found)
{
    int Low, High, Mid, Loc;
    Loc=-1;
    Low=1;
    High=N;
    Mid=(Low+High)/2;

    while(Low<=High){
        if(A[Mid]==Key){
            Found=1;
            Loc=Mid;
            break;
        }else if(A[Mid]<Key){
            Low=Mid+1;
        }else{
            High=Mid-1;
        }
    }

    if (Found==1){
        printf("The key is found at %d", Loc);
    }else{
        printf("The key is not found");
    }
    return 0;
}