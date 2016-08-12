
#include <iostream>
#include <string>
#include <zmqpp/zmqpp.hpp>

using namespace std;
using namespace zmqpp;

int main(int argc, char *argv[]) {
  const string endpoint = "tcp://192.168.13.238:4242";

  // initialize the 0MQ context
  context ctx;

  // generate a push socket
  socket s(ctx, socket_type::push);

  // open the connection
  cout << "Opening connection to " << endpoint << "..." << endl;
  s.connect(endpoint);

  // send a message
  cout << "Sending text and a number..." << endl;
  message msg;
  // compose a msg from a string and a number
  msg << "Carolina" << 20;
  s.send(msg);

  cout << "Sent message." << endl;
  cout << "Finished." << endl;
}

