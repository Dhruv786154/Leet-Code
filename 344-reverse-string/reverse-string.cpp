class Solution {
public:
void reverse(vector<char>& str,int i,int n)
{
    if(i >= n/2)
    {
        return ;
    }
    swap(str[i],str[n-i-1]);
    i++;
    reverse(str, i, n);
}
    void reverseString(vector<char>& s) {
        // reverse(s.begin(),s.end());
        reverse(s,0,s.size());
    }
};