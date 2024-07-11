<h3>E1.1: Suppose you have a sorted list of 128 names, and you’re searching<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;through it using binary search. What’s the maximum number of<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;steps it would take?</h3>

<h4>Answer: max = log<sub>2</sub> 128 = 7;<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;so the maximum number of steps is 7 steps;</h4>

		    __________________________________________________________________

<h3>E1.2: Suppose you double the size of the list. What’s the maximum<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;number of steps now?</h3>

<h4>Answer: max = log<sub>2</sub> (128*2) = 8;<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;so the maximum number of steps is 8 steps;</h4>

		    __________________________________________________________________

## &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Give the run time for each of these scenarios in terms of Big O.

<h3>E1.3: You have a name, and you want to find the person’s phone number<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;in the phone book.</h3>

#### Answer: O(log<sub>2</sub> n);

                	          ----------------------------------------

<h3>E1.4: You have a phone number, and you want to find the person’s name<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;in the phone book. (Hint: You’ll have to search through the whole<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;book!)</h3>

#### Answer: O(n);

                	          ----------------------------------------

### E1.5: You want to read the numbers of every person in the phone book.

#### Answer: O(n);

                	          ----------------------------------------

<h3>E1.6: You want to read the numbers of just the As. (This is a tricky one!<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;It involves concepts that are covered more in chapter 4. Read the<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;answer—you may be surprised!)</h3>

#### Answer: O(n);

		    __________________________________________________________________
