#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int* array_left_rotation(int* a, int n, int k) {
    int temp;
    int *output = (int *)malloc(sizeof(int) * n);
    for(int i=0;i<n-k;i++)
    {
        output[i] = a[k+i];
    }
    int j=0;
    for(int i=0;i<k;i++)
    {
        output[n-k+i] = a[j];
        j++;
    }    
    return output;
    
}

int main(){
    int n; 
    int k; 
    scanf("%d %d",&n,&k);
    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    int *output = array_left_rotation(a,n,k);
    for(int a_i = 0; a_i < n; a_i++){
       printf("%d ",output[a_i]);
    }
    
    free(a);
    free(output);
    return 0;
}
//C++ source code using vectors
#if 0
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

vector<int> array_left_rotation(vector<int> a, int n, int k) {
    int temp;
    vector<int> output(n);
    for(int i=0;i<n-k;i++)
    {
        output[i] = a[k+i];
    }
    int j=0;
    for(int i=0;i<k;i++)
    {
        output[n-k+i] = a[j];
        j++;
    }    
    return output;
    
}

int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
        cin >> a[a_i];
    }
    if(k==n)
    {
        for(int i = 0; i < n;i++)
            cout << a[i] << " ";
        return 0;    
    }
    vector<int> output = array_left_rotation(a, n, k);
    for(int i = 0; i < n;i++)
        cout << output[i] << " ";
    cout << endl;
    return 0;
}
#endif