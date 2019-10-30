#include<stdio.h>
int search_idx(const int v[] ,int idx[] , int key , int n){
    int count = 0;
    for(int i = 0 ; i<n ; i++){
        if(v[i] == key){
            count++;
            idx[i] = v[i];
        }
    }

    return count;
}
int main(void){
    int v[] = {1,1,1};
    int idx[3] = {0};
    printf("%d\n",search_idx(v,idx,1,3));
}