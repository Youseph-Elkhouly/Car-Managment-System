bin/carBase: addNewCar.o printAll.o loadCarData.o printOne.o lookForCarId.o lookForCarModelType.o countCars.o sortCarId.o oneLessCar.o noMoreCars.o mainA3.o printPrice.o swapCarData.o
	mkdir -p bin
	gcc -Wall -std=c99 -o bin/carBase addNewCar.o printAll.o loadCarData.o printOne.o lookForCarId.o lookForCarModelType.o countCars.o sortCarId.o oneLessCar.o noMoreCars.o mainA3.o printPrice.o swapCarData.o

mainA3.o: src/mainA3.c include/headerA3.h
	gcc -Wall -std=c99 -c src/mainA3.c -Iinclude

addNewCar.o: src/addNewCar.c include/headerA3.h
	gcc -Wall -std=c99 -c src/addNewCar.c -Iinclude

printAll.o: src/printAll.c include/headerA3.h
	gcc -Wall -std=c99 -c src/printAll.c -Iinclude

loadCarData.o: src/loadCarData.c include/headerA3.h
	gcc -Wall -std=c99 -c src/loadCarData.c -Iinclude

printOne.o: src/printOne.c include/headerA3.h
	gcc -Wall -std=c99 -c src/printOne.c -Iinclude

lookForCarId.o: src/lookForCarId.c include/headerA3.h
	gcc -Wall -std=c99 -c src/lookForCarId.c -Iinclude

lookForCarModelType.o: src/lookForCarModelType.c include/headerA3.h
	gcc -Wall -std=c99 -c src/lookForCarModelType.c -Iinclude

countCars.o: src/countCars.c include/headerA3.h
	gcc -Wall -std=c99 -c src/countCars.c -Iinclude

sortCarId.o: src/sortCarId.c include/headerA3.h
	gcc -Wall -std=c99 -c src/sortCarId.c -Iinclude

oneLessCar.o: src/oneLessCar.c include/headerA3.h
	gcc -Wall -std=c99 -c src/oneLessCar.c -Iinclude

noMoreCars.o: src/noMoreCars.c include/headerA3.h
	gcc -Wall -std=c99 -c src/noMoreCars.c -Iinclude

printPrice.o: src/printPrice.c include/headerA3.h
	gcc -Wall -std=c99 -c src/printPrice.c -Iinclude

swapCarData.o: src/swapCarData.c include/headerA3.h
	gcc -Wall -std=c99 -c src/swapCarData.c -Iinclude
clean:
	rm -f *.o bin/*

