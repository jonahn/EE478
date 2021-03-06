#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Include project Makefile
ifeq "${IGNORE_LOCAL}" "TRUE"
# do not include local makefile. User is passing all local related variables already
else
include Makefile
# Include makefile containing local settings
ifeq "$(wildcard nbproject/Makefile-local-default.mk)" "nbproject/Makefile-local-default.mk"
include nbproject/Makefile-local-default.mk
endif
endif

# Environment
MKDIR=gnumkdir -p
RM=rm -f 
MV=mv 
CP=cp 

# Macros
CND_CONF=default
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
IMAGE_TYPE=debug
OUTPUT_SUFFIX=cof
DEBUGGABLE_SUFFIX=cof
FINAL_IMAGE=dist/${CND_CONF}/${IMAGE_TYPE}/Remote.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
else
IMAGE_TYPE=production
OUTPUT_SUFFIX=hex
DEBUGGABLE_SUFFIX=cof
FINAL_IMAGE=dist/${CND_CONF}/${IMAGE_TYPE}/Remote.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
endif

# Object Directory
OBJECTDIR=build/${CND_CONF}/${IMAGE_TYPE}

# Distribution Directory
DISTDIR=dist/${CND_CONF}/${IMAGE_TYPE}

# Source Files Quoted if spaced
SOURCEFILES_QUOTED_IF_SPACED=src/i2c_slave.c ../src/utils.c src/remote_main.c ../src/sram.c src/ADC_Remote.c

# Object Files Quoted if spaced
OBJECTFILES_QUOTED_IF_SPACED=${OBJECTDIR}/src/i2c_slave.o ${OBJECTDIR}/_ext/1360937237/utils.o ${OBJECTDIR}/src/remote_main.o ${OBJECTDIR}/_ext/1360937237/sram.o ${OBJECTDIR}/src/ADC_Remote.o
POSSIBLE_DEPFILES=${OBJECTDIR}/src/i2c_slave.o.d ${OBJECTDIR}/_ext/1360937237/utils.o.d ${OBJECTDIR}/src/remote_main.o.d ${OBJECTDIR}/_ext/1360937237/sram.o.d ${OBJECTDIR}/src/ADC_Remote.o.d

# Object Files
OBJECTFILES=${OBJECTDIR}/src/i2c_slave.o ${OBJECTDIR}/_ext/1360937237/utils.o ${OBJECTDIR}/src/remote_main.o ${OBJECTDIR}/_ext/1360937237/sram.o ${OBJECTDIR}/src/ADC_Remote.o

# Source Files
SOURCEFILES=src/i2c_slave.c ../src/utils.c src/remote_main.c ../src/sram.c src/ADC_Remote.c


CFLAGS=
ASFLAGS=
LDLIBSOPTIONS=

############# Tool locations ##########################################
# If you copy a project from one host to another, the path where the  #
# compiler is installed may be different.                             #
# If you open this project with MPLAB X in the new host, this         #
# makefile will be regenerated and the paths will be corrected.       #
#######################################################################
# fixDeps replaces a bunch of sed/cat/printf statements that slow down the build
FIXDEPS=fixDeps

.build-conf:  ${BUILD_SUBPROJECTS}
	${MAKE} ${MAKE_OPTIONS} -f nbproject/Makefile-default.mk dist/${CND_CONF}/${IMAGE_TYPE}/Remote.${IMAGE_TYPE}.${OUTPUT_SUFFIX}

MP_PROCESSOR_OPTION=18F25K22
MP_PROCESSOR_OPTION_LD=18f25k22
MP_LINKER_DEBUG_OPTION=
# ------------------------------------------------------------------------------------
# Rules for buildStep: assemble
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: compile
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${OBJECTDIR}/src/i2c_slave.o: src/i2c_slave.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/src 
	@${RM} ${OBJECTDIR}/src/i2c_slave.o.d 
	${MP_CC} $(MP_EXTRA_CC_PRE) -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -p$(MP_PROCESSOR_OPTION)   -I ${MP_CC_DIR}\\..\\h  -fo ${OBJECTDIR}/src/i2c_slave.o   src/i2c_slave.c 
	@${DEP_GEN} -d ${OBJECTDIR}/src/i2c_slave.o 
	@${FIXDEPS} "${OBJECTDIR}/src/i2c_slave.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c18 
	
${OBJECTDIR}/_ext/1360937237/utils.o: ../src/utils.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1360937237 
	@${RM} ${OBJECTDIR}/_ext/1360937237/utils.o.d 
	${MP_CC} $(MP_EXTRA_CC_PRE) -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -p$(MP_PROCESSOR_OPTION)   -I ${MP_CC_DIR}\\..\\h  -fo ${OBJECTDIR}/_ext/1360937237/utils.o   ../src/utils.c 
	@${DEP_GEN} -d ${OBJECTDIR}/_ext/1360937237/utils.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937237/utils.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c18 
	
${OBJECTDIR}/src/remote_main.o: src/remote_main.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/src 
	@${RM} ${OBJECTDIR}/src/remote_main.o.d 
	${MP_CC} $(MP_EXTRA_CC_PRE) -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -p$(MP_PROCESSOR_OPTION)   -I ${MP_CC_DIR}\\..\\h  -fo ${OBJECTDIR}/src/remote_main.o   src/remote_main.c 
	@${DEP_GEN} -d ${OBJECTDIR}/src/remote_main.o 
	@${FIXDEPS} "${OBJECTDIR}/src/remote_main.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c18 
	
