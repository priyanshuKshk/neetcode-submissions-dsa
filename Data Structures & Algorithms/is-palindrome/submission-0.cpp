class Solution {
public:
    bool isPalindrome(string s) {
         int index = 0;   // position to place valid characters

    for(int i = 0; i < s.size(); i++){
        if(isalnum(s[i])){                 // keep only letters/numbers
            s[index] = tolower(s[i]);      // overwrite in same string
            index++;
        }
    }

    s.resize(index); 
    string rs=s;  // remove extra characters
 reverse(rs.begin(), rs.end());
return s==rs;
    }
};
