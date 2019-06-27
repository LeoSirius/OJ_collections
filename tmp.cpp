#include<iostream>
using namespace std;

int main(){
    int n;
    while(scanf("%d", &n) != EOF){
        int *array = new int[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &array[i]);
        }
        int target;
        int target_idx = -1;
        scanf("%d", &target);
        for(int i = 0; i < n; i++){
            if(array[i] == target){
                target_idx = i;
                break;
            }
        }
        delete [] array;
        printf("%d\n", target_idx);
    }
    return 0;
}