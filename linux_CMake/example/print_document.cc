
#include "Document.h"
#include "Writer.h"
#include "FileWriteStream.h"

using namespace zxc_json;

int main()
{
    Document document;
   // ParseError err = document.parse(sample[0]);   //   这个sample数组有两个:0,1

   //	ParseError err = document.parse("[true,\"\"]");
	ParseError err = document.parse("{\"x1\":null,\"x2\":[false]}");

    if (err != PARSE_OK) {
        puts(parseErrorStr(err));
        return 1;
    }

    FileWriteStream os(stdout);
    Writer<FileWriteStream> writer(os);
    document.writeTo(writer);
	getchar();
}