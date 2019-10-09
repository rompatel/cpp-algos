#include <bits/stdc++.h>
#include <time.h>

using namespace std;
 
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define ull unsigned long long 
#define precision(x,d) cout<<fixed<<setprecision(d)<<x
#define minQueue priority_queue<ll,vector<ll>,greater<ll> > 
#define maxQueue priority_queue<ll,vector<ll>,less<ll> > 
 
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define RFOR(i,a,b) for(ll i=a;i>b;i--)
#define FILL(a,b) memset((a),(b),sizeof((a)))
#define FAST ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);srand(time(NULL));
#define gl getline 
 
#define deb1(x) cout<<#x<<" : "<<x<<endl;
#define deb2(x,y) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<endl;
#define deb3(x,y,z) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<"\t"<<#z<<" : "<<z<<endl;
#define deba(a,n)   for(ll i=0;i<n;i++){ cout<<a[i]<<" ";       }cout<<endl;
#define debpa(a,n)   for(ll i=0;i<n;i++){ cout<<"("<<a[i].first<<","<<a[i].second<<")"<<" ";       } cout<<endl;
#define deb2a(a,n,m)  for(ll i=0;i<n;i++)  {  for(ll j=0;j<m;j++) {  cout<<a[i][j]<<" "; }   cout<<endl;   }cout<<" \n ";
#define debv(v,x,n) for(ll i=x;i<n;i++) {for(ll j=0;j<v[i].size();j++){cout<<v[i][j]<<" ";}cout<<endl;    }
#define debs(s)   set<ll>::iterator it; for (it = s.begin(); it != s.end(); it++)   { cout << *it<<" ";}    cout<<endl;


 
#define isPrime(x) int f=0; for(ll i=2;i<sqrt(x);i++) {  if(x%i==0){ f=1;cout<<"NO"; cout<<i<<" "; break; }} if(f==0){cout<<"YES";}
#define strup(s) transform(s.begin(), s.end(), s.begin(), ::toupper);

#define MOD 998244353
#define INF LONG_LONG_MAX
#define MINF LONG_LONG_MIN
 
ll gcd(ll a,ll b){while(b){ll x=a%b;a=b;b=x;}return a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
    //ll numVowel(s,n,m) {ll c=0;FOR(i,n,m+1){ if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){c++;} } return c;}   
 ll freq(string s,string s1)   {ll count = 0;ll nPos = 0;   while(nPos != -1) { nPos = s.find(s1, nPos + 1);count++;} return count;} 
ll ArSum(ll a[], ll i,ll j){ll initial_sum  = 0;    return accumulate(a+i, a+j, initial_sum);}
 ll fact(ll n,ll k) {  if(n<=k) return 1;   else { return ((n)*(fact(n-1,k))%MOD)%MOD;  } }
 ll power(ll x,ll n){if(n==0) return 1;
    else if(n%2==0)      {return power(((x%MOD)*(x%MOD))%MOD,n/2)%MOD;    }
    else{return ( (x%MOD)*(power(((x%MOD)*(x%MOD))%MOD,n/2)%MOD) )%MOD;}}
 
 
#define vi          vector<ll int>
#define all(a)      (a).begin(),(a).end()
#define MAXN 5000002 
 
vector<ll> v[500005]; 
bool vis[500001]={0};
vi fr(1000001);
pair<ll,ll> a[500001];
vi pet(1000005);
vi ch;
vi bp;
// ll dp[500001];
ll c=0,ans=0,n,m;
// string s[52];
stack<ll> st ;

bool sos(pair<ll,ll> a,pair<ll,ll> b)
{
	return a.ss<b.ss;
}


int main()
 {
     FAST;
     
     

   return 0;
   
 }
   
