
#include <bits/stdc++.h>
using namespace std;

int size;
void FCFS(int arr[], int head)
{
	int seek_count = 0;
	int distance, cur_track;

	for (int i = 0; i < size; i++) {
		cur_track = arr[i];
		distance = abs(cur_track - head);
		seek_count += distance;
		head = cur_track;
	}

	cout << "Total number of seek operations = "
		<< seek_count << endl;
	cout << "Seek Sequence is" << endl;

	for (int i = 0; i < size; i++) {
		cout << arr[i] << endl;
	}
}

int main()
{
  cout<<"enter size";
  cin>>size;
	int arr[size];
	cout<<"enter request sequence";
  for (int i = 0; i < size; i++)
 { cin>>arr[i];
 }
  int head;
  cout<<"enter head";
  cin>>head;

	FCFS(arr, head);
  return 0;
}
