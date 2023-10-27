#include <cstdio> 
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;
long long int w[1001],c[1001],dp[3001],l[1001],r[1001],ans[1001][1001];
int main() {
    long long int N,S,maxw,e,S1,S2;
    cin >> N >> S;
    maxw=0;
    for(long long i=0;i<N;i++)
    {
        cin >> w[i] >> c[i];
        maxw=max(maxw,w[i]);
    }
    for (long long i=0;i<N;i++) {
        for (long long j=w[i];j<=3*maxw;j++) {
            dp[j]=max(dp[j],dp[j-w[i]]+c[i]);
          //  cout << dp[j] << " " ;
        }
        cout << endl;
    }
    e=0;
    S1=S;
    S2=S;   
    while(S1>0)
    {
        l[e]=S1;
        r[e]=S2;
        S1=(S1-maxw)/2+(S1-maxw)%2;
        S2=(S2+maxw)/2;
        e++;
        //cout << e << " " << S1 << " " << S2 << endl;
    }
    for(long long i=e-1;i>=0; i--) {
        for (long long j=l[i];j<=r[i];j++) {
            if(j<=3*maxw)
                ans[i][j-l[i]]=dp[j];
            else for(long long k=(j-maxw)/2+(j-maxw)%2;k*2LL<=j;k++)
                ans[i][j-l[i]]=max(ans[i][j-l[i]], ans[i+1][k-l[i+1]]+ans[i+1][j-k-l[i+1]]);
        }
        //cout << i << ": ";
        //for(int k = 0; k < S; ++k) {
        //    cout << ans[i][k] << " ";
        //}
        //cout << endl;
    }
    cout << ans[0][0] << endl;
    return 0;
}
