# SynqThing
A very thin wrapper around the SyncThing admin web UI in QML. Why? Just so that I don't have to open a browser to use it.

## Build
```bash
git clone https://github.com/darrenedale/SynqThing.git
cd SynqThing
mkdir build && cd build
cmake ../
cmake --build -j12
```

Note `-j12` sets the number of build threads. It's probably best not to set this higher than the number of CPU cores you have available. More threads usually results in a faster build; fewer threads leaves more of your CPU cores available to do other things. Adjust as you see fit (hint: there's very little to build here, so `-j1` will usually do just fine).

## Run
```bash
# from your build directory
./SynqThing
```

## Install
Still todo, but this will do for now:
```bash
# from your build directory
sudo install -o root -g root -m 755 ./SyncThing /usr/local/bin/
```
