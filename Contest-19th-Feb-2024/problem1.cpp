#include<bits/stdc++.h>

using namespace std;


int SumOfNumber(int n)
{
    int sum = 0;
    
    // Sum of digits for numbers from 1 to 9
    if (n < 10)
        return n * (n + 1) / 2;
    
    // Sum of digits for numbers from 10 to 99
    sum += 45; // Sum of digits for numbers from 1 to 9
    
    // Sum of digits for numbers with three digits
    if (n >= 100) {
        int thousands = n / 100;
        sum += (thousands * 45) + (thousands * (thousands - 1) / 2) * 100;
        n %= 100;
    }
    
    // Sum of digits for numbers with two digits
    if (n >= 10) {
        int tens = n / 10;
        sum += (tens * 45) + (tens * (tens - 1) / 2) * 10 + tens * (n % 10 + 1);
        n %= 10;
    }
    
    // Sum of remaining single-digit numbers
    sum += n * (n + 1) / 2;
    
    return sum;
}


int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        cout << SumOfNumber(n) << endl;
    }

    return 0;
}