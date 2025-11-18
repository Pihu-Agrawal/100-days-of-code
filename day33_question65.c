//Search in a sorted array using binary search.
#include<stdio.h>
int main(){
    int n,target,found=-1;
    
    printf("number of elements in array=");
    scanf("%d",&n);
    int arr[n];

    //input elements of array
    printf("enter the elements of array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the number you want to find=");
    scanf("%d", &target);

    int low=0,high=n-1,mid;
    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == target) {
            found = mid;
            break;
        } else if (arr[mid] < target) {
            low = mid + 1;   // search right half
        } else {
            high = mid - 1;  // search left half
        }
    }

    if (found != -1) {
        printf("Element found at index: %d\n", found);
    } else {
        printf("Element not found\n");
    }

}