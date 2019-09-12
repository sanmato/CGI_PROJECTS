#include <iostream>
#include <string>

using namespace std;

int main () {  

   cout << "Content-Type:text/html\r\n\r\n";
   cout << "<html>\n";
   cout << "<head>\n";
   cout << "<title> Hello World! Second CGI Program By Santiago Mato </title>\n";
   cout << "</head>\n";
   cout << "<body>\n";

   cout << "<form action = 'main.cgi' method='post'>";
   cout << "<label> Introduzca su nombre: </label>\n";
   cout << "<input type='text' name='txt1' id='text1'>\n";
   cout << "<input type='submit' name='sbmt1' value='enviar'>\n";
   cout << "</form>\n";

   string str = "";
   cin >> str;
   cout << "<h2>Hello World! " << str << " This is my Refactoring 01 CGI Program!</h2>\n";
   
   cout << "</body>\n";
   cout << "</html>\n";

    return 0;
}