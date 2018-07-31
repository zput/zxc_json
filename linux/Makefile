LIB_SRC = Document.h Value.h Value.cc   Reader.h  Reader.cc  Writer.h  Writer.cc   FileReadStream.h  FileWriteStream.h  StringReadStream.h  StringWriteStream.h   Exception.h    noncopyable.h PrettyWriter.h                            
BINARIES =  print_document


CXXFLAGS = -O0 -g -std=c++17 -Wall -I ../.. -pthread
LDFLAGS = -lpthread

$(BINARIES):
	g++ $(CXXFLAGS) -o $@ $(LIB_SRC) $(filter %.cc,$^) $(LDFLAGS)

	
test1: test1.cc
test2: test2.cc
test3: test3.cc
test4: test4.cc
test5: test5.cc
test6: test6.cc
test7: test7.cc
print_document: print_document.cc

