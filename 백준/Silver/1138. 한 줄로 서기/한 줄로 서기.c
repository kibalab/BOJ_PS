int p[10];
main(n,t,i,j,c){scanf("%d",&n);for(i=1;i<=n;i++){scanf("%d",&t);for(j=0,c=-1;j<n;j++){if(p[j]<1)c++;if(c==t){p[j]=i;break;}}}for(i=0;i<n;i++){printf("%d ",p[i]);}}