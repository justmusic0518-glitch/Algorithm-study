#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <iostream>

long long solution(long long n) {
    long long answer = 0;
    long long low = 1;
    long long high = n;
    long long mid = 0;
    
    
    while (low <= high)
    {
        mid = (low + high) / 2;
        
        if (mid == 0) { low = 1; continue; }
        
        if (mid == n / mid && n % mid == 0)
        {
            return (mid + 1) * (mid + 1);
        }
        else if (mid < n / mid)
        {
            low = mid + 1;
        }
        else 
        {
            high = mid - 1;
        }
    }
    return -1;
}