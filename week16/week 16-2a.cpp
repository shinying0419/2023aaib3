//week 16-2a.cpp
//LeetCode math 50. Pow(x, n)
class Solution {
public:
    double myPow(double x, long long int n) {
        if(n==0) return 1;
        if(n<0){ //遇到負的N,那就負負得正,同時把x變成分母
            n=-n;
            x=1/x; //因為 x 的-1次方,是1/x
        }
        if(n%2==0){
            double now = myPow(x,n/2); //一半的x相乘
            return now*now; //左一半又一半,在相乘
        }
        else{
            double now=myPow(x,n/2);
            return now*now*x;
        }

        double ans=1;
        if(n>0){
            for(int i=0;i<n;i++){
            ans *=x;
            }
        }
        else if(n<0){
            for(int i=0;i<-n;i++){
                ans*=1/x;
            }
        }
        return ans;
    }
};