/*! \file
    \brief Генерация enum и сериализации для различных перечислений
*/

#pragma once

#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>

#include "../../_libs/marty_cpp/marty_cpp.h"
#include "../../_libs/marty_cpp/marty_ss.h"
#include "../../_libs/marty_cpp/marty_ns.h"
#include "../../_libs/marty_cpp/marty_enum.h"
#include "../../_libs/marty_cpp/marty_flags.h"



int main()
{

    std::cout
        << "#pragma once\n"
        << "\n"
        << "#include \"marty_cpp/marty_cpp.h\"\n"
        << "#include \"marty_cpp/marty_enum.h\"\n"
        << "#include \"marty_cpp/marty_flags.h\"\n"
        << "\n";


    using namespace marty_cpp;


    //auto ns = makeNamespaceOutputWriteGuard( std::cout, std::string("marty_cpp") );

    enum_generate_serialize( std::cout
                           , std::string( "invalid,unknown=-1; tabConvert,tab=0; spaceConvert,space; normalizeIndent,normalize,norm,indent;"
                                        )
                           , std::string(), std::string("    ")
                           , std::string("ETabToolCommand"), std::string() // std::string("std::uint8_t")
                           , NameStyle::camelStyle // pascalStyle
                           , NameStyle::all        // serializedNameStyle all - mix of all styles while deserializing, serialization uses same style as C/C++ constants
                           , std::string("") // name prefix
                           , EnumGeneratorOptionFlags::enumClass
                           | EnumGeneratorOptionFlags::generateDefAll // generateDefType | generateDefSerialize | generateDefDeserialize   // generateDefAll
                           //| EnumGeneratorOptionFlags::generateDefSerializeExtra
                           | EnumGeneratorOptionFlags::lowercaseDeserelialize
                           //| EnumGeneratorOptionFlags::enumFlags
                           //| EnumGeneratorOptionFlags::outputHex
                           );
    return 0;
}






