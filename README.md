# cubesum: generates sums of three cubes with integer coefficients
The logic is pretty simple.
1. Enumerate the set of integers like 0, 1, -1 , 2, -2, ... and so on
2. Since integers and natural numbers are both denumerable, they can be
put into one-to-one correspondence. Thus, the function map().
3. The problem is now reduced to generating a list of ordered triples with natural number parameters.
Thankfully, the method for enumerating ordered pairs (i.e. diagonal procedure) can be extended
to n-tuples by successively applying the same technique to the previously generated list.
4. Plug the generated triples to the function f(x,y,z) = x^3 + y^3 + z^3 after mapping the parameters to the list of integers.
5. ...
6. Profit!

BUG: Due to the nature of the technique, it is inevitible that the nth parameter grows incredibly slowly. Think of it as the last digit in a very long counter dial.
