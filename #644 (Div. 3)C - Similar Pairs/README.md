# C. Similar Pairs
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Weilining123 call two numbers 𝑥 and 𝑦 similar if they have the same parity (the same remainder when divided by 2), or if |𝑥−𝑦|=1. For example, in each of the pairs (2,6), (4,3), (11,7), the numbers are similar to each other, and in the pairs (1,4), (3,12), they are not.

You are given an array 𝑎 of 𝑛 (𝑛 is even) positive integers. Check if there is such a partition of the array into pairs that each element of the array belongs to exactly one pair and the numbers in each pair are similar to each other.

For example, for the array 𝑎=[11,14,16,12], there is a partition into pairs (11,12) and (14,16). The numbers in the first pair are similar because they differ by one, and in the second pair because they are both even.

# Input
The first line contains a single integer 𝑡 (1≤𝑡≤1000) — the number of test cases. Then 𝑡 test cases follow.

Each test case consists of two lines.

The first line contains an even positive integer 𝑛 (2≤𝑛≤50) — length of array 𝑎.

The second line contains 𝑛 positive integers 𝑎1,𝑎2,…,𝑎𝑛 (1≤𝑎𝑖≤100).

# Output
For each test case print:

* YES if the such a partition exists,
* NO otherwise.

The letters in the words YES and NO can be displayed in any case.

# Example
# input
~~~
7
4
11 14 16 12
2
1 8
4
1 1 1 1
4
1 2 5 6
2
12 13
6
1 6 3 10 5 8
6
1 12 3 10 5 8
~~~
# output
~~~
YES
NO
YES
YES
YES
YES
NO
~~~
# Note
The first test case was explained in the statement.

In the second test case, the two given numbers are not similar.

In the third test case, any partition is suitable.
