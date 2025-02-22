#include <stdio.h>
#include <stdlib.h>
#include <queue>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  queue<int>q;
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
    int x;
    scanf("%d",&x);
    if(x==1)
    {
      int y;
      scanf("%d",&y);
      q.push(y);
    }
    if(x==2)
    {
      q.pop();
    }
    if(x==3)
    {
      printf("%d ",q.front());
      printf("%d\n",q.back());
    }
  }

  return 0;
}
