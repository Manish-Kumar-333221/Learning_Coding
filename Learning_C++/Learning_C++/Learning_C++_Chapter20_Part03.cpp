#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int, int> hashMap;
    hashMap[10] = 58;
    hashMap[11] = 76;
    hashMap[18] = 39;
    hashMap[20] = 46;
    hashMap[46] = 37;
    hashMap[5] = 29;
    hashMap[35] = 29;
    hashMap[53] = 72;
    hashMap.insert({48, 73});
    hashMap.insert({73, 53});
    hashMap.insert({69, 58});
    map<int, int> :: iterator iter;
    for (iter = hashMap.begin(); iter != hashMap.end(); ++iter)
        {
            cout << iter->first << " " << iter->second << endl;
        }

    cout << "Size of map hashMap is: " << hashMap.size()
         << endl;
    cout << "Maximum size of map hashMap is: "
         << hashMap.max_size() << endl;
    cout << "hashMap is empty: " << hashMap.empty() << endl;

    return 0;
}