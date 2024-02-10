#pragma once

class Fraction {
private:
    long long _chisl;
    long long _znam;
    inline  void crack();
    inline void znak();

public:
    
    Fraction() : _chisl(0), _znam(0) {}

    Fraction(long long chisl = 0, long long znam = 1)
        : _chisl(chisl), _znam(znam) {}


    Fraction(const std::string& str) {
        std::size_t  pos = str.find("/");
        if (pos == std::string::npos) {
            this->_chisl = stoi(str);
            this->_znam = 1;
        }
        else {
            this->_chisl = stoi(str.substr(0, pos));
            this->_znam = std::stoi(str.substr(pos + 1, str.length()));
        }
        if (_znam == 0)
        {
            throw std::exception("Знаменатель не может быть 0");
        }
        if (_chisl == 0 && _znam == 1) {
            NULL;
        }
        znak();
    }
    
    long long getChisl() {
        return this->_chisl;
    }
    long long getZnam() {
        return this->_znam;
    }

    void multiplication(long long a, long long b, long long c, long long d);
    void division(long long a, long long b, long long c, long long d);
    void addition(long long a, long long b, long long c, long long d);
    void subtraction(long long a, long long b, long long c, long long d);
    double D_chislo(long long a, long long b);

   ~Fraction() { _chisl; _znam; }
};
