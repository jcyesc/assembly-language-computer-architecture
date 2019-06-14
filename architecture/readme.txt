                                                 readme.txt

                       H1 Software Package
                           Version 6.1
                Copyright (c) 2007 Anthony J. Dos Reis
                         June 5, 2007
          
DISCLAIMER                                                    

The H1 Software Package is provided to you on an "as is" basis 
for instructional purposes only, without any warranties, 
expressed or implied.  The author and the publisher of the H1 
Software Package shall not be liable in any event for incidental, 
consequential, special, or punitive damages in connection with, 
or arising out of the distribution, performance, or use of the H1 
Software Package.               
                                                                 
================================================================= 
CONTACTING AUTHOR OR PUBLISHER

Author

     email:          dosreist@newpaltz.edu   

     web address:    www.cs.newpaltz.edu/~dosreist

                     (that's newpaltz, NOT newplatz)

Publisher

     web address:    www.course.com (select computer science, 
                     then computer architecture)

================================================================= 
PLATFORMS SUPPORTED

     Microsoft Windows
     Microsoft DOS
     Sun Sparc Solaris
     X86 Linux
     Macintosh OS X

================================================================= 
THE LATEST VERSION

Version 6.1 works the same way as the original version.  Thus, 
the how-to-use-the-software information in the textbook is still 
valid.  However, Version 6.1 has some significant enhancements 
that should prove very valuable.  It also has a number of minor 
bug fixes.  It is simple to upgrade to Version 6.1--simply 
replace the files from the older version with the files from 
Version 6.1. 

For a tutorial overview on the major enhancements to the software 
package since its original release, see the file whatsnew.txt in 
this package.  See also VERSION HISTORY below and the file require.txt. 


Major enhancements since the original release:

sim now has a program verifier that checks the correctness of 
programs for most of the end-of-chapter problems.  The verifier 
can also check if a program's size and instruction counts are 
within prescribed limits.

The debugger now has the /a command which runs a student's 
program against pre-defined test cases and produces a log file 
that shows the student's name, time stamp, program statistics, 
test runs, source code, and the correct/NOT CORRECT evaluation of 
the program verifier.  This feature means all students run their 
programs against the same test cases in the same order.  This 
consistency along with the program verifier makes evaluating 
programming assignments easier and more accurate for students and 
instructors. 

DW statements can now be used in line with executable code (see 
the discussion of caret lines in whatsnew.txt).  mas will move 
them to the end of the program, out of the flow of control.  
Students can now easily avoid one of the most common bugs: 
forgetting to define a constant.  They now simply define 
constants wherever they use them.  That way, they do not have to 
remember to define them at the end of the program. 

C++ programs can now be commented with assembler code.  mas will 
assemble the assembler code and ignore the C++ code.  Thus, such 
a file can be input to BOTH a C++ compiler and the mas assembler.  
The C++ compiler will compile the C++ code; mas will assemble the 
assembly code.  

New program: iss (insert slash slash) which adds the "//" comment 
delimiters to a C, C++, or Java file.  See iss.txt for more 
information.

New debugger commands: /a (run against answer file), LD (log file 
display), SD (source file display), LN (start new log file).

Consistent use of "-" as a debugger command suffix ("-" means to 
"turn off").   For example, B sets a breakpoint; B- turns off a 
breakpoint.  W sets a watchpoint; W- turns off a watchpoint.

=================================================================
INSTALLATION

Note:  To replace one version with another, simply replace the 
files of the old version in the H1 directory with the files from 
the new version.  To uninstall, simply erase the H1 directory. 

Create a directory on your hard disk for the H1 Software Package 
(a specific name for the directory is not required, but "H1" is 
suggested).  Then unarchive the distribution file for your system 
to your H1 directory. 

To obtain the various assembly language, C++, and Java programs 
that appear in the figures in the textbook, unarchive figwin.zip 
(on Windows), figdos.zip (on DOS), or fig.tar.gz (on Sun, X86 
Linux, or Macintosh OS X).  You may unarchive these files in the 
H1 directory, or in another directory, if you prefer.   



For non-Microsoft platforms: permissions mode

If you get the message "permission denied" or similar when you 
attempt to execute a program or script in the H1 Software 
Package, you will have to change the permissions mode of each 
program and script to allow its execution.  To do this, enter 

     chmod 700 *

This command gives read, write and execution permission to EVERY 
file, even to non-executable files.  Optionally, you can then 
remove execution permission from the files that are non-
executable with 

     chmod 600 *.*

Because of the extension ".*" in the second argument in the 
command above, this command affects only files with an extension.  
Because only the non-executable files in the software package 
have extensions, this command affects only those files. 



For non-Microsoft platforms: search path

Your search path may already be set up to include the current 
directory (which allows programs in the current directory to be 
found and executed by the operating system).  You can determine 
your search path by entering 

     echo $PATH

Look for a "." in the string that is displayed ("." represents 
the current directory).

If the current directory is not on the search path, you will get 
the message "command not found" when you attempt to invoke a 
program in the current directory.  If you get this message, you 
must take one of the following actions:

Explicitly specify the current directory whenever you invoke a 
program or script in the H1 Software Package.  To do this, prefix 
the program or script name you enter on the command line with 
"./".  For example, to invoke sim, you would enter 

     ./sim

Alternatively, enter one of the command sequences below to add 
the current directory to the search path (you can then invoke a 
program or script in the H1 Software Package by simply entering 
its name on the command line whenever your H1 directory is the 
current directory).  The command sequence to use depends on the 
shell you are using.  To determine the shell you are using, enter 

     echo $SHELL

on the command line.  If you are on a Sun, you are probably using 
tcsh; if you are on Linux or the Macintosh OS X, you are probably 
using bash.  However, any of these systems can be set up to 
default to any shell--so you will have to check your particular 
system to determine the shell in use. 

To add the current directory (i.e., ".") to the search path:

  If you are using tcsh, enter

     setenv PATH  .:$PATH

  If you are using bash, enter

     PATH=.:$PATH
     export PATH 

These commands place the current directory (represented by ".") 
at the beginning of the PATH string.  This string determines the 
search path.

You can have your shell AUTOMATICALLY execute the commands to add 
the current directory to the search path each time you login.  
Then you do not have to re-enter them every time you login.  To 
do this for tcsh, put a file named .tcshrc that contains

     setenv PATH  .:$PATH

into your home directory.  If .tcshrc already exists, insert the 
command above at the end of the .tcshrc file.  For bash, put a 
file named .bash_profile that contains

     PATH=.:$PATH
     export PATH 

into your home directory.  If .bash_profile already exists, 
insert the two commands above at the end of the .bash_profile 
file.  

Note that the file names ".tcshrc" and ".bash_profile" both start 
with a period.  A leading period in a file name makes the file 
"hidden" (i.e., its name will not be displayed by the ls command 
unless the -a argument is used).  For example, to see all the 
files--including the hidden files--in your home directory, enter 

     ls -a

on the command line when you are in your home directory.

.tcshc and .bash_profile are called "login scripts" because they 
are automatically executed during a login.  To create or modify a 
login script, you can use a simple text editor, such as joe or 
pico.  One of these editors is probably installed on your system.  
For example, to create or modify .tcshrc with joe, enter 

     joe .tcshrc

With pico, enter

     pico .tcshrc



For the DOS Version of the H1 Software Package:

The DOS version of the H1 Software Package will run correctly on 
Microsoft systems through Windows 98.  However, it may not run 
correctly on Windows XP because Windows XP does not fully support 
DOS.  Moreover, the DOS version of the H1 Software Package does 
not have all the features as the Windows version.  Thus, on 
Windows XP, you should use the Windows version of the H1 Software 
Package, not the DOS version.  All the filename extensions in the 
DOS package are limited to three characters (because DOS does not 
support longer extensions).  Thus, all the Java source files have 
the extension ".jav" rather than the correct extension ".java". 



Potential name conflicts

     The order of appearance of directories in the search path 
does not matter if all the programs, batch file, and scripts on 
your system have unique names.  If a program, batch file, or 
script is invoked for which an identically named program, batch 
file, or script exists elsewhere on your system, the operating 
system will execute the first program, batch file, or script with 
the required name it finds as it searches the directories in the 
search path.  It searches the directories in the order listed in 
the search path.  Thus, directories listed earlier are given 
preference over directories that are listed later. 

     Some of the programs, batch files, and scripts in the H1 
Software Package have common names.  You may have programs, batch 
files, or scripts elsewhere on your system that are identically 
named.  Thus, when you attempt to invoke a program, batch file, 
or script in the H1 Software Package, you may, in fact, invoke 
one of these other programs, batch files, or scripts, depending 
on the search path in effect.  The PATH commands described in 
this document place the current directory and the H1 directory 
FIRST in the search path, so you should always be able to invoke 
the programs in your current directory and in the H1 directory.  
If, however, you are using a different search path, and a name 
conflict occurs, you can simply rename the programs in the H1 
directory for which a conflict occurs to unique names.  For 
example, if you have a name conflict with "pic", you can rename 
pic to "h1pic".  Alternatively, you can change your search path 
so that the H1 directory is first.  



OPTIONAL: INVOKING PROGRAMS FROM OUTSIDE THE H1 DIRECTORY

If you want to run the programs in the H1 Software Package when 
your H1 directory is NOT the current directory, you have to place 
your H1 directory on the search path.  You also have to set the 
H1DIR environment variable to the complete pathname of your H1 
directory (to allow sim, mas, has, vas, lin, and lib to find 
microcode, configuration, answer, and library files in the H1 
directory).  The commands to do this are given below. 



For Microsoft platforms (assuming the H1 directory is C:\H1): 
enter

     SET PATH=C:\H1;%PATH%      
     SET H1DIR=C:\H1



For non-Microsoft platforms (assuming the H1 directory is right 
below your home directory):

NOTE: Be sure to be consistent with your capitalization of the 
name of your H1 directory.  For example, if you use "H1" (as 
opposed to "h1") in the statements below, then your H1 directory 
must be named "H1", not "h1". 

For tcsh, enter 

     setenv PATH  ~/H1:$PATH 
     setenv H1DIR ~/H1

For bash, enter

     PATH=~/H1:$PATH 
     export PATH
     H1DIR=~/H1
     export H1DIR

"~" in the tcsh and bash commands represents your home directory.
Thus, if your H1 directory is right below your home directory, 
its complete pathname is provided by ~/H1.

You can have your shell automatically execute these commands any 
time you boot or login.  To do this with older Microsoft 
platforms, put the first set of commands above in the 
autoexec.bat file in your root directory.  With Windows XP, set 
the PATH and HDIR variables with the following sequence of mouse 
clicks: Control Panel, Performance and Maintenance, System, 
Advanced, Environment Variables (then make the required changes).  
With tcsh, put the second set of commands above in a file named 
.tcshrc in your home directory.  With bash, put the third set of 
commands above in a file named .bash_profile in your home 
directory.  Note that the file names ".tcshrc" and 
".bash_profile" both start with a period.  
================================================================= 
RUNNING THE PROGRAMS IN THE H1 SOFTWARE PACKAGE 

The best way to run the programs in the H1 Software Package is 
from the command line.  If your system does not default to 
command line mode, place it in command line mode by invoking the 
appropriate command or terminal program for your system (on 
Windows, run the MS-DOS or Command prompt program; on the 
Macintosh, run the Terminal utility).  Make your H1 directory the 
current directory by entering 

     cd  completepathnameofyourH1directory

substituting the complete pathname of your H1 directory for 
"completepathnameofyourH1directory" in the command above.  On 
non-Microsoft systems, you can use "~" to represent your home 
directory.  For example, if H1 is your H1 directory and it is 
right below your home directory, then the following command makes 
your H1 directory the current directory: 

     cd ~/H1

Here "~/H1" represents the complete pathname of the H1 directory. 
You can also use a relative pathname in the cd command.  For 
example, if you are in your home directory and the H1 directory 
is immediately below your home directory, you can make the H1 
directory current by entering 

     cd H1

Here "H1" is the pathname of the H1 directory, relative to the 
current directory (your home directory).  

On the Macintosh and Red Hat Linux, you can type 

     cd 

followed by one space and then drag the icon representing your H1 
directory to the immediate right of the "cd " you just typed.  
The full pathname of your H1 directory will then appear in the cd 
command.  Then hit the Enter key.  With this technique, you do 
not have to type in the name of your H1 directory when you use 
the cd command. 

Once your H1 directory is the current directory, you can invoke a 
program in the H1 Software Package by simply entering on the 
command line the program's name and any arguments.  If you have 
any problems running programs, refer to the INSTALLATION 
SECTION above.

=================================================================
OVERVIEW

The principal program in this package is sim.  sim is a 
simulator/debugger/verifier/profiler for H1 and V1, the two 
computers described in 

  ASSEMBLY LANGUAGE AND COMPUTER ARCHITECTURE USING C++ AND JAVA 
        by Anthony J. Dos Reis, Course Technology, 2004

sim can check the correctness of the programs for which 
verification data is provided.  Verification data for most of the 
end-of-chapter problems from the textbook is included in the H1 
Software Package. 

In addition to sim, this package contains a machine-level 
assembler (mas), a horizontal microcode assembler (has), a 
vertical microcode assembler (vas), a linker (lin), a library 
program (lib), a file lister (see), an object/executable/library 
module conceptual picture lister (pic), an 
object/executable/library module examiner (mex), a microcode 
encryption program (enc), a program modifier (mod), and an insert 
slash slash program (iss) that makes it easy to add assembler 
code to a C++, C, or Java file.  For instructions on how to use 
these programs (except for iss), see the above textbook.  For 
complete documentation on each program (including iss), see the 
program's corresponding ".txt" file.  

The programs in this package use the command line interface.  
This interface works well for these programs.  Moreover, it is 
very easy to learn and use, and is the same across all 
platforms.

When any program in this package is invoked without the required 
arguments, it prompts the user for them.  The user can then enter 
these arguments and any additional desired arguments.  This 
feature makes it easy to invoke a program when using a graphical 
user interface: the user simply clicks appropriately on a 
program's filename or icon, and then, on the prompt generated by 
the program, enters the desired arguments.  

All the programs in this package allow for default inputs in 
response to most of the user prompts.  The default input is 
displayed as part of the prompt message within square brackets.  
The user selects the default by hitting the Enter key without 
first entering any arguments. 

For all the programs in this package, a help screen is displayed 
if /h, -h, /?, or -? appears on the command line.  On some 
platforms (i.e., the non-Microsoft platforms), "/?" or "-?" will 
not work because of the special way the command shell interprets 
the question mark on the command line.  On these systems, use /h 
or -h.  

Most of the programs in the package (sim, mas, has, vas, lin, 
lib, pic, mex, see, and iss) can be modified according to the 
user's preference with the mod program.  For example, the mod 
program can set the start-up display mode of sim to machine-level 
plus source and/or plus reads. 

=================================================================
VERSION HISTORY

Version 6.1

Improved the display format of the verification report.  The log 
files created by the verifier now show the check data used in 
the verification process.  Thus, if a student uses incorrect 
check data, it can easily be determined from the log file.

Fixed incorrect check data in some of the answer files. 


Version 6.0

sim's program verifier can now check if a program's size and 
instruction counts (both machine and micro) are within prescribed 
limits (in addition to checking for correct output).  This 
additional capability is triggered automatically if the first 
line of an answer file has size and count data in addition to the 
correct output checksum.  For more information, see the 
discussion of the /a command in sim.txt. 

The verifier is now insensitive to trailing whitespace in the 
program's output.  That is, trailing whitespace now will not 
affect the results of the verifier. 

In previous versions of sim, sim answer files prepared on a 
Microsoft computer will not work on non-Microsoft systems.  This 
problem occurs because Microsoft-type text files have a carriage 
return character in addition to the customary newline character 
at the end of each text line.  Now either type of text file--
Microsoft or non-Microsoft--can be used with sim on any supported 
system. 

Added the batch/script files aa, ala, aka, caka, and cala, all of 
which simplify the running of sim with the /a command line 
argument. 

The verifier now reports "correct" or "NOT correct" rather than 
"passes" or "FAILS".

Fixed incorrect checksums in several answer files.


Version 5.2

Fixed bug that affects the display when an answer file is in effect.

If an answer file is in effect AND there is no machine code file 
(i.e., if "none" is specified for the machine code file name), 
then the log file's base name defaults to the answer file's base 
name.  In previous versions, the log file's base name always 
defaults to "none" if "none" is the machine code file name.  
Thus, for the problems in Chapter 2 in the textbook (where 
students enter "none" for the machine code file name), the use of 
the appropriate answer file yields a log file with the 
corresponding name.  For example, using the answer file p21.ans 
for Problem 2.1 will yield the log file p21.log or 
p21.studentname.log (rather than none.log or none.studentname.log 
as in previous versions).  Note: sim includes the student's name 
in the log file name if it is so configured by the mod program.
For more information, see require.txt.

Included the answer file for Problem 4.12.  This answer file was 
missing from earlier versions.


Version 5.1

sim now displays input data obtained from an answer file on the 
screen, in addition to writing it to the log file (if active). 

Inserted breaks in the display produced by the mod program so it 
does not scroll off screen. 


Version 5.0

The H1 Software Package now contains the file require.txt.  This 
file contains a list of suggested requirements for programming 
assignments. 

The H1 Software Package now includes files of all the C++, Java, 
and assembly language programs that appear in the end-of-chapter 
problems in the textbook.  These files are particularly useful 
when students hand-compile the C++ programs from the end-of-
chapter problems.  Students can now simply add assembly code as 
comments to the existing C++ files.  Such a file can both be 
compiled by a C++ compiler and assembled by mas (mas assembles 
the assembler code that appears in the form of comments).  This 
feature is called "reverse comments".  The reverse comments 
feature also works for C and Java files. 

For example, consider the following C++ code: 

#include <iostream>   //; Sample program
using namespace std;
int x;                //x:        dw    0

int main() {          //main:

   x = 5;             //          ldc   5
                      //          st    x

   cout << x << endl; //          ld    x
                      //          dout
                      //          ldc   '\n'
                      //          aout

   return 0;          //          ldc   0
                      //          halt

}                     //          end   main

A C++ compiler will compile a file containing this code.  mas 
will also assemble the SAME file, in which case it would treat 
the C++ statements as comments to be ignored and the "//" 
comments an assembly input.   When processing such a file, mas 
will also create a ".lst" file and a ".mas" file in which the C++ 
code appears as comments.  The reverse comments feature makes it 
easy for students to write assembly code corresponding to a C++ 
program--they simply put their assembly code as comments into the 
C++ file.  They can then both compile the file and assemble the 
same file.  By then running the two executables produced, 
students can see if the C++ and assembler versions behave 
identically.  

The iss (insert slash slash) program inserts lines that are blank 
except for a leading "//" into C++, C, or Java programs.  
Assembler code can then be entered on these lines following the 
"//". 

mas now supports "^-lines" (read as "caret lines")--lines whose 
first non-whitespace character is "^".  mas processes ^-lines 
last.  Thus, the effect of "^" on a line is to move it to the end 
of the program.  ^-lines allow the definition of constants in 
line with executable code.  It makes reading and writing programs 
easier.  For example, consider the following code: 

          ldc    prompt
^prompt:  dw     "Enter integer"
          sout

Although the dw is physically in line with the executable code, 
mas places it at the end of the program, out of the flow of 
control.  mas also creates a ".car" file that contains the 
original source code but with the ^-lines (now no longer starting 
with "^") at the end of the program. 

The H1 Software Package now includes ".ans" files (files 
containing sim debugger commands) for the programming problems 
from the textbook.  Students can now test their programs simply 
by invoking sim with the /a command line argument, or by entering 
the /a command from within the debugger.  For example, suppose a 
student's solution to Problem 4.12 is in the file p412.mas, with 
p12.mac as the corresponding ".mac" file.  Then to test p412.mac, 
a student only has to enter 

     sim p412 /a

at the command line, or enter 

     /a 

from within the debugger when running p412.mac.  /a causes sim to 
execute the commands in p412.ans that run the ".mac" file against 
a selection of test cases.  In addition, it creates a log file of 
the test run that includes the student's name, time stamp, 
program statistics (size, number of machine instructions 
executed, number of microinstructions executed which is a measure 
of run time), input and output for the test cases, and the source 
code in p412.mas.  The /a command can also automatically check 
the correctness of the program and display "Program output: 
correct" or "Program output: NOT CORRECT" accordingly.  Thus, 
students (and instructors) will know instantly if a program is 
working correctly.  Students can submit their log files for their 
programming assignments.  Using the mod program, sim can be 
configured to generate log files with names that include the 
student name.  For example, the log file for Problem 4.12 would 
be p412.studentname.log.  Thus, an instructor can keep homework 
submissions for an entire class in a single directory without 
file name conflicts. 

mod now accepts input from a response file.  This feature makes 
it easy for students to configure the software the way the 
instructor wishes--they simply run the mod program using a 
instructor-supplied response file. 

If the return code option is on in sim (you can set it on with 
the mod program), sim returns the return code it obtains from 
the program it was running if the program has reached and 
executed a halt instruction.  A new batch/script file, runc, 
makes use of this capability. 

Fixed bug in sim in the SD command (it would not properly display 
a source file that contained a printf conversion code, such as 
"%d").  

Fixed bug in sim that occurs when switching files if a log file 
is on. 

Fixed bug in mas that occurs when '+' or '-' in an operand has no 
space to the left but has a space to the right. 

sim now performs validity checks on ".cat", ".lst", ".hst", and 
".vst" files used for source-level tracing.

Added calr and cakr batch/script files that simplify working
with C++ files that contain assembly code as comments.



Version 4.2

Fixed bug in sim in the AIN instruction (it was not clearing the 
ac register, and on big endian machines, it was placing the 
character into the high byte of the ac register). 

Fixed bug in sim in the SIN instruction (it was not using saved 
input correctly). 

Fixed bug in the DOS version of mod (mod would terminate 
prematurely).

Fixed bug in sim in the d command (it did not sequence properly 
for vertical microcode). 

Improved trace display for saved input. 

Reference counts now wrap around at 1,000,000 for non-DOS 
platforms and at 65,536 for DOS (there is insufficient memory on 
DOS systems to maintain large counts).  Reference counts are 
displayed in decimal, but without the "t" suffix (omitting the 
"t" provides room for a larger count). 

sim can now be configured with the mod program to insert the 
student's name at the beginning of every log file (see mod.txt). 
Log files are often submitted by students for homework 
assignments.   Thus, it is handy to have the student's name at 
the top of a log file.

The prompt "Okay to change...?" in the mod program now has no 
default reply.  The user must enter either y or n.  Now the user 
does have to worry about accidentally hitting the enter key one 
too many times (which in previous versions resulted in the 
cancellation of all the user-specified modifications).

Added the LD (log display) debugger command to sim.  It gives the 
user access to the entire log file while debugging with sim's 
debugger.  Thus, the user now has access to the entire run 
history at any point in a debugging session.      

Added the SD (source display) debugger command to sim.  Students 
can use the SD command to include their source programs in a log 
file which they hand in for homework assignments.

Added the LN (log new) debugger command to sim.  LN creates and 
turns on a new log file.  LN makes it easy for students to create
the proper log files for their programming assignments. 

The D and U commands now accept a second argument (an ending
address) which allows the user to precisely control what is 
displayed.



Version 4.1   

Version 4.1 of sim in the "plus reads" mode (which is activated 
by the mr command--see page 132 in the textbook) displays on a 
memory read operation the contents in addition to the address  
(Version 4.0 does not display the contents).  This additional 
information--the memory contents on a read--can be very useful 
when you are debugging or tracing a program.  The following 
samples show the difference between the "plus reads" display in 
Version 4.0 and Version 4.1: 


                Version 4.0 "plus reads" display
                --------------------------------

  5: subr /7 005/ [069]  ac=000E/0005  
                    ^
                    |
                    +-------------- address





                Version 4.1 "plus reads" display
                --------------------------------

  5: subr /7 005/ 0009<m[069]  ac=000E/0005  
                   ^      ^
                   |      |
                   |      +-------- address
                   +--------------- contents



Version 4.1 of sim, has, and vas performs more extensive format 
checking of configuration files than Version 4.0 of sim, has, and 
vas.  Each register is now required to have a unique name--either 
the name in the configuration file (if one is specified), or its 
default name (the register's hex number). 

Version 4.1 of sim uses "-" as an argument suffix in debugger 
commands more uniformly and consistently than in Version 4.0 (see 
page 132 in the textbook).  In particular: 

  -  You can kill a machine-level breakpoint with 
     either K or B- (Version 4.0 supports only K). 

  -  You can kill a microlevel breakpoint with 
     either k or b- (Version 4.0 supports only k). 

  -  You can kill a watchpoint with either KW or 
     W- (Version 4.0 supports only kw). 

  -  You can cancel machine-level source only 
     mode with either MS- or MSO- (Version 4.0 
     supports only MS-). 

  -  You can cancel microlevel source only mode 
     with either ms- or mso- (Version 4.0 supports 
     only ms-). 

Version 4.1 of sim displays labels enclosed in single quotes.  
Thus, labels are always distinguishable from hex numbers.  For 
example, the label 'D' (which sim displays with single quotes) is 
clearly distinguishable from the hex number D (which sim displays 
without quotes). 

Version 4.1 of the H1 Software Package includes the really-simple 
instruction set (r.hor, r.cfg, r.txt).  This instruction set is 
useful as a target language for student compilers in a compiler 
construction course (it is a particularly easy instruction set to 
learn). 



Version 4.0   

Version 4.0 remains a satisfactory version of the H1 Software 
Package in spite of a few minor problems (which have been fixed 
in the later versions).  However, I suggest you upgrade to the 
latest version (see above) since upgrading is such a trivial 
process (simply replace the old files on your hard disk with the 
new files). 

Version 4.0 is on the CD-ROM accompanying the textbook ASSEMBLY 
LANGUAGE and COMPUTER ARCHITECTURE USING C++ and JAVA by Anthony 
J. Dos Reis, Course Technology, 2004.  Because of the multi-
platform structure of this CD-ROM, filenames of some files on the 
CD-ROM appear altered when displayed on a Sun workstation.  
Specifically, three-segment file names appear as two-segment 
names, filename extensions are limited to three characters, and 
lower case is used exclusively.  For example, v40sun.tar.gz in 
the root directory of the CD-ROM appears as v40sunta.gz when 
displayed on a Sun workstation.  THIS PROBLEM OCCURS ONLY ON A 
SUN WORKSTATION.  To install Version 4.0 of the H1 Software 
Package on a Sun workstation, do NOT use the files in the H1SUN 
directory on the CD-ROM (because some of these files have altered 
names).  Instead, copy v40sunta.gz (which resides in the root 
directory of the CD-ROM) to your H1 directory, make your H1 
directory the current directory, and then unzip v40sunta.gz by 
entering on the command line 
     
     gunzip v40sunta.gz
     tar xf v40sunta

The files so produced will have names that have NOT been altered. 
The latest versions of the H1 Software Package available from 
www.course.com are platform specific, and, therefore, do NOT have 
the problem of altered filenames for ANY platform.  

=================================================================
PACKING LIST

BATCH FILES/SHELL SCRIPTS

aa           Assemble and run sim with /a command line argument
aka          Assemble, link with standard start-up code. and run
             sim with /a command line argument.
ala          Assemble, link with stack start-up code, and run
             sim with /a command line argument.

arun         Assemble and run
alr          Assemble, link with standard start-up code, and run 
akr          Assemble, link with stack start-up code, and run
 
asim         Like arun, alr, and akr, respectively, except 
als          that they run sim with the debugger on.
aks 

atest        Tests the student-written assembler (masv1) by 
             comparing its outputs with the output from the model 
             version masv1m supplied in the software package.  To 
             run atest,  either Java class files or a C++ 
             executable file for masv1 must be available.  To 
             test Java class files, enter 

                  atest java

             To test a C++ executable file, enter

                  atest

caka         like cakr but with sim run with /a command line arg
cala         like calr but with sim run with /a command line arg
cakr         like akr but with ".cpp" extension on input file
calr         Like alr but with ".cpp" extension on input file

go           Displays this file

run          Run with debugger off
runc         Like run but also displays the return code

ltest        Like atest but for the student-written linker 
             (linv1).

=================================================================
PROGRAMS

enc          Microcode encrypter
has          Horizontal microcode assembler
iss          Insert slash slash.  Inserts lines starting with 
             "//" into a ".cpp" on which assembler code can then 
             be added. 
lib          Library maker
lin          Linker
linv1m       Model version of lin.  For students to use 
             for comparison purposes when they are testing their 
             own linkers.  The students' linkers should be named 
             linv1.  The ltest batch file/shell script runs a 
             test suite against both linv1m and linv1 and 
             displays the results for both linkers so they can be 
             easily compared. 
linv1        Sample student linker (provided so that the
             operation of ltest can be demonstrated)
mas          Machine-level assembler
masv1m       Model version of masv1.  For students to 
             use for comparison purposes when they are testing 
             their own assemblers.  The students' assemblers 
             should be named masv1.  The atest batch file/shell 
             script runs a test suite against both masv1m and 
             masv1 and displays the results for both assemblers 
             so they can be easily compared. 
masv1        Sample student assembler (provided so that the
             operation of atest can be demonstrated)
mex          Displays object, executable, and library modules in
             hex/ASCII.
mycopy       File copy program used in atest and ltest
             batch file/shell scripts
myfc         File compare program used in atest and ltest
             batch file/shell scripts
mod          Modifies sim, mas, has, vas, lin, lib, pic, mex, 
             see, or iss.
pic          Displays object, executable, and library modules as
             a "conceptual picture".
see          Displays a file in ASCII and in hex.
sim          H1/V1 simulator/debugger/profiler
vas          Vertical microcode assembler

=================================================================
DOCUMENTATION

___.txt      Documentation on each individual program
ascii.txt    Summary of ASCII
b.txt        Summary of the basic instruction set
jvm.txt      Summary of the Java Virtual Machine
k.txt        Summary of the stacK instruction set
mic.txt      Summary of the microlevel of H1 and V1
number.txt   Number conversion reference
o.txt        Summary of the optimal instruction set
r.txt        Summary of the r instruction set
require.txt  Suggested requirements for programming assignments
s.txt        Summary of the standard instruction set
sparc.txt    Summary of the SPARC
whatsnew.txt Summary of new features in H1 Software Package

================================================================= 
BASIC INSTRUCTION SET (a simple instruction set used to 
                       illustrate  microcoding--see Chapter 6 in
                       textbook) 

b.cfg        Configuration file for b.hor and b.ver
b.has        Horizontal microcode (symbolic) for basic
             instruction set
b.hor        Binary for b.has
b.hst        Assembly listing for b.has
b.txt        Summary of the basic instruction set
b.vas        Vertical microcode (symbolic) for basic
             instruction set
b.ver        Binary for b.vas
b.vst        Assembly listing for b.vas
bprog.lst    Assembly listing for bprog.mas
bprog.mas    Assembly language test program for b.hor and b.ver 
bprog.mac    Binary for bprog.mas

================================================================= 
OPTIMAL INSTRUCTION SET (the standard instruction set improved 
                         and extended--see Chapters 12 and 13 in
                         textbook)

o.cfg        Configuration file for o.hor
o2.cfg       Same as o.cfg except with a two-word mult instruction
o.hor        Horizontal microcode (encrypted binary) for the 
             optimal instruction set.  sim can use this file in 
             its encrypted form.  However, sim will refuse to run 
             with the microlevel enabled, thereby preventing the 
             user from examining the microcode. 
o2.hor       Same as o.hor except with a two-word mult instruction
o.txt        Summary of the optimal instruction set
oprog.mas    Assembly language test program for o.hor
oprog.mac    Binary for oprog.mas
os.cfg       Configuration file for os.has
os.has       Optimal instruction set, Student-written 
             microcode (symbolic).  Not included in this package. 
osprog.mas   Assembly language test program for os.hor 
osprog.mac   Binary for osprog.mas
osl.cfg      Configuration file for osl.has
osl.has      Optimal instruction set, Student-written 
             microcode (symbolic), Less the difficult 
             instructions.  Not included in
             this package.
oslprog.mas  Assembly language test program for osl.hor 
oslprog.mac  Binary for onlprog.mas

================================================================= 
REALLY-SIMPLE INSTRUCTION SET (a simple register-oriented 
                         instruction set useful for compiler
                         construction courses--it is not 
                         discussed in the textbook) 

r.cfg        Configuration file for r.hor
r.hor        Horizontal microcode (encrypted binary) for the r 
             instruction set.  sim can use this file in its 
             encrypted form.  However, sim will refuse to run 
             with the microlevel enabled, thereby preventing the 
             user from examining the microcode. 
r.txt        Summary of the r instruction set

================================================================= 
STACK INSTRUCTION SET (a stack-oriented instruction set--see 
                       Chapter 13 in textbook) 

k.cfg        Configuration file for k.hor
k.hor        Horizontal microcode (encrypted binary) for
             the stacK instruction set.  sim can use this
             file in its encrypted form.  However, sim will
             refuse to run with the microlevel enabled,
             thereby preventing the user from examining the
             microcode.
k.txt        Summary of the stacK instruction set
kprog.mas    Assembly language test program for k.hor 
kprog.mac    Binary for kprog.mas
ks.cfg       Configuration file for ks.has
ks.has       StacK instruction set, Student-written microcode 
             (symbolic).  Not included in this package. 
ksprog.mas   Assembly language test program for ks.hor 
ksprog.mac   Binary for ksprog.mas
ksl.cfg      Configuration file for ksl.has
ksl.has      StacK instruction set, Student-written microcode 
             (symbolic), Less the difficult instructions.
             Not included in this package. 
kslprog.mas  Assembly language test program for ksl.hor 
kslprog.mac  Binary for kslprog.mas

================================================================= 
STANDARD INSTRUCTION SET (the flawed instruction set--see 
                          Chapters 2-10 in textbook) 

s.cfg        Configuration file for s.hor and s.ver
s.has        Horizontal microcode (symbolic) for the standard
             instruction set
s.hor        Binary for s.has
s.hst        Assembly listing for s.has
s.txt        Summary of standard instructions set
s.vas        Vertical microcode (symbolic) for the standard
             instruction set
s.ver        Binary for s.vas
s.vst        Assembly listing for s.vas
sprog.mas    Assembly language test program for s.hor and s.ver 
sprog.mac    Binary for sprog.mas

=================================================================
START-UP CODE

ksup.lst     Assembly listing for ksup.mas
ksup.mas     Assembly language start-up code for the stacK 
             instruction set 
ksup.mob     Binary for ksup.mas 
sup.lst      Assembly listing for sup.mas
sup.mas      Assembly language start-up code for the standard and 
             optimal instruction sets
sup.mob      Binary for sup.mas

=================================================================
SELECTED EXAMPLE PROGRAMS FROM THE TEXTBOOK

CHAPTER 1

E1.java      
E2.java
E3.java
E4.java
E5.java
E6.java
E7.java


CHAPTER 10

fmain.mas    
fmult15.mas
fpoly.mas
fsquare.mas
m1.mas
m2.mas


CHAPTER 11

Div.java     
P1.java
P2.java


CHAPTER 13

testm.mas 


CHAPTER 16

Control.java 
IRTest.java
OATest.java
Simple.java

=================================================================
PROGRAMS THAT APPEAR IN THE FIGURES IN THE TEXTBOOK

figwin.zip  Zipped file for Windows
figdos.zip  Zipped file for DOS
fig.tar.gz  Archived/zipped file for non-Microsoft platforms

================================================================= 
C++, JAVA, AND ASSEMBLER PROGRAMS FROM END-OF-CHAPTER PROBLEMS 
These files are ALREADY unarchived.  The archive files are 
provided so you can restore or copy the originals if necessary.

eocwin.zip   Zipped file for Windows 
eocdos.zip   Zipped file for DOS 
eoc.tar.gz   Archived/zipped file for non-Microsoft platforms 

================================================================= 
".ans" FILES FOR THE END-OF-CHAPTER PROGRAMMING PROBLEMS
These files are ALREADY unarchived.  The archive files are 
provided so you can restore or copy the originals if necessary.

ans.zip      Zipped file for Windows or DOS
ans.tar.gz   Archived/zipped file for non-Microsoft platforms 

=================================================================
MISCELLANEOUS

061.___      Platform markers (win, dos, sun, lnx, osx)
a.lst        Assembly listing for a.mas
a.ans        Anser file for a.mas
a.mas        Assembly language demo program
a.mac        Binary for a.mas
ao.ans       Answer file for ao.mas
ao.mas       Like a.mas, but for for optimal instruction set and 
             must be linked with sup.mob
ak.ans       Answer file for ak.mas
ak.mas       Like a.mas, but for stacK instruction set and
             must be linked with ksup.mob
any.ans      Generic answer file for assembly language 
anymicro.ans Generic answer file for microprogramming 
aprog__.mas  Test programs for masv1 used by atest
buggy.hor    Standard horizontal microcode (binary) with bugs
caret.mas    Program illustrating ^-lines
lmod__.mob   Test modules for linv1 used by ltest
none.ans     Answer file when machine code file name is "none"
p__.mas      Assembler programs from end-of-chapter problems
p__.cpp      C++ programs from end-of-chapter problems
p__.java     Java program from end-of-chapter problems
p__.ans      Answer files for end-of-chapter programming problems
___.rsp      Response files for sim, mas, has, vas, lin, lib,
             pic, mex, see, and iss 
rev.cpp      Program illustrating reverse comments
rev.ans      Answer file for rev.cpp
revo.cpp     Like rev.cpp but for optimal instruction set and
             must be linked with sup.mob.
revo.ans     Answer file for revo.cpp
revk.cpp     Like rev.cpp but for stack instruction set and
             must be linked with ksup.mob.
revk.ans     Answer file for revk.cpp
revcaret.cpp Program illustrating reverse comments and ^-lines
revcaret.ans Answer file for revcaret.cpp

=================================================================
FILE EXTENSIONS

Extension    Type of File

none         Sun Solaris/Linux/Macintosh executable program or script 
ans          program answer file
asm          assembly language code for the Pentium
bat          DOS/Windows batch file
cfg          sim/mas/has/vas configuration file
class        Java class
cat          composite ".lst" file created by lin
car          caret file created by mas
exe          DOS/Windows executable program
gz           gzipped file
has          horizontal microcode in symbolic form
hor          horizontal microcode in binary form
hst          list file for has
iss          backup file created by iss
java         Java source
lib          library file
lst          list file for mas
mac          executable machine code for H1 or V1
mas          assembly language code for H1 or V1
mex          file created by the mex program
mob          object module for H1 or V1
pic          file created by the pic program
rsp          response files for the mod program
s            assembly language code for the SPARC
see          file created by the see program
tab          file created by lin that traces linking operations
txt          documentation or reference
vas          vertical microcode in symbolic form
ver          vertical microcode in binary form
vst          list file for vas    
