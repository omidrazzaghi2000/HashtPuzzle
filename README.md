# In the name of God

[![AmirKabir](https://res-3.cloudinary.com/crunchbase-production/image/upload/c_lpad,h_170,w_170,f_auto,b_white,q_auto:eco/lcey4djrfahc86x5qbtj)](https://nodesource.com/products/nsolid)



8 puzzle solver with BFS and DFS c++
tools:
  - Docker
  - Xlaunch for windows


# Installation and Run

> Install [Xlaunch](https://github.com/omidrazzaghi2000/HashtPuzzle/blob/master/vcxsrv-64.1.20.8.1.installer.exe) 
> Run Docker App
> in command line:

```sh
$ docker build -t solver .
$ docker run -v %CD%:/usr/src/app -e DISPLAY=<YOUR_IP_ADDR>:0.0 -it --rm solver bash -l
root@c5f118b55428:/usr/src/app#mkdir obj
root@c5f118b55428:/usr/src/app#make
root@c5f118b55428:/usr/src/app#./main
```

If all the things work correctly you must see below picture
