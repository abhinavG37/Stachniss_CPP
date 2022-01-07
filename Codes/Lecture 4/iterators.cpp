#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    vector<double> x{1, 2, 3};
    for (auto it = x.begin(); it != x.end(); ++it)
    {

        cout << *it << endl;
    }

    map<int, string> m = {{1,"Hello"}, {2,"World"}};
    map<int, string>::iterator map_iterator = m.find(1);
    cout << map_iterator->first<<" : " << map_iterator->second << endl;

    auto map_iterator2 = m.find(2);
    cout << map_iterator2->first<<" : " << map_iterator2->second << endl;

    if(m.find(3) ==  m.end()){
        cout << "Key 3 was not found"<<endl;
    }


    return 0;
}