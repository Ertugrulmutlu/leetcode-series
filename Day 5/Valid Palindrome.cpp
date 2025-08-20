class Solution {
public:
    bool isPalindrome(string s) {
        // just alphanum iwth lowercase char
        string result;
        result.reserve(s.size()+1);

        for(char c: s){
            if(std::isalnum(static_cast<unsigned char>(c))){
                result.push_back(std::tolower(static_cast<unsigned char>(c)));
            }
        }
        cout << result;
        // solve way
        int left = 0,right = result.size() -1;
        while (left < right){
            if (result[left] != result[right]){
                return false;
            }
            left += 1;
            right -= 1;
        }
        return true;
    }
};
