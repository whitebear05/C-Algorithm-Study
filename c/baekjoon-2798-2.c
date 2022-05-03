#include <stdio.h>

int main(){
    
    int n, m, max = 0;
    int cards[100];
    
    scanf("%d %d", &n, &m);
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &cards[i]);
    }
    
    for(int i = 0; i < n - 2; i++) {
        for(int j = i + 1; j < n - 1; j++) {
            for(int k = j + 1; k < n; k++) {
                if(k == i || k == j) break;
                
                int sum = cards[i] + cards[j] + cards[k]; // 세 카드의 합
                if(sum > max && sum <= m) { // 세 카드의 합이 m을 넘지 않는 최대값일 때
                    max = sum;
                }
            }
        }
    }
    
    printf("%d", max);
    
    return 0;
}
