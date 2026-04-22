# TeacherTools

<h4> <span style="color:red"> Notice : The C++ version has been deprecated. Development will only continue on the C version.</span> </h4>

# Overview 

Originally called Teacher Tools Light, TeacherTools is a software that allows teachers to be as efficient as possible with handy tools.
<br>

# Building and Installing

<h4> Minimum Requirements: </h4> 

- A Linux system
- C complier
- Make

<h4> Building: </h4>

First run:  

```$ git clone https://github/m3ganova/TeacherTools.git``` <br />  
```$ cd TeacherTools``` 

To compile (easily) you need to have the Makefile. Then just run:

```$ make ``` 

To install, run:

```$ [sudo] make install ```

Now, just run "tools" in the console and the program will start!

## Compatibility 

If you have issues installing due to another program with the name of "tools" already in your '/usr/local/bin', you may go to the compatibility directory and build/install from there.  

Instructions:

```$ cd compatibility  ```  

```$ make ```   

```$ [sudo] make install ```  

Now, you can run "teachertools" in the console and the program will start.

# Commands

### Some Commands:

--v / version: View Teacher Tools version.

--h / help: View all commands.

--q / quit: Quit the program.
<br>

### Tools:

--gg / grade :  Grade Generator - Outputs a letter depending on the student's percentage grade.

--mk / mark : Marking Tests - Marks a test and outputs the marks earned and percentage grade.

--calc / calculator : Calculator - Calculates your equation.
<br>
# Reading the blueprint

Dash (-) before a point: The goals I want to achieve.

Double dashes (--) before a point: My achieved goals.

Exclamation mark (!) before a point: Will push to further releases.

Double exclamations (!!) before a point: Will not add at all.  

Hashtag (#): My own comments

<span style="color:gray"> Credits:<br /> <br />
Calculator : https://www.programiz.com/c-programming/examples/calculator-switch-case
</span>