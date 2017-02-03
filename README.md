# cubesum: generates sums of three cubes with integer roots
The logic is pretty simple.  
1. Enumerate the set of integers like 0, 1, -1 , 2, -2, ... and so on.  
2. Since integers and natural numbers are both denumerable, they can be  
put into one-to-one correspondence. Thus, the function map().  
3. The problem is now reduced to generating a list of ordered triples with natural number parameters (a.k.a indexes).  
Thankfully, the method for enumerating ordered pairs (i.e. the diagonal procedure) can be extended  
to n-tuples by applying the same technique to the (n-1)-tuple list.  
4. Plug the generated triples to the function f(x,y,z) = x^3 + y^3 + z^3 but not before mapping the indexes to the list of integers.  
5. ...  
6. Profit!  

BUG: Due to the nature of the technique, it is inevitible that the first parameters grow incredibly
slowly while the last parameters grow fast. 
Think of it as the disparity between the speeds of growth of digits in any numeral system.
Then consider the fact that this one has a continuously growing base!
