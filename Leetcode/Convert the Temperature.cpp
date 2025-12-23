class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double Kelvin,Fahrenheit;
        Kelvin = celsius + 273.15;
        Fahrenheit = celsius * 1.80 + 32.00;
        vector<double> a(2);
        a[0]=Kelvin;
        a[1]=Fahrenheit;
        
        return a;
    }
};
