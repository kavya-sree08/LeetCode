class Solution {
public:
    int minChanges(string s) {
int c=0;

int i=0;
while(i<s.size())
{
    if(s[i]!=s[i+1])
    {
        c++;
       
    }
    i+=2;
}
return c;
    }
};