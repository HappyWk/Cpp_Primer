#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

main()
{
    string str;
    cin >> str;
    for(auto &s:str)
        s = 'X';
    cout << str << endl;

    system("pause");
    return 0;
}