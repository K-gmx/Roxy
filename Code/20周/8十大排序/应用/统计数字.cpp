#include <bits/stdc++.h>
#define N 200010
using namespace std;
struct node{
	int a;
	int b;
}a[N];

bool cmp(node a,node b){
	return a.a<b.a;
}

int main()
{
  int n,k=0,num;
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    int flag=1;
    scanf("%d",&num);
    for(int j=1;j<=k;j++){
      if(num==a[j].a){
        flag=0;
        a[j].b++;
        break;
      }
    }
    if(flag==1){
      k++;
      a[k].a=num;
      a[k].b++;
    }
  }
  sort(a+1,a+k+1,cmp); 
  for(int i=1;i<=k;i++){
  	printf("%d %d\n",a[i].a,a[i].b);
  }
  return 0;
}
