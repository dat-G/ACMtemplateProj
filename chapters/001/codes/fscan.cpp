#include <bits/stdc++.h>

#define int long long

const int MaxN = 1e7 + 10;

template <class T>
inline bool fscan(T &vari){
	char ch;
	int sgn;
	if(ch=getchar(),ch==EOF) return false; //检测到EOF，返回False
	while((ch!='-')&&((ch<'0')||(ch>'9'))) ch=getchar(); //跳过非法字符
	sgn=(ch=='-')?-1:1; //符号处理
	vari=(ch=='-')?0:(ch-'0');
	while(ch=getchar(),((ch>='0')&&(ch<='9'))) vari=vari*10+ch-'0'; //数字处理
	vari*=sgn;
	return true;
}


signed main(){
	#ifdef localDebug
		freopen("file.in","r",stdin);
		freopen("file.out","w",stdout);
	#endif

	int a,b;
	fscan(a);
	fscan(b);
	printf("%lld %lld\n",a,b);
}