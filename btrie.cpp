struct node{
    int left=0,right=0;
};
struct trie{
    int ptr;
    vector<node> a;
    
    trie(int n){
        a.resize(n+2);
        ptr=2;
    }
    void insert(int n){
        int cur=1;
        for(int i=30;i>=0;i--){
            if(n&(1ll<<i)){
                if(!a[cur].right){
                    a[cur].right=ptr;
                    ptr++;
                }
                cur=a[cur].right;
            }
            else{
                if(!a[cur].left){
                    a[cur].left=ptr;
                    ptr++;
                }
                cur=a[cur].left;
            }
        }
    }
    
    int max_xor(int x){
        int cur=1;
        int ans=0;
        for(int i=30;i>=0;i--){
            if(x&(1ll<<i)){
                if(a[cur].left){
                    ans|=(1ll<<i);
                    cur=a[cur].left;
                }
                else{
                    cur=a[cur].right;
                }
            }
            else{
                if(a[cur].right){
                    ans|=(1ll<<i);
                    cur=a[cur].right;
                }
                else{
                    cur=a[cur].left;
                }
            }
        }
        return ans;
    }
};