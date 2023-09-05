# --- Build Instructions --- #

## create build and ninja directory
    
        mkdir build ninja


## to build for Unix Makefile
- from parent directory:
        
        cmake -Bbuild
        cmake --build build


## to build for Ninja 
- from parent directory:
        
        cmake -Bninja
        cmake --build ninja -G Ninja
