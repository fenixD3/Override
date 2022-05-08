# Level00

![](Ressources/img/level00_launch.png)

The program waits the password as input. Let's use [gdb](Ressources/gdb.md) to understand what's going on. 

This binary reads our input via `scanf`, compares it with `5276`. If our input is right, it launches `system`

![](Ressources/img/level01.png)
