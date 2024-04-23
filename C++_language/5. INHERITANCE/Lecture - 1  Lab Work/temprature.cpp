#include <iostream>
using namespace std;

class P 
{
public:
    void setTemperature(float temp) 
    {
        temperature = temp;
    }

    float getTemperature()
    {
        return temperature;
    }

private:
    float temperature;
};

class Q : public P 
{
public:
    float toFahrenheit() 
    {
        return (getTemperature() * 9/5) + 32; 
    }
};

class R : public Q 
{
public:
    float toKelvin() 
    {
        return (toFahrenheit() + 459.67) * 5/9;
    }
};

int main() 
{
    R obj;
    float celsiusTemp;
    cout << "Enter temperature in Celsius: ";
    cin >> celsiusTemp;
    obj.setTemperature(celsiusTemp);
    float fahrenheitTemp = obj.toFahrenheit();
    float kelvinTemp = obj.toKelvin();
    cout << "Temperature in Fahrenheit: " << fahrenheitTemp << endl;
    cout << "Temperature in Kelvin: " << kelvinTemp << endl;
    return 0;
}

