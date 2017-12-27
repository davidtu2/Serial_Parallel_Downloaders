Name: David Tu

Email: david.tu2@csu.fullerton.edu

Programming Language Used: C++

How to execute the Shell program:
1. In linux, type "./shellskel" to run the program
2. Within the command prompt, you will be asked to input a command. Input any command and press enter to execute
3. Repeat step 2 above or use the command "exit" to exit the program

How to execute the Serial Downloader:
1. In linux, type "./serial" to run the serial downloader
2. The program will automatically download the files listed in "urls.txt", in order. To change what to download, update the list of files in "urls.txt"
Special Note: Please ensure that the cursor ends on a empty line when updating "urls.txt", otherwise the last file in the list will not be downloaded

How to execute the Parallel Downloader:
1. In linux, type "./parallel" to run the parallel downloader
2. The program will automatically download the files listed in "urls.txt", simultaneously. To change what to download, update the list of files in "urls.txt"
Special Note: Please ensure that the cursor ends on a empty line when updating "urls.txt", otherwise the last file in the list will not be downloaded

Execution Times:
For downloading 2 files:
Serial Downloader:
real    0m3.937s
user    0m0.005s
sys     0m0.087s

Parallel Downloader:
real    0m3.581s
user    0m0.010s
sys     0m0.083s

For downloding 10 files:
Serial Downloader:
real    0m28.906s
user    0m0.044s
sys     0m0.314s

Parallel Downloader:
real    0m10.369s
user    0m0.040s
sys     0m0.303s

Answers to Questions:
1. In the output of time, what is the difference between real, user, and sys times?
a. Real: The time spent to finish a process in its entirety, including any sub processes and/or blocking/wait times (I/O)
b. User: The time spent on the process in user mode (executing the user code)
c. Sys: The time spent on the process using system calls (i.e. in System Mode)

2. Which is longer: user time or sys time? Use your knowledge to explain why.
I think system time is longer due to the many system calls that can be invoked
and the fact that waiting state time can take a while to complete (i.e. waiting for I/O)

3. When downloading the files above, which downloader finishes faster? Why do you think that is?
The parallel downloader was faster. This is due to the fact that it's downloading all of the files at the same time
since it doesn't have to wait for a file to finish downloading before proceeding to the next

4. Repeat the experiment for 10 files (any reasonably large-sized files, e.g., 100 MB, will do)
Is the downloader in the previous question still faster? If not so, why do you think that is?
The parallel downloader is still faster

Special Note: Due to block limit on the server, I had to download smaller files to accomodate this assignment