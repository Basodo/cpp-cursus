#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int count;
    vector<int> numbers;
    int Missing = 0;


    cout << "How many numbers? ";
    cin >> count;
    cout << "Please enter the numbers ";

    for (int i = 0; i < count; i++)
    {
        int N = 0;
        cin >> N;
        numbers.push_back(N);
    }


    sort (numbers.begin(), numbers.end());


    for(int i = 0; i < numbers.size(); i++)
    {
        if(numbers[i]+1 != numbers[i+1])
        {
            Missing = numbers[i]+1;
            break;
        }
    }
    
    cout << "The smallest missing number is " << Missing;

    return 0;
}
