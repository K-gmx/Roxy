#include <iostream>
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
      if(q.empty())
      {
        printf("lan\n");
      }
      else q.pop();
    }
    if(x==3)
    {
      if(q.empty())
      {
        printf("qiao\n");
      }
      else printf("%d\n",q.front());
    }
    if(x==4)
    {
       printf("%d\n",q.size());
    }
  }
  return 0;
}
