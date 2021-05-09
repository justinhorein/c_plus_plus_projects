#include <iostream>
#include <string>
#include <vector>
#include <ctime>
using namespace std;

const int MAX_RESP = 3;

typedef vector<string> vstring;

vstring find_match(string input);
void copy(char *array[], vstring &v);

typedef struct {
    char *input;
    char *responses[MAX_RESP];
}record;

record KnowledgeBase[] = {
    {"What is your name",
    {"My name is ChatterBot2.",
    "You can call me ChatterBot2.",
    "Why do you want to know my name?"}
    },

    {"Hi",
    {"Hi There!",
    "How are you?",
    "Hi!"}
    },

    {"How are you",
    {"I'm doing fine!",
    "I'm doing well and you?",
    "Why do you want to know how I am doing?"}
    },

    {"Who are you",
    {"I'm an A.I. program.",
    "I think that you know who I am.",
    "Why are you asking?"}
    },

    {"Are you real",
    {"Does it really matter to you?",
    "What do you mean by that?",
    "I'm as real as I can be."}
    }
};

size_t nKnowledgeBaseSize = sizeof(KnowledgeBase)/sizeof(KnowledgeBase[0]);

int main() {
    srand((unsigned) time(NULL));
    
    string sInput, sResponse;

    while (1){
        cout << ">";
        getline(cin, sInput);
        vstring responses = find_match(sInput);
        if (sInput == "BYE"){
            cout << "It was nice talking to you user, see you next time!" << endl;
            break;
        } 
        else if (responses.size() == 0) {
            cout << "I'm not sure if I understand what you are talking about." << endl;
        }
        else {
            int nSelection = rand() % MAX_RESP;
            sResponse = responses[nSelection]; cout << sResponse << endl;
        }
    }

    return 0;
}

vstring find_match(string input) {
    vstring result;
    for (int i = 0; i < nKnowledgeBaseSize; ++i) {
        if (string(KnowledgeBase[i].input) == input){
            copy(KnowledgeBase[i].responses, result);
            return result;
        }
    }
    return result;
}

void copy(char *array[], vstring &v){
    for (int i = 0; i < MAX_RESP; ++i){
        v.push_back(array[i]);
    }
}