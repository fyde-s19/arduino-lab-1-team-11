# arduino-lab-1-team-11
Question 1: Embedded Systems need a setup to enable different ports, variables, and instructions that are to be used in the rest of the code, and the loop is where the functional code that the board runs is put.

Question 2: Our code needs to be compiled so that it can be turned into machine code and read by the computer.

Question 3: When you are lowering the frequency, the "dimming" is not fluid, which is restricted by the delay function given to us by Arduino. In order to work around this, we need to make our own delay function that uses units smaller than the ones used in delay().