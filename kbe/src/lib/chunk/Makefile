LIB =	cstdkbe

SRCS =				\
	cstdkbe			\
	tasks			\
	timer			\
	timestamp		\
	kbeversion		\
	memorystream

ifndef KBE_ROOT
export KBE_ROOT := $(subst /kbe/src/lib/$(LIB),,$(CURDIR))
endif

include $(KBE_ROOT)/kbe/src/build/common.mak