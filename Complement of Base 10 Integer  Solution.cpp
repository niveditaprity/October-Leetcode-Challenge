class Solution {
public:
    int bitwiseComplement(int N) {
        if(!N) return 1;
        int n = 0, i = 0;
        while(N){
            if(!(N%2))n+=pow(2,i);
            N/=2,i++;
        }
        return n;  
        
    }
};
