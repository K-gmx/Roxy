#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int h=0,m=0,s=0;
		for(int i=1;i<=2;i++){
			int a1,b1,c1,a2,b2,c2;
			scanf("%d:%d:%d %d:%d:%d",&a1,&b1,&c1,&a2,&b2,&c2);
			if(getchar()==' '){
				string s;
				cin>>s;
				a2+=((s[2]-'0')*24);
			}
			if(c2<c1){
				c2+=60;
				b2--;
			}
			s+=c2-c1;
			if(b2<b1){
				b2+=60;
				a2--;
			}
			m+=b2-b1;
			h+=a2-a1;
			//cout<<a1<<" "<<b1<<" "<<c1<<endl;
			//cout<<a2<<" "<<b2<<" "<<c2<<endl;
		}
		while(s>=60){
			s-=60;
			m++;
		}
		while(m>=60){
			m-=60;
			h++;
		}
		m+=(h-(h/2)*2)*60;
		s+=(m-(m/2)*2)*60;
		h/=2; m/=2; s/=2;
		char s1[3],s2[3],s3[3];
		s1[0]=h/10+'0';
		s1[1]=h%10+'0';
		s1[2]='\0';
		s2[0]=m/10+'0';
		s2[1]=m%10+'0';	
		s2[2]='\0';
		s3[0]=s/10+'0';
		s3[1]=s%10+'0';
		s3[2]='\0';
		cout<<s1<<":"<<s2<<":"<<s3<<endl;
	}
    return 0;
}

