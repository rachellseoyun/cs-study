## Description
Write a recursive C program that calculates the move sequence for the Towers of Hanoi with an arbitary integer n > 0 number of disks.

- can move a tower of n = 1 directly from the source to the target stack
- otherwise, have to move the entire set of disks on top of the largest disk to the auxiliary stack (temporarily using the target stack as auxiliary stack for this action), and only then move the largest disk to the target.
- once done, left with a set of disks (one disk smaller than before) on the auxiliary stack
- now to be moved to the target stack
- by using the (now empty) source stack as the new current auxiliary stack we can repeat the process
