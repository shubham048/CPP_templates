struct node
{
    map<char,int> m;        //adjacency list for each node
    int cnt=0;              //cnt of no of string starting with current path
    bool terminate=false;   //whether this is the end
};
struct trie{
    node a[100001];         //array for nodes
    int ptr=2;              //current empty pointer

    void insert(string &s){
        int cur=1;
        for(auto &r:s){
            if(a[cur].m.count(r)){
                cur=a[cur].m[r];
            }
            else{
                a[cur].m[r]=ptr;
                ptr++;
                cur=a[cur].m[r];
            }
            a[cur].cnt++;
        }
        a[cur].terminate=true;
    }

    bool search(string &s){
        int cur=1;
        for(auto &r:s){
            if(!a[cur].m.count(r)){
                return false;
            }
            cur=a[cur].m[r];
        }

        return a[cur].terminate;
    }
    bool startsWith(string &s){
        int cur=1;
        for(auto &r:s){
            if(!a[cur].m.count(r)){
                return false;
            }
            cur=a[cur].m[r];
        }

        return true;
    }
    int find(string &s){
        int cur=1;
        for(auto &r:s){
            if(!a[cur].m.count(r)){
                return 0;
            }
            cur=a[cur].m[r];
        }

        return a[cur].cnt;   
    }
};