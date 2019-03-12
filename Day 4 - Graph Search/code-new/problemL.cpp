#include <bits/stdc++.h>

using namespace std;

vector<int> path;
vector<int> childrenVisited;

typedef int type;
struct node {
    int val;
    bool visited;
    vector<node> children;
};
typedef vector<node> graph;
graph G;

graph getChildren(node N) {
    vector<node> children;
    for (auto i = (N.children).begin(); i < (N.children).end(); i++) {
        if (!((*i).visited)) {
            children.push_back((*i));
            (*i).visited = true;
        }
    }
    return children;
}

void helper(int verts, int index) {
    if (G.size() <= 0) {
        cout << -1;
        exit(0);
    } else if (G[index].val == verts) {
        int flag = 0;
        for (auto i = G[index].children.begin(); i < G[index].children.end(); i++) {
            if ((*i).val == index - 1) {
                flag = 1;
            }
        }
        if (flag) {
            if (find(path.begin(), path.end(), G[index].val) == path.end())
                path.push_back(G[index].val);
            // cout << "found" << endl;
            // cout << "path size " << path.size() << endl;
            for (auto j = path.begin(); j < path.end(); j++) {
                cout << (*j) << " ";
            }
            exit(0);
        } else {
            cout << -1;
            exit(0);
        }
    } else {
        if (find(path.begin(), path.end(), G[index].val) == path.end())
            path.push_back(G[index].val);
        // cout << "at node: " << G[index].val << endl;
        graph chil = G[index].children;
        // cout << chil.size() << " children" << endl;
        for(auto i = chil.begin(); i < chil.end(); i++) {
            // cout << "at child " << (*i).val << endl;
            if (find(path.begin(), path.end(), (*i).val) == path.end())
                path.push_back((*i).val);
            else {
                if (find(childrenVisited.begin(), childrenVisited.end(), (*i).val) != childrenVisited.end()) {
                    path.erase(remove(path.begin(), path.end(), G[index].val), path.end());
                }
            }
            childrenVisited.push_back((*i).val);
            if ((*i).val == verts) {
                // cout << "found" << endl;
                // cout << "path size " << path.size() << endl;
                for (auto j = path.begin(); j < path.end(); j++) {
                    cout << (*j) << " ";
                }
                exit(0);
            }
            helper(verts, index + 1);
        }
    }
}

int main() {
    int verts, edges;
    cin >> verts >> edges;
    for (int i = 0; i < verts; i++) {
        node x;
        x.val = i + 1;
        G.push_back(x);
    }
    for(int i = 0; i < edges; i++) {
        int x, y;
        cin >> x >> y;
        G[x - 1].children.push_back(G[y - 1]);
        G[y - 1].children.push_back(G[x - 1]);
    }
    helper(verts, 0);
    return 0;
}
