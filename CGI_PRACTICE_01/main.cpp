#include <iostream>

using namespace std;

int main() {
   cout << "Content-Type:text/html\r\n\r\n";
   cout << "<html>\n";
   cout << "<head>\n";
   cout << "<title> Hello World! First CGI Program By Santiago Mato </title>\n";
   cout << "</head>\n";
   cout << "<body>\n";
   cout << "<h1>Hello World! This is my first CGI Program By Santiago Mato!</h1>\n";
   cout << "</body>\n";
   cout << "</html>\n";

   return 0;
}