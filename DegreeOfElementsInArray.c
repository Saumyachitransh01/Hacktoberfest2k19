#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int i, n, count = 1;
    cout<<"\nEnter the size of the array: ";
    cin>>n;
    int a[n];

    //ARRAY ELEMENTS ARE ENTERED
    for(i=0; i<n; i++) {
        cout<<"\nEnter the element "<<i+1<<" : ";
        cin>>a[i];
    }

    //SIZE IS FOUND, THE ARRAY IS SORTED AND PRINTED
    int size = sizeof(a)/sizeof(a[0]);
    sort(a, a + size);
    for(i = 0; i<n; i++) {
        cout<<a[i]<< " ";
    }

    //DEGREE OF EACH ELEMENT IS FOUND AND PRINTED
    for(i=0; i<n; i++) {
        if(a[i+1] == a[i])
            count++;
        else
            if(a[i+1] != a[i]) {
                cout<<"\n"<<a[i]<<"occurs "<<count<<" times.";
                count = 1;
            }
    }
    return 0;
}
