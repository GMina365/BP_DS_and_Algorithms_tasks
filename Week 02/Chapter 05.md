## &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Which of these hash functions are consistent?

### E5.1: f(x) = 1 (Returns “1” for all input)

#### Answer: ;

                	          ----------------------------------------

### E5.2: f(x) = rand() (Returns a random number every time)

#### Answer: ;

                	          ----------------------------------------

### E5.3: f(x) = next_empty_slot() (Returns the index of the next empty slot in the hash table)

#### Answer: ;

                	          ----------------------------------------

### E5.4: f(x) = len(x) (Uses the length of the string as the index)

#### Answer: ;

		    __________________________________________________________________

<h2>Suppose you have these four hash functions that work with strings:<br><br>
a. Return “1” for all input.<br>
b. Use the length of the string as the index.<br>
c. Use the first character of the string as the index. So, all strings<br>
&nbsp;&nbsp;&nbsp;&nbsp;starting with a are hashed together, and so on.<br>
d. Map every letter to a prime number: a = 2, b = 3, c = 5, d = 7,<br>
&nbsp;&nbsp;&nbsp;&nbsp;e = 11, and so on. For a string, the hash function is the sum of all<br>
&nbsp;&nbsp;&nbsp;&nbsp;the characters modulo the size of the hash. For example, if your<br>
&nbsp;&nbsp;&nbsp;&nbsp;hash size is 10, and the string is “bag”, the index is 3 + 2 + 17 %<br>
&nbsp;&nbsp;&nbsp;&nbsp;10 = 22 % 10 = 2.<br><br>
For each of these examples, which hash functions would provide a good<br>
distribution? Assume a hash table size of 10 slots.<br><br></h2>

<h3>E5.5: A phonebook where the keys are names and values are phone<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;numbers. The names are as follows: Esther, Ben, Bob, and Dan.</h3>

<h4>Answer: ;</h4>

                	          ----------------------------------------
                           
### E5.6: A mapping from battery size to power. The sizes are A, AA, AAA and AAAA.

<h4>Answer: ;</h4>

                	          ----------------------------------------
                           
<h3>E5.7: A mapping from book titles to authors. The titles are Maus, FunHome <br> 
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;and Watchmen.</h3>

<h4>Answer: ;</h4>

		    __________________________________________________________________
