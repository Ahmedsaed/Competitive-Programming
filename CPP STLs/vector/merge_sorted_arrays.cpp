#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> A, vector<int> B, vector<int> &C) {
    int i = 0, j = 0, m = 0, N = A.size(), M = B.size();
    while (i < N && j < M) {
        if (A[i] < B[j])  
        C[m++] = A[i++];
        else 
        C[m++] = B[j++];
    }

    // one of A or B will exhaust first, we'll copy the remaining to C
    while (i < N)  // B exhausted
        C[m++] = A[i++];
    while (j < M)  // A exhausted
        C[m++] = B[j++];
}

int main() {
    vector<int> A = {2, 3, 4, 6}, B = {1, 5, 7, 8};
    vector<int> result(8);

    merge(A, B, result);

    cout << "Merge result: ";
    for (int i = 0, n = A.size() + B.size(); i < n; i++)
        cout << result[i] << ' ';
    cout << endl;

    return 0;
}