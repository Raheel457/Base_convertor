#include <iostream>
using namespace std;
void display()
{
    cout << "To convert from Decimal to Binary Enter ------> (db)\n"; // Conversion no : 1
    cout << "To convert from Binary to Decimal Enter ------> (bd)\n"; // Conversion no : 2
    cout << "To convert from Binary to Decimal Enter ------> (bd)\n"; // Conversion no : 3
    cout << "To convert from Octal to Decimal Enter -------> (od)\n"; // Conversion no : 4
    cout << "To convert from Decimal to Hexadecimal Enter -> (dh)\n"; // Conversion no : 5
    cout << "To convert from Hexadecimal to Decimal Enter -> (hd)\n"; // Conversion no : 6
    cout << "To convert from Binary to Hexadecimal Enter --> (bh)\n"; // Conversion no : 7
    cout << "To convert from Hexadecimal to Binary Enter --> (hb)\n"; // Conversion no : 8
    cout << "To convert from Binary to Octal Enter --------> (bo)\n"; // Conversion no : 9
    cout << "To convert from Octal to Binary Enter --------> (ob)\n"; // Conversion no : 10
    cout << "To Exit the program Enter ------------------> (exit)\n";
    cout << "-->";
}
int expo(int baseNum, int exponent)
{
    int final = 1;
    for (int i = 0; i < exponent; i++)
    {
        final = final * baseNum;
    }
    return final;
}

