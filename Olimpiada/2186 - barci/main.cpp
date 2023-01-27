#include <bits/stdc++.h>
using namespace std;
ifstream in("barci.in");
ofstream out("barci.out");
int n, wmax, wmin, w[100001], used[100001];
struct unom {
    int previous, next, weight;
} people[100001];
void deletePair(int &pos) {
    people[people[pos].previous].next = people[pos].next;
    people[people[pos].next].previous = people[pos].previous;
    pos = people[pos].next;
}
int main()
{
    in >> n >> wmax >> wmin;
    for(int i = 1; i <= n; ++i) {
        in >> w[i];
        people[i].previous = i - 1;
        people[i].next = i + 1;
    }
    sort(w + 1, w + 1 + n, greater<int>());
    for(int i = 1; i <= n; ++i) {
        people[i].weight = w[i];
    }
    int pos = n;
    while(pos && people[1].weight + people[pos].weight <= wmax) {
        --pos;
    }
    int cnt = 0;
    for(int i = 1; i <= n; ++i) {
        if(used[i] == 0) {
            ++cnt;
            used[i] = 1;
            if(pos == i) {
                pos = people[pos].next;
            }
            while(people[pos].previous > i && people[i].weight + people[people[pos].previous].weight <= wmax) {
                pos = people[pos].previous;
            }
            if(used[pos] == 0 && pos <= n && i >= 1 && abs(people[i].weight - people[pos].weight) <= wmin && people[i].weight + people[pos].weight <= wmax) {
                used[pos] = 1;
                deletePair(pos);
            }
        }
    }
    out << cnt;
    return 0;
}
