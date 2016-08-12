
#include <iostream>
#include <string>
#include <zmqpp/zmqpp.hpp>

using namespace std;
using namespace zmqpp;

int main(int argc, char *argv[]) {
  const string endpoint = "tcp://*:4242";

  // initialize the 0MQ context
  context ctx;

  // generate a pull socket
  socket s(ctx, socket_type::pull);

  // bind to the socket
  cout << "Binding to " << endpoint << "..." << endl;
  s.bind(endpoint);

  // receive the message
  while (true) {
    cout << "Receiving message..." << endl;
    message msg;
    // decompose the message
    s.receive(msg);
    string text;
    int number;
    msg >> text >> number;
    cout << "Received text:\"" << text << "\" and a number: " << number << endl;
  }

  cout << "Finished." << endl;
}