int main()
{
    cout << "<---------------Welcome to CONVERZONE--------------->\n";
    while (true)
    {
        display();
        string user;
        cin >> user;
        if (user == "db")
        {
            int dec;
            string binary = "";
            cout << "Enter a decimal number : ";
            cin >> dec;
            int decimal = dec;
            while (dec != 0)
            {
                int a = dec % 2;
                binary = to_string(a) + binary;
                int b = dec / 2;
                dec = b;
            }
            cout << "The binary of " << decimal << " is :\n"
                 << binary << endl
                 << endl;
        }
        else if (user == "bd")
        {
            string bin;
            cout << "Enter a binary number : ";
            int decimal = 0;
            cin >> bin;
            int a = bin.length();
            int b = a - 1;
            for (int i = 0; i <= bin.length() - 1; i++)
            {
                if (bin.at(i) == '1')
                {
                    int val = expo(2, b);
                    decimal = decimal + val;
                }
                else if (bin.at(i) > '1')
                {
                    decimal = 0;
                    break;
                }
                b--;
            }
            if (decimal != 0)
            {
                cout << "The Decimal of " << bin << " is :\n"
                     << decimal << endl
                     << endl;
            }
            else
            {
                cout << "The Binary number " << bin << " is invalid.\n\n." << endl
                     << endl;
            }
        }
        else if (user == "do")
        {
            int dec;
            string octal = "";
            cout << "Enter a decimal number : ";
            cin >> dec;
            int decimal = dec;
            while (dec != 0)
            {
                int a = dec % 8;
                octal = to_string(a) + octal;
                int b = dec / 8;
                dec = b;
            }
            cout << "The Octal of " << decimal << " is :\n"
                 << octal << endl
                 << endl;
        }
        else if (user == "od")
        {
            string oct;
            cout << "Enter a Octal number : ";
            int decimal = 0;
            cin >> oct;
            int a = oct.length();
            int b = a - 1;
            for (int i = 0; i <= oct.length() - 1; i++)
            {
                if ((oct.at(i) >= 49) && (oct.at(i) <= 55))
                {
                    int val = (oct.at(i) - 48) * expo(8, b);
                    decimal = decimal + val;
                }
                else
                {
                    decimal = 0;
                    break;
                }
                b--;
            }
            if (decimal != 0)
            {
                cout << "The Decimal of " << oct << " is :\n"
                     << decimal << endl
                     << endl;
            }
            else
            {
                cout << "Octal number " << oct << " is invalid.\n\n";
            }
        }
        else if (user == "dh")
        {
            int dec;
            string hexa = "";
            cout << "Enter a Decimal number : ";
            cin >> dec;
            int decimal = dec;
            while (dec != 0)
            {
                int a = dec % 16;
                if (a < 10)
                {
                    hexa = to_string(a) + hexa;
                }
                else
                {
                    a += 55;
                    hexa = char(a) + hexa;
                }
                int b = dec / 16;
                dec = b;
            }
            cout << "The Hexadecimal of " << decimal << " is :\n"
                 << hexa << endl
                 << endl;
        }
        else if (user == "hd")
        {
            string hexa;
            int decimal = 0;
            cout << "Enter a Hexadecimal number : ";
            cin >> hexa;
            int a = hexa.length();
            int b = a - 1;
            for (int i = 0; i <= hexa.length() - 1; i++)
            {
                if (hexa.at(i) < 58)
                {
                    int val = (hexa.at(i) - '0') * expo(16, b);
                    decimal += val;
                }
                else if ((hexa.at(i) > 64) && (hexa.at(i) < 71))
                {
                    int val = (hexa.at(i) - 55) * expo(16, b);
                    decimal += val;
                }
                else
                {
                    decimal = 0;
                    break;
                }
                b--;
            }
            if (decimal != 0)
            {
                cout << "The Decimal of " << hexa << " is :\n"
                     << decimal << endl
                     << endl;
            }
            else
            {
                cout << "The Hexadecimal number " << hexa << " is invalid.\n\n";
            }
        }
        else if (user == "bh")
        {
            string bin;
            cout << "Enter a binary number : ";
            int decimal = 0;
            cin >> bin;
            int a = bin.length();
            int b = a - 1;
            for (int i = 0; i <= bin.length() - 1; i++)
            {
                if (bin.at(i) == '1')
                {
                    int val = expo(2, b);
                    decimal = decimal + val;
                }
                else if (bin.at(i) > '1')
                {
                    decimal = 0;
                    break;
                }
                b--;
            }
            if (decimal != 0)
            {
                string hexa = "";
                while (decimal != 0)
                {
                    int a = decimal % 16;
                    if (a < 10)
                    {
                        hexa = to_string(a) + hexa;
                    }
                    else
                    {
                        a += 55;
                        hexa = char(a) + hexa;
                    }
                    int b = decimal / 16;
                    decimal = b;
                }
                cout << "The Hexadecimal of " << bin << " is " << hexa << endl
                     << endl;
            }
            else
            {
                cout << "The Binary number " << bin << " is invalid.\n\n"
                     << endl
                     << endl;
            }
        }
        else if (user == "hb")
        {
            string hexa;
            int decimal = 0;
            cout << "Enter a Hexadecimal number : ";
            cin >> hexa;
            int a = hexa.length();
            int b = a - 1;
            for (int i = 0; i <= hexa.length() - 1; i++)
            {
                if (hexa.at(i) < 58)
                {
                    int val = (hexa.at(i) - '0') * expo(16, b);
                    decimal += val;
                }
                else if ((hexa.at(i) > 64) && (hexa.at(i) < 71))
                {
                    int val = (hexa.at(i) - 55) * expo(16, b);
                    decimal += val;
                }
                else
                {
                    decimal = 0;
                    break;
                }
                b--;
            }
            if (decimal != 0)
            {
                string binary = "";
                int dec = decimal;
                while (decimal != 0)
                {
                    int a = decimal % 2;
                    binary = to_string(a) + binary;
                    int b = decimal / 2;
                    decimal = b;
                }
                cout << "The binary of " << hexa << " is :\n"
                     << binary << endl
                     << endl;
            }
            else
            {
                cout << "The Hexadecimal number " << hexa << " is invalid.\n\n";
            }
        }
        else if (user == "bo")
        {
            string bin;
            cout << "Enter a binary number : ";
            int decimal = 0;
            cin >> bin;
            int a = bin.length();
            int b = a - 1;
            for (int i = 0; i <= bin.length() - 1; i++)
            {
                if (bin.at(i) == '1')
                {
                    int val = expo(2, b);
                    decimal = decimal + val;
                }
                else if (bin.at(i) > '1')
                {
                    decimal = 0;
                    break;
                }
                b--;
            }
            if (decimal != 0)
            {
                string octal = "";
                int dec = decimal;
                while (decimal != 0)
                {
                    int a = decimal % 8;
                    octal = to_string(a) + octal;
                    int b = decimal / 8;
                    decimal = b;
                }
                cout << "The Octal of " << bin << " is :\n"
                     << octal << endl
                     << endl;
            }
            else
            {
                cout << "The Binary number " << bin << " is invalid.\n\n"
                     << endl
                     << endl;
            }
        }
        else if (user == "ob")
        {
            string oct;
            cout << "Enter a Octal number : ";
            int decimal = 0;
            cin >> oct;
            int a = oct.length();
            int b = a - 1;
            for (int i = 0; i <= oct.length() - 1; i++)
            {
                if ((oct.at(i) >= 49) && (oct.at(i) <= 55))
                {
                    int val = (oct.at(i) - 48) * expo(8, b);
                    decimal = decimal + val;
                }
                else
                {
                    decimal = 0;
                    break;
                }
                b--;
            }
            if (decimal != 0)
            {
                string binary = "";
                cout << "Enter a decimal number : ";
                cin >> dec;
                int dec = decimal;
                while (decimal != 0)
                {
                    int a = decimal % 2;
                    binary = to_string(a) + binary;
                    int b = decimal / 2;
                    decimal = b;
                }
                cout << "The binary of " << dec << " is :\n"
                     << binary << endl
                     << endl;
            }
            else
            {
                cout << "Octal number " << oct << " is invalid.\n\n";
            }
        }
        else if (user == "exit")
        {
            cout << "<------------Thanks for using CONVERZONE------------>\n\n";
            break;
        }
        else
        {
            cout << "PLEASE!!! Choose the correct option." << endl
                 << endl;
        }
    }
    return 0;
}