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
    pr.push(2);
    pr.push(6);
    pr.push(3);
    pr.push(4);
    pr.push(5);
    cout <<"Minimum Heap concept: " <<pr.top() << endl;

}


signed main(){
    // pair_implementation();
    // vector_implementation();
    // list_implementation();
    // deque_implementation();
    // stack_implementation();
    // queue_implementation();
    priority_queue_implementation();

    return 0;
}
