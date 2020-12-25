#include <iostream>

using namespace std;

int main()
{
    string scNUM = "11223344556677889911";
    string gessNUM;
    cout << "type  the scNUM ";
    cin >> gessNUM;
    if(gessNUM != scNUM){
        cout << "secret number was wrong, please try again. attamp = 2 type = ";
        cin >> gessNUM;
        if(gessNUM != scNUM){
            cout << "secret number was wrong, please try again. attamp = 1 type = ";
            cin >> gessNUM;
            if(gessNUM != scNUM){
                while (free){
                    cout << "sorry, try again";
                }
            }else{
                cout << "yes, you win!!";
            }
        }else{
            cout << "yes, you win!!";
        }
    }else{
        cout << "yes, you win!!";
    }
    return 0;
}
