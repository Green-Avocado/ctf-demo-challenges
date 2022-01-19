Decompiling the `checkFlag` function in ghidra gives us the following:

```c
undefined8 sym.checkFlag(char *arg1)

{
    undefined8 uVar1;
    char *var_8h;
    
    if (((((*arg1 == 'f') && (arg1[1] == 'l')) && (arg1[2] == 'a')) &&
        (((arg1[3] == 'g' && (arg1[4] == '{')) && ((arg1[5] == '1' && ((arg1[6] == 'n' && (arg1[7] == '5')))))))) &&
       ((arg1[8] == '3' &&
        (((((arg1[9] == 'c' && (arg1[10] == 'u')) && (arg1[0xb] == 'r')) && ((arg1[0xc] == '3' && (arg1[0xd] == '}'))))
         && (arg1[0xe] == '\0')))))) {
        uVar1 = 1;
    }
    else {
        uVar1 = 0;
    }
    return uVar1;
}
```

We can see that the flag is visible as individual characters.

Putting these characters together, we get the complete flag.
