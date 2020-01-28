#include <stdio.h>

int main() {
    int t, cases = 0, r;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &r);
        int length = r*5, width = length*60/100;
        int right = length*45/100, left = length*55/100;
        printf("Case %d:\n", ++cases);
        printf("%d %d\n%d %d\n%d %d\n%d %d\n", -right, width/2,left,width/2,left,-width/2,-right,-width/2);
    }
    return 0;
}
