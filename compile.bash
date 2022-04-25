PROJECT=${1}

g++ -Wall -std=c++14 "${PROJECT}/src/main.cpp" -o "${PROJECT}/dist/main.exe"

# RUN bash compile.bash <project directory>