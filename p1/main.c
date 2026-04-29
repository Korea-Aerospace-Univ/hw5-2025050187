#include <stdio.h>

int main(){
    int a,b,c,n;
    int ok;
    scanf("%d", &n);
    
    for(a=1; a<=n/900; a++){
        for(b=2; b<=n/750; b+=2){
            for(c=1; c<=n/200; c++){
                if(900*a+750*b+200*c==n && (c<a||c<b)){
                    printf("%d %d %d\n", a,b,c);
                    ok=1;
                }
            }
        }
    }
    if (ok!=1)
        printf("none");
    return 0;
}
