#include <bits/stdc++.h>

#define MaxN 100010

using namespace std;

int a[MaxN];

void mSort(int *Data, int l, int r){
	if(l>=r) return;
	int mid=l+r>>1;
	mSort(Data,l,mid), mSort(Data,mid+1,r);
	int i=l, j=mid+1;
	int t=0;
	int tmp[r-l+1];
	while((i<=mid)&&(j<=r))
	     if(Data[i]<=Data[j]) tmp[t++]=Data[i++];
	     else tmp[t++]=Data[j++]; 
    while(i<=mid) tmp[t++]=Data[i++];
    while(j<=r) tmp[t++]=Data[j++];
    for(t=0,i=l;i<=r;t++,i++) Data[i]=tmp[t];
}

int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	mSort(a,1,n);
	for(int i=1;i<=n;i++) printf("%d ",a[i]);
	putchar('\n');
}
