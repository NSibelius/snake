##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Game_2
ConfigurationName      :=Debug
WorkspacePath          :=/Users/ferran/Documents/GitHub/SDL-Game-Framework
ProjectPath            :=/Users/ferran/Documents/GitHub/SDL-Game-Framework/Game_2
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Ferran Molins Galvez
Date                   :=01/02/2020
CodeLitePath           :="/Users/ferran/Library/Application Support/CodeLite"
LinkerName             :=/usr/bin/g++
SharedObjectLinkerName :=/usr/bin/g++ -dynamiclib -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=../bin/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="Game_2.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). $(IncludeSwitch)./include 
IncludePCH             := 
RcIncludePath          := 
Libs                   := $(LibrarySwitch)SDL2 $(LibrarySwitch)SDL2main $(LibrarySwitch)SDL2_test $(LibrarySwitch)SDL2_image 
ArLibs                 :=  "libSDL2.a" "libSDL2main.a" "libSDL2_test.a" "libSDL2_image.a" 
LibPath                := $(LibraryPathSwitch). $(LibraryPathSwitch)/usr/local/lib/ 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++
CC       := /usr/bin/gcc
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/Applications/codelite.app/Contents/SharedSupport/
Objects0=$(IntermediateDirectory)/src_Food.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_TextureManager.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_main.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_InputHandler.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_Game.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_Player.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d ./Debug || $(MakeDirCommand) ./Debug


$(IntermediateDirectory)/.d:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/src_Food.cpp$(ObjectSuffix): src/Food.cpp $(IntermediateDirectory)/src_Food.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/ferran/Documents/GitHub/SDL-Game-Framework/Game_2/src/Food.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Food.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Food.cpp$(DependSuffix): src/Food.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_Food.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_Food.cpp$(DependSuffix) -MM src/Food.cpp

$(IntermediateDirectory)/src_Food.cpp$(PreprocessSuffix): src/Food.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Food.cpp$(PreprocessSuffix) src/Food.cpp

$(IntermediateDirectory)/src_TextureManager.cpp$(ObjectSuffix): src/TextureManager.cpp $(IntermediateDirectory)/src_TextureManager.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/ferran/Documents/GitHub/SDL-Game-Framework/Game_2/src/TextureManager.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_TextureManager.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_TextureManager.cpp$(DependSuffix): src/TextureManager.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_TextureManager.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_TextureManager.cpp$(DependSuffix) -MM src/TextureManager.cpp

$(IntermediateDirectory)/src_TextureManager.cpp$(PreprocessSuffix): src/TextureManager.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_TextureManager.cpp$(PreprocessSuffix) src/TextureManager.cpp

$(IntermediateDirectory)/src_main.cpp$(ObjectSuffix): src/main.cpp $(IntermediateDirectory)/src_main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/ferran/Documents/GitHub/SDL-Game-Framework/Game_2/src/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_main.cpp$(DependSuffix): src/main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_main.cpp$(DependSuffix) -MM src/main.cpp

$(IntermediateDirectory)/src_main.cpp$(PreprocessSuffix): src/main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_main.cpp$(PreprocessSuffix) src/main.cpp

$(IntermediateDirectory)/src_InputHandler.cpp$(ObjectSuffix): src/InputHandler.cpp $(IntermediateDirectory)/src_InputHandler.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/ferran/Documents/GitHub/SDL-Game-Framework/Game_2/src/InputHandler.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_InputHandler.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_InputHandler.cpp$(DependSuffix): src/InputHandler.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_InputHandler.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_InputHandler.cpp$(DependSuffix) -MM src/InputHandler.cpp

$(IntermediateDirectory)/src_InputHandler.cpp$(PreprocessSuffix): src/InputHandler.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_InputHandler.cpp$(PreprocessSuffix) src/InputHandler.cpp

$(IntermediateDirectory)/src_Game.cpp$(ObjectSuffix): src/Game.cpp $(IntermediateDirectory)/src_Game.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/ferran/Documents/GitHub/SDL-Game-Framework/Game_2/src/Game.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Game.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Game.cpp$(DependSuffix): src/Game.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_Game.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_Game.cpp$(DependSuffix) -MM src/Game.cpp

$(IntermediateDirectory)/src_Game.cpp$(PreprocessSuffix): src/Game.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Game.cpp$(PreprocessSuffix) src/Game.cpp

$(IntermediateDirectory)/src_Player.cpp$(ObjectSuffix): src/Player.cpp $(IntermediateDirectory)/src_Player.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/ferran/Documents/GitHub/SDL-Game-Framework/Game_2/src/Player.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Player.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Player.cpp$(DependSuffix): src/Player.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_Player.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_Player.cpp$(DependSuffix) -MM src/Player.cpp

$(IntermediateDirectory)/src_Player.cpp$(PreprocessSuffix): src/Player.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Player.cpp$(PreprocessSuffix) src/Player.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


