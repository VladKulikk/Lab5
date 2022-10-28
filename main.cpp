#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

int main() {
    int n,i,k,maxarr,maxindarr;
    int sum = 0;
    int arr[n];
    int choice;
    cout << "0-enter values from the keyboard; 1-random values"<< endl;
    cin >> choice;


    if(choice==0){
      cout << "Enter the size of the array" << endl;
      cin >> n;
      cout << "Enter array values" << endl;
        for(i=0;i<n;i++){
           cin >> arr[i];
        }
        for(i=0;i<n;i++){
          cout << " " << arr[i]<<endl;
        }
    }else if(choice==1){
        cout << "Enter the size of the array" << endl;
        cin >> n;
        srand(time(NULL));
        for(i=0;i<n;i++){
            arr[i]=rand();
            cout << " " << arr[i]<<endl;
        }
        for(i=0;i<n;i++){

        }
    }else
        cout << "Wrong values. Please, try again.\n" << endl;

    maxindarr=0;
    maxarr=arr[0];
    for(i=0;i<n;i++){
        if(maxarr<arr[i]){
            maxarr=arr[i];
            maxindarr=i;
        }
    }

    if(maxindarr==0){
        cout<<"Sum doesn't exist"<<endl;
    }else{
      for(k=0;k<=maxindarr;k++){
        sum+= arr[k];
      }
      cout<<"sum = "<<sum<<endl;
    }

    puts("press any key...");
    getch();
   return 0;
}
