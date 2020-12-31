#include <iostream>

using namespace std;

int main()
{
    /*hello this is the code of the guess game by jeenath*/
    cout << "welcome to guess game 2.0.0" << endl;
    string gamestart;
    cout << "type start to start the game ";
    cin >> gamestart;
    if(gamestart == "start"){
        string scNUM = "11223344556677889911";
        string gessNUM;
        cout << "type  the secret number ";
        cin >> gessNUM;
        if(gessNUM != scNUM){
            cout << "secret number was wrong, please try again. attam = 2 type = ";
            cin >> gessNUM;
            if(gessNUM != scNUM){
                cout << "secret number was wrong, please try again. attam = 1 type = ";
                cin >> gessNUM;
                if(gessNUM != scNUM){
                    while (free){
                        cout << "sorry, try again";
                    }
                }else if(gessNUM == scNUM){
                    cout << "yes, you win!!";
                    return 0;
                }
            }else if(gessNUM == scNUM){
                cout << "yes, you win!!";
                return 0;
            }
        }else if(gessNUM == scNUM){
            cout << "yes, you win!!";
            return 0;
        }
    }
    return 0;
}
