// ===== 005677b0  FUN_005677b0 =====

void FUN_005677b0(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
                    /* try { // try from 005677c4 to 005677eb has its CatchHandler @ 00567828 */
    uVar3 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(plVar5 + 6);
    if ((uVar3 & 5) == 1) {
      (**(code **)(plVar5[4] + 0x10))(plVar5[5]);
      plVar5 = (long *)*param_1;
      if (plVar5 == (long *)0x0) {
        return;
      }
    }
    do {
      lVar4 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<bool>>>::drop_slow(param_1);
      return;
    }
  }
  return;
}


// ===== 00567860  FUN_00567860 =====

void FUN_00567860(long *param_1)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  
  __ptr = (void *)param_1[1];
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)((long)__ptr + 0x10);
    do {
      if ((puVar2[-2] - 1 < 2) && (puVar2[-1] != 0)) {
        free((void *)*puVar2);
      }
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 4;
    } while (lVar1 != 0);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 005678ec  FUN_005678ec =====

void FUN_005678ec(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 00567904  FUN_00567904 =====

void FUN_00567904(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  void *__ptr;
  
  uVar1 = *param_1;
  uVar2 = uVar1 ^ 0x8000000000000000;
  if (-1 < (long)uVar1) {
    uVar2 = 0x14;
  }
  if ((long)uVar2 < 7) {
    if ((long)uVar2 < 5) {
      if (uVar2 != 0) {
        if (uVar2 != 2) {
          return;
        }
        __ptr = (void *)param_1[1];
        puVar3 = (undefined8 *)param_1[2];
        if ((code *)*puVar3 != (code *)0x0) {
                    /* try { // try from 005679a4 to 005679ab has its CatchHandler @ 00567a44 */
          (*(code *)*puVar3)(__ptr);
        }
        goto LAB_00567a18;
      }
      if (param_1[1] == 0xffffffffffffffff) {
        return;
      }
      if (param_1[1] == 0) {
        return;
      }
      goto LAB_005679dc;
    }
    if ((uVar2 != 5) && (uVar2 != 6)) {
      return;
    }
  }
  else if ((long)uVar2 < 0xd) {
    if ((uVar2 != 7) && (uVar2 != 0xc)) {
      return;
    }
  }
  else if (uVar2 != 0xd) {
    if (uVar2 != 0xf) {
      if (uVar2 != 0x14) {
        return;
      }
      if (uVar1 != 0) {
        free((void *)param_1[1]);
      }
      if (param_1[3] == 0) {
        return;
      }
      free((void *)param_1[4]);
      return;
    }
    __ptr = (void *)param_1[1];
    puVar3 = (undefined8 *)param_1[2];
    if ((code *)*puVar3 != (code *)0x0) {
                    /* try { // try from 00567a10 to 00567a17 has its CatchHandler @ 00567a40 */
      (*(code *)*puVar3)(__ptr);
    }
LAB_00567a18:
    if (puVar3[1] == 0) {
      return;
    }
    free(__ptr);
    return;
  }
  if (param_1[1] == 0) {
    return;
  }
LAB_005679dc:
  free((void *)param_1[2]);
  return;
}


// ===== 00567a68  FUN_00567a68 =====

void FUN_00567a68(undefined8 *param_1,long param_2,ulong param_3)

{
  int iVar1;
  char *__s;
  size_t sVar2;
  long local_80;
  ulong local_78;
  undefined8 uStack_70;
  ulong local_40;
  undefined8 uStack_38;
  
  if (((int)param_3 < 0) ||
     (iVar1 = sqlite3_column_count(*(undefined8 *)(param_2 + 0x38)), iVar1 <= (int)param_3)) {
    *param_1 = 0x800000000000000b;
    param_1[1] = param_3;
    return;
  }
  __s = (char *)sqlite3_column_name(*(undefined8 *)(param_2 + 0x38),param_3 & 0xffffffff);
  if (__s == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              ("Null pointer from sqlite3_column_name: Out of memory?",0x6b,
               &PTR_s__root__cargo_registry_src_index__00ad01a0);
  }
  sVar2 = strlen(__s);
  local_80 = -0x7ffffffffffffff5;
  local_78 = param_3;
  FUN_00567904(&local_80);
  <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::to_str(&local_80,__s,sVar2 + 1);
  if (local_80 != 1) {
    param_1[1] = local_78;
    param_1[2] = uStack_70;
    *param_1 = 0xffffffffffffffff;
    return;
  }
  uStack_38 = uStack_70;
  local_40 = local_78;
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            ("Invalid UTF-8 sequence in column name",0x25,&local_40,&DAT_00ad0180,
             &PTR_s__root__cargo_registry_src_index__00ad01b8);
}


// ===== 00567b70  FUN_00567b70 =====

char FUN_00567b70(long *param_1,undefined1 param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  char cVar7;
  long *local_30;
  long *local_28;
  
  local_30 = (long *)0x0;
  if (param_1 == (long *)0x0) {
                    /* try { // try from 00567cf0 to 00567cfb has its CatchHandler @ 00567d94 */
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00ad01d0);
  }
  *(undefined1 *)(param_1 + 7) = param_2;
                    /* try { // try from 00567b94 to 00567bbb has its CatchHandler @ 00567d68 */
  local_28 = param_1;
  uVar4 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(param_1 + 6);
  if ((uVar4 & 5) == 1) {
    (**(code **)(param_1[4] + 0x10))(param_1[5]);
  }
  if ((uVar4 >> 2 & 1) == 0) {
    do {
      lVar6 = *local_28;
      cVar7 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(local_28,0x10);
      if (bVar2) {
        *local_28 = lVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar6 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 00567bdc to 00567be3 has its CatchHandler @ 00567d94 */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<bool>>>::drop_slow(&local_28);
    }
    plVar3 = local_30;
    if (local_30 == (long *)0x0) {
      return '\x02';
    }
                    /* try { // try from 00567bec to 00567c0f has its CatchHandler @ 00567d3c */
    uVar5 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(local_30 + 6);
    if ((uVar5 & 5) == 1) {
      (**(code **)(plVar3[4] + 0x10))(plVar3[5]);
    }
    do {
      lVar6 = *plVar3;
      cVar7 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    cVar7 = '\x02';
    if (lVar6 == 1) {
LAB_00567cb8:
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<bool>>>::drop_slow(&local_30);
      return cVar7;
    }
  }
  else {
    cVar7 = (char)local_28[7];
    *(undefined1 *)(local_28 + 7) = 2;
    if (cVar7 == '\x02') {
                    /* try { // try from 00567d00 to 00567d0b has its CatchHandler @ 00567d68 */
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00ad01e8);
    }
    do {
      lVar6 = *local_28;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(local_28,0x10);
      if (bVar2) {
        *local_28 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 00567c70 to 00567c77 has its CatchHandler @ 00567d94 */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<bool>>>::drop_slow(&local_28);
    }
    plVar3 = local_30;
    if (local_30 != (long *)0x0) {
                    /* try { // try from 00567c80 to 00567ca3 has its CatchHandler @ 00567d10 */
      uVar5 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(local_30 + 6);
      if ((uVar5 & 5) == 1) {
        (**(code **)(plVar3[4] + 0x10))(plVar3[5]);
      }
      do {
        lVar6 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 + -1 == 0) goto LAB_00567cb8;
    }
  }
  return cVar7;
}


// ===== 00567dac  FUN_00567dac =====

void FUN_00567dac(long *param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = *param_1 + 0x18;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
            (param_2,
             "ErrorInternalMalfunctionPermissionDeniedOperationAbortedDatabaseBusyDatabaseLockedOutOfMemoryReadOnlyOperationInterruptedSystemIoFailureDatabaseCorruptNotFoundDiskFullCannotOpenFileLockingProtocolFailedSchemaChangedTooBigConstraintViolationTypeMismatchApiMisuseNoLargeFileSupportAuthorizationForStatementDeniedParameterOutOfRangeNotADatabaseUnknownSqliteFailureSqliteSingleThreadedModeFromSqlConversionFailureIntegralValueOutOfRange"
             ,5,&DAT_002bd17c,4,*param_1,&PTR_FUN_00ad0278,"original",8,&local_18,&DAT_00ad0298);
  return;
}


// ===== 00567e1c  FUN_00567e1c =====

void FUN_00567e1c(undefined8 *param_1)

{
  <record_mapper::telemetry::RecordMapperTimingsKind_as_core::fmt::Display>::fmt(*param_1);
  return;
}


// ===== 00567e24  FUN_00567e24 =====

void FUN_00567e24(byte *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,&DAT_002c3168 + *(int *)(&DAT_002c3168 + (ulong)*param_1 * 4),
             *(undefined8 *)(&DAT_002c30a8 + (ulong)*param_1 * 8));
  return;
}


// ===== 00567e4c  FUN_00567e4c =====

void FUN_00567e4c(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (-1 < lVar1) {
    lVar1 = 0x14;
  }
                    /* WARNING: Could not recover jumptable at 0x00567e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_00567e88 + (ulong)*(ushort *)(&UNK_002c2cbc + lVar1 * 2) * 4))(param_2);
  return;
}


// ===== 005682d4  FUN_005682d4 =====

void FUN_005682d4(byte *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,&DAT_002c31f0 + *(int *)(&DAT_002c31f0 + (ulong)*param_1 * 4),
             *(undefined8 *)(&DAT_002c31c8 + (ulong)*param_1 * 8));
  return;
}


// ===== 005682fc  <bool_as_flux::persistence::codec::ValueCodec>::from_sql =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bool as flux::persistence::codec::ValueCodec>::from_sql */

void __rustcall
<bool_as_flux::persistence::codec::ValueCodec>::from_sql(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined8 local_28 [3];
  
  if (*param_2 == 1) {
    lVar1 = param_2[1];
    *param_1 = 0xffffffffffffffff;
    *(bool *)(param_1 + 1) = lVar1 != 0;
    return;
  }
  local_28[0] = 0;
  <rusqlite::error::Error_as_core::convert::From<rusqlite::types::from_sql::FromSqlError>>::from
            (local_28);
  return;
}


// ===== 00568348  FUN_00568348 =====

void FUN_00568348(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field1_finish
            (param_2,&DAT_002bd0a8,4,&DAT_002a1ad0,8,&local_18,&DAT_00ad0478);
  return;
}


// ===== 00568394  FUN_00568394 =====

void FUN_00568394(long param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = param_1 + 8;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
            (param_2,
             "Utf8ErrorInvalidParameterNameInvalidPathExecuteReturnedResultsQueryReturnedNoRowsQueryReturnedMoreThanOneRowInvalidColumnIndexInvalidColumnNameInvalidColumnTypeStatementChangedRowsToSqlConversionFailureInvalidQueryUnwindingPanicMultipleStatementInvalidParameterCount"
             ,9,"valid_up_to",0xb,param_1,&DAT_00ad02f8,"error_len",9,&local_18,&DAT_00ad0498);
  return;
}


// ===== 00568404  FUN_00568404 =====

void FUN_00568404(undefined8 param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <usize_as_core::fmt::LowerHex>::fmt();
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <usize_as_core::fmt::Display>::fmt();
    return;
  }
  <usize_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 0056841c  <smol_str::SmolStr_as_flux::persistence::codec::ValueCodec>::from_sql =====

/* WARNING: Unknown calling convention: __rustcall */
/* <smol_str::SmolStr as flux::persistence::codec::ValueCodec>::from_sql */

void __rustcall
<smol_str::SmolStr_as_flux::persistence::codec::ValueCodec>::from_sql
          (undefined8 *param_1,long *param_2)

{
  long local_38;
  long *local_30;
  undefined *puStack_28;
  
  if (*param_2 == 3) {
    core::str::converts::from_utf8(&local_38,param_2[1],param_2[2]);
    if (local_38 != 1) {
      <smol_str::[B]::smol_str::Repr>::new(param_1 + 1,local_30,puStack_28);
      *param_1 = 0xffffffffffffffff;
      return;
    }
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    param_2 = (long *)FUN_004b25a4(0x10,8);
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x10);
    }
    local_38 = 3;
    param_2[1] = (long)puStack_28;
    *param_2 = (long)local_30;
  }
  else {
    local_38 = 0;
  }
  puStack_28 = &DAT_00ad0220;
  local_30 = param_2;
  <rusqlite::error::Error_as_core::convert::From<rusqlite::types::from_sql::FromSqlError>>::from
            (param_1,&local_38);
  return;
}


// ===== 005684dc  FUN_005684dc =====

void FUN_005684dc(long param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
            (param_2,
             "ErrorInternalMalfunctionPermissionDeniedOperationAbortedDatabaseBusyDatabaseLockedOutOfMemoryReadOnlyOperationInterruptedSystemIoFailureDatabaseCorruptNotFoundDiskFullCannotOpenFileLockingProtocolFailedSchemaChangedTooBigConstraintViolationTypeMismatchApiMisuseNoLargeFileSupportAuthorizationForStatementDeniedParameterOutOfRangeNotADatabaseUnknownSqliteFailureSqliteSingleThreadedModeFromSqlConversionFailureIntegralValueOutOfRange"
             ,5,&DAT_002bcfe4,4,param_1 + 4,&DAT_00ad04b8,"extended_code",0xd,&local_18,
             &DAT_00ad0458);
  return;
}


// ===== 00568548  <u8_as_flux::persistence::codec::ValueCodec>::from_sql =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u8 as flux::persistence::codec::ValueCodec>::from_sql */

void __rustcall
<u8_as_flux::persistence::codec::ValueCodec>::from_sql(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong in_x10;
  undefined8 local_28;
  undefined1 local_20;
  undefined4 local_1f;
  undefined2 local_1b;
  undefined1 local_19;
  
  uVar1 = *param_2;
  if (uVar1 == 1) {
    uVar1 = param_2[1];
    if (uVar1 < 0x100) {
      *(char *)(param_1 + 1) = (char)uVar1;
      *param_1 = 0xffffffffffffffff;
      return;
    }
    in_x10 = uVar1 >> 8;
    local_28 = 1;
  }
  else {
    local_28 = 0;
  }
  local_20 = (undefined1)uVar1;
  local_1f = (undefined4)in_x10;
  local_19 = (undefined1)(in_x10 >> 0x30);
  local_1b = (undefined2)(in_x10 >> 0x20);
  <rusqlite::error::Error_as_core::convert::From<rusqlite::types::from_sql::FromSqlError>>::from
            (&local_28);
  return;
}


// ===== 005685bc  <i8_as_flux::persistence::codec::ValueCodec>::from_sql =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i8 as flux::persistence::codec::ValueCodec>::from_sql */

void __rustcall
<i8_as_flux::persistence::codec::ValueCodec>::from_sql(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong in_x10;
  undefined8 local_28;
  undefined1 local_20;
  undefined4 local_1f;
  undefined2 local_1b;
  undefined1 local_19;
  
  uVar1 = *param_2;
  if (uVar1 == 1) {
    uVar1 = param_2[1];
    if (uVar1 == (long)(char)uVar1) {
      *(char *)(param_1 + 1) = (char)uVar1;
      *param_1 = 0xffffffffffffffff;
      return;
    }
    in_x10 = uVar1 >> 8;
    local_28 = 1;
  }
  else {
    local_28 = 0;
  }
  local_20 = (undefined1)uVar1;
  local_1f = (undefined4)in_x10;
  local_19 = (undefined1)(in_x10 >> 0x30);
  local_1b = (undefined2)(in_x10 >> 0x20);
  <rusqlite::error::Error_as_core::convert::From<rusqlite::types::from_sql::FromSqlError>>::from
            (&local_28);
  return;
}


// ===== 00568630  <u16_as_flux::persistence::codec::ValueCodec>::from_sql =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u16 as flux::persistence::codec::ValueCodec>::from_sql */

void __rustcall
<u16_as_flux::persistence::codec::ValueCodec>::from_sql(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong in_x10;
  undefined8 local_28;
  undefined2 local_20;
  undefined4 local_1e;
  undefined2 local_1a;
  
  uVar1 = *param_2;
  if (uVar1 == 1) {
    uVar1 = param_2[1];
    if (uVar1 < 0x10000) {
      *(short *)(param_1 + 1) = (short)uVar1;
      *param_1 = 0xffffffffffffffff;
      return;
    }
    in_x10 = uVar1 >> 0x10;
    local_28 = 1;
  }
  else {
    local_28 = 0;
  }
  local_20 = (undefined2)uVar1;
  local_1e = (undefined4)in_x10;
  local_1a = (undefined2)(in_x10 >> 0x20);
  <rusqlite::error::Error_as_core::convert::From<rusqlite::types::from_sql::FromSqlError>>::from
            (&local_28);
  return;
}


// ===== 0056869c  <i16_as_flux::persistence::codec::ValueCodec>::from_sql =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i16 as flux::persistence::codec::ValueCodec>::from_sql */

void __rustcall
<i16_as_flux::persistence::codec::ValueCodec>::from_sql(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong in_x10;
  undefined8 local_28;
  undefined2 local_20;
  undefined4 local_1e;
  undefined2 local_1a;
  
  uVar1 = *param_2;
  if (uVar1 == 1) {
    uVar1 = param_2[1];
    if (uVar1 == (long)(short)uVar1) {
      *(short *)(param_1 + 1) = (short)uVar1;
      *param_1 = 0xffffffffffffffff;
      return;
    }
    in_x10 = uVar1 >> 0x10;
    local_28 = 1;
  }
  else {
    local_28 = 0;
  }
  local_20 = (undefined2)uVar1;
  local_1e = (undefined4)in_x10;
  local_1a = (undefined2)(in_x10 >> 0x20);
  <rusqlite::error::Error_as_core::convert::From<rusqlite::types::from_sql::FromSqlError>>::from
            (&local_28);
  return;
}


// ===== 00568708  <u32_as_flux::persistence::codec::ValueCodec>::from_sql =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u32 as flux::persistence::codec::ValueCodec>::from_sql */

void __rustcall
<u32_as_flux::persistence::codec::ValueCodec>::from_sql(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  undefined4 in_w10;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uVar1 = *param_2;
  if (uVar1 == 1) {
    uVar1 = param_2[1];
    uStack_1c = (undefined4)(uVar1 >> 0x20);
    if (uVar1 >> 0x20 == 0) {
      *(int *)(param_1 + 1) = (int)uVar1;
      *param_1 = 0xffffffffffffffff;
      return;
    }
    local_28 = 1;
  }
  else {
    local_28 = 0;
    uStack_1c = in_w10;
  }
  local_20 = (undefined4)uVar1;
  <rusqlite::error::Error_as_core::convert::From<rusqlite::types::from_sql::FromSqlError>>::from
            (&local_28);
  return;
}


// ===== 00568764  <i32_as_flux::persistence::codec::ValueCodec>::from_sql =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i32 as flux::persistence::codec::ValueCodec>::from_sql */

void __rustcall
<i32_as_flux::persistence::codec::ValueCodec>::from_sql(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined4 in_w10;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  lVar1 = *param_2;
  if (lVar1 == 1) {
    lVar1 = param_2[1];
    if (lVar1 == (int)lVar1) {
      *(int *)(param_1 + 1) = (int)lVar1;
      *param_1 = 0xffffffffffffffff;
      return;
    }
    in_w10 = (undefined4)((ulong)lVar1 >> 0x20);
    local_28 = 1;
  }
  else {
    local_28 = 0;
  }
  local_20 = (undefined4)lVar1;
  uStack_1c = in_w10;
  <rusqlite::error::Error_as_core::convert::From<rusqlite::types::from_sql::FromSqlError>>::from
            (&local_28);
  return;
}


// ===== 005687c4  <usize_as_flux::persistence::codec::ValueCodec>::from_sql =====

/* WARNING: Unknown calling convention: __rustcall */
/* <usize as flux::persistence::codec::ValueCodec>::from_sql */

void __rustcall
<usize_as_flux::persistence::codec::ValueCodec>::from_sql(undefined8 *param_1,long *param_2)

{
  undefined8 local_28;
  long lStack_20;
  
  lStack_20 = *param_2;
  if (lStack_20 == 1) {
    lStack_20 = param_2[1];
    if (-1 < lStack_20) {
      *param_1 = 0xffffffffffffffff;
      param_1[1] = lStack_20;
      return;
    }
    local_28 = 1;
  }
  else {
    local_28 = 0;
  }
  <rusqlite::error::Error_as_core::convert::From<rusqlite::types::from_sql::FromSqlError>>::from
            (&local_28);
  return;
}


// ===== 00568814  <isize_as_flux::persistence::codec::ValueCodec>::from_sql =====

/* WARNING: Unknown calling convention: __rustcall */
/* <isize as flux::persistence::codec::ValueCodec>::from_sql */

void __rustcall
<isize_as_flux::persistence::codec::ValueCodec>::from_sql(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined8 local_28 [3];
  
  if (*param_2 == 1) {
    lVar1 = param_2[1];
    *param_1 = 0xffffffffffffffff;
    param_1[1] = lVar1;
    return;
  }
  local_28[0] = 0;
  <rusqlite::error::Error_as_core::convert::From<rusqlite::types::from_sql::FromSqlError>>::from
            (local_28);
  return;
}


// ===== 00568854  FUN_00568854 =====

void FUN_00568854(long param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


// ===== 00568868  FUN_00568868 =====

undefined1  [16] FUN_00568868(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = "description() is deprecated; use Display";
  return auVar1;
}


// ===== 00568878  FUN_00568878 =====

undefined8 FUN_00568878(void)

{
  return 0;
}


// ===== 00568880  FUN_00568880 =====

void FUN_00568880(void)

{
  return;
}


// ===== 00568884  FUN_00568884 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00568884(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a08c0;
  param_1[1] = _UNK_002a08c8;
  *param_1 = uVar1;
  return;
}


// ===== 00568898  FUN_00568898 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00568898(long *param_1)

{
  ulong *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined **ppuVar5;
  ulong uVar6;
  long local_108;
  ulong *local_100;
  long lStack_f8;
  long local_f0;
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  long local_d0;
  long lStack_c8;
  ulong *local_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  long lStack_90;
  long local_88;
  long local_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long local_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  undefined1 uStack_21;
  
  FUN_005690d0(&local_108);
  if (local_108 == 1) {
    param_1[1] = lStack_f8;
    *param_1 = (long)local_100;
    param_1[3] = lStack_e8;
    param_1[2] = local_f0;
    param_1[5] = lStack_d8;
    param_1[4] = local_e0;
    param_1[7] = lStack_c8;
    param_1[6] = local_d0;
    return;
  }
  lStack_98 = lStack_d8;
  local_a0 = local_e0;
  local_88 = lStack_c8;
  lStack_90 = local_d0;
  lStack_b8 = lStack_f8;
  local_c0 = local_100;
  lStack_a8 = lStack_e8;
  lStack_b0 = local_f0;
  iVar2 = sqlite3_bind_parameter_count(lStack_c8);
  puVar1 = local_c0;
  lVar4 = _DAT_002a0c70;
  if (iVar2 != 0) {
    param_1[1] = _UNK_002a0c78;
    *param_1 = lVar4;
    param_1[2] = (long)iVar2;
    goto LAB_00568a4c;
  }
  iVar2 = sqlite3_step(lStack_c8);
  iVar3 = sqlite3_reset(lStack_c8);
  if (iVar2 == 100) {
    lVar4 = -0x7ffffffffffffff8;
LAB_00568a48:
    *param_1 = lVar4;
  }
  else {
    if (iVar2 == 0x65) {
      if (iVar3 == 0) {
        if (0x7ffffffffffffffe < *puVar1) {
          ppuVar5 = (undefined **)&DAT_00ad0560;
          goto LAB_00568a74;
        }
        *puVar1 = *puVar1 + 1;
        lVar4 = sqlite3_changes64(puVar1[2],0);
        uVar6 = *puVar1;
        param_1[1] = lVar4;
        *puVar1 = uVar6 - 1;
        lVar4 = -1;
        goto LAB_00568a48;
      }
      if (0x7ffffffffffffffe < *puVar1) goto LAB_00568a6c;
      *puVar1 = *puVar1 + 1;
                    /* try { // try from 00568988 to 0056898f has its CatchHandler @ 00568ab0 */
      rusqlite::error::decode_result_raw(&local_80,puVar1[2]);
      *puVar1 = *puVar1 - 1;
      if (local_80 == -1) {
        ppuVar5 = &PTR_s__root__cargo_registry_src_index__00ad0578;
        goto LAB_00568a84;
      }
    }
    else {
      if (0x7ffffffffffffffe < *puVar1) {
LAB_00568a6c:
        ppuVar5 = &PTR_s__root__cargo_registry_src_index__00ad05a8;
LAB_00568a74:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00568a74 to 00568a9f has its CatchHandler @ 00568ac8 */
        core::cell::panic_already_mutably_borrowed(ppuVar5);
      }
      *puVar1 = *puVar1 + 1;
                    /* try { // try from 005689dc to 005689e7 has its CatchHandler @ 00568ab4 */
      rusqlite::error::decode_result_raw(&local_80,puVar1[2],iVar2);
      *puVar1 = *puVar1 - 1;
      if (local_80 == -1) {
        ppuVar5 = &PTR_s__root__cargo_registry_src_index__00ad0590;
LAB_00568a84:
                    /* WARNING: Subroutine does not return */
        core::result::unwrap_failed
                  ("called `Result::unwrap_err()` on an `Ok` value",0x2e,&uStack_21,&DAT_00ad0510,
                   ppuVar5);
      }
    }
    param_1[1] = lStack_78;
    *param_1 = local_80;
    param_1[3] = lStack_68;
    param_1[2] = lStack_70;
    param_1[5] = lStack_58;
    param_1[4] = local_60;
    param_1[7] = lStack_48;
    param_1[6] = lStack_50;
  }
LAB_00568a4c:
  FUN_00568efc(&local_c0);
  return;
}


// ===== 00568ae0  FUN_00568ae0 =====

void FUN_00568ae0(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  long local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_1;
  
  puVar2 = (undefined8 *)*param_1;
  *param_1 = 0;
  if ((puVar2 != (undefined8 *)0x0) && (iVar1 = sqlite3_reset(puVar2[7]), iVar1 != 0)) {
    puVar3 = (ulong *)*puVar2;
    if (0x7ffffffffffffffe < *puVar3) {
                    /* WARNING: Subroutine does not return */
      core::cell::panic_already_mutably_borrowed(&PTR_s__root__cargo_registry_src_index__00ad05a8);
    }
    *puVar3 = *puVar3 + 1;
                    /* try { // try from 00568b2c to 00568b33 has its CatchHandler @ 00568bb0 */
    rusqlite::error::decode_result_raw(&local_60,puVar3[2],iVar1);
    *puVar3 = *puVar3 - 1;
    if (local_60 == -1) {
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                ("called `Result::unwrap_err()` on an `Ok` value",0x2e,&uStack_1,&DAT_00ad0510,
                 &PTR_s__root__cargo_registry_src_index__00ad0548);
    }
    uStack_98 = uStack_58;
    local_a0 = local_60;
    uStack_88 = uStack_48;
    uStack_90 = uStack_50;
    uStack_78 = uStack_38;
    local_80 = local_40;
    uStack_68 = uStack_28;
    uStack_70 = uStack_30;
    if (local_60 != -1) {
      FUN_00568d98(&local_a0);
    }
  }
  return;
}


// ===== 00568bc0  FUN_00568bc0 =====

void FUN_00568bc0(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 00568bd8  FUN_00568bd8 =====

void FUN_00568bd8(ulong *param_1)

{
  int iVar1;
  long local_60 [8];
  
  if (0x7ffffffffffffffe < *param_1) {
                    /* WARNING: Subroutine does not return */
    core::cell::panic_already_mutably_borrowed(&PTR_s__root__cargo_registry_src_index__00ad0530);
  }
  *param_1 = *param_1 + 1;
  iVar1 = sqlite3_get_autocommit(param_1[2]);
  *param_1 = *param_1 - 1;
  if (iVar1 == 0) {
    <rusqlite::[1]::rusqlite::Connection>::execute_batch(local_60,param_1,&DAT_002a1278,8);
    if (local_60[0] != -1) {
      FUN_00568d98(local_60);
      return;
    }
  }
  return;
}


// ===== 00568c74  FUN_00568c74 =====

void FUN_00568c74(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong local_80 [3];
  undefined8 local_68;
  ulong local_60;
  undefined8 local_58;
  long lStack_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38 [2];
  long local_28;
  
                    /* try { // try from 00568c88 to 00568c8b has its CatchHandler @ 00568d50 */
  <rusqlite::raw_statement::RawStatement_as_core::ops::drop::Drop>::drop();
  lVar4 = *(long *)(param_1 + 8);
  if (lVar4 == 0) {
    local_40 = 0;
  }
  else {
    local_68 = *(undefined8 *)(param_1 + 0x10);
    local_40 = *(undefined8 *)(param_1 + 0x18);
    local_80[1] = 0;
    local_58 = 0;
    local_80[2] = lVar4;
    lStack_50 = lVar4;
    local_48 = local_68;
  }
  local_80[0] = (ulong)(lVar4 != 0);
                    /* try { // try from 00568cc0 to 00568ccb has its CatchHandler @ 00568d4c */
  local_60 = local_80[0];
  FUN_0055815c(local_38,local_80);
  while (local_38[0] != 0) {
    lVar4 = local_38[0] + local_28 * 0x20;
    if (0x10 < *(ulong *)(lVar4 + 0x18)) {
      free(*(void **)(lVar4 + 0x10));
    }
                    /* try { // try from 00568cd0 to 00568cdb has its CatchHandler @ 00568d60 */
    FUN_0055815c(local_38,local_80);
  }
  plVar3 = *(long **)(param_1 + 0x20);
  if (plVar3 != (long *)0x0) {
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow((undefined8 *)(param_1 + 0x20));
      return;
    }
  }
  return;
}


// ===== 00568d98  FUN_00568d98 =====

void FUN_00568d98(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  void *__ptr;
  
  uVar1 = *param_1;
  uVar2 = uVar1 ^ 0x8000000000000000;
  if (-1 < (long)uVar1) {
    uVar2 = 0x14;
  }
  if ((long)uVar2 < 7) {
    if ((long)uVar2 < 5) {
      if (uVar2 != 0) {
        if (uVar2 != 2) {
          return;
        }
        __ptr = (void *)param_1[1];
        puVar3 = (undefined8 *)param_1[2];
        if ((code *)*puVar3 != (code *)0x0) {
                    /* try { // try from 00568e38 to 00568e3f has its CatchHandler @ 00568ed8 */
          (*(code *)*puVar3)(__ptr);
        }
        goto LAB_00568eac;
      }
      if (param_1[1] == 0xffffffffffffffff) {
        return;
      }
      if (param_1[1] == 0) {
        return;
      }
      goto LAB_00568e70;
    }
    if ((uVar2 != 5) && (uVar2 != 6)) {
      return;
    }
  }
  else if ((long)uVar2 < 0xd) {
    if ((uVar2 != 7) && (uVar2 != 0xc)) {
      return;
    }
  }
  else if (uVar2 != 0xd) {
    if (uVar2 != 0xf) {
      if (uVar2 != 0x14) {
        return;
      }
      if (uVar1 != 0) {
        free((void *)param_1[1]);
      }
      if (param_1[3] == 0) {
        return;
      }
      free((void *)param_1[4]);
      return;
    }
    __ptr = (void *)param_1[1];
    puVar3 = (undefined8 *)param_1[2];
    if ((code *)*puVar3 != (code *)0x0) {
                    /* try { // try from 00568ea4 to 00568eab has its CatchHandler @ 00568ed4 */
      (*(code *)*puVar3)(__ptr);
    }
LAB_00568eac:
    if (puVar3[1] == 0) {
      return;
    }
    free(__ptr);
    return;
  }
  if (param_1[1] == 0) {
    return;
  }
LAB_00568e70:
  free((void *)param_1[2]);
  return;
}


// ===== 00568efc  FUN_00568efc =====

void FUN_00568efc(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong *puVar4;
  long local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  uVar2 = param_1[7];
  param_1[7] = 0;
  puVar4 = (ulong *)*param_1;
  plVar3 = param_1 + 1;
  uStack_68 = param_1[2];
  local_70 = *plVar3;
  uStack_58 = param_1[4];
  uStack_60 = param_1[3];
  uStack_48 = param_1[6];
  local_50 = param_1[5];
  param_1[2] = 0;
  *plVar3 = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  uVar1 = sqlite3_finalize(uVar2);
  local_40 = 0;
                    /* try { // try from 00568f48 to 00568f4f has its CatchHandler @ 00568fd8 */
  FUN_00568c74(&local_70);
  if (*puVar4 < 0x7fffffffffffffff) {
    *puVar4 = *puVar4 + 1;
                    /* try { // try from 00568f6c to 00568f77 has its CatchHandler @ 00568fc4 */
    rusqlite::error::decode_result_raw(&local_70,puVar4[2],uVar1);
    *puVar4 = *puVar4 - 1;
    if (local_70 != -1) {
                    /* try { // try from 00568f90 to 00568f97 has its CatchHandler @ 00568fd8 */
      FUN_00568d98(&local_70);
    }
    FUN_00568c74(plVar3);
    return;
  }
                    /* try { // try from 00568fb4 to 00568fbf has its CatchHandler @ 00568fd8 */
                    /* WARNING: Subroutine does not return */
  core::cell::panic_already_mutably_borrowed(&PTR_s__root__cargo_registry_src_index__00ad05a8);
}


// ===== 00568ff0  FUN_00568ff0 =====

void FUN_00568ff0(long *param_1)

{
  void *__ptr;
  void *pvVar1;
  long lVar2;
  
  if (*param_1 != -1) {
    FUN_00568d98(param_1);
    return;
  }
  __ptr = (void *)param_1[2];
  lVar2 = param_1[3] + 1;
  pvVar1 = __ptr;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 00569044 to 00569047 has its CatchHandler @ 0056908c */
    FUN_00564a20(pvVar1);
    pvVar1 = (void *)((long)pvVar1 + 0x40);
  }
  if (param_1[1] != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 005690d0  FUN_005690d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005690d0(undefined8 *param_1,long *param_2,long param_3,ulong param_4)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x20;
  long local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  ulong uStack_98;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulong uStack_48;
  
  if (*param_2 != 0) {
    core::cell::panic_already_borrowed(&PTR_s__root__cargo_registry_src_index__00ad05d8);
                    /* catch() { ... } // from try @ 0056910c with catch @ 005692d4 */
    *unaff_x20 = *unaff_x20 + 1;
                    /* WARNING: Subroutine does not return */
    FUN_00ab2530();
  }
  *param_2 = -1;
                    /* try { // try from 0056910c to 00569117 has its CatchHandler @ 005692d4 */
  <rusqlite::inner_connection::rusqlite::inner_connection::InnerConnection>::prepare
            (&local_88,param_2 + 1);
  uStack_c8 = uStack_78;
  local_d0 = local_80;
  uStack_b8 = uStack_68;
  uStack_c0 = local_70;
  uStack_a8 = uStack_58;
  local_b0 = local_60;
  local_a0 = local_50;
  if (local_88 == 0) {
    param_1[7] = local_50;
    param_1[8] = uStack_48;
    lVar2 = *param_2;
    param_1[2] = uStack_78;
    param_1[1] = local_80;
    param_1[4] = uStack_68;
    param_1[3] = local_70;
    param_1[6] = uStack_58;
    param_1[5] = local_60;
    *param_1 = 1;
    *param_2 = lVar2 + 1;
    return;
  }
  local_150 = local_88;
  local_118 = local_50;
  uStack_140 = uStack_78;
  uStack_148 = local_80;
  uStack_130 = uStack_68;
  local_138 = local_70;
  uStack_120 = uStack_58;
  local_128 = local_60;
  *param_2 = *param_2 + 1;
  if (uStack_48 != 0) {
    lVar2 = param_4 - uStack_48;
    if (param_4 < uStack_48 || lVar2 == 0) {
      if (lVar2 != 0) goto LAB_00569184;
    }
    else if (*(char *)(param_3 + uStack_48) + 0x40 < 0 !=
             SCARRY4((int)*(char *)(param_3 + uStack_48),0x40)) {
LAB_00569184:
                    /* try { // try from 00569184 to 0056925f has its CatchHandler @ 005692e4 */
                    /* WARNING: Subroutine does not return */
      core::str::slice_error_fail
                (param_3,param_4,uStack_48,param_4,&PTR_s__root__cargo_registry_src_index__00ad05c0)
      ;
    }
    FUN_005690d0(&local_88,param_2,param_3 + uStack_48,lVar2);
    uStack_c8 = uStack_78;
    local_d0 = local_80;
    uStack_b8 = uStack_68;
    uStack_c0 = local_70;
    uStack_a8 = uStack_58;
    local_b0 = local_60;
    uStack_98 = uStack_48;
    local_a0 = local_50;
    if (local_88 == 1) {
      *param_1 = 1;
      param_1[2] = uStack_78;
      param_1[1] = local_80;
      param_1[4] = uStack_68;
      param_1[3] = local_70;
      param_1[6] = uStack_58;
      param_1[5] = local_60;
      param_1[8] = uStack_48;
      param_1[7] = local_50;
    }
    else {
      uStack_e8 = uStack_58;
      local_f0 = local_60;
      local_d8 = uStack_48;
      uStack_e0 = local_50;
      uStack_108 = uStack_78;
      local_110 = local_80;
      uStack_f8 = uStack_68;
      uStack_100 = local_70;
      if (uStack_48 == 0) {
                    /* try { // try from 0056928c to 00569293 has its CatchHandler @ 005692e4 */
        FUN_00568efc(&local_110);
        goto LAB_00569294;
      }
      FUN_00568efc(&local_110);
      uVar1 = _DAT_0029f5d0;
      param_1[1] = _UNK_0029f5d8;
      *param_1 = uVar1;
    }
    FUN_00568efc(&local_150);
    return;
  }
LAB_00569294:
  *param_1 = 0;
  param_1[2] = uStack_148;
  param_1[1] = local_150;
  param_1[4] = local_138;
  param_1[3] = uStack_140;
  param_1[6] = local_128;
  param_1[5] = uStack_130;
  param_1[8] = local_118;
  param_1[7] = uStack_120;
  return;
}


// ===== 005692fc  FUN_005692fc =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005692fc(undefined8 *param_1,ulong *param_2,ulong *******param_3,ulong *******param_4,
                 long *param_5)

{
  long *plVar1;
  ulong ******ppppppuVar2;
  ulong ******ppppppuVar3;
  ulong ******__ptr;
  undefined7 uVar4;
  undefined1 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong *******pppppppuVar12;
  ulong *******__ptr_00;
  code *__ptr_01;
  undefined7 uVar13;
  undefined1 uVar14;
  undefined7 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined7 uVar18;
  undefined1 uVar19;
  undefined7 uVar20;
  undefined1 uVar21;
  undefined7 uVar22;
  undefined1 uVar23;
  undefined7 uVar24;
  undefined1 uVar25;
  undefined7 uVar26;
  undefined1 uVar27;
  undefined7 uVar28;
  int iVar29;
  ulong *******pppppppuVar30;
  long lVar31;
  ulong *******pppppppuVar32;
  ulong ******ppppppuVar33;
  ulong uVar34;
  ulong *******extraout_x9;
  ulong *******extraout_x9_00;
  ulong *******extraout_x9_01;
  ulong *******pppppppuVar35;
  ulong *******pppppppuVar36;
  ulong *******extraout_x11;
  ulong *******extraout_x11_00;
  ulong *******extraout_x11_01;
  ulong *******pppppppuVar37;
  long lVar38;
  ulong *******pppppppuVar39;
  undefined8 *puVar40;
  ulong *******pppppppuVar41;
  undefined8 uVar42;
  ulong *******pppppppuVar43;
  long lVar44;
  ulong *******pppppppuVar45;
  ulong *******pppppppuVar46;
  ulong *******pppppppuVar47;
  ulong *******pppppppuVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  ulong uVar52;
  ulong *******pppppppuVar53;
  ulong *****pppppuVar54;
  ulong *******local_2b0;
  ulong *******local_2a8;
  ulong *******local_2a0;
  ulong *******pppppppuStack_298;
  ulong *******local_290;
  ulong *******pppppppuStack_288;
  undefined8 local_280;
  ulong ******ppppppuStack_278;
  ulong *******pppppppuStack_270;
  ulong *******local_268;
  ulong *******local_260;
  ulong *******pppppppuStack_258;
  undefined8 uStack_250;
  undefined8 local_248;
  ulong *******local_240;
  ulong *******pppppppuStack_238;
  undefined8 local_230;
  ulong *******local_220;
  ulong *******pppppppuStack_218;
  undefined8 local_210;
  ulong *******local_208;
  undefined1 *puStack_200;
  ulong *******pppppppuStack_1f8;
  ulong *******local_188;
  code *local_180;
  undefined8 uStack_178;
  ulong *******local_170;
  ulong *******pppppppuStack_168;
  ulong *******local_160;
  ulong *******local_158;
  ulong *******local_150;
  ulong *******pppppppuStack_148;
  ulong *******local_140;
  undefined *puStack_138;
  ulong *******local_130;
  ulong *******pppppppuStack_128;
  ulong *******local_120;
  undefined7 uStack_118;
  undefined1 uStack_111;
  undefined7 local_110;
  undefined1 uStack_109;
  undefined7 local_108;
  undefined1 uStack_101;
  ulong *******pppppppuStack_100;
  ulong *******local_f8;
  ulong *******local_f0;
  ulong *******pppppppuStack_e8;
  undefined1 local_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 local_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  ulong *******pppppppuStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  ulong *******pppppppuStack_98;
  undefined1 auStack_81 [17];
  
  puVar6 = PTR_fmt_00b00d60;
  local_2b0 = param_3;
  local_2a8 = param_4;
  if (2 < *(ulong *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78) {
    local_130 = (ulong *******)&local_2b0;
    pppppppuStack_128 = (ulong *******)PTR_fmt_00b00d60;
    local_b0 = 0x11;
    local_a0 = &DAT_002ba985;
    uStack_d8 = (undefined1)_UNK_002a05b8;
    uStack_d7 = (undefined7)((ulong)_UNK_002a05b8 >> 8);
    local_e0 = (undefined1)_s___002a05b0;
    uStack_df = (undefined7)((ulong)_s___002a05b0 >> 8);
    local_f0 = (ulong *******)0x0;
    pppppppuStack_e8 = (ulong *******)0x2c32a0;
    uStack_c0 = (undefined1)_UNK_0029fda8;
    uStack_bf = (undefined7)((ulong)_UNK_0029fda8 >> 8);
    uStack_c8 = (undefined1)_DAT_0029fda0;
    uStack_c7 = (undefined7)((ulong)_DAT_0029fda0 >> 8);
    pppppppuStack_b8 = (ulong *******)0x2c328f;
    local_d0 = 0xf4;
    uStack_cf = 0x2b05;
    local_a8 = DAT_002a17e8;
    pppppppuStack_98 = (ulong *******)&local_130;
    <log::__private_api::GlobalLogger_as_log::Log>::log(auStack_81,&local_f0);
  }
  <rusqlite::[1]::rusqlite::Connection>::execute_batch
            (&local_f0,param_2,(&PTR_s_BEGIN_DEFERRED_00ad08e0)[(byte)param_2[0xd]],
             *(undefined8 *)(&DAT_002c36d8 + (ulong)(byte)param_2[0xd] * 8));
  pppppppuVar47 = local_2a8;
  pppppppuVar30 = local_2b0;
  if (local_f0 != (ulong *******)0xffffffffffffffff) {
    local_120 = (ulong *******)CONCAT17(uStack_c8,uStack_cf);
    uStack_109 = SUB81(pppppppuStack_b8,0);
    local_108 = (undefined7)((ulong)pppppppuStack_b8 >> 8);
    local_110 = uStack_bf;
    pppppppuStack_128 = (ulong *******)CONCAT17(local_d0,uStack_d7);
    local_130 = (ulong *******)CONCAT17(uStack_d8,uStack_df);
    uStack_118 = uStack_c7;
    uStack_111 = uStack_c0;
                    /* try { // try from 0056ab70 to 0056ab93 has its CatchHandler @ 0056acac */
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              ("called `Result::unwrap()` on an `Err` value",0x2b,&local_f0,&PTR_FUN_00ad04f0,
               &PTR_s_mobile_flux_src_persistence_migr_00ad0608);
  }
  local_f0 = (ulong *******)&local_2a0;
  pppppppuStack_e8 = (ulong *******)puVar6;
  local_2a0 = local_2b0;
  pppppppuStack_298 = local_2a8;
                    /* try { // try from 00569408 to 0056941f has its CatchHandler @ 0056aca4 */
  alloc::fmt::format::format_inner(&local_130,&DAT_002b2ea9,&local_f0);
  pppppppuVar32 = pppppppuStack_128;
                    /* try { // try from 00569424 to 00569433 has its CatchHandler @ 0056ac88 */
  FUN_0056aee4(&local_f0,param_2,pppppppuStack_128,local_120);
  if (local_130 != (ulong *******)0x0) {
    free(pppppppuVar32);
  }
  ppppppuVar2 = (ulong ******)*param_5;
  lVar38 = param_5[1];
  lVar31 = param_5[3];
  if (lVar31 != 0) {
    ppppppuVar33 = ppppppuVar2 + 1;
    uVar52 = NEON_cmge(*ppppppuVar2,0,1);
    uVar52 = uVar52 & 0x8080808080808080;
    ppppppuVar3 = ppppppuVar2;
    lVar49 = lVar31;
    do {
      for (; uVar52 == 0; uVar52 = uVar52 & 0x8080808080808080) {
        uVar52 = NEON_cmge(*ppppppuVar33,0,1);
        ppppppuVar3 = ppppppuVar3 + -0x38;
        ppppppuVar33 = ppppppuVar33 + 1;
      }
      uVar34 = (uVar52 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar52 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar34 = (uVar34 & 0xffff0000ffff0000) >> 0x10 | (uVar34 & 0xffff0000ffff) << 0x10;
                    /* try { // try from 005694d4 to 005694e3 has its CatchHandler @ 0056ae74 */
      <flux::persistence::schema::[5]::flux::persistence::schema::TableDefinition>::table_name
                (&local_130,
                 ppppppuVar3 +
                 (long)-(int)((ulong)LZCOUNT(uVar34 >> 0x20 | uVar34 << 0x20) >> 3) * 7 + -5,
                 pppppppuVar30,pppppppuVar47);
      uVar34 = 0;
      pppppppuStack_298 = pppppppuStack_128;
      local_2a0 = local_130;
      local_290 = local_120;
      pppppppuVar35 = pppppppuStack_128;
      for (pppppppuVar32 = local_120; &DAT_00000007 < pppppppuVar32;
          pppppppuVar32 = pppppppuVar32 + -1) {
        uVar34 = ((ulong)*pppppppuVar35 ^ (uVar34 >> 0x3b | uVar34 << 5)) * 0x517cc1b727220a95;
        pppppppuVar35 = pppppppuVar35 + 1;
      }
      pppppppuVar36 = pppppppuVar35;
      if ((ulong *******)0x3 < pppppppuVar32) {
        pppppppuVar36 = (ulong *******)((long)pppppppuVar35 + 4);
        pppppppuVar32 = (ulong *******)((long)pppppppuVar32 + -4);
        uVar34 = ((ulong)*(uint *)pppppppuVar35 ^ (uVar34 >> 0x3b | uVar34 << 5)) *
                 0x517cc1b727220a95;
      }
      for (; pppppppuVar32 != (ulong *******)0x0;
          pppppppuVar32 = (ulong *******)((long)pppppppuVar32 + -1)) {
        uVar34 = ((ulong)*(byte *)pppppppuVar36 ^ (uVar34 >> 0x3b | uVar34 << 5)) *
                 0x517cc1b727220a95;
        pppppppuVar36 = (ulong *******)((long)pppppppuVar36 + 1);
      }
                    /* try { // try from 0056955c to 0056956b has its CatchHandler @ 0056ae7c */
      FUN_0055d0c4(&local_130,&local_f0,((uVar34 >> 0x3b | uVar34 << 5) ^ 0xff) * 0x517cc1b727220a95
                   ,&local_2a0);
      if ((local_130 != (ulong *******)0xffffffffffffffff) && (local_130 != (ulong *******)0x0)) {
        free(pppppppuStack_128);
      }
      if (local_2a0 != (ulong *******)0x0) {
        free(pppppppuStack_298);
      }
      lVar49 = lVar49 + -1;
      uVar52 = uVar52 - 1 & uVar52;
    } while (lVar49 != 0);
  }
  local_208 = (ulong *******)CONCAT71(uStack_d7,uStack_d8);
  local_210 = CONCAT71(uStack_df,local_e0);
  pppppppuStack_218 = pppppppuStack_e8;
  local_220 = local_f0;
                    /* try { // try from 005695a8 to 005695c3 has its CatchHandler @ 0056ad48 */
  <flux::persistence::schema::[9]::flux::persistence::schema::SchemaDefinition>::compute_migrations
            (&local_f0,param_5,param_2,pppppppuVar30,pppppppuVar47);
  uVar22 = uStack_df;
  uVar21 = local_e0;
  uVar11 = DAT_002a1648;
  uVar10 = DAT_002a14a0;
  uVar9 = _UNK_002a05b8;
  uVar8 = _s___002a05b0;
  uVar7 = _UNK_0029fda8;
  uVar42 = _DAT_0029fda0;
  pppppppuVar32 = (ulong *******)CONCAT71(uStack_df,local_e0);
  lVar49 = CONCAT71(uStack_d7,uStack_d8);
  local_e0 = SUB81(ppppppuVar2 + 1,0);
  uVar17 = local_e0;
  uStack_df = (undefined7)((ulong)(ppppppuVar2 + 1) >> 8);
  uVar18 = uStack_df;
  local_e0 = uVar21;
  uStack_df = uVar22;
  if (local_f0 == (ulong *******)&DAT_fffffffffffffffe) {
    pppppppuVar35 = pppppppuVar32 + lVar49 * 9;
    local_290 = pppppppuStack_e8;
    local_2a0 = pppppppuVar32;
    pppppppuStack_298 = pppppppuVar32;
    pppppppuStack_288 = pppppppuVar35;
    if (lVar49 != 0) {
      do {
        uVar28 = uStack_bf;
        uVar27 = uStack_c0;
        uVar26 = uStack_c7;
        uVar25 = uStack_c8;
        uVar24 = uStack_d7;
        uVar23 = uStack_d8;
        uVar22 = uStack_df;
        uVar21 = local_e0;
        pppppppuVar36 = pppppppuVar32 + 9;
        pppppppuVar39 = (ulong *******)pppppppuVar32[2];
        ppppppuVar3 = pppppppuVar32[3];
        ppppppuVar33 = pppppppuVar32[4];
        __ptr = pppppppuVar32[5];
        pppppppuVar48 = (ulong *******)pppppppuVar32[1];
        local_e0 = (undefined1)uVar8;
        uVar5 = local_e0;
        uStack_df = (undefined7)((ulong)uVar8 >> 8);
        uVar4 = uStack_df;
        uStack_d8 = (undefined1)uVar9;
        uVar14 = uStack_d8;
        uStack_d7 = (undefined7)((ulong)uVar9 >> 8);
        uVar13 = uStack_d7;
        uStack_c8 = (undefined1)uVar42;
        uVar16 = uStack_c8;
        uStack_c7 = (undefined7)((ulong)uVar42 >> 8);
        uVar15 = uStack_c7;
        uStack_c0 = (undefined1)uVar7;
        uVar19 = uStack_c0;
        uStack_bf = (undefined7)((ulong)uVar7 >> 8);
        uVar20 = uStack_bf;
        pppppppuStack_298 = pppppppuVar36;
        if (*pppppppuVar32 == (ulong ******)0x0) {
          if (2 < *(ulong *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78) {
            local_130 = (ulong *******)&local_260;
            pppppppuStack_128 = (ulong *******)FUN_00570bb4;
            local_b0 = 0x11;
            pppppppuStack_98 = (ulong *******)&local_130;
            local_a0 = &DAT_002afa3e;
            local_f0 = (ulong *******)0x0;
            pppppppuStack_e8 = (ulong *******)0x2c32a0;
            pppppppuStack_b8 = (ulong *******)0x2c328f;
            local_d0 = 0xf4;
            uStack_cf = 0x2b05;
            local_a8 = uVar10;
                    /* try { // try from 005697e8 to 00569807 has its CatchHandler @ 0056ad24 */
            local_260 = pppppppuVar39;
            pppppppuStack_258 = (ulong *******)ppppppuVar3;
            <log::__private_api::GlobalLogger_as_log::Log>::log(auStack_81,&local_f0);
            uVar21 = local_e0;
            uVar22 = uStack_df;
            uVar23 = uStack_d8;
            uVar24 = uStack_d7;
            uVar25 = uStack_c8;
            uVar26 = uStack_c7;
            uVar27 = uStack_c0;
            uVar28 = uStack_bf;
          }
          uStack_bf = uVar28;
          uStack_c0 = uVar27;
          uStack_c7 = uVar26;
          uStack_c8 = uVar25;
          uStack_d7 = uVar24;
          uStack_d8 = uVar23;
          uStack_df = uVar22;
          local_e0 = uVar21;
          FUN_00568898(&local_f0,param_2,pppppppuVar39,ppppppuVar3);
          pppppppuVar41 = pppppppuStack_e8;
          pppppppuVar46 = local_f0;
          if (local_f0 == (ulong *******)0xffffffffffffffff) goto joined_r0x00569818;
          pppppppuVar32 = (ulong *******)CONCAT71(uStack_df,local_e0);
          pppppppuStack_168 = (ulong *******)CONCAT71(uStack_bf,uStack_c0);
          local_170 = (ulong *******)CONCAT71(uStack_c7,uStack_c8);
          lVar49 = CONCAT71(uStack_d7,uStack_d8);
          uVar42 = CONCAT71(uStack_cf,local_d0);
          local_160 = pppppppuStack_b8;
          if (pppppppuVar48 != (ulong *******)0x0) {
            free(pppppppuVar39);
          }
LAB_00569ba8:
          if (ppppppuVar33 != (ulong ******)0x0) {
            free(__ptr);
          }
          FUN_005659e0(&local_2a0);
          pppppppuVar35 = (ulong *******)PTR_fmt_00b00d60;
          pppppppuVar30 = pppppppuStack_218;
          goto joined_r0x00569bcc;
        }
        local_e0 = uVar21;
        uStack_df = uVar22;
        uStack_d8 = uVar23;
        uStack_d7 = uVar24;
        uStack_c8 = uVar25;
        uStack_c7 = uVar26;
        uStack_c0 = uVar27;
        uStack_bf = uVar28;
        if (*pppppppuVar32 == (ulong ******)0x2) break;
        lVar44 = (long)ppppppuVar3 * 0x18;
        pppppppuVar32 = pppppppuVar39 + (long)ppppppuVar3 * 3;
        uStack_118 = SUB87(pppppppuVar32,0);
        uStack_111 = (undefined1)((ulong)pppppppuVar32 >> 0x38);
        pppppppuVar46 = pppppppuVar39;
        local_130 = pppppppuVar39;
        local_120 = pppppppuVar48;
        if (ppppppuVar3 != (ulong ******)0x0) {
          lVar50 = 0;
          pppppppuStack_128 = pppppppuVar39;
          do {
            plVar1 = (long *)((long)pppppppuVar39 + lVar50);
            lVar51 = *plVar1;
            if (lVar51 == -1) {
              pppppppuVar46 = (ulong *******)(plVar1 + 3);
              break;
            }
            pppppppuVar53 = (ulong *******)plVar1[1];
            pppppppuVar46 = (ulong *******)plVar1[2];
            if (2 < *(ulong *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78) {
              local_260 = (ulong *******)&local_158;
              pppppppuStack_258 = (ulong *******)FUN_00570bb4;
              local_b0 = 0x11;
              pppppppuStack_98 = (ulong *******)&local_260;
              local_a0 = &DAT_002afa3e;
              local_f0 = (ulong *******)0x0;
              pppppppuStack_e8 = (ulong *******)0x2c32a0;
              pppppppuStack_b8 = (ulong *******)0x2c328f;
              local_d0 = 0xf4;
              uStack_cf = 0x2b05;
              local_a8 = uVar11;
                    /* try { // try from 00569728 to 00569747 has its CatchHandler @ 0056ae00 */
              local_158 = pppppppuVar53;
              local_150 = pppppppuVar46;
              local_e0 = uVar5;
              uStack_df = uVar4;
              uStack_d8 = uVar14;
              uStack_d7 = uVar13;
              uStack_c8 = uVar16;
              uStack_c7 = uVar15;
              uStack_c0 = uVar19;
              uStack_bf = uVar20;
              <log::__private_api::GlobalLogger_as_log::Log>::log(auStack_81,&local_f0);
            }
            FUN_00568898(&local_f0,param_2,pppppppuVar53,pppppppuVar46);
            pppppppuVar41 = pppppppuStack_e8;
            pppppppuVar46 = local_f0;
            if (local_f0 != (ulong *******)0xffffffffffffffff) {
              lVar49 = CONCAT71(uStack_d7,uStack_d8);
              uVar42 = CONCAT71(uStack_cf,local_d0);
              pppppppuStack_168 = (ulong *******)CONCAT71(uStack_bf,uStack_c0);
              local_170 = (ulong *******)CONCAT71(uStack_c7,uStack_c8);
              pppppppuVar32 = (ulong *******)CONCAT71(uStack_df,local_e0);
              local_160 = pppppppuStack_b8;
              if (lVar51 != 0) {
                free(pppppppuVar53);
              }
              if (lVar44 + -0x18 != lVar50) {
                puVar40 = (undefined8 *)((long)pppppppuVar39 + lVar50 + 0x20);
                uVar52 = ((lVar44 - lVar50) - 0x18U) / 0x18;
                do {
                  if (puVar40[-1] != 0) {
                    free((void *)*puVar40);
                  }
                  uVar52 = uVar52 - 1;
                  puVar40 = puVar40 + 3;
                } while (uVar52 != 0);
              }
              if (pppppppuVar48 != (ulong *******)0x0) {
                free(pppppppuVar39);
              }
              goto LAB_00569ba8;
            }
            if (lVar51 != 0) {
              free(pppppppuVar53);
            }
            lVar50 = lVar50 + 0x18;
            pppppppuVar46 = pppppppuVar32;
          } while (lVar44 - lVar50 != 0);
        }
        pppppppuStack_128 = pppppppuVar46;
        if ((long)pppppppuVar32 - (long)pppppppuVar46 != 0) {
          pppppppuVar41 = pppppppuVar46 + 1;
          uVar52 = (ulong)((long)pppppppuVar32 - (long)pppppppuVar46) / 0x18;
          do {
            if (pppppppuVar41[-1] != (ulong ******)0x0) {
              free(*pppppppuVar41);
            }
            uVar52 = uVar52 - 1;
            pppppppuVar41 = pppppppuVar41 + 3;
          } while (uVar52 != 0);
        }
joined_r0x00569818:
        if (pppppppuVar48 != (ulong *******)0x0) {
          free(pppppppuVar39);
        }
        if (ppppppuVar33 != (ulong ******)0x0) {
          free(__ptr);
        }
        pppppppuVar32 = pppppppuVar36;
      } while (pppppppuVar36 != pppppppuVar35);
    }
                    /* try { // try from 00569a04 to 00569bc3 has its CatchHandler @ 0056ad48 */
    FUN_005659e0(&local_2a0);
    pppppppuVar36 = local_208;
    if (local_208 != (ulong *******)0x0) {
      pppppppuVar39 = extraout_x9;
      pppppppuVar48 = extraout_x11;
      if (2 < *(ulong *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78) {
        local_2a0 = local_208;
        local_130 = (ulong *******)&local_2a0;
        pppppppuStack_128 = (ulong *******)PTR_fmt_00b00c10;
        local_120 = (ulong *******)&local_220;
        uStack_d8 = (undefined1)_UNK_002a05b8;
        uStack_d7 = (undefined7)((ulong)_UNK_002a05b8 >> 8);
        local_e0 = (undefined1)_s___002a05b0;
        uStack_df = (undefined7)((ulong)_s___002a05b0 >> 8);
        uStack_118 = 0x564784;
        uStack_111 = 0;
        pppppppuStack_98 = (ulong *******)&local_130;
        local_b0 = 0x11;
        local_a0 = &DAT_002ad09d;
        local_f0 = (ulong *******)0x0;
        pppppppuStack_e8 = (ulong *******)0x2c32a0;
        uStack_c0 = (undefined1)_UNK_0029fda8;
        uStack_bf = (undefined7)((ulong)_UNK_0029fda8 >> 8);
        uStack_c8 = (undefined1)_DAT_0029fda0;
        uStack_c7 = (undefined7)((ulong)_DAT_0029fda0 >> 8);
        pppppppuStack_b8 = (ulong *******)0x2c328f;
        local_d0 = 0xf4;
        uStack_cf = 0x2b05;
        local_a8 = DAT_002a1a20;
        <log::__private_api::GlobalLogger_as_log::Log>::log(auStack_81,&local_f0);
        pppppppuVar39 = extraout_x9_00;
        pppppppuVar48 = extraout_x11_00;
      }
      pppppppuVar53 = pppppppuStack_218;
      if (pppppppuStack_218 == (ulong *******)0x0) {
        local_130 = (ulong *******)0x0;
      }
      else {
        pppppppuVar39 = (ulong *******)((long)pppppppuStack_218 * 0x19 + 0x21);
        pppppppuVar48 = local_220 + (long)pppppppuStack_218 * -3 + -3;
        local_130 = (ulong *******)&DAT_00000008;
      }
      uVar52 = NEON_cmge(*local_220,0,1);
      pppppppuVar37 = local_220 + 1;
      uStack_118 = SUB87(local_220,0);
      uStack_111 = (undefined1)((ulong)local_220 >> 0x38);
      uVar52 = uVar52 & 0x8080808080808080;
      pppppppuStack_100 =
           (ulong *******)((undefined1 *)((long)local_220 + (long)pppppppuStack_218) + 1);
      local_110 = (undefined7)uVar52;
      uStack_109 = (undefined1)(uVar52 >> 0x38);
      local_108 = SUB87(pppppppuVar37,0);
      uStack_101 = (undefined1)((ulong)pppppppuVar37 >> 0x38);
      pppppppuStack_128 = pppppppuVar39;
      local_120 = pppppppuVar48;
      local_f8 = local_208;
      pppppppuVar43 = local_220;
      pppppppuVar45 = local_208;
      pppppppuVar32 = local_158;
      pppppppuVar35 = local_150;
      pppppppuVar46 = pppppppuStack_148;
      uVar22 = uStack_118;
      uVar21 = uStack_111;
      uVar4 = local_110;
      uVar5 = uStack_109;
      uVar24 = local_108;
      uVar23 = uStack_101;
joined_r0x00569c2c:
      local_158 = pppppppuVar32;
      local_150 = pppppppuVar35;
      pppppppuStack_148 = pppppppuVar46;
      uStack_118 = uVar22;
      uStack_111 = uVar21;
      local_110 = uVar4;
      uStack_109 = uVar5;
      local_108 = uVar24;
      uStack_101 = uVar23;
      if (pppppppuVar45 != (ulong *******)0x0) {
        for (; uVar52 == 0; uVar52 = uVar52 & 0x8080808080808080) {
          pppppppuVar43 = pppppppuVar43 + -0x18;
          uVar52 = NEON_cmge(*pppppppuVar37,0,1);
          pppppppuVar37 = pppppppuVar37 + 1;
        }
        uVar34 = (uVar52 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar52 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar34 = (uVar34 & 0xffff0000ffff0000) >> 0x10 | (uVar34 & 0xffff0000ffff) << 0x10;
        pppppppuVar45 = (ulong *******)((long)pppppppuVar45 + -1);
        iVar29 = (int)((ulong)LZCOUNT(uVar34 >> 0x20 | uVar34 << 0x20) >> 3);
        local_158 = (ulong *******)pppppppuVar43[(long)-iVar29 * 3 + -3];
        pppppppuStack_148 = (ulong *******)pppppppuVar43[(long)-iVar29 * 3 + -1];
        local_150 = (ulong *******)pppppppuVar43[(long)-iVar29 * 3 + -2];
        uVar52 = uVar52 - 1 & uVar52;
        uStack_111 = (undefined1)((ulong)pppppppuVar43 >> 0x38);
        uVar14 = uStack_111;
        uStack_118 = SUB87(pppppppuVar43,0);
        uVar13 = uStack_118;
        uStack_109 = (undefined1)(uVar52 >> 0x38);
        uVar25 = uStack_109;
        local_110 = (undefined7)uVar52;
        uVar26 = local_110;
        uStack_101 = (undefined1)((ulong)pppppppuVar37 >> 0x38);
        uVar16 = uStack_101;
        local_108 = SUB87(pppppppuVar37,0);
        uVar15 = local_108;
        pppppppuVar41 = pppppppuVar45;
        local_f0 = local_150;
        pppppppuStack_e8 = pppppppuStack_148;
        if (local_158 != (ulong *******)0xffffffffffffffff) {
                    /* try { // try from 00569ca0 to 00569cab has its CatchHandler @ 0056acc0 */
          uStack_118 = uVar22;
          uStack_111 = uVar21;
          local_110 = uVar4;
          uStack_109 = uVar5;
          local_108 = uVar24;
          uStack_101 = uVar23;
          FUN_0055f294(&local_2a0,&local_158);
          local_188 = (ulong *******)&local_2a0;
          local_180 = FUN_0056bb44;
                    /* try { // try from 00569cc0 to 00569ccf has its CatchHandler @ 0056acf4 */
          alloc::fmt::format::format_inner(&local_260,&DAT_002ad0b6,&local_188);
          if (local_2a0 != (ulong *******)0x0) {
            free(pppppppuStack_298);
          }
          __ptr_00 = pppppppuStack_258;
          pppppppuVar12 = local_260;
                    /* try { // try from 00569cec to 00569cfb has its CatchHandler @ 0056acd4 */
          FUN_00568898(&local_f0,param_2,pppppppuStack_258,uStack_250);
          pppppppuVar41 = pppppppuStack_e8;
          pppppppuVar46 = local_f0;
          if (local_f0 == (ulong *******)0xffffffffffffffff) goto code_r0x00569d08;
          pppppppuVar32 = (ulong *******)CONCAT71(uStack_df,local_e0);
          lVar49 = CONCAT71(uStack_d7,uStack_d8);
          uVar42 = CONCAT71(uStack_cf,local_d0);
          pppppppuStack_168 = (ulong *******)CONCAT71(uStack_bf,uStack_c0);
          local_170 = (ulong *******)CONCAT71(uStack_c7,uStack_c8);
          local_160 = pppppppuStack_b8;
          puVar6 = PTR_fmt_00b00d60;
          uStack_118 = uVar13;
          uStack_111 = uVar14;
          local_110 = uVar26;
          uStack_109 = uVar25;
          local_108 = uVar15;
          uStack_101 = uVar16;
          local_f8 = pppppppuVar45;
          if (pppppppuVar12 != (ulong *******)0x0) {
            free(__ptr_00);
            puVar6 = PTR_fmt_00b00d60;
          }
          for (; pppppppuVar35 = (ulong *******)PTR_fmt_00b00d60, PTR_fmt_00b00d60 = puVar6,
              pppppppuVar45 != (ulong *******)0x0;
              pppppppuVar45 = (ulong *******)((long)pppppppuVar45 + -1)) {
            for (; uVar52 == 0; uVar52 = uVar52 & 0x8080808080808080) {
              pppppppuVar43 = pppppppuVar43 + -0x18;
              uVar52 = NEON_cmge(*pppppppuVar37,0,1);
              pppppppuVar37 = pppppppuVar37 + 1;
            }
            uVar34 = (uVar52 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar52 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar34 = (uVar34 & 0xffff0000ffff0000) >> 0x10 | (uVar34 & 0xffff0000ffff) << 0x10;
            iVar29 = (int)((ulong)LZCOUNT(uVar34 >> 0x20 | uVar34 << 0x20) >> 3);
            if (pppppppuVar43[(long)-iVar29 * 3 + -3] != (ulong ******)0x0) {
              free(pppppppuVar43[(long)-iVar29 * 3 + -2]);
            }
            uVar52 = uVar52 - 1 & uVar52;
            puVar6 = PTR_fmt_00b00d60;
            PTR_fmt_00b00d60 = (undefined *)pppppppuVar35;
          }
          if ((pppppppuVar53 != (ulong *******)0x0) && (pppppppuVar39 != (ulong *******)0x0)) {
            free(pppppppuVar48);
          }
          uVar52 = *param_2;
          goto joined_r0x005699b0;
        }
        for (; local_158 = pppppppuVar32, local_150 = pppppppuVar35,
            pppppppuStack_148 = pppppppuVar46, local_f8 = pppppppuVar41,
            pppppppuVar45 != (ulong *******)0x0;
            pppppppuVar45 = (ulong *******)((long)pppppppuVar45 + -1)) {
          for (; uVar52 == 0; uVar52 = uVar52 & 0x8080808080808080) {
            pppppppuVar43 = pppppppuVar43 + -0x18;
            uVar52 = NEON_cmge(*pppppppuVar37,0,1);
            pppppppuVar37 = pppppppuVar37 + 1;
          }
          uVar34 = (uVar52 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar52 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar34 = (uVar34 & 0xffff0000ffff0000) >> 0x10 | (uVar34 & 0xffff0000ffff) << 0x10;
          iVar29 = (int)((ulong)LZCOUNT(uVar34 >> 0x20 | uVar34 << 0x20) >> 3);
          if (pppppppuVar43[(long)-iVar29 * 3 + -3] != (ulong ******)0x0) {
            free(pppppppuVar43[(long)-iVar29 * 3 + -2]);
          }
          uVar52 = uVar52 - 1 & uVar52;
          pppppppuVar41 = local_f8;
          pppppppuVar46 = pppppppuStack_148;
          pppppppuVar35 = local_150;
          pppppppuVar32 = local_158;
        }
      }
      if ((pppppppuVar53 != (ulong *******)0x0) && (pppppppuVar39 != (ulong *******)0x0)) {
        free(pppppppuVar48);
      }
    }
                    /* try { // try from 00569d3c to 00569d53 has its CatchHandler @ 0056ac40 */
    <rusqlite::[1]::rusqlite::Connection>::execute_batch(&local_130,param_2,"COMMIT",6);
    pppppppuVar35 = (ulong *******)PTR_fmt_00b00d60;
    if (0x7ffffffffffffffe < *param_2) {
                    /* try { // try from 0056aae4 to 0056aaef has its CatchHandler @ 0056aea4 */
                    /* WARNING: Subroutine does not return */
      core::cell::panic_already_mutably_borrowed(&PTR_s__root__cargo_registry_src_index__00ad0530);
    }
    *param_2 = *param_2 + 1;
    iVar29 = sqlite3_get_autocommit(param_2[2]);
    *param_2 = *param_2 - 1;
                    /* try { // try from 00569d8c to 00569db7 has its CatchHandler @ 0056aea4 */
    if ((iVar29 == 0) &&
       (<rusqlite::[1]::rusqlite::Connection>::execute_batch(&local_f0,param_2,&DAT_002a1278,8),
       local_f0 != (ulong *******)0xffffffffffffffff)) {
      FUN_00568d98(&local_f0);
    }
    pppppppuVar32 = local_120;
    pppppppuVar41 = pppppppuStack_128;
    pppppppuVar46 = local_130;
    pppppppuVar39 = pppppppuStack_218;
    if (local_130 == (ulong *******)0xffffffffffffffff) {
      local_260 = pppppppuVar30;
      pppppppuStack_258 = pppppppuVar47;
      pppppuVar54 = *ppppppuVar2;
      pppppppuStack_128 = (ulong *******)_UNK_00acfe08;
      local_130 = (ulong *******)PTR_DAT_00acfe00;
      uStack_118 = (undefined7)_UNK_00acfe18;
      uStack_111 = (undefined1)((ulong)_UNK_00acfe18 >> 0x38);
      local_120 = (ulong *******)_DAT_00acfe10;
      if (lVar31 != 0) {
                    /* try { // try from 0056ab18 to 0056ab2f has its CatchHandler @ 0056ac08 */
        <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(flux[2406cd06d16b4816]::persistence::schema::TableAlias,flux[2406cd06d16b4816]::persistence::schema::TableName)>>
        ::reserve_rehash::
        <hashbrown[32fc5d502e7f9af5]::map::make_hasher<flux[2406cd06d16b4816]::persistence::schema::TableAlias,flux[2406cd06d16b4816]::persistence::schema::TableName,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
                  (&local_130,lVar31,&local_110,1);
      }
      uVar52 = NEON_cmge(pppppuVar54,0,1);
      local_2a0 = (ulong *******)&local_130;
      pppppppuStack_298 = (ulong *******)&local_260;
      pppppppuStack_e8 = (ulong *******)(uVar52 & 0x8080808080808080);
      lVar38 = (long)ppppppuVar2 + lVar38 + 1;
      uStack_d8 = (undefined1)lVar38;
      uStack_d7 = (undefined7)((ulong)lVar38 >> 8);
                    /* try { // try from 0056a6e4 to 0056a6ef has its CatchHandler @ 0056ac08 */
      local_f0 = (ulong *******)ppppppuVar2;
      local_e0 = uVar17;
      uStack_df = uVar18;
      FUN_0055d61c(&local_f0,lVar31,&local_2a0);
      uVar21 = uStack_111;
      uVar22 = uStack_118;
      pppppppuVar39 = local_120;
      pppppppuVar32 = pppppppuStack_128;
      pppppppuVar47 = local_130;
      pppppppuVar30 = pppppppuStack_218;
      if ((pppppppuVar36 == (ulong *******)0x0) && (pppppppuStack_218 != (ulong *******)0x0)) {
        if (local_208 != (ulong *******)0x0) {
          pppppppuVar36 = local_220 + 1;
          uVar52 = NEON_cmge(*local_220,0,1);
          uVar52 = uVar52 & 0x8080808080808080;
          pppppppuVar35 = local_220;
          pppppppuVar48 = local_208;
          do {
            for (; uVar52 == 0; uVar52 = uVar52 & 0x8080808080808080) {
              uVar52 = NEON_cmge(*pppppppuVar36,0,1);
              pppppppuVar35 = pppppppuVar35 + -0x18;
              pppppppuVar36 = pppppppuVar36 + 1;
            }
            uVar34 = (uVar52 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar52 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar34 = (uVar34 & 0xffff0000ffff0000) >> 0x10 | (uVar34 & 0xffff0000ffff) << 0x10;
            iVar29 = (int)((ulong)LZCOUNT(uVar34 >> 0x20 | uVar34 << 0x20) >> 3);
            if (pppppppuVar35[(long)-iVar29 * 3 + -3] != (ulong ******)0x0) {
              free(pppppppuVar35[(long)-iVar29 * 3 + -2]);
            }
            pppppppuVar48 = (ulong *******)((long)pppppppuVar48 + -1);
            uVar52 = uVar52 - 1 & uVar52;
          } while (pppppppuVar48 != (ulong *******)0x0);
        }
        pppppppuVar35 = (ulong *******)PTR_fmt_00b00d60;
        if ((long)pppppppuVar30 * 0x19 != -0x21) {
          free(local_220 + (long)pppppppuVar30 * -3 + -3);
        }
      }
      local_130 = pppppppuVar47;
      pppppppuStack_128 = pppppppuVar32;
      local_120 = pppppppuVar39;
      uStack_118 = uVar22;
      uStack_111 = uVar21;
      if (2 < *(ulong *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78) {
        local_2a0 = (ulong *******)&local_2b0;
        pppppppuStack_98 = (ulong *******)&local_2a0;
        local_b0 = 0x11;
        local_a0 = &DAT_002a3716;
        uStack_d8 = (undefined1)_UNK_002a05b8;
        uStack_d7 = (undefined7)((ulong)_UNK_002a05b8 >> 8);
        local_e0 = (undefined1)_s___002a05b0;
        uStack_df = (undefined7)((ulong)_s___002a05b0 >> 8);
        local_f0 = (ulong *******)0x0;
        pppppppuStack_e8 = (ulong *******)0x2c32a0;
        uStack_c0 = (undefined1)_UNK_0029fda8;
        uStack_bf = (undefined7)((ulong)_UNK_0029fda8 >> 8);
        uStack_c8 = (undefined1)_DAT_0029fda0;
        uStack_c7 = (undefined7)((ulong)_DAT_0029fda0 >> 8);
        pppppppuStack_b8 = (ulong *******)0x2c328f;
        local_d0 = 0xf4;
        uStack_cf = 0x2b05;
        local_a8 = DAT_002a1830;
                    /* try { // try from 0056a784 to 0056a78f has its CatchHandler @ 0056abf8 */
        pppppppuStack_298 = pppppppuVar35;
        <log::__private_api::GlobalLogger_as_log::Log>::log(auStack_81,&local_f0);
      }
      param_1[9] = pppppppuStack_128;
      param_1[8] = local_130;
      param_1[0xb] = CONCAT17(uStack_111,uStack_118);
      param_1[10] = local_120;
      *param_1 = 0xfffffffffffffffe;
      return;
    }
    lVar49 = CONCAT17(uStack_111,uStack_118);
    uVar42 = CONCAT17(uStack_109,local_110);
    local_170 = (ulong *******)CONCAT17(uStack_101,local_108);
    pppppppuStack_168 = pppppppuStack_100;
    local_160 = local_f8;
    if ((pppppppuVar36 == (ulong *******)0x0) && (pppppppuStack_218 != (ulong *******)0x0)) {
      if (local_208 != (ulong *******)0x0) {
        pppppppuVar47 = local_220 + 1;
        uVar52 = NEON_cmge(*local_220,0,1);
        uVar52 = uVar52 & 0x8080808080808080;
        pppppppuVar30 = local_220;
        pppppppuVar36 = local_208;
        do {
          for (; uVar52 == 0; uVar52 = uVar52 & 0x8080808080808080) {
            uVar52 = NEON_cmge(*pppppppuVar47,0,1);
            pppppppuVar30 = pppppppuVar30 + -0x18;
            pppppppuVar47 = pppppppuVar47 + 1;
          }
          uVar34 = (uVar52 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar52 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar34 = (uVar34 & 0xffff0000ffff0000) >> 0x10 | (uVar34 & 0xffff0000ffff) << 0x10;
          iVar29 = (int)((ulong)LZCOUNT(uVar34 >> 0x20 | uVar34 << 0x20) >> 3);
          if (pppppppuVar30[(long)-iVar29 * 3 + -3] != (ulong ******)0x0) {
            free(pppppppuVar30[(long)-iVar29 * 3 + -2]);
          }
          pppppppuVar36 = (ulong *******)((long)pppppppuVar36 + -1);
          uVar52 = uVar52 - 1 & uVar52;
        } while (pppppppuVar36 != (ulong *******)0x0);
      }
      if ((long)pppppppuVar39 * 0x19 != -0x21) {
        free(local_220 + (long)pppppppuVar39 * -3 + -3);
      }
    }
  }
  else {
    uVar42 = CONCAT71(uStack_cf,local_d0);
    pppppppuStack_168 = (ulong *******)CONCAT71(uStack_bf,uStack_c0);
    local_170 = (ulong *******)CONCAT71(uStack_c7,uStack_c8);
    pppppppuVar46 = local_f0;
    pppppppuVar41 = pppppppuStack_e8;
    pppppppuVar35 = (ulong *******)PTR_fmt_00b00d60;
    pppppppuVar30 = pppppppuStack_218;
    local_160 = pppppppuStack_b8;
joined_r0x00569bcc:
    PTR_fmt_00b00d60 = (undefined *)pppppppuVar35;
    pppppppuStack_218 = pppppppuVar30;
    if (pppppppuVar30 == (ulong *******)0x0) {
      uVar52 = *param_2;
    }
    else {
      if (local_208 != (ulong *******)0x0) {
        pppppppuVar36 = (ulong *******)((long)local_220 + 8);
        uVar52 = NEON_cmge(*local_220,0,1);
        uVar52 = uVar52 & 0x8080808080808080;
        pppppppuVar47 = local_220;
        pppppppuVar39 = local_208;
        do {
          for (; uVar52 == 0; uVar52 = uVar52 & 0x8080808080808080) {
            uVar52 = NEON_cmge(*pppppppuVar36,0,1);
            pppppppuVar47 = pppppppuVar47 + -0x18;
            pppppppuVar36 = pppppppuVar36 + 1;
          }
          uVar34 = (uVar52 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar52 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar34 = (uVar34 & 0xffff0000ffff0000) >> 0x10 | (uVar34 & 0xffff0000ffff) << 0x10;
          iVar29 = (int)((ulong)LZCOUNT(uVar34 >> 0x20 | uVar34 << 0x20) >> 3);
          if (pppppppuVar47[(long)-iVar29 * 3 + -3] != (ulong ******)0x0) {
            free(pppppppuVar47[(long)-iVar29 * 3 + -2]);
          }
          pppppppuVar39 = (ulong *******)((long)pppppppuVar39 + -1);
          uVar52 = uVar52 - 1 & uVar52;
        } while (pppppppuVar39 != (ulong *******)0x0);
      }
      if ((long)pppppppuVar30 * 0x19 != -0x21) {
        free(local_220 + (long)pppppppuVar30 * -3 + -3);
      }
      uVar52 = *param_2;
    }
joined_r0x005699b0:
    if (0x7ffffffffffffffe < uVar52) {
                    /* WARNING: Subroutine does not return */
      core::cell::panic_already_mutably_borrowed(&PTR_s__root__cargo_registry_src_index__00ad0530);
    }
    *param_2 = uVar52 + 1;
    iVar29 = sqlite3_get_autocommit(param_2[2]);
    *param_2 = *param_2 - 1;
    if ((iVar29 == 0) &&
       (<rusqlite::[1]::rusqlite::Connection>::execute_batch(&local_f0,param_2,&DAT_002a1278,8),
       local_f0 != (ulong *******)0xffffffffffffffff)) {
      FUN_00568d98(&local_f0);
    }
  }
  pppppppuStack_270 = pppppppuStack_168;
  ppppppuStack_278 = (ulong ******)local_170;
  local_268 = local_160;
  local_2a0 = pppppppuVar46;
  pppppppuStack_298 = pppppppuVar41;
  local_290 = pppppppuVar32;
  pppppppuStack_288 = (ulong *******)lVar49;
  local_280 = uVar42;
  if (*(long *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78 != 0) {
    local_130 = (ulong *******)&local_2b0;
    local_120 = (ulong *******)&local_2a0;
    uStack_118 = 0x56ba38;
    uStack_111 = 0;
    pppppppuStack_98 = (ulong *******)&local_130;
    local_b0 = 0x11;
    local_a0 = &DAT_002a532b;
    uStack_d8 = (undefined1)_UNK_002a05b8;
    uStack_d7 = (undefined7)((ulong)_UNK_002a05b8 >> 8);
    local_e0 = (undefined1)_s___002a05b0;
    uStack_df = (undefined7)((ulong)_s___002a05b0 >> 8);
    local_f0 = (ulong *******)0x0;
    pppppppuStack_e8 = (ulong *******)0x2c32a0;
    uStack_c0 = (undefined1)_UNK_0029f428;
    uStack_bf = (undefined7)((ulong)_UNK_0029f428 >> 8);
    uStack_c8 = (undefined1)_DAT_0029f420;
    uStack_c7 = (undefined7)((ulong)_DAT_0029f420 >> 8);
    pppppppuStack_b8 = (ulong *******)0x2c328f;
    local_d0 = 0xf4;
    uStack_cf = 0x2b05;
    local_a8 = DAT_002a1390;
                    /* try { // try from 00569e88 to 00569ebb has its CatchHandler @ 0056aecc */
    pppppppuStack_128 = pppppppuVar35;
    <log::__private_api::GlobalLogger_as_log::Log>::log(auStack_81,&local_f0);
  }
  <rusqlite::[1]::rusqlite::Connection>::execute_batch
            (&local_f0,param_2,(&PTR_s_BEGIN_DEFERRED_00ad08e0)[(byte)param_2[0xd]],
             *(undefined8 *)(&DAT_002c36d8 + (ulong)(byte)param_2[0xd] * 8));
  pppppppuVar47 = local_2a8;
  pppppppuVar30 = local_2b0;
  if (local_f0 != (ulong *******)0xffffffffffffffff) {
    local_120 = (ulong *******)CONCAT17(uStack_c8,uStack_cf);
    uStack_109 = SUB81(pppppppuStack_b8,0);
    local_108 = (undefined7)((ulong)pppppppuStack_b8 >> 8);
    local_110 = uStack_bf;
    pppppppuStack_128 = (ulong *******)CONCAT17(local_d0,uStack_d7);
    local_130 = (ulong *******)CONCAT17(uStack_d8,uStack_df);
    uStack_118 = uStack_c7;
    uStack_111 = uStack_c0;
                    /* try { // try from 0056abd0 to 0056abf3 has its CatchHandler @ 0056ac74 */
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              ("called `Result::unwrap()` on an `Err` value",0x2b,&local_f0,&PTR_FUN_00ad04f0,
               &PTR_s_mobile_flux_src_persistence_migr_00ad0620);
  }
  local_130 = local_2b0;
  pppppppuStack_128 = local_2a8;
  local_f0 = (ulong *******)&local_130;
                    /* try { // try from 00569ee0 to 00569ef3 has its CatchHandler @ 0056ac70 */
  pppppppuStack_e8 = pppppppuVar35;
  alloc::fmt::format::format_inner(&local_188,&DAT_002b2ea9,&local_f0);
  __ptr_01 = local_180;
                    /* try { // try from 00569ef8 to 00569f07 has its CatchHandler @ 0056ac68 */
  FUN_0056aee4(&local_f0,param_2,local_180,uStack_178);
  pppppppuVar32 = pppppppuStack_e8;
  puVar6 = PTR_fmt_00b00d50;
  uVar10 = DAT_002a1178;
  uVar9 = _UNK_002a05b8;
  uVar8 = _s___002a05b0;
  uVar7 = _UNK_0029fda8;
  uVar42 = _DAT_0029fda0;
  local_f8 = (ulong *******)CONCAT71(uStack_d7,uStack_d8);
  if (pppppppuStack_e8 == (ulong *******)0x0) {
    local_130 = (ulong *******)0x0;
    pppppppuVar35 = extraout_x9_01;
    pppppppuVar36 = extraout_x11_01;
  }
  else {
    pppppppuVar35 = (ulong *******)((long)pppppppuStack_e8 * 0x19 + 0x21);
    pppppppuVar36 = local_f0 + (long)pppppppuStack_e8 * -3 + -3;
    local_130 = (ulong *******)&DAT_00000008;
  }
  uVar52 = NEON_cmge(*local_f0,0,1);
  pppppppuVar39 = local_f0 + 1;
  uStack_118 = SUB87(local_f0,0);
  uStack_111 = (undefined1)((ulong)local_f0 >> 0x38);
  uVar52 = uVar52 & 0x8080808080808080;
  pppppppuStack_100 = (ulong *******)((undefined1 *)((long)local_f0 + (long)pppppppuStack_e8) + 1);
  local_110 = (undefined7)uVar52;
  uStack_109 = (undefined1)(uVar52 >> 0x38);
  local_108 = SUB87(pppppppuVar39,0);
  uStack_101 = (undefined1)((ulong)pppppppuVar39 >> 0x38);
  pppppppuStack_128 = pppppppuVar35;
  local_120 = pppppppuVar36;
  if (local_f8 != (ulong *******)0x0) {
    pppppppuVar48 = local_f0;
    pppppppuVar46 = local_f8;
joined_r0x00569fac:
    for (; uVar23 = uStack_101, uVar24 = local_108, uVar5 = uStack_109, uVar4 = local_110,
        uVar21 = uStack_111, uVar22 = uStack_118, uVar52 == 0; uVar52 = uVar52 & 0x8080808080808080)
    {
      uVar52 = NEON_cmge(*pppppppuVar39,0,1);
      pppppppuVar39 = pppppppuVar39 + 1;
      pppppppuVar48 = pppppppuVar48 + -0x18;
    }
    uVar34 = (uVar52 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar52 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar34 = (uVar34 & 0xffff0000ffff0000) >> 0x10 | (uVar34 & 0xffff0000ffff) << 0x10;
    pppppppuVar46 = (ulong *******)((long)pppppppuVar46 + -1);
    iVar29 = (int)((ulong)LZCOUNT(uVar34 >> 0x20 | uVar34 << 0x20) >> 3);
    ppppppuVar33 = pppppppuVar48[(long)-iVar29 * 3 + -3];
    pppppppuVar53 = (ulong *******)pppppppuVar48[(long)-iVar29 * 3 + -1];
    local_f0 = (ulong *******)pppppppuVar48[(long)-iVar29 * 3 + -2];
    uVar52 = uVar52 - 1 & uVar52;
    uStack_111 = (undefined1)((ulong)pppppppuVar48 >> 0x38);
    uVar14 = uStack_111;
    uStack_118 = SUB87(pppppppuVar48,0);
    uVar13 = uStack_118;
    uStack_109 = (undefined1)(uVar52 >> 0x38);
    uVar25 = uStack_109;
    local_110 = (undefined7)uVar52;
    uVar26 = local_110;
    uStack_101 = (undefined1)((ulong)pppppppuVar39 >> 0x38);
    uVar16 = uStack_101;
    local_108 = SUB87(pppppppuVar39,0);
    uVar15 = local_108;
    pppppppuVar41 = pppppppuVar46;
    pppppppuStack_e8 = pppppppuVar53;
    if (ppppppuVar33 != (ulong ******)0xffffffffffffffff) {
      local_170 = (ulong *******)ppppppuVar33;
      pppppppuStack_168 = local_f0;
      local_160 = pppppppuVar53;
      uStack_118 = uVar22;
      uStack_111 = uVar21;
      local_110 = uVar4;
      uStack_109 = uVar5;
      local_108 = uVar24;
      uStack_101 = uVar23;
      if (2 < *(ulong *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78) {
        local_b0 = 0x11;
        pppppppuStack_98 = (ulong *******)&local_158;
        local_150 = (ulong *******)puVar6;
        local_a0 = &DAT_002a9aae;
        local_f0 = (ulong *******)0x0;
        pppppppuStack_e8 = (ulong *******)0x2c32a0;
        pppppppuStack_b8 = (ulong *******)0x2c328f;
        local_d0 = 0xf4;
        uStack_cf = 0x2b05;
        uStack_d8 = (undefined1)uVar9;
        uStack_d7 = (undefined7)((ulong)uVar9 >> 8);
        local_e0 = (undefined1)uVar8;
        uStack_df = (undefined7)((ulong)uVar8 >> 8);
        uStack_c0 = (undefined1)uVar7;
        uStack_bf = (undefined7)((ulong)uVar7 >> 8);
        uStack_c8 = (undefined1)uVar42;
        uStack_c7 = (undefined7)((ulong)uVar42 >> 8);
        local_a8 = uVar10;
                    /* try { // try from 0056a070 to 0056a08f has its CatchHandler @ 0056adc4 */
        local_158 = (ulong *******)&local_170;
        <log::__private_api::GlobalLogger_as_log::Log>::log(auStack_81,&local_f0);
      }
      puStack_138 = puVar6;
      local_140 = (ulong *******)&local_170;
      alloc::fmt::format::format_inner(&local_158,&DAT_002a6120,&local_140);
      pppppppuVar53 = local_150;
      pppppppuVar41 = local_158;
                    /* try { // try from 0056a098 to 0056a0a7 has its CatchHandler @ 0056ad50 */
      FUN_00568898(&local_f0,param_2,local_150,pppppppuStack_148);
      pppppppuVar43 = pppppppuStack_e8;
      pppppppuVar37 = local_f0;
      if (local_f0 == (ulong *******)0xffffffffffffffff) goto code_r0x0056a0b4;
      pppppppuStack_218 = (ulong *******)CONCAT71(uStack_d7,uStack_d8);
      local_220 = (ulong *******)CONCAT71(uStack_df,local_e0);
      local_208 = (ulong *******)CONCAT71(uStack_c7,uStack_c8);
      local_210 = CONCAT71(uStack_cf,local_d0);
      puStack_200 = (undefined1 *)CONCAT71(uStack_bf,uStack_c0);
      pppppppuStack_1f8 = pppppppuStack_b8;
      uStack_118 = uVar13;
      uStack_111 = uVar14;
      local_110 = uVar26;
      uStack_109 = uVar25;
      local_108 = uVar15;
      uStack_101 = uVar16;
      local_f8 = pppppppuVar46;
      if (pppppppuVar41 != (ulong *******)0x0) {
        free(pppppppuVar53);
      }
      if (local_170 != (ulong *******)0x0) {
        free(pppppppuStack_168);
      }
      for (; pppppppuVar46 != (ulong *******)0x0;
          pppppppuVar46 = (ulong *******)((long)pppppppuVar46 + -1)) {
        for (; uVar52 == 0; uVar52 = uVar52 & 0x8080808080808080) {
          pppppppuVar48 = pppppppuVar48 + -0x18;
          uVar52 = NEON_cmge(*pppppppuVar39,0,1);
          pppppppuVar39 = pppppppuVar39 + 1;
        }
        uVar34 = (uVar52 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar52 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar34 = (uVar34 & 0xffff0000ffff0000) >> 0x10 | (uVar34 & 0xffff0000ffff) << 0x10;
        iVar29 = (int)((ulong)LZCOUNT(uVar34 >> 0x20 | uVar34 << 0x20) >> 3);
        if (pppppppuVar48[(long)-iVar29 * 3 + -3] != (ulong ******)0x0) {
          free(pppppppuVar48[(long)-iVar29 * 3 + -2]);
        }
        uVar52 = uVar52 - 1 & uVar52;
      }
      if ((pppppppuVar35 != (ulong *******)0x0) && (pppppppuVar32 != (ulong *******)0x0)) {
        free(pppppppuVar36);
      }
      if (local_188 != (ulong *******)0x0) {
        free(__ptr_01);
      }
      goto LAB_0056a494;
    }
    for (; local_f8 = pppppppuVar41, pppppppuVar46 != (ulong *******)0x0;
        pppppppuVar46 = (ulong *******)((long)pppppppuVar46 + -1)) {
      for (; uVar52 == 0; uVar52 = uVar52 & 0x8080808080808080) {
        pppppppuVar48 = pppppppuVar48 + -0x18;
        uVar52 = NEON_cmge(*pppppppuVar39,0,1);
        pppppppuVar39 = pppppppuVar39 + 1;
      }
      uVar34 = (uVar52 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar52 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar34 = (uVar34 & 0xffff0000ffff0000) >> 0x10 | (uVar34 & 0xffff0000ffff) << 0x10;
      iVar29 = (int)((ulong)LZCOUNT(uVar34 >> 0x20 | uVar34 << 0x20) >> 3);
      if (pppppppuVar48[(long)-iVar29 * 3 + -3] != (ulong ******)0x0) {
        free(pppppppuVar48[(long)-iVar29 * 3 + -2]);
      }
      uVar52 = uVar52 - 1 & uVar52;
      pppppppuVar41 = local_f8;
    }
  }
LAB_0056a0e8:
  if ((pppppppuVar32 != (ulong *******)0x0) && (pppppppuVar35 != (ulong *******)0x0)) {
    free(pppppppuVar36);
  }
  if (local_188 != (ulong *******)0x0) {
    free(__ptr_01);
  }
  uVar10 = DAT_002a11c8;
  uVar9 = _UNK_002a05b8;
  uVar8 = _s___002a05b0;
  uVar7 = _UNK_0029fda8;
  uVar42 = _DAT_0029fda0;
  if (lVar31 == 0) {
LAB_0056a26c:
                    /* try { // try from 0056a26c to 0056a287 has its CatchHandler @ 0056ac54 */
    <rusqlite::[1]::rusqlite::Connection>::execute_batch(&local_130,param_2,"COMMIT",6);
    puVar6 = PTR_fmt_00b00d60;
    if (0x7ffffffffffffffe < *param_2) {
LAB_0056aad4:
                    /* try { // try from 0056aad4 to 0056aadf has its CatchHandler @ 0056aecc */
                    /* WARNING: Subroutine does not return */
      core::cell::panic_already_mutably_borrowed(&PTR_s__root__cargo_registry_src_index__00ad0530);
    }
    *param_2 = *param_2 + 1;
    iVar29 = sqlite3_get_autocommit(param_2[2]);
    *param_2 = *param_2 - 1;
                    /* try { // try from 0056a2c4 to 0056a4ef has its CatchHandler @ 0056aecc */
    if ((iVar29 == 0) &&
       (<rusqlite::[1]::rusqlite::Connection>::execute_batch(&local_f0,param_2,&DAT_002a1278,8),
       local_f0 != (ulong *******)0xffffffffffffffff)) {
      FUN_00568d98(&local_f0);
    }
    if (local_130 == (ulong *******)0xffffffffffffffff) {
      local_170 = pppppppuVar30;
      pppppppuStack_168 = pppppppuVar47;
      pppppuVar54 = *ppppppuVar2;
      pppppppuStack_128 = (ulong *******)_UNK_00acfe08;
      local_130 = (ulong *******)PTR_DAT_00acfe00;
      uStack_118 = (undefined7)_UNK_00acfe18;
      uStack_111 = (undefined1)((ulong)_UNK_00acfe18 >> 0x38);
      local_120 = (ulong *******)_DAT_00acfe10;
      if (lVar31 != 0) {
                    /* try { // try from 0056aaf8 to 0056ab0f has its CatchHandler @ 0056ac2c */
        <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(flux[2406cd06d16b4816]::persistence::schema::TableAlias,flux[2406cd06d16b4816]::persistence::schema::TableName)>>
        ::reserve_rehash::
        <hashbrown[32fc5d502e7f9af5]::map::make_hasher<flux[2406cd06d16b4816]::persistence::schema::TableAlias,flux[2406cd06d16b4816]::persistence::schema::TableName,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
                  (&local_130,lVar31,&local_110,1);
      }
      uVar52 = NEON_cmge(pppppuVar54,0,1);
      local_158 = (ulong *******)&local_130;
      local_150 = (ulong *******)&local_170;
      pppppppuStack_e8 = (ulong *******)(uVar52 & 0x8080808080808080);
      lVar38 = (long)ppppppuVar2 + lVar38 + 1;
      uStack_d8 = (undefined1)lVar38;
      uStack_d7 = (undefined7)((ulong)lVar38 >> 8);
                    /* try { // try from 0056a5d0 to 0056a5db has its CatchHandler @ 0056ac2c */
      local_f0 = (ulong *******)ppppppuVar2;
      local_e0 = uVar17;
      uStack_df = uVar18;
      FUN_0055d61c(&local_f0,lVar31,&local_158);
      local_248 = CONCAT17(uStack_111,uStack_118);
      local_260 = local_130;
      uStack_250 = local_120;
      pppppppuStack_258 = pppppppuStack_128;
      if (2 < *(ulong *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78) {
        local_130 = (ulong *******)&local_2b0;
        pppppppuStack_98 = (ulong *******)&local_130;
        pppppppuStack_128 = (ulong *******)puVar6;
        local_b0 = 0x11;
        local_a0 = &DAT_002bc39c;
        uStack_d8 = (undefined1)_UNK_002a05b8;
        uStack_d7 = (undefined7)((ulong)_UNK_002a05b8 >> 8);
        local_e0 = (undefined1)_s___002a05b0;
        uStack_df = (undefined7)((ulong)_s___002a05b0 >> 8);
        local_f0 = (ulong *******)0x0;
        pppppppuStack_e8 = (ulong *******)0x2c32a0;
        uStack_c0 = (undefined1)_UNK_0029fda8;
        uStack_bf = (undefined7)((ulong)_UNK_0029fda8 >> 8);
        uStack_c8 = (undefined1)_DAT_0029fda0;
        uStack_c7 = (undefined7)((ulong)_DAT_0029fda0 >> 8);
        pppppppuStack_b8 = (ulong *******)0x2c328f;
        local_d0 = 0xf4;
        uStack_cf = 0x2b05;
        local_a8 = DAT_002a1460;
                    /* try { // try from 0056a670 to 0056a67b has its CatchHandler @ 0056ac1c */
        <log::__private_api::GlobalLogger_as_log::Log>::log(auStack_81,&local_f0);
      }
      param_1[9] = pppppppuStack_258;
      param_1[8] = local_260;
      param_1[0xb] = local_248;
      param_1[10] = uStack_250;
      param_1[5] = ppppppuStack_278;
      param_1[4] = local_280;
      param_1[7] = local_268;
      param_1[6] = pppppppuStack_270;
      param_1[1] = pppppppuStack_298;
      *param_1 = local_2a0;
      param_1[3] = pppppppuStack_288;
      param_1[2] = local_290;
    }
    else {
      pppppppuStack_218 = (ulong *******)CONCAT17(uStack_111,uStack_118);
      local_208 = (ulong *******)CONCAT17(uStack_101,local_108);
      local_210 = CONCAT17(uStack_109,local_110);
      pppppppuStack_1f8 = local_f8;
      puStack_200 = (undefined1 *)pppppppuStack_100;
      local_220 = local_120;
      pppppppuVar37 = local_130;
      pppppppuVar43 = pppppppuStack_128;
LAB_0056a4f0:
      local_230 = local_210;
      param_1[8] = pppppppuStack_1f8;
      param_1[5] = local_210;
      pppppppuStack_238 = pppppppuStack_218;
      local_240 = local_220;
      param_1[7] = puStack_200;
      param_1[6] = local_208;
      param_1[1] = pppppppuVar37;
      param_1[2] = pppppppuVar43;
      param_1[4] = pppppppuStack_218;
      param_1[3] = local_220;
      *param_1 = 0xfffffffffffffffd;
      if (local_2a0 == (ulong *******)0xffffffffffffffff) {
        lVar38 = (long)pppppppuStack_288 + 1;
        pppppppuVar30 = local_290;
        while (lVar38 = lVar38 + -1, lVar38 != 0) {
                    /* try { // try from 0056a558 to 0056a55b has its CatchHandler @ 0056ad80 */
          FUN_00564a20(pppppppuVar30);
          pppppppuVar30 = pppppppuVar30 + 8;
        }
        if (pppppppuStack_298 != (ulong *******)0x0) {
          free(local_290);
        }
      }
      else {
        FUN_00568d98(&local_2a0);
      }
    }
    return;
  }
  ppppppuVar33 = ppppppuVar2 + 1;
  uVar52 = NEON_cmge(*ppppppuVar2,0,1);
  uVar52 = uVar52 & 0x8080808080808080;
  ppppppuVar3 = ppppppuVar2;
  lVar49 = lVar31;
joined_r0x0056a168:
  for (; uVar52 == 0; uVar52 = uVar52 & 0x8080808080808080) {
    uVar52 = NEON_cmge(*ppppppuVar33,0,1);
    ppppppuVar33 = ppppppuVar33 + 1;
    ppppppuVar3 = ppppppuVar3 + -0x38;
  }
  uVar34 = (uVar52 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar52 >> 7 & 0xff00ff00ff00ff) << 8;
  uVar34 = (uVar34 & 0xffff0000ffff0000) >> 0x10 | (uVar34 & 0xffff0000ffff) << 0x10;
                    /* try { // try from 0056a198 to 0056a1a7 has its CatchHandler @ 0056ad78 */
  <flux::persistence::schema::[5]::flux::persistence::schema::TableDefinition>::render_create
            (&local_f0,
             ppppppuVar3 +
             (long)-(int)((ulong)LZCOUNT(uVar34 >> 0x20 | uVar34 << 0x20) >> 3) * 7 + -5,
             pppppppuVar30,pppppppuVar47);
  pppppppuVar36 = pppppppuStack_e8;
  pppppppuVar35 = local_f0;
  pppppppuVar32 = (ulong *******)CONCAT71(uStack_df,local_e0);
  if (2 < *(ulong *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78) {
    local_130 = (ulong *******)&local_158;
    pppppppuStack_128 = (ulong *******)FUN_00570bb4;
    local_b0 = 0x11;
    local_a0 = &DAT_002b20b7;
    local_f0 = (ulong *******)0x0;
    pppppppuStack_e8 = (ulong *******)0x2c32a0;
    pppppppuStack_b8 = (ulong *******)0x2c328f;
    local_d0 = 0xf4;
    uStack_cf = 0x2b05;
    local_158 = pppppppuVar36;
    uStack_d8 = (undefined1)uVar9;
    uStack_d7 = (undefined7)((ulong)uVar9 >> 8);
    local_e0 = (undefined1)uVar8;
    uStack_df = (undefined7)((ulong)uVar8 >> 8);
    uStack_c0 = (undefined1)uVar7;
    uStack_bf = (undefined7)((ulong)uVar7 >> 8);
    uStack_c8 = (undefined1)uVar42;
    uStack_c7 = (undefined7)((ulong)uVar42 >> 8);
    local_a8 = uVar10;
                    /* try { // try from 0056a228 to 0056a247 has its CatchHandler @ 0056ae50 */
    local_150 = pppppppuVar32;
    pppppppuStack_98 = (ulong *******)&local_130;
    <log::__private_api::GlobalLogger_as_log::Log>::log(auStack_81,&local_f0);
  }
  FUN_00568898(&local_f0,param_2,pppppppuVar36,pppppppuVar32);
  pppppppuVar43 = pppppppuStack_e8;
  pppppppuVar37 = local_f0;
  if (local_f0 == (ulong *******)0xffffffffffffffff) goto code_r0x0056a254;
  pppppppuStack_218 = (ulong *******)CONCAT71(uStack_d7,uStack_d8);
  local_220 = (ulong *******)CONCAT71(uStack_df,local_e0);
  local_208 = (ulong *******)CONCAT71(uStack_c7,uStack_c8);
  local_210 = CONCAT71(uStack_cf,local_d0);
  puStack_200 = (undefined1 *)CONCAT71(uStack_bf,uStack_c0);
  pppppppuStack_1f8 = pppppppuStack_b8;
  if (pppppppuVar35 != (ulong *******)0x0) {
    free(pppppppuVar36);
  }
LAB_0056a494:
  if (0x7ffffffffffffffe < *param_2) goto LAB_0056aad4;
  *param_2 = *param_2 + 1;
  iVar29 = sqlite3_get_autocommit(param_2[2]);
  *param_2 = *param_2 - 1;
  if ((iVar29 == 0) &&
     (<rusqlite::[1]::rusqlite::Connection>::execute_batch(&local_f0,param_2,&DAT_002a1278,8),
     local_f0 != (ulong *******)0xffffffffffffffff)) {
    FUN_00568d98(&local_f0);
  }
  goto LAB_0056a4f0;
code_r0x00569d08:
  pppppppuVar32 = local_158;
  pppppppuVar35 = local_150;
  pppppppuVar46 = pppppppuStack_148;
  uVar22 = uStack_118;
  uVar21 = uStack_111;
  uVar4 = local_110;
  uVar5 = uStack_109;
  uVar24 = local_108;
  uVar23 = uStack_101;
  if (pppppppuVar12 != (ulong *******)0x0) {
    free(__ptr_00);
    pppppppuVar32 = local_158;
    pppppppuVar35 = local_150;
    pppppppuVar46 = pppppppuStack_148;
    uVar22 = uStack_118;
    uVar21 = uStack_111;
    uVar4 = local_110;
    uVar5 = uStack_109;
    uVar24 = local_108;
    uVar23 = uStack_101;
  }
  goto joined_r0x00569c2c;
code_r0x0056a0b4:
  if (pppppppuVar41 != (ulong *******)0x0) {
    free(pppppppuVar53);
  }
  if (local_170 != (ulong *******)0x0) {
    free(pppppppuStack_168);
  }
  if (pppppppuVar46 == (ulong *******)0x0) goto LAB_0056a0e8;
  goto joined_r0x00569fac;
code_r0x0056a254:
  if (pppppppuVar35 != (ulong *******)0x0) {
    free(pppppppuVar36);
  }
  lVar49 = lVar49 + -1;
  uVar52 = uVar52 - 1 & uVar52;
  if (lVar49 == 0) goto LAB_0056a26c;
  goto joined_r0x0056a168;
}


// ===== 0056aee4  FUN_0056aee4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056aee4(undefined8 *param_1,undefined8 param_2,undefined8 ***param_3,undefined8 param_4)

{
  undefined8 ****ppppuVar1;
  code *pcVar2;
  int iVar3;
  undefined **ppuVar4;
  ulong *puVar5;
  undefined8 **local_280;
  undefined8 uStack_278;
  undefined1 local_270 [56];
  undefined8 uStack_238;
  undefined8 ***local_230;
  undefined1 uStack_228;
  undefined7 uStack_227;
  undefined1 uStack_220;
  undefined7 uStack_21f;
  undefined1 uStack_218;
  undefined7 uStack_217;
  undefined1 uStack_210;
  undefined7 uStack_20f;
  undefined1 local_208;
  undefined7 uStack_207;
  undefined1 uStack_200;
  undefined7 uStack_1ff;
  undefined1 local_1f8;
  undefined7 uStack_1f7;
  undefined8 uStack_1f0;
  undefined8 ***local_1e0;
  void *pvStack_1d8;
  undefined *local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  code *local_1a0;
  code *local_198;
  undefined8 ***local_190;
  undefined1 uStack_119;
  undefined7 uStack_118;
  undefined8 ***local_e0;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined8 ***local_a0;
  code *pcStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 uStack_51;
  
  local_280 = param_3;
  uStack_278 = param_4;
  FUN_005690d0(&local_230,param_2,
               "SELECT name FROM sqlite_master WHERE type = \'table\' AND name LIKE ?1",0x44);
  if (local_230 == (undefined8 ***)&DAT_00000001) {
    uStack_68 = uStack_1f0;
                    /* try { // try from 0056b188 to 0056b1ab has its CatchHandler @ 0056b52c */
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              ("invariant: failed to prepare statement",0x26,&local_a0,&PTR_FUN_00ad04f0,
               &PTR_s_mobile_flux_src_persistence_migr_00ad0638);
  }
  pcStack_98 = FUN_00570bb4;
  uStack_238 = uStack_1f0;
                    /* try { // try from 0056af54 to 0056af67 has its CatchHandler @ 0056b4b0 */
  local_a0 = &local_280;
  alloc::fmt::format::format_inner(&local_230,&DAT_002a28c5,&local_a0);
  pvStack_1d8 = (void *)CONCAT71(uStack_227,uStack_228);
  local_e0 = &local_1e0;
  local_1e0 = local_230;
  uStack_d8 = 0x50;
  uStack_d7 = 0xad06;
                    /* try { // try from 0056af88 to 0056af9b has its CatchHandler @ 0056b4a8 */
  FUN_005700b0(&local_a0,local_270,&local_e0,1);
  pcVar2 = pcStack_98;
  if ((undefined8 ****)local_a0 != (undefined8 ****)0xffffffffffffffff) {
    uStack_228 = SUB81(pcStack_98,0);
    uStack_227 = (undefined7)((ulong)pcStack_98 >> 8);
    local_230 = local_a0;
    uStack_218 = (undefined1)uStack_88;
    uStack_217 = (undefined7)((ulong)uStack_88 >> 8);
    uStack_220 = SUB81(pcStack_90,0);
    uStack_21f = (undefined7)((ulong)pcStack_90 >> 8);
    local_208 = (undefined1)uStack_78;
    uStack_207 = (undefined7)((ulong)uStack_78 >> 8);
    uStack_210 = (undefined1)local_80;
    uStack_20f = (undefined7)((ulong)local_80 >> 8);
    local_1f8 = (undefined1)uStack_68;
    uStack_1f7 = (undefined7)((ulong)uStack_68 >> 8);
    uStack_200 = (undefined1)local_70;
    uStack_1ff = (undefined7)((ulong)local_70 >> 8);
                    /* try { // try from 0056b1c0 to 0056b1e3 has its CatchHandler @ 0056b4f8 */
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              ("invariant: failed to execute table query",0x28,&local_230,&PTR_FUN_00ad04f0,
               &PTR_s_mobile_flux_src_persistence_migr_00ad0670);
  }
  uStack_1a8 = _UNK_00ad06a0;
  local_1b0 = _DAT_00ad0698;
  local_198 = pcStack_90;
  local_1a0 = pcStack_98;
  uStack_1b8 = _UNK_00ad0690;
  local_1c0 = PTR_DAT_00ad0688;
  if (pcStack_98 == (code *)0x0) {
LAB_0056b124:
    local_198 = (code *)0x0;
LAB_0056b128:
                    /* try { // try from 0056b128 to 0056b12f has its CatchHandler @ 0056b4a0 */
    FUN_00568ae0(&local_1a0);
    param_1[1] = uStack_1b8;
    *param_1 = local_1c0;
    param_1[3] = uStack_1a8;
    param_1[2] = local_1b0;
    if ((undefined8 ****)local_1e0 != (undefined8 ****)0x0) {
      free(pvStack_1d8);
    }
    FUN_00568efc(local_270);
    return;
  }
  iVar3 = sqlite3_step(*(undefined8 *)(pcStack_98 + 0x38));
  if (iVar3 == 0x65) {
LAB_0056b114:
    local_1a0 = (code *)0x0;
    iVar3 = sqlite3_reset(*(undefined8 *)(pcVar2 + 0x38));
    if (iVar3 == 0) goto LAB_0056b124;
    puVar5 = *(ulong **)pcVar2;
    if (0x7ffffffffffffffe < *puVar5) goto LAB_0056b3e8;
    *puVar5 = *puVar5 + 1;
                    /* try { // try from 0056b3b4 to 0056b3bb has its CatchHandler @ 0056b478 */
    rusqlite::error::decode_result_raw(&local_230,puVar5[2],iVar3);
    *puVar5 = *puVar5 - 1;
    if ((undefined8 ****)local_230 == (undefined8 ****)0xffffffffffffffff) {
      ppuVar4 = &PTR_s__root__cargo_registry_src_index__00ad0548;
      goto LAB_0056b408;
    }
    pcStack_98 = (code *)CONCAT71(uStack_21f,uStack_220);
  }
  else {
    if (iVar3 == 100) {
      local_198 = pcVar2;
                    /* try { // try from 0056aff4 to 0056b06f has its CatchHandler @ 0056b49c */
      FUN_005673cc(&local_230,(ulong)&local_1a0 | 8,0,
                   &PTR_s_mobile_flux_src_persistence_migr_00ad04d8);
      ppppuVar1 = (undefined8 ****)CONCAT71(uStack_227,uStack_228);
      if (local_230 == (undefined8 ***)&DAT_fffffffffffffffe) goto LAB_0056b128;
      local_a0 = ppppuVar1;
      pcStack_98 = (code *)CONCAT71(uStack_21f,uStack_220);
      if ((undefined8 ****)local_230 != (undefined8 ****)0xffffffffffffffff) goto LAB_0056b2dc;
      uStack_d8 = uStack_220;
      uStack_d7 = uStack_21f;
      local_e0 = ppppuVar1;
      FUN_00567110(&local_1c0,&local_e0);
      while (iVar3 = sqlite3_step(*(undefined8 *)(pcVar2 + 0x38)), iVar3 == 100) {
        local_198 = pcVar2;
                    /* try { // try from 0056b08c to 0056b103 has its CatchHandler @ 0056b4e0 */
        FUN_005673cc(&local_230,(ulong)&local_1a0 | 8,0,
                     &PTR_s_mobile_flux_src_persistence_migr_00ad04d8);
        ppppuVar1 = (undefined8 ****)CONCAT71(uStack_227,uStack_228);
        if (local_230 == (undefined8 ***)&DAT_fffffffffffffffe) goto LAB_0056b128;
        local_a0 = ppppuVar1;
        pcStack_98 = (code *)CONCAT71(uStack_21f,uStack_220);
        if ((undefined8 ****)local_230 != (undefined8 ****)0xffffffffffffffff) goto LAB_0056b2dc;
        uStack_d8 = uStack_220;
        uStack_d7 = uStack_21f;
        local_e0 = ppppuVar1;
        FUN_00567110(&local_1c0,&local_e0);
      }
      if (iVar3 == 0x65) goto LAB_0056b114;
    }
    puVar5 = *(ulong **)pcVar2;
    if (0x7ffffffffffffffe < *puVar5) {
LAB_0056b3e8:
                    /* try { // try from 0056b3e8 to 0056b423 has its CatchHandler @ 0056b46c */
                    /* WARNING: Subroutine does not return */
      core::cell::panic_already_mutably_borrowed(&PTR_s__root__cargo_registry_src_index__00ad05a8);
    }
    *puVar5 = *puVar5 + 1;
                    /* try { // try from 0056b208 to 0056b20f has its CatchHandler @ 0056b4cc */
    rusqlite::error::decode_result_raw(&local_230,puVar5[2],iVar3);
    *puVar5 = *puVar5 - 1;
    if ((undefined8 ****)local_230 == (undefined8 ****)0xffffffffffffffff) {
      ppuVar4 = &PTR_s__root__cargo_registry_src_index__00ad05f0;
LAB_0056b408:
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                ("called `Result::unwrap_err()` on an `Ok` value",0x2e,&uStack_51,&DAT_00ad0510,
                 ppuVar4);
    }
    local_e0 = local_230;
    uStack_118 = uStack_21f;
    uStack_119 = uStack_220;
    uStack_d7 = uStack_227;
    uStack_d8 = uStack_228;
    local_1a0 = (code *)0x0;
    iVar3 = sqlite3_reset(*(undefined8 *)(pcVar2 + 0x38));
    if (iVar3 != 0) {
      puVar5 = *(ulong **)pcVar2;
      if (0x7ffffffffffffffe < *puVar5) {
                    /* try { // try from 0056b428 to 0056b45b has its CatchHandler @ 0056b470 */
                    /* WARNING: Subroutine does not return */
        core::cell::panic_already_mutably_borrowed(&PTR_s__root__cargo_registry_src_index__00ad05a8)
        ;
      }
      *puVar5 = *puVar5 + 1;
                    /* try { // try from 0056b348 to 0056b34f has its CatchHandler @ 0056b47c */
      rusqlite::error::decode_result_raw(&local_230,puVar5[2],iVar3);
      *puVar5 = *puVar5 - 1;
      if ((undefined8 ****)local_230 == (undefined8 ****)0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        core::result::unwrap_failed
                  ("called `Result::unwrap_err()` on an `Ok` value",0x2e,&uStack_51,&DAT_00ad0510,
                   &PTR_s__root__cargo_registry_src_index__00ad0548);
      }
      local_a0 = local_230;
      if ((undefined8 ****)local_230 != (undefined8 ****)0xffffffffffffffff) {
                    /* try { // try from 0056b384 to 0056b38b has its CatchHandler @ 0056b470 */
        FUN_00568d98(&local_a0);
      }
    }
    pcStack_98 = (code *)CONCAT71(uStack_118,uStack_119);
    uStack_228 = uStack_d8;
    uStack_227 = uStack_d7;
  }
  local_198 = (code *)0x0;
  local_a0 = (undefined8 ****)CONCAT71(uStack_227,uStack_228);
LAB_0056b2dc:
  uStack_220 = SUB81(pcStack_98,0);
  uStack_21f = (undefined7)((ulong)pcStack_98 >> 8);
  uStack_228 = SUB81(local_a0,0);
  uStack_227 = (undefined7)((ulong)local_a0 >> 8);
                    /* try { // try from 0056b2fc to 0056b31f has its CatchHandler @ 0056b4b8 */
  local_190 = local_a0;
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            ("invariant: failed to read table nameInternalMalfunctionPermissionDeniedOperationAbortedDatabaseBusyDatabaseLockedOutOfMemoryReadOnlyOperationInterruptedSystemIoFailureDatabaseCorruptNotFoundDiskFullCannotOpenFileLockingProtocolFailedSchemaChangedTooBigConstraintViolationTypeMismatchApiMisuseNoLargeFileSupportAuthorizationForStatementDeniedParameterOutOfRangeNotADatabaseUnknownSqliteFailureSqliteSingleThreadedModeFromSqlConversionFailureIntegralValueOutOfRangeUtf8ErrorInvalidParameterNameInvalidPathExecuteReturnedResultsQueryReturnedNoRowsQueryReturnedMoreThanOneRowInvalidColumnIndexInvalidColumnNameInvalidColumnTypeStatementChangedRowsToSqlConversionFailureInvalidQueryUnwindingPanicMultipleStatementInvalidParameterCount"
             ,0x24,&local_230,&PTR_FUN_00ad04f0,&PTR_s_mobile_flux_src_persistence_migr_00ad06a8);
}


// ===== 0056b544  FUN_0056b544 =====

void FUN_0056b544(byte *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,&DAT_002c37b0 + *(int *)(&DAT_002c37b0 + (ulong)*param_1 * 4),
             *(undefined8 *)(&DAT_002c36f0 + (ulong)*param_1 * 8));
  return;
}


// ===== 0056b56c  FUN_0056b56c =====

void FUN_0056b56c(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (-1 < lVar1) {
    lVar1 = 0x14;
  }
                    /* WARNING: Could not recover jumptable at 0x0056b5a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_0056b5a8 + (ulong)*(ushort *)(&UNK_002c3204 + lVar1 * 2) * 4))(param_2);
  return;
}


// ===== 0056b9f4  FUN_0056b9f4 =====

void FUN_0056b9f4(byte *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,&DAT_002c3838 + *(int *)(&DAT_002c3838 + (ulong)*param_1 * 4),
             *(undefined8 *)(&DAT_002c3810 + (ulong)*param_1 * 8));
  return;
}


// ===== 0056ba1c  FUN_0056ba1c =====

void FUN_0056ba1c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  param_1[2] = 3;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  param_1[1] = 0xffffffffffffffff;
  *param_1 = 0xffffffffffffffff;
  return;
}


// ===== 0056ba38  FUN_0056ba38 =====

void FUN_0056ba38(long *param_1,undefined8 param_2)

{
  long *local_18;
  
  if (*param_1 != -1) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002a14a8,8,&local_18,&DAT_00ad0880);
    return;
  }
  local_18 = param_1 + 1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field1_finish
            (param_2,"IncompatibleMigration",0x15,"reasons",7,&local_18,&DAT_00ad08a0);
  return;
}


// ===== 0056bac0  FUN_0056bac0 =====

void FUN_0056bac0(undefined8 param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <usize_as_core::fmt::LowerHex>::fmt();
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <usize_as_core::fmt::Display>::fmt();
    return;
  }
  <usize_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 0056bad8  FUN_0056bad8 =====

void FUN_0056bad8(long param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
            (param_2,"Error",5,&DAT_002bcfe4,4,param_1 + 4,&DAT_00ad08c0,"extended_code",0xd,
             &local_18,&DAT_00ad0860);
  return;
}


// ===== 0056bb44  FUN_0056bb44 =====

void FUN_0056bb44(long param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


// ===== 0056bb58  FUN_0056bb58 =====

void FUN_0056bb58(long param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


// ===== 0056bb6c  FUN_0056bb6c =====

void FUN_0056bb6c(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"()",2);
  return;
}


// ===== 0056bb80  FUN_0056bb80 =====

void FUN_0056bb80(long param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong local_70;
  void *local_68 [7];
  
                    /* try { // try from 0056bb98 to 0056bba3 has its CatchHandler @ 0056bcf4 */
  <rusqlite::inner_connection::rusqlite::inner_connection::InnerConnection>::close
            (&local_70,param_1 + 8);
  if (local_70 == 0xffffffffffffffff) goto LAB_0056bc98;
  uVar3 = local_70 ^ 0x8000000000000000;
  if (-1 < (long)local_70) {
    uVar3 = 0x14;
  }
  if (uVar3 < 0x15) {
    if ((1L << (uVar3 & 0x3f) & 0x30e0U) != 0) goto joined_r0x0056bc50;
    if (uVar3 == 0xf) {
                    /* WARNING: Load size is inaccurate */
      if (*local_68[1] != (code *)0x0) {
                    /* try { // try from 0056bc7c to 0056bc83 has its CatchHandler @ 0056bcd0 */
        (**local_68[1])(local_68[0]);
      }
      goto LAB_0056bc84;
    }
    if (uVar3 != 0x14) goto LAB_0056bc34;
    if (local_70 != 0) {
      free(local_68[0]);
    }
    lVar5 = 0x18;
joined_r0x0056bc2c:
    if (local_68[2] == (void *)0x0) goto LAB_0056bc98;
    local_68[0] = *(void **)((long)local_68 + lVar5);
  }
  else {
LAB_0056bc34:
    if (uVar3 != 2) {
      if ((uVar3 != 0) || (local_68[0] == (void *)0xffffffffffffffff)) goto LAB_0056bc98;
joined_r0x0056bc50:
      lVar5 = 8;
      local_68[2] = local_68[0];
      goto joined_r0x0056bc2c;
    }
                    /* WARNING: Load size is inaccurate */
    if (*local_68[1] != (code *)0x0) {
                    /* try { // try from 0056bc64 to 0056bc6b has its CatchHandler @ 0056bcd4 */
      (**local_68[1])(local_68[0]);
    }
LAB_0056bc84:
    if (*(long *)((long)local_68[1] + 8) == 0) goto LAB_0056bc98;
  }
  free(local_68[0]);
LAB_0056bc98:
  plVar4 = *(long **)(param_1 + 8);
  do {
    lVar5 = *plVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<*mut_libsqlite3_sys::bindings::sqlite3>>>
    ::drop_slow(param_1 + 8);
  }
  return;
}


// ===== 0056bd28  FUN_0056bd28 =====

void FUN_0056bd28(void *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)((long)param_1 + 0x20);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0056bd54 to 0056bd57 has its CatchHandler @ 0056bdd0 */
    <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
    drop_slow();
  }
                    /* try { // try from 0056bd58 to 0056bd5f has its CatchHandler @ 0056be18 */
  FUN_0056bfd8((long)param_1 + 0x30);
  if (*(long *)((long)param_1 + 0x310) != 0) {
                    /* try { // try from 0056bd70 to 0056bd73 has its CatchHandler @ 0056bde4 */
    (**(code **)(*(long *)((long)param_1 + 0x310) + 0x18))(*(undefined8 *)((long)param_1 + 0x318));
  }
  plVar3 = *(long **)((long)param_1 + 800);
  if (plVar3 != (long *)0x0) {
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 0056bd94 to 0056bd9b has its CatchHandler @ 0056bdb4 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow((long)param_1 + 800);
    }
  }
  free(param_1);
  return;
}


// ===== 0056be40  FUN_0056be40 =====

void FUN_0056be40(void *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)((long)param_1 + 0x20);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0056be6c to 0056be6f has its CatchHandler @ 0056bee8 */
    <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>::
    drop_slow();
  }
                    /* try { // try from 0056be70 to 0056be77 has its CatchHandler @ 0056bf30 */
  FUN_0056bfd8((long)param_1 + 0x30);
  if (*(long *)((long)param_1 + 0x310) != 0) {
                    /* try { // try from 0056be88 to 0056be8b has its CatchHandler @ 0056befc */
    (**(code **)(*(long *)((long)param_1 + 0x310) + 0x18))(*(undefined8 *)((long)param_1 + 0x318));
  }
  plVar3 = *(long **)((long)param_1 + 800);
  if (plVar3 != (long *)0x0) {
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 0056beac to 0056beb3 has its CatchHandler @ 0056becc */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow((long)param_1 + 800);
    }
  }
  free(param_1);
  return;
}


// ===== 0056bf58  FUN_0056bf58 =====

void FUN_0056bf58(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 0056bf68 to 0056bf6b has its CatchHandler @ 0056bfa4 */
  FUN_00558a28();
  plVar3 = (long *)*param_1;
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::mpsc::chan::Chan<flux[2406cd06d16b4816]::persistence::worker::PersistenceWorkerCommand,tokio[8c8895dbfa691109]::sync::mpsc::unbounded::Semaphore>>>
    ::drop_slow(param_1);
    return;
  }
  return;
}


// ===== 0056bfd8  FUN_0056bfd8 =====

void FUN_0056bfd8(int *param_1)

{
  code *pcVar1;
  void *__ptr;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    if (*(char *)((long)param_1 + 0x2c9) == '\x03') {
                    /* try { // try from 0056c068 to 0056c073 has its CatchHandler @ 0056c0b0 */
      FUN_0056c664(param_1 + 0x50);
      FUN_0056c4b0(param_1 + 0xe);
      return;
    }
    if (*(char *)((long)param_1 + 0x2c9) == '\0') {
      FUN_0056c4b0(param_1 + 0x70);
      return;
    }
  }
  else if (((*param_1 == 1) && (*(long *)(param_1 + 2) != 0)) &&
          (__ptr = *(void **)(param_1 + 4), __ptr != (void *)0x0)) {
    puVar2 = *(undefined8 **)(param_1 + 6);
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
                    /* try { // try from 0056c010 to 0056c017 has its CatchHandler @ 0056c08c */
      (*pcVar1)(__ptr);
    }
    if (puVar2[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 0056c0c8  FUN_0056c0c8 =====

void FUN_0056c0c8(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong local_80 [3];
  undefined8 local_68;
  ulong local_60;
  undefined8 local_58;
  long lStack_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38 [2];
  long local_28;
  
                    /* try { // try from 0056c0dc to 0056c0df has its CatchHandler @ 0056c1a4 */
  <rusqlite::raw_statement::RawStatement_as_core::ops::drop::Drop>::drop();
  lVar4 = *(long *)(param_1 + 8);
  if (lVar4 == 0) {
    local_40 = 0;
  }
  else {
    local_68 = *(undefined8 *)(param_1 + 0x10);
    local_40 = *(undefined8 *)(param_1 + 0x18);
    local_80[1] = 0;
    local_58 = 0;
    local_80[2] = lVar4;
    lStack_50 = lVar4;
    local_48 = local_68;
  }
  local_80[0] = (ulong)(lVar4 != 0);
                    /* try { // try from 0056c114 to 0056c11f has its CatchHandler @ 0056c1a0 */
  local_60 = local_80[0];
  FUN_0055815c(local_38,local_80);
  while (local_38[0] != 0) {
    lVar4 = local_38[0] + local_28 * 0x20;
    if (0x10 < *(ulong *)(lVar4 + 0x18)) {
      free(*(void **)(lVar4 + 0x10));
    }
                    /* try { // try from 0056c124 to 0056c12f has its CatchHandler @ 0056c1b4 */
    FUN_0055815c(local_38,local_80);
  }
  plVar3 = *(long **)(param_1 + 0x20);
  if (plVar3 != (long *)0x0) {
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow((undefined8 *)(param_1 + 0x20));
      return;
    }
  }
  return;
}


// ===== 0056c1ec  FUN_0056c1ec =====

void FUN_0056c1ec(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *__ptr;
  void *__ptr_00;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  long *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  pvVar4 = *(void **)(param_1 + 0x30);
  if (pvVar4 != (void *)0x0) {
    __ptr_00 = *(void **)((long)pvVar4 + 8);
    while (__ptr_00 != pvVar4) {
      uStack_88 = *(undefined8 *)((long)__ptr_00 + 0x18);
      local_90 = *(long **)((long)__ptr_00 + 0x10);
      uStack_78 = *(undefined8 *)((long)__ptr_00 + 0x28);
      uStack_80 = *(undefined8 *)((long)__ptr_00 + 0x20);
      pvVar5 = *(void **)((long)__ptr_00 + 8);
      local_50 = *(undefined8 *)((long)__ptr_00 + 0x50);
      uStack_68 = *(undefined8 *)((long)__ptr_00 + 0x38);
      local_70 = *(undefined8 *)((long)__ptr_00 + 0x30);
      uStack_58 = *(undefined8 *)((long)__ptr_00 + 0x48);
      uStack_60 = *(undefined8 *)((long)__ptr_00 + 0x40);
      do {
        lVar3 = *local_90;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(local_90,0x10);
        if (bVar2) {
          *local_90 = lVar3 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar3 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 0056c258 to 0056c25f has its CatchHandler @ 0056c2f8 */
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(&local_90);
      }
                    /* try { // try from 0056c260 to 0056c267 has its CatchHandler @ 0056c30c */
      FUN_0056c0c8(&uStack_80);
      free(__ptr_00);
      __ptr_00 = pvVar5;
    }
    free(pvVar4);
  }
  __ptr = (undefined8 *)*(void **)(param_1 + 0x38);
  while (__ptr != (undefined8 *)0x0) {
    pvVar4 = (void *)*__ptr;
    free(__ptr);
    __ptr = (undefined8 *)pvVar4;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    free((void *)(*(long *)(param_1 + 8) - (*(long *)(param_1 + 0x10) * 8 + 8)));
  }
  return;
}


// ===== 0056c32c  FUN_0056c32c =====

void FUN_0056c32c(long param_1)

{
  char cVar1;
  bool bVar2;
  void *__ptr;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  long *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    *(undefined8 *)(param_1 + 0x20) = 0xffffffffffffffff;
    if (*(long *)(param_1 + 0x40) != 0) {
      uVar4 = *(ulong *)(param_1 + 0x30);
      if (uVar4 != 0) {
        memset(*(void **)(param_1 + 0x28),0xff,uVar4 + 9);
        uVar4 = *(ulong *)(param_1 + 0x30);
        if (7 < uVar4) {
          uVar4 = (uVar4 + 1 >> 3) * 7;
        }
      }
      *(ulong *)(param_1 + 0x38) = uVar4;
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    pvVar6 = *(void **)(param_1 + 0x50);
    if (pvVar6 != (void *)0x0) {
      __ptr = *(void **)((long)pvVar6 + 8);
      while (__ptr != pvVar6) {
        uStack_88 = *(undefined8 *)((long)__ptr + 0x18);
        local_90 = *(long **)((long)__ptr + 0x10);
        uStack_78 = *(undefined8 *)((long)__ptr + 0x28);
        uStack_80 = *(undefined8 *)((long)__ptr + 0x20);
        pvVar7 = *(void **)((long)__ptr + 8);
        local_50 = *(undefined8 *)((long)__ptr + 0x50);
        uStack_68 = *(undefined8 *)((long)__ptr + 0x38);
        local_70 = *(undefined8 *)((long)__ptr + 0x30);
        uStack_58 = *(undefined8 *)((long)__ptr + 0x48);
        uStack_60 = *(undefined8 *)((long)__ptr + 0x40);
        do {
          lVar5 = *local_90;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(local_90,0x10);
          if (bVar2) {
            *local_90 = lVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar5 + -1 == 0) {
          DataMemoryBarrier(2,1);
                    /* try { // try from 0056c3ec to 0056c3f3 has its CatchHandler @ 0056c468 */
          <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(&local_90);
        }
                    /* try { // try from 0056c3f4 to 0056c3fb has its CatchHandler @ 0056c47c */
        FUN_0056c0c8(&uStack_80);
        free(__ptr);
        __ptr = pvVar7;
      }
      *(void **)pvVar6 = pvVar6;
      *(void **)((long)pvVar6 + 8) = pvVar6;
    }
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
                    /* try { // try from 0056c428 to 0056c42f has its CatchHandler @ 0056c460 */
    FUN_0056bb80(param_1);
    FUN_0056c1ec((long *)(param_1 + 0x20));
    return;
  }
                    /* try { // try from 0056c450 to 0056c45b has its CatchHandler @ 0056c490 */
  core::cell::panic_already_borrowed(&PTR_s__root__cargo_registry_src_index__00ad0910);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x56c460);
  (*pcVar3)();
}


// ===== 0056c4b0  FUN_0056c4b0 =====

void FUN_0056c4b0(long param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  
                    /* try { // try from 0056c4cc to 0056c4cf has its CatchHandler @ 0056c624 */
  FUN_0055e2cc();
  lVar5 = *(long *)(param_1 + 0x28);
  if (lVar5 != 0) {
    lVar6 = *(long *)(param_1 + 0x38);
    if (lVar6 != 0) {
      puVar7 = *(undefined8 **)(param_1 + 0x20);
      puVar8 = puVar7 + 1;
      uVar9 = NEON_cmge(*puVar7,0,1);
      uVar9 = uVar9 & 0x8080808080808080;
      do {
        for (; uVar9 == 0; uVar9 = uVar9 & 0x8080808080808080) {
          puVar7 = puVar7 + -0x30;
          uVar9 = NEON_cmge(*puVar8,0,1);
          puVar8 = puVar8 + 1;
        }
        uVar1 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
                    /* try { // try from 0056c52c to 0056c52f has its CatchHandler @ 0056c634 */
        FUN_0055e604(puVar7 + (long)-(int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) * 6 +
                              -4);
        lVar6 = lVar6 + -1;
        uVar9 = uVar9 - 1 & uVar9;
      } while (lVar6 != 0);
    }
    if (lVar5 * 0x31 != -0x39) {
      free((void *)(*(long *)(param_1 + 0x20) + lVar5 * -0x30 + -0x30));
    }
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if ((lVar5 != 0) && (lVar5 * 0x11 != -0x19)) {
    free((void *)(*(long *)(param_1 + 0x40) + lVar5 * -0x10 + -0x10));
  }
                    /* try { // try from 0056c594 to 0056c59b has its CatchHandler @ 0056c61c */
  FUN_0055e2cc(param_1 + 0x60);
                    /* try { // try from 0056c59c to 0056c5a3 has its CatchHandler @ 0056c5ec */
  FUN_00558a28(param_1 + 0x80);
  plVar4 = *(long **)(param_1 + 0x80);
  do {
    lVar5 = *plVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar3) {
      *plVar4 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0056c5c0 to 0056c5c7 has its CatchHandler @ 0056c5e4 */
    <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::mpsc::chan::Chan<flux[2406cd06d16b4816]::persistence::worker::PersistenceWorkerCommand,tokio[8c8895dbfa691109]::sync::mpsc::unbounded::Semaphore>>>
    ::drop_slow(param_1 + 0x80);
  }
  FUN_0056c32c(param_1 + 0x88);
  return;
}


// ===== 0056c664  FUN_0056c664 =====

void FUN_0056c664(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 0056c674 to 0056c677 has its CatchHandler @ 0056c700 */
  <tokio::runtime::time::entry::TimerEntry_as_core::ops::drop::Drop>::drop();
  if (*param_1 == 0) {
    plVar3 = (long *)param_1[1];
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
      drop_slow();
    }
  }
  else {
    plVar3 = (long *)param_1[1];
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 0056c6a0 to 0056c6c7 has its CatchHandler @ 0056c6f8 */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>
      ::drop_slow();
    }
  }
  if ((param_1[4] != 0) && (param_1[9] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0056c6e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[9] + 0x18))(param_1[10]);
    return;
  }
  return;
}


// ===== 0056c734  FUN_0056c734 =====

void FUN_0056c734(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*param_1 == 0) {
    plVar3 = (long *)param_1[1];
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
      drop_slow();
      return;
    }
  }
  else {
    plVar3 = (long *)param_1[1];
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>
      ::drop_slow();
      return;
    }
  }
  return;
}


// ===== 0056c780  FUN_0056c780 =====

void FUN_0056c780(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* try { // try from 0056c7a0 to 0056c7a3 has its CatchHandler @ 0056c7e0 */
    (**(code **)(*(long *)(param_1 + 0x10) + 0x18))(*(undefined8 *)(param_1 + 0x18));
  }
  plVar3 = *(long **)(param_1 + 0x20);
  if (plVar3 != (long *)0x0) {
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow((undefined8 *)(param_1 + 0x20));
      return;
    }
  }
  return;
}


// ===== 0056c818  FUN_0056c818 =====

void FUN_0056c818(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  void *__ptr;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int local_310 [180];
  
  iVar1 = tokio::runtime::task::harness::can_read_output(param_1,param_1 + 0x300);
  if (iVar1 != 0) {
    memcpy(local_310,(void *)(param_1 + 0x30),0x2d0);
    *(undefined4 *)(param_1 + 0x30) = 2;
    if (local_310[0] != 1) {
                    /* try { // try from 0056c8ec to 0056c903 has its CatchHandler @ 0056c940 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                ("JoinHandle polled after completion",0x45,
                 &PTR_s__root__cargo_registry_src_index__00ad08f8);
    }
    lVar6 = *(long *)(param_1 + 0x40);
    lVar5 = *(long *)(param_1 + 0x38);
    lVar2 = *(long *)(param_1 + 0x48);
    if (((*param_2 == 0) && (param_2[1] != 0)) && (__ptr = (void *)param_2[2], __ptr != (void *)0x0)
       ) {
      puVar4 = (undefined8 *)param_2[3];
      pcVar3 = (code *)*puVar4;
      if (pcVar3 != (code *)0x0) {
                    /* try { // try from 0056c8cc to 0056c8d3 has its CatchHandler @ 0056c908 */
        (*pcVar3)(__ptr);
      }
      if (puVar4[1] != 0) {
        free(__ptr);
      }
    }
    *param_2 = 0;
    param_2[2] = lVar6;
    param_2[1] = lVar5;
    param_2[3] = lVar2;
  }
  return;
}


// ===== 0056c964  FUN_0056c964 =====

void FUN_0056c964(long param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined4 local_310 [180];
  undefined8 local_28;
  
  auVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::
           transition_to_join_handle_dropped();
  if ((auVar2 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
    local_310[0] = 2;
                    /* try { // try from 0056c998 to 0056c99b has its CatchHandler @ 0056ca48 */
    local_28 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                         (*(undefined8 *)(param_1 + 0x28));
                    /* try { // try from 0056c9a0 to 0056c9a7 has its CatchHandler @ 0056ca28 */
    FUN_0057153c(param_1 + 0x30);
    memcpy((void *)(param_1 + 0x30),local_310,0x2d0);
                    /* try { // try from 0056c9b8 to 0056c9bf has its CatchHandler @ 0056ca20 */
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_28);
  }
  if ((auVar2 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
  }
  else {
    <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::set_waker
              (param_1 + 0x300,0);
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
  }
  if (iVar1 == 0) {
    return;
  }
  FUN_0056bd28(param_1);
  return;
}


// ===== 0056cab8  FUN_0056cab8 =====

void FUN_0056cab8(long param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined ***pppuVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined *local_618;
  long lStack_610;
  undefined **local_608;
  undefined **local_600;
  undefined8 uStack_5f8;
  undefined8 local_5e8;
  undefined8 local_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined4 local_318 [2];
  undefined8 local_310;
  undefined8 local_308;
  ulong local_300;
  undefined8 local_48;
  undefined **local_28;
  
  bVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_running()
  ;
  if (1 < bVar1) {
    if (bVar1 == 2) {
      return;
    }
    goto LAB_0056cb54;
  }
  if (bVar1 == 0) {
    local_618 = PTR_WAKER_VTABLE_00b00d40;
    local_608 = &local_618;
    uStack_5f8 = 0;
                    /* try { // try from 0056cb04 to 0056cb0f has its CatchHandler @ 0056ce70 */
    lStack_610 = param_1;
    local_600 = local_608;
    uVar3 = FUN_00572764(param_1 + 0x20,&local_608);
    if ((uVar3 & 1) == 0) {
      local_310 = 0;
      local_308 = 0;
      local_318[0] = 1;
      local_300 = uVar3 & 0xffffffff;
                    /* try { // try from 0056cc10 to 0056cc17 has its CatchHandler @ 0056cd80 */
      local_5e8 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                            (*(undefined8 *)(param_1 + 0x28));
                    /* try { // try from 0056cc1c to 0056cc23 has its CatchHandler @ 0056cd60 */
      FUN_0057153c(param_1 + 0x30);
      memcpy((void *)(param_1 + 0x30),local_318,0x2d0);
                    /* try { // try from 0056cc34 to 0056cc3b has its CatchHandler @ 0056cd58 */
      <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_5e8);
      goto LAB_0056cc3c;
    }
    bVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_idle
                      (param_1);
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        return;
      }
      <alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>as_tokio::runtime::task::Schedule>
      ::schedule(param_1 + 0x20,param_1);
      iVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
      if (iVar2 == 0) {
        return;
      }
LAB_0056cb54:
      FUN_0056bd28(param_1);
      return;
    }
    if (bVar1 == 2) goto LAB_0056cb54;
    local_318[0] = 2;
                    /* try { // try from 0056cc70 to 0056cc73 has its CatchHandler @ 0056cd38 */
    local_48 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                         (*(undefined8 *)(param_1 + 0x28));
                    /* try { // try from 0056cc78 to 0056cc7f has its CatchHandler @ 0056cd04 */
    FUN_0057153c(param_1 + 0x30);
    memcpy((void *)(param_1 + 0x30),local_318,0x2d0);
                    /* try { // try from 0056cc90 to 0056cc97 has its CatchHandler @ 0056ccdc */
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_48);
    local_5e0 = *(undefined8 *)(param_1 + 0x28);
    local_5d8 = 0;
    local_5e8 = CONCAT44(local_5e8._4_4_,1);
    uStack_5d0 = extraout_x1_00;
                    /* try { // try from 0056ccb0 to 0056ccb7 has its CatchHandler @ 0056cd24 */
    local_28 = (undefined **)
               <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                         (local_5e0);
                    /* try { // try from 0056ccbc to 0056ccc3 has its CatchHandler @ 0056cce4 */
    FUN_0057153c(param_1 + 0x30);
    memcpy((void *)(param_1 + 0x30),&local_5e8,0x2d0);
    pppuVar4 = &local_28;
  }
  else {
    local_318[0] = 2;
                    /* try { // try from 0056cb80 to 0056cb83 has its CatchHandler @ 0056ce50 */
    local_618 = (undefined *)
                <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                          (*(undefined8 *)(param_1 + 0x28));
                    /* try { // try from 0056cb88 to 0056cb8f has its CatchHandler @ 0056ce18 */
    FUN_0057153c(param_1 + 0x30);
    memcpy((void *)(param_1 + 0x30),local_318,0x2d0);
                    /* try { // try from 0056cba0 to 0056cba7 has its CatchHandler @ 0056cdf0 */
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_618);
    local_5e0 = *(undefined8 *)(param_1 + 0x28);
    local_5d8 = 0;
    local_5e8 = CONCAT44(local_5e8._4_4_,1);
    uStack_5d0 = extraout_x1;
                    /* try { // try from 0056cbc0 to 0056cbc7 has its CatchHandler @ 0056ce38 */
    local_608 = (undefined **)
                <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                          (local_5e0);
                    /* try { // try from 0056cbcc to 0056cbd3 has its CatchHandler @ 0056cdf8 */
    FUN_0057153c(param_1 + 0x30);
    memcpy((void *)(param_1 + 0x30),&local_5e8,0x2d0);
    pppuVar4 = &local_608;
  }
  <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(pppuVar4);
LAB_0056cc3c:
  FUN_0056cea8(param_1);
  return;
}


// ===== 0056cea8  FUN_0056cea8 =====

void FUN_0056cea8(long param_1)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long local_318;
  undefined4 local_310 [180];
  undefined8 local_40;
  undefined8 local_38;
  
  uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_complete
                    ();
  if ((uVar2 >> 3 & 1) == 0) {
    local_310[0] = 2;
                    /* try { // try from 0056ced4 to 0056ced7 has its CatchHandler @ 0056cfbc */
    local_38 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                         (*(undefined8 *)(param_1 + 0x28));
                    /* try { // try from 0056cedc to 0056cee3 has its CatchHandler @ 0056cf9c */
    FUN_0057153c(param_1 + 0x30);
    memcpy((void *)(param_1 + 0x30),local_310,0x2d0);
                    /* try { // try from 0056cef4 to 0056cf23 has its CatchHandler @ 0056d010 */
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_38);
  }
  else if ((uVar2 >> 4 & 1) != 0) {
    <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::wake_join
              (param_1 + 0x300);
    uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::
            unset_waker_after_complete(param_1);
    if ((uVar2 >> 3 & 1) == 0) {
      <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::set_waker
                (param_1 + 0x300,0);
    }
  }
  if (*(long *)(param_1 + 800) != 0) {
    local_40 = *(undefined8 *)(param_1 + 0x28);
                    /* try { // try from 0056cf4c to 0056cf57 has its CatchHandler @ 0056cfd0 */
    (**(code **)(*(long *)(param_1 + 0x328) + 0x28))
              (*(long *)(param_1 + 800) +
               (*(long *)(*(long *)(param_1 + 0x328) + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
               &local_40);
  }
  local_318 = param_1;
  lVar3 = <alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>as_tokio::runtime::task::Schedule>
          ::release(param_1 + 0x20,&local_318);
  uVar1 = 1;
  if (lVar3 != 0) {
    uVar1 = 2;
  }
  uVar4 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_terminal
                    (param_1,uVar1);
  if ((uVar4 & 1) != 0) {
    FUN_0056bd28(param_1);
  }
  return;
}


// ===== 0056d074  FUN_0056d074 =====

void FUN_0056d074(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 extraout_x1;
  undefined4 local_5d8 [2];
  undefined8 local_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined4 local_308 [180];
  undefined8 local_38;
  undefined8 local_18;
  
  uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_shutdown
                    ();
  if ((uVar2 & 1) == 0) {
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
    if (iVar1 != 0) {
      FUN_0056bd28(param_1);
      return;
    }
  }
  else {
    local_308[0] = 2;
                    /* try { // try from 0056d0a4 to 0056d0a7 has its CatchHandler @ 0056d1b4 */
    local_38 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                         (*(undefined8 *)(param_1 + 0x28));
                    /* try { // try from 0056d0ac to 0056d0b3 has its CatchHandler @ 0056d17c */
    FUN_0057153c(param_1 + 0x30);
    memcpy((void *)(param_1 + 0x30),local_308,0x2d0);
                    /* try { // try from 0056d0c4 to 0056d0cb has its CatchHandler @ 0056d154 */
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_38);
    local_5d0 = *(undefined8 *)(param_1 + 0x28);
    local_5c8 = 0;
    local_5d8[0] = 1;
    uStack_5c0 = extraout_x1;
                    /* try { // try from 0056d0e4 to 0056d0eb has its CatchHandler @ 0056d19c */
    local_18 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                         (local_5d0);
                    /* try { // try from 0056d0f0 to 0056d0f7 has its CatchHandler @ 0056d15c */
    FUN_0057153c(param_1 + 0x30);
    memcpy((void *)(param_1 + 0x30),local_5d8,0x2d0);
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_18);
    FUN_0056cea8(param_1);
  }
  return;
}


// ===== 0056d1d4  FUN_0056d1d4 =====

void FUN_0056d1d4(long param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined4 local_310 [180];
  undefined8 local_28;
  
  auVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::
           transition_to_join_handle_dropped();
  if ((auVar2 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
    local_310[0] = 2;
                    /* try { // try from 0056d208 to 0056d20b has its CatchHandler @ 0056d2b8 */
    local_28 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                         (*(undefined8 *)(param_1 + 0x28));
                    /* try { // try from 0056d210 to 0056d217 has its CatchHandler @ 0056d298 */
    FUN_0057153c(param_1 + 0x30);
    memcpy((void *)(param_1 + 0x30),local_310,0x2d0);
                    /* try { // try from 0056d228 to 0056d22f has its CatchHandler @ 0056d290 */
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_28);
  }
  if ((auVar2 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
  }
  else {
    <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::set_waker
              (param_1 + 0x300,0);
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
  }
  if (iVar1 == 0) {
    return;
  }
  FUN_0056be40(param_1);
  return;
}


// ===== 0056d328  FUN_0056d328 =====

void FUN_0056d328(long param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined ***pppuVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined *local_618;
  long lStack_610;
  undefined **local_608;
  undefined **local_600;
  undefined8 uStack_5f8;
  undefined8 local_5e8;
  undefined8 local_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined4 local_318 [2];
  undefined8 local_310;
  undefined8 local_308;
  ulong local_300;
  undefined8 local_48;
  undefined **local_28;
  
  bVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_running()
  ;
  if (1 < bVar1) {
    if (bVar1 == 2) {
      return;
    }
    goto LAB_0056d3c4;
  }
  if (bVar1 == 0) {
    local_618 = PTR_WAKER_VTABLE_00b00d40;
    local_608 = &local_618;
    uStack_5f8 = 0;
                    /* try { // try from 0056d374 to 0056d37f has its CatchHandler @ 0056d6e0 */
    lStack_610 = param_1;
    local_600 = local_608;
    uVar3 = FUN_00572764(param_1 + 0x20,&local_608);
    if ((uVar3 & 1) == 0) {
      local_310 = 0;
      local_308 = 0;
      local_318[0] = 1;
      local_300 = uVar3 & 0xffffffff;
                    /* try { // try from 0056d480 to 0056d487 has its CatchHandler @ 0056d5f0 */
      local_5e8 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                            (*(undefined8 *)(param_1 + 0x28));
                    /* try { // try from 0056d48c to 0056d493 has its CatchHandler @ 0056d5d0 */
      FUN_0057153c(param_1 + 0x30);
      memcpy((void *)(param_1 + 0x30),local_318,0x2d0);
                    /* try { // try from 0056d4a4 to 0056d4ab has its CatchHandler @ 0056d5c8 */
      <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_5e8);
      goto LAB_0056d4ac;
    }
    bVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_idle
                      (param_1);
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        return;
      }
      <alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>as_tokio::runtime::task::Schedule>
      ::yield_now(param_1 + 0x20,param_1);
      iVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
      if (iVar2 == 0) {
        return;
      }
LAB_0056d3c4:
      FUN_0056be40(param_1);
      return;
    }
    if (bVar1 == 2) goto LAB_0056d3c4;
    local_318[0] = 2;
                    /* try { // try from 0056d4e0 to 0056d4e3 has its CatchHandler @ 0056d5a8 */
    local_48 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                         (*(undefined8 *)(param_1 + 0x28));
                    /* try { // try from 0056d4e8 to 0056d4ef has its CatchHandler @ 0056d574 */
    FUN_0057153c(param_1 + 0x30);
    memcpy((void *)(param_1 + 0x30),local_318,0x2d0);
                    /* try { // try from 0056d500 to 0056d507 has its CatchHandler @ 0056d54c */
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_48);
    local_5e0 = *(undefined8 *)(param_1 + 0x28);
    local_5d8 = 0;
    local_5e8 = CONCAT44(local_5e8._4_4_,1);
    uStack_5d0 = extraout_x1_00;
                    /* try { // try from 0056d520 to 0056d527 has its CatchHandler @ 0056d594 */
    local_28 = (undefined **)
               <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                         (local_5e0);
                    /* try { // try from 0056d52c to 0056d533 has its CatchHandler @ 0056d554 */
    FUN_0057153c(param_1 + 0x30);
    memcpy((void *)(param_1 + 0x30),&local_5e8,0x2d0);
    pppuVar4 = &local_28;
  }
  else {
    local_318[0] = 2;
                    /* try { // try from 0056d3f0 to 0056d3f3 has its CatchHandler @ 0056d6c0 */
    local_618 = (undefined *)
                <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                          (*(undefined8 *)(param_1 + 0x28));
                    /* try { // try from 0056d3f8 to 0056d3ff has its CatchHandler @ 0056d688 */
    FUN_0057153c(param_1 + 0x30);
    memcpy((void *)(param_1 + 0x30),local_318,0x2d0);
                    /* try { // try from 0056d410 to 0056d417 has its CatchHandler @ 0056d660 */
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_618);
    local_5e0 = *(undefined8 *)(param_1 + 0x28);
    local_5d8 = 0;
    local_5e8 = CONCAT44(local_5e8._4_4_,1);
    uStack_5d0 = extraout_x1;
                    /* try { // try from 0056d430 to 0056d437 has its CatchHandler @ 0056d6a8 */
    local_608 = (undefined **)
                <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                          (local_5e0);
                    /* try { // try from 0056d43c to 0056d443 has its CatchHandler @ 0056d668 */
    FUN_0057153c(param_1 + 0x30);
    memcpy((void *)(param_1 + 0x30),&local_5e8,0x2d0);
    pppuVar4 = &local_608;
  }
  <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(pppuVar4);
LAB_0056d4ac:
  FUN_0056d718(param_1);
  return;
}


// ===== 0056d718  FUN_0056d718 =====

void FUN_0056d718(long param_1)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long local_318;
  undefined4 local_310 [180];
  undefined8 local_40;
  undefined8 local_38;
  
  uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_complete
                    ();
  if ((uVar2 >> 3 & 1) == 0) {
    local_310[0] = 2;
                    /* try { // try from 0056d744 to 0056d747 has its CatchHandler @ 0056d82c */
    local_38 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                         (*(undefined8 *)(param_1 + 0x28));
                    /* try { // try from 0056d74c to 0056d753 has its CatchHandler @ 0056d80c */
    FUN_0057153c(param_1 + 0x30);
    memcpy((void *)(param_1 + 0x30),local_310,0x2d0);
                    /* try { // try from 0056d764 to 0056d793 has its CatchHandler @ 0056d880 */
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_38);
  }
  else if ((uVar2 >> 4 & 1) != 0) {
    <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::wake_join
              (param_1 + 0x300);
    uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::
            unset_waker_after_complete(param_1);
    if ((uVar2 >> 3 & 1) == 0) {
      <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::set_waker
                (param_1 + 0x300,0);
    }
  }
  if (*(long *)(param_1 + 800) != 0) {
    local_40 = *(undefined8 *)(param_1 + 0x28);
                    /* try { // try from 0056d7bc to 0056d7c7 has its CatchHandler @ 0056d840 */
    (**(code **)(*(long *)(param_1 + 0x328) + 0x28))
              (*(long *)(param_1 + 800) +
               (*(long *)(*(long *)(param_1 + 0x328) + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
               &local_40);
  }
  local_318 = param_1;
  lVar3 = <alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>as_tokio::runtime::task::Schedule>
          ::release(param_1 + 0x20,&local_318);
  uVar1 = 1;
  if (lVar3 != 0) {
    uVar1 = 2;
  }
  uVar4 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_terminal
                    (param_1,uVar1);
  if ((uVar4 & 1) != 0) {
    FUN_0056be40(param_1);
  }
  return;
}


// ===== 0056d8e4  FUN_0056d8e4 =====

void FUN_0056d8e4(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 extraout_x1;
  undefined4 local_5d8 [2];
  undefined8 local_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined4 local_308 [180];
  undefined8 local_38;
  undefined8 local_18;
  
  uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_shutdown
                    ();
  if ((uVar2 & 1) == 0) {
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
    if (iVar1 != 0) {
      FUN_0056be40(param_1);
      return;
    }
  }
  else {
    local_308[0] = 2;
                    /* try { // try from 0056d914 to 0056d917 has its CatchHandler @ 0056da24 */
    local_38 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                         (*(undefined8 *)(param_1 + 0x28));
                    /* try { // try from 0056d91c to 0056d923 has its CatchHandler @ 0056d9ec */
    FUN_0057153c(param_1 + 0x30);
    memcpy((void *)(param_1 + 0x30),local_308,0x2d0);
                    /* try { // try from 0056d934 to 0056d93b has its CatchHandler @ 0056d9c4 */
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_38);
    local_5d0 = *(undefined8 *)(param_1 + 0x28);
    local_5c8 = 0;
    local_5d8[0] = 1;
    uStack_5c0 = extraout_x1;
                    /* try { // try from 0056d954 to 0056d95b has its CatchHandler @ 0056da0c */
    local_18 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                         (local_5d0);
                    /* try { // try from 0056d960 to 0056d967 has its CatchHandler @ 0056d9cc */
    FUN_0057153c(param_1 + 0x30);
    memcpy((void *)(param_1 + 0x30),local_5d8,0x2d0);
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_18);
    FUN_0056d718(param_1);
  }
  return;
}


// ===== 0056da44  FUN_0056da44 =====

undefined1  [16] FUN_0056da44(byte *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  pbVar5 = param_1 + param_2;
  pbVar8 = (byte *)0x0;
  pbVar6 = param_1;
  if (param_2 != 0) {
    do {
      pbVar7 = pbVar6 + 1;
      uVar10 = (uint)*pbVar6;
      uVar11 = (ulong)uVar10;
      if ((char)*pbVar6 < '\0') {
        if (uVar10 < 0xe0) {
          pbVar7 = pbVar6 + 2;
          uVar11 = (ulong)(pbVar6[1] & 0x3f | (uVar10 & 0x1f) << 6);
        }
        else {
          uVar4 = pbVar6[2] & 0x3f | (pbVar6[1] & 0x3f) << 6;
          if (uVar10 < 0xf0) {
            uVar11 = (ulong)(uVar4 | (uVar10 & 0x1f) << 0xc);
            pbVar7 = pbVar6 + 3;
          }
          else {
            uVar11 = (ulong)(pbVar6[3] & 0x3f | uVar4 << 6 | (uVar10 & 7) << 0x12);
            pbVar7 = pbVar6 + 4;
          }
        }
      }
      uVar10 = (uint)uVar11;
      pbVar9 = pbVar7 + ((long)pbVar8 - (long)pbVar6);
      if ((4 < uVar10 - 9) && (uVar10 != 0x20)) {
        if (uVar10 < 0x85) goto joined_r0x0056db7c;
        uVar4 = uVar10 >> 8;
        if (uVar4 < 0x20) {
          if (uVar4 == 0) {
            bVar1 = PTR_WHITESPACE_MAP_00b00d70[uVar11 & 0xff];
joined_r0x0056db54:
            if ((bVar1 & 1) == 0) goto joined_r0x0056db7c;
          }
          else if ((uVar4 != 0x16) || (uVar10 != 0x1680)) goto joined_r0x0056db7c;
        }
        else {
          if (uVar4 == 0x20) {
            bVar1 = (byte)PTR_WHITESPACE_MAP_00b00d70[uVar11 & 0xff] >> 1;
            goto joined_r0x0056db54;
          }
          if ((uVar4 != 0x30) || (uVar10 != 0x3000)) goto joined_r0x0056db7c;
        }
      }
      pbVar6 = pbVar7;
      pbVar8 = pbVar9;
    } while (pbVar7 != pbVar5);
    pbVar8 = (byte *)0x0;
    pbVar9 = (byte *)0x0;
LAB_0056db64:
    auVar12._8_8_ = (long)pbVar9 - (long)pbVar8;
    auVar12._0_8_ = param_1 + (long)pbVar8;
    return auVar12;
  }
  pbVar9 = pbVar8;
  pbVar7 = param_1;
  pbVar8 = (byte *)0x0;
joined_r0x0056db7c:
  do {
    do {
      pbVar6 = pbVar5;
      if (pbVar7 == pbVar6) goto LAB_0056db64;
      pbVar5 = pbVar6 + -1;
      bVar1 = *pbVar5;
      uVar11 = (ulong)(char)bVar1;
      if ((char)bVar1 < 0) {
        pbVar5 = pbVar6 + -2;
        bVar2 = *pbVar5;
        uVar10 = (uint)(char)bVar2;
        if ((int)(uVar10 + 0x40) < 0 == SCARRY4(uVar10,0x40)) {
          uVar10 = uVar10 & 0x1f;
        }
        else {
          pbVar5 = pbVar6 + -3;
          bVar3 = *pbVar5;
          if ((char)bVar3 + 0x40 < 0 == SCARRY4((int)(char)bVar3,0x40)) {
            uVar10 = (int)(char)bVar3 & 0xf;
          }
          else {
            pbVar5 = pbVar6 + -4;
            uVar10 = bVar3 & 0x3f | (*pbVar5 & 7) << 6;
          }
          uVar10 = bVar2 & 0x3f | uVar10 << 6;
        }
        uVar11 = (ulong)((int)(char)bVar1 & 0x3fU | uVar10 << 6);
      }
      uVar10 = (uint)uVar11;
    } while ((uVar10 - 9 < 5) || (uVar10 == 0x20));
    if (uVar10 < 0x85) goto LAB_0056dc74;
    uVar4 = uVar10 >> 8;
    if (uVar4 < 0x20) {
      if (uVar4 == 0) {
        bVar1 = PTR_WHITESPACE_MAP_00b00d70[uVar11 & 0xff];
joined_r0x0056dc70:
        if ((bVar1 & 1) == 0) {
LAB_0056dc74:
          auVar13._8_8_ = pbVar6 + (long)(pbVar9 + (-(long)pbVar8 - (long)pbVar7));
          auVar13._0_8_ = param_1 + (long)pbVar8;
          return auVar13;
        }
      }
      else if ((uVar4 != 0x16) || (uVar10 != 0x1680)) goto LAB_0056dc74;
      goto joined_r0x0056db7c;
    }
    if (uVar4 == 0x20) {
      bVar1 = (byte)PTR_WHITESPACE_MAP_00b00d70[uVar11 & 0xff] >> 1;
      goto joined_r0x0056dc70;
    }
    if ((uVar4 != 0x30) || (uVar10 != 0x3000)) goto LAB_0056dc74;
  } while( true );
}


// ===== 0056dc88  FUN_0056dc88 =====

void FUN_0056dc88(ulong *param_1,long param_2,long param_3,undefined4 *param_4,ulong param_5)

{
  undefined4 *__dest;
  void *pvVar1;
  undefined2 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  size_t __n;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  size_t *psVar11;
  ulong uVar12;
  undefined4 *__dest_00;
  ulong *puVar13;
  void *pvVar14;
  undefined8 uVar15;
  ulong local_78;
  ulong uStack_70;
  long local_68;
  
  if (param_3 == 0) {
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 1;
    return;
  }
  uVar12 = *(ulong *)(param_2 + 0x10);
  uVar9 = param_3 * 0x18 - 0x18;
  uVar8 = (uVar9 >> 3) * -0x5555555555555555;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_5;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar8;
  uVar8 = param_5 * uVar8;
  uVar10 = uVar12 + uVar8;
  if ((SUB168(auVar3 * auVar4,8) == 0) && (!CARRY8(uVar12,uVar8))) {
    pvVar14 = *(void **)(param_2 + 8);
    lVar6 = param_2 + 0x18;
    uVar8 = uVar9;
    do {
      if (uVar8 == 0) {
        if ((long)uVar10 < 0) {
          uVar15 = 0;
LAB_0056dd40:
                    /* WARNING: Subroutine does not return */
          alloc::raw_vec::handle_error(uVar15,uVar10);
        }
        local_78 = uVar10;
        if (uVar10 == 0) {
          uStack_70 = 1;
          if (uVar12 == 0) goto LAB_0056dd90;
LAB_0056de84:
                    /* try { // try from 0056de84 to 0056de9b has its CatchHandler @ 0056e014 */
          local_68 = 0;
          FUN_00558b5c(&local_78,0,uVar12,1,1);
LAB_0056dd9c:
          lVar6 = local_68;
          uVar8 = uStack_70;
          memcpy((void *)(uStack_70 + local_68),pvVar14,uVar12);
        }
        else {
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          uVar15 = 1;
          uStack_70 = FUN_004b25a4(uVar10,1);
          if (uStack_70 == 0) goto LAB_0056dd40;
          if (uVar10 < uVar12) goto LAB_0056de84;
LAB_0056dd90:
          local_68 = 0;
          lVar6 = 0;
          uVar8 = uStack_70;
          if (uVar12 != 0) goto LAB_0056dd9c;
        }
        __dest_00 = (undefined4 *)(uVar8 + lVar6 + uVar12);
        uVar8 = uVar10 - (lVar6 + uVar12);
        if ((long)param_5 < 2) {
          if (param_5 == 0) {
            if (param_3 == 1) goto LAB_0056dfc4;
            psVar11 = (size_t *)(param_2 + 0x28);
            goto LAB_0056df44;
          }
          if (param_5 == 1) {
            if (param_3 == 1) goto LAB_0056dfc4;
            puVar13 = (ulong *)(param_2 + 0x28);
            goto LAB_0056de38;
          }
        }
        else {
          if (param_5 == 2) {
            if (param_3 == 1) goto LAB_0056dfc4;
            puVar13 = (ulong *)(param_2 + 0x28);
            goto LAB_0056deb0;
          }
          if (param_5 == 3) {
            if (param_3 == 1) goto LAB_0056dfc4;
            puVar13 = (ulong *)(param_2 + 0x28);
            goto LAB_0056def4;
          }
          if (param_5 == 4) {
            if (param_3 == 1) goto LAB_0056dfc4;
            puVar13 = (ulong *)(param_2 + 0x28);
            goto LAB_0056dde8;
          }
        }
        if (param_3 == 1) goto LAB_0056dfc4;
        puVar13 = (ulong *)(param_2 + 0x28);
        goto LAB_0056df80;
      }
      puVar13 = (ulong *)(lVar6 + 0x10);
      lVar6 = lVar6 + 0x18;
      uVar8 = uVar8 - 0x18;
      bVar5 = CARRY8(*puVar13,uVar10);
      uVar10 = *puVar13 + uVar10;
    } while (!bVar5);
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed
            ("attempt to join into collection with len > usize::MAX",0x35,
             &PTR_s__nix_store_8006w282fgsx3273c878b_00ad09e0);
  while( true ) {
    memcpy(__dest_00,(void *)psVar11[-1],__n);
    uVar9 = uVar9 - 0x18;
    psVar11 = psVar11 + 3;
    __dest_00 = (undefined4 *)((long)__dest_00 + __n);
    if (uVar9 == 0) break;
LAB_0056df44:
    __n = *psVar11;
    bVar5 = uVar8 < __n;
    uVar8 = uVar8 - __n;
    if (bVar5) goto LAB_0056dff8;
  }
  goto LAB_0056dfc4;
  while( true ) {
    pvVar14 = (void *)puVar13[-1];
    uVar12 = *puVar13;
    uVar7 = uVar8 - 1;
    uVar8 = uVar7 - uVar12;
    *(undefined1 *)__dest_00 = *(undefined1 *)param_4;
    if (uVar7 < uVar12) goto LAB_0056dff8;
    pvVar1 = (void *)((long)__dest_00 + 1);
    puVar13 = puVar13 + 3;
    __dest_00 = (undefined4 *)((long)pvVar1 + uVar12);
    memcpy(pvVar1,pvVar14,uVar12);
    uVar9 = uVar9 - 0x18;
    if (uVar9 == 0) break;
LAB_0056de38:
    if (uVar8 == 0) goto LAB_0056dff8;
  }
  goto LAB_0056dfc4;
  while( true ) {
    pvVar14 = (void *)puVar13[-1];
    uVar7 = *puVar13;
    *(undefined2 *)__dest_00 = *(undefined2 *)param_4;
    uVar8 = uVar12 - uVar7;
    if (uVar12 < uVar7) goto LAB_0056dff8;
    pvVar1 = (void *)((long)__dest_00 + 2);
    puVar13 = puVar13 + 3;
    __dest_00 = (undefined4 *)((long)pvVar1 + uVar7);
    memcpy(pvVar1,pvVar14,uVar7);
    uVar9 = uVar9 - 0x18;
    if (uVar9 == 0) break;
LAB_0056deb0:
    uVar12 = uVar8 - 2;
    if (uVar8 < 2) goto LAB_0056dff8;
  }
  goto LAB_0056dfc4;
  while( true ) {
    pvVar14 = (void *)puVar13[-1];
    uVar7 = *puVar13;
    uVar2 = *(undefined2 *)param_4;
    *(undefined1 *)((long)__dest_00 + 2) = *(undefined1 *)((long)param_4 + 2);
    uVar8 = uVar12 - uVar7;
    *(undefined2 *)__dest_00 = uVar2;
    if (uVar12 < uVar7) goto LAB_0056dff8;
    pvVar1 = (void *)((long)__dest_00 + 3);
    puVar13 = puVar13 + 3;
    __dest_00 = (undefined4 *)((long)pvVar1 + uVar7);
    memcpy(pvVar1,pvVar14,uVar7);
    uVar9 = uVar9 - 0x18;
    if (uVar9 == 0) break;
LAB_0056def4:
    uVar12 = uVar8 - 3;
    if (uVar8 < 3) goto LAB_0056dff8;
  }
  goto LAB_0056dfc4;
  while( true ) {
    pvVar14 = (void *)puVar13[-1];
    uVar7 = *puVar13;
    *__dest_00 = *param_4;
    uVar8 = uVar12 - uVar7;
    if (uVar12 < uVar7) goto LAB_0056dff8;
    __dest = __dest_00 + 1;
    puVar13 = puVar13 + 3;
    __dest_00 = (undefined4 *)((long)__dest + uVar7);
    memcpy(__dest,pvVar14,uVar7);
    uVar9 = uVar9 - 0x18;
    if (uVar9 == 0) break;
LAB_0056dde8:
    uVar12 = uVar8 - 4;
    if (uVar8 < 4) goto LAB_0056dff8;
  }
  goto LAB_0056dfc4;
  while( true ) {
    pvVar14 = (void *)puVar13[-1];
    uVar7 = *puVar13;
    memcpy(__dest_00,param_4,param_5);
    uVar8 = uVar12 - uVar7;
    if (uVar12 < uVar7) goto LAB_0056dff8;
    pvVar1 = (void *)((long)__dest_00 + param_5);
    puVar13 = puVar13 + 3;
    __dest_00 = (undefined4 *)((long)pvVar1 + uVar7);
    memcpy(pvVar1,pvVar14,uVar7);
    uVar9 = uVar9 - 0x18;
    if (uVar9 == 0) break;
LAB_0056df80:
    uVar12 = uVar8 - param_5;
    if (uVar8 < param_5) {
LAB_0056dff8:
                    /* try { // try from 0056dff8 to 0056e00f has its CatchHandler @ 0056e014 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt("mid > len",0x13,&PTR_s__nix_store_8006w282fgsx3273c878b_00ad09c8);
    }
  }
LAB_0056dfc4:
  param_1[1] = uStack_70;
  *param_1 = local_78;
  param_1[2] = uVar10 - uVar8;
  return;
}


// ===== 0056e038  FUN_0056e038 =====

void FUN_0056e038(ulong *param_1,undefined8 *param_2,long param_3,undefined4 *param_4,ulong param_5)

{
  ulong *puVar1;
  undefined4 *__dest;
  undefined8 *puVar2;
  void *pvVar3;
  undefined2 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  size_t __n;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  void *pvVar11;
  ulong uVar12;
  ulong uVar13;
  size_t *psVar14;
  ulong uVar15;
  undefined4 *__dest_00;
  undefined8 *puVar16;
  undefined8 uVar17;
  ulong local_78;
  ulong uStack_70;
  long local_68;
  
  if (param_3 == 0) {
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 1;
    return;
  }
  uVar15 = param_2[1];
  uVar12 = param_3 * 0x10 - 0x10;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_5;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar12 >> 4;
  uVar9 = param_5 * (uVar12 >> 4);
  uVar13 = uVar15 + uVar9;
  if ((SUB168(auVar5 * auVar6,8) == 0) && (!CARRY8(uVar15,uVar9))) {
    pvVar11 = (void *)*param_2;
    puVar2 = param_2 + param_3 * 2;
    puVar16 = param_2 + 2;
    puVar10 = param_2 + 2;
    uVar9 = uVar12;
    do {
      if (uVar9 == 0) {
        if ((long)uVar13 < 0) {
          uVar17 = 0;
LAB_0056e0e8:
                    /* WARNING: Subroutine does not return */
          alloc::raw_vec::handle_error(uVar17,uVar13);
        }
        local_78 = uVar13;
        if (uVar13 == 0) {
          uStack_70 = 1;
          if (uVar15 == 0) goto LAB_0056e13c;
LAB_0056e228:
                    /* try { // try from 0056e228 to 0056e23f has its CatchHandler @ 0056e3a0 */
          local_68 = 0;
          FUN_00558b5c(&local_78,0,uVar15,1,1);
LAB_0056e148:
          lVar8 = local_68;
          uVar9 = uStack_70;
          memcpy((void *)(uStack_70 + local_68),pvVar11,uVar15);
        }
        else {
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          uVar17 = 1;
          uStack_70 = FUN_004b25a4(uVar13,1);
          if (uStack_70 == 0) goto LAB_0056e0e8;
          if (uVar13 < uVar15) goto LAB_0056e228;
LAB_0056e13c:
          local_68 = 0;
          lVar8 = 0;
          uVar9 = uStack_70;
          if (uVar15 != 0) goto LAB_0056e148;
        }
        __dest_00 = (undefined4 *)(uVar9 + lVar8 + uVar15);
        uVar9 = uVar13 - (lVar8 + uVar15);
        if ((long)param_5 < 2) {
          if (param_5 == 0) {
            if (param_3 == 1) goto LAB_0056e350;
            psVar14 = param_2 + 3;
            goto LAB_0056e2d8;
          }
          if (param_5 == 1) {
            if (param_3 != 1) goto LAB_0056e1e0;
            goto LAB_0056e350;
          }
        }
        else {
          if (param_5 == 2) {
            if (param_3 != 1) goto LAB_0056e250;
            goto LAB_0056e350;
          }
          if (param_5 == 3) {
            if (param_3 != 1) goto LAB_0056e28c;
            goto LAB_0056e350;
          }
          if (param_5 == 4) {
            if (param_3 != 1) goto LAB_0056e194;
            goto LAB_0056e350;
          }
        }
        if (param_3 != 1) goto LAB_0056e310;
        goto LAB_0056e350;
      }
      puVar1 = puVar10 + 1;
      puVar10 = puVar10 + 2;
      uVar9 = uVar9 - 0x10;
      bVar7 = CARRY8(*puVar1,uVar13);
      uVar13 = *puVar1 + uVar13;
    } while (!bVar7);
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed
            ("attempt to join into collection with len > usize::MAX",0x35,
             &PTR_s__nix_store_8006w282fgsx3273c878b_00ad09e0);
  while( true ) {
    memcpy(__dest_00,(void *)psVar14[-1],__n);
    uVar12 = uVar12 - 0x10;
    psVar14 = psVar14 + 2;
    __dest_00 = (undefined4 *)((long)__dest_00 + __n);
    if (uVar12 == 0) break;
LAB_0056e2d8:
    __n = *psVar14;
    bVar7 = uVar9 < __n;
    uVar9 = uVar9 - __n;
    if (bVar7) goto LAB_0056e384;
  }
  goto LAB_0056e350;
  while( true ) {
    puVar10 = puVar16 + 2;
    pvVar11 = (void *)*puVar16;
    uVar12 = puVar16[1];
    uVar15 = uVar9 - 1;
    uVar9 = uVar15 - uVar12;
    *(undefined1 *)__dest_00 = *(undefined1 *)param_4;
    if (uVar15 < uVar12) goto LAB_0056e384;
    pvVar3 = (void *)((long)__dest_00 + 1);
    __dest_00 = (undefined4 *)((long)pvVar3 + uVar12);
    memcpy(pvVar3,pvVar11,uVar12);
    puVar16 = puVar10;
    if (puVar10 == puVar2) break;
LAB_0056e1e0:
    if (uVar9 == 0) goto LAB_0056e384;
  }
  goto LAB_0056e350;
  while( true ) {
    puVar10 = puVar16 + 2;
    pvVar11 = (void *)*puVar16;
    uVar15 = puVar16[1];
    uVar9 = uVar12 - uVar15;
    *(undefined2 *)__dest_00 = *(undefined2 *)param_4;
    if (uVar12 < uVar15) goto LAB_0056e384;
    pvVar3 = (void *)((long)__dest_00 + 2);
    __dest_00 = (undefined4 *)((long)pvVar3 + uVar15);
    memcpy(pvVar3,pvVar11,uVar15);
    puVar16 = puVar10;
    if (puVar10 == puVar2) break;
LAB_0056e250:
    uVar12 = uVar9 - 2;
    if (uVar9 < 2) goto LAB_0056e384;
  }
  goto LAB_0056e350;
  while( true ) {
    puVar10 = puVar16 + 2;
    pvVar11 = (void *)*puVar16;
    uVar15 = puVar16[1];
    uVar4 = *(undefined2 *)param_4;
    uVar9 = uVar12 - uVar15;
    *(undefined1 *)((long)__dest_00 + 2) = *(undefined1 *)((long)param_4 + 2);
    *(undefined2 *)__dest_00 = uVar4;
    if (uVar12 < uVar15) goto LAB_0056e384;
    pvVar3 = (void *)((long)__dest_00 + 3);
    __dest_00 = (undefined4 *)((long)pvVar3 + uVar15);
    memcpy(pvVar3,pvVar11,uVar15);
    puVar16 = puVar10;
    if (puVar10 == puVar2) break;
LAB_0056e28c:
    uVar12 = uVar9 - 3;
    if (uVar9 < 3) goto LAB_0056e384;
  }
  goto LAB_0056e350;
  while( true ) {
    puVar10 = puVar16 + 2;
    pvVar11 = (void *)*puVar16;
    uVar15 = puVar16[1];
    uVar9 = uVar12 - uVar15;
    *__dest_00 = *param_4;
    if (uVar12 < uVar15) goto LAB_0056e384;
    __dest = __dest_00 + 1;
    __dest_00 = (undefined4 *)((long)__dest + uVar15);
    memcpy(__dest,pvVar11,uVar15);
    puVar16 = puVar10;
    if (puVar10 == puVar2) break;
LAB_0056e194:
    uVar12 = uVar9 - 4;
    if (uVar9 < 4) goto LAB_0056e384;
  }
  goto LAB_0056e350;
  while( true ) {
    puVar10 = puVar16 + 2;
    pvVar11 = (void *)*puVar16;
    uVar15 = puVar16[1];
    memcpy(__dest_00,param_4,param_5);
    uVar9 = uVar12 - uVar15;
    if (uVar12 < uVar15) goto LAB_0056e384;
    pvVar3 = (void *)((long)__dest_00 + param_5);
    __dest_00 = (undefined4 *)((long)pvVar3 + uVar15);
    memcpy(pvVar3,pvVar11,uVar15);
    puVar16 = puVar10;
    if (puVar10 == puVar2) break;
LAB_0056e310:
    uVar12 = uVar9 - param_5;
    if (uVar9 < param_5) {
LAB_0056e384:
                    /* try { // try from 0056e384 to 0056e39b has its CatchHandler @ 0056e3a0 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt("mid > len",0x13,&PTR_s__nix_store_8006w282fgsx3273c878b_00ad09c8);
    }
  }
LAB_0056e350:
  param_1[1] = uStack_70;
  *param_1 = local_78;
  param_1[2] = uVar13 - uVar9;
  return;
}


// ===== 0056e3c4  FUN_0056e3c4 =====

undefined8 FUN_0056e3c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 local_38;
  
  plVar7 = (long *)*param_1;
  do {
    lVar6 = *plVar7;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = lVar6 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (-1 < lVar6) {
    uVar4 = FUN_00572654(param_2,plVar7,0xcc,param_3);
                    /* try { // try from 0056e40c to 0056e41b has its CatchHandler @ 0056e484 */
    uVar5 = FUN_0056f3d4(plVar7 + 0x11,uVar4,uVar4);
                    /* try { // try from 0056e424 to 0056e42f has its CatchHandler @ 0056e460 */
    local_38 = param_3;
    <tokio::runtime::task_hooks::tokio::runtime::task_hooks::TaskHooks>::spawn
              (plVar7 + 0x3c,&local_38);
                    /* try { // try from 0056e430 to 0056e43b has its CatchHandler @ 0056e458 */
    <tokio::runtime::scheduler::multi_thread::worker::[3]::tokio::runtime::scheduler::multi_thread::handle::Handle>
    ::schedule_option_task_without_yield(plVar7 + 2,uVar5);
    return uVar4;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x56e458);
  (*pcVar3)();
}


// ===== 0056e4ac  FUN_0056e4ac =====

undefined8 FUN_0056e4ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 local_28;
  
  plVar6 = (long *)*param_1;
  do {
    lVar5 = *plVar6;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (-1 < lVar5) {
    uVar4 = FUN_00572544(param_2,plVar6,0xcc,param_3);
                    /* try { // try from 0056e4f8 to 0056e507 has its CatchHandler @ 0056e584 */
    lVar5 = FUN_0056f3d4(plVar6 + 0xf,uVar4,uVar4);
                    /* try { // try from 0056e510 to 0056e51b has its CatchHandler @ 0056e550 */
    local_28 = param_3;
    <tokio::runtime::task_hooks::tokio::runtime::task_hooks::TaskHooks>::spawn
              (plVar6 + 0x30,&local_28);
    if (lVar5 != 0) {
                    /* try { // try from 0056e520 to 0056e52b has its CatchHandler @ 0056e548 */
      <alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>as_tokio::runtime::task::Schedule>
      ::schedule(param_1,lVar5);
    }
    return uVar4;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x56e548);
  (*pcVar3)();
}


// ===== 0056e5ac  FUN_0056e5ac =====

void FUN_0056e5ac(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long local_60 [8];
  
                    /* try { // try from 0056e5c0 to 0056e5df has its CatchHandler @ 0056e614 */
  <rusqlite::inner_connection::rusqlite::inner_connection::InnerConnection>::close
            (local_60,param_1 + 8);
  if (local_60[0] != -1) {
    FUN_0056e97c(local_60);
  }
  plVar3 = *(long **)(param_1 + 8);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<*mut_libsqlite3_sys::bindings::sqlite3>>>
    ::drop_slow(param_1 + 8);
  }
  return;
}


// ===== 0056e648  FUN_0056e648 =====

void FUN_0056e648(long param_1)

{
  int iVar1;
  
  if ((param_1 != 0) &&
     (iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(),
     iVar1 != 0)) {
    <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::dealloc(param_1);
    return;
  }
  return;
}


// ===== 0056e680  FUN_0056e680 =====

void FUN_0056e680(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 0056e690 to 0056e693 has its CatchHandler @ 0056e6cc */
  FUN_005587d4();
  plVar3 = (long *)*param_1;
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::mpsc::chan::Chan<flux[2406cd06d16b4816]::persistence::worker::PersistenceWorkerCommand,tokio[8c8895dbfa691109]::sync::mpsc::unbounded::Semaphore>>>
    ::drop_slow(param_1);
    return;
  }
  return;
}


// ===== 0056e700  FUN_0056e700 =====

void FUN_0056e700(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 0056e718  FUN_0056e718 =====

void FUN_0056e718(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong local_80 [3];
  undefined8 local_68;
  ulong local_60;
  undefined8 local_58;
  long lStack_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38 [2];
  long local_28;
  
                    /* try { // try from 0056e72c to 0056e72f has its CatchHandler @ 0056e7f4 */
  <rusqlite::raw_statement::RawStatement_as_core::ops::drop::Drop>::drop();
  lVar4 = *(long *)(param_1 + 8);
  if (lVar4 == 0) {
    local_40 = 0;
  }
  else {
    local_68 = *(undefined8 *)(param_1 + 0x10);
    local_40 = *(undefined8 *)(param_1 + 0x18);
    local_80[1] = 0;
    local_58 = 0;
    local_80[2] = lVar4;
    lStack_50 = lVar4;
    local_48 = local_68;
  }
  local_80[0] = (ulong)(lVar4 != 0);
                    /* try { // try from 0056e764 to 0056e76f has its CatchHandler @ 0056e7f0 */
  local_60 = local_80[0];
  FUN_0055815c(local_38,local_80);
  while (local_38[0] != 0) {
    lVar4 = local_38[0] + local_28 * 0x20;
    if (0x10 < *(ulong *)(lVar4 + 0x18)) {
      free(*(void **)(lVar4 + 0x10));
    }
                    /* try { // try from 0056e774 to 0056e77f has its CatchHandler @ 0056e804 */
    FUN_0055815c(local_38,local_80);
  }
  plVar3 = *(long **)(param_1 + 0x20);
  if (plVar3 != (long *)0x0) {
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow((undefined8 *)(param_1 + 0x20));
      return;
    }
  }
  return;
}


// ===== 0056e83c  FUN_0056e83c =====

void FUN_0056e83c(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *__ptr;
  void *__ptr_00;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  long *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  pvVar4 = *(void **)(param_1 + 0x30);
  if (pvVar4 != (void *)0x0) {
    __ptr_00 = *(void **)((long)pvVar4 + 8);
    while (__ptr_00 != pvVar4) {
      uStack_88 = *(undefined8 *)((long)__ptr_00 + 0x18);
      local_90 = *(long **)((long)__ptr_00 + 0x10);
      uStack_78 = *(undefined8 *)((long)__ptr_00 + 0x28);
      uStack_80 = *(undefined8 *)((long)__ptr_00 + 0x20);
      pvVar5 = *(void **)((long)__ptr_00 + 8);
      local_50 = *(undefined8 *)((long)__ptr_00 + 0x50);
      uStack_68 = *(undefined8 *)((long)__ptr_00 + 0x38);
      local_70 = *(undefined8 *)((long)__ptr_00 + 0x30);
      uStack_58 = *(undefined8 *)((long)__ptr_00 + 0x48);
      uStack_60 = *(undefined8 *)((long)__ptr_00 + 0x40);
      do {
        lVar3 = *local_90;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(local_90,0x10);
        if (bVar2) {
          *local_90 = lVar3 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar3 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 0056e8a8 to 0056e8af has its CatchHandler @ 0056e948 */
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(&local_90);
      }
                    /* try { // try from 0056e8b0 to 0056e8b7 has its CatchHandler @ 0056e95c */
      FUN_0056e718(&uStack_80);
      free(__ptr_00);
      __ptr_00 = pvVar5;
    }
    free(pvVar4);
  }
  __ptr = (undefined8 *)*(void **)(param_1 + 0x38);
  while (__ptr != (undefined8 *)0x0) {
    pvVar4 = (void *)*__ptr;
    free(__ptr);
    __ptr = (undefined8 *)pvVar4;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    free((void *)(*(long *)(param_1 + 8) - (*(long *)(param_1 + 0x10) * 8 + 8)));
  }
  return;
}


// ===== 0056e97c  FUN_0056e97c =====

void FUN_0056e97c(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  void *__ptr;
  
  uVar1 = *param_1;
  uVar2 = uVar1 ^ 0x8000000000000000;
  if (-1 < (long)uVar1) {
    uVar2 = 0x14;
  }
  if ((long)uVar2 < 7) {
    if ((long)uVar2 < 5) {
      if (uVar2 != 0) {
        if (uVar2 != 2) {
          return;
        }
        __ptr = (void *)param_1[1];
        puVar3 = (undefined8 *)param_1[2];
        if ((code *)*puVar3 != (code *)0x0) {
                    /* try { // try from 0056ea1c to 0056ea23 has its CatchHandler @ 0056eabc */
          (*(code *)*puVar3)(__ptr);
        }
        goto LAB_0056ea90;
      }
      if (param_1[1] == 0xffffffffffffffff) {
        return;
      }
      if (param_1[1] == 0) {
        return;
      }
      goto LAB_0056ea54;
    }
    if ((uVar2 != 5) && (uVar2 != 6)) {
      return;
    }
  }
  else if ((long)uVar2 < 0xd) {
    if ((uVar2 != 7) && (uVar2 != 0xc)) {
      return;
    }
  }
  else if (uVar2 != 0xd) {
    if (uVar2 != 0xf) {
      if (uVar2 != 0x14) {
        return;
      }
      if (uVar1 != 0) {
        free((void *)param_1[1]);
      }
      if (param_1[3] == 0) {
        return;
      }
      free((void *)param_1[4]);
      return;
    }
    __ptr = (void *)param_1[1];
    puVar3 = (undefined8 *)param_1[2];
    if ((code *)*puVar3 != (code *)0x0) {
                    /* try { // try from 0056ea88 to 0056ea8f has its CatchHandler @ 0056eab8 */
      (*(code *)*puVar3)(__ptr);
    }
LAB_0056ea90:
    if (puVar3[1] == 0) {
      return;
    }
    free(__ptr);
    return;
  }
  if (param_1[1] == 0) {
    return;
  }
LAB_0056ea54:
  free((void *)param_1[2]);
  return;
}


// ===== 0056eae0  FUN_0056eae0 =====

void FUN_0056eae0(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*param_1 == 0) {
    plVar3 = (long *)param_1[1];
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
      drop_slow();
      return;
    }
  }
  else {
    plVar3 = (long *)param_1[1];
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>
      ::drop_slow();
      return;
    }
  }
  return;
}


// ===== 0056eb2c  FUN_0056eb2c =====

void FUN_0056eb2c(undefined8 *param_1)

{
                    /* try { // try from 0056eb40 to 0056eb43 has its CatchHandler @ 0056eb54 */
  <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__drop(*param_1);
  <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__drop(param_1[1]);
  return;
}


// ===== 0056eb70  <flux::dispatcher::flux::dispatcher::PersistenceWorkerState>::spawn_worker_handle =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <flux::dispatcher::flux::dispatcher::PersistenceWorkerState>::spawn_worker_handle */

long * __rustcall
<flux::dispatcher::flux::dispatcher::PersistenceWorkerState>::spawn_worker_handle(long *param_1)

{
  char cVar1;
  bool bVar2;
  void *__ptr;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  code *pcVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  void *pvVar15;
  undefined *puVar16;
  undefined1 **ppuVar17;
  undefined1 **ppuVar18;
  undefined1 ***pppuVar19;
  long lVar20;
  void *pvVar21;
  long *plVar22;
  undefined1 ***pppuVar23;
  undefined1 auVar24 [16];
  long local_190;
  long lStack_188;
  undefined1 **local_180;
  undefined1 *puStack_178;
  long local_170;
  long lStack_168;
  undefined4 uStack_158;
  undefined3 uStack_154;
  long local_150;
  long lStack_148;
  undefined1 **local_140;
  undefined1 *puStack_138;
  long lStack_130;
  long lStack_128;
  undefined1 *local_120;
  long lStack_118;
  undefined1 **local_110;
  undefined1 *puStack_108;
  long local_100;
  long local_f8;
  long local_f0;
  undefined1 **ppuStack_e8;
  undefined1 *puStack_e0;
  long local_d8;
  long lStack_d0;
  long local_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  byte local_a8;
  undefined4 uStack_a7;
  undefined3 uStack_a3;
  undefined8 local_a0;
  undefined4 local_98;
  undefined1 **local_90;
  undefined1 *puStack_88;
  undefined1 ***pppuStack_80;
  undefined *local_78;
  
  if (*param_1 == 2) {
    param_1 = param_1 + 1;
  }
  else {
    plVar13 = param_1 + 2;
    ppuVar18 = (undefined1 **)*plVar13;
    local_a8 = *(byte *)(param_1 + 0xf);
    plVar11 = param_1 + 3;
    puVar9 = (undefined1 *)*plVar11;
    lVar20 = param_1[0xb];
    cVar1 = local_a8 - 3;
    pppuVar19 = (undefined1 ***)param_1[4];
    puVar16 = (undefined *)param_1[5];
    if (local_a8 < 3) {
      cVar1 = '\x02';
    }
    plVar22 = param_1 + 6;
    lVar14 = *plVar22;
    local_b0 = param_1[0xe];
    *(undefined1 *)(param_1 + 0xf) = 3;
    if (cVar1 == '\0') {
      rusqlite::path_to_cstring(&local_110,&DAT_002a1838,8);
      lVar4 = local_100;
      puVar3 = puStack_108;
      if (local_110 != (undefined1 **)0xffffffffffffffff) {
        puStack_88 = puStack_e0;
        local_90 = ppuStack_e8;
        pppuStack_80 = (undefined1 ***)local_d8;
        lVar14 = local_f0;
        puVar16 = (undefined *)local_f8;
        ppuVar18 = local_110;
        pppuVar19 = (undefined1 ***)local_100;
        puVar9 = puStack_108;
LAB_0056f15c:
        puStack_e0 = puStack_88;
        ppuStack_e8 = local_90;
        local_d8 = (long)pppuStack_80;
                    /* try { // try from 0056f17c to 0056f19f has its CatchHandler @ 0056f314 */
        local_110 = ppuVar18;
        puStack_108 = puVar9;
        local_100 = (long)pppuVar19;
        local_f8 = (long)puVar16;
        local_f0 = lVar14;
                    /* WARNING: Subroutine does not return */
        core::result::unwrap_failed
                  ("invariant: failed to open in-memory database",0x2c,&local_110,&PTR_FUN_00ad0a78,
                   &PTR_s_mobile_flux_src_dispatcher_rs_00ad0a28);
      }
                    /* try { // try from 0056ecf4 to 0056ed17 has its CatchHandler @ 0056f2b8 */
      <rusqlite::inner_connection::rusqlite::inner_connection::InnerConnection>::open_with_flags
                (&local_110,puStack_108,local_100,0x8046,0);
      if (local_110 == (undefined1 **)0xffffffffffffffff) {
        local_90 = (undefined1 **)0x0;
        pppuStack_80 = (undefined1 ***)local_100;
        puStack_88 = puStack_108;
        local_78 = (undefined *)local_f8;
                    /* try { // try from 0056f068 to 0056f06b has its CatchHandler @ 0056f24c */
        lVar20 = foldhash::seed::gen_per_hasher_seed();
        if (PTR_GLOBAL_SEED_STORAGE_00b00d78[0x20] != '\x02') {
                    /* try { // try from 0056f134 to 0056f137 has its CatchHandler @ 0056f24c */
          <foldhash::seed::global::foldhash::seed::global::GlobalSeed>::init_slow();
        }
        puVar6 = (undefined *)_UNK_00ad0a70;
        lVar5 = _DAT_00ad0a68;
        puVar10 = _UNK_00ad0a60;
        ppuVar17 = (undefined1 **)PTR_DAT_00ad0a58;
        local_180 = (undefined1 **)0x0;
        puStack_178 = (undefined1 *)0x0;
        *puVar3 = 0;
        lVar14 = 0;
        local_150 = (long)local_180;
        lStack_148 = (long)puStack_178;
        ppuVar18 = local_90;
        puVar9 = puStack_88;
        pppuVar19 = pppuStack_80;
        puVar16 = local_78;
      }
      else {
        *puVar3 = 0;
        lVar14 = local_f0;
        ppuVar17 = ppuStack_e8;
        puVar10 = puStack_e0;
        lVar5 = local_d8;
        puVar6 = local_78;
        local_150 = (long)local_180;
        lStack_148 = (long)puStack_178;
        ppuVar18 = local_110;
        puVar9 = puStack_108;
        pppuVar19 = (undefined1 ***)local_100;
        puVar16 = (undefined *)local_f8;
      }
      local_78 = puVar6;
      pppuStack_80 = (undefined1 ***)lVar5;
      puStack_88 = puVar10;
      local_90 = ppuVar17;
      if (lVar4 != 0) {
        free(puVar3);
      }
      if (local_110 != (undefined1 **)0xffffffffffffffff) goto LAB_0056f15c;
      local_a8 = 0;
      local_b0 = 0x10;
      puStack_138 = puStack_88;
      local_140 = local_90;
      lStack_128 = (long)local_78;
      lStack_130 = (long)pppuStack_80;
    }
    else if (cVar1 == '\x01') {
                    /* try { // try from 0056ec00 to 0056ec0f has its CatchHandler @ 0056f2e0 */
      rusqlite::path_to_cstring(&local_110,puVar9,pppuVar19);
      lVar4 = local_100;
      puVar3 = puStack_108;
      if (local_110 != (undefined1 **)0xffffffffffffffff) {
        puStack_178 = puStack_e0;
        local_180 = ppuStack_e8;
        local_170 = local_d8;
        puVar10 = puStack_108;
        lVar14 = local_f0;
        puVar16 = (undefined *)local_f8;
        ppuVar17 = local_110;
        pppuVar23 = (undefined1 ***)local_100;
LAB_0056f1bc:
        puStack_e0 = puStack_178;
        ppuStack_e8 = local_180;
        local_d8 = local_170;
        local_90 = &local_120;
        puStack_88 = PTR_fmt_00b00d80;
        pppuStack_80 = &local_110;
        local_78 = PTR_fmt_00b00d88;
                    /* try { // try from 0056f204 to 0056f21b has its CatchHandler @ 0056f2e8 */
        local_120 = puVar9;
        lStack_118 = (long)pppuVar19;
        local_110 = ppuVar17;
        puStack_108 = puVar10;
        local_100 = (long)pppuVar23;
        local_f8 = (long)puVar16;
        local_f0 = lVar14;
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  (&DAT_002a72f5,&local_90,&PTR_s_mobile_flux_src_dispatcher_rs_00ad0a40);
      }
                    /* try { // try from 0056ec20 to 0056ec3b has its CatchHandler @ 0056f298 */
      <rusqlite::inner_connection::rusqlite::inner_connection::InnerConnection>::open_with_flags
                (&local_110,puStack_108,local_100,0x8046,0);
      if (local_110 == (undefined1 **)0xffffffffffffffff) {
        local_90 = (undefined1 **)0x0;
        pppuStack_80 = (undefined1 ***)local_100;
        puStack_88 = puStack_108;
        local_78 = (undefined *)local_f8;
                    /* try { // try from 0056f0d0 to 0056f0d3 has its CatchHandler @ 0056f238 */
        lVar20 = foldhash::seed::gen_per_hasher_seed();
        if (PTR_GLOBAL_SEED_STORAGE_00b00d78[0x20] != '\x02') {
                    /* try { // try from 0056f13c to 0056f13f has its CatchHandler @ 0056f238 */
          <foldhash::seed::global::foldhash::seed::global::GlobalSeed>::init_slow();
        }
        lStack_128 = _UNK_00ad0a70;
        local_170 = _DAT_00ad0a68;
        puStack_178 = _UNK_00ad0a60;
        local_180 = (undefined1 **)PTR_DAT_00ad0a58;
        local_190 = 0;
        lStack_188 = 0;
        *puVar3 = 0;
        lVar14 = 0;
        puVar10 = puStack_88;
        local_150 = local_190;
        lStack_148 = lStack_188;
        ppuVar17 = local_90;
        pppuVar23 = pppuStack_80;
        puVar16 = local_78;
      }
      else {
        *puVar3 = 0;
        lVar14 = local_f0;
        puVar10 = puStack_108;
        local_180 = ppuStack_e8;
        puStack_178 = puStack_e0;
        local_170 = local_d8;
        lStack_128 = lStack_168;
        local_150 = local_190;
        lStack_148 = lStack_188;
        ppuVar17 = local_110;
        pppuVar23 = (undefined1 ***)local_100;
        puVar16 = (undefined *)local_f8;
      }
      if (lVar4 != 0) {
        free(puVar3);
      }
      if (local_110 != (undefined1 **)0xffffffffffffffff) goto LAB_0056f1bc;
      if (ppuVar18 != (undefined1 **)0x0) {
        free(puVar9);
      }
      local_a8 = 0;
      local_b0 = 0x10;
      puVar9 = puVar10;
      ppuVar18 = ppuVar17;
      pppuVar19 = pppuVar23;
      local_140 = local_180;
      puStack_138 = puStack_178;
      lStack_130 = local_170;
    }
    else {
      puStack_138 = (undefined1 *)param_1[8];
      local_140 = (undefined1 **)param_1[7];
      lStack_128 = param_1[10];
      lStack_130 = param_1[9];
      lStack_148 = param_1[0xd];
      local_150 = param_1[0xc];
      uStack_158._0_3_ = (undefined3)*(undefined4 *)((long)param_1 + 0x79);
      uStack_158._3_1_ = (undefined1)*(undefined4 *)((long)param_1 + 0x7c);
      uStack_154 = (undefined3)((uint)*(undefined4 *)((long)param_1 + 0x7c) >> 8);
    }
    puStack_e0 = puStack_138;
    ppuStack_e8 = local_140;
    local_98 = 0;
    local_a0 = 0xf;
    lStack_d0 = lStack_128;
    local_d8 = lStack_130;
    lStack_b8 = lStack_148;
    local_c0 = local_150;
    uStack_a3 = uStack_154;
    uStack_a7 = uStack_158;
    local_110 = ppuVar18;
    puStack_108 = puVar9;
    local_100 = (long)pppuVar19;
    local_f8 = (long)puVar16;
    local_f0 = lVar14;
    local_c8 = lVar20;
    auVar24 = <flux::persistence::worker::[0]::flux::persistence::worker::PersistenceWorker>::spawn
                        (param_1,&local_110);
    if (*param_1 == 2) {
      lVar20 = param_1[1];
                    /* try { // try from 0056ee1c to 0056ee2f has its CatchHandler @ 0056f360 */
      iVar8 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::
              drop_join_handle_fast(lVar20);
      if (iVar8 != 0) {
        <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::drop_join_handle_slow
                  (lVar20);
      }
                    /* try { // try from 0056ee30 to 0056ee37 has its CatchHandler @ 0056f330 */
      FUN_005587d4(plVar13);
      plVar11 = (long *)*plVar13;
      do {
        lVar20 = *plVar11;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar2) {
          *plVar11 = lVar20 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar20 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 0056ee54 to 0056ee5b has its CatchHandler @ 0056f328 */
        <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::mpsc::chan::Chan<flux[2406cd06d16b4816]::persistence::worker::PersistenceWorkerCommand,tokio[8c8895dbfa691109]::sync::mpsc::unbounded::Semaphore>>>
        ::drop_slow(plVar13);
      }
    }
    else {
      cVar1 = *(byte *)(param_1 + 0xf) - 3;
      if (*(byte *)(param_1 + 0xf) < 3) {
        cVar1 = '\x02';
      }
      if (cVar1 != '\0') {
        if (cVar1 == '\x01') {
          if (*plVar13 != 0) {
            free((void *)*plVar11);
          }
        }
        else {
          if (*plVar22 != 0) {
                    /* try { // try from 0056f124 to 0056f12f has its CatchHandler @ 0056f39c */
            core::cell::panic_already_borrowed(&PTR_s__root__cargo_registry_src_index__00ad0ac8);
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x56f220);
            (*pcVar7)();
          }
          param_1[6] = -1;
          if (param_1[10] != 0) {
            uVar12 = param_1[8];
            if (uVar12 != 0) {
              memset((void *)param_1[7],0xff,uVar12 + 9);
              uVar12 = param_1[8];
              if (7 < uVar12) {
                uVar12 = (uVar12 + 1 >> 3) * 7;
              }
            }
            param_1[9] = uVar12;
            param_1[10] = 0;
          }
          pvVar15 = (void *)param_1[0xc];
          if (pvVar15 != (void *)0x0) {
            __ptr = *(void **)((long)pvVar15 + 8);
            while (__ptr != pvVar15) {
              puStack_108 = *(undefined1 **)((long)__ptr + 0x18);
              local_110 = *(undefined1 ***)((long)__ptr + 0x10);
              local_f8 = *(long *)((long)__ptr + 0x28);
              local_100 = *(long *)((long)__ptr + 0x20);
              pvVar21 = *(void **)((long)__ptr + 8);
              lStack_d0 = *(long *)((long)__ptr + 0x50);
              ppuStack_e8 = *(undefined1 ***)((long)__ptr + 0x38);
              local_f0 = *(long *)((long)__ptr + 0x30);
              local_d8 = *(long *)((long)__ptr + 0x48);
              puStack_e0 = *(undefined1 **)((long)__ptr + 0x40);
              do {
                puVar9 = *local_110;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(local_110,0x10);
                if (bVar2) {
                  *local_110 = puVar9 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
              if (puVar9 + -1 == (undefined1 *)0x0) {
                DataMemoryBarrier(2,1);
                    /* try { // try from 0056ef40 to 0056ef47 has its CatchHandler @ 0056f374 */
                <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(&local_110);
              }
                    /* try { // try from 0056ef48 to 0056ef4f has its CatchHandler @ 0056f388 */
              FUN_0056e718(&local_100);
              free(__ptr);
              __ptr = pvVar21;
            }
            *(void **)pvVar15 = pvVar15;
            *(void **)((long)pvVar15 + 8) = pvVar15;
          }
          *plVar22 = *plVar22 + 1;
                    /* try { // try from 0056ef7c to 0056ef9f has its CatchHandler @ 0056f268 */
          <rusqlite::inner_connection::rusqlite::inner_connection::InnerConnection>::close
                    (&local_110,plVar11);
          if (local_110 != (undefined1 **)0xffffffffffffffff) {
            FUN_0056e97c(&local_110);
          }
          plVar13 = (long *)*plVar11;
          do {
            lVar20 = *plVar13;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar2) {
              *plVar13 = lVar20 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar20 + -1 == 0) {
            DataMemoryBarrier(2,1);
                    /* try { // try from 0056efbc to 0056efc3 has its CatchHandler @ 0056f230 */
            <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<*mut_libsqlite3_sys::bindings::sqlite3>>>
            ::drop_slow(plVar11);
          }
                    /* try { // try from 0056efc4 to 0056efcb has its CatchHandler @ 0056f260 */
          FUN_0056e83c(plVar22);
        }
      }
      if (*param_1 == 0) {
        plVar11 = (long *)param_1[1];
        do {
          lVar20 = *plVar11;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar2) {
            *plVar11 = lVar20 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar20 + -1 == 0) {
          DataMemoryBarrier(2,1);
          <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
          drop_slow();
        }
      }
      else {
        plVar11 = (long *)param_1[1];
        do {
          lVar20 = *plVar11;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar2) {
            *plVar11 = lVar20 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar20 + -1 == 0) {
          DataMemoryBarrier(2,1);
                    /* try { // try from 0056eff4 to 0056f01b has its CatchHandler @ 0056f328 */
          <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>
          ::drop_slow();
        }
      }
    }
    param_1[2] = auVar24._8_8_;
    *param_1 = 2;
    param_1[1] = auVar24._0_8_;
    param_1 = (long *)spawn_worker_handle(param_1);
  }
  return param_1;
}


// ===== 0056f3d4  FUN_0056f3d4 =====

undefined8
FUN_0056f3d4(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  char *pcVar7;
  ulong uVar8;
  ulong uStack_50;
  ulong local_48;
  long local_28;
  
  *(long *)(param_2 + 0x18) = param_1[5];
  uVar8 = *(ulong *)(param_2 + *(long *)(*(long *)(param_2 + 0x10) + 0x48));
  pcVar7 = (char *)(*param_1 + (param_1[4] & uVar8) * 0x18);
  if (*pcVar7 == '\0') {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar7,0x10);
    if (bVar3) {
      *pcVar7 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_0056f434;
  }
  else {
    ClearExclusiveLocal();
  }
                    /* try { // try from 0056f584 to 0056f58f has its CatchHandler @ 0056f5c4 */
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (pcVar7,param_2,0xffffffff);
LAB_0056f434:
  if ((char)param_1[6] == '\0') {
    plVar1 = param_1 + 2;
    param_1 = param_1 + 3;
    local_48 = *(ulong *)(param_2 + *(long *)(*(long *)(param_2 + 0x10) + 0x48));
    uStack_50 = uVar8;
    if (local_48 != uVar8) {
                    /* try { // try from 0056f540 to 0056f55f has its CatchHandler @ 0056f5e0 */
                    /* WARNING: Subroutine does not return */
      core::panicking::assert_failed<usize,usize>
                (0,&local_48,&uStack_50,0,param_5,&PTR_s__root__cargo_registry_src_index__00ad0a98);
    }
    lVar6 = *(long *)(pcVar7 + 8);
    local_28 = param_2;
    if (lVar6 == param_2) {
                    /* try { // try from 0056f564 to 0056f57b has its CatchHandler @ 0056f5d8 */
      core[bcece726f298455b]::panicking::assert_failed::
      <core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::runtime::task::core::Header>>,core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::runtime::task::core::Header>>>
                (1,pcVar7 + 8,&local_28,0,param_5,&PTR_s__root__cargo_registry_src_index__00ad0ab0);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x56f580);
      (*pcVar4)();
    }
    *(long *)(param_2 + *(long *)(*(long *)(param_2 + 0x10) + 0x38) + 8) = lVar6;
    *(undefined8 *)(param_2 + *(long *)(*(long *)(param_2 + 0x10) + 0x38)) = 0;
    if (lVar6 != 0) {
      *(long *)(lVar6 + *(long *)(*(long *)(lVar6 + 0x10) + 0x38)) = param_2;
    }
    *(long *)(pcVar7 + 8) = param_2;
    if (*(long *)(pcVar7 + 0x10) == 0) {
      *(long *)(pcVar7 + 0x10) = param_2;
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = *param_1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      if (*pcVar7 != '\x01') {
        ClearExclusiveLocal();
        <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar7,0);
        return param_3;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pcVar7,0x10);
      if (bVar3) {
        *pcVar7 = '\0';
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    do {
      if (*pcVar7 != '\x01') {
        ClearExclusiveLocal();
                    /* try { // try from 0056f598 to 0056f5bf has its CatchHandler @ 0056f5d0 */
        <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar7,0);
        break;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pcVar7,0x10);
      if (bVar3) {
        *pcVar7 = '\0';
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
                    /* try { // try from 0056f454 to 0056f45f has its CatchHandler @ 0056f5d0 */
    <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::shutdown(param_2);
    iVar5 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_3);
    if (iVar5 != 0) {
      <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::dealloc(param_3);
    }
    param_3 = 0;
  }
  return param_3;
}


// ===== 0056f664  FUN_0056f664 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056f664(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029fc60;
  param_1[1] = _UNK_0029fc68;
  *param_1 = uVar1;
  return;
}


// ===== 0056f678  <<flux::dispatcher::flux::dispatcher::Dispatcher<_>>::dispatch_global_action_str::DispatchResultProperties_as_jsi::traits::NewWithRuntime>::with_runtime =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<flux::dispatcher::flux::dispatcher::Dispatcher<_>>::dispatch_global_action_str::DispatchResultProperties
   as jsi::traits::NewWithRuntime>::with_runtime */

void __rustcall
<<flux::dispatcher::flux::dispatcher::Dispatcher<_>>::dispatch_global_action_str::DispatchResultProperties_as_jsi::traits::NewWithRuntime>
::with_runtime(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = jsi_sys::ffi::base::ffi::PropNameID_forUtf8(uVar2,"storeTokens",0xb);
                    /* try { // try from 0056f6a8 to 0056f6bb has its CatchHandler @ 0056f6d0 */
  uVar2 = jsi_sys::ffi::base::ffi::PropNameID_forUtf8
                    (uVar2,
                     "metricsInternalMalfunctionPermissionDeniedOperationAbortedDatabaseBusyDatabaseLockedOutOfMemoryReadOnlyOperationInterruptedSystemIoFailureDatabaseCorruptNotFoundDiskFullCannotOpenFileLockingProtocolFailedSchemaChangedTooBigConstraintViolationTypeMismatchApiMisuseNoLargeFileSupportAuthorizationForStatementDeniedParameterOutOfRangeNotADatabaseUnknownSqliteFailureSqliteSingleThreadedModeFromSqlConversionFailureIntegralValueOutOfRangeUtf8ErrorInvalidParameterNameInvalidPathExecuteReturnedResultsQueryReturnedNoRowsQueryReturnedMoreThanOneRowInvalidColumnIndexInvalidColumnNameInvalidColumnTypeStatementChangedRowsToSqlConversionFailureInvalidQueryUnwindingPanicMultipleStatementInvalidParameterCount"
                     ,7);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}


// ===== 0056f6e8  <<flux::dispatcher::flux::dispatcher::Dispatcher<_>>::dispatch_global_action_str::DispatchResult_as_jsi::value::ToValue>::to_value =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<flux::dispatcher::flux::dispatcher::Dispatcher<_>>::dispatch_global_action_str::DispatchResult
   as jsi::value::ToValue>::to_value */

void __rustcall
<<flux::dispatcher::flux::dispatcher::Dispatcher<_>>::dispatch_global_action_str::DispatchResult_as_jsi::value::ToValue>
::to_value(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = <<flux::dispatcher::flux::dispatcher::Dispatcher<_>>::dispatch_global_action_str::DispatchResult_as_jsi::object::ToObject>
          ::to_object();
  <jsi::object::Object_as_jsi::value::IntoValue>::into_value(uVar1,param_2);
  return;
}


// ===== 0056f70c  FUN_0056f70c =====

void FUN_0056f70c(undefined8 *param_1)

{
  <serde_json::error::Error_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 0056f714  FUN_0056f714 =====

void FUN_0056f714(undefined8 *param_1)

{
  <serde_json::error::Error_as_core::fmt::Display>::fmt(*param_1);
  return;
}


// ===== 0056f71c  FUN_0056f71c =====

void FUN_0056f71c(byte *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,&DAT_002c3cf8 + *(int *)(&DAT_002c3cf8 + (ulong)*param_1 * 4),
             *(undefined8 *)(&DAT_002c3c38 + (ulong)*param_1 * 8));
  return;
}


// ===== 0056f744  FUN_0056f744 =====

void FUN_0056f744(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (-1 < lVar1) {
    lVar1 = 0x14;
  }
                    /* WARNING: Could not recover jumptable at 0x0056f77c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_0056f780 + (ulong)*(ushort *)("mid > len" + lVar1 * 2 + 9) * 4))(param_2);
  return;
}


// ===== 0056fbcc  FUN_0056fbcc =====

void FUN_0056fbcc(byte *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,&DAT_002c3d80 + *(int *)(&DAT_002c3d80 + (ulong)*param_1 * 4),
             *(undefined8 *)(&DAT_002c3d58 + (ulong)*param_1 * 8));
  return;
}


// ===== 0056fbf4  FUN_0056fbf4 =====

void FUN_0056fbf4(undefined8 param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <usize_as_core::fmt::LowerHex>::fmt();
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <usize_as_core::fmt::Display>::fmt();
    return;
  }
  <usize_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 0056fc0c  <<flux::dispatcher::flux::dispatcher::Dispatcher<_>>::dispatch_global_action_str::DispatchResult_as_jsi::object::ToObject>::to_object =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<flux::dispatcher::flux::dispatcher::Dispatcher<_>>::dispatch_global_action_str::DispatchResult
   as jsi::object::ToObject>::to_object */

undefined8 __rustcall
<<flux::dispatcher::flux::dispatcher::Dispatcher<_>>::dispatch_global_action_str::DispatchResult_as_jsi::object::ToObject>
::to_object(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  byte bVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined1 auVar19 [16];
  undefined1 *local_70;
  code *pcStack_68;
  undefined1 uStack_41;
  
  auVar19 = <jsi::handle::jsi::handle::RuntimeHandle>::state(param_2);
  plVar10 = auVar19._8_8_;
  puVar6 = auVar19._0_8_;
  lVar9 = *plVar10;
  uVar2 = plVar10[1];
  uVar14 = *param_2;
  lVar11 = 0;
  uVar12 = uVar2 & 0xb44df4b7fa7ac5ab;
  uVar17 = *(undefined8 *)(lVar9 + uVar12);
  uVar18 = NEON_cmeq(uVar17,0x5a5a5a5a5a5a5a5a,1);
  uVar18 = uVar18 & 0x8080808080808080;
  while( true ) {
    for (; uVar18 != 0; uVar18 = uVar18 - 1 & uVar18) {
      uVar3 = (uVar18 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar18 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      puVar13 = (undefined8 *)
                (lVar9 + (uVar12 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) & uVar2) *
                         -0x20);
      if (puVar13[-3] == -0x757f61de41de40c1 && puVar13[-4] == 0x634c7e3a03bc933e)
      goto LAB_0056fdcc;
    }
    uVar17 = NEON_cmeq(uVar17,0xffffffffffffffff,1);
    bVar16 = NEON_umaxv(uVar17,1);
    if ((bVar16 & 1) != 0) break;
    lVar11 = lVar11 + 8;
    uVar12 = uVar12 + lVar11 & uVar2;
    uVar17 = *(undefined8 *)(lVar9 + uVar12);
    uVar18 = NEON_cmeq(uVar17,0x5a5a5a5a5a5a5a5a,1);
    uVar18 = uVar18 & 0x8080808080808080;
  }
  if (plVar10[2] == 0) {
                    /* try { // try from 0056ff24 to 0056ff37 has its CatchHandler @ 0056ffa4 */
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(core[bcece726f298455b]::any::TypeId,alloc[c1f8e832b0d782c7]::boxed::Box<dyn_core[bcece726f298455b]::any::Any+core[bcece726f298455b]::marker::Send>)>>
    ::reserve_rehash::
    <hashbrown[32fc5d502e7f9af5]::map::make_hasher<core[bcece726f298455b]::any::TypeId,alloc[c1f8e832b0d782c7]::boxed::Box<dyn_core[bcece726f298455b]::any::Any_core[bcece726f298455b]::marker::Send>,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
              (plVar10,1,plVar10 + 4,1);
  }
                    /* try { // try from 0056fd0c to 0056fd1f has its CatchHandler @ 0056ffa4 */
  puVar7 = (undefined1 *)jsi_sys::ffi::base::ffi::PropNameID_forUtf8(uVar14,"storeTokens",0xb);
                    /* try { // try from 0056fd20 to 0056fd37 has its CatchHandler @ 0056ff90 */
  pcStack_68 = (code *)jsi_sys::ffi::base::ffi::PropNameID_forUtf8
                                 (uVar14,
                                  "metricsInternalMalfunctionPermissionDeniedOperationAbortedDatabaseBusyDatabaseLockedOutOfMemoryReadOnlyOperationInterruptedSystemIoFailureDatabaseCorruptNotFoundDiskFullCannotOpenFileLockingProtocolFailedSchemaChangedTooBigConstraintViolationTypeMismatchApiMisuseNoLargeFileSupportAuthorizationForStatementDeniedParameterOutOfRangeNotADatabaseUnknownSqliteFailureSqliteSingleThreadedModeFromSqlConversionFailureIntegralValueOutOfRangeUtf8ErrorInvalidParameterNameInvalidPathExecuteReturnedResultsQueryReturnedNoRowsQueryReturnedMoreThanOneRowInvalidColumnIndexInvalidColumnNameInvalidColumnTypeStatementChangedRowsToSqlConversionFailureInvalidQueryUnwindingPanicMultipleStatementInvalidParameterCount"
                                  ,7);
  local_70 = puVar7;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar8 = (undefined8 *)FUN_004b25a4(0x10,8);
  if (puVar8 == (undefined8 *)0x0) {
                    /* try { // try from 0056ff60 to 0056ff6b has its CatchHandler @ 0056ffb4 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x10);
  }
  puVar8[1] = pcStack_68;
  *puVar8 = local_70;
  puVar1 = (undefined8 *)*plVar10;
  uVar2 = plVar10[1];
  uVar18 = uVar2 & 0xb44df4b7fa7ac5ab;
  uVar12 = NEON_cmlt(*(undefined8 *)((long)puVar1 + uVar18),0,1);
  if (uVar12 == 0) {
    lVar11 = 8;
    do {
      uVar18 = uVar18 + lVar11;
      lVar11 = lVar11 + 8;
      uVar18 = uVar18 & uVar2;
      uVar12 = NEON_cmlt(*(undefined8 *)((long)puVar1 + uVar18),0,1);
    } while (uVar12 == 0);
  }
  uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
  uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
  uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
  uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
  uVar12 = uVar18 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3) & uVar2;
  uVar18 = (ulong)*(char *)((long)puVar1 + uVar12);
  if (-1 < *(char *)((long)puVar1 + uVar12)) {
    uVar18 = NEON_cmlt(*puVar1,0,1);
    uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
    uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
    uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
    uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
    uVar12 = (ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3;
    uVar18 = (ulong)*(byte *)((long)puVar1 + uVar12);
  }
  *(undefined1 *)((long)puVar1 + uVar12) = 0x5a;
  puVar13 = puVar1 + uVar12 * -4;
  *(undefined1 *)((long)puVar1 + (uVar12 - 8 & uVar2) + 8) = 0x5a;
  puVar13[-4] = 0x634c7e3a03bc933e;
  puVar13[-3] = 0x8a809e21be21bf3f;
  puVar13[-2] = puVar8;
  puVar13[-1] = &PTR_FUN_00ad09f8;
  plVar10[3] = plVar10[3] + 1;
  plVar10[2] = plVar10[2] - (uVar18 & 1);
LAB_0056fdcc:
  puVar8 = (undefined8 *)puVar13[-2];
                    /* try { // try from 0056fdd0 to 0056fdd7 has its CatchHandler @ 0056ffa4 */
  uVar17 = <jsi::object::[1]::jsi::object::Object>::new(param_2);
                    /* try { // try from 0056fdd8 to 0056fde7 has its CatchHandler @ 0056ffac */
  uVar14 = <jsi::array::Array_as_jsi::value::ToValue>::to_value(param_1,param_2);
  uVar15 = *param_2;
                    /* try { // try from 0056fdf0 to 0056fe07 has its CatchHandler @ 0056ffdc */
  lVar11 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get(uVar17);
  if (lVar11 == 0) {
    pcStack_68 = FUN_0056429c;
  }
  else {
    lVar9 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                      (*puVar8);
    if (lVar9 != 0) {
                    /* try { // try from 0056fe10 to 0056fe2b has its CatchHandler @ 0056ffac */
      jsi_sys::ffi::base::ffi::Object_setProperty(uVar15,lVar11,lVar9,uVar14);
      uVar14 = <jsi::value::Value_as_jsi::value::ToValue>::to_value(param_1 + 8,param_2);
      uVar15 = *param_2;
                    /* try { // try from 0056fe34 to 0056fe4b has its CatchHandler @ 0056ffc8 */
      lVar11 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get
                         (uVar17);
      if (lVar11 == 0) {
        pcStack_68 = FUN_0056429c;
      }
      else {
        lVar9 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                          (puVar8[1]);
        if (lVar9 != 0) {
                    /* try { // try from 0056fe54 to 0056fe63 has its CatchHandler @ 0056ffac */
          jsi_sys::ffi::base::ffi::Object_setProperty(uVar15,lVar11,lVar9,uVar14);
          do {
            uVar18 = *puVar6;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar6,0x10);
            if (bVar5) {
              *puVar6 = uVar18 - 0x10;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar18 & 0xfffffffffffffff2) == 0x12) {
            <parking_lot::raw_rwlock::[8]::parking_lot::raw_rwlock::RawRwLock>::unlock_shared_slow
                      (puVar6);
          }
          return uVar17;
        }
        pcStack_68 = FUN_00564294;
      }
      local_70 = &uStack_41;
                    /* try { // try from 0056ff00 to 0056ff13 has its CatchHandler @ 0056ffc8 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_002b2091,&local_70,&PTR_s__root__cargo_registry_src_index__00acfa78);
    }
    pcStack_68 = FUN_00564294;
  }
  local_70 = &uStack_41;
                    /* try { // try from 0056fec8 to 0056fedb has its CatchHandler @ 0056ffdc */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002b2091,&local_70,&PTR_s__root__cargo_registry_src_index__00acfa78);
}


// ===== 00570030  FUN_00570030 =====

void FUN_00570030(long param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
            (param_2,"Error",5,&DAT_002bcfe4,4,param_1 + 4,&DAT_00ad0ca0,"extended_code",0xd,
             &local_18,&DAT_00ad0c80);
  return;
}


// ===== 0057009c  FUN_0057009c =====

void FUN_0057009c(long param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


// ===== 005700b0  FUN_005700b0 =====

void FUN_005700b0(long *param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined1 *__ptr;
  undefined1 *puVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  ulong uVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined8 uVar24;
  undefined1 *puVar25;
  ulong *puVar26;
  long local_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long local_f0;
  long local_e8;
  int local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  long local_a8;
  int local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  uVar24 = param_2[7];
  puVar26 = (ulong *)*param_2;
  iVar16 = sqlite3_bind_parameter_count(uVar24);
  puVar21 = (undefined1 *)(long)iVar16;
  if (param_4 == 0) {
    puVar25 = (undefined1 *)0x0;
  }
  else {
    puVar1 = param_3 + param_4 * 2;
    puVar23 = &DAT_00000001;
    puVar22 = puVar21;
    do {
      puVar19 = puVar23;
      puVar25 = puVar19;
      if (puVar22 == (undefined1 *)0x0) break;
      (**(code **)(param_3[1] + 0x18))(&local_a8,*param_3);
      puVar25 = (undefined1 *)CONCAT44(local_9c,local_a0);
      puVar23 = (undefined1 *)CONCAT44(uStack_94,uStack_98);
      __ptr = (undefined1 *)CONCAT44(uStack_8c,uStack_90);
      if (local_a8 != -1) {
        uStack_d0 = uStack_90;
        uStack_cc = uStack_8c;
        uStack_c8 = uStack_88;
        uStack_c4 = uStack_84;
        uStack_b8 = uStack_78;
        uStack_b4 = uStack_74;
        uStack_c0 = uStack_80;
        uStack_bc = local_7c;
        local_b0 = uStack_70;
        uStack_ac = uStack_6c;
        local_e8 = local_a8;
LAB_005703c0:
        lStack_108 = CONCAT44(uStack_c4,uStack_c8);
        local_110 = CONCAT44(uStack_cc,uStack_d0);
        lStack_f8 = CONCAT44(uStack_b4,uStack_b8);
        lStack_100 = CONCAT44(uStack_bc,uStack_c0);
        local_f0 = CONCAT44(uStack_ac,local_b0);
        goto LAB_005703dc;
      }
      if ((long)puVar25 < 2) {
        puVar18 = puVar23;
        puVar2 = puVar25;
        if ((puVar25 == (undefined1 *)0xffffffffffffffff) &&
           (puVar18 = __ptr, puVar2 = puVar23, 1 < (long)puVar23)) {
          if (puVar23 == (undefined1 *)0x2) goto LAB_00570240;
          if (puVar23 == (undefined1 *)0x3) goto LAB_00570180;
LAB_005701e8:
          rusqlite::len_as_c_int(&local_a8,CONCAT44(uStack_84,uStack_88));
          lVar3 = local_a8;
          uVar17 = uStack_98;
          uVar4 = uStack_94;
          iVar16 = local_a0;
          uVar5 = local_9c;
          uVar6 = uStack_90;
          uVar7 = uStack_8c;
          uVar8 = uStack_88;
          uVar9 = uStack_84;
          uVar10 = uStack_80;
          uVar11 = local_7c;
          uVar12 = uStack_78;
          uVar13 = uStack_74;
          uVar14 = uStack_70;
          uVar15 = uStack_6c;
          if (local_a8 != -1) goto joined_r0x005701c4;
          if (local_a0 == 0) {
            uVar17 = sqlite3_bind_zeroblob(uVar24,(ulong)puVar19 & 0xffffffff,0);
            uVar20 = *puVar26;
          }
          else {
            uVar17 = sqlite3_bind_blob(uVar24,(ulong)puVar19 & 0xffffffff,__ptr,local_a0,
                                       0xffffffffffffffff);
            uVar20 = *puVar26;
          }
        }
        else if (puVar2 == (undefined1 *)0x0) {
          uVar17 = sqlite3_bind_null(uVar24,(ulong)puVar19 & 0xffffffff);
          uVar20 = *puVar26;
        }
        else {
          uVar17 = sqlite3_bind_int64(uVar24,(ulong)puVar19 & 0xffffffff,puVar18);
          uVar20 = *puVar26;
        }
joined_r0x00570164:
        if (0x7ffffffffffffffe < uVar20) {
                    /* try { // try from 00570364 to 0057036f has its CatchHandler @ 0057042c */
                    /* WARNING: Subroutine does not return */
          core::cell::panic_already_mutably_borrowed
                    (&PTR_s__root__cargo_registry_src_index__00ad0ce0);
        }
        *puVar26 = uVar20 + 1;
                    /* try { // try from 005702f4 to 005702fb has its CatchHandler @ 0057041c */
        rusqlite::error::decode_result_raw(&local_e8,puVar26[2],uVar17);
        *puVar26 = *puVar26 - 1;
        lVar3 = local_e8;
        uVar17 = uStack_d8;
        uVar4 = uStack_d4;
        iVar16 = local_e0;
        uVar5 = uStack_dc;
        uVar6 = uStack_d0;
        uVar7 = uStack_cc;
        uVar8 = uStack_c8;
        uVar9 = uStack_c4;
        uVar10 = uStack_c0;
        uVar11 = uStack_bc;
        uVar12 = uStack_b8;
        uVar13 = uStack_b4;
        uVar14 = local_b0;
        uVar15 = uStack_ac;
      }
      else {
        puVar18 = puVar23;
        if (puVar25 == (undefined1 *)0x2) {
LAB_00570240:
          uVar17 = sqlite3_bind_double(puVar18,uVar24,(ulong)puVar19 & 0xffffffff);
          uVar20 = *puVar26;
          goto joined_r0x00570164;
        }
        if (puVar25 != (undefined1 *)0x3) goto LAB_005701e8;
LAB_00570180:
                    /* try { // try from 00570180 to 005701f3 has its CatchHandler @ 00570418 */
        rusqlite::str_for_sqlite(&local_a8,__ptr);
        lVar3 = local_a8;
        uVar17 = uStack_98;
        uVar4 = uStack_94;
        iVar16 = local_a0;
        uVar5 = local_9c;
        uVar6 = uStack_90;
        uVar7 = uStack_8c;
        uVar8 = uStack_88;
        uVar9 = uStack_84;
        uVar10 = uStack_80;
        uVar11 = local_7c;
        uVar12 = uStack_78;
        uVar13 = uStack_74;
        uVar14 = uStack_70;
        uVar15 = uStack_6c;
        if (local_a8 == -1) {
          uVar17 = sqlite3_bind_text(uVar24,(ulong)puVar19 & 0xffffffff,CONCAT44(local_9c,local_a0),
                                     uStack_98,CONCAT44(uStack_8c,uStack_90));
          uVar20 = *puVar26;
          goto joined_r0x00570164;
        }
      }
joined_r0x005701c4:
      uStack_ac = uVar15;
      local_b0 = uVar14;
      uStack_b4 = uVar13;
      uStack_b8 = uVar12;
      uStack_bc = uVar11;
      uStack_c0 = uVar10;
      uStack_c4 = uVar9;
      uStack_c8 = uVar8;
      uStack_cc = uVar7;
      uStack_d0 = uVar6;
      uStack_dc = uVar5;
      local_e0 = iVar16;
      uStack_d4 = uVar4;
      uStack_d8 = uVar17;
      local_e8 = lVar3;
      if ((2 < (long)puVar25) && (puVar23 != (undefined1 *)0x0)) {
        free(__ptr);
      }
      if (local_e8 != -1) {
        puVar25 = (undefined1 *)CONCAT44(uStack_dc,local_e0);
        puVar23 = (undefined1 *)CONCAT44(uStack_d4,uStack_d8);
        goto LAB_005703c0;
      }
      param_3 = param_3 + 2;
      puVar22 = puVar22 + -1;
      puVar23 = puVar19 + 1;
      puVar25 = puVar19;
    } while (param_3 != puVar1);
  }
  if (puVar25 == puVar21) {
    *param_1 = -1;
    param_1[1] = (long)param_2;
    param_1[2] = 0;
  }
  else {
    local_e8 = -0x7fffffffffffffed;
    puVar23 = puVar21;
LAB_005703dc:
    *param_1 = local_e8;
    param_1[1] = (long)puVar25;
    param_1[2] = (long)puVar23;
    param_1[4] = lStack_108;
    param_1[3] = local_110;
    param_1[6] = lStack_f8;
    param_1[5] = lStack_100;
    param_1[7] = local_f0;
  }
  return;
}


// ===== 00570454  FUN_00570454 =====

void FUN_00570454(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 0057046c  FUN_0057046c =====

void FUN_0057046c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 *puStack_88;
  undefined **local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 uStack_31;
  
  if (param_1 != param_2) {
    uVar2 = (ulong)((long)param_2 - (long)param_1) / 0x18;
    do {
      if (*(char *)((long)param_1 + 0x12) == '\x01') {
        local_a0 = 0;
        uStack_98 = 1;
        local_90 = 0;
        local_80 = &PTR_FUN_00ad0ed8;
        uStack_78 = 0x60000020;
                    /* try { // try from 005704f0 to 005704f7 has its CatchHandler @ 00570560 */
        puStack_88 = (undefined1 *)&local_a0;
        iVar1 = <str_as_core::fmt::Display>::fmt(*param_1,param_1[1],&puStack_88);
        if (iVar1 != 0) {
                    /* try { // try from 00570538 to 0057055b has its CatchHandler @ 00570564 */
                    /* WARNING: Subroutine does not return */
          core::result::unwrap_failed
                    ("a Display implementation returned an error unexpectedly",0x37,&uStack_31,
                     &DAT_00ad0cc0,&PTR_s__nix_store_8006w282fgsx3273c878b_00ad0f08);
        }
        uStack_68 = uStack_98;
        local_70 = local_a0;
        local_60 = local_90;
        FUN_00566338(param_3,&local_70);
      }
      uVar2 = uVar2 - 1;
      param_1 = param_1 + 3;
    } while (uVar2 != 0);
  }
  return;
}


// ===== 00570588  FUN_00570588 =====

void FUN_00570588(long *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt
            (*(undefined8 *)(*param_1 + 8),*(undefined8 *)(*param_1 + 0x10),param_2);
  return;
}


// ===== 0057059c  FUN_0057059c =====

void FUN_0057059c(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (-1 < lVar1) {
    lVar1 = 0x14;
  }
                    /* WARNING: Could not recover jumptable at 0x005705d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_005705dc + (ulong)*(ushort *)(&UNK_002c3d94 + lVar1 * 2) * 4))(param_2);
  return;
}


// ===== 00570a28  FUN_00570a28 =====

void FUN_00570a28(undefined8 *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,(&PTR_s_NullX448_00ad0f60)[*(byte *)*param_1],
             *(undefined8 *)(&DAT_002c4250 + (ulong)*(byte *)*param_1 * 8));
  return;
}


// ===== 00570a54  FUN_00570a54 =====

void FUN_00570a54(long *param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = *param_1 + 8;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
            (param_2,
             "Utf8ErrorInvalidParameterNameInvalidPathExecuteReturnedResultsQueryReturnedNoRowsQueryReturnedMoreThanOneRowInvalidColumnIndexInvalidColumnNameInvalidColumnTypeStatementChangedRowsToSqlConversionFailureInvalidQueryUnwindingPanicMultipleStatementInvalidParameterCount"
             ,9,"valid_up_to",0xb,*param_1,&DAT_00ad0d38,"error_len",9,&local_18,&DAT_00ad0eb8);
  return;
}


// ===== 00570ac4  FUN_00570ac4 =====

void FUN_00570ac4(long *param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field2_finish
            (param_2,&DAT_002a1a30,8,local_18 + 0x18,&DAT_00ad0d38,&local_18,&DAT_00ad0f20);
  return;
}


// ===== 00570b14  FUN_00570b14 =====

void FUN_00570b14(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt(*(undefined8 *)*param_1,((undefined8 *)*param_1)[1],param_2);
  return;
}


// ===== 00570b28  FUN_00570b28 =====

void FUN_00570b28(undefined8 *param_1)

{
  <bool_as_core::fmt::Display>::fmt(*param_1);
  return;
}


// ===== 00570b30  FUN_00570b30 =====

void FUN_00570b30(undefined8 *param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <u8_as_core::fmt::LowerHex>::fmt(*param_1);
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <u8_as_core::fmt::Display>::fmt();
    return;
  }
  <u8_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 00570b4c  FUN_00570b4c =====

void FUN_00570b4c(undefined8 *param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <usize_as_core::fmt::LowerHex>::fmt(*param_1);
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <usize_as_core::fmt::Display>::fmt();
    return;
  }
  <usize_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 00570b68  FUN_00570b68 =====

void FUN_00570b68(undefined8 *param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <i32_as_core::fmt::LowerHex>::fmt(*param_1);
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <i32_as_core::fmt::Display>::fmt();
    return;
  }
  <i32_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 00570b84  FUN_00570b84 =====

void FUN_00570b84(undefined8 *param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <isize_as_core::fmt::LowerHex>::fmt(*param_1);
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <i64_as_core::fmt::Display>::fmt();
    return;
  }
  <isize_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 00570ba0  FUN_00570ba0 =====

void FUN_00570ba0(long *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt
            (*(undefined8 *)(*param_1 + 8),*(undefined8 *)(*param_1 + 0x10),param_2);
  return;
}


// ===== 00570bb4  FUN_00570bb4 =====

void FUN_00570bb4(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 00570bc8  <flux::actions::GlobalActionDeserializerError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <flux::actions::GlobalActionDeserializerError as core::fmt::Display>::fmt */

void __rustcall
<flux::actions::GlobalActionDeserializerError_as_core::fmt::Display>::fmt
          (ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong *local_40;
  ulong *local_38;
  ulong **local_30;
  code *local_28;
  ulong **local_20;
  code *pcStack_18;
  
  local_30 = &local_40;
  uVar1 = *param_1 ^ 0x8000000000000000;
  if (-1 < (long)*param_1) {
    uVar1 = 2;
  }
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      local_38 = param_1 + 1;
      local_30 = &local_38;
      local_28 = FUN_0056f714;
      core::fmt::write(*param_2,param_2[1],&DAT_002ac39e,&local_30);
      return;
    }
    local_38 = param_1 + 3;
    local_28 = FUN_00570ba0;
    local_20 = &local_38;
    pcStack_18 = FUN_00567dac;
    local_40 = param_1;
    core::fmt::write(*param_2,param_2[1],&DAT_002b75e0,&local_30);
    return;
  }
  local_38 = param_1 + 1;
  local_30 = &local_38;
  local_28 = FUN_00570ba0;
  core::fmt::write(*param_2,param_2[1],&DAT_002a28c9,&local_30);
  return;
}


// ===== 00570cac  FUN_00570cac =====

void FUN_00570cac(byte *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,&DAT_002c41f0 + *(int *)(&DAT_002c41f0 + (ulong)*param_1 * 4),
             *(undefined8 *)(&DAT_002c4130 + (ulong)*param_1 * 8));
  return;
}


// ===== 00570cd4  FUN_00570cd4 =====

void FUN_00570cd4(byte *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,(&PTR_s_NullX448_00ad0f60)[*param_1],
             *(undefined8 *)(&DAT_002c4250 + (ulong)*param_1 * 8));
  return;
}


// ===== 00570cfc  FUN_00570cfc =====

void FUN_00570cfc(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,"Errordispatch_globalparse_action_json",5);
  return;
}


// ===== 00570d10  FUN_00570d10 =====

undefined8 FUN_00570d10(long *param_1,uint param_2)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = param_1[2];
  if (param_2 < 0x80) {
    if (*param_1 == lVar7) {
      FUN_00558b5c(param_1,lVar7,1,1,1);
    }
    *(byte *)(param_1[1] + lVar7) = (byte)param_2;
    lVar6 = 1;
  }
  else {
    uVar2 = 3;
    if (0xffff < param_2) {
      uVar2 = 4;
    }
    uVar3 = 2;
    if (0x7ff < param_2) {
      uVar3 = uVar2;
    }
    if ((ulong)(*param_1 - lVar7) < uVar3) {
      FUN_00558b5c(param_1,lVar7,uVar3,1,1);
    }
    bVar4 = (byte)param_2 & 0x3f | 0x80;
    pbVar1 = (byte *)(param_1[1] + lVar7);
    if (param_2 < 0x800) {
      pbVar1[1] = bVar4;
      lVar6 = 2;
      *pbVar1 = (byte)(param_2 >> 6) | 0xc0;
    }
    else {
      bVar5 = (byte)(param_2 >> 6) & 0x3f | 0x80;
      if (param_2 >> 0x10 == 0) {
        pbVar1[1] = bVar5;
        pbVar1[2] = bVar4;
        lVar6 = 3;
        *pbVar1 = (byte)(param_2 >> 0xc) | 0xe0;
      }
      else {
        pbVar1[2] = bVar5;
        pbVar1[3] = bVar4;
        lVar6 = 4;
        pbVar1[1] = (byte)(param_2 >> 0xc) & 0x3f | 0x80;
        *pbVar1 = (byte)(param_2 >> 0x12) | 0xf0;
      }
    }
  }
  param_1[2] = lVar6 + lVar7;
  return 0;
}


// ===== 00570e54  FUN_00570e54 =====

undefined8 FUN_00570e54(long *param_1,void *param_2,ulong param_3)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if ((ulong)(*param_1 - lVar1) < param_3) {
    FUN_00558b5c(param_1,lVar1,param_3,1,1);
    lVar1 = param_1[2];
  }
  else if (param_3 == 0) goto LAB_00570e94;
  memcpy((void *)(param_1[1] + lVar1),param_2,param_3);
LAB_00570e94:
  param_1[2] = lVar1 + param_3;
  return 0;
}


// ===== 00570ed8  FUN_00570ed8 =====

void FUN_00570ed8(undefined8 param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <usize_as_core::fmt::LowerHex>::fmt();
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <usize_as_core::fmt::Display>::fmt();
    return;
  }
  <usize_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 00570ef0  <flux::actions::GlobalActionTypeParseError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <flux::actions::GlobalActionTypeParseError as core::fmt::Display>::fmt */

void __rustcall
<flux::actions::GlobalActionTypeParseError_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_28;
  undefined8 *puStack_20;
  code *local_18;
  
  puStack_20 = &local_28;
  local_18 = FUN_00570ba0;
  local_28 = param_1;
  core::fmt::write(*param_2,param_2[1],&DAT_002a28c9,&puStack_20);
  return;
}


// ===== 00570f30  <flux::telemetry::FluxTimingsKind_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <flux::telemetry::FluxTimingsKind as core::fmt::Display>::fmt */

void __rustcall
<flux::telemetry::FluxTimingsKind_as_core::fmt::Display>::fmt(ulong *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong *local_28;
  ulong **local_20;
  code *local_18;
  
  lVar1 = 0;
  if (4 < *param_1) {
    lVar1 = *param_1 - 5;
  }
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      local_20 = &local_28;
      local_18 = FUN_00567e1c;
      local_28 = param_1;
      core::fmt::write(*param_2,param_2[1],&DAT_002a4678,&local_20);
      return;
    }
    local_28 = param_1 + 1;
    local_20 = &local_28;
    local_18 = FUN_005591b8;
    core::fmt::write(*param_2,param_2[1],&DAT_002a1ba2,&local_20);
    return;
  }
  if (lVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00570fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0x18))(*param_2,"dispatch_globalparse_action_json",0xf);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00570ff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,"parse_action_json",0x11);
  return;
}


// ===== 00570ff8  FUN_00570ff8 =====

void FUN_00570ff8(long param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
            (param_2,"Errordispatch_globalparse_action_json",5,&DAT_002bcfe4,4,param_1 + 4,
             &DAT_00ad0f40,"extended_code",0xd,&local_18,&DAT_00ad0e98);
  return;
}


// ===== 00571064  FUN_00571064 =====

void FUN_00571064(long param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


// ===== 00571078  FUN_00571078 =====

void FUN_00571078(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  core::fmt::write(param_1,&PTR_FUN_00ad0ed8,param_2,param_3);
  return;
}


// ===== 0057108c  FUN_0057108c =====

undefined8 FUN_0057108c(void)

{
  return 0;
}


// ===== 00571094  FUN_00571094 =====

void FUN_00571094(long param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong local_70;
  void *local_68 [7];
  
                    /* try { // try from 005710ac to 005710b7 has its CatchHandler @ 00571208 */
  <rusqlite::inner_connection::rusqlite::inner_connection::InnerConnection>::close
            (&local_70,param_1 + 8);
  if (local_70 == 0xffffffffffffffff) goto LAB_005711ac;
  uVar3 = local_70 ^ 0x8000000000000000;
  if (-1 < (long)local_70) {
    uVar3 = 0x14;
  }
  if (uVar3 < 0x15) {
    if ((1L << (uVar3 & 0x3f) & 0x30e0U) != 0) goto joined_r0x00571164;
    if (uVar3 == 0xf) {
                    /* WARNING: Load size is inaccurate */
      if (*local_68[1] != (code *)0x0) {
                    /* try { // try from 00571190 to 00571197 has its CatchHandler @ 005711e4 */
        (**local_68[1])(local_68[0]);
      }
      goto LAB_00571198;
    }
    if (uVar3 != 0x14) goto LAB_00571148;
    if (local_70 != 0) {
      free(local_68[0]);
    }
    lVar5 = 0x18;
joined_r0x00571140:
    if (local_68[2] == (void *)0x0) goto LAB_005711ac;
    local_68[0] = *(void **)((long)local_68 + lVar5);
  }
  else {
LAB_00571148:
    if (uVar3 != 2) {
      if ((uVar3 != 0) || (local_68[0] == (void *)0xffffffffffffffff)) goto LAB_005711ac;
joined_r0x00571164:
      lVar5 = 8;
      local_68[2] = local_68[0];
      goto joined_r0x00571140;
    }
                    /* WARNING: Load size is inaccurate */
    if (*local_68[1] != (code *)0x0) {
                    /* try { // try from 00571178 to 0057117f has its CatchHandler @ 005711e8 */
      (**local_68[1])(local_68[0]);
    }
LAB_00571198:
    if (*(long *)((long)local_68[1] + 8) == 0) goto LAB_005711ac;
  }
  free(local_68[0]);
LAB_005711ac:
  plVar4 = *(long **)(param_1 + 8);
  do {
    lVar5 = *plVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<*mut_libsqlite3_sys::bindings::sqlite3>>>
    ::drop_slow(param_1 + 8);
  }
  return;
}


// ===== 0057123c  FUN_0057123c =====

void FUN_0057123c(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
                    /* try { // try from 00571250 to 00571277 has its CatchHandler @ 005712b4 */
    uVar3 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(plVar5 + 6);
    if ((uVar3 & 5) == 1) {
      (**(code **)(plVar5[4] + 0x10))(plVar5[5]);
      plVar5 = (long *)*param_1;
      if (plVar5 == (long *)0x0) {
        return;
      }
    }
    do {
      lVar4 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<bool>>>::drop_slow(param_1);
      return;
    }
  }
  return;
}


// ===== 005712ec  FUN_005712ec =====

void FUN_005712ec(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 005712fc to 005712ff has its CatchHandler @ 00571338 */
  FUN_00558a28();
  plVar3 = (long *)*param_1;
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::mpsc::chan::Chan<flux[2406cd06d16b4816]::persistence::worker::PersistenceWorkerCommand,tokio[8c8895dbfa691109]::sync::mpsc::unbounded::Semaphore>>>
    ::drop_slow(param_1);
    return;
  }
  return;
}


// ===== 0057136c  FUN_0057136c =====

void FUN_0057136c(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_1 + 0x20);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 00571398 to 0057139b has its CatchHandler @ 005713f4 */
    <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
    drop_slow();
  }
                    /* try { // try from 0057139c to 005713a3 has its CatchHandler @ 0057143c */
  FUN_0057153c(param_1 + 0x30);
  if (*(long *)(param_1 + 0x310) != 0) {
                    /* try { // try from 005713b4 to 005713b7 has its CatchHandler @ 00571408 */
    (**(code **)(*(long *)(param_1 + 0x310) + 0x18))(*(undefined8 *)(param_1 + 0x318));
  }
  plVar3 = *(long **)(param_1 + 800);
  if (plVar3 != (long *)0x0) {
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow(param_1 + 800);
      return;
    }
  }
  return;
}


// ===== 00571454  FUN_00571454 =====

void FUN_00571454(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_1 + 0x20);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 00571480 to 00571483 has its CatchHandler @ 005714dc */
    <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>::
    drop_slow();
  }
                    /* try { // try from 00571484 to 0057148b has its CatchHandler @ 00571524 */
  FUN_0057153c(param_1 + 0x30);
  if (*(long *)(param_1 + 0x310) != 0) {
                    /* try { // try from 0057149c to 0057149f has its CatchHandler @ 005714f0 */
    (**(code **)(*(long *)(param_1 + 0x310) + 0x18))(*(undefined8 *)(param_1 + 0x318));
  }
  plVar3 = *(long **)(param_1 + 800);
  if (plVar3 != (long *)0x0) {
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow(param_1 + 800);
      return;
    }
  }
  return;
}


// ===== 0057153c  FUN_0057153c =====

void FUN_0057153c(int *param_1)

{
  code *pcVar1;
  void *__ptr;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    if (*(char *)((long)param_1 + 0x2c9) == '\x03') {
                    /* try { // try from 005715cc to 005715d7 has its CatchHandler @ 00571614 */
      FUN_00571bc8(param_1 + 0x50);
      FUN_00571a14(param_1 + 0xe);
      return;
    }
    if (*(char *)((long)param_1 + 0x2c9) == '\0') {
      FUN_00571a14(param_1 + 0x70);
      return;
    }
  }
  else if (((*param_1 == 1) && (*(long *)(param_1 + 2) != 0)) &&
          (__ptr = *(void **)(param_1 + 4), __ptr != (void *)0x0)) {
    puVar2 = *(undefined8 **)(param_1 + 6);
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
                    /* try { // try from 00571574 to 0057157b has its CatchHandler @ 005715f0 */
      (*pcVar1)(__ptr);
    }
    if (puVar2[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 0057162c  FUN_0057162c =====

void FUN_0057162c(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong local_80 [3];
  undefined8 local_68;
  ulong local_60;
  undefined8 local_58;
  long lStack_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38 [2];
  long local_28;
  
                    /* try { // try from 00571640 to 00571643 has its CatchHandler @ 00571708 */
  <rusqlite::raw_statement::RawStatement_as_core::ops::drop::Drop>::drop();
  lVar4 = *(long *)(param_1 + 8);
  if (lVar4 == 0) {
    local_40 = 0;
  }
  else {
    local_68 = *(undefined8 *)(param_1 + 0x10);
    local_40 = *(undefined8 *)(param_1 + 0x18);
    local_80[1] = 0;
    local_58 = 0;
    local_80[2] = lVar4;
    lStack_50 = lVar4;
    local_48 = local_68;
  }
  local_80[0] = (ulong)(lVar4 != 0);
                    /* try { // try from 00571678 to 00571683 has its CatchHandler @ 00571704 */
  local_60 = local_80[0];
  FUN_0055815c(local_38,local_80);
  while (local_38[0] != 0) {
    lVar4 = local_38[0] + local_28 * 0x20;
    if (0x10 < *(ulong *)(lVar4 + 0x18)) {
      free(*(void **)(lVar4 + 0x10));
    }
                    /* try { // try from 00571688 to 00571693 has its CatchHandler @ 00571718 */
    FUN_0055815c(local_38,local_80);
  }
  plVar3 = *(long **)(param_1 + 0x20);
  if (plVar3 != (long *)0x0) {
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow((undefined8 *)(param_1 + 0x20));
      return;
    }
  }
  return;
}


// ===== 00571750  FUN_00571750 =====

void FUN_00571750(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *__ptr;
  void *__ptr_00;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  long *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  pvVar4 = *(void **)(param_1 + 0x30);
  if (pvVar4 != (void *)0x0) {
    __ptr_00 = *(void **)((long)pvVar4 + 8);
    while (__ptr_00 != pvVar4) {
      uStack_88 = *(undefined8 *)((long)__ptr_00 + 0x18);
      local_90 = *(long **)((long)__ptr_00 + 0x10);
      uStack_78 = *(undefined8 *)((long)__ptr_00 + 0x28);
      uStack_80 = *(undefined8 *)((long)__ptr_00 + 0x20);
      pvVar5 = *(void **)((long)__ptr_00 + 8);
      local_50 = *(undefined8 *)((long)__ptr_00 + 0x50);
      uStack_68 = *(undefined8 *)((long)__ptr_00 + 0x38);
      local_70 = *(undefined8 *)((long)__ptr_00 + 0x30);
      uStack_58 = *(undefined8 *)((long)__ptr_00 + 0x48);
      uStack_60 = *(undefined8 *)((long)__ptr_00 + 0x40);
      do {
        lVar3 = *local_90;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(local_90,0x10);
        if (bVar2) {
          *local_90 = lVar3 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar3 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 005717bc to 005717c3 has its CatchHandler @ 0057185c */
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(&local_90);
      }
                    /* try { // try from 005717c4 to 005717cb has its CatchHandler @ 00571870 */
      FUN_0057162c(&uStack_80);
      free(__ptr_00);
      __ptr_00 = pvVar5;
    }
    free(pvVar4);
  }
  __ptr = (undefined8 *)*(void **)(param_1 + 0x38);
  while (__ptr != (undefined8 *)0x0) {
    pvVar4 = (void *)*__ptr;
    free(__ptr);
    __ptr = (undefined8 *)pvVar4;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    free((void *)(*(long *)(param_1 + 8) - (*(long *)(param_1 + 0x10) * 8 + 8)));
  }
  return;
}


// ===== 00571890  FUN_00571890 =====

void FUN_00571890(long param_1)

{
  char cVar1;
  bool bVar2;
  void *__ptr;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  long *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    *(undefined8 *)(param_1 + 0x20) = 0xffffffffffffffff;
    if (*(long *)(param_1 + 0x40) != 0) {
      uVar4 = *(ulong *)(param_1 + 0x30);
      if (uVar4 != 0) {
        memset(*(void **)(param_1 + 0x28),0xff,uVar4 + 9);
        uVar4 = *(ulong *)(param_1 + 0x30);
        if (7 < uVar4) {
          uVar4 = (uVar4 + 1 >> 3) * 7;
        }
      }
      *(ulong *)(param_1 + 0x38) = uVar4;
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    pvVar6 = *(void **)(param_1 + 0x50);
    if (pvVar6 != (void *)0x0) {
      __ptr = *(void **)((long)pvVar6 + 8);
      while (__ptr != pvVar6) {
        uStack_88 = *(undefined8 *)((long)__ptr + 0x18);
        local_90 = *(long **)((long)__ptr + 0x10);
        uStack_78 = *(undefined8 *)((long)__ptr + 0x28);
        uStack_80 = *(undefined8 *)((long)__ptr + 0x20);
        pvVar7 = *(void **)((long)__ptr + 8);
        local_50 = *(undefined8 *)((long)__ptr + 0x50);
        uStack_68 = *(undefined8 *)((long)__ptr + 0x38);
        local_70 = *(undefined8 *)((long)__ptr + 0x30);
        uStack_58 = *(undefined8 *)((long)__ptr + 0x48);
        uStack_60 = *(undefined8 *)((long)__ptr + 0x40);
        do {
          lVar5 = *local_90;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(local_90,0x10);
          if (bVar2) {
            *local_90 = lVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar5 + -1 == 0) {
          DataMemoryBarrier(2,1);
                    /* try { // try from 00571950 to 00571957 has its CatchHandler @ 005719cc */
          <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(&local_90);
        }
                    /* try { // try from 00571958 to 0057195f has its CatchHandler @ 005719e0 */
        FUN_0057162c(&uStack_80);
        free(__ptr);
        __ptr = pvVar7;
      }
      *(void **)pvVar6 = pvVar6;
      *(void **)((long)pvVar6 + 8) = pvVar6;
    }
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
                    /* try { // try from 0057198c to 00571993 has its CatchHandler @ 005719c4 */
    FUN_00571094(param_1);
    FUN_00571750((long *)(param_1 + 0x20));
    return;
  }
                    /* try { // try from 005719b4 to 005719bf has its CatchHandler @ 005719f4 */
  core::cell::panic_already_borrowed(&PTR_s__root__cargo_registry_src_index__00ad10a0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x5719c4);
  (*pcVar3)();
}


// ===== 00571a14  FUN_00571a14 =====

void FUN_00571a14(long param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  
                    /* try { // try from 00571a30 to 00571a33 has its CatchHandler @ 00571b88 */
  FUN_0055e2cc();
  lVar5 = *(long *)(param_1 + 0x28);
  if (lVar5 != 0) {
    lVar6 = *(long *)(param_1 + 0x38);
    if (lVar6 != 0) {
      puVar7 = *(undefined8 **)(param_1 + 0x20);
      puVar8 = puVar7 + 1;
      uVar9 = NEON_cmge(*puVar7,0,1);
      uVar9 = uVar9 & 0x8080808080808080;
      do {
        for (; uVar9 == 0; uVar9 = uVar9 & 0x8080808080808080) {
          puVar7 = puVar7 + -0x30;
          uVar9 = NEON_cmge(*puVar8,0,1);
          puVar8 = puVar8 + 1;
        }
        uVar1 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
                    /* try { // try from 00571a90 to 00571a93 has its CatchHandler @ 00571b98 */
        FUN_0055e604(puVar7 + (long)-(int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) * 6 +
                              -4);
        lVar6 = lVar6 + -1;
        uVar9 = uVar9 - 1 & uVar9;
      } while (lVar6 != 0);
    }
    if (lVar5 * 0x31 != -0x39) {
      free((void *)(*(long *)(param_1 + 0x20) + lVar5 * -0x30 + -0x30));
    }
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if ((lVar5 != 0) && (lVar5 * 0x11 != -0x19)) {
    free((void *)(*(long *)(param_1 + 0x40) + lVar5 * -0x10 + -0x10));
  }
                    /* try { // try from 00571af8 to 00571aff has its CatchHandler @ 00571b80 */
  FUN_0055e2cc(param_1 + 0x60);
                    /* try { // try from 00571b00 to 00571b07 has its CatchHandler @ 00571b50 */
  FUN_00558a28(param_1 + 0x80);
  plVar4 = *(long **)(param_1 + 0x80);
  do {
    lVar5 = *plVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar3) {
      *plVar4 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 00571b24 to 00571b2b has its CatchHandler @ 00571b48 */
    <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::mpsc::chan::Chan<flux[2406cd06d16b4816]::persistence::worker::PersistenceWorkerCommand,tokio[8c8895dbfa691109]::sync::mpsc::unbounded::Semaphore>>>
    ::drop_slow(param_1 + 0x80);
  }
  FUN_00571890(param_1 + 0x88);
  return;
}


// ===== 00571bc8  FUN_00571bc8 =====

void FUN_00571bc8(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 00571bd8 to 00571bdb has its CatchHandler @ 00571c64 */
  <tokio::runtime::time::entry::TimerEntry_as_core::ops::drop::Drop>::drop();
  if (*param_1 == 0) {
    plVar3 = (long *)param_1[1];
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
      drop_slow();
    }
  }
  else {
    plVar3 = (long *)param_1[1];
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 00571c04 to 00571c2b has its CatchHandler @ 00571c5c */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>
      ::drop_slow();
    }
  }
  if ((param_1[4] != 0) && (param_1[9] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00571c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[9] + 0x18))(param_1[10]);
    return;
  }
  return;
}


// ===== 00571c98  FUN_00571c98 =====

void FUN_00571c98(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*param_1 == 0) {
    plVar3 = (long *)param_1[1];
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
      drop_slow();
      return;
    }
  }
  else {
    plVar3 = (long *)param_1[1];
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>
      ::drop_slow();
      return;
    }
  }
  return;
}


// ===== 00571ce4  FUN_00571ce4 =====

void FUN_00571ce4(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* try { // try from 00571d04 to 00571d07 has its CatchHandler @ 00571d44 */
    (**(code **)(*(long *)(param_1 + 0x10) + 0x18))(*(undefined8 *)(param_1 + 0x18));
  }
  plVar3 = *(long **)(param_1 + 0x20);
  if (plVar3 != (long *)0x0) {
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow((undefined8 *)(param_1 + 0x20));
      return;
    }
  }
  return;
}


// ===== 00571d7c  FUN_00571d7c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00571d7c(long *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  void *__ptr;
  undefined1 uVar4;
  long lVar5;
  code *pcVar6;
  undefined8 *extraout_x10;
  undefined8 *extraout_x10_00;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *extraout_x11;
  undefined8 *extraout_x11_00;
  undefined8 *puVar9;
  ulong uVar10;
  byte bVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  byte bVar23;
  undefined8 uVar24;
  ulong uVar25;
  undefined1 auVar26 [16];
  long local_188;
  char *pcStack_180;
  long local_178;
  long lStack_170;
  char *local_168;
  long lStack_160;
  long lStack_158;
  char *pcStack_150;
  long local_148;
  long lStack_140;
  char *local_138;
  long lStack_130;
  long local_128;
  long lStack_120;
  long local_118;
  undefined8 *local_110;
  undefined8 *puStack_108;
  undefined8 *local_100;
  ulong uStack_f8;
  undefined8 *local_f0;
  undefined8 *puStack_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  ulong local_d0;
  undefined8 *local_c8;
  undefined1 *local_c0;
  ulong local_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  long *local_88;
  code *pcStack_80;
  undefined1 auStack_71 [17];
  
  bVar11 = *(byte *)((long)param_1 + 0x2c1);
  if (bVar11 < 2) {
    if (bVar11 == 0) {
      memcpy(param_1 + 6,param_1 + 0x37,0x108);
      if (2 < *(ulong *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78) {
        pcStack_150 = "flux::persistence";
        local_148 = 0x11;
        local_138 = "Persistence Worker started.";
        lStack_130 = 0x37;
        lStack_170 = _UNK_002a00f8;
        local_178 = _DAT_002a00f0;
        local_188 = 0;
        pcStack_180 = "flux::persistence::worker";
        lStack_158 = _UNK_002a06a8;
        lStack_160 = _DAT_002a06a0;
        local_168 = "mobile/flux/src/persistence/worker.rs";
        lStack_140 = DAT_002a1698;
                    /* try { // try from 00571e3c to 00571e47 has its CatchHandler @ 00571ebc */
        <log::__private_api::GlobalLogger_as_log::Log>::log(auStack_71,&local_188);
      }
                    /* try { // try from 00571e50 to 00571e5f has its CatchHandler @ 00571ec4 */
      tokio::time::sleep::sleep
                (&local_188,param_1[0x25],(int)param_1[0x26],
                 &PTR_s_mobile_flux_src_persistence_work_00ad0f88);
      param_1[0x30] = lStack_140;
      param_1[0x2f] = local_148;
      param_1[0x32] = lStack_130;
      param_1[0x31] = (long)local_138;
      param_1[0x34] = lStack_120;
      param_1[0x33] = local_128;
      param_1[0x28] = (long)pcStack_180;
      param_1[0x27] = local_188;
      param_1[0x2a] = lStack_170;
      param_1[0x29] = local_178;
      param_1[0x35] = local_118;
      param_1[0x36] = (long)(param_1 + 0x27);
      param_1[0x2c] = lStack_160;
      param_1[0x2b] = (long)local_168;
      param_1[0x2e] = (long)pcStack_150;
      param_1[0x2d] = lStack_158;
      do {
        while( true ) {
          while( true ) {
            *param_1 = (long)(param_1 + 0x16);
            *(undefined1 *)(param_1 + 2) = 0;
            uVar4 = 2;
            if (param_1[0x15] != 0) {
              uVar4 = 0;
            }
            param_1[3] = (long)(param_1 + 0x36);
            param_1[4] = (long)(param_1 + 0x58);
            *(undefined1 *)(param_1 + 0x58) = uVar4;
            param_1[5] = (long)param_1;
LAB_00571efc:
                    /* try { // try from 00571efc to 00571f0b has its CatchHandler @ 005724b4 */
            FUN_005583fc(&local_f0,param_1 + 4,param_2);
            uVar14 = local_d0;
            puVar3 = local_e0;
            puVar13 = puStack_e8;
            puVar7 = local_f0;
            if (local_f0 == (undefined8 *)&DAT_fffffffffffffffe) {
              uVar4 = 3;
              goto LAB_005723cc;
            }
            puVar9 = local_f0;
            if ((long)local_f0 < 4) {
              puVar9 = (undefined8 *)0x3;
            }
            if (puVar9 == (undefined8 *)0x3) break;
            if (puVar9 != (undefined8 *)&DAT_00000004) goto LAB_005723a8;
                    /* try { // try from 00571f34 to 00571f3b has its CatchHandler @ 005724b0 */
            <flux::persistence::worker::[0]::flux::persistence::worker::PersistenceWorker>::
            flush_pending(param_1 + 6);
          }
          if (1 < (long)local_f0) break;
          if (local_f0 == (undefined8 *)0x0) {
            local_110 = puStack_e8;
            puStack_108 = local_e0;
            puStack_e8 = local_e0;
            local_f0 = puVar13;
                    /* try { // try from 005722dc to 005722eb has its CatchHandler @ 005724a8 */
            auVar26 = FUN_005665f4(param_1 + 6,&local_f0,local_d8,local_d0);
            __ptr = auVar26._0_8_;
            if (__ptr != (void *)0x0) {
              pcVar6 = (code *)*auVar26._8_8_;
              if (pcVar6 != (code *)0x0) {
                    /* try { // try from 00572300 to 00572307 has its CatchHandler @ 00572460 */
                (*pcVar6)(__ptr);
              }
              if (auVar26._8_8_[1] != 0) {
                free(__ptr);
              }
            }
                    /* try { // try from 0057231c to 00572327 has its CatchHandler @ 005724a4 */
            FUN_005669c8(param_1 + 0xe,&local_110);
          }
          else {
            if (local_f0 != (undefined8 *)&DAT_00000001) {
                    /* try { // try from 00572400 to 00572417 has its CatchHandler @ 005724a0 */
                    /* WARNING: Subroutine does not return */
              core::panicking::panic_fmt
                        ("internal error: entered unreachable code: failed to match bind",0x7d,
                         &PTR_s_mobile_flux_src_persistence_work_00ad0fb8);
            }
            local_110 = puStack_e8;
            puStack_108 = local_e0;
            local_100 = local_d8;
            uStack_f8 = local_d0;
            puVar7 = extraout_x10;
            puVar9 = extraout_x11;
            if (param_1[0x15] == 0) {
              lVar15 = param_1[0x36];
                    /* try { // try from 00571f74 to 00571f77 has its CatchHandler @ 00572450 */
              auVar26 = <tokio::time::instant::tokio::time::instant::Instant>::now();
                    /* try { // try from 00571f80 to 00571f83 has its CatchHandler @ 0057244c */
              auVar26 = <tokio::time::instant::Instant_as_core::ops::arith::Add<{backref_16}::time::Duration>>
                        ::add(auVar26._0_8_,auVar26._8_8_,param_1[0x25],(int)param_1[0x26]);
                    /* try { // try from 00571f84 to 00571f9b has its CatchHandler @ 00572448 */
              <tokio::time::sleep::tokio::time::sleep::Sleep>::reset
                        (lVar15,auVar26._0_8_,auVar26._8_8_ & 0xffffffff);
              puVar7 = extraout_x10_00;
              puVar9 = extraout_x11_00;
            }
            local_f0 = (undefined8 *)0x0;
            if (puVar3 != (undefined8 *)0x0) {
              puVar7 = (undefined8 *)((long)puVar3 * 0x21 + 0x29);
              puVar9 = puVar13 + (long)puVar3 * -4 + -4;
              local_f0 = (undefined8 *)&DAT_00000008;
            }
            uVar19 = NEON_cmge(*puVar13,0,1);
            puVar18 = puVar13 + 1;
            local_d8 = puVar13;
            uVar19 = uVar19 & 0x8080808080808080;
            local_c0 = (undefined1 *)((long)puVar13 + (long)puVar3) + 1;
            local_b8 = uVar14;
            local_c8 = puVar18;
            local_d0 = uVar19;
            local_e0 = puVar9;
            puStack_e8 = puVar7;
            if (uVar14 != 0) {
joined_r0x00571fec:
              for (; uVar19 == 0; uVar19 = uVar19 & 0x8080808080808080) {
                puVar13 = puVar13 + -0x20;
                uVar19 = NEON_cmge(*puVar18,0,1);
                puVar18 = puVar18 + 1;
              }
              uVar17 = (uVar19 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                       (uVar19 >> 7 & 0xff00ff00ff00ff) << 8;
              uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
              uVar14 = uVar14 - 1;
              uVar19 = uVar19 - 1 & uVar19;
              uVar17 = LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) & 0x78;
              lVar22 = *(long *)((long)puVar13 + uVar17 * -4 + -0x18);
              lVar20 = *(long *)((long)puVar13 + uVar17 * -4 + -0x20);
              lVar15 = *(long *)((long)puVar13 + uVar17 * -4 + -0x10);
              uVar25 = uVar14;
              local_b0 = lVar20;
              lStack_a8 = lVar22;
              if (lVar15 != 0) {
                uVar16 = *(undefined8 *)((long)puVar13 + uVar17 * -4 + -8);
                local_a0 = lVar20;
                lStack_98 = lVar22;
                if (param_1[9] == 0) {
LAB_0057232c:
                  local_88 = &local_a0;
                  pcStack_80 = FUN_005729e8;
                    /* try { // try from 00572348 to 0057235f has its CatchHandler @ 005724bc */
                  local_d8 = puVar13;
                  local_d0 = uVar19;
                  local_c8 = puVar18;
                  local_b8 = uVar14;
                    /* WARNING: Subroutine does not return */
                  core::panicking::panic_fmt
                            (&DAT_002ac3c4,&local_88,
                             &PTR_s_mobile_flux_src_persistence_work_00ad0fd0);
                }
                lVar5 = 0;
                uVar17 = lVar22 * 0x517cc1b727220a95;
                bVar11 = (byte)(uVar17 >> 0x38);
                bVar23 = bVar11 >> 1;
                uVar21 = CONCAT17(bVar23,CONCAT16(bVar23,CONCAT15(bVar23,CONCAT14(bVar23,CONCAT13(
                                                  bVar23,CONCAT12(bVar23,CONCAT11(bVar23,bVar23)))))
                                                 ));
                lVar1 = param_1[6];
                uVar2 = param_1[7];
                uVar10 = uVar17 & uVar2;
                uVar24 = *(undefined8 *)(lVar1 + uVar10);
                uVar25 = NEON_cmeq(uVar24,uVar21,1);
                uVar25 = uVar25 & 0x8080808080808080;
                while( true ) {
                  for (; uVar25 == 0; uVar25 = uVar25 & 0x8080808080808080) {
                    uVar24 = NEON_cmeq(uVar24,0xffffffffffffffff,1);
                    bVar23 = NEON_umaxv(uVar24,1);
                    if ((bVar23 & 1) != 0) goto LAB_0057232c;
                    lVar5 = lVar5 + 8;
                    uVar10 = uVar10 + lVar5 & uVar2;
                    uVar24 = *(undefined8 *)(lVar1 + uVar10);
                    uVar25 = NEON_cmeq(uVar24,uVar21,1);
                  }
                  uVar12 = (uVar25 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                           (uVar25 >> 7 & 0xff00ff00ff00ff) << 8;
                  uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10
                  ;
                  lVar8 = lVar1 + (uVar10 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3) &
                                  uVar2) * -0x20;
                  if (lVar22 == *(long *)(lVar8 + -0x18) && lVar20 == *(long *)(lVar8 + -0x20))
                  break;
                  uVar25 = uVar25 - 1 & uVar25;
                }
                puVar7 = (undefined8 *)param_1[0x12];
                uVar2 = param_1[0x13];
                lVar5 = 0;
                uVar10 = uVar17 & uVar2;
                uVar24 = *(undefined8 *)((long)puVar7 + uVar10);
                uVar25 = NEON_cmeq(uVar24,uVar21,1);
                uVar25 = uVar25 & 0x8080808080808080;
                do {
                  if (uVar25 == 0) {
LAB_00572148:
                    uVar24 = NEON_cmeq(uVar24,0xffffffffffffffff,1);
                    bVar23 = NEON_umaxv(uVar24,1);
                    if ((bVar23 & 1) == 0) goto code_r0x0057215c;
                    if (param_1[0x14] == 0) {
                    /* try { // try from 0057222c to 0057223f has its CatchHandler @ 0057241c */
                      <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(record_mapper[dbd33a546c644578]::record_value::RecordTypeId,alloc[c1f8e832b0d782c7]::boxed::Box<dyn_flux[2406cd06d16b4816]::persistence::DynStoreReplicationHandler>)>>
                      ::reserve_rehash::
                      <hashbrown[32fc5d502e7f9af5]::map::make_hasher<record_mapper[dbd33a546c644578]::record_value::RecordTypeId,alloc[c1f8e832b0d782c7]::boxed::Box<dyn_flux[2406cd06d16b4816]::persistence::DynStoreReplicationHandler>,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
                                (param_1 + 0x12,1,param_1 + 0x16,1);
                      puVar7 = (undefined8 *)param_1[0x12];
                      uVar2 = param_1[0x13];
                      uVar17 = uVar2 & uVar17;
                      uVar25 = NEON_cmlt(*(undefined8 *)((long)puVar7 + uVar17),0,1);
                    }
                    else {
                      uVar17 = uVar2 & uVar17;
                      uVar25 = NEON_cmlt(*(undefined8 *)((long)puVar7 + uVar17),0,1);
                    }
                    if (uVar25 == 0) {
                      lVar5 = 8;
                      do {
                        uVar17 = uVar17 + lVar5;
                        lVar5 = lVar5 + 8;
                        uVar17 = uVar17 & uVar2;
                        uVar25 = NEON_cmlt(*(undefined8 *)((long)puVar7 + uVar17),0,1);
                      } while (uVar25 == 0);
                    }
                    bVar11 = bVar11 >> 1;
                    uVar25 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar25 & 0x5555555555555555) << 1
                    ;
                    uVar25 = (uVar25 & 0xcccccccccccccccc) >> 2 | (uVar25 & 0x3333333333333333) << 2
                    ;
                    uVar25 = (uVar25 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar25 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar25 = (uVar25 & 0xff00ff00ff00ff00) >> 8 | (uVar25 & 0xff00ff00ff00ff) << 8;
                    uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar25 & 0xffff0000ffff) << 0x10;
                    uVar17 = uVar17 + ((ulong)LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) >> 3) & uVar2
                    ;
                    uVar25 = (ulong)*(char *)((long)puVar7 + uVar17);
                    if (-1 < *(char *)((long)puVar7 + uVar17)) {
                      uVar17 = NEON_cmlt(*puVar7,0,1);
                      uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                               (uVar17 & 0x5555555555555555) << 1;
                      uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 |
                               (uVar17 & 0x3333333333333333) << 2;
                      uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                               (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
                      uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8
                      ;
                      uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar17 & 0xffff0000ffff) << 0x10;
                      uVar17 = (ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3;
                      uVar25 = (ulong)*(byte *)((long)puVar7 + uVar17);
                    }
                    *(byte *)((long)puVar7 + uVar17) = bVar11;
                    *(byte *)((long)puVar7 + (uVar17 - 8 & uVar2) + 8) = bVar11;
                    param_1[0x14] = param_1[0x14] - (uVar25 & 1);
                    puVar7[uVar17 * -4 + -4] = lVar20;
                    puVar7[uVar17 * -4 + -3] = lVar22;
                    puVar7[uVar17 * -4 + -2] = lVar15;
                    puVar7[uVar17 * -4 + -1] = uVar16;
                    param_1[0x15] = param_1[0x15] + 1;
                    goto joined_r0x005721a0;
                  }
LAB_00572118:
                  uVar12 = (uVar25 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                           (uVar25 >> 7 & 0xff00ff00ff00ff) << 8;
                  uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10
                  ;
                  uVar12 = uVar10 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3) & uVar2;
                  if (puVar7[uVar12 * -4 + -3] == lVar22 && puVar7[uVar12 * -4 + -4] == lVar20)
                  goto LAB_00572180;
                  uVar25 = uVar25 - 1 & uVar25;
                } while( true );
              }
              goto LAB_00572368;
            }
            uVar25 = 0;
LAB_00572368:
                    /* try { // try from 00572374 to 0057237f has its CatchHandler @ 00572478 */
            local_d8 = puVar13;
            local_d0 = uVar19;
            local_c8 = puVar18;
            local_b8 = uVar25;
            FUN_0055de08(&local_d8);
            if ((local_f0 != (undefined8 *)0x0) && (puStack_e8 != (undefined8 *)0x0)) {
              free(local_e0);
            }
          }
        }
        if (local_f0 != (undefined8 *)0x2) {
LAB_005723a8:
          if (param_1[0x15] != 0) {
                    /* try { // try from 005723b0 to 005723b7 has its CatchHandler @ 00572430 */
            <flux::persistence::worker::[0]::flux::persistence::worker::PersistenceWorker>::
            flush_pending(param_1 + 6);
          }
                    /* try { // try from 005723b8 to 005723bf has its CatchHandler @ 00572440 */
          FUN_00571bc8(param_1 + 0x27);
                    /* try { // try from 005723c0 to 005723c7 has its CatchHandler @ 00572434 */
          FUN_00571a14(param_1 + 6);
          uVar4 = 1;
LAB_005723cc:
          *(undefined1 *)((long)param_1 + 0x2c1) = uVar4;
          return puVar7 == (undefined8 *)&DAT_fffffffffffffffe;
        }
        lVar15 = param_1[0x15];
        local_f0 = puStack_e8;
        if (lVar15 != 0) {
                    /* try { // try from 005722b4 to 005722bb has its CatchHandler @ 00572490 */
          <flux::persistence::worker::[0]::flux::persistence::worker::PersistenceWorker>::
          flush_pending(param_1 + 6);
        }
                    /* try { // try from 005722c4 to 005722cb has its CatchHandler @ 005724ac */
        FUN_00567b70(puVar13,lVar15 != 0);
      } while( true );
    }
  }
  else {
    if (bVar11 == 3) goto LAB_00571efc;
    core::panicking::panic_const::panic_const_async_fn_resumed_panic
              (&PTR_s_mobile_flux_src_persistence_work_00ad0fa0);
  }
  uVar16 = core::panicking::panic_const::panic_const_async_fn_resumed
                     (&PTR_s_mobile_flux_src_persistence_work_00ad0fa0);
  FUN_00571a14(param_1 + 6);
  *(undefined1 *)((long)param_1 + 0x2c1) = 2;
                    /* WARNING: Subroutine does not return */
  FUN_00ab2530(uVar16);
                    /* catch() { ... } // from try @ 00571e3c with catch @ 00571ebc */
code_r0x0057215c:
  lVar5 = lVar5 + 8;
  uVar10 = uVar10 + lVar5 & uVar2;
  uVar24 = *(undefined8 *)((long)puVar7 + uVar10);
  uVar25 = NEON_cmeq(uVar24,uVar21,1);
  uVar25 = uVar25 & 0x8080808080808080;
  if (uVar25 != 0) goto LAB_00572118;
  goto LAB_00572148;
LAB_00572180:
                    /* try { // try from 0057218c to 00572197 has its CatchHandler @ 0057247c */
  (**(code **)(*(long *)(lVar8 + -8) + 0x30))
            (*(undefined8 *)(lVar8 + -0x10),puVar7[uVar12 * -4 + -2],puVar7[uVar12 * -4 + -1],lVar15
             ,uVar16);
joined_r0x005721a0:
  uVar25 = 0;
  if (uVar14 == 0) goto LAB_00572368;
  goto joined_r0x00571fec;
}


// ===== 00572544  FUN_00572544 =====

void * FUN_00572544(void *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  void *__dest;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_680;
  undefined8 uStack_678;
  undefined **local_670;
  undefined8 uStack_668;
  long local_660;
  undefined8 uStack_658;
  undefined4 local_650;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined1 auStack_2fc [4];
  undefined1 auStack_2f8 [712];
  
  plVar4 = *(long **)(param_2 + 400);
  if (plVar4 == (long *)0x0) {
    uVar6 = 0;
    uVar7 = 0;
  }
  else {
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x57263c);
      (*pcVar3)();
    }
    uVar7 = *(undefined8 *)(param_2 + 0x198);
    uVar6 = *(undefined8 *)(param_2 + 400);
  }
  memcpy(auStack_2f8,param_1,0x2c8);
  local_670 = &PTR_thunk_FUN_0056cab8_00ad1000;
  uStack_668 = 0;
  uStack_678 = 0;
  local_650 = 0;
  local_680 = param_3;
  local_660 = param_2;
  uStack_658 = param_4;
  memcpy((void *)((ulong)&local_680 | 0x34),auStack_2fc,0x2cc);
  local_380 = 0;
  local_370 = 0;
  local_378 = 0;
  local_360 = uVar6;
  uStack_358 = uVar7;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  __dest = (void *)FUN_004b25a4(0x380,0x80);
  if (__dest != (void *)0x0) {
    memcpy(__dest,&local_680,0x380);
    return __dest;
  }
                    /* try { // try from 0057262c to 00572637 has its CatchHandler @ 0057263c */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(0x80,0x380);
}


// ===== 00572654  FUN_00572654 =====

void * FUN_00572654(void *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  void *__dest;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_680;
  undefined8 uStack_678;
  undefined **local_670;
  undefined8 uStack_668;
  long local_660;
  undefined8 uStack_658;
  undefined4 local_650;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined1 auStack_2fc [4];
  undefined1 auStack_2f8 [712];
  
  plVar4 = *(long **)(param_2 + 0x1f0);
  if (plVar4 == (long *)0x0) {
    uVar6 = 0;
    uVar7 = 0;
  }
  else {
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x57274c);
      (*pcVar3)();
    }
    uVar7 = *(undefined8 *)(param_2 + 0x1f8);
    uVar6 = *(undefined8 *)(param_2 + 0x1f0);
  }
  memcpy(auStack_2f8,param_1,0x2c8);
  local_670 = &PTR_thunk_FUN_0056d328_00ad1050;
  uStack_668 = 0;
  uStack_678 = 0;
  local_650 = 0;
  local_680 = param_3;
  local_660 = param_2;
  uStack_658 = param_4;
  memcpy((void *)((ulong)&local_680 | 0x34),auStack_2fc,0x2cc);
  local_380 = 0;
  local_370 = 0;
  local_378 = 0;
  local_360 = uVar6;
  uStack_358 = uVar7;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  __dest = (void *)FUN_004b25a4(0x380,0x80);
  if (__dest != (void *)0x0) {
    memcpy(__dest,&local_680,0x380);
    return __dest;
  }
                    /* try { // try from 0057273c to 00572747 has its CatchHandler @ 0057274c */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(0x80,0x380);
}


// ===== 00572764  FUN_00572764 =====

int FUN_00572764(long param_1,undefined8 param_2)

{
  int iVar1;
  int *__dest;
  undefined8 local_308 [90];
  undefined8 local_38;
  
  __dest = (int *)(param_1 + 0x10);
  if (*__dest == 0) {
    local_308[0] = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                             (*(undefined8 *)(param_1 + 8));
                    /* try { // try from 00572798 to 005727a3 has its CatchHandler @ 0057284c */
    iVar1 = FUN_00571d7c(param_1 + 0x18,param_2);
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(local_308);
    if (iVar1 == 0) {
      local_308[0] = CONCAT44(local_308[0]._4_4_,2);
                    /* try { // try from 005727c0 to 005727c3 has its CatchHandler @ 00572838 */
      local_38 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                           (*(undefined8 *)(param_1 + 8));
                    /* try { // try from 005727c8 to 005727cf has its CatchHandler @ 00572818 */
      FUN_0057153c(__dest);
      memcpy(__dest,local_308,0x2d0);
      <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_38);
    }
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            ("internal error: entered unreachable code: unexpected stage",0x75,
             &PTR_s__root__cargo_registry_src_index__00ad0fe8);
}


// ===== 00572864  FUN_00572864 =====

void FUN_00572864(long param_1,void *param_2)

{
  undefined8 local_28;
  
                    /* try { // try from 00572880 to 00572883 has its CatchHandler @ 005728dc */
  local_28 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                       (*(undefined8 *)(param_1 + 8));
                    /* try { // try from 00572888 to 0057288f has its CatchHandler @ 005728b8 */
  FUN_0057153c(param_1 + 0x10);
  memcpy((void *)(param_1 + 0x10),param_2,0x2d0);
  <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_28);
  return;
}


// ===== 005728f4  FUN_005728f4 =====

void FUN_005728f4(long *param_1,undefined8 param_2)

{
  long lVar1;
  long *local_18;
  
  param_1 = (long *)*param_1;
  lVar1 = *param_1;
  if (1 < lVar1) {
    if (lVar1 == 2) {
      local_18 = param_1 + 1;
      <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field1_finish
                (param_2,&DAT_002bd1d4,4,"variant",7,&local_18,&DAT_00ad10d8);
      return;
    }
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"Unknown",7);
    return;
  }
  local_18 = param_1 + 1;
  if (lVar1 == 0) {
    <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field1_finish
              (param_2,"Seq",3,"index",5,&local_18,&DAT_00ad10b8);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field1_finish
            (param_2,"Map",3,"key",3,&local_18,&DAT_00ad10d8);
  return;
}


// ===== 005729e8  FUN_005729e8 =====

void FUN_005729e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,"RecordTypeId",0xc,&local_18,&DAT_00ad10f8);
  return;
}


// ===== 00572a28  FUN_00572a28 =====

undefined1  [16] FUN_00572a28(byte *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  pbVar5 = param_1 + param_2;
  pbVar8 = (byte *)0x0;
  pbVar6 = param_1;
  if (param_2 != 0) {
    do {
      pbVar7 = pbVar6 + 1;
      uVar10 = (uint)*pbVar6;
      uVar11 = (ulong)uVar10;
      if ((char)*pbVar6 < '\0') {
        if (uVar10 < 0xe0) {
          pbVar7 = pbVar6 + 2;
          uVar11 = (ulong)(pbVar6[1] & 0x3f | (uVar10 & 0x1f) << 6);
        }
        else {
          uVar4 = pbVar6[2] & 0x3f | (pbVar6[1] & 0x3f) << 6;
          if (uVar10 < 0xf0) {
            uVar11 = (ulong)(uVar4 | (uVar10 & 0x1f) << 0xc);
            pbVar7 = pbVar6 + 3;
          }
          else {
            uVar11 = (ulong)(pbVar6[3] & 0x3f | uVar4 << 6 | (uVar10 & 7) << 0x12);
            pbVar7 = pbVar6 + 4;
          }
        }
      }
      uVar10 = (uint)uVar11;
      pbVar9 = pbVar7 + ((long)pbVar8 - (long)pbVar6);
      if ((4 < uVar10 - 9) && (uVar10 != 0x20)) {
        if (uVar10 < 0x85) goto joined_r0x00572b60;
        uVar4 = uVar10 >> 8;
        if (uVar4 < 0x20) {
          if (uVar4 == 0) {
            bVar1 = PTR_WHITESPACE_MAP_00b00d70[uVar11 & 0xff];
joined_r0x00572b38:
            if ((bVar1 & 1) == 0) goto joined_r0x00572b60;
          }
          else if ((uVar4 != 0x16) || (uVar10 != 0x1680)) goto joined_r0x00572b60;
        }
        else {
          if (uVar4 == 0x20) {
            bVar1 = (byte)PTR_WHITESPACE_MAP_00b00d70[uVar11 & 0xff] >> 1;
            goto joined_r0x00572b38;
          }
          if ((uVar4 != 0x30) || (uVar10 != 0x3000)) goto joined_r0x00572b60;
        }
      }
      pbVar6 = pbVar7;
      pbVar8 = pbVar9;
    } while (pbVar7 != pbVar5);
    pbVar8 = (byte *)0x0;
    pbVar9 = (byte *)0x0;
LAB_00572b48:
    auVar12._8_8_ = (long)pbVar9 - (long)pbVar8;
    auVar12._0_8_ = param_1 + (long)pbVar8;
    return auVar12;
  }
  pbVar9 = pbVar8;
  pbVar7 = param_1;
  pbVar8 = (byte *)0x0;
joined_r0x00572b60:
  do {
    do {
      pbVar6 = pbVar5;
      if (pbVar7 == pbVar6) goto LAB_00572b48;
      pbVar5 = pbVar6 + -1;
      bVar1 = *pbVar5;
      uVar11 = (ulong)(char)bVar1;
      if ((char)bVar1 < 0) {
        pbVar5 = pbVar6 + -2;
        bVar2 = *pbVar5;
        uVar10 = (uint)(char)bVar2;
        if ((int)(uVar10 + 0x40) < 0 == SCARRY4(uVar10,0x40)) {
          uVar10 = uVar10 & 0x1f;
        }
        else {
          pbVar5 = pbVar6 + -3;
          bVar3 = *pbVar5;
          if ((char)bVar3 + 0x40 < 0 == SCARRY4((int)(char)bVar3,0x40)) {
            uVar10 = (int)(char)bVar3 & 0xf;
          }
          else {
            pbVar5 = pbVar6 + -4;
            uVar10 = bVar3 & 0x3f | (*pbVar5 & 7) << 6;
          }
          uVar10 = bVar2 & 0x3f | uVar10 << 6;
        }
        uVar11 = (ulong)((int)(char)bVar1 & 0x3fU | uVar10 << 6);
      }
      uVar10 = (uint)uVar11;
    } while ((uVar10 - 9 < 5) || (uVar10 == 0x20));
    if (uVar10 < 0x85) goto LAB_00572c58;
    uVar4 = uVar10 >> 8;
    if (uVar4 < 0x20) {
      if (uVar4 == 0) {
        bVar1 = PTR_WHITESPACE_MAP_00b00d70[uVar11 & 0xff];
joined_r0x00572c54:
        if ((bVar1 & 1) == 0) {
LAB_00572c58:
          auVar13._8_8_ = pbVar6 + (long)(pbVar9 + (-(long)pbVar8 - (long)pbVar7));
          auVar13._0_8_ = param_1 + (long)pbVar8;
          return auVar13;
        }
      }
      else if ((uVar4 != 0x16) || (uVar10 != 0x1680)) goto LAB_00572c58;
      goto joined_r0x00572b60;
    }
    if (uVar4 == 0x20) {
      bVar1 = (byte)PTR_WHITESPACE_MAP_00b00d70[uVar11 & 0xff] >> 1;
      goto joined_r0x00572c54;
    }
    if ((uVar4 != 0x30) || (uVar10 != 0x3000)) goto LAB_00572c58;
  } while( true );
}


// ===== 00572c6c  FUN_00572c6c =====

void FUN_00572c6c(long *param_1)

{
  if (*param_1 != -1) {
    FUN_00572d78();
    return;
  }
  return;
}


// ===== 00572c80  FUN_00572c80 =====

void FUN_00572c80(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  int *piVar5;
  
  piVar5 = (int *)*param_1;
  if ((((*(byte *)(param_1 + 1) & 1) == 0) &&
      ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) != 0)) &&
     (uVar4 = std::panicking::panic_count::is_zero_slow_path(), (uVar4 & 1) == 0)) {
    *(undefined1 *)(piVar5 + 1) = 1;
  }
  do {
    iVar1 = *piVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar3) {
      *piVar5 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 != 2) {
    return;
  }
  <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(piVar5);
  return;
}


// ===== 00572cf0  FUN_00572cf0 =====

void FUN_00572cf0(int *param_1,uint param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  
  if (((param_2 & 1) == 0) &&
     ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) != 0)) {
    uVar4 = std::panicking::panic_count::is_zero_slow_path();
    if ((uVar4 & 1) == 0) {
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
  do {
    iVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 != 2) {
    return;
  }
  <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake();
  return;
}


// ===== 00572d60  FUN_00572d60 =====

void FUN_00572d60(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 00572d78  FUN_00572d78 =====

void FUN_00572d78(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  void *__ptr;
  
  uVar1 = *param_1;
  uVar2 = uVar1 ^ 0x8000000000000000;
  if (-1 < (long)uVar1) {
    uVar2 = 0x14;
  }
  if ((long)uVar2 < 7) {
    if ((long)uVar2 < 5) {
      if (uVar2 != 0) {
        if (uVar2 != 2) {
          return;
        }
        __ptr = (void *)param_1[1];
        puVar3 = (undefined8 *)param_1[2];
        if ((code *)*puVar3 != (code *)0x0) {
                    /* try { // try from 00572e18 to 00572e1f has its CatchHandler @ 00572eb4 */
          (*(code *)*puVar3)(__ptr);
        }
        goto LAB_00572e88;
      }
      if ((long)param_1[1] < 1) {
        return;
      }
      goto LAB_00572e50;
    }
    if ((uVar2 != 5) && (uVar2 != 6)) {
      return;
    }
  }
  else if ((long)uVar2 < 0xd) {
    if ((uVar2 != 7) && (uVar2 != 0xc)) {
      return;
    }
  }
  else if (uVar2 != 0xd) {
    if (uVar2 != 0xf) {
      if (uVar2 != 0x14) {
        return;
      }
      if (uVar1 != 0) {
        free((void *)param_1[1]);
      }
      if (param_1[3] == 0) {
        return;
      }
      free((void *)param_1[4]);
      return;
    }
    __ptr = (void *)param_1[1];
    puVar3 = (undefined8 *)param_1[2];
    if ((code *)*puVar3 != (code *)0x0) {
                    /* try { // try from 00572e80 to 00572e87 has its CatchHandler @ 00572eb0 */
      (*(code *)*puVar3)(__ptr);
    }
LAB_00572e88:
    if (puVar3[1] == 0) {
      return;
    }
    free(__ptr);
    return;
  }
  if (param_1[1] == 0) {
    return;
  }
LAB_00572e50:
  free((void *)param_1[2]);
  return;
}


// ===== 00572ed8  FUN_00572ed8 =====

void FUN_00572ed8(undefined8 *param_1)

{
  undefined1 *__ptr;
  long lVar1;
  
  __ptr = (undefined1 *)*param_1;
  lVar1 = param_1[1];
  *__ptr = 0;
  if (lVar1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00572ef8  FUN_00572ef8 =====

void FUN_00572ef8(long param_1)

{
  if (0 < *(long *)(param_1 + 8)) {
    free(*(void **)(param_1 + 0x10));
    return;
  }
  return;
}


// ===== 00572f14  FUN_00572f14 =====

void FUN_00572f14(ulong *param_1,ulong param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long local_38;
  ulong local_30;
  undefined8 uStack_28;
  
  if ((param_5 == 0) || (CARRY8(param_3,param_2))) {
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(0);
  }
  uVar3 = *param_1 * 2;
  uVar2 = param_3 + param_2;
  if (param_3 + param_2 <= uVar3) {
    uVar2 = uVar3;
  }
  uVar3 = 4;
  if (0x400 < param_5) {
    uVar3 = 1;
  }
  uVar1 = 8;
  if (param_5 != 1) {
    uVar1 = uVar3;
  }
  if (uVar2 <= uVar1) {
    uVar2 = uVar1;
  }
  FUN_005730a8(&local_38,*param_1,param_1[1],uVar2,param_4);
  if (local_38 != 1) {
    *param_1 = uVar2;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 00572fac  <rusqlite::util::small_cstr::rusqlite::util::small_cstr::SmallCString>::fabricate_nul_error =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::util::small_cstr::rusqlite::util::small_cstr::SmallCString>::fabricate_nul_error */

void __rustcall
<rusqlite::util::small_cstr::rusqlite::util::small_cstr::SmallCString>::fabricate_nul_error
          (long *param_1)

{
  long local_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long local_30;
  long lStack_28;
  
  <&str_as<alloc::ffi::c_str::alloc::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl
            (&local_50);
  if (local_50 != -1) {
    param_1[1] = lStack_48;
    *param_1 = local_50;
    param_1[3] = lStack_38;
    param_1[2] = lStack_40;
    return;
  }
  local_30 = lStack_48;
  lStack_28 = lStack_40;
                    /* try { // try from 00572ff4 to 00573017 has its CatchHandler @ 0057301c */
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            ("called `Result::unwrap_err()` on an `Ok` value",0x2e,&local_30,&PTR_FUN_00ad11e0,
             &PTR_s__root__cargo_registry_src_index__00ad1270);
}


// ===== 00573040  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<&str>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<&str>>::grow_one */

void __rustcall <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<&str>>::grow_one(ulong *param_1)

{
  ulong uVar1;
  long local_38;
  ulong local_30;
  undefined8 uStack_28;
  
  uVar1 = *param_1 * 2;
  if (uVar1 < 5) {
    uVar1 = 4;
  }
  FUN_005730a8(&local_38,*param_1,param_1[1],uVar1,8,0x10);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 005730a8  FUN_005730a8 =====

void FUN_005730a8(undefined8 *param_1,long param_2,undefined8 param_3,ulong param_4,long param_5,
                 ulong param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_6;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_4;
  lVar5 = 8;
  uVar3 = 1;
  uVar4 = 0;
  if ((SUB168(auVar1 * auVar2,8) != 0) ||
     (param_4 = param_6 * param_4,
     0x8000000000000000U - param_5 <= param_4 && param_4 - (0x8000000000000000U - param_5) != 0))
  goto LAB_00573144;
  if (param_2 == 0) {
    lVar5 = param_5;
    if (param_4 != 0) {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      lVar5 = FUN_004b25a4(param_4,param_5);
      if (lVar5 == 0) goto LAB_00573124;
    }
LAB_00573134:
    uVar3 = 0;
    param_1[1] = lVar5;
  }
  else {
    lVar5 = FUN_004b2600(param_3,param_6 * param_2,param_5,param_4);
    if (lVar5 != 0) goto LAB_00573134;
LAB_00573124:
    uVar3 = 1;
    param_1[1] = param_5;
  }
  lVar5 = 0x10;
  uVar4 = param_4;
LAB_00573144:
  *(ulong *)((long)param_1 + lVar5) = uVar4;
  *param_1 = uVar3;
  return;
}


// ===== 0057315c  <rusqlite::inner_connection::rusqlite::inner_connection::InnerConnection>::open_with_flags =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::inner_connection::rusqlite::inner_connection::InnerConnection>::open_with_flags */

void __rustcall
<rusqlite::inner_connection::rusqlite::inner_connection::InnerConnection>::open_with_flags
          (long *param_1,undefined8 param_2,undefined8 param_3,uint param_4,undefined8 param_5)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long local_168;
  void *local_160;
  void *pvStack_158;
  void *pvStack_150;
  long lStack_148;
  long local_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined1 auStack_118 [24];
  void *local_100;
  void *pvStack_f8;
  void *pvStack_f0;
  long local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  void *local_c0;
  void *pvStack_b8;
  long local_b0;
  undefined1 auStack_a0 [24];
  long local_88;
  void *local_80;
  void **local_70;
  code *pcStack_68;
  long *local_60;
  code *pcStack_58;
  
  iVar1 = sqlite3_threadsafe();
  if (iVar1 != 0) {
    lVar2 = sqlite3_mutex_alloc(0);
    sqlite3_mutex_free();
    if (lVar2 != 8) {
      iVar1 = sqlite3_libversion_number();
      if (iVar1 < 0x2e5748) {
        local_168 = 0;
        iVar1 = sqlite3_open_v2(param_2,&local_168,param_4,param_5);
        if (iVar1 == 0) {
          sqlite3_extended_result_codes(local_168,1);
          goto LAB_00573214;
        }
      }
      else {
        local_168 = 0;
        iVar1 = sqlite3_open_v2(param_2,&local_168,param_4 | 0x2000000,param_5);
        if (iVar1 == 0) {
LAB_00573214:
          iVar1 = sqlite3_busy_timeout(local_168,5000);
          lVar2 = local_168;
          if (iVar1 != 0) {
            FUN_00578794(param_1,local_168,iVar1);
            sqlite3_close(local_168);
            return;
          }
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          puVar3 = (undefined8 *)FUN_004b25a4(0x20,8);
          if (puVar3 != (undefined8 *)0x0) {
            puVar3[2] = 0;
            puVar3[3] = lVar2;
            *(undefined1 *)(param_1 + 3) = 1;
            param_1[1] = (long)puVar3;
            param_1[2] = lVar2;
            *param_1 = -1;
            puVar3[1] = 1;
            *puVar3 = 1;
            return;
          }
                    /* WARNING: Subroutine does not return */
          alloc::alloc::handle_alloc_error(8,0x20);
        }
      }
      if (local_168 == 0) {
        <alloc::ffi::c_str::[D]::core::ffi::c_str::CStr>::to_string_lossy
                  (&local_100,param_2,param_3);
        pcStack_68 = FUN_005750f0;
                    /* try { // try from 005732ac to 005732bf has its CatchHandler @ 00573454 */
        local_70 = &local_100;
        alloc::fmt::format::format_inner(auStack_118,&DAT_002ab692,&local_70);
        if (0 < (long)local_100) {
          free(pvStack_f8);
        }
        rusqlite::error::error_from_sqlite_code(&local_160,iVar1,auStack_118);
      }
      else {
        FUN_00578794(&local_100,local_168,iVar1);
        if (((local_100 == (void *)0x8000000000000000) && ((char)uStack_dc == '\f')) &&
           (pvStack_f8 != (void *)0xffffffffffffffff)) {
          pvStack_b8 = pvStack_f0;
          local_c0 = pvStack_f8;
          local_b0 = local_e8;
                    /* try { // try from 00573388 to 0057339b has its CatchHandler @ 0057342c */
          <alloc::ffi::c_str::[D]::core::ffi::c_str::CStr>::to_string_lossy
                    (&local_88,param_2,param_3);
          local_70 = &local_c0;
          pcStack_68 = FUN_00575104;
          pcStack_58 = FUN_005750f0;
                    /* try { // try from 005733b8 to 005733cb has its CatchHandler @ 0057340c */
          local_60 = &local_88;
          alloc::fmt::format::format_inner(auStack_a0,&DAT_002a1bbc,&local_70);
          if (0 < local_88) {
            free(local_80);
          }
          rusqlite::error::error_from_sqlite_code(&local_100,iVar1,auStack_a0);
          if (local_c0 != (void *)0x0) {
            free(pvStack_b8);
          }
        }
        sqlite3_close(local_168);
        pvStack_158 = pvStack_f8;
        local_160 = local_100;
        lStack_148 = local_e8;
        pvStack_150 = pvStack_f0;
        lStack_138 = lStack_d8;
        local_140 = CONCAT44(uStack_dc,local_e0);
        lStack_128 = lStack_c8;
        lStack_130 = lStack_d0;
      }
      param_1[1] = (long)pvStack_158;
      *param_1 = (long)local_160;
      param_1[3] = lStack_148;
      param_1[2] = (long)pvStack_150;
      param_1[5] = lStack_138;
      param_1[4] = local_140;
      param_1[7] = lStack_128;
      param_1[6] = lStack_130;
      return;
    }
  }
  *param_1 = -0x7fffffffffffffff;
  return;
}


// ===== 00573478  <rusqlite::inner_connection::rusqlite::inner_connection::InnerConnection>::close =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::inner_connection::rusqlite::inner_connection::InnerConnection>::close */

void __rustcall
<rusqlite::inner_connection::rusqlite::inner_connection::InnerConnection>::close
          (long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  int *local_60;
  byte local_58;
  
  lVar8 = param_2[1];
  if (lVar8 == 0) {
    *param_1 = -1;
    return;
  }
  lVar9 = *param_2;
  piVar1 = (int *)(lVar9 + 0x10);
  do {
    if (*piVar1 != 0) {
      ClearExclusiveLocal();
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                (lVar9 + 0x10);
      uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      goto joined_r0x0057362c;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
  puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
joined_r0x0057362c:
  PTR_GLOBAL_PANIC_COUNT_00b00bf0 = (undefined *)puVar4;
  if ((uVar7 & 0x7fffffffffffffff) == 0) {
    bVar5 = 0;
    cVar2 = *(char *)(lVar9 + 0x14);
  }
  else {
    bVar5 = std::panicking::panic_count::is_zero_slow_path();
    bVar5 = bVar5 ^ 1;
    cVar2 = *(char *)(lVar9 + 0x14);
  }
  if (cVar2 != '\0') {
    local_60 = piVar1;
    local_58 = bVar5;
                    /* try { // try from 00573650 to 00573673 has its CatchHandler @ 00573690 */
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              ("called `Result::unwrap()` on an `Err` value",0x2b,&local_60,&PTR_FUN_00ad11c0,
               &PTR_s__root__cargo_registry_src_index__00ad1288);
  }
  if ((*(byte *)(param_2 + 2) & 1) == 0) {
    param_2[1] = 0;
    *param_1 = -1;
    if ((((bVar5 & 1) == 0) && ((*puVar4 & 0x7fffffffffffffff) != 0)) &&
       (uVar7 = std::panicking::panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
      *(undefined1 *)(lVar9 + 0x14) = 1;
    }
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    goto LAB_00573560;
  }
  if (*(long *)(lVar9 + 0x18) == 0) {
                    /* try { // try from 005735a4 to 005735cf has its CatchHandler @ 00573678 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              ("Bug: Somehow interrupt_lock was cleared before the DB was closed",0x81,
               &PTR_s__root__cargo_registry_src_index__00ad12a0);
  }
  iVar6 = sqlite3_close(lVar8);
  if (iVar6 == 0) {
    *param_1 = -1;
LAB_00573504:
    *(undefined8 *)(lVar9 + 0x18) = 0;
    param_2[1] = 0;
  }
  else {
    FUN_00578794(param_1,lVar8,iVar6);
    if (*param_1 == -1) goto LAB_00573504;
  }
  if ((((bVar5 & 1) == 0) && ((*puVar4 & 0x7fffffffffffffff) != 0)) &&
     (uVar7 = std::panicking::panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
    *(undefined1 *)(lVar9 + 0x14) = 1;
  }
  do {
    iVar6 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00573560:
  if (iVar6 != 2) {
    return;
  }
  <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(piVar1);
  return;
}


// ===== 005736a8  <rusqlite::inner_connection::rusqlite::inner_connection::InnerConnection>::is_busy =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::inner_connection::rusqlite::inner_connection::InnerConnection>::is_busy */

bool __rustcall
<rusqlite::inner_connection::rusqlite::inner_connection::InnerConnection>::is_busy(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  lVar2 = sqlite3_next_stmt(uVar3,0);
  if (lVar2 == 0) {
    return false;
  }
  do {
    iVar1 = sqlite3_stmt_busy(lVar2);
    if (iVar1 != 0) {
      return iVar1 != 0;
    }
    lVar2 = sqlite3_next_stmt(uVar3,lVar2);
  } while (lVar2 != 0);
  return iVar1 != 0;
}


// ===== 00573724  <rusqlite::inner_connection::rusqlite::inner_connection::InnerConnection>::prepare =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::inner_connection::rusqlite::inner_connection::InnerConnection>::prepare */

void __rustcall
<rusqlite::inner_connection::rusqlite::inner_connection::InnerConnection>::prepare
          (undefined8 *param_1,long param_2,undefined8 param_3,long param_4,ulong param_5,
          undefined4 param_6)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_50;
  long local_48;
  
  local_50 = 0;
  if (0x7ffffffe < param_5) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 5) = 0x12;
    *(undefined1 *)((long)param_1 + 0x2c) = 0xf;
    param_1[1] = 0x8000000000000000;
    param_1[2] = 0xffffffffffffffff;
    return;
  }
  uVar3 = *(undefined8 *)(param_2 + 8);
  lVar2 = param_4;
  if (param_5 == 0) {
    lVar2 = 1;
  }
  local_48 = 0;
  iVar1 = sqlite3_prepare_v3(uVar3,lVar2,param_5 & 0xffffffff,param_6,&local_50,&local_48);
  if (iVar1 == 0) {
    if (local_48 != 0) {
      lVar2 = local_48 - lVar2;
      local_48 = 0;
      if (lVar2 < (long)param_5 && 0 < lVar2) {
        local_48 = lVar2;
      }
    }
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = param_3;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[7] = local_50;
    param_1[8] = local_48;
    return;
  }
  FUN_005788cc(param_1 + 1,uVar3,iVar1,param_4,param_5);
  *param_1 = 0;
  return;
}


// ===== 00573840  FUN_00573840 =====

undefined8 FUN_00573840(long *param_1,char *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  uint local_e8;
  undefined4 uStack_e4;
  long lStack_e0;
  undefined8 local_d8;
  long lStack_d0;
  long *local_c8;
  long local_c0;
  undefined1 auStack_a8 [24];
  long local_90 [4];
  undefined8 local_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined3 local_38;
  undefined1 uStack_35;
  undefined3 uStack_34;
  
  if (*param_1 == 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    local_c0 = 0;
    cVar2 = *param_2;
    lVar7 = *(long *)(param_2 + 0x18);
    local_38 = (undefined3)*(undefined4 *)(param_2 + 1);
    uStack_35 = (undefined1)*(undefined4 *)(param_2 + 4);
    uStack_34 = (undefined3)((uint)*(undefined4 *)(param_2 + 4) >> 8);
    lVar3 = *(long *)(param_2 + 8);
  }
  else {
                    /* try { // try from 00573874 to 0057387f has its CatchHandler @ 00573a04 */
    FUN_00578410(&local_e8,*param_1,param_1[1],param_2);
    if ((local_e8 & 1) == 0) {
      lVar7 = lStack_d0;
      if (0x10 < *(ulong *)(param_2 + 0x18)) {
        free(*(void **)(param_2 + 0x10));
      }
      goto LAB_00573974;
    }
    cVar2 = *param_2;
    lVar7 = *(long *)(param_2 + 0x18);
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    local_38 = (undefined3)*(undefined4 *)(param_2 + 1);
    uStack_35 = (undefined1)*(undefined4 *)(param_2 + 4);
    uStack_34 = (undefined3)((uint)*(undefined4 *)(param_2 + 4) >> 8);
    lVar3 = *(long *)(param_2 + 8);
    local_c0 = lStack_e0;
  }
  lStack_e0 = lVar3;
  if (cVar2 != '\x02') {
    uStack_e4 = CONCAT31(uStack_34,uStack_35);
    local_e8 = CONCAT31(local_38,cVar2);
    local_c8 = param_1;
    local_d8 = uVar1;
    lStack_d0 = lVar7;
    if (local_c0 == 0) {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      pcVar4 = (char *)FUN_004b25a4(0x1c8,8);
      if (pcVar4 == (char *)0x0) {
                    /* try { // try from 005739f4 to 005739ff has its CatchHandler @ 00573a1c */
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(8,0x1c8);
      }
      *param_1 = (long)pcVar4;
      param_1[1] = 0;
      pcVar4[0x1c2] = '\x01';
      pcVar4[0x1c3] = '\0';
      uVar6 = *(undefined8 *)((ulong)&local_e8 | 1);
      uVar5 = *(undefined8 *)((long)((ulong)&local_e8 | 1) + 7);
      *pcVar4 = cVar2;
      *(undefined8 *)(pcVar4 + 1) = uVar6;
      *(undefined8 *)(pcVar4 + 8) = uVar5;
      *(undefined8 *)(pcVar4 + 0x10) = uVar1;
      *(long *)(pcVar4 + 0x18) = lVar7;
      pcVar4[0x160] = '\0';
      pcVar4[0x161] = '\0';
      pcVar4[0x162] = '\0';
      pcVar4[0x163] = '\0';
      pcVar4[0x164] = '\0';
      pcVar4[0x165] = '\0';
      pcVar4[0x166] = '\0';
      pcVar4[0x167] = '\0';
      *(undefined8 *)(pcVar4 + 0x168) = param_3;
      local_c8 = param_1;
    }
    else {
      local_70 = CONCAT44(uStack_e4,local_e8);
      local_90[0] = local_c0;
      lStack_68 = lStack_e0;
      uStack_60 = uVar1;
      lStack_58 = lVar7;
      FUN_00577aa8(auStack_a8,local_90,&local_70,param_3,&local_c8,auStack_a8);
    }
    local_c8[2] = local_c8[2] + 1;
    return 0;
  }
LAB_00573974:
  *(undefined8 *)(lStack_e0 + lVar7 * 8 + 0x168) = param_3;
  return 1;
}


// ===== 00573a40  FUN_00573a40 =====

void FUN_00573a40(long *param_1,long *param_2)

{
  ushort uVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  void *pvVar7;
  
  if (param_2[8] == 0) {
    lVar3 = *param_2;
    pvVar7 = (void *)param_2[1];
    *param_2 = 0;
    pvVar2 = (void *)param_2[2];
    lVar5 = param_2[3];
    if (lVar3 == 1) {
      if (pvVar7 == (void *)0x0) {
        for (; lVar5 != 0; lVar5 = lVar5 + -1) {
          pvVar2 = *(void **)((long)pvVar2 + 0x1c8);
        }
        pvVar7 = *(void **)((long)pvVar2 + 0x160);
      }
      else {
        pvVar2 = pvVar7;
        pvVar7 = *(void **)((long)pvVar7 + 0x160);
      }
      for (; pvVar7 != (void *)0x0; pvVar7 = *(void **)((long)pvVar7 + 0x160)) {
        free(pvVar2);
        pvVar2 = pvVar7;
      }
      free(pvVar2);
    }
    *param_1 = 0;
    return;
  }
  param_2[8] = param_2[8] + -1;
  if (*param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00ad1178);
  }
  pvVar2 = (void *)param_2[1];
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)param_2[2];
    for (lVar3 = param_2[3]; lVar3 != 0; lVar3 = lVar3 + -1) {
      pvVar2 = *(void **)((long)pvVar2 + 0x1c8);
    }
    uVar6 = 0;
    lVar3 = 0;
    *param_2 = 1;
    param_2[1] = (long)pvVar2;
    param_2[2] = 0;
    param_2[3] = 0;
    pvVar7 = pvVar2;
    if (*(short *)((long)pvVar2 + 0x1c2) != 0) goto joined_r0x00573a98;
  }
  else {
    lVar3 = param_2[2];
    uVar6 = param_2[3];
    pvVar7 = pvVar2;
    if (uVar6 < *(ushort *)((long)pvVar2 + 0x1c2)) goto joined_r0x00573a98;
  }
  do {
    pvVar7 = *(void **)((long)pvVar2 + 0x160);
    if (pvVar7 == (void *)0x0) {
      free(pvVar2);
                    /* try { // try from 00573c34 to 00573c3f has its CatchHandler @ 00573c50 */
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00ad1190);
    }
    uVar1 = *(ushort *)((long)pvVar2 + 0x1c0);
    uVar6 = (ulong)uVar1;
    lVar3 = lVar3 + 1;
    free(pvVar2);
    pvVar2 = pvVar7;
  } while (*(ushort *)((long)pvVar7 + 0x1c2) <= uVar1);
joined_r0x00573a98:
  if (lVar3 == 0) {
    lVar5 = uVar6 + 1;
    pvVar2 = pvVar7;
  }
  else {
    puVar4 = (undefined8 *)((long)pvVar7 + uVar6 * 8 + 0x1d0);
    lVar5 = lVar3;
    do {
      pvVar2 = (void *)*puVar4;
      lVar5 = lVar5 + -1;
      puVar4 = (undefined8 *)((long)pvVar2 + 0x1c8);
    } while (lVar5 != 0);
    lVar5 = 0;
  }
  *param_1 = (long)pvVar7;
  param_1[1] = lVar3;
  param_1[2] = uVar6;
  param_2[1] = (long)pvVar2;
  param_2[2] = 0;
  param_2[3] = lVar5;
  return;
}


// ===== 00573c54  <rusqlite::types::Type_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::types::Type as core::fmt::Display>::fmt */

void __rustcall <rusqlite::types::Type_as_core::fmt::Display>::fmt(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  
  bVar1 = *param_1;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"NullX448",4);
      return;
    }
    <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"Integer",7);
    return;
  }
  if (bVar1 != 2) {
    if (bVar1 == 3) {
      <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,&DAT_002bd1c0,4);
      return;
    }
    <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"Blob",4);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,&DAT_002bd15c,4);
  return;
}


// ===== 00573cc8  <rusqlite::util::small_cstr::SmallCString_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::util::small_cstr::SmallCString as core::fmt::Debug>::fmt */

void __rustcall
<rusqlite::util::small_cstr::SmallCString_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 auStack_48 [24];
  long local_30;
  long lStack_28;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple
            (auStack_48,param_2,
             "SmallCStringInvalid typeInternalMalfunctionPermissionDeniedOperationAbortedDatabaseBusyDatabaseLockedOutOfMemoryReadOnlyOperationInterruptedSystemIoFailureDatabaseCorruptNotFoundDiskFullCannotOpenFileLockingProtocolFailedSchemaChangedTooBigConstraintViolationTypeMismatchApiMisuseNoLargeFileSupportAuthorizationForStatementDeniedParameterOutOfRangeNotADatabaseUnknown"
             ,0xc);
  uVar1 = *(ulong *)(param_1 + 0x18);
  if (uVar1 < 0x11) {
    local_30 = param_1 + 1;
  }
  else {
    uVar1 = *(ulong *)(param_1 + 8);
    local_30 = *(long *)(param_1 + 0x10);
  }
  lStack_28 = uVar1 - 1;
  if (uVar1 != 0) {
    <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field
              (auStack_48,&local_30,&DAT_00ad12d0);
    <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::finish();
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (0,0xffffffffffffffff,0,&PTR_s__root__cargo_registry_src_index__00ad12b8);
}


// ===== 00573d58  <rusqlite::types::from_sql::FromSqlError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::types::from_sql::FromSqlError as core::fmt::Display>::fmt */

void __rustcall
<rusqlite::types::from_sql::FromSqlError_as_core::fmt::Display>::fmt
          (long *param_1,undefined8 *param_2)

{
  long lVar1;
  long local_40;
  long local_38;
  long *plStack_30;
  undefined *local_28;
  long *plStack_20;
  undefined *local_18;
  
  plStack_30 = &local_40;
  lVar1 = *param_1;
  if (1 < lVar1) {
    if (lVar1 == 2) {
      local_40 = param_1[1];
      local_38 = param_1[2];
      plStack_20 = &local_38;
      local_28 = PTR_fmt_00b00c10;
      local_18 = PTR_fmt_00b00c10;
      core::fmt::write(*param_2,param_2[1],&DAT_002a5398,&plStack_30);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00573e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[2] + 0x20))(param_1[1]);
    return;
  }
  if (lVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00573d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0x18))
              (*param_2,
               "Invalid typeInternalMalfunctionPermissionDeniedOperationAbortedDatabaseBusyDatabaseLockedOutOfMemoryReadOnlyOperationInterruptedSystemIoFailureDatabaseCorruptNotFoundDiskFullCannotOpenFileLockingProtocolFailedSchemaChangedTooBigConstraintViolationTypeMismatchApiMisuseNoLargeFileSupportAuthorizationForStatementDeniedParameterOutOfRangeNotADatabaseUnknown"
               ,0xc);
    return;
  }
  local_38 = param_1[1];
  plStack_30 = &local_38;
  local_28 = PTR_fmt_00b00c58;
  core::fmt::write(*param_2,param_2[1],&DAT_002a5381,&plStack_30);
  return;
}


// ===== 00573e2c  FUN_00573e2c =====

void FUN_00573e2c(long param_1,undefined8 param_2)

{
  undefined1 auStack_40 [24];
  long local_28;
  long local_8;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple(auStack_40,param_2,1,0);
  local_8 = param_1 + 8;
  local_28 = param_1;
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field
            (auStack_40,&local_28,&DAT_00ad12f0);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field
            (auStack_40,&local_8,&DAT_00ad1310);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::finish(auStack_40);
  return;
}


// ===== 00573ea0  FUN_00573ea0 =====

void FUN_00573ea0(long param_1,undefined8 param_2)

{
  undefined1 auStack_40 [24];
  long local_28;
  long local_8;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple(auStack_40,param_2,1,0);
  local_8 = param_1 + 8;
  local_28 = param_1;
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field
            (auStack_40,&local_28,&DAT_00ad12f0);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field
            (auStack_40,&local_8,&DAT_00ad1330);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::finish(auStack_40);
  return;
}


// ===== 00573f14  FUN_00573f14 =====

void FUN_00573f14(long param_1,undefined8 param_2)

{
  undefined1 auStack_40 [24];
  long local_28;
  long local_8;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple(auStack_40,param_2,1,0);
  local_8 = param_1 + 8;
  local_28 = param_1;
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field
            (auStack_40,&local_28,&DAT_00ad12f0);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field
            (auStack_40,&local_8,&DAT_00ad1158);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::finish(auStack_40);
  return;
}


// ===== 00573f88  FUN_00573f88 =====

void FUN_00573f88(long param_1,undefined8 param_2)

{
  undefined1 auStack_40 [24];
  long local_28;
  long local_8;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple(auStack_40,param_2,1,0);
  local_8 = param_1 + 1;
  local_28 = param_1;
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field
            (auStack_40,&local_28,&DAT_00ad12f0);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field
            (auStack_40,&local_8,&DAT_00ad1350);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::finish(auStack_40);
  return;
}


// ===== 00573ffc  FUN_00573ffc =====

void FUN_00573ffc(long param_1,undefined8 param_2)

{
  undefined1 auStack_40 [24];
  long local_28;
  long local_8;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple(auStack_40,param_2,1,0);
  local_8 = param_1 + 8;
  local_28 = param_1;
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field
            (auStack_40,&local_28,&DAT_00ad12f0);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field
            (auStack_40,&local_8,&DAT_00ad1370);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::finish(auStack_40);
  return;
}


// ===== 00574070  FUN_00574070 =====

void FUN_00574070(long *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt
            (*(undefined8 *)(*param_1 + 8),*(undefined8 *)(*param_1 + 0x10),param_2);
  return;
}


// ===== 00574084  FUN_00574084 =====

void FUN_00574084(undefined8 *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,(&PTR_s_NullX448_00ad16d8)[*(byte *)*param_1],
             *(undefined8 *)(&DAT_002c48f0 + (ulong)*(byte *)*param_1 * 8));
  return;
}


// ===== 005740b0  FUN_005740b0 =====

void FUN_005740b0(undefined8 *param_1)

{
  <core::mem::alignment::Alignment_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 005740b8  FUN_005740b8 =====

void FUN_005740b8(long *param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = *param_1 + 8;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
            (param_2,
             "Utf8ErrorInvalidParameterNameInvalidPathExecuteReturnedResultsQueryReturnedNoRowsQueryReturnedMoreThanOneRowInvalidColumnIndexInvalidColumnNameInvalidColumnTypeStatementChangedRowsToSqlConversionFailureInvalidQueryUnwindingPanicMultipleStatementInvalidParameterCount"
             ,9,"valid_up_to",0xb,*param_1,&DAT_00ad1390,"error_len",9,&local_18,&DAT_00ad1608);
  return;
}


// ===== 00574128  FUN_00574128 =====

void FUN_00574128(long *param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
            (param_2,"Layout",6,&DAT_002bd23c,4,local_18 + 8,&DAT_00ad1390,
             "alignSqliteFailureSqliteSingleThreadedModeFromSqlConversionFailureIntegralValueOutOfRange"
             ,5,&local_18,&DAT_00ad13b0);
  return;
}


// ===== 00574198  FUN_00574198 =====

void FUN_00574198(long *param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field2_finish
            (param_2,&DAT_002a1a30,8,local_18 + 0x18,&DAT_00ad1390,&local_18,&DAT_00ad1628);
  return;
}


// ===== 005741e8  FUN_005741e8 =====

void FUN_005741e8(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  long local_30;
  long lStack_28;
  
  lVar2 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple
            (auStack_48,param_2,
             "SmallCStringInvalid typeInternalMalfunctionPermissionDeniedOperationAbortedDatabaseBusyDatabaseLockedOutOfMemoryReadOnlyOperationInterruptedSystemIoFailureDatabaseCorruptNotFoundDiskFullCannotOpenFileLockingProtocolFailedSchemaChangedTooBigConstraintViolationTypeMismatchApiMisuseNoLargeFileSupportAuthorizationForStatementDeniedParameterOutOfRangeNotADatabaseUnknown"
             ,0xc);
  uVar1 = *(ulong *)(lVar2 + 0x18);
  if (uVar1 < 0x11) {
    local_30 = lVar2 + 1;
  }
  else {
    uVar1 = *(ulong *)(lVar2 + 8);
    local_30 = *(long *)(lVar2 + 0x10);
  }
  lStack_28 = uVar1 - 1;
  if (uVar1 != 0) {
    <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field
              (auStack_48,&local_30,&DAT_00ad12d0);
    <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::finish();
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (0,0xffffffffffffffff,0,&PTR_s__root__cargo_registry_src_index__00ad12b8);
}


// ===== 00574274  FUN_00574274 =====

void FUN_00574274(long *param_1,undefined8 param_2)

{
  char *pcVar1;
  long lVar2;
  long *local_18;
  
  param_1 = (long *)*param_1;
  lVar2 = *param_1;
  if (lVar2 < 2) {
    if (lVar2 == 0) {
      <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"NullX448",4);
      return;
    }
    local_18 = param_1 + 1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,"Integer",7,&local_18,&DAT_00ad1370);
    return;
  }
  local_18 = param_1 + 1;
  if (lVar2 != 2) {
    if (lVar2 == 3) {
      pcVar1 = "TextUservr26namehostEnum\x02\x04\b\x06tmm4typeRing\b";
    }
    else {
      pcVar1 = "Blob";
    }
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,pcVar1,4,&local_18,&DAT_00ad15e8);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,&DAT_002bd15c,4,&local_18,&DAT_00ad1330);
  return;
}


// ===== 0057435c  FUN_0057435c =====

void FUN_0057435c(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_40 [16];
  long local_18;
  
  lVar1 = *(long *)*param_1;
  lVar2 = ((long *)*param_1)[1];
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_40,param_2);
  lVar3 = local_18;
  for (; local_18 = lVar1, lVar2 != 0; lVar2 = lVar2 + -1) {
    lVar1 = local_18 + 1;
    <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
              (auStack_40,&local_18,&DAT_00ad1118);
    lVar3 = local_18;
  }
  local_18 = lVar3;
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 005743cc  FUN_005743cc =====

void FUN_005743cc(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt(*(undefined8 *)*param_1,((undefined8 *)*param_1)[1],param_2);
  return;
}


// ===== 005743e0  FUN_005743e0 =====

void FUN_005743e0(undefined8 *param_1)

{
  <f64_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 005743e8  FUN_005743e8 =====

void FUN_005743e8(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 005743fc  FUN_005743fc =====

void FUN_005743fc(undefined8 *param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <u8_as_core::fmt::LowerHex>::fmt(*param_1);
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <u8_as_core::fmt::Display>::fmt();
    return;
  }
  <u8_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 00574418  FUN_00574418 =====

void FUN_00574418(undefined8 *param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <usize_as_core::fmt::LowerHex>::fmt(*param_1);
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <usize_as_core::fmt::Display>::fmt();
    return;
  }
  <usize_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 00574434  FUN_00574434 =====

void FUN_00574434(undefined8 *param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <i32_as_core::fmt::LowerHex>::fmt(*param_1);
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <i32_as_core::fmt::Display>::fmt();
    return;
  }
  <i32_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 00574450  FUN_00574450 =====

void FUN_00574450(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"()",2);
  return;
}


// ===== 00574464  FUN_00574464 =====

void FUN_00574464(undefined8 *param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <isize_as_core::fmt::LowerHex>::fmt(*param_1);
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <i64_as_core::fmt::Display>::fmt();
    return;
  }
  <isize_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 00574480  FUN_00574480 =====

void FUN_00574480(long *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt
            (*(undefined8 *)(*param_1 + 8),*(undefined8 *)(*param_1 + 0x10),param_2);
  return;
}


// ===== 00574494  FUN_00574494 =====

void FUN_00574494(undefined8 *param_1)

{
  <rusqlite::types::Type_as_core::fmt::Display>::fmt(*param_1);
  return;
}


// ===== 0057449c  FUN_0057449c =====

void FUN_0057449c(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 005744b0  FUN_005744b0 =====

void FUN_005744b0(undefined8 *param_1)

{
  <i32_as_core::fmt::LowerHex>::fmt(*param_1);
  return;
}


// ===== 005744b8  FUN_005744b8 =====

void FUN_005744b8(undefined8 *param_1)

{
  <u32_as_core::fmt::LowerHex>::fmt(*param_1);
  return;
}


// ===== 005744c0  FUN_005744c0 =====

void FUN_005744c0(long *param_1,undefined8 param_2)

{
  ushort *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined1 auStack_58 [16];
  long local_48;
  long local_28;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_map(auStack_58,param_2);
  lVar3 = *param_1;
  if ((lVar3 != 0) && (lVar6 = param_1[2], lVar6 != 0)) {
    uVar2 = param_1[1];
    lVar4 = 0;
    do {
      if (lVar4 == 0) {
        for (; lVar4 = lVar3, uVar2 != 0; uVar2 = uVar2 - 1) {
          lVar3 = *(long *)(lVar4 + 0x1c8);
        }
        lVar3 = 0;
        uVar2 = 0;
        lVar7 = lVar4;
        if (*(short *)(lVar4 + 0x1c2) == 0) goto LAB_00574590;
      }
      else {
        lVar7 = lVar4;
        if (*(ushort *)(lVar4 + 0x1c2) <= uVar2) {
LAB_00574590:
          do {
            lVar4 = *(long *)(lVar7 + 0x160);
            if (lVar4 == 0) {
                    /* try { // try from 005745f4 to 005745ff has its CatchHandler @ 00574604 */
                    /* WARNING: Subroutine does not return */
              core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00ad11a8);
            }
            puVar1 = (ushort *)(lVar7 + 0x1c0);
            uVar2 = (ulong)*puVar1;
            lVar3 = lVar3 + 1;
            lVar7 = lVar4;
          } while (*(ushort *)(lVar4 + 0x1c2) <= *puVar1);
        }
      }
      local_28 = lVar4 + uVar2 * 8;
      if (lVar3 == 0) {
        uVar8 = uVar2 + 1;
        lVar7 = lVar4;
      }
      else {
        plVar5 = (long *)(local_28 + 0x1d0);
        do {
          lVar7 = *plVar5;
          lVar3 = lVar3 + -1;
          plVar5 = (long *)(lVar7 + 0x1c8);
        } while (lVar3 != 0);
        uVar8 = 0;
      }
      local_48 = lVar4 + uVar2 * 0x20;
      local_28 = local_28 + 0x168;
      lVar6 = lVar6 + -1;
      <core::fmt::builders::[7]::core::fmt::builders::DebugMap>::entry
                (auStack_58,&local_48,&DAT_00ad1138,&local_28,&DAT_00ad1158);
      lVar3 = 0;
      uVar2 = uVar8;
      lVar4 = lVar7;
    } while (lVar6 != 0);
  }
  <core::fmt::builders::[7]::core::fmt::builders::DebugMap>::finish(auStack_58);
  return;
}


// ===== 00574608  FUN_00574608 =====

void FUN_00574608(byte *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,&DAT_002c4890 + *(int *)(&DAT_002c4890 + (ulong)*param_1 * 4),
             *(undefined8 *)(&DAT_002c47d0 + (ulong)*param_1 * 8));
  return;
}


// ===== 00574630  FUN_00574630 =====

void FUN_00574630(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (-1 < lVar1) {
    lVar1 = 0x14;
  }
                    /* WARNING: Could not recover jumptable at 0x00574668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_0057466c + (ulong)*(ushort *)("RecordTypeId" + lVar1 * 2 + 0xd) * 4))(param_2);
  return;
}


// ===== 00574ab8  FUN_00574ab8 =====

void FUN_00574ab8(byte *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,(&PTR_s_NullX448_00ad16d8)[*param_1],
             *(undefined8 *)(&DAT_002c48f0 + (ulong)*param_1 * 8));
  return;
}


// ===== 00574ae0  <rusqlite::row::Row_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::row::Row as core::fmt::Debug>::fmt */

void __rustcall <rusqlite::row::Row_as_core::fmt::Debug>::fmt(long *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  char *__s;
  size_t sVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auStack_100 [16];
  ulong local_f0;
  long lStack_e8;
  ulong local_e0;
  long lStack_d8;
  void *pvStack_d0;
  undefined8 local_c8;
  long local_b8;
  void *pvStack_b0;
  undefined8 local_a8;
  long local_a0;
  ulong local_98;
  long lStack_90;
  long local_88;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_map(auStack_100,param_2);
  lVar4 = *param_1;
  iVar1 = sqlite3_column_count(*(undefined8 *)(lVar4 + 0x38));
  if (iVar1 == 0) {
LAB_00574d30:
    <core::fmt::builders::[7]::core::fmt::builders::DebugMap>::finish(auStack_100);
    return;
  }
  iVar2 = sqlite3_column_count(*(undefined8 *)(lVar4 + 0x38));
  if (iVar2 < 1) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    do {
      __s = (char *)sqlite3_column_name(*(undefined8 *)(lVar4 + 0x38),uVar5 & 0xffffffff);
      if (__s == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  ("Null pointer from sqlite3_column_name: Out of memory?",0x6b,
                   &PTR_s__root__cargo_registry_src_index__00ad1240);
      }
      sVar3 = strlen(__s);
      local_a0 = -0x7ffffffffffffff5;
      local_98 = uVar5;
      FUN_00572d78(&local_a0);
      <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::to_str(&local_a0,__s,sVar3 + 1);
      if (local_a0 == 1) {
        lStack_d8 = lStack_90;
        local_e0 = local_98;
                    /* WARNING: Subroutine does not return */
        core::result::unwrap_failed
                  ("Invalid UTF-8 sequence in column name",0x25,&local_e0,&DAT_00ad1220,
                   &PTR_s__root__cargo_registry_src_index__00ad1258);
      }
      local_f0 = local_98;
      lStack_e8 = lStack_90;
      <core::fmt::builders::[7]::core::fmt::builders::DebugMap>::key
                (auStack_100,&local_f0,&DAT_00ad12d0);
      iVar2 = sqlite3_column_count(*(undefined8 *)(lVar4 + 0x38));
      if (uVar5 < (ulong)(long)iVar2) {
        <rusqlite::statement::[1]::rusqlite::statement::Statement>::value_ref(&local_98,lVar4,uVar5)
        ;
        local_a0 = -1;
        if ((long)local_98 < 2) {
          if (local_98 == 0) {
            local_e0 = (ulong)local_e0._1_7_ << 8;
                    /* try { // try from 00574cb0 to 00574d2b has its CatchHandler @ 00574dfc */
            <core::fmt::builders::[7]::core::fmt::builders::DebugMap>::value
                      (auStack_100,&local_e0,&DAT_00ad1528);
          }
          else {
            lStack_d8 = lStack_90;
            local_e0 = CONCAT71(local_e0._1_7_,1);
            <core::fmt::builders::[7]::core::fmt::builders::DebugMap>::value
                      (auStack_100,&local_e0,&DAT_00ad1548);
          }
        }
        else if (local_98 == 2) {
          local_e0 = CONCAT71(local_e0._1_7_,2);
          lStack_d8 = lStack_90;
          <core::fmt::builders::[7]::core::fmt::builders::DebugMap>::value
                    (auStack_100,&local_e0,&DAT_00ad1568);
        }
        else if (local_98 == 3) {
                    /* try { // try from 00574c04 to 00574c0b has its CatchHandler @ 00574dfc */
          <alloc::string::alloc::string::String>::from_utf8_lossy(&local_b8);
          local_e0 = CONCAT71(local_e0._1_7_,3);
          pvStack_d0 = pvStack_b0;
          lStack_d8 = local_b8;
          local_c8 = local_a8;
                    /* try { // try from 00574c28 to 00574c3b has its CatchHandler @ 00574ddc */
          <core::fmt::builders::[7]::core::fmt::builders::DebugMap>::value
                    (auStack_100,&local_e0,&PTR_FUN_00ad1588);
          if (0 < lStack_d8) {
            free(pvStack_d0);
          }
        }
        else {
          lStack_d8 = local_88;
          local_e0 = CONCAT71(local_e0._1_7_,4);
          <core::fmt::builders::[7]::core::fmt::builders::DebugMap>::value
                    (auStack_100,&local_e0,&DAT_00ad15a8);
        }
      }
      else {
        local_a0 = -0x7ffffffffffffff5;
                    /* try { // try from 00574c5c to 00574c6b has its CatchHandler @ 00574dfc */
        local_98 = uVar5;
        <core::fmt::builders::[7]::core::fmt::builders::DebugMap>::value
                  (auStack_100,&local_a0,&PTR_FUN_00ad15c8);
      }
      if (local_a0 != -1) {
        FUN_00572d78(&local_a0);
      }
      if ((long)iVar1 - 1U == uVar5) goto LAB_00574d30;
      if (uVar5 == 0x7fffffff) {
        uVar5 = 0x80000000;
        break;
      }
      iVar2 = sqlite3_column_count(*(undefined8 *)(lVar4 + 0x38));
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < iVar2);
  }
  local_a0 = -0x7ffffffffffffff5;
                    /* try { // try from 00574dac to 00574dcf has its CatchHandler @ 00574e1c */
  local_98 = uVar5;
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            ("valid column index",0x12,&local_a0,&PTR_FUN_00ad1200,
             &PTR_s__root__cargo_registry_src_index__00ad1510);
}


// ===== 00574e34  FUN_00574e34 =====

void FUN_00574e34(long param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = param_1 + 8;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
            (param_2,
             "Utf8ErrorInvalidParameterNameInvalidPathExecuteReturnedResultsQueryReturnedNoRowsQueryReturnedMoreThanOneRowInvalidColumnIndexInvalidColumnNameInvalidColumnTypeStatementChangedRowsToSqlConversionFailureInvalidQueryUnwindingPanicMultipleStatementInvalidParameterCount"
             ,9,"valid_up_to",0xb,param_1,&DAT_00ad1390,"error_len",9,&local_18,&DAT_00ad1608);
  return;
}


// ===== 00574ea4  FUN_00574ea4 =====

undefined8 FUN_00574ea4(long *param_1,uint param_2)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = param_1[2];
  if (param_2 < 0x80) {
    if (*param_1 == lVar7) {
      FUN_00572f14(param_1,lVar7,1,1,1);
    }
    *(byte *)(param_1[1] + lVar7) = (byte)param_2;
    lVar6 = 1;
  }
  else {
    uVar2 = 3;
    if (0xffff < param_2) {
      uVar2 = 4;
    }
    uVar3 = 2;
    if (0x7ff < param_2) {
      uVar3 = uVar2;
    }
    if ((ulong)(*param_1 - lVar7) < uVar3) {
      FUN_00572f14(param_1,lVar7,uVar3,1,1);
    }
    bVar4 = (byte)param_2 & 0x3f | 0x80;
    pbVar1 = (byte *)(param_1[1] + lVar7);
    if (param_2 < 0x800) {
      pbVar1[1] = bVar4;
      lVar6 = 2;
      *pbVar1 = (byte)(param_2 >> 6) | 0xc0;
    }
    else {
      bVar5 = (byte)(param_2 >> 6) & 0x3f | 0x80;
      if (param_2 >> 0x10 == 0) {
        pbVar1[1] = bVar5;
        pbVar1[2] = bVar4;
        lVar6 = 3;
        *pbVar1 = (byte)(param_2 >> 0xc) | 0xe0;
      }
      else {
        pbVar1[2] = bVar5;
        pbVar1[3] = bVar4;
        lVar6 = 4;
        pbVar1[1] = (byte)(param_2 >> 0xc) & 0x3f | 0x80;
        *pbVar1 = (byte)(param_2 >> 0x12) | 0xf0;
      }
    }
  }
  param_1[2] = lVar6 + lVar7;
  return 0;
}


// ===== 00574fe8  FUN_00574fe8 =====

undefined8 FUN_00574fe8(long *param_1,void *param_2,ulong param_3)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if ((ulong)(*param_1 - lVar1) < param_3) {
    FUN_00572f14(param_1,lVar1,param_3,1,1);
    lVar1 = param_1[2];
  }
  else if (param_3 == 0) goto LAB_00575028;
  memcpy((void *)(param_1[1] + lVar1),param_2,param_3);
LAB_00575028:
  param_1[2] = lVar1 + param_3;
  return 0;
}


// ===== 0057506c  FUN_0057506c =====

void FUN_0057506c(undefined8 param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <usize_as_core::fmt::LowerHex>::fmt();
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <usize_as_core::fmt::Display>::fmt();
    return;
  }
  <usize_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 00575084  FUN_00575084 =====

void FUN_00575084(long param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
            (param_2,"Error",5,&DAT_002bcfe4,4,param_1 + 4,&DAT_00ad1678,"extended_code",0xd,
             &local_18,&DAT_00ad14f0);
  return;
}


// ===== 005750f0  FUN_005750f0 =====

void FUN_005750f0(long param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


// ===== 00575104  FUN_00575104 =====

void FUN_00575104(long param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


// ===== 00575118  FUN_00575118 =====

void FUN_00575118(undefined8 *param_1)

{
  core::fmt::pointer_fmt_inner(*param_1);
  return;
}


// ===== 00575120  FUN_00575120 =====

void FUN_00575120(long param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


// ===== 00575134  FUN_00575134 =====

void FUN_00575134(long *param_1,undefined8 param_2)

{
  long *local_18;
  
  if (*param_1 != -1) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,"Err",3,&local_18,&DAT_00ad16b8);
    return;
  }
  local_18 = param_1 + 1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,"Ok",2,&local_18,&DAT_00ad1698);
  return;
}


// ===== 005751b0  FUN_005751b0 =====

void FUN_005751b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  core::fmt::write(param_1,&PTR_FUN_00ad1648,param_2,param_3);
  return;
}


// ===== 005751c4  FUN_005751c4 =====

undefined1  [16] FUN_005751c4(long *param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = param_1[1];
  auVar2._8_8_ = param_1[2];
  if (*param_1 != 3) {
    lVar1 = 0;
  }
  auVar2._0_8_ = lVar1;
  return auVar2;
}


// ===== 005751d8  FUN_005751d8 =====

long FUN_005751d8(long param_1,long param_2)

{
  ushort uVar1;
  ulong uVar2;
  long extraout_x1;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  long local_a0;
  long local_90;
  long lStack_88;
  undefined8 local_80;
  long lStack_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined2 local_60;
  long local_58;
  long local_50;
  long lStack_48;
  
  FUN_00572a28();
  if (extraout_x1 == 0) {
    lVar4 = 0;
  }
  else {
    uVar5 = 0;
    local_a0 = 0;
    local_80 = 0;
    local_68 = 1;
    local_70 = 0x7c0000007c;
    local_60 = 1;
    local_90 = param_1;
    lStack_88 = param_2;
    lStack_78 = param_2;
    do {
      lVar4 = local_90;
      FUN_00576980(&local_58,&local_90);
      uVar1 = local_60;
      if (local_58 == 1) {
        lVar4 = lVar4 + local_a0;
        lVar3 = local_50 - local_a0;
        local_a0 = lStack_48;
        auVar6 = FUN_00572a28(lVar4,lVar3);
        if (auVar6._8_8_ == 1) goto LAB_00575230;
LAB_005752c0:
        if (auVar6._8_8_ == 0) {
          return 1;
        }
        if (*auVar6._0_8_ != 0x7830) goto LAB_00575230;
        uVar2 = <i32_as_bitflags::parser::ParseHex>::parse_hex(auVar6._0_8_ + 1,auVar6._8_8_ + -2);
        if ((uVar2 & 1) != 0) {
          return 0x201;
        }
      }
      else {
        if ((local_60 & 0x100) != 0) break;
        local_60 = CONCAT11(1,(undefined1)local_60);
        if (((uVar1 & 1) == 0) && (param_2 == local_a0)) break;
        auVar6 = FUN_00572a28(local_90 + local_a0,param_2 - local_a0);
        if (auVar6._8_8_ != 1) goto LAB_005752c0;
LAB_00575230:
        uVar2 = FUN_0057b628();
        if ((uVar2 & 1) == 0) {
          return 0x101;
        }
      }
      uVar5 = uVar5 | (uint)(uVar2 >> 0x20);
    } while ((local_60 & 0x100) == 0);
    lVar4 = (ulong)uVar5 << 0x20;
  }
  return lVar4;
}


// ===== 00575318  FUN_00575318 =====

long FUN_00575318(long param_1,long param_2)

{
  char acVar1 [8];
  char acVar2 [8];
  ushort uVar3;
  long lVar4;
  ulong uVar5;
  char (*pacVar6) [8];
  long extraout_x1;
  undefined *puVar7;
  long lVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  long local_c0;
  long local_b0;
  long lStack_a8;
  undefined8 local_a0;
  long lStack_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined2 local_80;
  long local_78;
  long local_70;
  long lStack_68;
  
  FUN_00572a28();
  if (extraout_x1 == 0) {
    lVar8 = 0;
  }
  else {
    uVar9 = 0;
    local_c0 = 0;
    local_a0 = 0;
    local_90 = 0x7c0000007c;
    local_88 = 1;
    local_80 = 1;
    local_b0 = param_1;
    lStack_a8 = param_2;
    lStack_98 = param_2;
    do {
      lVar8 = local_b0;
      FUN_00576980(&local_78,&local_b0);
      lVar4 = lStack_68;
      uVar3 = local_80;
      if (local_78 == 1) {
        auVar10 = FUN_00572a28(lVar8 + local_c0,local_70 - local_c0);
        lVar8 = auVar10._8_8_;
        local_c0 = lVar4;
      }
      else {
        if ((local_80 & 0x100) != 0) break;
        local_80 = CONCAT11(1,(undefined1)local_80);
        if (((uVar3 & 1) == 0) && (param_2 == local_c0)) break;
        auVar10 = FUN_00572a28(local_b0 + local_c0,param_2 - local_c0);
        lVar8 = auVar10._8_8_;
      }
      if (lVar8 == 0) {
        s_SQLITE_P_002c536c[0] = s_SQLITE_P_002c536c[0];
        s_SQLITE_P_002c536c[1] = s_SQLITE_P_002c536c[1];
        s_SQLITE_P_002c536c[2] = s_SQLITE_P_002c536c[2];
        s_SQLITE_P_002c536c[3] = s_SQLITE_P_002c536c[3];
        s_SQLITE_P_002c536c[4] = s_SQLITE_P_002c536c[4];
        s_SQLITE_P_002c536c[5] = s_SQLITE_P_002c536c[5];
        s_SQLITE_P_002c536c[6] = s_SQLITE_P_002c536c[6];
        s_SQLITE_P_002c536c[7] = s_SQLITE_P_002c536c[7];
        s_REPARE_P_002c5374[0] = s_REPARE_P_002c5374[0];
        s_REPARE_P_002c5374[1] = s_REPARE_P_002c5374[1];
        s_REPARE_P_002c5374[2] = s_REPARE_P_002c5374[2];
        s_REPARE_P_002c5374[3] = s_REPARE_P_002c5374[3];
        s_REPARE_P_002c5374[4] = s_REPARE_P_002c5374[4];
        s_REPARE_P_002c5374[5] = s_REPARE_P_002c5374[5];
        s_REPARE_P_002c5374[6] = s_REPARE_P_002c5374[6];
        s_REPARE_P_002c5374[7] = s_REPARE_P_002c5374[7];
        s_ERSISTEN_002c537c[0] = s_ERSISTEN_002c537c[0];
        s_ERSISTEN_002c537c[1] = s_ERSISTEN_002c537c[1];
        s_ERSISTEN_002c537c[2] = s_ERSISTEN_002c537c[2];
        s_ERSISTEN_002c537c[3] = s_ERSISTEN_002c537c[3];
        s_ERSISTEN_002c537c[4] = s_ERSISTEN_002c537c[4];
        s_ERSISTEN_002c537c[5] = s_ERSISTEN_002c537c[5];
        s_ERSISTEN_002c537c[6] = s_ERSISTEN_002c537c[6];
        s_ERSISTEN_002c537c[7] = s_ERSISTEN_002c537c[7];
        s_SQLITE_P_002c5385[0] = s_SQLITE_P_002c5385[0];
        s_SQLITE_P_002c5385[1] = s_SQLITE_P_002c5385[1];
        s_SQLITE_P_002c5385[2] = s_SQLITE_P_002c5385[2];
        s_SQLITE_P_002c5385[3] = s_SQLITE_P_002c5385[3];
        s_SQLITE_P_002c5385[4] = s_SQLITE_P_002c5385[4];
        s_SQLITE_P_002c5385[5] = s_SQLITE_P_002c5385[5];
        s_SQLITE_P_002c5385[6] = s_SQLITE_P_002c5385[6];
        s_SQLITE_P_002c5385[7] = s_SQLITE_P_002c5385[7];
        s_REPARE_002c538d[0] = s_REPARE_002c538d[0];
        s_REPARE_002c538d[1] = s_REPARE_002c538d[1];
        s_REPARE_002c538d[2] = s_REPARE_002c538d[2];
        s_REPARE_002c538d[3] = s_REPARE_002c538d[3];
        s_REPARE_002c538d[4] = s_REPARE_002c538d[4];
        s_REPARE_002c538d[5] = s_REPARE_002c538d[5];
        s__NO_VTAB_002c5393[0] = (char)s__NO_VTAB_002c5393._0_2_;
        s__NO_VTAB_002c5393[1] = SUB21(s__NO_VTAB_002c5393._0_2_,1);
        s__NO_VTAB_002c5393[2] = (char)s__NO_VTAB_002c5393._2_6_;
        s__NO_VTAB_002c5393[3] = SUB61(s__NO_VTAB_002c5393._2_6_,1);
        s__NO_VTAB_002c5393[4] = SUB61(s__NO_VTAB_002c5393._2_6_,2);
        s__NO_VTAB_002c5393[5] = SUB61(s__NO_VTAB_002c5393._2_6_,3);
        s__NO_VTAB_002c5393[6] = SUB61(s__NO_VTAB_002c5393._2_6_,4);
        s__NO_VTAB_002c5393[7] = SUB61(s__NO_VTAB_002c5393._2_6_,5);
        s_SQLITE_P_002c539b[0] = s_SQLITE_P_002c539b[0];
        s_SQLITE_P_002c539b[1] = s_SQLITE_P_002c539b[1];
        s_SQLITE_P_002c539b[2] = s_SQLITE_P_002c539b[2];
        s_SQLITE_P_002c539b[3] = s_SQLITE_P_002c539b[3];
        s_SQLITE_P_002c539b[4] = s_SQLITE_P_002c539b[4];
        s_SQLITE_P_002c539b[5] = s_SQLITE_P_002c539b[5];
        s_SQLITE_P_002c539b[6] = s_SQLITE_P_002c539b[6];
        s_SQLITE_P_002c539b[7] = s_SQLITE_P_002c539b[7];
        s_REPARE__002c53a3[0] = s_REPARE__002c53a3[0];
        s_REPARE__002c53a3[1] = s_REPARE__002c53a3[1];
        s_REPARE__002c53a3[2] = s_REPARE__002c53a3[2];
        s_REPARE__002c53a3[3] = s_REPARE__002c53a3[3];
        s_REPARE__002c53a3[4] = s_REPARE__002c53a3[4];
        s_REPARE__002c53a3[5] = s_REPARE__002c53a3[5];
        s_REPARE__002c53a3[6] = s_REPARE__002c53a3[6];
        s_DONT_LOG_002c53aa[1] = (char)s_DONT_LOG_002c53aa._1_7_;
        s_DONT_LOG_002c53aa[2] = SUB71(s_DONT_LOG_002c53aa._1_7_,1);
        s_DONT_LOG_002c53aa[3] = SUB71(s_DONT_LOG_002c53aa._1_7_,2);
        s_DONT_LOG_002c53aa[4] = SUB71(s_DONT_LOG_002c53aa._1_7_,3);
        s_DONT_LOG_002c53aa[5] = SUB71(s_DONT_LOG_002c53aa._1_7_,4);
        s_DONT_LOG_002c53aa[6] = SUB71(s_DONT_LOG_002c53aa._1_7_,5);
        s_DONT_LOG_002c53aa[7] = SUB71(s_DONT_LOG_002c53aa._1_7_,6);
        return 1;
      }
      lVar8 = auVar10._8_8_;
      pacVar6 = auVar10._0_8_;
      if (lVar8 == 1) {
        s_SQLITE_P_002c536c[0] = s_SQLITE_P_002c536c[0];
        s_SQLITE_P_002c536c[1] = s_SQLITE_P_002c536c[1];
        s_SQLITE_P_002c536c[2] = s_SQLITE_P_002c536c[2];
        s_SQLITE_P_002c536c[3] = s_SQLITE_P_002c536c[3];
        s_SQLITE_P_002c536c[4] = s_SQLITE_P_002c536c[4];
        s_SQLITE_P_002c536c[5] = s_SQLITE_P_002c536c[5];
        s_SQLITE_P_002c536c[6] = s_SQLITE_P_002c536c[6];
        s_SQLITE_P_002c536c[7] = s_SQLITE_P_002c536c[7];
        s_REPARE_P_002c5374[0] = s_REPARE_P_002c5374[0];
        s_REPARE_P_002c5374[1] = s_REPARE_P_002c5374[1];
        s_REPARE_P_002c5374[2] = s_REPARE_P_002c5374[2];
        s_REPARE_P_002c5374[3] = s_REPARE_P_002c5374[3];
        s_REPARE_P_002c5374[4] = s_REPARE_P_002c5374[4];
        s_REPARE_P_002c5374[5] = s_REPARE_P_002c5374[5];
        s_REPARE_P_002c5374[6] = s_REPARE_P_002c5374[6];
        s_REPARE_P_002c5374[7] = s_REPARE_P_002c5374[7];
        s_ERSISTEN_002c537c[0] = s_ERSISTEN_002c537c[0];
        s_ERSISTEN_002c537c[1] = s_ERSISTEN_002c537c[1];
        s_ERSISTEN_002c537c[2] = s_ERSISTEN_002c537c[2];
        s_ERSISTEN_002c537c[3] = s_ERSISTEN_002c537c[3];
        s_ERSISTEN_002c537c[4] = s_ERSISTEN_002c537c[4];
        s_ERSISTEN_002c537c[5] = s_ERSISTEN_002c537c[5];
        s_ERSISTEN_002c537c[6] = s_ERSISTEN_002c537c[6];
        s_ERSISTEN_002c537c[7] = s_ERSISTEN_002c537c[7];
        s_SQLITE_P_002c5385[0] = s_SQLITE_P_002c5385[0];
        s_SQLITE_P_002c5385[1] = s_SQLITE_P_002c5385[1];
        s_SQLITE_P_002c5385[2] = s_SQLITE_P_002c5385[2];
        s_SQLITE_P_002c5385[3] = s_SQLITE_P_002c5385[3];
        s_SQLITE_P_002c5385[4] = s_SQLITE_P_002c5385[4];
        s_SQLITE_P_002c5385[5] = s_SQLITE_P_002c5385[5];
        s_SQLITE_P_002c5385[6] = s_SQLITE_P_002c5385[6];
        s_SQLITE_P_002c5385[7] = s_SQLITE_P_002c5385[7];
        s_REPARE_002c538d[0] = s_REPARE_002c538d[0];
        s_REPARE_002c538d[1] = s_REPARE_002c538d[1];
        s_REPARE_002c538d[2] = s_REPARE_002c538d[2];
        s_REPARE_002c538d[3] = s_REPARE_002c538d[3];
        s_REPARE_002c538d[4] = s_REPARE_002c538d[4];
        s_REPARE_002c538d[5] = s_REPARE_002c538d[5];
        s__NO_VTAB_002c5393[0] = (char)s__NO_VTAB_002c5393._0_2_;
        s__NO_VTAB_002c5393[1] = SUB21(s__NO_VTAB_002c5393._0_2_,1);
        s__NO_VTAB_002c5393[2] = (char)s__NO_VTAB_002c5393._2_6_;
        s__NO_VTAB_002c5393[3] = SUB61(s__NO_VTAB_002c5393._2_6_,1);
        s__NO_VTAB_002c5393[4] = SUB61(s__NO_VTAB_002c5393._2_6_,2);
        s__NO_VTAB_002c5393[5] = SUB61(s__NO_VTAB_002c5393._2_6_,3);
        s__NO_VTAB_002c5393[6] = SUB61(s__NO_VTAB_002c5393._2_6_,4);
        s__NO_VTAB_002c5393[7] = SUB61(s__NO_VTAB_002c5393._2_6_,5);
        s_SQLITE_P_002c539b[0] = s_SQLITE_P_002c539b[0];
        s_SQLITE_P_002c539b[1] = s_SQLITE_P_002c539b[1];
        s_SQLITE_P_002c539b[2] = s_SQLITE_P_002c539b[2];
        s_SQLITE_P_002c539b[3] = s_SQLITE_P_002c539b[3];
        s_SQLITE_P_002c539b[4] = s_SQLITE_P_002c539b[4];
        s_SQLITE_P_002c539b[5] = s_SQLITE_P_002c539b[5];
        s_SQLITE_P_002c539b[6] = s_SQLITE_P_002c539b[6];
        s_SQLITE_P_002c539b[7] = s_SQLITE_P_002c539b[7];
        s_REPARE__002c53a3[0] = s_REPARE__002c53a3[0];
        s_REPARE__002c53a3[1] = s_REPARE__002c53a3[1];
        s_REPARE__002c53a3[2] = s_REPARE__002c53a3[2];
        s_REPARE__002c53a3[3] = s_REPARE__002c53a3[3];
        s_REPARE__002c53a3[4] = s_REPARE__002c53a3[4];
        s_REPARE__002c53a3[5] = s_REPARE__002c53a3[5];
        s_REPARE__002c53a3[6] = s_REPARE__002c53a3[6];
        s_DONT_LOG_002c53aa[1] = (char)s_DONT_LOG_002c53aa._1_7_;
        s_DONT_LOG_002c53aa[2] = SUB71(s_DONT_LOG_002c53aa._1_7_,1);
        s_DONT_LOG_002c53aa[3] = SUB71(s_DONT_LOG_002c53aa._1_7_,2);
        s_DONT_LOG_002c53aa[4] = SUB71(s_DONT_LOG_002c53aa._1_7_,3);
        s_DONT_LOG_002c53aa[5] = SUB71(s_DONT_LOG_002c53aa._1_7_,4);
        s_DONT_LOG_002c53aa[6] = SUB71(s_DONT_LOG_002c53aa._1_7_,5);
        s_DONT_LOG_002c53aa[7] = SUB71(s_DONT_LOG_002c53aa._1_7_,6);
        return 0x101;
      }
      if (*(short *)*pacVar6 == 0x7830) {
        uVar5 = <u32_as_bitflags::parser::ParseHex>::parse_hex(*pacVar6 + 2,lVar8 + -2);
        if ((uVar5 & 1) != 0) {
          return 0x201;
        }
      }
      else {
        if (lVar8 == 0x16) {
          acVar1[6] = (char)s__NO_VTAB_002c5393._0_2_;
          acVar1[7] = SUB21(s__NO_VTAB_002c5393._0_2_,1);
          acVar1[0] = s_REPARE_002c538d[0];
          acVar1[1] = s_REPARE_002c538d[1];
          acVar1[2] = s_REPARE_002c538d[2];
          acVar1[3] = s_REPARE_002c538d[3];
          acVar1[4] = s_REPARE_002c538d[4];
          acVar1[5] = s_REPARE_002c538d[5];
          puVar7 = &UNK_00ad2068;
          if ((s_SQLITE_P_002c5385 != *pacVar6 || acVar1 != pacVar6[1]) ||
              CONCAT62(s__NO_VTAB_002c5393._2_6_,s__NO_VTAB_002c5393._0_2_) !=
              *(long *)(pacVar6[1] + 6)) {
            s_SQLITE_P_002c536c[0] = s_SQLITE_P_002c536c[0];
            s_SQLITE_P_002c536c[1] = s_SQLITE_P_002c536c[1];
            s_SQLITE_P_002c536c[2] = s_SQLITE_P_002c536c[2];
            s_SQLITE_P_002c536c[3] = s_SQLITE_P_002c536c[3];
            s_SQLITE_P_002c536c[4] = s_SQLITE_P_002c536c[4];
            s_SQLITE_P_002c536c[5] = s_SQLITE_P_002c536c[5];
            s_SQLITE_P_002c536c[6] = s_SQLITE_P_002c536c[6];
            s_SQLITE_P_002c536c[7] = s_SQLITE_P_002c536c[7];
            s_REPARE_P_002c5374[0] = s_REPARE_P_002c5374[0];
            s_REPARE_P_002c5374[1] = s_REPARE_P_002c5374[1];
            s_REPARE_P_002c5374[2] = s_REPARE_P_002c5374[2];
            s_REPARE_P_002c5374[3] = s_REPARE_P_002c5374[3];
            s_REPARE_P_002c5374[4] = s_REPARE_P_002c5374[4];
            s_REPARE_P_002c5374[5] = s_REPARE_P_002c5374[5];
            s_REPARE_P_002c5374[6] = s_REPARE_P_002c5374[6];
            s_REPARE_P_002c5374[7] = s_REPARE_P_002c5374[7];
            s_ERSISTEN_002c537c[0] = s_ERSISTEN_002c537c[0];
            s_ERSISTEN_002c537c[1] = s_ERSISTEN_002c537c[1];
            s_ERSISTEN_002c537c[2] = s_ERSISTEN_002c537c[2];
            s_ERSISTEN_002c537c[3] = s_ERSISTEN_002c537c[3];
            s_ERSISTEN_002c537c[4] = s_ERSISTEN_002c537c[4];
            s_ERSISTEN_002c537c[5] = s_ERSISTEN_002c537c[5];
            s_ERSISTEN_002c537c[6] = s_ERSISTEN_002c537c[6];
            s_ERSISTEN_002c537c[7] = s_ERSISTEN_002c537c[7];
            s_SQLITE_P_002c5385[0] = s_SQLITE_P_002c5385[0];
            s_SQLITE_P_002c5385[1] = s_SQLITE_P_002c5385[1];
            s_SQLITE_P_002c5385[2] = s_SQLITE_P_002c5385[2];
            s_SQLITE_P_002c5385[3] = s_SQLITE_P_002c5385[3];
            s_SQLITE_P_002c5385[4] = s_SQLITE_P_002c5385[4];
            s_SQLITE_P_002c5385[5] = s_SQLITE_P_002c5385[5];
            s_SQLITE_P_002c5385[6] = s_SQLITE_P_002c5385[6];
            s_SQLITE_P_002c5385[7] = s_SQLITE_P_002c5385[7];
            s_REPARE_002c538d[0] = s_REPARE_002c538d[0];
            s_REPARE_002c538d[1] = s_REPARE_002c538d[1];
            s_REPARE_002c538d[2] = s_REPARE_002c538d[2];
            s_REPARE_002c538d[3] = s_REPARE_002c538d[3];
            s_REPARE_002c538d[4] = s_REPARE_002c538d[4];
            s_REPARE_002c538d[5] = s_REPARE_002c538d[5];
            s__NO_VTAB_002c5393[0] = (char)s__NO_VTAB_002c5393._0_2_;
            s__NO_VTAB_002c5393[1] = SUB21(s__NO_VTAB_002c5393._0_2_,1);
            s__NO_VTAB_002c5393[2] = (char)s__NO_VTAB_002c5393._2_6_;
            s__NO_VTAB_002c5393[3] = SUB61(s__NO_VTAB_002c5393._2_6_,1);
            s__NO_VTAB_002c5393[4] = SUB61(s__NO_VTAB_002c5393._2_6_,2);
            s__NO_VTAB_002c5393[5] = SUB61(s__NO_VTAB_002c5393._2_6_,3);
            s__NO_VTAB_002c5393[6] = SUB61(s__NO_VTAB_002c5393._2_6_,4);
            s__NO_VTAB_002c5393[7] = SUB61(s__NO_VTAB_002c5393._2_6_,5);
            s_SQLITE_P_002c539b[0] = s_SQLITE_P_002c539b[0];
            s_SQLITE_P_002c539b[1] = s_SQLITE_P_002c539b[1];
            s_SQLITE_P_002c539b[2] = s_SQLITE_P_002c539b[2];
            s_SQLITE_P_002c539b[3] = s_SQLITE_P_002c539b[3];
            s_SQLITE_P_002c539b[4] = s_SQLITE_P_002c539b[4];
            s_SQLITE_P_002c539b[5] = s_SQLITE_P_002c539b[5];
            s_SQLITE_P_002c539b[6] = s_SQLITE_P_002c539b[6];
            s_SQLITE_P_002c539b[7] = s_SQLITE_P_002c539b[7];
            s_REPARE__002c53a3[0] = s_REPARE__002c53a3[0];
            s_REPARE__002c53a3[1] = s_REPARE__002c53a3[1];
            s_REPARE__002c53a3[2] = s_REPARE__002c53a3[2];
            s_REPARE__002c53a3[3] = s_REPARE__002c53a3[3];
            s_REPARE__002c53a3[4] = s_REPARE__002c53a3[4];
            s_REPARE__002c53a3[5] = s_REPARE__002c53a3[5];
            s_REPARE__002c53a3[6] = s_REPARE__002c53a3[6];
            s_DONT_LOG_002c53aa[1] = (char)s_DONT_LOG_002c53aa._1_7_;
            s_DONT_LOG_002c53aa[2] = SUB71(s_DONT_LOG_002c53aa._1_7_,1);
            s_DONT_LOG_002c53aa[3] = SUB71(s_DONT_LOG_002c53aa._1_7_,2);
            s_DONT_LOG_002c53aa[4] = SUB71(s_DONT_LOG_002c53aa._1_7_,3);
            s_DONT_LOG_002c53aa[5] = SUB71(s_DONT_LOG_002c53aa._1_7_,4);
            s_DONT_LOG_002c53aa[6] = SUB71(s_DONT_LOG_002c53aa._1_7_,5);
            s_DONT_LOG_002c53aa[7] = SUB71(s_DONT_LOG_002c53aa._1_7_,6);
            return 0x101;
          }
        }
        else if (lVar8 == 0x17) {
          acVar2[7] = s_DONT_LOG_002c53aa[0];
          acVar2[0] = s_REPARE__002c53a3[0];
          acVar2[1] = s_REPARE__002c53a3[1];
          acVar2[2] = s_REPARE__002c53a3[2];
          acVar2[3] = s_REPARE__002c53a3[3];
          acVar2[4] = s_REPARE__002c53a3[4];
          acVar2[5] = s_REPARE__002c53a3[5];
          acVar2[6] = s_REPARE__002c53a3[6];
          puVar7 = &UNK_00ad2080;
          if ((s_SQLITE_P_002c539b != *pacVar6 || acVar2 != pacVar6[1]) ||
              CONCAT71(s_DONT_LOG_002c53aa._1_7_,s_DONT_LOG_002c53aa[0]) !=
              *(long *)(pacVar6[1] + 7)) {
            s_SQLITE_P_002c536c[0] = s_SQLITE_P_002c536c[0];
            s_SQLITE_P_002c536c[1] = s_SQLITE_P_002c536c[1];
            s_SQLITE_P_002c536c[2] = s_SQLITE_P_002c536c[2];
            s_SQLITE_P_002c536c[3] = s_SQLITE_P_002c536c[3];
            s_SQLITE_P_002c536c[4] = s_SQLITE_P_002c536c[4];
            s_SQLITE_P_002c536c[5] = s_SQLITE_P_002c536c[5];
            s_SQLITE_P_002c536c[6] = s_SQLITE_P_002c536c[6];
            s_SQLITE_P_002c536c[7] = s_SQLITE_P_002c536c[7];
            s_REPARE_P_002c5374[0] = s_REPARE_P_002c5374[0];
            s_REPARE_P_002c5374[1] = s_REPARE_P_002c5374[1];
            s_REPARE_P_002c5374[2] = s_REPARE_P_002c5374[2];
            s_REPARE_P_002c5374[3] = s_REPARE_P_002c5374[3];
            s_REPARE_P_002c5374[4] = s_REPARE_P_002c5374[4];
            s_REPARE_P_002c5374[5] = s_REPARE_P_002c5374[5];
            s_REPARE_P_002c5374[6] = s_REPARE_P_002c5374[6];
            s_REPARE_P_002c5374[7] = s_REPARE_P_002c5374[7];
            s_ERSISTEN_002c537c[0] = s_ERSISTEN_002c537c[0];
            s_ERSISTEN_002c537c[1] = s_ERSISTEN_002c537c[1];
            s_ERSISTEN_002c537c[2] = s_ERSISTEN_002c537c[2];
            s_ERSISTEN_002c537c[3] = s_ERSISTEN_002c537c[3];
            s_ERSISTEN_002c537c[4] = s_ERSISTEN_002c537c[4];
            s_ERSISTEN_002c537c[5] = s_ERSISTEN_002c537c[5];
            s_ERSISTEN_002c537c[6] = s_ERSISTEN_002c537c[6];
            s_ERSISTEN_002c537c[7] = s_ERSISTEN_002c537c[7];
            s_SQLITE_P_002c5385[0] = s_SQLITE_P_002c5385[0];
            s_SQLITE_P_002c5385[1] = s_SQLITE_P_002c5385[1];
            s_SQLITE_P_002c5385[2] = s_SQLITE_P_002c5385[2];
            s_SQLITE_P_002c5385[3] = s_SQLITE_P_002c5385[3];
            s_SQLITE_P_002c5385[4] = s_SQLITE_P_002c5385[4];
            s_SQLITE_P_002c5385[5] = s_SQLITE_P_002c5385[5];
            s_SQLITE_P_002c5385[6] = s_SQLITE_P_002c5385[6];
            s_SQLITE_P_002c5385[7] = s_SQLITE_P_002c5385[7];
            s_REPARE_002c538d[0] = s_REPARE_002c538d[0];
            s_REPARE_002c538d[1] = s_REPARE_002c538d[1];
            s_REPARE_002c538d[2] = s_REPARE_002c538d[2];
            s_REPARE_002c538d[3] = s_REPARE_002c538d[3];
            s_REPARE_002c538d[4] = s_REPARE_002c538d[4];
            s_REPARE_002c538d[5] = s_REPARE_002c538d[5];
            s__NO_VTAB_002c5393[0] = (char)s__NO_VTAB_002c5393._0_2_;
            s__NO_VTAB_002c5393[1] = SUB21(s__NO_VTAB_002c5393._0_2_,1);
            s__NO_VTAB_002c5393[2] = (char)s__NO_VTAB_002c5393._2_6_;
            s__NO_VTAB_002c5393[3] = SUB61(s__NO_VTAB_002c5393._2_6_,1);
            s__NO_VTAB_002c5393[4] = SUB61(s__NO_VTAB_002c5393._2_6_,2);
            s__NO_VTAB_002c5393[5] = SUB61(s__NO_VTAB_002c5393._2_6_,3);
            s__NO_VTAB_002c5393[6] = SUB61(s__NO_VTAB_002c5393._2_6_,4);
            s__NO_VTAB_002c5393[7] = SUB61(s__NO_VTAB_002c5393._2_6_,5);
            s_SQLITE_P_002c539b[0] = s_SQLITE_P_002c539b[0];
            s_SQLITE_P_002c539b[1] = s_SQLITE_P_002c539b[1];
            s_SQLITE_P_002c539b[2] = s_SQLITE_P_002c539b[2];
            s_SQLITE_P_002c539b[3] = s_SQLITE_P_002c539b[3];
            s_SQLITE_P_002c539b[4] = s_SQLITE_P_002c539b[4];
            s_SQLITE_P_002c539b[5] = s_SQLITE_P_002c539b[5];
            s_SQLITE_P_002c539b[6] = s_SQLITE_P_002c539b[6];
            s_SQLITE_P_002c539b[7] = s_SQLITE_P_002c539b[7];
            s_REPARE__002c53a3[0] = s_REPARE__002c53a3[0];
            s_REPARE__002c53a3[1] = s_REPARE__002c53a3[1];
            s_REPARE__002c53a3[2] = s_REPARE__002c53a3[2];
            s_REPARE__002c53a3[3] = s_REPARE__002c53a3[3];
            s_REPARE__002c53a3[4] = s_REPARE__002c53a3[4];
            s_REPARE__002c53a3[5] = s_REPARE__002c53a3[5];
            s_REPARE__002c53a3[6] = s_REPARE__002c53a3[6];
            s_DONT_LOG_002c53aa[1] = (char)s_DONT_LOG_002c53aa._1_7_;
            s_DONT_LOG_002c53aa[2] = SUB71(s_DONT_LOG_002c53aa._1_7_,1);
            s_DONT_LOG_002c53aa[3] = SUB71(s_DONT_LOG_002c53aa._1_7_,2);
            s_DONT_LOG_002c53aa[4] = SUB71(s_DONT_LOG_002c53aa._1_7_,3);
            s_DONT_LOG_002c53aa[5] = SUB71(s_DONT_LOG_002c53aa._1_7_,4);
            s_DONT_LOG_002c53aa[6] = SUB71(s_DONT_LOG_002c53aa._1_7_,5);
            s_DONT_LOG_002c53aa[7] = SUB71(s_DONT_LOG_002c53aa._1_7_,6);
            return 0x101;
          }
        }
        else {
          if (lVar8 != 0x19) {
            s_SQLITE_P_002c536c[0] = s_SQLITE_P_002c536c[0];
            s_SQLITE_P_002c536c[1] = s_SQLITE_P_002c536c[1];
            s_SQLITE_P_002c536c[2] = s_SQLITE_P_002c536c[2];
            s_SQLITE_P_002c536c[3] = s_SQLITE_P_002c536c[3];
            s_SQLITE_P_002c536c[4] = s_SQLITE_P_002c536c[4];
            s_SQLITE_P_002c536c[5] = s_SQLITE_P_002c536c[5];
            s_SQLITE_P_002c536c[6] = s_SQLITE_P_002c536c[6];
            s_SQLITE_P_002c536c[7] = s_SQLITE_P_002c536c[7];
            s_REPARE_P_002c5374[0] = s_REPARE_P_002c5374[0];
            s_REPARE_P_002c5374[1] = s_REPARE_P_002c5374[1];
            s_REPARE_P_002c5374[2] = s_REPARE_P_002c5374[2];
            s_REPARE_P_002c5374[3] = s_REPARE_P_002c5374[3];
            s_REPARE_P_002c5374[4] = s_REPARE_P_002c5374[4];
            s_REPARE_P_002c5374[5] = s_REPARE_P_002c5374[5];
            s_REPARE_P_002c5374[6] = s_REPARE_P_002c5374[6];
            s_REPARE_P_002c5374[7] = s_REPARE_P_002c5374[7];
            s_ERSISTEN_002c537c[0] = s_ERSISTEN_002c537c[0];
            s_ERSISTEN_002c537c[1] = s_ERSISTEN_002c537c[1];
            s_ERSISTEN_002c537c[2] = s_ERSISTEN_002c537c[2];
            s_ERSISTEN_002c537c[3] = s_ERSISTEN_002c537c[3];
            s_ERSISTEN_002c537c[4] = s_ERSISTEN_002c537c[4];
            s_ERSISTEN_002c537c[5] = s_ERSISTEN_002c537c[5];
            s_ERSISTEN_002c537c[6] = s_ERSISTEN_002c537c[6];
            s_ERSISTEN_002c537c[7] = s_ERSISTEN_002c537c[7];
            s_SQLITE_P_002c5385[0] = s_SQLITE_P_002c5385[0];
            s_SQLITE_P_002c5385[1] = s_SQLITE_P_002c5385[1];
            s_SQLITE_P_002c5385[2] = s_SQLITE_P_002c5385[2];
            s_SQLITE_P_002c5385[3] = s_SQLITE_P_002c5385[3];
            s_SQLITE_P_002c5385[4] = s_SQLITE_P_002c5385[4];
            s_SQLITE_P_002c5385[5] = s_SQLITE_P_002c5385[5];
            s_SQLITE_P_002c5385[6] = s_SQLITE_P_002c5385[6];
            s_SQLITE_P_002c5385[7] = s_SQLITE_P_002c5385[7];
            s_REPARE_002c538d[0] = s_REPARE_002c538d[0];
            s_REPARE_002c538d[1] = s_REPARE_002c538d[1];
            s_REPARE_002c538d[2] = s_REPARE_002c538d[2];
            s_REPARE_002c538d[3] = s_REPARE_002c538d[3];
            s_REPARE_002c538d[4] = s_REPARE_002c538d[4];
            s_REPARE_002c538d[5] = s_REPARE_002c538d[5];
            s__NO_VTAB_002c5393[0] = (char)s__NO_VTAB_002c5393._0_2_;
            s__NO_VTAB_002c5393[1] = SUB21(s__NO_VTAB_002c5393._0_2_,1);
            s__NO_VTAB_002c5393[2] = (char)s__NO_VTAB_002c5393._2_6_;
            s__NO_VTAB_002c5393[3] = SUB61(s__NO_VTAB_002c5393._2_6_,1);
            s__NO_VTAB_002c5393[4] = SUB61(s__NO_VTAB_002c5393._2_6_,2);
            s__NO_VTAB_002c5393[5] = SUB61(s__NO_VTAB_002c5393._2_6_,3);
            s__NO_VTAB_002c5393[6] = SUB61(s__NO_VTAB_002c5393._2_6_,4);
            s__NO_VTAB_002c5393[7] = SUB61(s__NO_VTAB_002c5393._2_6_,5);
            s_SQLITE_P_002c539b[0] = s_SQLITE_P_002c539b[0];
            s_SQLITE_P_002c539b[1] = s_SQLITE_P_002c539b[1];
            s_SQLITE_P_002c539b[2] = s_SQLITE_P_002c539b[2];
            s_SQLITE_P_002c539b[3] = s_SQLITE_P_002c539b[3];
            s_SQLITE_P_002c539b[4] = s_SQLITE_P_002c539b[4];
            s_SQLITE_P_002c539b[5] = s_SQLITE_P_002c539b[5];
            s_SQLITE_P_002c539b[6] = s_SQLITE_P_002c539b[6];
            s_SQLITE_P_002c539b[7] = s_SQLITE_P_002c539b[7];
            s_REPARE__002c53a3[0] = s_REPARE__002c53a3[0];
            s_REPARE__002c53a3[1] = s_REPARE__002c53a3[1];
            s_REPARE__002c53a3[2] = s_REPARE__002c53a3[2];
            s_REPARE__002c53a3[3] = s_REPARE__002c53a3[3];
            s_REPARE__002c53a3[4] = s_REPARE__002c53a3[4];
            s_REPARE__002c53a3[5] = s_REPARE__002c53a3[5];
            s_REPARE__002c53a3[6] = s_REPARE__002c53a3[6];
            s_DONT_LOG_002c53aa[1] = (char)s_DONT_LOG_002c53aa._1_7_;
            s_DONT_LOG_002c53aa[2] = SUB71(s_DONT_LOG_002c53aa._1_7_,1);
            s_DONT_LOG_002c53aa[3] = SUB71(s_DONT_LOG_002c53aa._1_7_,2);
            s_DONT_LOG_002c53aa[4] = SUB71(s_DONT_LOG_002c53aa._1_7_,3);
            s_DONT_LOG_002c53aa[5] = SUB71(s_DONT_LOG_002c53aa._1_7_,4);
            s_DONT_LOG_002c53aa[6] = SUB71(s_DONT_LOG_002c53aa._1_7_,5);
            s_DONT_LOG_002c53aa[7] = SUB71(s_DONT_LOG_002c53aa._1_7_,6);
            return 0x101;
          }
          puVar7 = &UNK_00ad2050;
          if (((s_SQLITE_P_002c536c != *pacVar6 || s_REPARE_P_002c5374 != pacVar6[1]) ||
              s_ERSISTEN_002c537c != pacVar6[2]) || s_T_002c5384[0] != pacVar6[3][0]) {
            s_SQLITE_P_002c536c[0] = s_SQLITE_P_002c536c[0];
            s_SQLITE_P_002c536c[1] = s_SQLITE_P_002c536c[1];
            s_SQLITE_P_002c536c[2] = s_SQLITE_P_002c536c[2];
            s_SQLITE_P_002c536c[3] = s_SQLITE_P_002c536c[3];
            s_SQLITE_P_002c536c[4] = s_SQLITE_P_002c536c[4];
            s_SQLITE_P_002c536c[5] = s_SQLITE_P_002c536c[5];
            s_SQLITE_P_002c536c[6] = s_SQLITE_P_002c536c[6];
            s_SQLITE_P_002c536c[7] = s_SQLITE_P_002c536c[7];
            s_REPARE_P_002c5374[0] = s_REPARE_P_002c5374[0];
            s_REPARE_P_002c5374[1] = s_REPARE_P_002c5374[1];
            s_REPARE_P_002c5374[2] = s_REPARE_P_002c5374[2];
            s_REPARE_P_002c5374[3] = s_REPARE_P_002c5374[3];
            s_REPARE_P_002c5374[4] = s_REPARE_P_002c5374[4];
            s_REPARE_P_002c5374[5] = s_REPARE_P_002c5374[5];
            s_REPARE_P_002c5374[6] = s_REPARE_P_002c5374[6];
            s_REPARE_P_002c5374[7] = s_REPARE_P_002c5374[7];
            s_ERSISTEN_002c537c[0] = s_ERSISTEN_002c537c[0];
            s_ERSISTEN_002c537c[1] = s_ERSISTEN_002c537c[1];
            s_ERSISTEN_002c537c[2] = s_ERSISTEN_002c537c[2];
            s_ERSISTEN_002c537c[3] = s_ERSISTEN_002c537c[3];
            s_ERSISTEN_002c537c[4] = s_ERSISTEN_002c537c[4];
            s_ERSISTEN_002c537c[5] = s_ERSISTEN_002c537c[5];
            s_ERSISTEN_002c537c[6] = s_ERSISTEN_002c537c[6];
            s_ERSISTEN_002c537c[7] = s_ERSISTEN_002c537c[7];
            s_SQLITE_P_002c5385[0] = s_SQLITE_P_002c5385[0];
            s_SQLITE_P_002c5385[1] = s_SQLITE_P_002c5385[1];
            s_SQLITE_P_002c5385[2] = s_SQLITE_P_002c5385[2];
            s_SQLITE_P_002c5385[3] = s_SQLITE_P_002c5385[3];
            s_SQLITE_P_002c5385[4] = s_SQLITE_P_002c5385[4];
            s_SQLITE_P_002c5385[5] = s_SQLITE_P_002c5385[5];
            s_SQLITE_P_002c5385[6] = s_SQLITE_P_002c5385[6];
            s_SQLITE_P_002c5385[7] = s_SQLITE_P_002c5385[7];
            s_REPARE_002c538d[0] = s_REPARE_002c538d[0];
            s_REPARE_002c538d[1] = s_REPARE_002c538d[1];
            s_REPARE_002c538d[2] = s_REPARE_002c538d[2];
            s_REPARE_002c538d[3] = s_REPARE_002c538d[3];
            s_REPARE_002c538d[4] = s_REPARE_002c538d[4];
            s_REPARE_002c538d[5] = s_REPARE_002c538d[5];
            s__NO_VTAB_002c5393[0] = (char)s__NO_VTAB_002c5393._0_2_;
            s__NO_VTAB_002c5393[1] = SUB21(s__NO_VTAB_002c5393._0_2_,1);
            s__NO_VTAB_002c5393[2] = (char)s__NO_VTAB_002c5393._2_6_;
            s__NO_VTAB_002c5393[3] = SUB61(s__NO_VTAB_002c5393._2_6_,1);
            s__NO_VTAB_002c5393[4] = SUB61(s__NO_VTAB_002c5393._2_6_,2);
            s__NO_VTAB_002c5393[5] = SUB61(s__NO_VTAB_002c5393._2_6_,3);
            s__NO_VTAB_002c5393[6] = SUB61(s__NO_VTAB_002c5393._2_6_,4);
            s__NO_VTAB_002c5393[7] = SUB61(s__NO_VTAB_002c5393._2_6_,5);
            s_SQLITE_P_002c539b[0] = s_SQLITE_P_002c539b[0];
            s_SQLITE_P_002c539b[1] = s_SQLITE_P_002c539b[1];
            s_SQLITE_P_002c539b[2] = s_SQLITE_P_002c539b[2];
            s_SQLITE_P_002c539b[3] = s_SQLITE_P_002c539b[3];
            s_SQLITE_P_002c539b[4] = s_SQLITE_P_002c539b[4];
            s_SQLITE_P_002c539b[5] = s_SQLITE_P_002c539b[5];
            s_SQLITE_P_002c539b[6] = s_SQLITE_P_002c539b[6];
            s_SQLITE_P_002c539b[7] = s_SQLITE_P_002c539b[7];
            s_REPARE__002c53a3[0] = s_REPARE__002c53a3[0];
            s_REPARE__002c53a3[1] = s_REPARE__002c53a3[1];
            s_REPARE__002c53a3[2] = s_REPARE__002c53a3[2];
            s_REPARE__002c53a3[3] = s_REPARE__002c53a3[3];
            s_REPARE__002c53a3[4] = s_REPARE__002c53a3[4];
            s_REPARE__002c53a3[5] = s_REPARE__002c53a3[5];
            s_REPARE__002c53a3[6] = s_REPARE__002c53a3[6];
            s_DONT_LOG_002c53aa[1] = (char)s_DONT_LOG_002c53aa._1_7_;
            s_DONT_LOG_002c53aa[2] = SUB71(s_DONT_LOG_002c53aa._1_7_,1);
            s_DONT_LOG_002c53aa[3] = SUB71(s_DONT_LOG_002c53aa._1_7_,2);
            s_DONT_LOG_002c53aa[4] = SUB71(s_DONT_LOG_002c53aa._1_7_,3);
            s_DONT_LOG_002c53aa[5] = SUB71(s_DONT_LOG_002c53aa._1_7_,4);
            s_DONT_LOG_002c53aa[6] = SUB71(s_DONT_LOG_002c53aa._1_7_,5);
            s_DONT_LOG_002c53aa[7] = SUB71(s_DONT_LOG_002c53aa._1_7_,6);
            return 0x101;
          }
        }
        uVar5 = (ulong)*(uint *)(puVar7 + 0x10) << 0x20;
      }
      uVar9 = uVar9 | (uint)(uVar5 >> 0x20);
    } while ((local_80 & 0x100) == 0);
    lVar8 = (ulong)uVar9 << 0x20;
  }
  return lVar8;
}


// ===== 0057552c  FUN_0057552c =====

undefined8 FUN_0057552c(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  uint local_7c;
  uint *local_78;
  uint **ppuStack_70;
  code *local_68;
  
  uVar3 = *param_1;
  bVar5 = true;
  uVar6 = 0;
  uVar1 = uVar3;
  while (uVar6 < 0xb) {
    if (uVar1 == 0) {
      return 0;
    }
    uVar10 = uVar6 + 1;
    puVar9 = &DAT_00ad1770 + uVar6 * 3;
    while ((uVar4 = *(uint *)(puVar9 + 1), (uVar4 & (uVar3 ^ 0xffffffff)) != 0 ||
           ((uVar4 & uVar1) == 0))) {
      uVar10 = uVar10 + 1;
      puVar9 = puVar9 + 3;
      if (uVar10 == 0xc) goto LAB_005755f4;
    }
    uVar8 = puVar9[-1];
    uVar2 = *puVar9;
    if ((!bVar5) &&
       (uVar6 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2," | ",3), (uVar6 & 1) != 0
       )) {
      return 1;
    }
    uVar1 = uVar1 & (uVar4 ^ 0xffffffff);
    uVar7 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,uVar8,uVar2);
    bVar5 = false;
    uVar6 = uVar10;
    if ((uVar7 & 1) != 0) {
      return 1;
    }
  }
  if (uVar1 == 0) {
    return 0;
  }
LAB_005755f4:
  local_7c = uVar1;
  if ((!bVar5) &&
     (uVar6 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2," | ",3), (uVar6 & 1) != 0))
  {
    return 1;
  }
  uVar6 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"0x",2);
  if ((uVar6 & 1) != 0) {
    return 1;
  }
  local_78 = &local_7c;
  ppuStack_70 = &local_78;
  local_68 = FUN_005744b0;
  uVar8 = core::fmt::write(*param_2,param_2[1],&DAT_002ab692,&ppuStack_70);
  return uVar8;
}


// ===== 0057568c  FUN_0057568c =====

undefined8 FUN_0057568c(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  uint uVar8;
  uint uVar9;
  uint local_7c;
  uint *local_78;
  uint **ppuStack_70;
  code *local_68;
  
  uVar1 = *param_1;
  if (uVar1 == 0) {
    return 0;
  }
  if ((uVar1 & 1) == 0) {
    if ((uVar1 >> 2 & 1) == 0) {
      local_7c = uVar1;
      if ((uVar1 >> 4 & 1) == 0) goto LAB_00575838;
      uVar8 = 0xffffffef;
      uVar5 = 3;
      uVar3 = <core::fmt::[a]::core::fmt::Formatter>::write_str
                        (param_2,PTR_s_SQLITE_PREPARE_DONT_LOG_00ad18a0,DAT_00ad18a8);
    }
    else {
      uVar8 = 0xfffffffb;
      uVar5 = 2;
      uVar3 = <core::fmt::[a]::core::fmt::Formatter>::write_str
                        (param_2,PTR_s_SQLITE_PREPARE_NO_VTAB_00ad1888,DAT_00ad1890);
    }
  }
  else {
    uVar8 = 0xfffffffe;
    uVar5 = 1;
    uVar3 = <core::fmt::[a]::core::fmt::Formatter>::write_str
                      (param_2,PTR_s_SQLITE_PREPARE_PERSISTENT_00ad1870,DAT_00ad1878);
  }
  if ((uVar3 & 1) == 0) {
    uVar8 = uVar1 & uVar8;
    while (uVar5 < 3) {
      if (uVar8 == 0) {
        return 0;
      }
      lVar2 = uVar5 * 0x18;
      uVar9 = *(uint *)(&UNK_00ad1880 + lVar2);
      uVar3 = uVar5 + 1;
      if ((uVar9 & (uVar1 ^ 0xffffffff)) != 0 || (uVar9 & uVar8) == 0) {
        if (uVar3 != 3) {
          lVar2 = uVar3 * 0x18;
          uVar3 = uVar5 + 2;
          uVar9 = *(uint *)(&UNK_00ad1880 + lVar2);
          if (((uVar9 & (uVar1 ^ 0xffffffff)) == 0) && ((uVar9 & uVar8) != 0)) goto LAB_00575748;
          if (uVar3 != 3) {
            uVar9 = *(uint *)(&UNK_00ad1880 + uVar3 * 0x18);
            if (((uVar9 & (uVar1 ^ 0xffffffff)) == 0) && ((uVar9 & uVar8) != 0)) {
              puVar7 = (&PTR_s_SQLITE_PREPARE_PERSISTENT_00ad1870)[uVar3 * 3];
              uVar6 = (&DAT_00ad1878)[uVar3 * 3];
              uVar4 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2," | ",3);
              uVar3 = uVar5 + 3;
              if ((uVar4 & 1) != 0) {
                return 1;
              }
              goto LAB_00575764;
            }
          }
        }
        goto LAB_00575820;
      }
LAB_00575748:
      puVar7 = *(undefined **)((long)&PTR_s_SQLITE_PREPARE_PERSISTENT_00ad1870 + lVar2);
      uVar6 = *(undefined8 *)((long)&DAT_00ad1878 + lVar2);
      uVar5 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2," | ",3);
      if ((uVar5 & 1) != 0) {
        return 1;
      }
LAB_00575764:
      uVar8 = uVar8 & (uVar9 ^ 0xffffffff);
      uVar4 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,puVar7,uVar6);
      uVar5 = uVar3;
      if ((uVar4 & 1) != 0) {
        return 1;
      }
    }
    if (uVar8 == 0) {
      return 0;
    }
LAB_00575820:
    local_7c = uVar8;
    uVar5 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2," | ",3);
    if ((uVar5 & 1) == 0) {
LAB_00575838:
      uVar5 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"0x",2);
      if ((uVar5 & 1) != 0) {
        return 1;
      }
      local_78 = &local_7c;
      ppuStack_70 = &local_78;
      local_68 = FUN_005744b8;
      uVar6 = core::fmt::write(*param_2,param_2[1],&DAT_002ab692,&ppuStack_70);
      return uVar6;
    }
  }
  return 1;
}


// ===== 005758a4  FUN_005758a4 =====

void FUN_005758a4(long param_1)

{
  **(long **)(param_1 + 8) = **(long **)(param_1 + 8) + -1;
  return;
}


// ===== 005758b8  FUN_005758b8 =====

void FUN_005758b8(long *param_1,ulong *param_2)

{
  ulong *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  byte bVar6;
  bool bVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar10 = param_1[1];
  uVar8 = param_2[2] >> (uVar10 & 0x3f) | param_2[2] << 0x40 - (uVar10 & 0x3f);
  puVar1 = (ulong *)(*param_1 + 0x10);
  if (0x10 < uVar10) {
    if (uVar10 < 0x100) {
      uVar10 = foldhash::hash_bytes_medium();
      bVar6 = (byte)param_2[7];
      param_2[2] = uVar10;
    }
    else {
      uVar10 = foldhash::hash_bytes_long();
      bVar6 = (byte)param_2[7];
      param_2[2] = uVar10;
    }
    goto joined_r0x00575924;
  }
  uVar9 = param_2[4];
  if (uVar10 < 8) {
    if (uVar10 < 4) {
      if (uVar10 != 0) {
        uVar11 = (ulong)*(byte *)puVar1;
        uVar10 = (ulong)CONCAT11(*(undefined1 *)((long)puVar1 + (uVar10 - 1)),
                                 *(undefined1 *)((long)puVar1 + (uVar10 >> 1)));
        goto LAB_0057596c;
      }
    }
    else {
      uVar8 = uVar8 ^ *(uint *)puVar1;
      uVar9 = uVar9 ^ *(uint *)((long)puVar1 + (uVar10 - 4));
    }
  }
  else {
    uVar11 = *puVar1;
    uVar10 = *(ulong *)((long)puVar1 + (uVar10 - 8));
LAB_0057596c:
    uVar8 = uVar11 ^ uVar8;
    uVar9 = uVar10 ^ uVar9;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar8;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar9;
  uVar10 = SUB168(auVar2 * auVar4,8) ^ uVar8 * uVar9;
  bVar6 = (byte)param_2[7];
  param_2[2] = uVar10;
joined_r0x00575924:
  if (bVar6 < 0x79) {
    uVar8 = 0xffL << ((ulong)bVar6 & 0x3f);
    bVar7 = (bVar6 & 0x40) == 0;
    uVar10 = uVar8;
    if (bVar7) {
      uVar10 = 0x7fL >> ((ulong)~(uint)bVar6 & 0x3f);
    }
    uVar9 = 0;
    if (bVar7) {
      uVar9 = uVar8;
    }
    *param_2 = *param_2 | uVar9;
    param_2[1] = param_2[1] | uVar10;
    *(byte *)(param_2 + 7) = bVar6 + 8;
    return;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2[3] ^ param_2[1];
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar10 ^ *param_2;
  param_2[2] = SUB168(auVar3 * auVar5,8) ^ (param_2[3] ^ param_2[1]) * (uVar10 ^ *param_2);
  *param_2 = 0xff;
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 7) = 8;
  return;
}


// ===== 00575a34  FUN_00575a34 =====

void FUN_00575a34(undefined8 *param_1,char *param_2,ulong param_3)

{
  void *__src;
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long local_a0 [4];
  undefined1 local_80;
  undefined7 uStack_7f;
  ulong uStack_78;
  ulong uStack_70;
  ulong local_68;
  
  if (param_3 < 0x10) {
    pcVar2 = param_2;
    uVar5 = param_3;
    if (param_3 != 0) {
      do {
        if (*pcVar2 == '\0') goto LAB_00575c40;
        uVar5 = uVar5 - 1;
        pcVar2 = pcVar2 + 1;
      } while (uVar5 != 0);
      goto LAB_00575aa0;
    }
    local_68 = 0;
    local_80 = 0;
  }
  else {
    lVar1 = core::slice::memchr::memchr_aligned(0,param_2,param_3);
    if (lVar1 == 1) {
LAB_00575c40:
      <rusqlite::util::small_cstr::rusqlite::util::small_cstr::SmallCString>::fabricate_nul_error
                (param_1 + 1,param_2,param_3);
      *param_1 = 1;
      return;
    }
LAB_00575aa0:
    local_68 = 0;
    local_80 = 0;
                    /* try { // try from 00575ab4 to 00575ad7 has its CatchHandler @ 00575ccc */
    if ((0x10 < param_3 + 1) && (lVar1 = FUN_00575d88(&local_80,&local_80,param_3 + 1), lVar1 != -1)
       ) {
      if (lVar1 == 0) {
                    /* try { // try from 00575cb0 to 00575cc7 has its CatchHandler @ 00575ccc */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("capacity overflow",0x11,&PTR_s__root__cargo_registry_src_index__00ad1718);
      }
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error();
    }
  }
  local_a0[0] = CONCAT71(uStack_7f,local_80);
  local_a0[1] = uStack_78;
  local_a0[3] = local_68;
  local_a0[2] = uStack_70;
  uVar5 = local_68;
  uVar7 = uStack_78;
  if (local_68 < 0x11) {
    uVar5 = 0x10;
    uVar7 = local_68;
  }
  if (uVar5 - uVar7 < param_3) {
    if (!CARRY8(uVar7,param_3)) {
      uVar5 = 0;
      if (1 < uVar7 + param_3) {
        uVar5 = 0xffffffffffffffff >> (LZCOUNT((uVar7 + param_3) - 1) & 0x3fU);
      }
      if (uVar5 != 0xffffffffffffffff) {
                    /* try { // try from 00575b40 to 00575b4b has its CatchHandler @ 00575cd4 */
        lVar1 = FUN_00575d88(local_a0,uVar5 + 1);
        if (lVar1 == -1) goto LAB_00575b58;
        if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
          alloc::alloc::handle_alloc_error();
        }
      }
    }
    ppuVar4 = &PTR_s__root__cargo_registry_src_index__00ad1718;
    pcVar2 = "capacity overflow";
    uVar3 = 0x11;
  }
  else {
LAB_00575b58:
    if ((ulong)local_a0[3] < 0x11) {
      if (uVar7 <= (ulong)local_a0[3]) {
        uVar5 = (ulong)local_a0 | 1;
        uVar8 = local_a0[3];
        goto LAB_00575b84;
      }
    }
    else {
      uVar5 = local_a0[2];
      uVar8 = local_a0[1];
      if (uVar7 <= (ulong)local_a0[1]) {
LAB_00575b84:
        __src = (void *)(uVar5 + uVar7);
        memmove((void *)((long)__src + param_3),__src,uVar8 - uVar7);
        memcpy(__src,param_2,param_3);
        lVar1 = 8;
        if ((ulong)local_a0[3] < 0x11) {
          lVar1 = 0x18;
        }
        *(ulong *)((long)local_a0 + lVar1) = uVar8 + param_3;
        uVar5 = local_a0[2];
        plVar6 = (long *)((ulong)local_a0 | 8);
        uVar7 = local_a0[1];
        uVar8 = local_a0[3];
        if ((ulong)local_a0[3] < 0x11) {
          uVar5 = (ulong)local_a0 | 1;
          plVar6 = local_a0 + 3;
          uVar7 = local_a0[3];
          uVar8 = 0x10;
        }
        if (uVar7 == uVar8) {
                    /* try { // try from 00575c74 to 00575cab has its CatchHandler @ 00575cd4 */
          FUN_00575cfc(local_a0);
          uVar5 = local_a0[2];
          plVar6 = (long *)((ulong)local_a0 | 8);
          uVar7 = local_a0[1];
        }
        *(undefined1 *)(uVar5 + uVar7) = 0;
        lVar1 = *plVar6;
        *param_1 = 0;
        *plVar6 = lVar1 + 1;
        param_1[2] = local_a0[1];
        param_1[1] = local_a0[0];
        param_1[4] = local_a0[3];
        param_1[3] = local_a0[2];
        return;
      }
    }
    ppuVar4 = &PTR_s__root__cargo_registry_src_index__00ad18e8;
    pcVar2 = "assertion failed: index <= len";
    uVar3 = 0x1e;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic(pcVar2,uVar3,ppuVar4);
}


// ===== 00575cfc  FUN_00575cfc =====

void FUN_00575cfc(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 0x18);
  if ((uVar3 < 0x11) || (uVar3 = *(ulong *)(param_1 + 8), uVar3 != 0xffffffffffffffff)) {
    uVar1 = 0;
    if (uVar3 != 0) {
      uVar1 = 0xffffffffffffffff >> (LZCOUNT(uVar3) & 0x3fU);
    }
    if (uVar1 != 0xffffffffffffffff) {
      lVar2 = FUN_00575d88(param_1,uVar1 + 1);
      if (lVar2 == -1) {
        return;
      }
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("capacity overflow",0x11,&PTR_s__root__cargo_registry_src_index__00ad1718);
      }
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error();
    }
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed
            ("capacity overflow",0x11,&PTR_s__root__cargo_registry_src_index__00ad18b8);
}


// ===== 00575d88  FUN_00575d88 =====

undefined1  [16] FUN_00575d88(undefined1 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong __n;
  void *__dest;
  ulong uVar4;
  undefined1 *__src;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 local_50;
  ulong uStack_48;
  
  __src = *(undefined1 **)(param_1 + 0x10);
  uVar1 = *(ulong *)(param_1 + 0x18);
  uVar4 = uVar1;
  __n = *(ulong *)(param_1 + 8);
  if (uVar1 < 0x11) {
    __src = param_1 + 1;
    uVar4 = 0x10;
    __n = uVar1;
  }
  if (param_2 < __n) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_002c0308,0x20,&PTR_s__root__cargo_registry_src_index__00ad18d0);
  }
  if (param_2 < 0x11) {
    if (0x10 < uVar1) {
      *param_1 = 0;
      memcpy(param_1 + 1,__src,__n);
      *(ulong *)(param_1 + 0x18) = __n;
      if ((long)uVar4 < 0) {
        local_50 = 0;
        uStack_48 = uVar4;
                    /* WARNING: Subroutine does not return */
        core::result::unwrap_failed
                  ("called `Result::unwrap()` on an `Err` value",0x2b,&local_50,&DAT_00ad1748,
                   &PTR_s__root__cargo_registry_src_index__00ad1700);
      }
      free(__src);
      param_2 = uVar4;
    }
  }
  else if (uVar1 != param_2) {
    if ((long)param_2 < 0) {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = param_2;
      return auVar2 << 0x40;
    }
    if (uVar1 < 0x11) {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      __dest = (void *)FUN_004b25a4(param_2,1);
      if (__dest == (void *)0x0) {
LAB_00575edc:
        auVar8._8_8_ = param_2;
        auVar8._0_8_ = 1;
        return auVar8;
      }
      memcpy(__dest,__src,__n);
      auVar6._8_8_ = __src;
      auVar6._0_8_ = __dest;
    }
    else {
      if ((long)uVar4 < 0) {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar4;
        return auVar3 << 0x40;
      }
      auVar6 = FUN_004b2600(__src,uVar4,1);
      if (auVar6._0_8_ == 0) goto LAB_00575edc;
    }
    auVar7._8_8_ = auVar6._8_8_;
    *(ulong *)(param_1 + 8) = __n;
    *(long *)(param_1 + 0x10) = auVar6._0_8_;
    *param_1 = 1;
    *(ulong *)(param_1 + 0x18) = param_2;
    auVar7._0_8_ = 0xffffffffffffffff;
    return auVar7;
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = 0xffffffffffffffff;
  return auVar5;
}


// ===== 00575f5c  <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<*mut_libsqlite3_sys::bindings::sqlite3>>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<*mut
   libsqlite3_sys::bindings::sqlite3>>>::drop_slow */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<*mut_libsqlite3_sys::bindings::sqlite3>>>
::drop_slow(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  void *__ptr;
  long lVar4;
  
  __ptr = (void *)*param_1;
  if (__ptr != (void *)0xffffffffffffffff) {
    plVar1 = (long *)((long)__ptr + 8);
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00575f94  <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow */

void __rustcall <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  void *__ptr;
  long lVar4;
  long lVar5;
  
  __ptr = (void *)*param_1;
  if (__ptr != (void *)0xffffffffffffffff) {
    lVar4 = param_1[1];
    plVar1 = (long *)((long)__ptr + 8);
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((lVar5 + -1 == 0) && (DataMemoryBarrier(2,1), (lVar4 + 0x17U & 0xfffffffffffffff8) != 0)) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00575fdc  FUN_00575fdc =====

void FUN_00575fdc(long *param_1,long param_2,long param_3)

{
  undefined2 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  uint local_78 [2];
  long local_70;
  long lStack_68;
  
  if (param_3 < 0) {
    uVar5 = 0;
LAB_00576008:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar5,param_3);
  }
  if (param_3 == 0) {
    lVar3 = 1;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar5 = 1;
    lVar3 = FUN_004b25a4(param_3,1);
    if (lVar3 == 0) goto LAB_00576008;
  }
  local_b0 = 0;
  uStack_98 = 0;
  uStack_88 = 0;
  local_80 = 1;
  lVar8 = 0;
  local_c0 = param_3;
  lStack_b8 = lVar3;
  lStack_a8 = param_2;
  local_a0 = param_3;
  local_90 = param_3;
                    /* try { // try from 0057606c to 00576077 has its CatchHandler @ 005761a4 */
  while (lVar6 = local_b0, FUN_00576980(local_78,&lStack_a8), lVar2 = lStack_68,
        (local_78[0] & 1) != 0) {
    uVar7 = local_70 - lVar8;
    if ((ulong)(local_c0 - lVar6) < uVar7) {
                    /* try { // try from 005760e0 to 00576117 has its CatchHandler @ 005761a4 */
      FUN_00572f14(&local_c0,lVar6,uVar7,1,1);
      lVar3 = lStack_b8;
      lVar6 = local_b0;
LAB_005760a0:
      lVar4 = local_c0;
      memcpy((void *)(lVar3 + lVar6),(void *)(param_2 + lVar8),uVar7);
    }
    else {
      lVar4 = local_c0;
      if (local_70 != lVar8) goto LAB_005760a0;
    }
    local_b0 = lVar6 + uVar7;
    if ((ulong)(lVar4 - local_b0) < 3) {
      FUN_00572f14(&local_c0,local_b0,3,1,1);
      lVar3 = lStack_b8;
    }
    puVar1 = (undefined2 *)(lVar3 + local_b0);
    local_b0 = local_b0 + 3;
    *(undefined1 *)(puVar1 + 1) = 0x80;
    *puVar1 = 0x90e2;
    lVar8 = lVar2;
  }
  uVar7 = param_3 - lVar8;
  if ((ulong)(local_c0 - lVar6) < uVar7) {
                    /* try { // try from 00576180 to 00576197 has its CatchHandler @ 005761a0 */
    FUN_00572f14(&local_c0,lVar6,uVar7,1,1);
    lVar3 = lStack_b8;
    lVar6 = local_b0;
  }
  else if (param_3 == lVar8) goto LAB_0057614c;
  memcpy((void *)(lVar3 + lVar6),(void *)(param_2 + lVar8),uVar7);
LAB_0057614c:
  param_1[1] = lStack_b8;
  *param_1 = local_c0;
  param_1[2] = lVar6 + uVar7;
  return;
}


// ===== 005761c4  FUN_005761c4 =====

void * FUN_005761c4(char *param_1,ulong param_2)

{
  long lVar1;
  void *__dest;
  char *pcVar2;
  ulong uVar3;
  long local_48;
  char *local_40;
  ulong uStack_38;
  
  if (param_2 < 0x10) {
    pcVar2 = param_1;
    uVar3 = param_2;
    if (param_2 != 0) {
      do {
        if (*pcVar2 == '\0') goto LAB_00576254;
        uVar3 = uVar3 - 1;
        pcVar2 = pcVar2 + 1;
      } while (uVar3 != 0);
    }
LAB_00576220:
    local_48 = -1;
    if (0x7ffffffe < param_2) goto LAB_00576234;
  }
  else {
    lVar1 = core::slice::memchr::memchr_aligned(0,param_1,param_2);
    if (lVar1 != 1) goto LAB_00576220;
LAB_00576254:
    FUN_00575fdc(&local_48,param_1,param_2);
    param_1 = local_40;
    param_2 = uStack_38;
    if (0x7ffffffe < uStack_38) goto LAB_00576234;
  }
  __dest = (void *)sqlite3_malloc((int)param_2 + 1);
  if (__dest != (void *)0x0) {
    memcpy(__dest,param_1,param_2);
    *(undefined1 *)((long)__dest + param_2) = 0;
    if (local_48 - 1U < 0xfffffffffffffffe) {
      free(param_1);
    }
    return __dest;
  }
LAB_00576234:
  uVar3 = param_2 + 1;
  if (param_2 == 0xffffffffffffffff) {
    uVar3 = 0xffffffffffffffff;
  }
  if (0x7ffffffffffffffe < uVar3) {
    uVar3 = 0x7fffffffffffffff;
  }
                    /* try { // try from 00576248 to 0057624f has its CatchHandler @ 005762c8 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(1,uVar3);
}


// ===== 005762f0  FUN_005762f0 =====

void FUN_005762f0(undefined8 *param_1,undefined8 param_2)

{
  ulong *puVar1;
  undefined1 auStack_40 [16];
  ulong *local_30;
  ulong *local_28;
  
  puVar1 = (ulong *)*param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_40,param_2,"RefCell",7);
  if (*puVar1 < 0x7fffffffffffffff) {
    local_30 = puVar1 + 1;
    *puVar1 = *puVar1 + 1;
                    /* try { // try from 0057633c to 0057635b has its CatchHandler @ 005763cc */
    local_28 = puVar1;
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (auStack_40,"value",5,&local_30,&PTR_FUN_00ad19b8);
    *local_28 = *local_28 - 1;
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_40);
    return;
  }
  local_30 = (ulong *)0x2c4ab7;
  local_28 = (ulong *)0x15;
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_40,"value",5,&local_30,&DAT_00ad1998);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_40);
  return;
}


// ===== 005763e0  FUN_005763e0 =====

void FUN_005763e0(undefined8 *param_1,undefined8 param_2)

{
  long *local_18;
  
  local_18 = (long *)*param_1;
  if (*local_18 != 0) {
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00ad1900);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 00576438  FUN_00576438 =====

void FUN_00576438(undefined8 *param_1,undefined8 param_2)

{
  long *local_18;
  
  local_18 = (long *)*param_1;
  if (*local_18 != -1) {
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00ad1920);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 00576494  FUN_00576494 =====

void FUN_00576494(undefined8 *param_1,undefined8 param_2)

{
  char *local_18;
  
  local_18 = (char *)*param_1 + 1;
  if (*(char *)*param_1 == '\x01') {
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00ad1940);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 005764f0  FUN_005764f0 =====

void FUN_005764f0(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_40 [16];
  long local_18;
  
  lVar1 = *(long *)(*param_1 + 8);
  lVar2 = *(long *)(*param_1 + 0x10);
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_40,param_2);
  lVar3 = local_18;
  for (; local_18 = lVar1, lVar2 != 0; lVar2 = lVar2 + -1) {
    lVar1 = local_18 + 1;
    <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
              (auStack_40,&local_18,&DAT_00ad1118);
    lVar3 = local_18;
  }
  local_18 = lVar3;
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 00576560  FUN_00576560 =====

void FUN_00576560(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt(*(long *)*param_1 + 0x10,((long *)*param_1)[1],param_2);
  return;
}


// ===== 00576578  FUN_00576578 =====

void FUN_00576578(undefined8 *param_1)

{
  <std::path::PathBuf_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 00576580  FUN_00576580 =====

void FUN_00576580(long *param_1,undefined8 param_2)

{
  long *local_18;
  
  if (*param_1 != 0) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field1_finish
              (param_2,&DAT_002a1760,8,"layout",6,&local_18,&DAT_00ad1960);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_0029fec0,0x10);
  return;
}


// ===== 005765e4  <rusqlite::raw_statement::RawStatement_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::raw_statement::RawStatement as core::ops::drop::Drop>::drop */

void __rustcall <rusqlite::raw_statement::RawStatement_as_core::ops::drop::Drop>::drop(long param_1)

{
  sqlite3_finalize(*(undefined8 *)(param_1 + 0x30));
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}


// ===== 0057660c  <&str_as_rusqlite::bind::BindIndex>::idx =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&str as rusqlite::bind::BindIndex>::idx */

void __rustcall
<&str_as_rusqlite::bind::BindIndex>::idx(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  char cVar1;
  size_t __n;
  long lVar2;
  void *__s1;
  ulong __n_00;
  ushort uVar3;
  undefined6 uVar4;
  int iVar5;
  undefined1 *__dest;
  void *__s2;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long *plVar14;
  long local_e0;
  long local_d8;
  char local_d0;
  undefined7 uStack_cf;
  undefined7 uStack_c7;
  undefined1 local_c0;
  undefined7 uStack_bf;
  ulong uStack_b8;
  undefined7 uStack_a0;
  ulong uStack_99;
  long local_90;
  char cStack_88;
  undefined6 uStack_87;
  undefined1 uStack_81;
  undefined1 uStack_80;
  undefined6 uStack_7f;
  undefined1 uStack_79;
  undefined1 uStack_78;
  undefined6 uStack_77;
  undefined1 uStack_71;
  ulong uStack_70;
  
  if (*(long *)(param_3 + 8) != 0) {
    core::cell::panic_already_borrowed(&PTR_s__root__cargo_registry_src_index__00ad1730);
                    /* catch() { ... } // from try @ 0057681c with catch @ 005768c8 */
    *(long *)(local_e0 + 8) = *(long *)(local_e0 + 8) + 1;
                    /* WARNING: Subroutine does not return */
    FUN_00ab2530();
  }
  __s1 = (void *)*param_2;
  __n_00 = param_2[1];
  lVar11 = *(long *)(param_3 + 0x10);
  *(undefined8 *)(param_3 + 8) = 0xffffffffffffffff;
  if (lVar11 != 0) {
    local_d8 = *(long *)(param_3 + 0x18);
    do {
      uVar3 = *(ushort *)(lVar11 + 0x1c2);
      plVar14 = (long *)(lVar11 + 0x160);
      puVar9 = (undefined8 *)(lVar11 + 0x10);
      uVar13 = 0xffffffffffffffff;
      lVar8 = (ulong)uVar3 << 5;
      lVar10 = lVar11;
      do {
        uVar7 = (ulong)uVar3;
        if (lVar8 == 0) goto LAB_005766ec;
        uVar7 = *(ulong *)(lVar10 + 0x18);
        if (uVar7 < 0x11) {
          __s2 = (void *)((long)puVar9 + -0xf);
        }
        else {
          uVar7 = puVar9[-1];
          __s2 = (void *)*puVar9;
        }
        uVar6 = uVar7 - 1;
        if (uVar7 == 0) {
                    /* try { // try from 005768a0 to 005768b7 has its CatchHandler @ 005768dc */
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (0,uVar6,0,&PTR_s__root__cargo_registry_src_index__00ad1a88);
        }
        lVar10 = lVar10 + 0x20;
        __n = __n_00;
        if (uVar6 <= __n_00) {
          __n = uVar6;
        }
        iVar5 = memcmp(__s1,__s2,__n);
        plVar14 = plVar14 + 1;
        uVar13 = uVar13 + 1;
        puVar9 = puVar9 + 4;
        lVar8 = lVar8 + -0x20;
        lVar2 = __n_00 - uVar6;
        if (iVar5 != 0) {
          lVar2 = (long)iVar5;
        }
        cVar1 = 0 < lVar2;
        if (lVar2 < 0) {
          cVar1 = -1;
        }
      } while (cVar1 == '\x01');
      uVar7 = uVar13;
      if (cVar1 == '\0') {
        lVar10 = *plVar14;
        lVar11 = 0;
        goto LAB_00576714;
      }
LAB_005766ec:
      if (local_d8 == 0) break;
      local_d8 = local_d8 + -1;
      lVar11 = *(long *)(lVar11 + uVar7 * 8 + 0x1c8);
    } while( true );
  }
                    /* try { // try from 00576728 to 00576737 has its CatchHandler @ 005768dc */
  FUN_00575a34(&local_90,__s1,__n_00);
  uVar4 = uStack_77;
  local_c0 = uStack_78;
  if (local_90 == 1) {
    if (CONCAT17(uStack_81,CONCAT61(uStack_87,cStack_88)) != 0) {
      free((void *)CONCAT17(uStack_79,CONCAT61(uStack_7f,uStack_80)));
    }
  }
  else {
    uStack_c7 = CONCAT16(uStack_79,uStack_7f);
    uStack_cf = CONCAT16(uStack_81,uStack_87);
    uVar12 = CONCAT17(uStack_71,CONCAT61(uStack_77,uStack_78));
    uStack_99 = uStack_70;
    uStack_a0 = (undefined7)((ulong)uVar12 >> 8);
    if (cStack_88 != '\x02') {
      local_d0 = cStack_88;
      cStack_88 = (char)uStack_7f;
      uStack_87 = (undefined6)((uint7)uStack_c7 >> 8);
      uStack_79 = (undefined1)uStack_70;
      uStack_78 = (undefined1)(uStack_70 >> 8);
      uStack_77 = (undefined6)(uStack_70 >> 0x10);
      uStack_80 = (undefined1)uVar4;
      uStack_7f = (undefined6)((ulong)uVar12 >> 0x10);
      uStack_b8 = uStack_70;
      uStack_bf = (undefined7)(CONCAT62(uStack_7f,CONCAT11(uStack_80,local_c0)) >> 8);
      if (uStack_70 < 0x11) {
        iVar5 = sqlite3_bind_parameter_index(*(undefined8 *)(param_3 + 0x38),(ulong)&local_d0 | 1);
      }
      else {
        iVar5 = sqlite3_bind_parameter_index
                          (*(undefined8 *)(param_3 + 0x38),CONCAT71(uStack_bf,local_c0));
      }
      if (iVar5 != 0) {
        local_90 = CONCAT71(uStack_cf,local_d0);
        lVar10 = (long)iVar5;
        uStack_87 = (undefined6)uStack_c7;
        uStack_81 = (undefined1)((uint7)uStack_c7 >> 0x30);
        uStack_78 = (undefined1)uStack_b8;
        uStack_77 = (undefined6)(uStack_b8 >> 8);
        uStack_71 = (undefined1)(uStack_b8 >> 0x38);
        uStack_7f = (undefined6)uStack_bf;
        uStack_79 = (undefined1)((uint7)uStack_bf >> 0x30);
                    /* try { // try from 0057681c to 0057682b has its CatchHandler @ 005768c8 */
        FUN_00573840((long *)(param_3 + 0x10),&local_90,lVar10);
        lVar11 = *(long *)(param_3 + 8) + 1;
LAB_00576714:
        *(long *)(param_3 + 8) = lVar11;
        *param_1 = 0xffffffffffffffff;
        param_1[1] = lVar10;
        return;
      }
      if (0x10 < uStack_70) {
        free((void *)CONCAT71(uStack_bf,local_c0));
      }
    }
  }
  *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + 1;
  if (-1 < (long)__n_00) {
    if (__n_00 == 0) {
      __dest = &DAT_00000001;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar12 = 1;
      __dest = (undefined1 *)FUN_004b25a4(__n_00,1);
      if (__dest == (undefined1 *)0x0) goto LAB_00576794;
      memcpy(__dest,__s1,__n_00);
    }
    *param_1 = 0x8000000000000006;
    param_1[1] = __n_00;
    param_1[2] = __dest;
    param_1[3] = __n_00;
    return;
  }
  uVar12 = 0;
LAB_00576794:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar12,__n_00);
}


// ===== 005768f0  <&str_as_rusqlite::util::Name>::as_cstr =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&str as rusqlite::util::Name>::as_cstr */

void __rustcall <&str_as_rusqlite::util::Name>::as_cstr(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_00575a34(local_48,*param_2,param_2[1]);
  uVar1 = 0x8000000000000005;
  if (local_48[0] == 0) {
    uVar1 = 0xffffffffffffffff;
  }
  param_1[2] = uStack_38;
  param_1[1] = local_40;
  param_1[4] = uStack_28;
  param_1[3] = uStack_30;
  *param_1 = uVar1;
  return;
}


// ===== 00576948  FUN_00576948 =====

void FUN_00576948(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,"PoisonError",0xb);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 00576980  FUN_00576980 =====

void FUN_00576980(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  char cVar2;
  undefined1 auVar3 [16];
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong __n;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  
  uVar7 = param_2[2];
  uVar1 = param_2[3];
  uVar6 = 0;
  if ((uVar7 <= uVar1) && (uVar8 = param_2[1], uVar1 <= uVar8)) {
    __n = (ulong)*(byte *)(param_2 + 5);
    lVar9 = *param_2;
    cVar2 = *(char *)((long)param_2 + __n + 0x1f);
    if (__n < 5) {
      do {
        if (uVar1 - uVar7 < 0x10) {
          uVar5 = 0;
          if (uVar1 == uVar7) goto LAB_00576b4c;
          while (*(char *)(lVar9 + uVar7 + uVar5) != cVar2) {
            uVar5 = uVar5 + 1;
            if (uVar1 - uVar7 == uVar5) goto LAB_00576b4c;
          }
        }
        else {
          auVar10 = core::slice::memchr::memchr_aligned(cVar2,lVar9 + uVar7,uVar1 - uVar7);
          uVar5 = auVar10._8_8_;
          if (auVar10._0_8_ != 1) goto LAB_00576b4c;
        }
        uVar7 = uVar7 + uVar5 + 1;
        param_2[2] = uVar7;
        if (((__n <= uVar7) && (uVar7 <= uVar8)) &&
           (iVar4 = memcmp((void *)(lVar9 + (uVar7 - __n)),param_2 + 4,__n), iVar4 == 0)) {
          uVar6 = 1;
          param_1[1] = uVar7 - __n;
          param_1[2] = uVar7;
          goto LAB_00576b54;
        }
      } while (uVar7 <= uVar1);
      uVar6 = 0;
    }
    else {
      do {
        if (uVar1 - uVar7 < 0x10) {
          uVar5 = 0;
          if (uVar1 == uVar7) {
            auVar10 = ZEXT816(0);
          }
          else {
            do {
              if (*(char *)(lVar9 + uVar7 + uVar5) == cVar2) {
                auVar10._8_8_ = uVar5;
                auVar10._0_8_ = 1;
                goto LAB_00576b10;
              }
              uVar5 = uVar5 + 1;
            } while (uVar1 - uVar7 != uVar5);
            auVar3._8_8_ = 0;
            auVar3._0_8_ = uVar1 - uVar7;
            auVar10 = auVar3 << 0x40;
          }
        }
        else {
          auVar10 = core::slice::memchr::memchr_aligned(cVar2,lVar9 + uVar7,uVar1 - uVar7);
        }
LAB_00576b10:
        if (auVar10._0_8_ != 1) goto LAB_00576b4c;
        uVar7 = uVar7 + auVar10._8_8_ + 1;
        param_2[2] = uVar7;
        if ((__n <= uVar7) && (uVar7 <= uVar8)) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (0,__n,4,&PTR_s__nix_store_8006w282fgsx3273c878b_00ad1980);
        }
        uVar6 = 0;
      } while (uVar7 <= uVar1);
    }
  }
LAB_00576b54:
  *param_1 = uVar6;
  return;
LAB_00576b4c:
  uVar6 = 0;
  param_2[2] = uVar1;
  goto LAB_00576b54;
}


// ===== 00576b74  FUN_00576b74 =====

void FUN_00576b74(undefined8 *param_1)

{
  FUN_005744c0(*param_1);
  return;
}


// ===== 00576b7c  <hashbrown[a9c23af768076ed2]::raw::RawTable<core[bcece726f298455b]::ptr::non_null::NonNull<hashlink[3521ca06be817345]::linked_hash_map::Node<alloc[c1f8e832b0d782c7]::sync::Arc<str>,rusqlite[c77fb4a03f5e0ba7]::raw_statement::RawStatement>>>>::reserve_rehash::<<hashlink[3521ca06be817345]::linked_hash_map::RawVacantEntryMut<alloc[c1f8e832b0d782c7]::sync::Arc<str>,rusqlite[c77fb4a03f5e0ba7]::raw_statement::RawStatement,hashlink[3521ca06be817345]::DefaultHashBuilder>>::insert_with_hasher<<hashlink[3521ca06be817345]::linked_hash_map::RawVacantEntryMut<alloc[c1f8e832b0d782c7]::sync::Arc<str>,rusqlite[c77fb4a03f5e0ba7]::raw_statement::RawStatement,hashlink[3521ca06be817345]::DefaultHashBuilder>>::insert_hashed_nocheck::{closure#0}>::{closure#0}> =====

/* <hashbrown[a9c23af768076ed2]::raw::RawTable<core[bcece726f298455b]::ptr::non_null::NonNull<hashlink[3521ca06be817345]::linked_hash_map::Node<alloc[c1f8e832b0d782c7]::sync::Arc<str>,
   rusqlite[c77fb4a03f5e0ba7]::raw_statement::RawStatement>>>>::reserve_rehash::<<hashlink[3521ca06be817345]::linked_hash_map::RawVacantEntryMut<alloc[c1f8e832b0d782c7]::sync::Arc<str>,
   rusqlite[c77fb4a03f5e0ba7]::raw_statement::RawStatement,
   hashlink[3521ca06be817345]::DefaultHashBuilder>>::insert_with_hasher<<hashlink[3521ca06be817345]::linked_hash_map::RawVacantEntryMut<alloc[c1f8e832b0d782c7]::sync::Arc<str>,
   rusqlite[c77fb4a03f5e0ba7]::raw_statement::RawStatement,
   hashlink[3521ca06be817345]::DefaultHashBuilder>>::insert_hashed_nocheck::{closure#0}>::{closure#0}>
    */

undefined1  [16]
<hashbrown[a9c23af768076ed2]::raw::RawTable<core[bcece726f298455b]::ptr::non_null::NonNull<hashlink[3521ca06be817345]::linked_hash_map::Node<alloc[c1f8e832b0d782c7]::sync::Arc<str>,rusqlite[c77fb4a03f5e0ba7]::raw_statement::RawStatement>>>>
::reserve_rehash::
<<hashlink[3521ca06be817345]::linked_hash_map::RawVacantEntryMut<alloc[c1f8e832b0d782c7]::sync::Arc<str>,rusqlite[c77fb4a03f5e0ba7]::raw_statement::RawStatement,hashlink[3521ca06be817345]::DefaultHashBuilder>>::insert_with_hasher<<hashlink[3521ca06be817345]::linked_hash_map::RawVacantEntryMut<alloc[c1f8e832b0d782c7]::sync::Arc<str>,rusqlite[c77fb4a03f5e0ba7]::raw_statement::RawStatement,hashlink[3521ca06be817345]::DefaultHashBuilder>>::insert_hashed_nocheck::_closure_0_>::_closure_0_>
          (long *param_1,ulong param_2,undefined8 *param_3,uint param_4)

{
  long lVar1;
  char cVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  byte bVar7;
  undefined *puVar8;
  bool bVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  undefined8 *unaff_x20;
  ulong *puVar19;
  long lVar20;
  ulong *puVar21;
  ulong uVar22;
  ulong uVar23;
  undefined1 auVar24 [16];
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  ulong local_88;
  ulong uStack_80;
  ulong local_78;
  ulong uStack_70;
  char local_68;
  
  uVar12 = param_1[3] + param_2;
  if (CARRY8(param_1[3],param_2)) {
    if ((param_4 & 1) != 0) goto LAB_0057716c;
  }
  else {
    uVar18 = param_1[1];
    uVar22 = uVar18 + 1;
    uVar15 = uVar22 >> 3;
    if (7 < uVar18) {
      uVar18 = uVar15 * 7;
    }
    if (uVar12 <= uVar18 >> 1) {
      puVar21 = (ulong *)*param_1;
      if (uVar22 == 0) {
LAB_005770a0:
        memmove(puVar21 + 1,puVar21,uVar22);
        unaff_x20 = (undefined8 *)param_1[1];
        puVar21 = (ulong *)PTR_GLOBAL_SEED_STORAGE_00b00d78;
      }
      else {
        puVar19 = puVar21;
        if ((uVar22 & 7) != 0) {
          uVar15 = uVar15 + 1;
        }
        do {
          uVar15 = uVar15 - 1;
          uVar12 = NEON_cmlt(*puVar19,0,1);
          *puVar19 = uVar12 | 0x8080808080808080;
          puVar19 = puVar19 + 1;
        } while (uVar15 != 0);
        if (uVar22 < 8) goto LAB_005770a0;
        *(ulong *)((long)puVar21 + uVar22) = *puVar21;
        unaff_x20 = (undefined8 *)param_1[1];
        puVar21 = (ulong *)PTR_GLOBAL_SEED_STORAGE_00b00d78;
      }
      PTR_GLOBAL_SEED_STORAGE_00b00d78 = (undefined *)puVar21;
      if (unaff_x20 != (undefined8 *)0xffffffffffffffff) {
        puVar19 = (ulong *)*param_3;
        puVar14 = (undefined8 *)0x0;
LAB_00576de8:
        lVar10 = *param_1;
        if (*(char *)(lVar10 + (long)puVar14) == -0x80) {
          uVar12 = ~(ulong)puVar14;
          lVar20 = lVar10;
          do {
            uStack_80 = puVar21[1];
            local_88 = *puVar21;
            uStack_70 = puVar21[3];
            local_78 = puVar21[2];
            local_90 = *puVar19;
            local_a0 = 0;
            uStack_98 = 0;
            local_68 = '\0';
                    /* try { // try from 00576ca0 to 00576cab has its CatchHandler @ 005771a4 */
            FUN_005758b8(*(long *)(lVar20 + (long)puVar14 * -8 + -8) + 0x10,&local_a0);
            if (local_68 == '\0') {
              puVar13 = (undefined8 *)*param_1;
              uVar22 = param_1[1];
              uVar15 = uVar22 & local_90;
              uVar18 = NEON_cmlt(*(undefined8 *)((long)puVar13 + uVar15),0,1);
              if (uVar18 != 0) goto LAB_00576ce8;
LAB_00576d80:
              lVar20 = 8;
              uVar23 = uVar22 & local_90;
              do {
                uVar23 = uVar23 + lVar20;
                lVar20 = lVar20 + 8;
                uVar23 = uVar23 & uVar22;
                uVar18 = NEON_cmlt(*(undefined8 *)((long)puVar13 + uVar23),0,1);
              } while (uVar18 == 0);
            }
            else {
              auVar3._8_8_ = 0;
              auVar3._0_8_ = local_88 ^ uStack_98;
              auVar5._8_8_ = 0;
              auVar5._0_8_ = local_90 ^ local_a0;
              local_90 = SUB168(auVar3 * auVar5,8) ^ (local_88 ^ uStack_98) * (local_90 ^ local_a0);
              puVar13 = (undefined8 *)*param_1;
              uVar22 = param_1[1];
              uVar15 = uVar22 & local_90;
              uVar18 = NEON_cmlt(*(undefined8 *)((long)puVar13 + uVar15),0,1);
              if (uVar18 == 0) goto LAB_00576d80;
LAB_00576ce8:
              uVar23 = uVar22 & local_90;
            }
            uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
            uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
            uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
            uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
            uVar18 = uVar23 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3) & uVar22;
            if (-1 < *(char *)((long)puVar13 + uVar18)) {
              uVar18 = NEON_cmlt(*puVar13,0,1);
              uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
              uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
              uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
              uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
              uVar18 = (ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3;
            }
            bVar7 = (byte)(local_90 >> 0x38);
            if (((uVar18 - uVar15 ^ (long)puVar14 - uVar15) & uVar22) < 8) {
              *(byte *)((long)puVar13 + (long)puVar14) = bVar7 >> 1;
              *(byte *)(*param_1 + (uVar22 & (ulong)(puVar14 + -1)) + 8) = bVar7 >> 1;
              break;
            }
            cVar2 = *(char *)((long)puVar13 + uVar18);
            *(byte *)((long)puVar13 + uVar18) = bVar7 >> 1;
            uVar15 = ~uVar18;
            *(byte *)(*param_1 + (uVar18 - 8 & uVar22) + 8) = bVar7 >> 1;
            if (cVar2 == -1) goto LAB_00576e08;
            uVar11 = *(undefined8 *)(lVar10 + uVar12 * 8);
            *(undefined8 *)(lVar10 + uVar12 * 8) = puVar13[uVar15];
            puVar13[uVar15] = uVar11;
            lVar20 = *param_1;
          } while( true );
        }
        goto LAB_00576ddc;
      }
      uVar12 = 0;
      goto LAB_005770d0;
    }
    if (uVar12 < uVar18 + 1) {
      uVar12 = uVar18 + 1;
    }
    if (uVar12 < 0xf) {
      uVar22 = 4;
      if (3 < uVar12) {
        uVar22 = (uVar12 & 8) + 8;
      }
      uVar15 = uVar22 * 8;
      bVar9 = CARRY8(uVar22 + 8,uVar15);
      unaff_x20 = (undefined8 *)(uVar22 + 8 + uVar15);
joined_r0x00576ea8:
      if ((!bVar9) && (unaff_x20 < (undefined8 *)0x7ffffffffffffff9)) {
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        lVar10 = FUN_004b25a4(unaff_x20,8);
        if (lVar10 == 0) {
          if (param_4 != 0) {
                    /* WARNING: Subroutine does not return */
            alloc::alloc::handle_alloc_error(8,unaff_x20);
          }
          uVar11 = 8;
          goto LAB_005770e0;
        }
        unaff_x20 = (undefined8 *)(lVar10 + uVar15);
        memset(unaff_x20,0xff,uVar22 + 8);
        puVar8 = PTR_GLOBAL_SEED_STORAGE_00b00d78;
        uVar15 = uVar22 - 1;
        lVar10 = param_1[3];
        uVar12 = uVar15;
        if (8 < uVar22) {
          uVar12 = (uVar22 >> 3) * 7;
        }
        if (lVar10 == 0) {
          puVar14 = (undefined8 *)*param_1;
          lVar10 = param_1[1];
          *param_1 = (long)unaff_x20;
          param_1[1] = uVar15;
          param_1[2] = uVar12;
          param_1[3] = 0;
        }
        else {
          puVar13 = (undefined8 *)*param_1;
          puVar21 = (ulong *)*param_3;
          lVar20 = 0;
          uVar22 = NEON_cmge(*puVar13,0,1);
          uVar22 = uVar22 & 0x8080808080808080;
          puVar14 = puVar13;
          do {
            for (; uVar22 == 0; uVar22 = uVar22 & 0x8080808080808080) {
              puVar13 = puVar13 + 1;
              lVar20 = lVar20 + 8;
              uVar22 = NEON_cmge(*puVar13,0,1);
            }
            uVar18 = (uVar22 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar22 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
            uStack_80 = *(ulong *)(puVar8 + 8);
            local_88 = *(ulong *)puVar8;
            uStack_70 = *(ulong *)(puVar8 + 0x18);
            local_78 = *(ulong *)(puVar8 + 0x10);
            lVar1 = lVar20 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3);
            local_90 = *puVar21;
            local_a0 = 0;
            uStack_98 = 0;
            local_68 = '\0';
                    /* try { // try from 00576f9c to 00576fa7 has its CatchHandler @ 00577190 */
            FUN_005758b8(puVar14[-1 - lVar1] + 0x10,&local_a0);
            if (local_68 == '\0') {
              uVar18 = local_90 & uVar15;
              uVar23 = NEON_cmlt(*(undefined8 *)((long)unaff_x20 + uVar18),0,1);
              uVar16 = local_90;
            }
            else {
              auVar4._8_8_ = 0;
              auVar4._0_8_ = local_88 ^ uStack_98;
              auVar6._8_8_ = 0;
              auVar6._0_8_ = local_90 ^ local_a0;
              uVar16 = SUB168(auVar4 * auVar6,8) ^ (local_88 ^ uStack_98) * (local_90 ^ local_a0);
              uVar18 = uVar16 & uVar15;
              uVar23 = NEON_cmlt(*(undefined8 *)((long)unaff_x20 + uVar18),0,1);
            }
            bVar7 = (byte)(uVar16 >> 0x38);
            if (uVar23 == 0) {
              lVar17 = 8;
              do {
                uVar18 = uVar18 + lVar17;
                lVar17 = lVar17 + 8;
                uVar18 = uVar18 & uVar15;
                uVar23 = NEON_cmlt(*(undefined8 *)((long)unaff_x20 + uVar18),0,1);
              } while (uVar23 == 0);
            }
            uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
            uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
            uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
            uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
            uVar18 = uVar18 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3) & uVar15;
            if (-1 < *(char *)((long)unaff_x20 + uVar18)) {
              uVar18 = NEON_cmlt(*unaff_x20,0,1);
              uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
              uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
              uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
              uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
              uVar18 = (ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3;
            }
            puVar14 = (undefined8 *)*param_1;
            *(byte *)((long)unaff_x20 + uVar18) = bVar7 >> 1;
            lVar10 = lVar10 + -1;
            *(byte *)((long)unaff_x20 + (uVar18 - 8 & uVar15) + 8) = bVar7 >> 1;
            uVar22 = uVar22 - 1 & uVar22;
            unaff_x20[-1 - uVar18] = puVar14[-1 - lVar1];
          } while (lVar10 != 0);
          lVar10 = param_1[1];
          *param_1 = (long)unaff_x20;
          param_1[1] = uVar15;
          param_1[2] = uVar12 - param_1[3];
          param_1[3] = param_1[3];
        }
        if (lVar10 != 0) {
          free((void *)((long)puVar14 - (lVar10 * 8 + 8)));
        }
        goto LAB_005770dc;
      }
    }
    else if ((uVar12 >> 0x3d == 0) &&
            (uVar12 = 0xffffffffffffffff >> (LZCOUNT((uVar12 * 8) / 7 - 1) & 0x3fU),
            uVar12 < 0x1fffffffffffffff)) {
      uVar22 = uVar12 + 1;
      uVar15 = uVar22 * 8;
      bVar9 = CARRY8(uVar12 + 9,uVar15);
      unaff_x20 = (undefined8 *)(uVar12 + 9 + uVar15);
      goto joined_r0x00576ea8;
    }
    if (param_4 != 0) {
LAB_0057716c:
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                ("Hash table capacity overflow",0x39,
                 &PTR_s__root__cargo_registry_src_index__00ad19d8);
    }
  }
  uVar11 = 0;
  goto LAB_005770e0;
LAB_00576e08:
  uVar22 = param_1[1];
  *(undefined1 *)(*param_1 + (long)puVar14) = 0xff;
  *(undefined1 *)(*param_1 + (uVar22 & (ulong)(puVar14 + -1)) + 8) = 0xff;
  puVar13[uVar15] = *(undefined8 *)(lVar10 + uVar12 * 8);
LAB_00576ddc:
  bVar9 = puVar14 == unaff_x20;
  puVar14 = (undefined8 *)((long)puVar14 + 1);
  if (bVar9) goto LAB_00576e30;
  goto LAB_00576de8;
LAB_00576e30:
  uVar12 = param_1[1];
  if (7 < uVar12) {
    uVar12 = (uVar12 + 1 >> 3) * 7;
  }
LAB_005770d0:
  param_1[2] = uVar12 - param_1[3];
LAB_005770dc:
  uVar11 = 0xffffffffffffffff;
LAB_005770e0:
  auVar24._8_8_ = unaff_x20;
  auVar24._0_8_ = uVar11;
  return auVar24;
}


// ===== 005771bc  FUN_005771bc =====

void FUN_005771bc(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  if (param_1[1] != 0) {
    free((void *)(*param_1 - ((param_4 + param_3 + param_3 * param_1[1]) - 1U & -param_4)));
    return;
  }
  return;
}


// ===== 005771f4  FUN_005771f4 =====

void FUN_005771f4(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long local_60 [8];
  
                    /* try { // try from 00577208 to 00577227 has its CatchHandler @ 00577268 */
  <rusqlite::inner_connection::rusqlite::inner_connection::InnerConnection>::close
            (local_60,param_1 + 8);
  if (local_60[0] != -1) {
    FUN_005773b0(local_60);
  }
  plVar3 = *(long **)(param_1 + 8);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<*mut_libsqlite3_sys::bindings::sqlite3>>>
    ::drop_slow(param_1 + 8);
    return;
  }
  return;
}


// ===== 0057729c  FUN_0057729c =====

void FUN_0057729c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    free((void *)(*(long *)(param_1 + 0x18) -
                 ((*(long *)(param_1 + 0x10) +
                  *(long *)(param_1 + 8) + *(long *)(param_1 + 8) * *(long *)(param_1 + 0x20)) - 1U
                 & -*(long *)(param_1 + 0x10))));
    return;
  }
  return;
}


// ===== 005772d4  FUN_005772d4 =====

void FUN_005772d4(long *param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  plVar1 = (long *)*param_1;
  pcVar2 = (code *)param_1[1];
  if ((pcVar2 != (code *)0x0) && (lVar3 = plVar1[1], lVar3 != -1)) {
    lVar6 = param_1[2];
    lVar5 = 0;
    lVar7 = -lVar6;
    do {
      if (*(char *)(*plVar1 + lVar5) == -0x80) {
        uVar4 = plVar1[1];
        *(undefined1 *)(*plVar1 + lVar5) = 0xff;
        *(undefined1 *)(*plVar1 + (uVar4 & lVar5 - 8U) + 8) = 0xff;
        (*pcVar2)(*plVar1 + lVar7);
        plVar1[3] = plVar1[3] + -1;
      }
      lVar5 = lVar5 + 1;
      lVar7 = lVar7 - lVar6;
    } while (lVar3 + 1 != lVar5);
  }
  uVar4 = plVar1[1];
  if (7 < uVar4) {
    uVar4 = (uVar4 + 1 >> 3) * 7;
  }
  plVar1[2] = uVar4 - plVar1[3];
  return;
}


// ===== 005773b0  FUN_005773b0 =====

void FUN_005773b0(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  void *__ptr;
  
  uVar1 = *param_1;
  uVar2 = uVar1 ^ 0x8000000000000000;
  if (-1 < (long)uVar1) {
    uVar2 = 0x14;
  }
  if ((long)uVar2 < 7) {
    if ((long)uVar2 < 5) {
      if (uVar2 != 0) {
        if (uVar2 != 2) {
          return;
        }
        __ptr = (void *)param_1[1];
        puVar3 = (undefined8 *)param_1[2];
        if ((code *)*puVar3 != (code *)0x0) {
                    /* try { // try from 00577450 to 00577457 has its CatchHandler @ 005774f0 */
          (*(code *)*puVar3)(__ptr);
        }
        goto LAB_005774c4;
      }
      if (param_1[1] == 0xffffffffffffffff) {
        return;
      }
      if (param_1[1] == 0) {
        return;
      }
      goto LAB_00577488;
    }
    if ((uVar2 != 5) && (uVar2 != 6)) {
      return;
    }
  }
  else if ((long)uVar2 < 0xd) {
    if ((uVar2 != 7) && (uVar2 != 0xc)) {
      return;
    }
  }
  else if (uVar2 != 0xd) {
    if (uVar2 != 0xf) {
      if (uVar2 != 0x14) {
        return;
      }
      if (uVar1 != 0) {
        free((void *)param_1[1]);
      }
      if (param_1[3] == 0) {
        return;
      }
      free((void *)param_1[4]);
      return;
    }
    __ptr = (void *)param_1[1];
    puVar3 = (undefined8 *)param_1[2];
    if ((code *)*puVar3 != (code *)0x0) {
                    /* try { // try from 005774bc to 005774c3 has its CatchHandler @ 005774ec */
      (*(code *)*puVar3)(__ptr);
    }
LAB_005774c4:
    if (puVar3[1] == 0) {
      return;
    }
    free(__ptr);
    return;
  }
  if (param_1[1] == 0) {
    return;
  }
LAB_00577488:
  free((void *)param_1[2]);
  return;
}


// ===== 00577514  FUN_00577514 =====

bool FUN_00577514(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  byte bVar2;
  char cVar3;
  void *__s1;
  size_t __n;
  void *__s1_00;
  size_t __n_00;
  void *__s2;
  size_t sVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  byte local_d0;
  char local_cf;
  void *local_c8;
  size_t sStack_c0;
  void *local_b8;
  size_t sStack_b0;
  byte local_98;
  char local_97;
  void *local_90;
  size_t sStack_88;
  void *local_80;
  size_t sStack_78;
  
  uStack_148 = param_1[1];
  local_150 = *param_1;
  uStack_138 = param_1[3];
  uStack_140 = param_1[2];
  uStack_128 = param_1[5];
  local_130 = param_1[4];
  uStack_118 = param_1[7];
  uStack_120 = param_1[6];
  uStack_108 = param_2[1];
  local_110 = *param_2;
  uStack_f8 = param_2[3];
  uStack_100 = param_2[2];
  uStack_e8 = param_2[5];
  local_f0 = param_2[4];
  uStack_d8 = param_2[7];
  uStack_e0 = param_2[6];
  do {
    do {
      while( true ) {
        <std::path::Components_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back
                  (&local_d0,&local_150);
        __n_00 = sStack_b0;
        __s1_00 = local_b8;
        __n = sStack_c0;
        __s1 = local_c8;
        cVar3 = local_cf;
        bVar2 = local_d0;
        uVar7 = (uint)local_d0;
        if (uVar7 == 0xff) {
          <std::path::Components_as_core::iter::traits::double_ended::DoubleEndedIterator>::
          next_back(&local_98,&local_110);
          return local_98 == 0xff;
        }
        <std::path::Components_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back
                  (&local_98,&local_110);
        sVar4 = sStack_78;
        __s2 = local_80;
        if (local_98 == 0xff) {
          return false;
        }
        lVar6 = (ulong)uVar7 - 5;
        if (bVar2 < 6) {
          lVar6 = 0;
        }
        lVar1 = 0;
        if (5 < local_98) {
          lVar1 = (ulong)local_98 - 5;
        }
        if (lVar6 != lVar1) {
          return false;
        }
        if (lVar6 != 4) break;
LAB_00577644:
        if (__n != sStack_88) {
          return false;
        }
        iVar5 = memcmp(__s1,local_90,__n);
joined_r0x0057763c:
        if (iVar5 != 0) {
          return false;
        }
      }
    } while ((lVar6 != 0) || (5 < local_98));
    if (bVar2 != local_98) {
      return false;
    }
    if (2 < bVar2) {
      if (bVar2 == 3) goto LAB_00577644;
      if (bVar2 != 4) goto LAB_005775f0;
LAB_0057760c:
      if (__n != sStack_88) {
        return false;
      }
      iVar5 = memcmp(__s1,local_90,__n);
      if (iVar5 != 0) {
        return false;
      }
      if (__n_00 != sVar4) {
        return false;
      }
      iVar5 = memcmp(__s1_00,__s2,__n_00);
      goto joined_r0x0057763c;
    }
    if (bVar2 == 0) goto LAB_00577644;
    if (bVar2 == 1) goto LAB_0057760c;
LAB_005775f0:
    if (cVar3 != local_97) {
      return false;
    }
  } while( true );
}


// ===== 0057769c  rusqlite::auto_extension::init_auto_extension =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* rusqlite::auto_extension::init_auto_extension */

undefined4 __rustcall
rusqlite::auto_extension::init_auto_extension(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined4 uVar1;
  long local_130;
  undefined8 *local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  long local_f0;
  undefined8 *puStack_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined7 uStack_d7;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  long local_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_48;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puStack_e8 = (undefined8 *)FUN_004b25a4(0x20,8);
  if (puStack_e8 != (undefined8 *)0x0) {
    puStack_e8[2] = 0;
    puStack_e8[3] = 0;
    local_f0 = 0;
    local_d8 = 0;
    puStack_e8[1] = 1;
    *puStack_e8 = 1;
    local_e0 = param_1;
                    /* try { // try from 005776f0 to 005776f3 has its CatchHandler @ 00577800 */
    local_68 = foldhash::seed::gen_per_hasher_seed();
    if (PTR_GLOBAL_SEED_STORAGE_00b00d78[0x20] != '\x02') {
                    /* try { // try from 005777e0 to 005777e3 has its CatchHandler @ 00577800 */
      <foldhash::seed::global::foldhash::seed::global::GlobalSeed>::init_slow();
    }
    uStack_98 = CONCAT71(uStack_d7,local_d8);
    local_60 = 0;
    uStack_58 = 0;
    local_90 = 0;
    puStack_a8 = puStack_e8;
    local_b0 = local_f0;
    uStack_a0 = local_e0;
    local_50 = 0x10;
    uStack_80 = _UNK_00ad19f8;
    local_88 = PTR_DAT_00ad19f0;
    uStack_70 = _UNK_00ad1a08;
    local_78 = _DAT_00ad1a00;
    local_48 = 0;
                    /* try { // try from 00577748 to 00577753 has its CatchHandler @ 00577818 */
    (*param_3)(&local_f0,&local_b0);
    local_118 = CONCAT71(uStack_d7,local_d8);
    if (local_f0 == -1) {
      uVar1 = 0;
    }
    else {
      uStack_120 = local_e0;
      local_128 = puStack_e8;
      local_130 = local_f0;
      uStack_110 = uStack_d0;
      uStack_100 = uStack_c0;
      local_108 = local_c8;
      local_f8 = local_b8;
                    /* try { // try from 00577794 to 0057779f has its CatchHandler @ 005777e8 */
      uVar1 = error::to_sqlite_error(&local_130,param_2);
      FUN_005773b0(&local_130);
    }
    return uVar1;
  }
                    /* try { // try from 005777d0 to 005777db has its CatchHandler @ 00577818 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x20);
}


// ===== 00577878  rusqlite::auto_extension::reset_auto_extension =====

/* WARNING: Unknown calling convention: __rustcall */
/* rusqlite::auto_extension::reset_auto_extension */

void __rustcall rusqlite::auto_extension::reset_auto_extension(void)

{
  (*(code *)PTR_sqlite3_reset_auto_extension_00b029f8)();
  return;
}


// ===== 0057787c  rusqlite::auto_extension::cancel_auto_extension =====

/* WARNING: Unknown calling convention: __rustcall */
/* rusqlite::auto_extension::cancel_auto_extension */

bool __rustcall rusqlite::auto_extension::cancel_auto_extension(void)

{
  int iVar1;
  
  iVar1 = sqlite3_cancel_auto_extension();
  return iVar1 == 1;
}


// ===== 00577898  rusqlite::auto_extension::register_auto_extension =====

/* WARNING: Unknown calling convention: __rustcall */
/* rusqlite::auto_extension::register_auto_extension */

void __rustcall rusqlite::auto_extension::register_auto_extension(undefined8 *param_1)

{
  int iVar1;
  undefined8 local_38 [3];
  
  iVar1 = sqlite3_auto_extension();
  if (iVar1 == 0) {
    *param_1 = 0xffffffffffffffff;
    return;
  }
  local_38[0] = 0xffffffffffffffff;
  error::error_from_sqlite_code(param_1,iVar1,local_38);
  return;
}


// ===== 005778ec  FUN_005778ec =====

void FUN_005778ec(code *param_1,undefined4 param_2)

{
                    /* try { // try from 005778fc to 00577903 has its CatchHandler @ 00577910 */
  (*param_1)(param_2);
  return;
}


// ===== 0057796c  <&core::ffi::c_str::CStr_as_rusqlite::bind::BindIndex>::idx =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&core::ffi::c_str::CStr as rusqlite::bind::BindIndex>::idx */

void __rustcall
<&core::ffi::c_str::CStr_as_rusqlite::bind::BindIndex>::idx
          (undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined1 *__dest;
  undefined8 uVar2;
  long local_58;
  void *local_50;
  size_t sStack_48;
  
  uVar2 = *param_2;
  iVar1 = sqlite3_bind_parameter_index(*(undefined8 *)(param_3 + 0x38),uVar2);
  if (iVar1 == 0) {
    <alloc::ffi::c_str::[D]::core::ffi::c_str::CStr>::to_string_lossy(&local_58,uVar2,param_2[1]);
    if ((long)sStack_48 < 0) {
      uVar2 = 0;
LAB_005779e0:
                    /* try { // try from 005779e0 to 005779eb has its CatchHandler @ 00577a64 */
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar2,sStack_48);
    }
    if (sStack_48 == 0) {
      __dest = &DAT_00000001;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar2 = 1;
      __dest = (undefined1 *)FUN_004b25a4(sStack_48,1);
      if (__dest == (undefined1 *)0x0) goto LAB_005779e0;
      memcpy(__dest,local_50,sStack_48);
    }
    param_1[2] = __dest;
    param_1[3] = sStack_48;
    *param_1 = 0x8000000000000006;
    param_1[1] = sStack_48;
    if (0 < local_58) {
      free(local_50);
      return;
    }
  }
  else {
    *param_1 = 0xffffffffffffffff;
    param_1[1] = (long)iVar1;
  }
  return;
}


// ===== 00577a88  FUN_00577a88 =====

void FUN_00577a88(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00577a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((undefined8 *)*param_1)[1] + 0x18))(*(undefined8 *)*param_1);
  return;
}


// ===== 00577a98  FUN_00577a98 =====

void FUN_00577a98(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00577aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((undefined8 *)*param_1)[1] + 0x20))(*(undefined8 *)*param_1);
  return;
}


// ===== 00577aa8  FUN_00577aa8 =====

void FUN_00577aa8(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  undefined7 uVar6;
  void *pvVar7;
  bool bVar8;
  void *__dest;
  char *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  void *pvVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  void *pvVar16;
  long *plVar17;
  void *pvVar18;
  void *pvVar19;
  ulong uVar20;
  size_t __n;
  char cVar21;
  char cVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  ulong local_c8;
  ulong local_c0;
  undefined1 uStack_b1;
  undefined7 uStack_b0;
  undefined7 uStack_90;
  undefined7 local_78;
  undefined1 uStack_71;
  
  pvVar18 = (void *)*param_2;
  uVar3 = *(ushort *)((long)pvVar18 + 0x1c2);
  if (uVar3 < 0xb) {
    local_c0 = param_2[2];
    uVar15 = local_c0 + 1;
    puVar1 = (undefined8 *)((long)pvVar18 + local_c0 * 0x20);
    if (uVar3 < uVar15) {
      uVar28 = *param_3;
      uVar10 = param_3[3];
      uVar13 = param_3[2];
      puVar1[1] = param_3[1];
      *puVar1 = uVar28;
      puVar1[3] = uVar10;
      puVar1[2] = uVar13;
    }
    else {
      lVar25 = uVar3 - local_c0;
      memmove((void *)((long)pvVar18 + uVar15 * 0x20),puVar1,lVar25 * 0x20);
      uVar28 = *param_3;
      uVar10 = param_3[3];
      uVar13 = param_3[2];
      puVar1[1] = param_3[1];
      *puVar1 = uVar28;
      puVar1[3] = uVar10;
      puVar1[2] = uVar13;
      memmove((void *)((long)pvVar18 + uVar15 * 8 + 0x168),
              (void *)((long)pvVar18 + local_c0 * 8 + 0x168),lVar25 * 8);
    }
    uVar15 = param_2[1];
    *(undefined8 *)((long)pvVar18 + local_c0 * 8 + 0x168) = param_4;
    *(ushort *)((long)pvVar18 + 0x1c2) = uVar3 + 1;
    pvVar19 = pvVar18;
  }
  else {
    local_c0 = param_2[2];
    if (local_c0 < 5) {
      bVar8 = false;
      uVar15 = 4;
    }
    else if (local_c0 == 5) {
      bVar8 = false;
      uVar15 = 5;
    }
    else if (local_c0 == 6) {
      bVar8 = true;
      uVar15 = 5;
      local_c0 = 0;
    }
    else {
      bVar8 = true;
      uVar15 = 6;
      local_c0 = local_c0 - 7;
    }
    local_c8 = param_2[1];
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __dest = (void *)FUN_004b25a4(0x1c8,8);
    if (__dest == (void *)0x0) {
                    /* try { // try from 005782c0 to 005782cb has its CatchHandler @ 00578358 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x1c8);
    }
    *(undefined8 *)((long)__dest + 0x160) = 0;
    pcVar9 = (char *)((long)pvVar18 + uVar15 * 0x20);
    uVar24 = (ulong)*(ushort *)((long)pvVar18 + 0x1c2) + ~uVar15;
    *(short *)((long)__dest + 0x1c2) = (short)uVar24;
    uVar28 = *(undefined8 *)(pcVar9 + 0x10);
    uVar13 = *(undefined8 *)(pcVar9 + 0x18);
    if (0xb < uVar24) {
                    /* try { // try from 005782a4 to 005782bb has its CatchHandler @ 00578360 */
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,uVar24,0xb,&PTR_s__nix_store_8006w282fgsx3273c878b_00ad1aa0);
    }
    uVar10 = *(undefined8 *)((long)pvVar18 + uVar15 * 8 + 0x168);
    cVar22 = *pcVar9;
    memcpy(__dest,(void *)((long)pvVar18 + (uVar15 + 1) * 0x20),uVar24 * 0x20);
    memcpy((void *)((long)__dest + 0x168),(void *)((long)pvVar18 + (uVar15 + 1) * 8 + 0x168),
           uVar24 * 8);
    *(short *)((long)pvVar18 + 0x1c2) = (short)uVar15;
    uVar15 = 0;
    if (!bVar8) {
      uVar15 = local_c8;
    }
    pvVar19 = __dest;
    if (!bVar8) {
      pvVar19 = pvVar18;
    }
    uVar3 = *(ushort *)((long)pvVar19 + 0x1c2);
    local_78 = (undefined7)*(undefined8 *)(pcVar9 + 1);
    uVar11 = *(undefined8 *)(pcVar9 + 8);
    puVar1 = (undefined8 *)((long)pvVar19 + local_c0 * 0x20);
    lVar25 = uVar3 - local_c0;
    uStack_71 = (undefined1)uVar11;
    if (uVar3 < local_c0 || lVar25 == 0) {
      uVar29 = *param_3;
      uVar31 = param_3[3];
      uVar30 = param_3[2];
      puVar1[1] = param_3[1];
      *puVar1 = uVar29;
      puVar1[3] = uVar31;
      puVar1[2] = uVar30;
    }
    else {
      memmove((void *)((long)pvVar19 + (local_c0 + 1) * 0x20),puVar1,lVar25 * 0x20);
      uVar29 = *param_3;
      uVar31 = param_3[3];
      uVar30 = param_3[2];
      puVar1[1] = param_3[1];
      *puVar1 = uVar29;
      puVar1[3] = uVar31;
      puVar1[2] = uVar30;
      memmove((void *)((long)pvVar19 + (local_c0 + 1) * 8 + 0x168),
              (void *)((long)pvVar19 + local_c0 * 8 + 0x168),lVar25 * 8);
    }
    *(undefined8 *)((long)pvVar19 + local_c0 * 8 + 0x168) = param_4;
    *(ushort *)((long)pvVar19 + 0x1c2) = uVar3 + 1;
    if (cVar22 != '\x02') {
      uStack_b0 = (undefined7)((ulong)uVar11 >> 8);
      uStack_b1 = uStack_71;
      if (*(void **)((long)pvVar18 + 0x160) == (void *)0x0) {
        local_c8 = 0;
LAB_00578070:
        plVar17 = (long *)*param_5;
        lVar25 = *plVar17;
        if (lVar25 == 0) {
                    /* try { // try from 005782d0 to 005782df has its CatchHandler @ 00578340 */
                    /* WARNING: Subroutine does not return */
          core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00ad1a70);
        }
        uVar24 = plVar17[1];
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        pcVar9 = (char *)FUN_004b25a4(0x228,8);
        if (pcVar9 == (char *)0x0) {
                    /* try { // try from 005782e4 to 005782ef has its CatchHandler @ 0057833c */
                    /* WARNING: Subroutine does not return */
          alloc::alloc::handle_alloc_error(8,0x228);
        }
        pcVar9[0x160] = '\0';
        pcVar9[0x161] = '\0';
        pcVar9[0x162] = '\0';
        pcVar9[0x163] = '\0';
        pcVar9[0x164] = '\0';
        pcVar9[0x165] = '\0';
        pcVar9[0x166] = '\0';
        pcVar9[0x167] = '\0';
        pcVar9[0x1c2] = '\0';
        pcVar9[0x1c3] = '\0';
        *(long *)(pcVar9 + 0x1c8) = lVar25;
        if (0xfffffffffffffffe < uVar24) {
                    /* try { // try from 005782f4 to 005782ff has its CatchHandler @ 00578328 */
                    /* WARNING: Subroutine does not return */
          core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00ad1a10);
        }
        *(char **)(lVar25 + 0x160) = pcVar9;
        *(undefined2 *)(lVar25 + 0x1c0) = 0;
        *plVar17 = (long)pcVar9;
        plVar17[1] = uVar24 + 1;
        if (local_c8 == uVar24) {
          *pcVar9 = cVar22;
          pcVar9[0x1c2] = '\x01';
          pcVar9[0x1c3] = '\0';
          *(ulong *)(pcVar9 + 1) = CONCAT17(uStack_b1,local_78);
          *(undefined8 *)(pcVar9 + 0x18) = uVar13;
          *(ulong *)(pcVar9 + 8) = CONCAT71(uStack_b0,uStack_b1);
          *(undefined8 *)(pcVar9 + 0x10) = uVar28;
          *(undefined8 *)(pcVar9 + 0x168) = uVar10;
          *param_1 = (long)pvVar19;
          param_1[1] = uVar15;
          *(void **)(pcVar9 + 0x1d0) = __dest;
          *(char **)((long)__dest + 0x160) = pcVar9;
          *(undefined2 *)((long)__dest + 0x1c0) = 1;
          param_1[2] = local_c0;
          return;
        }
                    /* try { // try from 00578304 to 0057831f has its CatchHandler @ 00578324 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: edge.height == self.height - 1",0x30,
                   &PTR_s__nix_store_8006w282fgsx3273c878b_00ad1ab8);
      }
      bVar8 = local_c8 == 0;
      pvVar7 = *(void **)((long)pvVar18 + 0x160);
      pvVar16 = __dest;
      uVar11 = uVar10;
      uVar29 = uVar13;
      uVar30 = uVar28;
      cVar21 = cVar22;
      while( true ) {
        pvVar12 = pvVar7;
        uVar6 = local_78;
        if (!bVar8) {
                    /* try { // try from 0057825c to 00578273 has its CatchHandler @ 005783a8 */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("assertion failed: edge.height == self.node.height - 1",0x35,
                     &PTR_s__nix_store_8006w282fgsx3273c878b_00ad1a28);
        }
        uVar3 = *(ushort *)((long)pvVar12 + 0x1c2);
        uVar24 = (ulong)uVar3;
        uVar4 = *(ushort *)((long)pvVar18 + 0x1c0);
        uVar26 = (ulong)uVar4;
        if (uVar3 < 0xb) break;
        if (uVar4 < 5) {
          bVar8 = false;
          uVar20 = 4;
        }
        else if (uVar4 == 5) {
          bVar8 = false;
          uVar20 = uVar26;
        }
        else if (uVar4 == 6) {
          uVar26 = 0;
          bVar8 = true;
          uVar20 = 5;
        }
        else {
          uVar26 = uVar26 - 7;
          bVar8 = true;
          uVar20 = 6;
        }
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        __dest = (void *)FUN_004b25a4(0x228,8);
        if (__dest == (void *)0x0) {
                    /* try { // try from 00578278 to 00578283 has its CatchHandler @ 0057839c */
                    /* WARNING: Subroutine does not return */
          alloc::alloc::handle_alloc_error(8,0x228);
        }
        *(undefined8 *)((long)__dest + 0x160) = 0;
        pcVar9 = (char *)((long)pvVar12 + uVar20 * 0x20);
        *(undefined2 *)((long)__dest + 0x1c2) = 0;
        uVar2 = (ulong)*(ushort *)((long)pvVar12 + 0x1c2) + ~uVar20;
        *(short *)((long)__dest + 0x1c2) = (short)uVar2;
        cVar22 = *pcVar9;
        uVar31 = *(undefined8 *)(pcVar9 + 8);
        uVar28 = *(undefined8 *)(pcVar9 + 0x10);
        local_78 = (undefined7)*(undefined8 *)(pcVar9 + 1);
        uVar13 = *(undefined8 *)(pcVar9 + 0x18);
        uStack_71 = (undefined1)uVar31;
        if (0xb < uVar2) {
                    /* try { // try from 00578220 to 0057823b has its CatchHandler @ 005783b0 */
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (0,uVar2,0xb,&PTR_s__nix_store_8006w282fgsx3273c878b_00ad1aa0);
        }
        uVar10 = *(undefined8 *)((long)pvVar12 + uVar20 * 8 + 0x168);
        memcpy(__dest,(void *)((long)pvVar12 + (uVar20 + 1) * 0x20),uVar2 * 0x20);
        memcpy((void *)((long)__dest + 0x168),(void *)((long)pvVar12 + (uVar20 + 1) * 8 + 0x168),
               uVar2 * 8);
        *(short *)((long)pvVar12 + 0x1c2) = (short)uVar20;
        lVar25 = (ulong)*(ushort *)((long)__dest + 0x1c2) + 1;
        if (0xb < (ulong)*(ushort *)((long)__dest + 0x1c2)) {
                    /* try { // try from 00578240 to 00578257 has its CatchHandler @ 005783c4 */
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (0,lVar25,0xc,&PTR_s__nix_store_8006w282fgsx3273c878b_00ad1a40);
        }
        if (uVar24 - uVar20 != lVar25) {
                    /* try { // try from 00578288 to 0057829f has its CatchHandler @ 005783c4 */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("assertion failed: src.len() == dst.len()",0x28,
                     &PTR_s__nix_store_8006w282fgsx3273c878b_00ad1a58);
        }
        local_c8 = local_c8 + 1;
        memcpy((void *)((long)__dest + 0x1c8),(void *)((long)pvVar12 + uVar20 * 8 + 0x1d0),
               lVar25 * 8);
        lVar23 = 0;
        do {
          lVar27 = lVar23 + 1;
          lVar14 = *(long *)((long)__dest + lVar23 * 8 + 0x1c8);
          *(short *)(lVar14 + 0x1c0) = (short)lVar23;
          *(void **)(lVar14 + 0x160) = __dest;
          lVar23 = lVar27;
        } while (lVar25 != lVar27);
        pvVar18 = __dest;
        if (!bVar8) {
          pvVar18 = pvVar12;
        }
        uVar3 = *(ushort *)((long)pvVar18 + 0x1c2);
        uVar24 = (ulong)uVar3;
        pcVar9 = (char *)((long)pvVar18 + uVar26 * 0x20);
        uStack_90 = (undefined7)((ulong)uVar31 >> 8);
        lVar25 = uVar24 - uVar26;
        if (uVar24 < uVar26 || lVar25 == 0) {
          *pcVar9 = cVar21;
          *(ulong *)(pcVar9 + 1) = CONCAT17(uStack_b1,uVar6);
          *(ulong *)(pcVar9 + 8) = CONCAT71(uStack_b0,uStack_b1);
          *(undefined8 *)(pcVar9 + 0x10) = uVar30;
          *(undefined8 *)(pcVar9 + 0x18) = uVar29;
          *(undefined8 *)((long)pvVar18 + uVar26 * 8 + 0x168) = uVar11;
        }
        else {
          memmove((void *)((long)pvVar18 + (uVar26 + 1) * 0x20),pcVar9,lVar25 * 0x20);
          *pcVar9 = cVar21;
          lVar27 = uVar26 * 8;
          lVar23 = (uVar26 + 1) * 8;
          *(ulong *)(pcVar9 + 1) = CONCAT17(uStack_b1,uVar6);
          *(ulong *)(pcVar9 + 8) = CONCAT71(uStack_b0,uStack_b1);
          *(undefined8 *)(pcVar9 + 0x10) = uVar30;
          *(undefined8 *)(pcVar9 + 0x18) = uVar29;
          memmove((void *)((long)pvVar18 + lVar23 + 0x168),(void *)((long)pvVar18 + lVar27 + 0x168),
                  lVar25 * 8);
          *(undefined8 *)((long)pvVar18 + lVar27 + 0x168) = uVar11;
          memmove((void *)((long)pvVar18 + lVar27 + 0x1d8),(void *)((long)pvVar18 + lVar23 + 0x1c8),
                  lVar25 * 8);
        }
        *(void **)((long)pvVar18 + (uVar26 + 1) * 8 + 0x1c8) = pvVar16;
        *(ushort *)((long)pvVar18 + 0x1c2) = uVar3 + 1;
        if (uVar26 + 1 < uVar24 + 2) {
          lVar25 = uVar26 + 0x3a;
          do {
            sVar5 = (short)lVar25;
            lVar23 = *(long *)((long)pvVar18 + lVar25 * 8);
            lVar25 = lVar25 + 1;
            *(void **)(lVar23 + 0x160) = pvVar18;
            *(short *)(lVar23 + 0x1c0) = sVar5 + -0x39;
          } while (lVar25 - uVar24 != 0x3b);
        }
        if (cVar22 == '\x02') goto LAB_00578210;
        bVar8 = true;
        pvVar7 = *(void **)((long)pvVar12 + 0x160);
        pvVar16 = __dest;
        uVar11 = uVar10;
        pvVar18 = pvVar12;
        uVar29 = uVar13;
        uVar30 = uVar28;
        uStack_b1 = uStack_71;
        uStack_b0 = uStack_90;
        cVar21 = cVar22;
        if (*(void **)((long)pvVar12 + 0x160) == (void *)0x0) goto LAB_00578070;
      }
      pcVar9 = (char *)((long)pvVar12 + uVar26 * 0x20);
      uVar20 = uVar26 + 1;
      if (uVar4 < uVar3) {
        memmove((void *)((long)pvVar12 + uVar20 * 0x20),pcVar9,(uVar24 - uVar26) * 0x20);
        lVar25 = uVar26 * 8;
        __n = (uVar24 - uVar26) * 8;
        *pcVar9 = cVar21;
        *(ulong *)(pcVar9 + 1) = CONCAT17(uStack_b1,local_78);
        *(ulong *)(pcVar9 + 8) = CONCAT71(uStack_b0,uStack_b1);
        *(undefined8 *)(pcVar9 + 0x10) = uVar30;
        *(undefined8 *)(pcVar9 + 0x18) = uVar29;
        memmove((void *)((long)pvVar12 + uVar20 * 8 + 0x168),
                (void *)((long)pvVar12 + lVar25 + 0x168),__n);
        *(undefined8 *)((long)pvVar12 + lVar25 + 0x168) = uVar11;
        memmove((void *)((long)pvVar12 + lVar25 + 0x1d8),
                (void *)((long)pvVar12 + uVar20 * 8 + 0x1c8),__n);
      }
      else {
        *pcVar9 = cVar21;
        *(ulong *)(pcVar9 + 1) = CONCAT17(uStack_b1,local_78);
        *(ulong *)(pcVar9 + 8) = CONCAT71(uStack_b0,uStack_b1);
        *(undefined8 *)(pcVar9 + 0x10) = uVar30;
        *(undefined8 *)(pcVar9 + 0x18) = uVar29;
        *(undefined8 *)((long)pvVar12 + uVar26 * 8 + 0x168) = uVar11;
      }
      *(ushort *)((long)pvVar12 + 0x1c2) = uVar3 + 1;
      *(void **)((long)pvVar12 + uVar20 * 8 + 0x1c8) = pvVar16;
      if (uVar20 < uVar24 + 2) {
        lVar25 = uVar26 + 0x3a;
        do {
          sVar5 = (short)lVar25;
          lVar23 = *(long *)((long)pvVar12 + lVar25 * 8);
          lVar25 = lVar25 + 1;
          *(void **)(lVar23 + 0x160) = pvVar12;
          *(short *)(lVar23 + 0x1c0) = sVar5 + -0x39;
        } while (lVar25 - uVar24 != 0x3b);
      }
LAB_00578210:
      *param_1 = (long)pvVar19;
      param_1[1] = uVar15;
      goto LAB_00577d2c;
    }
  }
  *param_1 = (long)pvVar19;
  param_1[1] = uVar15;
LAB_00577d2c:
  param_1[2] = local_c0;
  return;
}


// ===== 00578410  FUN_00578410 =====

void FUN_00578410(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  char cVar1;
  size_t sVar2;
  long lVar3;
  ushort uVar4;
  int iVar5;
  void *__s2;
  void *pvVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  
  uVar10 = *(ulong *)(param_4 + 0x18);
  if (uVar10 < 0x11) {
    do {
      uVar4 = *(ushort *)(param_2 + 0x1c2);
      puVar14 = (undefined8 *)(param_2 + 0x10);
      uVar11 = 0xffffffffffffffff;
      lVar13 = (ulong)uVar4 << 5;
      lVar9 = param_2;
      do {
        uVar12 = (ulong)uVar4;
        if (lVar13 == 0) goto LAB_0057856c;
        uVar12 = *(ulong *)(lVar9 + 0x18);
        if (uVar12 < 0x11) {
          pvVar6 = (void *)((long)puVar14 + -0xf);
        }
        else {
          uVar12 = puVar14[-1];
          pvVar6 = (void *)*puVar14;
        }
        lVar9 = lVar9 + 0x20;
        sVar2 = uVar10;
        if (uVar12 <= uVar10) {
          sVar2 = uVar12;
        }
        iVar5 = memcmp((void *)(param_4 + 1),pvVar6,sVar2);
        uVar11 = uVar11 + 1;
        puVar14 = puVar14 + 4;
        lVar13 = lVar13 + -0x20;
        lVar3 = uVar10 - uVar12;
        if (iVar5 != 0) {
          lVar3 = (long)iVar5;
        }
        cVar1 = 0 < lVar3;
        if (lVar3 < 0) {
          cVar1 = -1;
        }
      } while (cVar1 == '\x01');
      uVar12 = uVar11;
      if (cVar1 == '\0') goto LAB_00578580;
LAB_0057856c:
      if (param_3 == 0) goto LAB_005785b0;
      param_3 = param_3 + -1;
      param_2 = *(long *)(param_2 + uVar12 * 8 + 0x1c8);
    } while( true );
  }
  uVar10 = *(ulong *)(param_4 + 8);
  pvVar6 = *(void **)(param_4 + 0x10);
  do {
    uVar12 = (ulong)*(ushort *)(param_2 + 0x1c2);
    puVar14 = (undefined8 *)(param_2 + 0x10);
    uVar11 = 0xffffffffffffffff;
    lVar13 = uVar12 << 5;
    lVar9 = param_2;
    do {
      if (lVar13 == 0) goto LAB_005784d4;
      uVar7 = *(ulong *)(lVar9 + 0x18);
      if (uVar7 < 0x11) {
        __s2 = (void *)((long)puVar14 + -0xf);
      }
      else {
        uVar7 = puVar14[-1];
        __s2 = (void *)*puVar14;
      }
      lVar9 = lVar9 + 0x20;
      sVar2 = uVar10;
      if (uVar7 <= uVar10) {
        sVar2 = uVar7;
      }
      iVar5 = memcmp(pvVar6,__s2,sVar2);
      uVar11 = uVar11 + 1;
      puVar14 = puVar14 + 4;
      lVar13 = lVar13 + -0x20;
      lVar3 = uVar10 - uVar7;
      if (iVar5 != 0) {
        lVar3 = (long)iVar5;
      }
      cVar1 = 0 < lVar3;
      if (lVar3 < 0) {
        cVar1 = -1;
      }
    } while (cVar1 == '\x01');
    uVar12 = uVar11;
    if (cVar1 == '\0') break;
LAB_005784d4:
    if (param_3 == 0) goto LAB_005785b0;
    param_3 = param_3 + -1;
    param_2 = *(long *)(param_2 + uVar12 * 8 + 0x1c8);
  } while( true );
LAB_00578580:
  uVar8 = 0;
  uVar12 = uVar11;
  goto LAB_00578584;
LAB_005785b0:
  uVar8 = 1;
LAB_00578584:
  param_1[2] = param_3;
  param_1[3] = uVar12;
  *param_1 = uVar8;
  param_1[1] = param_2;
  return;
}


// ===== 005785b8  FUN_005785b8 =====

void FUN_005785b8(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 005785d0  FUN_005785d0 =====

void FUN_005785d0(long *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  if (*param_1 == 3) {
    __ptr = (void *)param_1[1];
    puVar1 = (undefined8 *)param_1[2];
    pcVar2 = (code *)*puVar1;
    if (pcVar2 != (code *)0x0) {
                    /* try { // try from 005785f4 to 005785fb has its CatchHandler @ 00578624 */
      (*pcVar2)(__ptr);
    }
    if (puVar1[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00578648  rusqlite::error::to_sqlite_error =====

/* WARNING: Unknown calling convention: __rustcall */
/* rusqlite::error::to_sqlite_error */

undefined4 __rustcall rusqlite::error::to_sqlite_error(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined1 *__ptr;
  int iVar2;
  undefined8 uVar3;
  long local_60;
  undefined1 *puStack_58;
  undefined8 local_50;
  undefined1 *puStack_48;
  undefined **local_40;
  undefined8 uStack_38;
  undefined1 uStack_11;
  
  puStack_48 = (undefined1 *)&local_60;
  if (*param_1 == -0x8000000000000000) {
    if (param_1[1] != -1) {
      uVar3 = FUN_005761c4(param_1[2],param_1[3]);
      *param_2 = uVar3;
    }
    return (int)param_1[4];
  }
  local_60 = 0;
  puStack_58 = &DAT_00000001;
  local_40 = &PTR_FUN_00ad1d28;
  uStack_38 = 0x60000020;
  local_50 = 0;
                    /* try { // try from 005786d4 to 005786db has its CatchHandler @ 0057875c */
  iVar2 = <rusqlite::error::Error_as_core::fmt::Display>::fmt(param_1,&puStack_48);
  __ptr = puStack_58;
  lVar1 = local_60;
  if (iVar2 == 0) {
                    /* try { // try from 005786e8 to 005786ef has its CatchHandler @ 00578748 */
    uVar3 = FUN_005761c4(puStack_58,local_50);
    *param_2 = uVar3;
    if (lVar1 != 0) {
      free(__ptr);
    }
    return 1;
  }
                    /* try { // try from 00578720 to 00578743 has its CatchHandler @ 0057875c */
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            ("a Display implementation returned an error unexpectedly",0x37,&uStack_11,&DAT_00ad1ad0
             ,&PTR_s__nix_store_8006w282fgsx3273c878b_00ad1d58);
}


// ===== 00578780  rusqlite::error::decode_result_raw =====

/* WARNING: Unknown calling convention: __rustcall */
/* rusqlite::error::decode_result_raw */

void __rustcall
rusqlite::error::decode_result_raw(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = 0xffffffffffffffff;
    return;
  }
  FUN_00578794();
  return;
}


// ===== 00578794  FUN_00578794 =====

void FUN_00578794(undefined8 param_1,long param_2,int param_3)

{
  undefined1 *__src;
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  undefined1 *__dest;
  undefined8 uVar4;
  size_t local_70;
  undefined1 *puStack_68;
  size_t local_58;
  undefined1 *puStack_50;
  size_t local_48;
  
  if ((param_2 == 0) || (iVar1 = sqlite3_errcode(), iVar1 != param_3)) {
    pcVar2 = (char *)sqlite3_errstr(param_3);
    if (pcVar2 == (char *)0x0) {
      local_70 = 0xffffffffffffffff;
      goto LAB_005788a4;
    }
    sVar3 = strlen(pcVar2);
    <alloc::ffi::c_str::[D]::core::ffi::c_str::CStr>::to_string_lossy(&local_58,pcVar2,sVar3 + 1);
    local_70 = local_58;
    __src = puStack_50;
    sVar3 = local_48;
  }
  else {
    pcVar2 = (char *)sqlite3_errmsg(param_2);
    sVar3 = strlen(pcVar2);
    <alloc::ffi::c_str::[D]::core::ffi::c_str::CStr>::to_string_lossy(&local_58,pcVar2,sVar3 + 1);
    local_70 = local_58;
    __src = puStack_50;
    sVar3 = local_48;
  }
  puStack_68 = __src;
  if (local_70 == 0xffffffffffffffff) {
    if ((long)sVar3 < 0) {
      uVar4 = 0;
LAB_00578850:
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar4,sVar3);
    }
    local_70 = sVar3;
    if (sVar3 == 0) {
      puStack_68 = &DAT_00000001;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar4 = 1;
      __dest = (undefined1 *)FUN_004b25a4(sVar3,1);
      if (__dest == (undefined1 *)0x0) goto LAB_00578850;
      memcpy(__dest,__src,sVar3);
      puStack_68 = __dest;
    }
  }
LAB_005788a4:
  rusqlite::error::error_from_sqlite_code(param_1,param_3,&local_70);
  return;
}


// ===== 005788cc  FUN_005788cc =====

/* WARNING: Type propagation algorithm not settling */

void FUN_005788cc(size_t *param_1,long param_2,uint param_3,void *param_4,size_t param_5)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  undefined4 *puVar6;
  undefined1 *__dest;
  undefined1 uVar7;
  size_t unaff_x24;
  undefined4 *unaff_x26;
  undefined8 uVar8;
  size_t local_78;
  undefined4 *puStack_70;
  size_t local_68;
  
  if (param_2 == 0) {
    local_78 = 0xffffffffffffffff;
    rusqlite::error::error_from_sqlite_code(param_1,param_3,&local_78);
    return;
  }
  uVar7 = 0x17;
  uVar1 = true;
  switch(param_3 & 0xff) {
  case 2:
    uVar1 = false;
    uVar7 = 0;
    uVar2 = sqlite3_errcode(param_2);
    goto joined_r0x00578b84;
  case 3:
    uVar7 = 1;
    uVar2 = sqlite3_errcode(param_2);
    goto joined_r0x00578b84;
  case 4:
    uVar7 = 2;
    uVar2 = sqlite3_errcode(param_2);
    goto joined_r0x00578b84;
  case 5:
    uVar7 = 3;
    uVar2 = sqlite3_errcode(param_2);
    goto joined_r0x00578b84;
  case 6:
    uVar7 = 4;
    uVar2 = sqlite3_errcode(param_2);
    goto joined_r0x00578b84;
  case 7:
    uVar7 = 5;
    uVar2 = sqlite3_errcode(param_2);
    goto joined_r0x00578b84;
  case 8:
    uVar7 = 6;
    uVar2 = sqlite3_errcode(param_2);
    goto joined_r0x00578b84;
  case 9:
    uVar7 = 7;
    uVar2 = sqlite3_errcode(param_2);
joined_r0x00578b84:
    uVar1 = false;
    goto joined_r0x00578b84;
  case 10:
    uVar7 = 8;
    uVar2 = sqlite3_errcode(param_2);
    break;
  case 0xb:
    uVar7 = 9;
    uVar2 = sqlite3_errcode(param_2);
    break;
  case 0xc:
    uVar7 = 10;
    uVar2 = sqlite3_errcode(param_2);
    break;
  case 0xd:
    uVar7 = 0xb;
    uVar2 = sqlite3_errcode(param_2);
    break;
  case 0xe:
    uVar7 = 0xc;
    uVar2 = sqlite3_errcode(param_2);
    break;
  case 0xf:
    uVar7 = 0xd;
    uVar2 = sqlite3_errcode(param_2);
    break;
  case 0x11:
    uVar7 = 0xe;
    uVar2 = sqlite3_errcode(param_2);
    break;
  case 0x12:
    uVar7 = 0xf;
    uVar2 = sqlite3_errcode(param_2);
    break;
  case 0x13:
    uVar1 = false;
    uVar7 = 0x10;
  default:
    uVar2 = sqlite3_errcode(param_2);
    goto joined_r0x00578b84;
  case 0x14:
    uVar7 = 0x11;
    uVar2 = sqlite3_errcode(param_2);
    goto joined_r0x00578aa4;
  case 0x15:
    uVar7 = 0x12;
    uVar2 = sqlite3_errcode(param_2);
    goto joined_r0x00578aa4;
  case 0x16:
    uVar7 = 0x13;
    uVar2 = sqlite3_errcode(param_2);
    goto joined_r0x00578aa4;
  case 0x17:
    uVar7 = 0x14;
    uVar2 = sqlite3_errcode(param_2);
    goto joined_r0x00578a18;
  case 0x19:
    uVar7 = 0x15;
    uVar2 = sqlite3_errcode(param_2);
joined_r0x00578a18:
    uVar1 = false;
    goto joined_r0x00578b84;
  case 0x1a:
    uVar7 = 0x16;
    uVar2 = sqlite3_errcode(param_2);
joined_r0x00578aa4:
    uVar1 = false;
    goto joined_r0x00578b84;
  }
  uVar1 = false;
joined_r0x00578b84:
  if (uVar2 == param_3) {
    pcVar4 = (char *)sqlite3_errmsg(param_2);
    sVar5 = strlen(pcVar4);
    <alloc::ffi::c_str::[D]::core::ffi::c_str::CStr>::to_string_lossy(&local_78,pcVar4,sVar5 + 1);
    unaff_x26 = puStack_70;
    unaff_x24 = local_68;
joined_r0x00578998:
    sVar5 = local_78;
    if (local_78 == 0xffffffffffffffff) {
      if ((long)unaff_x24 < 0) {
        uVar8 = 0;
LAB_00578d14:
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(uVar8,unaff_x24);
      }
      if (unaff_x24 == 0) {
        sVar5 = 0;
        unaff_x26 = (undefined4 *)&DAT_00000001;
      }
      else {
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        uVar8 = 1;
        puVar6 = (undefined4 *)FUN_004b25a4(unaff_x24,1);
        if (puVar6 == (undefined4 *)0x0) goto LAB_00578d14;
        memcpy(puVar6,unaff_x26,unaff_x24);
        sVar5 = unaff_x24;
        unaff_x26 = puVar6;
      }
    }
  }
  else {
    pcVar4 = (char *)sqlite3_errstr(param_3);
    if (pcVar4 != (char *)0x0) {
      sVar5 = strlen(pcVar4);
      <alloc::ffi::c_str::[D]::core::ffi::c_str::CStr>::to_string_lossy(&local_78,pcVar4,sVar5 + 1);
      unaff_x26 = puStack_70;
      unaff_x24 = local_68;
      goto joined_r0x00578998;
    }
    sVar5 = 0xffffffffffffffff;
  }
  if (((bool)uVar1) && (iVar3 = sqlite3_error_offset(param_2), -1 < iVar3)) {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar6 = (undefined4 *)FUN_004b25a4(5,1);
    if (puVar6 == (undefined4 *)0x0) {
                    /* try { // try from 00578db4 to 00578dbf has its CatchHandler @ 00578dc4 */
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(1,5);
    }
    *(undefined1 *)(puVar6 + 1) = 0x72;
    *puVar6 = 0x6f727265;
    if (sVar5 == 0xffffffffffffffff) {
      unaff_x24 = 5;
      sVar5 = 5;
      unaff_x26 = puVar6;
    }
    else {
      free(puVar6);
    }
    if ((long)param_5 < 0) {
      uVar8 = 0;
LAB_00578cc8:
                    /* try { // try from 00578cc8 to 00578cd3 has its CatchHandler @ 00578dd8 */
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar8,param_5);
    }
    if (param_5 == 0) {
      __dest = &DAT_00000001;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar8 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_5,1);
      if (__dest == (undefined1 *)0x0) goto LAB_00578cc8;
      memcpy(__dest,param_4,param_5);
    }
    *(uint *)(param_1 + 6) = param_3;
    *(undefined1 *)((long)param_1 + 0x34) = uVar7;
    *param_1 = sVar5;
    param_1[1] = (size_t)unaff_x26;
    param_1[2] = unaff_x24;
    param_1[3] = param_5;
    param_1[4] = (size_t)__dest;
    param_1[5] = param_5;
    *(int *)(param_1 + 7) = iVar3;
  }
  else {
    *(uint *)(param_1 + 4) = param_3;
    *(undefined1 *)((long)param_1 + 0x24) = uVar7;
    param_1[2] = (size_t)unaff_x26;
    param_1[3] = unaff_x24;
    *param_1 = 0x8000000000000000;
    param_1[1] = sVar5;
  }
  return;
}


// ===== 00578df8  rusqlite::error::error_from_sqlite_code =====

/* WARNING: Unknown calling convention: __rustcall */
/* rusqlite::error::error_from_sqlite_code */

void __rustcall
rusqlite::error::error_from_sqlite_code(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((param_2 - 2U & 0xff) < 0x19) {
    uVar1 = (&DAT_002c5074)[(ulong)(param_2 - 2U) & 0xff];
  }
  else {
    uVar1 = 0x17;
  }
  uVar4 = param_3[1];
  uVar3 = *param_3;
  uVar2 = param_3[2];
  *(undefined1 *)((long)param_1 + 0x24) = uVar1;
  *(int *)(param_1 + 4) = param_2;
  param_1[2] = uVar4;
  param_1[1] = uVar3;
  param_1[3] = uVar2;
  *param_1 = 0x8000000000000000;
  return;
}


// ===== 00578e44  rusqlite::error::check =====

/* WARNING: Unknown calling convention: __rustcall */
/* rusqlite::error::check */

void __rustcall rusqlite::error::check(undefined8 *param_1,int param_2)

{
  undefined8 local_28 [3];
  
  if (param_2 == 0) {
    *param_1 = 0xffffffffffffffff;
    return;
  }
  local_28[0] = 0xffffffffffffffff;
  error_from_sqlite_code(param_2,local_28);
  return;
}


// ===== 00578e7c  <rusqlite::error::Error_as_core::cmp::PartialEq>::eq =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::error::Error as core::cmp::PartialEq>::eq */

ulong __rustcall <rusqlite::error::Error_as_core::cmp::PartialEq>::eq(ulong *param_1,ulong *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  void *local_190;
  size_t local_188;
  char local_180;
  undefined8 local_17f;
  undefined8 uStack_177;
  undefined8 local_16f;
  undefined2 local_158;
  undefined1 local_156;
  void *local_150;
  size_t local_148;
  char local_140;
  undefined8 local_13f;
  undefined8 uStack_137;
  undefined8 local_12f;
  undefined2 local_118;
  undefined1 local_116;
  void *local_110;
  size_t sStack_108;
  char local_100;
  undefined8 local_ff;
  undefined8 uStack_f7;
  undefined8 local_ef;
  undefined2 local_d8;
  undefined1 local_d6;
  void *local_d0;
  size_t sStack_c8;
  char local_c0;
  undefined8 local_bf;
  undefined8 uStack_b7;
  undefined8 local_af;
  undefined2 local_98;
  undefined1 local_96;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar5 = *param_1 ^ 0x8000000000000000;
  if (-1 < (long)*param_1) {
    uVar5 = 0x14;
  }
  uVar3 = 0;
  switch(uVar5) {
  case 0:
    if (*param_2 != 0x8000000000000000) {
      return 0;
    }
    if (*(char *)((long)param_1 + 0x24) != *(char *)((long)param_2 + 0x24)) {
      return 0;
    }
    if ((int)param_1[4] != (int)param_2[4]) {
      return 0;
    }
    uVar3 = (uint)((param_2[1] & param_1[1]) == 0xffffffffffffffff);
    if ((param_1[1] == 0xffffffffffffffff) || (param_2[1] == 0xffffffffffffffff))
    goto switchD_00578ecc_caseD_2;
    goto LAB_0057900c;
  case 1:
    uVar5 = *param_2;
    uVar4 = 0x8000000000000001;
    break;
  default:
switchD_00578ecc_caseD_2:
    return (ulong)uVar3;
  case 3:
    if (*param_2 != 0x8000000000000003) {
      return 0;
    }
    goto LAB_005791f8;
  case 4:
    if (*param_2 != 0x8000000000000004) {
      return 0;
    }
    if (param_1[1] != param_2[1]) {
      return 0;
    }
    if ((char)param_1[2] != '\x01') {
      return (ulong)((byte)param_2[2] ^ 1);
    }
    if (((byte)param_2[2] & 1) == 0) {
      return 0;
    }
    bVar1 = *(char *)((long)param_1 + 0x11) == *(char *)((long)param_2 + 0x11);
    goto LAB_00579214;
  case 5:
    if (*param_2 != 0x8000000000000005) {
      return 0;
    }
    if (param_1[4] != param_2[4]) {
      return 0;
    }
    goto LAB_0057900c;
  case 6:
    if (*param_2 != 0x8000000000000006) {
      return 0;
    }
    goto LAB_0057900c;
  case 7:
    if (*param_2 != 0x8000000000000007) {
      return 0;
    }
    uVar5 = param_2[2];
    uVar4 = param_2[3];
    <std::path::[16]::std::path::Path>::components(&local_190,param_1[2],param_1[3]);
    <std::path::[16]::std::path::Path>::components(&local_150,uVar5,uVar4);
    if (local_188 == local_148) {
      if (((((char)local_158 == (char)local_118) && (local_158._1_1_ == '\x02')) &&
          (local_118._1_1_ == '\x02')) &&
         (iVar2 = memcmp(local_190,local_150,local_188), iVar2 == 0)) {
        return 1;
      }
    }
    if (local_180 != -1) {
      uStack_88 = uStack_177;
      local_90 = local_17f;
      uStack_80 = local_16f;
    }
    local_100 = local_180;
    local_110 = local_190;
    sStack_108 = local_188;
    local_ef = uStack_80;
    uStack_f7 = uStack_88;
    local_ff = local_90;
    local_d8 = local_158;
    local_d6 = local_156;
    if (local_140 != -1) {
      uStack_58 = uStack_137;
      local_60 = local_13f;
      uStack_50 = local_12f;
    }
    local_d0 = local_150;
    sStack_c8 = local_148;
    local_c0 = local_140;
    uStack_b7 = uStack_58;
    local_bf = local_60;
    local_af = uStack_50;
    local_98 = local_118;
    local_96 = local_116;
    uVar5 = FUN_00577514(&local_110,&local_d0);
    return uVar5;
  case 8:
    uVar5 = *param_2;
    uVar4 = 0x8000000000000008;
    break;
  case 9:
    uVar5 = *param_2;
    uVar4 = 0x8000000000000009;
    break;
  case 10:
    uVar5 = *param_2;
    uVar4 = 0x800000000000000a;
    break;
  case 0xb:
    if (*param_2 != 0x800000000000000b) {
      return 0;
    }
    goto LAB_00578f78;
  case 0xc:
    if (*param_2 != 0x800000000000000c) {
      return 0;
    }
    goto LAB_0057900c;
  case 0xd:
    if (*param_2 != 0x800000000000000d) {
      return 0;
    }
    if (param_1[4] != param_2[4]) {
      return 0;
    }
    if ((char)param_1[5] != (char)param_2[5]) {
      return 0;
    }
LAB_0057900c:
    if (param_1[3] != param_2[3]) {
      return 0;
    }
    iVar2 = memcmp((void *)param_1[2],(void *)param_2[2],param_1[3]);
    bVar1 = iVar2 == 0;
    goto LAB_00579214;
  case 0xe:
    if (*param_2 != 0x800000000000000e) {
      return 0;
    }
    goto LAB_00578f78;
  case 0x10:
    uVar5 = *param_2;
    uVar4 = 0x8000000000000010;
    break;
  case 0x11:
    uVar5 = *param_2;
    uVar4 = 0x8000000000000011;
    break;
  case 0x13:
    if (*param_2 != 0x8000000000000013) {
      return 0;
    }
LAB_005791f8:
    if (param_1[1] != param_2[1]) {
      return 0;
    }
    uVar5 = param_1[2];
    uVar4 = param_2[2];
    break;
  case 0x14:
    if ((long)*param_2 < 0) {
      return 0;
    }
    if (*(char *)((long)param_1 + 0x34) != *(char *)((long)param_2 + 0x34)) {
      return 0;
    }
    if ((int)param_1[6] != (int)param_2[6]) {
      return 0;
    }
    if (param_1[2] != param_2[2]) {
      return 0;
    }
    iVar2 = memcmp((void *)param_1[1],(void *)param_2[1],param_1[2]);
    if (iVar2 != 0) {
      return 0;
    }
    if (param_1[5] != param_2[5]) {
      return 0;
    }
    iVar2 = memcmp((void *)param_1[4],(void *)param_2[4],param_1[5]);
    if (iVar2 != 0) {
      return 0;
    }
    bVar1 = (int)param_1[7] == (int)param_2[7];
    goto LAB_00579214;
  case 0x15:
    if (*param_2 != 0x8000000000000015) {
      uVar3 = 0;
      goto switchD_00578ecc_caseD_2;
    }
LAB_00578f78:
    uVar5 = param_1[1];
    uVar4 = param_2[1];
  }
  bVar1 = uVar5 == uVar4;
LAB_00579214:
  return (ulong)bVar1;
}


// ===== 0057932c  <rusqlite::error::Error_as_core::convert::From<rusqlite::types::from_sql::FromSqlError>>::from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::error::Error as core::convert::From<rusqlite::types::from_sql::FromSqlError>>::from */

void __rustcall
<rusqlite::error::Error_as_core::convert::From<rusqlite::types::from_sql::FromSqlError>>::from
          (undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *param_2;
  if (lVar2 < 2) {
    if (lVar2 != 0) {
      lVar2 = param_2[1];
      param_1[1] = 0xffffffffffffffff;
      param_1[2] = lVar2;
      *param_1 = 0x8000000000000003;
      return;
    }
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    plVar1 = (long *)FUN_004b25a4(0x18,8);
    if (plVar1 == (long *)0x0) {
                    /* try { // try from 00579430 to 0057943b has its CatchHandler @ 00579464 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x18);
    }
    lVar4 = param_2[1];
    lVar3 = *param_2;
    lVar2 = param_2[2];
    param_1[3] = 0xffffffffffffffff;
    plVar1[1] = lVar4;
    *plVar1 = lVar3;
    plVar1[2] = lVar2;
    *(undefined1 *)(param_1 + 4) = 0;
  }
  else {
    if (lVar2 != 2) {
      lVar3 = param_2[2];
      lVar2 = param_2[1];
      *(undefined1 *)(param_1 + 4) = 0;
      param_1[3] = 0xffffffffffffffff;
      param_1[2] = lVar3;
      param_1[1] = lVar2;
      *param_1 = 0x8000000000000002;
      return;
    }
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    plVar1 = (long *)FUN_004b25a4(0x18,8);
    if (plVar1 == (long *)0x0) {
                    /* try { // try from 00579440 to 0057944b has its CatchHandler @ 00579450 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x18);
    }
    lVar4 = param_2[1];
    lVar3 = *param_2;
    lVar2 = param_2[2];
    param_1[3] = 0xffffffffffffffff;
    plVar1[1] = lVar4;
    *plVar1 = lVar3;
    plVar1[2] = lVar2;
    *(undefined1 *)(param_1 + 4) = 4;
  }
  param_1[1] = plVar1;
  param_1[2] = &PTR_FUN_00ad1b10;
  *param_1 = 0x8000000000000002;
  return;
}


// ===== 0057947c  FUN_0057947c =====

undefined1  [16] FUN_0057947c(long *param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = param_1[1];
  auVar2._8_8_ = param_1[2];
  if (*param_1 != 3) {
    lVar1 = 0;
  }
  auVar2._0_8_ = lVar1;
  return auVar2;
}


// ===== 00579490  FUN_00579490 =====

void FUN_00579490(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (-1 < lVar1) {
    lVar1 = 0x14;
  }
                    /* WARNING: Could not recover jumptable at 0x005794cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_005794d0 + (ulong)*(ushort *)(&UNK_002c4bb8 + lVar1 * 2) * 4))(param_2);
  return;
}


// ===== 0057991c  <rusqlite::error::Error_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::error::Error as core::fmt::Display>::fmt */

void __rustcall <rusqlite::error::Error_as_core::fmt::Display>::fmt(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = *param_1 ^ 0x8000000000000000;
  if (-1 < (long)*param_1) {
    uVar1 = 0x14;
  }
                    /* WARNING: Could not recover jumptable at 0x00579954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_00579958 + (ulong)(byte)(&UNK_002c4be4)[uVar1] * 4))();
  return;
}


// ===== 00579df8  FUN_00579df8 =====

void FUN_00579df8(byte *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,&DAT_002c5150 + *(int *)(&DAT_002c5150 + (ulong)*param_1 * 4),
             *(undefined8 *)(&DAT_002c5090 + (ulong)*param_1 * 8));
  return;
}


// ===== 00579e20  FUN_00579e20 =====

void FUN_00579e20(byte *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,&DAT_002c51d8 + *(int *)(&DAT_002c51d8 + (ulong)*param_1 * 4),
             *(undefined8 *)(&DAT_002c51b0 + (ulong)*param_1 * 8));
  return;
}


// ===== 00579e48  FUN_00579e48 =====

void FUN_00579e48(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"Error",5);
  return;
}


// ===== 00579e5c  FUN_00579e5c =====

undefined8 FUN_00579e5c(long *param_1,uint param_2)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = param_1[2];
  if (param_2 < 0x80) {
    if (*param_1 == lVar7) {
      FUN_00572f14(param_1,lVar7,1,1,1);
    }
    *(byte *)(param_1[1] + lVar7) = (byte)param_2;
    lVar6 = 1;
  }
  else {
    uVar2 = 3;
    if (0xffff < param_2) {
      uVar2 = 4;
    }
    uVar3 = 2;
    if (0x7ff < param_2) {
      uVar3 = uVar2;
    }
    if ((ulong)(*param_1 - lVar7) < uVar3) {
      FUN_00572f14(param_1,lVar7,uVar3,1,1);
    }
    bVar4 = (byte)param_2 & 0x3f | 0x80;
    pbVar1 = (byte *)(param_1[1] + lVar7);
    if (param_2 < 0x800) {
      pbVar1[1] = bVar4;
      lVar6 = 2;
      *pbVar1 = (byte)(param_2 >> 6) | 0xc0;
    }
    else {
      bVar5 = (byte)(param_2 >> 6) & 0x3f | 0x80;
      if (param_2 >> 0x10 == 0) {
        pbVar1[1] = bVar5;
        pbVar1[2] = bVar4;
        lVar6 = 3;
        *pbVar1 = (byte)(param_2 >> 0xc) | 0xe0;
      }
      else {
        pbVar1[2] = bVar5;
        pbVar1[3] = bVar4;
        lVar6 = 4;
        pbVar1[1] = (byte)(param_2 >> 0xc) & 0x3f | 0x80;
        *pbVar1 = (byte)(param_2 >> 0x12) | 0xf0;
      }
    }
  }
  param_1[2] = lVar6 + lVar7;
  return 0;
}


// ===== 00579fa0  FUN_00579fa0 =====

undefined8 FUN_00579fa0(long *param_1,void *param_2,ulong param_3)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if ((ulong)(*param_1 - lVar1) < param_3) {
    FUN_00572f14(param_1,lVar1,param_3,1,1);
    lVar1 = param_1[2];
  }
  else if (param_3 == 0) goto LAB_00579fe0;
  memcpy((void *)(param_1[1] + lVar1),param_2,param_3);
LAB_00579fe0:
  param_1[2] = lVar1 + param_3;
  return 0;
}


// ===== 0057a024  FUN_0057a024 =====

void FUN_0057a024(undefined8 param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <usize_as_core::fmt::LowerHex>::fmt();
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <usize_as_core::fmt::Display>::fmt();
    return;
  }
  <usize_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 0057a03c  FUN_0057a03c =====

void FUN_0057a03c(long param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
            (param_2,"Error",5,&DAT_002bcfe4,4,param_1 + 4,&DAT_00ad1d70,"extended_code",0xd,
             &local_18,&DAT_00ad1d08);
  return;
}


// ===== 0057a0a8  FUN_0057a0a8 =====

void FUN_0057a0a8(long *param_1,undefined8 param_2)

{
  long lVar1;
  long *local_18;
  
  lVar1 = *param_1;
  if (1 < lVar1) {
    if (lVar1 == 2) {
      local_18 = param_1 + 2;
      <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
                (param_2,"InvalidBlobSize",0xf,"expected_size",0xd,param_1 + 1,&DAT_00ad1ba8,
                 "blob_size",9,&local_18,&DAT_00ad1ca8);
      return;
    }
    local_18 = param_1 + 1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,"Other",5,&local_18,&DAT_00ad1be8);
    return;
  }
  if (lVar1 == 0) {
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"InvalidType",0xb);
    return;
  }
  local_18 = param_1 + 1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,"OutOfRange",10,&local_18,&DAT_00ad1c08);
  return;
}


// ===== 0057a1a8  FUN_0057a1a8 =====

void FUN_0057a1a8(long param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


// ===== 0057a1bc  FUN_0057a1bc =====

undefined1  [16] FUN_0057a1bc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = "description() is deprecated; use Display";
  return auVar1;
}


// ===== 0057a1cc  FUN_0057a1cc =====

void FUN_0057a1cc(void)

{
  return;
}


// ===== 0057a1d0  FUN_0057a1d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0057a1d0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029f700;
  param_1[1] = _UNK_0029f708;
  *param_1 = uVar1;
  return;
}


// ===== 0057a1e4  FUN_0057a1e4 =====

void FUN_0057a1e4(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  int *piVar5;
  
  piVar5 = (int *)*param_1;
  if ((((*(byte *)(param_1 + 1) & 1) == 0) &&
      ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) != 0)) &&
     (uVar4 = std::panicking::panic_count::is_zero_slow_path(), (uVar4 & 1) == 0)) {
    *(undefined1 *)(piVar5 + 1) = 1;
  }
  do {
    iVar1 = *piVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar3) {
      *piVar5 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 != 2) {
    return;
  }
  <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(piVar5);
  return;
}


// ===== 0057a254  FUN_0057a254 =====

void FUN_0057a254(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong local_80 [3];
  undefined8 local_68;
  ulong local_60;
  undefined8 local_58;
  long lStack_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38 [2];
  long local_28;
  
  sqlite3_finalize(*(undefined8 *)(param_1 + 0x30));
  lVar4 = *(long *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (lVar4 == 0) {
    local_40 = 0;
  }
  else {
    local_68 = *(undefined8 *)(param_1 + 0x10);
    local_40 = *(undefined8 *)(param_1 + 0x18);
    local_80[1] = 0;
    local_58 = 0;
    local_80[2] = lVar4;
    lStack_50 = lVar4;
    local_48 = local_68;
  }
  local_80[0] = (ulong)(lVar4 != 0);
                    /* try { // try from 0057a2a8 to 0057a2b3 has its CatchHandler @ 0057a334 */
  local_60 = local_80[0];
  FUN_00573a40(local_38,local_80);
  while (local_38[0] != 0) {
    lVar4 = local_38[0] + local_28 * 0x20;
    if (0x10 < *(ulong *)(lVar4 + 0x18)) {
      free(*(void **)(lVar4 + 0x10));
    }
                    /* try { // try from 0057a2b8 to 0057a2c3 has its CatchHandler @ 0057a338 */
    FUN_00573a40(local_38,local_80);
  }
  plVar3 = *(long **)(param_1 + 0x20);
  if (plVar3 != (long *)0x0) {
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow((undefined8 *)(param_1 + 0x20));
      return;
    }
  }
  return;
}


// ===== 0057a370  FUN_0057a370 =====

void FUN_0057a370(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong local_70;
  void *pvStack_68;
  undefined8 *local_60;
  void *local_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  uVar4 = param_1[7];
  param_1[7] = 0;
  puVar7 = (ulong *)*param_1;
  puVar6 = param_1 + 1;
  pvStack_68 = (void *)param_1[2];
  local_70 = *puVar6;
  local_58 = (void *)param_1[4];
  local_60 = (undefined8 *)param_1[3];
  uStack_48 = param_1[6];
  local_50 = (undefined8 *)param_1[5];
  param_1[2] = 0;
  *puVar6 = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  iVar3 = sqlite3_finalize(uVar4);
  local_40 = 0;
                    /* try { // try from 0057a3bc to 0057a3c3 has its CatchHandler @ 0057a56c */
  FUN_0057a254(&local_70);
  uVar5 = *puVar7;
  if (0x7ffffffffffffffe < uVar5) {
                    /* try { // try from 0057a400 to 0057a40b has its CatchHandler @ 0057a56c */
                    /* WARNING: Subroutine does not return */
    core::cell::panic_already_mutably_borrowed(&PTR_s__root__cargo_registry_src_index__00ad1e30);
  }
  *puVar7 = uVar5 + 1;
  if (iVar3 == 0) {
    *puVar7 = uVar5;
    goto LAB_0057a3e4;
  }
                    /* try { // try from 0057a414 to 0057a41f has its CatchHandler @ 0057a558 */
  FUN_00578794(&local_70,puVar7[2],iVar3);
  puVar1 = local_60;
  pvVar2 = pvStack_68;
  *puVar7 = *puVar7 - 1;
  if (local_70 == 0xffffffffffffffff) goto LAB_0057a3e4;
  uVar5 = local_70 ^ 0x8000000000000000;
  if (-1 < (long)local_70) {
    uVar5 = 0x14;
  }
  if ((long)uVar5 < 7) {
    if ((long)uVar5 < 5) {
      if (uVar5 != 0) {
        if (uVar5 != 2) goto LAB_0057a3e4;
        if ((code *)*local_60 != (code *)0x0) {
                    /* try { // try from 0057a4b0 to 0057a4b7 has its CatchHandler @ 0057a53c */
          (*(code *)*local_60)(pvStack_68);
        }
LAB_0057a520:
        if (puVar1[1] != 0) {
          free(pvVar2);
        }
        goto LAB_0057a3e4;
      }
      if (pvStack_68 == (void *)0xffffffffffffffff) goto LAB_0057a3e4;
    }
    else if ((uVar5 != 5) && (uVar5 != 6)) goto LAB_0057a3e4;
  }
  else if ((long)uVar5 < 0xd) {
    if ((uVar5 != 7) && (uVar5 != 0xc)) goto LAB_0057a3e4;
  }
  else if (uVar5 != 0xd) {
    if (uVar5 == 0xf) {
      if ((code *)*local_60 != (code *)0x0) {
                    /* try { // try from 0057a518 to 0057a51f has its CatchHandler @ 0057a538 */
        (*(code *)*local_60)(pvStack_68);
      }
      goto LAB_0057a520;
    }
    if (uVar5 != 0x14) goto LAB_0057a3e4;
    puVar1 = local_50;
    pvVar2 = local_58;
    if (local_70 != 0) {
      free(pvStack_68);
      puVar1 = local_50;
      pvVar2 = local_58;
    }
  }
  if (pvVar2 != (void *)0x0) {
    free(puVar1);
  }
LAB_0057a3e4:
  FUN_0057a254(puVar6);
  return;
}


// ===== 0057a584  rusqlite::len_as_c_int =====

/* WARNING: Unknown calling convention: __rustcall */
/* rusqlite::len_as_c_int */

void __rustcall rusqlite::len_as_c_int(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x7fffffff) {
    *(int *)(param_1 + 1) = (int)param_2;
    *param_1 = 0xffffffffffffffff;
    return;
  }
  param_1[1] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 4) = 0x12;
  *(undefined1 *)((long)param_1 + 0x24) = 0xf;
  *param_1 = 0x8000000000000000;
  return;
}


// ===== 0057a5c4  rusqlite::str_for_sqlite =====

/* WARNING: Unknown calling convention: __rustcall */
/* rusqlite::str_for_sqlite */

void __rustcall rusqlite::str_for_sqlite(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 0x7fffffff) {
    *(int *)(param_1 + 2) = (int)param_3;
    if (param_3 == 0) {
      param_2 = 1;
    }
    param_1[3] = -(ulong)(param_3 != 0);
    *param_1 = 0xffffffffffffffff;
    param_1[1] = param_2;
    return;
  }
  *(undefined4 *)(param_1 + 4) = 0x12;
  *(undefined1 *)((long)param_1 + 0x24) = 0xf;
  *param_1 = 0x8000000000000000;
  param_1[1] = 0xffffffffffffffff;
  return;
}


// ===== 0057a614  rusqlite::path_to_cstring =====

/* WARNING: Unknown calling convention: __rustcall */
/* rusqlite::path_to_cstring */

void __rustcall rusqlite::path_to_cstring(undefined8 *param_1)

{
  long local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  
  <&[u8]as<alloc::ffi::c_str::alloc::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl
            (&local_40);
  if (local_40 != -1) {
    param_1[3] = local_30;
    param_1[4] = local_28;
    param_1[1] = local_40;
    param_1[2] = uStack_38;
    *param_1 = 0x8000000000000005;
    return;
  }
  param_1[1] = uStack_38;
  param_1[2] = local_30;
  *param_1 = 0xffffffffffffffff;
  return;
}


// ===== 0057a688  <rusqlite::busy::rusqlite::Connection>::busy_handler =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::busy::rusqlite::Connection>::busy_handler */

void __rustcall
<rusqlite::busy::rusqlite::Connection>::busy_handler(undefined8 *param_1,long *param_2,long param_3)

{
  int iVar1;
  long *unaff_x19;
  
  if (*param_2 == 0) {
    *param_2 = -1;
    if (param_3 == 0) {
      iVar1 = sqlite3_busy_handler(param_2[2],0,0);
    }
    else {
      iVar1 = sqlite3_busy_handler(param_2[2],FUN_005778ec,param_3);
    }
    if (iVar1 == 0) {
      *param_1 = 0xffffffffffffffff;
    }
    else {
                    /* try { // try from 0057a700 to 0057a707 has its CatchHandler @ 0057a718 */
      FUN_00578794(param_1,param_2[2],iVar1);
    }
    *param_2 = *param_2 + 1;
    return;
  }
  core::cell::panic_already_borrowed(&PTR_s__root__cargo_registry_src_index__00ad1dd0);
                    /* catch() { ... } // from try @ 0057a700 with catch @ 0057a718 */
  *unaff_x19 = *unaff_x19 + 1;
                    /* WARNING: Subroutine does not return */
  FUN_00ab2530();
}


// ===== 0057a728  <rusqlite::busy::rusqlite::Connection>::busy_timeout =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::busy::rusqlite::Connection>::busy_timeout */

void __rustcall
<rusqlite::busy::rusqlite::Connection>::busy_timeout
          (undefined8 *param_1,long *param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_3;
  if (SUB168(auVar2 * ZEXT816(1000),8) != 0) {
LAB_0057a7ac:
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed(&DAT_002c5245,7,&PTR_s__root__cargo_registry_src_index__00ad1e00);
  }
  uVar1 = (param_4 & 0xffffffff) / 1000000;
  if ((CARRY8(param_3 * 1000,uVar1)) || (param_3 * 1000 + uVar1 >> 0x1f != 0)) goto LAB_0057a7ac;
  if (*param_2 == 0) {
    *param_2 = -1;
    iVar3 = sqlite3_busy_timeout(param_2[2]);
    if (iVar3 == 0) {
      *param_1 = 0xffffffffffffffff;
      goto LAB_0057a790;
    }
  }
  else {
    iVar3 = core::cell::panic_already_borrowed(&PTR_s__root__cargo_registry_src_index__00ad1de8);
  }
                    /* try { // try from 0057a7d8 to 0057a7df has its CatchHandler @ 0057a7e4 */
  FUN_00578794(param_1,param_2[2],iVar3);
LAB_0057a790:
  *param_2 = *param_2 + 1;
  return;
}


// ===== 0057a7f4  <rusqlite::[1]::rusqlite::Connection>::cache_flush =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::[1]::rusqlite::Connection>::cache_flush */

void __rustcall
<rusqlite::[1]::rusqlite::Connection>::cache_flush(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  undefined8 local_48 [3];
  
  if (*param_2 == 0) {
    unaff_x21 = 0xffffffffffffffff;
    *param_2 = -1;
    uVar1 = sqlite3_db_cacheflush(param_2[2]);
    unaff_x19 = param_2;
    unaff_x20 = param_1;
    if ((int)uVar1 == 0) {
      *param_1 = 0xffffffffffffffff;
      goto LAB_0057a830;
    }
  }
  else {
    uVar1 = core::cell::panic_already_borrowed(&PTR_s__root__cargo_registry_src_index__00ad1e18);
  }
  local_48[0] = unaff_x21;
  rusqlite::error::error_from_sqlite_code(unaff_x20,uVar1,local_48);
LAB_0057a830:
  *unaff_x19 = *unaff_x19 + 1;
  return;
}


// ===== 0057a870  <rusqlite::[1]::rusqlite::Connection>::execute_batch =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::[1]::rusqlite::Connection>::execute_batch */

void __rustcall
<rusqlite::[1]::rusqlite::Connection>::execute_batch
          (undefined8 *param_1,ulong *param_2,char *param_3,ulong param_4)

{
  ulong *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  char *pcVar5;
  ulong uVar6;
  ulong *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  long local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined7 uStack_d8;
  undefined1 uStack_d1;
  undefined7 uStack_d0;
  undefined1 uStack_c9;
  ulong *local_c8;
  undefined1 local_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 local_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 local_90;
  undefined7 uStack_8f;
  undefined8 local_88;
  long local_80;
  undefined1 auStack_71 [17];
  
  if (param_4 != 0) {
    uVar4 = *param_2;
    while (uVar4 == 0) {
      local_80 = 0;
      *param_2 = 0xffffffffffffffff;
      if (0x7ffffffe < param_4) {
        local_a0 = 0x12;
        uVar3 = (uint)uStack_9c >> 8;
        uStack_9c = CONCAT31((int3)uVar3,0xf);
        local_c0 = 0;
        uStack_bf = 0x80000000000000;
        uStack_b8 = 0xff;
        uStack_b7 = 0xffffffffffffff;
LAB_0057aa90:
        uVar4 = *param_2;
        param_1[6] = CONCAT71(uStack_8f,local_90);
        param_1[7] = local_88;
        param_1[1] = CONCAT71(uStack_b7,uStack_b8);
        *param_1 = CONCAT71(uStack_bf,local_c0);
        param_1[3] = CONCAT71(uStack_a7,uStack_a8);
        param_1[2] = CONCAT71(uStack_af,local_b0);
        param_1[5] = CONCAT71(uStack_97,uStack_98);
        param_1[4] = CONCAT44(uStack_9c,local_a0);
        *param_2 = uVar4 + 1;
        return;
      }
      pcVar5 = param_3;
      if (param_4 == 0) {
        pcVar5 = &DAT_00000001;
      }
      uVar4 = param_2[2];
      local_140 = (ulong *)0x0;
      iVar2 = sqlite3_prepare_v3(uVar4,pcVar5,param_4 & 0xffffffff,0,&local_80,&local_140);
      if (iVar2 != 0) {
                    /* try { // try from 0057aa78 to 0057aa8f has its CatchHandler @ 0057ab88 */
        FUN_005788cc(&local_c0,uVar4,iVar2,param_3,param_4);
        goto LAB_0057aa90;
      }
      if ((local_140 == (ulong *)0x0) ||
         (uVar6 = (long)local_140 - (long)pcVar5, (long)param_4 <= (long)uVar6 || (long)uVar6 < 1))
      {
        uVar6 = 0;
      }
      local_c0 = 0;
      uStack_bf = 0;
      uStack_b8 = 0;
      uStack_b7 = 0;
      uStack_a8 = 0;
      uStack_a7 = 0;
      local_a0 = 0;
      uStack_9c = 0;
      uStack_130 = 0;
      local_138 = 0;
      uStack_120 = 0;
      local_90 = (undefined1)local_80;
      uStack_8f = (undefined7)((ulong)local_80 >> 8);
      local_108 = local_80;
      local_118 = 0;
      uStack_d8 = (undefined7)CONCAT71(uStack_97,uStack_98);
      uStack_d1 = (undefined1)((uint7)uStack_97 >> 0x30);
      uStack_d0 = (undefined7)local_80;
      uStack_c9 = (undefined1)((ulong)local_80 >> 0x38);
      *param_2 = *param_2 + 1;
      uStack_110 = CONCAT17(uStack_d1,uStack_d8);
      local_140 = param_2;
      local_100 = local_138;
      uStack_f8 = uStack_130;
      uStack_e8 = uStack_120;
      local_e0 = local_118;
      local_c8 = param_2;
      if ((local_80 != 0) &&
         (uVar3 = sqlite3_step(), puVar1 = local_140, (uVar3 & 0xfffffffe) != 100)) {
        uVar4 = *local_140;
        if (0x7ffffffffffffffe < uVar4) {
                    /* try { // try from 0057aad0 to 0057aadb has its CatchHandler @ 0057ab98 */
                    /* WARNING: Subroutine does not return */
          core::cell::panic_already_mutably_borrowed
                    (&PTR_s__root__cargo_registry_src_index__00ad1e30);
        }
        *local_140 = uVar4 + 1;
        if (uVar3 == 0) {
          *local_140 = uVar4;
        }
        else {
                    /* try { // try from 0057aae4 to 0057aaeb has its CatchHandler @ 0057ab74 */
          FUN_00578794(&local_c8,local_140[2],uVar3);
          *puVar1 = *puVar1 - 1;
          if (local_c8 != (ulong *)0xffffffffffffffff) {
            local_e0 = CONCAT17(uStack_98,CONCAT43(uStack_9c,local_a0._1_3_));
            uStack_e8 = CONCAT17((undefined1)local_a0,uStack_a7);
            local_f0 = CONCAT17(uStack_a8,uStack_af);
            uStack_f8 = CONCAT17(local_b0,uStack_b7);
            local_100 = CONCAT17(uStack_b8,uStack_bf);
            uStack_d0 = uStack_8f;
            uStack_d1 = local_90;
            *param_1 = local_c8;
            *(undefined8 *)((long)param_1 + 0x11) = uStack_f8;
            *(undefined8 *)((long)param_1 + 9) = local_100;
            *(undefined1 *)(param_1 + 1) = local_c0;
            *(undefined8 *)((long)param_1 + 0x21) = uStack_e8;
            *(undefined8 *)((long)param_1 + 0x19) = local_f0;
            *(ulong *)((long)param_1 + 0x31) = CONCAT17(local_90,uStack_97);
            *(undefined8 *)((long)param_1 + 0x29) = local_e0;
            param_1[7] = CONCAT71(uStack_8f,local_90);
            FUN_0057a370(&local_140);
            return;
          }
        }
                    /* try { // try from 0057aa30 to 0057aa53 has its CatchHandler @ 0057ab98 */
                    /* WARNING: Subroutine does not return */
        core::result::unwrap_failed
                  (&DAT_002c5217,0x2e,auStack_71,&DAT_00ad1db0,
                   &PTR_s__root__cargo_registry_src_index__00ad1ea8);
      }
      if ((uVar6 == 0) || (param_4 < uVar6 || param_4 - uVar6 == 0)) goto LAB_0057a9d4;
      iVar2 = (int)param_3[uVar6];
      if (iVar2 + 0x40 < 0 != SCARRY4(iVar2,0x40)) {
                    /* try { // try from 0057ab54 to 0057ab6f has its CatchHandler @ 0057ab98 */
                    /* WARNING: Subroutine does not return */
        core::str::slice_error_fail
                  (param_3,param_4,uVar6,param_4,&PTR_s__root__cargo_registry_src_index__00ad1e48);
      }
      FUN_0057a370(&local_140);
      param_4 = param_4 - uVar6;
      param_3 = param_3 + uVar6;
      uVar4 = *param_2;
    }
    core::cell::panic_already_borrowed(&PTR_s__root__cargo_registry_src_index__00ad1e60);
LAB_0057a9d4:
    FUN_0057a370(&local_140);
  }
  *param_1 = 0xffffffffffffffff;
  return;
}


// ===== 0057abb0  <rusqlite::[1]::rusqlite::Connection>::is_interrupted =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::[1]::rusqlite::Connection>::is_interrupted */

bool __rustcall <rusqlite::[1]::rusqlite::Connection>::is_interrupted(ulong *param_1)

{
  int iVar1;
  
  if (*param_1 < 0x7fffffffffffffff) {
    *param_1 = *param_1 + 1;
    iVar1 = sqlite3_is_interrupted(param_1[2]);
    *param_1 = *param_1 - 1;
    return iVar1 == 1;
  }
                    /* WARNING: Subroutine does not return */
  core::cell::panic_already_mutably_borrowed(&PTR_s__root__cargo_registry_src_index__00ad1e78);
}


// ===== 0057ac0c  <rusqlite::[1]::rusqlite::Connection>::db_name =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::[1]::rusqlite::Connection>::db_name */

void __rustcall
<rusqlite::[1]::rusqlite::Connection>::db_name(undefined8 *param_1,ulong *param_2,size_t param_3)

{
  char *__s;
  size_t sVar1;
  undefined1 *__dest;
  undefined8 uVar2;
  uint local_58 [2];
  void *local_50;
  size_t sStack_48;
  
  if (0x7ffffffffffffffe < *param_2) {
                    /* WARNING: Subroutine does not return */
    core::cell::panic_already_mutably_borrowed(&PTR_s__root__cargo_registry_src_index__00ad1e90);
  }
  __s = (char *)sqlite3_db_name(param_2[2]);
  if (__s == (char *)0x0) {
    uVar2 = 0x8000000000000015;
    sStack_48 = param_3;
  }
  else {
    sVar1 = strlen(__s);
    <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::to_str(local_58,__s,sVar1 + 1);
    if ((local_58[0] & 1) != 0) {
      param_1[2] = sStack_48;
      *param_1 = 0x8000000000000004;
      param_1[1] = local_50;
      return;
    }
    if ((long)sStack_48 < 0) {
      uVar2 = 0;
LAB_0057acb0:
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar2,sStack_48);
    }
    if (sStack_48 == 0) {
      __dest = &DAT_00000001;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar2 = 1;
      __dest = (undefined1 *)FUN_004b25a4(sStack_48,1);
      if (__dest == (undefined1 *)0x0) goto LAB_0057acb0;
      memcpy(__dest,local_50,sStack_48);
    }
    uVar2 = 0xffffffffffffffff;
    param_1[2] = __dest;
    param_1[3] = sStack_48;
  }
  *param_1 = uVar2;
  param_1[1] = sStack_48;
  return;
}


// ===== 0057ad20  <rusqlite::transaction::[4]::rusqlite::Connection>::unchecked_transaction =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::transaction::[4]::rusqlite::Connection>::unchecked_transaction */

void __rustcall
<rusqlite::transaction::[4]::rusqlite::Connection>::unchecked_transaction
          (long *param_1,long param_2)

{
  long local_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long local_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  <rusqlite::[1]::rusqlite::Connection>::execute_batch
            (&local_60,param_2,
             &DAT_002c53d0 + *(int *)(&DAT_002c53d0 + (ulong)*(byte *)(param_2 + 0x68) * 4),
             *(undefined8 *)(&DAT_002c53b8 + (ulong)*(byte *)(param_2 + 0x68) * 8));
  if (local_60 != -1) {
    param_1[1] = lStack_58;
    *param_1 = local_60;
    param_1[3] = lStack_48;
    param_1[2] = lStack_50;
    param_1[5] = lStack_38;
    param_1[4] = local_40;
    param_1[7] = lStack_28;
    param_1[6] = lStack_30;
    return;
  }
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = -1;
  param_1[1] = param_2;
  return;
}


// ===== 0057ada4  <rusqlite::[8]::rusqlite::InterruptHandle>::interrupt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::[8]::rusqlite::InterruptHandle>::interrupt */

void __rustcall <rusqlite::[8]::rusqlite::InterruptHandle>::interrupt(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  int *local_40;
  byte local_38;
  
  lVar7 = *param_1;
  piVar1 = (int *)(lVar7 + 0x10);
  do {
    if (*piVar1 != 0) {
      ClearExclusiveLocal();
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                (lVar7 + 0x10);
      uVar6 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      puVar5 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      goto joined_r0x0057ae80;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar6 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
  puVar5 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
joined_r0x0057ae80:
  PTR_GLOBAL_PANIC_COUNT_00b00bf0 = (undefined *)puVar5;
  if ((uVar6 & 0x7fffffffffffffff) == 0) {
    local_38 = 0;
    cVar3 = *(char *)(lVar7 + 0x14);
  }
  else {
    local_38 = std::panicking::panic_count::is_zero_slow_path();
    local_38 = local_38 ^ 1;
    cVar3 = *(char *)(lVar7 + 0x14);
  }
  if (cVar3 != '\0') {
    local_40 = piVar1;
                    /* try { // try from 0057ae9c to 0057aebf has its CatchHandler @ 0057aec4 */
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              (&DAT_002c51ec,0x2b,&local_40,&PTR_FUN_00ad1d90,
               &PTR_s__root__cargo_registry_src_index__00ad1ec0);
  }
  if (*(long *)(lVar7 + 0x18) != 0) {
    sqlite3_interrupt();
  }
  if ((((local_38 & 1) == 0) && ((*puVar5 & 0x7fffffffffffffff) != 0)) &&
     (uVar6 = std::panicking::panic_count::is_zero_slow_path(), (uVar6 & 1) == 0)) {
    *(undefined1 *)(lVar7 + 0x14) = 1;
  }
  do {
    iVar2 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar2 == 2) {
    <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(piVar1);
    return;
  }
  return;
}


// ===== 0057aedc  <rusqlite::Connection_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::Connection as core::fmt::Debug>::fmt */

void __rustcall <rusqlite::Connection_as_core::fmt::Debug>::fmt(ulong *param_1,undefined8 param_2)

{
  bool bVar1;
  char *__s;
  size_t sVar2;
  undefined1 auStack_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_48,param_2,&DAT_002c5278,10);
  if (0x7ffffffffffffffe < *param_1) {
                    /* WARNING: Subroutine does not return */
    core::cell::panic_already_mutably_borrowed(&PTR_s__root__cargo_registry_src_index__00ad1e90);
  }
  __s = (char *)sqlite3_db_filename(param_1[2],&DAT_002aeb89);
  if (__s == (char *)0x0) {
    local_38 = 0;
  }
  else {
    sVar2 = strlen(__s);
    <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::to_str(&local_38,__s,sVar2 + 1);
    bVar1 = (int)local_38 == 0;
    local_38 = 0;
    if (bVar1) {
      local_38 = local_30;
    }
  }
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_48,&DAT_002bd17c,4,&local_38,&DAT_00ad1ed8);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 0057afa4  <rusqlite::Batch_as_fallible_iterator::FallibleIterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::Batch as fallible_iterator::FallibleIterator>::next */

void __rustcall
<rusqlite::Batch_as_fallible_iterator::FallibleIterator>::next
          (undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  
  uVar1 = param_2[2];
  uVar6 = param_2[3];
  if (uVar6 < uVar1) {
    plVar2 = (long *)*param_2;
    lVar5 = param_2[1];
    do {
      if ((uVar6 != 0) &&
         (iVar3 = (int)*(char *)(lVar5 + uVar6),
         iVar3 == -0x41 || iVar3 + 0x41 < 0 != SCARRY4(iVar3,0x41))) {
                    /* WARNING: Subroutine does not return */
        core::str::slice_error_fail
                  (lVar5,uVar1,uVar6,uVar1,&PTR_s__root__cargo_registry_src_index__00ad1ef8);
      }
      if (*plVar2 != 0) {
        core::cell::panic_already_borrowed(&PTR_s__root__cargo_registry_src_index__00ad1f10);
LAB_0057b13c:
        local_90 = CONCAT35(local_90._5_3_,0xf00000012);
        uStack_b0 = 0x8000000000000000;
        uStack_a8 = 0xffffffffffffffff;
LAB_0057b174:
        lVar5 = *plVar2;
        param_1[7] = local_80;
        param_1[8] = local_78;
        *param_1 = 1;
        param_1[2] = uStack_a8;
        param_1[1] = uStack_b0;
        param_1[4] = uStack_98;
        param_1[3] = uStack_a0;
        param_1[6] = uStack_88;
        param_1[5] = local_90;
        *plVar2 = lVar5 + 1;
        return;
      }
      uVar7 = uVar1 - uVar6;
      *plVar2 = -1;
      local_70 = 0;
      if (0x7ffffffe < uVar7) goto LAB_0057b13c;
      lVar8 = plVar2[2];
      lVar4 = lVar5 + uVar6;
      if (uVar1 == uVar6) {
        lVar4 = 1;
      }
      local_68 = 0;
      iVar3 = sqlite3_prepare_v3(lVar8,lVar4,uVar1 - uVar6,0,&local_70,&local_68);
      if (iVar3 != 0) {
                    /* try { // try from 0057b15c to 0057b173 has its CatchHandler @ 0057b1dc */
        FUN_005788cc(&uStack_b0,lVar8,iVar3,lVar5 + uVar6,uVar7);
        goto LAB_0057b174;
      }
      lVar8 = local_68;
      if (local_68 != 0) {
        lVar4 = local_68 - lVar4;
        lVar8 = 0;
        if (lVar4 < (long)uVar7 && 0 < lVar4) {
          lVar8 = lVar4;
        }
      }
      local_80 = local_70;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      local_90 = 0;
      *plVar2 = *plVar2 + 1;
      uVar7 = lVar8 + uVar6;
      uVar6 = uVar1;
      if (lVar8 != 0) {
        uVar6 = uVar7;
      }
      param_2[3] = uVar6;
      if (local_70 != 0) {
        param_1[2] = 0;
        param_1[1] = plVar2;
        param_1[4] = uStack_a0;
        param_1[3] = 0;
        param_1[6] = 0;
        param_1[5] = 0;
        param_1[8] = local_70;
        param_1[7] = uStack_88;
        goto LAB_0057b10c;
      }
      local_b8 = plVar2;
      FUN_0057a370(&local_b8);
    } while (uVar6 < uVar1);
  }
  param_1[1] = 0;
LAB_0057b10c:
  *param_1 = 0;
  return;
}


// ===== 0057b1ec  <rusqlite::_::InternalBitFlags_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::_::InternalBitFlags as core::fmt::Debug>::fmt */

void __rustcall
<rusqlite::_::InternalBitFlags_as_core::fmt::Debug>::fmt(int *param_1,undefined8 *param_2)

{
  char *local_20;
  undefined *puStack_18;
  
  if (*param_1 != 0) {
    local_20 = (char *)CONCAT44(local_20._4_4_,*param_1);
    FUN_0057552c(&local_20);
    return;
  }
  local_20 = "";
  puStack_18 = PTR_fmt_00b00d90;
  core::fmt::write(*param_2,param_2[1],&DAT_002c5282,&local_20);
  return;
}


// ===== 0057b24c  <rusqlite::_::InternalBitFlags_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::_::InternalBitFlags as core::fmt::Debug>::fmt */

void __rustcall
<rusqlite::_::InternalBitFlags_as_core::fmt::Debug>::fmt(int *param_1,undefined8 *param_2)

{
  char *local_20;
  undefined *puStack_18;
  
  if (*param_1 != 0) {
    local_20 = (char *)CONCAT44(local_20._4_4_,*param_1);
    FUN_0057568c(&local_20);
    return;
  }
  local_20 = "";
  puStack_18 = PTR_fmt_00b00c48;
  core::fmt::write(*param_2,param_2[1],&DAT_002c5282,&local_20);
  return;
}


// ===== 0057b2ac  <rusqlite::OpenFlags_as_core::fmt::LowerHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::OpenFlags as core::fmt::LowerHex>::fmt */

void __rustcall <rusqlite::OpenFlags_as_core::fmt::LowerHex>::fmt(undefined4 *param_1)

{
  undefined4 local_14;
  
  local_14 = *param_1;
  <i32_as_core::fmt::LowerHex>::fmt(&local_14);
  return;
}


// ===== 0057b2d4  <rusqlite::PrepFlags_as_core::fmt::LowerHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::PrepFlags as core::fmt::LowerHex>::fmt */

void __rustcall <rusqlite::PrepFlags_as_core::fmt::LowerHex>::fmt(undefined4 *param_1)

{
  undefined4 local_14;
  
  local_14 = *param_1;
  <u32_as_core::fmt::LowerHex>::fmt(&local_14);
  return;
}


// ===== 0057b2fc  <rusqlite::OpenFlags_as_core::fmt::UpperHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::OpenFlags as core::fmt::UpperHex>::fmt */

void __rustcall <rusqlite::OpenFlags_as_core::fmt::UpperHex>::fmt(undefined4 *param_1)

{
  undefined4 local_14;
  
  local_14 = *param_1;
  <i32_as_core::fmt::UpperHex>::fmt(&local_14);
  return;
}


// ===== 0057b324  <rusqlite::PrepFlags_as_core::fmt::UpperHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::PrepFlags as core::fmt::UpperHex>::fmt */

void __rustcall <rusqlite::PrepFlags_as_core::fmt::UpperHex>::fmt(undefined4 *param_1)

{
  undefined4 local_14;
  
  local_14 = *param_1;
  <u32_as_core::fmt::UpperHex>::fmt(&local_14);
  return;
}


// ===== 0057b34c  FUN_0057b34c =====

void FUN_0057b34c(long *param_1,undefined8 param_2)

{
  long *local_18;
  
  if (*param_1 != 0) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00ad1f28);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 0057b3a4  <rusqlite::_::InternalBitFlags_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::_::InternalBitFlags as core::fmt::Display>::fmt */

void __rustcall <rusqlite::_::InternalBitFlags_as_core::fmt::Display>::fmt(undefined4 *param_1)

{
  undefined4 local_14;
  
  local_14 = *param_1;
  FUN_0057552c(&local_14);
  return;
}


// ===== 0057b3cc  <rusqlite::_::InternalBitFlags_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::_::InternalBitFlags as core::fmt::Display>::fmt */

void __rustcall <rusqlite::_::InternalBitFlags_as_core::fmt::Display>::fmt(undefined4 *param_1)

{
  undefined4 local_14;
  
  local_14 = *param_1;
  FUN_0057568c(&local_14);
  return;
}


// ===== 0057b3f4  <rusqlite::_::InternalBitFlags_as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::_::InternalBitFlags as core::str::traits::FromStr>::from_str */

ulong __rustcall <rusqlite::_::InternalBitFlags_as_core::str::traits::FromStr>::from_str(void)

{
  ulong uVar1;
  
  uVar1 = FUN_005751d8();
  return uVar1 & 0xffffffff0000ff01;
}


// ===== 0057b414  <rusqlite::_::InternalBitFlags_as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::_::InternalBitFlags as core::str::traits::FromStr>::from_str */

ulong __rustcall <rusqlite::_::InternalBitFlags_as_core::str::traits::FromStr>::from_str(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00575318();
  return uVar1 & 0xffffffff0000ff01;
}


// ===== 0057b434  <rusqlite::_::InternalBitFlags_as_core::fmt::Binary>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::_::InternalBitFlags as core::fmt::Binary>::fmt */

void __rustcall <rusqlite::_::InternalBitFlags_as_core::fmt::Binary>::fmt(undefined4 *param_1)

{
  undefined4 local_14;
  
  local_14 = *param_1;
  <i32_as_core::fmt::Binary>::fmt(&local_14);
  return;
}


// ===== 0057b45c  <rusqlite::_::InternalBitFlags_as_core::fmt::Binary>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::_::InternalBitFlags as core::fmt::Binary>::fmt */

void __rustcall <rusqlite::_::InternalBitFlags_as_core::fmt::Binary>::fmt(undefined4 *param_1)

{
  undefined4 local_14;
  
  local_14 = *param_1;
  <u32_as_core::fmt::Binary>::fmt(&local_14);
  return;
}


// ===== 0057b484  <rusqlite::_::InternalBitFlags_as_core::fmt::Octal>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::_::InternalBitFlags as core::fmt::Octal>::fmt */

void __rustcall <rusqlite::_::InternalBitFlags_as_core::fmt::Octal>::fmt(undefined4 *param_1)

{
  undefined4 local_14;
  
  local_14 = *param_1;
  <i32_as_core::fmt::Octal>::fmt(&local_14);
  return;
}


// ===== 0057b4ac  <rusqlite::_::InternalBitFlags_as_core::fmt::Octal>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::_::InternalBitFlags as core::fmt::Octal>::fmt */

void __rustcall <rusqlite::_::InternalBitFlags_as_core::fmt::Octal>::fmt(undefined4 *param_1)

{
  undefined4 local_14;
  
  local_14 = *param_1;
  <u32_as_core::fmt::Octal>::fmt(&local_14);
  return;
}


// ===== 0057b4d4  <rusqlite::_::InternalBitFlags_as_core::fmt::LowerHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::_::InternalBitFlags as core::fmt::LowerHex>::fmt */

void __rustcall <rusqlite::_::InternalBitFlags_as_core::fmt::LowerHex>::fmt(undefined4 *param_1)

{
  undefined4 local_14;
  
  local_14 = *param_1;
  <i32_as_core::fmt::LowerHex>::fmt(&local_14);
  return;
}


// ===== 0057b4fc  <rusqlite::_::InternalBitFlags_as_core::fmt::LowerHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::_::InternalBitFlags as core::fmt::LowerHex>::fmt */

void __rustcall <rusqlite::_::InternalBitFlags_as_core::fmt::LowerHex>::fmt(undefined4 *param_1)

{
  undefined4 local_14;
  
  local_14 = *param_1;
  <u32_as_core::fmt::LowerHex>::fmt(&local_14);
  return;
}


// ===== 0057b524  <rusqlite::_::InternalBitFlags_as_core::fmt::UpperHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::_::InternalBitFlags as core::fmt::UpperHex>::fmt */

void __rustcall <rusqlite::_::InternalBitFlags_as_core::fmt::UpperHex>::fmt(undefined4 *param_1)

{
  undefined4 local_14;
  
  local_14 = *param_1;
  <i32_as_core::fmt::UpperHex>::fmt(&local_14);
  return;
}


// ===== 0057b54c  <rusqlite::_::InternalBitFlags_as_core::fmt::UpperHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::_::InternalBitFlags as core::fmt::UpperHex>::fmt */

void __rustcall <rusqlite::_::InternalBitFlags_as_core::fmt::UpperHex>::fmt(undefined4 *param_1)

{
  undefined4 local_14;
  
  local_14 = *param_1;
  <u32_as_core::fmt::UpperHex>::fmt(&local_14);
  return;
}


// ===== 0057b574  FUN_0057b574 =====

void FUN_0057b574(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"()",2);
  return;
}


// ===== 0057b588  <rusqlite::OpenFlags_as_core::fmt::Binary>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::OpenFlags as core::fmt::Binary>::fmt */

void __rustcall <rusqlite::OpenFlags_as_core::fmt::Binary>::fmt(undefined4 *param_1)

{
  undefined4 local_14;
  
  local_14 = *param_1;
  <i32_as_core::fmt::Binary>::fmt(&local_14);
  return;
}


// ===== 0057b5b0  <rusqlite::PrepFlags_as_core::fmt::Binary>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::PrepFlags as core::fmt::Binary>::fmt */

void __rustcall <rusqlite::PrepFlags_as_core::fmt::Binary>::fmt(undefined4 *param_1)

{
  undefined4 local_14;
  
  local_14 = *param_1;
  <u32_as_core::fmt::Binary>::fmt(&local_14);
  return;
}


// ===== 0057b5d8  <rusqlite::OpenFlags_as_core::fmt::Octal>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::OpenFlags as core::fmt::Octal>::fmt */

void __rustcall <rusqlite::OpenFlags_as_core::fmt::Octal>::fmt(undefined4 *param_1)

{
  undefined4 local_14;
  
  local_14 = *param_1;
  <i32_as_core::fmt::Octal>::fmt(&local_14);
  return;
}


// ===== 0057b600  <rusqlite::PrepFlags_as_core::fmt::Octal>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::PrepFlags as core::fmt::Octal>::fmt */

void __rustcall <rusqlite::PrepFlags_as_core::fmt::Octal>::fmt(undefined4 *param_1)

{
  undefined4 local_14;
  
  local_14 = *param_1;
  <u32_as_core::fmt::Octal>::fmt(&local_14);
  return;
}


// ===== 0057b628  FUN_0057b628 =====

ulong FUN_0057b628(long *param_1,long param_2)

{
  if (param_2 < 0x15) {
    if (param_2 == 0xf) {
      if (*param_1 != 0x4f5f4554494c5153 || *(long *)((long)param_1 + 7) != 0x4952555f4e45504f) {
        return 0;
      }
      return (ulong)DAT_00ad1fa0 << 0x20 | 1;
    }
    if (param_2 == 0x12) {
      if ((*param_1 == 0x4f5f4554494c5153 && param_1[1] == 0x414552435f4e4550) &&
          (short)param_1[2] == 0x4554) {
        return (ulong)DAT_00ad1f88 << 0x20 | 1;
      }
      if ((*param_1 != 0x4f5f4554494c5153 || param_1[1] != 0x4f4d454d5f4e4550) ||
          (short)param_1[2] != 0x5952) {
        return 0;
      }
      return (ulong)DAT_00ad1fb8 << 0x20 | 1;
    }
    if (param_2 == 0x14) {
      if ((*param_1 == 0x4f5f4554494c5153 && param_1[1] == 0x4d5f4f4e5f4e4550) &&
          (int)param_1[2] == 0x58455455) {
        return (ulong)DAT_00ad1fd0 << 0x20 | 1;
      }
      if ((*param_1 != 0x4f5f4554494c5153 || param_1[1] != 0x4f464f4e5f4e4550) ||
          (int)param_1[2] != 0x574f4c4c) {
        return 0;
      }
      return (ulong)DAT_00ad2030 << 0x20 | 1;
    }
  }
  else if (param_2 < 0x18) {
    if (param_2 == 0x15) {
      if ((*param_1 == 0x4f5f4554494c5153 && param_1[1] == 0x444145525f4e4550) &&
          *(long *)((long)param_1 + 0xd) == 0x594c4e4f5f444145) {
        return (ulong)DAT_00ad1f58 << 0x20 | 1;
      }
      if ((*param_1 != 0x4f5f4554494c5153 || param_1[1] != 0x455258455f4e4550) ||
          *(long *)((long)param_1 + 0xd) != 0x45444f4353455258) {
        return 0;
      }
      return (ulong)DAT_00ad2048 << 0x20 | 1;
    }
    if (param_2 == 0x16) {
      if ((*param_1 == 0x4f5f4554494c5153 && param_1[1] == 0x444145525f4e4550) &&
          *(long *)((long)param_1 + 0xe) == 0x45544952575f4441) {
        return (ulong)DAT_00ad1f70 << 0x20 | 1;
      }
      if ((*param_1 != 0x4f5f4554494c5153 || param_1[1] != 0x4c4c55465f4e4550) ||
          *(long *)((long)param_1 + 0xe) != 0x584554554d5f4c4c) {
        return 0;
      }
      return (ulong)DAT_00ad1fe8 << 0x20 | 1;
    }
  }
  else {
    if (param_2 == 0x18) {
      if ((*param_1 != 0x4f5f4554494c5153 || param_1[1] != 0x524148535f4e4550) ||
          param_1[2] != 0x45484341435f4445) {
        return 0;
      }
      return (ulong)DAT_00ad2000 << 0x20 | 1;
    }
    if (param_2 == 0x19) {
      if (((*param_1 != 0x4f5f4554494c5153 || param_1[1] != 0x564952505f4e4550) ||
          param_1[2] != 0x484341435f455441) || (char)param_1[3] != 'E') {
        return 0;
      }
      return (ulong)DAT_00ad2018 << 0x20 | 1;
    }
  }
  return 0;
}


// ===== 0057ba64  FUN_0057ba64 =====

void FUN_0057ba64(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long local_60 [8];
  
                    /* try { // try from 0057ba78 to 0057ba97 has its CatchHandler @ 0057bad8 */
  <rusqlite::inner_connection::rusqlite::inner_connection::InnerConnection>::close
            (local_60,param_1 + 8);
  if (local_60[0] != -1) {
    FUN_0057bf70(local_60);
  }
  plVar3 = *(long **)(param_1 + 8);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<*mut_libsqlite3_sys::bindings::sqlite3>>>
    ::drop_slow(param_1 + 8);
    return;
  }
  return;
}


// ===== 0057bb0c  FUN_0057bb0c =====

void FUN_0057bb0c(long param_1)

{
  char cVar1;
  bool bVar2;
  void *__ptr;
  code *pcVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  void *pvVar8;
  long *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    *(undefined8 *)(param_1 + 0x20) = 0xffffffffffffffff;
    if (*(long *)(param_1 + 0x40) != 0) {
      uVar4 = *(ulong *)(param_1 + 0x30);
      if (uVar4 != 0) {
        memset(*(void **)(param_1 + 0x28),0xff,uVar4 + 9);
        uVar4 = *(ulong *)(param_1 + 0x30);
        if (7 < uVar4) {
          uVar4 = (uVar4 + 1 >> 3) * 7;
        }
      }
      *(ulong *)(param_1 + 0x38) = uVar4;
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    pvVar7 = *(void **)(param_1 + 0x50);
    if (pvVar7 != (void *)0x0) {
      __ptr = *(void **)((long)pvVar7 + 8);
      while (__ptr != pvVar7) {
        uStack_88 = *(undefined8 *)((long)__ptr + 0x18);
        local_90 = *(long **)((long)__ptr + 0x10);
        uStack_78 = *(undefined8 *)((long)__ptr + 0x28);
        uStack_80 = *(undefined8 *)((long)__ptr + 0x20);
        pvVar8 = *(void **)((long)__ptr + 8);
        local_50 = *(undefined8 *)((long)__ptr + 0x50);
        uStack_68 = *(undefined8 *)((long)__ptr + 0x38);
        local_70 = *(undefined8 *)((long)__ptr + 0x30);
        uStack_58 = *(undefined8 *)((long)__ptr + 0x48);
        uStack_60 = *(undefined8 *)((long)__ptr + 0x40);
        do {
          lVar6 = *local_90;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(local_90,0x10);
          if (bVar2) {
            *local_90 = lVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar6 + -1 == 0) {
          DataMemoryBarrier(2,1);
                    /* try { // try from 0057bbcc to 0057bbd3 has its CatchHandler @ 0057bcb4 */
          <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(&local_90);
        }
                    /* try { // try from 0057bbd4 to 0057bbdb has its CatchHandler @ 0057bcc8 */
        FUN_0057bd14(&uStack_80);
        free(__ptr);
        __ptr = pvVar8;
      }
      *(void **)pvVar7 = pvVar7;
      *(void **)((long)pvVar7 + 8) = pvVar7;
    }
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
                    /* try { // try from 0057bc08 to 0057bc27 has its CatchHandler @ 0057bc84 */
    <rusqlite::inner_connection::rusqlite::inner_connection::InnerConnection>::close
              (&local_90,param_1 + 8);
    if (local_90 != (long *)0xffffffffffffffff) {
      FUN_0057bf70(&local_90);
    }
    plVar5 = *(long **)(param_1 + 8);
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 0057bc44 to 0057bc4b has its CatchHandler @ 0057bc7c */
      <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<*mut_libsqlite3_sys::bindings::sqlite3>>>
      ::drop_slow(param_1 + 8);
    }
    FUN_0057be30((long *)(param_1 + 0x20));
    return;
  }
                    /* try { // try from 0057bc6c to 0057bc77 has its CatchHandler @ 0057bcdc */
  core::cell::panic_already_borrowed(&PTR_s__root__cargo_registry_src_index__00ad21a0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x57bc7c);
  (*pcVar3)();
}


// ===== 0057bcfc  FUN_0057bcfc =====

void FUN_0057bcfc(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 0057bd14  FUN_0057bd14 =====

void FUN_0057bd14(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong local_80 [3];
  undefined8 local_68;
  ulong local_60;
  undefined8 local_58;
  long lStack_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38 [2];
  long local_28;
  
  sqlite3_finalize(*(undefined8 *)(param_1 + 0x30));
  lVar4 = *(long *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (lVar4 == 0) {
    local_40 = 0;
  }
  else {
    local_68 = *(undefined8 *)(param_1 + 0x10);
    local_40 = *(undefined8 *)(param_1 + 0x18);
    local_80[1] = 0;
    local_58 = 0;
    local_80[2] = lVar4;
    lStack_50 = lVar4;
    local_48 = local_68;
  }
  local_80[0] = (ulong)(lVar4 != 0);
                    /* try { // try from 0057bd68 to 0057bd73 has its CatchHandler @ 0057bdf4 */
  local_60 = local_80[0];
  FUN_00573a40(local_38,local_80);
  while (local_38[0] != 0) {
    lVar4 = local_38[0] + local_28 * 0x20;
    if (0x10 < *(ulong *)(lVar4 + 0x18)) {
      free(*(void **)(lVar4 + 0x10));
    }
                    /* try { // try from 0057bd78 to 0057bd83 has its CatchHandler @ 0057bdf8 */
    FUN_00573a40(local_38,local_80);
  }
  plVar3 = *(long **)(param_1 + 0x20);
  if (plVar3 != (long *)0x0) {
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow((undefined8 *)(param_1 + 0x20));
      return;
    }
  }
  return;
}


// ===== 0057be30  FUN_0057be30 =====

void FUN_0057be30(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *__ptr;
  void *__ptr_00;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  long *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  pvVar4 = *(void **)(param_1 + 0x30);
  if (pvVar4 != (void *)0x0) {
    __ptr_00 = *(void **)((long)pvVar4 + 8);
    while (__ptr_00 != pvVar4) {
      uStack_88 = *(undefined8 *)((long)__ptr_00 + 0x18);
      local_90 = *(long **)((long)__ptr_00 + 0x10);
      uStack_78 = *(undefined8 *)((long)__ptr_00 + 0x28);
      uStack_80 = *(undefined8 *)((long)__ptr_00 + 0x20);
      pvVar5 = *(void **)((long)__ptr_00 + 8);
      local_50 = *(undefined8 *)((long)__ptr_00 + 0x50);
      uStack_68 = *(undefined8 *)((long)__ptr_00 + 0x38);
      local_70 = *(undefined8 *)((long)__ptr_00 + 0x30);
      uStack_58 = *(undefined8 *)((long)__ptr_00 + 0x48);
      uStack_60 = *(undefined8 *)((long)__ptr_00 + 0x40);
      do {
        lVar3 = *local_90;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(local_90,0x10);
        if (bVar2) {
          *local_90 = lVar3 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar3 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 0057be9c to 0057bea3 has its CatchHandler @ 0057bf3c */
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(&local_90);
      }
                    /* try { // try from 0057bea4 to 0057beab has its CatchHandler @ 0057bf50 */
      FUN_0057bd14(&uStack_80);
      free(__ptr_00);
      __ptr_00 = pvVar5;
    }
    free(pvVar4);
  }
  __ptr = (undefined8 *)*(void **)(param_1 + 0x38);
  while (__ptr != (undefined8 *)0x0) {
    pvVar4 = (void *)*__ptr;
    free(__ptr);
    __ptr = (undefined8 *)pvVar4;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    free((void *)(*(long *)(param_1 + 8) - (*(long *)(param_1 + 0x10) * 8 + 8)));
  }
  return;
}


// ===== 0057bf70  FUN_0057bf70 =====

void FUN_0057bf70(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  void *__ptr;
  
  uVar1 = *param_1;
  uVar2 = uVar1 ^ 0x8000000000000000;
  if (-1 < (long)uVar1) {
    uVar2 = 0x14;
  }
  if ((long)uVar2 < 7) {
    if ((long)uVar2 < 5) {
      if (uVar2 != 0) {
        if (uVar2 != 2) {
          return;
        }
        __ptr = (void *)param_1[1];
        puVar3 = (undefined8 *)param_1[2];
        if ((code *)*puVar3 != (code *)0x0) {
                    /* try { // try from 0057c010 to 0057c017 has its CatchHandler @ 0057c0b0 */
          (*(code *)*puVar3)(__ptr);
        }
        goto LAB_0057c084;
      }
      if (param_1[1] == 0xffffffffffffffff) {
        return;
      }
      if (param_1[1] == 0) {
        return;
      }
      goto LAB_0057c048;
    }
    if ((uVar2 != 5) && (uVar2 != 6)) {
      return;
    }
  }
  else if ((long)uVar2 < 0xd) {
    if ((uVar2 != 7) && (uVar2 != 0xc)) {
      return;
    }
  }
  else if (uVar2 != 0xd) {
    if (uVar2 != 0xf) {
      if (uVar2 != 0x14) {
        return;
      }
      if (uVar1 != 0) {
        free((void *)param_1[1]);
      }
      if (param_1[3] == 0) {
        return;
      }
      free((void *)param_1[4]);
      return;
    }
    __ptr = (void *)param_1[1];
    puVar3 = (undefined8 *)param_1[2];
    if ((code *)*puVar3 != (code *)0x0) {
                    /* try { // try from 0057c07c to 0057c083 has its CatchHandler @ 0057c0ac */
      (*(code *)*puVar3)(__ptr);
    }
LAB_0057c084:
    if (puVar3[1] == 0) {
      return;
    }
    free(__ptr);
    return;
  }
  if (param_1[1] == 0) {
    return;
  }
LAB_0057c048:
  free((void *)param_1[2]);
  return;
}


// ===== 0057c0d4  FUN_0057c0d4 =====

void FUN_0057c0d4(long param_1)

{
  long lVar1;
  ulong local_70 [3];
  undefined8 local_58;
  ulong local_50;
  undefined8 local_48;
  long lStack_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28 [2];
  long local_18;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    local_30 = 0;
  }
  else {
    local_58 = *(undefined8 *)(param_1 + 0x10);
    local_30 = *(undefined8 *)(param_1 + 0x18);
    local_70[1] = 0;
    local_48 = 0;
    local_70[2] = lVar1;
    lStack_40 = lVar1;
    local_38 = local_58;
  }
  local_70[0] = (ulong)(lVar1 != 0);
  local_50 = local_70[0];
  while( true ) {
    FUN_00573a40(local_28,local_70);
    if (local_28[0] == 0) break;
    lVar1 = local_28[0] + local_18 * 0x20;
    if (0x10 < *(ulong *)(lVar1 + 0x18)) {
      free(*(void **)(lVar1 + 0x10));
    }
  }
  return;
}


// ===== 0057c158  <rusqlite::column::rusqlite::statement::Statement>::column_names =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::column::rusqlite::statement::Statement>::column_names */

void __rustcall
<rusqlite::column::rusqlite::statement::Statement>::column_names(long *param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  char *__s;
  size_t sVar6;
  ulong uVar7;
  ulong uVar8;
  long local_c8;
  long lStack_c0;
  long local_b8;
  ulong local_b0;
  ulong uStack_a8;
  long local_a0;
  ulong local_98;
  ulong uStack_90;
  
  uVar5 = sqlite3_column_count(*(undefined8 *)(param_2 + 0x38));
  uVar7 = -(uVar5 >> 0x1f & 1) & 0xfffffff000000000 | (uVar5 & 0xffffffff) << 4;
  uVar8 = 0;
  iVar3 = (int)uVar5;
  if ((-1 < iVar3) && (uVar7 < 0x7ffffffffffffff9)) {
    if (iVar3 == 0) {
      local_b8 = 0;
      local_c8 = 0;
      lStack_c0 = 8;
LAB_0057c2a4:
      param_1[1] = lStack_c0;
      *param_1 = local_c8;
      param_1[2] = local_b8;
      return;
    }
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar8 = 8;
    lStack_c0 = FUN_004b25a4(uVar7,8);
    if (lStack_c0 != 0) {
      local_b8 = 0;
      local_c8 = (long)iVar3;
      iVar4 = sqlite3_column_count(*(undefined8 *)(param_2 + 0x38));
      if (iVar4 < 1) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        do {
          __s = (char *)sqlite3_column_name(*(undefined8 *)(param_2 + 0x38),uVar5 & 0xffffffff);
          if (__s == (char *)0x0) {
                    /* try { // try from 0057c2d4 to 0057c31b has its CatchHandler @ 0057c378 */
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_fmt
                      ("Null pointer from sqlite3_column_name: Out of memory?",0x6b,
                       &PTR_s__root__cargo_registry_src_index__00ad20f8);
          }
          sVar6 = strlen(__s);
          local_a0 = -0x7ffffffffffffff5;
                    /* try { // try from 0057c210 to 0057c24f has its CatchHandler @ 0057c374 */
          local_98 = uVar5;
          FUN_0057bf70(&local_a0);
          <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::to_str(&local_a0,__s,sVar6 + 1);
          uVar8 = uStack_90;
          uVar7 = local_98;
          lVar2 = local_b8;
          if (local_a0 == 1) {
            uStack_a8 = uStack_90;
            local_b0 = local_98;
                    /* WARNING: Subroutine does not return */
            core::result::unwrap_failed
                      ("Invalid UTF-8 sequence in column name",0x25,&local_b0,&DAT_00ad20b8,
                       &PTR_s__root__cargo_registry_src_index__00ad2110);
          }
          if (local_b8 == local_c8) {
            <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<&str>>::grow_one(&local_c8);
          }
          local_b8 = lVar2 + 1;
          puVar1 = (ulong *)(lStack_c0 + lVar2 * 0x10);
          *puVar1 = uVar7;
          puVar1[1] = uVar8;
          if ((long)iVar3 - 1U == uVar5) goto LAB_0057c2a4;
          if (uVar5 == 0x7fffffff) {
            uVar5 = 0x80000000;
            break;
          }
          iVar4 = sqlite3_column_count(*(undefined8 *)(param_2 + 0x38));
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < iVar4);
      }
      local_a0 = -0x7ffffffffffffff5;
                    /* try { // try from 0057c32c to 0057c34f has its CatchHandler @ 0057c35c */
      local_98 = uVar5;
      uStack_90 = uVar8;
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                ("Column out of bounds",0x14,&local_a0,&PTR_FUN_00ad2098,
                 &PTR_s__root__cargo_registry_src_index__00ad2128);
    }
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar8,uVar7);
}


// ===== 0057c3a0  <rusqlite::pragma::rusqlite::pragma::Sql>::open_brace =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::pragma::rusqlite::pragma::Sql>::open_brace */

void __rustcall <rusqlite::pragma::rusqlite::pragma::Sql>::open_brace(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if (*param_1 == lVar1) {
    FUN_00572f14(param_1,lVar1,1,1,1);
  }
  *(undefined1 *)(param_1[1] + lVar1) = 0x28;
  param_1[2] = lVar1 + 1;
  return;
}


// ===== 0057c3fc  <rusqlite::pragma::rusqlite::pragma::Sql>::push_value =====

/* WARNING: Removing unreachable block (ram,0x0057c48c) */
/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::pragma::rusqlite::pragma::Sql>::push_value */

void __rustcall
<rusqlite::pragma::rusqlite::pragma::Sql>::push_value
          (undefined8 *param_1,long *param_2,undefined8 param_3,long param_4)

{
  undefined1 *__n;
  undefined **ppuVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined ***pppuVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined ***local_f8;
  undefined **local_f0;
  undefined **local_e8;
  undefined **ppuStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined **local_b8;
  undefined **local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined **local_88;
  undefined **local_80;
  undefined **local_78;
  ulong uStack_70;
  undefined1 uStack_61;
  
  ppuVar4 = (undefined **)(**(code **)(param_4 + 0x18))(&local_f8,param_3);
  ppuVar2 = local_e8;
  ppuVar1 = local_f0;
  local_b8 = local_f0;
  if (local_f8 != (undefined ***)0xffffffffffffffff) {
    param_1[2] = local_e8;
    param_1[3] = ppuStack_e0;
    param_1[4] = local_d8;
    param_1[6] = uStack_c8;
    param_1[5] = local_d0;
    param_1[7] = local_c0;
    *param_1 = local_f8;
    param_1[1] = local_f0;
    return;
  }
  ppuVar5 = ppuStack_e0;
  if ((long)local_f0 < 2) {
    if (local_f0 == (undefined **)0xffffffffffffffff) {
      local_b8 = local_e8;
      local_b0 = ppuStack_e0;
      ppuVar4 = ppuStack_e0;
      local_a8 = local_d8;
      if (local_e8 == (undefined **)&DAT_00000001) goto LAB_0057c4b8;
    }
    else {
      if (local_f0 != (undefined **)0x0) goto LAB_0057c4ec;
      ppuVar5 = (undefined **)0xffffffffffffffff;
    }
LAB_0057c504:
    if (local_b8 != (undefined **)0x2) {
      if (local_b8 == (undefined **)0x3) {
                    /* try { // try from 0057c514 to 0057c51b has its CatchHandler @ 0057c828 */
        core::str::converts::from_utf8(&local_f8,ppuVar4);
        if (((ulong)local_f8 & 1) == 0) {
          FUN_0057cbdc(param_2,local_f0,local_e8,0x27);
          goto LAB_0057c70c;
        }
        param_1[2] = local_e8;
        *param_1 = 0x8000000000000004;
        param_1[1] = local_f0;
      }
      else {
        local_f8 = &local_b8;
        local_f0 = (undefined **)FUN_0057d8b0;
                    /* try { // try from 0057c5d0 to 0057c64b has its CatchHandler @ 0057c828 */
        alloc::fmt::format::format_inner(&local_a0,&DAT_002b838b,&local_f8);
        *param_1 = 0x8000000000000000;
        *(undefined4 *)(param_1 + 4) = 0x15;
        param_1[2] = uStack_98;
        param_1[1] = local_a0;
        param_1[3] = local_90;
        *(undefined1 *)((long)param_1 + 0x24) = 0x12;
      }
      if ((undefined1 *)((long)ppuVar1 + 1) < &DAT_00000004) {
        return;
      }
      goto LAB_0057c720;
    }
    local_80 = (undefined **)0x0;
    local_78 = (undefined **)&DAT_00000001;
    uStack_70 = 0;
    local_e8 = (undefined **)0x60000020;
    local_f8 = &local_80;
    local_f0 = &PTR_FUN_00ad2458;
                    /* try { // try from 0057c564 to 0057c56f has its CatchHandler @ 0057c830 */
    local_88 = ppuVar5;
    iVar3 = <f64_as_core::fmt::Display>::fmt(&local_88,&local_f8);
    uVar6 = uStack_70;
    ppuVar5 = local_78;
    ppuVar4 = local_80;
    if (iVar3 != 0) {
                    /* try { // try from 0057c754 to 0057c777 has its CatchHandler @ 0057c830 */
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                ("a Display implementation returned an error unexpectedly",0x37,&uStack_61,
                 &DAT_00ad20d8,&PTR_s__nix_store_8006w282fgsx3273c878b_00ad2488);
    }
    lVar10 = param_2[2];
    if ((ulong)(*param_2 - lVar10) < uStack_70) {
                    /* try { // try from 0057c7bc to 0057c7d3 has its CatchHandler @ 0057c7ec */
      FUN_00572f14(param_2,lVar10,uStack_70,1,1);
      lVar10 = param_2[2];
LAB_0057c594:
      memcpy((void *)(param_2[1] + lVar10),ppuVar5,uVar6);
    }
    else if (uStack_70 != 0) goto LAB_0057c594;
    param_2[2] = lVar10 + uVar6;
    if (ppuVar4 != (undefined **)0x0) goto LAB_0057c704;
  }
  else {
    if (local_f0 != (undefined **)0x2) {
      local_b0 = ppuStack_e0;
      local_a8 = local_d8;
      ppuVar4 = ppuStack_e0;
      if (local_f0 == (undefined **)&DAT_00000001) goto LAB_0057c4b8;
      goto LAB_0057c504;
    }
LAB_0057c4ec:
    local_b0 = local_e8;
    ppuVar4 = local_e8;
    ppuVar5 = local_e8;
    local_b0 = local_e8;
    if (local_f0 != (undefined **)&DAT_00000001) goto LAB_0057c504;
LAB_0057c4b8:
    ppuVar4 = local_b0;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    if ((long)ppuVar4 < 0) {
      uVar7 = 0x14;
      ppuVar5 = (undefined **)FUN_004b25a4(0x14,1);
      if (ppuVar5 == (undefined **)0x0) goto LAB_0057c7dc;
      pppuVar8 = (undefined ***)&DAT_00000014;
      ppuVar9 = (undefined **)&DAT_00000001;
      local_f8 = (undefined ***)&DAT_00000014;
      ppuVar4 = (undefined **)-(long)ppuVar4;
      *(undefined1 *)ppuVar5 = 0x2d;
      local_e8 = (undefined **)&DAT_00000001;
    }
    else {
      uVar7 = 0x13;
      ppuVar5 = (undefined **)FUN_004b25a4(0x13,1);
      if (ppuVar5 == (undefined **)0x0) {
LAB_0057c7dc:
                    /* try { // try from 0057c7dc to 0057c7e7 has its CatchHandler @ 0057c828 */
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(1,uVar7);
      }
      ppuVar9 = (undefined **)0x0;
      pppuVar8 = (undefined ***)0x13;
      local_f8 = (undefined ***)0x13;
      local_e8 = (undefined **)0x0;
    }
                    /* try { // try from 0057c684 to 0057c693 has its CatchHandler @ 0057c814 */
    local_f0 = ppuVar5;
    auVar11 = <core::fmt::num::imp::[k]::usize>::_fmt(ppuVar4,&local_80,0x13);
    uVar6 = auVar11._8_8_;
    if ((ulong)((long)pppuVar8 - (long)ppuVar9) < uVar6) {
                    /* try { // try from 0057c77c to 0057c793 has its CatchHandler @ 0057c814 */
      FUN_00572f14(&local_f8,ppuVar9,uVar6,1,1);
      ppuVar5 = local_f0;
      ppuVar9 = local_e8;
LAB_0057c6ac:
      memcpy((undefined1 *)((long)ppuVar5 + (long)ppuVar9),auVar11._0_8_,uVar6);
      ppuVar5 = local_f0;
      pppuVar8 = local_f8;
    }
    else if (uVar6 != 0) goto LAB_0057c6ac;
    lVar10 = param_2[2];
    __n = (undefined1 *)((long)ppuVar9 + uVar6);
    if ((undefined1 *)(*param_2 - lVar10) < __n) {
                    /* try { // try from 0057c79c to 0057c7b3 has its CatchHandler @ 0057c800 */
      FUN_00572f14(param_2,lVar10,__n,1,1);
      lVar10 = param_2[2];
LAB_0057c6dc:
      memcpy((void *)(param_2[1] + lVar10),ppuVar5,(size_t)__n);
    }
    else if (__n != (undefined1 *)0x0) goto LAB_0057c6dc;
    param_2[2] = (long)(__n + lVar10);
    if (pppuVar8 == (undefined ***)0x0) goto LAB_0057c70c;
LAB_0057c704:
    free(ppuVar5);
  }
LAB_0057c70c:
  *param_1 = 0xffffffffffffffff;
  if ((undefined1 *)((long)ppuVar1 + 1) < &DAT_00000004) {
    return;
  }
LAB_0057c720:
  if (ppuVar2 != (undefined **)0x0) {
    free(ppuStack_e0);
  }
  return;
}


// ===== 0057c870  <rusqlite::pragma::rusqlite::pragma::Sql>::close_brace =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::pragma::rusqlite::pragma::Sql>::close_brace */

void __rustcall <rusqlite::pragma::rusqlite::pragma::Sql>::close_brace(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if (*param_1 == lVar1) {
    FUN_00572f14(param_1,lVar1,1,1,1);
  }
  *(undefined1 *)(param_1[1] + lVar1) = 0x29;
  param_1[2] = lVar1 + 1;
  return;
}


// ===== 0057c8cc  <rusqlite::pragma::rusqlite::pragma::Sql>::push_pragma =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::pragma::rusqlite::pragma::Sql>::push_pragma */

void __rustcall
<rusqlite::pragma::rusqlite::pragma::Sql>::push_pragma
          (undefined8 *param_1,long *param_2,void *param_3,ulong param_4,char *param_5,ulong param_6
          )

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  char *local_80;
  ulong uStack_78;
  undefined1 *local_70;
  code *pcStack_68;
  
  local_80 = "PRAGMA";
  uStack_78 = 6;
  iVar2 = FUN_0057d204("PRAGMA",6);
  if (iVar2 == 0) {
    pcStack_68 = FUN_0057449c;
    local_70 = (undefined1 *)&local_80;
    alloc::fmt::format::format_inner(param_1 + 1,&DAT_002b9dd0,&local_70);
    *param_1 = 0x8000000000000000;
    *(undefined4 *)(param_1 + 4) = 0x15;
    *(undefined1 *)((long)param_1 + 0x24) = 0x12;
    return;
  }
  lVar6 = param_2[2];
  lVar4 = *param_2;
  if ((ulong)(lVar4 - lVar6) < 6) {
    FUN_00572f14(param_2,lVar6,6,1,1);
    lVar6 = param_2[2];
    lVar4 = *param_2;
  }
  lVar7 = param_2[1];
  lVar1 = lVar6 + 6;
  param_2[2] = lVar1;
  *(undefined4 *)(lVar7 + lVar6) = 0x47415250;
  *(undefined2 *)((undefined4 *)(lVar7 + lVar6) + 1) = 0x414d;
  if (lVar4 == lVar1) {
    FUN_00572f14(param_2,lVar4,1,1,1);
    lVar7 = param_2[1];
    *(undefined1 *)(lVar7 + lVar1) = 0x20;
    param_2[2] = lVar6 + 7;
  }
  else {
    *(undefined1 *)(lVar7 + lVar1) = 0x20;
    param_2[2] = lVar6 + 7;
  }
  lVar4 = lVar6 + 7;
  if (param_3 == (void *)0x0) goto LAB_0057c9ec;
  lVar6 = lVar6 + 7;
  uVar3 = FUN_0057d204(param_3,param_4);
  if ((uVar3 & 1) == 0) {
    FUN_0057cbdc(param_2,param_3,param_4,0x22);
    lVar6 = param_2[2];
  }
  else {
    if ((ulong)(*param_2 - lVar6) < param_4) {
      FUN_00572f14(param_2,lVar6,param_4,1,1);
      lVar7 = param_2[1];
      lVar6 = param_2[2];
LAB_0057c998:
      memcpy((void *)(lVar7 + lVar6),param_3,param_4);
    }
    else if (param_4 != 0) goto LAB_0057c998;
    lVar6 = lVar6 + param_4;
    param_2[2] = lVar6;
  }
  if (*param_2 == lVar6) {
    FUN_00572f14(param_2,lVar6,1,1,1);
  }
  lVar7 = param_2[1];
  lVar4 = lVar6 + 1;
  param_2[2] = lVar4;
  *(undefined1 *)(lVar7 + lVar6) = 0x2e;
LAB_0057c9ec:
  local_80 = param_5;
  uStack_78 = param_6;
  if ((param_6 == 0) || (iVar2 = FUN_0057d204(param_5,param_6), iVar2 == 0)) {
    pcStack_68 = FUN_0057449c;
    local_70 = (undefined1 *)&local_80;
    alloc::fmt::format::format_inner(param_1 + 1,&DAT_002b9dd0,&local_70);
    *(undefined4 *)(param_1 + 4) = 0x15;
    uVar5 = 0x8000000000000000;
    *(undefined1 *)((long)param_1 + 0x24) = 0x12;
  }
  else {
    if ((ulong)(*param_2 - lVar4) < param_6) {
      FUN_00572f14(param_2,lVar4,param_6,1,1);
      lVar7 = param_2[1];
      lVar4 = param_2[2];
    }
    memcpy((void *)(lVar7 + lVar4),param_5,param_6);
    param_2[2] = lVar4 + param_6;
    uVar5 = 0xffffffffffffffff;
  }
  *param_1 = uVar5;
  return;
}


// ===== 0057cb80  <rusqlite::pragma::rusqlite::pragma::Sql>::push_equal_sign =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::pragma::rusqlite::pragma::Sql>::push_equal_sign */

void __rustcall <rusqlite::pragma::rusqlite::pragma::Sql>::push_equal_sign(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if (*param_1 == lVar1) {
    FUN_00572f14(param_1,lVar1,1,1,1);
  }
  *(undefined1 *)(param_1[1] + lVar1) = 0x3d;
  param_1[2] = lVar1 + 1;
  return;
}


// ===== 0057cbdc  FUN_0057cbdc =====

void FUN_0057cbdc(long *param_1,byte *param_2,long param_3,uint param_4)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  byte bVar5;
  undefined1 uVar6;
  long lVar7;
  byte bVar8;
  byte *pbVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  
  lVar11 = param_1[2];
  uVar6 = (undefined1)param_4;
  if (*param_1 == lVar11) {
    FUN_00572f14(param_1,lVar11,1,1,1);
    lVar7 = param_1[1];
    param_1[2] = lVar11 + 1;
    *(undefined1 *)(lVar7 + lVar11) = uVar6;
  }
  else {
    lVar7 = param_1[1];
    param_1[2] = lVar11 + 1;
    *(undefined1 *)(lVar7 + lVar11) = uVar6;
  }
  lVar10 = lVar11 + 1;
  if (param_3 != 0) {
    lVar10 = lVar11 + 1;
    pbVar1 = param_2 + param_3;
    do {
      uVar12 = (uint)*param_2;
      pbVar9 = param_2 + 1;
      if ((char)*param_2 < '\0') {
        if (uVar12 < 0xe0) {
          uVar12 = param_2[1] & 0x3f | (uVar12 & 0x1f) << 6;
          pbVar9 = param_2 + 2;
          goto joined_r0x0057cd9c;
        }
        uVar4 = param_2[2] & 0x3f | (param_2[1] & 0x3f) << 6;
        if (uVar12 < 0xf0) {
          uVar12 = uVar4 | (uVar12 & 0x1f) << 0xc;
          pbVar9 = param_2 + 3;
          goto joined_r0x0057cd9c;
        }
        pbVar9 = param_2 + 3;
        param_2 = param_2 + 4;
        uVar12 = *pbVar9 & 0x3f | uVar4 << 6 | (uVar12 & 7) << 0x12;
        uVar13 = (ulong)uVar12;
        if (uVar12 == param_4) goto LAB_0057cc68;
LAB_0057cd44:
        uVar12 = (uint)uVar13;
joined_r0x0057cd48:
        if (0x7f < uVar12) goto LAB_0057cc88;
LAB_0057cd4c:
        if (*param_1 == lVar10) {
          FUN_00572f14(param_1,lVar10,1,1,1);
        }
        lVar7 = param_1[1];
        lVar11 = 1;
        *(char *)(lVar7 + lVar10) = (char)uVar12;
      }
      else {
joined_r0x0057cd9c:
        param_2 = pbVar9;
        uVar13 = (ulong)uVar12;
        if (uVar12 != param_4) goto LAB_0057cd44;
LAB_0057cc68:
        uVar12 = (uint)uVar13;
        if (*param_1 != lVar10) {
          *(undefined1 *)(lVar7 + lVar10) = uVar6;
          lVar10 = lVar10 + 1;
          param_1[2] = lVar10;
          goto joined_r0x0057cd48;
        }
        FUN_00572f14(param_1,lVar10,1,1,1);
        *(undefined1 *)(param_1[1] + lVar10) = uVar6;
        lVar10 = lVar10 + 1;
        param_1[2] = lVar10;
        if (uVar12 < 0x80) goto LAB_0057cd4c;
LAB_0057cc88:
        uVar12 = (uint)uVar13;
        uVar2 = 3;
        if (0xffff < uVar12) {
          uVar2 = 4;
        }
        uVar3 = 2;
        if (0x7ff < uVar12) {
          uVar3 = uVar2;
        }
        if ((ulong)(*param_1 - lVar10) < uVar3) {
          FUN_00572f14(param_1,lVar10,uVar3,1,1);
          lVar7 = param_1[1];
          bVar8 = (byte)uVar13 & 0x3f | 0x80;
          pbVar9 = (byte *)(lVar7 + lVar10);
          if (uVar12 < 0x800) goto LAB_0057cc28;
LAB_0057ccc0:
          bVar5 = (byte)(uVar12 >> 6) & 0x3f | 0x80;
          if (uVar12 >> 0x10 != 0) {
            pbVar9[2] = bVar5;
            pbVar9[3] = bVar8;
            lVar11 = 4;
            *pbVar9 = (byte)(uVar12 >> 0x12) | 0xf0;
            pbVar9[1] = (byte)(uVar12 >> 0xc) & 0x3f | 0x80;
            goto LAB_0057cc3c;
          }
          pbVar9[1] = bVar5;
          pbVar9[2] = bVar8;
          lVar11 = 3;
          bVar8 = (byte)(uVar12 >> 0xc) | 0xe0;
        }
        else {
          lVar7 = param_1[1];
          bVar8 = (byte)uVar13 & 0x3f | 0x80;
          pbVar9 = (byte *)(lVar7 + lVar10);
          if (0x7ff < uVar12) goto LAB_0057ccc0;
LAB_0057cc28:
          pbVar9[1] = bVar8;
          lVar11 = 2;
          bVar8 = (byte)(uVar13 >> 6) | 0xc0;
        }
        *pbVar9 = bVar8;
      }
LAB_0057cc3c:
      lVar10 = lVar11 + lVar10;
      param_1[2] = lVar10;
    } while (param_2 != pbVar1);
  }
  if (*param_1 == lVar10) {
    FUN_00572f14(param_1,lVar10,1,1,1);
    lVar7 = param_1[1];
  }
  *(undefined1 *)(lVar7 + lVar10) = uVar6;
  param_1[2] = lVar10 + 1;
  return;
}


// ===== 0057cf04  <rusqlite::statement::rusqlite::statement::Statement>::expanded_sql =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::statement::rusqlite::statement::Statement>::expanded_sql */

void __rustcall
<rusqlite::statement::rusqlite::statement::Statement>::expanded_sql(size_t *param_1,long param_2)

{
  char *__s;
  size_t sVar1;
  undefined1 *__dest;
  undefined8 uVar2;
  long local_58;
  void *local_50;
  size_t sStack_48;
  
  __s = (char *)sqlite3_expanded_sql(*(undefined8 *)(param_2 + 0x38));
  if (__s == (char *)0x0) {
    *param_1 = 0xffffffffffffffff;
    return;
  }
  sVar1 = strlen(__s);
                    /* try { // try from 0057cf34 to 0057cf43 has its CatchHandler @ 0057d000 */
  <alloc::ffi::c_str::[D]::core::ffi::c_str::CStr>::to_string_lossy(&local_58,__s,sVar1 + 1);
  if (-1 < (long)sStack_48) {
    if (sStack_48 == 0) {
      __dest = &DAT_00000001;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar2 = 1;
      __dest = (undefined1 *)FUN_004b25a4(sStack_48,1);
      if (__dest == (undefined1 *)0x0) goto LAB_0057cf50;
      memcpy(__dest,local_50,sStack_48);
    }
    if (0 < local_58) {
      free(local_50);
    }
    sqlite3_free(__s);
    *param_1 = sStack_48;
    param_1[1] = (size_t)__dest;
    param_1[2] = sStack_48;
    return;
  }
  uVar2 = 0;
LAB_0057cf50:
                    /* try { // try from 0057cf50 to 0057cf5b has its CatchHandler @ 0057d014 */
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar2,sStack_48);
}


// ===== 0057d040  <rusqlite::statement::rusqlite::statement::Statement>::clear_bindings =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::statement::rusqlite::statement::Statement>::clear_bindings */

void __rustcall <rusqlite::statement::rusqlite::statement::Statement>::clear_bindings(long param_1)

{
  sqlite3_clear_bindings(*(undefined8 *)(param_1 + 0x38));
  return;
}


// ===== 0057d048  <rusqlite::statement::[1]::rusqlite::statement::Statement>::value_ref =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::statement::[1]::rusqlite::statement::Statement>::value_ref */

void __rustcall
<rusqlite::statement::[1]::rusqlite::statement::Statement>::value_ref
          (undefined8 *param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  iVar1 = sqlite3_column_type(uVar4);
  if (iVar1 < 3) {
    if (iVar1 == 1) {
      uVar4 = sqlite3_column_int64(uVar4,param_3);
      *param_1 = 1;
      param_1[1] = uVar4;
      return;
    }
    if (iVar1 == 2) {
      uVar4 = sqlite3_column_double(uVar4,param_3);
      param_1[1] = uVar4;
      *param_1 = 2;
      return;
    }
  }
  else {
    if (iVar1 == 3) {
      lVar3 = sqlite3_column_text(uVar4,param_3);
      iVar1 = sqlite3_column_bytes(uVar4,param_3);
      if (lVar3 != 0) {
        param_1[1] = lVar3;
        param_1[2] = (long)iVar1;
        *param_1 = 3;
        return;
      }
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                ("unexpected SQLITE_TEXT column type with NULL data",99,
                 &PTR_s__root__cargo_registry_src_index__00ad2140);
    }
    if (iVar1 == 4) {
      lVar3 = sqlite3_column_blob(uVar4,param_3);
      uVar2 = sqlite3_column_bytes(uVar4,param_3);
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  ("unexpected negative return from sqlite3_column_bytes",0x69,
                   &PTR_s__root__cargo_registry_src_index__00ad2158);
      }
      if (uVar2 != 0) {
        if (lVar3 != 0) {
          param_1[1] = lVar3;
          param_1[2] = (ulong)uVar2;
          *param_1 = 4;
          return;
        }
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  ("unexpected SQLITE_BLOB column type with NULL data",99,
                   &PTR_s__root__cargo_registry_src_index__00ad2170);
      }
      param_1[1] = 1;
      param_1[2] = 0;
      *param_1 = 4;
      return;
    }
    if (iVar1 == 5) {
      *param_1 = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            ("internal error: entered unreachable code: sqlite3_column_type returned invalid value",
             0xa9,&PTR_s__root__cargo_registry_src_index__00ad2188);
}


// ===== 0057d204  FUN_0057d204 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0057d204(byte *param_1,long param_2)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  
  if (param_2 != 0) {
    pbVar4 = (byte *)0x0;
    pbVar2 = param_1;
    do {
      pbVar3 = pbVar2 + 1;
      uVar5 = (uint)*pbVar2;
      if ((char)*pbVar2 < '\0') {
        if (uVar5 < 0xe0) {
          uVar5 = pbVar2[1] & 0x3f | (uVar5 & 0x1f) << 6;
          pbVar3 = pbVar2 + 2;
          goto joined_r0x0057d284;
        }
        uVar1 = pbVar2[2] & 0x3f | (pbVar2[1] & 0x3f) << 6;
        if (0xef < uVar5) {
          pbVar3 = pbVar2 + 4;
          uVar5 = pbVar2[3] & 0x3f | uVar1 << 6 | (uVar5 & 7) << 0x12;
          goto joined_r0x0057d284;
        }
        uVar5 = uVar1 | (uVar5 & 0x1f) << 0xc;
        pbVar3 = pbVar2 + 3;
        if (pbVar4 != (byte *)0x0) goto LAB_0057d288;
joined_r0x0057d2a0:
        if ((uVar5 != 0x5f) && (((0x19 < uVar5 - 0x41 && (uVar5 < 0x80)) && (0x19 < uVar5 - 0x61))))
        {
          return 0;
        }
      }
      else {
joined_r0x0057d284:
        if (pbVar4 == (byte *)0x0) goto joined_r0x0057d2a0;
LAB_0057d288:
        if ((uVar5 != 0x24) && (9 < uVar5 - 0x30)) goto joined_r0x0057d2a0;
      }
      pbVar4 = pbVar3 + ((long)pbVar4 - (long)pbVar2);
      pbVar2 = pbVar3;
    } while (pbVar3 != param_1 + param_2);
  }
  return 1;
}


// ===== 0057d30c  FUN_0057d30c =====

void FUN_0057d30c(long param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = param_1 + 0x20;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field3_finish
            (param_2,"RawStatement",0xc,"ptr",3,param_1 + 0x30,&DAT_00ad21b8,"cache",5,param_1,
             &PTR_FUN_00ad21d8,"statement_cache_key",0x13,&local_18,&DAT_00ad21f8);
  return;
}


// ===== 0057d398  FUN_0057d398 =====

void FUN_0057d398(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,
             "ParamIndexCacheInternalMalfunctionPermissionDeniedOperationAbortedDatabaseBusyDatabaseLockedOutOfMemoryReadOnlyOperationInterruptedSystemIoFailureDatabaseCorruptNotFoundDiskFullCannotOpenFileLockingProtocolFailedSchemaChangedTooBigConstraintViolationTypeMismatchApiMisuseNoLargeFileSupportAuthorizationForStatementDeniedParameterOutOfRangeNotADatabaseUnknownSqliteFailureSqliteSingleThreadedModeFromSqlConversionFailureIntegralValueOutOfRange"
             ,0xf,&local_18,&DAT_00ad2218);
  return;
}


// ===== 0057d3d8  FUN_0057d3d8 =====

void FUN_0057d3d8(byte *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,&DAT_002c59c8 + *(int *)(&DAT_002c59c8 + (ulong)*param_1 * 4),
             *(undefined8 *)(&DAT_002c5908 + (ulong)*param_1 * 8));
  return;
}


// ===== 0057d400  FUN_0057d400 =====

void FUN_0057d400(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (-1 < lVar1) {
    lVar1 = 0x14;
  }
                    /* WARNING: Could not recover jumptable at 0x0057d438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_0057d43c + (ulong)*(ushort *)(&UNK_002c53dc + lVar1 * 2) * 4))(param_2);
  return;
}


// ===== 0057d888  FUN_0057d888 =====

void FUN_0057d888(byte *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,&DAT_002c5a50 + *(int *)(&DAT_002c5a50 + (ulong)*param_1 * 4),
             *(undefined8 *)(&DAT_002c5a28 + (ulong)*param_1 * 8));
  return;
}


// ===== 0057d8b0  FUN_0057d8b0 =====

void FUN_0057d8b0(long *param_1,undefined8 param_2)

{
  char *pcVar1;
  long lVar2;
  long *local_18;
  
  lVar2 = *param_1;
  if (lVar2 < 2) {
    if (lVar2 == 0) {
      <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"Null",4);
      return;
    }
    local_18 = param_1 + 1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,"Integer",7,&local_18,&DAT_00ad22d8);
    return;
  }
  local_18 = param_1 + 1;
  if (lVar2 != 2) {
    if (lVar2 == 3) {
      pcVar1 = "Text";
    }
    else {
      pcVar1 = "Blob";
    }
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,pcVar1,4,&local_18,&DAT_00ad2418);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,"Real",4,&local_18,&DAT_00ad23f8);
  return;
}


// ===== 0057d998  FUN_0057d998 =====

void FUN_0057d998(long param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = param_1 + 8;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
            (param_2,
             "Utf8ErrorInvalidParameterNameInvalidPathExecuteReturnedResultsQueryReturnedNoRowsQueryReturnedMoreThanOneRowInvalidColumnIndexInvalidColumnNameInvalidColumnTypeStatementChangedRowsToSqlConversionFailureInvalidQueryUnwindingPanicMultipleStatementInvalidParameterCount"
             ,9,"valid_up_to",0xb,param_1,&DAT_00ad2278,"error_len",9,&local_18,&DAT_00ad2438);
  return;
}


// ===== 0057da08  FUN_0057da08 =====

void FUN_0057da08(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"Error",5);
  return;
}


// ===== 0057da1c  FUN_0057da1c =====

undefined8 FUN_0057da1c(long *param_1,uint param_2)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = param_1[2];
  if (param_2 < 0x80) {
    if (*param_1 == lVar7) {
      FUN_00572f14(param_1,lVar7,1,1,1);
    }
    *(byte *)(param_1[1] + lVar7) = (byte)param_2;
    lVar6 = 1;
  }
  else {
    uVar2 = 3;
    if (0xffff < param_2) {
      uVar2 = 4;
    }
    uVar3 = 2;
    if (0x7ff < param_2) {
      uVar3 = uVar2;
    }
    if ((ulong)(*param_1 - lVar7) < uVar3) {
      FUN_00572f14(param_1,lVar7,uVar3,1,1);
    }
    bVar4 = (byte)param_2 & 0x3f | 0x80;
    pbVar1 = (byte *)(param_1[1] + lVar7);
    if (param_2 < 0x800) {
      pbVar1[1] = bVar4;
      lVar6 = 2;
      *pbVar1 = (byte)(param_2 >> 6) | 0xc0;
    }
    else {
      bVar5 = (byte)(param_2 >> 6) & 0x3f | 0x80;
      if (param_2 >> 0x10 == 0) {
        pbVar1[1] = bVar5;
        pbVar1[2] = bVar4;
        lVar6 = 3;
        *pbVar1 = (byte)(param_2 >> 0xc) | 0xe0;
      }
      else {
        pbVar1[2] = bVar5;
        pbVar1[3] = bVar4;
        lVar6 = 4;
        pbVar1[1] = (byte)(param_2 >> 0xc) & 0x3f | 0x80;
        *pbVar1 = (byte)(param_2 >> 0x12) | 0xf0;
      }
    }
  }
  param_1[2] = lVar6 + lVar7;
  return 0;
}


// ===== 0057db60  FUN_0057db60 =====

undefined8 FUN_0057db60(long *param_1,void *param_2,ulong param_3)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if ((ulong)(*param_1 - lVar1) < param_3) {
    FUN_00572f14(param_1,lVar1,param_3,1,1);
    lVar1 = param_1[2];
  }
  else if (param_3 == 0) goto LAB_0057dba0;
  memcpy((void *)(param_1[1] + lVar1),param_2,param_3);
LAB_0057dba0:
  param_1[2] = lVar1 + param_3;
  return 0;
}


// ===== 0057dbe4  FUN_0057dbe4 =====

void FUN_0057dbe4(undefined8 param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <usize_as_core::fmt::LowerHex>::fmt();
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <usize_as_core::fmt::Display>::fmt();
    return;
  }
  <usize_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 0057dbfc  <rusqlite::statement::Statement_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rusqlite::statement::Statement as core::fmt::Debug>::fmt */

void __rustcall
<rusqlite::statement::Statement_as_core::fmt::Debug>::fmt(undefined8 *param_1,undefined8 param_2)

{
  char *__s;
  size_t sVar1;
  undefined8 uVar2;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  if (param_1[7] == 0) {
    local_58 = 0;
    local_50 = 1;
    uStack_48 = 0;
  }
  else {
    __s = (char *)sqlite3_sql();
    sVar1 = strlen(__s);
    <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::to_str(&local_58,__s,sVar1 + 1);
  }
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_40,param_2,"Statement",9);
  uVar2 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (auStack_40,"conn",4,*param_1,&PTR_FUN_00ad24a0);
  uVar2 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar2,&DAT_002bd128,4,param_1 + 1,&PTR_FUN_00ad24c0);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (uVar2,"sql",3,&local_58,&DAT_00ad24e0);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 0057dcd4  FUN_0057dcd4 =====

void FUN_0057dcd4(long param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
            (param_2,"Error",5,&DAT_002bcfe4,4,param_1 + 4,&DAT_00ad2500,"extended_code",0xd,
             &local_18,&DAT_00ad23d8);
  return;
}


// ===== 0057dd40  FUN_0057dd40 =====

void FUN_0057dd40(long param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


// ===== 0057dd54  FUN_0057dd54 =====

void FUN_0057dd54(long *param_1,undefined8 param_2)

{
  long *local_18;
  
  local_18 = param_1 + 1;
  if (*param_1 == 1) {
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,"Err",3,&local_18,&DAT_00ad22f8);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,"Ok",2,&local_18,&DAT_00ad2520);
  return;
}


// ===== 0057ddcc  <u8_as_bitflags::parser::ParseHex>::parse_hex =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u8 as bitflags::parser::ParseHex>::parse_hex */

undefined1  [16] __rustcall
<u8_as_bitflags::parser::ParseHex>::parse_hex(byte *param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_2 != 0) {
    if (param_2 == 1) {
      bVar2 = *param_1;
      uVar5 = 1;
      uVar4 = 2;
      if ((bVar2 == 0x2b) || (bVar2 == 0x2d)) goto LAB_0057dea4;
      uVar5 = (ulong)(bVar2 != 0x2b);
      if (bVar2 == 0x2b) {
        param_1 = param_1 + 1;
      }
    }
    else {
      uVar5 = param_2 - (ulong)(*param_1 == 0x2b);
      if (*param_1 == 0x2b) {
        param_1 = param_1 + 1;
      }
    }
    if (2 < uVar5) {
      uVar4 = 0;
      do {
        if (0xf < ((uint)uVar4 & 0xff)) goto LAB_0057de38;
        bVar2 = *param_1;
        uVar3 = (bVar2 - 0x41 & 0xffffffdf) + 10;
        if (bVar2 < 0x3a) {
          uVar3 = bVar2 - 0x30;
        }
        if (0xf < uVar3) goto LAB_0057de38;
        uVar4 = (ulong)(uVar3 | (uint)uVar4 << 4);
        uVar5 = uVar5 - 1;
        param_1 = param_1 + 1;
      } while (uVar5 != 0);
LAB_0057dea4:
      auVar7._4_4_ = 0;
      auVar7._0_4_ = (uint)uVar5 & 1;
      auVar7._8_8_ = uVar4;
      return auVar7;
    }
    if (uVar5 == 0) {
      return ZEXT416(0);
    }
    bVar2 = *param_1;
    uVar3 = (bVar2 - 0x41 & 0xffffffdf) + 10;
    if (bVar2 < 0x3a) {
      uVar3 = bVar2 - 0x30;
    }
    if (uVar3 < 0x10) {
      if (uVar5 != 1) {
        bVar2 = param_1[1];
        uVar1 = (bVar2 - 0x41 & 0xffffffdf) + 10;
        if (bVar2 < 0x3a) {
          uVar1 = bVar2 - 0x30;
        }
        if (0xf < uVar1) goto LAB_0057de38;
        uVar3 = uVar1 | uVar3 << 4;
      }
      return ZEXT416(uVar3) << 0x40;
    }
  }
LAB_0057de38:
  auVar6._8_8_ = 2;
  auVar6._0_8_ = 1;
  return auVar6;
}


// ===== 0057def0  <i8_as_bitflags::parser::ParseHex>::parse_hex =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i8 as bitflags::parser::ParseHex>::parse_hex */

undefined1  [16] __rustcall
<i8_as_bitflags::parser::ParseHex>::parse_hex(byte *param_1,ulong param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  if (param_2 == 0) {
LAB_0057e074:
    auVar10._8_8_ = 2;
    auVar10._0_8_ = 1;
    return auVar10;
  }
  uVar7 = param_2 - 1;
  if (uVar7 == 0) {
    bVar2 = *param_1;
    if ((bVar2 == 0x2b) || (bVar2 == 0x2d)) {
      auVar8._8_8_ = 2;
      auVar8._0_8_ = 1;
      return auVar8;
    }
  }
  else {
    bVar2 = *param_1;
  }
  if (bVar2 == 0x2d) {
    if (2 < param_2) {
      uVar5 = 0;
      pbVar6 = param_1 + 1;
      do {
        if (((int)uVar5 - 8U & 0xff) < 0xf0) goto LAB_0057e074;
        bVar2 = *pbVar6;
        uVar3 = (bVar2 - 0x41 & 0xffffffdf) + 10;
        if (bVar2 < 0x3a) {
          uVar3 = bVar2 - 0x30;
        }
        if (0xf < uVar3) goto LAB_0057e074;
        uVar3 = (int)(char)((int)uVar5 << 4) - (int)(char)uVar3;
        uVar5 = (ulong)uVar3;
        if ((int)(char)uVar3 != uVar3) goto LAB_0057e074;
        uVar7 = uVar7 - 1;
        pbVar6 = pbVar6 + 1;
      } while (uVar7 != 0);
      goto LAB_0057e06c;
    }
    if (uVar7 != 0) {
      bVar2 = param_1[1];
      uVar3 = (bVar2 - 0x41 & 0xffffffdf) + 10;
      if (bVar2 < 0x3a) {
        uVar3 = bVar2 - 0x30;
      }
      if (uVar3 < 0x10) {
        return ZEXT416(-uVar3) << 0x40;
      }
      goto LAB_0057e074;
    }
  }
  else {
    if (bVar2 == 0x2b) {
      param_1 = param_1 + 1;
      param_2 = uVar7;
    }
    if (1 < param_2) {
      uVar5 = 0;
      do {
        if ('\a' < (char)uVar5) goto LAB_0057e074;
        bVar2 = *param_1;
        uVar3 = (bVar2 - 0x41 & 0xffffffdf) + 10;
        if (bVar2 < 0x3a) {
          uVar3 = bVar2 - 0x30;
        }
        if (0xf < uVar3) goto LAB_0057e074;
        uVar5 = (ulong)(uVar3 | (int)uVar5 << 4);
        param_2 = param_2 - 1;
        param_1 = param_1 + 1;
      } while (param_2 != 0);
LAB_0057e06c:
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar5;
      return auVar4 << 0x40;
    }
    if (param_2 != 0) {
      bVar2 = *param_1;
      uVar3 = (bVar2 - 0x41 & 0xffffffdf) + 10;
      if (bVar2 < 0x3a) {
        uVar3 = bVar2 - 0x30;
      }
      auVar9._1_7_ = 0;
      auVar9[0] = 0xf < uVar3;
      uVar1 = 2;
      if (uVar3 < 0x10) {
        uVar1 = uVar3;
      }
      auVar9._8_4_ = uVar1;
      auVar9._12_4_ = 0;
      return auVar9;
    }
  }
  return ZEXT816(0);
}


// ===== 0057e084  <u128_as_bitflags::parser::ParseHex>::parse_hex =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u128 as bitflags::parser::ParseHex>::parse_hex */

void __rustcall
<u128_as_bitflags::parser::ParseHex>::parse_hex(undefined1 *param_1,byte *param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_3 != 0) {
    if (param_3 == 1) {
      bVar2 = *param_2;
      if ((bVar2 == 0x2b) || (bVar2 == 0x2d)) goto LAB_0057e0a4;
    }
    else {
      bVar2 = *param_2;
    }
    if (bVar2 == 0x2b) {
      param_2 = param_2 + 1;
    }
    uVar3 = param_3 - (ulong)(bVar2 == 0x2b);
    if (uVar3 < 0x21) {
      uVar4 = 0;
      uVar5 = 0;
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        bVar2 = *param_2;
        uVar1 = (bVar2 - 0x41 & 0xffffffdf) + 10;
        if (bVar2 < 0x3a) {
          uVar1 = bVar2 - 0x30;
        }
        if (0xf < uVar1) goto LAB_0057e0a4;
        uVar5 = uVar4 >> 0x3c | uVar5 << 4;
        uVar4 = (ulong)uVar1 | uVar4 << 4;
        param_2 = param_2 + 1;
      }
    }
    else {
      uVar4 = 0;
      uVar5 = 0;
      do {
        if ((uVar5 & 0xf000000000000000) != 0) goto LAB_0057e0a4;
        bVar2 = *param_2;
        uVar1 = (bVar2 - 0x41 & 0xffffffdf) + 10;
        if (bVar2 < 0x3a) {
          uVar1 = bVar2 - 0x30;
        }
        if (0xf < uVar1) goto LAB_0057e0a4;
        uVar5 = uVar4 >> 0x3c | uVar5 << 4;
        uVar4 = (ulong)uVar1 | uVar4 << 4;
        uVar3 = uVar3 - 1;
        param_2 = param_2 + 1;
      } while (uVar3 != 0);
    }
    *(ulong *)(param_1 + 0x10) = uVar4;
    *(ulong *)(param_1 + 0x18) = uVar5;
    *param_1 = 0;
    return;
  }
LAB_0057e0a4:
  param_1[1] = 2;
  *param_1 = 1;
  return;
}


// ===== 0057e168  <i128_as_bitflags::parser::ParseHex>::parse_hex =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i128 as bitflags::parser::ParseHex>::parse_hex */

void __rustcall
<i128_as_bitflags::parser::ParseHex>::parse_hex(undefined1 *param_1,byte *param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_3 == 0) {
LAB_0057e188:
    param_1[1] = 2;
    *param_1 = 1;
    return;
  }
  uVar6 = param_3 - 1;
  if (uVar6 == 0) {
    bVar3 = *param_2;
    if ((bVar3 == 0x2b) || (bVar3 == 0x2d)) goto LAB_0057e188;
  }
  else {
    bVar3 = *param_2;
  }
  if (bVar3 == 0x2d) {
    if (param_3 < 0x21) {
      if (uVar6 == 0) goto LAB_0057e2b8;
      uVar4 = 0;
      uVar5 = 0;
      pbVar7 = param_2 + 1;
      do {
        bVar3 = *pbVar7;
        uVar1 = (bVar3 - 0x41 & 0xffffffdf) + 10;
        if (bVar3 < 0x3a) {
          uVar1 = bVar3 - 0x30;
        }
        if (0xf < uVar1) goto LAB_0057e188;
        uVar8 = uVar4 * 0x10;
        uVar2 = uVar4 >> 0x3c;
        uVar6 = uVar6 - 1;
        uVar4 = uVar8 - uVar1;
        uVar5 = (uVar2 | uVar5 << 4) - (ulong)(uVar8 < uVar1);
        pbVar7 = pbVar7 + 1;
      } while (uVar6 != 0);
    }
    else {
      uVar4 = 0;
      uVar5 = 0;
      pbVar7 = param_2 + 1;
      do {
        if (uVar5 + 0xf800000000000000 >> 0x3c < 0xf) goto LAB_0057e188;
        bVar3 = *pbVar7;
        uVar1 = (bVar3 - 0x41 & 0xffffffdf) + 10;
        if (bVar3 < 0x3a) {
          uVar1 = bVar3 - 0x30;
        }
        if (0xf < uVar1) goto LAB_0057e188;
        uVar9 = uVar4 * 0x10;
        uVar8 = uVar4 >> 0x3c | uVar5 << 4;
        uVar2 = (ulong)uVar1;
        uVar4 = uVar9 - uVar2;
        uVar5 = uVar8 - (uVar2 > uVar9);
        if (SCARRY8(uVar8,-1) != SCARRY8(uVar8 - 1,(ulong)(uVar2 <= uVar9))) goto LAB_0057e188;
        uVar6 = uVar6 - 1;
        pbVar7 = pbVar7 + 1;
      } while (uVar6 != 0);
    }
  }
  else {
    if (bVar3 == 0x2b) {
      param_2 = param_2 + 1;
      param_3 = uVar6;
    }
    if (param_3 < 0x20) {
      if (param_3 == 0) {
LAB_0057e2b8:
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined8 *)(param_1 + 0x18) = 0;
        *param_1 = 0;
        return;
      }
      uVar4 = 0;
      uVar5 = 0;
      do {
        bVar3 = *param_2;
        uVar1 = (bVar3 - 0x41 & 0xffffffdf) + 10;
        if (bVar3 < 0x3a) {
          uVar1 = bVar3 - 0x30;
        }
        if (0xf < uVar1) goto LAB_0057e188;
        uVar5 = uVar4 >> 0x3c | uVar5 << 4;
        uVar4 = (ulong)uVar1 | uVar4 << 4;
        param_3 = param_3 - 1;
        param_2 = param_2 + 1;
      } while (param_3 != 0);
    }
    else {
      uVar4 = 0;
      uVar5 = 0;
      do {
        if (uVar5 + 0xf800000000000000 >> 0x3c < 0xf) goto LAB_0057e188;
        bVar3 = *param_2;
        uVar1 = (bVar3 - 0x41 & 0xffffffdf) + 10;
        if (bVar3 < 0x3a) {
          uVar1 = bVar3 - 0x30;
        }
        if (0xf < uVar1) goto LAB_0057e188;
        uVar5 = uVar4 >> 0x3c | uVar5 << 4;
        uVar4 = (ulong)uVar1 | uVar4 << 4;
        param_3 = param_3 - 1;
        param_2 = param_2 + 1;
      } while (param_3 != 0);
    }
  }
  *(ulong *)(param_1 + 0x10) = uVar4;
  *(ulong *)(param_1 + 0x18) = uVar5;
  *param_1 = 0;
  return;
}


// ===== 0057e328  <usize_as_bitflags::parser::ParseHex>::parse_hex =====

/* WARNING: Unknown calling convention: __rustcall */
/* <usize as bitflags::parser::ParseHex>::parse_hex */

void __rustcall
<usize_as_bitflags::parser::ParseHex>::parse_hex(undefined1 *param_1,byte *param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_3 != 0) {
    if (param_3 == 1) {
      bVar2 = *param_2;
      if ((bVar2 == 0x2b) || (bVar2 == 0x2d)) goto LAB_0057e348;
    }
    else {
      bVar2 = *param_2;
    }
    if (bVar2 == 0x2b) {
      param_2 = param_2 + 1;
    }
    uVar3 = param_3 - (ulong)(bVar2 == 0x2b);
    if (uVar3 < 0x11) {
      uVar4 = 0;
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        bVar2 = *param_2;
        uVar1 = (bVar2 - 0x41 & 0xffffffdf) + 10;
        if (bVar2 < 0x3a) {
          uVar1 = bVar2 - 0x30;
        }
        if (0xf < uVar1) goto LAB_0057e348;
        uVar4 = (ulong)uVar1 | uVar4 << 4;
        param_2 = param_2 + 1;
      }
    }
    else {
      uVar4 = 0;
      do {
        if (uVar4 >> 0x3c != 0) goto LAB_0057e348;
        bVar2 = *param_2;
        uVar1 = (bVar2 - 0x41 & 0xffffffdf) + 10;
        if (bVar2 < 0x3a) {
          uVar1 = bVar2 - 0x30;
        }
        if (0xf < uVar1) goto LAB_0057e348;
        uVar4 = (ulong)uVar1 | uVar4 << 4;
        uVar3 = uVar3 - 1;
        param_2 = param_2 + 1;
      } while (uVar3 != 0);
    }
    *(ulong *)(param_1 + 8) = uVar4;
    *param_1 = 0;
    return;
  }
LAB_0057e348:
  param_1[1] = 2;
  *param_1 = 1;
  return;
}


// ===== 0057e3fc  <isize_as_bitflags::parser::ParseHex>::parse_hex =====

/* WARNING: Unknown calling convention: __rustcall */
/* <isize as bitflags::parser::ParseHex>::parse_hex */

void __rustcall
<isize_as_bitflags::parser::ParseHex>::parse_hex(undefined1 *param_1,byte *param_2,ulong param_3)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  if (param_3 == 0) {
LAB_0057e41c:
    param_1[1] = 2;
    *param_1 = 1;
    return;
  }
  uVar5 = param_3 - 1;
  if (uVar5 == 0) {
    bVar2 = *param_2;
    if ((bVar2 == 0x2b) || (bVar2 == 0x2d)) goto LAB_0057e41c;
  }
  else {
    bVar2 = *param_2;
  }
  if (bVar2 == 0x2d) {
    param_2 = param_2 + 1;
    uVar3 = 0;
    if (param_3 < 0x11) {
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        bVar2 = *param_2;
        uVar1 = (bVar2 - 0x41 & 0xffffffdf) + 10;
        if (bVar2 < 0x3a) {
          uVar1 = bVar2 - 0x30;
        }
        if (0xf < uVar1) goto LAB_0057e41c;
        uVar3 = uVar3 * 0x10 - (ulong)uVar1;
        param_2 = param_2 + 1;
      }
    }
    else {
      do {
        if (uVar3 + 0xf800000000000000 >> 0x3c < 0xf) goto LAB_0057e41c;
        bVar2 = *param_2;
        uVar1 = (bVar2 - 0x41 & 0xffffffdf) + 10;
        if (bVar2 < 0x3a) {
          uVar1 = bVar2 - 0x30;
        }
        if ((0xf < uVar1) ||
           (lVar4 = uVar3 * 0x10, uVar3 = lVar4 - (ulong)uVar1, SBORROW8(lVar4,(ulong)uVar1)))
        goto LAB_0057e41c;
        uVar5 = uVar5 - 1;
        param_2 = param_2 + 1;
      } while (uVar5 != 0);
    }
  }
  else {
    if (bVar2 == 0x2b) {
      param_2 = param_2 + 1;
      param_3 = uVar5;
    }
    if (param_3 < 0x10) {
      uVar3 = 0;
      for (; param_3 != 0; param_3 = param_3 - 1) {
        bVar2 = *param_2;
        uVar1 = (bVar2 - 0x41 & 0xffffffdf) + 10;
        if (bVar2 < 0x3a) {
          uVar1 = bVar2 - 0x30;
        }
        if (0xf < uVar1) goto LAB_0057e41c;
        uVar3 = (ulong)uVar1 | uVar3 << 4;
        param_2 = param_2 + 1;
      }
    }
    else {
      uVar3 = 0;
      do {
        if (uVar3 + 0xf800000000000000 >> 0x3c < 0xf) goto LAB_0057e41c;
        bVar2 = *param_2;
        uVar1 = (bVar2 - 0x41 & 0xffffffdf) + 10;
        if (bVar2 < 0x3a) {
          uVar1 = bVar2 - 0x30;
        }
        if (0xf < uVar1) goto LAB_0057e41c;
        uVar3 = (ulong)uVar1 | uVar3 << 4;
        param_3 = param_3 - 1;
        param_2 = param_2 + 1;
      } while (param_3 != 0);
    }
  }
  *(ulong *)(param_1 + 8) = uVar3;
  *param_1 = 0;
  return;
}


// ===== 0057e580  <bitflags::parser::ParseError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bitflags::parser::ParseError as core::fmt::Display>::fmt */

undefined8 __rustcall
<bitflags::parser::ParseError_as_core::fmt::Display>::fmt(char *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  
  uVar1 = *param_2;
  pcVar3 = *(code **)(param_2[1] + 0x18);
  if (*param_1 == '\0') {
    uVar2 = (*pcVar3)(uVar1,"encountered empty flag",0x16);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
  }
  else if (*param_1 == '\x01') {
    uVar2 = (*pcVar3)(uVar1,"unrecognized named flag",0x17);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
  }
  else {
    uVar2 = (*pcVar3)(uVar1,&DAT_002a0100,0x10);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}


// ===== 0057e60c  <u16_as_bitflags::parser::ParseHex>::parse_hex =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u16 as bitflags::parser::ParseHex>::parse_hex */

uint __rustcall <u16_as_bitflags::parser::ParseHex>::parse_hex(byte *param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  
  if (param_2 != 0) {
    if (param_2 == 1) {
      bVar2 = *param_1;
      if ((bVar2 == 0x2b) || (bVar2 == 0x2d)) {
        return 0x201;
      }
    }
    else {
      bVar2 = *param_1;
    }
    if (bVar2 == 0x2b) {
      param_1 = param_1 + 1;
    }
    uVar4 = param_2 - (ulong)(bVar2 == 0x2b);
    if (4 < uVar4) {
      uVar3 = 0;
      do {
        if (0xfff < uVar3) {
          return 0x201;
        }
        bVar2 = *param_1;
        uVar1 = (bVar2 - 0x41 & 0xffffffdf) + 10;
        if (bVar2 < 0x3a) {
          uVar1 = bVar2 - 0x30;
        }
        if (0xf < uVar1) {
          return 0x201;
        }
        uVar3 = uVar1 | uVar3 << 4;
        uVar4 = uVar4 - 1;
        param_1 = param_1 + 1;
      } while (uVar4 != 0);
LAB_0057e754:
      return uVar3 << 0x10 | 0x200;
    }
    if (uVar4 == 0) {
      return 0x200;
    }
    bVar2 = *param_1;
    uVar3 = (bVar2 - 0x41 & 0xffffffdf) + 10;
    if (bVar2 < 0x3a) {
      uVar3 = bVar2 - 0x30;
    }
    if (uVar3 < 0x10) {
      if (uVar4 == 1) goto LAB_0057e754;
      bVar2 = param_1[1];
      uVar1 = (bVar2 - 0x41 & 0xffffffdf) + 10;
      if (bVar2 < 0x3a) {
        uVar1 = bVar2 - 0x30;
      }
      if (uVar1 < 0x10) {
        uVar3 = uVar1 | uVar3 << 4;
        if (uVar4 == 2) goto LAB_0057e754;
        bVar2 = param_1[2];
        uVar1 = (bVar2 - 0x41 & 0xffffffdf) + 10;
        if (bVar2 < 0x3a) {
          uVar1 = bVar2 - 0x30;
        }
        if (uVar1 < 0x10) {
          uVar3 = uVar1 | uVar3 << 4;
          if (uVar4 == 3) goto LAB_0057e754;
          bVar2 = param_1[3];
          uVar1 = (bVar2 - 0x41 & 0xffffffdf) + 10;
          if (bVar2 < 0x3a) {
            uVar1 = bVar2 - 0x30;
          }
          if (uVar1 < 0x10) {
            return (uVar1 | uVar3 << 4) << 0x10 | 0x200;
          }
        }
      }
    }
  }
  return 0x201;
}


// ===== 0057e774  <i16_as_bitflags::parser::ParseHex>::parse_hex =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i16 as bitflags::parser::ParseHex>::parse_hex */

uint __rustcall <i16_as_bitflags::parser::ParseHex>::parse_hex(byte *param_1,ulong param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  
  if (param_2 == 0) {
    return 0x201;
  }
  uVar4 = param_2 - 1;
  if (uVar4 == 0) {
    bVar2 = *param_1;
    if ((bVar2 == 0x2b) || (bVar2 == 0x2d)) {
      return 0x201;
    }
  }
  else {
    bVar2 = *param_1;
  }
  if (bVar2 == 0x2d) {
    param_1 = param_1 + 1;
    uVar3 = 0;
    if (param_2 < 5) {
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        bVar2 = *param_1;
        uVar1 = (bVar2 - 0x41 & 0xffffffdf) + 10;
        if (bVar2 < 0x3a) {
          uVar1 = bVar2 - 0x30;
        }
        if (0xf < uVar1) {
          return 0x201;
        }
        uVar3 = uVar3 * 0x10 - uVar1;
        param_1 = param_1 + 1;
      }
    }
    else {
      do {
        if ((uVar3 - 0x800 & 0xffff) < 0xf000) {
          return 0x201;
        }
        bVar2 = *param_1;
        uVar1 = (bVar2 - 0x41 & 0xffffffdf) + 10;
        if (bVar2 < 0x3a) {
          uVar1 = bVar2 - 0x30;
        }
        if (0xf < uVar1) {
          return 0x201;
        }
        uVar3 = (int)(short)(uVar3 << 4) - (int)(short)uVar1;
        if ((int)(short)uVar3 != uVar3) {
          return 0x201;
        }
        uVar4 = uVar4 - 1;
        param_1 = param_1 + 1;
      } while (uVar4 != 0);
    }
  }
  else {
    if (bVar2 == 0x2b) {
      param_1 = param_1 + 1;
      param_2 = uVar4;
    }
    if (param_2 < 4) {
      if (param_2 == 0) {
        return 0x200;
      }
      bVar2 = *param_1;
      uVar3 = (bVar2 - 0x41 & 0xffffffdf) + 10;
      if (bVar2 < 0x3a) {
        uVar3 = bVar2 - 0x30;
      }
      if (uVar3 < 0x10) {
        if (param_2 == 1) goto LAB_0057e940;
        bVar2 = param_1[1];
        uVar1 = (bVar2 - 0x41 & 0xffffffdf) + 10;
        if (bVar2 < 0x3a) {
          uVar1 = bVar2 - 0x30;
        }
        if (uVar1 < 0x10) {
          uVar3 = uVar1 | uVar3 << 4;
          if (param_2 == 2) goto LAB_0057e940;
          bVar2 = param_1[2];
          uVar1 = (bVar2 - 0x41 & 0xffffffdf) + 10;
          if (bVar2 < 0x3a) {
            uVar1 = bVar2 - 0x30;
          }
          if (uVar1 < 0x10) {
            return (uVar1 | uVar3 << 4) << 0x10 | 0x200;
          }
        }
      }
      return 0x201;
    }
    uVar3 = 0;
    do {
      if ((uVar3 - 0x800 & 0xffff) < 0xf000) {
        return 0x201;
      }
      bVar2 = *param_1;
      uVar1 = (bVar2 - 0x41 & 0xffffffdf) + 10;
      if (bVar2 < 0x3a) {
        uVar1 = bVar2 - 0x30;
      }
      if (0xf < uVar1) {
        return 0x201;
      }
      uVar3 = uVar1 | uVar3 << 4;
      param_2 = param_2 - 1;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
LAB_0057e940:
  return uVar3 << 0x10 | 0x200;
}


// ===== 0057e960  <u32_as_bitflags::parser::ParseHex>::parse_hex =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u32 as bitflags::parser::ParseHex>::parse_hex */

ulong __rustcall <u32_as_bitflags::parser::ParseHex>::parse_hex(byte *param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  
  if (param_2 != 0) {
    if (param_2 == 1) {
      bVar2 = *param_1;
      if ((bVar2 == 0x2b) || (bVar2 == 0x2d)) {
        return 0x201;
      }
    }
    else {
      bVar2 = *param_1;
    }
    uVar4 = param_2 - (ulong)(bVar2 == 0x2b);
    if (bVar2 == 0x2b) {
      param_1 = param_1 + 1;
    }
    if (8 < uVar4) {
      uVar3 = 0;
      do {
        if (uVar3 >> 0x1c != 0) {
          return 0x201;
        }
        bVar2 = *param_1;
        uVar1 = (bVar2 - 0x41 & 0xffffffdf) + 10;
        if (bVar2 < 0x3a) {
          uVar1 = bVar2 - 0x30;
        }
        if (0xf < uVar1) {
          return 0x201;
        }
        uVar3 = uVar1 | uVar3 << 4;
        uVar4 = uVar4 - 1;
        param_1 = param_1 + 1;
      } while (uVar4 != 0);
LAB_0057eb74:
      return (ulong)uVar3 << 0x20 | 0x200;
    }
    if (uVar4 == 0) {
      return 0x200;
    }
    bVar2 = *param_1;
    uVar3 = (bVar2 - 0x41 & 0xffffffdf) + 10;
    if (bVar2 < 0x3a) {
      uVar3 = bVar2 - 0x30;
    }
    if (uVar3 < 0x10) {
      if (uVar4 == 1) goto LAB_0057eb74;
      bVar2 = param_1[1];
      uVar1 = (bVar2 - 0x41 & 0xffffffdf) + 10;
      if (bVar2 < 0x3a) {
        uVar1 = bVar2 - 0x30;
      }
      if (uVar1 < 0x10) {
        uVar3 = uVar1 | uVar3 << 4;
        if (uVar4 == 2) goto LAB_0057eb74;
        bVar2 = param_1[2];
        uVar1 = (bVar2 - 0x41 & 0xffffffdf) + 10;
        if (bVar2 < 0x3a) {
          uVar1 = bVar2 - 0x30;
        }
        if (uVar1 < 0x10) {
          uVar3 = uVar1 | uVar3 << 4;
          if (uVar4 == 3) goto LAB_0057eb74;
          bVar2 = param_1[3];
          uVar1 = (bVar2 - 0x41 & 0xffffffdf) + 10;
          if (bVar2 < 0x3a) {
            uVar1 = bVar2 - 0x30;
          }
          if (uVar1 < 0x10) {
            uVar3 = uVar1 | uVar3 << 4;
            if (uVar4 == 4) goto LAB_0057eb74;
            bVar2 = param_1[4];
            uVar1 = (bVar2 - 0x41 & 0xffffffdf) + 10;
            if (bVar2 < 0x3a) {
              uVar1 = bVar2 - 0x30;
            }
            if (uVar1 < 0x10) {
              uVar3 = uVar1 | uVar3 << 4;
              if (uVar4 == 5) goto LAB_0057eb74;
              bVar2 = param_1[5];
              uVar1 = (bVar2 - 0x41 & 0xffffffdf) + 10;
              if (bVar2 < 0x3a) {
                uVar1 = bVar2 - 0x30;
              }
              if (uVar1 < 0x10) {
                uVar3 = uVar1 | uVar3 << 4;
                if (uVar4 == 6) goto LAB_0057eb74;
                bVar2 = param_1[6];
                uVar1 = (bVar2 - 0x41 & 0xffffffdf) + 10;
                if (bVar2 < 0x3a) {
                  uVar1 = bVar2 - 0x30;
                }
                if (uVar1 < 0x10) {
                  uVar3 = uVar1 | uVar3 << 4;
                  if (uVar4 == 7) goto LAB_0057eb74;
                  bVar2 = param_1[7];
                  uVar1 = (bVar2 - 0x41 & 0xffffffdf) + 10;
                  if (bVar2 < 0x3a) {
                    uVar1 = bVar2 - 0x30;
                  }
                  if (uVar1 < 0x10) {
                    return (ulong)(uVar1 | uVar3 << 4) << 0x20 | 0x200;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0x201;
}


// ===== 0057eb90  <i32_as_bitflags::parser::ParseHex>::parse_hex =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i32 as bitflags::parser::ParseHex>::parse_hex */

ulong __rustcall <i32_as_bitflags::parser::ParseHex>::parse_hex(byte *param_1,ulong param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  
  if (param_2 == 0) {
    return 0x201;
  }
  uVar5 = param_2 - 1;
  if (uVar5 == 0) {
    bVar2 = *param_1;
    if ((bVar2 == 0x2b) || (bVar2 == 0x2d)) {
      return 0x201;
    }
  }
  else {
    bVar2 = *param_1;
  }
  if (bVar2 == 0x2d) {
    param_1 = param_1 + 1;
    uVar4 = 0;
    if (param_2 < 9) {
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        bVar2 = *param_1;
        uVar1 = (bVar2 - 0x41 & 0xffffffdf) + 10;
        if (bVar2 < 0x3a) {
          uVar1 = bVar2 - 0x30;
        }
        if (0xf < uVar1) {
          return 0x201;
        }
        uVar4 = uVar4 * 0x10 - uVar1;
        param_1 = param_1 + 1;
      }
    }
    else {
      do {
        if (uVar4 + 0xf8000000 >> 0x1c < 0xf) {
          return 0x201;
        }
        bVar2 = *param_1;
        uVar1 = (bVar2 - 0x41 & 0xffffffdf) + 10;
        if (bVar2 < 0x3a) {
          uVar1 = bVar2 - 0x30;
        }
        if (0xf < uVar1) {
          return 0x201;
        }
        iVar3 = uVar4 * 0x10;
        uVar4 = iVar3 - uVar1;
        if (SBORROW4(iVar3,uVar1)) {
          return 0x201;
        }
        uVar5 = uVar5 - 1;
        param_1 = param_1 + 1;
      } while (uVar5 != 0);
    }
  }
  else {
    if (bVar2 == 0x2b) {
      param_1 = param_1 + 1;
      param_2 = uVar5;
    }
    if (param_2 < 8) {
      if (param_2 == 0) {
        return 0x200;
      }
      bVar2 = *param_1;
      uVar4 = (bVar2 - 0x41 & 0xffffffdf) + 10;
      if (bVar2 < 0x3a) {
        uVar4 = bVar2 - 0x30;
      }
      if (uVar4 < 0x10) {
        if (param_2 == 1) goto LAB_0057ee30;
        bVar2 = param_1[1];
        uVar1 = (bVar2 - 0x41 & 0xffffffdf) + 10;
        if (bVar2 < 0x3a) {
          uVar1 = bVar2 - 0x30;
        }
        if (uVar1 < 0x10) {
          uVar4 = uVar1 | uVar4 << 4;
          if (param_2 == 2) goto LAB_0057ee30;
          bVar2 = param_1[2];
          uVar1 = (bVar2 - 0x41 & 0xffffffdf) + 10;
          if (bVar2 < 0x3a) {
            uVar1 = bVar2 - 0x30;
          }
          if (uVar1 < 0x10) {
            uVar4 = uVar1 | uVar4 << 4;
            if (param_2 == 3) goto LAB_0057ee30;
            bVar2 = param_1[3];
            uVar1 = (bVar2 - 0x41 & 0xffffffdf) + 10;
            if (bVar2 < 0x3a) {
              uVar1 = bVar2 - 0x30;
            }
            if (uVar1 < 0x10) {
              uVar4 = uVar1 | uVar4 << 4;
              if (param_2 == 4) goto LAB_0057ee30;
              bVar2 = param_1[4];
              uVar1 = (bVar2 - 0x41 & 0xffffffdf) + 10;
              if (bVar2 < 0x3a) {
                uVar1 = bVar2 - 0x30;
              }
              if (uVar1 < 0x10) {
                uVar4 = uVar1 | uVar4 << 4;
                if (param_2 == 5) goto LAB_0057ee30;
                bVar2 = param_1[5];
                uVar1 = (bVar2 - 0x41 & 0xffffffdf) + 10;
                if (bVar2 < 0x3a) {
                  uVar1 = bVar2 - 0x30;
                }
                if (uVar1 < 0x10) {
                  uVar4 = uVar1 | uVar4 << 4;
                  if (param_2 == 6) goto LAB_0057ee30;
                  bVar2 = param_1[6];
                  uVar1 = (bVar2 - 0x41 & 0xffffffdf) + 10;
                  if (bVar2 < 0x3a) {
                    uVar1 = bVar2 - 0x30;
                  }
                  if (uVar1 < 0x10) {
                    return (ulong)(uVar1 | uVar4 << 4) << 0x20 | 0x200;
                  }
                }
              }
            }
          }
        }
      }
      return 0x201;
    }
    uVar4 = 0;
    do {
      if (uVar4 + 0xf8000000 >> 0x1c < 0xf) {
        return 0x201;
      }
      bVar2 = *param_1;
      uVar1 = (bVar2 - 0x41 & 0xffffffdf) + 10;
      if (bVar2 < 0x3a) {
        uVar1 = bVar2 - 0x30;
      }
      if (0xf < uVar1) {
        return 0x201;
      }
      uVar4 = uVar1 | uVar4 << 4;
      param_2 = param_2 - 1;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
LAB_0057ee30:
  return (ulong)uVar4 << 0x20 | 0x200;
}


// ===== 0057ee4c  foldhash::hash_bytes_long =====

/* WARNING: Unknown calling convention: __rustcall */
/* foldhash::hash_bytes_long */

ulong __rustcall
foldhash::hash_bytes_long
          (ulong *param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,ulong param_6,
          ulong param_7)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  ulong uVar28;
  long lVar29;
  ulong *puVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  
  uVar28 = param_2 & 0x3f;
  if ((param_2 & 0x7fffffffffffffc0) != 0) {
    lVar29 = -(param_2 & 0xffffffffffffffc0);
    puVar30 = param_1;
    do {
      puVar1 = puVar30 + 4;
      puVar4 = puVar30 + 5;
      lVar29 = lVar29 + 0x40;
      uVar31 = *puVar30;
      puVar5 = puVar30 + 1;
      puVar2 = puVar30 + 2;
      puVar6 = puVar30 + 3;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = *puVar1 ^ param_7;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar31 ^ param_3;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = *puVar4 ^ param_7;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = *puVar5 ^ param_4;
      puVar3 = puVar30 + 6;
      puVar7 = puVar30 + 7;
      puVar30 = puVar30 + 8;
      param_4 = SUB168(auVar9 * auVar19,8) ^ (*puVar4 ^ param_7) * (*puVar5 ^ param_4);
      auVar10._8_8_ = 0;
      auVar10._0_8_ = *puVar3 ^ param_7;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = *puVar2 ^ param_5;
      param_3 = SUB168(auVar8 * auVar18,8) ^ (*puVar1 ^ param_7) * (uVar31 ^ param_3);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = *puVar7 ^ param_7;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = *puVar6 ^ param_6;
      param_5 = SUB168(auVar10 * auVar20,8) ^ (*puVar3 ^ param_7) * (*puVar2 ^ param_5);
      param_6 = SUB168(auVar11 * auVar21,8) ^ (*puVar7 ^ param_7) * (*puVar6 ^ param_6);
    } while (lVar29 != 0);
  }
  param_3 = param_3 ^ param_5;
  param_4 = param_4 ^ param_6;
  if (uVar28 != 0) {
    if (uVar28 < 0x11) {
      uVar28 = 0x10;
    }
    if (param_2 < 0x10) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (param_2 - uVar28,param_2,param_2,&PTR_s__root__cargo_registry_src_index__00ad2540);
    }
    param_1 = (ulong *)((long)param_1 + (param_2 - uVar28));
    uVar32 = uVar28 & 0xf;
    uVar31 = uVar28 & 0x30;
    puVar30 = (ulong *)((long)param_1 + (uVar31 - 0x10) + uVar32);
    uVar34 = *puVar30 ^ param_7;
    uVar33 = puVar30[1] ^ param_7;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar34;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = *param_1 ^ param_3;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar33;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = param_1[1] ^ param_4;
    param_3 = SUB168(auVar12 * auVar22,8) ^ uVar34 * (*param_1 ^ param_3);
    param_4 = SUB168(auVar13 * auVar23,8) ^ uVar33 * (param_1[1] ^ param_4);
    if ((uVar31 - 0x10 != 0) && (0x10 < (uVar31 - 0x10 | uVar28 & 0xf))) {
      uVar28 = uVar31 - 0x20;
      puVar30 = (ulong *)((long)param_1 + uVar28 + uVar32);
      uVar34 = *puVar30 ^ param_7;
      uVar33 = puVar30[1] ^ param_7;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar34;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = param_1[2] ^ param_3;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar33;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = param_1[3] ^ param_4;
      param_3 = SUB168(auVar14 * auVar24,8) ^ uVar34 * (param_1[2] ^ param_3);
      param_4 = SUB168(auVar15 * auVar25,8) ^ uVar33 * (param_1[3] ^ param_4);
      if ((uVar28 != 0) && (0x20 < (uVar32 | uVar28))) {
        uVar28 = *(ulong *)((long)param_1 + uVar31 + uVar32 + -0x30) ^ param_7;
        param_7 = *(ulong *)((long)param_1 + uVar31 + uVar32 + -0x28) ^ param_7;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uVar28;
        auVar26._8_8_ = 0;
        auVar26._0_8_ = param_1[4] ^ param_3;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = param_7;
        auVar27._8_8_ = 0;
        auVar27._0_8_ = param_1[5] ^ param_4;
        param_3 = SUB168(auVar16 * auVar26,8) ^ uVar28 * (param_1[4] ^ param_3);
        param_4 = SUB168(auVar17 * auVar27,8) ^ param_7 * (param_1[5] ^ param_4);
      }
    }
  }
  return param_3 ^ param_4;
}


// ===== 0057eff0  foldhash::hash_bytes_medium =====

/* WARNING: Unknown calling convention: __rustcall */
/* foldhash::hash_bytes_medium */

ulong __rustcall
foldhash::hash_bytes_medium(ulong *param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  
  if ((param_2 & 0x7ffffffffffffff0) != 0) {
    lVar5 = -(param_2 & 0xfffffffffffffff0);
    puVar6 = (ulong *)((long)param_1 + (param_2 & 0x7ffffffffffffff0) + (param_2 & 0xf));
    do {
      if (puVar6 <= param_1) break;
      lVar5 = lVar5 + 0x10;
      uVar7 = puVar6[-2] ^ param_5;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar7;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = *param_1 ^ param_3;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = puVar6[-1] ^ param_5;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = param_1[1] ^ param_4;
      param_3 = SUB168(auVar1 * auVar3,8) ^ uVar7 * (*param_1 ^ param_3);
      param_4 = SUB168(auVar2 * auVar4,8) ^ (puVar6[-1] ^ param_5) * (param_1[1] ^ param_4);
      param_1 = param_1 + 2;
      puVar6 = puVar6 + -2;
    } while (lVar5 != 0);
  }
  return param_3 ^ param_4;
}


// ===== 0057f054  <foldhash::seed::global::foldhash::seed::global::GlobalSeed>::init_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <foldhash::seed::global::foldhash::seed::global::GlobalSeed>::init_slow */

void __rustcall <foldhash::seed::global::foldhash::seed::global::GlobalSeed>::init_slow(void)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined *puVar19;
  char cVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  undefined1 auStack_8 [8];
  
  puVar19 = PTR_GLOBAL_SEED_STORAGE_00b00d78;
  pcVar1 = PTR_GLOBAL_SEED_STORAGE_00b00d78 + 0x20;
  cVar20 = *pcVar1;
  if (cVar20 != '\0') goto LAB_0057f184;
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
  if (bVar3) {
    *pcVar1 = '\x01';
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') {
LAB_0057f078:
    auVar4._8_8_ = 0;
    auVar4._0_8_ = auStack_8;
    uVar21 = SUB168(auVar4 * ZEXT816(0xd1310ba698dfb5ac),8) ^ (long)auStack_8 * -0x2ecef45967204a54
             ^ 0x57f214;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar21;
    uVar21 = SUB168(auVar5 * ZEXT816(0xd1310ba698dfb5ac),8) ^ uVar21 * -0x2ecef45967204a54 ^
             (ulong)puVar19;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar21;
    uVar21 = SUB168(auVar6 * ZEXT816(0xd1310ba698dfb5ac),8) ^ uVar21 * -0x2ecef45967204a54;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar21;
    uVar21 = uVar21 * -0x2ecef45967204a54 ^ SUB168(auVar7 * ZEXT816(0xd1310ba698dfb5ac),8);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar21;
    uVar21 = uVar21 * -0x2ecef45967204a54 ^ SUB168(auVar8 * ZEXT816(0xd1310ba698dfb5ac),8);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar21;
    uVar21 = SUB168(auVar9 * ZEXT816(0xd1310ba698dfb5ac),8) ^ uVar21 * -0x2ecef45967204a54;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar21;
    uVar22 = uVar21 * -0x2ecef45967204a54 ^ SUB168(auVar10 * ZEXT816(0xd1310ba698dfb5ac),8);
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar22;
    uVar22 = uVar22 * -0x2ecef45967204a54 ^ SUB168(auVar11 * ZEXT816(0xd1310ba698dfb5ac),8);
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar22;
    uVar22 = SUB168(auVar12 * ZEXT816(0xd1310ba698dfb5ac),8) ^ uVar22 * -0x2ecef45967204a54;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar22;
    uVar23 = uVar22 * -0x2ecef45967204a54 ^ SUB168(auVar13 * ZEXT816(0xd1310ba698dfb5ac),8);
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar23;
    uVar23 = uVar23 * -0x2ecef45967204a54 ^ SUB168(auVar14 * ZEXT816(0xd1310ba698dfb5ac),8);
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar23;
    uVar23 = SUB168(auVar15 * ZEXT816(0xd1310ba698dfb5ac),8) ^ uVar23 * -0x2ecef45967204a54;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar23;
    uVar24 = uVar23 * -0x2ecef45967204a54 ^ SUB168(auVar16 * ZEXT816(0xd1310ba698dfb5ac),8);
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar24;
    uVar24 = uVar24 * -0x2ecef45967204a54 ^ SUB168(auVar17 * ZEXT816(0xd1310ba698dfb5ac),8);
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar24;
    *(ulong *)puVar19 = uVar21 | 0x8000000080000001;
    *(ulong *)(puVar19 + 8) = uVar22 | 0x8000000080000001;
    *(ulong *)(puVar19 + 0x10) = uVar23 | 0x8000000080000001;
    *(ulong *)(puVar19 + 0x18) =
         SUB168(auVar18 * ZEXT816(0xd1310ba698dfb5ac),8) ^ uVar24 * -0x2ecef45967204a54 |
         0x8000000080000001;
    *(undefined4 *)(puVar19 + 0x20) = 2;
    return;
  }
  do {
    while( true ) {
      if (cVar20 == '\x02') {
        return;
      }
      InstructionSynchronizationBarrier();
      cVar20 = puVar19[0x20];
      if (cVar20 != '\0') break;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar19 + 0x20,0x10);
      if (bVar3) {
        puVar19[0x20] = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') goto LAB_0057f078;
    }
LAB_0057f184:
    ClearExclusiveLocal();
  } while( true );
}


// ===== 0057f1b8  foldhash::seed::gen_per_hasher_seed =====

/* WARNING: Unknown calling convention: __rustcall */
/* foldhash::seed::gen_per_hasher_seed */

ulong __rustcall foldhash::seed::gen_per_hasher_seed(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 local_8 [8];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = DAT_00b10338 ^ 0x13198a2e03707344;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_8;
  DAT_00b10338 = SUB168(auVar1 * auVar3,8) ^ (DAT_00b10338 ^ 0x13198a2e03707344) * (long)local_8;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = DAT_00b10338;
  return SUB168(auVar2 * ZEXT816(0xa4093822299f31d0),8) ^ DAT_00b10338 * -0x5bf6c7ddd660ce30;
}


// ===== 0057f214  FUN_0057f214 =====

void FUN_0057f214(ulong *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined1 auStack_8 [8];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = auStack_8;
  uVar16 = SUB168(auVar1 * ZEXT816(0xd1310ba698dfb5ac),8) ^ (long)auStack_8 * -0x2ecef45967204a54 ^
           0x57f214;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar16;
  uVar16 = SUB168(auVar2 * ZEXT816(0xd1310ba698dfb5ac),8) ^ uVar16 * -0x2ecef45967204a54 ^
           (ulong)PTR_GLOBAL_SEED_STORAGE_00b00d78;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar16;
  uVar16 = SUB168(auVar3 * ZEXT816(0xd1310ba698dfb5ac),8) ^ uVar16 * -0x2ecef45967204a54;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar16;
  uVar16 = uVar16 * -0x2ecef45967204a54 ^ SUB168(auVar4 * ZEXT816(0xd1310ba698dfb5ac),8);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar16;
  uVar16 = uVar16 * -0x2ecef45967204a54 ^ SUB168(auVar5 * ZEXT816(0xd1310ba698dfb5ac),8);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar16;
  uVar16 = SUB168(auVar6 * ZEXT816(0xd1310ba698dfb5ac),8) ^ uVar16 * -0x2ecef45967204a54;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar16;
  uVar17 = uVar16 * -0x2ecef45967204a54 ^ SUB168(auVar7 * ZEXT816(0xd1310ba698dfb5ac),8);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar17;
  uVar17 = uVar17 * -0x2ecef45967204a54 ^ SUB168(auVar8 * ZEXT816(0xd1310ba698dfb5ac),8);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar17;
  uVar17 = SUB168(auVar9 * ZEXT816(0xd1310ba698dfb5ac),8) ^ uVar17 * -0x2ecef45967204a54;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar17;
  uVar18 = uVar17 * -0x2ecef45967204a54 ^ SUB168(auVar10 * ZEXT816(0xd1310ba698dfb5ac),8);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar18;
  uVar18 = uVar18 * -0x2ecef45967204a54 ^ SUB168(auVar11 * ZEXT816(0xd1310ba698dfb5ac),8);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar18;
  uVar18 = SUB168(auVar12 * ZEXT816(0xd1310ba698dfb5ac),8) ^ uVar18 * -0x2ecef45967204a54;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar18;
  uVar19 = uVar18 * -0x2ecef45967204a54 ^ SUB168(auVar13 * ZEXT816(0xd1310ba698dfb5ac),8);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar19;
  uVar19 = uVar19 * -0x2ecef45967204a54 ^ SUB168(auVar14 * ZEXT816(0xd1310ba698dfb5ac),8);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar19;
  *param_1 = uVar16 | 0x8000000080000001;
  param_1[1] = uVar17 | 0x8000000080000001;
  param_1[2] = uVar18 | 0x8000000080000001;
  param_1[3] = SUB168(auVar15 * ZEXT816(0xd1310ba698dfb5ac),8) ^ uVar19 * -0x2ecef45967204a54 |
               0x8000000080000001;
  return;
}


// ===== 0057f320  libsqlite3_sys::error::code_to_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* libsqlite3_sys::error::code_to_str */

undefined1  [16] __rustcall libsqlite3_sys::error::code_to_str(int param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  
  uVar2 = 0x12;
  puVar1 = &DAT_002c6b4d;
  if (param_1 < 0x301) {
    puVar1 = &DAT_002c6b4d;
    switch(param_1) {
    case 0:
      auVar3._8_8_ = 0x11;
      auVar3._0_8_ = &DAT_002c5d02;
      return auVar3;
    case 1:
      auVar46._8_8_ = 0x1d;
      auVar46._0_8_ = &DAT_002c5d13;
      return auVar46;
    case 2:
      auVar49._8_8_ = 0x1e;
      auVar49._0_8_ = &DAT_002c5d30;
      return auVar49;
    case 3:
      auVar48._8_8_ = 0x18;
      auVar48._0_8_ = &DAT_002c5d4e;
      return auVar48;
    case 4:
      auVar43._8_8_ = 0x23;
      auVar43._0_8_ = &DAT_002c5d66;
      return auVar43;
    case 5:
      auVar38._8_8_ = 0x1b;
      auVar38._0_8_ = &DAT_002c5d89;
      return auVar38;
    case 6:
      auVar52._8_8_ = 0x21;
      auVar52._0_8_ = &DAT_002c5da4;
      return auVar52;
    case 7:
      auVar47._8_8_ = 0x11;
      auVar47._0_8_ = &DAT_002c5dc5;
      return auVar47;
    case 8:
      auVar44._8_8_ = 0x24;
      auVar44._0_8_ = &DAT_002c5dd6;
      return auVar44;
    case 9:
      auVar51._8_8_ = 0x2b;
      auVar51._0_8_ = &DAT_002c5dfa;
      return auVar51;
    case 10:
      auVar35._8_8_ = 0x24;
      auVar35._0_8_ = &DAT_002c5e25;
      return auVar35;
    case 0xb:
      auVar34._8_8_ = 0x24;
      auVar34._0_8_ = &DAT_002c5e49;
      return auVar34;
    case 0xc:
      auVar54._8_8_ = 0x28;
      auVar54._0_8_ = &DAT_002c5e6d;
      return auVar54;
    case 0xd:
      auVar40._8_8_ = 0x29;
      auVar40._0_8_ = &DAT_002c5e95;
      return auVar40;
    case 0xe:
      auVar45._8_8_ = 0x20;
      auVar45._0_8_ = "Unable to open the database file";
      return auVar45;
    case 0xf:
      auVar41._8_8_ = 0x1c;
      auVar41._0_8_ = &DAT_002c5ebe;
      return auVar41;
    case 0x10:
      auVar32._8_8_ = 0x11;
      auVar32._0_8_ = &DAT_002c5eda;
      return auVar32;
    case 0x11:
      auVar58._8_8_ = 0x1b;
      auVar58._0_8_ = &DAT_002c5eeb;
      return auVar58;
    case 0x12:
      auVar42._8_8_ = 0x21;
      auVar42._0_8_ = &DAT_002c5f06;
      return auVar42;
    case 0x13:
      auVar56._8_8_ = 0x21;
      auVar56._0_8_ = &DAT_002c5f27;
      return auVar56;
    case 0x14:
      auVar39._8_8_ = 0x12;
      auVar39._0_8_ = &DAT_002c5f48;
      return auVar39;
    case 0x15:
      auVar53._8_8_ = 0x18;
      auVar53._0_8_ = &DAT_002c5f5a;
      return auVar53;
    case 0x16:
      auVar50._8_8_ = 0x26;
      auVar50._0_8_ = &DAT_002c5f72;
      return auVar50;
    case 0x17:
      auVar37._8_8_ = 0x14;
      auVar37._0_8_ = &DAT_002c5f98;
      return auVar37;
    case 0x18:
      auVar62._8_8_ = 0x1f;
      auVar62._0_8_ = &DAT_002c5fac;
      return auVar62;
    case 0x19:
      auVar36._8_8_ = 0x2a;
      auVar36._0_8_ = &DAT_002c5fcb;
      return auVar36;
    case 0x1a:
      auVar28._8_8_ = 0x27;
      auVar28._0_8_ = &DAT_002c5ff5;
      return auVar28;
    case 0x1b:
      auVar33._8_8_ = 0x20;
      auVar33._0_8_ = "Notifications from sqlite3_log()";
      return auVar33;
    case 0x1c:
      auVar64._8_8_ = 0x1b;
      auVar64._0_8_ = &DAT_002c601c;
      return auVar64;
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3a:
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x3e:
    case 0x3f:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x48:
    case 0x49:
    case 0x4a:
    case 0x4b:
    case 0x4c:
    case 0x4d:
    case 0x4e:
    case 0x4f:
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5a:
    case 0x5b:
    case 0x5c:
    case 0x5d:
    case 0x5e:
    case 0x5f:
    case 0x60:
    case 0x61:
    case 0x62:
    case 99:
    case 0x66:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6b:
    case 0x6c:
    case 0x6d:
    case 0x6e:
    case 0x6f:
    case 0x70:
    case 0x71:
    case 0x72:
    case 0x73:
    case 0x74:
    case 0x75:
    case 0x76:
    case 0x77:
    case 0x78:
    case 0x79:
    case 0x7a:
    case 0x7b:
    case 0x7c:
    case 0x7d:
    case 0x7e:
    case 0x7f:
    case 0x80:
    case 0x81:
    case 0x82:
    case 0x83:
    case 0x84:
    case 0x85:
    case 0x86:
    case 0x87:
    case 0x88:
    case 0x89:
    case 0x8a:
    case 0x8b:
    case 0x8c:
    case 0x8d:
    case 0x8e:
    case 0x8f:
    case 0x90:
    case 0x91:
    case 0x92:
    case 0x93:
    case 0x94:
    case 0x95:
    case 0x96:
    case 0x97:
    case 0x98:
    case 0x99:
    case 0x9a:
    case 0x9b:
    case 0x9c:
    case 0x9d:
    case 0x9e:
    case 0x9f:
    case 0xa0:
    case 0xa1:
    case 0xa2:
    case 0xa3:
    case 0xa4:
    case 0xa5:
    case 0xa6:
    case 0xa7:
    case 0xa8:
    case 0xa9:
    case 0xaa:
    case 0xab:
    case 0xac:
    case 0xad:
    case 0xae:
    case 0xaf:
    case 0xb0:
    case 0xb1:
    case 0xb2:
    case 0xb3:
    case 0xb4:
    case 0xb5:
    case 0xb6:
    case 0xb7:
    case 0xb8:
    case 0xb9:
    case 0xba:
    case 0xbb:
    case 0xbc:
    case 0xbd:
    case 0xbe:
    case 0xbf:
    case 0xc0:
    case 0xc1:
    case 0xc2:
    case 0xc3:
    case 0xc4:
    case 0xc5:
    case 0xc6:
    case 199:
    case 200:
    case 0xc9:
    case 0xca:
    case 0xcb:
    case 0xcc:
    case 0xcd:
    case 0xce:
    case 0xcf:
    case 0xd0:
    case 0xd1:
    case 0xd2:
    case 0xd3:
    case 0xd4:
    case 0xd5:
    case 0xd6:
    case 0xd7:
    case 0xd8:
    case 0xd9:
    case 0xda:
    case 0xdb:
    case 0xdc:
    case 0xdd:
    case 0xde:
    case 0xdf:
    case 0xe0:
    case 0xe1:
    case 0xe2:
    case 0xe3:
    case 0xe4:
    case 0xe5:
    case 0xe6:
    case 0xe7:
    case 0xe8:
    case 0xe9:
    case 0xea:
    case 0xeb:
    case 0xec:
    case 0xed:
    case 0xee:
    case 0xef:
    case 0xf0:
    case 0xf1:
    case 0xf2:
    case 0xf3:
    case 0xf4:
    case 0xf5:
    case 0xf6:
    case 0xf7:
    case 0xf8:
    case 0xf9:
    case 0xfa:
    case 0xfb:
    case 0xfc:
    case 0xfd:
    case 0xfe:
    case 0xff:
    case 0x100:
    case 0x102:
    case 0x103:
    case 0x104:
    case 0x107:
    case 0x109:
    case 0x10c:
    case 0x10d:
    case 0x10f:
    case 0x110:
    case 0x111:
    case 0x112:
    case 0x114:
    case 0x115:
    case 0x116:
    case 0x118:
    case 0x119:
    case 0x11a:
      break;
    case 100:
      auVar30._8_8_ = 0x24;
      auVar30._0_8_ = &DAT_002c6037;
      return auVar30;
    case 0x65:
      auVar57._8_8_ = 0x25;
      auVar57._0_8_ = &DAT_002c605b;
      return auVar57;
    case 0x101:
      auVar63._8_8_ = 0x1c;
      auVar63._0_8_ = &DAT_002c6080;
      return auVar63;
    case 0x105:
      auVar26._8_8_ = 0x36;
      auVar26._0_8_ = &DAT_002c668c;
      return auVar26;
    case 0x106:
      auVar60._8_8_ = 0x3e;
      auVar60._0_8_ = &DAT_002c663c;
      return auVar60;
    case 0x108:
      auVar65._8_8_ = 0x3d;
      auVar65._0_8_ = &DAT_002c6803;
      return auVar65;
    case 0x10a:
      auVar66._8_8_ = 0x17;
      auVar66._0_8_ = &DAT_002c60c3;
      return auVar66;
    case 0x10b:
      auVar31._8_8_ = 0x27;
      auVar31._0_8_ = &DAT_002c67b1;
      return auVar31;
    case 0x10e:
      auVar55._8_8_ = 0x19;
      auVar55._0_8_ = &DAT_002c6731;
      return auVar55;
    case 0x113:
      auVar61._8_8_ = 0x19;
      auVar61._0_8_ = &DAT_002c6951;
      return auVar61;
    case 0x117:
      puVar1 = &DAT_0029ff80;
      uVar2 = 0x10;
      break;
    case 0x11b:
      auVar29._8_8_ = 0x26;
      auVar29._0_8_ = &DAT_002c6ac4;
      return auVar29;
    case 0x11c:
      auVar59._8_8_ = 0x48;
      auVar59._0_8_ = &DAT_002c6b05;
      return auVar59;
    default:
      puVar1 = &DAT_002c6b4d;
      switch(param_1) {
      case 0x201:
        auVar8._8_8_ = 0x12;
        auVar8._0_8_ = &DAT_002c609c;
        return auVar8;
      case 0x204:
        auVar102._8_8_ = 0x1b;
        auVar102._0_8_ = &DAT_002c6936;
        return auVar102;
      case 0x205:
        auVar100._8_8_ = 0x5c;
        auVar100._0_8_ = &DAT_002c66c2;
        return auVar100;
      case 0x206:
        auVar104._8_8_ = 0x12;
        auVar104._0_8_ = &DAT_002c667a;
        return auVar104;
      case 0x208:
        auVar101._8_8_ = 0x41;
        auVar101._0_8_ = &DAT_002c6840;
        return auVar101;
      case 0x20a:
        auVar97._8_8_ = 0x3c;
        auVar97._0_8_ = &DAT_002c60da;
        return auVar97;
      case 0x20b:
        auVar99._8_8_ = 0x17;
        auVar99._0_8_ = &DAT_002c67d8;
        return auVar99;
      case 0x20e:
        auVar103._8_8_ = 0x23;
        auVar103._0_8_ = &DAT_002c674a;
        return auVar103;
      case 0x213:
        auVar105._8_8_ = 0x1b;
        auVar105._0_8_ = &DAT_002c696a;
        return auVar105;
      case 0x21b:
        auVar98._8_8_ = 0x1b;
        auVar98._0_8_ = &DAT_002c6aea;
        return auVar98;
      }
    }
  }
  else if (param_1 < 0xb0a) {
    if (param_1 < 0x513) {
      if (param_1 < 0x313) {
        if (param_1 < 0x30a) {
          if (param_1 == 0x301) {
            auVar85._8_8_ = 0x15;
            auVar85._0_8_ = &DAT_002c60ae;
            return auVar85;
          }
          if (param_1 == 0x305) {
            auVar67._8_8_ = 0x13;
            auVar67._0_8_ = &DAT_002c671e;
            return auVar67;
          }
          if (param_1 == 0x308) {
            auVar9._8_8_ = 0x49;
            auVar9._0_8_ = &DAT_002c6881;
            return auVar9;
          }
        }
        else {
          if (param_1 == 0x30a) {
            auVar89._8_8_ = 0x15;
            auVar89._0_8_ = &DAT_002c6116;
            return auVar89;
          }
          if (param_1 == 0x30b) {
            auVar71._8_8_ = 0x14;
            auVar71._0_8_ = &DAT_002c67ef;
            return auVar71;
          }
          if (param_1 == 0x30e) {
            auVar13._8_8_ = 0x2d;
            auVar13._0_8_ = &DAT_002c676d;
            return auVar13;
          }
        }
      }
      else if (param_1 < 0x40e) {
        if (param_1 == 0x313) {
          auVar93._8_8_ = 0x1d;
          auVar93._0_8_ = &DAT_002c6985;
          return auVar93;
        }
        if (param_1 == 0x408) {
          auVar81._8_8_ = 0x3b;
          auVar81._0_8_ = &DAT_002c68ca;
          return auVar81;
        }
        if (param_1 == 0x40a) {
          auVar17._8_8_ = 0x31;
          auVar17._0_8_ = &DAT_002c612b;
          return auVar17;
        }
      }
      else if (param_1 < 0x508) {
        if (param_1 == 0x40e) goto LAB_0057f780;
        if (param_1 == 0x413) {
          auVar4._8_8_ = 0x26;
          auVar4._0_8_ = &DAT_002c69a2;
          return auVar4;
        }
      }
      else {
        if (param_1 == 0x508) {
          auVar77._8_8_ = 0x18;
          auVar77._0_8_ = &DAT_002c6905;
          return auVar77;
        }
        if (param_1 == 0x50a) {
          auVar21._8_8_ = 0x22;
          auVar21._0_8_ = &DAT_002c615c;
          return auVar21;
        }
      }
    }
    else if (param_1 < 0x713) {
      if (param_1 < 0x60e) {
        if (param_1 == 0x513) {
          auVar87._8_8_ = 0x1c;
          auVar87._0_8_ = &DAT_002c69c8;
          return auVar87;
        }
        if (param_1 == 0x608) {
          auVar69._8_8_ = 0x19;
          auVar69._0_8_ = &DAT_002c691d;
          return auVar69;
        }
        if (param_1 == 0x60a) {
          auVar11._8_8_ = 0x21;
          auVar11._0_8_ = &DAT_002c617e;
          return auVar11;
        }
      }
      else {
        if (param_1 == 0x60e) {
          auVar91._8_8_ = 0x17;
          auVar91._0_8_ = &DAT_002c679a;
          return auVar91;
        }
        if (param_1 == 0x613) {
          auVar73._8_8_ = 0x1f;
          auVar73._0_8_ = &DAT_002c69e4;
          return auVar73;
        }
        if (param_1 == 0x70a) {
          auVar15._8_8_ = 0x29;
          auVar15._0_8_ = &DAT_002c619f;
          return auVar15;
        }
      }
    }
    else if (param_1 < 0x90a) {
      if (param_1 == 0x713) {
        auVar95._8_8_ = 0x27;
        auVar95._0_8_ = &DAT_002c6a03;
        return auVar95;
      }
      if (param_1 == 0x80a) {
        auVar83._8_8_ = 0x28;
        auVar83._0_8_ = &DAT_002c61c8;
        return auVar83;
      }
      if (param_1 == 0x813) {
        auVar19._8_8_ = 0x1a;
        auVar19._0_8_ = &DAT_002c6a2a;
        return auVar19;
      }
    }
    else if (param_1 < 0xa0a) {
      if (param_1 == 0x90a) {
        auVar75._8_8_ = 0x45;
        auVar75._0_8_ = &DAT_002c61f0;
        return auVar75;
      }
      if (param_1 == 0x913) {
        auVar6._8_8_ = 0x33;
        auVar6._0_8_ = &DAT_002c6a44;
        return auVar6;
      }
    }
    else {
      if (param_1 == 0xa0a) {
        auVar79._8_8_ = 0x28;
        auVar79._0_8_ = &DAT_002c6235;
        return auVar79;
      }
      if (param_1 == 0xa13) {
        auVar23._8_8_ = 0x1b;
        auVar23._0_8_ = &DAT_002c6a77;
        return auVar23;
      }
    }
  }
  else if (param_1 < 0x160a) {
    if (param_1 < 0xf0a) {
      if (param_1 < 0xc13) {
        if (param_1 == 0xb0a) {
          auVar86._8_8_ = 0x14;
          auVar86._0_8_ = &DAT_002c625d;
          return auVar86;
        }
        if (param_1 == 0xb13) {
          auVar68._8_8_ = 0x18;
          auVar68._0_8_ = &DAT_002c6a92;
          return auVar68;
        }
        if (param_1 == 0xc0a) {
          auVar10._8_8_ = 0x1a;
          auVar10._0_8_ = &DAT_002c6271;
          return auVar10;
        }
      }
      else {
        if (param_1 == 0xc13) {
          auVar90._8_8_ = 0x1a;
          auVar90._0_8_ = &DAT_002c6aaa;
          return auVar90;
        }
        if (param_1 == 0xd0a) {
          auVar72._8_8_ = 0x28;
          auVar72._0_8_ = &DAT_002c628b;
          return auVar72;
        }
        if (param_1 == 0xe0a) {
          auVar14._8_8_ = 0x2f;
          auVar14._0_8_ = &DAT_002c62b3;
          return auVar14;
        }
      }
    }
    else if (param_1 < 0x120a) {
      if (param_1 == 0xf0a) {
        auVar94._8_8_ = 0x2c;
        auVar94._0_8_ = &DAT_002c62e2;
        return auVar94;
      }
      if (param_1 == 0x100a) {
        auVar82._8_8_ = 0x22;
        auVar82._0_8_ = &DAT_002c630e;
        return auVar82;
      }
      if (param_1 == 0x110a) {
        auVar18._8_8_ = 0x16;
        auVar18._0_8_ = &DAT_002c6330;
        return auVar18;
      }
    }
    else if (param_1 < 0x140a) {
      if (param_1 == 0x120a) {
        auVar74._8_8_ = 0x50;
        auVar74._0_8_ = &DAT_002c6346;
        return auVar74;
      }
      if (param_1 == 0x130a) {
        auVar5._8_8_ = 0x58;
        auVar5._0_8_ = &DAT_002c6396;
        return auVar5;
      }
    }
    else {
      if (param_1 == 0x140a) {
        auVar78._8_8_ = 0x14;
        auVar78._0_8_ = &DAT_002c63ee;
        return auVar78;
      }
      if (param_1 == 0x150a) {
        auVar22._8_8_ = 0x66;
        auVar22._0_8_ = &DAT_002c6402;
        return auVar22;
      }
    }
  }
  else if (param_1 < 0x1c0a) {
    if (param_1 < 0x190a) {
      if (param_1 == 0x160a) {
        auVar88._8_8_ = 0x43;
        auVar88._0_8_ = &DAT_002c6468;
        return auVar88;
      }
      if (param_1 == 0x170a) {
        auVar70._8_8_ = 0x21;
        auVar70._0_8_ = &DAT_002c64ab;
        return auVar70;
      }
      if (param_1 == 0x180a) {
        auVar12._8_8_ = 0x5b;
        auVar12._0_8_ = &DAT_002c64cc;
        return auVar12;
      }
    }
    else {
      if (param_1 == 0x190a) {
        auVar92._8_8_ = 0x43;
        auVar92._0_8_ = &DAT_002c6527;
        return auVar92;
      }
      if (param_1 == 0x1a0a) {
LAB_0057f780:
        auVar25._8_8_ = 0x25;
        auVar25._0_8_ = &DAT_002c656a;
        return auVar25;
      }
      if (param_1 == 0x1b0a) {
        auVar16._8_8_ = 0x12;
        auVar16._0_8_ = &DAT_002c658f;
        return auVar16;
      }
    }
  }
  else if (param_1 < 0x1f0a) {
    if (param_1 == 0x1c0a) {
      auVar96._8_8_ = 0x11;
      auVar96._0_8_ = &DAT_002c65a1;
      return auVar96;
    }
    if (param_1 == 0x1d0a) {
      auVar84._8_8_ = 0x19;
      auVar84._0_8_ = &DAT_002c65b2;
      return auVar84;
    }
    if (param_1 == 0x1e0a) {
      auVar20._8_8_ = 0x1a;
      auVar20._0_8_ = &DAT_002c65cb;
      return auVar20;
    }
  }
  else if (param_1 < 0x210a) {
    if (param_1 == 0x1f0a) {
      auVar76._8_8_ = 0x1c;
      auVar76._0_8_ = &DAT_002c65e5;
      return auVar76;
    }
    if (param_1 == 0x200a) {
      auVar7._8_8_ = 0x11;
      auVar7._0_8_ = &DAT_002c6601;
      return auVar7;
    }
  }
  else {
    if (param_1 == 0x210a) {
      auVar80._8_8_ = 0x16;
      auVar80._0_8_ = &DAT_002c6612;
      return auVar80;
    }
    if (param_1 == 0x220a) {
      auVar24._8_8_ = 0x14;
      auVar24._0_8_ = &DAT_002c6628;
      return auVar24;
    }
  }
  auVar27._8_8_ = uVar2;
  auVar27._0_8_ = puVar1;
  return auVar27;
}


// ===== 0057fc90  <libsqlite3_sys::error::Error_as_core::error::Error>::description =====

/* WARNING: Unknown calling convention: __rustcall */
/* <libsqlite3_sys::error::Error as core::error::Error>::description */

void __rustcall
<libsqlite3_sys::error::Error_as_core::error::Error>::description(undefined4 *param_1)

{
  libsqlite3_sys::error::code_to_str(*param_1);
  return;
}


// ===== 0057fc98  FUN_0057fc98 =====

void FUN_0057fc98(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 0057fcac  <libsqlite3_sys::error::Error_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <libsqlite3_sys::error::Error as core::fmt::Display>::fmt */

void __rustcall
<libsqlite3_sys::error::Error_as_core::fmt::Display>::fmt(undefined4 *param_1,undefined8 *param_2)

{
  undefined1 local_50 [16];
  undefined4 *local_40;
  undefined *puStack_38;
  undefined1 *local_30;
  code *pcStack_28;
  
  local_50 = libsqlite3_sys::error::code_to_str(*param_1);
  puStack_38 = PTR_fmt_00b00d18;
  pcStack_28 = FUN_0057fc98;
  local_40 = param_1;
  local_30 = local_50;
  core::fmt::write(*param_2,param_2[1],&DAT_002b83a3,&local_40);
  return;
}


// ===== 0057fd10  sqlite3_status64 =====

ulong sqlite3_status64(ulong param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  ulong *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((uint)param_1 < 10) {
    if ((param_2 != (undefined8 *)0x0) && (param_3 != (undefined8 *)0x0)) {
      uVar4 = param_1 & 0xffffffff;
      puVar1 = &DAT_00b105a0;
      if ((0x379UL >> (param_1 & 0x3f) & 1) != 0) {
        puVar1 = &DAT_00b103d8;
      }
      uVar3 = *puVar1;
      if (uVar3 != 0) {
        (*DAT_00b0da70)(uVar3);
      }
      uVar2 = (&DAT_00b105b8)[uVar4];
      *param_2 = uVar2;
      *param_3 = (&DAT_00b10608)[uVar4];
      if (param_4 != 0) {
        (&DAT_00b10608)[uVar4] = uVar2;
      }
      if (uVar3 != 0) {
        (*DAT_00b0da80)(uVar3);
        uVar3 = 0;
      }
      return uVar3 & 0xffffffff;
    }
    uVar2 = 0x5f8a;
  }
  else {
    uVar2 = 0x5f87;
  }
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",uVar2,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0x15;
}


// ===== 0057fe40  sqlite3_mutex_enter =====

void sqlite3_mutex_enter(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0057fe4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_00b0da70)();
    return;
  }
  return;
}


// ===== 0057fe54  sqlite3_mutex_leave =====

void sqlite3_mutex_leave(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0057fe60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_00b0da80)();
    return;
  }
  return;
}


// ===== 0057fe68  sqlite3_status =====

undefined8 sqlite3_status(ulong param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if ((param_2 == (undefined4 *)0x0) || (param_3 == (undefined4 *)0x0)) {
    uVar2 = 0x5f9b;
  }
  else {
    if ((uint)param_1 < 10) {
      uVar4 = param_1 & 0xffffffff;
      plVar1 = &DAT_00b105a0;
      if ((0x379UL >> (param_1 & 0x3f) & 1) != 0) {
        plVar1 = &DAT_00b103d8;
      }
      lVar3 = *plVar1;
      if (lVar3 != 0) {
        (*DAT_00b0da70)(lVar3);
      }
      uVar5 = (&DAT_00b105b8)[uVar4];
      uVar2 = (&DAT_00b10608)[uVar4];
      if (param_4 != 0) {
        (&DAT_00b10608)[uVar4] = uVar5;
      }
      if (lVar3 != 0) {
        (*DAT_00b0da80)(lVar3);
      }
      *param_2 = (int)uVar5;
      *param_3 = (int)uVar2;
      return 0;
    }
    uVar2 = 0x5f87;
  }
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",uVar2,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0x15;
}


// ===== 0057ffa8  sqlite3_db_status =====

undefined4 sqlite3_db_status(long param_1,int param_2,uint *param_3,int *param_4,int param_5)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  char *pcVar7;
  uint uVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  int *piVar13;
  long *plVar14;
  long *plVar15;
  int iVar16;
  undefined4 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  uint local_68;
  uint local_64;
  
  if (param_1 == 0) {
    pcVar7 = "NULL";
  }
  else {
    cVar1 = *(char *)(param_1 + 0x71);
    if (cVar1 != -0x46) {
      if (cVar1 == 'v') {
        if ((param_3 == (uint *)0x0) || (param_4 == (int *)0x0)) goto LAB_00580090;
        if (*(long *)(param_1 + 0x18) != 0) {
          (*DAT_00b0da70)();
        }
        uVar17 = 1;
        if (param_2 < 7) {
          if (param_2 < 3) {
            if (param_2 == 0) {
              plVar21 = *(long **)(param_1 + 0x1b8);
              if (plVar21 == (long *)0x0) {
                iVar3 = 0;
              }
              else {
                iVar3 = 0;
                plVar9 = plVar21;
                do {
                  plVar9 = (long *)*plVar9;
                  iVar3 = iVar3 + 1;
                } while (plVar9 != (long *)0x0);
              }
              plVar9 = *(long **)(param_1 + 0x1c0);
              if (plVar9 == (long *)0x0) {
                iVar4 = 0;
              }
              else {
                iVar4 = 0;
                plVar11 = plVar9;
                do {
                  plVar11 = (long *)*plVar11;
                  iVar4 = iVar4 + -1;
                } while (plVar11 != (long *)0x0);
              }
              plVar11 = *(long **)(param_1 + 0x1c8);
              if (plVar11 == (long *)0x0) {
                iVar5 = 0;
              }
              else {
                iVar5 = 0;
                plVar14 = plVar11;
                do {
                  plVar14 = (long *)*plVar14;
                  iVar5 = iVar5 + 1;
                } while (plVar14 != (long *)0x0);
              }
              iVar16 = 0;
              plVar15 = *(long **)(param_1 + 0x1d0);
              for (plVar14 = plVar15; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
                iVar16 = iVar16 + -1;
              }
              *param_4 = *(int *)(param_1 + 0x1a4) - (iVar5 + iVar3);
              *param_3 = (iVar4 - (iVar5 + iVar3)) + iVar16 + *(int *)(param_1 + 0x1a4);
              if (param_5 != 0) {
                plVar14 = plVar9;
                if (plVar9 != (long *)0x0) {
                  do {
                    plVar12 = plVar14;
                    plVar14 = (long *)*plVar12;
                  } while (plVar14 != (long *)0x0);
                  *plVar12 = (long)plVar21;
                  *(long **)(param_1 + 0x1b8) = plVar9;
                  *(undefined8 *)(param_1 + 0x1c0) = 0;
                }
                plVar21 = plVar15;
                if (plVar15 != (long *)0x0) {
                  do {
                    plVar9 = plVar21;
                    plVar21 = (long *)*plVar9;
                  } while (plVar21 != (long *)0x0);
                  uVar17 = 0;
                  *plVar9 = (long)plVar11;
                  *(long **)(param_1 + 0x1c8) = plVar15;
                  *(undefined8 *)(param_1 + 0x1d0) = 0;
                  goto LAB_005804bc;
                }
              }
              uVar17 = 0;
              goto LAB_005804bc;
            }
            if (param_2 != 1) {
              if (param_2 != 2) goto LAB_005804bc;
              local_64 = 0;
              if (*(char *)(param_1 + 0x6f) == '\0') {
                FUN_005ac38c(param_1);
              }
              *(uint **)(param_1 + 0x300) = &local_64;
              *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)(param_1 + 0x1e0);
              if (0 < *(int *)(param_1 + 0x28)) {
                lVar19 = 0;
                do {
                  lVar20 = *(long *)(*(long *)(param_1 + 0x20) + lVar19 * 0x20 + 0x18);
                  if (lVar20 != 0) {
                    iVar3 = (*DAT_00b0da30)(0x28);
                    local_64 = local_64 +
                               (*(int *)(lVar20 + 0x3c) + *(int *)(lVar20 + 0xc) +
                               *(int *)(lVar20 + 0x24) + *(int *)(lVar20 + 0x54)) * iVar3;
                    lVar6 = *(long *)(lVar20 + 0x18);
                    if (lVar6 != 0) {
                      lVar6 = (*DAT_00b0da28)();
                    }
                    local_64 = local_64 + (int)lVar6;
                    if (*(long *)(lVar20 + 0x48) == 0) {
                      lVar6 = *(long *)(lVar20 + 0x30);
                      if (lVar6 != 0) goto LAB_00580248;
LAB_005802f0:
                      lVar6 = *(long *)(lVar20 + 0x60);
                    }
                    else {
                      iVar3 = (*DAT_00b0da28)(*(long *)(lVar20 + 0x48));
                      lVar6 = *(long *)(lVar20 + 0x30);
                      local_64 = local_64 + iVar3;
                      if (lVar6 == 0) goto LAB_005802f0;
LAB_00580248:
                      iVar3 = (*DAT_00b0da28)(lVar6);
                      lVar6 = *(long *)(lVar20 + 0x60);
                      local_64 = local_64 + iVar3;
                    }
                    if (lVar6 == 0) {
                      plVar21 = *(long **)(lVar20 + 0x40);
                    }
                    else {
                      iVar3 = (*DAT_00b0da28)(lVar6);
                      plVar21 = *(long **)(lVar20 + 0x40);
                      local_64 = local_64 + iVar3;
                    }
                    for (; plVar21 != (long *)0x0; plVar21 = (long *)*plVar21) {
                      FUN_00580600(param_1,plVar21[2]);
                    }
                    for (plVar21 = *(long **)(lVar20 + 0x10); plVar21 != (long *)0x0;
                        plVar21 = (long *)*plVar21) {
                      lVar20 = plVar21[2];
                      if ((lVar20 != 0) &&
                         ((*(long *)(param_1 + 0x300) != 0 ||
                          (iVar3 = *(int *)(lVar20 + 0x2c) + -1, *(int *)(lVar20 + 0x2c) = iVar3,
                          iVar3 == 0)))) {
                        FUN_005e9fb0(param_1);
                      }
                    }
                  }
                  lVar19 = lVar19 + 1;
                } while (lVar19 < *(int *)(param_1 + 0x28));
              }
              *(undefined8 *)(param_1 + 0x300) = 0;
              *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)(param_1 + 0x1f0);
              uVar8 = local_64;
              if (*(char *)(param_1 + 0x6f) == '\0') {
                FUN_005ac41c(param_1);
                uVar8 = local_64;
              }
              goto LAB_00580488;
            }
LAB_00580324:
            if (*(char *)(param_1 + 0x6f) == '\0') {
              FUN_005ac38c(param_1);
            }
            iVar3 = *(int *)(param_1 + 0x28);
            if (iVar3 < 1) {
              uVar8 = 0;
            }
            else {
              lVar19 = 0;
              uVar8 = 0;
              lVar20 = 8;
              do {
                lVar6 = *(long *)(*(long *)(param_1 + 0x20) + lVar20);
                if (lVar6 != 0) {
                  lVar18 = **(long **)(lVar6 + 8);
                  iVar3 = *(int *)(lVar18 + 200);
                  uVar2 = *(ushort *)(lVar18 + 0xb0);
                  iVar4 = (*DAT_00b0dac8)(*(undefined8 *)(*(long *)(lVar18 + 0x120) + 0x48));
                  iVar5 = (*DAT_00b0da28)(lVar18);
                  iVar3 = iVar5 + (iVar3 + (uint)uVar2 + 0x78) * iVar4 + *(int *)(lVar18 + 200);
                  iVar4 = iVar3;
                  if (param_2 == 0xb) {
                    iVar5 = *(int *)(*(long *)(lVar6 + 8) + 0x68);
                    iVar4 = 0;
                    if (iVar5 != 0) {
                      iVar4 = iVar3 / iVar5;
                    }
                  }
                  iVar3 = *(int *)(param_1 + 0x28);
                  uVar8 = iVar4 + uVar8;
                }
                lVar19 = lVar19 + 1;
                lVar20 = lVar20 + 0x20;
              } while (lVar19 < iVar3);
            }
            if (*(char *)(param_1 + 0x6f) == '\0') {
              FUN_005ac41c(param_1);
            }
            *param_3 = uVar8;
          }
          else {
            if (2 < param_2 - 4U) {
              if (param_2 != 3) goto LAB_005804bc;
              lVar19 = *(long *)(param_1 + 8);
              local_68 = 0;
              *(uint **)(param_1 + 0x300) = &local_68;
              *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)(param_1 + 0x1e0);
              uVar8 = local_68;
              for (; local_68 = uVar8, lVar19 != 0; lVar19 = *(long *)(lVar19 + 0x10)) {
                FUN_0058077c(lVar19);
                uVar8 = local_68;
              }
              uVar10 = *(undefined8 *)(param_1 + 0x1f0);
              *(undefined8 *)(param_1 + 0x300) = 0;
              *param_4 = 0;
              *(undefined8 *)(param_1 + 0x1e8) = uVar10;
              goto LAB_00580490;
            }
            lVar19 = param_1 + (ulong)(param_2 - 4U) * 4;
            *param_3 = 0;
            uVar17 = 0;
            *param_4 = *(int *)(lVar19 + 0x1a8);
            if (param_5 == 0) goto LAB_005804bc;
            param_4 = (int *)(lVar19 + 0x1a8);
          }
          uVar17 = 0;
          *param_4 = 0;
        }
        else {
          if (9 < param_2) {
            if (param_2 == 10) {
              lVar19 = *(long *)(param_1 + 0x2f8);
              *param_4 = 0;
              if (lVar19 < 1) {
                uVar8 = (uint)(0 < *(long *)(param_1 + 0x2f0));
              }
              else {
                uVar8 = 1;
              }
              goto LAB_00580490;
            }
            if (param_2 == 0xb) goto LAB_00580324;
            if (param_2 != 0xc) goto LAB_005804bc;
            param_2 = 10;
          }
          iVar3 = *(int *)(param_1 + 0x28);
          if (iVar3 < 1) {
            uVar8 = 0;
          }
          else {
            lVar19 = 0;
            uVar8 = 0;
            plVar21 = (long *)(*(long *)(param_1 + 0x20) + 8);
            do {
              if (*plVar21 != 0) {
                piVar13 = (int *)(**(long **)(*plVar21 + 8) + (ulong)(param_2 - 7) * 4 + 0xf8);
                uVar8 = *piVar13 + uVar8;
                if (param_5 != 0) {
                  *piVar13 = 0;
                  iVar3 = *(int *)(param_1 + 0x28);
                }
              }
              lVar19 = lVar19 + 1;
              plVar21 = plVar21 + 4;
            } while (lVar19 < iVar3);
            uVar8 = uVar8 & 0x7fffffff;
          }
LAB_00580488:
          *param_4 = 0;
LAB_00580490:
          uVar17 = 0;
          *param_3 = uVar8;
        }
LAB_005804bc:
        if (*(long *)(param_1 + 0x18) == 0) {
          return uVar17;
        }
        (*DAT_00b0da80)();
        return uVar17;
      }
      if (cVar1 != 'm') {
        pcVar7 = "invalid";
        goto LAB_00580080;
      }
    }
    pcVar7 = "unopened";
  }
LAB_00580080:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar7);
LAB_00580090:
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x5fcd,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0x15;
}


// ===== 005805dc  sqlite3_msize =====

long sqlite3_msize(long param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = (*DAT_00b0da28)();
    param_1 = (long)iVar1;
  }
  return param_1;
}


// ===== 00580600  FUN_00580600 =====

void FUN_00580600(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((param_2 == (undefined8 *)0x0) || (*(char *)((long)param_2 + 0x12) != '\0')) {
    return;
  }
  FUN_005ea7ac(param_1,param_2[7]);
  FUN_005869c8(param_1,*param_2);
  FUN_005869c8(param_1,param_2[1]);
  if (param_2[3] != 0) {
    FUN_005da030(param_1);
  }
  FUN_005daf74(param_1,param_2[4]);
  if (param_1 != 0) {
    if (param_2 < *(undefined8 **)(param_1 + 0x1e8)) {
      if (*(undefined8 **)(param_1 + 0x1d8) <= param_2) {
        uVar3 = *(undefined8 *)(param_1 + 0x1d0);
        *(undefined8 **)(param_1 + 0x1d0) = param_2;
        *param_2 = uVar3;
        return;
      }
      if (*(undefined8 **)(param_1 + 0x1e0) <= param_2) {
        uVar3 = *(undefined8 *)(param_1 + 0x1c0);
        *(undefined8 **)(param_1 + 0x1c0) = param_2;
        *param_2 = uVar3;
        return;
      }
    }
    if (*(long *)(param_1 + 0x300) != 0) {
      FUN_005a7654(param_1,param_2);
      return;
    }
  }
  puVar2 = &DAT_00b0da18;
  if (DAT_00b0d9f0 != 0) {
    if (DAT_00b103d8 != (undefined8 *)0x0) {
      (*DAT_00b0da70)();
    }
    iVar1 = (*DAT_00b0da28)(param_2);
    DAT_00b105b8 = DAT_00b105b8 - iVar1;
    DAT_00b10600 = DAT_00b10600 + -1;
    (*DAT_00b0da18)(param_2);
    if (DAT_00b103d8 == (undefined8 *)0x0) {
      return;
    }
    puVar2 = &DAT_00b0da80;
    param_2 = DAT_00b103d8;
  }
                    /* WARNING: Could not recover jumptable at 0x00580740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_2);
  return;
}


// ===== 0058077c  FUN_0058077c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0058077c(long *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = *param_1;
  if (param_1[0x13] == 0) goto LAB_005808a0;
  FUN_005bba38(param_1[0x13],(uint)*(ushort *)((long)param_1 + 0xc2) * 5);
  plVar2 = (long *)param_1[0x13];
  if (plVar2 < *(long **)(lVar5 + 0x1e8)) {
    if (plVar2 < *(long **)(lVar5 + 0x1d8)) {
      if (plVar2 < *(long **)(lVar5 + 0x1e0)) goto LAB_005807dc;
      lVar3 = *(long *)(lVar5 + 0x1c0);
      *(long **)(lVar5 + 0x1c0) = plVar2;
      *plVar2 = lVar3;
      plVar2 = (long *)param_1[0x24];
    }
    else {
      lVar3 = *(long *)(lVar5 + 0x1d0);
      *(long **)(lVar5 + 0x1d0) = plVar2;
      *plVar2 = lVar3;
      plVar2 = (long *)param_1[0x24];
    }
  }
  else {
LAB_005807dc:
    if (*(long *)(lVar5 + 0x300) == 0) {
      if (plVar2 != (long *)0x0) {
        puVar4 = &DAT_00b0da18;
        if (DAT_00b0d9f0 != 0) {
          if (DAT_00b103d8 != (long *)0x0) {
            (*DAT_00b0da70)();
          }
          iVar1 = (*DAT_00b0da28)(plVar2);
          DAT_00b105b8 = DAT_00b105b8 - iVar1;
          DAT_00b10600 = DAT_00b10600 + -1;
          (*DAT_00b0da18)(plVar2);
          if (DAT_00b103d8 == (long *)0x0) goto LAB_005808a0;
          puVar4 = &DAT_00b0da80;
          plVar2 = DAT_00b103d8;
        }
        (*(code *)*puVar4)(plVar2);
      }
LAB_005808a0:
      plVar2 = (long *)param_1[0x24];
    }
    else {
      FUN_005a7654(lVar5);
      plVar2 = (long *)param_1[0x24];
    }
  }
  if (plVar2 != (long *)0x0) {
    if (lVar5 == 0) {
      do {
        plVar6 = (long *)plVar2[5];
        FUN_005bbbdc(0,*plVar2,(int)plVar2[1]);
        puVar4 = &DAT_00b0da18;
        if (DAT_00b0d9f0 == 0) {
LAB_005809cc:
          (*(code *)*puVar4)(plVar2);
        }
        else {
          if (DAT_00b103d8 != (long *)0x0) {
            (*DAT_00b0da70)();
          }
          iVar1 = (*DAT_00b0da28)(plVar2);
          DAT_00b105b8 = DAT_00b105b8 - iVar1;
          DAT_00b10600 = DAT_00b10600 + -1;
          (*DAT_00b0da18)(plVar2);
          if (DAT_00b103d8 != (long *)0x0) {
            puVar4 = &DAT_00b0da80;
            plVar2 = DAT_00b103d8;
            goto LAB_005809cc;
          }
        }
        plVar2 = plVar6;
      } while (plVar6 != (long *)0x0);
    }
    else {
      do {
        plVar6 = (long *)plVar2[5];
        FUN_005bbbdc(lVar5,*plVar2,(int)plVar2[1]);
        if (plVar2 < *(long **)(lVar5 + 0x1e8)) {
          if (plVar2 < *(long **)(lVar5 + 0x1d8)) {
            if (plVar2 < *(long **)(lVar5 + 0x1e0)) goto LAB_005808d0;
            lVar3 = *(long *)(lVar5 + 0x1c0);
            *(long **)(lVar5 + 0x1c0) = plVar2;
          }
          else {
            lVar3 = *(long *)(lVar5 + 0x1d0);
            *(long **)(lVar5 + 0x1d0) = plVar2;
          }
          *plVar2 = lVar3;
        }
        else {
LAB_005808d0:
          if (*(long *)(lVar5 + 0x300) == 0) {
            puVar4 = &DAT_00b0da18;
            if (DAT_00b0d9f0 != 0) {
              if (DAT_00b103d8 != (long *)0x0) {
                (*DAT_00b0da70)();
              }
              iVar1 = (*DAT_00b0da28)(plVar2);
              DAT_00b105b8 = DAT_00b105b8 - iVar1;
              DAT_00b10600 = DAT_00b10600 + -1;
              (*DAT_00b0da18)(plVar2);
              if (DAT_00b103d8 == (long *)0x0) goto LAB_005808e4;
              puVar4 = &DAT_00b0da80;
              plVar2 = DAT_00b103d8;
            }
            (*(code *)*puVar4)(plVar2);
          }
          else {
            FUN_005a7654(lVar5,plVar2);
          }
        }
LAB_005808e4:
        plVar2 = plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  if (*(char *)((long)param_1 + 199) != '\0') {
    FUN_005bba38(param_1[0x10],(long)(short)param_1[4]);
    plVar2 = (long *)param_1[0x16];
    if (plVar2 == (long *)0x0) {
LAB_00580b5c:
      plVar2 = (long *)param_1[0x20];
    }
    else if (plVar2 < *(long **)(lVar5 + 0x1e8)) {
      if (plVar2 < *(long **)(lVar5 + 0x1d8)) {
        if (plVar2 < *(long **)(lVar5 + 0x1e0)) goto LAB_00580aa4;
        lVar3 = *(long *)(lVar5 + 0x1c0);
        *(long **)(lVar5 + 0x1c0) = plVar2;
        *plVar2 = lVar3;
        plVar2 = (long *)param_1[0x20];
      }
      else {
        lVar3 = *(long *)(lVar5 + 0x1d0);
        *(long **)(lVar5 + 0x1d0) = plVar2;
        *plVar2 = lVar3;
        plVar2 = (long *)param_1[0x20];
      }
    }
    else {
LAB_00580aa4:
      if (*(long *)(lVar5 + 0x300) == 0) {
        puVar4 = &DAT_00b0da18;
        if (DAT_00b0d9f0 != 0) {
          if (DAT_00b103d8 != (long *)0x0) {
            (*DAT_00b0da70)();
          }
          iVar1 = (*DAT_00b0da28)(plVar2);
          DAT_00b105b8 = DAT_00b105b8 - iVar1;
          DAT_00b10600 = DAT_00b10600 + -1;
          (*DAT_00b0da18)(plVar2);
          if (DAT_00b103d8 == (long *)0x0) goto LAB_00580b5c;
          puVar4 = &DAT_00b0da80;
          plVar2 = DAT_00b103d8;
        }
        (*(code *)*puVar4)(plVar2);
        goto LAB_00580b5c;
      }
      FUN_005a7654(lVar5,plVar2);
      plVar2 = (long *)param_1[0x20];
    }
    if (plVar2 != (long *)0x0) {
      if (plVar2 < *(long **)(lVar5 + 0x1e8)) {
        if (plVar2 < *(long **)(lVar5 + 0x1d8)) {
          if (plVar2 < *(long **)(lVar5 + 0x1e0)) goto LAB_00580b88;
          lVar3 = *(long *)(lVar5 + 0x1c0);
          *(long **)(lVar5 + 0x1c0) = plVar2;
        }
        else {
          lVar3 = *(long *)(lVar5 + 0x1d0);
          *(long **)(lVar5 + 0x1d0) = plVar2;
        }
        *plVar2 = lVar3;
      }
      else {
LAB_00580b88:
        if (*(long *)(lVar5 + 0x300) == 0) {
          puVar4 = &DAT_00b0da18;
          if (DAT_00b0d9f0 != 0) {
            if (DAT_00b103d8 != (long *)0x0) {
              (*DAT_00b0da70)();
            }
            iVar1 = (*DAT_00b0da28)(plVar2);
            DAT_00b105b8 = DAT_00b105b8 - iVar1;
            DAT_00b10600 = DAT_00b10600 + -1;
            (*DAT_00b0da18)(plVar2);
            if (DAT_00b103d8 == (long *)0x0) goto LAB_00580c54;
            puVar4 = &DAT_00b0da80;
            plVar2 = DAT_00b103d8;
          }
          (*(code *)*puVar4)(plVar2);
        }
        else {
          FUN_005a7654(lVar5,plVar2);
        }
      }
    }
  }
LAB_00580c54:
  FUN_005bbbdc(lVar5,param_1[0x11],(int)param_1[0x12]);
  plVar2 = (long *)param_1[0x1f];
  if (plVar2 == (long *)0x0) {
LAB_00580d48:
    lVar3 = *(long *)(lVar5 + 0x300);
  }
  else if (plVar2 < *(long **)(lVar5 + 0x1e8)) {
    if (plVar2 < *(long **)(lVar5 + 0x1d8)) {
      if (plVar2 < *(long **)(lVar5 + 0x1e0)) goto LAB_00580c90;
      lVar3 = *(long *)(lVar5 + 0x1c0);
      *(long **)(lVar5 + 0x1c0) = plVar2;
      *plVar2 = lVar3;
      lVar3 = *(long *)(lVar5 + 0x300);
    }
    else {
      lVar3 = *(long *)(lVar5 + 0x1d0);
      *(long **)(lVar5 + 0x1d0) = plVar2;
      *plVar2 = lVar3;
      lVar3 = *(long *)(lVar5 + 0x300);
    }
  }
  else {
LAB_00580c90:
    if (*(long *)(lVar5 + 0x300) == 0) {
      puVar4 = &DAT_00b0da18;
      if (DAT_00b0d9f0 != 0) {
        if (DAT_00b103d8 != (long *)0x0) {
          (*DAT_00b0da70)();
        }
        iVar1 = (*DAT_00b0da28)(plVar2);
        DAT_00b105b8 = DAT_00b105b8 - iVar1;
        DAT_00b10600 = DAT_00b10600 + -1;
        (*DAT_00b0da18)(plVar2);
        if (DAT_00b103d8 == (long *)0x0) goto LAB_00580d48;
        puVar4 = &DAT_00b0da80;
        plVar2 = DAT_00b103d8;
      }
      (*(code *)*puVar4)(plVar2);
      goto LAB_00580d48;
    }
    FUN_005a7654(lVar5,plVar2);
    lVar3 = *(long *)(lVar5 + 0x300);
  }
  if (lVar3 == 0) {
    lVar3 = param_1[2];
    *(long *)param_1[1] = lVar3;
    if (lVar3 != 0) {
      *(long *)(lVar3 + 8) = param_1[1];
    }
  }
  if (param_1 < *(long **)(lVar5 + 0x1e8)) {
    if (param_1 < *(long **)(lVar5 + 0x1d8)) {
      if (param_1 < *(long **)(lVar5 + 0x1e0)) goto LAB_00580d88;
      lVar3 = *(long *)(lVar5 + 0x1c0);
      *(long **)(lVar5 + 0x1c0) = param_1;
    }
    else {
      lVar3 = *(long *)(lVar5 + 0x1d0);
      *(long **)(lVar5 + 0x1d0) = param_1;
    }
    *param_1 = lVar3;
    return;
  }
LAB_00580d88:
  if (*(long *)(lVar5 + 0x300) != 0) {
    FUN_005a7654(lVar5,param_1);
    return;
  }
  puVar4 = &DAT_00b0da18;
  if (DAT_00b0d9f0 != 0) {
    if (DAT_00b103d8 != (long *)0x0) {
      (*DAT_00b0da70)();
    }
    iVar1 = (*DAT_00b0da28)(param_1);
    DAT_00b105b8 = DAT_00b105b8 - iVar1;
    DAT_00b10600 = DAT_00b10600 + -1;
    (*DAT_00b0da18)(param_1);
    if (DAT_00b103d8 == (long *)0x0) {
      return;
    }
    puVar4 = &DAT_00b0da80;
    param_1 = DAT_00b103d8;
  }
                    /* WARNING: Could not recover jumptable at 0x00580e54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar4)(param_1);
  return;
}


// ===== 00580e98  sqlite3_vfs_find =====

long sqlite3_vfs_find(char *param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  iVar2 = sqlite3_initialize();
  if (iVar2 != 0) {
    return 0;
  }
  if (DAT_00b0d9f4 == '\0') {
    lVar3 = 0;
  }
  else {
    lVar3 = (*DAT_00b0da60)(2);
    if (lVar3 != 0) {
      (*DAT_00b0da70)(lVar3);
      bVar1 = false;
      lVar4 = DAT_00b10370;
      goto joined_r0x00580f24;
    }
  }
  bVar1 = true;
  lVar4 = DAT_00b10370;
joined_r0x00580f24:
  DAT_00b10370 = lVar4;
  if (param_1 != (char *)0x0) {
    while ((lVar4 != 0 && (iVar2 = strcmp(param_1,*(char **)(lVar4 + 0x18)), iVar2 != 0))) {
      lVar4 = *(long *)(lVar4 + 0x10);
    }
  }
  if (!bVar1) {
    (*DAT_00b0da80)(lVar3);
    return lVar4;
  }
  return lVar4;
}


// ===== 00580f80  sqlite3_initialize =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong sqlite3_initialize(void)

{
  bool bVar1;
  long *plVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  size_t sVar8;
  uint uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  
  if (DAT_00b0db44 != 0) {
    DataMemoryBarrier(2,3);
    return 0;
  }
  if (DAT_00b0da60 == (code *)0x0) {
    DAT_00b0da90 = 0;
    bVar4 = DAT_00b0d9f4 != '\0';
    DAT_00b0da50 = FUN_005a74b0;
    if (bVar4) {
      DAT_00b0da50 = FUN_005a7268;
    }
    DAT_00b0da58 = FUN_005a74b8;
    if (bVar4) {
      DAT_00b0da58 = FUN_005a7270;
    }
    DAT_00b0da88 = 0;
    DAT_00b0da68 = FUN_005a74c8;
    if (bVar4) {
      DAT_00b0da68 = FUN_005a7398;
    }
    DAT_00b0da70 = FUN_005a74cc;
    if (bVar4) {
      DAT_00b0da70 = pthread_mutex_lock;
    }
    DAT_00b0da78 = FUN_005a74d0;
    if (bVar4) {
      DAT_00b0da78 = FUN_005a748c;
    }
    DAT_00b0da80 = FUN_005a74d8;
    if (bVar4) {
      DAT_00b0da80 = pthread_mutex_unlock;
    }
    DAT_00b0da60 = FUN_005a74c0;
    if (bVar4) {
      DAT_00b0da60 = FUN_005a7278;
    }
    DataMemoryBarrier(2,3);
    uVar6 = (*DAT_00b0da50)();
    DataMemoryBarrier(2,3);
    iVar5 = (int)uVar6;
  }
  else {
    uVar6 = (*DAT_00b0da50)();
    DataMemoryBarrier(2,3);
    iVar5 = (int)uVar6;
  }
  if (iVar5 != 0) {
    return uVar6;
  }
  if (DAT_00b0d9f4 == '\0') {
    lVar7 = 0;
LAB_0058110c:
    bVar4 = true;
    DAT_00b0db4c = 1;
    if (DAT_00b0db50 != 0) goto LAB_005811cc;
LAB_00581128:
    DAT_00b0db4c = 1;
    if (DAT_00b0da10 == 0) {
      sqlite3_config(4,&PTR_FUN_00ad3e98);
    }
    if (DAT_00b0d9f4 == '\0') {
      DAT_00b103d8 = 0;
    }
    else {
      DAT_00b103d8 = (*DAT_00b0da60)(3);
    }
    if (((DAT_00b0db28 == 0) || (DAT_00b0db30 < 0x200)) || (DAT_00b0db34 < 1)) {
      DAT_00b0db28 = 0;
      DAT_00b0db30 = 0;
    }
    uVar6 = (*DAT_00b0da38)(DAT_00b0da48);
    if ((int)uVar6 == 0) goto LAB_005811cc;
    bVar1 = false;
    DAT_00b103e0 = 0;
    DAT_00b103d8 = 0;
    _DAT_00b103f0 = 0;
    DAT_00b103e8 = 0;
  }
  else {
    lVar7 = (*DAT_00b0da60)(2);
    if (lVar7 == 0) goto LAB_0058110c;
    (*DAT_00b0da70)(lVar7);
    bVar4 = false;
    DAT_00b0db4c = 1;
    if (DAT_00b0db50 == 0) goto LAB_00581128;
LAB_005811cc:
    DAT_00b0db50 = 1;
    if (DAT_00b0db60 == 0) {
      if (DAT_00b0d9f4 == '\0') {
        DAT_00b0db60 = 0;
      }
      else {
        DAT_00b0db60 = (*DAT_00b0da60)(1);
        if ((DAT_00b0d9f4 != '\0') && (DAT_00b0db60 == 0)) {
          bVar1 = false;
          uVar6 = 7;
          goto joined_r0x005811c4;
        }
      }
    }
    uVar6 = 0;
    bVar1 = true;
    DAT_00b0db58 = DAT_00b0db58 + 1;
  }
joined_r0x005811c4:
  if (!bVar4) {
    uVar6 = uVar6 & 0xffffffff;
    (*DAT_00b0da80)(lVar7);
  }
  if (!bVar1) {
    return uVar6;
  }
  if (DAT_00b0db60 != 0) {
    (*DAT_00b0da70)();
  }
  puVar18 = PTR_s_s_00b0d8c0;
  if (DAT_00b0db44 == 0 && DAT_00b0db48 == 0) {
    DAT_00b0db48 = 1;
    DAT_00b10708 = 0;
    DAT_00b10660 = 0;
    DAT_00b10658 = 0;
    uRam0000000000b10670 = 0;
    _DAT_00b10668 = 0;
    uRam0000000000b10680 = 0;
    _DAT_00b10678 = 0;
    uRam0000000000b10690 = 0;
    _DAT_00b10688 = 0;
    uRam0000000000b106a0 = 0;
    _DAT_00b10698 = 0;
    uRam0000000000b106b0 = 0;
    _DAT_00b106a8 = 0;
    DAT_00b106c0 = 0;
    _DAT_00b106b8 = 0;
    uRam0000000000b106d0 = 0;
    DAT_00b106c8 = 0;
    uRam0000000000b106e0 = 0;
    _DAT_00b106d8 = 0;
    uRam0000000000b106f0 = 0;
    _DAT_00b106e8 = 0;
    uRam0000000000b10700 = 0;
    _DAT_00b106f8 = 0;
    if (PTR_s_s_00b0d8c0 == (undefined *)0x0) {
      uVar9 = 0;
    }
    else {
      sVar8 = strlen(PTR_s_s_00b0d8c0);
      uVar9 = (uint)sVar8 & 0x3fffffff;
    }
    uVar9 = (uVar9 + (byte)*puVar18) % 0x17;
    lVar11 = (&DAT_00b10658)[uVar9];
    lVar21 = lVar11;
    if (lVar11 != 0) {
LAB_0058132c:
      pbVar13 = *(byte **)(lVar21 + 0x38);
      pbVar14 = puVar18;
      do {
        bVar3 = *pbVar13;
        if (bVar3 == *pbVar14) {
          if (bVar3 == 0) {
            puVar10 = (undefined8 *)(lVar21 + 0x10);
            DAT_00b0d898 = *puVar10;
            goto LAB_00581394;
          }
        }
        else if ((&DAT_002c78ae)[bVar3] != (&DAT_002c78ae)[*pbVar14]) goto LAB_00581368;
        pbVar13 = pbVar13 + 1;
        pbVar14 = pbVar14 + 1;
      } while( true );
    }
LAB_00581370:
    puVar10 = &DAT_00b10658 + uVar9;
    DAT_00b0d898 = 0;
    DAT_00b0d8c8 = lVar11;
LAB_00581394:
    *puVar10 = &DAT_00b0d888;
    puVar18 = PTR_s_s_00b0d908;
    if (PTR_s_s_00b0d908 == (undefined *)0x0) {
      uVar9 = 0;
    }
    else {
      sVar8 = strlen(PTR_s_s_00b0d908);
      uVar9 = (uint)sVar8 & 0x3fffffff;
    }
    uVar9 = (uVar9 + (byte)*puVar18) % 0x17;
    lVar11 = (&DAT_00b10658)[uVar9];
    lVar21 = lVar11;
    if (lVar11 != 0) {
LAB_005813ec:
      pbVar13 = *(byte **)(lVar21 + 0x38);
      pbVar14 = puVar18;
      do {
        uVar19 = (uint)*pbVar13;
        if (uVar19 == *pbVar14) {
          if (uVar19 == 0) {
            puVar10 = (undefined8 *)(lVar21 + 0x10);
            DAT_00b0d8e0 = *puVar10;
            goto LAB_00581450;
          }
        }
        else if ((&DAT_002c78ae)[uVar19] != (&DAT_002c78ae)[(uint)*pbVar14]) goto code_r0x00581424;
        pbVar13 = pbVar13 + 1;
        pbVar14 = pbVar14 + 1;
      } while( true );
    }
LAB_0058142c:
    puVar10 = &DAT_00b10658 + uVar9;
    DAT_00b0d8e0 = 0;
    DAT_00b0d910 = lVar11;
LAB_00581450:
    *puVar10 = &DAT_00b0d8d0;
    puVar18 = PTR_s_s_00b0d950;
    if (PTR_s_s_00b0d950 == (undefined *)0x0) {
      uVar9 = 0;
    }
    else {
      sVar8 = strlen(PTR_s_s_00b0d950);
      uVar9 = (uint)sVar8 & 0x3fffffff;
    }
    uVar9 = (uVar9 + (byte)*puVar18) % 0x17;
    lVar11 = (&DAT_00b10658)[uVar9];
    lVar21 = lVar11;
    if (lVar11 != 0) {
LAB_005814a8:
      pbVar13 = *(byte **)(lVar21 + 0x38);
      pbVar14 = puVar18;
      do {
        uVar19 = (uint)*pbVar13;
        if (uVar19 == *pbVar14) {
          if (uVar19 == 0) {
            puVar10 = (undefined8 *)(lVar21 + 0x10);
            DAT_00b0d928 = *puVar10;
            goto LAB_0058150c;
          }
        }
        else if ((&DAT_002c78ae)[uVar19] != (&DAT_002c78ae)[(uint)*pbVar14]) goto code_r0x005814e0;
        pbVar13 = pbVar13 + 1;
        pbVar14 = pbVar14 + 1;
      } while( true );
    }
LAB_005814e8:
    puVar10 = &DAT_00b10658 + uVar9;
    DAT_00b0d928 = 0;
    DAT_00b0d958 = lVar11;
LAB_0058150c:
    *puVar10 = &DAT_00b0d918;
    puVar18 = PTR_s_s_00b0d998;
    if (PTR_s_s_00b0d998 == (undefined *)0x0) {
      uVar9 = 0;
    }
    else {
      sVar8 = strlen(PTR_s_s_00b0d998);
      uVar9 = (uint)sVar8 & 0x3fffffff;
    }
    uVar9 = (uVar9 + (byte)*puVar18) % 0x17;
    lVar11 = (&DAT_00b10658)[uVar9];
    lVar21 = lVar11;
    if (lVar11 != 0) {
LAB_00581564:
      pbVar13 = *(byte **)(lVar21 + 0x38);
      pbVar14 = puVar18;
      do {
        uVar19 = (uint)*pbVar13;
        if (uVar19 == *pbVar14) {
          if (uVar19 == 0) {
            puVar10 = (undefined8 *)(lVar21 + 0x10);
            DAT_00b0d970 = *puVar10;
            goto LAB_005815c8;
          }
        }
        else if ((&DAT_002c78ae)[uVar19] != (&DAT_002c78ae)[(uint)*pbVar14]) goto code_r0x0058159c;
        pbVar13 = pbVar13 + 1;
        pbVar14 = pbVar14 + 1;
      } while( true );
    }
LAB_005815a4:
    puVar10 = &DAT_00b10658 + uVar9;
    DAT_00b0d970 = 0;
    DAT_00b0d9a0 = lVar11;
LAB_005815c8:
    *puVar10 = &DAT_00b0d960;
    puVar18 = PTR_s_s_00b0d9e0;
    if (PTR_s_s_00b0d9e0 == (undefined *)0x0) {
      uVar9 = 0;
    }
    else {
      sVar8 = strlen(PTR_s_s_00b0d9e0);
      uVar9 = (uint)sVar8 & 0x3fffffff;
    }
    uVar9 = (uVar9 + (byte)*puVar18) % 0x17;
    lVar11 = (&DAT_00b10658)[uVar9];
    lVar21 = lVar11;
    if (lVar11 != 0) {
LAB_00581628:
      pbVar13 = *(byte **)(lVar21 + 0x38);
      pbVar14 = puVar18;
      do {
        uVar19 = (uint)*pbVar13;
        if (uVar19 == *pbVar14) {
          if (uVar19 == 0) {
            puVar10 = (undefined8 *)(lVar21 + 0x10);
            DAT_00b0d9b8 = *puVar10;
            goto LAB_0058168c;
          }
        }
        else if ((&DAT_002c78ae)[uVar19] != (&DAT_002c78ae)[(uint)*pbVar14]) goto code_r0x00581660;
        pbVar13 = pbVar13 + 1;
        pbVar14 = pbVar14 + 1;
      } while( true );
    }
LAB_00581668:
    puVar10 = &DAT_00b10658 + uVar9;
    DAT_00b0d9b8 = 0;
    DAT_00b0d9e8 = lVar11;
LAB_0058168c:
    lVar21 = 0;
    *puVar10 = &DAT_00b0d9a8;
    do {
      pbVar13 = (&PTR_s_r_00b0e408)[lVar21 * 9];
      if (pbVar13 == (byte *)0x0) {
        uVar9 = 0;
      }
      else {
        sVar8 = strlen((char *)pbVar13);
        uVar9 = (uint)sVar8 & 0x3fffffff;
      }
      uVar9 = (uVar9 + *pbVar13) % 0x17;
      lVar12 = (&DAT_00b10658)[uVar9];
      lVar11 = lVar12;
      if (lVar12 != 0) {
LAB_00581718:
        pbVar14 = *(byte **)(lVar11 + 0x38);
        pbVar15 = pbVar13;
        do {
          bVar3 = *pbVar14;
          if (bVar3 == *pbVar15) {
            if (bVar3 == 0) {
              (&DAT_00b0e3e0)[lVar21 * 9] = *(undefined8 *)(lVar11 + 0x10);
              *(undefined8 *)(lVar11 + 0x10) = &DAT_00b0e3d0 + lVar21 * 0x48;
              goto joined_r0x00581778;
            }
          }
          else if ((&DAT_002c78ae)[bVar3] != (&DAT_002c78ae)[*pbVar15]) goto LAB_00581754;
          pbVar14 = pbVar14 + 1;
          pbVar15 = pbVar15 + 1;
        } while( true );
      }
LAB_0058175c:
      (&DAT_00b0e3e0)[lVar21 * 9] = 0;
      (&DAT_00b0e410)[lVar21 * 9] = lVar12;
      (&DAT_00b10658)[uVar9] = &DAT_00b0e3d0 + lVar21 * 0x48;
joined_r0x00581778:
      lVar21 = lVar21 + 1;
    } while (lVar21 != 0xf);
    lVar21 = 0;
    do {
      pbVar13 = (&PTR_s_j_00b0e138)[lVar21 * 9];
      if (pbVar13 == (byte *)0x0) {
        uVar9 = 0;
      }
      else {
        sVar8 = strlen((char *)pbVar13);
        uVar9 = (uint)sVar8 & 0x3fffffff;
      }
      uVar9 = (uVar9 + *pbVar13) % 0x17;
      lVar12 = (&DAT_00b10658)[uVar9];
      lVar11 = lVar12;
      if (lVar12 != 0) {
LAB_00581800:
        pbVar14 = *(byte **)(lVar11 + 0x38);
        pbVar15 = pbVar13;
        do {
          bVar3 = *pbVar14;
          if (bVar3 == *pbVar15) {
            if (bVar3 == 0) {
              (&DAT_00b0e110)[lVar21 * 9] = *(undefined8 *)(lVar11 + 0x10);
              *(undefined8 *)(lVar11 + 0x10) = &DAT_00b0e100 + lVar21 * 0x48;
              goto joined_r0x005817b8;
            }
          }
          else if ((&DAT_002c78ae)[bVar3] != (&DAT_002c78ae)[*pbVar15]) goto LAB_0058183c;
          pbVar14 = pbVar14 + 1;
          pbVar15 = pbVar15 + 1;
        } while( true );
      }
LAB_00581844:
      (&DAT_00b0e110)[lVar21 * 9] = 0;
      (&DAT_00b0e140)[lVar21 * 9] = lVar12;
      (&DAT_00b10658)[uVar9] = &DAT_00b0e100 + lVar21 * 0x48;
joined_r0x005817b8:
      lVar21 = lVar21 + 1;
    } while (lVar21 != 10);
    lVar21 = 0;
    do {
      pbVar13 = (&PTR_DAT_00b0e840)[lVar21 * 9];
      if (pbVar13 == (byte *)0x0) {
        uVar9 = 0;
      }
      else {
        sVar8 = strlen((char *)pbVar13);
        uVar9 = (uint)sVar8 & 0x3fffffff;
      }
      uVar9 = (uVar9 + *pbVar13) % 0x17;
      lVar12 = (&DAT_00b10658)[uVar9];
      lVar11 = lVar12;
      if (lVar12 != 0) {
LAB_005818e4:
        pbVar14 = *(byte **)(lVar11 + 0x38);
        pbVar15 = pbVar13;
        do {
          bVar3 = *pbVar14;
          if (bVar3 == *pbVar15) {
            if (bVar3 == 0) {
              (&DAT_00b0e818)[lVar21 * 9] = *(undefined8 *)(lVar11 + 0x10);
              *(undefined8 *)(lVar11 + 0x10) = &DAT_00b0e808 + lVar21 * 0x48;
              goto joined_r0x0058189c;
            }
          }
          else if ((&DAT_002c78ae)[bVar3] != (&DAT_002c78ae)[*pbVar15]) goto LAB_00581920;
          pbVar14 = pbVar14 + 1;
          pbVar15 = pbVar15 + 1;
        } while( true );
      }
LAB_00581928:
      (&DAT_00b0e818)[lVar21 * 9] = 0;
      (&DAT_00b0e848)[lVar21 * 9] = lVar12;
      (&DAT_00b10658)[uVar9] = &DAT_00b0e808 + lVar21 * 0x48;
joined_r0x0058189c:
      lVar21 = lVar21 + 1;
    } while (lVar21 != 0x22);
    lVar21 = 0;
    do {
      pbVar13 = (&PTR_s_i_00b0bf88)[lVar21 * 9];
      if (pbVar13 == (byte *)0x0) {
        uVar9 = 0;
      }
      else {
        sVar8 = strlen((char *)pbVar13);
        uVar9 = (uint)sVar8 & 0x3fffffff;
      }
      uVar9 = (uVar9 + *pbVar13) % 0x17;
      lVar12 = (&DAT_00b10658)[uVar9];
      lVar11 = lVar12;
      if (lVar12 != 0) {
LAB_005819cc:
        pbVar14 = *(byte **)(lVar11 + 0x38);
        pbVar15 = pbVar13;
        do {
          bVar3 = *pbVar14;
          if (bVar3 == *pbVar15) {
            if (bVar3 == 0) {
              (&DAT_00b0bf60)[lVar21 * 9] = *(undefined8 *)(lVar11 + 0x10);
              *(undefined8 *)(lVar11 + 0x10) = &DAT_00b0bf50 + lVar21 * 0x48;
              goto joined_r0x00581984;
            }
          }
          else if ((&DAT_002c78ae)[bVar3] != (&DAT_002c78ae)[*pbVar15]) goto LAB_00581a08;
          pbVar14 = pbVar14 + 1;
          pbVar15 = pbVar15 + 1;
        } while( true );
      }
LAB_00581a10:
      (&DAT_00b0bf60)[lVar21 * 9] = 0;
      (&DAT_00b0bf90)[lVar21 * 9] = lVar12;
      (&DAT_00b10658)[uVar9] = &DAT_00b0bf50 + lVar21 * 0x48;
joined_r0x00581984:
      lVar21 = lVar21 + 1;
    } while (lVar21 != 0x4b);
    if ((DAT_00b0db54 != 0) || (uVar6 = FUN_0059ca20(), (int)uVar6 == 0)) {
      DAT_00b0db54 = 1;
      iVar5 = sqlite3_initialize();
      if ((iVar5 == 0) && (lVar21 = FUN_005827b0(10), lVar21 != 0)) {
        puVar10 = &DAT_00b0da18;
        if (DAT_00b0d9f0 == 0) {
LAB_00581b10:
          (*(code *)*puVar10)();
        }
        else {
          if (DAT_00b103d8 != 0) {
            (*DAT_00b0da70)(DAT_00b103d8);
          }
          iVar5 = (*DAT_00b0da28)();
          DAT_00b105b8 = DAT_00b105b8 - iVar5;
          DAT_00b10600 = DAT_00b10600 + -1;
          (*DAT_00b0da18)(lVar21);
          if (DAT_00b103d8 != 0) {
            puVar10 = &DAT_00b0da80;
            goto LAB_00581b10;
          }
        }
        iVar5 = sqlite3_initialize();
        if (iVar5 == 0) {
          if (DAT_00b0d9f4 == '\0') {
            lVar21 = 0;
LAB_00581b58:
            bVar1 = true;
          }
          else {
            lVar21 = (*DAT_00b0da60)(2);
            if (lVar21 == 0) goto LAB_00581b58;
            (*DAT_00b0da70)();
            bVar1 = false;
          }
          puVar10 = &DAT_00b10370;
          if (DAT_00b10370 == &DAT_00b0dba8) {
LAB_00581ba0:
            *puVar10 = DAT_00b0dbb8;
            puVar18 = DAT_00b10370;
          }
          else {
            puVar18 = DAT_00b10370;
            puVar17 = DAT_00b10370;
            if (DAT_00b10370 != (undefined *)0x0) {
              do {
                puVar16 = puVar17;
                puVar17 = *(undefined **)(puVar16 + 0x10);
                if (puVar17 == (undefined *)0x0) break;
              } while (puVar17 != &DAT_00b0dba8);
              if (puVar17 == &DAT_00b0dba8) {
                puVar10 = (undefined8 *)(puVar16 + 0x10);
                goto LAB_00581ba0;
              }
            }
          }
          DAT_00b10370 = &DAT_00b0dba8;
          DAT_00b0dbb8 = puVar18;
          if (!bVar1) {
            (*DAT_00b0da80)(lVar21);
          }
        }
        iVar5 = sqlite3_initialize();
        if (iVar5 == 0) {
          if (DAT_00b0d9f4 == '\0') {
            lVar21 = 0;
LAB_00581c10:
            bVar1 = true;
          }
          else {
            lVar21 = (*DAT_00b0da60)(2);
            if (lVar21 == 0) goto LAB_00581c10;
            (*DAT_00b0da70)();
            bVar1 = false;
          }
          puVar10 = &DAT_00b10370;
          if (DAT_00b10370 == &DAT_00b0dc50) {
LAB_00581c58:
            *puVar10 = DAT_00b0dc60;
LAB_00581c6c:
            if (DAT_00b10370 == (undefined *)0x0) goto LAB_00581c78;
            puVar10 = (undefined8 *)(DAT_00b10370 + 0x10);
            DAT_00b0dc60 = *puVar10;
          }
          else {
            puVar18 = DAT_00b10370;
            if (DAT_00b10370 != (undefined *)0x0) {
              do {
                puVar17 = puVar18;
                puVar18 = *(undefined **)(puVar17 + 0x10);
                if (puVar18 == (undefined *)0x0) break;
              } while (puVar18 != &DAT_00b0dc50);
              if (puVar18 == &DAT_00b0dc50) {
                puVar10 = (undefined8 *)(puVar17 + 0x10);
                goto LAB_00581c58;
              }
              goto LAB_00581c6c;
            }
LAB_00581c78:
            DAT_00b0dc60 = 0;
            puVar10 = &DAT_00b10370;
          }
          *puVar10 = &DAT_00b0dc50;
          if (!bVar1) {
            (*DAT_00b0da80)(lVar21);
          }
        }
        iVar5 = sqlite3_initialize();
        if (iVar5 == 0) {
          if (DAT_00b0d9f4 == '\0') {
            lVar21 = 0;
LAB_00581cdc:
            bVar1 = true;
          }
          else {
            lVar21 = (*DAT_00b0da60)(2);
            if (lVar21 == 0) goto LAB_00581cdc;
            (*DAT_00b0da70)();
            bVar1 = false;
          }
          puVar10 = &DAT_00b10370;
          if (DAT_00b10370 == &DAT_00b0dcf8) {
LAB_00581d24:
            *puVar10 = DAT_00b0dd08;
LAB_00581d38:
            if (DAT_00b10370 == (undefined *)0x0) goto LAB_00581d44;
            puVar10 = (undefined8 *)(DAT_00b10370 + 0x10);
            DAT_00b0dd08 = *puVar10;
          }
          else {
            puVar18 = DAT_00b10370;
            if (DAT_00b10370 != (undefined *)0x0) {
              do {
                puVar17 = puVar18;
                puVar18 = *(undefined **)(puVar17 + 0x10);
                if (puVar18 == (undefined *)0x0) break;
              } while (puVar18 != &DAT_00b0dcf8);
              if (puVar18 == &DAT_00b0dcf8) {
                puVar10 = (undefined8 *)(puVar17 + 0x10);
                goto LAB_00581d24;
              }
              goto LAB_00581d38;
            }
LAB_00581d44:
            DAT_00b0dd08 = 0;
            puVar10 = &DAT_00b10370;
          }
          *puVar10 = &DAT_00b0dcf8;
          if (!bVar1) {
            (*DAT_00b0da80)(lVar21);
          }
        }
        iVar5 = sqlite3_initialize();
        if (iVar5 == 0) {
          if (DAT_00b0d9f4 == '\0') {
            lVar21 = 0;
LAB_00581da8:
            bVar1 = true;
          }
          else {
            lVar21 = (*DAT_00b0da60)(2);
            if (lVar21 == 0) goto LAB_00581da8;
            (*DAT_00b0da70)();
            bVar1 = false;
          }
          puVar10 = &DAT_00b10370;
          if (DAT_00b10370 == &DAT_00b0dda0) {
LAB_00581df0:
            *puVar10 = DAT_00b0ddb0;
LAB_00581e04:
            if (DAT_00b10370 == (undefined *)0x0) goto LAB_00581e10;
            puVar10 = (undefined8 *)(DAT_00b10370 + 0x10);
            DAT_00b0ddb0 = *puVar10;
          }
          else {
            puVar18 = DAT_00b10370;
            if (DAT_00b10370 != (undefined *)0x0) {
              do {
                puVar17 = puVar18;
                puVar18 = *(undefined **)(puVar17 + 0x10);
                if (puVar18 == (undefined *)0x0) break;
              } while (puVar18 != &DAT_00b0dda0);
              if (puVar18 == &DAT_00b0dda0) {
                puVar10 = (undefined8 *)(puVar17 + 0x10);
                goto LAB_00581df0;
              }
              goto LAB_00581e04;
            }
LAB_00581e10:
            DAT_00b0ddb0 = 0;
            puVar10 = &DAT_00b10370;
          }
          *puVar10 = &DAT_00b0dda0;
          if (!bVar1) {
            (*DAT_00b0da80)(lVar21);
          }
        }
        if (DAT_00b0d9f4 == '\0') {
          DAT_00b10378 = 0;
        }
        else {
          DAT_00b10378 = (*DAT_00b0da60)(0xb);
        }
        DAT_00b10390 = getenv("SQLITE_TMPDIR");
        DAT_00b10398 = getenv("TMPDIR");
        uVar6 = FUN_0059ca74();
        if ((int)uVar6 == 0) {
          FUN_0059cc1c(DAT_00b0db28,DAT_00b0db30,DAT_00b0db34);
          uVar6 = 0;
          DataMemoryBarrier(2,3);
          DAT_00b0db44 = 1;
        }
      }
      else {
        uVar6 = 7;
      }
    }
    DAT_00b0db48 = 0;
  }
  else {
    uVar6 = 0;
  }
  uVar20 = uVar6 & 0xffffffff;
  if (DAT_00b0db60 != 0) {
    (*DAT_00b0da80)(DAT_00b0db60);
    uVar6 = uVar20;
  }
  if (bVar4) {
    iVar5 = DAT_00b0db58 + -1;
    bVar1 = 0 < DAT_00b0db58;
    DAT_00b0db58 = iVar5;
    if (iVar5 != 0 && bVar1) goto joined_r0x00581f04;
  }
  else {
    (*DAT_00b0da70)(lVar7);
    iVar5 = DAT_00b0db58 + -1;
    bVar1 = 0 < DAT_00b0db58;
    uVar6 = uVar20;
    DAT_00b0db58 = iVar5;
    if (iVar5 != 0 && bVar1) goto joined_r0x00581f04;
  }
  if (DAT_00b0db60 != 0) {
    (*DAT_00b0da68)(DAT_00b0db60);
    uVar6 = uVar20;
  }
  DAT_00b0db60 = 0;
joined_r0x00581f04:
  if (!bVar4) {
    (*DAT_00b0da80)(lVar7);
    uVar6 = uVar20;
  }
  return uVar6;
LAB_00581368:
  plVar2 = (long *)(lVar21 + 0x40);
  lVar21 = *plVar2;
  if (*plVar2 == 0) goto LAB_00581370;
  goto LAB_0058132c;
code_r0x00581424:
  plVar2 = (long *)(lVar21 + 0x40);
  lVar21 = *plVar2;
  if (*plVar2 == 0) goto LAB_0058142c;
  goto LAB_005813ec;
code_r0x005814e0:
  plVar2 = (long *)(lVar21 + 0x40);
  lVar21 = *plVar2;
  if (*plVar2 == 0) goto LAB_005814e8;
  goto LAB_005814a8;
code_r0x0058159c:
  plVar2 = (long *)(lVar21 + 0x40);
  lVar21 = *plVar2;
  if (*plVar2 == 0) goto LAB_005815a4;
  goto LAB_00581564;
code_r0x00581660:
  plVar2 = (long *)(lVar21 + 0x40);
  lVar21 = *plVar2;
  if (*plVar2 == 0) goto LAB_00581668;
  goto LAB_00581628;
LAB_00581754:
  plVar2 = (long *)(lVar11 + 0x40);
  lVar11 = *plVar2;
  if (*plVar2 == 0) goto LAB_0058175c;
  goto LAB_00581718;
LAB_0058183c:
  plVar2 = (long *)(lVar11 + 0x40);
  lVar11 = *plVar2;
  if (*plVar2 == 0) goto LAB_00581844;
  goto LAB_00581800;
LAB_00581920:
  plVar2 = (long *)(lVar11 + 0x40);
  lVar11 = *plVar2;
  if (*plVar2 == 0) goto LAB_00581928;
  goto LAB_005818e4;
LAB_00581a08:
  plVar2 = (long *)(lVar11 + 0x40);
  lVar11 = *plVar2;
  if (*plVar2 == 0) goto LAB_00581a10;
  goto LAB_005819cc;
}


// ===== 00581f68  sqlite3_vfs_register =====

undefined8 sqlite3_vfs_register(long param_1,int param_2)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  
  uVar2 = sqlite3_initialize();
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (param_1 == 0) {
    sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x6946,
                "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
    return 0x15;
  }
  if (DAT_00b0d9f4 == '\0') {
    lVar3 = 0;
LAB_00582028:
    bVar1 = true;
    puVar5 = &DAT_00b10370;
    if (DAT_00b10370 == param_1) goto LAB_00582068;
LAB_00582040:
    plVar4 = &DAT_00b10370;
    lVar7 = DAT_00b10370;
    if (DAT_00b10370 == 0) goto LAB_00582094;
    do {
      lVar6 = lVar7;
      lVar7 = *(long *)(lVar6 + 0x10);
      if (lVar7 == 0) break;
    } while (lVar7 != param_1);
    if (lVar7 == param_1) {
      puVar5 = (undefined8 *)(lVar6 + 0x10);
      goto LAB_00582068;
    }
  }
  else {
    lVar3 = (*DAT_00b0da60)(2);
    if (lVar3 == 0) goto LAB_00582028;
    (*DAT_00b0da70)();
    bVar1 = false;
    puVar5 = &DAT_00b10370;
    if (DAT_00b10370 != param_1) goto LAB_00582040;
LAB_00582068:
    *puVar5 = *(undefined8 *)(param_1 + 0x10);
  }
  plVar4 = &DAT_00b10370;
  lVar7 = DAT_00b10370;
  if ((param_2 == 0) && (DAT_00b10370 != 0)) {
    plVar4 = (long *)(DAT_00b10370 + 0x10);
    lVar7 = *plVar4;
  }
LAB_00582094:
  *(long *)(param_1 + 0x10) = lVar7;
  *plVar4 = param_1;
  if (!bVar1) {
    (*DAT_00b0da80)(lVar3);
  }
  return 0;
}


// ===== 005820c0  sqlite3_vfs_unregister =====

undefined8 sqlite3_vfs_unregister(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  
  uVar2 = sqlite3_initialize();
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (DAT_00b0d9f4 == '\0') {
    lVar3 = 0;
LAB_00582128:
    bVar1 = true;
  }
  else {
    lVar3 = (*DAT_00b0da60)(2);
    if (lVar3 == 0) goto LAB_00582128;
    (*DAT_00b0da70)();
    bVar1 = false;
  }
  if (param_1 == 0) goto LAB_00582170;
  puVar6 = &DAT_00b10370;
  if (DAT_00b10370 != param_1) {
    lVar5 = DAT_00b10370;
    if (DAT_00b10370 == 0) goto LAB_00582170;
    do {
      lVar4 = lVar5;
      lVar5 = *(long *)(lVar4 + 0x10);
      if (lVar5 == 0) break;
    } while (lVar5 != param_1);
    if (lVar5 != param_1) goto LAB_00582170;
    puVar6 = (undefined8 *)(lVar4 + 0x10);
  }
  *puVar6 = *(undefined8 *)(param_1 + 0x10);
LAB_00582170:
  if (!bVar1) {
    (*DAT_00b0da80)(lVar3);
  }
  return 0;
}


// ===== 00582190  sqlite3_mutex_alloc =====

undefined8 sqlite3_mutex_alloc(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_1 < 2) {
    iVar2 = sqlite3_initialize();
  }
  else if (DAT_00b0da60 == (code *)0x0) {
    DAT_00b0da90 = 0;
    bVar1 = DAT_00b0d9f4 != '\0';
    DAT_00b0da50 = FUN_005a74b0;
    if (bVar1) {
      DAT_00b0da50 = FUN_005a7268;
    }
    DAT_00b0da58 = FUN_005a74b8;
    if (bVar1) {
      DAT_00b0da58 = FUN_005a7270;
    }
    DAT_00b0da88 = 0;
    DAT_00b0da68 = FUN_005a74c8;
    if (bVar1) {
      DAT_00b0da68 = FUN_005a7398;
    }
    DAT_00b0da70 = FUN_005a74cc;
    if (bVar1) {
      DAT_00b0da70 = pthread_mutex_lock;
    }
    DAT_00b0da78 = FUN_005a74d0;
    if (bVar1) {
      DAT_00b0da78 = FUN_005a748c;
    }
    DAT_00b0da80 = FUN_005a74d8;
    if (bVar1) {
      DAT_00b0da80 = pthread_mutex_unlock;
    }
    DAT_00b0da60 = FUN_005a74c0;
    if (bVar1) {
      DAT_00b0da60 = FUN_005a7278;
    }
    DataMemoryBarrier(2,3);
    iVar2 = (*DAT_00b0da50)();
    DataMemoryBarrier(2,3);
  }
  else {
    iVar2 = (*DAT_00b0da50)();
    DataMemoryBarrier(2,3);
  }
  if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x005821f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*DAT_00b0da60)(param_1);
    return uVar3;
  }
  return 0;
}


// ===== 005822d4  sqlite3_mutex_free =====

void sqlite3_mutex_free(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x005822e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_00b0da68)();
    return;
  }
  return;
}


// ===== 005822e8  sqlite3_mutex_try =====

void sqlite3_mutex_try(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x005822f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_00b0da78)();
    return;
  }
  return;
}


// ===== 005822fc  sqlite3_release_memory =====

int sqlite3_release_memory(int param_1)

{
  uint uVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  int iVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  
  if (DAT_00b0db28 == 0) {
    if (DAT_00b10528 != 0) {
      (*DAT_00b0da70)();
    }
    iVar13 = 0;
    iVar2 = iVar13;
    if (param_1 != 0) {
      do {
        iVar13 = iVar2;
        puVar6 = DAT_00b10570;
        if ((DAT_00b10570 == (ulong *)0x0) || (*(short *)((long)DAT_00b10570 + 0x16) != 0)) break;
        if ((*DAT_00b10570 < DAT_00b10590) || (iVar8 = DAT_00b10584, DAT_00b10598 <= *DAT_00b10570))
        {
          iVar8 = (*DAT_00b0da28)();
        }
        uVar9 = puVar6[4];
        uVar14 = puVar6[5];
        uVar5 = puVar6[2];
        uVar12 = puVar6[6];
        uVar1 = *(uint *)(uVar9 + 0x3c);
        *(ulong *)(uVar12 + 0x28) = uVar14;
        *(ulong *)(uVar14 + 0x30) = uVar12;
        uVar4 = 0;
        if (uVar1 != 0) {
          uVar4 = (uint)uVar5 / uVar1;
        }
        puVar6[5] = 0;
        *(int *)(uVar9 + 0x34) = *(int *)(uVar9 + 0x34) + -1;
        puVar7 = (ulong *)(*(long *)(uVar9 + 0x40) + (ulong)((uint)uVar5 - uVar4 * uVar1) * 8);
        do {
          puVar10 = puVar7;
          puVar11 = (ulong *)*puVar10;
          puVar7 = puVar11 + 3;
        } while (puVar11 != puVar6);
        iVar2 = *(int *)(uVar9 + 0x38);
        *puVar10 = puVar6[3];
        sVar3 = *(short *)((long)puVar6 + 0x14);
        uVar14 = puVar6[4];
        *(int *)(uVar9 + 0x38) = iVar2 + -1;
        if (sVar3 == 0) {
          FUN_005ac0d8(*puVar6);
          **(int **)(uVar14 + 8) = **(int **)(uVar14 + 8) + -1;
        }
        else {
          uVar9 = *(ulong *)(uVar14 + 0x48);
          *(ulong **)(uVar14 + 0x48) = puVar6;
          puVar6[3] = uVar9;
          **(int **)(uVar14 + 8) = **(int **)(uVar14 + 8) + -1;
        }
        iVar2 = iVar8 + iVar13;
      } while ((param_1 < 0) || (iVar13 = iVar8 + iVar13, iVar2 = iVar13, iVar13 < param_1));
    }
    if (DAT_00b10528 != 0) {
      (*DAT_00b0da80)();
    }
  }
  else {
    iVar13 = 0;
  }
  return iVar13;
}


// ===== 00582494  sqlite3_memory_alarm =====

undefined8 sqlite3_memory_alarm(void)

{
  return 0;
}


// ===== 0058249c  sqlite3_soft_heap_limit64 =====

long sqlite3_soft_heap_limit64(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  iVar3 = sqlite3_initialize();
  if (iVar3 == 0) {
    if (DAT_00b103d8 != 0) {
      (*DAT_00b0da70)();
    }
    lVar5 = DAT_00b103e0;
    if (param_1 < 0) {
      if (DAT_00b103d8 == 0) {
        return DAT_00b103e0;
      }
      (*DAT_00b0da80)();
      return lVar5;
    }
    lVar1 = DAT_00b103e8;
    if (param_1 <= DAT_00b103e8 && param_1 != 0 || DAT_00b103e8 < 1) {
      lVar1 = param_1;
    }
    DAT_00b103f0 = (uint)(0 < lVar1 && lVar1 <= DAT_00b105b8);
    lVar4 = DAT_00b105b8;
    DAT_00b103e0 = lVar1;
    if (DAT_00b103d8 != 0) {
      (*DAT_00b0da80)();
      lVar2 = DAT_00b103d8;
      if (DAT_00b103d8 == 0) {
        lVar4 = DAT_00b105b8 - lVar1;
        if (lVar4 < 1) {
          return lVar5;
        }
        goto LAB_00582580;
      }
      (*DAT_00b0da70)(DAT_00b103d8);
      lVar4 = DAT_00b105b8;
      (*DAT_00b0da80)(lVar2);
    }
    lVar4 = lVar4 - lVar1;
    if (0 < lVar4) {
LAB_00582580:
      sqlite3_release_memory((uint)lVar4 & 0x7fffffff);
      return lVar5;
    }
  }
  else {
    lVar5 = -1;
  }
  return lVar5;
}


// ===== 005825e4  sqlite3_memory_used =====

undefined8 sqlite3_memory_used(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = DAT_00b103d8;
  if (DAT_00b103d8 != 0) {
    (*DAT_00b0da70)(DAT_00b103d8);
    uVar2 = DAT_00b105b8;
    (*DAT_00b0da80)(lVar1);
    return uVar2;
  }
  return DAT_00b105b8;
}


// ===== 00582658  sqlite3_soft_heap_limit =====

void sqlite3_soft_heap_limit(uint param_1)

{
  sqlite3_soft_heap_limit64(param_1 & ((int)param_1 >> 0x1f ^ 0xffffffffU));
  return;
}


// ===== 00582660  sqlite3_hard_heap_limit64 =====

long sqlite3_hard_heap_limit64(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = sqlite3_initialize();
  if (iVar1 == 0) {
    if (DAT_00b103d8 != 0) {
      (*DAT_00b0da70)();
    }
    lVar2 = DAT_00b103e8;
    if (-1 < param_1) {
      DAT_00b103e8 = param_1;
      if ((param_1 < DAT_00b103e0) || (DAT_00b103e0 == 0)) {
        DAT_00b103e0 = param_1;
      }
    }
    if (DAT_00b103d8 != 0) {
      (*DAT_00b0da80)(DAT_00b103d8);
      return lVar2;
    }
  }
  else {
    lVar2 = -1;
  }
  return lVar2;
}


// ===== 005826fc  sqlite3_memory_highwater =====

undefined8 sqlite3_memory_highwater(int param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = DAT_00b103d8;
  if (DAT_00b103d8 != 0) {
    (*DAT_00b0da70)(DAT_00b103d8);
  }
  uVar2 = DAT_00b10608;
  if (param_1 != 0) {
    DAT_00b10608 = DAT_00b105b8;
  }
  if (lVar1 != 0) {
    (*DAT_00b0da80)(lVar1);
  }
  return uVar2;
}


// ===== 00582770  sqlite3_malloc =====

undefined8 sqlite3_malloc(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = sqlite3_initialize();
  if ((0 < param_1) && (iVar1 == 0)) {
    uVar2 = FUN_005827b0(param_1);
    return uVar2;
  }
  return 0;
}


