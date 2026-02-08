#include <iostream>
#include <string>
using namespace std;

class clscalculater{
private:
    float _Result = 0;
    float _PerviousResault = 0;
    string _LastOperation = "Clear";
    float _LastNumber = 0;
    bool _ISZero(int number) {
        return number == 0;
    }
public:
    void ADD(float num) {
        _LastNumber = num;
        _PerviousResault = _Result;
        _Result = _PerviousResault + _LastNumber;
        _LastOperation = "ADDing";
       

    }
    void SUB(float num) {
        _LastNumber = num;
        _PerviousResault = _Result;
        _Result = _PerviousResault - _LastNumber;
        _LastOperation = "Subtracting";
       

    }
    void Multiplay(float num) {
        _LastNumber = num;
        _PerviousResault = _Result;
        _Result = _PerviousResault * _LastNumber;
        _LastOperation = "Multiplay";
      

    }
    void Divide(float num) {
        if (_ISZero(num)) {
            while (_ISZero(num)) {
                cout << "\n Enter Numer not equal Zero  \n";
                cin >> num;
            }
        }
        _LastNumber = num;
        _PerviousResault = _Result;
        _Result = _PerviousResault / _LastNumber;
        _LastOperation = "Divide";
       

    }
    void CancelLastOPeration() {
        _LastOperation = "CancelLastOPeration";
        _Result = _PerviousResault;

    }




    void PrintResult() {
        cout << "\nResult After " << _LastOperation << " " << _LastNumber << " is a = " << _Result << endl;
    }

    void Clear()
    {
        _Result = 0;
        _PerviousResault = 0;
        _LastOperation = "Clear";
        _LastNumber = 0;
  }
    void power(int num) {
        _LastNumber = num;
        _PerviousResault = _Result;
        _LastOperation = "Power";
        _Result = pow(_PerviousResault, _LastNumber);
    }
};


int main() {

    clscalculater calc;

    cout << "\n--- Calculator Test ---\n";
    calc.ADD(50);
    calc.PrintResult();
    calc.SUB(20);
    calc.PrintResult();
    calc.Multiplay(10);
    calc.PrintResult();
    calc.Divide(5);
   calc.PrintResult();
   calc.CancelLastOPeration();
   calc.PrintResult();
   calc.Clear();
   calc.PrintResult();
   calc.power(5);
   calc.PrintResult();
   calc.ADD(10);
   calc.PrintResult();
   calc.power(5);
   calc.PrintResult();
   
    return 0;
}

