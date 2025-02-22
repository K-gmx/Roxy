#include <stdio.h>
#include <stdlib.h>
	
		//one two three four five six seven eight nine ten
		int a1[] = {0, 3, 3, 5, 4, 4, 3, 5, 5, 4, 3};
		//eleven twelve thirteen fourteen fifteen sixteen seventeen eighteen nineteen twenty
		int a2[] = {0, 6, 6, 8, 8, 7, 7, 9, 8, 8, 6};
		//ten twenty thirty forty fifty sixty seventy eighty ninety hundred
		int a3[] = {0, 3, 6, 6, 5, 5, 5, 7, 6, 6, 7};
    int Count_100(int x){              
	    if(x <= 10)   return a1[x];
	    if(x <= 20)   return a2[x - 10];
	    return a3[x / 10] + a1[x % 10];
	}
	int Count(int x){
	    if(x < 100)      return Count_100(x);
	    if(x == 100)     return 10;    
	    if(x == 1000)    return 11;    
	    if(x % 100 == 0) return a1[x / 100] + 7;
	    return a1[x / 100] + 7 + 3 + Count_100(x % 100);
	}


  
	
int main(){
	    int n, ans = 0;
	    scanf("%d",&n);
	    for(int i=1; i<=n; i++)   ans+=Count(i);
	    printf("%d",ans);
	

  return 0;
}
