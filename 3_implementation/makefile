PROJ_NAME=banking system
SRC=main1.c

ifdef OS
  RM=del/q
  FixPath=$(subst/,\$1)
  EXEC=exe
else
  ifeq($(shell uanme),linux)
  RM=rm-rf
  FixPath=$1
  EXEC=out
endif
endif

build:
  gcc$(SRC)-o $(call FixPath,$(PROJ_NAME),$(EXEC))-im
  
run:build
  ./$(call fixpath,$(proj_name),$(EXEC))
  
clean:
  $(RM)$(call fixpath,$(PROJ_NAME),$(EXEC))
  
  
