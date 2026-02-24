//12. Integer to Roman
class Solution {
public:
    string intToRoman(int num) {
        string units[] = { "", "I","II", "III", "IV", "V","VI", "VII","VIII", "IX"};
        string tens[] = {"", "X","XX","XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
        string huns[] = {"", "C", "CC","CCC","CD", "D", "DC", "DCC", "DCCC", "CM"};
        string ths[] = {"","M", "MM","MMM"};
        return ths[num/1000] + huns[(num%1000)/100] + tens[(num%100)/10] + units[num%10];
    }
   
};