#include <iostream>
using namespace std;
int search_rec(int x, int* array, int n){
    int need = 0, k = n/2;
    if (array[n/2] == x) return n/2;
    while (need != x){
        if  (array[k - 1] < x){
            k = k + (n - k)/2;
            need = array[k];
            cout<<k<<endl;
      }
        else{
            k = (k - 0)/2;
            need = array[k];
            cout<<k<<endl;
        }
    }
    return k;
}
int main()
{
    int n, a[100], x;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < 5; i++)
    {
        cin >> x;
        cout << search_rec(x, a, n) << " ";
    }
    cout << endl;
    return 0;
}
