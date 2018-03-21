#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void selectionSort(int arrIn[], int arrIndx[], int n){
    int i,j,tmp,min,var_swap;
    int arrH[n];
    for(i=0;i<n;i++){
        arrIndx[i]=i;
        arrH[i] = arrIn[i];
    }
    for(i=0;i<n-1;i++){
        min=i;
        var_swap = i;
        for(j=i;j<n;j++){
            if(arrIn[j]<arrIn[min]){
                min=j;
            }
        }
        if(min!=i){
            tmp = arrIndx[min];
            arrIndx[min] = arrIndx[i];
            arrIndx[i]=tmp;
        }

        puts("");
        tmp = arrIn[min];
        arrIn[min] = arrIn[i];
        arrIn[i] = tmp;

    }
    //cek_storage(arrH,arrIn,arrIndx,n);

}

void cek_storage(int arrIn[],int arr[], int idx[], int n){
    int i,j;

    for (i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arrIn[i]==arr[j]){
                idx[i]=j;
            }
        }

    }
}
void printArray(int arrIn[], int panjang){
    int i;
    for (i=0;i<panjang;i++){
        printf("Index %d = %d\n", i, arrIn[i]);
    }
}
int main()
{
    int arr[] = {45,10,9,3,22,2};
    int arrIdx[sizeof(arr)/4];
    int arrNew[sizeof(arr)/4];
    printArray(arr,sizeof(arr)/4);
    selectionSort(arr,arrIdx,sizeof(arr)/4);

    puts("");
    printArray(arr,sizeof(arr)/4);
puts("");
    printArray(arrIdx,sizeof(arr)/4);

    int i;
    puts("");
    for(i=0;i<sizeof(arr)/4;i++){
        arrNew[arrIdx[i]]=arr[i];
    }
    puts("");
    printArray(arrNew,sizeof(arr)/4);
    return 0;
}
