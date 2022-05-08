We get an information about binary at each level

![](img/binary_protect.png)

- `RELRO` means Relocation Read-Only. It is a compiler option that force the linker to resolve all dynamically linked 
functions at the beginning of the execution and then makes the Global offset table (GOT) read-only. 
It is meant to prevent some security weakness induced by the GOT itself

- `Stack canary` is a way to prevent buffer overflows to be exploitable by putting some value after the buffer itself 
on the stack and check if it was overriden on function return

- `NX` is an hardware technology use in processors to prevent execuion of certain types of code

- `PIE` is a process that will randomize code position in memory at run-time, making exploit harder to perform

- `RPATH` is a variable used at run-time. It contains a list of hard-coded paths in which the binary could search

- `RUNPATH` is almost the same as RPATH. The difference lies in the order they are searched in. 
RPATH is searched in before LD_LIBRARY_PATH while RUNPATH is searched in after. 
The meaning of this is that RPATH cannot be changed dynamically with environment variables while RUNPATH can
