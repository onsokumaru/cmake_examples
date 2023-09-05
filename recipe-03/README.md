# --- Build Instructions --- #

## create build and ninja directory
    
        mkdir build ninja


## Conditional Compilation
---

## to build for Unix Makefile
- from parent directory:
  
  * for building and linking as a shared library
        
        cmake -Bbuild -D USE_LIBRARY=ON
        cmake --build build

  * for building and linking as a static library

        cmake -Bbuild -D USE_LIBRARY=ON \
              -D MAKE_STATIC_LIBRARY=ON \
              -D MAKE_SHARED_LIBRARY=OFF
        cmake --build build

  * for building with source files only

        cmake -Bbuild -D USE_LIBRARY=OFF \
              -D MAKE_SHARED_LIBRARY=ON
        cmake --build build

## to build for Ninja 
- from parent directory:
        
        cmake -Bninja
        cmake --build ninja -G Ninja


---
## Conditional Compilation


