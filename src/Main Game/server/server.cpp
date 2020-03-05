#include "crow_all.h"
#include <string>

// include the path with crow_all.h in
// include Boost lib
// -D_WIN32_WINNT=0x0601 -std=c++11 -lws2_32 -lmswsock

#define BOOST_THREAD_USE_LIB

#define _WIN32_WINNT_WIN10                  0x0A00

using namespace std;

class Network {
	int a = 1;
};

class Data {
	int a = 1;
};


class Main {

    int start {
        1+1;

        /*
        TODO:
        - Boot the server
        - Accept first 10 connections
        - Create a gameID (in database)
        - Pass the gameID to the clients
        - Link the clients to their userID (recieve them from client as joining message?)
        - Start the game - threaded:
            - 4 rounds, 5 mins per round:
                - round 1 - 2 people kicked (8 remain)
                - round 2 - 2 people kicked (6 remain)
                - round 3 - 1 person kicked (5 remain)
                - round 4 - vote for winner at end
            - One minute voting between rounds
            - Clients should give each other number, for use in voting
            - In the last round, the majority voted person wins
            - All clients are told to leave
            - The GameID is deleted
            - ELOs on db are updated


        */

       /*
       JSON LAYOUT:

       Command (to tell a user to quit the game):
       {"gameID":"12345","type":"command","data":"quit","sender":"server","recipient":"12345"}

       Group Message:
       {"gameID":"12345","type":"message","data":"Hey guys!","sender":"789","recipient":"0"}

       Whisper:
       {"gameID":"12345","type":"whisper","data":"Let's team up!","sender":"456","recipient":"789"}
        

        Client will send the message and whisper the same as the server
        */
    }
}

// Should be untouched, put code in Main class
int main() {
    Main server;
    server.start()
}