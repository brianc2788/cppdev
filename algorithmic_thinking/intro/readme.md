This is DMOJ problem lkp18c2p1. (You might like to go now to the DMOJ
website and search for this problem, so that you’re ready to submit once we
solve it.)

**The Problem**

There are n lines of people waiting for food, and the number of people wait-
ing in each line is known. Then, each of m new people will arrive, and they
will join the shortest line (the line with the fewest number of people). Our
task is to determine the number of people in each line that each of the m
people joins.
(Spend a little time interpreting the above paragraph. There’s an exam-
ple coming next, so if anything is unclear, try to remedy it with the combina-
tion of the above paragraph and the example below.)
Suppose that there are three lines, with three people in line 1, two peo-
ple in line 2, and five people in line 3. Then, four new people arrive. (Try
to work out what happens for this case before reading the rest of this para-
graph.) The first person joins a line with two people, line 2; now line 2 has
three people. The second person joins a line with three people, line 1 or line
2—let’s say line 1; line 1 now has four people. The third person joins a line
with three people, line 2; line 2 now has four people. The fourth and final
person joins a line with four people, line 1 or line 2—let’s say line 1; line 1
now has five people.

**Input**

The input contains one test case. The first line contains two positive inte-
gers, n and m, giving the number of lines and number of new people, respec-
tively. n and m are at most 100. The second line contains n positive integers,
giving the number of people in each line before the new people arrive. Each
of these integers is at most 100.

Here’s the input for the above test case:
3 4
3 2 5

(Note how there is exactly one test case here. Therefore, we should ex-
pect to read exactly two lines of input.)

**Output**

For each of the m new people, output a line containing the number of peo-
ple in the line that they join.
Valid output for the above test case is
2
3
3
4

The time limit for solving the test case is three seconds. (Given that we
have to handle at most 100 new people for each test case, three seconds is a
long time. We won’t need any fancy data structures or algorithms.)
