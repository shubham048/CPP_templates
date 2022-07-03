struct segtree {

    vector<int> vv;          //change datatype
    void init(int n) {
        vv.assign(4 * n, 0);     //change datatype
    }
    int combine(int l, int r) {        // change whole function
        int res = l + r;
        return res;
    }
    void build(int si, int ss, int se, vector<int> &ar) {
        if (ss == se) {
            vv[si] = ar[ss];           //change initialization
            return;
        }

        int mid = (ss + se) / 2;

        build(2 * si, ss, mid, ar);
        build(2 * si + 1, mid + 1, se, ar);

        vv[si] = combine(vv[2 * si], vv[2 * si + 1]);
    }

    void update(int si, int ss, int se, int qi, int val) {
        if (ss == se) {
            vv[si] = val;          //change initialization
            return;
        }
        int mid = (ss + se) / 2;

        if (qi <= mid)update(2 * si, ss, mid, qi, val);
        else update(2 * si + 1, mid + 1, se, qi, val);

        vv[si] = combine(vv[2 * si], vv[2 * si + 1]);
    }

    int query(int si, int ss, int se, int qs, int qe) {//change datatype
        if (qs > se || qe < ss) {
            return 0;     //change neutral val
        }
        if (ss >= qs && qe >= se) {
            return vv[si];
        }

        int mid = (ss + se) / 2;
        int l = query(si * 2, ss, mid, qs, qe); //change datatype
        int r = query(si * 2 + 1, mid + 1, se, qs, qe);//change datatype

        return combine(l, r);
    }

};

/* Points to ponder
    ->change commented lines for different functions
    ->Keep array 1-indexed
    ->st.init(n)
    ->build(1,1,n,array_name);
    ->query(1,1,n,query_start,query_end);
    ->update(1,1,n,pos_to_update,val_to_put_at_pos);
*/
