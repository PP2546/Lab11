#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
    int number;
    float sum;
    string text;
    float ans;
    ifstream num;
    num.open ("score.txt");
    while(getline(num,text)){
        sum += stof(text);
        ans += pow(stof(text),2);
        number++;
    }
 
    cout << "Number of data = " << number << "\n";
    cout << setprecision(3);
    cout << "Mean = " << sum/number << "\n";
    cout << "Standard deviation = " <<  sqrt((ans/number)-pow((sum/number),2));
    num.close();
    
    return 0;
}