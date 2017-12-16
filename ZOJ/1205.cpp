#include <iostream>
#include <vector>
#include <string.h>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string a, b; //����Ķ�����
    vector<int> c(105); //��Ž��
    while(cin >> a >> b)
    {
        reverse(a.begin(), a.end()); //��ת
        reverse(b.begin(), b.end());
        if(a.size() < b.size())
            swap(a,b);
        int aNum, bNum;
        int carry = 0; //��λ
        int sum = 0;
        c.clear();
        for(int i = 0; i < a.size(); i++)
        {
            if(a[i] - '0' > 10)
                 aNum = a[i] - 'a' + 10;
            else
            aNum = a[i] - '0';
            if(i >= b.size())
                bNum = 0;
            else
            {
            if(b[i] - '0' > 10)
                bNum = b[i] - 'a' + 10;
            else
                bNum = b[i] - '0';
            }

            sum = aNum + bNum + carry;
            carry = sum / 20;
            c.push_back(sum % 20);
        }
        if(carry) //���Ľ�λ
            c.push_back(carry);
        reverse(c.begin(), c.end());
        while(1)
        {
            if(c[0] == 0)
                c.erase(c.begin());
            else
                break;
        }
        vector<int>::iterator it; //������
        for(it = c.begin(); it != c.end(); it++)
        {
            if(*it < 10)
                cout << *it;
            else
                cout << char(*it - 10 + 'a');
        }
        a.clear();
        b.clear();
        c.clear();
        cout << endl;
    }
    return 0;
}
