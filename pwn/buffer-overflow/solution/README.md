The `name` variable is stored directly above the `role` variable on the stack in the `vuln` function.

```c
void vuln() {
    char name[8] = {0};
    char role[8] = "user";
```

```asm
┌ 175: sym.vuln ();
│           ; var char *s @ rbp-0x18
│           ; var int64_t var_10h @ rbp-0x10
```

The `name` is retrieved using a call to `gets` which is unsafe as it doesn't check the length of the input.

```c
gets(name);
```

We can use this to overflow the `name` buffer and change our role to "admin".
