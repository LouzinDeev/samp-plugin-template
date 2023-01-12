cmake_minimum_required (VERSION 3.8)
include(AMXConfig)
include(AddSAMPPlugin)

set(SOURCES
	"${SDK}/amxplugin.cpp"
	"${SDK}/amxplugin2.cpp"
	"${RAKNET}/BitStream.cpp"
	"${RAKNET}/DS_HuffmanEncodingTree.cpp"
	"${RAKNET}/StringCompressor"
	"Natives.cpp"
	"main.cpp"
)

set(HEADERS 
	"${SDK}/amx/amx.h"
	"${SDK}/amx/amx2.h"
	"Natives.h"
	"common.h"
)

add_samp_plugin(Plugin 
	"${HEADERS}"
	"${SOURCES}"
	"plugin.def"
)


target_include_directories(Plugin PUBLIC
	"${SDK}"
	"${RAKNET}"
	"${CMAKE_BINARY_DIR}"
)