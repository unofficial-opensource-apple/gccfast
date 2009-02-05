/* APPLE LOCAL file debugging */
/* C++ tree & rtl accessors defined as functions for use in a debugger.
   Copyright (C) 2001  Free Software Foundation, Inc.
   Contributed by Ira L. Ruben (ira@apple.com)

This file is part of GNU CC.

GNU CC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GNU CC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNU CC; see the file COPYING.  If not, write to
the Free Software Foundation, 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.  */

/* What we do here is to instantiate each macro as a function *BY
   THE SAME NAME*.  Depends on the macro not being expanded when
   it is surrounded by parens.  
  
   Note that this file includes idebug.c so that only debugging
   macros for cp-tree.h are actually defined here.  For C++ only
   this file is included in the link while for C only c-idebug.c
   is built and included in the link.  */

#include "idebug.c"

#ifdef ENABLE_IDEBUG

#include "cp/cp-tree.h"

/* C++ tree debugging macro functions.  From cp-tree.h.
   I made special-case meta-macros for the most common
   one-parameter ones, that take a node and return either
   a node or an int.  */

#define fn_noden( m ) fn_1(m, tree, tree)
#define fn_nodei( m ) fn_1(m, int, tree)

/* Macros from cp-tree.h */

fn_nodei( C_IS_RESERVED_WORD )
fn_1( C_RID_CODE, enum rid, struct lang_identifier * )
fn_1( C_RID_YYCODE, short, struct lang_identifier * )
fn_1( LANG_IDENTIFIER_CAST, struct lang_identifier *, tree )
fn_noden( IDENTIFIER_GLOBAL_VALUE )
fn_noden( IDENTIFIER_NAMESPACE_VALUE )
fn_nodei( CLEANUP_P )
fn_noden( CLEANUP_DECL )
fn_noden( CLEANUP_EXPR )
fn_2( same_type_p, int, tree, tree )
fn_2( same_type_ignoring_top_level_qualifiers_p, int, tree, tree )
fn_nodei( DECL_MAIN_P )
fn_noden( OVL_FUNCTION )
fn_noden( OVL_CHAIN )
fn_noden( OVL_CURRENT )
fn_noden( OVL_NEXT )
fn_nodei( OVL_USED )
fn_nodei( BASELINK_P )
fn_nodei( SET_BASELINK_P )
fn_1( SRCLOC_FILE, const char *, tree )
fn_nodei( SRCLOC_LINE )
fn_noden( IDENTIFIER_NAMESPACE_BINDINGS )
fn_noden( IDENTIFIER_TEMPLATE )
fn_noden( IDENTIFIER_BINDING )
fn_noden( IDENTIFIER_VALUE )
fn_noden( IDENTIFIER_CLASS_VALUE )
fn_noden( IDENTIFIER_TYPE_VALUE )
fn_noden( REAL_IDENTIFIER_TYPE_VALUE )
fn_nodei( IDENTIFIER_HAS_TYPE_VALUE )
fn_noden( IDENTIFIER_LABEL_VALUE )
fn_noden( IDENTIFIER_IMPLICIT_DECL )
fn_noden( IDENTIFIER_ERROR_LOCUS )
fn_nodei( IDENTIFIER_VIRTUAL_P )
fn_nodei( IDENTIFIER_OPNAME_P )
fn_nodei( IDENTIFIER_TYPENAME_P )
fn_nodei( IDENTIFIER_CTOR_OR_DTOR_P )
fn_nodei( C_TYPE_FIELDS_READONLY )
/*fn_nodei( C_EXP_ORIGINAL_CODE )  already declared in c-common.h  */
fn_2( C_SET_EXP_ORIGINAL_CODE, int, tree, tree )
fn_1( ansi_opname, tree, int )
fn_1( ansi_assopname, tree, int )
fn_noden( TYPE_IDENTIFIER )
fn_noden( TYPE_LINKAGE_IDENTIFIER )
fn_1( TYPE_NAME_STRING, char*, tree )
fn_nodei( TYPE_NAME_LENGTH )
fn_1( TYPE_ASSEMBLER_NAME_STRING, char*, tree )
fn_nodei( TYPE_ASSEMBLER_NAME_LENGTH )
fn_noden( TYPE_MAIN_DECL )
fn_nodei( IS_AGGR_TYPE )
fn_nodei( CLASS_TYPE_P )
fn_1( IS_AGGR_TYPE_CODE, int, int )
fn_2( IS_AGGR_TYPE_2, int, tree, tree )
fn_nodei( IS_OVERLOAD_TYPE )
fn_nodei( TAGGED_TYPE_P )
fn_nodei( TYPE_BUILT_IN )
fn_nodei( TYPE_FOR_JAVA )
fn_nodei( CP_TYPE_QUALS )
fn_nodei( CP_TYPE_CONST_P )
fn_nodei( CP_TYPE_VOLATILE_P )
fn_nodei( CP_TYPE_RESTRICT_P )
fn_nodei( CP_TYPE_CONST_NON_VOLATILE_P )
fn_noden( FNADDR_FROM_VTABLE_ENTRY )
fn_noden( FUNCTION_ARG_CHAIN )
fn_noden( FUNCTION_FIRST_USER_PARMTYPE )
fn_noden( FUNCTION_FIRST_USER_PARM )
fn_2( PROMOTES_TO_AGGR_TYPE, int, tree, unsigned )
fn_2( UNIQUELY_DERIVED_FROM_P, int, tree, tree )
fn_2( ACCESSIBLY_DERIVED_FROM_P, int, tree, tree )
fn_2( ACCESSIBLY_UNIQUELY_DERIVED_P, int, tree, tree )
fn_2( PUBLICLY_UNIQUELY_DERIVED_P, int, tree, tree )
fn_2( DERIVED_FROM_P, int, tree, tree )
fn_nodei( CLASSTYPE_USE_TEMPLATE )
fn_noden( CLASSTYPE_INLINE_FRIENDS )
fn_nodei( TYPE_GETS_DELETE )
fn_nodei( TYPE_GETS_REG_DELETE )
fn_nodei( TYPE_VEC_DELETE_TAKES_SIZE )
fn_nodei( TYPE_VEC_NEW_USES_COOKIE )
fn_nodei( TYPE_HAS_CONVERSION )
fn_nodei( TYPE_HAS_ASSIGN_REF )
fn_nodei( TYPE_HAS_CONST_ASSIGN_REF )
fn_nodei( TYPE_HAS_INIT_REF )
fn_nodei( TYPE_HAS_CONST_INIT_REF )
fn_nodei( TYPE_HAS_NEW_OPERATOR )
fn_nodei( TYPE_HAS_ARRAY_NEW_OPERATOR )
fn_nodei( TYPE_BEING_DEFINED )
fn_nodei( TYPE_REDEFINED )
fn_noden( CLASSTYPE_RTTI )
fn_nodei( TYPE_OVERLOADS_CALL_EXPR )
fn_nodei( TYPE_OVERLOADS_ARRAY_REF )
fn_nodei( TYPE_OVERLOADS_ARROW )
fn_nodei( TYPE_USES_MULTIPLE_INHERITANCE )
fn_nodei( TYPE_USES_VIRTUAL_BASECLASSES )
fn_noden( CLASSTYPE_METHOD_VEC )
fn_noden( CLASSTYPE_CONSTRUCTORS )
fn_noden( CLASSTYPE_DESTRUCTORS )
fn_2( CLASSTYPE_MARKED_N, int, tree, int )
fn_nodei( CLASSTYPE_MARKED )
fn_nodei( CLASSTYPE_MARKED2 )
fn_nodei( CLASSTYPE_MARKED3 )
fn_nodei( CLASSTYPE_MARKED4 )
fn_nodei( CLASSTYPE_MARKED5 )
fn_nodei( CLASSTYPE_MARKED6 )
fn_noden( CLASSTYPE_TAGS )
fn_nodei( CLASSTYPE_HAS_PRIMARY_BASE_P )
fn_noden( CLASSTYPE_PRIMARY_BINFO )
fn_nodei( CLASSTYPE_VSIZE )
fn_noden( CLASSTYPE_VBASECLASSES )
fn_2( CANONICAL_BINFO, tree, tree, tree )
fn_nodei( CLASSTYPE_N_BASECLASSES )
fn_noden( CLASSTYPE_SIZE )
fn_noden( CLASSTYPE_SIZE_UNIT )
fn_nodei( CLASSTYPE_ALIGN )
fn_nodei( CLASSTYPE_USER_ALIGN )
fn_nodei( CLASSTYPE_ALIGN_UNIT )
fn_nodei( TYPE_JAVA_INTERFACE )
fn_noden( CLASSTYPE_PURE_VIRTUALS )
fn_nodei( CLASSTYPE_GOT_SEMICOLON )
fn_nodei( CLASSTYPE_NEEDS_VIRTUAL_REINIT )
fn_nodei( TYPE_HAS_DEFAULT_CONSTRUCTOR )
fn_nodei( CLASSTYPE_HAS_MUTABLE )
fn_nodei( TYPE_HAS_MUTABLE_P )
fn_nodei( CLASSTYPE_NON_POD_P )
fn_nodei( CLASSTYPE_NEARLY_EMPTY_P )
fn_nodei( CLASSTYPE_COM_INTERFACE )
fn_noden( CLASSTYPE_FRIEND_CLASSES )
fn_noden( CLASSTYPE_BEFRIENDING_CLASSES )
fn_nodei( CLASSTYPE_DECLARED_CLASS )
fn_nodei( CLASSTYPE_READONLY_FIELDS_NEED_INIT )
fn_nodei( CLASSTYPE_REF_FIELDS_NEED_INIT )
fn_nodei( CLASSTYPE_INTERFACE_ONLY )
fn_nodei( CLASSTYPE_INTERFACE_KNOWN )
fn_nodei( CLASSTYPE_INTERFACE_UNKNOWN )
fn_2( SET_CLASSTYPE_INTERFACE_UNKNOWN_X, int, tree, int )
fn_nodei( SET_CLASSTYPE_INTERFACE_UNKNOWN )
fn_nodei( SET_CLASSTYPE_INTERFACE_KNOWN )
fn_nodei( CLASSTYPE_DEBUG_REQUESTED )
fn_nodei( BINFO_MARKED )
fn_nodei( BINFO_VTABLE_PATH_MARKED )
fn_2( BINFO_NEW_VTABLE_MARKED, int, tree, tree )
fn_nodei( BINFO_PUSHDECLS_MARKED )
fn_nodei( BINFO_PRIMARY_P )
fn_noden( BINFO_SUBVTT_INDEX )
fn_noden( BINFO_VPTR_INDEX )
fn_noden( BINFO_PRIMARY_BASE_OF )
fn_nodei( BINFO_LOST_PRIMARY_P )
fn_nodei( BINFO_INDIRECT_PRIMARY_P )
fn_nodei( IDENTIFIER_MARKED )
fn_noden( CLASSTYPE_VFIELDS )
fn_noden( VF_BINFO_VALUE )
fn_noden( VF_BASETYPE_VALUE )
fn_noden( VF_DERIVED_VALUE )
fn_noden( BV_DELTA )
fn_noden( BV_VCALL_INDEX )
fn_noden( BV_FN )
fn_nodei( BV_USE_VCALL_INDEX_P )
fn_nodei( BV_GENERATE_THUNK_WITH_VTABLE_P )
fn_nodei( TREE_PARMLIST )
fn_nodei( PARMLIST_ELLIPSIS_P )
fn_noden( TYPE_RAISES_EXCEPTIONS )
fn_nodei( TYPE_NOTHROW_P )
fn_1( NAMESPACE_LEVEL, struct binding_level*, tree )
fn_nodei( CAN_HAVE_FULL_LANG_DECL_P )
fn_1( DEFARG_POINTER, const unsigned char *, tree )
fn_nodei( DECL_NEEDED_P )
fn_nodei( DECL_IN_MEMORY_P )
fn_nodei( DECL_LANGUAGE )
fn_nodei( DECL_CONSTRUCTOR_P )
fn_nodei( DECL_COMPLETE_CONSTRUCTOR_P )
fn_nodei( DECL_BASE_CONSTRUCTOR_P )
fn_nodei( DECL_MAYBE_IN_CHARGE_CONSTRUCTOR_P )
fn_nodei( DECL_COPY_CONSTRUCTOR_P )
fn_nodei( DECL_DESTRUCTOR_P )
fn_nodei( DECL_MAYBE_IN_CHARGE_DESTRUCTOR_P )
fn_nodei( DECL_COMPLETE_DESTRUCTOR_P )
fn_nodei( DECL_BASE_DESTRUCTOR_P )
fn_nodei( DECL_DELETING_DESTRUCTOR_P )
fn_nodei( DECL_CLONED_FUNCTION_P )
fn_noden( DECL_CLONED_FUNCTION )
fn_nodei( DECL_DISCRIMINATOR_P )
fn_nodei( DECL_DISCRIMINATOR )
fn_nodei( DECL_HAS_VTT_PARM_P )
fn_nodei( DECL_NEEDS_VTT_PARM_P )
fn_nodei( DECL_CONV_FN_P )
fn_2( SET_OVERLOADED_OPERATOR_CODE, enum tree_code, tree, enum tree_code )
fn_nodei( DECL_OVERLOADED_OPERATOR_P )
fn_nodei( DECL_ASSIGNMENT_OPERATOR_P )
fn_nodei( DECL_HAS_IN_CHARGE_PARM_P )
fn_nodei( DECL_ARRAY_DELETE_OPERATOR_P )
fn_nodei( DECL_IN_AGGR_P )
fn_nodei( DECL_INITIALIZED_IN_CLASS_P )
fn_nodei( DECL_FRIEND_P )
fn_noden( DECL_BEFRIENDING_CLASSES )
fn_nodei( DECL_STATIC_FUNCTION_P )
fn_nodei( DECL_NONSTATIC_MEMBER_FUNCTION_P )
fn_nodei( DECL_FUNCTION_MEMBER_P )
fn_nodei( DECL_CONST_MEMFUNC_P )
fn_nodei( DECL_VOLATILE_MEMFUNC_P )
fn_nodei( DECL_NONSTATIC_MEMBER_P )
fn_nodei( DECL_MUTABLE_P )
fn_nodei( DECL_NONCONVERTING_P )
fn_nodei( DECL_PURE_VIRTUAL_P )
fn_nodei( DECL_NEEDS_FINAL_OVERRIDER_P )
fn_nodei( DECL_THUNK_P )
fn_nodei( DECL_NON_THUNK_FUNCTION_P )
fn_nodei( DECL_EXTERN_C_P )
fn_nodei( DECL_EXTERN_C_FUNCTION_P )
fn_nodei( SET_DECL_THUNK_P )
fn_nodei( DECL_PRETTY_FUNCTION_P )
fn_noden( DECL_CLASS_CONTEXT )
fn_noden( DECL_FRIEND_CONTEXT )
fn_2( SET_DECL_FRIEND_CONTEXT, tree, tree, tree )
fn_noden( CP_DECL_CONTEXT )
fn_noden( FROB_CONTEXT )
fn_noden( DECL_VIRTUAL_CONTEXT )
fn_nodei( DECL_NAMESPACE_SCOPE_P )
fn_nodei( DECL_CLASS_SCOPE_P )
fn_nodei( DECL_FUNCTION_SCOPE_P )
fn_nodei( LOCAL_CLASS_P )
fn_noden( DECL_NAMESPACE_USING )
fn_noden( DECL_NAMESPACE_USERS )
fn_noden( DECL_NAMESPACE_ALIAS )
fn_noden( ORIGINAL_NAMESPACE )
fn_nodei( DECL_NAMESPACE_STD_P )
fn_nodei( DECL_INIT_PRIORITY )
fn_nodei( TREE_INDIRECT_USING )
fn_noden( DECL_SHADOWED_FOR_VAR )
fn_nodei( DECL_PENDING_INLINE_P )
fn_1( DECL_PENDING_INLINE_INFO, struct unparsed_text *, tree )
fn_noden( DECL_SORTED_FIELDS )
fn_nodei( DECL_DEFERRED_FN )
fn_noden( DECL_TEMPLATE_INFO )
fn_noden( CLASSTYPE_TEMPLATE_INFO )
fn_noden( ENUM_TEMPLATE_INFO )
fn_noden( TEMPLATE_TEMPLATE_PARM_TEMPLATE_INFO )
fn_noden( TYPE_TEMPLATE_INFO )
fn_2( SET_TYPE_TEMPLATE_INFO, tree, tree, tree )
fn_noden( TI_TEMPLATE )
fn_noden( TI_ARGS )
fn_nodei( TI_PENDING_TEMPLATE_FLAG )
fn_nodei( TMPL_ARGS_HAVE_MULTIPLE_LEVELS )
fn_nodei( TMPL_ARGS_DEPTH )
fn_2( TMPL_ARGS_LEVEL, tree, tree, int )
fn_3( SET_TMPL_ARGS_LEVEL, tree, tree, int, tree )
fn_3( TMPL_ARG, tree, tree, int, int )
fn_4( SET_TMPL_ARG, tree, tree, int, int, tree )
fn_nodei( NUM_TMPL_ARGS )
fn_noden( INNERMOST_TEMPLATE_ARGS )
fn_1( TMPL_PARMS_DEPTH, unsigned HOST_WIDE_INT, tree )
fn_noden( DECL_TI_TEMPLATE )
fn_noden( DECL_TI_ARGS )
fn_noden( CLASSTYPE_TI_TEMPLATE )
fn_noden( CLASSTYPE_TI_ARGS )
fn_noden( ENUM_TI_TEMPLATE )
fn_noden( ENUM_TI_ARGS )
fn_noden( TYPE_TI_TEMPLATE )
fn_noden( TYPE_TI_ARGS)
fn_noden( INNERMOST_TEMPLATE_PARMS )
fn_nodei( TEMPLATE_PARMS_FOR_INLINE )
fn_1( DECL_SAVED_FUNCTION_DATA, struct cp_language_function *, tree )
fn_nodei( NEW_EXPR_USE_GLOBAL )
fn_nodei( DELETE_EXPR_USE_GLOBAL )
fn_nodei( DELETE_EXPR_USE_VEC )
fn_nodei( LOOKUP_EXPR_GLOBAL )
fn_nodei( AGGR_INIT_VIA_CTOR_P )
fn_nodei( CLASSTYPE_IS_TEMPLATE )
fn_noden( TYPENAME_TYPE_FULLNAME )
fn_nodei( IMPLICIT_TYPENAME_P )
fn_nodei( IMPLICIT_TYPENAME_TYPE_DECL_P )
fn_nodei( TREE_NEGATED_INT )
fn_nodei( TYPE_BASE_CONVS_MAY_REQUIRE_CODE_P )
fn_nodei( TYPE_POLYMORPHIC_P )
fn_nodei( TYPE_CONTAINS_VPTR_P )
fn_nodei( DECL_DEAD_FOR_LOCAL )
fn_nodei( DECL_ERROR_REPORTED )
fn_nodei( DECL_LOCAL_FUNCTION_P )
fn_nodei( DECL_ANTICIPATED )
fn_nodei( C_TYPEDEF_EXPLICITLY_SIGNED )
fn_nodei( DECL_EXTERNAL_LINKAGE_P )
fn_1( INTEGRAL_CODE_P, int, int )
fn_nodei( CP_INTEGRAL_TYPE_P )
fn_nodei( ARITHMETIC_TYPE_P )
fn_nodei( TYPE_HAS_CONSTRUCTOR )
fn_nodei( TREE_HAS_CONSTRUCTOR )
fn_nodei( EMPTY_CONSTRUCTOR_P )
fn_nodei( TYPE_HAS_DESTRUCTOR )
fn_nodei( CLASSTYPE_NON_AGGREGATE )
fn_nodei( TYPE_NON_AGGREGATE_CLASS )
fn_nodei( TYPE_HAS_REAL_ASSIGN_REF )
fn_nodei( TYPE_HAS_COMPLEX_ASSIGN_REF )
fn_nodei( TYPE_HAS_ABSTRACT_ASSIGN_REF )
fn_nodei( TYPE_HAS_COMPLEX_INIT_REF )
fn_nodei( TYPE_HAS_TRIVIAL_DESTRUCTOR1 )
fn_nodei( TYPE_HAS_NONTRIVIAL_DESTRUCTOR )
fn_nodei( TYPE_HAS_TRIVIAL_INIT_REF )
fn_nodei( TYPE_HAS_TRIVIAL_ASSIGN_REF )
fn_nodei( TYPE_PTRMEM_P )
fn_nodei( TYPE_PTR_P )
fn_nodei( TYPE_PTROB_P )
fn_nodei( TYPE_PTROBV_P )
fn_nodei( TYPE_PTRFN_P )
fn_nodei( TYPE_PTRMEMFUNC_P )
fn_nodei( TYPE_PTRMEMFUNC_FLAG )
fn_nodei( PTRMEM_OK_P )
fn_noden( TYPE_PTRMEMFUNC_FN_TYPE )
fn_noden( TYPE_PTRMEMFUNC_OBJECT_TYPE )
fn_noden( TYPE_GET_PTRMEMFUNC_TYPE )
#if 0 /* this one doesn't have a return value */
fn_2( TYPE_SET_PTRMEMFUNC_TYPE, struct lang_type *, tree, struct lang_type*)
#endif
fn_noden( DELTA2_FROM_PTRMEMFUNC )
fn_noden( PFN_FROM_PTRMEMFUNC )
fn_noden( TYPE_PTRMEM_CLASS_TYPE )
fn_noden( TYPE_PTRMEM_POINTED_TO_TYPE )
fn_noden( PTRMEM_CST_CLASS )
fn_noden( PTRMEM_CST_MEMBER )
fn_nodei( DECL_THIS_EXTERN )
fn_nodei( DECL_THIS_STATIC )
fn_nodei( ANON_AGGR_TYPE_P )
fn_nodei( SET_ANON_AGGR_TYPE_P )
fn_nodei( ANON_UNION_TYPE_P )
fn_nodei( TYPE_WAS_ANONYMOUS )
fn_noden( DECL_FRIENDLIST )
fn_noden( FRIEND_NAME )
fn_noden( FRIEND_DECLS )
fn_noden( DECL_ACCESS )
fn_nodei( DECL_GLOBAL_CTOR_P )
fn_nodei( DECL_GLOBAL_DTOR_P )
fn_nodei( GLOBAL_INIT_PRIORITY )
fn_noden( DECL_TEMPLATE_PARMS )
fn_noden( DECL_INNERMOST_TEMPLATE_PARMS )
fn_nodei( DECL_NTPARMS )
fn_noden( DECL_TEMPLATE_RESULT )
fn_noden( DECL_TEMPLATE_INSTANTIATIONS )
fn_noden( DECL_TEMPLATE_SPECIALIZATIONS )
fn_nodei( DECL_TEMPLATE_PARM_P )
fn_nodei( SET_DECL_TEMPLATE_PARM_P )
fn_nodei( DECL_TEMPLATE_TEMPLATE_PARM_P )
fn_nodei( DECL_FUNCTION_TEMPLATE_P )
fn_nodei( DECL_CLASS_TEMPLATE_P )
fn_nodei( DECL_DECLARES_TYPE_P )
fn_nodei( DECL_IMPLICIT_TYPEDEF_P )
fn_nodei( SET_DECL_IMPLICIT_TYPEDEF_P )
fn_noden( DECL_PRIMARY_TEMPLATE )
fn_nodei( PRIMARY_TEMPLATE_P )
fn_nodei( CLASSTYPE_TEMPLATE_LEVEL )
fn_nodei( DECL_USE_TEMPLATE )
fn_nodei( DECL_TEMPLATE_INSTANTIATION )
fn_nodei( CLASSTYPE_TEMPLATE_INSTANTIATION )
fn_nodei( DECL_TEMPLATE_SPECIALIZATION )
fn_nodei( SET_DECL_TEMPLATE_SPECIALIZATION )
fn_nodei( CLASSTYPE_TEMPLATE_SPECIALIZATION )
fn_nodei( SET_CLASSTYPE_TEMPLATE_SPECIALIZATION )
fn_nodei( DECL_IMPLICIT_INSTANTIATION )
fn_nodei( SET_DECL_IMPLICIT_INSTANTIATIO )
fn_nodei( CLASSTYPE_IMPLICIT_INSTANTIATION )
fn_nodei( SET_CLASSTYPE_IMPLICIT_INSTANTIATION )
fn_nodei( DECL_EXPLICIT_INSTANTIATION )
fn_nodei( SET_DECL_EXPLICIT_INSTANTIATION )
fn_nodei( CLASSTYPE_EXPLICIT_INSTANTIATION )
fn_nodei( SET_CLASSTYPE_EXPLICIT_INSTANTIATION )
fn_nodei( DECL_FRIEND_PSEUDO_TEMPLATE_INSTANTIATION )
fn_nodei( PARTIAL_INSTANTIATION_P )
fn_0( PROCESSING_REAL_TEMPLATE_DECL_P, int )
fn_nodei( DECL_MAYBE_TEMPLATE )
fn_nodei( DECL_TEMPLATE_INSTANTIATED )
fn_nodei( DECL_INTERFACE_KNOWN )
fn_nodei( DECL_DECLARED_INLINE_P )
fn_nodei( DECL_NOT_REALLY_EXTERN )
fn_nodei( DECL_REALLY_EXTERN )
fn_nodei( THUNK_DELTA )
fn_noden( THUNK_VCALL_OFFSET )
fn_nodei( THUNK_GENERATE_WITH_VTABLE_P )
fn_noden( TRY_STMTS )
fn_noden( TRY_HANDLERS )
fn_noden( EH_SPEC_STMTS )
fn_noden( EH_SPEC_RAISES )
fn_nodei( FN_TRY_BLOCK_P )
fn_noden( HANDLER_PARMS )
fn_noden( HANDLER_BODY )
fn_noden( SUBOBJECT_CLEANUP )
fn_noden( START_CATCH_TYPE )
fn_nodei( CTOR_BEGIN_P )
fn_nodei( CTOR_END_P )
fn_noden( CALL_DECLARATOR_PARMS )
fn_noden( CALL_DECLARATOR_QUALS )
fn_noden( CALL_DECLARATOR_EXCEPTION_SPEC )
fn_noden( TINST_DECL )
fn_nodei( TINST_LINE )
fn_1( TINST_FILE, char*, tree )
fn_nodei( THIS_NAME_P )
fn_nodei( VPTR_NAME_P )
fn_nodei( DESTRUCTOR_NAME_P )
fn_nodei( VTABLE_NAME_P )
fn_nodei( VBASE_NAME_P )
fn_nodei( TEMP_NAME_P )
fn_nodei( VFIELD_NAME_P )
fn_nodei( ANON_AGGRNAME_P )
fn_nodei( ANON_PARMNAME_P )
fn_2( same_or_base_type_p, int, tree, tree )
fn_1( TEMPLATE_PARM_INDEX_CAST, template_parm_index*, tree )
fn_nodei( TEMPLATE_PARM_IDX )
fn_nodei( TEMPLATE_PARM_LEVEL )
fn_noden( TEMPLATE_PARM_DESCENDANTS )
fn_nodei( TEMPLATE_PARM_ORIG_LEVEL )
fn_noden( TEMPLATE_PARM_DECL )
fn_noden( TEMPLATE_TYPE_PARM_INDEX )
fn_nodei( TEMPLATE_TYPE_IDX )
fn_nodei( TEMPLATE_TYPE_LEVEL )
fn_nodei( TEMPLATE_TYPE_ORIG_LEVEL )
fn_noden( TEMPLATE_TYPE_DECL )
fn_noden( TEMPLATE_TEMPLATE_PARM_TEMPLATE_DECL )
fn_2( cp_build_qualified_type, tree, tree, int )
fn_3( cp_build_binary_op, tree, enum tree_code, tree, tree ) 

#endif /* ENABLE_IDEBUG */