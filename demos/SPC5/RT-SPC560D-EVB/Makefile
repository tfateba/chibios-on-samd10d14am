##############################################################################
# Multi-project makefile rules
#

all:
	@echo
	@echo === Building with GHS ==============================================
	+@make --no-print-directory -f Makefile-ghs all
	@echo ====================================================================
	@echo
	@echo === Building with HighTec ==========================================
	+@make --no-print-directory -f Makefile-ht all
	@echo ====================================================================
	@echo
	@echo === Building with GCC (eabivle) ====================================
	+@make --no-print-directory -f Makefile-gcc-eabivle all
	@echo ====================================================================
	@echo

clean:
	@echo
	+@make --no-print-directory -f Makefile-ghs clean
	@echo
	+@make --no-print-directory -f Makefile-ht clean
	@echo
	+@make --no-print-directory -f Makefile-gcc-eabivle clean
	@echo
#
##############################################################################
