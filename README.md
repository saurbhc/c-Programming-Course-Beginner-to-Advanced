link: https://www.youtube.com/watch?v=8jLOx1hD3_o

- install gcc:
    ```bash
    brew install gcc
    ```

- check if gcc is installed:
    ```bash
    gcc-11
    ```

- build and run cpp - in vscode:
    1. click on Terminal
    2. click on Run Task
    3. select a compiler -> Clang
    4. run cpp:
        ```bash
        ./main
        ```

- remove files/folders except .cpp files (make sure it's already -- chmod +x <file>):
    ```bash
    ../scripts/rm_non_cpp_files.sh
    ```
    - don't run this script from the root folder.
