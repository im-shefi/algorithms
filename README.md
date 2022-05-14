## Bubble Sort
1. Take a number.
2. Take another number.
3. Compare numbers.
4. If first is bigger, switch places.
5. Repeat this for all n numbers.
6. Repeat the whole thing n times.

## Binary Search
(works only for sorted arrays)
1. Take start as 0.
2. Take end as n-1.
3. Take middle as half of start+end.
4. Take find (the number you're looking for).
5. If find is bigger than array[middle], middle+1 is the new start.
6. If find is smaller than array[middle], middle-1 is the new end.
7. Repeat until find equals array[middle] or until start is bigger than end.
8. Now middle points to the index of find or find doesn't exist in the array.

## Quick Sort (Recursive)
1. Take start as 0.
2. Take end as n-1.
#### Partition:
1. Take pivot as end.
2. Take i and j as start.
3. If array[i] is bigger than array[pivot], increment i.
4. Else swap array[i] and array[j], increment i and j;
5. Repeat until i reaches pivot/end.
6. Return j-1 as index of pivot.
#### Sort:
1. Base case - return if start isn't bigger than end (one or less numbers in the array).
2. Take pivotIndex from partition function.
3. Call itself giving number before pivot (pivotIndex-1) as end (left side).
4. Call itself giving number after pivot (pivotIndex+1) as start (right side).
