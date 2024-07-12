### E4.1: Write out the code for the earlier sum function.

<h4>Answer: code:-<br>
<code>#include <<x>stdio.h>
int sum(int list[], int size){
	if(size == 0) return 0;
	else return *list+sum(list+1, size - 1);
}
int main()
{
	int lsum, list[3] = {2, 4, 6};
	lsum = sum(list, sizeof(list)/sizeof(int));
	printf("sum = %d", lsum);
}</code></h4>

		    __________________________________________________________________

### E4.2: Write a recursive function to count the number of items in a list.

<h4>Answer: ....</h4>

		    __________________________________________________________________

### E4.3: Find the maximum number in a list.

<h4>Answer: code:-<br>
<code>#include <<x>stdio.h>
int maxn = 0;
int max(int list[], int size){
	if(size == 0) return maxn;
	if(maxn < *list) maxn = *list;
    return max(list + 1, size - 1);
}
int main()
{
	int lmax, list[3] = {2, 4, 6};
	lmax = max(list, sizeof(list)/sizeof(int));
	printf("max = %d", lmax);
}</code></h4>

		    __________________________________________________________________

<h3>E4.4: Remember binary search from chapter 1? It’s a divide-and-conquer<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;algorithm, too. Can you come up with the base case and recursive<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;case for binary search?</h3>

<h4>Answer: <i>base case:</i> is getting the middle of a list or a group <br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;and matching it with the item that it's searching for,<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<i>recursive case:</i> is starting with getting the middle of the whole list <br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;then asking if it's high or low then getting the middle of the group <br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;before or after the previous middle (before if it's heigh and after if it's low) <br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;and so on until the base case gets terminated (matching the item).</h4>

		    __________________________________________________________________

## &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;How long would each of these operations take in Big O notation?

### E4.5: Printing the value of each element in an array.

#### Answer: O(n);

                	          ----------------------------------------

### E4.6: Doubling the value of each element in an array.

#### Answer: O(n);

                	          ----------------------------------------

### E4.7: Doubling the value of just the first element in an array.

#### Answer: O(1);

                	          ----------------------------------------

<h3>E4.8: Creating a multiplication table with all the elements in the array. So<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;if your array is [2, 3, 7, 8, 10], you first multiply every element by 2,<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;then multiply every element by 3, then by 7, and so on.</h3>

#### Answer: O(n²);

		    __________________________________________________________________
        
