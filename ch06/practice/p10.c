/*将倒叙传递给数组*/
#include<stdio.h>
void intary_rcpy(int v[] ,const int v2[], int n){
    int temp = v[0];
    for(int i = 0 ; i<n ;i++){
        for(int j = 1+i ; j<n ; j++){
            if(v[i]<v[j]){
                temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }
    for(int i = 0 ; i<n ;i++){
        printf("%d",v[i]);
    }
    printf("\n");
}
int main(void){
    int v2[] = {2,3,5,7,3};
    int v[5];
    for(int i = 0 ; i<5 ; i++){
        v[i] = v2[i];
    }
    intary_rcpy(v,v2,5);
}