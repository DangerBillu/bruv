
#include <stdio.h>

int main() {
    int arr[50], n, temp, i, ele, pos, pos2,j;

    printf("enter the number of elements in the array: ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        printf("enter the element: ");
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal array:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");


    for (i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    printf("\nReversed array:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    printf("\nEnter the position where you want to insert: ");
    scanf("%d", &pos);

    printf("Enter the element to insert: ");
    scanf("%d", &ele);  


    for (i = n; i >= pos; i--) {  
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = ele;
    n = n + 1;

    // print array after insertion
    printf("\nArray after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    
    printf("\nEnter the position where you want to delete: ");
    scanf("%d", &pos2);

    // delete element from same position (for demo)
    for (i = pos2 - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n = n - 1;

    // print array after deletion
    printf("\nArray after deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    // linear searching
    int key, found=0;
    printf("enter the element to be found");
    scanf("%d", &key);
    for(i=0; i<n; i++){
        if (arr[i]==key){
            found=1;
            pos = i+1;
            break;
        }
    }
    
    if(found==1){
        printf("Element found in %d position.", pos);
    }else{
        printf("Element not found.");
    }
    
    //binary searching
    int key;
    printf("enter the element to be found");
    scanf("%d", &key);
    int mid, low, high;
    low=0;
    high= n-1;
    do{
        mid = (low+high)/2;
        if(key<arr[mid]){
            high = mid-1;
        }else if(key>arr[mid]){
            low=mid+1;
        }
    }while(key!=arr[mid] && low<=high);
    
    if(key==arr[mid]){
        pos=mid+1;
        printf("position of element is:%d", pos);
    }
    
    //bubble sort
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for (i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    //selection sort
    for(i=0; i<n; i++){
        pos = i;
        int small=arr[i];
        for(j=i+1; j<n; j++){
            if(small > arr[j]){
                pos = j;
                small= arr[j];
            }
        }
        arr[pos]=arr[i];
        arr[i]=small;
    }
    for (i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    return 0;
}
