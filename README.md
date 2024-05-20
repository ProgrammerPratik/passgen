# passgen
Dimple and strong CLI based password generator made using C++
<br>
Version: 1.0

```
usage:
-l <length> -m <mode (0,1,2)>
-h    for help

OPTIONAL ARGUMENTS:
-l  OR  -length      length of password
-m  OR  -mode        mode of password (0=only letters,1=random,2=alphanumeric)
-h  OR  -help        for more info
-v  OR  -version     version info and stuff
```

examples:

Password generation with mode 0 (only letters)
```
-l 10 -m 0 
PhQGHuMEAy
```

Password generation with mode 1 (random)
```
-l 8 -m 1
8%5E{6?_
```

Password generation with mode 2 (alphanumeric)
```
-l 10 -m 2 
8G5Ey68237
```
