class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int sum=0,carry=0;
        for(int i=digits.size()-1;i>=0;i--)
        {
            if(i==digits.size()-1)
                    digits[i]=digits[i]+1;   // adding 1 to last element of vector
            sum=digits[i]+carry;           // finding sum i.e element at ith location + carry 
            digits[i]=(sum)%10;           // placing the ones digit 
            carry=sum/10;                // carry is the tens digit
        }
        if(carry!=0)                                    // if still a carry remains then insert it in the begining
            digits.insert(digits.begin(),carry);
        return digits;
    }
};