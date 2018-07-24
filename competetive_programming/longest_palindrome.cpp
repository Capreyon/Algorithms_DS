#include<bits/stdc++.h>
using namespace std;

int palindromeLengthFromCenter(string& A, int left, int right) {
    int originalLeft = left;
    while (left >= 0 && right < A.size() && A[left] == A[right]) {
        left--;
        right++;
    }
    return originalLeft - left;
}

string longestPalindrome(string A) {
    int maxLen = 1, maxStart = 0;
    for (int i = 0; i < A.size(); ++i) {
        int s1 = palindromeLengthFromCenter(A, i-1, i+1); // center is at position i
        int len1 = 1 + 2 * s1;
        if (len1 > maxLen)
            maxLen = len1, maxStart = i - s1;
            
        int s2 = palindromeLengthFromCenter(A, i, i+1); // center is between positions i and i+1
        int len2 = 2 * s2;
        if (len2 > maxLen)
            maxLen = len2, maxStart = i - s2 + 1;
    }
    
    string result(A.begin() + maxStart, A.begin() + maxStart + maxLen);
    cout<<maxLen;
    return result;
}

int main()
{
    string s,t;
    cin>>s;
    t=longestPalindrome(s);
    cout<<t;

}