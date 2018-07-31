//
// Created by frank on 17-12-26.
//

#include <cstdio>

#include "Writer.h" 
#include "FileWriteStream.h"

using namespace json;
// #pragma warning(disable:4996)
int main()

{
    FileWriteStream os(stdout);
    Writer<FileWriteStream> writer(os);
	      //   stdout.put("----\n");

	//std::string sssj = "蛤蛤蛤";
	//std::string_view str1("\0姐姐\0"sv);
    //std::string sssj = "蛤蛤蛤";
	//std::string_view str2("姐姐"sv);

	printf("%d\n", INFINITY == INFINITY);

    writer.StartArray();
    writer.Double(INFINITY);
    writer.Double(NAN);
    writer.Bool(true);
    //writer.String("\0蛤蛤蛤\0"sv);
	writer.String("\0\xB8\xF2\0"sv);
	writer.String(""sv);
    writer.Bool(true);
    writer.EndArray();

	getchar();
	return 0;
}
