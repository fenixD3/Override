# Check functions

![](img/gdb_launch.png)

There are `main` and 2 functions for active commands `store_number` and `read_number`

# Main disass

![](img/main_disass_1.png)
![](img/main_disass_2.png)
![](img/main_disass_3.png)

Nothing interesting there

# Store_number disass

![](img/store_num_disass.png)

We can see protection of some indexes (index % 3 == 0) at the line `0x08048686`.
Also, the table is accessed as `data[index * 4]` (line `0x080486c5` - `shl` command)

# Reead_number disass

![](img/read_num_disass.png)

We can see the same that as in `store_number`, the uses `shl` command
