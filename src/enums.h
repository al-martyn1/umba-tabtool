#pragma once

#include "marty_cpp/marty_cpp.h"
#include "marty_cpp/marty_enum.h"
#include "marty_cpp/marty_flags.h"


enum class ETabToolCommand
{
    invalid           = -1,
    unknown           = -1,
    tabConvert        = 0,
    tab               = 0,
    spaceConvert      = 1,
    space             = 1,
    normalizeIndent   = 2,
    normalize         = 2,
    norm              = 2,
    indent            = 2

}; // enum class ETabToolCommand

MARTY_CPP_ENUM_CLASS_SERIALIZE_BEGIN( ETabToolCommand, std::map, 1 )
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( ETabToolCommand::spaceConvert     , "SpaceConvert"    );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( ETabToolCommand::invalid          , "Invalid"         );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( ETabToolCommand::tabConvert       , "TabConvert"      );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( ETabToolCommand::normalizeIndent  , "NormalizeIndent" );
MARTY_CPP_ENUM_CLASS_SERIALIZE_END( ETabToolCommand, std::map, 1 )

MARTY_CPP_ENUM_CLASS_DESERIALIZE_BEGIN( ETabToolCommand, std::map, 1 )
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( ETabToolCommand::spaceConvert     , "space-convert"    );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( ETabToolCommand::spaceConvert     , "space"            );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( ETabToolCommand::spaceConvert     , "space_convert"    );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( ETabToolCommand::spaceConvert     , "spaceconvert"     );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( ETabToolCommand::invalid          , "invalid"          );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( ETabToolCommand::invalid          , "unknown"          );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( ETabToolCommand::tabConvert       , "tab-convert"      );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( ETabToolCommand::tabConvert       , "tab"              );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( ETabToolCommand::tabConvert       , "tab_convert"      );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( ETabToolCommand::tabConvert       , "tabconvert"       );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( ETabToolCommand::normalizeIndent  , "normalize-indent" );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( ETabToolCommand::normalizeIndent  , "norm"             );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( ETabToolCommand::normalizeIndent  , "normalize_indent" );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( ETabToolCommand::normalizeIndent  , "normalizeindent"  );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( ETabToolCommand::normalizeIndent  , "normalize"        );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( ETabToolCommand::normalizeIndent  , "indent"           );
MARTY_CPP_ENUM_CLASS_DESERIALIZE_END( ETabToolCommand, std::map, 1 )

