#include <stdio.h>
main(n,i){long long f=1;scanf("%d",&n);for(i=1;i<=n;i++){f*=i;f%=10000000;while(f%10==0)f/=10;}putchar(48+f%10);}