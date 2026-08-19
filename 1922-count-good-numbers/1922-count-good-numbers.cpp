class Solution {
public:
    int M=1000000007;
    long long Pow(long long a, long long b){
        if(b==0) return 1;
        if(b%2==0){
            return Pow((a*a)%M,b/2)%M;
        }
        else{
            return (a*Pow(a,b-1))%M;
        }
    }
    int countGoodNumbers(long long n) {
        long long even =(n+1)/2;
        long long odd =n/2;

        long long result=(Pow(5,even)*Pow(4,odd))%M;
        return result ;
        
    }


};