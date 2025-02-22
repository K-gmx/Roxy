#include <stdio.h>

void read();
void quick(int c,int b);
int sum();
void print();
int n,a[10002];
int main(){
    int i;
    read();
    quick(1,n);
    print();
    return 0;
}
void read(){
    int i;
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    return; 
}
void print(){
    printf("%d\n",sum());
    return;
}
void quick(int c,int b){
    int f,e,k;
    if (c==b)return;
    f=c;
    e=b;
    k=a[c];
    while (f!=e){
        while ((a[e]>=k)&&(e>f))e--;
        if (a[e]<k){
            a[f++]=a[e];
            while((a[f]<k)&&(f<e))f++;
            if(a[f]>=k){
                a[e--]=a[f];
            }
        }
    }
    a[f]=k;
    if (f-c>1) quick(c,f-1);
    if (b-f>1) quick(f+1,b);
    return;
}
int sum(){
    int Af,Ae,Bf=1,Be,i,sum=0;
    if (n==1)return a[1];
    a[1]=a[1]+a[2];
    Af=3;
    Ae=n;
    Bf=1;
    Be=1;
    sum+=a[Be]; 
    printf("\n");
        for(int i=1;i<=n;i++){
        	printf("%d ",a[i]);
		}
		printf("\n");
        printf("%d %d %d %d\n",Af,Ae,Bf,Be);
    while(Bf<n-1){
        if((a[Af]<=a[Bf])&&(Af<=Ae)){
            if ((a[Af+1]<a[Bf])&&(Af+1<=Ae)){
                a[++Be]=a[Af]+a[Af+1];
                sum+=a[Be];
                Af=Af+2;
            }
            else {
                a[++Be]=a[Af]+a[Bf];
                sum+=a[Be]; 
                Af++;
                Bf++;   
            }
        }
        else {
            if (((a[Af]<a[Bf+1])&&(Bf+1<=Be)&&(Af<=Ae))||((Bf==Be)&&(Af<=Ae))){
                a[++Be]=a[Af]+a[Bf];
                sum+=a[Be];     
                Af++;
                Bf++;
            }
            else {
                a[++Be]=a[Bf]+a[Bf+1];
                sum+=a[Be]; 
                Bf=Bf+2;    
            }
        }
        printf("\n");
        for(int i=1;i<=n;i++){
        	printf("%d ",a[i]);
		}
		printf("\n");
        printf("%d %d %d %d\n",Af,Ae,Bf,Be);
    }
    return sum;
}
