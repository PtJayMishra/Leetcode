class Solution {
public:
int reverse(int n){
    long long int ne =0;
    while(n > 0){
        ne+= n%10;
        ne *= 10;
        n/= 10;
    }
    ne/=10;
    return ne;
}
    int mirrorDistance(int n) {
        int ne = reverse(n);
        return abs(n -ne);
    }
};