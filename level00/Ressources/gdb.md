# Check functions

![](img/gdb_launch.png)

Only `main`

# Main disass

![](img/main_disass.png)

We can see calling `scanf`, make comparing after it and calls `system` when `cmp` is true.

# Data

Let's print the value from `cmp` command at `<+83>`

![](img/data_passwd.png)

It seems it's our password `5276`
