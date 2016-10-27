#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int number_needed(string a, string b) {
   //char *s1 = &a[0];
   //char *s2 = &b[0];
    int n1[26]={0};
    int n2[26]={0};
    int i=0;
    while(a[i]!='\0')
    {
        n1[a[i]-'a']++;
        i++;
    }
    i=0;
    while(b[i]!='\0')
    {
        n2[b[i]-'a']++;
        i++;
    }
    
    int count=0;
    for(i=0;i<26;i++)
    {
        if(n1[i] < n2[i])
        {
            while(n1[i]!=n2[i])
            {
                n2[i]--;
                count++;
            }
        }
        else
        {
            while(n1[i]!=n2[i])
            {
                n1[i]--;
                count++;
            }
        }
    }
    
   return count;
}

int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    cout << number_needed(a, b) << endl;
    return 0;
}
