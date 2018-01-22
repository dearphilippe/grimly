# grimly

Walk in a labyrinth :
◦ This project is about finding the shortest path between entering and leaving
a labyrinth while avoiding obstacles.
◦ A maze is given to you in a file to be passed as an argument to the program (Maze generator in Appendix).
◦ The first line of the labyrinth contains the information to read the map:
∗ The number of labyrinth lines then the number of columns (LINExCOL);
∗ The "full" character
∗ The "empty" character
∗ The character "path"
∗ The character "entered labyrinth" ∗ The character "exit labyrinth".
◦ The maze is composed of "empty" characters, "full" characters, characters "en- tering the labyrinth" and characters "exiting the labyrinth".
◦ The purpose of the program is to replace "empty" characters with "path" char- acters to represent the shortest way to cross the labyrinth.
◦ Movements can only be horizontally or vertically, not diagonally.
◦ In the case where several solutions exist, one will choose to represent the shortest one. In case of equality, it will be the one whose exit where the solution is the most up then the leftmost.
If there are 2 solutions for the same output, when crossing from the start we will choose the solutions in this order:
up> left> right> down
So if you have a choice between going up or right, you have to take the solution that goes up.

Definition of a valid card :
∗ All lines must respect the sizes given in the first line (LINExCOL).
∗ There can only be one entrance.
∗ There must be at least one exit.
∗ There must be a solution to the labyrinth.
∗ The labyrinth will not be more than a billion square.
∗ At the end of each line, there is a new line.
∗ The characters present in the card must be only those shown on the first line.
∗ If there is an invalid card, you will see the error output: MAP ERROR fol- lowed by a new line. The program will then proceed to the next labyrinth treatment.


• The executable must be named grimly and be in the root directory.
• The root directory must be named grimly.
• Your project must follow the Norme.
• The directory must have an author file in which you must put your login:
• The program should take several files in parameter.
• If no argument is passed, the program will read a maze from the standard input. • Your Makefile will compile the project.
• You can only use the open, close, write, read, malloc and free functions.
• You can ask your questions on the forum.
