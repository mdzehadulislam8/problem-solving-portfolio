#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T, se, add = 0;
    cin >> T;
    vector<vector<int>> allData;
    vector<vector<int>> store;
    vector<vector<int>> result;

    for (int i = 0; i < T; ++i) {
        int n;
        cin >> n;
        vector<int> temp(n);
        for (int j = 0; j < n; ++j) {
            cin >> temp[j];
        }
        allData.push_back(temp);
    }

    for(int i = 0; i<allData.size(); i++){
    for (int j = 0; j < allData[i].size(); ++j) {
        if(allData[i][j] != i ){
           se = i;
           break;
        }
        if(allData[i][j] != se){
        add = add + allData[i];

        }
    }
    }

    for(int i = 0; i<allData.size(); i++){
    for (int j = 0; j < allData[i].size(); ++j) {
         result[i][j] = add + se;

    }
    }


    for (int i = 0; i < allData.size(); ++i) {
        for (int j = 0; j < allData[i].size(); ++j) {

        cout << result[i][j] << endl;
        }
        cout << endl;
    }

    return 0;
}
