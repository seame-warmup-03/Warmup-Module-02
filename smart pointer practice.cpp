#include <iostream>
#include <memory>
using namespace std;

int main()
{
    // unique pointer
    unique_ptr<int> seame = make_unique<int>(25);
    cout << *seame << endl;
    unique_ptr<int> seame2 = move(seame);

    // shared pointer
    shared_ptr<int> val = make_shared<int>(50);
    cout << *val << endl;
    shared_ptr<int> val2 = val;
    cout << *val2 << endl;
    cout << val2.use_count() << endl;

    // weak pointer
    auto hello = make_shared<int>(100);
    cout<< *hello << endl;

    return 0;
}
