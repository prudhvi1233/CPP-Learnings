
// A cricket coach has the scores of 15 players.

// Requirements
//     Accept scores of all players.
//     Display the original list.
//     Sort the scores using Bubble Sort.
//     Display the sorted scores.
//     Ask the coach to enter a player's score.
//     Search for the score using Binary Search.
//     Display the player's rank based on the sorted list.
//     Also display:
//         Highest score
//         Lowest score
//         Total number of players

#include <iostream>
using namespace std;

void sort(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            if(arr[j] > arr[j+1]){
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

}

int search(int arr[], int n, int x){
    int left = 0;
    int right = n-1;

    while(left <= right){
        int mid = (left + right) / 2;

        if(arr[mid] == x){
            return mid;
        }else if(arr[mid] < x){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }

    return -1;
}

 void highest_score(int arr[], int n){
        int max = arr[0];

        for(int i=0; i<n; i++){
            if(arr[i] > max){
                max = arr[i];
            }
        }

        cout<<"Highest score in the given list is: ";
        cout<<max;
        cout<<endl;
    }

void lowest_score(int arr[], int n){
        int least = arr[0];
        
        for(int i=0; i<n; i++){
            if(arr[i] < least){
                least = arr[i];
            }
        }

        cout<<"lowest score in the given list is: ";
        cout<<least;
        cout<<endl;
}

int main(){
    int n;
    cout<<"Enter number of players: ";
    cin>>n;

    int arr[100];
    cout<<"Enter scores of the players: ";
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Original list: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    sort(arr, n);

    cout<<"Sorted scores are: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    int x;
    cout<<"Enter any score: ";
    cin>>x;

    int result;
    result = search(arr, n, x);
    
    if(result == -1){
        cout<<"Entered score is not in the list";
    }
    if(result != -1){
        cout<<"Entered score is present at index: "<<result;
    }

    cout<<endl;

    cout<<"rank of the player based on the sorted list is: "<<result + 1;

    cout<<endl;

    highest_score(arr, n);
    lowest_score(arr, n);

    cout<<"Total number of players in the given list is: ";
    cout<<n;
}