#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,b,c;
    cin>>a>>b>>c;
    cout.precision(1);
    if (a+b>c&&a+c>b&&b+c>a) cout<<fixed<<"Perimetro = "<<a+b+c<<endl;
    else cout<<fixed<<"Area = "<<(a+b)*c/2<<endl;
}
