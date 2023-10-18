/*** DO NOT EDIT THIS FILE DIRECTLY (use 'krylov_func_header' to generate) ***/

/******************************************************************************
 * Copyright (c) 1998 Lawrence Livermore National Security, LLC and other
 * HYPRE Project Developers. See the top-level COPYRIGHT file for details.
 *
 * SPDX-License-Identifier: (Apache-2.0 OR MIT)
 ******************************************************************************/

/******************************************************************************
 * Header file for transforming multiprecision functions names
 *****************************************************************************/

#ifndef KRYLOV_MUP_FUNC_HEADER
#define KRYLOV_MUP_FUNC_HEADER

#include "multiprecision.h"

#define hypre_BiCGSTABCreate HYPRE_MULTIPRECISION_FUNC ( hypre_BiCGSTABCreate )
#define hypre_BiCGSTABDestroy HYPRE_MULTIPRECISION_FUNC ( hypre_BiCGSTABDestroy )
#define hypre_BiCGSTABFunctionsCreate HYPRE_MULTIPRECISION_FUNC ( hypre_BiCGSTABFunctionsCreate )
#define hypre_BiCGSTABGetConverged HYPRE_MULTIPRECISION_FUNC ( hypre_BiCGSTABGetConverged )
#define hypre_BiCGSTABGetFinalRelativeResidualNorm HYPRE_MULTIPRECISION_FUNC ( hypre_BiCGSTABGetFinalRelativeResidualNorm )
#define hypre_BiCGSTABGetNumIterations HYPRE_MULTIPRECISION_FUNC ( hypre_BiCGSTABGetNumIterations )
#define hypre_BiCGSTABGetPrecond HYPRE_MULTIPRECISION_FUNC ( hypre_BiCGSTABGetPrecond )
#define hypre_BiCGSTABGetResidual HYPRE_MULTIPRECISION_FUNC ( hypre_BiCGSTABGetResidual )
#define hypre_BiCGSTABSetAbsoluteTol HYPRE_MULTIPRECISION_FUNC ( hypre_BiCGSTABSetAbsoluteTol )
#define hypre_BiCGSTABSetConvergenceFactorTol HYPRE_MULTIPRECISION_FUNC ( hypre_BiCGSTABSetConvergenceFactorTol )
#define hypre_BiCGSTABSetHybrid HYPRE_MULTIPRECISION_FUNC ( hypre_BiCGSTABSetHybrid )
#define hypre_BiCGSTABSetLogging HYPRE_MULTIPRECISION_FUNC ( hypre_BiCGSTABSetLogging )
#define hypre_BiCGSTABSetMaxIter HYPRE_MULTIPRECISION_FUNC ( hypre_BiCGSTABSetMaxIter )
#define hypre_BiCGSTABSetMinIter HYPRE_MULTIPRECISION_FUNC ( hypre_BiCGSTABSetMinIter )
#define hypre_BiCGSTABSetPrecond HYPRE_MULTIPRECISION_FUNC ( hypre_BiCGSTABSetPrecond )
#define hypre_BiCGSTABSetPrecondMatrix HYPRE_MULTIPRECISION_FUNC ( hypre_BiCGSTABSetPrecondMatrix )
#define hypre_BiCGSTABGetPrecondMatrix HYPRE_MULTIPRECISION_FUNC ( hypre_BiCGSTABGetPrecondMatrix )
#define hypre_BiCGSTABSetPrintLevel HYPRE_MULTIPRECISION_FUNC ( hypre_BiCGSTABSetPrintLevel )
#define hypre_BiCGSTABSetStopCrit HYPRE_MULTIPRECISION_FUNC ( hypre_BiCGSTABSetStopCrit )
#define hypre_BiCGSTABSetTol HYPRE_MULTIPRECISION_FUNC ( hypre_BiCGSTABSetTol )
#define hypre_BiCGSTABSetup HYPRE_MULTIPRECISION_FUNC ( hypre_BiCGSTABSetup )
#define hypre_BiCGSTABSolve HYPRE_MULTIPRECISION_FUNC ( hypre_BiCGSTABSolve )
#define hypre_CGNRCreate HYPRE_MULTIPRECISION_FUNC ( hypre_CGNRCreate )
#define hypre_CGNRDestroy HYPRE_MULTIPRECISION_FUNC ( hypre_CGNRDestroy )
#define hypre_CGNRFunctionsCreate HYPRE_MULTIPRECISION_FUNC ( hypre_CGNRFunctionsCreate )
#define hypre_CGNRGetFinalRelativeResidualNorm HYPRE_MULTIPRECISION_FUNC ( hypre_CGNRGetFinalRelativeResidualNorm )
#define hypre_CGNRGetNumIterations HYPRE_MULTIPRECISION_FUNC ( hypre_CGNRGetNumIterations )
#define hypre_CGNRGetPrecond HYPRE_MULTIPRECISION_FUNC ( hypre_CGNRGetPrecond )
#define hypre_CGNRSetLogging HYPRE_MULTIPRECISION_FUNC ( hypre_CGNRSetLogging )
#define hypre_CGNRSetMaxIter HYPRE_MULTIPRECISION_FUNC ( hypre_CGNRSetMaxIter )
#define hypre_CGNRSetMinIter HYPRE_MULTIPRECISION_FUNC ( hypre_CGNRSetMinIter )
#define hypre_CGNRSetPrecond HYPRE_MULTIPRECISION_FUNC ( hypre_CGNRSetPrecond )
#define hypre_CGNRSetStopCrit HYPRE_MULTIPRECISION_FUNC ( hypre_CGNRSetStopCrit )
#define hypre_CGNRSetTol HYPRE_MULTIPRECISION_FUNC ( hypre_CGNRSetTol )
#define hypre_CGNRSetup HYPRE_MULTIPRECISION_FUNC ( hypre_CGNRSetup )
#define hypre_CGNRSolve HYPRE_MULTIPRECISION_FUNC ( hypre_CGNRSolve )
#define hypre_COGMRESCreate HYPRE_MULTIPRECISION_FUNC ( hypre_COGMRESCreate )
#define hypre_COGMRESDestroy HYPRE_MULTIPRECISION_FUNC ( hypre_COGMRESDestroy )
#define hypre_COGMRESFunctionsCreate HYPRE_MULTIPRECISION_FUNC ( hypre_COGMRESFunctionsCreate )
#define hypre_COGMRESGetAbsoluteTol HYPRE_MULTIPRECISION_FUNC ( hypre_COGMRESGetAbsoluteTol )
#define hypre_COGMRESGetCGS HYPRE_MULTIPRECISION_FUNC ( hypre_COGMRESGetCGS )
#define hypre_COGMRESGetConverged HYPRE_MULTIPRECISION_FUNC ( hypre_COGMRESGetConverged )
#define hypre_COGMRESGetConvergenceFactorTol HYPRE_MULTIPRECISION_FUNC ( hypre_COGMRESGetConvergenceFactorTol )
#define hypre_COGMRESGetFinalRelativeResidualNorm HYPRE_MULTIPRECISION_FUNC ( hypre_COGMRESGetFinalRelativeResidualNorm )
#define hypre_COGMRESGetKDim HYPRE_MULTIPRECISION_FUNC ( hypre_COGMRESGetKDim )
#define hypre_COGMRESGetLogging HYPRE_MULTIPRECISION_FUNC ( hypre_COGMRESGetLogging )
#define hypre_COGMRESGetMaxIter HYPRE_MULTIPRECISION_FUNC ( hypre_COGMRESGetMaxIter )
#define hypre_COGMRESGetMinIter HYPRE_MULTIPRECISION_FUNC ( hypre_COGMRESGetMinIter )
#define hypre_COGMRESGetNumIterations HYPRE_MULTIPRECISION_FUNC ( hypre_COGMRESGetNumIterations )
#define hypre_COGMRESGetPrecond HYPRE_MULTIPRECISION_FUNC ( hypre_COGMRESGetPrecond )
#define hypre_COGMRESGetPrintLevel HYPRE_MULTIPRECISION_FUNC ( hypre_COGMRESGetPrintLevel )
#define hypre_COGMRESGetRelChange HYPRE_MULTIPRECISION_FUNC ( hypre_COGMRESGetRelChange )
#define hypre_COGMRESGetResidual HYPRE_MULTIPRECISION_FUNC ( hypre_COGMRESGetResidual )
#define hypre_COGMRESGetSkipRealResidualCheck HYPRE_MULTIPRECISION_FUNC ( hypre_COGMRESGetSkipRealResidualCheck )
#define hypre_COGMRESGetTol HYPRE_MULTIPRECISION_FUNC ( hypre_COGMRESGetTol )
#define hypre_COGMRESGetUnroll HYPRE_MULTIPRECISION_FUNC ( hypre_COGMRESGetUnroll )
#define hypre_COGMRESSetAbsoluteTol HYPRE_MULTIPRECISION_FUNC ( hypre_COGMRESSetAbsoluteTol )
#define hypre_COGMRESSetCGS HYPRE_MULTIPRECISION_FUNC ( hypre_COGMRESSetCGS )
#define hypre_COGMRESSetConvergenceFactorTol HYPRE_MULTIPRECISION_FUNC ( hypre_COGMRESSetConvergenceFactorTol )
#define hypre_COGMRESSetKDim HYPRE_MULTIPRECISION_FUNC ( hypre_COGMRESSetKDim )
#define hypre_COGMRESSetLogging HYPRE_MULTIPRECISION_FUNC ( hypre_COGMRESSetLogging )
#define hypre_COGMRESSetMaxIter HYPRE_MULTIPRECISION_FUNC ( hypre_COGMRESSetMaxIter )
#define hypre_COGMRESSetMinIter HYPRE_MULTIPRECISION_FUNC ( hypre_COGMRESSetMinIter )
#define hypre_COGMRESSetModifyPC HYPRE_MULTIPRECISION_FUNC ( hypre_COGMRESSetModifyPC )
#define hypre_COGMRESSetPrecond HYPRE_MULTIPRECISION_FUNC ( hypre_COGMRESSetPrecond )
#define hypre_COGMRESSetPrintLevel HYPRE_MULTIPRECISION_FUNC ( hypre_COGMRESSetPrintLevel )
#define hypre_COGMRESSetRelChange HYPRE_MULTIPRECISION_FUNC ( hypre_COGMRESSetRelChange )
#define hypre_COGMRESSetSkipRealResidualCheck HYPRE_MULTIPRECISION_FUNC ( hypre_COGMRESSetSkipRealResidualCheck )
#define hypre_COGMRESSetTol HYPRE_MULTIPRECISION_FUNC ( hypre_COGMRESSetTol )
#define hypre_COGMRESSetUnroll HYPRE_MULTIPRECISION_FUNC ( hypre_COGMRESSetUnroll )
#define hypre_COGMRESSetup HYPRE_MULTIPRECISION_FUNC ( hypre_COGMRESSetup )
#define hypre_COGMRESSolve HYPRE_MULTIPRECISION_FUNC ( hypre_COGMRESSolve )
#define hypre_FlexGMRESCreate HYPRE_MULTIPRECISION_FUNC ( hypre_FlexGMRESCreate )
#define hypre_FlexGMRESDestroy HYPRE_MULTIPRECISION_FUNC ( hypre_FlexGMRESDestroy )
#define hypre_FlexGMRESFunctionsCreate HYPRE_MULTIPRECISION_FUNC ( hypre_FlexGMRESFunctionsCreate )
#define hypre_FlexGMRESGetAbsoluteTol HYPRE_MULTIPRECISION_FUNC ( hypre_FlexGMRESGetAbsoluteTol )
#define hypre_FlexGMRESGetConverged HYPRE_MULTIPRECISION_FUNC ( hypre_FlexGMRESGetConverged )
#define hypre_FlexGMRESGetConvergenceFactorTol HYPRE_MULTIPRECISION_FUNC ( hypre_FlexGMRESGetConvergenceFactorTol )
#define hypre_FlexGMRESGetFinalRelativeResidualNorm HYPRE_MULTIPRECISION_FUNC ( hypre_FlexGMRESGetFinalRelativeResidualNorm )
#define hypre_FlexGMRESGetKDim HYPRE_MULTIPRECISION_FUNC ( hypre_FlexGMRESGetKDim )
#define hypre_FlexGMRESGetLogging HYPRE_MULTIPRECISION_FUNC ( hypre_FlexGMRESGetLogging )
#define hypre_FlexGMRESGetMaxIter HYPRE_MULTIPRECISION_FUNC ( hypre_FlexGMRESGetMaxIter )
#define hypre_FlexGMRESGetMinIter HYPRE_MULTIPRECISION_FUNC ( hypre_FlexGMRESGetMinIter )
#define hypre_FlexGMRESGetNumIterations HYPRE_MULTIPRECISION_FUNC ( hypre_FlexGMRESGetNumIterations )
#define hypre_FlexGMRESGetPrecond HYPRE_MULTIPRECISION_FUNC ( hypre_FlexGMRESGetPrecond )
#define hypre_FlexGMRESGetPrintLevel HYPRE_MULTIPRECISION_FUNC ( hypre_FlexGMRESGetPrintLevel )
#define hypre_FlexGMRESGetResidual HYPRE_MULTIPRECISION_FUNC ( hypre_FlexGMRESGetResidual )
#define hypre_FlexGMRESGetStopCrit HYPRE_MULTIPRECISION_FUNC ( hypre_FlexGMRESGetStopCrit )
#define hypre_FlexGMRESGetTol HYPRE_MULTIPRECISION_FUNC ( hypre_FlexGMRESGetTol )
#define hypre_FlexGMRESModifyPCDefault HYPRE_MULTIPRECISION_FUNC ( hypre_FlexGMRESModifyPCDefault )
#define hypre_FlexGMRESSetAbsoluteTol HYPRE_MULTIPRECISION_FUNC ( hypre_FlexGMRESSetAbsoluteTol )
#define hypre_FlexGMRESSetConvergenceFactorTol HYPRE_MULTIPRECISION_FUNC ( hypre_FlexGMRESSetConvergenceFactorTol )
#define hypre_FlexGMRESSetKDim HYPRE_MULTIPRECISION_FUNC ( hypre_FlexGMRESSetKDim )
#define hypre_FlexGMRESSetLogging HYPRE_MULTIPRECISION_FUNC ( hypre_FlexGMRESSetLogging )
#define hypre_FlexGMRESSetMaxIter HYPRE_MULTIPRECISION_FUNC ( hypre_FlexGMRESSetMaxIter )
#define hypre_FlexGMRESSetMinIter HYPRE_MULTIPRECISION_FUNC ( hypre_FlexGMRESSetMinIter )
#define hypre_FlexGMRESSetModifyPC HYPRE_MULTIPRECISION_FUNC ( hypre_FlexGMRESSetModifyPC )
#define hypre_FlexGMRESSetPrecond HYPRE_MULTIPRECISION_FUNC ( hypre_FlexGMRESSetPrecond )
#define hypre_FlexGMRESSetPrintLevel HYPRE_MULTIPRECISION_FUNC ( hypre_FlexGMRESSetPrintLevel )
#define hypre_FlexGMRESSetStopCrit HYPRE_MULTIPRECISION_FUNC ( hypre_FlexGMRESSetStopCrit )
#define hypre_FlexGMRESSetTol HYPRE_MULTIPRECISION_FUNC ( hypre_FlexGMRESSetTol )
#define hypre_FlexGMRESSetup HYPRE_MULTIPRECISION_FUNC ( hypre_FlexGMRESSetup )
#define hypre_FlexGMRESSolve HYPRE_MULTIPRECISION_FUNC ( hypre_FlexGMRESSolve )
#define HYPRE_BiCGSTABDestroy HYPRE_MULTIPRECISION_FUNC ( HYPRE_BiCGSTABDestroy )
#define HYPRE_BiCGSTABGetFinalRelativeResidualNorm HYPRE_MULTIPRECISION_FUNC ( HYPRE_BiCGSTABGetFinalRelativeResidualNorm )
#define HYPRE_BiCGSTABGetNumIterations HYPRE_MULTIPRECISION_FUNC ( HYPRE_BiCGSTABGetNumIterations )
#define HYPRE_BiCGSTABGetPrecond HYPRE_MULTIPRECISION_FUNC ( HYPRE_BiCGSTABGetPrecond )
#define HYPRE_BiCGSTABGetPrecondMatrix HYPRE_MULTIPRECISION_FUNC ( HYPRE_BiCGSTABGetPrecondMatrix )
#define HYPRE_BiCGSTABGetResidual HYPRE_MULTIPRECISION_FUNC ( HYPRE_BiCGSTABGetResidual )
#define HYPRE_BiCGSTABSetAbsoluteTol HYPRE_MULTIPRECISION_FUNC ( HYPRE_BiCGSTABSetAbsoluteTol )
#define HYPRE_BiCGSTABSetConvergenceFactorTol HYPRE_MULTIPRECISION_FUNC ( HYPRE_BiCGSTABSetConvergenceFactorTol )
#define HYPRE_BiCGSTABSetLogging HYPRE_MULTIPRECISION_FUNC ( HYPRE_BiCGSTABSetLogging )
#define HYPRE_BiCGSTABSetMaxIter HYPRE_MULTIPRECISION_FUNC ( HYPRE_BiCGSTABSetMaxIter )
#define HYPRE_BiCGSTABSetMinIter HYPRE_MULTIPRECISION_FUNC ( HYPRE_BiCGSTABSetMinIter )
#define HYPRE_BiCGSTABSetPrecond HYPRE_MULTIPRECISION_FUNC ( HYPRE_BiCGSTABSetPrecond )
#define HYPRE_BiCGSTABSetPrecondMatrix HYPRE_MULTIPRECISION_FUNC ( HYPRE_BiCGSTABSetPrecondMatrix )
#define HYPRE_BiCGSTABSetPrintLevel HYPRE_MULTIPRECISION_FUNC ( HYPRE_BiCGSTABSetPrintLevel )
#define HYPRE_BiCGSTABSetStopCrit HYPRE_MULTIPRECISION_FUNC ( HYPRE_BiCGSTABSetStopCrit )
#define HYPRE_BiCGSTABSetTol HYPRE_MULTIPRECISION_FUNC ( HYPRE_BiCGSTABSetTol )
#define HYPRE_BiCGSTABSetup HYPRE_MULTIPRECISION_FUNC ( HYPRE_BiCGSTABSetup )
#define HYPRE_BiCGSTABSolve HYPRE_MULTIPRECISION_FUNC ( HYPRE_BiCGSTABSolve )
#define HYPRE_CGNRDestroy HYPRE_MULTIPRECISION_FUNC ( HYPRE_CGNRDestroy )
#define HYPRE_CGNRGetFinalRelativeResidualNorm HYPRE_MULTIPRECISION_FUNC ( HYPRE_CGNRGetFinalRelativeResidualNorm )
#define HYPRE_CGNRGetNumIterations HYPRE_MULTIPRECISION_FUNC ( HYPRE_CGNRGetNumIterations )
#define HYPRE_CGNRGetPrecond HYPRE_MULTIPRECISION_FUNC ( HYPRE_CGNRGetPrecond )
#define HYPRE_CGNRSetLogging HYPRE_MULTIPRECISION_FUNC ( HYPRE_CGNRSetLogging )
#define HYPRE_CGNRSetMaxIter HYPRE_MULTIPRECISION_FUNC ( HYPRE_CGNRSetMaxIter )
#define HYPRE_CGNRSetMinIter HYPRE_MULTIPRECISION_FUNC ( HYPRE_CGNRSetMinIter )
#define HYPRE_CGNRSetPrecond HYPRE_MULTIPRECISION_FUNC ( HYPRE_CGNRSetPrecond )
#define HYPRE_CGNRSetStopCrit HYPRE_MULTIPRECISION_FUNC ( HYPRE_CGNRSetStopCrit )
#define HYPRE_CGNRSetTol HYPRE_MULTIPRECISION_FUNC ( HYPRE_CGNRSetTol )
#define HYPRE_CGNRSetup HYPRE_MULTIPRECISION_FUNC ( HYPRE_CGNRSetup )
#define HYPRE_CGNRSolve HYPRE_MULTIPRECISION_FUNC ( HYPRE_CGNRSolve )
#define HYPRE_COGMRESGetAbsoluteTol HYPRE_MULTIPRECISION_FUNC ( HYPRE_COGMRESGetAbsoluteTol )
#define HYPRE_COGMRESGetCGS HYPRE_MULTIPRECISION_FUNC ( HYPRE_COGMRESGetCGS )
#define HYPRE_COGMRESGetConverged HYPRE_MULTIPRECISION_FUNC ( HYPRE_COGMRESGetConverged )
#define HYPRE_COGMRESGetConvergenceFactorTol HYPRE_MULTIPRECISION_FUNC ( HYPRE_COGMRESGetConvergenceFactorTol )
#define HYPRE_COGMRESGetFinalRelativeResidualNorm HYPRE_MULTIPRECISION_FUNC ( HYPRE_COGMRESGetFinalRelativeResidualNorm )
#define HYPRE_COGMRESGetKDim HYPRE_MULTIPRECISION_FUNC ( HYPRE_COGMRESGetKDim )
#define HYPRE_COGMRESGetLogging HYPRE_MULTIPRECISION_FUNC ( HYPRE_COGMRESGetLogging )
#define HYPRE_COGMRESGetMaxIter HYPRE_MULTIPRECISION_FUNC ( HYPRE_COGMRESGetMaxIter )
#define HYPRE_COGMRESGetMinIter HYPRE_MULTIPRECISION_FUNC ( HYPRE_COGMRESGetMinIter )
#define HYPRE_COGMRESGetNumIterations HYPRE_MULTIPRECISION_FUNC ( HYPRE_COGMRESGetNumIterations )
#define HYPRE_COGMRESGetPrecond HYPRE_MULTIPRECISION_FUNC ( HYPRE_COGMRESGetPrecond )
#define HYPRE_COGMRESGetPrintLevel HYPRE_MULTIPRECISION_FUNC ( HYPRE_COGMRESGetPrintLevel )
#define HYPRE_COGMRESGetResidual HYPRE_MULTIPRECISION_FUNC ( HYPRE_COGMRESGetResidual )
#define HYPRE_COGMRESGetTol HYPRE_MULTIPRECISION_FUNC ( HYPRE_COGMRESGetTol )
#define HYPRE_COGMRESGetUnroll HYPRE_MULTIPRECISION_FUNC ( HYPRE_COGMRESGetUnroll )
#define HYPRE_COGMRESSetAbsoluteTol HYPRE_MULTIPRECISION_FUNC ( HYPRE_COGMRESSetAbsoluteTol )
#define HYPRE_COGMRESSetCGS HYPRE_MULTIPRECISION_FUNC ( HYPRE_COGMRESSetCGS )
#define HYPRE_COGMRESSetConvergenceFactorTol HYPRE_MULTIPRECISION_FUNC ( HYPRE_COGMRESSetConvergenceFactorTol )
#define HYPRE_COGMRESSetKDim HYPRE_MULTIPRECISION_FUNC ( HYPRE_COGMRESSetKDim )
#define HYPRE_COGMRESSetLogging HYPRE_MULTIPRECISION_FUNC ( HYPRE_COGMRESSetLogging )
#define HYPRE_COGMRESSetMaxIter HYPRE_MULTIPRECISION_FUNC ( HYPRE_COGMRESSetMaxIter )
#define HYPRE_COGMRESSetMinIter HYPRE_MULTIPRECISION_FUNC ( HYPRE_COGMRESSetMinIter )
#define HYPRE_COGMRESSetModifyPC HYPRE_MULTIPRECISION_FUNC ( HYPRE_COGMRESSetModifyPC )
#define HYPRE_COGMRESSetPrecond HYPRE_MULTIPRECISION_FUNC ( HYPRE_COGMRESSetPrecond )
#define HYPRE_COGMRESSetPrintLevel HYPRE_MULTIPRECISION_FUNC ( HYPRE_COGMRESSetPrintLevel )
#define HYPRE_COGMRESSetTol HYPRE_MULTIPRECISION_FUNC ( HYPRE_COGMRESSetTol )
#define HYPRE_COGMRESSetUnroll HYPRE_MULTIPRECISION_FUNC ( HYPRE_COGMRESSetUnroll )
#define HYPRE_COGMRESSetup HYPRE_MULTIPRECISION_FUNC ( HYPRE_COGMRESSetup )
#define HYPRE_COGMRESSolve HYPRE_MULTIPRECISION_FUNC ( HYPRE_COGMRESSolve )
#define HYPRE_FlexGMRESGetAbsoluteTol HYPRE_MULTIPRECISION_FUNC ( HYPRE_FlexGMRESGetAbsoluteTol )
#define HYPRE_FlexGMRESGetConverged HYPRE_MULTIPRECISION_FUNC ( HYPRE_FlexGMRESGetConverged )
#define HYPRE_FlexGMRESGetConvergenceFactorTol HYPRE_MULTIPRECISION_FUNC ( HYPRE_FlexGMRESGetConvergenceFactorTol )
#define HYPRE_FlexGMRESGetFinalRelativeResidualNorm HYPRE_MULTIPRECISION_FUNC ( HYPRE_FlexGMRESGetFinalRelativeResidualNorm )
#define HYPRE_FlexGMRESGetKDim HYPRE_MULTIPRECISION_FUNC ( HYPRE_FlexGMRESGetKDim )
#define HYPRE_FlexGMRESGetLogging HYPRE_MULTIPRECISION_FUNC ( HYPRE_FlexGMRESGetLogging )
#define HYPRE_FlexGMRESGetMaxIter HYPRE_MULTIPRECISION_FUNC ( HYPRE_FlexGMRESGetMaxIter )
#define HYPRE_FlexGMRESGetMinIter HYPRE_MULTIPRECISION_FUNC ( HYPRE_FlexGMRESGetMinIter )
#define HYPRE_FlexGMRESGetNumIterations HYPRE_MULTIPRECISION_FUNC ( HYPRE_FlexGMRESGetNumIterations )
#define HYPRE_FlexGMRESGetPrecond HYPRE_MULTIPRECISION_FUNC ( HYPRE_FlexGMRESGetPrecond )
#define HYPRE_FlexGMRESGetPrintLevel HYPRE_MULTIPRECISION_FUNC ( HYPRE_FlexGMRESGetPrintLevel )
#define HYPRE_FlexGMRESGetResidual HYPRE_MULTIPRECISION_FUNC ( HYPRE_FlexGMRESGetResidual )
#define HYPRE_FlexGMRESGetTol HYPRE_MULTIPRECISION_FUNC ( HYPRE_FlexGMRESGetTol )
#define HYPRE_FlexGMRESSetAbsoluteTol HYPRE_MULTIPRECISION_FUNC ( HYPRE_FlexGMRESSetAbsoluteTol )
#define HYPRE_FlexGMRESSetConvergenceFactorTol HYPRE_MULTIPRECISION_FUNC ( HYPRE_FlexGMRESSetConvergenceFactorTol )
#define HYPRE_FlexGMRESSetKDim HYPRE_MULTIPRECISION_FUNC ( HYPRE_FlexGMRESSetKDim )
#define HYPRE_FlexGMRESSetLogging HYPRE_MULTIPRECISION_FUNC ( HYPRE_FlexGMRESSetLogging )
#define HYPRE_FlexGMRESSetMaxIter HYPRE_MULTIPRECISION_FUNC ( HYPRE_FlexGMRESSetMaxIter )
#define HYPRE_FlexGMRESSetMinIter HYPRE_MULTIPRECISION_FUNC ( HYPRE_FlexGMRESSetMinIter )
#define HYPRE_FlexGMRESSetModifyPC HYPRE_MULTIPRECISION_FUNC ( HYPRE_FlexGMRESSetModifyPC )
#define HYPRE_FlexGMRESSetPrecond HYPRE_MULTIPRECISION_FUNC ( HYPRE_FlexGMRESSetPrecond )
#define HYPRE_FlexGMRESSetPrintLevel HYPRE_MULTIPRECISION_FUNC ( HYPRE_FlexGMRESSetPrintLevel )
#define HYPRE_FlexGMRESSetTol HYPRE_MULTIPRECISION_FUNC ( HYPRE_FlexGMRESSetTol )
#define HYPRE_FlexGMRESSetup HYPRE_MULTIPRECISION_FUNC ( HYPRE_FlexGMRESSetup )
#define HYPRE_FlexGMRESSolve HYPRE_MULTIPRECISION_FUNC ( HYPRE_FlexGMRESSolve )
#define HYPRE_GMRESGetAbsoluteTol HYPRE_MULTIPRECISION_FUNC ( HYPRE_GMRESGetAbsoluteTol )
#define HYPRE_GMRESGetConverged HYPRE_MULTIPRECISION_FUNC ( HYPRE_GMRESGetConverged )
#define HYPRE_GMRESGetConvergenceFactorTol HYPRE_MULTIPRECISION_FUNC ( HYPRE_GMRESGetConvergenceFactorTol )
#define HYPRE_GMRESGetFinalRelativeResidualNorm HYPRE_MULTIPRECISION_FUNC ( HYPRE_GMRESGetFinalRelativeResidualNorm )
#define HYPRE_GMRESGetKDim HYPRE_MULTIPRECISION_FUNC ( HYPRE_GMRESGetKDim )
#define HYPRE_GMRESGetLogging HYPRE_MULTIPRECISION_FUNC ( HYPRE_GMRESGetLogging )
#define HYPRE_GMRESGetMaxIter HYPRE_MULTIPRECISION_FUNC ( HYPRE_GMRESGetMaxIter )
#define HYPRE_GMRESGetMinIter HYPRE_MULTIPRECISION_FUNC ( HYPRE_GMRESGetMinIter )
#define HYPRE_GMRESGetNumIterations HYPRE_MULTIPRECISION_FUNC ( HYPRE_GMRESGetNumIterations )
#define HYPRE_GMRESGetPrecond HYPRE_MULTIPRECISION_FUNC ( HYPRE_GMRESGetPrecond )
#define HYPRE_GMRESGetPrintLevel HYPRE_MULTIPRECISION_FUNC ( HYPRE_GMRESGetPrintLevel )
#define HYPRE_GMRESGetRelChange HYPRE_MULTIPRECISION_FUNC ( HYPRE_GMRESGetRelChange )
#define HYPRE_GMRESGetResidual HYPRE_MULTIPRECISION_FUNC ( HYPRE_GMRESGetResidual )
#define HYPRE_GMRESGetSkipRealResidualCheck HYPRE_MULTIPRECISION_FUNC ( HYPRE_GMRESGetSkipRealResidualCheck )
#define HYPRE_GMRESGetStopCrit HYPRE_MULTIPRECISION_FUNC ( HYPRE_GMRESGetStopCrit )
#define HYPRE_GMRESGetTol HYPRE_MULTIPRECISION_FUNC ( HYPRE_GMRESGetTol )
#define HYPRE_GMRESSetAbsoluteTol HYPRE_MULTIPRECISION_FUNC ( HYPRE_GMRESSetAbsoluteTol )
#define HYPRE_GMRESSetConvergenceFactorTol HYPRE_MULTIPRECISION_FUNC ( HYPRE_GMRESSetConvergenceFactorTol )
#define HYPRE_GMRESSetKDim HYPRE_MULTIPRECISION_FUNC ( HYPRE_GMRESSetKDim )
#define HYPRE_GMRESSetLogging HYPRE_MULTIPRECISION_FUNC ( HYPRE_GMRESSetLogging )
#define HYPRE_GMRESSetMaxIter HYPRE_MULTIPRECISION_FUNC ( HYPRE_GMRESSetMaxIter )
#define HYPRE_GMRESSetMinIter HYPRE_MULTIPRECISION_FUNC ( HYPRE_GMRESSetMinIter )
#define HYPRE_GMRESSetPrecond HYPRE_MULTIPRECISION_FUNC ( HYPRE_GMRESSetPrecond )
#define HYPRE_GMRESSetPrecondMatrix HYPRE_MULTIPRECISION_FUNC ( HYPRE_GMRESSetPrecondMatrix )
#define HYPRE_GMRESGetPrecondMatrix HYPRE_MULTIPRECISION_FUNC ( HYPRE_GMRESGetPrecondMatrix )
#define HYPRE_GMRESSetPrintLevel HYPRE_MULTIPRECISION_FUNC ( HYPRE_GMRESSetPrintLevel )
#define HYPRE_GMRESSetRelChange HYPRE_MULTIPRECISION_FUNC ( HYPRE_GMRESSetRelChange )
#define HYPRE_GMRESSetSkipRealResidualCheck HYPRE_MULTIPRECISION_FUNC ( HYPRE_GMRESSetSkipRealResidualCheck )
#define HYPRE_GMRESSetStopCrit HYPRE_MULTIPRECISION_FUNC ( HYPRE_GMRESSetStopCrit )
#define HYPRE_GMRESSetTol HYPRE_MULTIPRECISION_FUNC ( HYPRE_GMRESSetTol )
#define HYPRE_GMRESSetup HYPRE_MULTIPRECISION_FUNC ( HYPRE_GMRESSetup )
#define HYPRE_GMRESSolve HYPRE_MULTIPRECISION_FUNC ( HYPRE_GMRESSolve )
#define HYPRE_LGMRESGetAbsoluteTol HYPRE_MULTIPRECISION_FUNC ( HYPRE_LGMRESGetAbsoluteTol )
#define HYPRE_LGMRESGetAugDim HYPRE_MULTIPRECISION_FUNC ( HYPRE_LGMRESGetAugDim )
#define HYPRE_LGMRESGetConverged HYPRE_MULTIPRECISION_FUNC ( HYPRE_LGMRESGetConverged )
#define HYPRE_LGMRESGetConvergenceFactorTol HYPRE_MULTIPRECISION_FUNC ( HYPRE_LGMRESGetConvergenceFactorTol )
#define HYPRE_LGMRESGetFinalRelativeResidualNorm HYPRE_MULTIPRECISION_FUNC ( HYPRE_LGMRESGetFinalRelativeResidualNorm )
#define HYPRE_LGMRESGetKDim HYPRE_MULTIPRECISION_FUNC ( HYPRE_LGMRESGetKDim )
#define HYPRE_LGMRESGetLogging HYPRE_MULTIPRECISION_FUNC ( HYPRE_LGMRESGetLogging )
#define HYPRE_LGMRESGetMaxIter HYPRE_MULTIPRECISION_FUNC ( HYPRE_LGMRESGetMaxIter )
#define HYPRE_LGMRESGetMinIter HYPRE_MULTIPRECISION_FUNC ( HYPRE_LGMRESGetMinIter )
#define HYPRE_LGMRESGetNumIterations HYPRE_MULTIPRECISION_FUNC ( HYPRE_LGMRESGetNumIterations )
#define HYPRE_LGMRESGetPrecond HYPRE_MULTIPRECISION_FUNC ( HYPRE_LGMRESGetPrecond )
#define HYPRE_LGMRESGetPrintLevel HYPRE_MULTIPRECISION_FUNC ( HYPRE_LGMRESGetPrintLevel )
#define HYPRE_LGMRESGetResidual HYPRE_MULTIPRECISION_FUNC ( HYPRE_LGMRESGetResidual )
#define HYPRE_LGMRESGetTol HYPRE_MULTIPRECISION_FUNC ( HYPRE_LGMRESGetTol )
#define HYPRE_LGMRESSetAbsoluteTol HYPRE_MULTIPRECISION_FUNC ( HYPRE_LGMRESSetAbsoluteTol )
#define HYPRE_LGMRESSetAugDim HYPRE_MULTIPRECISION_FUNC ( HYPRE_LGMRESSetAugDim )
#define HYPRE_LGMRESSetConvergenceFactorTol HYPRE_MULTIPRECISION_FUNC ( HYPRE_LGMRESSetConvergenceFactorTol )
#define HYPRE_LGMRESSetKDim HYPRE_MULTIPRECISION_FUNC ( HYPRE_LGMRESSetKDim )
#define HYPRE_LGMRESSetLogging HYPRE_MULTIPRECISION_FUNC ( HYPRE_LGMRESSetLogging )
#define HYPRE_LGMRESSetMaxIter HYPRE_MULTIPRECISION_FUNC ( HYPRE_LGMRESSetMaxIter )
#define HYPRE_LGMRESSetMinIter HYPRE_MULTIPRECISION_FUNC ( HYPRE_LGMRESSetMinIter )
#define HYPRE_LGMRESSetPrecond HYPRE_MULTIPRECISION_FUNC ( HYPRE_LGMRESSetPrecond )
#define HYPRE_LGMRESSetPrintLevel HYPRE_MULTIPRECISION_FUNC ( HYPRE_LGMRESSetPrintLevel )
#define HYPRE_LGMRESSetTol HYPRE_MULTIPRECISION_FUNC ( HYPRE_LGMRESSetTol )
#define HYPRE_LGMRESSetup HYPRE_MULTIPRECISION_FUNC ( HYPRE_LGMRESSetup )
#define HYPRE_LGMRESSolve HYPRE_MULTIPRECISION_FUNC ( HYPRE_LGMRESSolve )
#define HYPRE_LOBPCGCreate HYPRE_MULTIPRECISION_FUNC ( HYPRE_LOBPCGCreate )
#define HYPRE_LOBPCGDestroy HYPRE_MULTIPRECISION_FUNC ( HYPRE_LOBPCGDestroy )
#define HYPRE_LOBPCGEigenvaluesHistory HYPRE_MULTIPRECISION_FUNC ( HYPRE_LOBPCGEigenvaluesHistory )
#define HYPRE_LOBPCGGetPrecond HYPRE_MULTIPRECISION_FUNC ( HYPRE_LOBPCGGetPrecond )
#define HYPRE_LOBPCGIterations HYPRE_MULTIPRECISION_FUNC ( HYPRE_LOBPCGIterations )
#define HYPRE_LOBPCGResidualNorms HYPRE_MULTIPRECISION_FUNC ( HYPRE_LOBPCGResidualNorms )
#define HYPRE_LOBPCGResidualNormsHistory HYPRE_MULTIPRECISION_FUNC ( HYPRE_LOBPCGResidualNormsHistory )
#define HYPRE_LOBPCGSetMaxIter HYPRE_MULTIPRECISION_FUNC ( HYPRE_LOBPCGSetMaxIter )
#define HYPRE_LOBPCGSetPrecond HYPRE_MULTIPRECISION_FUNC ( HYPRE_LOBPCGSetPrecond )
#define HYPRE_LOBPCGSetPrecondUsageMode HYPRE_MULTIPRECISION_FUNC ( HYPRE_LOBPCGSetPrecondUsageMode )
#define HYPRE_LOBPCGSetPrintLevel HYPRE_MULTIPRECISION_FUNC ( HYPRE_LOBPCGSetPrintLevel )
#define HYPRE_LOBPCGSetRTol HYPRE_MULTIPRECISION_FUNC ( HYPRE_LOBPCGSetRTol )
#define HYPRE_LOBPCGSetTol HYPRE_MULTIPRECISION_FUNC ( HYPRE_LOBPCGSetTol )
#define HYPRE_LOBPCGSetup HYPRE_MULTIPRECISION_FUNC ( HYPRE_LOBPCGSetup )
#define HYPRE_LOBPCGSetupB HYPRE_MULTIPRECISION_FUNC ( HYPRE_LOBPCGSetupB )
#define HYPRE_LOBPCGSetupT HYPRE_MULTIPRECISION_FUNC ( HYPRE_LOBPCGSetupT )
#define HYPRE_LOBPCGSolve HYPRE_MULTIPRECISION_FUNC ( HYPRE_LOBPCGSolve )
#define HYPRE_PCGGetAbsoluteTol HYPRE_MULTIPRECISION_FUNC ( HYPRE_PCGGetAbsoluteTol )
#define HYPRE_PCGGetAbsoluteTolFactor HYPRE_MULTIPRECISION_FUNC ( HYPRE_PCGGetAbsoluteTolFactor )
#define HYPRE_PCGGetConverged HYPRE_MULTIPRECISION_FUNC ( HYPRE_PCGGetConverged )
#define HYPRE_PCGGetConvergenceFactorTol HYPRE_MULTIPRECISION_FUNC ( HYPRE_PCGGetConvergenceFactorTol )
#define HYPRE_PCGGetFinalRelativeResidualNorm HYPRE_MULTIPRECISION_FUNC ( HYPRE_PCGGetFinalRelativeResidualNorm )
#define HYPRE_PCGGetLogging HYPRE_MULTIPRECISION_FUNC ( HYPRE_PCGGetLogging )
#define HYPRE_PCGGetMaxIter HYPRE_MULTIPRECISION_FUNC ( HYPRE_PCGGetMaxIter )
#define HYPRE_PCGGetNumIterations HYPRE_MULTIPRECISION_FUNC ( HYPRE_PCGGetNumIterations )
#define HYPRE_PCGGetPrecond HYPRE_MULTIPRECISION_FUNC ( HYPRE_PCGGetPrecond )
#define HYPRE_PCGGetPrecondMatrix HYPRE_MULTIPRECISION_FUNC ( HYPRE_PCGGetPrecondMatrix )
#define HYPRE_PCGGetPrintLevel HYPRE_MULTIPRECISION_FUNC ( HYPRE_PCGGetPrintLevel )
#define HYPRE_PCGGetRecomputeResidual HYPRE_MULTIPRECISION_FUNC ( HYPRE_PCGGetRecomputeResidual )
#define HYPRE_PCGGetRecomputeResidualP HYPRE_MULTIPRECISION_FUNC ( HYPRE_PCGGetRecomputeResidualP )
#define HYPRE_PCGGetRelChange HYPRE_MULTIPRECISION_FUNC ( HYPRE_PCGGetRelChange )
#define HYPRE_PCGGetResidual HYPRE_MULTIPRECISION_FUNC ( HYPRE_PCGGetResidual )
#define HYPRE_PCGGetResidualTol HYPRE_MULTIPRECISION_FUNC ( HYPRE_PCGGetResidualTol )
#define HYPRE_PCGGetStopCrit HYPRE_MULTIPRECISION_FUNC ( HYPRE_PCGGetStopCrit )
#define HYPRE_PCGGetTol HYPRE_MULTIPRECISION_FUNC ( HYPRE_PCGGetTol )
#define HYPRE_PCGGetTwoNorm HYPRE_MULTIPRECISION_FUNC ( HYPRE_PCGGetTwoNorm )
#define HYPRE_PCGSetAbsoluteTol HYPRE_MULTIPRECISION_FUNC ( HYPRE_PCGSetAbsoluteTol )
#define HYPRE_PCGSetAbsoluteTolFactor HYPRE_MULTIPRECISION_FUNC ( HYPRE_PCGSetAbsoluteTolFactor )
#define HYPRE_PCGSetConvergenceFactorTol HYPRE_MULTIPRECISION_FUNC ( HYPRE_PCGSetConvergenceFactorTol )
#define HYPRE_PCGSetLogging HYPRE_MULTIPRECISION_FUNC ( HYPRE_PCGSetLogging )
#define HYPRE_PCGSetMaxIter HYPRE_MULTIPRECISION_FUNC ( HYPRE_PCGSetMaxIter )
#define HYPRE_PCGSetPrecond HYPRE_MULTIPRECISION_FUNC ( HYPRE_PCGSetPrecond )
#define HYPRE_PCGSetPrecondMatrix HYPRE_MULTIPRECISION_FUNC ( HYPRE_PCGSetPrecondMatrix )
#define HYPRE_PCGSetPrintLevel HYPRE_MULTIPRECISION_FUNC ( HYPRE_PCGSetPrintLevel )
#define HYPRE_PCGSetRecomputeResidual HYPRE_MULTIPRECISION_FUNC ( HYPRE_PCGSetRecomputeResidual )
#define HYPRE_PCGSetRecomputeResidualP HYPRE_MULTIPRECISION_FUNC ( HYPRE_PCGSetRecomputeResidualP )
#define HYPRE_PCGSetRelChange HYPRE_MULTIPRECISION_FUNC ( HYPRE_PCGSetRelChange )
#define HYPRE_PCGSetResidualTol HYPRE_MULTIPRECISION_FUNC ( HYPRE_PCGSetResidualTol )
#define HYPRE_PCGSetStopCrit HYPRE_MULTIPRECISION_FUNC ( HYPRE_PCGSetStopCrit )
#define HYPRE_PCGSetTol HYPRE_MULTIPRECISION_FUNC ( HYPRE_PCGSetTol )
#define HYPRE_PCGSetTwoNorm HYPRE_MULTIPRECISION_FUNC ( HYPRE_PCGSetTwoNorm )
#define HYPRE_PCGSetup HYPRE_MULTIPRECISION_FUNC ( HYPRE_PCGSetup )
#define HYPRE_PCGSolve HYPRE_MULTIPRECISION_FUNC ( HYPRE_PCGSolve )
#define hypre_LGMRESCreate HYPRE_MULTIPRECISION_FUNC ( hypre_LGMRESCreate )
#define hypre_LGMRESDestroy HYPRE_MULTIPRECISION_FUNC ( hypre_LGMRESDestroy )
#define hypre_LGMRESFunctionsCreate HYPRE_MULTIPRECISION_FUNC ( hypre_LGMRESFunctionsCreate )
#define hypre_LGMRESGetAbsoluteTol HYPRE_MULTIPRECISION_FUNC ( hypre_LGMRESGetAbsoluteTol )
#define hypre_LGMRESGetAugDim HYPRE_MULTIPRECISION_FUNC ( hypre_LGMRESGetAugDim )
#define hypre_LGMRESGetConverged HYPRE_MULTIPRECISION_FUNC ( hypre_LGMRESGetConverged )
#define hypre_LGMRESGetConvergenceFactorTol HYPRE_MULTIPRECISION_FUNC ( hypre_LGMRESGetConvergenceFactorTol )
#define hypre_LGMRESGetFinalRelativeResidualNorm HYPRE_MULTIPRECISION_FUNC ( hypre_LGMRESGetFinalRelativeResidualNorm )
#define hypre_LGMRESGetKDim HYPRE_MULTIPRECISION_FUNC ( hypre_LGMRESGetKDim )
#define hypre_LGMRESGetLogging HYPRE_MULTIPRECISION_FUNC ( hypre_LGMRESGetLogging )
#define hypre_LGMRESGetMaxIter HYPRE_MULTIPRECISION_FUNC ( hypre_LGMRESGetMaxIter )
#define hypre_LGMRESGetMinIter HYPRE_MULTIPRECISION_FUNC ( hypre_LGMRESGetMinIter )
#define hypre_LGMRESGetNumIterations HYPRE_MULTIPRECISION_FUNC ( hypre_LGMRESGetNumIterations )
#define hypre_LGMRESGetPrecond HYPRE_MULTIPRECISION_FUNC ( hypre_LGMRESGetPrecond )
#define hypre_LGMRESGetPrintLevel HYPRE_MULTIPRECISION_FUNC ( hypre_LGMRESGetPrintLevel )
#define hypre_LGMRESGetResidual HYPRE_MULTIPRECISION_FUNC ( hypre_LGMRESGetResidual )
#define hypre_LGMRESGetStopCrit HYPRE_MULTIPRECISION_FUNC ( hypre_LGMRESGetStopCrit )
#define hypre_LGMRESGetTol HYPRE_MULTIPRECISION_FUNC ( hypre_LGMRESGetTol )
#define hypre_LGMRESSetAbsoluteTol HYPRE_MULTIPRECISION_FUNC ( hypre_LGMRESSetAbsoluteTol )
#define hypre_LGMRESSetAugDim HYPRE_MULTIPRECISION_FUNC ( hypre_LGMRESSetAugDim )
#define hypre_LGMRESSetConvergenceFactorTol HYPRE_MULTIPRECISION_FUNC ( hypre_LGMRESSetConvergenceFactorTol )
#define hypre_LGMRESSetKDim HYPRE_MULTIPRECISION_FUNC ( hypre_LGMRESSetKDim )
#define hypre_LGMRESSetLogging HYPRE_MULTIPRECISION_FUNC ( hypre_LGMRESSetLogging )
#define hypre_LGMRESSetMaxIter HYPRE_MULTIPRECISION_FUNC ( hypre_LGMRESSetMaxIter )
#define hypre_LGMRESSetMinIter HYPRE_MULTIPRECISION_FUNC ( hypre_LGMRESSetMinIter )
#define hypre_LGMRESSetPrecond HYPRE_MULTIPRECISION_FUNC ( hypre_LGMRESSetPrecond )
#define hypre_LGMRESSetPrintLevel HYPRE_MULTIPRECISION_FUNC ( hypre_LGMRESSetPrintLevel )
#define hypre_LGMRESSetStopCrit HYPRE_MULTIPRECISION_FUNC ( hypre_LGMRESSetStopCrit )
#define hypre_LGMRESSetTol HYPRE_MULTIPRECISION_FUNC ( hypre_LGMRESSetTol )
#define hypre_LGMRESSetup HYPRE_MULTIPRECISION_FUNC ( hypre_LGMRESSetup )
#define hypre_LGMRESSolve HYPRE_MULTIPRECISION_FUNC ( hypre_LGMRESSolve )
#define hypre_LOBPCGDestroy HYPRE_MULTIPRECISION_FUNC ( hypre_LOBPCGDestroy )
#define hypre_LOBPCGEigenvaluesHistory HYPRE_MULTIPRECISION_FUNC ( hypre_LOBPCGEigenvaluesHistory )
#define hypre_LOBPCGGetPrecond HYPRE_MULTIPRECISION_FUNC ( hypre_LOBPCGGetPrecond )
#define hypre_LOBPCGIterations HYPRE_MULTIPRECISION_FUNC ( hypre_LOBPCGIterations )
#define hypre_LOBPCGMultiOperatorA HYPRE_MULTIPRECISION_FUNC ( hypre_LOBPCGMultiOperatorA )
#define hypre_LOBPCGMultiOperatorB HYPRE_MULTIPRECISION_FUNC ( hypre_LOBPCGMultiOperatorB )
#define hypre_LOBPCGMultiPreconditioner HYPRE_MULTIPRECISION_FUNC ( hypre_LOBPCGMultiPreconditioner )
#define hypre_LOBPCGOperatorA HYPRE_MULTIPRECISION_FUNC ( hypre_LOBPCGOperatorA )
#define hypre_LOBPCGOperatorB HYPRE_MULTIPRECISION_FUNC ( hypre_LOBPCGOperatorB )
#define hypre_LOBPCGPreconditioner HYPRE_MULTIPRECISION_FUNC ( hypre_LOBPCGPreconditioner )
#define hypre_LOBPCGResidualNorms HYPRE_MULTIPRECISION_FUNC ( hypre_LOBPCGResidualNorms )
#define hypre_LOBPCGResidualNormsHistory HYPRE_MULTIPRECISION_FUNC ( hypre_LOBPCGResidualNormsHistory )
#define hypre_LOBPCGSetMaxIter HYPRE_MULTIPRECISION_FUNC ( hypre_LOBPCGSetMaxIter )
#define hypre_LOBPCGSetPrecond HYPRE_MULTIPRECISION_FUNC ( hypre_LOBPCGSetPrecond )
#define hypre_LOBPCGSetPrecondUsageMode HYPRE_MULTIPRECISION_FUNC ( hypre_LOBPCGSetPrecondUsageMode )
#define hypre_LOBPCGSetPrintLevel HYPRE_MULTIPRECISION_FUNC ( hypre_LOBPCGSetPrintLevel )
#define hypre_LOBPCGSetRTol HYPRE_MULTIPRECISION_FUNC ( hypre_LOBPCGSetRTol )
#define hypre_LOBPCGSetTol HYPRE_MULTIPRECISION_FUNC ( hypre_LOBPCGSetTol )
#define hypre_LOBPCGSetup HYPRE_MULTIPRECISION_FUNC ( hypre_LOBPCGSetup )
#define hypre_LOBPCGSetupB HYPRE_MULTIPRECISION_FUNC ( hypre_LOBPCGSetupB )
#define hypre_LOBPCGSetupT HYPRE_MULTIPRECISION_FUNC ( hypre_LOBPCGSetupT )
#define hypre_LOBPCGSolve HYPRE_MULTIPRECISION_FUNC ( hypre_LOBPCGSolve )
#define lobpcg_clean HYPRE_MULTIPRECISION_FUNC ( lobpcg_clean )
#define lobpcg_initialize HYPRE_MULTIPRECISION_FUNC ( lobpcg_initialize )
#define lobpcg_MultiVectorByMultiVector HYPRE_MULTIPRECISION_FUNC ( lobpcg_MultiVectorByMultiVector )
#define lobpcg_solve HYPRE_MULTIPRECISION_FUNC ( lobpcg_solve )
#define hypre_PCGCreate HYPRE_MULTIPRECISION_FUNC ( hypre_PCGCreate )
#define hypre_PCGDestroy HYPRE_MULTIPRECISION_FUNC ( hypre_PCGDestroy )
#define hypre_PCGFunctionsCreate HYPRE_MULTIPRECISION_FUNC ( hypre_PCGFunctionsCreate )
#define hypre_PCGGetAbsoluteTol HYPRE_MULTIPRECISION_FUNC ( hypre_PCGGetAbsoluteTol )
#define hypre_PCGGetAbsoluteTolFactor HYPRE_MULTIPRECISION_FUNC ( hypre_PCGGetAbsoluteTolFactor )
#define hypre_PCGGetConverged HYPRE_MULTIPRECISION_FUNC ( hypre_PCGGetConverged )
#define hypre_PCGGetConvergenceFactorTol HYPRE_MULTIPRECISION_FUNC ( hypre_PCGGetConvergenceFactorTol )
#define hypre_PCGGetFinalRelativeResidualNorm HYPRE_MULTIPRECISION_FUNC ( hypre_PCGGetFinalRelativeResidualNorm )
#define hypre_PCGGetLogging HYPRE_MULTIPRECISION_FUNC ( hypre_PCGGetLogging )
#define hypre_PCGGetMaxIter HYPRE_MULTIPRECISION_FUNC ( hypre_PCGGetMaxIter )
#define hypre_PCGGetNumIterations HYPRE_MULTIPRECISION_FUNC ( hypre_PCGGetNumIterations )
#define hypre_PCGGetPrecond HYPRE_MULTIPRECISION_FUNC ( hypre_PCGGetPrecond )
#define hypre_PCGGetPrecondMatrix HYPRE_MULTIPRECISION_FUNC ( hypre_PCGGetPrecondMatrix )
#define hypre_PCGGetPrintLevel HYPRE_MULTIPRECISION_FUNC ( hypre_PCGGetPrintLevel )
#define hypre_PCGGetRecomputeResidual HYPRE_MULTIPRECISION_FUNC ( hypre_PCGGetRecomputeResidual )
#define hypre_PCGGetRecomputeResidualP HYPRE_MULTIPRECISION_FUNC ( hypre_PCGGetRecomputeResidualP )
#define hypre_PCGGetRelChange HYPRE_MULTIPRECISION_FUNC ( hypre_PCGGetRelChange )
#define hypre_PCGGetResidual HYPRE_MULTIPRECISION_FUNC ( hypre_PCGGetResidual )
#define hypre_PCGGetResidualTol HYPRE_MULTIPRECISION_FUNC ( hypre_PCGGetResidualTol )
#define hypre_PCGGetStopCrit HYPRE_MULTIPRECISION_FUNC ( hypre_PCGGetStopCrit )
#define hypre_PCGGetTol HYPRE_MULTIPRECISION_FUNC ( hypre_PCGGetTol )
#define hypre_PCGGetTwoNorm HYPRE_MULTIPRECISION_FUNC ( hypre_PCGGetTwoNorm )
#define hypre_PCGPrintLogging HYPRE_MULTIPRECISION_FUNC ( hypre_PCGPrintLogging )
#define hypre_PCGSetAbsoluteTol HYPRE_MULTIPRECISION_FUNC ( hypre_PCGSetAbsoluteTol )
#define hypre_PCGSetAbsoluteTolFactor HYPRE_MULTIPRECISION_FUNC ( hypre_PCGSetAbsoluteTolFactor )
#define hypre_PCGSetConvergenceFactorTol HYPRE_MULTIPRECISION_FUNC ( hypre_PCGSetConvergenceFactorTol )
#define hypre_PCGSetHybrid HYPRE_MULTIPRECISION_FUNC ( hypre_PCGSetHybrid )
#define hypre_PCGSetLogging HYPRE_MULTIPRECISION_FUNC ( hypre_PCGSetLogging )
#define hypre_PCGSetMaxIter HYPRE_MULTIPRECISION_FUNC ( hypre_PCGSetMaxIter )
#define hypre_PCGSetPrecond HYPRE_MULTIPRECISION_FUNC ( hypre_PCGSetPrecond )
#define hypre_PCGSetPrecondMatrix HYPRE_MULTIPRECISION_FUNC ( hypre_PCGSetPrecondMatrix )
#define hypre_PCGSetPrintLevel HYPRE_MULTIPRECISION_FUNC ( hypre_PCGSetPrintLevel )
#define hypre_PCGSetRecomputeResidual HYPRE_MULTIPRECISION_FUNC ( hypre_PCGSetRecomputeResidual )
#define hypre_PCGSetRecomputeResidualP HYPRE_MULTIPRECISION_FUNC ( hypre_PCGSetRecomputeResidualP )
#define hypre_PCGSetRelChange HYPRE_MULTIPRECISION_FUNC ( hypre_PCGSetRelChange )
#define hypre_PCGSetResidualTol HYPRE_MULTIPRECISION_FUNC ( hypre_PCGSetResidualTol )
#define hypre_PCGSetStopCrit HYPRE_MULTIPRECISION_FUNC ( hypre_PCGSetStopCrit )
#define hypre_PCGSetTol HYPRE_MULTIPRECISION_FUNC ( hypre_PCGSetTol )
#define hypre_PCGSetTwoNorm HYPRE_MULTIPRECISION_FUNC ( hypre_PCGSetTwoNorm )
#define hypre_PCGSetup HYPRE_MULTIPRECISION_FUNC ( hypre_PCGSetup )
#define hypre_PCGSolve HYPRE_MULTIPRECISION_FUNC ( hypre_PCGSolve )
#define hypre_GMRESCreate HYPRE_MULTIPRECISION_FUNC ( hypre_GMRESCreate )
#define hypre_GMRESDestroy HYPRE_MULTIPRECISION_FUNC ( hypre_GMRESDestroy )
#define hypre_GMRESFunctionsCreate HYPRE_MULTIPRECISION_FUNC ( hypre_GMRESFunctionsCreate )
#define hypre_GMRESGetAbsoluteTol HYPRE_MULTIPRECISION_FUNC ( hypre_GMRESGetAbsoluteTol )
#define hypre_GMRESGetConverged HYPRE_MULTIPRECISION_FUNC ( hypre_GMRESGetConverged )
#define hypre_GMRESGetConvergenceFactorTol HYPRE_MULTIPRECISION_FUNC ( hypre_GMRESGetConvergenceFactorTol )
#define hypre_GMRESGetFinalRelativeResidualNorm HYPRE_MULTIPRECISION_FUNC ( hypre_GMRESGetFinalRelativeResidualNorm )
#define hypre_GMRESGetKDim HYPRE_MULTIPRECISION_FUNC ( hypre_GMRESGetKDim )
#define hypre_GMRESGetLogging HYPRE_MULTIPRECISION_FUNC ( hypre_GMRESGetLogging )
#define hypre_GMRESGetMaxIter HYPRE_MULTIPRECISION_FUNC ( hypre_GMRESGetMaxIter )
#define hypre_GMRESGetMinIter HYPRE_MULTIPRECISION_FUNC ( hypre_GMRESGetMinIter )
#define hypre_GMRESGetNumIterations HYPRE_MULTIPRECISION_FUNC ( hypre_GMRESGetNumIterations )
#define hypre_GMRESGetPrecond HYPRE_MULTIPRECISION_FUNC ( hypre_GMRESGetPrecond )
#define hypre_GMRESGetPrintLevel HYPRE_MULTIPRECISION_FUNC ( hypre_GMRESGetPrintLevel )
#define hypre_GMRESGetRelChange HYPRE_MULTIPRECISION_FUNC ( hypre_GMRESGetRelChange )
#define hypre_GMRESGetResidual HYPRE_MULTIPRECISION_FUNC ( hypre_GMRESGetResidual )
#define hypre_GMRESGetSkipRealResidualCheck HYPRE_MULTIPRECISION_FUNC ( hypre_GMRESGetSkipRealResidualCheck )
#define hypre_GMRESGetStopCrit HYPRE_MULTIPRECISION_FUNC ( hypre_GMRESGetStopCrit )
#define hypre_GMRESGetTol HYPRE_MULTIPRECISION_FUNC ( hypre_GMRESGetTol )
#define hypre_GMRESSetAbsoluteTol HYPRE_MULTIPRECISION_FUNC ( hypre_GMRESSetAbsoluteTol )
#define hypre_GMRESSetConvergenceFactorTol HYPRE_MULTIPRECISION_FUNC ( hypre_GMRESSetConvergenceFactorTol )
#define hypre_GMRESSetHybrid HYPRE_MULTIPRECISION_FUNC ( hypre_GMRESSetHybrid )
#define hypre_GMRESSetKDim HYPRE_MULTIPRECISION_FUNC ( hypre_GMRESSetKDim )
#define hypre_GMRESSetLogging HYPRE_MULTIPRECISION_FUNC ( hypre_GMRESSetLogging )
#define hypre_GMRESSetMaxIter HYPRE_MULTIPRECISION_FUNC ( hypre_GMRESSetMaxIter )
#define hypre_GMRESSetMinIter HYPRE_MULTIPRECISION_FUNC ( hypre_GMRESSetMinIter )
#define hypre_GMRESSetPrecond HYPRE_MULTIPRECISION_FUNC ( hypre_GMRESSetPrecond )
#define hypre_GMRESSetPrecondMatrix HYPRE_MULTIPRECISION_FUNC ( hypre_GMRESSetPrecondMatrix )
#define hypre_GMRESGetPrecondMatrix HYPRE_MULTIPRECISION_FUNC ( hypre_GMRESGetPrecondMatrix )
#define hypre_GMRESSetPrintLevel HYPRE_MULTIPRECISION_FUNC ( hypre_GMRESSetPrintLevel )
#define hypre_GMRESSetRelChange HYPRE_MULTIPRECISION_FUNC ( hypre_GMRESSetRelChange )
#define hypre_GMRESSetSkipRealResidualCheck HYPRE_MULTIPRECISION_FUNC ( hypre_GMRESSetSkipRealResidualCheck )
#define hypre_GMRESSetStopCrit HYPRE_MULTIPRECISION_FUNC ( hypre_GMRESSetStopCrit )
#define hypre_GMRESSetTol HYPRE_MULTIPRECISION_FUNC ( hypre_GMRESSetTol )
#define hypre_GMRESSetup HYPRE_MULTIPRECISION_FUNC ( hypre_GMRESSetup )
#define hypre_GMRESSolve HYPRE_MULTIPRECISION_FUNC ( hypre_GMRESSolve )

#endif
