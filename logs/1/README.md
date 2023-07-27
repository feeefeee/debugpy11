## How to reproduce
Start VScode
- open ```debugpy11``` folder

start visual studio
- open ```app1``` solution
- start debugging

app1 prompts : ```file :```

user answers to app1: ```debugging.py```

app1 prompts : ```Waiting for debugger to attach```

from VSCode: attach

app1 prompts : ```Debugger attached```

app1 prompts : ```file :```

fom VScode, open ```src\app1\app1\testing.py```, set breakpoint on lines 2 (```print("starting")```) and 6 (```print("done")```)

user answers to app1: ```testing.py```

in VSCode: breakpoint on line 2 is hit, type F5, breakpoint on 6 is hit

in VScode: type F5

app1 continues and prompts : ```file :```

but VSCode remains on line 6, call stack displays ```Paused on breakpoint``` line 6

type F5 again in VSCode: the execution line and the call stack do not move

app1 is responsive. type ```anything```, it answers ```Exception: File "anything" could not be opened!```

Expected behaviour:
