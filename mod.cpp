//dont use this when
// (a + b) % mod
// (a - b + mod) % mod （avoid for negative）
// (a * b) % mod
//only use for (a/b) % mod or more highclass function

long long modInverse(long long a, long long mod) {
    long long res = 1;              // Initialize result to 1
    long long power = mod - 2;      //  a^(mod-2) % mod 

    while (power > 0) {             // while power is greater than 0
        if (power % 2 == 1) {       // if power is odd
            res = (res * a) % mod;  // multiply result with current a and take modulo
        }
        a = (a * a) % mod;          // square a and take modulo
        power /= 2;                 // divide power by 2 (integer division)
    }

    return res;                     // return the final result (modular inverse)
}