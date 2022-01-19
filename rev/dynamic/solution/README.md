We can see that user input is not modified.

We can also see that this unmodified input is passed to `strncmp`.
This means that the correct flag must also be passed to `strncmp`.

We can set a breakpoint at `strncmp` and check the values in memory when it is called.
This will give us the flag.
