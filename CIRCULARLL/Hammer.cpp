#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>
#include <sstream>
using namespace std;

class Node {
public:
    string name;
    int level;
    vector<Node*> children;

    Node(string name) : name(name), level(-1) {}

    void addChild(Node* child) {
        children.push_back(child);
    }
};

Node* findOrCreateNode(unordered_map<string, Node*>& nodeMap, const string& name) {
    if (nodeMap.find(name) == nodeMap.end()) {
        nodeMap[name] = new Node(name);
    }
    return nodeMap[name];
}

void bfsAssignLevels(Node* root) {
    queue<Node*> q;
    root->level = 0;
    q.push(root);

    while (!q.empty()) {
        Node* current = q.front();
        q.pop();

        for (Node* child : current->children) {
            if (child->level == -1) {  // Unvisited node
                child->level = current->level + 1;
                q.push(child);
            }
        }
    }
}

int main() {
    int N;
    cin >> N;
    cin.ignore();

    unordered_map<string, Node*> nodeMap;
    Node* root = nullptr;

    for (int i = 0; i < N; ++i) {
        string line;
        getline(cin, line);
        istringstream iss(line);
        string parentName;
        getline(iss, parentName, ':');
        parentName = parentName.substr(0, parentName.find_last_not_of(" \t") + 1);

        Node* parent = findOrCreateNode(nodeMap, parentName);
        if (i == 0) root = parent;

        string childrenNames;
        if (getline(iss, childrenNames)) {
            istringstream childStream(childrenNames);
            string childName;
            while (childStream >> childName) {
                Node* child = findOrCreateNode(nodeMap, childName);
                parent->addChild(child);
            }
        }
    }

    bfsAssignLevels(root);

    string melody1Str, melody2Str;
    getline(cin, melody1Str);
    getline(cin, melody2Str);
    vector<string> melody1, melody2;
    istringstream melody1Stream(melody1Str), melody2Stream(melody2Str);
    string note;

    while (getline(melody1Stream, note, '-')) melody1.push_back(note);
    while (getline(melody2Stream, note, '-')) melody2.push_back(note);

    int A, B, C;
    cin >> A >> B >> C;

    int m = melody1.size();
    int n = melody2.size();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    // Initialize dp array
    for (int i = 1; i <= m; i++) dp[i][0] = dp[i - 1][0] - C;
    for (int j = 1; j <= n; j++) dp[0][j] = dp[0][j - 1] - C;

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            dp[i][j] = max(dp[i - 1][j] - C, dp[i][j - 1] - C);

            Node* node1 = nodeMap.count(melody1[i - 1]) ? nodeMap[melody1[i - 1]] : nullptr;
            Node* node2 = nodeMap.count(melody2[j - 1]) ? nodeMap[melody2[j - 1]] : nullptr;

            int tune1Level = (node1 != nullptr) ? node1->level : -1;
            int tune2Level = (node2 != nullptr) ? node2->level : -1;

            if (node1 != nullptr && node2 != nullptr) {
                if (melody1[i - 1] == melody2[j - 1] || tune1Level == tune2Level) {
                    dp[i][j] = max(dp[i - 1][j - 1] + A, dp[i][j]);
                } else {
                    dp[i][j] = max(dp[i - 1][j - 1] - B, dp[i][j]);
                }
            }
        }
    }

    // Output only the final score as a single integer with no extra spaces or lines
    cout << dp[m][n];

    // Clean up dynamic nodes
    for (auto& pair : nodeMap) {
        delete pair.second;
    }

    return 0;
}