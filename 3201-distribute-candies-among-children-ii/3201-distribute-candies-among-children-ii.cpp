class Solution {
public:
    
    long long comb2(long long x) {
        if (x < 0) return 0;         
        return x * (x - 1) / 2;    
    }

    long long distributeCandies(int n, int limit) {
        
        long long total = comb2(n + 3 - 1);  

        
        long long over1 = 3 * comb2(n - (limit + 1) + 3 - 1); 

        long long over2 = 3 * comb2(n - 2 * (limit + 1) + 3 - 1);

       
        long long over3 = comb2(n - 3 * (limit + 1) + 3 - 1);

      
        return total - over1 + over2 - over3;
    }
};