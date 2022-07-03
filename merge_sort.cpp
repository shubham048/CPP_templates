int merge(vector<int>&v, int l, int mid, int r) {
    int i = l, j = mid + 1;
    vector<int> tar(r - l + 1);
    int k = 0;
    int inv = 0;
    while (i <= mid && j <= r) {
        if (v[i] <= v[j]) {
            tar[k++] = v[i++];

        }
        else {
            inv += (mid + 1 - i);
            tar[k++] = v[j++];
        }
    }

    while (i <= mid) {
        tar[k++] = v[i++];
    }
    while (j <= r) {
        tar[k++] = v[j++];
    }

    for (int i = l; i <= r; i++) {
        v[i] = tar[i - l];
    }
    return inv;
}
int mergesort(vector<int> &v, int l, int r) {
    int mid = (l + r) / 2;
    int ans = 0;
    if (r > l) {
        ans += mergesort(v, l, mid);
        ans += mergesort(v, mid + 1, r);

        ans += merge(v, l, mid, r);
    }
    return ans;
}
