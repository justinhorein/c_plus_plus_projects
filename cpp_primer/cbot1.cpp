#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main()
{
    string Response[] = {
        "I heard you!",
        "So, you are talking to me.",
        "Continue, I'm listening.",
        "Very Interesting Conversation.",
        "Tell me more..."
    };

    srand((unsigned) time(NULL));

    string sInput, sResponse;

    while(true) {
        cout << ">";
        getline(cin, sInput);
        int nSelection = rand() % 5;
        sResponse = Response[nSelection];
        cout << sResponse << endl;
    }

    return 0;
}