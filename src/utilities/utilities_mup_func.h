/*** DO NOT EDIT THIS FILE DIRECTLY (use 'mup_func_header' to generate) ***/

/******************************************************************************
 * Copyright (c) 1998 Lawrence Livermore National Security, LLC and other
 * HYPRE Project Developers. See the top-level COPYRIGHT file for details.
 *
 * SPDX-License-Identifier: (Apache-2.0 OR MIT)
 ******************************************************************************/

/******************************************************************************
 * Header file for transforming multiprecision functions names
 *****************************************************************************/

#ifndef UTILITIES_MUP_FUNC_HEADER
#define UTILITIES_MUP_FUNC_HEADER

#include "HYPRE_utilities.h"

#define utilities_FortranMatrixAdd HYPRE_MULTIPRECISION_FUNC ( utilities_FortranMatrixAdd )
#define utilities_FortranMatrixAllocateData HYPRE_MULTIPRECISION_FUNC ( utilities_FortranMatrixAllocateData )
#define utilities_FortranMatrixClear HYPRE_MULTIPRECISION_FUNC ( utilities_FortranMatrixClear )
#define utilities_FortranMatrixClearL HYPRE_MULTIPRECISION_FUNC ( utilities_FortranMatrixClearL )
#define utilities_FortranMatrixCopy HYPRE_MULTIPRECISION_FUNC ( utilities_FortranMatrixCopy )
#define utilities_FortranMatrixDMultiply HYPRE_MULTIPRECISION_FUNC ( utilities_FortranMatrixDMultiply )
#define utilities_FortranMatrixFNorm HYPRE_MULTIPRECISION_FUNC ( utilities_FortranMatrixFNorm )
#define utilities_FortranMatrixGetDiagonal HYPRE_MULTIPRECISION_FUNC ( utilities_FortranMatrixGetDiagonal )
#define utilities_FortranMatrixIndexCopy HYPRE_MULTIPRECISION_FUNC ( utilities_FortranMatrixIndexCopy )
#define utilities_FortranMatrixMaxValue HYPRE_MULTIPRECISION_FUNC ( utilities_FortranMatrixMaxValue )
#define utilities_FortranMatrixMultiply HYPRE_MULTIPRECISION_FUNC ( utilities_FortranMatrixMultiply )
#define utilities_FortranMatrixMultiplyD HYPRE_MULTIPRECISION_FUNC ( utilities_FortranMatrixMultiplyD )
#define utilities_FortranMatrixPrint HYPRE_MULTIPRECISION_FUNC ( utilities_FortranMatrixPrint )
#define utilities_FortranMatrixSetDiagonal HYPRE_MULTIPRECISION_FUNC ( utilities_FortranMatrixSetDiagonal )
#define utilities_FortranMatrixSetToIdentity HYPRE_MULTIPRECISION_FUNC ( utilities_FortranMatrixSetToIdentity )
#define utilities_FortranMatrixSymmetrize HYPRE_MULTIPRECISION_FUNC ( utilities_FortranMatrixSymmetrize )
#define utilities_FortranMatrixTransposeSquare HYPRE_MULTIPRECISION_FUNC ( utilities_FortranMatrixTransposeSquare )
#define utilities_FortranMatrixUpperInv HYPRE_MULTIPRECISION_FUNC ( utilities_FortranMatrixUpperInv )
#define utilities_FortranMatrixValue HYPRE_MULTIPRECISION_FUNC ( utilities_FortranMatrixValue )
#define utilities_FortranMatrixValuePtr HYPRE_MULTIPRECISION_FUNC ( utilities_FortranMatrixValuePtr )
#define utilities_FortranMatrixValues HYPRE_MULTIPRECISION_FUNC ( utilities_FortranMatrixValues )
#define utilities_FortranMatrixWrap HYPRE_MULTIPRECISION_FUNC ( utilities_FortranMatrixWrap )
#define hypre_MPI_Allgather HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Allgather )
#define hypre_MPI_Allgatherv HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Allgatherv )
#define hypre_MPI_Allreduce HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Allreduce )
#define hypre_MPI_Gather HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Gather )
#define hypre_MPI_Gatherv HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Gatherv )
#define hypre_MPI_Reduce HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Reduce )
#define hypre_MPI_Scan HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Scan )
#define hypre_MPI_Scatter HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Scatter )
#define hypre_MPI_Scatterv HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Scatterv )
#define hypre_BigQsort1 HYPRE_MULTIPRECISION_FUNC ( hypre_BigQsort1 )
#define hypre_BigQsort4_abs HYPRE_MULTIPRECISION_FUNC ( hypre_BigQsort4_abs )
#define hypre_BigSwap HYPRE_MULTIPRECISION_FUNC ( hypre_BigSwap )
#define hypre_BigSwap2 HYPRE_MULTIPRECISION_FUNC ( hypre_BigSwap2 )
#define hypre_BigSwap4_d HYPRE_MULTIPRECISION_FUNC ( hypre_BigSwap4_d )
#define hypre_dense_search_row HYPRE_MULTIPRECISION_FUNC ( hypre_dense_search_row )
#define hypre_dense_topo_sort HYPRE_MULTIPRECISION_FUNC ( hypre_dense_topo_sort )
#define hypre_qsort1 HYPRE_MULTIPRECISION_FUNC ( hypre_qsort1 )
#define hypre_qsort2 HYPRE_MULTIPRECISION_FUNC ( hypre_qsort2 )
#define hypre_qsort2_abs HYPRE_MULTIPRECISION_FUNC ( hypre_qsort2_abs )
#define hypre_qsort3 HYPRE_MULTIPRECISION_FUNC ( hypre_qsort3 )
#define hypre_qsort3_abs HYPRE_MULTIPRECISION_FUNC ( hypre_qsort3_abs )
#define hypre_qsort3i HYPRE_MULTIPRECISION_FUNC ( hypre_qsort3i )
#define hypre_qsort3ir HYPRE_MULTIPRECISION_FUNC ( hypre_qsort3ir )
#define hypre_qsort_abs HYPRE_MULTIPRECISION_FUNC ( hypre_qsort_abs )
#define hypre_search_row HYPRE_MULTIPRECISION_FUNC ( hypre_search_row )
#define hypre_swap HYPRE_MULTIPRECISION_FUNC ( hypre_swap )
#define hypre_swap2 HYPRE_MULTIPRECISION_FUNC ( hypre_swap2 )
#define hypre_swap3_d HYPRE_MULTIPRECISION_FUNC ( hypre_swap3_d )
#define hypre_swap3_d_perm HYPRE_MULTIPRECISION_FUNC ( hypre_swap3_d_perm )
#define hypre_swap_c HYPRE_MULTIPRECISION_FUNC ( hypre_swap_c )
#define hypre_swap_d HYPRE_MULTIPRECISION_FUNC ( hypre_swap_d )
#define hypre_topo_sort HYPRE_MULTIPRECISION_FUNC ( hypre_topo_sort )
#define hypre_DoubleQuickSplit HYPRE_MULTIPRECISION_FUNC ( hypre_DoubleQuickSplit )
#define hypre_Rand HYPRE_MULTIPRECISION_FUNC ( hypre_Rand )

#endif