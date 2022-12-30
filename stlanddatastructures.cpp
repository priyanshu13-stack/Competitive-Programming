#include <bits/stdc++.h>
#include<cmath>
using namespace std;
#define ll long long
#define mod 1000000007
#define pi 3.14159265
#define setbits(x) __builtin_popcountll(x)
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define sp(x) fixed<<setprecision(int x)

void pair_implementation(){
    pair<int,int> p = {1,2};
    cout << p.first <<" " <<  p.second << endl;

    pair<ll,pair<ll,ll>> p2 = {1,{2,3}};
    cout << p2.first <<" "<<  p2.second.first << " " << p2.second.second << endl;

    pair<ll,ll> arr[] = {{1,2}, {3,4}, {5,6}};
    cout << arr[1].first << endl;

}

void vector_implementation(){
    vector<ll> v;
    v.emplace_back(1);
    v.push_back(3);
    vector<pair<ll,ll>> v2;
    v2.push_back({3,4});
    // for (auto i : v){
    //     cout << i << " ";
    // }cout << endl;
    vector<pair<ll,ll>> v3(v2);
    for (auto i : v3){
        cout << i.second << " ";
    }cout << endl;

    vector<ll>::iterator it = v.begin();
    it++;
    cout << *(it) << endl;
    cout << v.back() << endl;
    
    for (vector<ll>::iterator it = v.begin(); it!=v.end(); it++){
        cout << *(it) << " ";
    }cout << endl;

    for (auto it = v.begin(); it!=v.end(); it++){
        cout << *it << " ";
    }cout << endl;
}

void list_implementation(){
    list<ll> ls;
    ls.push_back(3);
    ls.emplace_back(4);

    ls.push_front(7);
    ls.push_back(8);
    for (auto i : ls){
        cout << i << " ";
    }cout << endl;
}

void deque_implementation(){
    deque<ll> dq;
    dq.push_back(1);
    dq.push_front(3);
    for (auto i : dq){
        cout << i<< " ";
    }cout << endl;
}

void stack_implementation(){
    stack<ll> s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(7);
    s.pop();
    cout << s.top() << endl;
    cout << s.size() << endl;
    // In stack everything happens in big-oh(1) complexity.
}

void queue_implementation(){
    queue<ll> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.pop();
    cout << q.front();
    cout << endl;
    cout << q.back();
    cout << endl;
    cout << q.size();
    cout << endl;
    cout << q.empty();
}

void priority_queue_implementation(){
    priority_queue<ll> pq;
    // the largest value stays at the top.
    pq.push(2);
    pq.push(6);
    pq.push(3);
    pq.push(4);
    pq.push(5);
    

    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;

    // Minimum Heap priority queue implementation
    priority_queue<ll, vector<ll>, greater<ll>> pr;
    pr.push(2);  // {2}
    pr.push(6);  // {2,6}
    pr.push(3);  // {2,6,3}
    pr.push(4);  // {2,6,3,4}
    pr.push(5);  // {2,6,3,4,5}
    cout <<"Minimum Heap concept: " <<pr.top() << endl;

}

void sets_implementation(){
    // stores in sorted order and stores unique.
    set<ll> sg;
    sg.insert(3);
    sg.insert(3);
    sg.insert(3);
    sg.insert(3);
    sg.insert(4);
    sg.insert(5);
    sg.insert(6);
    sg.insert(4);
    auto cnt = sg.find(3);
    cout << *cnt << endl;
    // sg.erase(5);
    for (auto i : sg){
        cout << i << " ";
    }cout << endl;

    //unordered_set

    unordered_set<ll> st;
    // does not store in sorted order.
}

// binary search in stl
void binary_stl(){
    ll n = 5;
    ll arr[n] = {1,2,3,4,5};
    bool res = binary_search(arr,arr+n, 3);
    cout << res << endl;
}

void multiset_implementation(){
    // same as set but it stores duplicate elements also.
    multiset<ll> ms ;
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    ms.insert(4);
    ms.insert(5);
    ms.insert(4);
    ms.insert(3);

    ms.erase(1); // all 1's erased.
    ms.erase(ms.find(1)); // only 1 is erased.
    for (auto i : ms){
        cout << i << " " ;
    }cout << endl;
}

void map_implementation(){
    map<ll,ll> mp;
    // mp[key] = value ;
    mp[2] = 30;
    mp.insert({3,5});

    map<ll, pair<ll,ll>> mpp;
    mpp[4] = {5,7};

    for (auto i : mpp){
        cout << i.first << endl;
        cout << i.second.second << endl;
    }

    map<pair<ll,ll>, ll> mpl;
    mpl[{3,9}] = 1;
    mpl[{4,6}] = 0;
    mpl[{5,8}] = 9;
    for (auto i : mpl){
        cout << i.first.second << endl;
        cout << i.second << endl;
    }

    cout << mpl.size() << endl;

}
// unordered map has unique keys but it will not be sorted.
// map -> logn 


// function to sort the pairs in increasing order of the second element of the pair.
bool comp(pair<ll,ll> p1, pair<ll,ll> p2){
    if (p1.second < p2.second){
        return true;
    }
    if (p1.second > p2.second){
        return false;
    }
    if (p1.first > p2.first) return true;
    return false;

}

void extra(){
    pair<ll,ll> arr[] = {{1,2}, {2,1}, {4,1}};
    sort(arr,arr+3, comp);
    for (ll i = 0 ; i < 3 ; i ++){
        cout << arr[i].first << " ";
    }cout << endl;
}

ll binary_count_of_1(ll n){
    ll cnt = __builtin_popcountll(n);
    return cnt;
}

ll permut_string(string s){
   sort(s.begin(),s.end());
   ll cnt = 0;
   do{
       cnt++;
   }while (next_permutation(s.begin(),s.end()));
   return cnt;
}






signed main(){
    // pair_implementation();
    // vector_implementation();
    // list_implementation();
    // deque_implementation();
    // stack_implementation();
    // queue_implementation();
    // priority_queue_implementation();
    // sets_implementation();
    // binary_stl();
    // multiset_implementation();
    // map_implementation();
    // extra();
    // cout << binary_count_of_1(6);
    cout << permut_string("123");

    return 0;
}

