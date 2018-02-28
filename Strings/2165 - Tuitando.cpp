#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(void)
{
    int quantidade;
    string tweet;

    getline(cin, tweet);

    quantidade=tweet.size();

    if(quantidade<=140)
        cout<<"TWEET"<<endl;
    else
        cout<<"MUTE"<<endl;

    system("PAUSE");
    return 0;
}
