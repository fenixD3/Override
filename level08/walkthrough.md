# Level08

We find a binary and directory `backup`, containing `.log`, with owner `level09` SUID

![](Ressources/img/contains.png)

![](Ressources/img/level08_launch.png)

Program waits a file as an argument and makes a copy to the `backups`. Let's use [gdb and radare](Ressources/gdb.md) to understand what's going on.

![](Ressources/img/log_write.png)

It writes a log to the `.log` file also.

Let's try to pass file with the next token

![](Ressources/img/fail_open.png)

Nope, because it doesn't deal with files inside directories, it only works with files in the current directory.

So, in the home directory, we should create a symlink to `/home/users/level09/.pass`. 
Now we can run the binary on the symlink, and it creates a backup of the password file in the `backups` folder

![](Ressources/img/level09.png)
