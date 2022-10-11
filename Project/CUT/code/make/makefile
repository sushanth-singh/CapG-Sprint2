hr: hrproject.o saveFile.o deallocate.o allocate.o updateFile.o  deleteFile.o addFile.o loadFile.o reports.o validation.o
	g++ -o  ../bin/hr ../obj/hrproject.o ../obj/saveFile.o ../obj/deallocate.o ../obj/allocate.o ../obj/updateFile.o  ../obj/deleteFile.o ../obj/addFile.o ../obj/loadFile.o ../obj/reports.o  ../obj/validation.o

hrproject.o: ../src/hrproject.cpp 
	g++ -o  ../obj/hrproject.o -c ../src/hrproject.cpp

saveFile.o: ../src/saveFile.cpp
	g++ -o  ../obj/saveFile.o -c ../src/saveFile.cpp

deallocate.o: ../src/deAllocate.cpp
	g++ -o  ../obj/deallocate.o -c ../src/deAllocate.cpp

allocate.o: ../src/allocate.cpp
	g++ -o  ../obj/allocate.o -c ../src/allocate.cpp

updateFile.o: ../src/updateFile.cpp
	g++ -o  ../obj/updateFile.o -c ../src/updateFile.cpp

deleteFile.o: ../src/deleteFile.cpp 
	g++ -o  ../obj/deleteFile.o -c ../src/deleteFile.cpp

addFile.o: ../src/addFile.cpp 
	g++ -o  ../obj/addFile.o -c ../src/addFile.cpp

loadFile.o: ../src/loadFile.cpp
	g++ -o  ../obj/loadFile.o -c ../src/loadFile.cpp

validation.o: ../src/validation.cpp
	g++ -o  ../obj/validation.o -c ../src/validation.cpp

reports.o: ../src/reports.cpp
	g++ -o  ../obj/reports.o -c ../src/reports.cpp
	
clean:
	rm ../obj/*-o ../bin/*.exe
	echo "Cleaning all file..."
