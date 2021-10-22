##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=forca
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=/home/erodrigues/www/learning/alura/c++/avancando
ProjectPath            :=/home/erodrigues/www/learning/alura/c++/avancando/forca
IntermediateDirectory  :=../build-$(ConfigurationName)/forca
OutDir                 :=../build-$(ConfigurationName)/forca
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Elton Rodrigues
Date                   :=22/10/21
CodeLitePath           :=/home/erodrigues/.codelite
LinkerName             :=/usr/bin/g++-10
SharedObjectLinkerName :=/usr/bin/g++-10 -shared -fPIC
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
OutputFile             :=../build-$(ConfigurationName)/bin/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++-10
CC       := /usr/bin/gcc-10
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=../build-$(ConfigurationName)/forca/funcoes.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/forca/forca.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/forca/.d $(Objects) 
	@mkdir -p "../build-$(ConfigurationName)/forca"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@mkdir -p "../build-$(ConfigurationName)/forca"
	@mkdir -p ""../build-$(ConfigurationName)/bin""

../build-$(ConfigurationName)/forca/.d:
	@mkdir -p "../build-$(ConfigurationName)/forca"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/forca/funcoes.cpp$(ObjectSuffix): funcoes.cpp ../build-$(ConfigurationName)/forca/funcoes.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/erodrigues/www/learning/alura/c++/avancando/forca/funcoes.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/funcoes.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/forca/funcoes.cpp$(DependSuffix): funcoes.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/forca/funcoes.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/forca/funcoes.cpp$(DependSuffix) -MM funcoes.cpp

../build-$(ConfigurationName)/forca/funcoes.cpp$(PreprocessSuffix): funcoes.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/forca/funcoes.cpp$(PreprocessSuffix) funcoes.cpp

../build-$(ConfigurationName)/forca/forca.cpp$(ObjectSuffix): forca.cpp ../build-$(ConfigurationName)/forca/forca.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/erodrigues/www/learning/alura/c++/avancando/forca/forca.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/forca.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/forca/forca.cpp$(DependSuffix): forca.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/forca/forca.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/forca/forca.cpp$(DependSuffix) -MM forca.cpp

../build-$(ConfigurationName)/forca/forca.cpp$(PreprocessSuffix): forca.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/forca/forca.cpp$(PreprocessSuffix) forca.cpp


-include ../build-$(ConfigurationName)/forca//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


