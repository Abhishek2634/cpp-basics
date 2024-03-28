# include <iostream> // for taking input output and has a preprocessor.
# include <math.h> // using math class

using namespace std;
int main(){
    // normal print in c++
    cout << 123 << false << 1.33 << "function up" << endl; // to print multiple values

    // print from next line then use '\n' or endl
    cout << "hello world"<<"\n";
    cout << "abhishek" << "\n";

    // use "\t to get extra space or tab space "
    cout << "\thello world" << endl;
     // "\0 tells the end of the programme and no printing is done after that"
     // string are stored as a array of  character in the memory.

    cout << "\0abc";

    // Arithmatic operators.
    cout << 1+2 << endl;
    cout << 2 * 3 << endl;
    cout << 10 / 3 << endl;
    cout << 2 - 22 << endl; // gives sub ans;
    cout << 10 % 4 << endl; // gives remainder.
    cout << 10.2 / 3 << endl; // gives float type ans;
    // c++ uses bodmas rule 

    // using ascii values
    cout << (int) 'g' << endl;
    cout << 'g' -1 << endl;

    // garbage value; random value that we cant predict
    cout << 'andc' << endl;
    cout << (char) 100 << endl;

    cout << sqrt(16) << endl;

    
}