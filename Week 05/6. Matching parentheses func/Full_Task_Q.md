<h3>T6: In mathematical expressions, or any other expression, there can be many parentheses to group together some 
operations or subparts of the expression. <br>
There are three kinds of parentheses: (, {, and [, along with their matching ones: ), }, and ] respectively. <br>
It is required to write a function that takes a string, ending with the null character ’\0’, <br>
and returns 1 if the string has correct matching parentheses and 0 otherwise. <br>
For example, the string [· · ·(· · ·){· · ·} · · ·] is valid. However, the string [· · ·(· · ·}{· · ·}] is not valid 
because } is the wrong match of (. <br>
Also, the string [· · ·(· · ·){· · ·}] · · ·) is not valid, because the last ) does not match any <br>
parenthesis. <br>
Also, the string (· · · [· · ·(· · ·){· · ·}] is not valid because the first ( is not matched. <br>
Notice that, the dots in these expressions mean any sequence of characters. <br><br>
Hint: Make an empty stack. Read characters until the end of the string. <br>
If the character is an open anything, push it onto the stack. <br>
If it is a close anything, then if the stack is empty report an error. <br>
Otherwise, pop the stack. <br>
If the symbol popped is not the corresponding opening symbol, then report an error. <br>
At the end of the string, if the stack is not empty report an error.</h3>
