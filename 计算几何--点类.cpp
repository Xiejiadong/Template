#include<cstdio>  
#include<iostream>  
#include<algorithm>  
#include<cstdlib>  
#include<cstring>
#include<string>
#include<climits>
#include<vector>
#include<cmath>
#include<map>
#include<set>
#include<queue>
#include<ctime>
#define LL long long
#define inf 0x3f3f3f3f
#define P pair<int,int>

using namespace std;

inline char nc(){
    /* 
  static char buf[100000],*p1=buf,*p2=buf;
  if (p1==p2) { p2=(p1=buf)+fread(buf,1,100000,stdin); if (p1==p2) return EOF; }
  return *p1++;
    */return getchar();
}
  
inline void read(int &x){
  char c=nc();int b=1;
  for (;!(c>='0' && c<='9');c=nc()) if (c=='-') b=-1;
  for (x=0;c>='0' && c<='9';x=x*10+c-'0',c=nc()); x*=b;
}
  
inline void read(LL &x){
  char c=nc();LL b=1;
  for (;!(c>='0' && c<='9');c=nc()) if (c=='-') b=-1;
  for (x=0;c>='0' && c<='9';x=x*10+c-'0',c=nc()); x*=b;
}
 
inline void read(char &x){
  for (x=nc();!(x=='('||x==')');x=nc());
}

inline int read(char *s)
{
    char c=nc();int len=1;
    for(;!(c=='.'||c=='D'||c=='O'||c=='C');c=nc()) if (c==EOF) return 0;
    for(;(c=='.'||c=='D'||c=='O'||c=='C');s[len++]=c,c=nc());
    s[len++]='\0';
    return len-2;
}
int wt,ss[19];
inline void print(int x){
    if (x<0) x=-x,putchar('-'); 
    if (!x) putchar(48); else {
    for (wt=0;x;ss[++wt]=x%10,x/=10);
    for (;wt;putchar(ss[wt]+48),wt--);}
}
inline void print(LL x){
    if (x<0) x=-x,putchar('-');
    if (!x) putchar(48); else {for (wt=0;x;ss[++wt]=x%10,x/=10);for (;wt;putchar(ss[wt]+48),wt--);}
}

const double eps=1e-8;
int cmp(double x)
{
    if (fabs(x)<eps) return 0;
    if (x>0) return 1;
    return -1;
}

