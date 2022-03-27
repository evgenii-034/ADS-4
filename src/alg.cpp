// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
int count = 0;
for (int i = 0; i < len; i++) {
for (int j = i + 1; j < len; j++) {
if (arr[i] + arr[j] == value)
count++;
}
}
}
int countPairs2(int *arr, int len, int value) {
int count = 0;
for (int i = 0; i < len; i++) {
for (int j = len - 1 ; j > i; j--) {
if (arr[i] + arr[j] == value)
count++;
}
}
return count;
}
int countPairs3(int *arr, int len, int value) {
int count = 0;
for (int i = 0; i < len; i++) {
count += cbinsearch(arr, i, len, value - arr[i]);
}
return count;
}
