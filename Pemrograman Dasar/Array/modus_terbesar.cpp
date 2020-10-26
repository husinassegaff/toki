#include <stdio.h>

int arr[1001];

int main() {
    int n, max = 0, i;
    scanf("%d",&n);

    while(n--) {
        int cek;
        scanf("%d",&cek);
        arr[cek]++;
    }

    for(i=0; i<=1000; i++){
        if(arr[max] <= arr[i]) max = i;
    }

    printf("%d\n",max);

    return 0;
}