clear
rm -f ./src/project/main.pro
qmake -project -o ./src/project/main.pro
echo "" >> ./src/project/main.pro
echo "# QT" >> ./src/project/main.pro
echo "QT += widgets" >> ./src/project/main.pro
rm -f Makefile
qmake -makefile ./src/project/main.pro
rm -f ./bin/main.o
rm -f ./bin/main
rm -f .bin/ui.o
make
mv main.o ./bin/main.o
mv main ./bin/main
rm -f Makefile
./bin/main
