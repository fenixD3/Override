# Check functions

![](img/gdb_launch.png)

There are `main` and `auth`

# Main disass

![](img/main_disass.png)

It prompts user for Login and Serial, reading them from stdin. 
As the next step, `main` calls `auth`. If `auth` validates the Login and Serial, `system` opens a shell.

# Auth disass

![](img/auth_disass_1.png)
![](img/auth_disass_2.png)

It performs a hashing algorithm on Login, then compares the computed hash with Serial.
