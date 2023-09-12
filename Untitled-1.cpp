#include "iostream"
using namespace std;

class one{
    private:
    int n;
    public:
    void input(){
        cout<<"Enter a number : ";
        cin >> n;
        cout<<"you entered : "<<n;
    }
    friend void sum(one num);
};
void sum(one num)
{
    int temp;
    temp=num.n;
}
int main()
{
    one num;
    num.input();
    return 0;
}