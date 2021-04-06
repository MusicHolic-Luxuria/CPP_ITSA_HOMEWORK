#include <iostream> 
#include <iomanip> 
using namespace std; 
 
int main() 
{ 
    float bottom, height; 
    cin >> bottom >> height; 
    cout << fixed << setprecision(1) << bottom * height / 2 << endl; 
}  