class Solution {
public:
    int numberOfSteps(int num) {
        int n=num;
        int cont=0;
        while(n>0){
            cont++;
            if(n%2==0)n/=2;
            else n--;
        }
        return cont;
    }
};
