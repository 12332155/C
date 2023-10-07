#include <stdio.h>
#include <string.h>

//求n的k次方
double Pow(int n,int k){
        if(k>0){
            return n*Pow(n,k-1);
        }else if(k==0){
            return 1;
        }else{
            return Pow(n,k+1)/n;
        }
}

void init(int arr[],int sz){
    for (int i = 0; i < sz; ++i) {
        arr[i]= 0;
    }
}

void print(int arr[],int sz){
    for (int i = 0; i < sz; ++i) {
        printf("%d ",arr[i]);
    }
}
void reverse(int arr[],int left,int right){
    while (left < right){
        int middle =  arr[right];
        arr[right] = arr[left];
        arr[left]= middle;
        left++;
        right--;
    }
}
int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int sz = sizeof (arr)/sizeof (arr[0]);
    //init(arr,sz);
    reverse(arr,0,sz-1);
    print(arr,sz);





    return 0;
}
