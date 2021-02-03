#include <iostream>
#include <string>

using namespace std;

string multiply(string nums1, string nums2) {
    int n = int(nums1.length());
    int m = int(nums2.length());
    string out(n + m, '0');
    
    for(int i = n - 1; i>=0; i--){
        for(int j = m - 1; j >= 0; j--){
            int mul = (nums1[i] - '0') * (nums2[j] - '0');
            int sum = (out[i + j + 1] - '0') + mul;
            out[i+j+1] = sum % 10 + '0';
            out[i+j] += sum / 10 ;
        }
    }
    
    for(int i = 0; i < m + n; i++){
        if(out[i] !='0'){
            return out.substr(i);
        }
    }
    
    return "0";
}