${OBJECTDIR}/_ext/1360937237/sram.o: ../src/sram.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1360937237 
	@${RM} ${OBJECTDIR}/_ext/1360937237/sram.o.d 
	${MP_CC} $(MP_EXTRA_CC_PRE) -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -p$(MP_PROCESSOR_OPTION)   -I ${MP_CC_DIR}\\..\\h  -fo ${OBJECTDIR}/_ext/1360937237/sram.o   ../src/sram.c 
	@${DEP_GEN} -d ${OBJECTDIR}/_ext/1360937237/sram.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937237/sram.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c18 
	
${OBJECTDIR}/src/ADC_Remote.o: src/ADC_Remote.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/src 
	@${RM} ${OBJECTDIR}/src/ADC_Remote.o.d 
	${MP_CC} $(MP_EXTRA_CC_PRE) -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -p$(MP_PROCESSOR_OPTION)   -I ${MP_CC_DIR}\\..\\h  -fo ${OBJECTDIR}/src/ADC_Remote.o   src/ADC_Remote.c 
	@${DEP_GEN} -d ${OBJECTDIR}/src/ADC_Remote.o 
	@${FIXDEPS} "${OBJECTDIR}/src/ADC_Remote.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c18 
	
else
${OBJECTDIR}/src/i2c_slave.o: src/i2c_slave.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/src 
	@${RM} ${OBJECTDIR}/src/i2c_slave.o.d 
	${MP_CC} $(MP_EXTRA_CC_PRE) -p$(MP_PROCESSOR_OPTION)   -I ${MP_CC_DIR}\\..\\h  -fo ${OBJECTDIR}/src/i2c_slave.o   src/i2c_slave.c 
	@${DEP_GEN} -d ${OBJECTDIR}/src/i2c_slave.o 
	@${FIXDEPS} "${OBJECTDIR}/src/i2c_slave.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c18 
	
${OBJECTDIR}/_ext/1360937237/utils.o: ../src/utils.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1360937237 
	@${RM} ${OBJECTDIR}/_ext/1360937237/utils.o.d 
	${MP_CC} $(MP_EXTRA_CC_PRE) -p$(MP_PROCESSOR_OPTION)   -I ${MP_CC_DIR}\\..\\h  -fo ${OBJECTDIR}/_ext/1360937237/utils.o   ../src/utils.c 
	@${DEP_GEN} -d ${OBJECTDIR}/_ext/1360937237/utils.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937237/utils.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c18 
	
${OBJECTDIR}/src/remote_main.o: src/remote_main.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/src 
	@${RM} ${OBJECTDIR}/src/remote_main.o.d 
	${MP_CC} $(MP_EXTRA_CC_PRE) -p$(MP_PROCESSOR_OPTION)   -I ${MP_CC_DIR}\\..\\h  -fo ${OBJECTDIR}/src/remote_main.o   src/remote_main.c 
	@${DEP_GEN} -d ${OBJECTDIR}/src/remote_main.o 
	@${FIXDEPS} "${OBJECTDIR}/src/remote_main.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c18 
	
${OBJECTDIR}/_ext/1360937237/sram.o: ../src/sram.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1360937237 
	@${RM} ${OBJECTDIR}/_ext/1360937237/sram.o.d 
	${MP_CC} $(MP_EXTRA_CC_PRE) -p$(MP_PROCESSOR_OPTION)   -I ${MP_CC_DIR}\\..\\h  -fo ${OBJECTDIR}/_ext/1360937237/sram.o   ../src/sram.c 
	@${DEP_GEN} -d ${OBJECTDIR}/_ext/1360937237/sram.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937237/sram.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c18 
	
${OBJECTDIR}/src/ADC_Remote.o: src/ADC_Remote.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/src 
	@${RM} ${OBJECTDIR}/src/ADC_Remote.o.d 
	${MP_CC} $(MP_EXTRA_CC_PRE) -p$(MP_PROCESSOR_OPTION)   -I ${MP_CC_DIR}\\..\\h  -fo ${OBJECTDIR}/src/ADC_Remote.o   src/ADC_Remote.c 
	@${DEP_GEN} -d ${OBJECTDIR}/src/ADC_Remote.o 
	@${FIXDEPS} "${OBJECTDIR}/src/ADC_Remote.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c18 
	
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: link
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
dist/${CND_CONF}/${IMAGE_TYPE}/Remote.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk    
	@${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_LD} $(MP_EXTRA_LD_PRE)   -p$(MP_PROCESSOR_OPTION_LD)  -w -x -u_DEBUG -m"${DISTDIR}/${PROJECTNAME}.${IMAGE_TYPE}.map"  -z__MPLAB_BUILD=1  -u_CRUNTIME -z__MPLAB_DEBUG=1 -z__MPLAB_DEBUGGER_PK3=1 $(MP_LINKER_DEBUG_OPTION) -l ${MP_CC_DIR}\\..\\lib  -o dist/${CND_CONF}/${IMAGE_TYPE}/Remote.${IMAGE_TYPE}.${OUTPUT_SUFFIX}  ${OBJECTFILES_QUOTED_IF_SPACED}   
else
dist/${CND_CONF}/${IMAGE_TYPE}/Remote.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk   
	@${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_LD} $(MP_EXTRA_LD_PRE)   -p$(MP_PROCESSOR_OPTION_LD)  -w  -m"${DISTDIR}/${PROJECTNAME}.${IMAGE_TYPE}.map"  -z__MPLAB_BUILD=1  -u_CRUNTIME -l ${MP_CC_DIR}\\..\\lib  -o dist/${CND_CONF}/${IMAGE_TYPE}/Remote.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX}  ${OBJECTFILES_QUOTED_IF_SPACED}   
endif


# Subprojects
.build-subprojects:


# Subprojects
.clean-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r build/default
	${RM} -r dist/default

# Enable dependency checking
.dep.inc: .depcheck-impl

DEPFILES=$(shell mplabwildcard ${POSSIBLE_DEPFILES})
ifneq (${DEPFILES},)
include ${DEPFILES}
endif
