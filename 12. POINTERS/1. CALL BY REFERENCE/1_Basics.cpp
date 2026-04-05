#include<stdio.h>
#include<stdlib.h>
void search(int *p, int size, int key){
    for(int i=0; i<size; i++){
        if(key == *(p+i)){
            printf("Key found at position %d ", i+1);
            exit(0);
        }
    }
    printf("Key not found\n");
}
int main(){
    int n,key;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the array elements\n");
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the key to be found: ");
    scanf("%d", &key);
    search(a,n,key);
    return 0;

}