#include <stdio.h>

int main(){
    int x=5;
    int z;

    for(int y=10; y>=0; y--){
        z= 50/(y-x);
    }
    printf("%d", z);

    return 0;
}
