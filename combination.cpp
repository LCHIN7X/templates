template<typename T = long long int>
 T int_pow(T x, int n) {
    T ans = 1;
    while(n>0)
        if(n%2 == 0)  x *= x, n /= 2;
        else ans *= x,--n;
    return ans;
 }  
 
 template<typename T = long long int>
 T fact(int n){
    T ans = 1;
    for (int k = 1; k <= n; ++k) ans *= k;
    return ans;
 } 

template<typename T = long long int>
 T nPr(int n, int k) {
    T ans = 1;
    for (int i = 0; i < k; ++i) ans *= n- i;
    return ans;
 } 

 template<typename T = long long int>
T nCr(int n, int k) {
    if (k > n / 2) k = n- k;
     T ans = 1;
     for (int i = 0; i < k; ++i)
        ans = (ans * (n- i)) / (i + 1);
    return ans;
 } 

