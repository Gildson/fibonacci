#include <iostream>

using namespace std;
int fibonacci (int n)
{
    int a=1,b=1,x;
    if(n==1) x=a;
    if(n==2) x=b;
    for(int i=3;i<=n;i++){
    x=a+b;
    a=b;
    b=x;
}
    return x;
}
int main()
{
    int n, x, cont = 1;
    cout << "Qual o termo desejado" << endl;
    cin >> n;
    do {
    x=fibonacci(cont);
    cout << x << endl;
    cont++;
    } while (cont <= n);
    return 0;
}
