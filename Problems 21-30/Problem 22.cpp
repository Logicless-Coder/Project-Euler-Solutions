#include <bits/stdc++.h>
#include <chrono>

using namespace std;

int main() {
    auto start = chrono::high_resolution_clock::now();

    ifstream file;
    file.open("pe_p022_names.txt");
    if (!file) {
        cerr << "Unable to open the file!" << endl;
        exit(1);
    }

    vector<string> names;
    string line;
    while(getline(file,line))
    {
        std::stringstream   linestream(line);
        std::string         value;

        while(getline(linestream,value,','))
        {
            value.replace(0,1,"");
            value.replace(value.size()-1,1,"");
            names.emplace_back(value);
        }
    }

    sort(names.begin(), names.end());

    long long int ans = 0;
    int index = 1;

    for (string name: names) {
        long long int score = 0;
        for (char ch: name) {
            score += (ch - 'A' + 1);
        }
        ans += (score * index);
        index++;
    }

    cout << ans << endl;

    file.close();

    auto stop = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);
    cout << duration.count() << "ms" << endl;
    return 0;
}
