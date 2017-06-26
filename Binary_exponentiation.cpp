#include<bits/stdc++.h>
using namespace std;
long long Binary_exponentiation(long long x,long long n)
{
if(n==0)
  return 1;
else if(n%2==1)
  return x*Binary_exponentiation(x*x,(n-1)/2);
else
  return Binary_exponentiation(x*x,n/2);
 }
int main(){
  long long a;
  scanf("%lld",&a);
  printf("%lld",Binary_exponentiation(a,5));



}
