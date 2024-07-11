###E1.1: Suppose you have a sorted list of 128 names, and you’re searching
###      through it using binary search. What’s the maximum number of
###      steps it would take?

####Answer: max = log<sup>2</sup> 128 = 7;
####        so the maximum number of steps is 7 steps;

		__________________________________________________________________

###E1.2: Suppose you double the size of the list. What’s the maximum
###      number of steps now?

####Answer: max = log<sup>2</sup> (128*2) = 8;
####        so the maximum number of steps is 8 steps;

		__________________________________________________________________

##		Give the run time for each of these scenarios in terms of Big O.

###E1.3: You have a name, and you want to find the person’s phone number
###      in the phone book.

####Answer: O(log n);

                	   ----------------------------------------

###E1.4: You have a phone number, and you want to find the person’s name
###      in the phone book. (Hint: You’ll have to search through the whole
###      book!)

####Answer: O(n);

                	   ----------------------------------------

###E1.5: You want to read the numbers of every person in the phone book.

####Answer: O(n);

                	   ----------------------------------------

###E1.6: You want to read the numbers of just the As. (This is a tricky one!
###      It involves concepts that are covered more in chapter 4. Read the
###      answer—you may be surprised!)

####Answer: O(n);

		__________________________________________________________________
