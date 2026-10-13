// ===== 00783530  <&reqwest::async_impl::client::Client_as_tower_service::Service<reqwest::async_impl::request::Request>>::call =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&reqwest::async_impl::client::Client as
   tower_service::Service<reqwest::async_impl::request::Request>>::call */

void __rustcall
<&reqwest::async_impl::client::Client_as_tower_service::Service<reqwest::async_impl::request::Request>>
::call(undefined8 *param_1)

{
  FUN_00781158(*param_1);
  return;
}


// ===== 00783538  <reqwest::async_impl::client::ClientBuilder_as_core::fmt::Debug>::fmt =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::client::ClientBuilder as core::fmt::Debug>::fmt */

void __rustcall
<reqwest::async_impl::client::ClientBuilder_as_core::fmt::Debug>::fmt
          (long param_1,undefined8 param_2)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,"ClientBuilder",0xd);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_30,&DAT_002e25ea,7,param_1 + 0x345,&DAT_00adb8e0);
  if (*(long *)(param_1 + 0x218) != 0) {
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (auStack_30,&DAT_002e25f1,7,param_1 + 0x208,&PTR_FUN_00adb900);
  }
  if ((*(long *)(param_1 + 0x60) != 1) || (*(long *)(param_1 + 0x68) != 10)) {
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (auStack_30,&DAT_002e25f8,0xf,(long *)(param_1 + 0x60),&PTR_FUN_00adb920);
  }
  if ((*(byte *)(param_1 + 0x325) & 1) != 0) {
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (auStack_30,"referer",7,&DAT_002e2607,&DAT_00adb940);
  }
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_30,"default_headers",0xf,param_1,&PTR_FUN_00adb960);
  if ((*(byte *)(param_1 + 0x32b) & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 0x32c);
  }
  else {
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (auStack_30,"http1_title_case_headers",0x18,&DAT_002e2607,&DAT_00adb940);
    bVar2 = *(byte *)(param_1 + 0x32c);
  }
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 0x32d);
  }
  else {
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (auStack_30,"http1_allow_obsolete_multiline_headers_in_responses",0x33,&DAT_002e2607,
               &DAT_00adb940);
    bVar2 = *(byte *)(param_1 + 0x32d);
  }
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 0x32e);
  }
  else {
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (auStack_30,"http1_ignore_invalid_headers_in_responses",0x29,&DAT_002e2607,
               &DAT_00adb940);
    bVar2 = *(byte *)(param_1 + 0x32e);
  }
  if ((bVar2 & 1) == 0) {
    cVar3 = *(char *)(param_1 + 0x329);
  }
  else {
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (auStack_30,"http1_allow_spaces_after_header_name_in_responses",0x31,&DAT_002e2607,
               &DAT_00adb940);
    cVar3 = *(char *)(param_1 + 0x329);
  }
  if (cVar3 == '\0') {
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (auStack_30,"http1_only",10,&DAT_002e2607,&DAT_00adb940);
    iVar1 = *(int *)(param_1 + 0x288);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x288);
  }
  if (iVar1 != -1) {
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (auStack_30,"connect_timeout",0xf,param_1 + 0x280,&DAT_00adb980);
  }
  if (*(int *)(param_1 + 0x2c8) != -1) {
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (auStack_30,"timeout",7,param_1 + 0x2c0,&DAT_00adb980);
  }
  if (*(char *)(param_1 + 0x332) != '\x02') {
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (auStack_30,"local_address",0xd,param_1 + 0x332,&DAT_00adb9a0);
  }
  if (*(long *)(param_1 + 0x268) != -1) {
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (auStack_30,"interface",9,param_1 + 0x268,&PTR_FUN_00adb9c0);
  }
  if ((*(byte *)(param_1 + 0x32f) & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 800);
  }
  else {
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (auStack_30,"tcp_nodelay",0xb,&DAT_002e2607,&DAT_00adb940);
    bVar2 = *(byte *)(param_1 + 800);
  }
  if ((bVar2 & 1) == 0) {
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (auStack_30,"danger_accept_invalid_hostnames",0x1f,&DAT_002e2607,&DAT_00adb940);
    bVar2 = *(byte *)(param_1 + 0x321);
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x321);
  }
  if ((bVar2 & 1) == 0) {
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (auStack_30,"danger_accept_invalid_certs",0x1b,&DAT_002e2607,&DAT_00adb940);
    cVar3 = *(char *)(param_1 + 0x343);
  }
  else {
    cVar3 = *(char *)(param_1 + 0x343);
  }
  if (cVar3 != -1) {
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (auStack_30,"min_tls_version",0xf,param_1 + 0x343,&DAT_00adb9e0);
  }
  if (*(char *)(param_1 + 0x344) != -1) {
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (auStack_30,"max_tls_version",0xf,param_1 + 0x344,&DAT_00adb9e0);
  }
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_30,"tls_sni",7,param_1 + 0x322,&DAT_00adb940);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_30,"tls_infoDTLSv1_0",8,param_1 + 0x328,&DAT_00adb940);
  if (*(long *)(param_1 + 0x2e8) != 0) {
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (auStack_30,"dns_overrides",0xd,param_1 + 0x2d0,&PTR_thunk_FUN_007b38f0_00adba00);
  }
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_30);
  return;
}


// ===== 0078396c  FUN_0078396c =====

void FUN_0078396c(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"Accepts",7);
  return;
}


// ===== 00783980  FUN_00783980 =====

void FUN_00783980(undefined8 *param_1)

{
  *param_1 = 0xffffffffffffffff;
  return;
}


// ===== 0078398c  FUN_0078398c =====

void FUN_0078398c(undefined8 *param_1)

{
  *param_1 = 0xffffffffffffffff;
  return;
}


// ===== 00783998  FUN_00783998 =====

void FUN_00783998(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,"DnsName",7,&local_18,&DAT_00adbe10);
  return;
}


// ===== 007839d8  FUN_007839d8 =====

void FUN_007839d8(char *param_1,undefined8 param_2)

{
  char *local_18;
  
  if (*param_1 != -1) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00adbe30);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 00783a34  FUN_00783a34 =====

void FUN_00783a34(long *param_1,undefined8 param_2)

{
  long *local_18;
  
  if (*param_1 != 0) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00adbe50);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 00783a8c  FUN_00783a8c =====

void FUN_00783a8c(long *param_1,undefined8 param_2)

{
  long *local_18;
  
  if (*param_1 != 0) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00adbe70);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 00783ae4  FUN_00783ae4 =====

void FUN_00783ae4(short *param_1,undefined8 param_2)

{
  short *local_18;
  
  if (*param_1 == 1) {
    local_18 = param_1 + 1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00adbe90);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 00783b44  FUN_00783b44 =====

void FUN_00783b44(undefined8 param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <u8_as_core::fmt::LowerHex>::fmt();
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <u8_as_core::fmt::Display>::fmt();
    return;
  }
  <u8_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 00783b5c  <reqwest::async_impl::client::Pending_as_core::future::future::Future>::poll =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::client::Pending as core::future::future::Future>::poll */

void __rustcall
<reqwest::async_impl::client::Pending_as_core::future::future::Future>::poll
          (undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  if (*param_2 != 2) {
    <reqwest::async_impl::client::PendingRequest_as_core::future::future::Future>::poll();
    return;
  }
  lVar1 = param_2[1];
  param_2[1] = 0;
  if (lVar1 != 0) {
    *param_1 = 0xffffffffffffffff;
    param_1[1] = lVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed
            ("Pending error polled more than once",0x23,
             &PTR_s__root__cargo_registry_src_index__00adbeb0);
}


// ===== 00783ba4  <reqwest::async_impl::client::PendingRequest_as_core::future::future::Future>::poll =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::client::PendingRequest as core::future::future::Future>::poll */

void __rustcall
<reqwest::async_impl::client::PendingRequest_as_core::future::future::Future>::poll
          (undefined8 *param_1,long *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  byte bVar4;
  undefined1 uVar5;
  undefined5 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined2 uVar11;
  undefined6 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined4 uVar15;
  undefined2 uVar16;
  undefined2 uVar17;
  uint uVar18;
  undefined2 uVar19;
  undefined2 uVar20;
  undefined4 uVar21;
  undefined6 uVar22;
  undefined2 uVar23;
  undefined6 uVar24;
  undefined2 uVar25;
  undefined2 uVar26;
  char cVar27;
  undefined2 uVar28;
  undefined4 uVar29;
  undefined2 uVar30;
  undefined2 uVar31;
  undefined2 uVar32;
  undefined2 uVar33;
  undefined2 uVar34;
  undefined6 uVar35;
  undefined2 uVar36;
  undefined6 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined6 uVar40;
  bool bVar41;
  int iVar42;
  long *plVar43;
  long *******ppppppplVar44;
  undefined8 uVar45;
  void *__dest;
  long *plVar46;
  undefined8 uVar47;
  int *piVar48;
  undefined8 extraout_x1;
  ulong uVar49;
  uint uVar50;
  long lVar51;
  undefined8 *puVar52;
  code *pcVar53;
  long lVar54;
  byte bVar55;
  undefined *puVar56;
  void *pvVar57;
  ulong uVar58;
  size_t sVar59;
  undefined8 uVar60;
  long lVar61;
  undefined8 uVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  undefined1 auVar69 [16];
  undefined8 *local_8a8;
  size_t local_8a0;
  undefined8 local_898;
  long local_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 local_840;
  undefined8 uStack_838;
  undefined8 local_830;
  undefined8 uStack_828;
  undefined8 local_820;
  undefined8 uStack_818;
  undefined8 local_810;
  undefined8 uStack_808;
  undefined8 local_800;
  undefined8 uStack_7f8;
  long *local_7f0;
  undefined **ppuStack_7e8;
  long local_7e0;
  undefined8 uStack_7d8;
  undefined8 local_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 local_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 local_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  long local_770;
  long lStack_768;
  long lStack_760;
  long lStack_758;
  long *******local_750;
  int *piStack_748;
  ulong local_740;
  undefined8 uStack_738;
  undefined8 local_730;
  undefined2 uStack_728;
  undefined2 uStack_726;
  uint uStack_724;
  undefined4 uStack_720;
  undefined4 uStack_71c;
  undefined4 uStack_718;
  undefined4 local_714;
  undefined8 local_710;
  undefined8 uStack_708;
  undefined8 local_700;
  undefined8 local_6f8;
  undefined8 uStack_6f0;
  undefined8 local_6e8;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  undefined4 local_6d8;
  undefined4 uStack_6d4;
  undefined2 uStack_6d0;
  undefined2 uStack_6ce;
  undefined4 uStack_6cc;
  undefined4 uStack_6c8;
  undefined4 uStack_6c4;
  undefined4 uStack_6c0;
  undefined4 uStack_6bc;
  long local_6b8;
  long lStack_6b0;
  undefined1 local_6a8;
  undefined7 uStack_6a7;
  undefined8 local_6a0;
  long lStack_698;
  long local_690;
  long lStack_688;
  long local_680;
  long lStack_678;
  long lStack_670;
  long lStack_668;
  long local_660;
  void *pvStack_658;
  ulong local_650;
  long local_648;
  char local_638;
  byte local_637;
  undefined8 *local_630;
  undefined8 *local_628;
  undefined8 uStack_620;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined8 *local_608;
  undefined8 local_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  long *******local_5e0;
  undefined8 uStack_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined1 uStack_5b8;
  undefined1 uStack_5b7;
  undefined6 uStack_5b6;
  undefined2 uStack_5b0;
  undefined6 uStack_5ae;
  undefined2 local_5a8;
  undefined2 uStack_5a6;
  undefined4 uStack_5a4;
  char cStack_5a0;
  undefined1 uStack_59f;
  undefined2 uStack_59e;
  undefined4 uStack_59c;
  undefined2 local_598;
  undefined2 uStack_596;
  uint uStack_594;
  undefined2 uStack_590;
  undefined2 uStack_58e;
  undefined4 uStack_58c;
  undefined2 local_588;
  undefined2 uStack_586;
  undefined4 uStack_584;
  undefined2 uStack_580;
  undefined6 uStack_57e;
  undefined2 local_578;
  undefined6 uStack_576;
  undefined1 uStack_570;
  undefined1 uStack_56f;
  undefined6 uStack_56e;
  undefined2 local_568;
  undefined6 local_566;
  undefined2 uStack_560;
  undefined6 uStack_55e;
  undefined2 uStack_558;
  undefined6 local_556;
  undefined2 uStack_550;
  undefined6 uStack_54e;
  undefined2 uStack_548;
  undefined6 local_546;
  undefined2 uStack_540;
  undefined6 uStack_53e;
  undefined2 uStack_538;
  undefined6 local_536;
  undefined2 uStack_530;
  undefined6 uStack_52e;
  undefined2 uStack_528;
  undefined6 local_526;
  undefined2 uStack_520;
  undefined6 uStack_51e;
  undefined2 uStack_518;
  undefined6 local_516;
  undefined2 uStack_510;
  undefined6 uStack_50e;
  undefined2 uStack_508;
  undefined6 local_506;
  undefined2 uStack_500;
  undefined6 uStack_4fe;
  undefined2 uStack_4f8;
  undefined6 local_4f6;
  undefined2 uStack_4f0;
  undefined6 uStack_4ee;
  undefined2 uStack_4e8;
  undefined6 uStack_4e6;
  long *******local_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  long *******local_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 *local_400;
  undefined6 uStack_3f8;
  undefined2 uStack_3f2;
  undefined6 uStack_3f0;
  long *******local_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined8 *puStack_320;
  size_t local_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long *******local_300;
  long *******ppppppplStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 *local_240;
  undefined6 uStack_238;
  undefined2 uStack_232;
  undefined6 uStack_230;
  undefined2 uStack_22a;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined1 uStack_218;
  undefined1 uStack_217;
  undefined6 uStack_216;
  undefined2 local_210;
  undefined6 uStack_20e;
  undefined2 uStack_208;
  undefined2 uStack_206;
  undefined4 uStack_204;
  char local_200;
  undefined1 uStack_1ff;
  undefined2 uStack_1fe;
  undefined4 uStack_1fc;
  undefined2 uStack_1f8;
  undefined2 uStack_1f6;
  uint uStack_1f4;
  undefined2 uStack_1f0;
  undefined2 uStack_1ee;
  undefined4 uStack_1ec;
  undefined2 uStack_1e8;
  undefined2 uStack_1e6;
  undefined4 uStack_1e4;
  undefined2 uStack_1e0;
  undefined6 uStack_1de;
  undefined2 local_1d8;
  undefined6 uStack_1d6;
  undefined1 uStack_1d0;
  undefined1 uStack_1cf;
  undefined6 uStack_1ce;
  undefined2 local_1c8;
  undefined6 uStack_1c6;
  char cStack_1c0;
  undefined1 uStack_1bf;
  undefined6 uStack_1be;
  undefined2 uStack_1b8;
  undefined6 uStack_1b6;
  undefined2 uStack_1b0;
  undefined6 uStack_1ae;
  undefined2 uStack_1a8;
  undefined6 uStack_1a6;
  undefined2 local_1a0;
  undefined6 uStack_19e;
  undefined2 uStack_198;
  undefined6 uStack_196;
  undefined2 local_190;
  undefined6 uStack_18e;
  undefined2 uStack_188;
  undefined6 uStack_186;
  undefined2 local_180;
  undefined6 uStack_17e;
  undefined2 uStack_178;
  undefined6 uStack_176;
  undefined2 local_170;
  undefined6 uStack_16e;
  undefined2 uStack_168;
  undefined6 uStack_166;
  undefined2 local_160;
  undefined6 uStack_15e;
  undefined2 uStack_158;
  undefined6 uStack_156;
  undefined2 local_150;
  undefined6 uStack_14e;
  undefined2 uStack_148;
  undefined6 uStack_146;
  long *******local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  long *******local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 *puStack_d8;
  long *******local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *******local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined2 local_90;
  undefined1 auStack_81 [17];
  undefined1 uVar3;
  
  if ((param_2[0x28] == 0) ||
     (iVar42 = <tokio::time::sleep::Sleep_as_core::future::future::Future>::poll
                         (param_2[0x28],param_3), iVar42 != 0)) {
    if ((param_2[0x29] == 0) ||
       (iVar42 = <tokio::time::sleep::Sleep_as_core::future::future::Future>::poll
                           (param_2[0x29],param_3), iVar42 != 0)) {
      uVar9 = DAT_002a1910;
      uVar8 = _UNK_0029fcb8;
      uVar7 = _DAT_0029fcb0;
      uVar62 = _UNK_0029f4f8;
      uVar47 = _DAT_0029f4f0;
      local_898 = 1;
      while( true ) {
        plVar46 = param_2 + 0x11;
        <hyper_util::client::legacy::client::ResponseFuture_as_core::future::future::Future>::poll
                  (&local_7e0,param_2 + 0x25,param_3);
        if (local_7e0 == -1) break;
        if (local_7e0 == -2) {
          *param_1 = 0xfffffffffffffffe;
          return;
        }
        uStack_218 = (undefined1)lStack_768;
        uStack_217 = (undefined1)((ulong)lStack_768 >> 8);
        uStack_216 = (undefined6)((ulong)lStack_768 >> 0x10);
        local_220 = (long *******)local_770;
        uStack_208 = (undefined2)lStack_758;
        uStack_206 = (undefined2)((ulong)lStack_758 >> 0x10);
        uStack_204 = (undefined4)((ulong)lStack_758 >> 0x20);
        local_210 = (undefined2)lStack_760;
        uStack_20e = (undefined6)((ulong)lStack_760 >> 0x10);
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        plVar43 = (long *)FUN_004b25a4(0x20,8);
        if (plVar43 == (long *)0x0) {
                    /* try { // try from 007852b4 to 007852bf has its CatchHandler @ 00785648 */
                    /* WARNING: Subroutine does not return */
          alloc::alloc::handle_alloc_error(8,0x20);
        }
        plVar43[1] = lStack_768;
        *plVar43 = local_770;
        plVar43[3] = lStack_758;
        plVar43[2] = lStack_760;
        uStack_828 = uStack_7a8;
        local_830 = local_7b0;
        uStack_818 = uStack_798;
        local_820 = uStack_7a0;
        uStack_808 = uStack_788;
        local_810 = local_790;
        uStack_7f8 = uStack_778;
        uVar45 = uStack_7f8;
        local_800 = uStack_780;
        uStack_7f8._0_2_ = (ushort)uStack_778;
        uVar50 = (uint)(ushort)uStack_7f8;
        uStack_858 = uStack_7d8;
        local_860 = local_7e0;
        uStack_848 = uStack_7c8;
        uStack_850 = local_7d0;
        uStack_838 = uStack_7b8;
        local_840 = uStack_7c0;
        ppuStack_7e8 = &PTR_FUN_00ad8940;
        uStack_7f8 = uVar45;
        local_7f0 = plVar43;
        if (uVar50 - 0x12d < 3) {
          if ((*param_2 != 0) && (param_2[1] != 0)) {
                    /* try { // try from 00783cf0 to 00783cf7 has its CatchHandler @ 00785468 */
            (**(code **)(param_2[1] + 0x20))(param_2 + 4,param_2[2],param_2[3]);
          }
          *param_2 = 0;
                    /* try { // try from 00783cfc to 00783ddb has its CatchHandler @ 007855e4 */
          FUN_007c335c(&local_220,param_2 + 5,&DAT_002e2908);
          if (local_200 != '\x02') {
            (**(code **)((long)local_220 + 0x20))
                      (&uStack_208,CONCAT62(uStack_216,CONCAT11(uStack_217,uStack_218)),
                       CONCAT62(uStack_20e,local_210));
          }
          FUN_007c335c(&local_220,param_2 + 5,&DAT_002e2928);
          if (local_200 != '\x02') {
            (**(code **)((long)local_220 + 0x20))
                      (&uStack_208,CONCAT62(uStack_216,CONCAT11(uStack_217,uStack_218)),
                       CONCAT62(uStack_20e,local_210));
          }
          FUN_007c335c(&local_220,param_2 + 5,&DAT_002e2948);
          if (local_200 != '\x02') {
            (**(code **)((long)local_220 + 0x20))
                      (&uStack_208,CONCAT62(uStack_216,CONCAT11(uStack_217,uStack_218)),
                       CONCAT62(uStack_20e,local_210));
          }
          FUN_007c335c(&local_220,param_2 + 5,&DAT_002e2968);
          if (local_200 != '\x02') {
            (**(code **)((long)local_220 + 0x20))
                      (&uStack_208,CONCAT62(uStack_216,CONCAT11(uStack_217,uStack_218)),
                       CONCAT62(uStack_20e,local_210));
          }
          if ((*(byte *)(param_2 + 0x21) | 4) != 5) {
            if ((9 < *(byte *)(param_2 + 0x21)) && (param_2[0x23] != 0)) {
              free((void *)param_2[0x22]);
            }
            param_2[0x22] = 0x101010101010101;
            param_2[0x23] = 0x101010101010101;
            param_2[0x21] = 0x101010101010101;
          }
        }
        else if ((1 < uVar50 - 0x133) || ((*param_2 == 1 && (param_2[1] == 0)))) goto LAB_007850b0;
        uStack_218 = (undefined1)_UNK_002bf8b0;
        uStack_217 = (undefined1)((ulong)_UNK_002bf8b0 >> 8);
        uStack_216 = (undefined6)((ulong)_UNK_002bf8b0 >> 0x10);
        local_220 = _DAT_002bf8a8;
        uStack_208 = (undefined2)_UNK_002bf8c0;
        uStack_206 = (undefined2)((ulong)_UNK_002bf8c0 >> 0x10);
        uStack_204 = (undefined4)((ulong)_UNK_002bf8c0 >> 0x20);
        local_210 = (undefined2)_DAT_002bf8b8;
        uStack_20e = (undefined6)((ulong)_DAT_002bf8b8 >> 0x10);
                    /* try { // try from 00783e4c to 00783e9b has its CatchHandler @ 007855dc */
        ppppppplVar44 = (long *******)FUN_007c2f68(&local_860,&local_220);
        if (ppppppplVar44 == (long *******)0x0) goto LAB_007850b0;
        local_300 = ppppppplVar44;
        core::str::converts::from_utf8(&local_5c0,ppppppplVar44[1],ppppppplVar44[2]);
        uVar29 = uStack_1ec;
        uVar32 = uStack_1ee;
        uVar31 = uStack_1f0;
        uVar50 = uStack_1f4;
        uVar30 = uStack_1f6;
        uVar28 = uStack_1f8;
        uVar1 = uStack_204;
        uVar26 = uStack_206;
        uVar25 = uStack_208;
        uVar22 = uStack_20e;
        uVar23 = local_210;
        local_210 = (undefined2)uVar47;
        uVar11 = local_210;
        uStack_20e = (undefined6)((ulong)uVar47 >> 0x10);
        uVar12 = uStack_20e;
        uStack_208 = (undefined2)uVar62;
        uVar13 = uStack_208;
        uStack_206 = (undefined2)((ulong)uVar62 >> 0x10);
        uVar14 = uStack_206;
        uStack_204 = (undefined4)((ulong)uVar62 >> 0x20);
        uVar15 = uStack_204;
        uStack_1f8 = (undefined2)uVar7;
        uVar16 = uStack_1f8;
        uStack_1f6 = (undefined2)((ulong)uVar7 >> 0x10);
        uVar17 = uStack_1f6;
        uStack_1f4 = (uint)((ulong)uVar7 >> 0x20);
        uVar18 = uStack_1f4;
        uStack_1f0 = (undefined2)uVar8;
        uVar19 = uStack_1f0;
        uStack_1ee = (undefined2)((ulong)uVar8 >> 0x10);
        uVar20 = uStack_1ee;
        uStack_1ec = (undefined4)((ulong)uVar8 >> 0x20);
        uVar21 = uStack_1ec;
        if (local_5c0 == (long *******)&DAT_00000001) {
LAB_00784fa0:
          if (3 < *(ulong *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78) {
            local_5c0 = (long *******)&local_300;
            uStack_1e0 = 0x1b;
            uStack_1de = 0;
            uStack_5b8 = 0x70;
            uStack_5b7 = 0x75;
            uStack_5b6 = 0x7c;
            uStack_1d0 = 0x8f;
            uStack_1cf = 0xc9;
            uStack_1ce = 0x2a;
            local_1c8 = SUB82(&local_5c0,0);
            uStack_1c6 = (undefined6)((ulong)&local_5c0 >> 0x10);
            uStack_218 = 0xce;
            uStack_217 = 0x21;
            uStack_216 = 0x2d;
            uStack_1e8 = 0x21ce;
            uStack_1e6 = 0x2d;
            uStack_1e4 = 0;
            local_220 = (long *******)0x0;
            local_200 = 0x9c;
            uStack_1ff = 0x60;
            uStack_1fe = 0x2b;
            uStack_1fc = 0;
            local_1d8 = (undefined2)DAT_002a11f8;
            uStack_1d6 = (undefined6)((ulong)DAT_002a11f8 >> 0x10);
                    /* try { // try from 0078501c to 00785027 has its CatchHandler @ 007853f0 */
            local_210 = uVar11;
            uStack_20e = uVar12;
            uStack_208 = uVar13;
            uStack_206 = uVar14;
            uStack_204 = uVar15;
            uStack_1f8 = uVar16;
            uStack_1f6 = uVar17;
            uStack_1f4 = uVar18;
            uStack_1f0 = uVar19;
            uStack_1ee = uVar20;
            uStack_1ec = uVar21;
            <log::__private_api::GlobalLogger_as_log::Log>::log(auStack_81,&local_220);
          }
LAB_007850b0:
          local_1d8 = (undefined2)uStack_818;
          uStack_1d6 = (undefined6)((ulong)uStack_818 >> 0x10);
          uStack_1e0 = (undefined2)local_820;
          uStack_1de = (undefined6)((ulong)local_820 >> 0x10);
          local_1c8 = (undefined2)uStack_808;
          uStack_1c6 = (undefined6)((ulong)uStack_808 >> 0x10);
          uStack_1d0 = (undefined1)local_810;
          uStack_1cf = (undefined1)((ulong)local_810 >> 8);
          uStack_1ce = (undefined6)((ulong)local_810 >> 0x10);
          uStack_1b8 = (undefined2)uStack_7f8;
          uStack_1b6 = (undefined6)((ulong)uStack_7f8 >> 0x10);
          cStack_1c0 = (char)local_800;
          uStack_1bf = (undefined1)((ulong)local_800 >> 8);
          uStack_1be = (undefined6)((ulong)local_800 >> 0x10);
          uStack_1a8 = SUB82(ppuStack_7e8,0);
          uStack_1a6 = (undefined6)((ulong)ppuStack_7e8 >> 0x10);
          uStack_1b0 = SUB82(local_7f0,0);
          uStack_1ae = (undefined6)((ulong)local_7f0 >> 0x10);
          uStack_208 = (undefined2)uStack_848;
          uStack_206 = (undefined2)((ulong)uStack_848 >> 0x10);
          uStack_204 = (undefined4)((ulong)uStack_848 >> 0x20);
          local_210 = (undefined2)uStack_850;
          uStack_20e = (undefined6)((ulong)uStack_850 >> 0x10);
          uStack_218 = (undefined1)uStack_858;
          uStack_217 = (undefined1)((ulong)uStack_858 >> 8);
          uStack_216 = (undefined6)((ulong)uStack_858 >> 0x10);
          local_220 = (long *******)local_860;
          uStack_1f8 = (undefined2)uStack_838;
          uStack_1f6 = (undefined2)((ulong)uStack_838 >> 0x10);
          uStack_1f4 = (uint)((ulong)uStack_838 >> 0x20);
          local_200 = (char)local_840;
          uStack_1ff = (undefined1)((ulong)local_840 >> 8);
          uStack_1fe = (undefined2)((ulong)local_840 >> 0x10);
          uStack_1fc = (undefined4)((ulong)local_840 >> 0x20);
          uStack_1e8 = (undefined2)uStack_828;
          uStack_1e6 = (undefined2)((ulong)uStack_828 >> 0x10);
          uStack_1e4 = (undefined4)((ulong)uStack_828 >> 0x20);
          uStack_1f0 = (undefined2)local_830;
          uStack_1ee = (undefined2)((ulong)local_830 >> 0x10);
          uStack_1ec = (undefined4)((ulong)local_830 >> 0x20);
                    /* try { // try from 007850e0 to 007850eb has its CatchHandler @ 0078541c */
          <alloc::string::String_as_core::clone::Clone>::clone(&local_5c0,param_2 + 0x11);
          uStack_570 = (undefined1)param_2[0x1b];
          local_598 = (undefined2)param_2[0x16];
          uStack_584 = *(undefined4 *)((long)param_2 + 0xc4);
          uStack_596 = *(undefined2 *)((long)param_2 + 0xb2);
          lVar51 = param_2[0x28];
          uStack_5a4 = *(undefined4 *)((long)param_2 + 0xa4);
          local_578 = (undefined2)param_2[0x1a];
          uStack_576 = (undefined6)((ulong)param_2[0x1a] >> 0x10);
          uStack_580 = (undefined2)param_2[0x19];
          uStack_57e = (undefined6)((ulong)param_2[0x19] >> 0x10);
          uVar62 = *(undefined8 *)((long)param_2 + 0xbc);
          uVar47 = *(undefined8 *)((long)param_2 + 0xb4);
          local_5a8 = (undefined2)(int)param_2[0x14];
          uStack_5a6 = (undefined2)((uint)(int)param_2[0x14] >> 0x10);
          uVar1 = (undefined4)param_2[0x15];
          uStack_59c = *(undefined4 *)((long)param_2 + 0xac);
          uStack_58c = (undefined4)uVar62;
          local_588 = (undefined2)((ulong)uVar62 >> 0x20);
          uStack_586 = (undefined2)((ulong)uVar62 >> 0x30);
          uStack_594 = (uint)uVar47;
          uStack_590 = (undefined2)((ulong)uVar47 >> 0x20);
          uStack_58e = (undefined2)((ulong)uVar47 >> 0x30);
          cStack_5a0 = (char)uVar1;
          uStack_59f = (undefined1)((uint)uVar1 >> 8);
          uStack_59e = (undefined2)((uint)uVar1 >> 0x10);
          param_2[0x28] = 0;
          FUN_0077901c(param_1,&local_220,&local_5c0,lVar51,param_2[0x1f],(int)param_2[0x20]);
          return;
        }
        uVar45 = CONCAT62(uStack_5ae,uStack_5b0);
        local_5c0 = (long *******)0x0;
        uStack_5b0 = 0;
        uStack_5ae = 0;
        cStack_5a0 = (char)plVar46;
        uStack_59f = (undefined1)((ulong)plVar46 >> 8);
        uStack_59e = (undefined2)((ulong)plVar46 >> 0x10);
        uStack_59c = (undefined4)((ulong)plVar46 >> 0x20);
        local_210 = uVar23;
        uStack_20e = uVar22;
        uStack_208 = uVar25;
        uStack_206 = uVar26;
        uStack_204 = uVar1;
        uStack_1f8 = uVar28;
        uStack_1f6 = uVar30;
        uStack_1f4 = uVar50;
        uStack_1f0 = uVar31;
        uStack_1ee = uVar32;
        uStack_1ec = uVar29;
        <url::url::ParseOptions>::parse
                  (&local_220,&local_5c0,CONCAT62(uStack_5b6,CONCAT11(uStack_5b7,uStack_5b8)),uVar45
                  );
        ppppppplVar44 = local_220;
        if (local_220 == (long *******)0xffffffffffffffff) goto LAB_00784fa0;
        local_5c0 = local_220;
        cStack_5a0 = local_200;
        uStack_59f = uStack_1ff;
        uStack_59e = uStack_1fe;
        uStack_59c = uStack_1fc;
        local_5a8 = uStack_208;
        uStack_5a6 = uStack_206;
        uStack_5a4 = uStack_204;
        uStack_590 = uStack_1f0;
        uStack_58e = uStack_1ee;
        uStack_58c = uStack_1ec;
        local_598 = uStack_1f8;
        uStack_596 = uStack_1f6;
        uStack_594 = uStack_1f4;
        uStack_580 = uStack_1e0;
        uStack_57e = uStack_1de;
        local_588 = uStack_1e8;
        uStack_586 = uStack_1e6;
        uStack_584 = uStack_1e4;
        uStack_570 = uStack_1d0;
        uStack_56f = uStack_1cf;
        uStack_56e = uStack_1ce;
        local_578 = local_1d8;
        uStack_576 = uStack_1d6;
        uStack_5b0 = local_210;
        uStack_5ae = uStack_20e;
        uStack_5b8 = uStack_218;
        uStack_5b7 = uStack_217;
        uStack_5b6 = uStack_216;
                    /* try { // try from 00783ed4 to 00783ef3 has its CatchHandler @ 007855bc */
        FUN_00779858(&local_220,&local_5c0);
        if ((char)local_220 == -1) {
                    /* try { // try from 00784f84 to 00784f8b has its CatchHandler @ 007853dc */
          FUN_0077c844(&uStack_218);
          if (ppppppplVar44 != (long *******)0x0) {
            free((void *)CONCAT62(uStack_5b6,CONCAT11(uStack_5b7,uStack_5b8)));
          }
          goto LAB_00784fa0;
        }
        FUN_0077d138(&local_220);
        local_730 = CONCAT44(uStack_59c,CONCAT22(uStack_59e,CONCAT11(uStack_59f,cStack_5a0)));
        uStack_718 = CONCAT22(uStack_586,local_588);
        uStack_720 = CONCAT22(uStack_58e,uStack_590);
        local_700 = CONCAT62(uStack_56e,CONCAT11(uStack_56f,uStack_570));
        piStack_748 = (int *)CONCAT62(uStack_5b6,CONCAT11(uStack_5b7,uStack_5b8));
        uStack_738 = CONCAT44(uStack_5a4,CONCAT22(uStack_5a6,local_5a8));
        local_740 = CONCAT62(uStack_5ae,uStack_5b0);
        uStack_728 = local_598;
        uStack_726 = uStack_596;
        uStack_724 = uStack_594;
        local_714 = uStack_584;
        uStack_71c = uStack_58c;
        uStack_708 = CONCAT62(uStack_576,local_578);
        local_710 = CONCAT62(uStack_57e,uStack_580);
        local_750 = ppppppplVar44;
        ppppppplVar44 = (long *******)(param_2 + 0x11);
        if ((*(byte *)(param_2[0x24] + 0x180) & 1) != 0) {
          uVar49 = (ulong)uStack_594;
          if (uStack_594 != 0) {
            uVar3 = uStack_218;
            uVar2 = uStack_217;
            uVar22 = uStack_216;
            uVar23 = local_210;
            uVar24 = uStack_20e;
            uVar25 = uStack_208;
            uVar26 = uStack_206;
            uVar1 = uStack_204;
            cVar27 = local_200;
            uVar5 = uStack_1ff;
            uVar28 = uStack_1fe;
            uVar29 = uStack_1fc;
            uVar30 = uStack_1f0;
            uVar31 = uStack_1ee;
            uVar32 = uStack_1e8;
            uVar33 = uStack_1e6;
            uVar34 = uStack_1e0;
            uVar35 = uStack_1de;
            uVar36 = local_1d8;
            uVar37 = uStack_1d6;
            uVar38 = uStack_1d0;
            uVar39 = uStack_1cf;
            uVar40 = uStack_1ce;
            piVar48 = piStack_748;
            uVar58 = local_740;
            if (uVar49 < local_740) {
              iVar42 = (int)*(char *)((long)piStack_748 + uVar49);
              if (iVar42 == -0x41 || iVar42 + 0x41 < 0 != SCARRY4(iVar42,0x41)) goto LAB_0078531c;
            }
            else if (local_740 != uVar49) goto LAB_0078531c;
            if ((uStack_594 == 4) && (*piStack_748 == 0x70747468)) {
              uVar50 = *(uint *)((long)param_2 + 0xb4);
              uVar49 = (ulong)uVar50;
              if (uVar50 != 0) {
                piVar48 = (int *)param_2[0x12];
                uVar58 = param_2[0x13];
                if (uVar49 < uVar58) {
                  if (*(char *)((long)piVar48 + uVar49) + 0x40 < 0 !=
                      SCARRY4((int)*(char *)((long)piVar48 + uVar49),0x40)) goto LAB_0078531c;
                }
                else if (uVar58 != uVar49) goto LAB_0078531c;
                if ((uVar50 == 5) && (*piVar48 == 0x70747468 && (char)piVar48[1] == 's'))
                goto LAB_00784104;
              }
            }
          }
                    /* try { // try from 00783f74 to 00783f7f has its CatchHandler @ 007855d8 */
          <alloc::string::String_as_core::clone::Clone>::clone(&local_220,param_2 + 0x11);
          uStack_1d0 = (undefined1)param_2[0x1b];
          uStack_1f8 = (undefined2)param_2[0x16];
          uStack_1e4 = *(undefined4 *)((long)param_2 + 0xc4);
          uStack_1f6 = *(undefined2 *)((long)param_2 + 0xb2);
          uStack_204 = *(undefined4 *)((long)param_2 + 0xa4);
          local_1d8 = (undefined2)param_2[0x1a];
          uStack_1d6 = (undefined6)((ulong)param_2[0x1a] >> 0x10);
          uStack_1e0 = (undefined2)param_2[0x19];
          uStack_1de = (undefined6)((ulong)param_2[0x19] >> 0x10);
          uVar60 = *(undefined8 *)((long)param_2 + 0xbc);
          uVar45 = *(undefined8 *)((long)param_2 + 0xb4);
          uStack_208 = (undefined2)(int)param_2[0x14];
          uStack_206 = (undefined2)((uint)(int)param_2[0x14] >> 0x10);
          uVar1 = (undefined4)param_2[0x15];
          uStack_1fc = *(undefined4 *)((long)param_2 + 0xac);
          uStack_1ec = (undefined4)uVar60;
          uStack_1e8 = (undefined2)((ulong)uVar60 >> 0x20);
          uStack_1e6 = (undefined2)((ulong)uVar60 >> 0x30);
          uStack_1f4 = (uint)uVar45;
          uStack_1f0 = (undefined2)((ulong)uVar45 >> 0x20);
          uStack_1ee = (undefined2)((ulong)uVar45 >> 0x30);
          local_200 = (char)uVar1;
          uStack_1ff = (undefined1)((uint)uVar1 >> 8);
          uStack_1fe = (undefined2)((uint)uVar1 >> 0x10);
                    /* try { // try from 00783fc8 to 00784047 has its CatchHandler @ 007855a0 */
          <url::url::Url>::set_username(&local_220,1,0);
          <url::url::Url>::set_password(&local_220,0);
          <url::url::Url>::set_fragment(&local_220,0);
          pvVar57 = (void *)CONCAT62(uStack_216,CONCAT11(uStack_217,uStack_218));
          if (CONCAT62(uStack_20e,local_210) != 0) {
            lVar51 = 0;
            do {
              bVar4 = *(byte *)((long)pvVar57 + lVar51);
              if (bVar4 < 0x20) {
                if (bVar4 != 9) {
LAB_0078402c:
                  if (local_220 != (long *******)0x0) {
                    free(pvVar57);
                  }
                  goto LAB_00784104;
                }
              }
              else if (bVar4 == 0x7f) goto LAB_0078402c;
              lVar51 = lVar51 + 1;
            } while (CONCAT62(uStack_20e,local_210) != lVar51);
          }
          <bytes::bytes::bytes::bytes::Bytes>::copy_from_slice(&local_5c0);
          uStack_4b8 = CONCAT62(uStack_5b6,CONCAT11(uStack_5b7,uStack_5b8));
          uStack_4a8 = CONCAT44(uStack_5a4,CONCAT22(uStack_5a6,local_5a8));
          uStack_4b0 = CONCAT62(uStack_5ae,uStack_5b0);
          local_4c0 = local_5c0;
          local_6a0._0_7_ = CONCAT43(uStack_59c,CONCAT21(uStack_59e,uStack_59f));
          if (local_220 != (long *******)0x0) {
            free((void *)CONCAT62(uStack_216,CONCAT11(uStack_217,uStack_218)));
          }
          iVar42 = (int)local_6a0;
          ppppppplStack_2f8 = (long *******)uStack_4b8;
          local_300 = local_4c0;
          uStack_2e8 = uStack_4a8;
          local_2f0 = uStack_4b0;
          local_2e0 = CONCAT44(local_6a0._3_4_,iVar42 << 8);
          uStack_3d8 = _UNK_002c03d0;
          local_3e0 = _s__002c03c8;
          uStack_3c8 = _UNK_002c03e0;
          uStack_3d0 = _DAT_002c03d8;
                    /* try { // try from 007840ac to 0078410f has its CatchHandler @ 007855d8 */
          FUN_0077acbc(&local_220,param_2 + 5,&local_3e0,&local_300);
          if (local_200 == -1) {
                    /* try { // try from 007852e4 to 00785307 has its CatchHandler @ 00785604 */
                    /* WARNING: Subroutine does not return */
            core::result::unwrap_failed
                      (&DAT_002d21e9,0x17,auStack_81,&DAT_00ad8c98,
                       &PTR_s__root__cargo_registry_src_index__00ad8d20);
          }
          uStack_5b8 = uStack_218;
          uStack_5b7 = uStack_217;
          uStack_5b6 = uStack_216;
          local_5c0 = local_220;
          local_5a8 = uStack_208;
          uStack_5a6 = uStack_206;
          uStack_5a4 = uStack_204;
          uStack_5b0 = local_210;
          uStack_5ae = uStack_20e;
          cStack_5a0 = local_200;
          uStack_59f = uStack_1ff;
          uStack_59e = uStack_1fe;
          uStack_59c = uStack_1fc;
          if (local_200 != '\x02') {
            (*(code *)local_220[4])
                      (&local_5a8,CONCAT62(uStack_216,CONCAT11(uStack_217,uStack_218)),
                       CONCAT62(uStack_20e,local_210));
          }
        }
LAB_00784104:
        <alloc::string::String_as_core::clone::Clone>::clone(&local_6f8,param_2 + 0x11);
        local_6a8 = (undefined1)param_2[0x1b];
        uStack_6d0 = (undefined2)param_2[0x16];
        lStack_6b0 = param_2[0x1a];
        local_6b8 = param_2[0x19];
        lVar51 = param_2[0x1e];
        uStack_6ce = *(undefined2 *)((long)param_2 + 0xb2);
        uStack_6e0 = (undefined4)param_2[0x14];
        uStack_6dc = *(undefined4 *)((long)param_2 + 0xa4);
        uStack_6bc = *(undefined4 *)((long)param_2 + 0xc4);
        local_6d8 = (undefined4)param_2[0x15];
        uStack_6d4 = *(undefined4 *)((long)param_2 + 0xac);
        uStack_6c4 = (undefined4)*(undefined8 *)((long)param_2 + 0xbc);
        uStack_6c0 = (undefined4)((ulong)*(undefined8 *)((long)param_2 + 0xbc) >> 0x20);
        uStack_6cc = (undefined4)*(undefined8 *)((long)param_2 + 0xb4);
        uStack_6c8 = (undefined4)((ulong)*(undefined8 *)((long)param_2 + 0xb4) >> 0x20);
        if (lVar51 == param_2[0x1c]) {
                    /* try { // try from 0078416c to 00784173 has its CatchHandler @ 007854f4 */
          <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<url::Url>>::grow_one(param_2 + 0x1c);
        }
        puVar52 = (undefined8 *)(param_2[0x1d] + lVar51 * 0x58);
        puVar52[5] = CONCAT44(uStack_6cc,CONCAT22(uStack_6ce,uStack_6d0));
        puVar52[4] = CONCAT44(uStack_6d4,local_6d8);
        puVar52[7] = CONCAT44(uStack_6bc,uStack_6c0);
        puVar52[6] = CONCAT44(uStack_6c4,uStack_6c8);
        puVar52[10] = CONCAT71(uStack_6a7,local_6a8);
        puVar52[9] = lStack_6b0;
        puVar52[8] = local_6b8;
        puVar52[1] = uStack_6f0;
        *puVar52 = local_6f8;
        puVar52[3] = CONCAT44(uStack_6dc,uStack_6e0);
        puVar52[2] = local_6e8;
        uVar49 = lVar51 + 1;
        lVar51 = param_2[0x24];
        param_2[0x1e] = uVar49;
        if (*(long *)(lVar51 + 0x140) == 0) {
          local_220 = (long *******)&local_750;
          lVar54 = param_2[0x1d];
          uStack_218 = (undefined1)lVar54;
          uStack_217 = (undefined1)((ulong)lVar54 >> 8);
          uStack_216 = (undefined6)((ulong)lVar54 >> 0x10);
          local_210 = (undefined2)uVar49;
          uStack_20e = (undefined6)(uVar49 >> 0x10);
          uStack_208 = (ushort)uStack_7f8;
                    /* try { // try from 007841f8 to 0078428f has its CatchHandler @ 007855d8 */
          (**(code **)(*(long *)(lVar51 + 0x150) + 0x28))
                    (&local_5c0,*(undefined8 *)(lVar51 + 0x148),&local_220);
          if (local_5c0 != (long *******)0x0) {
            if (local_5c0 != (long *******)&DAT_00000001) {
              local_898 = CONCAT62(uStack_5b6,CONCAT11(uStack_5b7,uStack_5b8));
              puVar56 = (undefined *)CONCAT62(uStack_5ae,uStack_5b0);
LAB_00785228:
                    /* try { // try from 00785228 to 00785233 has its CatchHandler @ 007853c8 */
              <alloc::string::String_as_core::clone::Clone>::clone(&local_220,param_2 + 0x11);
              uStack_1d0 = (undefined1)param_2[0x1b];
              uStack_1f8 = (undefined2)param_2[0x16];
              uStack_1e4 = *(undefined4 *)((long)param_2 + 0xc4);
              uStack_1f6 = *(undefined2 *)((long)param_2 + 0xb2);
              uStack_204 = *(undefined4 *)((long)param_2 + 0xa4);
              local_1d8 = (undefined2)param_2[0x1a];
              uStack_1d6 = (undefined6)((ulong)param_2[0x1a] >> 0x10);
              uStack_1e0 = (undefined2)param_2[0x19];
              uStack_1de = (undefined6)((ulong)param_2[0x19] >> 0x10);
              uVar62 = *(undefined8 *)((long)param_2 + 0xbc);
              uVar47 = *(undefined8 *)((long)param_2 + 0xb4);
              uStack_208 = (undefined2)(int)param_2[0x14];
              uStack_206 = (undefined2)((uint)(int)param_2[0x14] >> 0x10);
              uVar1 = (undefined4)param_2[0x15];
              uStack_1fc = *(undefined4 *)((long)param_2 + 0xac);
              uStack_1ec = (undefined4)uVar62;
              uStack_1e8 = (undefined2)((ulong)uVar62 >> 0x20);
              uStack_1e6 = (undefined2)((ulong)uVar62 >> 0x30);
              uStack_1f4 = (uint)uVar47;
              uStack_1f0 = (undefined2)((ulong)uVar47 >> 0x20);
              uStack_1ee = (undefined2)((ulong)uVar47 >> 0x30);
              local_200 = (char)uVar1;
              uStack_1ff = (undefined1)((uint)uVar1 >> 8);
              uStack_1fe = (undefined2)((uint)uVar1 >> 0x10);
                    /* try { // try from 0078527c to 0078528b has its CatchHandler @ 007853c4 */
              uVar47 = FUN_0076fae4(local_898,puVar56,&local_220);
              *param_1 = 0xffffffffffffffff;
              param_1[1] = uVar47;
              if (local_750 != (long *******)0x0) {
                free(piStack_748);
              }
              goto LAB_007852a8;
            }
LAB_00785034:
            if (3 < *(ulong *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78) {
              local_5c0 = (long *******)&local_750;
              uStack_5b8 = 0x94;
              uStack_5b7 = 0x2f;
              uStack_5b6 = 0x78;
              uStack_218 = 0x1b;
              uStack_217 = 0;
              uStack_216 = 0;
              uStack_208 = 0x1b;
              uStack_206 = 0;
              uStack_204 = 0;
              local_220 = (long *******)&DAT_002d21ce;
              local_210 = 0x21ce;
              uStack_20e = 0x2d;
              local_200 = -8;
              uStack_1ff = 0xbe;
              uStack_1fe = 0xad;
              uStack_1fc = 0;
                    /* try { // try from 00785084 to 0078509b has its CatchHandler @ 00785604 */
              FUN_0079a098(&DAT_002a9f23,&local_5c0,4,&local_220);
            }
            if (local_750 != (long *******)0x0) {
              free(piStack_748);
            }
            goto LAB_007850b0;
          }
        }
        else {
          if (*(long *)(lVar51 + 0x140) != 1) goto LAB_00785034;
          if (*(ulong *)(lVar51 + 0x148) <= uVar49) {
            puVar56 = &DAT_00adcaf0;
            goto LAB_00785228;
          }
        }
        if (3 < *(ulong *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78) {
          uStack_5b0 = SUB82(&local_750,0);
          uStack_5ae = (undefined6)((ulong)&local_750 >> 0x10);
          uStack_1e0 = 0x1b;
          uStack_1de = 0;
          uStack_1d0 = 0xdd;
          uStack_1cf = 0x3c;
          uStack_1ce = 0x2a;
          uStack_218 = 0xce;
          uStack_217 = 0x21;
          uStack_216 = 0x2d;
          uStack_1e8 = 0x21ce;
          uStack_1e6 = 0x2d;
          uStack_1e4 = 0;
          uStack_5b8 = 0x94;
          uStack_5b7 = 0x2f;
          uStack_5b6 = 0x78;
          local_5a8 = 0x2f94;
          uStack_5a6 = 0x78;
          uStack_5a4 = 0;
          local_1c8 = SUB82(&local_5c0,0);
          uStack_1c6 = (undefined6)((ulong)&local_5c0 >> 0x10);
          local_220 = (long *******)0x0;
          local_200 = -100;
          uStack_1ff = 0x60;
          uStack_1fe = 0x2b;
          uStack_1fc = 0;
          local_1d8 = (undefined2)uVar9;
          uStack_1d6 = (undefined6)((ulong)uVar9 >> 0x10);
          local_5c0 = ppppppplVar44;
          local_210 = uVar11;
          uStack_20e = uVar12;
          uStack_208 = uVar13;
          uStack_206 = uVar14;
          uStack_204 = uVar15;
          uStack_1f8 = uVar16;
          uStack_1f6 = uVar17;
          uStack_1f4 = uVar18;
          uStack_1f0 = uVar19;
          uStack_1ee = uVar20;
          uStack_1ec = uVar21;
          <log::__private_api::GlobalLogger_as_log::Log>::log(auStack_81,&local_220);
        }
        uVar40 = uStack_1ce;
        uVar39 = uStack_1cf;
        uVar38 = uStack_1d0;
        uVar37 = uStack_1d6;
        uVar36 = local_1d8;
        uVar35 = uStack_1de;
        uVar34 = uStack_1e0;
        uVar33 = uStack_1e6;
        uVar32 = uStack_1e8;
        uVar31 = uStack_1ee;
        uVar30 = uStack_1f0;
        uVar29 = uStack_1fc;
        uVar28 = uStack_1fe;
        uVar5 = uStack_1ff;
        cVar27 = local_200;
        uVar1 = uStack_204;
        uVar26 = uStack_206;
        uVar25 = uStack_208;
        uVar24 = uStack_20e;
        uVar23 = local_210;
        uVar22 = uStack_216;
        uVar2 = uStack_217;
        uVar3 = uStack_218;
        uVar49 = (ulong)uStack_724;
        uStack_1e0 = (undefined2)local_710;
        uStack_1de = (undefined6)((ulong)local_710 >> 0x10);
        local_1d8 = (undefined2)uStack_708;
        uStack_1d6 = (undefined6)((ulong)uStack_708 >> 0x10);
        local_200 = (char)local_730;
        uStack_1ff = (undefined1)((ulong)local_730 >> 8);
        uStack_1fe = (undefined2)((ulong)local_730 >> 0x10);
        uStack_1fc = (undefined4)((ulong)local_730 >> 0x20);
        uStack_1f0 = (undefined2)uStack_720;
        uStack_1ee = (undefined2)((uint)uStack_720 >> 0x10);
        uStack_1e8 = (undefined2)uStack_718;
        uStack_1e6 = (undefined2)((uint)uStack_718 >> 0x10);
        uStack_1d0 = (undefined1)local_700;
        uStack_1cf = (undefined1)((ulong)local_700 >> 8);
        uStack_1ce = (undefined6)((ulong)local_700 >> 0x10);
        uStack_218 = SUB81(piStack_748,0);
        uStack_217 = (undefined1)((ulong)piStack_748 >> 8);
        uStack_216 = (undefined6)((ulong)piStack_748 >> 0x10);
        local_210 = (undefined2)local_740;
        uStack_20e = (undefined6)(local_740 >> 0x10);
        uStack_208 = (undefined2)uStack_738;
        uStack_206 = (undefined2)((ulong)uStack_738 >> 0x10);
        uStack_204 = (undefined4)((ulong)uStack_738 >> 0x20);
        if (uStack_724 == 0) {
LAB_00784f08:
          uStack_1f8 = uStack_728;
          uStack_1f6 = uStack_726;
          uStack_1f4 = uStack_724;
          uStack_1e4 = local_714;
          uStack_1ec = uStack_71c;
          local_220 = local_750;
                    /* try { // try from 00784f30 to 00784f37 has its CatchHandler @ 007853f8 */
          uVar47 = FUN_00772be0(&local_220);
LAB_007851ec:
          *param_1 = 0xffffffffffffffff;
          param_1[1] = uVar47;
LAB_007852a8:
          FUN_0077b7c0(&local_860);
          return;
        }
        piVar48 = piStack_748;
        uVar58 = local_740;
        if (uVar49 < local_740) {
          iVar42 = (int)*(char *)((long)piStack_748 + uVar49);
          if (iVar42 == -0x41 || iVar42 + 0x41 < 0 != SCARRY4(iVar42,0x41)) goto LAB_0078531c;
        }
        else if (local_740 != uVar49) goto LAB_0078531c;
        if ((uStack_724 != 4) || (*piStack_748 != 0x70747468)) {
          if (uVar49 < local_740) {
            iVar42 = (int)*(char *)((long)piStack_748 + uVar49);
            if (iVar42 == -0x41 || iVar42 + 0x41 < 0 != SCARRY4(iVar42,0x41)) goto LAB_0078531c;
          }
          else if (local_740 != uVar49) goto LAB_0078531c;
          if ((uStack_724 != 5) || (*piStack_748 != 0x70747468 || (char)piStack_748[1] != 's'))
          goto LAB_00784f08;
        }
        if ((*(byte *)(param_2[0x24] + 0x182) & 1) != 0) {
          if (uVar49 < local_740) {
            if (*(char *)((long)piStack_748 + uVar49) + 0x40 < 0 !=
                SCARRY4((int)*(char *)((long)piStack_748 + uVar49),0x40)) {
LAB_0078531c:
                    /* try { // try from 0078531c to 0078532b has its CatchHandler @ 00785604 */
              uStack_1ce = uVar40;
              uStack_1cf = uVar39;
              uStack_1d0 = uVar38;
              uStack_1d6 = uVar37;
              local_1d8 = uVar36;
              uStack_1de = uVar35;
              uStack_1e0 = uVar34;
              uStack_1e6 = uVar33;
              uStack_1e8 = uVar32;
              uStack_1ee = uVar31;
              uStack_1f0 = uVar30;
              uStack_1fc = uVar29;
              uStack_1fe = uVar28;
              uStack_1ff = uVar5;
              local_200 = cVar27;
              uStack_204 = uVar1;
              uStack_206 = uVar26;
              uStack_208 = uVar25;
              uStack_20e = uVar24;
              local_210 = uVar23;
              uStack_216 = uVar22;
              uStack_217 = uVar2;
              uStack_218 = uVar3;
                    /* WARNING: Subroutine does not return */
              core::str::slice_error_fail
                        (piVar48,uVar58,0,uVar49,&PTR_s__root__cargo_registry_src_index__00adbf10);
            }
          }
          else if (local_740 != uVar49) goto LAB_0078531c;
          if ((uStack_724 != 5) || (*piStack_748 != 0x70747468 || (char)piStack_748[1] != 's')) {
                    /* try { // try from 00785158 to 007851bb has its CatchHandler @ 00785604 */
            uStack_218 = uVar3;
            uStack_217 = uVar2;
            uStack_216 = uVar22;
            local_210 = uVar23;
            uStack_20e = uVar24;
            uStack_208 = uVar25;
            uStack_206 = uVar26;
            uStack_204 = uVar1;
            local_200 = cVar27;
            uStack_1ff = uVar5;
            uStack_1fe = uVar28;
            uStack_1fc = uVar29;
            uStack_1f0 = uVar30;
            uStack_1ee = uVar31;
            uStack_1e8 = uVar32;
            uStack_1e6 = uVar33;
            uStack_1e0 = uVar34;
            uStack_1de = uVar35;
            local_1d8 = uVar36;
            uStack_1d6 = uVar37;
            uStack_1d0 = uVar38;
            uStack_1cf = uVar39;
            uStack_1ce = uVar40;
            <alloc::string::String_as_core::clone::Clone>::clone(&local_220,&local_750);
            uStack_1d0 = (undefined1)local_700;
            local_1d8 = (undefined2)uStack_708;
            uStack_1d6 = (undefined6)((ulong)uStack_708 >> 0x10);
            uStack_1e0 = (undefined2)local_710;
            uStack_1de = (undefined6)((ulong)local_710 >> 0x10);
            uStack_1f6 = uStack_726;
            uStack_1f8 = uStack_728;
            uStack_1e4 = local_714;
            uStack_208 = (undefined2)uStack_738;
            uStack_206 = (undefined2)((ulong)uStack_738 >> 0x10);
            uStack_1ec = uStack_71c;
            uStack_1e8 = (undefined2)uStack_718;
            uStack_1e6 = (undefined2)((uint)uStack_718 >> 0x10);
            uStack_1f4 = uStack_724;
            uStack_1f0 = (undefined2)uStack_720;
            uStack_1ee = (undefined2)((uint)uStack_720 >> 0x10);
            uStack_204 = uStack_738._4_4_;
            local_200 = (char)local_730;
            uStack_1ff = (undefined1)((ulong)local_730 >> 8);
            uStack_1fe = (undefined2)((ulong)local_730 >> 0x10);
            uStack_1fc = local_730._4_4_;
            uVar47 = FUN_00772be0(&local_220);
            local_1d8 = (undefined2)uStack_708;
            uStack_1d6 = (undefined6)((ulong)uStack_708 >> 0x10);
            uStack_1e0 = (undefined2)local_710;
            uStack_1de = (undefined6)((ulong)local_710 >> 0x10);
            uStack_1f8 = uStack_728;
            uStack_1f6 = uStack_726;
            uStack_1f4 = uStack_724;
            local_200 = (char)local_730;
            uStack_1ff = (undefined1)((ulong)local_730 >> 8);
            uStack_1fe = (undefined2)((ulong)local_730 >> 0x10);
            uStack_1fc = (undefined4)((ulong)local_730 >> 0x20);
            uStack_1e8 = (undefined2)uStack_718;
            uStack_1e6 = (undefined2)((uint)uStack_718 >> 0x10);
            uStack_1e4 = local_714;
            uStack_1f0 = (undefined2)uStack_720;
            uStack_1ee = (undefined2)((uint)uStack_720 >> 0x10);
            uStack_1ec = uStack_71c;
            uStack_1d0 = (undefined1)local_700;
            uStack_1cf = (undefined1)((ulong)local_700 >> 8);
            uStack_1ce = (undefined6)((ulong)local_700 >> 0x10);
            uStack_218 = SUB81(piStack_748,0);
            uStack_217 = (undefined1)((ulong)piStack_748 >> 8);
            uStack_216 = (undefined6)((ulong)piStack_748 >> 0x10);
            local_220 = local_750;
            uStack_208 = (undefined2)uStack_738;
            uStack_206 = (undefined2)((ulong)uStack_738 >> 0x10);
            uStack_204 = (undefined4)((ulong)uStack_738 >> 0x20);
            local_210 = (undefined2)local_740;
            uStack_20e = (undefined6)(local_740 >> 0x10);
                    /* try { // try from 007851e4 to 0078520b has its CatchHandler @ 007853f8 */
            uVar47 = FUN_0076fbd0(uVar47,&local_220);
            goto LAB_007851ec;
          }
        }
        uStack_1f8 = uStack_728;
        uStack_1f6 = uStack_726;
        uStack_1f4 = uStack_724;
        uStack_1e4 = local_714;
        uStack_1ec = uStack_71c;
        local_220 = local_750;
        if (*ppppppplVar44 != (long ******)0x0) {
          free((void *)param_2[0x12]);
        }
        param_2[0x16] = CONCAT44(uStack_1f4,CONCAT22(uStack_1f6,uStack_1f8));
        param_2[0x15] = CONCAT44(uStack_1fc,CONCAT22(uStack_1fe,CONCAT11(uStack_1ff,local_200)));
        param_2[0x18] = CONCAT44(uStack_1e4,CONCAT22(uStack_1e6,uStack_1e8));
        param_2[0x17] = CONCAT44(uStack_1ec,CONCAT22(uStack_1ee,uStack_1f0));
        param_2[0x1a] = CONCAT62(uStack_1d6,local_1d8);
        param_2[0x19] = CONCAT62(uStack_1de,uStack_1e0);
        param_2[0x1b] = CONCAT62(uStack_1ce,CONCAT11(uStack_1cf,uStack_1d0));
        param_2[0x12] = CONCAT62(uStack_216,CONCAT11(uStack_217,uStack_218));
        *ppppppplVar44 = (long ******)local_220;
        param_2[0x14] = CONCAT44(uStack_204,CONCAT22(uStack_206,uStack_208));
        param_2[0x13] = CONCAT62(uStack_20e,local_210);
                    /* try { // try from 007843cc to 007843d3 has its CatchHandler @ 00785598 */
        <http::header::map::http::header::map::HeaderMap>::new(&local_220);
        lStack_678 = param_2[10];
        local_680 = param_2[9];
        lStack_668 = param_2[0xc];
        lStack_670 = param_2[0xb];
        pvStack_658 = (void *)param_2[0xe];
        local_660 = param_2[0xd];
        local_648 = param_2[0x10];
        local_650 = param_2[0xf];
        lStack_698 = param_2[6];
        local_6a0 = (long *******)param_2[5];
        lStack_688 = param_2[8];
        local_690 = param_2[7];
        param_2[10] = CONCAT44(uStack_1f4,CONCAT22(uStack_1f6,uStack_1f8));
        param_2[9] = CONCAT44(uStack_1fc,CONCAT22(uStack_1fe,CONCAT11(uStack_1ff,local_200)));
        param_2[0xc] = CONCAT44(uStack_1e4,CONCAT22(uStack_1e6,uStack_1e8));
        param_2[0xb] = CONCAT44(uStack_1ec,CONCAT22(uStack_1ee,uStack_1f0));
        param_2[0xe] = CONCAT62(uStack_1d6,local_1d8);
        param_2[0xd] = CONCAT62(uStack_1de,uStack_1e0);
        param_2[0x10] = CONCAT62(uStack_1c6,local_1c8);
        param_2[0xf] = CONCAT62(uStack_1ce,CONCAT11(uStack_1cf,uStack_1d0));
        param_2[6] = CONCAT62(uStack_216,CONCAT11(uStack_217,uStack_218));
        param_2[5] = (long)local_220;
        param_2[8] = CONCAT44(uStack_204,CONCAT22(uStack_206,uStack_208));
        param_2[7] = CONCAT62(uStack_20e,local_210);
                    /* try { // try from 0078442c to 00784443 has its CatchHandler @ 007855d0 */
        FUN_0079e36c(&local_6a0,param_2 + 0x11,param_2[0x1d],param_2[0x1e]);
        FUN_00779858(&local_220,param_2 + 0x11);
        if ((char)local_220 == -1) {
          *param_1 = 0xffffffffffffffff;
          param_1[1] = CONCAT62(uStack_216,CONCAT11(uStack_217,uStack_218));
          FUN_0077df7c(&local_6a0);
          goto LAB_007852a8;
        }
        uStack_610 = CONCAT44(uStack_1f4,CONCAT22(uStack_1f6,uStack_1f8));
        local_618 = CONCAT44(uStack_1fc,CONCAT22(uStack_1fe,CONCAT11(uStack_1ff,local_200)));
        local_600 = CONCAT44(uStack_1e4,CONCAT22(uStack_1e6,uStack_1e8));
        local_608 = (undefined8 *)CONCAT44(uStack_1ec,CONCAT22(uStack_1ee,uStack_1f0));
        uVar1 = *(undefined4 *)((ulong)&local_220 | 1);
        uStack_620 = CONCAT44(uStack_204,CONCAT22(uStack_206,uStack_208));
        local_628 = (undefined8 *)CONCAT62(uStack_20e,local_210);
        local_638 = (char)local_220;
        uVar6 = CONCAT14(local_5c0._7_1_,*(undefined4 *)((long)((ulong)&local_220 | 1) + 3));
        local_5e8 = CONCAT62(uStack_1ce,CONCAT11(uStack_1cf,uStack_1d0));
        local_5c0 = (long *******)CONCAT44((int)((uint5)uVar6 >> 8),uVar1);
        *(undefined4 *)((ulong)&local_638 | 1) = uVar1;
        lVar51 = *param_2;
        local_630 = (undefined8 *)CONCAT62(uStack_216,CONCAT11(uStack_217,uStack_218));
        uStack_5f0 = CONCAT62(uStack_1d6,local_1d8);
        local_5f8 = CONCAT62(uStack_1de,uStack_1e0);
        *(undefined4 *)((long)((ulong)&local_638 | 1) + 3) = local_5c0._3_4_;
        if ((lVar51 == 1) && ((undefined8 *)param_2[1] != (undefined8 *)0x0)) {
                    /* try { // try from 007844c0 to 007844cb has its CatchHandler @ 0078544c */
          (**(code **)param_2[1])(&local_220,param_2 + 4,param_2[2],param_2[3]);
          uStack_5d8 = CONCAT62(uStack_216,CONCAT11(uStack_217,uStack_218));
          uStack_5c8 = CONCAT44(uStack_204,CONCAT22(uStack_206,uStack_208));
          local_5d0 = CONCAT62(uStack_20e,local_210);
          local_5e0 = local_220;
        }
        else {
          local_5e0 = (long *******)&PTR_FUN_00ad8cf8;
          uStack_5d8 = 1;
          local_5d0 = 0;
          uStack_5c8 = 0;
        }
                    /* try { // try from 007844f8 to 007844ff has its CatchHandler @ 00785584 */
        <http::request::[2]::http::request::Parts>::new(&local_220);
        uStack_258 = CONCAT62(uStack_176,uStack_178);
        local_260 = CONCAT62(uStack_17e,local_180);
        uStack_248 = CONCAT62(uStack_166,uStack_168);
        local_250 = CONCAT62(uStack_16e,local_170);
        uStack_228 = CONCAT62(uStack_146,uStack_148);
        bVar4 = *(byte *)(param_2 + 0x21);
        local_240 = (undefined8 *)CONCAT62(uStack_15e,local_160);
        uStack_298 = CONCAT62(uStack_1b6,uStack_1b8);
        local_2a0 = CONCAT62(uStack_1be,CONCAT11(uStack_1bf,cStack_1c0));
        uStack_238 = (undefined6)CONCAT62(uStack_156,uStack_158);
        uStack_232 = (undefined2)((uint6)uStack_156 >> 0x20);
        uStack_288 = CONCAT62(uStack_1a6,uStack_1a8);
        local_290 = CONCAT62(uStack_1ae,uStack_1b0);
        uStack_230 = (undefined6)CONCAT62(uStack_14e,local_150);
        uStack_22a = (undefined2)((uint6)uStack_14e >> 0x20);
        uStack_278 = CONCAT62(uStack_196,uStack_198);
        local_280 = CONCAT62(uStack_19e,local_1a0);
        uStack_268 = CONCAT62(uStack_186,uStack_188);
        local_270 = CONCAT62(uStack_18e,local_190);
        uStack_2d8 = CONCAT44(uStack_1f4,CONCAT22(uStack_1f6,uStack_1f8));
        local_2e0 = CONCAT44(uStack_1fc,CONCAT22(uStack_1fe,CONCAT11(uStack_1ff,local_200)));
        uStack_2c8 = CONCAT44(uStack_1e4,CONCAT22(uStack_1e6,uStack_1e8));
        local_2d0 = CONCAT44(uStack_1ec,CONCAT22(uStack_1ee,uStack_1f0));
        uStack_2b8 = CONCAT62(uStack_1d6,local_1d8);
        local_2c0 = CONCAT62(uStack_1de,uStack_1e0);
        uStack_2a8 = CONCAT62(uStack_1c6,local_1c8);
        local_2b0 = CONCAT62(uStack_1ce,CONCAT11(uStack_1cf,uStack_1d0));
        ppppppplStack_2f8 = (long *******)CONCAT62(uStack_216,CONCAT11(uStack_217,uStack_218));
        uStack_2e8 = CONCAT44(uStack_204,CONCAT22(uStack_206,uStack_208));
        local_2f0 = CONCAT62(uStack_20e,local_210);
        local_300 = local_220;
        if (8 < bVar4) {
          if (bVar4 == 10) {
            local_8a0 = param_2[0x23];
            if ((long)local_8a0 < 0) {
              local_898 = 0;
LAB_00784f74:
                    /* try { // try from 00784f74 to 00784f7f has its CatchHandler @ 00785668 */
                    /* WARNING: Subroutine does not return */
              alloc::raw_vec::handle_error(local_898,local_8a0);
            }
            if (local_8a0 == 0) {
              local_8a8 = (undefined8 *)&DAT_00000001;
              local_8a0 = 0;
            }
            else {
              pvVar57 = (void *)param_2[0x22];
              __rustc::__rust_no_alloc_shim_is_unstable_v2();
              local_8a8 = (undefined8 *)FUN_004b25a4(local_8a0,1);
              if (local_8a8 == (undefined8 *)0x0) goto LAB_00784f74;
              memcpy(local_8a8,pvVar57,local_8a0);
            }
          }
          else {
            local_8a8 = (undefined8 *)param_2[0x22];
            local_220 = (long *******)
                        (ulong)CONCAT43(*(undefined4 *)((long)param_2 + 0x10c),
                                        (int3)*(undefined4 *)((long)param_2 + 0x109));
            local_8a0 = local_8a0 & 0xffffffffffffff00 | (ulong)*(byte *)(param_2 + 0x23);
          }
        }
        puVar52 = local_240;
        ppppppplVar44 = local_300;
        uStack_198 = (undefined2)local_270;
        uStack_196 = (undefined6)((ulong)local_270 >> 0x10);
        local_1a0 = (undefined2)uStack_278;
        uStack_19e = (undefined6)((ulong)uStack_278 >> 0x10);
        bVar55 = (byte)uStack_248;
        uStack_188 = (undefined2)local_260;
        uStack_186 = (undefined6)((ulong)local_260 >> 0x10);
        local_190 = (undefined2)uStack_268;
        uStack_18e = (undefined6)((ulong)uStack_268 >> 0x10);
        local_1d8 = (undefined2)local_2b0;
        uStack_1d6 = (undefined6)((ulong)local_2b0 >> 0x10);
        uStack_1e0 = (undefined2)uStack_2b8;
        uStack_1de = (undefined6)((ulong)uStack_2b8 >> 0x10);
        uStack_178 = (undefined2)local_250;
        uStack_176 = (undefined6)((ulong)local_250 >> 0x10);
        local_180 = (undefined2)uStack_258;
        uStack_17e = (undefined6)((ulong)uStack_258 >> 0x10);
        sVar59 = CONCAT26(uStack_232,uStack_238);
        uStack_1b8 = (undefined2)local_290;
        uStack_1b6 = (undefined6)((ulong)local_290 >> 0x10);
        cStack_1c0 = (char)uStack_298;
        uStack_1bf = (undefined1)((ulong)uStack_298 >> 8);
        uStack_1be = (undefined6)((ulong)uStack_298 >> 0x10);
        local_120._0_7_ = SUB87(local_220,0);
        uStack_208 = (undefined2)local_2e0;
        uStack_206 = (undefined2)((ulong)local_2e0 >> 0x10);
        uStack_204 = (undefined4)((ulong)local_2e0 >> 0x20);
        local_210 = (undefined2)uStack_2e8;
        uStack_20e = (undefined6)((ulong)uStack_2e8 >> 0x10);
        local_1c8 = (undefined2)local_2a0;
        uStack_1c6 = (undefined6)((ulong)local_2a0 >> 0x10);
        uStack_1d0 = (undefined1)uStack_2a8;
        uStack_1cf = (undefined1)((ulong)uStack_2a8 >> 8);
        uStack_1ce = (undefined6)((ulong)uStack_2a8 >> 0x10);
        uStack_1a8 = (undefined2)local_280;
        uStack_1a6 = (undefined6)((ulong)local_280 >> 0x10);
        uStack_1b0 = (undefined2)uStack_288;
        uStack_1ae = (undefined6)((ulong)uStack_288 >> 0x10);
        uStack_1f8 = (undefined2)local_2d0;
        uStack_1f6 = (undefined2)((ulong)local_2d0 >> 0x10);
        uStack_1f4 = (uint)((ulong)local_2d0 >> 0x20);
        local_200 = (char)uStack_2d8;
        uStack_1ff = (undefined1)((ulong)uStack_2d8 >> 8);
        uStack_1fe = (undefined2)((ulong)uStack_2d8 >> 0x10);
        uStack_1fc = (undefined4)((ulong)uStack_2d8 >> 0x20);
        local_e0 = CONCAT26(uStack_22a,uStack_230);
        uStack_218 = (undefined1)local_2f0;
        uStack_217 = (undefined1)((ulong)local_2f0 >> 8);
        uStack_216 = (undefined6)((ulong)local_2f0 >> 0x10);
        local_220 = ppppppplStack_2f8;
        uStack_1e8 = (undefined2)local_2c0;
        uStack_1e6 = (undefined2)((ulong)local_2c0 >> 0x10);
        uStack_1e4 = (undefined4)((ulong)local_2c0 >> 0x20);
        uStack_1f0 = (undefined2)uStack_2c8;
        uStack_1ee = (undefined2)((ulong)uStack_2c8 >> 0x10);
        uStack_1ec = (undefined4)((ulong)uStack_2c8 >> 0x20);
        local_100._0_7_ = (undefined7)((ulong)uStack_248 >> 8);
        puStack_d8 = (undefined8 *)uStack_228;
        if (local_300 == (long *******)0xffffffffffffffff) {
          if ((9 < bVar4) && (local_8a0 != 0)) {
            free(local_8a8);
          }
        }
        else {
          if ((9 < (byte)uStack_248) && (sVar59 != 0)) {
            free(local_240);
          }
          uStack_198 = (undefined2)local_270;
          uStack_196 = (undefined6)((ulong)local_270 >> 0x10);
          local_1a0 = (undefined2)uStack_278;
          uStack_19e = (undefined6)((ulong)uStack_278 >> 0x10);
          uStack_188 = (undefined2)local_260;
          uStack_186 = (undefined6)((ulong)local_260 >> 0x10);
          local_190 = (undefined2)uStack_268;
          uStack_18e = (undefined6)((ulong)uStack_268 >> 0x10);
          local_1d8 = (undefined2)local_2b0;
          uStack_1d6 = (undefined6)((ulong)local_2b0 >> 0x10);
          uStack_1e0 = (undefined2)uStack_2b8;
          uStack_1de = (undefined6)((ulong)uStack_2b8 >> 0x10);
          uStack_178 = (undefined2)local_250;
          uStack_176 = (undefined6)((ulong)local_250 >> 0x10);
          local_180 = (undefined2)uStack_258;
          uStack_17e = (undefined6)((ulong)uStack_258 >> 0x10);
          uStack_1b8 = (undefined2)local_290;
          uStack_1b6 = (undefined6)((ulong)local_290 >> 0x10);
          cStack_1c0 = (char)uStack_298;
          uStack_1bf = (undefined1)((ulong)uStack_298 >> 8);
          uStack_1be = (undefined6)((ulong)uStack_298 >> 0x10);
          local_1c8 = (undefined2)local_2a0;
          uStack_1c6 = (undefined6)((ulong)local_2a0 >> 0x10);
          uStack_1d0 = (undefined1)uStack_2a8;
          uStack_1cf = (undefined1)((ulong)uStack_2a8 >> 8);
          uStack_1ce = (undefined6)((ulong)uStack_2a8 >> 0x10);
          uStack_208 = (undefined2)local_2e0;
          uStack_206 = (undefined2)((ulong)local_2e0 >> 0x10);
          uStack_204 = (undefined4)((ulong)local_2e0 >> 0x20);
          local_210 = (undefined2)uStack_2e8;
          uStack_20e = (undefined6)((ulong)uStack_2e8 >> 0x10);
          uStack_1a8 = (undefined2)local_280;
          uStack_1a6 = (undefined6)((ulong)local_280 >> 0x10);
          uStack_1b0 = (undefined2)uStack_288;
          uStack_1ae = (undefined6)((ulong)uStack_288 >> 0x10);
          uStack_1f8 = (undefined2)local_2d0;
          uStack_1f6 = (undefined2)((ulong)local_2d0 >> 0x10);
          uStack_1f4 = (uint)((ulong)local_2d0 >> 0x20);
          local_200 = (char)uStack_2d8;
          uStack_1ff = (undefined1)((ulong)uStack_2d8 >> 8);
          uStack_1fe = (undefined2)((ulong)uStack_2d8 >> 0x10);
          uStack_1fc = (undefined4)((ulong)uStack_2d8 >> 0x20);
          local_e0 = CONCAT26(uStack_22a,uStack_230);
          uStack_218 = (undefined1)local_2f0;
          uStack_217 = (undefined1)((ulong)local_2f0 >> 8);
          uStack_216 = (undefined6)((ulong)local_2f0 >> 0x10);
          local_220 = ppppppplStack_2f8;
          uStack_1e8 = (undefined2)local_2c0;
          uStack_1e6 = (undefined2)((ulong)local_2c0 >> 0x10);
          uStack_1e4 = (undefined4)((ulong)local_2c0 >> 0x20);
          uStack_1f0 = (undefined2)uStack_2c8;
          uStack_1ee = (undefined2)((ulong)uStack_2c8 >> 0x10);
          uStack_1ec = (undefined4)((ulong)uStack_2c8 >> 0x20);
          local_100._0_7_ = SUB87(local_120,0);
          puStack_d8 = (undefined8 *)uStack_228;
          puVar52 = local_8a8;
          sVar59 = local_8a0;
          bVar55 = bVar4;
        }
        puVar10 = local_630;
        cVar27 = local_638;
        uStack_360 = CONCAT62(uStack_1a6,uStack_1a8);
        local_368 = CONCAT62(uStack_1ae,uStack_1b0);
        uStack_350 = CONCAT62(uStack_196,uStack_198);
        local_358 = CONCAT62(uStack_19e,local_1a0);
        uStack_340 = CONCAT62(uStack_186,uStack_188);
        local_348 = CONCAT62(uStack_18e,local_190);
        uStack_370 = CONCAT62(uStack_1b6,uStack_1b8);
        local_378 = CONCAT62(uStack_1be,CONCAT11(uStack_1bf,cStack_1c0));
        uStack_330 = CONCAT62(uStack_176,uStack_178);
        local_338 = CONCAT62(uStack_17e,local_180);
        uStack_3a0 = CONCAT44(uStack_1e4,CONCAT22(uStack_1e6,uStack_1e8));
        local_3a8 = CONCAT44(uStack_1ec,CONCAT22(uStack_1ee,uStack_1f0));
        uStack_390 = CONCAT62(uStack_1d6,local_1d8);
        local_398 = CONCAT62(uStack_1de,uStack_1e0);
        uStack_380 = CONCAT62(uStack_1c6,local_1c8);
        local_388 = CONCAT62(uStack_1ce,CONCAT11(uStack_1cf,uStack_1d0));
        uStack_3d0 = CONCAT62(uStack_216,CONCAT11(uStack_217,uStack_218));
        uStack_3b0 = CONCAT44(uStack_1f4,CONCAT22(uStack_1f6,uStack_1f8));
        local_3b8 = CONCAT44(uStack_1fc,CONCAT22(uStack_1fe,CONCAT11(uStack_1ff,local_200)));
        uStack_3c0 = CONCAT44(uStack_204,CONCAT22(uStack_206,uStack_208));
        uStack_3c8 = CONCAT62(uStack_20e,local_210);
        uStack_3d8 = local_220;
        local_328 = CONCAT31((int3)local_100,bVar55);
        local_3e0 = ppppppplVar44;
        uStack_324 = local_100._3_4_;
        uStack_308 = puStack_d8;
        uStack_310 = local_e0;
        puStack_320 = puVar52;
        local_318 = sVar59;
        if (local_638 != '\0') {
          if (local_638 == '\x02') {
            __rustc::__rust_no_alloc_shim_is_unstable_v2();
            puVar52 = (undefined8 *)FUN_004b25a4(0x20,8);
            if (puVar52 == (undefined8 *)0x0) {
                    /* try { // try from 0078530c to 00785317 has its CatchHandler @ 007855ec */
                    /* WARNING: Subroutine does not return */
              alloc::alloc::handle_alloc_error(8,0x20);
            }
                    /* try { // try from 00784798 to 007847a3 has its CatchHandler @ 00785450 */
            (**(code **)*puVar10)(&local_220,puVar10 + 3,puVar10[1],puVar10[2]);
            puVar52[1] = CONCAT62(uStack_216,CONCAT11(uStack_217,uStack_218));
            *puVar52 = local_220;
            puVar52[3] = CONCAT44(uStack_204,CONCAT22(uStack_206,uStack_208));
            puVar52[2] = CONCAT62(uStack_20e,local_210);
          }
          else {
            sVar59 = (size_t)local_637;
          }
        }
                    /* try { // try from 007847c8 to 007847d3 has its CatchHandler @ 00785570 */
        (*(code *)*local_628)(&local_220,&uStack_610,uStack_620,local_618);
        ppppppplStack_2f8 = (long *******)CONCAT62(uStack_216,CONCAT11(uStack_217,uStack_218));
        uStack_2e8 = CONCAT44(uStack_204,CONCAT22(uStack_206,uStack_208));
        local_2f0 = CONCAT62(uStack_20e,local_210);
        local_300 = local_220;
                    /* try { // try from 007847f4 to 007847ff has its CatchHandler @ 0078554c */
        (*(code *)*local_608)(&local_220,&uStack_5f0,local_600,local_5f8);
        uStack_108 = CONCAT44(uStack_204,CONCAT22(uStack_206,uStack_208));
        uStack_110 = CONCAT62(uStack_20e,local_210);
        uVar23 = (undefined2)local_5e8;
        uStack_f8 = ppppppplStack_2f8;
        local_100 = local_300;
        uStack_e8 = uStack_2e8;
        uStack_f0 = local_2f0;
        uStack_118 = CONCAT62(uStack_216,CONCAT11(uStack_217,uStack_218));
        uVar2 = (undefined1)uStack_3d8;
        uVar3 = uStack_3d8._1_1_;
        local_120 = local_220;
        uVar5 = (undefined1)sVar59;
        local_e0._0_2_ = CONCAT11(uVar5,cVar27);
        uStack_c8 = ppppppplStack_2f8;
        local_d0 = local_300;
        uStack_b8 = uStack_2e8;
        uStack_c0 = local_2f0;
        local_90 = (undefined2)local_5e8;
        local_b0 = local_220;
        puStack_d8 = puVar52;
        uStack_a8 = uStack_118;
        uStack_a0 = uStack_110;
        uStack_98 = uStack_108;
        if (ppppppplVar44 == (long *******)0xffffffffffffffff) {
                    /* try { // try from 00785330 to 00785337 has its CatchHandler @ 007854ec */
          FUN_0079b764(&local_e0);
          uStack_218 = (undefined1)uStack_5d8;
          uStack_217 = (undefined1)((ulong)uStack_5d8 >> 8);
          uStack_216 = (undefined6)((ulong)uStack_5d8 >> 0x10);
          uStack_208 = (undefined2)uStack_5c8;
          uStack_206 = (undefined2)((ulong)uStack_5c8 >> 0x10);
          uStack_204 = (undefined4)((ulong)uStack_5c8 >> 0x20);
          local_210 = (undefined2)local_5d0;
          uStack_20e = (undefined6)((ulong)local_5d0 >> 0x10);
LAB_00785344:
          local_220 = local_5e0;
          if (local_5e0 == (long *******)0x0) {
            puVar52 = (undefined8 *)CONCAT62(uStack_20e,local_210);
            pvVar57 = (void *)CONCAT62(uStack_216,CONCAT11(uStack_217,uStack_218));
            pcVar53 = (code *)*puVar52;
            if (pcVar53 != (code *)0x0) {
                    /* try { // try from 0078535c to 00785363 has its CatchHandler @ 00785400 */
              (*pcVar53)(pvVar57);
            }
            if (puVar52[1] != 0) {
              free(pvVar57);
            }
          }
          else {
                    /* try { // try from 0078538c to 007853bf has its CatchHandler @ 00785590 */
            (*(code *)local_5e0[4])
                      (&uStack_208,CONCAT62(uStack_216,CONCAT11(uStack_217,uStack_218)),
                       CONCAT62(uStack_20e,local_210));
          }
          local_220._0_2_ = CONCAT11(uVar3,uVar2);
                    /* WARNING: Subroutine does not return */
          core::result::unwrap_failed
                    (&DAT_002e25ca,0x13,&local_220,&DAT_00ad8cb8,
                     &PTR_s__root__cargo_registry_src_index__00adbee0);
        }
        local_220 = ppppppplVar44;
        local_170 = (undefined2)uStack_330;
        uStack_16e = (undefined6)((ulong)uStack_330 >> 0x10);
        uStack_178 = (undefined2)local_338;
        uStack_176 = (undefined6)((ulong)local_338 >> 0x10);
        local_160 = SUB82(puStack_320,0);
        uStack_15e = (undefined6)((ulong)puStack_320 >> 0x10);
        uStack_168 = (undefined2)local_328;
        uStack_166 = (undefined6)(CONCAT44(uStack_324,local_328) >> 0x10);
        local_150 = (undefined2)uStack_310;
        uStack_14e = (undefined6)((ulong)uStack_310 >> 0x10);
        uStack_158 = (undefined2)local_318;
        uStack_156 = (undefined6)(local_318 >> 0x10);
        uStack_1b0 = (undefined2)uStack_370;
        uStack_1ae = (undefined6)((ulong)uStack_370 >> 0x10);
        uStack_1b8 = (undefined2)local_378;
        uStack_1b6 = (undefined6)((ulong)local_378 >> 0x10);
        local_1a0 = (undefined2)uStack_360;
        uStack_19e = (undefined6)((ulong)uStack_360 >> 0x10);
        uStack_1a8 = (undefined2)local_368;
        uStack_1a6 = (undefined6)((ulong)local_368 >> 0x10);
        local_190 = (undefined2)uStack_350;
        uStack_18e = (undefined6)((ulong)uStack_350 >> 0x10);
        uStack_198 = (undefined2)local_358;
        uStack_196 = (undefined6)((ulong)local_358 >> 0x10);
        local_180 = (undefined2)uStack_340;
        uStack_17e = (undefined6)((ulong)uStack_340 >> 0x10);
        uStack_188 = (undefined2)local_348;
        uStack_186 = (undefined6)((ulong)local_348 >> 0x10);
        uStack_1f0 = (undefined2)uStack_3b0;
        uStack_1ee = (undefined2)((ulong)uStack_3b0 >> 0x10);
        uStack_1ec = (undefined4)((ulong)uStack_3b0 >> 0x20);
        uStack_1f8 = (undefined2)local_3b8;
        uStack_1f6 = (undefined2)((ulong)local_3b8 >> 0x10);
        uStack_1f4 = (uint)((ulong)local_3b8 >> 0x20);
        uStack_1e0 = (undefined2)uStack_3a0;
        uStack_1de = (undefined6)((ulong)uStack_3a0 >> 0x10);
        uStack_1e8 = (undefined2)local_3a8;
        uStack_1e6 = (undefined2)((ulong)local_3a8 >> 0x10);
        uStack_1e4 = (undefined4)((ulong)local_3a8 >> 0x20);
        uStack_1d0 = (undefined1)uStack_390;
        uStack_1cf = (undefined1)((ulong)uStack_390 >> 8);
        uStack_1ce = (undefined6)((ulong)uStack_390 >> 0x10);
        local_1d8 = (undefined2)local_398;
        uStack_1d6 = (undefined6)((ulong)local_398 >> 0x10);
        cStack_1c0 = (char)uStack_380;
        uStack_1bf = (undefined1)((ulong)uStack_380 >> 8);
        uStack_1be = (undefined6)((ulong)uStack_380 >> 0x10);
        local_1c8 = (undefined2)local_388;
        uStack_1c6 = (undefined6)((ulong)local_388 >> 0x10);
        local_210 = (undefined2)uStack_3d0;
        uStack_20e = (undefined6)((ulong)uStack_3d0 >> 0x10);
        uStack_216 = (undefined6)((ulong)uStack_3d8 >> 0x10);
        uStack_148 = (undefined2)uStack_308;
        uStack_146 = (undefined6)((ulong)uStack_308 >> 0x10);
        local_200 = (char)uStack_3c0;
        uStack_1ff = (undefined1)((ulong)uStack_3c0 >> 8);
        uStack_1fe = (undefined2)((ulong)uStack_3c0 >> 0x10);
        uStack_1fc = (undefined4)((ulong)uStack_3c0 >> 0x20);
        uStack_208 = (undefined2)uStack_3c8;
        uStack_206 = (undefined2)((ulong)uStack_3c8 >> 0x10);
        uStack_204 = (undefined4)((ulong)uStack_3c8 >> 0x20);
                    /* try { // try from 007848c8 to 007848cf has its CatchHandler @ 00785518 */
        uStack_218 = (undefined1)uStack_3d8;
        uStack_217 = uStack_3d8._1_1_;
        FUN_0079b764(&cStack_1c0);
        uVar1 = uStack_204;
        uVar13 = uStack_206;
        uVar25 = uStack_208;
        uVar12 = uStack_20e;
        uVar11 = local_210;
        uVar22 = uStack_216;
        uVar3 = uStack_217;
        uVar2 = uStack_218;
        ppppppplVar44 = local_220;
        uVar49 = local_650;
        pvVar57 = pvStack_658;
        cStack_1c0 = cVar27;
        uStack_1a8 = (undefined2)uStack_f8;
        uStack_1a6 = (undefined6)((ulong)uStack_f8 >> 0x10);
        uStack_1b0 = SUB82(local_100,0);
        uStack_1ae = (undefined6)((ulong)local_100 >> 0x10);
        uStack_198 = (undefined2)uStack_e8;
        uStack_196 = (undefined6)((ulong)uStack_e8 >> 0x10);
        local_1a0 = (undefined2)uStack_f0;
        uStack_19e = (undefined6)((ulong)uStack_f0 >> 0x10);
        uStack_1b8 = SUB82(puVar52,0);
        uStack_1b6 = (undefined6)((ulong)puVar52 >> 0x10);
        uStack_4b8 = CONCAT26(uStack_208,uStack_20e);
        local_4c0 = (long *******)CONCAT26(local_210,uStack_216);
        local_170 = uVar23;
        uStack_188 = (undefined2)uStack_118;
        uStack_186 = (undefined6)((ulong)uStack_118 >> 0x10);
        local_190 = SUB82(local_120,0);
        uStack_18e = (undefined6)((ulong)local_120 >> 0x10);
        uStack_178 = (undefined2)uStack_108;
        uStack_176 = (undefined6)((ulong)uStack_108 >> 0x10);
        local_180 = (undefined2)uStack_110;
        uStack_17e = (undefined6)((ulong)uStack_110 >> 0x10);
        uStack_4a8 = CONCAT26(uStack_1f8,CONCAT42(uStack_1fc,uStack_1fe));
        uStack_4b0 = CONCAT17(uStack_1ff,CONCAT16(local_200,CONCAT42(uStack_204,uStack_206)));
        uStack_468 = CONCAT26(uStack_1b8,uStack_1be);
        local_470 = CONCAT17(uVar5,CONCAT16(cVar27,uStack_1c6));
        uStack_488 = CONCAT26(local_1d8,uStack_1de);
        local_490 = CONCAT26(uStack_1e0,CONCAT42(uStack_1e4,uStack_1e6));
        uStack_478 = CONCAT26(local_1c8,uStack_1ce);
        local_480 = CONCAT17(uStack_1cf,CONCAT16(uStack_1d0,uStack_1d6));
        uStack_498 = CONCAT26(uStack_1e8,CONCAT42(uStack_1ec,uStack_1ee));
        local_4a0 = CONCAT26(uStack_1f0,CONCAT42(uStack_1f4,uStack_1f6));
        uStack_428 = CONCAT26(uStack_178,uStack_17e);
        local_430 = CONCAT26(local_180,uStack_186);
        uStack_448 = CONCAT26(uStack_198,uStack_19e);
        local_450 = CONCAT26(local_1a0,uStack_1a6);
        uStack_458 = CONCAT26(uStack_1a8,uStack_1ae);
        local_460 = CONCAT26(uStack_1b0,uStack_1b6);
        uStack_230 = uStack_146;
        local_400 = (undefined8 *)CONCAT26(local_150,uStack_156);
        uStack_438 = CONCAT26(uStack_188,uStack_18e);
        local_440 = CONCAT26(local_190,uStack_196);
        uStack_238 = uStack_14e;
        uStack_232 = uStack_148;
        uStack_418 = CONCAT26(uStack_168,uStack_16e);
        local_420 = CONCAT26(uVar23,uStack_176);
        uStack_408 = CONCAT26(uStack_158,uStack_15e);
        local_410 = CONCAT26(local_160,uStack_166);
        uStack_3f8 = uStack_14e;
        uStack_3f2 = uStack_148;
        uStack_3f0 = uStack_146;
        bVar41 = local_220 == (long *******)0xffffffffffffffff;
        uStack_218 = (undefined1)uStack_5d8;
        uStack_217 = (undefined1)((ulong)uStack_5d8 >> 8);
        uStack_216 = (undefined6)((ulong)uStack_5d8 >> 0x10);
        local_220 = local_5e0;
        uStack_208 = (undefined2)uStack_5c8;
        uStack_206 = (undefined2)((ulong)uStack_5c8 >> 0x10);
        uStack_204 = (undefined4)((ulong)uStack_5c8 >> 0x20);
        local_210 = (undefined2)local_5d0;
        uStack_20e = (undefined6)((ulong)local_5d0 >> 0x10);
        local_300 = local_4c0;
        ppppppplStack_2f8 = (long *******)uStack_4b8;
        local_2f0 = uStack_4b0;
        uStack_2e8 = uStack_4a8;
        local_2e0 = local_4a0;
        uStack_2d8 = uStack_498;
        local_2d0 = local_490;
        uStack_2c8 = uStack_488;
        local_2c0 = local_480;
        uStack_2b8 = uStack_478;
        local_2b0 = local_470;
        uStack_2a8 = uStack_468;
        local_2a0 = local_460;
        uStack_298 = uStack_458;
        local_290 = local_450;
        uStack_288 = uStack_448;
        local_280 = local_440;
        uStack_278 = uStack_438;
        local_270 = local_430;
        uStack_268 = uStack_428;
        local_260 = local_420;
        uStack_258 = uStack_418;
        local_250 = local_410;
        uStack_248 = uStack_408;
        local_240 = local_400;
        uStack_1bf = uVar5;
        if (bVar41) goto LAB_00785344;
        uVar45 = 0;
        local_5c0 = ppppppplVar44;
        uStack_4ee = uStack_14e;
        local_4f6 = uStack_156;
        uStack_4f0 = local_150;
        uStack_50e = uStack_16e;
        uStack_508 = uStack_168;
        local_516 = uStack_176;
        uStack_510 = uVar23;
        uVar58 = local_650 * 4;
        uStack_4fe = uStack_15e;
        uStack_4f8 = uStack_158;
        local_506 = uStack_166;
        uStack_500 = local_160;
        uStack_4e8 = uStack_148;
        uStack_4e6 = uStack_146;
        uStack_54e = uStack_1ae;
        uStack_548 = uStack_1a8;
        local_556 = uStack_1b6;
        uStack_550 = uStack_1b0;
        uStack_53e = uStack_19e;
        uStack_538 = uStack_198;
        local_546 = uStack_1a6;
        uStack_540 = local_1a0;
        uStack_52e = uStack_18e;
        uStack_528 = uStack_188;
        local_536 = uStack_196;
        uStack_530 = local_190;
        uStack_51e = uStack_17e;
        uStack_518 = uStack_178;
        local_526 = uStack_186;
        uStack_520 = local_180;
        uStack_58e = uStack_1ee;
        uStack_58c = uStack_1ec;
        local_588 = uStack_1e8;
        uStack_596 = uStack_1f6;
        uStack_594 = uStack_1f4;
        uStack_590 = uStack_1f0;
        uStack_57e = uStack_1de;
        local_578 = local_1d8;
        uStack_586 = uStack_1e6;
        uStack_584 = uStack_1e4;
        uStack_580 = uStack_1e0;
        uStack_56e = uStack_1ce;
        local_568 = local_1c8;
        uStack_576 = uStack_1d6;
        uStack_570 = uStack_1d0;
        uStack_56f = uStack_1cf;
        uStack_55e = uStack_1be;
        uStack_558 = uStack_1b8;
        local_566 = uStack_1c6;
        uStack_560 = (undefined2)((ulong)local_470 >> 0x30);
        uStack_5b8 = uVar2;
        uStack_5b7 = uVar3;
        uStack_5ae = uVar12;
        local_5a8 = uVar25;
        uStack_5b6 = uVar22;
        uStack_5b0 = uVar11;
        uStack_59e = uStack_1fe;
        uStack_59c = uStack_1fc;
        local_598 = uStack_1f8;
        uStack_5a6 = uVar13;
        uStack_5a4 = uVar1;
        cStack_5a0 = local_200;
        uStack_59f = uStack_1ff;
        uStack_4d8 = uStack_5d8;
        local_4e0 = local_5e0;
        uStack_4c8 = uStack_5c8;
        uStack_4d0 = local_5d0;
        if ((local_650 >> 0x3e != 0) || (0x7ffffffffffffffe < uVar58)) {
LAB_00784dd0:
                    /* try { // try from 00784dd0 to 00784dd7 has its CatchHandler @ 0078568c */
                    /* WARNING: Subroutine does not return */
          alloc::raw_vec::handle_error(uVar45,uVar58);
        }
        uVar23 = (undefined2)local_648;
        if (uVar58 == 0) {
          __dest = (void *)0x2;
        }
        else {
          __rustc::__rust_no_alloc_shim_is_unstable_v2(0);
          __dest = (void *)FUN_004b25a4(uVar58,2);
          uVar45 = 2;
          if (__dest == (void *)0x0) goto LAB_00784dd0;
          if (uVar49 != 0) {
            memcpy(__dest,pvVar57,uVar58);
          }
        }
                    /* try { // try from 00784b24 to 00784b33 has its CatchHandler @ 007854d0 */
        FUN_00789c40(&local_3e0,&lStack_688);
                    /* try { // try from 00784b34 to 00784b3f has its CatchHandler @ 007854bc */
        FUN_00789b14(&local_300,&lStack_670);
        local_200 = (char)uStack_3d8;
        uStack_1ff = (undefined1)((ulong)uStack_3d8 >> 8);
        uStack_1fe = (undefined2)((ulong)uStack_3d8 >> 0x10);
        uStack_1fc = (undefined4)((ulong)uStack_3d8 >> 0x20);
        uStack_208 = SUB82(local_3e0,0);
        uStack_206 = (undefined2)((ulong)local_3e0 >> 0x10);
        uStack_204 = (undefined4)((ulong)local_3e0 >> 0x20);
        uStack_1f8 = (undefined2)uStack_3d0;
        uStack_1f6 = (undefined2)((ulong)uStack_3d0 >> 0x10);
        uStack_1f4 = (uint)((ulong)uStack_3d0 >> 0x20);
        uStack_1e8 = SUB82(ppppppplStack_2f8,0);
        uStack_1e6 = (undefined2)((ulong)ppppppplStack_2f8 >> 0x10);
        uStack_1e4 = (undefined4)((ulong)ppppppplStack_2f8 >> 0x20);
        uStack_1f0 = SUB82(local_300,0);
        uStack_1ee = (undefined2)((ulong)local_300 >> 0x10);
        uStack_1ec = (undefined4)((ulong)local_300 >> 0x20);
        uStack_1e0 = (undefined2)local_2f0;
        uStack_1de = (undefined6)((ulong)local_2f0 >> 0x10);
        uStack_218 = (undefined1)lStack_698;
        uStack_217 = (undefined1)((ulong)lStack_698 >> 8);
        uStack_216 = (undefined6)((ulong)lStack_698 >> 0x10);
        local_220 = local_6a0;
        local_210 = (undefined2)local_690;
        uStack_20e = (undefined6)((ulong)local_690 >> 0x10);
                    /* try { // try from 00784b70 to 00784b77 has its CatchHandler @ 00785488 */
        FUN_0077df7c(&local_5c0);
        local_578 = SUB82(__dest,0);
        uStack_576 = (undefined6)((ulong)__dest >> 0x10);
        local_598 = uStack_1f8;
        uStack_596 = uStack_1f6;
        uStack_594 = uStack_1f4;
        cStack_5a0 = local_200;
        uStack_59f = uStack_1ff;
        uStack_59e = uStack_1fe;
        uStack_59c = uStack_1fc;
        local_588 = uStack_1e8;
        uStack_586 = uStack_1e6;
        uStack_584 = uStack_1e4;
        uStack_590 = uStack_1f0;
        uStack_58e = uStack_1ee;
        uStack_58c = uStack_1ec;
        uStack_580 = uStack_1e0;
        uStack_57e = uStack_1de;
        uStack_5b8 = uStack_218;
        uStack_5b7 = uStack_217;
        uStack_5b6 = uStack_216;
        local_5c0 = local_220;
        local_5a8 = uStack_208;
        uStack_5a6 = uStack_206;
        uStack_5a4 = uStack_204;
        uStack_5b0 = local_210;
        uStack_5ae = uStack_20e;
        lVar67 = param_2[6];
        ppppppplVar44 = (long *******)param_2[5];
        uStack_570 = (undefined1)uVar49;
        uStack_56f = (undefined1)(uVar49 >> 8);
        uStack_56e = (undefined6)(uVar49 >> 0x10);
        local_568 = uVar23;
        param_2[6] = lStack_698;
        param_2[5] = (long)local_6a0;
        lVar54 = param_2[8];
        lVar51 = param_2[7];
        param_2[8] = lStack_688;
        param_2[7] = local_690;
        lVar68 = param_2[10];
        lVar65 = param_2[9];
        param_2[10] = lStack_678;
        param_2[9] = local_680;
        lVar64 = param_2[0xc];
        lVar63 = param_2[0xb];
        param_2[0xc] = lStack_668;
        param_2[0xb] = lStack_670;
        pvVar57 = (void *)param_2[0xe];
        lVar66 = param_2[0xd];
        param_2[0xe] = (long)pvStack_658;
        param_2[0xd] = local_660;
        lVar61 = param_2[0x10];
        uVar49 = param_2[0xf];
        param_2[0x10] = local_648;
        param_2[0xf] = local_650;
        uStack_148 = uStack_4e8;
        uStack_146 = uStack_4e6;
        local_150 = uStack_4f0;
        uStack_14e = uStack_4ee;
        uStack_158 = uStack_4f8;
        uStack_156 = local_4f6;
        local_160 = uStack_500;
        uStack_15e = uStack_4fe;
        uStack_128 = uStack_4c8;
        local_130 = uStack_4d0;
        uStack_138 = uStack_4d8;
        local_140 = local_4e0;
        uStack_188 = uStack_528;
        uStack_186 = local_526;
        local_190 = uStack_530;
        uStack_18e = uStack_52e;
        uStack_198 = uStack_538;
        uStack_196 = local_536;
        local_1a0 = uStack_540;
        uStack_19e = uStack_53e;
        uStack_168 = uStack_508;
        uStack_166 = local_506;
        local_170 = uStack_510;
        uStack_16e = uStack_50e;
        uStack_178 = uStack_518;
        uStack_176 = local_516;
        local_180 = uStack_520;
        uStack_17e = uStack_51e;
        local_1c8 = uVar23;
        uStack_1c6 = local_566;
        uStack_1a8 = uStack_548;
        uStack_1a6 = local_546;
        uStack_1b0 = uStack_550;
        uStack_1ae = uStack_54e;
        uStack_1b8 = uStack_558;
        uStack_1b6 = local_556;
        cStack_1c0 = (char)uStack_560;
        uStack_1bf = (undefined1)((ushort)uStack_560 >> 8);
        uStack_1be = uStack_55e;
                    /* try { // try from 00784c50 to 00784c5b has its CatchHandler @ 00785484 */
        local_6a0 = ppppppplVar44;
        lStack_698 = lVar67;
        local_690 = lVar51;
        lStack_688 = lVar54;
        local_680 = lVar65;
        lStack_678 = lVar68;
        lStack_670 = lVar63;
        lStack_668 = lVar64;
        local_660 = lVar66;
        pvStack_658 = pvVar57;
        local_650 = uVar49;
        local_648 = lVar61;
        local_1d8 = local_578;
        uStack_1d6 = uStack_576;
        uStack_1d0 = uStack_570;
        uStack_1cf = uStack_56f;
        uStack_1ce = uStack_56e;
        auVar69 = FUN_00791a20(param_2[0x24] + 0x10,&local_220);
        pvVar57 = (void *)param_2[0x25];
        puVar52 = (undefined8 *)param_2[0x26];
        pcVar53 = (code *)*puVar52;
        if (pcVar53 != (code *)0x0) {
                    /* try { // try from 00784c70 to 00784c77 has its CatchHandler @ 0078542c */
          (*pcVar53)(pvVar57);
        }
        if (puVar52[1] != 0) {
          free(pvVar57);
        }
        *(undefined1 (*) [16])(param_2 + 0x25) = auVar69;
                    /* try { // try from 00784c90 to 00784c97 has its CatchHandler @ 007855d0 */
        FUN_0077d138(&local_638);
                    /* try { // try from 00784cb0 to 00784cb7 has its CatchHandler @ 00785598 */
        FUN_0077df7c(&local_6a0);
        FUN_0077b7c0(&local_860);
      }
      plVar46 = (long *)FUN_0076e3cc(1,extraout_x1,&uStack_7d8);
                    /* try { // try from 00784f54 to 00784f5f has its CatchHandler @ 007853e0 */
      local_5c0 = (long *******)plVar46;
      <alloc::string::String_as_core::clone::Clone>::clone(&local_220,param_2 + 0x11);
      uStack_1d0 = (undefined1)param_2[0x1b];
      goto LAB_00784e54;
    }
    cStack_1c0 = '\b';
    uStack_1bf = 0xeb;
    uStack_1be = 0xad;
    uStack_1b8 = 1;
    local_1c8 = 1;
    uStack_1c6 = 0;
    local_220 = (long *******)0xffffffffffffffff;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    plVar46 = (long *)FUN_004b25a4(0x70,8);
    if (plVar46 == (long *)0x0) {
                    /* try { // try from 007852d4 to 007852df has its CatchHandler @ 00785620 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x70);
    }
    plVar46[9] = CONCAT62(uStack_1d6,local_1d8);
    plVar46[8] = CONCAT62(uStack_1de,uStack_1e0);
    plVar46[0xb] = CONCAT62(uStack_1c6,local_1c8);
    plVar46[10] = CONCAT62(uStack_1ce,CONCAT11(uStack_1cf,uStack_1d0));
    plVar46[0xd] = CONCAT62(uStack_1b6,uStack_1b8);
    plVar46[0xc] = CONCAT62(uStack_1be,CONCAT11(uStack_1bf,cStack_1c0));
    plVar46[1] = CONCAT62(uStack_216,CONCAT11(uStack_217,uStack_218));
    *plVar46 = (long)local_220;
    plVar46[3] = CONCAT44(uStack_204,CONCAT22(uStack_206,uStack_208));
    plVar46[2] = CONCAT62(uStack_20e,local_210);
    plVar46[5] = CONCAT44(uStack_1f4,CONCAT22(uStack_1f6,uStack_1f8));
    plVar46[4] = CONCAT44(uStack_1fc,CONCAT22(uStack_1fe,CONCAT11(uStack_1ff,local_200)));
    plVar46[7] = CONCAT44(uStack_1e4,CONCAT22(uStack_1e6,uStack_1e8));
    plVar46[6] = CONCAT44(uStack_1ec,CONCAT22(uStack_1ee,uStack_1f0));
                    /* try { // try from 00784e44 to 00784e4f has its CatchHandler @ 00785474 */
    local_5c0 = (long *******)plVar46;
    <alloc::string::String_as_core::clone::Clone>::clone(&local_220,param_2 + 0x11);
  }
  else {
    cStack_1c0 = '\b';
    uStack_1bf = 0xeb;
    uStack_1be = 0xad;
    uStack_1b8 = 1;
    local_1c8 = 1;
    uStack_1c6 = 0;
    local_220 = (long *******)0xffffffffffffffff;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    plVar46 = (long *)FUN_004b25a4(0x70,8);
    if (plVar46 == (long *)0x0) {
                    /* try { // try from 007852c4 to 007852cf has its CatchHandler @ 00785634 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x70);
    }
    plVar46[9] = CONCAT62(uStack_1d6,local_1d8);
    plVar46[8] = CONCAT62(uStack_1de,uStack_1e0);
    plVar46[0xb] = CONCAT62(uStack_1c6,local_1c8);
    plVar46[10] = CONCAT62(uStack_1ce,CONCAT11(uStack_1cf,uStack_1d0));
    plVar46[0xd] = CONCAT62(uStack_1b6,uStack_1b8);
    plVar46[0xc] = CONCAT62(uStack_1be,CONCAT11(uStack_1bf,cStack_1c0));
    plVar46[1] = CONCAT62(uStack_216,CONCAT11(uStack_217,uStack_218));
    *plVar46 = (long)local_220;
    plVar46[3] = CONCAT44(uStack_204,CONCAT22(uStack_206,uStack_208));
    plVar46[2] = CONCAT62(uStack_20e,local_210);
    plVar46[5] = CONCAT44(uStack_1f4,CONCAT22(uStack_1f6,uStack_1f8));
    plVar46[4] = CONCAT44(uStack_1fc,CONCAT22(uStack_1fe,CONCAT11(uStack_1ff,local_200)));
    plVar46[7] = CONCAT44(uStack_1e4,CONCAT22(uStack_1e6,uStack_1e8));
    plVar46[6] = CONCAT44(uStack_1ec,CONCAT22(uStack_1ee,uStack_1f0));
                    /* try { // try from 00784dc0 to 00784dcb has its CatchHandler @ 00785508 */
    local_5c0 = (long *******)plVar46;
    <alloc::string::String_as_core::clone::Clone>::clone(&local_220,param_2 + 0x11);
  }
  uStack_1d0 = (undefined1)param_2[0x1b];
LAB_00784e54:
  uStack_1f8 = (undefined2)param_2[0x16];
  uStack_1e4 = *(undefined4 *)((long)param_2 + 0xc4);
  uStack_1f6 = *(undefined2 *)((long)param_2 + 0xb2);
  uStack_204 = *(undefined4 *)((long)param_2 + 0xa4);
  local_1d8 = (undefined2)param_2[0x1a];
  uStack_1d6 = (undefined6)((ulong)param_2[0x1a] >> 0x10);
  uStack_1e0 = (undefined2)param_2[0x19];
  uStack_1de = (undefined6)((ulong)param_2[0x19] >> 0x10);
  uVar62 = *(undefined8 *)((long)param_2 + 0xbc);
  uVar47 = *(undefined8 *)((long)param_2 + 0xb4);
  uStack_208 = (undefined2)(int)param_2[0x14];
  uStack_206 = (undefined2)((uint)(int)param_2[0x14] >> 0x10);
  uVar1 = (undefined4)param_2[0x15];
  uStack_1fc = *(undefined4 *)((long)param_2 + 0xac);
  uStack_1ec = (undefined4)uVar62;
  uStack_1e8 = (undefined2)((ulong)uVar62 >> 0x20);
  uStack_1e6 = (undefined2)((ulong)uVar62 >> 0x30);
  uStack_1f4 = (uint)uVar47;
  uStack_1f0 = (undefined2)((ulong)uVar47 >> 0x20);
  uStack_1ee = (undefined2)((ulong)uVar47 >> 0x30);
  local_200 = (char)uVar1;
  uStack_1ff = (undefined1)((uint)uVar1 >> 8);
  uStack_1fe = (undefined2)((uint)uVar1 >> 0x10);
  if ((*plVar46 != -1) && (*plVar46 != 0)) {
    free((void *)plVar46[1]);
  }
  plVar46[5] = CONCAT44(uStack_1f4,CONCAT22(uStack_1f6,uStack_1f8));
  plVar46[4] = CONCAT44(uStack_1fc,CONCAT22(uStack_1fe,CONCAT11(uStack_1ff,local_200)));
  plVar46[7] = CONCAT44(uStack_1e4,CONCAT22(uStack_1e6,uStack_1e8));
  plVar46[6] = CONCAT44(uStack_1ec,CONCAT22(uStack_1ee,uStack_1f0));
  plVar46[10] = CONCAT62(uStack_1ce,CONCAT11(uStack_1cf,uStack_1d0));
  plVar46[9] = CONCAT62(uStack_1d6,local_1d8);
  plVar46[8] = CONCAT62(uStack_1de,uStack_1e0);
  plVar46[1] = CONCAT62(uStack_216,CONCAT11(uStack_217,uStack_218));
  *plVar46 = (long)local_220;
  plVar46[3] = CONCAT44(uStack_204,CONCAT22(uStack_206,uStack_208));
  plVar46[2] = CONCAT62(uStack_20e,local_210);
  *param_1 = 0xffffffffffffffff;
  param_1[1] = plVar46;
  return;
}


// ===== 007856bc  FUN_007856bc =====

void FUN_007856bc(char *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = 5;
  if (*param_1 == '\0') {
    uVar1 = 9;
  }
  puVar2 = &UNK_002e2991;
  if (*param_1 == '\0') {
    puVar2 = &UNK_002e2988;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,puVar2,uVar1);
  return;
}


// ===== 007856f0  <reqwest::async_impl::client::Pending_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::client::Pending as core::fmt::Debug>::fmt */

void __rustcall
<reqwest::async_impl::client::Pending_as_core::fmt::Debug>::fmt(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_30 [16];
  
  if (*param_1 == 2) {
    <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_002e2996,7);
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (auStack_30,&DAT_002e29a6,5,param_1 + 1,&PTR_FUN_00adbf68);
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_002e2996,7);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (auStack_30,&DAT_002e299d,6,param_1 + 0x21,&PTR_FUN_00adbf28);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (uVar1,&DAT_002e29a3,3,param_1 + 0x11,&PTR_FUN_00adbf48);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 007857b0  <bool_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <bool_as_core::fmt::Display>::fmt(void)

{
  (*(code *)PTR_fmt_00b02798)();
  return;
}


// ===== 007857b4  FUN_007857b4 =====

void FUN_007857b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,&DAT_002e29ab,7,&local_18,&DAT_00adbf88);
  return;
}


// ===== 007857f4  FUN_007857f4 =====

void FUN_007857f4(char *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = 4;
  if (*param_1 == '\0') {
    uVar1 = 5;
  }
  puVar2 = &UNK_002bd270;
  if (*param_1 == '\0') {
    puVar2 = &UNK_002e29b2;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,puVar2,uVar1);
  return;
}


// ===== 00785824  FUN_00785824 =====

void FUN_00785824(char *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = 6;
  if (*param_1 == '\0') {
    uVar1 = 7;
  }
  puVar2 = &UNK_002e29be;
  if (*param_1 == '\0') {
    puVar2 = &UNK_002e29b7;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,puVar2,uVar1);
  return;
}


// ===== 00785854  FUN_00785854 =====

void FUN_00785854(long param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


// ===== 00785868  FUN_00785868 =====

void FUN_00785868(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002e29c6,10);
  return;
}


// ===== 0078587c  FUN_0078587c =====

void FUN_0078587c(long param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = param_1 + 0x18;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
            (param_2,&DAT_002e29d0,0xe,
             "rootsrevocation_check_depthunknown_revocation_policyrevocation_expiration_policysupported"
             ,5,param_1,&PTR_FUN_00adbfa8,&DAT_002e29de,0x14,&local_18,&DAT_00adbc70);
  return;
}


// ===== 007858ec  FUN_007858ec =====

undefined8 FUN_007858ec(void)

{
  return 0;
}


// ===== 007858f4  FUN_007858f4 =====

undefined8 FUN_007858f4(void)

{
  return 0;
}


// ===== 007858fc  FUN_007858fc =====

undefined8 FUN_007858fc(void)

{
  return 0;
}


// ===== 00785904  FUN_00785904 =====

undefined8 FUN_00785904(void)

{
  return 0;
}


// ===== 0078590c  FUN_0078590c =====

void FUN_0078590c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar8 = *(ulong *)(param_1 + 0x10);
  if (uVar8 != 0) {
    puVar9 = *(undefined8 **)(param_1 + 8);
    puVar5 = puVar9;
    uVar7 = 0;
    do {
      iVar2 = FUN_0078751c(param_2,puVar5);
      uVar1 = uVar7 + 1;
      if (iVar2 == 0) {
                    /* try { // try from 0078597c to 00785983 has its CatchHandler @ 00785a08 */
        FUN_0078618c(puVar5);
        for (; uVar1 < uVar8; uVar1 = uVar1 + 1) {
          puVar6 = puVar5 + 9;
                    /* try { // try from 007859d0 to 007859db has its CatchHandler @ 00785a18 */
          uVar3 = FUN_0078751c(param_2,puVar6);
          if ((uVar3 & 1) == 0) {
                    /* try { // try from 007859e0 to 007859e7 has its CatchHandler @ 00785a0c */
            FUN_0078618c(puVar6);
          }
          else {
            puVar4 = puVar9 + uVar7 * 9;
            uVar10 = *puVar6;
            uVar7 = uVar7 + 1;
            puVar4[1] = puVar5[10];
            *puVar4 = uVar10;
            uVar15 = puVar5[0xe];
            uVar14 = puVar5[0xd];
            uVar11 = puVar5[0x10];
            uVar10 = puVar5[0xf];
            uVar13 = puVar5[0xc];
            uVar12 = puVar5[0xb];
            puVar4[8] = puVar5[0x11];
            puVar4[5] = uVar15;
            puVar4[4] = uVar14;
            puVar4[7] = uVar11;
            puVar4[6] = uVar10;
            puVar4[3] = uVar13;
            puVar4[2] = uVar12;
          }
          puVar5 = puVar6;
        }
        *(ulong *)(param_1 + 0x10) = uVar7;
        return;
      }
      puVar5 = puVar5 + 9;
      uVar7 = uVar1;
    } while (uVar8 != uVar1);
  }
  return;
}


// ===== 00785a48  FUN_00785a48 =====

void FUN_00785a48(long *param_1)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  
  if (*param_1 != -1) {
    if (*param_1 != 0) {
      free((void *)param_1[1]);
    }
    __ptr = (void *)param_1[4];
    lVar1 = param_1[5];
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)((long)__ptr + 8);
      do {
        if (puVar2[-1] != 0) {
          free((void *)*puVar2);
        }
        lVar1 = lVar1 + -1;
        puVar2 = puVar2 + 3;
      } while (lVar1 != 0);
    }
    if (param_1[3] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00785aec  FUN_00785aec =====

void FUN_00785aec(long *param_1)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  
  __ptr = (void *)param_1[1];
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)((long)__ptr + 8);
    do {
      if (puVar2[-1] != 0) {
        free((void *)*puVar2);
      }
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 3;
    } while (lVar1 != 0);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00785b6c  FUN_00785b6c =====

void FUN_00785b6c(long *param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  lVar1 = (long)__ptr + 0x38;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 00785ba8 to 00785bab has its CatchHandler @ 00785bf4 */
    (**(code **)(*(long *)(lVar1 + -0x18) + 0x20))
              (lVar1,*(undefined8 *)(lVar1 + -0x10),*(undefined8 *)(lVar1 + -8));
    lVar1 = lVar1 + 0x48;
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00785c48  FUN_00785c48 =====

void FUN_00785c48(long *param_1)

{
                    /* try { // try from 00785c58 to 00785c5b has its CatchHandler @ 00785c8c */
  FUN_0078aa8c();
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 00785cb4  FUN_00785cb4 =====

void FUN_00785cb4(long *param_1)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  
  __ptr = (void *)param_1[1];
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)((long)__ptr + 8);
    do {
      if ((puVar2[-1] != -1) && (puVar2[-1] != 0)) {
        free((void *)*puVar2);
      }
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 3;
    } while (lVar1 != 0);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00785d3c  FUN_00785d3c =====

void FUN_00785d3c(long *param_1)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  
  __ptr = (void *)param_1[1];
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)((long)__ptr + 8);
    do {
      if (puVar2[-1] != 0) {
        free((void *)*puVar2);
      }
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 3;
    } while (lVar1 != 0);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00785dbc  FUN_00785dbc =====

void FUN_00785dbc(long *param_1)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  
  __ptr = (void *)param_1[1];
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)((long)__ptr + 0x10);
    do {
      if (puVar2[-1] != 0) {
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


// ===== 00785e38  FUN_00785e38 =====

void FUN_00785e38(long *param_1)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  
  __ptr = (void *)param_1[1];
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)((long)__ptr + 8);
    do {
      if ((puVar2[-1] != -1) && (puVar2[-1] != 0)) {
        free((void *)*puVar2);
      }
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 3;
    } while (lVar1 != 0);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00785ec0  FUN_00785ec0 =====

void FUN_00785ec0(long *param_1)

{
  void *pvVar1;
  void *__ptr;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  pvVar1 = __ptr;
  for (lVar2 = param_1[2]; lVar2 != 0; lVar2 = lVar2 + -1) {
    FUN_00787428(pvVar1);
    pvVar1 = (void *)((long)pvVar1 + 0x70);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00785f2c  FUN_00785f2c =====

void FUN_00785f2c(long *param_1)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  
  __ptr = (void *)param_1[1];
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)((long)__ptr + 8);
    do {
      if ((puVar2[-1] != -1) && (puVar2[-1] != 0)) {
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


// ===== 00785fb0  FUN_00785fb0 =====

void FUN_00785fb0(long *param_1)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  
  __ptr = (void *)param_1[1];
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)((long)__ptr + 8);
    do {
      if (((ulong)puVar2[-1] < 0xfffffffffffffffe) && (puVar2[-1] != 0)) {
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


// ===== 00786034  FUN_00786034 =====

void FUN_00786034(void *param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 00786054 to 0078605b has its CatchHandler @ 0078608c */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 007860ac  FUN_007860ac =====

void FUN_007860ac(long param_1)

{
  if (*(long *)(param_1 + 0x40) != 0) {
                    /* try { // try from 007860cc to 007860d3 has its CatchHandler @ 007860f0 */
    (**(code **)(*(long *)(param_1 + 0x40) + 0x20))
              (param_1 + 0x58,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
  }
                    /* WARNING: Could not recover jumptable at 0x007860ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x20))
            (param_1 + 0x30,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}


// ===== 00786114  FUN_00786114 =====

void FUN_00786114(void *param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 00786134 to 0078613b has its CatchHandler @ 0078616c */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 0078618c  FUN_0078618c =====

void FUN_0078618c(long param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  void *__ptr;
  
  __ptr = *(void **)(param_1 + 0x18);
  if (__ptr != (void *)0x0) {
    puVar6 = *(undefined8 **)(param_1 + 0x20);
    pcVar3 = (code *)*puVar6;
    if (pcVar3 != (code *)0x0) {
                    /* try { // try from 007861b4 to 007861bb has its CatchHandler @ 00786208 */
      (*pcVar3)(__ptr);
    }
    if (puVar6[1] != 0) {
      free(__ptr);
    }
  }
  plVar4 = *(long **)(param_1 + 0x28);
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
                    /* try { // try from 007861f0 to 007861f3 has its CatchHandler @ 00786250 */
    <alloc::sync::[n]::alloc::sync::Arc<core::sync::atomic::Atomic<bool>>>::drop_slow();
  }
  FUN_00786268(param_1);
  return;
}


// ===== 00786268  FUN_00786268 =====

void FUN_00786268(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
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
                    /* try { // try from 00786294 to 0078629b has its CatchHandler @ 007862dc */
    <alloc::sync::[n]::alloc::sync::Arc<want::Inner>>::drop_slow(param_1);
  }
                    /* try { // try from 0078629c to 007862a3 has its CatchHandler @ 007862f0 */
  FUN_0079f408(param_1 + 1);
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
    <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::mpsc::chan::Chan<hyper[9f1bfd30b08ca095]::client::dispatch::Envelope<http[b87e90c26fe47eb4]::request::Request<reqwest[6fed810f3e38d558]::async_impl::body::Body>,http[b87e90c26fe47eb4]::response::Response<hyper[9f1bfd30b08ca095]::body::incoming::Incoming>>,tokio[8c8895dbfa691109]::sync::mpsc::unbounded::Semaphore>>>
    ::drop_slow(param_1 + 1);
    return;
  }
  return;
}


// ===== 00786324  FUN_00786324 =====

void FUN_00786324(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 00786334 to 00786337 has its CatchHandler @ 00786370 */
  FUN_0079f408();
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
    <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::mpsc::chan::Chan<hyper[9f1bfd30b08ca095]::client::dispatch::Envelope<http[b87e90c26fe47eb4]::request::Request<reqwest[6fed810f3e38d558]::async_impl::body::Body>,http[b87e90c26fe47eb4]::response::Response<hyper[9f1bfd30b08ca095]::body::incoming::Incoming>>,tokio[8c8895dbfa691109]::sync::mpsc::unbounded::Semaphore>>>
    ::drop_slow(param_1);
    return;
  }
  return;
}


// ===== 007863a4  FUN_007863a4 =====

void FUN_007863a4(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
  }
  if (param_1[3] != 0) {
    free((void *)param_1[4]);
  }
  if (param_1[6] != 0) {
    free((void *)param_1[7]);
    return;
  }
  return;
}


// ===== 00786404  FUN_00786404 =====

void FUN_00786404(long *param_1)

{
  if (*param_1 == 0) {
    if ((char)param_1[9] != '\x02') {
                    /* try { // try from 00786458 to 0078645f has its CatchHandler @ 0078647c */
      (**(code **)(param_1[5] + 0x20))(param_1 + 8,param_1[6],param_1[7]);
    }
  }
  else if ((char)param_1[9] != '\x02') {
                    /* try { // try from 00786434 to 0078643b has its CatchHandler @ 00786498 */
    (**(code **)(param_1[5] + 0x20))(param_1 + 8,param_1[6],param_1[7]);
  }
                    /* WARNING: Could not recover jumptable at 0x00786478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x20))(param_1 + 4,param_1[2],param_1[3]);
  return;
}


// ===== 007864bc  FUN_007864bc =====

void FUN_007864bc(ulong *param_1)

{
  void *__ptr;
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  puVar3 = param_1 + 1;
  if (*param_1 < 3) {
                    /* try { // try from 007864dc to 00786593 has its CatchHandler @ 00786614 */
    FUN_00786404();
  }
  else if (*param_1 == 3) {
    plVar4 = (long *)*puVar3;
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
      <alloc::sync::[n]::alloc::sync::Arc<std::collections::hash::map::HashMap<alloc::string::String,reqwest::proxy::ProxyScheme>>>
      ::drop_slow();
    }
  }
  else {
    if ((char)param_1[7] != '\x02') {
                    /* try { // try from 007865b4 to 007865bb has its CatchHandler @ 007865e4 */
      (**(code **)(param_1[3] + 0x20))(param_1 + 6,param_1[4],param_1[5]);
    }
    plVar4 = (long *)*puVar3;
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
                    /* try { // try from 007865d8 to 007865df has its CatchHandler @ 00786614 */
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
      drop_slow(puVar3);
    }
  }
  if (param_1[0xb] != 0xffffffffffffffff) {
    if (param_1[0xb] != 0) {
      free((void *)param_1[0xc]);
    }
    __ptr = (void *)param_1[0xf];
    uVar6 = param_1[0x10];
    if (uVar6 != 0) {
      puVar7 = (undefined8 *)((long)__ptr + 8);
      do {
        if (puVar7[-1] != 0) {
          free((void *)*puVar7);
        }
        uVar6 = uVar6 - 1;
        puVar7 = puVar7 + 3;
      } while (uVar6 != 0);
    }
    if (param_1[0xe] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00786628  FUN_00786628 =====

void FUN_00786628(ulong *param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  uVar6 = *param_1;
  lVar1 = uVar6 + 0x7fffffffffffffef;
  if (uVar6 < 0x8000000000000011) {
    lVar1 = 0xb;
  }
  if (lVar1 < 0xb) {
    if (lVar1 < 8) {
      if (lVar1 - 2U < 6) {
        return;
      }
      if ((lVar1 == 0) || (lVar1 == 1)) {
        if (param_1[1] == 0) {
          return;
        }
        free((void *)param_1[2]);
        return;
      }
    }
    else {
      if (lVar1 - 9U < 2) {
        return;
      }
      if (lVar1 == 8) {
        uVar6 = param_1[1];
        if ((long)uVar6 < -0x7fffffffffffffeb) {
          return;
        }
        if (uVar6 == 0xffffffffffffffff) {
          return;
        }
        uVar7 = param_1[3];
        if (uVar7 != 0) {
          uVar6 = param_1[2];
          do {
            FUN_00787428(uVar6);
            uVar7 = uVar7 - 1;
            uVar6 = uVar6 + 0x70;
          } while (uVar7 != 0);
          uVar6 = param_1[1];
        }
        if (uVar6 == 0) {
          return;
        }
        free((void *)param_1[2]);
        return;
      }
    }
  }
  else if (lVar1 < 0xe) {
    if (lVar1 == 0xb) {
      uVar7 = uVar6 ^ 0x8000000000000000;
      if (-1 < (long)uVar6) {
        uVar7 = 0xd;
      }
      if (uVar7 < 0xd) {
        return;
      }
      if (uVar7 - 0xe < 2) {
        return;
      }
      if (uVar7 == 0xd) {
        if ((((param_1[3] & 1) == 0) && (param_1[4] != 0xffffffffffffffff)) && (param_1[4] != 0)) {
          free((void *)param_1[5]);
        }
        uVar6 = param_1[2];
        if (uVar6 != 0) {
          puVar8 = (undefined8 *)(param_1[1] + 8);
          do {
            if (puVar8[-1] != 0) {
              free((void *)*puVar8);
            }
            uVar6 = uVar6 - 1;
            puVar8 = puVar8 + 3;
          } while (uVar6 != 0);
        }
        if (*param_1 == 0) {
          return;
        }
        free((void *)param_1[1]);
        return;
      }
      plVar5 = (long *)param_1[1];
      do {
        bVar4 = *plVar5 + -1 == 0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_00786820;
    }
    if (lVar1 == 0xc) {
      if (param_1[1] != 4) {
        return;
      }
      plVar5 = (long *)param_1[2];
      do {
        bVar4 = *plVar5 + -1 == 0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_00786820;
    }
    if (lVar1 == 0xd) {
      if (param_1[1] == 0) {
        return;
      }
      free((void *)param_1[2]);
      return;
    }
  }
  else if (lVar1 - 0xeU < 7) {
    return;
  }
  plVar5 = (long *)param_1[1];
  do {
    bVar4 = *plVar5 + -1 == 0;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = *plVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00786820:
  if (!bVar4) {
    return;
  }
  DataMemoryBarrier(2,1);
  <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
  ::drop_slow();
  return;
}


// ===== 007868b4  FUN_007868b4 =====

void FUN_007868b4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != -1) {
                    /* try { // try from 007868cc to 007868d7 has its CatchHandler @ 00786958 */
    FUN_007b3770(param_1 + 0xf);
    if (lVar1 != 0) {
      free((void *)param_1[1]);
    }
    if ((param_1[0xc] != -1) && (param_1[0xc] != 0)) {
      free((void *)param_1[0xd]);
    }
    if (param_1[3] != 0) {
      free((void *)param_1[4]);
    }
    if (param_1[6] != 0) {
      free((void *)param_1[7]);
    }
    if (param_1[9] != 0) {
      free((void *)param_1[10]);
      return;
    }
  }
  return;
}


// ===== 007869a0  FUN_007869a0 =====

void FUN_007869a0(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  void *__ptr;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  
  uVar4 = *param_1 ^ 0x8000000000000000;
  if (4 < uVar4) {
    uVar4 = 1;
  }
  if (1 < (long)uVar4) {
    if ((uVar4 != 2) && (uVar4 == 3)) {
      return;
    }
LAB_00786a34:
    param_1 = param_1 + 1;
    uVar4 = *param_1;
    if (uVar4 == 0xffffffffffffffff) {
      return;
    }
    goto LAB_00786db8;
  }
  if (uVar4 == 0) {
    return;
  }
  if (uVar4 != 1) goto LAB_00786a34;
  uVar5 = param_1[3];
  uVar4 = uVar5 ^ 0x8000000000000000;
  if (-1 < (long)uVar5) {
    uVar4 = 1;
  }
  switch(uVar4) {
  case 0:
  case 0xb:
  case 0xc:
  case 0x11:
    break;
  case 1:
    if (uVar5 != 0) {
      free((void *)param_1[4]);
    }
    if (param_1[6] != 0) {
      free((void *)param_1[7]);
    }
    uVar4 = param_1[0xb];
    if (uVar4 != 0) {
      uVar5 = param_1[10];
      do {
        FUN_00786e74(uVar5);
        uVar4 = uVar4 - 1;
        uVar5 = uVar5 + 0x40;
      } while (uVar4 != 0);
    }
    if (param_1[9] == 0) break;
    __ptr = (void *)param_1[10];
    goto LAB_00786da8;
  case 2:
    uVar4 = param_1[6];
    if (uVar4 != 0) {
      uVar5 = param_1[5];
      do {
        FUN_00787200(uVar5);
        uVar4 = uVar4 - 1;
        uVar5 = uVar5 + 0x28;
      } while (uVar4 != 0);
    }
    goto LAB_00786d08;
  case 3:
    uVar4 = param_1[6];
    if (uVar4 != 0) {
      puVar10 = (ulong *)param_1[5];
      lVar8 = 0;
      puVar11 = puVar10;
      do {
        uVar3 = *puVar11;
        uVar5 = uVar3 ^ 0x8000000000000000;
        if (3 < uVar5) {
          uVar5 = 4;
        }
        if ((long)uVar5 < 2) {
          if (uVar5 != 0) {
            if (uVar5 != 1) goto LAB_00786b24;
LAB_00786b44:
            uVar3 = puVar11[1];
            puVar6 = puVar10 + lVar8 * 4 + 1;
LAB_00786b50:
            if (uVar3 != 0) {
              free((void *)puVar6[1]);
            }
          }
        }
        else if (uVar5 != 2) {
          if (uVar5 == 3) goto LAB_00786b44;
LAB_00786b24:
          puVar6 = puVar11;
          if (uVar3 != 0xffffffffffffffff) goto LAB_00786b50;
        }
        uVar4 = uVar4 - 1;
        puVar11 = puVar11 + 4;
        lVar8 = lVar8 + 1;
      } while (uVar4 != 0);
    }
    if (param_1[4] != 0) {
      __ptr = (void *)param_1[5];
      goto LAB_00786da8;
    }
    break;
  case 4:
    FUN_00785cb4(param_1 + 4);
    break;
  case 5:
    if (param_1[4] != 0) {
      free((void *)param_1[5]);
    }
    FUN_0078ac98(param_1 + 7);
    if (param_1[7] != 0) {
      __ptr = (void *)param_1[8];
      goto LAB_00786da8;
    }
    break;
  default:
    puVar11 = param_1 + 4;
    uVar4 = *puVar11;
    goto joined_r0x00786d74;
  case 7:
    if (param_1[4] != 0xffffffffffffffff) {
      uVar4 = param_1[8];
      if (uVar4 == 0xffffffffffffffff) {
        lVar8 = 8;
      }
      else {
        if (uVar4 != 0) {
          free((void *)param_1[9]);
        }
        if (param_1[0xb] != 0) {
          free((void *)param_1[0xc]);
        }
        lVar8 = 0x30;
      }
      plVar7 = (long *)((long)(param_1 + 8) + lVar8);
      if (*plVar7 != 0) {
        free((void *)plVar7[1]);
      }
      goto LAB_00786d98;
    }
    puVar11 = param_1 + 5;
    uVar4 = *puVar11;
joined_r0x00786d74:
    if (uVar4 == 0xffffffffffffffff) break;
joined_r0x00786d9c:
    if (uVar4 == 0) break;
    __ptr = (void *)puVar11[1];
    goto LAB_00786da8;
  case 8:
    if (param_1[4] != 0) {
      free((void *)param_1[5]);
    }
    if (param_1[7] != 0) {
      free((void *)param_1[8]);
    }
    uVar4 = param_1[0xc];
    if (uVar4 != 0) {
      puVar9 = (undefined8 *)(param_1[0xb] + 8);
      do {
        if (puVar9[-1] != 0) {
          free((void *)*puVar9);
        }
        uVar4 = uVar4 - 1;
        puVar9 = puVar9 + 3;
      } while (uVar4 != 0);
    }
    if (param_1[10] != 0) {
      __ptr = (void *)param_1[0xb];
      goto LAB_00786da8;
    }
    break;
  case 9:
    if (param_1[4] != 0) {
      free((void *)param_1[5]);
    }
    uVar4 = param_1[9];
    if (uVar4 != 0) {
      uVar5 = param_1[8];
      do {
        FUN_00787344(uVar5);
        uVar4 = uVar4 - 1;
        uVar5 = uVar5 + 0x20;
      } while (uVar4 != 0);
    }
    if (param_1[7] != 0) {
      __ptr = (void *)param_1[8];
      goto LAB_00786da8;
    }
    break;
  case 10:
LAB_00786d98:
    puVar11 = param_1 + 4;
    uVar4 = *puVar11;
    goto joined_r0x00786d9c;
  case 0xe:
    plVar7 = (long *)param_1[4];
    do {
      lVar8 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 00786ce0 to 00786ce3 has its CatchHandler @ 00786dfc */
      <alloc::sync::[n]::alloc::sync::Arc<rustls::msgs::base::PayloadU16>>::drop_slow();
    }
    break;
  case 0xf:
    if (param_1[4] != 0) {
      free((void *)param_1[5]);
    }
    plVar7 = (long *)param_1[10];
    do {
      lVar8 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 00786d58 to 00786d5b has its CatchHandler @ 00786dec */
      <alloc::sync::[n]::alloc::sync::Arc<rustls::msgs::base::PayloadU16>>::drop_slow();
    }
    FUN_00785fb0(param_1 + 7);
    break;
  case 0x10:
    uVar4 = param_1[6];
    if (uVar4 != 0) {
      uVar5 = param_1[5];
      do {
        FUN_00787200(uVar5);
        uVar4 = uVar4 - 1;
        uVar5 = uVar5 + 0x28;
      } while (uVar4 != 0);
    }
LAB_00786d08:
    if (param_1[4] != 0) {
      __ptr = (void *)param_1[5];
LAB_00786da8:
      free(__ptr);
    }
  }
  uVar4 = *param_1;
  if (uVar4 != 0xffffffffffffffff) {
LAB_00786db8:
    if (uVar4 != 0) {
      free((void *)param_1[1]);
      return;
    }
  }
  return;
}


// ===== 00786e24  FUN_00786e24 =====

void FUN_00786e24(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
  }
  if (param_1[3] != 0) {
    free((void *)param_1[4]);
    return;
  }
  return;
}


// ===== 00786e74  FUN_00786e74 =====

void FUN_00786e74(ulong *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 *puVar5;
  
  uVar1 = *param_1;
  uVar3 = uVar1 ^ 0x8000000000000000;
  if (0x16 < uVar3) {
    uVar3 = 0x13;
  }
  switch(uVar3) {
  case 0:
  case 8:
  case 0xd:
  case 0xe:
    if (param_1[1] != 0) {
      free((void *)param_1[2]);
      return;
    }
    break;
  case 1:
  case 2:
  case 6:
  case 0x12:
  case 0x14:
    if (param_1[1] != 0) {
      free((void *)param_1[2]);
      return;
    }
    break;
  case 3:
    pvVar4 = (void *)param_1[2];
    uVar3 = param_1[3];
    if (uVar3 != 0) {
      puVar5 = (undefined8 *)((long)pvVar4 + 0x10);
      do {
        if ((((puVar5[-2] != 0) && (puVar5[-2] == 1)) || (puVar5[-1] != -1)) && (puVar5[-1] != 0)) {
          free((void *)*puVar5);
        }
        uVar3 = uVar3 - 1;
        puVar5 = puVar5 + 5;
      } while (uVar3 != 0);
    }
    uVar3 = param_1[1];
    goto joined_r0x0078704c;
  case 4:
    uVar3 = param_1[1];
    if (0xfffffffffffffffd < uVar3) {
      return;
    }
    goto LAB_00787130;
  case 5:
    pvVar4 = (void *)param_1[2];
    uVar3 = param_1[3];
    if (uVar3 != 0) {
      puVar5 = (undefined8 *)((long)pvVar4 + 8);
      do {
        if (puVar5[-1] != 0) {
          free((void *)*puVar5);
        }
        uVar3 = uVar3 - 1;
        puVar5 = puVar5 + 3;
      } while (uVar3 != 0);
    }
    goto LAB_007870f8;
  case 7:
    pvVar4 = (void *)param_1[2];
    uVar3 = param_1[3];
    if (uVar3 != 0) {
      puVar5 = (undefined8 *)((long)pvVar4 + 8);
      do {
        if (puVar5[-1] != 0) {
          free((void *)*puVar5);
        }
        uVar3 = uVar3 - 1;
        puVar5 = puVar5 + 4;
      } while (uVar3 != 0);
    }
    uVar3 = param_1[1];
    goto joined_r0x0078704c;
  case 9:
    pvVar4 = (void *)param_1[2];
    uVar3 = param_1[3];
    if (uVar3 != 0) {
      puVar5 = (undefined8 *)((long)pvVar4 + 8);
      do {
        if (puVar5[-1] != 0) {
          free((void *)*puVar5);
        }
        uVar3 = uVar3 - 1;
        puVar5 = puVar5 + 4;
      } while (uVar3 != 0);
    }
    if (param_1[1] != 0) {
      free(pvVar4);
    }
    pvVar4 = (void *)param_1[5];
    uVar3 = param_1[6];
    if (uVar3 != 0) {
      puVar5 = (undefined8 *)((long)pvVar4 + 8);
      do {
        if (puVar5[-1] != 0) {
          free((void *)*puVar5);
        }
        uVar3 = uVar3 - 1;
        puVar5 = puVar5 + 3;
      } while (uVar3 != 0);
    }
    uVar3 = param_1[4];
joined_r0x0078704c:
    if (uVar3 != 0) {
LAB_00787108:
      free(pvVar4);
      return;
    }
    break;
  case 10:
  case 0xf:
  case 0x10:
    if (param_1[1] == 0) {
      return;
    }
    goto LAB_00787134;
  case 0xb:
  case 0x11:
    break;
  case 0xc:
    uVar3 = param_1[1];
    if (uVar3 == 0xffffffffffffffff) {
      uVar3 = param_1[3];
      if (uVar3 == 0xffffffffffffffff) {
        return;
      }
      lVar2 = 0x18;
    }
    else {
      pvVar4 = (void *)param_1[2];
      uVar1 = param_1[3];
      if (uVar1 != 0) {
        puVar5 = (undefined8 *)((long)pvVar4 + 8);
        do {
          if (puVar5[-1] != 0) {
            free((void *)*puVar5);
          }
          uVar1 = uVar1 - 1;
          puVar5 = puVar5 + 3;
        } while (uVar1 != 0);
      }
      if (uVar3 != 0) {
        free(pvVar4);
      }
      uVar3 = param_1[4];
      lVar2 = 0x20;
    }
    if (uVar3 != 0) {
      free(*(void **)((long)param_1 + lVar2 + 8));
      return;
    }
    break;
  case 0x13:
    if (uVar1 != 0xffffffffffffffff) {
      if (uVar1 != 0) {
        free((void *)param_1[1]);
      }
      if (param_1[3] != 0) {
        free((void *)param_1[4]);
        return;
      }
    }
    break;
  case 0x15:
    pvVar4 = (void *)param_1[2];
    uVar3 = param_1[3];
    if (uVar3 != 0) {
      puVar5 = (undefined8 *)((long)pvVar4 + 8);
      do {
        if (puVar5[-1] != 0) {
          free((void *)*puVar5);
        }
        uVar3 = uVar3 - 1;
        puVar5 = puVar5 + 3;
      } while (uVar3 != 0);
    }
LAB_007870f8:
    if (param_1[1] == 0) {
      return;
    }
    goto LAB_00787108;
  default:
    uVar3 = param_1[1];
    if (uVar3 == 0xffffffffffffffff) {
      return;
    }
LAB_00787130:
    if (uVar3 != 0) {
LAB_00787134:
      free((void *)param_1[2]);
      return;
    }
  }
  return;
}


// ===== 00787200  FUN_00787200 =====

void FUN_00787200(undefined1 *param_1)

{
  void *pvVar1;
  void *__ptr;
  long lVar2;
  undefined8 *puVar3;
  
  switch(*param_1) {
  case 0:
    if (*(long *)(param_1 + 8) != 0) {
      free(*(void **)(param_1 + 0x10));
      return;
    }
    break;
  case 1:
  case 2:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xe:
    break;
  case 3:
  case 5:
  case 0xc:
  case 0xd:
    lVar2 = *(long *)(param_1 + 8);
    goto joined_r0x0078733c;
  case 4:
    pvVar1 = *(void **)(param_1 + 0x10);
    lVar2 = *(long *)(param_1 + 0x18);
    if (lVar2 != 0) {
      puVar3 = (undefined8 *)((long)pvVar1 + 8);
      do {
        if (puVar3[-1] != 0) {
          free((void *)*puVar3);
        }
        lVar2 = lVar2 + -1;
        puVar3 = puVar3 + 3;
      } while (lVar2 != 0);
    }
    if (*(long *)(param_1 + 8) != 0) {
      free(pvVar1);
      return;
    }
    break;
  case 0xf:
    __ptr = *(void **)(param_1 + 0x10);
    pvVar1 = __ptr;
    for (lVar2 = *(long *)(param_1 + 0x18); lVar2 != 0; lVar2 = lVar2 + -1) {
      FUN_00787428(pvVar1);
      pvVar1 = (void *)((long)pvVar1 + 0x70);
    }
    if (*(long *)(param_1 + 8) != 0) {
      free(__ptr);
      return;
    }
    break;
  default:
    lVar2 = *(long *)(param_1 + 8);
    if (lVar2 == -1) {
      return;
    }
joined_r0x0078733c:
    if (lVar2 != 0) {
      free(*(void **)(param_1 + 0x10));
      return;
    }
  }
  return;
}


// ===== 00787344  FUN_00787344 =====

void FUN_00787344(ulong *param_1)

{
  void *__ptr;
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  uVar1 = *param_1;
  uVar2 = uVar1 ^ 0x8000000000000000;
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      __ptr = (void *)param_1[2];
      uVar1 = param_1[3];
      if (uVar1 != 0) {
        puVar3 = (undefined8 *)((long)__ptr + 8);
        do {
          if (puVar3[-1] != 0) {
            free((void *)*puVar3);
          }
          uVar1 = uVar1 - 1;
          puVar3 = puVar3 + 3;
        } while (uVar1 != 0);
      }
      if (param_1[1] == 0) {
        return;
      }
      free(__ptr);
      return;
    }
    if (uVar2 != 2) {
      if (uVar1 == 0xffffffffffffffff) {
        return;
      }
      if (uVar1 == 0) {
        return;
      }
      free((void *)param_1[1]);
      return;
    }
  }
  if (param_1[1] == 0) {
    return;
  }
  free((void *)param_1[2]);
  return;
}


// ===== 00787428  FUN_00787428 =====

void FUN_00787428(long *param_1)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  
  if (*param_1 == -1) {
    if (param_1[1] != 0) {
      free((void *)param_1[2]);
      return;
    }
  }
  else {
    if (*param_1 != 0) {
      free((void *)param_1[1]);
    }
    if (param_1[3] != 0) {
      free((void *)param_1[4]);
    }
    if ((param_1[10] != -1) && (param_1[10] != 0)) {
      free((void *)param_1[0xb]);
    }
    __ptr = (void *)param_1[8];
    lVar1 = param_1[9];
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)((long)__ptr + 8);
      do {
        if ((puVar2[-1] != -1) && (puVar2[-1] != 0)) {
          free((void *)*puVar2);
        }
        lVar1 = lVar1 + -1;
        puVar2 = puVar2 + 4;
      } while (lVar1 != 0);
    }
    if (param_1[7] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 0078751c  FUN_0078751c =====

undefined8 FUN_0078751c(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [12];
  undefined8 *local_98;
  undefined **ppuStack_90;
  undefined *local_88;
  undefined8 local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 *puStack_50;
  undefined8 local_48;
  code *pcStack_40;
  undefined8 **local_38;
  undefined8 uStack_30;
  undefined8 *local_28;
  
  uVar3 = <hyper_util::client::legacy::connect::hyper_util::client::legacy::connect::PoisonPill>::
          poisoned(param_2 + 5);
  puVar1 = PTR___CALLSITE_00b00e68;
  if (((uVar3 & 1) == 0) && (*(long *)(*param_2 + 0x10) == 1)) {
    auVar6 = <std::time::std::time::Instant>::duration_since(param_1[1],param_2[7],(int)param_2[8]);
    puVar1 = PTR___CALLSITE_00b00e70;
    uVar3 = *(ulong *)param_1[2];
    if (auVar6._0_8_ == uVar3) {
      if (auVar6._8_4_ <= (uint)((ulong *)param_1[2])[1]) {
        return 1;
      }
    }
    else if (auVar6._0_8_ <= uVar3) {
      return 1;
    }
    if (*(long *)PTR_MAX_LEVEL_00b00e60 != 0) {
      return 0;
    }
    bVar2 = PTR___CALLSITE_00b00e70[0x10];
    if (1 < bVar2 - 1) {
      if (bVar2 == 0) {
        return 0;
      }
      bVar2 = <tracing_core::callsite::tracing_core::callsite::DefaultCallsite>::register
                        (PTR___CALLSITE_00b00e70);
      if (bVar2 == 0) {
        return 0;
      }
    }
    uVar4 = tracing::__macro_support::__is_enabled(*(undefined8 *)puVar1,bVar2);
    if ((int)uVar4 != 0) {
      lVar5 = *(long *)puVar1;
      lStack_78 = *(long *)(lVar5 + 0x38);
      if (lStack_78 == 0) {
                    /* WARNING: Subroutine does not return */
        core::option::expect_failed
                  ("FieldSet corrupted (this is a bug)",0x22,
                   &PTR_s__root__cargo_registry_src_index__00adc000);
      }
      uStack_68 = *(undefined8 *)(lVar5 + 0x48);
      local_70 = *(undefined8 *)(lVar5 + 0x40);
      local_48 = *param_1;
      local_28 = (undefined8 *)(lVar5 + 0x30);
      local_80 = *local_28;
      local_58 = &DAT_002b976c;
LAB_00787618:
      pcStack_40 = FUN_007c7578;
      local_60 = 0;
      puStack_50 = &local_48;
      local_98 = &local_80;
      ppuStack_90 = &local_58;
      local_88 = &DAT_00adbfe0;
      local_38 = &local_98;
      uStack_30 = 1;
      <tracing_core::event::tracing_core::event::Event>::dispatch(lVar5,&local_38);
      return 0;
    }
  }
  else {
    if (*(long *)PTR_MAX_LEVEL_00b00e60 != 0) {
      return 0;
    }
    bVar2 = PTR___CALLSITE_00b00e68[0x10];
    if (1 < bVar2 - 1) {
      if (bVar2 == 0) {
        return 0;
      }
      bVar2 = <tracing_core::callsite::tracing_core::callsite::DefaultCallsite>::register
                        (PTR___CALLSITE_00b00e68);
      if (bVar2 == 0) {
        return 0;
      }
    }
    uVar4 = tracing::__macro_support::__is_enabled(*(undefined8 *)puVar1,bVar2);
    if ((int)uVar4 != 0) {
      lVar5 = *(long *)puVar1;
      lStack_78 = *(long *)(lVar5 + 0x38);
      if (lStack_78 == 0) {
                    /* WARNING: Subroutine does not return */
        core::option::expect_failed
                  ("FieldSet corrupted (this is a bug)",0x22,
                   &PTR_s__root__cargo_registry_src_index__00adbfc8);
      }
      local_48 = *param_1;
      uStack_68 = *(undefined8 *)(lVar5 + 0x48);
      local_70 = *(undefined8 *)(lVar5 + 0x40);
      local_28 = (undefined8 *)(lVar5 + 0x30);
      local_80 = *local_28;
      local_58 = &DAT_002b896f;
      goto LAB_00787618;
    }
  }
  return uVar4;
}


// ===== 00787758  FUN_00787758 =====

/* WARNING: Removing unreachable block (ram,0x00787f74) */
/* WARNING: Removing unreachable block (ram,0x00787b40) */

void FUN_00787758(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  short sVar2;
  undefined2 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  ulong uVar13;
  long extraout_x1;
  char cVar15;
  char *pcVar16;
  code *pcVar17;
  void *pvVar18;
  short sVar19;
  undefined4 uVar20;
  undefined8 unaff_x20;
  undefined8 *puVar21;
  uint uVar22;
  undefined1 auVar23 [16];
  char *local_3d0;
  char *local_3c0;
  void *local_3a8;
  undefined8 *local_3a0;
  char *local_398;
  char *local_390;
  char *local_388;
  undefined1 auStack_380 [16];
  undefined8 uStack_370;
  long local_368;
  long lStack_360;
  long local_358;
  char *local_350;
  char *pcStack_348;
  undefined2 local_340;
  short local_33e;
  undefined4 local_33c;
  char *local_330;
  undefined1 auStack_328 [8];
  char *local_320;
  char *pcStack_318;
  char *local_310;
  char *pcStack_308;
  char *local_300;
  char *local_2f0;
  undefined1 auStack_2e8 [9];
  undefined1 uStack_2df;
  undefined2 uStack_2dc;
  undefined6 uStack_2de;
  char *local_2d8;
  char *pcStack_2d0;
  char *local_2c8;
  char *pcStack_2c0;
  char *pcStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 local_230 [8];
  undefined1 auStack_228 [10];
  short local_21e;
  undefined4 local_21c;
  undefined8 local_218;
  char *pcStack_210;
  char *pcStack_208;
  char *pcStack_200;
  char *local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  char *local_170;
  char *pcStack_168;
  undefined8 local_160;
  char *pcStack_158;
  char *local_150;
  char *pcStack_148;
  char *local_140;
  undefined1 local_130 [8];
  undefined1 auStack_128 [16];
  char *local_118;
  char *local_110;
  char *pcStack_108;
  char *local_100;
  char *pcStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  char *pcVar12;
  char *pcVar14;
  
  pcVar16 = (char *)param_2[0x71];
  auVar5._8_8_ = param_2[0x73];
  auVar5._0_8_ = param_2[0x72];
  plVar1 = param_2 + 0x71;
  param_2[0x71] = 0x8000000000000021;
  if (pcVar16 != (char *)0xffffffffffffffff) {
    pcStack_2d0 = (char *)param_2[0x75];
    local_2d8 = (char *)param_2[0x74];
    pcStack_2c0 = (char *)param_2[0x77];
    local_2c8 = (char *)param_2[0x76];
                    /* try { // try from 007877c0 to 007877cb has its CatchHandler @ 007883e8 */
    local_2f0 = pcVar16;
    auStack_2e8._0_8_ = param_2[0x72];
    unique0x100027c7 = (char *)param_2[0x73];
    FUN_0078a160(local_130,&local_2f0);
    auStack_228._0_8_ = auStack_128._0_8_;
    local_230 = local_130;
    local_218 = local_118;
    stack0xfffffffffffffde0 = (char *)auStack_128._8_8_;
    pcStack_208 = pcStack_108;
    pcStack_210 = local_110;
    pcStack_200 = local_100;
    if (*plVar1 == -1) {
      puVar21 = (undefined8 *)param_2[0x73];
      pvVar18 = (void *)param_2[0x72];
      pcVar17 = (code *)*puVar21;
      if (pcVar17 != (code *)0x0) {
                    /* try { // try from 00787f88 to 00787f8f has its CatchHandler @ 00788378 */
        (*pcVar17)(pvVar18);
      }
      if (puVar21[1] != 0) {
        free(pvVar18);
      }
    }
    else {
                    /* try { // try from 007877f0 to 007877f7 has its CatchHandler @ 007883b8 */
      FUN_00786628(plVar1);
    }
    param_2[0x77] = pcStack_200;
    param_2[0x72] = auStack_228._0_8_;
    *plVar1 = (long)local_230;
    param_2[0x74] = local_218;
    param_2[0x73] = stack0xfffffffffffffde0;
    param_2[0x76] = pcStack_208;
    param_2[0x75] = pcStack_210;
    param_1[6] = (long)pcStack_2c0;
    param_1[1] = auStack_2e8._0_8_;
    *param_1 = (long)local_2f0;
    param_1[3] = (long)local_2d8;
    param_1[2] = (long)stack0xfffffffffffffd20;
    param_1[5] = (long)local_2c8;
    param_1[4] = (long)pcStack_2d0;
    return;
  }
  pcVar16 = (char *)param_2[0x70];
  local_390 = (char *)0x0;
  local_398 = pcVar16;
LAB_00787814:
                    /* try { // try from 00787814 to 0078782b has its CatchHandler @ 00788460 */
  local_3a0 = auVar5._8_8_;
  local_3a8 = auVar5._0_8_;
  auVar23 = <rustls::msgs::deframer::buffers::[2]::rustls::msgs::deframer::buffers::DeframerVecBuffer>
            ::filled_mut(param_3);
  pcVar14 = auVar23._8_8_;
  pcVar12 = auVar23._0_8_;
  uVar13 = <rustls::msgs::deframer::handshake::rustls::msgs::deframer::handshake::HandshakeDeframer>
           ::has_message_ready(param_2 + 0x6d);
  if ((uVar13 & 1) == 0) {
    sVar2 = *(short *)(param_2 + 0x65);
    pcStack_348 = pcVar12 + (long)pcVar14;
    local_350 = pcVar12;
    pcVar7 = local_398;
    pcVar6 = local_398;
    auVar4 = auStack_128;
joined_r0x007878c4:
    auStack_128 = auVar4;
    local_398 = pcVar7;
    if (pcVar14 < pcVar16) {
                    /* try { // try from 00788294 to 007882ab has its CatchHandler @ 00788480 */
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (pcVar16,pcVar14,pcVar14,&PTR_s__root__cargo_registry_src_index__00adc018);
    }
    local_330 = pcVar12 + (long)pcVar16;
    auStack_328 = (undefined1  [8])(pcVar14 + -(long)pcVar16);
    local_320 = (char *)0x0;
    local_398 = pcVar6;
    if (sVar2 == 5) {
      while( true ) {
                    /* try { // try from 007878e4 to 0078796b has its CatchHandler @ 0078846c */
        <rustls::msgs::deframer::DeframerIter_as_core::iter::traits::iterator::Iterator>::next
                  (local_230,&local_330);
        if (local_230 != (undefined1  [8])0xffffffffffffffff) goto LAB_00787b18;
        uVar22 = (uint)local_218 & 0xff;
        pcStack_168 = stack0xfffffffffffffde0;
        local_170 = (char *)auStack_228._0_8_;
        local_160 = local_218;
        if (((((ulong)local_218 & 0xff) == 0) ||
            (((uVar22 == 1 && ((*(byte *)(param_2 + 9) & 1) == 0)) &&
             (stack0xfffffffffffffde0 < (char *)0x3)))) && (param_2[0x6f] == 0)) goto LAB_00787a1c;
        <rustls::record_layer::rustls::record_layer::RecordLayer>::decrypt_incoming
                  (local_230,param_2,&local_170);
        if (local_230 != (undefined1  [8])0xffffffffffffffff) goto LAB_00787b94;
        sVar19 = local_218._2_2_;
        if (local_218._2_2_ != -1) break;
        uVar13 = <rustls::msgs::deframer::handshake::rustls::msgs::deframer::handshake::HandshakeDeframer>
                 ::is_aligned(param_2 + 0x6d);
        if ((uVar13 & 1) == 0) goto LAB_00787be0;
      }
    }
    else {
      while( true ) {
                    /* try { // try from 00787974 to 007879df has its CatchHandler @ 00788470 */
        <rustls::msgs::deframer::DeframerIter_as_core::iter::traits::iterator::Iterator>::next
                  (local_230,&local_330);
        if (local_230 != (undefined1  [8])0xffffffffffffffff) goto LAB_00787b18;
        pcStack_168 = stack0xfffffffffffffde0;
        local_170 = (char *)auStack_228._0_8_;
        local_160 = local_218;
        if ((((ulong)local_218 & 0xff) == 0) && (param_2[0x6f] == 0)) {
          uVar22 = 0;
          goto LAB_00787a1c;
        }
        <rustls::record_layer::rustls::record_layer::RecordLayer>::decrypt_incoming
                  (local_230,param_2,&local_170);
        if (local_230 != (undefined1  [8])0xffffffffffffffff) goto LAB_00787b94;
        sVar19 = local_218._2_2_;
        if (local_218._2_2_ != -1) break;
        iVar10 = <rustls::msgs::deframer::handshake::rustls::msgs::deframer::handshake::HandshakeDeframer>
                 ::is_aligned(param_2 + 0x6d);
        if (iVar10 == 0) goto LAB_00787be0;
      }
    }
    uVar9 = local_218._1_1_;
    uVar3 = local_218._4_2_;
    uVar22 = (uint)(byte)local_218;
    local_3d0 = (char *)auStack_228._0_8_;
    local_3c0 = stack0xfffffffffffffde0;
    pcVar6 = local_160;
    if (((ulong)pcStack_210 & 1) != 0) {
                    /* try { // try from 00787a0c to 00787b07 has its CatchHandler @ 00788454 */
      <rustls::common_state::rustls::common_state::CommonState>::send_close_notify(param_2);
      pcVar6 = local_160;
    }
    goto LAB_00787a3c;
  }
  local_130 = (undefined1  [8])(param_2 + 0x6d);
  local_118 = (char *)0x0;
                    /* try { // try from 0078783c to 00787847 has its CatchHandler @ 0078842c */
  auStack_128 = auVar23;
  <rustls::msgs::deframer::handshake::HandshakeIter_as_core::iter::traits::iterator::Iterator>::next
            (local_230,local_130);
  sVar2 = local_21e;
  uVar20 = (int)unaff_x20;
  if (local_21e != -1) {
    auStack_2e8._0_8_ = auStack_228._0_8_;
    local_2f0 = (char *)local_230;
    stack0xfffffffffffffd20 = (char *)CONCAT62(uStack_2de,auStack_228._8_2_);
    local_390 = local_218;
    uVar20 = local_21c;
  }
                    /* try { // try from 00787874 to 0078787b has its CatchHandler @ 00788460 */
  <rustls::msgs::deframer::handshake::HandshakeIter_as_core::ops::drop::Drop>::drop(local_130);
  uStack_370._0_4_ = CONCAT22(sVar2,stack0xfffffffffffffd20);
  uStack_370 = (char *)CONCAT44(uVar20,(undefined4)uStack_370);
  auStack_380._8_8_ = auStack_2e8._0_8_;
  auStack_380._0_8_ = local_2f0;
  local_388 = (char *)0xffffffffffffffff;
  if (sVar2 != -1) goto LAB_00787c18;
  goto LAB_00787ff4;
LAB_00787a1c:
  local_160._1_1_ = (undefined1)((ulong)local_218 >> 8);
  local_160._4_2_ = (undefined2)((ulong)local_218 >> 0x20);
  local_160._2_2_ = (short)((ulong)local_218 >> 0x10);
  local_3d0 = (char *)auStack_228._0_8_;
  local_3c0 = stack0xfffffffffffffde0;
  sVar19 = local_160._2_2_;
  local_170 = (char *)auStack_228._0_8_;
  pcStack_168 = stack0xfffffffffffffde0;
  pcVar6 = local_218;
  uVar3 = local_160._4_2_;
  uVar9 = local_160._1_1_;
LAB_00787a3c:
  local_160 = pcVar6;
  pcVar6 = local_320;
  uVar11 = <rustls::msgs::deframer::handshake::rustls::msgs::deframer::handshake::HandshakeDeframer>
           ::is_aligned(param_2 + 0x6d);
  pcVar7 = stack0xfffffffffffffd20;
  if (uVar22 == 2) {
    uVar11 = 1;
  }
  if ((uVar11 & 1) == 0) {
    uVar9 = 0x1d;
LAB_00788154:
    auStack_380[0] = uVar9;
    local_388 = (char *)0x800000000000001a;
    local_398 = pcVar16;
  }
  else {
    if (local_3c0 == (char *)0x0) {
      if (*(char *)(param_2 + 0x78) == ' ') {
        uVar9 = 0x3f;
        goto LAB_00788154;
      }
      cVar15 = *(char *)(param_2 + 0x78) + '\x01';
    }
    else {
      cVar15 = '\0';
    }
    *(char *)(param_2 + 0x78) = cVar15;
    pcVar16 = pcVar6 + (long)pcVar16;
    stack0xfffffffffffffd20 = CONCAT11(uVar9,(char)uVar22);
    uStack_2de._4_2_ = SUB82(pcVar7,6);
    stack0xfffffffffffffd20 = CONCAT24(uVar3,CONCAT22(sVar19,stack0xfffffffffffffd20));
    local_2f0 = local_3d0 + -(long)pcVar12;
    auStack_2e8._0_8_ = local_2f0 + (long)local_3c0;
    _local_130 = auVar23;
    if (uVar22 != 2) {
                    /* try { // try from 00787ee0 to 00787f5b has its CatchHandler @ 00788460 */
      local_398 = pcVar16;
      <rustls::conn::[9]::rustls::conn::InboundUnborrowedMessage>::reborrow
                (auStack_380,&local_2f0,local_130);
      local_390 = pcVar6;
      goto LAB_00787f5c;
    }
    <rustls::conn::[9]::rustls::conn::InboundUnborrowedMessage>::reborrow
              (local_230,&local_2f0,local_130);
    <rustls::msgs::deframer::handshake::rustls::msgs::deframer::handshake::HandshakeDeframer>::
    input_message(param_2 + 0x6d,local_230,&local_350,pcVar16);
    <rustls::msgs::deframer::handshake::rustls::msgs::deframer::handshake::HandshakeDeframer>::
    coalesce(local_130,param_2 + 0x6d,pcVar12,pcVar14);
    if (local_130[0] == -1) {
      uVar9 = <rustls::msgs::deframer::handshake::rustls::msgs::deframer::handshake::HandshakeDeframer>
              ::is_aligned(param_2 + 0x6d);
      *(undefined1 *)((long)param_2 + 0x331) = uVar9;
      uVar13 = <rustls::msgs::deframer::handshake::rustls::msgs::deframer::handshake::HandshakeDeframer>
               ::has_message_ready(param_2 + 0x6d);
      auVar4._8_8_ = auStack_128._8_8_;
      auVar4._0_8_ = auStack_128._0_8_;
      pcVar7 = pcVar16;
      pcVar6 = local_398;
      if ((uVar13 & 1) != 0) goto LAB_00787f38;
      goto joined_r0x007878c4;
    }
    uStack_370 = (char *)auStack_128._8_8_;
    local_388 = (char *)0x8000000000000014;
    local_398 = pcVar16;
    auStack_380 = _local_130;
  }
  goto LAB_0078816c;
LAB_00787b94:
  pcStack_108 = pcStack_208;
  local_110 = pcStack_210;
  auStack_128._0_8_ = auStack_228._0_8_;
  local_130 = local_230;
  local_118 = local_218;
  auStack_128._8_8_ = stack0xfffffffffffffde0;
  local_100 = pcStack_200;
  local_398 = pcVar16;
  FUN_0078849c(&local_388,param_2,local_130,local_3a8,local_3a0);
  goto LAB_00787bc8;
LAB_00787f38:
  *param_2 = 0;
  local_398 = pcVar16;
  FUN_0078869c(auStack_380,param_2,pcVar12,pcVar14,&local_398);
LAB_00787f5c:
  auVar23._8_8_ = auStack_128._8_8_;
  auVar23._0_8_ = auStack_128._0_8_;
  local_388 = (char *)0xffffffffffffffff;
LAB_00787c08:
  auStack_128 = auVar23;
  sVar2 = uStack_370._2_2_;
  if (uStack_370._2_2_ == -1) goto LAB_00787ff4;
LAB_00787c18:
  local_340 = (undefined2)uStack_370;
  uVar3 = local_340;
  local_340._0_1_ = (char)uStack_370;
  pcStack_348 = (char *)auStack_380._8_8_;
  local_350 = (char *)auStack_380._0_8_;
  local_33c = uStack_370._4_4_;
  local_340 = uVar3;
  local_33e = sVar2;
  if ((((char)local_340 == '\0') && ((*(byte *)((long)param_2 + 0x333) & 1) == 0)) &&
     (*(short *)(param_2 + 0x65) == 5)) {
    if (((undefined1 *)auStack_380._8_8_ == &DAT_00000001) && (*(char *)auStack_380._0_8_ == '\x01')
       ) {
      if (*(char *)((long)param_2 + 0x32f) != '\0') {
        *(char *)((long)param_2 + 0x32f) = *(char *)((long)param_2 + 0x32f) + -1;
        cVar15 = *(char *)((long)param_2 + 0x337);
        local_340 = (undefined2)uStack_370;
        pcVar12 = local_390;
        goto joined_r0x00787c8c;
      }
    }
    else {
      local_78 = CONCAT62(local_78._2_6_,4);
      local_130 = (undefined1  [8])0x8000000000000000;
      auStack_128._0_4_ = 0x10001;
                    /* try { // try from 00787d4c to 00787d57 has its CatchHandler @ 00788440 */
      <rustls::common_state::rustls::common_state::CommonState>::send_msg
                (param_2,local_130,*(char *)((long)param_2 + 0x49) == '\x02');
      *(undefined1 *)((long)param_2 + 0x335) = 1;
    }
    local_330 = (char *)0x800000000000001a;
    auStack_328[0] = 0x15;
LAB_00787d74:
    if ((code *)*local_3a0 != (code *)0x0) {
                    /* try { // try from 00787d7c to 00787d83 has its CatchHandler @ 0078840c */
      (*(code *)*local_3a0)(local_3a8);
    }
    if (local_3a0[1] != 0) {
      free(local_3a8);
    }
  }
  else {
                    /* try { // try from 00787c94 to 00787ca3 has its CatchHandler @ 00788440 */
    <rustls::msgs::message::Message_as_core::convert::TryFrom<rustls::msgs::message::inbound::InboundPlainMessage>>
    ::try_from(local_230,&local_350);
    if (local_230 == (undefined1  [8])&DAT_fffffffffffffffe) {
      local_78 = CONCAT62(local_78._2_6_,4);
      local_140 = local_1f8;
      pcStack_168 = stack0xfffffffffffffde0;
      local_170 = (char *)auStack_228._0_8_;
      pcStack_158 = pcStack_210;
      local_160 = local_218;
      auStack_128._0_4_ = 0x100001;
      pcStack_148 = pcStack_200;
      local_150 = pcStack_208;
      local_130 = (undefined1  [8])0x8000000000000000;
                    /* try { // try from 00787cf4 to 00787cff has its CatchHandler @ 007883f8 */
      <rustls::common_state::rustls::common_state::CommonState>::send_msg
                (param_2,local_130,*(char *)((long)param_2 + 0x49) == '\x02');
      *(undefined1 *)((long)param_2 + 0x335) = 1;
      local_330 = (char *)auStack_228._0_8_;
      pcStack_318 = pcStack_210;
      local_320 = local_218;
      auStack_328 = (undefined1  [8])stack0xfffffffffffffde0;
      pcStack_308 = pcStack_200;
      local_310 = pcStack_208;
      local_300 = local_1f8;
      goto LAB_00787d74;
    }
    uStack_268 = uStack_1a8;
    local_270 = local_1b0;
    uStack_258 = uStack_198;
    uStack_260 = uStack_1a0;
    uStack_248 = uStack_188;
    local_250 = local_190;
    uStack_238 = uStack_178;
    uStack_240 = uStack_180;
    uStack_2a8 = uStack_1e8;
    local_2b0 = local_1f0;
    uStack_298 = uStack_1d8;
    uStack_2a0 = uStack_1e0;
    auStack_2e8._0_8_ = auStack_228._0_8_;
    local_2f0 = (char *)local_230;
    local_2d8 = local_218;
    stack0xfffffffffffffd20 = stack0xfffffffffffffde0;
    uStack_288 = uStack_1c8;
    local_290 = local_1d0;
    uStack_278 = uStack_1b8;
    uStack_280 = uStack_1c0;
    local_2c8 = pcStack_208;
    pcStack_2d0 = pcStack_210;
    pcStack_2b8 = local_1f8;
    pcStack_2c0 = pcStack_200;
    if (local_230 == (undefined1  [8])0x8000000000000000) {
                    /* try { // try from 00787e1c to 00787e2f has its CatchHandler @ 007883d8 */
      <rustls::common_state::rustls::common_state::CommonState>::process_alert
                (local_130,param_2,auStack_2e8);
      if (local_130 == (undefined1  [8])0xffffffffffffffff) {
        FUN_007869a0(&local_2f0);
        cVar15 = *(char *)((long)param_2 + 0x337);
        pcVar12 = local_390;
        goto joined_r0x00787c8c;
      }
      pcStack_308 = pcStack_108;
      local_310 = local_110;
      local_330 = (char *)local_130;
      pcStack_318 = local_118;
      local_300 = local_100;
                    /* try { // try from 00787e54 to 00787e5b has its CatchHandler @ 00788440 */
      _auStack_328 = auStack_128;
      FUN_007869a0(&local_2f0);
      goto LAB_00787d74;
    }
    uStack_a8 = uStack_1a8;
    local_b0 = local_1b0;
    uStack_98 = uStack_198;
    uStack_a0 = uStack_1a0;
    uStack_88 = uStack_188;
    local_90 = local_190;
    local_78 = uStack_178;
    uStack_80 = uStack_180;
    uStack_e8 = uStack_1e8;
    local_f0 = local_1f0;
    uStack_d8 = uStack_1d8;
    uStack_e0 = uStack_1e0;
    uStack_c8 = uStack_1c8;
    local_d0 = local_1d0;
    uStack_b8 = uStack_1b8;
    uStack_c0 = uStack_1c0;
    auStack_128._0_8_ = auStack_228._0_8_;
    local_130 = local_230;
    local_118 = local_218;
    auStack_128._8_8_ = stack0xfffffffffffffde0;
    pcStack_108 = pcStack_208;
    local_110 = pcStack_210;
    pcStack_f8 = local_1f8;
    local_100 = pcStack_200;
    FUN_007b4170(&local_330,param_2,local_130,local_3a8,local_3a0,param_2 + 0x68,param_4);
  }
  if (local_330 != (char *)0xffffffffffffffff) {
                    /* try { // try from 00788044 to 0078804f has its CatchHandler @ 007883a8 */
    local_2f0 = local_330;
    local_2d8 = pcStack_318;
    pcStack_2d0 = local_310;
    local_2c8 = pcStack_308;
    pcStack_2c0 = local_300;
    _auStack_2e8 = _auStack_328;
    FUN_0078a160(local_130,&local_2f0);
    plVar1 = param_2 + 0x71;
    local_230 = local_130;
    local_218 = local_118;
    pcStack_208 = pcStack_108;
    pcStack_210 = local_110;
    pcStack_200 = local_100;
    _auStack_228 = auStack_128;
    if (*plVar1 == -1) {
      puVar21 = (undefined8 *)param_2[0x73];
      pvVar18 = (void *)param_2[0x72];
      pcVar17 = (code *)*puVar21;
      if (pcVar17 != (code *)0x0) {
                    /* try { // try from 007880ec to 007880f3 has its CatchHandler @ 007882cc */
        (*pcVar17)(pvVar18);
      }
      if (puVar21[1] != 0) {
        free(pvVar18);
      }
    }
    else {
                    /* try { // try from 0078807c to 00788083 has its CatchHandler @ 0078833c */
      FUN_00786628(plVar1);
    }
    param_2[0x76] = pcStack_208;
    param_2[0x75] = pcStack_210;
    param_2[0x72] = auStack_228._0_8_;
    *plVar1 = (long)local_230;
    param_2[0x74] = local_218;
    param_2[0x73] = stack0xfffffffffffffde0;
    param_2[0x77] = pcStack_200;
                    /* try { // try from 00788124 to 0078812b has its CatchHandler @ 007883a8 */
    <rustls::msgs::deframer::buffers::[2]::rustls::msgs::deframer::buffers::DeframerVecBuffer>::
    discard(param_3,local_390);
    param_1[5] = (long)local_2c8;
    param_1[4] = (long)pcStack_2d0;
    param_1[1] = auStack_2e8._0_8_;
    *param_1 = (long)local_2f0;
    param_1[3] = (long)local_2d8;
    param_1[2] = (long)stack0xfffffffffffffd20;
    param_1[6] = (long)pcStack_2c0;
    return;
  }
  cVar15 = *(char *)((long)param_2 + 0x337);
  pcVar12 = local_390;
  auVar5 = _auStack_328;
joined_r0x00787c8c:
  if (cVar15 == '\x01') {
    local_390 = pcVar12;
                    /* try { // try from 00787fe4 to 0078800b has its CatchHandler @ 00788480 */
    <rustls::msgs::deframer::buffers::[2]::rustls::msgs::deframer::buffers::DeframerVecBuffer>::
    filled(param_3);
    local_390 = local_390 + extraout_x1;
LAB_00787ff4:
    local_3a8 = auVar5._0_8_;
    bVar8 = local_390 <= local_398;
    pcVar16 = local_398 + -(long)local_390;
    local_398 = (char *)0x0;
    if (bVar8) {
      local_398 = pcVar16;
    }
    local_390 = (char *)0x0;
    <rustls::msgs::deframer::buffers::[2]::rustls::msgs::deframer::buffers::DeframerVecBuffer>::
    discard(param_3);
    if (param_2[0x71] == -1) {
      puVar21 = (undefined8 *)param_2[0x73];
      pvVar18 = (void *)param_2[0x72];
      pcVar17 = (code *)*puVar21;
      if (pcVar17 != (code *)0x0) {
                    /* try { // try from 00788098 to 0078809f has its CatchHandler @ 007882e8 */
        (*pcVar17)(pvVar18);
      }
      if (puVar21[1] != 0) {
        free(pvVar18);
      }
    }
    else {
                    /* try { // try from 00788020 to 00788027 has its CatchHandler @ 0078835c */
      FUN_00786628(param_2 + 0x71);
    }
    param_2[0x72] = local_3a8;
    param_2[0x71] = 0xffffffffffffffff;
    param_2[0x73] = auVar5._8_8_;
    <rustls::common_state::rustls::common_state::CommonState>::current_io_state(param_1 + 1,param_2)
    ;
    *param_1 = -1;
    return;
  }
  local_390 = (char *)0x0;
  pcVar16 = (char *)0x0;
  if (pcVar12 <= local_398) {
    pcVar16 = local_398 + -(long)pcVar12;
  }
  local_398 = pcVar16;
                    /* try { // try from 00787dcc to 00787dd3 has its CatchHandler @ 00788460 */
  <rustls::msgs::deframer::buffers::[2]::rustls::msgs::deframer::buffers::DeframerVecBuffer>::
  discard(param_3);
  unaff_x20 = param_4;
  goto LAB_00787814;
LAB_00787be0:
  local_388 = (char *)0x800000000000001a;
  auStack_380[0] = 0x2a;
  local_398 = pcVar16;
  goto LAB_0078816c;
LAB_00787b18:
  if (local_230 == (undefined1  [8])&DAT_fffffffffffffffe) {
    uStack_370._0_4_ = CONCAT22(0xffff,(undefined2)uStack_370);
    local_388 = (char *)0xffffffffffffffff;
    local_398 = pcVar16;
    auVar23 = auStack_128;
    goto LAB_00787c08;
  }
  auStack_2e8._0_8_ = stack0xfffffffffffffde0;
  local_2f0 = (char *)auStack_228._0_8_;
  stack0xfffffffffffffd20 = local_218;
  pcStack_108 = pcStack_208;
  local_110 = pcStack_210;
  local_100 = pcStack_200;
  local_130 = local_230;
  auStack_128._8_8_ = stack0xfffffffffffffde0;
  auStack_128._0_8_ = auStack_228._0_8_;
  local_118 = local_218;
                    /* try { // try from 00787b78 to 00787bc7 has its CatchHandler @ 00788460 */
  local_398 = pcVar16;
  FUN_0078849c(&local_388,param_2,local_130,local_3a8,local_3a0);
LAB_00787bc8:
  auVar23._8_8_ = auStack_128._8_8_;
  auVar23._0_8_ = auStack_128._0_8_;
  if (local_388 == (char *)0xffffffffffffffff) goto LAB_00787c08;
LAB_0078816c:
  local_2f0 = local_388;
  local_2d8 = uStack_370;
  local_2c8 = (char *)lStack_360;
  pcStack_2d0 = (char *)local_368;
  pcStack_2c0 = (char *)local_358;
                    /* try { // try from 00788188 to 00788193 has its CatchHandler @ 00788394 */
  _auStack_2e8 = auStack_380;
  FUN_0078a160(local_130,&local_2f0);
  local_218 = local_118;
  stack0xfffffffffffffde0 = (char *)auStack_128._8_8_;
  pcStack_208 = pcStack_108;
  pcStack_210 = local_110;
  pcStack_200 = local_100;
  _local_230 = _local_130;
  if (param_2[0x71] == -1) {
    puVar21 = (undefined8 *)param_2[0x73];
    pvVar18 = (void *)param_2[0x72];
    pcVar17 = (code *)*puVar21;
    if (pcVar17 != (code *)0x0) {
                    /* try { // try from 007881dc to 007881e3 has its CatchHandler @ 007882b0 */
      (*pcVar17)(pvVar18);
    }
    if (puVar21[1] != 0) {
      free(pvVar18);
    }
  }
  else {
                    /* try { // try from 007881bc to 007881c3 has its CatchHandler @ 0078831c */
    FUN_00786628();
  }
  param_2[0x76] = pcStack_208;
  param_2[0x75] = pcStack_210;
  bVar8 = local_390 <= local_398;
  pcVar16 = local_398 + -(long)local_390;
  param_2[0x77] = pcStack_200;
  local_398 = (char *)0x0;
  if (bVar8) {
    local_398 = pcVar16;
  }
  *(undefined1 (*) [16])(param_2 + 0x71) = _local_230;
  param_2[0x74] = local_218;
  param_2[0x73] = stack0xfffffffffffffde0;
  local_390 = (char *)0x0;
                    /* try { // try from 00788220 to 00788227 has its CatchHandler @ 00788394 */
  <rustls::msgs::deframer::buffers::[2]::rustls::msgs::deframer::buffers::DeframerVecBuffer>::
  discard(param_3);
  param_1[1] = auStack_2e8._0_8_;
  *param_1 = (long)local_2f0;
  param_1[3] = (long)local_2d8;
  param_1[2] = (long)stack0xfffffffffffffd20;
  param_1[5] = (long)local_2c8;
  param_1[4] = (long)pcStack_2d0;
  param_1[6] = (long)pcStack_2c0;
  if ((code *)*local_3a0 != (code *)0x0) {
                    /* try { // try from 00788250 to 00788257 has its CatchHandler @ 00788318 */
    (*(code *)*local_3a0)(local_3a8);
  }
  if (local_3a0[1] == 0) {
    return;
  }
  free(local_3a8);
  return;
}


// ===== 0078849c  FUN_0078849c =====

void FUN_0078849c(ulong *param_1,long param_2,ulong *param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined2 local_38;
  
  lVar1 = *param_3 + 0x7fffffffffffffef;
  if (*param_3 < 0x8000000000000011) {
    lVar1 = 0xb;
  }
  if (lVar1 == 3) {
    if ((*(byte *)(param_2 + 0x339) & 1) != 0) {
      uVar4 = param_3[1];
      uVar3 = *param_3;
      uVar6 = param_3[3];
      uVar5 = param_3[2];
      *(undefined1 *)(param_2 + 0x2a8) = 0x10;
      goto LAB_00788620;
    }
    local_38 = 4;
    local_f0 = 0x8000000000000000;
    local_e8 = 0x100001;
                    /* try { // try from 00788608 to 00788613 has its CatchHandler @ 00788648 */
    <rustls::common_state::rustls::common_state::CommonState>::send_msg
              (param_2,&local_f0,*(char *)(param_2 + 0x49) == '\x02');
  }
  else if (lVar1 == 6) {
                    /* try { // try from 0078854c to 00788553 has its CatchHandler @ 00788684 */
    (**(code **)(param_5 + 0x38))(param_4);
    local_38 = 4;
    local_f0 = 0x8000000000000000;
    local_e8 = 0x20001;
                    /* try { // try from 00788594 to 0078859f has its CatchHandler @ 0078865c */
    <rustls::common_state::rustls::common_state::CommonState>::send_msg
              (param_2,&local_f0,*(char *)(param_2 + 0x49) == '\x02');
  }
  else {
    if (lVar1 != 0x11) {
      uVar4 = param_3[1];
      uVar3 = *param_3;
      uVar6 = param_3[3];
      uVar5 = param_3[2];
      goto LAB_00788620;
    }
    local_38 = 4;
    local_f0 = 0x8000000000000000;
    local_e8 = 0x40001;
                    /* try { // try from 00788538 to 00788543 has its CatchHandler @ 00788670 */
    <rustls::common_state::rustls::common_state::CommonState>::send_msg
              (param_2,&local_f0,*(char *)(param_2 + 0x49) == '\x02');
  }
  uVar4 = param_3[1];
  uVar3 = *param_3;
  uVar6 = param_3[3];
  uVar5 = param_3[2];
  *(undefined1 *)(param_2 + 0x335) = 1;
LAB_00788620:
  uVar8 = param_3[5];
  uVar7 = param_3[4];
  uVar2 = param_3[6];
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar6;
  param_1[2] = uVar5;
  param_1[5] = uVar8;
  param_1[4] = uVar7;
  param_1[6] = uVar2;
  return;
}


// ===== 0078869c  FUN_0078869c =====

void FUN_0078869c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  long lVar1;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined2 local_50;
  short sStack_4e;
  undefined4 uStack_4c;
  long lStack_48;
  long local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_40 = param_2 + 0x368;
  uStack_28 = 0;
                    /* try { // try from 007886c0 to 007886cb has its CatchHandler @ 0078872c */
  uStack_38 = param_3;
  local_30 = param_4;
  <rustls::msgs::deframer::handshake::HandshakeIter_as_core::iter::traits::iterator::Iterator>::next
            (&local_60,&local_40);
  if (sStack_4e != -1) {
    lVar1 = *(long *)(param_5 + 8);
    param_1[2] = CONCAT44(uStack_4c,CONCAT22(sStack_4e,local_50));
    param_1[1] = uStack_58;
    *param_1 = local_60;
    *(long *)(param_5 + 8) = lVar1 + lStack_48;
    <rustls::msgs::deframer::handshake::HandshakeIter_as_core::ops::drop::Drop>::drop(&local_40);
    return;
  }
  *(undefined2 *)((long)param_1 + 0x12) = 0xffff;
  <rustls::msgs::deframer::handshake::HandshakeIter_as_core::ops::drop::Drop>::drop(&local_40);
  return;
}


// ===== 00788744  FUN_00788744 =====

void FUN_00788744(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long local_98;
  long *plStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  long local_60;
  long lStack_58;
  undefined1 uStack_31;
  
  FUN_007a409c(&local_68,param_2,&uStack_31,param_2[2]);
  lVar2 = lStack_58;
  lVar1 = local_60;
  lVar6 = local_68;
  if ((local_68 == -2) || (local_68 == -1)) {
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 8;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    plVar5 = (long *)FUN_004b25a4(0x60,8);
    if (plVar5 == (long *)0x0) {
                    /* try { // try from 00788884 to 0078888f has its CatchHandler @ 00788894 */
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(8,0x60);
    }
    uStack_78 = param_2[1];
    local_80 = *param_2;
    local_98 = 4;
    local_70 = param_2[2];
    *plVar5 = lVar6;
    plVar5[1] = lVar1;
    plVar5[2] = lVar2;
    local_88 = 1;
    lVar6 = 0;
    plStack_90 = plVar5;
    while( true ) {
      lVar1 = local_88;
                    /* try { // try from 007887f4 to 00788803 has its CatchHandler @ 007888d0 */
      FUN_007a409c(&local_68,&local_80,&uStack_31,local_70);
      lVar4 = lStack_58;
      lVar3 = local_60;
      lVar2 = local_68;
      if ((local_68 == -2) || (local_68 == -1)) break;
      if (lVar1 == local_98) {
                    /* try { // try from 00788828 to 0078883f has its CatchHandler @ 007888b4 */
        FUN_0079be54(&local_98,lVar1,1,8,0x18);
        plVar5 = plStack_90;
      }
      local_88 = lVar1 + 1;
      *(long *)((long)plVar5 + lVar6 + 0x18) = lVar2;
      *(long *)((long)plVar5 + lVar6 + 0x20) = lVar3;
      *(long *)((long)plVar5 + lVar6 + 0x28) = lVar4;
      lVar6 = lVar6 + 0x18;
    }
    param_1[1] = (long)plStack_90;
    *param_1 = local_98;
    param_1[2] = local_88;
  }
  return;
}


// ===== 007888e4  FUN_007888e4 =====

void FUN_007888e4(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long local_98;
  long *plStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  long local_60;
  long lStack_58;
  undefined1 uStack_31;
  
  FUN_007a409c(&local_68,param_2,&uStack_31,param_2[2]);
  lVar2 = lStack_58;
  lVar1 = local_60;
  lVar6 = local_68;
  if ((local_68 == -2) || (local_68 == -1)) {
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 8;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    plVar5 = (long *)FUN_004b25a4(0x60,8);
    if (plVar5 == (long *)0x0) {
                    /* try { // try from 00788a24 to 00788a2f has its CatchHandler @ 00788a34 */
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(8,0x60);
    }
    uStack_78 = param_2[1];
    local_80 = *param_2;
    local_98 = 4;
    local_70 = param_2[2];
    *plVar5 = lVar6;
    plVar5[1] = lVar1;
    plVar5[2] = lVar2;
    local_88 = 1;
    lVar6 = 0;
    plStack_90 = plVar5;
    while( true ) {
      lVar1 = local_88;
                    /* try { // try from 00788994 to 007889a3 has its CatchHandler @ 00788a70 */
      FUN_007a409c(&local_68,&local_80,&uStack_31,local_70);
      lVar4 = lStack_58;
      lVar3 = local_60;
      lVar2 = local_68;
      if ((local_68 == -2) || (local_68 == -1)) break;
      if (lVar1 == local_98) {
                    /* try { // try from 007889c8 to 007889df has its CatchHandler @ 00788a54 */
        FUN_0079be54(&local_98,lVar1,1,8,0x18);
        plVar5 = plStack_90;
      }
      local_88 = lVar1 + 1;
      *(long *)((long)plVar5 + lVar6 + 0x18) = lVar2;
      *(long *)((long)plVar5 + lVar6 + 0x20) = lVar3;
      *(long *)((long)plVar5 + lVar6 + 0x28) = lVar4;
      lVar6 = lVar6 + 0x18;
    }
    param_1[1] = (long)plStack_90;
    *param_1 = local_98;
    param_1[2] = local_88;
  }
  return;
}


// ===== 00788a84  FUN_00788a84 =====

void FUN_00788a84(long *param_1,long *param_2)

{
  size_t *psVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  size_t sVar7;
  long lVar8;
  long lVar9;
  long local_78;
  undefined8 *puStack_70;
  long local_68;
  
  lVar8 = *param_2;
  lVar2 = param_2[1];
  if (lVar8 == lVar2) {
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 8;
  }
  else {
    sVar7 = *(size_t *)(lVar8 + 0x10);
    if (sVar7 == 0) {
      puVar4 = &DAT_00000001;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      puVar5 = (undefined8 *)FUN_004b25a4(0x80,8);
    }
    else {
      pvVar6 = *(void **)(lVar8 + 8);
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      puVar4 = (undefined1 *)FUN_004b25a4(sVar7,1);
      if (puVar4 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(1,sVar7);
      }
      memcpy(puVar4,pvVar6,sVar7);
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      puVar5 = (undefined8 *)FUN_004b25a4(0x80,8);
    }
    if (puVar5 == (undefined8 *)0x0) {
                    /* try { // try from 00788c18 to 00788c23 has its CatchHandler @ 00788c44 */
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(8,0x80);
    }
    lVar8 = lVar8 + 0x18;
    local_78 = 4;
    *puVar5 = 0;
    puVar5[1] = sVar7;
    puVar5[2] = puVar4;
    puVar5[3] = sVar7;
    local_68 = 1;
    puStack_70 = puVar5;
    if (lVar8 != lVar2) {
      lVar9 = 0x38;
      do {
        lVar3 = local_68;
        sVar7 = *(size_t *)(lVar8 + 0x10);
        if (sVar7 == 0) {
          puVar4 = &DAT_00000001;
        }
        else {
          pvVar6 = *(void **)(lVar8 + 8);
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          puVar4 = (undefined1 *)FUN_004b25a4(sVar7,1);
          if (puVar4 == (undefined1 *)0x0) {
                    /* try { // try from 00788c28 to 00788c33 has its CatchHandler @ 00788c80 */
                    /* WARNING: Subroutine does not return */
            alloc::raw_vec::handle_error(1,sVar7);
          }
          memcpy(puVar4,pvVar6,sVar7);
        }
        if (lVar3 == local_78) {
                    /* try { // try from 00788ba0 to 00788bb7 has its CatchHandler @ 00788c64 */
          FUN_0079be54(&local_78,lVar3,1,8,0x20);
          puVar5 = puStack_70;
        }
        lVar8 = lVar8 + 0x18;
        psVar1 = (size_t *)((long)puVar5 + lVar9);
        local_68 = lVar3 + 1;
        lVar9 = lVar9 + 0x20;
        psVar1[-3] = 0;
        psVar1[-2] = sVar7;
        psVar1[-1] = (size_t)puVar4;
        *psVar1 = sVar7;
      } while (lVar8 != lVar2);
    }
    param_1[1] = (long)puStack_70;
    *param_1 = local_78;
    param_1[2] = local_68;
  }
  return;
}


// ===== 00788c94  FUN_00788c94 =====

void FUN_00788c94(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long local_98;
  long *plStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  long local_60;
  long lStack_58;
  undefined1 uStack_31;
  
  FUN_007a3f14(&local_68,param_2,&uStack_31,param_2[2]);
  lVar2 = lStack_58;
  lVar1 = local_60;
  lVar6 = local_68;
  if ((local_68 == -3) || (local_68 == -2)) {
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 8;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    plVar5 = (long *)FUN_004b25a4(0x60,8);
    if (plVar5 == (long *)0x0) {
                    /* try { // try from 00788dd4 to 00788ddf has its CatchHandler @ 00788de4 */
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(8,0x60);
    }
    uStack_78 = param_2[1];
    local_80 = *param_2;
    local_98 = 4;
    local_70 = param_2[2];
    *plVar5 = lVar6;
    plVar5[1] = lVar1;
    plVar5[2] = lVar2;
    local_88 = 1;
    lVar6 = 0;
    plStack_90 = plVar5;
    while( true ) {
      lVar1 = local_88;
                    /* try { // try from 00788d54 to 00788d63 has its CatchHandler @ 00788e28 */
      FUN_007a3f14(&local_68,&local_80,&uStack_31,local_70);
      lVar4 = lStack_58;
      lVar3 = local_60;
      lVar2 = local_68;
      if ((local_68 == -3) || (local_68 == -2)) break;
      if (lVar1 == local_98) {
                    /* try { // try from 00788d88 to 00788d9f has its CatchHandler @ 00788e08 */
        FUN_0079be54(&local_98,lVar1,1,8,0x18);
        plVar5 = plStack_90;
      }
      local_88 = lVar1 + 1;
      *(long *)((long)plVar5 + lVar6 + 0x18) = lVar2;
      *(long *)((long)plVar5 + lVar6 + 0x20) = lVar3;
      *(long *)((long)plVar5 + lVar6 + 0x28) = lVar4;
      lVar6 = lVar6 + 0x18;
    }
    param_1[1] = (long)plStack_90;
    *param_1 = local_98;
    param_1[2] = local_88;
  }
  return;
}


// ===== 00788e3c  FUN_00788e3c =====

void FUN_00788e3c(ulong *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  void *__ptr;
  ushort *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ushort uVar6;
  ushort uVar7;
  long lVar8;
  ushort uVar9;
  undefined4 uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort *puVar13;
  code *pcVar14;
  code *pcVar15;
  ushort uVar16;
  ulong uVar17;
  ulong uVar18;
  ushort uVar19;
  undefined8 uVar20;
  long lVar21;
  ulong local_f8;
  ushort *puStack_f0;
  ulong local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  ushort local_a0;
  undefined4 uStack_9e;
  ushort uStack_9a;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  ushort local_84;
  ushort local_82;
  long local_80 [4];
  
  __ptr = (void *)*param_2;
  puVar4 = (undefined8 *)param_2[1];
  pcVar14 = (code *)puVar4[3];
                    /* try { // try from 00788e6c to 00788e77 has its CatchHandler @ 00789168 */
  (*pcVar14)(&local_a0);
  uVar12 = local_82;
  uVar11 = local_84;
  uVar19 = uStack_9a;
  uVar10 = uStack_9e;
  uVar9 = local_a0;
  if (local_a0 == 2) {
    pcVar14 = (code *)*puVar4;
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 4;
    if (pcVar14 != (code *)0x0) {
                    /* try { // try from 00788e98 to 00788e9f has its CatchHandler @ 00789150 */
      (*pcVar14)(__ptr);
    }
    if (puVar4[1] == 0) {
      return;
    }
    free(__ptr);
    return;
  }
  puVar3 = (ushort *)param_2[2];
  uVar5 = param_2[3];
  uVar6 = *puVar3;
                    /* try { // try from 00788ed4 to 00788edb has its CatchHandler @ 00789168 */
  <http::uri::http::uri::Uri>::port(local_80);
  if (local_80[0] == 0) {
    uVar7 = uVar11;
    if ((uVar9 & 1) == 0) {
      uVar7 = uVar19;
    }
    uVar16 = uVar11;
    if (uVar7 != 0) goto LAB_00788f14;
  }
  uVar16 = uVar6;
  if ((uVar9 & 1) == 0) {
    uVar19 = uVar6;
    uVar16 = uVar11;
  }
LAB_00788f14:
  pcVar15 = (code *)puVar4[4];
  uStack_d8 = uStack_90;
  local_e0 = local_98;
  local_d0 = local_88;
                    /* try { // try from 00788f28 to 00788f37 has its CatchHandler @ 007891a4 */
  (*pcVar15)(&local_a0,__ptr);
  lVar21 = CONCAT26(uStack_9a,CONCAT42(uStack_9e,local_a0));
  uVar20 = 0;
  uVar18 = lVar21 + 1;
  if (lVar21 == -1) {
    uVar18 = 0xffffffffffffffff;
  }
  uVar2 = uVar18;
  if (uVar18 < 5) {
    uVar2 = 4;
  }
  uVar17 = uVar2 * 0x20;
  if ((uVar18 >> 0x3b == 0) && (uVar17 < 0x7ffffffffffffffd)) {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar20 = 4;
    puVar13 = (ushort *)FUN_004b25a4(uVar17,4);
    if (puVar13 != (ushort *)0x0) {
      uVar18 = 1;
      *(undefined4 *)(puVar13 + 0xc) = local_d0;
      *puVar13 = uVar9;
      *(undefined4 *)(puVar13 + 1) = uVar10;
      puVar13[3] = uVar19;
      *(undefined8 *)(puVar13 + 8) = uStack_d8;
      *(undefined8 *)(puVar13 + 4) = local_e0;
      puVar13[0xe] = uVar16;
      puVar13[0xf] = uVar12;
      lVar21 = 0;
      local_f8 = uVar2;
      puStack_f0 = puVar13;
      do {
                    /* try { // try from 00789004 to 0078903b has its CatchHandler @ 00789170 */
        local_e8 = uVar18;
        (*pcVar14)(&local_a0,__ptr);
        uVar12 = local_82;
        uVar11 = local_84;
        uVar19 = uStack_9a;
        uVar10 = uStack_9e;
        uVar9 = local_a0;
        if (local_a0 == 2) {
          if ((code *)*puVar4 != (code *)0x0) {
                    /* try { // try from 007890e0 to 007890e7 has its CatchHandler @ 00789130 */
            (*(code *)*puVar4)(__ptr);
          }
          if (puVar4[1] != 0) {
            free(__ptr);
          }
          param_1[1] = (ulong)puStack_f0;
          *param_1 = local_f8;
          param_1[2] = local_e8;
          return;
        }
        uVar6 = *puVar3;
        <http::uri::http::uri::Uri>::port(local_80,uVar5);
        if (local_80[0] == 0) {
          uVar7 = uVar11;
          if ((uVar9 & 1) == 0) {
            uVar7 = uVar19;
          }
          uVar16 = uVar11;
          if (uVar7 == 0) goto joined_r0x00789064;
        }
        else {
joined_r0x00789064:
          uVar16 = uVar6;
          if ((uVar9 & 1) == 0) {
            uVar19 = uVar6;
            uVar16 = uVar11;
          }
        }
        uStack_b8 = uStack_90;
        local_c0 = local_98;
        local_b0 = local_88;
        if (uVar18 == local_f8) {
                    /* try { // try from 00789090 to 007890bf has its CatchHandler @ 0078916c */
          (*pcVar15)(&local_a0,__ptr);
          lVar8 = CONCAT26(uStack_9a,CONCAT42(uStack_9e,local_a0));
          lVar1 = lVar8 + 1;
          if (lVar8 == -1) {
            lVar1 = -1;
          }
          FUN_0079be54(&local_f8,uVar18,lVar1,4,0x20);
          puVar13 = puStack_f0;
        }
        uVar18 = uVar18 + 1;
        *(ushort *)((long)puVar13 + lVar21 + 0x20) = uVar9;
        *(undefined4 *)((long)puVar13 + lVar21 + 0x22) = uVar10;
        *(ushort *)((long)puVar13 + lVar21 + 0x26) = uVar19;
        *(ushort *)((long)puVar13 + lVar21 + 0x3c) = uVar16;
        *(ushort *)((long)puVar13 + lVar21 + 0x3e) = uVar12;
        *(undefined4 *)((long)puVar13 + lVar21 + 0x38) = local_b0;
        *(undefined8 *)((long)puVar13 + lVar21 + 0x30) = uStack_b8;
        *(undefined8 *)((long)puVar13 + lVar21 + 0x28) = local_c0;
        lVar21 = lVar21 + 0x20;
      } while( true );
    }
  }
                    /* try { // try from 007890c4 to 007890cf has its CatchHandler @ 007891a4 */
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar20,uVar17);
}


// ===== 007891c0  FUN_007891c0 =====

void FUN_007891c0(long *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  void *__src;
  ulong __n;
  long lVar3;
  
  __src = (void *)param_2[1];
  lVar3 = param_1[2];
  __n = (long)param_2[3] - (long)__src;
  uVar2 = (__n >> 3) * -0x5555555555555555;
  if (uVar2 < (ulong)(*param_1 - lVar3) || uVar2 - (*param_1 - lVar3) == 0) {
    if ((void *)param_2[3] == __src) goto LAB_0078922c;
  }
  else {
                    /* try { // try from 00789274 to 0078928b has its CatchHandler @ 00789294 */
    FUN_0079be54(param_1,lVar3,uVar2,8,0x18);
    lVar3 = param_1[2];
  }
  memcpy((void *)(param_1[1] + lVar3 * 0x18),__src,__n);
LAB_0078922c:
  lVar1 = param_2[2];
  param_1[2] = lVar3 + uVar2;
  if (lVar1 != 0) {
    free((void *)*param_2);
    return;
  }
  return;
}


// ===== 007892ac  FUN_007892ac =====

void FUN_007892ac(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [16];
  long local_18;
  
  lVar1 = *(long *)(*param_1 + 8);
  lVar2 = *(long *)(*param_1 + 0x10);
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_40,param_2);
  if (lVar2 != 0) {
    lVar2 = lVar2 * 0x18;
    do {
      local_18 = lVar1;
      <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
                (auStack_40,&local_18,&DAT_00ad8780);
      lVar2 = lVar2 + -0x18;
      lVar1 = lVar1 + 0x18;
    } while (lVar2 != 0);
  }
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 00789324  FUN_00789324 =====

void FUN_00789324(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [16];
  long local_18;
  
  lVar1 = *(long *)(*param_1 + 8);
  lVar2 = *(long *)(*param_1 + 0x10);
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_40,param_2);
  if (lVar2 != 0) {
    lVar2 = lVar2 * 0x12;
    do {
      local_18 = lVar1;
      <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
                (auStack_40,&local_18,&DAT_00ad8700);
      lVar2 = lVar2 + -0x12;
      lVar1 = lVar1 + 0x12;
    } while (lVar2 != 0);
  }
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 0078939c  FUN_0078939c =====

void FUN_0078939c(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [16];
  long local_18;
  
  lVar1 = *(long *)(*param_1 + 8);
  lVar2 = *(long *)(*param_1 + 0x10);
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_40,param_2);
  if (lVar2 != 0) {
    lVar2 = lVar2 << 5;
    do {
      local_18 = lVar1;
      <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
                (auStack_40,&local_18,&DAT_00ad87a0);
      lVar2 = lVar2 + -0x20;
      lVar1 = lVar1 + 0x20;
    } while (lVar2 != 0);
  }
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 00789410  FUN_00789410 =====

void FUN_00789410(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [16];
  long local_18;
  
  lVar1 = *(long *)(*param_1 + 8);
  lVar2 = *(long *)(*param_1 + 0x10);
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_40,param_2);
  if (lVar2 != 0) {
    lVar2 = lVar2 * 0x70;
    do {
      local_18 = lVar1;
      <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
                (auStack_40,&local_18,&DAT_00ad87e0);
      lVar2 = lVar2 + -0x70;
      lVar1 = lVar1 + 0x70;
    } while (lVar2 != 0);
  }
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 00789488  FUN_00789488 =====

void FUN_00789488(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [16];
  long local_18;
  
  lVar1 = *(long *)(*param_1 + 8);
  lVar2 = *(long *)(*param_1 + 0x10);
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_40,param_2);
  if (lVar2 != 0) {
    lVar2 = lVar2 << 5;
    do {
      local_18 = lVar1;
      <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
                (auStack_40,&local_18,&DAT_00ad8800);
      lVar2 = lVar2 + -0x20;
      lVar1 = lVar1 + 0x20;
    } while (lVar2 != 0);
  }
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 007894fc  FUN_007894fc =====

void FUN_007894fc(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [16];
  long local_18;
  
  lVar1 = *(long *)(*param_1 + 8);
  lVar2 = *(long *)(*param_1 + 0x10);
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_40,param_2);
  if (lVar2 != 0) {
    lVar2 = lVar2 << 3;
    do {
      local_18 = lVar1;
      <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
                (auStack_40,&local_18,&DAT_00ad8840);
      lVar2 = lVar2 + -8;
      lVar1 = lVar1 + 8;
    } while (lVar2 != 0);
  }
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 00789570  FUN_00789570 =====

void FUN_00789570(long *param_1,undefined8 param_2)

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
              (auStack_40,&local_18,&DAT_00ad8860);
    lVar3 = local_18;
  }
  local_18 = lVar3;
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 007895e0  FUN_007895e0 =====

undefined1  [16] FUN_007895e0(long param_1,undefined8 *param_2,ulong param_3)

{
  char cVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  void *unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_78 [7];
  
  if (param_3 == 0) {
    uVar4 = 0;
    goto LAB_0078975c;
  }
  if (param_3 == 1) {
    local_90 = *param_2;
    uStack_88 = param_2[1];
    bVar3 = false;
    local_98 = 0;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    unaff_x20 = (void *)FUN_004b25a4(param_3 << 4,8);
    if (unaff_x20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(8,param_3 << 4);
    }
    if (param_3 < 4) {
      uVar5 = 0;
LAB_0078969c:
      uVar4 = uVar5 << 4 | 8;
      lVar6 = param_3 - uVar5;
      param_2 = (undefined8 *)((long)param_2 + uVar4);
      puVar7 = (undefined8 *)((long)unaff_x20 + uVar4);
      do {
        puVar8 = param_2 + -1;
        uVar9 = *param_2;
        lVar6 = lVar6 + -1;
        param_2 = param_2 + 2;
        puVar7[-1] = *puVar8;
        *puVar7 = uVar9;
        puVar7 = puVar7 + 2;
      } while (lVar6 != 0);
    }
    else {
      uVar5 = param_3 & 0x7fffffffffffffc;
      uVar4 = param_3 & 0x7fffffffffffffc;
      puVar7 = param_2 + 4;
      puVar8 = (undefined8 *)((long)unaff_x20 + 0x20);
      do {
        uVar14 = puVar7[1];
        uVar13 = puVar7[2];
        uVar15 = puVar7[3];
        uVar4 = uVar4 - 4;
        uVar9 = puVar7[-4];
        uVar11 = puVar7[-3];
        uVar10 = puVar7[-2];
        uVar12 = puVar7[-1];
        *puVar8 = *puVar7;
        puVar8[1] = uVar14;
        puVar8[2] = uVar13;
        puVar8[3] = uVar15;
        puVar8[-4] = uVar9;
        puVar8[-3] = uVar11;
        puVar8[-2] = uVar10;
        puVar8[-1] = uVar12;
        puVar7 = puVar7 + 8;
        puVar8 = puVar8 + 8;
      } while (uVar4 != 0);
      if (param_3 != uVar5) goto LAB_0078969c;
    }
                    /* try { // try from 007896c8 to 007896d7 has its CatchHandler @ 00789788 */
    <rustls::msgs::message::outbound::rustls::msgs::message::outbound::OutboundChunks>::new
              (&local_98,unaff_x20,param_3);
    bVar3 = true;
  }
                    /* try { // try from 007896dc to 00789747 has its CatchHandler @ 00789790 */
  uVar4 = <rustls::common_state::rustls::common_state::CommonState>::buffer_plaintext
                    (param_1,&local_98,param_1 + 0x3c8);
  cVar1 = *(char *)(param_1 + 0x33b);
  *(undefined1 *)(param_1 + 0x33b) = 0;
  if (cVar1 == '\x01') {
    if (*(long *)(param_1 + 0x388) == -1) {
      (**(code **)(*(long *)(param_1 + 0x398) + 0x30))
                (local_78,*(undefined8 *)(param_1 + 0x390),param_1);
    }
    else {
      FUN_0078a160(local_78,param_1 + 0x388);
    }
    if (local_78[0] != -1) {
      FUN_00786628(local_78);
    }
  }
  if (bVar3) {
    free(unaff_x20);
  }
LAB_0078975c:
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4;
  return auVar2 << 0x40;
}


// ===== 007897b4  FUN_007897b4 =====

undefined1  [16] FUN_007897b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_58 = 0;
  local_50 = param_2;
  uStack_48 = param_3;
  uVar3 = <rustls::common_state::rustls::common_state::CommonState>::buffer_plaintext
                    (param_1,&local_58,param_1 + 0x3c8);
  cVar1 = *(char *)(param_1 + 0x33b);
  *(undefined1 *)(param_1 + 0x33b) = 0;
  if (cVar1 == '\x01') {
    if (*(long *)(param_1 + 0x388) == -1) {
      (**(code **)(*(long *)(param_1 + 0x398) + 0x30))
                (&local_58,*(undefined8 *)(param_1 + 0x390),param_1);
    }
    else {
      FUN_0078a160(&local_58,param_1 + 0x388);
    }
    if (local_58 != -1) {
      FUN_00786628(&local_58);
    }
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar3;
  return auVar2 << 0x40;
}


// ===== 0078985c  FUN_0078985c =====

void FUN_0078985c(ulong *param_1,long param_2,long param_3)

{
  undefined1 *__dest;
  size_t sVar1;
  undefined8 uVar2;
  size_t __n;
  void *__src;
  ulong uVar3;
  undefined8 *puVar4;
  size_t *psVar5;
  ulong local_78;
  ulong uStack_70;
  
  local_78 = param_3 - param_2;
  if (local_78 < 0x7ffffffffffffff9) {
    if (param_3 == param_2) {
      local_78 = 0;
      uStack_70 = 8;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar2 = 8;
      uStack_70 = FUN_004b25a4(local_78,8);
      if (uStack_70 == 0) goto LAB_00789890;
      uVar3 = 0;
      puVar4 = (undefined8 *)(uStack_70 + 8);
      psVar5 = (size_t *)(param_2 + 0x10);
      uVar2 = 1;
      local_78 = local_78 / 0x18;
      do {
        if (psVar5[-2] == 0xffffffffffffffff) {
          __dest = (undefined1 *)psVar5[-1];
          __n = *psVar5;
          sVar1 = 0xffffffffffffffff;
        }
        else {
          __n = *psVar5;
          if ((long)__n < 0) {
            uVar2 = 0;
LAB_00789964:
                    /* try { // try from 00789964 to 0078996f has its CatchHandler @ 007899ac */
                    /* WARNING: Subroutine does not return */
            alloc::raw_vec::handle_error(uVar2,__n);
          }
          if (__n == 0) {
            sVar1 = 0;
            __dest = &DAT_00000001;
          }
          else {
            __src = (void *)psVar5[-1];
            __rustc::__rust_no_alloc_shim_is_unstable_v2();
            __dest = (undefined1 *)FUN_004b25a4(__n,1);
            if (__dest == (undefined1 *)0x0) goto LAB_00789964;
            memcpy(__dest,__src,__n);
            sVar1 = __n;
          }
        }
        uVar3 = uVar3 + 1;
        puVar4[-1] = sVar1;
        *puVar4 = __dest;
        psVar5 = psVar5 + 3;
        puVar4[1] = __n;
        puVar4 = puVar4 + 3;
      } while (local_78 != uVar3);
    }
    param_1[1] = uStack_70;
    *param_1 = local_78;
    param_1[2] = local_78;
    return;
  }
  uVar2 = 0;
LAB_00789890:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar2,local_78);
}


// ===== 007899c4  FUN_007899c4 =====

void FUN_007899c4(ulong *param_1,long param_2)

{
  undefined1 *__dest;
  void *pvVar1;
  long lVar2;
  undefined8 uVar3;
  size_t __n;
  void *__src;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  size_t *psVar7;
  undefined1 auVar8 [16];
  ulong local_78;
  undefined1 *puStack_70;
  
  uVar4 = *(ulong *)(param_2 + 0x10);
  lVar2 = uVar4 * 0x18;
  if (uVar4 < 0x555555555555556) {
    if (lVar2 == 0) {
      local_78 = 0;
      puStack_70 = &DAT_00000008;
    }
    else {
      lVar6 = *(long *)(param_2 + 8);
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar3 = 8;
      auVar8 = FUN_004b25a4(lVar2,8);
      puStack_70 = auVar8._0_8_;
      if (puStack_70 == (undefined1 *)0x0) goto LAB_00789a04;
      local_78 = uVar4;
      if (uVar4 != 0) {
        uVar5 = 0;
        uVar3 = 1;
        psVar7 = (size_t *)(puStack_70 + 0x10);
        do {
          pvVar1 = auVar8._0_8_;
          if (lVar2 == 0) break;
          __n = *(size_t *)(lVar6 + 0x10);
          if ((long)__n < 0) {
            uVar3 = 0;
            __n = auVar8._8_8_;
LAB_00789ae8:
                    /* try { // try from 00789ae8 to 00789aef has its CatchHandler @ 00789afc */
                    /* WARNING: Subroutine does not return */
            alloc::raw_vec::handle_error(uVar3,__n);
          }
          if (__n == 0) {
            __dest = &DAT_00000001;
          }
          else {
            __src = *(void **)(lVar6 + 8);
            __rustc::__rust_no_alloc_shim_is_unstable_v2(pvVar1,auVar8._8_8_);
            __dest = (undefined1 *)FUN_004b25a4(__n,1);
            if (__dest == (undefined1 *)0x0) goto LAB_00789ae8;
            pvVar1 = memcpy(__dest,__src,__n);
          }
          auVar8._8_8_ = __dest;
          auVar8._0_8_ = pvVar1;
          uVar5 = uVar5 + 1;
          lVar6 = lVar6 + 0x18;
          lVar2 = lVar2 + -0x18;
          psVar7[-2] = __n;
          psVar7[-1] = (size_t)__dest;
          *psVar7 = __n;
          psVar7 = psVar7 + 3;
        } while (uVar4 != uVar5);
      }
    }
    param_1[1] = (ulong)puStack_70;
    *param_1 = local_78;
    param_1[2] = uVar4;
    return;
  }
  uVar3 = 0;
LAB_00789a04:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar3,lVar2);
}


// ===== 00789b14  FUN_00789b14 =====

void FUN_00789b14(ulong *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong local_a8;
  ulong uStack_a0;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined7 uStack_47;
  
  uVar5 = *(ulong *)(param_2 + 0x10);
  lVar2 = uVar5 * 0x48;
  if (uVar5 < 0x1c71c71c71c71c8) {
    if (lVar2 == 0) {
      local_a8 = 0;
      uStack_a0 = 8;
    }
    else {
      puVar6 = *(undefined8 **)(param_2 + 8);
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar3 = 8;
      uStack_a0 = FUN_004b25a4(lVar2,8);
      if (uStack_a0 == 0) goto LAB_00789b54;
      local_a8 = uVar5;
      if (uVar5 != 0) {
        uVar4 = 0;
        puVar7 = (undefined8 *)(uStack_a0 + 0x20);
        do {
          if (lVar2 == 0) break;
                    /* try { // try from 00789ba4 to 00789baf has its CatchHandler @ 00789c24 */
          (**(code **)puVar6[4])(&local_68,puVar6 + 7,puVar6[5],puVar6[6]);
          local_48 = *(undefined1 *)(puVar6 + 8);
          puVar1 = puVar6 + 1;
          uVar3 = *puVar6;
          uVar9 = puVar6[3];
          uVar8 = puVar6[2];
          uVar4 = uVar4 + 1;
          puVar6 = puVar6 + 9;
          lVar2 = lVar2 + -0x48;
          puVar7[-3] = *puVar1;
          puVar7[-4] = uVar3;
          puVar7[-1] = uVar9;
          puVar7[-2] = uVar8;
          puVar7[1] = uStack_60;
          *puVar7 = local_68;
          puVar7[3] = uStack_50;
          puVar7[2] = local_58;
          puVar7[4] = CONCAT71(uStack_47,local_48);
          puVar7 = puVar7 + 9;
        } while (uVar5 != uVar4);
      }
    }
    param_1[1] = uStack_a0;
    *param_1 = local_a8;
    param_1[2] = uVar5;
    return;
  }
  uVar3 = 0;
LAB_00789b54:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar3,lVar2);
}


// ===== 00789c40  FUN_00789c40 =====

void FUN_00789c40(ulong *param_1,long param_2)

{
  ulong *puVar1;
  undefined1 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  undefined1 auVar15 [16];
  ulong local_118;
  ulong uStack_110;
  ulong local_e0;
  undefined7 uStack_d8;
  undefined1 uStack_d1;
  undefined7 uStack_d0;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  ulong local_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 local_70;
  undefined7 uStack_6f;
  
  uVar10 = *(ulong *)(param_2 + 0x10);
  lVar7 = uVar10 * 0x68;
  if (uVar10 < 0x13b13b13b13b13c) {
    if (lVar7 == 0) {
      local_118 = 0;
      uStack_110 = 8;
    }
    else {
      plVar11 = *(long **)(param_2 + 8);
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar8 = 8;
      uStack_110 = FUN_004b25a4(lVar7,8);
      if (uStack_110 == 0) goto LAB_00789c84;
      local_118 = uVar10;
      if (uVar10 != 0) {
        lVar12 = 0;
        uVar9 = 0;
        plVar14 = plVar11;
        do {
          if (lVar7 - lVar12 == 0) break;
          lVar5 = plVar14[0xc];
          if ((undefined8 *)plVar14[8] == (undefined8 *)0x0) {
            uVar13 = 0;
            uVar2 = *(undefined1 *)((long)plVar11 + lVar12 + 0x48);
          }
          else {
                    /* try { // try from 00789d50 to 00789d5b has its CatchHandler @ 00789e0c */
            (**(code **)plVar14[8])
                      (&local_90,(long)plVar11 + lVar12 + 0x58,
                       *(undefined8 *)((long)plVar11 + lVar12 + 0x48),
                       *(undefined8 *)((long)plVar11 + lVar12 + 0x50));
            local_e0 = CONCAT17(uStack_80,uStack_87);
            uStack_d8 = uStack_7f;
            uStack_d1 = uStack_78;
            uStack_d0 = uStack_77;
            uVar13 = local_90;
            uVar2 = uStack_88;
          }
          uStack_a7 = (undefined7)local_e0;
          uStack_a0 = (undefined1)(local_e0 >> 0x38);
                    /* try { // try from 00789dac to 00789db7 has its CatchHandler @ 00789e14 */
          auVar15 = (**(code **)plVar14[3])(&local_90,plVar14 + 6,plVar14[4],plVar14[5]);
          lVar6 = *plVar14;
          local_70 = (undefined1)plVar14[7];
          if (lVar6 == 1) {
            auVar15 = *(undefined1 (*) [16])((long)plVar11 + lVar12 + 8);
          }
          uVar4 = CONCAT71(uStack_d0,uStack_d1);
          uVar3 = CONCAT71(uStack_d8,uStack_a0);
          puVar1 = (ulong *)(uStack_110 + lVar12);
          *(undefined1 (*) [16])(puVar1 + 1) = auVar15;
          uVar9 = uVar9 + 1;
          plVar14 = plVar14 + 0xd;
          lVar12 = lVar12 + 0x68;
          *puVar1 = (ulong)(lVar6 == 1);
          uStack_d8 = (undefined7)CONCAT71(uStack_87,uStack_88);
          uStack_d1 = (undefined1)((uint7)uStack_87 >> 0x30);
          local_e0 = local_90;
          uStack_d0 = (undefined7)CONCAT71(uStack_7f,uStack_80);
          puVar1[6] = CONCAT71(uStack_77,uStack_78);
          puVar1[5] = CONCAT71(uStack_7f,uStack_80);
          puVar1[4] = CONCAT71(uStack_87,uStack_88);
          puVar1[3] = local_90;
          puVar1[7] = CONCAT71(uStack_6f,local_70);
          puVar1[9] = CONCAT71(uStack_a7,uVar2);
          puVar1[8] = uVar13;
          puVar1[0xb] = uVar4;
          puVar1[10] = uVar3;
          *(short *)(puVar1 + 0xc) = (short)lVar5;
        } while (uVar10 != uVar9);
      }
    }
    param_1[1] = uStack_110;
    *param_1 = local_118;
    param_1[2] = uVar10;
    return;
  }
  uVar8 = 0;
LAB_00789c84:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar8,lVar7);
}


// ===== 00789e4c  FUN_00789e4c =====

void FUN_00789e4c(ulong *param_1,long param_2)

{
  undefined1 *__dest;
  undefined1 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *__n;
  void *__src;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong local_78;
  ulong uStack_70;
  
  uVar5 = *(ulong *)(param_2 + 0x10);
  lVar2 = uVar5 * 0x18;
  if (uVar5 < 0x555555555555556) {
    if (lVar2 == 0) {
      local_78 = 0;
      uStack_70 = 8;
    }
    else {
      puVar4 = *(undefined1 **)(param_2 + 8);
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar3 = 8;
      uStack_70 = FUN_004b25a4(lVar2,8);
      if (uStack_70 == 0) goto LAB_00789e8c;
      local_78 = uVar5;
      if (uVar5 != 0) {
        uVar6 = 0;
        puVar7 = (undefined8 *)(uStack_70 + 8);
        puVar8 = (undefined8 *)(puVar4 + 0x10);
        uVar3 = 1;
        do {
          if (lVar2 == 0) break;
          if (puVar8[-2] == -1) {
            __dest = (undefined1 *)puVar8[-1];
            __n = (undefined1 *)*puVar8;
            puVar1 = (undefined1 *)0xffffffffffffffff;
          }
          else {
            __n = (undefined1 *)*puVar8;
            if ((long)__n < 0) {
              uVar3 = 0;
              __n = puVar4;
LAB_00789f94:
                    /* try { // try from 00789f94 to 00789f9f has its CatchHandler @ 00789fac */
                    /* WARNING: Subroutine does not return */
              alloc::raw_vec::handle_error(uVar3,__n);
            }
            if (__n == (undefined1 *)0x0) {
              puVar1 = (undefined1 *)0x0;
              puVar4 = &DAT_00000001;
              __dest = &DAT_00000001;
            }
            else {
              __src = (void *)puVar8[-1];
              __rustc::__rust_no_alloc_shim_is_unstable_v2();
              __dest = (undefined1 *)FUN_004b25a4(__n,1);
              if (__dest == (undefined1 *)0x0) goto LAB_00789f94;
              memcpy(__dest,__src,(size_t)__n);
              puVar1 = __n;
              puVar4 = __dest;
            }
          }
          uVar6 = uVar6 + 1;
          puVar7[-1] = puVar1;
          *puVar7 = __dest;
          puVar8 = puVar8 + 3;
          puVar7[1] = __n;
          puVar7 = puVar7 + 3;
          lVar2 = lVar2 + -0x18;
        } while (uVar5 != uVar6);
      }
    }
    param_1[1] = uStack_70;
    *param_1 = local_78;
    param_1[2] = uVar5;
    return;
  }
  uVar3 = 0;
LAB_00789e8c:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar3,lVar2);
}


// ===== 00789fc4  FUN_00789fc4 =====

void FUN_00789fc4(ulong *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined2 uVar2;
  long lVar3;
  undefined1 *__dest;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 *__n;
  long *plVar8;
  void *__src;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  undefined1 auVar13 [16];
  ulong local_78;
  ulong uStack_70;
  
  uVar9 = *(ulong *)(param_2 + 0x10);
  uVar6 = uVar9 * 0x20;
  if (uVar9 >> 0x3b != 0 || 0x7ffffffffffffff8 < uVar6) {
    uVar7 = 0;
LAB_0078a004:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar7,uVar6);
  }
  if (uVar6 == 0) {
    local_78 = 0;
    uStack_70 = 8;
  }
  else {
    plVar8 = *(long **)(param_2 + 8);
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar7 = 8;
    auVar13 = FUN_004b25a4(uVar6,8);
    __dest = auVar13._8_8_;
    uStack_70 = auVar13._0_8_;
    if (uStack_70 == 0) goto LAB_0078a004;
    local_78 = uVar9;
    if (uVar9 != 0) {
      lVar12 = 0;
      uVar11 = 0;
      plVar10 = plVar8;
      do {
        if (uVar6 - lVar12 == 0) break;
        lVar3 = plVar10[3];
        uVar2 = *(undefined2 *)((long)plVar10 + 0x1a);
        if (*plVar10 == -1) {
          puVar5 = *(undefined1 **)((long)plVar8 + lVar12 + 8);
          __n = *(undefined1 **)((long)plVar8 + lVar12 + 0x10);
          puVar4 = (undefined1 *)0xffffffffffffffff;
        }
        else {
          __n = *(undefined1 **)((long)plVar8 + lVar12 + 0x10);
          if ((long)__n < 0) {
            uVar7 = 0;
LAB_0078a134:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0078a134 to 0078a137 has its CatchHandler @ 0078a148 */
            alloc::raw_vec::handle_error(uVar7,__dest);
          }
          if (__n == (undefined1 *)0x0) {
            puVar4 = (undefined1 *)0x0;
            __dest = &DAT_00000001;
            puVar5 = &DAT_00000001;
          }
          else {
            __src = *(void **)((long)plVar8 + lVar12 + 8);
            __rustc::__rust_no_alloc_shim_is_unstable_v2(uStack_70,__dest);
            __dest = (undefined1 *)FUN_004b25a4(__n,1);
            if (__dest == (undefined1 *)0x0) {
              uVar7 = 1;
              __dest = __n;
              goto LAB_0078a134;
            }
            memcpy(__dest,__src,(size_t)__n);
            puVar4 = __n;
            puVar5 = __dest;
          }
        }
        uVar11 = uVar11 + 1;
        puVar1 = (undefined8 *)(uStack_70 + lVar12);
        plVar10 = plVar10 + 4;
        lVar12 = lVar12 + 0x20;
        *puVar1 = puVar4;
        puVar1[1] = puVar5;
        puVar1[2] = __n;
        *(short *)(puVar1 + 3) = (short)lVar3;
        *(undefined2 *)((long)puVar1 + 0x1a) = uVar2;
      } while (uVar9 != uVar11);
    }
  }
  param_1[1] = uStack_70;
  *param_1 = local_78;
  param_1[2] = uVar9;
  return;
}


// ===== 0078a160  FUN_0078a160 =====

void FUN_0078a160(undefined8 param_1,ulong *param_2)

{
  long lVar1;
  
  lVar1 = *param_2 + 0x7fffffffffffffef;
  if (*param_2 < 0x8000000000000011) {
    lVar1 = 0xb;
  }
                    /* WARNING: Could not recover jumptable at 0x0078a1bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_0078a1c0 + (ulong)*(ushort *)(&DAT_002e2a2e + lVar1 * 2) * 4))();
  return;
}


// ===== 0078aa8c  FUN_0078aa8c =====

void FUN_0078aa8c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  for (lVar2 = *(long *)(param_1 + 0x10); lVar2 != 0; lVar2 = lVar2 + -1) {
    if (*(long *)(lVar1 + 0x40) != 0) {
                    /* try { // try from 0078aae0 to 0078aae7 has its CatchHandler @ 0078aafc */
      (**(code **)(*(long *)(lVar1 + 0x40) + 0x20))
                (lVar1 + 0x58,*(undefined8 *)(lVar1 + 0x48),*(undefined8 *)(lVar1 + 0x50));
    }
                    /* try { // try from 0078aabc to 0078aac3 has its CatchHandler @ 0078ab1c */
    (**(code **)(*(long *)(lVar1 + 0x18) + 0x20))
              (lVar1 + 0x30,*(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x28));
    lVar1 = lVar1 + 0x68;
  }
  return;
}


// ===== 0078ab48  FUN_0078ab48 =====

void FUN_0078ab48(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    do {
      if ((puVar2[-1] != -1) && (puVar2[-1] != 0)) {
        free((void *)*puVar2);
      }
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 3;
    } while (lVar1 != 0);
  }
  return;
}


// ===== 0078aba0  FUN_0078aba0 =====

void FUN_0078aba0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    do {
      if (puVar2[-1] != 0) {
        free((void *)*puVar2);
      }
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 3;
    } while (lVar1 != 0);
  }
  return;
}


// ===== 0078abf0  FUN_0078abf0 =====

void FUN_0078abf0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    do {
      FUN_00786e74(lVar1);
      lVar2 = lVar2 + -1;
      lVar1 = lVar1 + 0x40;
    } while (lVar2 != 0);
  }
  return;
}


// ===== 0078ac28  FUN_0078ac28 =====

void FUN_0078ac28(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    do {
      FUN_00787200(lVar1);
      lVar2 = lVar2 + -1;
      lVar1 = lVar1 + 0x28;
    } while (lVar2 != 0);
  }
  return;
}


// ===== 0078ac60  FUN_0078ac60 =====

void FUN_0078ac60(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    do {
      FUN_00787344(lVar1);
      lVar2 = lVar2 + -1;
      lVar1 = lVar1 + 0x20;
    } while (lVar2 != 0);
  }
  return;
}


// ===== 0078ac98  FUN_0078ac98 =====

void FUN_0078ac98(long param_1)

{
  long *__ptr;
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    lVar5 = *(long *)(param_1 + 8);
    lVar4 = 0;
    do {
      plVar6 = (long *)(lVar5 + lVar4 * 0x30);
      if (plVar6[3] != -1 && plVar6[3] != 0) {
        free((void *)plVar6[4]);
      }
      __ptr = (long *)plVar6[1];
      lVar7 = plVar6[2];
      if (lVar7 != 0) {
        lVar8 = 0;
        plVar9 = __ptr;
        do {
          lVar2 = *plVar9;
          if (lVar2 == -2) {
            lVar2 = plVar9[1];
            if (lVar2 != -1) {
              plVar1 = __ptr + lVar8 * 4 + 1;
              goto joined_r0x0078ad50;
            }
          }
          else {
            plVar1 = plVar9;
            if (lVar2 != -1) {
joined_r0x0078ad50:
              if (lVar2 != 0) {
                free((void *)plVar1[1]);
              }
            }
          }
          lVar7 = lVar7 + -1;
          plVar9 = plVar9 + 4;
          lVar8 = lVar8 + 1;
        } while (lVar7 != 0);
      }
      if (*plVar6 != 0) {
        free(__ptr);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != lVar3);
  }
  return;
}


// ===== 0078ad9c  FUN_0078ad9c =====

void FUN_0078ad9c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    do {
      FUN_00787428(lVar1);
      lVar2 = lVar2 + -1;
      lVar1 = lVar1 + 0x70;
    } while (lVar2 != 0);
  }
  return;
}


// ===== 0078add4  FUN_0078add4 =====

void FUN_0078add4(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    do {
      if (puVar2[-1] != 0) {
        free((void *)*puVar2);
      }
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 3;
    } while (lVar1 != 0);
  }
  return;
}


// ===== 0078ae24  FUN_0078ae24 =====

void FUN_0078ae24(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != 0) {
    puVar6 = *(ulong **)(param_1 + 8);
    lVar5 = 0;
    puVar7 = puVar6;
    do {
      uVar2 = *puVar7;
      uVar3 = uVar2 ^ 0x8000000000000000;
      if (3 < uVar3) {
        uVar3 = 4;
      }
      if ((long)uVar3 < 2) {
        if (uVar3 != 0) {
          if (uVar3 == 1) goto LAB_0078aeac;
LAB_0078ae88:
          puVar1 = puVar7;
          if (uVar2 != 0xffffffffffffffff) goto joined_r0x0078ae94;
        }
      }
      else if (uVar3 != 2) {
        if (uVar3 != 3) goto LAB_0078ae88;
LAB_0078aeac:
        uVar2 = puVar7[1];
        puVar1 = puVar6 + lVar5 * 4 + 1;
joined_r0x0078ae94:
        if (uVar2 != 0) {
          free((void *)puVar1[1]);
        }
      }
      lVar4 = lVar4 + -1;
      puVar7 = puVar7 + 4;
      lVar5 = lVar5 + 1;
    } while (lVar4 != 0);
  }
  return;
}


// ===== 0078aee0  FUN_0078aee0 =====

void FUN_0078aee0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    do {
      if (((ulong)puVar2[-1] < 0xfffffffffffffffe) && (puVar2[-1] != 0)) {
        free((void *)*puVar2);
      }
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 4;
    } while (lVar1 != 0);
  }
  return;
}


// ===== 0078af38  FUN_0078af38 =====

void FUN_0078af38(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10) + 1;
  lVar1 = *(long *)(param_1 + 8) + 0x18;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 0078af6c to 0078af6f has its CatchHandler @ 0078af88 */
    (**(code **)(*(long *)(lVar1 + -0x18) + 0x20))
              (lVar1,*(undefined8 *)(lVar1 + -0x10),*(undefined8 *)(lVar1 + -8));
    lVar1 = lVar1 + 0x28;
  }
  return;
}


// ===== 0078afc0  FUN_0078afc0 =====

void FUN_0078afc0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [16];
  long local_18;
  
  lVar1 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_40,param_2);
  if (lVar2 != 0) {
    lVar2 = lVar2 * 0x88;
    do {
      local_18 = lVar1;
      <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
                (auStack_40,&local_18,&DAT_00ad8720);
      lVar2 = lVar2 + -0x88;
      lVar1 = lVar1 + 0x88;
    } while (lVar2 != 0);
  }
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 0078b034  FUN_0078b034 =====

void FUN_0078b034(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [16];
  long local_18;
  
  lVar1 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_40,param_2);
  if (lVar2 != 0) {
    lVar2 = lVar2 << 1;
    do {
      local_18 = lVar1;
      <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
                (auStack_40,&local_18,&DAT_00ad8740);
      lVar2 = lVar2 + -2;
      lVar1 = lVar1 + 2;
    } while (lVar2 != 0);
  }
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 0078b0a4  FUN_0078b0a4 =====

void FUN_0078b0a4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [16];
  long local_18;
  
  lVar1 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_40,param_2);
  if (lVar2 != 0) {
    lVar2 = lVar2 << 1;
    do {
      local_18 = lVar1;
      <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
                (auStack_40,&local_18,&DAT_00ad8760);
      lVar2 = lVar2 + -2;
      lVar1 = lVar1 + 2;
    } while (lVar2 != 0);
  }
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 0078b114  FUN_0078b114 =====

void FUN_0078b114(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [16];
  long local_18;
  
  lVar1 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_40,param_2);
  if (lVar2 != 0) {
    lVar2 = lVar2 * 0x98;
    do {
      local_18 = lVar1;
      <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
                (auStack_40,&local_18,&DAT_00ad87c0);
      lVar2 = lVar2 + -0x98;
      lVar1 = lVar1 + 0x98;
    } while (lVar2 != 0);
  }
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 0078b188  FUN_0078b188 =====

void FUN_0078b188(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_40 [16];
  long local_18;
  
  lVar1 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_40,param_2);
  lVar3 = local_18;
  for (; local_18 = lVar1, lVar2 != 0; lVar2 = lVar2 + -1) {
    lVar1 = local_18 + 1;
    <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
              (auStack_40,&local_18,&DAT_00ad8860);
    lVar3 = local_18;
  }
  local_18 = lVar3;
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 0078b1f4  FUN_0078b1f4 =====

void FUN_0078b1f4(ulong *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  
  uVar8 = param_1[3];
  if (uVar8 == 0) {
    uVar7 = 0;
    uVar12 = 0;
LAB_0078b308:
    for (; uVar12 < uVar8; uVar12 = uVar12 + 1) {
      while( true ) {
        if (param_1[3] <= uVar12) {
                    /* WARNING: Subroutine does not return */
          core::option::expect_failed
                    ("out of bounds access",0x14,&PTR_s__nix_store_8006w282fgsx3273c878b_00adc0e0);
        }
        uVar10 = 0;
        if (*param_1 <= uVar12 + param_1[2]) {
          uVar10 = *param_1;
        }
        if (*(char *)(*(long *)(param_1[1] + (uVar12 + (param_1[2] - uVar10)) * 8) + 0x80) != '\0')
        break;
        if (param_1[3] <= uVar7) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("assertion failed: i < self.len()",0x20,
                     &PTR_s__nix_store_8006w282fgsx3273c878b_00adc3e0);
        }
        if (param_1[3] <= uVar12) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    (&DAT_002bfa08,0x20,&PTR_s__nix_store_8006w282fgsx3273c878b_00adc3f8);
        }
        uVar3 = param_1[1];
        uVar5 = param_1[2];
        uVar11 = *param_1;
        uVar10 = uVar5 + uVar7;
        uVar7 = uVar7 + 1;
        uVar4 = 0;
        if (uVar11 <= uVar10) {
          uVar4 = uVar11;
        }
        uVar2 = 0;
        if (uVar11 <= uVar5 + uVar12) {
          uVar2 = uVar11;
        }
        lVar9 = uVar10 - uVar4;
        lVar1 = (uVar5 - uVar2) + uVar12;
        uVar12 = uVar12 + 1;
        uVar13 = *(undefined8 *)(uVar3 + lVar9 * 8);
        *(undefined8 *)(uVar3 + lVar9 * 8) = *(undefined8 *)(uVar3 + lVar1 * 8);
        *(undefined8 *)(uVar3 + lVar1 * 8) = uVar13;
        if (uVar8 <= uVar12) goto LAB_0078b310;
      }
    }
LAB_0078b310:
    if ((uVar12 != uVar7) && (uVar8 = param_1[3], uVar7 < uVar8)) {
      uVar4 = param_1[1];
      uVar10 = *param_1;
      param_1[3] = uVar7;
      uVar12 = 0;
      if (uVar10 <= param_1[2]) {
        uVar12 = uVar10;
      }
      lVar9 = param_1[2] - uVar12;
      uVar12 = uVar10 - lVar9;
      lVar1 = 0;
      if (uVar12 <= uVar8) {
        lVar1 = uVar8 - uVar12;
      }
      if (uVar8 <= uVar12) {
        uVar10 = lVar9 + uVar8;
      }
      uVar10 = uVar10 - lVar9;
      lVar6 = uVar7 - uVar10;
      if (uVar7 < uVar10 || lVar6 == 0) {
                    /* try { // try from 0078b394 to 0078b397 has its CatchHandler @ 0078b410 */
        FUN_0078e0b0(uVar4 + lVar9 * 8 + uVar7 * 8,uVar10 - uVar7);
        FUN_0078e0b0(uVar4,lVar1);
        return;
      }
      FUN_0078e0b0(uVar4 + lVar6 * 8,lVar1 - lVar6);
      return;
    }
  }
  else {
    uVar7 = 0;
    do {
      if (param_1[3] <= uVar7) {
                    /* WARNING: Subroutine does not return */
        core::option::expect_failed
                  ("out of bounds access",0x14,&PTR_s__nix_store_8006w282fgsx3273c878b_00adc0c8);
      }
      uVar10 = 0;
      if (*param_1 <= uVar7 + param_1[2]) {
        uVar10 = *param_1;
      }
      uVar12 = uVar7 + 1;
      if (*(char *)(*(long *)(param_1[1] + (uVar7 + (param_1[2] - uVar10)) * 8) + 0x80) != '\0')
      goto LAB_0078b308;
      uVar7 = uVar12;
    } while (uVar8 != uVar12);
  }
  return;
}


// ===== 0078b42c  FUN_0078b42c =====

void FUN_0078b42c(undefined8 *param_1,undefined1 (*param_2) [16],undefined8 *param_3,
                 undefined8 param_4,undefined8 param_5,undefined8 param_6)

{
  undefined1 (*pauVar1) [16];
  undefined8 uVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined2 uVar11;
  char cVar12;
  bool bVar13;
  undefined1 auVar14 [16];
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  code *pcVar18;
  undefined8 uVar19;
  long lVar20;
  long *plVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 uVar27;
  undefined8 uVar28;
  undefined1 auVar29 [16];
  
  plVar21 = *(long **)(param_2[5] + 8);
  do {
    lVar20 = *plVar21;
    cVar12 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar13) {
      *plVar21 = lVar20 + 1;
      cVar12 = ExclusiveMonitorsStatus();
    }
  } while (cVar12 != '\0');
  if (-1 < lVar20) {
    uVar2 = *(undefined8 *)param_2[6];
    plVar3 = *(long **)(param_2[6] + 8);
    if (plVar3 != (long *)0x0) {
      do {
        lVar20 = *plVar3;
        cVar12 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar13) {
          *plVar3 = lVar20 + 1;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      if (lVar20 < 0) goto LAB_0078b59c;
      param_6 = *(undefined8 *)param_2[7];
    }
    do {
      lVar20 = *plVar21;
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar13) {
        *plVar21 = lVar20 + 1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (-1 < lVar20) {
      uVar6 = param_2[3][0];
      uVar7 = param_2[3][10];
      uVar8 = param_2[3][8];
      uVar9 = param_2[3][9];
      pauVar1 = param_2 + 1;
      uVar15 = *(undefined8 *)*pauVar1;
      auVar29 = *pauVar1;
      auVar25 = *pauVar1;
      pauVar1 = param_2 + 2;
      uVar27 = *(undefined8 *)*pauVar1;
      auVar17 = *pauVar1;
      auVar26 = *pauVar1;
      auVar14 = *param_2;
                    /* try { // try from 0078b4ec to 0078b4fb has its CatchHandler @ 0078b5a0 */
      uVar19 = FUN_007c8408(param_2 + 4,plVar21,uVar2,plVar3,param_6);
      uVar24 = param_3[7];
      uVar22 = param_3[6];
      uVar16 = param_3[8];
      uVar23 = param_3[9];
      uVar11 = *(undefined2 *)(param_2[7] + 8);
      uVar10 = param_2[7][10];
      param_1[0x16] = plVar21;
      param_1[0x17] = uVar2;
      param_1[0xf] = uVar24;
      param_1[0xe] = uVar22;
      param_1[0x11] = uVar23;
      param_1[0x10] = uVar16;
      uVar2 = param_3[10];
      uVar16 = param_3[0xb];
      uVar22 = param_3[0xd];
      uVar23 = param_3[0xc];
      auVar25 = NEON_ext(auVar25,auVar29,8,1);
      auVar29 = NEON_ext(auVar14,auVar14,8,1);
      *(undefined2 *)(param_1 + 0x19) = uVar11;
      *(undefined1 *)((long)param_1 + 0xca) = uVar10;
      uVar5 = *(undefined4 *)(param_2[3] + 1);
      uVar4 = *(undefined4 *)(param_2[3] + 4);
      param_1[0x13] = uVar16;
      param_1[0x12] = uVar2;
      param_1[0x15] = uVar22;
      param_1[0x14] = uVar23;
      uVar2 = *param_3;
      uVar16 = param_3[1];
      *(undefined1 *)(param_1 + 6) = uVar6;
      uVar22 = param_3[3];
      uVar23 = param_3[2];
      uVar28 = param_3[5];
      uVar24 = param_3[4];
      *(undefined4 *)((long)param_1 + 0x31) = uVar5;
      *(undefined4 *)((long)param_1 + 0x34) = uVar4;
      param_1[9] = uVar16;
      param_1[8] = uVar2;
      param_1[0xb] = uVar22;
      param_1[10] = uVar23;
      auVar26 = NEON_ext(auVar26,auVar17,8,1);
      param_1[0xd] = uVar28;
      param_1[0xc] = uVar24;
      param_1[1] = auVar29._0_8_;
      *param_1 = auVar14._0_8_;
      param_1[3] = auVar25._0_8_;
      param_1[2] = uVar15;
      *(undefined1 *)(param_1 + 7) = uVar8;
      *(undefined1 *)((long)param_1 + 0x39) = uVar9;
      *(undefined1 *)((long)param_1 + 0x3a) = uVar7;
      param_1[5] = auVar26._0_8_;
      param_1[4] = uVar27;
      param_1[0x18] = uVar19;
      return;
    }
  }
LAB_0078b59c:
                    /* WARNING: Does not return */
  pcVar18 = (code *)SoftwareBreakpoint(1,0x78b5a0);
  (*pcVar18)();
}


// ===== 0078b5d8  FUN_0078b5d8 =====

void FUN_0078b5d8(long *param_1)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = *param_1;
  if (lVar7 != 0) {
    pcVar1 = (char *)(lVar7 + 0x60);
    *(undefined4 *)(lVar7 + 0x80) = 1;
    do {
      cVar2 = *pcVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar5) {
        *pcVar1 = '\x01';
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (cVar2 == '\0') {
      lVar3 = *(long *)(lVar7 + 0x50);
      *(undefined8 *)(lVar7 + 0x50) = 0;
      *(undefined4 *)(lVar7 + 0x60) = 0;
      if (lVar3 != 0) {
                    /* try { // try from 0078b628 to 0078b65f has its CatchHandler @ 0078b698 */
        (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar7 + 0x58));
      }
    }
    pcVar1 = (char *)(lVar7 + 0x78);
    do {
      cVar2 = *pcVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar5) {
        *pcVar1 = '\x01';
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (cVar2 == '\0') {
      lVar3 = *(long *)(lVar7 + 0x68);
      *(undefined8 *)(lVar7 + 0x68) = 0;
      *(undefined4 *)(lVar7 + 0x78) = 0;
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 8))(*(undefined8 *)(lVar7 + 0x70));
      }
    }
    plVar6 = (long *)*param_1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<futures_channel::oneshot::Inner<hyper_util::client::legacy::client::PoolClient<reqwest::async_impl::body::Body>>>>
      ::drop_slow(param_1);
      return;
    }
  }
  return;
}


// ===== 0078b6cc  FUN_0078b6cc =====

void FUN_0078b6cc(long param_1)

{
  if (*(char *)(param_1 + 0x31) == '\x02') {
    return;
  }
                    /* try { // try from 0078b6f0 to 0078b6fb has its CatchHandler @ 0078b70c */
  FUN_0078dfc8(param_1 + 0x18);
  FUN_0078ca34(param_1);
  return;
}


// ===== 0078b724  FUN_0078b724 =====

void FUN_0078b724(long *param_1)

{
  code *pcVar1;
  undefined8 *__ptr;
  void *__ptr_00;
  undefined8 *puVar2;
  
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0078b754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))(param_1 + 3,param_1[1],param_1[2]);
    return;
  }
  __ptr = (undefined8 *)param_1[1];
  __ptr_00 = (void *)*__ptr;
  if (__ptr_00 != (void *)0x0) {
    puVar2 = (undefined8 *)__ptr[1];
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
                    /* try { // try from 0078b770 to 0078b777 has its CatchHandler @ 0078b7a8 */
      (*pcVar1)(__ptr_00);
    }
    if (puVar2[1] != 0) {
      free(__ptr_00);
    }
  }
  free(__ptr);
  return;
}


// ===== 0078b7dc  FUN_0078b7dc =====

void FUN_0078b7dc(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 0078b7ec to 0078b7f3 has its CatchHandler @ 0078b85c */
  FUN_0078c428(param_1 + 0x40);
  plVar3 = *(long **)(param_1 + 0x88);
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
                    /* try { // try from 0078b818 to 0078b81b has its CatchHandler @ 0078b854 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::sync::poison::mutex::Mutex<hyper_util[52a210df7efc1bae]::client::legacy::pool::PoolInner<hyper_util[52a210df7efc1bae]::client::legacy::client::PoolClient<reqwest[6fed810f3e38d558]::async_impl::body::Body>,(http[b87e90c26fe47eb4]::uri::scheme::Scheme,http[b87e90c26fe47eb4]::uri::authority::Authority)>>>>
      ::drop_slow();
    }
  }
  plVar3 = *(long **)(param_1 + 0x78);
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
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
    drop_slow((undefined8 *)(param_1 + 0x78));
    return;
  }
  return;
}


// ===== 0078b8bc  FUN_0078b8bc =====

void FUN_0078b8bc(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 0078b8cc to 0078b8cf has its CatchHandler @ 0078b90c */
  FUN_0079377c();
  plVar3 = (long *)*param_1;
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
      <alloc::sync::[n]::alloc::sync::Arc<futures_channel::mpsc::BoundedInner<core::result::Result<bytes::bytes::Bytes,hyper::error::Error>>>>
      ::drop_slow(param_1);
      return;
    }
  }
  return;
}


// ===== 0078b944  FUN_0078b944 =====

void FUN_0078b944(long *param_1)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = *param_1;
  pcVar1 = (char *)(lVar7 + 0x60);
  *(undefined4 *)(lVar7 + 0x80) = 1;
  do {
    cVar2 = *pcVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar5) {
      *pcVar1 = '\x01';
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (cVar2 == '\0') {
    lVar3 = *(long *)(lVar7 + 0x50);
    *(undefined8 *)(lVar7 + 0x50) = 0;
    *(undefined4 *)(lVar7 + 0x60) = 0;
    if (lVar3 != 0) {
                    /* try { // try from 0078b994 to 0078b997 has its CatchHandler @ 0078ba14 */
      (**(code **)(lVar3 + 8))(*(undefined8 *)(lVar7 + 0x58));
    }
  }
  pcVar1 = (char *)(lVar7 + 0x78);
  do {
    cVar2 = *pcVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar5) {
      *pcVar1 = '\x01';
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (cVar2 == '\0') {
    lVar3 = *(long *)(lVar7 + 0x68);
    *(undefined8 *)(lVar7 + 0x68) = 0;
    if (lVar3 != 0) {
                    /* try { // try from 0078b9c0 to 0078b9c3 has its CatchHandler @ 0078ba08 */
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar7 + 0x70));
    }
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
  }
  plVar6 = (long *)*param_1;
  do {
    lVar7 = *plVar6;
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar5) {
      *plVar6 = lVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar7 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<futures_channel::oneshot::Inner<hyper_util::client::legacy::client::PoolClient<reqwest::async_impl::body::Body>>>>
    ::drop_slow(param_1);
    return;
  }
  return;
}


// ===== 0078ba48  FUN_0078ba48 =====

void FUN_0078ba48(long *param_1)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = *param_1;
  pcVar1 = (char *)(lVar7 + 0x88);
  *(undefined4 *)(lVar7 + 0xa8) = 1;
  do {
    cVar2 = *pcVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar5) {
      *pcVar1 = '\x01';
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (cVar2 == '\0') {
    lVar3 = *(long *)(lVar7 + 0x78);
    *(undefined8 *)(lVar7 + 0x78) = 0;
    *(undefined4 *)(lVar7 + 0x88) = 0;
    if (lVar3 != 0) {
                    /* try { // try from 0078ba94 to 0078bacb has its CatchHandler @ 0078bb04 */
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar7 + 0x80));
    }
  }
  pcVar1 = (char *)(lVar7 + 0xa0);
  do {
    cVar2 = *pcVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar5) {
      *pcVar1 = '\x01';
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (cVar2 == '\0') {
    lVar3 = *(long *)(lVar7 + 0x90);
    *(undefined8 *)(lVar7 + 0x90) = 0;
    *(undefined4 *)(lVar7 + 0xa0) = 0;
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 8))(*(undefined8 *)(lVar7 + 0x98));
    }
  }
  plVar6 = (long *)*param_1;
  do {
    lVar7 = *plVar6;
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar5) {
      *plVar6 = lVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar7 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<futures_channel::oneshot::Inner<http::header::map::HeaderMap>>>
    ::drop_slow(param_1);
    return;
  }
  return;
}


// ===== 0078bb38  FUN_0078bb38 =====

void FUN_0078bb38(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  void *pvVar3;
  
  if ((9 < *(byte *)(param_1 + 0xb8)) && (*(long *)(param_1 + 200) != 0)) {
    free(*(void **)(param_1 + 0xc0));
  }
                    /* try { // try from 0078bb68 to 0078bb6f has its CatchHandler @ 0078bc3c */
  FUN_0078d9c8(param_1 + 0x60);
                    /* try { // try from 0078bb70 to 0078bb77 has its CatchHandler @ 0078bc34 */
  FUN_0078ddd0(param_1);
  pvVar3 = *(void **)(param_1 + 0xd0);
  if (pvVar3 != (void *)0x0) {
                    /* try { // try from 0078bb80 to 0078bb87 has its CatchHandler @ 0078bc18 */
    FUN_007b3bec(pvVar3);
    free(pvVar3);
  }
  if (*(long *)(param_1 + 0xe0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0078bbb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0xe0) + 0x20))
              (param_1 + 0xf8,*(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0xf0));
    return;
  }
  pvVar3 = *(void **)(param_1 + 0xe8);
  puVar1 = *(undefined8 **)(param_1 + 0xf0);
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
                    /* try { // try from 0078bbc4 to 0078bbcb has its CatchHandler @ 0078bbf4 */
    (*pcVar2)(pvVar3);
  }
  if (puVar1[1] != 0) {
    free(pvVar3);
    return;
  }
  return;
}


// ===== 0078bc68  FUN_0078bc68 =====

void FUN_0078bc68(long param_1)

{
  void *__ptr;
  
                    /* try { // try from 0078bc78 to 0078bc7b has its CatchHandler @ 0078bcc8 */
  FUN_0078ddd0();
  __ptr = *(void **)(param_1 + 0x60);
  if (__ptr != (void *)0x0) {
                    /* try { // try from 0078bc84 to 0078bc8b has its CatchHandler @ 0078bcac */
    FUN_007b3bec(__ptr);
    free(__ptr);
  }
  FUN_0078db88(param_1 + 0x70);
  return;
}


// ===== 0078bcf0  FUN_0078bcf0 =====

void FUN_0078bcf0(long *param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  lVar1 = (long)__ptr + 0x38;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 0078bd2c to 0078bd2f has its CatchHandler @ 0078bd78 */
    (**(code **)(*(long *)(lVar1 + -0x18) + 0x20))
              (lVar1,*(undefined8 *)(lVar1 + -0x10),*(undefined8 *)(lVar1 + -8));
    lVar1 = lVar1 + 0x48;
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0078bdcc  FUN_0078bdcc =====

void FUN_0078bdcc(undefined8 *param_1)

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


// ===== 0078be3c  FUN_0078be3c =====

void FUN_0078be3c(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  void *__ptr;
  
  uVar3 = *param_1;
  lVar5 = uVar3 - 5;
  if ((long)uVar3 < 5) {
    lVar5 = 1;
  }
  if (lVar5 == 1) {
    if (uVar3 == 0xffffffffffffffff) {
      if ((char)param_1[0xf] == '\x02') {
LAB_0078bfc0:
        FUN_0078df18(param_1 + 1);
        return;
      }
      if ((char)param_1[0xf] != -1) {
LAB_0078bfd0:
        FUN_0078c534(param_1 + 1);
        return;
      }
    }
    else {
      lVar5 = 0;
      if (1 < uVar3) {
        lVar5 = uVar3 - 2;
      }
      if (lVar5 == 1) {
        cVar1 = (char)param_1[0xf];
        if (cVar1 == '\x02') goto LAB_0078bfc0;
        if (cVar1 != -1) {
          if (cVar1 == -2) {
            __ptr = (void *)param_1[1];
                    /* try { // try from 0078bf94 to 0078bf9b has its CatchHandler @ 0078bfe0 */
            FUN_0078caf0(__ptr);
            free(__ptr);
            return;
          }
          goto LAB_0078bfd0;
        }
      }
      else if ((lVar5 == 0) && (uVar3 != 2)) {
        if ((int)param_1[0x14] != -3) {
                    /* try { // try from 0078bf44 to 0078bf4b has its CatchHandler @ 0078bffc */
          FUN_0078c0a8(param_1 + 0x13);
        }
        FUN_0078b7dc(param_1);
        return;
      }
    }
  }
  else if (lVar5 == 0) {
    plVar4 = (long *)param_1[0x2a];
    if (plVar4 != (long *)0x0) {
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
                    /* try { // try from 0078be88 to 0078be8f has its CatchHandler @ 0078c010 */
        <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::sync::poison::mutex::Mutex<hyper_util[52a210df7efc1bae]::client::legacy::pool::PoolInner<hyper_util[52a210df7efc1bae]::client::legacy::client::PoolClient<reqwest[6fed810f3e38d558]::async_impl::body::Body>,(http[b87e90c26fe47eb4]::uri::scheme::Scheme,http[b87e90c26fe47eb4]::uri::authority::Authority)>>>>
        ::drop_slow(param_1 + 0x2a);
      }
    }
    if (1 < (byte)param_1[0x17]) {
      plVar4 = (long *)param_1[0x18];
                    /* try { // try from 0078beac to 0078beb3 has its CatchHandler @ 0078c020 */
      (**(code **)(*plVar4 + 0x20))(plVar4 + 3,plVar4[1],plVar4[2]);
      free(plVar4);
    }
                    /* try { // try from 0078bed0 to 0078bed7 has its CatchHandler @ 0078c064 */
    (**(code **)(param_1[0x19] + 0x20))(param_1 + 0x1c,param_1[0x1a],param_1[0x1b]);
                    /* try { // try from 0078bed8 to 0078bedf has its CatchHandler @ 0078c05c */
    FUN_0078d784(param_1 + 9);
                    /* try { // try from 0078bee0 to 0078bee7 has its CatchHandler @ 0078c054 */
    FUN_0078d9c8(param_1 + 0x1d);
    plVar4 = (long *)param_1[0x28];
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
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
      drop_slow(param_1 + 0x28);
      return;
    }
  }
  return;
}


// ===== 0078c0a8  FUN_0078c0a8 =====

void FUN_0078c0a8(long param_1)

{
  int iVar1;
  void *__ptr;
  undefined8 *puVar2;
  code *pcVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 8) < 1000000000) {
    iVar1 = 999999999;
  }
  if (iVar1 == 999999999) {
                    /* try { // try from 0078c110 to 0078c117 has its CatchHandler @ 0078c164 */
    FUN_0078d784();
    if (*(char *)(param_1 + 0x70) != -1) {
      FUN_0078d9c8((char *)(param_1 + 0x70));
      return;
    }
  }
  else if (iVar1 == 1000000000) {
    __ptr = *(void **)(param_1 + 0x10);
    puVar2 = *(undefined8 **)(param_1 + 0x18);
    pcVar3 = (code *)*puVar2;
    if (pcVar3 != (code *)0x0) {
                    /* try { // try from 0078c0ec to 0078c0f3 has its CatchHandler @ 0078c140 */
      (*pcVar3)(__ptr);
    }
    if (puVar2[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 0078c188  FUN_0078c188 =====

void FUN_0078c188(long *param_1)

{
  if (*param_1 == -2) {
    return;
  }
  if (*param_1 == -1) {
    FUN_0078df18(param_1 + 1);
    return;
  }
  FUN_0078bc68();
  return;
}


// ===== 0078c1ac  FUN_0078c1ac =====

void FUN_0078c1ac(long param_1)

{
  if (*(long *)(param_1 + 0x40) == -2) {
    return;
  }
                    /* try { // try from 0078c1d4 to 0078c1d7 has its CatchHandler @ 0078c1e8 */
  FUN_0078c680();
  FUN_0078be3c((long *)(param_1 + 0x40));
  return;
}


// ===== 0078c200  FUN_0078c200 =====

void FUN_0078c200(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long local_138 [33];
  
  lVar5 = *param_1;
  if (lVar5 != 0) {
    puVar1 = (ulong *)(lVar5 + 0x30);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 | 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 10) == 8) {
                    /* try { // try from 0078c24c to 0078c24f has its CatchHandler @ 0078c2cc */
      (**(code **)(*(long *)(lVar5 + 0x10) + 0x10))(*(undefined8 *)(lVar5 + 0x18));
    }
    if (((uint)uVar6 >> 1 & 1) != 0) {
      memcpy(local_138,(void *)(lVar5 + 0x38),0x108);
      *(undefined8 *)(lVar5 + 0x38) = 0xfffffffffffffffd;
      if (local_138[0] != -3) {
                    /* try { // try from 0078c278 to 0078c27f has its CatchHandler @ 0078c2cc */
        FUN_0079a540(local_138);
      }
    }
    plVar4 = (long *)*param_1;
    if (plVar4 != (long *)0x0) {
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
        <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::oneshot::Inner<core[bcece726f298455b]::result::Result<http[b87e90c26fe47eb4]::response::Response<hyper[9f1bfd30b08ca095]::body::incoming::Incoming>,hyper[9f1bfd30b08ca095]::client::dispatch::TrySendError<http[b87e90c26fe47eb4]::request::Request<reqwest[6fed810f3e38d558]::async_impl::body::Body>>>>>>
        ::drop_slow(param_1);
        return;
      }
    }
  }
  return;
}


// ===== 0078c304  FUN_0078c304 =====

void FUN_0078c304(ulong *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_2 != 0) {
    do {
      if (*param_1 < 3) {
        lVar2 = 8;
        lVar1 = 0x20;
        lVar3 = 0x10;
        lVar4 = 0x18;
LAB_0078c334:
                    /* try { // try from 0078c344 to 0078c34b has its CatchHandler @ 0078c38c */
        (**(code **)(*(long *)((long)param_1 + lVar2) + 0x20))
                  ((long)param_1 + lVar1,*(undefined8 *)((long)param_1 + lVar3),
                   *(undefined8 *)((long)param_1 + lVar4));
      }
      else if (*param_1 != 3) {
        lVar2 = 0x18;
        lVar1 = 0x30;
        lVar3 = 0x20;
        lVar4 = 0x28;
        goto LAB_0078c334;
      }
      param_2 = param_2 + -1;
      param_1 = param_1 + 10;
    } while (param_2 != 0);
  }
  return;
}


// ===== 0078c3b8  FUN_0078c3b8 =====

void FUN_0078c3b8(int *param_1,uint param_2)

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


// ===== 0078c428  FUN_0078c428 =====

void FUN_0078c428(byte *param_1)

{
  char cVar1;
  bool bVar2;
  void *__ptr;
  long lVar3;
  long *plVar4;
  
                    /* try { // try from 0078c438 to 0078c43b has its CatchHandler @ 0078c50c */
  FUN_007ce4a4();
  if (1 < *param_1) {
    plVar4 = *(long **)(param_1 + 8);
                    /* try { // try from 0078c458 to 0078c45f has its CatchHandler @ 0078c4d0 */
    (**(code **)(*plVar4 + 0x20))(plVar4 + 3,plVar4[1],plVar4[2]);
    free(plVar4);
  }
                    /* try { // try from 0078c47c to 0078c483 has its CatchHandler @ 0078c504 */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x20))
            (param_1 + 0x28,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  __ptr = *(void **)(param_1 + 0x30);
  if ((long)__ptr - 1U < 0xfffffffffffffffe) {
    plVar4 = (long *)((long)__ptr + 8);
    do {
      lVar3 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 + -1 == 0) {
      DataMemoryBarrier(2,1);
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 0078c534  FUN_0078c534 =====

void FUN_0078c534(byte *param_1)

{
  char cVar1;
  bool bVar2;
  void *__ptr;
  long lVar3;
  long *plVar4;
  
                    /* try { // try from 0078c544 to 0078c547 has its CatchHandler @ 0078c650 */
  FUN_007cb9b0();
  if (param_1[0x61] != 2) {
                    /* try { // try from 0078c554 to 0078c55b has its CatchHandler @ 0078c634 */
    FUN_0078dfc8(param_1 + 0x48);
                    /* try { // try from 0078c55c to 0078c563 has its CatchHandler @ 0078c62c */
    FUN_0078ca34(param_1 + 0x30);
  }
  if (1 < *param_1) {
    plVar4 = *(long **)(param_1 + 8);
                    /* try { // try from 0078c580 to 0078c587 has its CatchHandler @ 0078c5f8 */
    (**(code **)(*plVar4 + 0x20))(plVar4 + 3,plVar4[1],plVar4[2]);
    free(plVar4);
  }
                    /* try { // try from 0078c5a4 to 0078c5ab has its CatchHandler @ 0078c648 */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x20))
            (param_1 + 0x28,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  __ptr = *(void **)(param_1 + 0x68);
  if ((long)__ptr - 1U < 0xfffffffffffffffe) {
    plVar4 = (long *)((long)__ptr + 8);
    do {
      lVar3 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 + -1 == 0) {
      DataMemoryBarrier(2,1);
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 0078c680  FUN_0078c680 =====

void FUN_0078c680(byte *param_1)

{
  char *pcVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  char cVar5;
  long lVar6;
  long *plVar7;
  
                    /* try { // try from 0078c690 to 0078c693 has its CatchHandler @ 0078c828 */
  FUN_007cdfd4();
  if (1 < *param_1) {
    plVar7 = *(long **)(param_1 + 8);
                    /* try { // try from 0078c6b0 to 0078c6b7 has its CatchHandler @ 0078c7ec */
    (**(code **)(*plVar7 + 0x20))(plVar7 + 3,plVar7[1],plVar7[2]);
    free(plVar7);
  }
                    /* try { // try from 0078c6d4 to 0078c6db has its CatchHandler @ 0078c820 */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x20))
            (param_1 + 0x28,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  plVar7 = *(long **)(param_1 + 0x30);
  if (plVar7 != (long *)0x0) {
    do {
      lVar6 = *plVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 0078c700 to 0078c703 has its CatchHandler @ 0078c7e4 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::sync::poison::mutex::Mutex<hyper_util[52a210df7efc1bae]::client::legacy::pool::PoolInner<hyper_util[52a210df7efc1bae]::client::legacy::client::PoolClient<reqwest[6fed810f3e38d558]::async_impl::body::Body>,(http[b87e90c26fe47eb4]::uri::scheme::Scheme,http[b87e90c26fe47eb4]::uri::authority::Authority)>>>>
      ::drop_slow();
    }
  }
  param_1 = param_1 + 0x38;
  lVar6 = *(long *)param_1;
  if (lVar6 != 0) {
    pcVar1 = (char *)(lVar6 + 0x60);
    *(undefined4 *)(lVar6 + 0x80) = 1;
    do {
      cVar3 = *pcVar1;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar4) {
        *pcVar1 = '\x01';
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (cVar3 == '\0') {
      lVar2 = *(long *)(lVar6 + 0x50);
      *(undefined8 *)(lVar6 + 0x50) = 0;
      *(undefined4 *)(lVar6 + 0x60) = 0;
      if (lVar2 != 0) {
                    /* try { // try from 0078c744 to 0078c77b has its CatchHandler @ 0078c7b4 */
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar6 + 0x58));
      }
    }
    pcVar1 = (char *)(lVar6 + 0x78);
    do {
      cVar3 = *pcVar1;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar4) {
        *pcVar1 = '\x01';
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (cVar3 == '\0') {
      lVar2 = *(long *)(lVar6 + 0x68);
      *(undefined8 *)(lVar6 + 0x68) = 0;
      *(undefined4 *)(lVar6 + 0x78) = 0;
      if (lVar2 != 0) {
        (**(code **)(lVar2 + 8))(*(undefined8 *)(lVar6 + 0x70));
      }
    }
    plVar7 = *(long **)param_1;
    do {
      lVar6 = *plVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<futures_channel::oneshot::Inner<hyper_util::client::legacy::client::PoolClient<reqwest::async_impl::body::Body>>>>
      ::drop_slow(param_1);
      return;
    }
  }
  return;
}


// ===== 0078c870  FUN_0078c870 =====

void FUN_0078c870(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 0078c880 to 0078c887 has its CatchHandler @ 0078c8f0 */
  FUN_0078d784(param_1 + 0x40);
  plVar3 = *(long **)(param_1 + 0xb0);
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
                    /* try { // try from 0078c8a8 to 0078c8ab has its CatchHandler @ 0078c8e8 */
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
    drop_slow();
  }
  plVar3 = *(long **)(param_1 + 0xc0);
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
      <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::sync::poison::mutex::Mutex<hyper_util[52a210df7efc1bae]::client::legacy::pool::PoolInner<hyper_util[52a210df7efc1bae]::client::legacy::client::PoolClient<reqwest[6fed810f3e38d558]::async_impl::body::Body>,(http[b87e90c26fe47eb4]::uri::scheme::Scheme,http[b87e90c26fe47eb4]::uri::authority::Authority)>>>>
      ::drop_slow((undefined8 *)(param_1 + 0xc0));
      return;
    }
  }
  return;
}


// ===== 0078c950  FUN_0078c950 =====

void FUN_0078c950(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 0078c960 to 0078c963 has its CatchHandler @ 0078c99c */
  FUN_0079f408();
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
    <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::mpsc::chan::Chan<hyper[9f1bfd30b08ca095]::client::dispatch::Envelope<http[b87e90c26fe47eb4]::request::Request<reqwest[6fed810f3e38d558]::async_impl::body::Body>,http[b87e90c26fe47eb4]::response::Response<hyper[9f1bfd30b08ca095]::body::incoming::Incoming>>,tokio[8c8895dbfa691109]::sync::mpsc::unbounded::Semaphore>>>
    ::drop_slow(param_1);
    return;
  }
  return;
}


// ===== 0078c9d0  FUN_0078c9d0 =====

void FUN_0078c9d0(ulong *param_1)

{
  if (*param_1 < 3) {
                    /* WARNING: Could not recover jumptable at 0x0078ca00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[1] + 0x20))(param_1 + 4,param_1[2],param_1[3]);
    return;
  }
  if (*param_1 == 3) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0078ca30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[3] + 0x20))(param_1 + 6,param_1[4],param_1[5]);
  return;
}


// ===== 0078ca34  FUN_0078ca34 =====

void FUN_0078ca34(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
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
                    /* try { // try from 0078ca60 to 0078ca67 has its CatchHandler @ 0078caa8 */
    <alloc::sync::[n]::alloc::sync::Arc<want::Inner>>::drop_slow(param_1);
  }
                    /* try { // try from 0078ca68 to 0078ca6f has its CatchHandler @ 0078cabc */
  FUN_0079f408(param_1 + 1);
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
    <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::mpsc::chan::Chan<hyper[9f1bfd30b08ca095]::client::dispatch::Envelope<http[b87e90c26fe47eb4]::request::Request<reqwest[6fed810f3e38d558]::async_impl::body::Body>,http[b87e90c26fe47eb4]::response::Response<hyper[9f1bfd30b08ca095]::body::incoming::Incoming>>,tokio[8c8895dbfa691109]::sync::mpsc::unbounded::Semaphore>>>
    ::drop_slow(param_1 + 1);
    return;
  }
  return;
}


// ===== 0078caf0  FUN_0078caf0 =====

void FUN_0078caf0(long param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  
  cVar3 = *(char *)(param_1 + 0xc9);
  if (cVar3 == '\0') {
    pvVar1 = *(void **)(param_1 + 0x40);
    puVar2 = *(undefined8 **)(param_1 + 0x48);
    pcVar5 = (code *)*puVar2;
    if (pcVar5 != (code *)0x0) {
                    /* try { // try from 0078cbc0 to 0078cbc7 has its CatchHandler @ 0078cc8c */
      (*pcVar5)(pvVar1);
    }
    if (puVar2[1] != 0) {
      free(pvVar1);
    }
    plVar6 = *(long **)(param_1 + 0xb0);
    do {
      lVar7 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 0078cbfc to 0078cbff has its CatchHandler @ 0078cc7c */
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
      drop_slow();
    }
    plVar6 = *(long **)(param_1 + 0xc0);
    if (plVar6 != (long *)0x0) {
      do {
        lVar7 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 0078cc24 to 0078cc27 has its CatchHandler @ 0078cc74 */
        <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::sync::poison::mutex::Mutex<hyper_util[52a210df7efc1bae]::client::legacy::pool::PoolInner<hyper_util[52a210df7efc1bae]::client::legacy::client::PoolClient<reqwest[6fed810f3e38d558]::async_impl::body::Body>,(http[b87e90c26fe47eb4]::uri::scheme::Scheme,http[b87e90c26fe47eb4]::uri::authority::Authority)>>>>
        ::drop_slow();
      }
    }
                    /* try { // try from 0078cc28 to 0078cc2f has its CatchHandler @ 0078cd00 */
    FUN_0078c428(param_1 + 0x78);
  }
  else {
    if (cVar3 == '\x03') {
      if (*(char *)(param_1 + 0x123) == '\0') {
        pvVar1 = *(void **)(param_1 + 0x100);
        puVar2 = *(undefined8 **)(param_1 + 0x108);
        pcVar5 = (code *)*puVar2;
        if (pcVar5 != (code *)0x0) {
                    /* try { // try from 0078cb40 to 0078cb47 has its CatchHandler @ 0078cc54 */
          (*pcVar5)(pvVar1);
        }
        if (puVar2[1] != 0) {
          free(pvVar1);
        }
      }
    }
    else {
      if (cVar3 != '\x04') {
        return;
      }
      *(undefined1 *)(param_1 + 0xca) = 0;
                    /* try { // try from 0078cb20 to 0078cb27 has its CatchHandler @ 0078cd4c */
      FUN_0078ca34(param_1 + 0xd0);
    }
    plVar6 = *(long **)(param_1 + 0xb0);
    do {
      lVar7 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 0078cb7c to 0078cb7f has its CatchHandler @ 0078cd10 */
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
      drop_slow();
    }
    plVar6 = *(long **)(param_1 + 0xc0);
    if (plVar6 != (long *)0x0) {
      do {
        lVar7 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 0078cba4 to 0078cba7 has its CatchHandler @ 0078cc84 */
        <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::sync::poison::mutex::Mutex<hyper_util[52a210df7efc1bae]::client::legacy::pool::PoolInner<hyper_util[52a210df7efc1bae]::client::legacy::client::PoolClient<reqwest[6fed810f3e38d558]::async_impl::body::Body>,(http[b87e90c26fe47eb4]::uri::scheme::Scheme,http[b87e90c26fe47eb4]::uri::authority::Authority)>>>>
        ::drop_slow();
      }
    }
                    /* try { // try from 0078cba8 to 0078cbaf has its CatchHandler @ 0078cdb0 */
    FUN_0078c428(param_1 + 0x78);
  }
  FUN_0078dfc8(param_1 + 0x58);
  return;
}


// ===== 0078cdc8  FUN_0078cdc8 =====

void FUN_0078cdc8(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long local_138 [33];
  
  if ((char)param_1[0x21] == '\0') {
    if (*param_1 != -1) {
      FUN_0078bb38();
      return;
    }
    param_1 = param_1 + 1;
    lVar5 = *param_1;
    if (lVar5 != 0) {
      puVar1 = (ulong *)(lVar5 + 0x30);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 | 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar6 & 10) == 8) {
                    /* try { // try from 0078cee8 to 0078ceeb has its CatchHandler @ 0078cf68 */
        (**(code **)(*(long *)(lVar5 + 0x10) + 0x10))(*(undefined8 *)(lVar5 + 0x18));
      }
      if (((uint)uVar6 >> 1 & 1) != 0) {
        memcpy(local_138,(void *)(lVar5 + 0x38),0x108);
        *(undefined8 *)(lVar5 + 0x38) = 0xfffffffffffffffd;
        if (local_138[0] != -3) {
                    /* try { // try from 0078cf14 to 0078cf1b has its CatchHandler @ 0078cf68 */
          FUN_0079a540(local_138);
        }
      }
      plVar4 = (long *)*param_1;
      if (plVar4 != (long *)0x0) {
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
          <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::oneshot::Inner<core[bcece726f298455b]::result::Result<http[b87e90c26fe47eb4]::response::Response<hyper[9f1bfd30b08ca095]::body::incoming::Incoming>,hyper[9f1bfd30b08ca095]::client::dispatch::TrySendError<http[b87e90c26fe47eb4]::request::Request<reqwest[6fed810f3e38d558]::async_impl::body::Body>>>>>>
          ::drop_slow(param_1);
          return;
        }
      }
    }
  }
  else if (((char)param_1[0x21] == '\x03') && (lVar5 = param_1[0x20], lVar5 != 0)) {
    puVar1 = (ulong *)(lVar5 + 0x30);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 | 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 10) == 8) {
                    /* try { // try from 0078ce24 to 0078ce27 has its CatchHandler @ 0078cf9c */
      (**(code **)(*(long *)(lVar5 + 0x10) + 0x10))(*(undefined8 *)(lVar5 + 0x18));
    }
    if (((uint)uVar6 >> 1 & 1) != 0) {
      memcpy(local_138,(void *)(lVar5 + 0x38),0x108);
      *(undefined8 *)(lVar5 + 0x38) = 0xfffffffffffffffd;
      if (local_138[0] != -3) {
                    /* try { // try from 0078ce50 to 0078ce57 has its CatchHandler @ 0078cf9c */
        FUN_0079a540(local_138);
      }
    }
    plVar4 = (long *)param_1[0x20];
    if (plVar4 != (long *)0x0) {
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
        <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::oneshot::Inner<core[bcece726f298455b]::result::Result<http[b87e90c26fe47eb4]::response::Response<hyper[9f1bfd30b08ca095]::body::incoming::Incoming>,hyper[9f1bfd30b08ca095]::client::dispatch::TrySendError<http[b87e90c26fe47eb4]::request::Request<reqwest[6fed810f3e38d558]::async_impl::body::Body>>>>>>
        ::drop_slow(param_1 + 0x20);
        return;
      }
    }
  }
  return;
}


// ===== 0078cfd4  FUN_0078cfd4 =====

void FUN_0078cfd4(long param_1)

{
  long *plVar1;
  
  if (*(char *)(param_1 + 0xb08) == '\0') {
                    /* try { // try from 0078d064 to 0078d06b has its CatchHandler @ 0078d154 */
    FUN_0078c870(param_1);
                    /* try { // try from 0078d06c to 0078d073 has its CatchHandler @ 0078d144 */
    FUN_0078bb38(param_1 + 0xd0);
    if (1 < *(byte *)(param_1 + 0x1d0)) {
      plVar1 = *(long **)(param_1 + 0x1d8);
                    /* try { // try from 0078d090 to 0078d097 has its CatchHandler @ 0078d0d0 */
      (**(code **)(*plVar1 + 0x20))(plVar1 + 3,plVar1[1],plVar1[2]);
      free(plVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x0078d0c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x1e0) + 0x20))
              (param_1 + 0x1f8,*(undefined8 *)(param_1 + 0x1e8),*(undefined8 *)(param_1 + 0x1f0));
    return;
  }
  if (*(char *)(param_1 + 0xb08) == '\x03') {
                    /* try { // try from 0078cff4 to 0078cffb has its CatchHandler @ 0078d16c */
    FUN_0078d320(param_1 + 0x458);
                    /* try { // try from 0078cffc to 0078d003 has its CatchHandler @ 0078d14c */
    FUN_0078d9c8(param_1 + 0x400);
    if (1 < *(byte *)(param_1 + 0x3d0)) {
      plVar1 = *(long **)(param_1 + 0x3d8);
                    /* try { // try from 0078d020 to 0078d027 has its CatchHandler @ 0078d104 */
      (**(code **)(*plVar1 + 0x20))(plVar1 + 3,plVar1[1],plVar1[2]);
      free(plVar1);
    }
                    /* try { // try from 0078d048 to 0078d04f has its CatchHandler @ 0078d13c */
    (**(code **)(*(long *)(param_1 + 0x3e0) + 0x20))
              (param_1 + 0x3f8,*(undefined8 *)(param_1 + 1000),*(undefined8 *)(param_1 + 0x3f0));
    *(undefined1 *)(param_1 + 0xb09) = 0;
    FUN_0078c870(param_1 + 0x200);
    return;
  }
  return;
}


// ===== 0078d198  FUN_0078d198 =====

void FUN_0078d198(byte *param_1)

{
  long *__ptr;
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1[0x460] == 0) {
    if (*param_1 < 2) {
      lVar1 = 0x20;
      lVar2 = 0x18;
      lVar3 = 0x28;
      lVar4 = 0x10;
      goto LAB_0078d280;
    }
    __ptr = *(long **)(param_1 + 8);
                    /* try { // try from 0078d22c to 0078d233 has its CatchHandler @ 0078d2d8 */
    (**(code **)(*__ptr + 0x20))(__ptr + 3,__ptr[1],__ptr[2]);
    lVar1 = 0x20;
    lVar2 = 0x18;
    lVar3 = 0x28;
    lVar4 = 0x10;
  }
  else {
    if (param_1[0x460] != 3) {
      return;
    }
                    /* try { // try from 0078d1c0 to 0078d1c7 has its CatchHandler @ 0078d308 */
    FUN_0078d46c(param_1 + 0x70);
    if (param_1[0x40] < 2) {
      lVar1 = 0x60;
      lVar2 = 0x58;
      lVar3 = 0x68;
      lVar4 = 0x50;
      goto LAB_0078d280;
    }
    __ptr = *(long **)(param_1 + 0x48);
                    /* try { // try from 0078d258 to 0078d25f has its CatchHandler @ 0078d2a8 */
    (**(code **)(*__ptr + 0x20))(__ptr + 3,__ptr[1],__ptr[2]);
    lVar1 = 0x60;
    lVar2 = 0x58;
    lVar3 = 0x68;
    lVar4 = 0x50;
  }
  free(__ptr);
LAB_0078d280:
                    /* WARNING: Could not recover jumptable at 0x0078d2a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + lVar4) + 0x20))
            (param_1 + lVar3,*(undefined8 *)(param_1 + lVar2),*(undefined8 *)(param_1 + lVar1));
  return;
}


// ===== 0078d320  FUN_0078d320 =====

void FUN_0078d320(long param_1)

{
  char cVar1;
  long *__ptr;
  
  cVar1 = *(char *)(param_1 + 0x240);
  if (cVar1 == '\0') {
                    /* try { // try from 0078d388 to 0078d38f has its CatchHandler @ 0078d430 */
    FUN_0078bb38(param_1);
    if (1 < *(byte *)(param_1 + 0x100)) {
      __ptr = *(long **)(param_1 + 0x108);
                    /* try { // try from 0078d3ac to 0078d3b3 has its CatchHandler @ 0078d3e0 */
      (**(code **)(*__ptr + 0x20))(__ptr + 3,__ptr[1],__ptr[2]);
      free(__ptr);
    }
                    /* WARNING: Could not recover jumptable at 0x0078d3dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x110) + 0x20))
              (param_1 + 0x128,*(undefined8 *)(param_1 + 0x118),*(undefined8 *)(param_1 + 0x120));
    return;
  }
  if (cVar1 == '\x03') {
                    /* try { // try from 0078d35c to 0078d363 has its CatchHandler @ 0078d444 */
    FUN_0078d198(param_1 + 0x248);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
                    /* try { // try from 0078d348 to 0078d34f has its CatchHandler @ 0078d420 */
    FUN_0078cdc8(param_1 + 0x2c0);
                    /* try { // try from 0078d350 to 0078d357 has its CatchHandler @ 0078d41c */
    FUN_0078c534(param_1 + 0x248);
  }
  *(undefined1 *)(param_1 + 0x242) = 0;
  if ((*(byte *)(param_1 + 0x241) & 1) != 0) {
                    /* try { // try from 0078d370 to 0078d377 has its CatchHandler @ 0078d414 */
    FUN_0078bb38(param_1 + 0x140);
  }
  *(undefined1 *)(param_1 + 0x241) = 0;
  return;
}


// ===== 0078d46c  FUN_0078d46c =====

void FUN_0078d46c(byte *param_1)

{
  byte bVar1;
  long lVar2;
  long *__ptr;
  
  bVar1 = param_1[0x248];
  if (bVar1 < 4) {
    if (bVar1 == 0) {
      if (1 < *param_1) {
        __ptr = *(long **)(param_1 + 8);
                    /* try { // try from 0078d554 to 0078d55b has its CatchHandler @ 0078d598 */
        (**(code **)(*__ptr + 0x20))(__ptr + 3,__ptr[1],__ptr[2]);
        free(__ptr);
      }
                    /* WARNING: Could not recover jumptable at 0x0078d584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_1 + 0x10) + 0x20))
                (param_1 + 0x28,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
      return;
    }
    if (bVar1 != 3) {
      return;
    }
                    /* try { // try from 0078d4d8 to 0078d4df has its CatchHandler @ 0078d5ec */
    FUN_0078be3c(param_1 + 0x250);
  }
  else {
    if (bVar1 == 4) {
      if (*(long *)(param_1 + 0x290) != -2) {
                    /* try { // try from 0078d4f0 to 0078d4f7 has its CatchHandler @ 0078d5d0 */
        FUN_0078c680(param_1 + 0x250);
                    /* try { // try from 0078d4f8 to 0078d4ff has its CatchHandler @ 0078d588 */
        FUN_0078be3c(param_1 + 0x290);
      }
    }
    else {
      if (bVar1 == 5) {
                    /* try { // try from 0078d504 to 0078d50b has its CatchHandler @ 0078d620 */
        FUN_0078be3c(param_1 + 600);
        param_1[0x24a] = 0;
        lVar2 = *(long *)(param_1 + 0xe8);
      }
      else {
        if (bVar1 != 6) {
          return;
        }
                    /* try { // try from 0078d4a0 to 0078d4a7 has its CatchHandler @ 0078d5f4 */
        FUN_0078c680(param_1 + 0x288);
        param_1[0x24b] = 0;
                    /* try { // try from 0078d4ac to 0078d4b3 has its CatchHandler @ 0078d5e4 */
        FUN_0078df18(param_1 + 0x250);
        param_1[0x24c] = 0;
        lVar2 = *(long *)(param_1 + 0xe8);
      }
      if (lVar2 == -2) {
        param_1[0x24e] = 0;
      }
      else {
        param_1[0x24d] = 0;
      }
    }
    param_1[0x24d] = 0;
    param_1[0x24e] = 0;
  }
  param_1[0x24f] = 0;
  return;
}


// ===== 0078d63c  FUN_0078d63c =====

void FUN_0078d63c(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
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
                    /* try { // try from 0078d668 to 0078d66f has its CatchHandler @ 0078d700 */
    <alloc::sync::[n]::alloc::sync::Arc<hyper_util::client::legacy::connect::http::Config>>::
    drop_slow(param_1);
  }
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
                    /* try { // try from 0078d690 to 0078d693 has its CatchHandler @ 0078d6f8 */
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
    drop_slow();
  }
  plVar3 = (long *)param_1[3];
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
                    /* try { // try from 0078d6b4 to 0078d6b7 has its CatchHandler @ 0078d6f0 */
    <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow();
  }
  plVar3 = (long *)param_1[4];
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
    <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow
              (param_1 + 4);
    return;
  }
  return;
}


// ===== 0078d784  FUN_0078d784 =====

void FUN_0078d784(long param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  
  if (*(int *)(param_1 + 8) == -2) {
    __ptr = *(void **)(param_1 + 0x10);
    puVar1 = *(undefined8 **)(param_1 + 0x18);
    pcVar4 = (code *)*puVar1;
    if (pcVar4 != (code *)0x0) {
                    /* try { // try from 0078d7ac to 0078d7b3 has its CatchHandler @ 0078d838 */
      (*pcVar4)(__ptr);
    }
    if (puVar1[1] != 0) {
      free(__ptr);
      return;
    }
  }
  else {
                    /* try { // try from 0078d7d0 to 0078d7d7 has its CatchHandler @ 0078d85c */
    FUN_0078d63c(param_1 + 0x38);
    plVar5 = *(long **)(param_1 + 0x60);
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 0078d7f8 to 0078d7fb has its CatchHandler @ 0078d830 */
      <alloc::sync::[n]::alloc::sync::Arc<alloc::vec::Vec<reqwest::proxy::Proxy>>>::drop_slow();
    }
    if (*(char *)(param_1 + 0x30) != '\x02') {
                    /* WARNING: Could not recover jumptable at 0x0078d82c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_1 + 0x10) + 0x20))
                (param_1 + 0x28,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
      return;
    }
  }
  return;
}


// ===== 0078d8b4  FUN_0078d8b4 =====

void FUN_0078d8b4(undefined8 *param_1)

{
  code *pcVar1;
  void *__ptr;
  undefined8 *puVar2;
  
  __ptr = (void *)*param_1;
  if (__ptr != (void *)0x0) {
    puVar2 = (undefined8 *)param_1[1];
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
                    /* try { // try from 0078d8dc to 0078d8e3 has its CatchHandler @ 0078d914 */
      (*pcVar1)(__ptr);
    }
    if (puVar2[1] != 0) {
      free(__ptr);
    }
  }
  free(param_1);
  return;
}


// ===== 0078d948  FUN_0078d948 =====

void FUN_0078d948(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
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
      <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::sync::poison::mutex::Mutex<tokio[8c8895dbfa691109]::sync::oneshot::Receiver<core[bcece726f298455b]::result::Result<hyper[9f1bfd30b08ca095]::upgrade::Upgraded,hyper[9f1bfd30b08ca095]::error::Error>>>>>
      ::drop_slow();
      return;
    }
  }
  return;
}


// ===== 0078d970  FUN_0078d970 =====

void FUN_0078d970(void *param_1)

{
  if (param_1 != (void *)0x0) {
                    /* try { // try from 0078d980 to 0078d987 has its CatchHandler @ 0078d9ac */
    FUN_007b3bec();
    free(param_1);
    return;
  }
  return;
}


// ===== 0078d9c8  FUN_0078d9c8 =====

void FUN_0078d9c8(byte *param_1)

{
  long *__ptr;
  
  if (1 < *param_1) {
    __ptr = *(long **)(param_1 + 8);
                    /* try { // try from 0078d9f4 to 0078d9fb has its CatchHandler @ 0078da3c */
    (**(code **)(*__ptr + 0x20))(__ptr + 3,__ptr[1],__ptr[2]);
    free(__ptr);
  }
                    /* try { // try from 0078da18 to 0078da1f has its CatchHandler @ 0078da6c */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x20))
            (param_1 + 0x28,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0078da38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x20))
            (param_1 + 0x48,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  return;
}


// ===== 0078da90  FUN_0078da90 =====

void FUN_0078da90(long *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0078dab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))(param_1 + 3,param_1[1],param_1[2]);
    return;
  }
  __ptr = (void *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
                    /* try { // try from 0078dac8 to 0078dacf has its CatchHandler @ 0078daf8 */
    (*pcVar2)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0078db1c  FUN_0078db1c =====

void FUN_0078db1c(undefined8 *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  __ptr = (void *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
                    /* try { // try from 0078db34 to 0078db3b has its CatchHandler @ 0078db64 */
    (*pcVar2)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0078db88  FUN_0078db88 =====

void FUN_0078db88(long *param_1)

{
  char *pcVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  
  if (*param_1 != 0) {
                    /* try { // try from 0078db9c to 0078dba3 has its CatchHandler @ 0078dd18 */
    <hyper::common::watch::Sender_as_core::ops::drop::Drop>::drop();
    plVar6 = (long *)*param_1;
    do {
      lVar7 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 0078dbc0 to 0078dbc7 has its CatchHandler @ 0078dcdc */
      <alloc::sync::[n]::alloc::sync::Arc<hyper::common::watch::Shared>>::drop_slow(param_1);
    }
                    /* try { // try from 0078dbc8 to 0078dbcf has its CatchHandler @ 0078dce4 */
    FUN_0079377c(param_1 + 3);
    plVar6 = (long *)param_1[3];
    if (plVar6 != (long *)0x0) {
      do {
        lVar7 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 0078dbf0 to 0078dbf7 has its CatchHandler @ 0078dca4 */
        <alloc::sync::[n]::alloc::sync::Arc<futures_channel::mpsc::BoundedInner<core::result::Result<bytes::bytes::Bytes,hyper::error::Error>>>>
        ::drop_slow(param_1 + 3);
      }
    }
    param_1 = param_1 + 1;
    lVar7 = *param_1;
    pcVar1 = (char *)(lVar7 + 0x88);
    *(undefined4 *)(lVar7 + 0xa8) = 1;
    do {
      cVar3 = *pcVar1;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar4) {
        *pcVar1 = '\x01';
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (cVar3 == '\0') {
      lVar2 = *(long *)(lVar7 + 0x78);
      *(undefined8 *)(lVar7 + 0x78) = 0;
      *(undefined4 *)(lVar7 + 0x88) = 0;
      if (lVar2 != 0) {
                    /* try { // try from 0078dc34 to 0078dc6b has its CatchHandler @ 0078dcac */
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar7 + 0x80));
      }
    }
    pcVar1 = (char *)(lVar7 + 0xa0);
    do {
      cVar3 = *pcVar1;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar4) {
        *pcVar1 = '\x01';
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (cVar3 == '\0') {
      lVar2 = *(long *)(lVar7 + 0x90);
      *(undefined8 *)(lVar7 + 0x90) = 0;
      *(undefined4 *)(lVar7 + 0xa0) = 0;
      if (lVar2 != 0) {
        (**(code **)(lVar2 + 8))(*(undefined8 *)(lVar7 + 0x98));
      }
    }
    plVar6 = (long *)*param_1;
    do {
      lVar7 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<futures_channel::oneshot::Inner<http::header::map::HeaderMap>>>
      ::drop_slow(param_1);
      return;
    }
  }
  return;
}


// ===== 0078dd60  FUN_0078dd60 =====

void FUN_0078dd60(byte param_1,long *param_2)

{
  if (param_1 < 2) {
    return;
  }
                    /* try { // try from 0078dd94 to 0078dd9b has its CatchHandler @ 0078ddb4 */
  (**(code **)(*param_2 + 0x20))(param_2 + 3,param_2[1],param_2[2]);
  free(param_2);
  return;
}


// ===== 0078ddd0  FUN_0078ddd0 =====

void FUN_0078ddd0(long param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    free(*(void **)(param_1 + 0x48));
  }
                    /* try { // try from 0078de00 to 0078de07 has its CatchHandler @ 0078de94 */
  FUN_0078aa8c(param_1 + 0x18);
  if (*(long *)(param_1 + 0x18) != 0) {
    free(*(void **)(param_1 + 0x20));
  }
  __ptr = *(void **)(param_1 + 0x38);
  lVar2 = *(long *)(param_1 + 0x40) + 1;
  lVar1 = (long)__ptr + 0x38;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 0078de48 to 0078de4b has its CatchHandler @ 0078dec4 */
    (**(code **)(*(long *)(lVar1 + -0x18) + 0x20))
              (lVar1,*(undefined8 *)(lVar1 + -0x10),*(undefined8 *)(lVar1 + -8));
    lVar1 = lVar1 + 0x48;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0078df18  FUN_0078df18 =====

void FUN_0078df18(undefined8 *param_1)

{
  code *pcVar1;
  void *__ptr;
  undefined8 *puVar2;
  
  __ptr = (void *)*param_1;
  if (__ptr != (void *)0x0) {
    puVar2 = (undefined8 *)param_1[1];
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
                    /* try { // try from 0078df40 to 0078df47 has its CatchHandler @ 0078df8c */
      (*pcVar1)(__ptr);
    }
    if (puVar2[1] != 0) {
      free(__ptr);
    }
  }
  if (*(char *)((long)param_1 + 0x29) == '\x02') {
    return;
  }
  FUN_0078dfc8(param_1 + 2);
  return;
}


// ===== 0078dfc8  FUN_0078dfc8 =====

void FUN_0078dfc8(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  void *__ptr;
  undefined8 *puVar6;
  
  __ptr = (void *)*param_1;
  if (__ptr != (void *)0x0) {
    puVar6 = (undefined8 *)param_1[1];
    pcVar3 = (code *)*puVar6;
    if (pcVar3 != (code *)0x0) {
                    /* try { // try from 0078dff0 to 0078dff7 has its CatchHandler @ 0078e04c */
      (*pcVar3)(__ptr);
    }
    if (puVar6[1] != 0) {
      free(__ptr);
    }
  }
  plVar4 = (long *)param_1[2];
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
    <alloc::sync::[n]::alloc::sync::Arc<core::sync::atomic::Atomic<bool>>>::drop_slow(param_1 + 2);
    return;
  }
  return;
}


// ===== 0078e098  FUN_0078e098 =====

void FUN_0078e098(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 0078e0b0  FUN_0078e0b0 =====

void FUN_0078e0b0(long param_1,long param_2)

{
  char *pcVar1;
  long *plVar2;
  char cVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  if (param_2 != 0) {
    lVar8 = 0;
    do {
      plVar2 = (long *)(param_1 + lVar8 * 8);
      lVar8 = lVar8 + 1;
      lVar9 = *plVar2;
      pcVar1 = (char *)(lVar9 + 0x60);
      *(undefined4 *)(lVar9 + 0x80) = 1;
      do {
        cVar3 = *pcVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
        if (bVar6) {
          *pcVar1 = '\x01';
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (cVar3 == '\0') {
        lVar4 = *(long *)(lVar9 + 0x50);
        *(undefined8 *)(lVar9 + 0x50) = 0;
        *(undefined4 *)(lVar9 + 0x60) = 0;
        if (lVar4 != 0) {
                    /* try { // try from 0078e13c to 0078e13f has its CatchHandler @ 0078e1bc */
          (**(code **)(lVar4 + 8))(*(undefined8 *)(lVar9 + 0x58));
        }
      }
      pcVar1 = (char *)(lVar9 + 0x78);
      do {
        cVar3 = *pcVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
        if (bVar6) {
          *pcVar1 = '\x01';
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (cVar3 == '\0') {
        lVar4 = *(long *)(lVar9 + 0x68);
        *(undefined8 *)(lVar9 + 0x68) = 0;
        if (lVar4 != 0) {
                    /* try { // try from 0078e164 to 0078e167 has its CatchHandler @ 0078e1b0 */
          (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar9 + 0x70));
        }
        pcVar1[0] = '\0';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
      }
      plVar7 = (long *)*plVar2;
      do {
        lVar9 = *plVar7;
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar6) {
          *plVar7 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 0078e188 to 0078e18f has its CatchHandler @ 0078e1ec */
        <alloc::sync::[n]::alloc::sync::Arc<futures_channel::oneshot::Inner<hyper_util::client::legacy::client::PoolClient<reqwest::async_impl::body::Body>>>>
        ::drop_slow(plVar2);
      }
    } while (lVar8 != param_2);
  }
  return;
}


// ===== 0078e218  FUN_0078e218 =====

void FUN_0078e218(byte *param_1)

{
  long *__ptr;
  
  if (1 < *param_1) {
    __ptr = *(long **)(param_1 + 8);
                    /* try { // try from 0078e248 to 0078e24f has its CatchHandler @ 0078e280 */
    (**(code **)(*__ptr + 0x20))(__ptr + 3,__ptr[1],__ptr[2]);
    free(__ptr);
  }
                    /* WARNING: Could not recover jumptable at 0x0078e27c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x20))
            (param_1 + 0x28,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  return;
}


// ===== 0078e2b4  FUN_0078e2b4 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0078e2b4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong *puVar1;
  long lVar2;
  byte bVar3;
  ulong uVar4;
  undefined2 uVar5;
  bool bVar6;
  uint6 uVar7;
  uint7 uVar8;
  undefined *puVar9;
  long *******ppppppplVar10;
  long *******ppppppplVar11;
  long *******ppppppplVar12;
  long *******ppppppplVar13;
  long *******ppppppplVar14;
  long *******ppppppplVar15;
  long *******ppppppplVar16;
  long *******ppppppplVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long *******ppppppplVar24;
  long *******ppppppplVar25;
  long *******ppppppplVar26;
  long *******ppppppplVar27;
  long *******ppppppplVar28;
  long *******ppppppplVar29;
  long *******ppppppplVar30;
  long *******ppppppplVar31;
  long *******ppppppplVar32;
  long *******ppppppplVar33;
  long *******ppppppplVar34;
  code *pcVar35;
  byte bVar36;
  long *******ppppppplVar37;
  long *******ppppppplVar38;
  long *******ppppppplVar39;
  void *__dest;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 uVar40;
  undefined1 uVar41;
  uint extraout_w8_01;
  uint uVar42;
  undefined8 extraout_x8;
  ulong uVar43;
  ulong extraout_x8_00;
  long *******ppppppplVar44;
  long lVar45;
  undefined8 uVar46;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  long ******pppppplVar47;
  ulong uVar48;
  long lVar49;
  long *******unaff_x20;
  char cVar50;
  ulong uVar51;
  long *******ppppppplVar52;
  undefined8 *puVar53;
  undefined8 *puVar54;
  long *******ppppppplVar55;
  long *******unaff_x24;
  long *plVar56;
  long *******ppppppplVar57;
  uint uVar58;
  long *******unaff_x26;
  undefined1 auVar59 [16];
  long *******local_1320;
  uint local_130c;
  long *******local_1308;
  ulong local_1300;
  undefined8 *local_12f8;
  ulong local_12f0;
  ulong local_12e8;
  uint local_12dc;
  long *******local_12d8;
  long *******local_12d0;
  long *******local_12c8;
  ulong local_12c0;
  ulong uStack_12b8;
  long *******local_12b0;
  long *******ppppppplStack_12a8;
  long *******local_12a0;
  uint local_1294;
  ulong local_1288;
  long *******local_1280;
  long *******local_1278;
  long *******local_1270;
  long *******ppppppplStack_1268;
  undefined1 auStack_1160 [256];
  undefined8 local_1060;
  long *******local_1030;
  long *******ppppppplStack_1028;
  long *******local_1020;
  long *******ppppppplStack_1018;
  long *******local_1010;
  long *******ppppppplStack_1008;
  long *******ppppppplStack_1000;
  long *******ppppppplStack_ff8;
  long *******local_ff0;
  long *******ppppppplStack_fe8;
  undefined8 uStack_fe0;
  undefined8 uStack_fd8;
  undefined8 local_fd0;
  undefined8 uStack_fc8;
  undefined8 uStack_fc0;
  undefined8 uStack_fb8;
  long *******local_fb0;
  long *******ppppppplStack_fa8;
  long *******ppppppplStack_fa0;
  long *******ppppppplStack_f98;
  long *******local_f90;
  long *******ppppppplStack_f88;
  long *******local_f80;
  long *******local_f70;
  long *******ppppppplStack_f68;
  long *******ppppppplStack_f60;
  long *******ppppppplStack_f58;
  long *******local_f50;
  long *******ppppppplStack_f48;
  long *******local_f40;
  long *******ppppppplStack_f38;
  long *******local_f30;
  long *******ppppppplStack_f28;
  long *******local_f20;
  long *******ppppppplStack_f18;
  long *******local_f10;
  undefined8 uStack_f08;
  undefined8 local_f00;
  undefined8 uStack_ef8;
  undefined8 local_ef0;
  undefined8 uStack_ee8;
  undefined8 local_ee0;
  long *******ppppppplStack_ed8;
  long *******local_ed0;
  long *******ppppppplStack_ec8;
  long *******local_ec0;
  long *******ppppppplStack_eb8;
  long *******local_eb0;
  long *******ppppppplStack_ea8;
  long *******local_ea0;
  long *******ppppppplStack_e98;
  long *******local_e90;
  long *******local_e80;
  long *******ppppppplStack_e78;
  long *******local_e70;
  long *******ppppppplStack_e68;
  long *******local_e60;
  long *******ppppppplStack_e58;
  long *******local_e50;
  long *******ppppppplStack_e48;
  long *******local_e40;
  long *******local_e30;
  long *******ppppppplStack_e28;
  long *******local_e20;
  long *******ppppppplStack_e18;
  long *******local_e10;
  long *******ppppppplStack_e08;
  undefined4 local_df8;
  undefined3 uStack_df4;
  long *******local_df0;
  long *******ppppppplStack_de8;
  long *******local_de0;
  long *******ppppppplStack_dd8;
  long *******local_dd0;
  long *******ppppppplStack_dc8;
  long *******local_dc0;
  undefined4 local_db8;
  undefined3 uStack_db4;
  long *******local_db0;
  long *******ppppppplStack_da8;
  long *******local_da0;
  long *******ppppppplStack_d98;
  long *******local_d90;
  long *******ppppppplStack_d88;
  long *******local_d80;
  long *******local_d70;
  long *******ppppppplStack_d68;
  long *******local_d60;
  long *******ppppppplStack_d58;
  long *******local_d50;
  long *******ppppppplStack_d48;
  long *******local_d40;
  undefined8 uStack_d38;
  undefined8 local_d30;
  undefined8 uStack_d28;
  undefined8 local_d20;
  undefined8 uStack_d18;
  undefined8 local_d10;
  long *******local_d00;
  long *******ppppppplStack_cf8;
  long *******local_cf0;
  long *******local_ce0;
  long *******ppppppplStack_cd8;
  long *******local_cd0;
  long *******ppppppplStack_cc8;
  long *******local_cc0;
  long *******ppppppplStack_cb8;
  long *******local_cb0;
  long *******ppppppplStack_ca8;
  long *******local_ca0;
  long *******ppppppplStack_c98;
  long *******local_c90;
  long *******ppppppplStack_c88;
  long *******ppppppplStack_c80;
  long *******ppppppplStack_c78;
  long *******ppppppplStack_c70;
  long *******local_c68;
  long *******ppppppplStack_c60;
  long *******local_c58;
  undefined8 uStack_c50;
  undefined8 local_c48;
  undefined8 uStack_c40;
  undefined8 local_c38;
  undefined8 uStack_c30;
  undefined8 local_c28;
  long *******local_c20;
  long *******ppppppplStack_c18;
  long *******local_c10;
  long *******ppppppplStack_c08;
  long *******local_c00;
  long *******ppppppplStack_bf8;
  long *******local_bf0;
  long *******ppppppplStack_be8;
  long *******local_be0;
  long *******ppppppplStack_bd8;
  undefined8 local_bd0;
  undefined8 uStack_bc8;
  undefined8 local_bc0;
  undefined8 uStack_bb8;
  undefined8 local_bb0;
  undefined8 uStack_ba8;
  long *******local_ba0;
  long *******ppppppplStack_b98;
  long *******local_b90;
  long *******ppppppplStack_b88;
  long *******local_b80;
  long *******ppppppplStack_b78;
  long *******local_b70;
  long *******local_b60;
  long *******ppppppplStack_b58;
  long *******local_b50;
  long *******ppppppplStack_b48;
  long *******local_b40;
  long *******ppppppplStack_b38;
  long *******local_b30;
  long *******ppppppplStack_b28;
  long *******local_b20;
  long *******ppppppplStack_b18;
  long *******local_b10;
  long *******ppppppplStack_b08;
  undefined4 local_af8;
  undefined3 uStack_af4;
  long *******local_af0;
  long *******ppppppplStack_ae8;
  long *******local_ae0;
  long *******ppppppplStack_ad8;
  long *******local_ad0;
  long *******ppppppplStack_ac8;
  long *******local_ac0;
  undefined4 local_ab8;
  undefined3 uStack_ab4;
  long *******local_ab0;
  long *******ppppppplStack_aa8;
  long *******local_aa0;
  long *******ppppppplStack_a98;
  long *******local_a90;
  long *******ppppppplStack_a88;
  long *******local_a80;
  undefined4 local_a78;
  undefined3 uStack_a74;
  long *******local_a70;
  long *******ppppppplStack_a68;
  long *******local_a60;
  long *******ppppppplStack_a58;
  long *******local_a50;
  long *******ppppppplStack_a48;
  long *******local_a40;
  undefined4 local_a38;
  undefined3 uStack_a34;
  long *******local_a30;
  long *******ppppppplStack_a28;
  long *******local_a20;
  long *******ppppppplStack_a18;
  long *******local_a10;
  long *******ppppppplStack_a08;
  long *******local_a00;
  long *******local_9f0;
  long *******ppppppplStack_9e8;
  long *******local_9e0;
  long *******ppppppplStack_9d8;
  long *******local_9d0;
  long *******ppppppplStack_9c8;
  long *******local_9c0;
  long *******ppppppplStack_9b8;
  long *******local_9b0;
  long *******ppppppplStack_9a8;
  long *******local_9a0;
  long *******ppppppplStack_998;
  long *******local_990;
  long *******ppppppplStack_988;
  long *******local_980;
  undefined8 uStack_978;
  undefined8 local_970;
  undefined8 uStack_968;
  undefined8 local_960;
  undefined8 uStack_958;
  undefined8 local_950;
  undefined8 local_850;
  long *******ppppppplStack_848;
  long *******local_840;
  long *******ppppppplStack_838;
  long *******local_830;
  undefined8 uStack_828;
  long *******local_820;
  undefined8 uStack_818;
  undefined8 local_810;
  undefined8 uStack_808;
  undefined8 local_800;
  undefined8 uStack_7f8;
  undefined8 local_7f0;
  undefined8 uStack_7e8;
  undefined8 local_7e0;
  undefined8 uStack_7d8;
  undefined8 local_7d0;
  undefined8 uStack_7c8;
  undefined8 local_7c0;
  undefined8 uStack_7b8;
  undefined8 local_7b0;
  undefined8 uStack_7a8;
  undefined8 local_7a0;
  undefined8 uStack_798;
  undefined8 local_790;
  undefined8 uStack_788;
  undefined8 local_780;
  undefined8 uStack_778;
  undefined8 local_770;
  undefined8 uStack_768;
  undefined8 local_760;
  undefined8 uStack_758;
  undefined8 local_6b0;
  long *******ppppppplStack_6a8;
  long *******local_6a0;
  long *******ppppppplStack_698;
  long *******local_690;
  undefined8 uStack_688;
  undefined8 local_680;
  undefined8 uStack_678;
  long *******local_670;
  long *******ppppppplStack_668;
  long *******local_660;
  long *******ppppppplStack_658;
  long *******local_650;
  long *******ppppppplStack_648;
  long *******local_640;
  undefined8 uStack_638;
  long *******local_630;
  long *******ppppppplStack_628;
  long *******local_620;
  long *******ppppppplStack_618;
  long *******local_610;
  long *******ppppppplStack_608;
  long *******local_600;
  long *******ppppppplStack_5f8;
  long *******local_5f0;
  long *******ppppppplStack_5e8;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  long *******local_5b0;
  long *******ppppppplStack_5a8;
  long *******local_5a0;
  long *******ppppppplStack_598;
  long *******local_590;
  long *******ppppppplStack_588;
  long *******local_4d0;
  long *******ppppppplStack_4c8;
  long *******local_4c0;
  long *******ppppppplStack_4b8;
  long *******local_4b0;
  long *******ppppppplStack_4a8;
  ulong local_4a0;
  long *******ppppppplStack_498;
  long *******local_490;
  long *******ppppppplStack_488;
  long *******local_480;
  long *******ppppppplStack_478;
  long *******local_470;
  long *******ppppppplStack_468;
  undefined8 local_460;
  long *******local_450;
  long *******ppppppplStack_448;
  long *******local_440;
  long *******ppppppplStack_438;
  long *******local_430;
  ulong uStack_428;
  ulong local_420;
  long *******ppppppplStack_418;
  long *******local_410;
  long *******ppppppplStack_408;
  long *******local_400;
  long *******ppppppplStack_3f8;
  long *******local_3f0;
  long *******ppppppplStack_3e8;
  undefined8 local_3e0;
  long *******local_3d8;
  long *******ppppppplStack_3d0;
  long *******local_3c8;
  undefined4 local_2e8;
  undefined3 uStack_2e4;
  long *******local_2e0;
  long *******ppppppplStack_2d8;
  long *******local_2d0;
  long *******ppppppplStack_2c8;
  long *******local_2c0;
  long *******ppppppplStack_2b8;
  long *******local_2b0;
  undefined4 local_2a8;
  undefined3 uStack_2a4;
  long *******local_2a0;
  long *******ppppppplStack_298;
  long *******local_290;
  long *******ppppppplStack_288;
  long *******local_280;
  long *******ppppppplStack_278;
  long *******local_270;
  undefined4 local_268;
  undefined3 uStack_264;
  long *******local_260;
  long *******ppppppplStack_258;
  long *******local_250;
  long *******ppppppplStack_248;
  long *******local_240;
  long *******ppppppplStack_238;
  long *******local_230;
  undefined8 local_220;
  long *******ppppppplStack_218;
  long *******local_210;
  long *******ppppppplStack_208;
  long *******local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  long *******ppppppplStack_1e8;
  long *******local_1e0;
  long *******ppppppplStack_1d8;
  long *******local_1d0;
  long *******ppppppplStack_1c8;
  long *******local_1c0;
  long *******ppppppplStack_1b8;
  undefined8 local_1b0;
  long *******ppppppplStack_1a8;
  long *******local_1a0;
  long *******ppppppplStack_198;
  long *******local_190;
  long *******ppppppplStack_188;
  long *******local_180;
  long *******ppppppplStack_178;
  long *******local_170;
  long *******ppppppplStack_168;
  long *******local_160;
  long *******ppppppplStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 auStack_71 [17];
  
  local_1060 = 0;
  bVar36 = *(byte *)(param_2 + 0x161);
  if (bVar36 < 2) {
    if (bVar36 == 0) {
      *(undefined1 *)((long)param_2 + 0xb09) = 1;
      param_2[0x55] = param_2[0x15];
      param_2[0x54] = param_2[0x14];
      param_2[0x57] = param_2[0x17];
      param_2[0x56] = param_2[0x16];
      param_2[0x4b] = param_2[0xb];
      param_2[0x4a] = param_2[10];
      param_2[0x4d] = param_2[0xd];
      param_2[0x4c] = param_2[0xc];
      param_2[0x4f] = param_2[0xf];
      param_2[0x4e] = param_2[0xe];
      param_2[0x51] = param_2[0x11];
      param_2[0x50] = param_2[0x10];
      param_2[0x53] = param_2[0x13];
      param_2[0x52] = param_2[0x12];
      param_2[0x43] = param_2[3];
      param_2[0x42] = param_2[2];
      param_2[0x45] = param_2[5];
      param_2[0x44] = param_2[4];
      param_2[0x41] = param_2[1];
      param_2[0x40] = *param_2;
      param_2[0x47] = param_2[7];
      param_2[0x46] = param_2[6];
      param_2[0x49] = param_2[9];
      param_2[0x48] = param_2[8];
      param_2[0x75] = param_2[0x35];
      param_2[0x74] = param_2[0x34];
      param_2[0x77] = param_2[0x37];
      param_2[0x76] = param_2[0x36];
      param_2[0x6d] = param_2[0x2d];
      param_2[0x6c] = param_2[0x2c];
      param_2[0x6f] = param_2[0x2f];
      param_2[0x6e] = param_2[0x2e];
      param_2[0x71] = param_2[0x31];
      param_2[0x70] = param_2[0x30];
      param_2[0x73] = param_2[0x33];
      param_2[0x72] = param_2[0x32];
      param_2[0x65] = param_2[0x25];
      param_2[100] = param_2[0x24];
      param_2[0x67] = param_2[0x27];
      param_2[0x66] = param_2[0x26];
      param_2[0x69] = param_2[0x29];
      param_2[0x68] = param_2[0x28];
      param_2[0x6b] = param_2[0x2b];
      param_2[0x6a] = param_2[0x2a];
      param_2[0x59] = param_2[0x19];
      param_2[0x58] = param_2[0x18];
      param_2[0x5b] = param_2[0x1b];
      param_2[0x5a] = param_2[0x1a];
      param_2[0x5d] = param_2[0x1d];
      param_2[0x5c] = param_2[0x1c];
      param_2[0x5f] = param_2[0x1f];
      param_2[0x5e] = param_2[0x1e];
      param_2[0x61] = param_2[0x21];
      param_2[0x60] = param_2[0x20];
      param_2[99] = param_2[0x23];
      param_2[0x62] = param_2[0x22];
      param_2[0x79] = param_2[0x39];
      param_2[0x78] = param_2[0x38];
      param_2[0x7b] = param_2[0x3b];
      param_2[0x7a] = param_2[0x3a];
      param_2[0x7d] = param_2[0x3d];
      param_2[0x7c] = param_2[0x3c];
      param_2[0x7f] = param_2[0x3f];
      param_2[0x7e] = param_2[0x3e];
                    /* try { // try from 0078e390 to 0078e39b has its CatchHandler @ 0078e544 */
      FUN_0079362c(param_2 + 0x80,param_2 + 0x66);
      uVar46 = extraout_x8;
LAB_0078e548:
      uVar40 = (undefined1)uVar46;
      ppppppplStack_158 = (long *******)param_2[0x73];
      local_160 = (long *******)param_2[0x72];
      uStack_148 = param_2[0x75];
      local_150 = param_2[0x74];
      cVar50 = *(char *)(param_2 + 0x7a);
      *(undefined1 *)((long)param_2 + 0xb09) = 0;
      uStack_138 = param_2[0x77];
      local_140 = param_2[0x76];
      uStack_128 = param_2[0x79];
      local_130 = param_2[0x78];
      ppppppplStack_198 = (long *******)param_2[0x6b];
      local_1a0 = (long *******)param_2[0x6a];
      ppppppplStack_188 = (long *******)param_2[0x6d];
      local_190 = (long *******)param_2[0x6c];
      ppppppplStack_178 = (long *******)param_2[0x6f];
      local_180 = (long *******)param_2[0x6e];
      ppppppplStack_168 = (long *******)param_2[0x71];
      local_170 = (long *******)param_2[0x70];
      ppppppplStack_1d8 = (long *******)param_2[99];
      local_1e0 = (long *******)param_2[0x62];
      ppppppplStack_1c8 = (long *******)param_2[0x65];
      local_1d0 = (long *******)param_2[100];
      ppppppplStack_1b8 = (long *******)param_2[0x67];
      local_1c0 = (long *******)param_2[0x66];
      ppppppplStack_1a8 = (long *******)param_2[0x69];
      local_1b0 = (long *******)param_2[0x68];
      ppppppplStack_218 = (long *******)param_2[0x5b];
      local_220 = (long *******)param_2[0x5a];
      ppppppplStack_208 = (long *******)param_2[0x5d];
      local_210 = (long *******)param_2[0x5c];
      uStack_1f8 = (long *******)param_2[0x5f];
      local_200 = (long *******)param_2[0x5e];
      ppppppplStack_1e8 = (long *******)param_2[0x61];
      local_1f0 = (long *******)param_2[0x60];
      if (cVar50 != '\0') {
        if (cVar50 == '\x02') {
          puVar53 = (undefined8 *)param_2[0x7b];
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          unaff_x20 = (long *******)FUN_004b25a4(0x20,8);
          if (unaff_x20 == (long *******)0x0) {
                    /* try { // try from 0078e7a4 to 0078e7af has its CatchHandler @ 0078e7e8 */
                    /* WARNING: Subroutine does not return */
            alloc::alloc::handle_alloc_error(8,0x20);
          }
                    /* try { // try from 0078e5e4 to 0078e5ef has its CatchHandler @ 0078e7b4 */
          (**(code **)*puVar53)(&local_450,puVar53 + 3,puVar53[1],puVar53[2]);
          unaff_x20[1] = (long ******)ppppppplStack_448;
          *unaff_x20 = (long ******)local_450;
          unaff_x20[3] = (long ******)ppppppplStack_438;
          unaff_x20[2] = (long ******)local_440;
          uVar40 = extraout_w8;
        }
        else {
          uVar40 = *(undefined1 *)((long)param_2 + 0x3d1);
        }
      }
      local_850._0_2_ = CONCAT11(uVar40,cVar50);
                    /* try { // try from 0078e624 to 0078e62f has its CatchHandler @ 0078e7cc */
      ppppppplStack_848 = unaff_x20;
      (**(code **)param_2[0x7c])(&local_840,param_2 + 0x7f,param_2[0x7d],param_2[0x7e]);
      ppppppplStack_5e8 = ppppppplStack_158;
      local_5f0 = local_160;
      puVar53 = param_2 + 0x40;
      uStack_5d8 = uStack_148;
      local_5e0 = local_150;
      uStack_5c8 = uStack_138;
      local_5d0 = local_140;
      uStack_5b8 = uStack_128;
      local_5c0 = local_130;
      ppppppplStack_618 = ppppppplStack_188;
      local_620 = local_190;
      ppppppplStack_628 = ppppppplStack_198;
      local_630 = local_1a0;
      ppppppplStack_5f8 = ppppppplStack_168;
      local_600 = local_170;
      ppppppplStack_608 = ppppppplStack_178;
      local_610 = local_180;
      ppppppplStack_658 = ppppppplStack_1c8;
      local_660 = local_1d0;
      ppppppplStack_668 = ppppppplStack_1d8;
      local_670 = local_1e0;
      uStack_638 = ppppppplStack_1a8;
      local_640 = local_1b0;
      ppppppplStack_648 = ppppppplStack_1b8;
      local_650 = local_1c0;
      ppppppplStack_698 = ppppppplStack_208;
      local_6a0 = local_210;
      ppppppplStack_6a8 = ppppppplStack_218;
      local_6b0 = local_220;
      uStack_688 = uStack_1f8;
      local_690 = local_200;
      uStack_678 = ppppppplStack_1e8;
      local_680 = local_1f0;
      ppppppplStack_5a8 = ppppppplStack_848;
      local_5b0 = local_850;
      ppppppplStack_598 = ppppppplStack_838;
      local_5a0 = local_840;
      ppppppplStack_588 = uStack_828;
      local_590 = local_830;
      memcpy(auStack_1160,&local_6b0,0x130);
      memcpy(param_2 + 0x8b,auStack_1160,0x130);
      param_2[0xb1] = puVar53;
      *(undefined1 *)(param_2 + 0xd3) = 0;
LAB_0078e700:
      param_2[0xb2] = puVar53;
      param_2[0xda] = puVar53;
      param_2[0xcc] = param_2[0xa4];
      param_2[0xcb] = param_2[0xa3];
      param_2[0xce] = param_2[0xa6];
      param_2[0xcd] = param_2[0xa5];
      *(undefined1 *)(param_2 + 0x160) = 0;
      param_2[0xd0] = param_2[0xa8];
      param_2[0xcf] = param_2[0xa7];
      param_2[0xd2] = param_2[0xaa];
      param_2[0xd1] = param_2[0xa9];
      param_2[0xc4] = param_2[0x9c];
      param_2[0xc3] = param_2[0x9b];
      param_2[0xc6] = param_2[0x9e];
      param_2[0xc5] = param_2[0x9d];
      param_2[200] = param_2[0xa0];
      param_2[199] = param_2[0x9f];
      param_2[0xca] = param_2[0xa2];
      param_2[0xc9] = param_2[0xa1];
      param_2[0xbc] = param_2[0x94];
      param_2[0xbb] = param_2[0x93];
      param_2[0xbe] = param_2[0x96];
      param_2[0xbd] = param_2[0x95];
      param_2[0xc0] = param_2[0x98];
      param_2[0xbf] = param_2[0x97];
      param_2[0xc2] = param_2[0x9a];
      param_2[0xc1] = param_2[0x99];
      param_2[0xb4] = param_2[0x8c];
      param_2[0xb3] = param_2[0x8b];
      param_2[0xb6] = param_2[0x8e];
      param_2[0xb5] = param_2[0x8d];
      param_2[0xb8] = param_2[0x90];
      param_2[0xb7] = param_2[0x8f];
      param_2[0xba] = param_2[0x92];
      param_2[0xb9] = param_2[0x91];
      param_2[0xd7] = param_2[0xae];
      param_2[0xd6] = param_2[0xad];
      param_2[0xd5] = param_2[0xac];
      param_2[0xd4] = param_2[0xab];
      *(undefined2 *)((long)param_2 + 0x699) = 1;
      param_2[0xd9] = param_2[0xb0];
      param_2[0xd8] = param_2[0xaf];
LAB_0078e77c:
      puVar54 = param_2 + 0xd4;
      param_2[0xdb] = puVar53;
      param_2[0xdd] = param_2[0xd5];
      param_2[0xdc] = *puVar54;
      param_2[0xdf] = param_2[0xd7];
      param_2[0xde] = param_2[0xd6];
      param_2[0xe1] = param_2[0xd9];
      param_2[0xe0] = param_2[0xd8];
      cVar50 = *(char *)(param_2 + 0xdc);
      do {
        uVar40 = SUB81(puVar54,0);
        if (cVar50 != '\0') {
          if (cVar50 == '\x02') {
            puVar54 = (undefined8 *)param_2[0xdd];
            __rustc::__rust_no_alloc_shim_is_unstable_v2();
            unaff_x24 = (long *******)FUN_004b25a4(0x20,8);
            if (unaff_x24 == (long *******)0x0) {
                    /* try { // try from 0078e854 to 0078e85f has its CatchHandler @ 0078e87c */
                    /* WARNING: Subroutine does not return */
              alloc::alloc::handle_alloc_error(8,0x20);
            }
                    /* try { // try from 0078e82c to 0078e83b has its CatchHandler @ 0078e864 */
            (**(code **)*puVar54)(&local_220,puVar54 + 3,puVar54[1],puVar54[2]);
            unaff_x24[1] = (long ******)ppppppplStack_218;
            *unaff_x24 = (long ******)local_220;
            unaff_x24[3] = (long ******)ppppppplStack_208;
            unaff_x24[2] = (long ******)local_210;
            uVar40 = extraout_w8_00;
          }
          else {
            uVar40 = *(undefined1 *)((long)param_2 + 0x6e1);
          }
        }
        local_6b0._0_2_ = CONCAT11(uVar40,cVar50);
                    /* try { // try from 0078f60c to 0078f617 has its CatchHandler @ 00791254 */
        ppppppplStack_6a8 = unaff_x24;
        (**(code **)param_2[0xde])(&local_6a0,param_2 + 0xe1,param_2[0xdf],param_2[0xe0]);
        param_2[0xe8] = puVar53;
        ppppppplStack_b28 = ppppppplStack_6a8;
        local_b30 = local_6b0;
        ppppppplStack_b18 = ppppppplStack_698;
        local_b20 = local_6a0;
        ppppppplStack_b08 = uStack_688;
        local_b10 = local_690;
        param_2[0xe3] = ppppppplStack_6a8;
        param_2[0xe2] = local_6b0;
        param_2[0xe5] = ppppppplStack_698;
        param_2[0xe4] = local_6a0;
        param_2[0xe7] = uStack_688;
        param_2[0xe6] = local_690;
        *(undefined1 *)(param_2 + 299) = 0;
LAB_0078f64c:
        *(undefined4 *)((long)param_2 + 0x95a) = 0;
        *(undefined2 *)((long)param_2 + 0x95e) = 0;
        param_2[0xeb] = param_2[0xe3];
        param_2[0xea] = param_2[0xe2];
        param_2[0xe9] = puVar53;
        *(undefined1 *)((long)param_2 + 0x95f) = 1;
        param_2[0xed] = param_2[0xe5];
        param_2[0xec] = param_2[0xe4];
        param_2[0xef] = param_2[0xe7];
        param_2[0xee] = param_2[0xe6];
        uVar43 = puVar53[0x18];
        if (uVar43 != 0) {
          cVar50 = *(char *)(param_2 + 0xea);
          if (cVar50 != '\0') {
            if (cVar50 == '\x02') {
              puVar54 = (undefined8 *)param_2[0xeb];
              __rustc::__rust_no_alloc_shim_is_unstable_v2();
              unaff_x26 = (long *******)FUN_004b25a4(0x20,8);
              if (unaff_x26 == (long *******)0x0) {
                    /* try { // try from 00790ffc to 00791007 has its CatchHandler @ 007913d4 */
                    /* WARNING: Subroutine does not return */
                alloc::alloc::handle_alloc_error(8,0x20);
              }
                    /* try { // try from 0078f6c0 to 0078f6cb has its CatchHandler @ 00791134 */
              (**(code **)*puVar54)(&local_850,puVar54 + 3,puVar54[1],puVar54[2]);
              unaff_x26[1] = (long ******)ppppppplStack_848;
              *unaff_x26 = (long ******)local_850;
              unaff_x26[3] = (long ******)ppppppplStack_838;
              unaff_x26[2] = (long ******)local_840;
              uVar43 = extraout_x8_00;
            }
            else {
              uVar43 = (ulong)*(byte *)((long)param_2 + 0x751);
            }
          }
          local_220._0_2_ = CONCAT11((char)uVar43,cVar50);
                    /* try { // try from 0078f870 to 0078f87b has its CatchHandler @ 007911f0 */
          ppppppplStack_218 = unaff_x26;
          (**(code **)param_2[0xec])(&local_210,param_2 + 0xef,param_2[0xed],param_2[0xee]);
          ppppppplVar44 = (long *******)puVar53[0x18];
          if (ppppppplVar44 != (long *******)0x0) {
            do {
              pppppplVar47 = *ppppppplVar44;
              cVar50 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(ppppppplVar44,0x10);
              if (bVar6) {
                *ppppppplVar44 = (long ******)((long)pppppplVar47 + 1);
                cVar50 = ExclusiveMonitorsStatus();
              }
            } while (cVar50 != '\0');
            if ((long)pppppplVar47 < 0) goto LAB_0078e888;
          }
          ppppppplStack_9e8 = ppppppplStack_218;
          local_9f0 = local_220;
          ppppppplStack_9d8 = ppppppplStack_208;
          local_9e0 = local_210;
          ppppppplStack_218 = (long *******)param_2[0xeb];
          local_220 = (long *******)param_2[0xea];
          ppppppplStack_208 = (long *******)param_2[0xed];
          local_210 = (long *******)param_2[0xec];
          ppppppplStack_9c8 = uStack_1f8;
          local_9d0 = local_200;
          ppppppplStack_9b8 = (long *******)0x0;
          uStack_1f8 = (long *******)param_2[0xef];
          local_200 = (long *******)param_2[0xee];
          *(undefined1 *)((long)param_2 + 0x95f) = 0;
                    /* try { // try from 0078f8d4 to 0078f8eb has its CatchHandler @ 007911d8 */
          local_9c0 = ppppppplVar44;
          FUN_00791730(&local_9b0,param_2[0xe9],&local_220);
          ppppppplStack_218 = ppppppplStack_9e8;
          local_220 = local_9f0;
          ppppppplStack_208 = ppppppplStack_9d8;
          local_210 = local_9e0;
          *(undefined1 *)((long)param_2 + 0x959) = *(undefined1 *)(param_2[0xe9] + 0xca);
          uStack_1f8 = ppppppplStack_9c8;
          local_200 = local_9d0;
          ppppppplStack_1e8 = ppppppplStack_9b8;
          local_1f0 = local_9c0;
          memcpy(&local_1e0,&local_9b0,0x160);
          memcpy(&local_850,&local_220,0x1a0);
          memcpy(param_2 + 300,&local_850,0x1a0);
LAB_0078f94c:
                    /* try { // try from 0078f950 to 0078f95f has its CatchHandler @ 00791284 */
          FUN_007d6a84(&local_6b0,param_2 + 300,param_3);
          if (uStack_638 != (long *******)0xfffffffffffffffd) {
            *(undefined2 *)((long)param_2 + 0x95d) = 0x101;
            memcpy(param_2 + 0xf0,&local_6b0,0x1d8);
            if (param_2[0x134] != -2) {
                    /* try { // try from 0078f998 to 0078f99f has its CatchHandler @ 007911a4 */
              FUN_0078c680(param_2 + 300);
                    /* try { // try from 0078f9a0 to 0078f9a7 has its CatchHandler @ 00791198 */
              FUN_0078be3c(param_2 + 0x134);
            }
            if (param_2[0xff] == -2) {
              cVar50 = *(char *)(param_2 + 0x10e);
              if (cVar50 == '\x02') {
                *(undefined1 *)((long)param_2 + 0x95c) = 1;
                param_2[0x132] = param_2[0x106];
                param_2[0x12d] = param_2[0x101];
                param_2[300] = param_2[0x100];
                param_2[0x12f] = param_2[0x103];
                param_2[0x12e] = param_2[0x102];
                uVar58 = (uint)*(byte *)(param_2 + 0x132);
                *(undefined1 *)((long)param_2 + 0x95b) = 1;
                param_2[0x131] = param_2[0x105];
                param_2[0x130] = param_2[0x104];
                ppppppplStack_448 = (long *******)param_2[0x110];
                local_450 = (long *******)param_2[0x10f];
                ppppppplStack_438 = (long *******)param_2[0x112];
                local_440 = (long *******)param_2[0x111];
                uStack_428 = param_2[0x114];
                local_430 = (long *******)param_2[0x113];
                ppppppplStack_418 = (long *******)param_2[0x116];
                local_420 = param_2[0x115];
                if (*(byte *)(param_2 + 0x132) == 0) {
                  *(undefined1 *)((long)param_2 + 0x95b) = 0;
                  param_2[0x134] = param_2[0x110];
                  param_2[0x133] = param_2[0x10f];
                  param_2[0x136] = param_2[0x112];
                  param_2[0x135] = param_2[0x111];
                  param_2[0x138] = param_2[0x114];
                  param_2[0x137] = param_2[0x113];
                  param_2[0x13a] = param_2[0x116];
                  param_2[0x139] = param_2[0x115];
LAB_0078ff78:
                    /* try { // try from 0078ff78 to 0078ff8f has its CatchHandler @ 007912b4 */
                  FUN_007ccdac(&local_220,param_2 + 0x133,param_3);
                  ppppppplVar10 = local_1f0;
                  ppppppplVar37 = local_200;
                  ppppppplVar38 = ppppppplStack_208;
                  ppppppplVar39 = local_210;
                  ppppppplStack_1268 = ppppppplStack_218;
                  ppppppplVar44 = local_220;
                  cVar50 = (char)local_1b0;
                  if ((char)local_1b0 == -1) {
                    uVar40 = 6;
                    goto LAB_00790f18;
                  }
                  ppppppplStack_298 = local_1e0;
                  local_2a0 = ppppppplStack_1e8;
                  uVar43 = (ulong)uStack_1f8 >> 0x10;
                  uVar58 = (uint)(byte)local_1f0;
                  ppppppplStack_288 = local_1d0;
                  local_290 = ppppppplStack_1d8;
                  uVar42 = (uint)(byte)uStack_1f8;
                  local_130c = (uint)uStack_1f8._1_1_;
                  ppppppplStack_278 = local_1c0;
                  local_280 = ppppppplStack_1c8;
                  local_270 = ppppppplStack_1b8;
                  uStack_2a4 = (undefined3)((ulong)local_1b0 >> 0x28);
                    /* try { // try from 0079002c to 00790033 has its CatchHandler @ 00791244 */
                  local_2a8 = local_1b0._1_4_;
                  FUN_0078c680(param_2 + 0x133);
                  if (cVar50 == '\x02') {
                    if (((uint)ppppppplVar44 & 0xff) == 2) {
                      ppppppplStack_1268 = (long *******)&UNK_00adc260;
                      unaff_x26 = (long *******)0xff;
                      uVar58 = 2;
                      local_1270 = (long *******)0x2;
                      if ((*(byte *)((long)param_2 + 0x959) & 1) != 0) {
                        bVar36 = *(byte *)((long)param_2 + 0x95b);
                        goto joined_r0x00790110;
                      }
                    }
                    __rustc::__rust_no_alloc_shim_is_unstable_v2();
                    local_1270 = (long *******)FUN_004b25a4(1,1);
                    if (local_1270 == (long *******)0x0) {
                    /* try { // try from 00790fec to 00790ff7 has its CatchHandler @ 007913e4 */
                    /* WARNING: Subroutine does not return */
                      alloc::alloc::handle_alloc_error(1,1);
                    }
                    ppppppplStack_1268 = (long *******)&UNK_00adc260;
                    *(char *)local_1270 = (char)ppppppplVar44;
                    uVar58 = 2;
                    unaff_x26 = (long *******)0x2;
                    bVar36 = *(byte *)((long)param_2 + 0x95b);
                  }
                  else {
                    local_12f0 = (ulong)ppppppplVar10 >> 8;
                    unaff_x26 = (long *******)(ulong)local_130c;
                    bVar36 = *(byte *)((long)param_2 + 0x95b);
                    local_12dc = uVar42;
                    local_230 = local_270;
                    local_12d0 = ppppppplVar38;
                    local_12c8 = ppppppplVar39;
                    ppppppplStack_258 = ppppppplStack_298;
                    local_260 = local_2a0;
                    local_12d8 = ppppppplVar37;
                    ppppppplStack_248 = ppppppplStack_288;
                    local_250 = local_290;
                    ppppppplStack_238 = ppppppplStack_278;
                    local_240 = local_280;
                    local_1270 = ppppppplVar44;
                    uStack_264 = uStack_2a4;
                    local_268 = local_2a8;
                    local_12e8 = uVar43;
                  }
joined_r0x00790110:
                  if ((bVar36 & 1) != 0) goto LAB_0079015c;
                }
                else {
                  local_1270 = (long *******)param_2[300];
                  local_12c8 = (long *******)param_2[0x102];
                  ppppppplStack_1268 = (long *******)param_2[0x12d];
                  unaff_x26 = (long *******)(ulong)*(byte *)((long)param_2 + 0x989);
                  cVar50 = '\x02';
                  local_12d0 = (long *******)param_2[0x103];
                  *(undefined1 *)((long)param_2 + 0x95c) = 0;
                  local_12d8 = (long *******)param_2[0x104];
                  local_12f0 = (ulong)*(uint7 *)((long)param_2 + 0x831);
                  local_12dc = (uint)*(byte *)(param_2 + 0x105);
                  local_12e8 = (ulong)*(uint6 *)((long)param_2 + 0x82a);
LAB_0079015c:
                    /* try { // try from 0079015c to 00790163 has its CatchHandler @ 0079120c */
                  FUN_0078c680(&local_450);
                }
                *(undefined1 *)((long)param_2 + 0x95b) = 0;
                if ((*(byte *)((long)param_2 + 0x95c) & 1) != 0) {
                    /* try { // try from 00790170 to 00790177 has its CatchHandler @ 007911cc */
                  FUN_0078df18(param_2 + 300);
                }
                *(undefined1 *)((long)param_2 + 0x95c) = 0;
                lVar45 = param_2[0xff];
              }
              else {
                local_1270 = (long *******)param_2[0x100];
                local_12c8 = (long *******)param_2[0x102];
                local_12d8 = (long *******)param_2[0x104];
                ppppppplStack_1268 = (long *******)param_2[0x101];
                local_12d0 = (long *******)param_2[0x103];
                unaff_x26 = (long *******)(ulong)*(byte *)((long)param_2 + 0x829);
                bVar36 = *(byte *)(param_2 + 0x105);
                local_230 = (long *******)param_2[0x10d];
                uVar7 = *(uint6 *)((long)param_2 + 0x82a);
                bVar3 = *(byte *)(param_2 + 0x106);
                ppppppplStack_258 = (long *******)param_2[0x108];
                local_260 = (long *******)param_2[0x107];
                ppppppplStack_248 = (long *******)param_2[0x10a];
                local_250 = (long *******)param_2[0x109];
                ppppppplStack_238 = (long *******)param_2[0x10c];
                local_240 = (long *******)param_2[0x10b];
                ppppppplStack_218 = (long *******)param_2[0x110];
                local_220 = (long *******)param_2[0x10f];
                ppppppplStack_208 = (long *******)param_2[0x112];
                local_210 = (long *******)param_2[0x111];
                local_268._0_3_ = (undefined3)*(undefined4 *)((long)param_2 + 0x871);
                local_268._3_1_ = (undefined1)*(undefined4 *)((long)param_2 + 0x874);
                uStack_264 = (undefined3)((uint)*(undefined4 *)((long)param_2 + 0x874) >> 8);
                uVar8 = *(uint7 *)((long)param_2 + 0x831);
                uStack_1f8 = (long *******)param_2[0x114];
                local_200 = (long *******)param_2[0x113];
                ppppppplStack_1e8 = (long *******)param_2[0x116];
                local_1f0 = (long *******)param_2[0x115];
                    /* try { // try from 0078fcc0 to 0078fccb has its CatchHandler @ 0079114c */
                FUN_0078c680(&local_220);
                local_12e8 = (ulong)uVar7;
                local_12f0 = (ulong)uVar8;
                lVar45 = param_2[0xff];
joined_r0x0078ff54:
                uVar58 = (uint)bVar3;
                local_12dc = (uint)bVar36;
              }
joined_r0x0078ff54:
              if (lVar45 == -2) goto LAB_0078fe04;
LAB_00790188:
              *(undefined1 *)((long)param_2 + 0x95d) = 0;
            }
            else {
              if (*(char *)(param_2 + 0xfe) == '\x02') {
                cVar50 = *(char *)(param_2 + 0xf0);
                *(char *)(param_2 + 300) = cVar50;
                *(undefined1 *)((long)param_2 + 0x95a) = 1;
                memcpy(&local_220,param_2 + 0xff,0x160);
                if (cVar50 == '\x02') {
                  *(undefined1 *)((long)param_2 + 0x95a) = 0;
                  memcpy(param_2 + 0x12d,param_2 + 0xff,0x160);
LAB_0078facc:
                    /* try { // try from 0078facc to 0078fadf has its CatchHandler @ 00791270 */
                  FUN_007d6370(&local_450,param_2 + 0x12d,param_3);
                  uVar43 = local_420;
                  local_12d8 = local_430;
                  local_12d0 = ppppppplStack_438;
                  local_12c8 = local_440;
                  ppppppplStack_1268 = ppppppplStack_448;
                  local_1270 = local_450;
                  cVar50 = (char)local_3e0;
                  if ((char)local_3e0 == -1) {
                    uVar40 = 5;
                    goto LAB_00790f18;
                  }
                  unaff_x26 = (long *******)(uStack_428 >> 8 & 0xff);
                  ppppppplStack_2d8 = local_410;
                  local_2e0 = ppppppplStack_418;
                  local_12e8 = uStack_428 >> 0x10;
                  uVar58 = (uint)(byte)local_420;
                  local_12dc = (uint)(byte)uStack_428;
                  ppppppplStack_2c8 = local_400;
                  local_2d0 = ppppppplStack_408;
                  local_2b0 = ppppppplStack_3e8;
                  ppppppplStack_2b8 = local_3f0;
                  local_2c0 = ppppppplStack_3f8;
                  uStack_2e4 = (undefined3)((ulong)local_3e0 >> 0x28);
                    /* try { // try from 0078fb6c to 0078fb73 has its CatchHandler @ 0079122c */
                  local_2e8 = local_3e0._1_4_;
                  FUN_0078be3c(param_2 + 0x12d);
                  local_12f0 = uVar43 >> 8;
                  if (cVar50 == '\x02') {
                    bVar36 = *(byte *)((long)param_2 + 0x95a);
                    goto joined_r0x0078fe44;
                  }
                  bVar36 = *(byte *)((long)param_2 + 0x95a);
                  local_230 = local_2b0;
                  ppppppplStack_258 = ppppppplStack_2d8;
                  local_260 = local_2e0;
                  ppppppplStack_248 = ppppppplStack_2c8;
                  local_250 = local_2d0;
                  ppppppplStack_238 = ppppppplStack_2b8;
                  local_240 = local_2c0;
                  uStack_264 = uStack_2e4;
                  local_268 = local_2e8;
                }
                else {
                  __rustc::__rust_no_alloc_shim_is_unstable_v2();
                  local_1270 = (long *******)FUN_004b25a4(1,1);
                  if (local_1270 == (long *******)0x0) {
                    /* try { // try from 0079100c to 00791017 has its CatchHandler @ 007913b0 */
                    /* WARNING: Subroutine does not return */
                    alloc::alloc::handle_alloc_error(1,1);
                  }
                  *(char *)local_1270 = cVar50;
                  ppppppplStack_1268 = (long *******)&DAT_00adef40;
                  uVar58 = 2;
                  unaff_x26 = (long *******)0x2;
                  bVar36 = *(byte *)((long)param_2 + 0x95a);
joined_r0x0078fe44:
                  cVar50 = '\x02';
                }
                if ((bVar36 & 1) != 0) {
                    /* try { // try from 0078fc00 to 0078fc0b has its CatchHandler @ 007911c0 */
                  FUN_0078be3c(&local_220);
                }
                *(undefined1 *)((long)param_2 + 0x95a) = 0;
                lVar45 = param_2[0xff];
                goto joined_r0x0078ff54;
              }
              ppppppplStack_488 = (long *******)param_2[0xf9];
              local_490 = (long *******)param_2[0xf8];
              ppppppplStack_478 = (long *******)param_2[0xfb];
              local_480 = (long *******)param_2[0xfa];
              ppppppplStack_468 = (long *******)param_2[0xfd];
              local_470 = (long *******)param_2[0xfc];
              local_460 = param_2[0xfe];
              ppppppplStack_4c8 = (long *******)param_2[0xf1];
              local_4d0 = (long *******)param_2[0xf0];
              ppppppplStack_4b8 = (long *******)param_2[0xf3];
              local_4c0 = (long *******)param_2[0xf2];
              ppppppplStack_4a8 = (long *******)param_2[0xf5];
              local_4b0 = (long *******)param_2[0xf4];
              ppppppplStack_498 = (long *******)param_2[0xf7];
              local_4a0 = param_2[0xf6];
              memcpy(&local_450,param_2 + 0xff,0x160);
              ppppppplStack_1268 = ppppppplStack_4c8;
              if (local_450 != (long *******)&DAT_00000005) {
                memcpy(&local_220,param_2 + 0xff,0x160);
                lVar45 = *(long *)(param_2[0xe9] + 0xb0);
                lVar2 = *(long *)(param_2[0xe9] + 0xb8);
                __rustc::__rust_no_alloc_shim_is_unstable_v2();
                __dest = (void *)FUN_004b25a4(0x160,8);
                if (__dest == (void *)0x0) {
                    /* try { // try from 0079104c to 00791057 has its CatchHandler @ 0079137c */
                    /* WARNING: Subroutine does not return */
                  alloc::alloc::handle_alloc_error(8,0x160);
                }
                lVar49 = *(long *)(lVar2 + 0x10);
                memcpy(__dest,&local_220,0x160);
                    /* try { // try from 0078fea4 to 0078feb7 has its CatchHandler @ 007910e0 */
                (**(code **)(lVar2 + 0x18))
                          (lVar45 + (lVar49 - 1U & 0xfffffffffffffff0) + 0x10,__dest,
                           &PTR_FUN_00adcde0);
                unaff_x26 = (long *******)((ulong)ppppppplStack_4a8 >> 8 & 0xff);
                local_12e8 = (ulong)ppppppplStack_4a8 >> 0x10;
                local_12f0 = local_4a0 >> 8;
                uStack_264 = (undefined3)((ulong)local_460 >> 0x28);
                lVar45 = param_2[0xff];
                local_230 = ppppppplStack_468;
                local_260 = ppppppplStack_498;
                ppppppplStack_258 = local_490;
                local_240 = ppppppplStack_478;
                ppppppplStack_238 = local_470;
                local_250 = ppppppplStack_488;
                ppppppplStack_248 = local_480;
                local_1270 = local_4d0;
                cVar50 = (char)local_460;
                local_268 = local_460._1_4_;
                local_12d0 = ppppppplStack_4b8;
                local_12c8 = local_4c0;
                local_12d8 = local_4b0;
                ppppppplStack_1268 = ppppppplStack_4c8;
                bVar36 = (byte)ppppppplStack_4a8;
                bVar3 = (byte)local_4a0;
                goto joined_r0x0078ff54;
              }
              local_12c8 = (long *******)param_2[0xf2];
              local_12d0 = (long *******)param_2[0xf3];
              ppppppplStack_258 = (long *******)param_2[0xf8];
              local_260 = (long *******)param_2[0xf7];
              ppppppplStack_248 = (long *******)param_2[0xfa];
              local_250 = (long *******)param_2[0xf9];
              ppppppplStack_238 = (long *******)param_2[0xfc];
              local_240 = (long *******)param_2[0xfb];
              local_12e8 = (ulong)*(uint6 *)((long)param_2 + 0x7aa);
              local_1270 = local_4d0;
              unaff_x26 = (long *******)((ulong)ppppppplStack_4a8 >> 8 & 0xff);
              local_12f0 = (ulong)*(uint7 *)((long)param_2 + 0x7b1);
              local_12d8 = (long *******)param_2[0xf4];
              uVar58 = (uint)(byte)local_4a0;
              cVar50 = (char)local_460;
              local_230 = (long *******)param_2[0xfd];
              local_12dc = (uint)*(byte *)(param_2 + 0xf5);
              local_268._0_3_ = (undefined3)*(undefined4 *)((long)param_2 + 0x7f1);
              local_268._3_1_ = (undefined1)*(undefined4 *)((long)param_2 + 0x7f4);
              uStack_264 = (undefined3)((uint)*(undefined4 *)((long)param_2 + 0x7f4) >> 8);
                    /* try { // try from 0078fdec to 0078fdf3 has its CatchHandler @ 007910f0 */
              FUN_0078be3c(&local_450);
              if (param_2[0xff] != -2) goto LAB_00790188;
LAB_0078fe04:
              *(undefined1 *)((long)param_2 + 0x95e) = 0;
            }
            *(undefined2 *)((long)param_2 + 0x95d) = 0;
            goto LAB_00790194;
          }
          uVar40 = 4;
LAB_00790f18:
          *(undefined1 *)(param_2 + 299) = uVar40;
LAB_00790f1c:
          local_1280 = (long *******)(param_2 + 0x160);
          uVar40 = 3;
          *(undefined1 *)local_1280 = 3;
          goto LAB_0078f5d0;
        }
        ppppppplStack_448 = (long *******)param_2[0xe3];
        local_450 = (long *******)param_2[0xe2];
        ppppppplStack_438 = (long *******)param_2[0xe5];
        local_440 = (long *******)param_2[0xe4];
        uStack_428 = param_2[0xe7];
        local_430 = (long *******)param_2[0xe6];
        *(undefined1 *)((long)param_2 + 0x95f) = 0;
                    /* try { // try from 0078f6fc to 0078f70f has its CatchHandler @ 00791180 */
        FUN_00791730(&local_220,puVar53,&local_450);
        memcpy(&local_850,&local_220,0x160);
        memcpy(param_2 + 300,&local_850,0x160);
LAB_0078f734:
                    /* try { // try from 0078f734 to 0078f74b has its CatchHandler @ 0079129c */
        FUN_007d6370(&local_220,param_2 + 300,param_3);
        ppppppplVar44 = local_1f0;
        ppppppplStack_1268 = ppppppplStack_218;
        cVar50 = (char)local_1b0;
        if ((char)local_1b0 == -1) {
          uVar40 = 3;
          goto LAB_00790f18;
        }
        unaff_x26 = (long *******)((ulong)uStack_1f8 >> 8 & 0xff);
        local_1270 = local_220;
        local_12e8 = (ulong)uStack_1f8 >> 0x10;
        local_12d0 = ppppppplStack_208;
        local_12c8 = local_210;
        ppppppplStack_a28 = local_1e0;
        local_a30 = ppppppplStack_1e8;
        local_12d8 = local_200;
        uVar58 = (uint)(byte)local_1f0;
        local_12dc = (uint)(byte)uStack_1f8;
        local_a00 = ppppppplStack_1b8;
        ppppppplStack_a18 = local_1d0;
        local_a20 = ppppppplStack_1d8;
        ppppppplStack_a08 = local_1c0;
        local_a10 = ppppppplStack_1c8;
        uStack_a34 = (undefined3)((ulong)local_1b0 >> 0x28);
                    /* try { // try from 0078f7e0 to 0078f7e7 has its CatchHandler @ 0079123c */
        local_a38 = local_1b0._1_4_;
        FUN_0078be3c(param_2 + 300);
        local_12f0 = (ulong)ppppppplVar44 >> 8;
        if (cVar50 != '\x02') {
          local_230 = local_a00;
          ppppppplStack_258 = ppppppplStack_a28;
          local_260 = local_a30;
          ppppppplStack_248 = ppppppplStack_a18;
          local_250 = local_a20;
          ppppppplStack_238 = ppppppplStack_a08;
          local_240 = local_a10;
          local_268 = local_a38;
          uStack_264 = uStack_a34;
        }
LAB_00790194:
        local_1278 = (long *******)(param_2 + 0xd4);
        local_1280 = (long *******)(param_2 + 0x160);
        *(undefined1 *)((long)param_2 + 0x95f) = 0;
        local_ac0 = local_230;
        ppppppplStack_ae8 = ppppppplStack_258;
        local_af0 = local_260;
        ppppppplStack_ad8 = ppppppplStack_248;
        local_ae0 = local_250;
        local_af8 = local_268;
        uStack_af4 = uStack_264;
        ppppppplStack_ac8 = ppppppplStack_238;
        local_ad0 = local_240;
        *(undefined1 *)(param_2 + 299) = 1;
        if (cVar50 == -1) goto LAB_00790f1c;
        local_a80 = local_230;
        ppppppplStack_aa8 = ppppppplStack_258;
        local_ab0 = local_260;
        ppppppplStack_a98 = ppppppplStack_248;
        local_aa0 = local_250;
        ppppppplStack_a88 = ppppppplStack_238;
        local_a90 = local_240;
        local_ab8 = local_268;
        uStack_ab4 = uStack_264;
                    /* try { // try from 00790208 to 0079020f has its CatchHandler @ 00791378 */
        FUN_0078d46c(param_2 + 0xe2);
        puVar9 = PTR___CALLSITE_00b00e90;
        if (cVar50 != '\x02') {
          bVar36 = *(byte *)(param_2 + 0xdc);
          local_12c0 = local_12f0;
          uStack_12b8 = local_12e8;
          local_12b0 = local_12c8;
          ppppppplStack_12a8 = local_12d0;
          local_12a0 = local_12d8;
          local_1294 = local_12dc;
          local_a78 = local_ab8;
          uStack_a74 = uStack_ab4;
          local_a70 = local_ab0;
          ppppppplStack_a68 = ppppppplStack_aa8;
          local_a60 = local_aa0;
          ppppppplStack_a58 = ppppppplStack_a98;
          local_a50 = local_a90;
          ppppppplStack_a48 = ppppppplStack_a88;
          local_a40 = local_a80;
          goto joined_r0x007902e4;
        }
        if ((int)unaff_x26 != 0xff) {
          bVar36 = *(byte *)(param_2 + 0xdc);
          local_12c0 = local_12f0;
          uStack_12b8 = local_12e8;
          local_12b0 = local_12c8;
          ppppppplStack_12a8 = local_12d0;
          local_12a0 = local_12d8;
          local_1294 = local_12dc;
          goto joined_r0x007902e4;
        }
        uVar40 = SUB81(local_1270,0);
        local_4d0 = (long *******)CONCAT71(local_4d0._1_7_,uVar40);
        if ((*(byte *)(param_2[0xdb] + 200) & 1) == 0) goto LAB_007902ec;
        puVar54 = *(undefined8 **)PTR_MAX_LEVEL_00b00e60;
        if (puVar54 == (undefined8 *)0x0) {
          bVar36 = PTR___CALLSITE_00b00e90[0x10];
          if (2 < bVar36) {
                    /* try { // try from 0079105c to 00791067 has its CatchHandler @ 007910c8 */
            bVar36 = <tracing_core::callsite::tracing_core::callsite::DefaultCallsite>::register
                               (PTR___CALLSITE_00b00e90);
            puVar54 = extraout_x8_03;
          }
                    /* try { // try from 00790cfc to 00790cff has its CatchHandler @ 007910dc */
          if ((bVar36 != 0) &&
             (uVar43 = tracing::__macro_support::__is_enabled(*(undefined8 *)puVar9),
             puVar54 = extraout_x8_01, (uVar43 & 1) != 0)) {
            lVar45 = *(long *)puVar9;
            if (*(long ********)(lVar45 + 0x38) == (long *******)0x0) {
                    /* try { // try from 007910a8 to 007910bf has its CatchHandler @ 007910d0 */
                    /* WARNING: Subroutine does not return */
              core::option::expect_failed
                        ("FieldSet corrupted (this is a bug)",0x22,
                         &PTR_s__root__cargo_registry_src_index__00adc330);
            }
            local_840 = (long *******)(lVar45 + 0x30);
            local_6b0 = (long *******)*local_840;
            ppppppplStack_448 = (long *******)FUN_00793ca8;
            local_450 = (long *******)&local_4d0;
            ppppppplStack_698 = *(long ********)(lVar45 + 0x48);
            local_6a0 = *(long ********)(lVar45 + 0x40);
            local_9b0 = (long *******)&DAT_002b8994;
            local_220 = (long *******)&local_6b0;
            ppppppplStack_9a8 = (long *******)&local_450;
            ppppppplStack_218 = (long *******)&local_9b0;
            local_210 = (long *******)&DAT_00adc160;
            local_850 = (long *******)&local_220;
            local_690 = (long *******)0x0;
            ppppppplStack_848 = (long *******)&DAT_00000001;
                    /* try { // try from 00790d88 to 00790d8f has its CatchHandler @ 007910d4 */
            ppppppplStack_6a8 = *(long ********)(lVar45 + 0x38);
            <tracing_core::event::tracing_core::event::Event>::dispatch(lVar45,&local_850);
            puVar54 = extraout_x8_02;
          }
        }
        puVar53 = (undefined8 *)param_2[0xdb];
        cVar50 = *(char *)(param_2 + 0xdc);
        unaff_x24 = local_1270;
      } while( true );
    }
    core::panicking::panic_const::panic_const_async_fn_resumed
              (&PTR_s__root__cargo_registry_src_index__00adc2e8);
LAB_0078e49c:
    core::panicking::panic_const::panic_const_async_fn_resumed_panic
              (&PTR_s__root__cargo_registry_src_index__00adc2e8);
    uVar58 = extraout_w8_01;
  }
  else {
    if (bVar36 != 3) goto LAB_0078e49c;
    bVar36 = *(byte *)(param_2 + 0xd3);
    uVar58 = (uint)bVar36;
    if (2 < bVar36) {
      if (bVar36 != 3) {
        bVar36 = *(byte *)(param_2 + 0x104);
        if (bVar36 < 2) goto LAB_0078e8c4;
        goto LAB_0078e410;
      }
      bVar36 = *(byte *)(param_2 + 0x160);
      if (bVar36 < 2) {
        if (bVar36 == 0) {
          puVar53 = (undefined8 *)param_2[0xda];
          goto LAB_0078e77c;
        }
                    /* try { // try from 0078e4d0 to 0078e4eb has its CatchHandler @ 0078e528 */
        core::panicking::panic_const::panic_const_async_fn_resumed
                  (&PTR_s__root__cargo_registry_src_index__00adc318);
      }
      else if (bVar36 == 3) {
        bVar36 = *(byte *)(param_2 + 299);
        if (3 < bVar36) {
          if (bVar36 == 4) goto LAB_0078f94c;
          if (bVar36 != 5) goto LAB_0078ff78;
          goto LAB_0078facc;
        }
        if (bVar36 < 2) {
          if (bVar36 == 0) {
            puVar53 = (undefined8 *)param_2[0xe8];
            goto LAB_0078f64c;
          }
                    /* try { // try from 0078e4f0 to 0078e50b has its CatchHandler @ 0078e510 */
          core::panicking::panic_const::panic_const_async_fn_resumed
                    (&PTR_s__root__cargo_registry_src_index__00adc378);
        }
        else {
          if (bVar36 == 3) goto LAB_0078f734;
          core::panicking::panic_const::panic_const_async_fn_resumed_panic
                    (&PTR_s__root__cargo_registry_src_index__00adc378);
        }
      }
      else {
        core::panicking::panic_const::panic_const_async_fn_resumed_panic
                  (&PTR_s__root__cargo_registry_src_index__00adc318);
      }
      goto LAB_0078e888;
    }
    if (bVar36 == 0) {
      puVar53 = (undefined8 *)param_2[0xb1];
      goto LAB_0078e700;
    }
  }
  if (uVar58 == 1) {
                    /* try { // try from 0078e4b0 to 0078e4cb has its CatchHandler @ 0078e538 */
    core::panicking::panic_const::panic_const_async_fn_resumed
              (&PTR_s__root__cargo_registry_src_index__00adc348);
  }
  else {
    core::panicking::panic_const::panic_const_async_fn_resumed_panic
              (&PTR_s__root__cargo_registry_src_index__00adc348);
  }
LAB_0078e888:
                    /* WARNING: Does not return */
  pcVar35 = (code *)SoftwareBreakpoint(1,0x78e88c);
  (*pcVar35)();
LAB_007902ec:
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  local_1270 = (long *******)FUN_004b25a4(1,1);
  if (local_1270 == (long *******)0x0) {
                    /* try { // try from 00790f84 to 00790f8f has its CatchHandler @ 0079145c */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(1,1);
  }
  ppppppplStack_1268 = (long *******)&DAT_00adef40;
  unaff_x26 = (long *******)0x2;
  uVar58 = 2;
  *(undefined1 *)local_1270 = uVar40;
  bVar36 = *(byte *)(param_2 + 0xdc);
joined_r0x007902e4:
  if (1 < bVar36) {
    plVar56 = (long *)param_2[0xdd];
                    /* try { // try from 00790338 to 0079033f has its CatchHandler @ 007912d8 */
    (**(code **)(*plVar56 + 0x20))(plVar56 + 3,plVar56[1],plVar56[2]);
    free(plVar56);
  }
                    /* try { // try from 00790360 to 00790367 has its CatchHandler @ 00791364 */
  (**(code **)(param_2[0xde] + 0x20))(param_2 + 0xe1,param_2[0xdf],param_2[0xe0]);
  local_dc0 = local_a40;
  ppppppplStack_de8 = ppppppplStack_a68;
  local_df0 = local_a70;
  local_df8 = local_a78;
  uStack_df4 = uStack_a74;
  ppppppplStack_dd8 = ppppppplStack_a58;
  local_de0 = local_a60;
  ppppppplStack_dc8 = ppppppplStack_a48;
  local_dd0 = local_a50;
  *(undefined1 *)local_1280 = 1;
  local_d80 = local_a40;
  ppppppplStack_da8 = ppppppplStack_a68;
  local_db0 = local_a70;
  ppppppplStack_d98 = ppppppplStack_a58;
  local_da0 = local_a60;
  ppppppplStack_d88 = ppppppplStack_a48;
  local_d90 = local_a50;
  local_db8 = local_a78;
  uStack_db4 = uStack_a74;
                    /* try { // try from 007903dc to 007903e3 has its CatchHandler @ 0079135c */
  FUN_0078d198(local_1278);
  ppppppplVar44 = (long *******)0x2;
  uVar40 = 2;
  unaff_x24 = (long *******)0xffffffffffffffff;
  if (cVar50 == '\x02') {
    local_1288 = (ulong)local_1294;
    bVar36 = *(byte *)((long)param_2 + 0x699);
    *(undefined1 *)((long)param_2 + 0x69a) = 0;
    ppppppplVar39 = local_12b0;
    uVar51 = local_12c0;
    uVar43 = uStack_12b8;
    local_1280 = ppppppplStack_12a8;
    local_1278 = local_12a0;
  }
  else {
    local_680 = local_d80;
    local_220._0_7_ = CONCAT43(CONCAT31(uStack_db4,local_db8._3_1_),(int3)local_db8);
    ppppppplVar39 = local_220;
    *(undefined1 *)((long)param_2 + 0x69a) = 1;
    ppppppplStack_6a8 = ppppppplStack_da8;
    local_6b0 = local_db0;
    param_2[0xd4] = local_1270;
    *(char *)((long)param_2 + 0x6c9) = (char)unaff_x26;
    ppppppplStack_698 = ppppppplStack_d98;
    local_6a0 = local_da0;
    param_2[0xd7] = ppppppplStack_12a8;
    param_2[0xd6] = local_12b0;
    param_2[0xd8] = local_12a0;
    uStack_688 = ppppppplStack_d88;
    local_690 = local_d90;
    *(char *)(param_2 + 0xd9) = (char)local_1294;
    *(int *)((long)param_2 + 0x6ca) = (int)uStack_12b8;
    *(short *)((long)param_2 + 0x6ce) = (short)(uStack_12b8 >> 0x20);
    *(short *)((long)param_2 + 0x6d5) = (short)(local_12c0 >> 0x20);
    *(char *)((long)param_2 + 0x6d7) = (char)(local_12c0 >> 0x30);
    param_2[0xdc] = ppppppplStack_da8;
    param_2[0xdb] = local_db0;
    param_2[0xde] = ppppppplStack_d98;
    param_2[0xdd] = local_da0;
    *(char *)(param_2 + 0xda) = (char)uVar58;
    *(int *)((long)param_2 + 0x6d1) = (int)local_12c0;
    plVar56 = (long *)param_2[0xcd];
    param_2[0xe0] = ppppppplStack_d88;
    param_2[0xdf] = local_d90;
    param_2[0xe1] = local_d80;
    param_2[0xd5] = ppppppplStack_1268;
    *(char *)(param_2 + 0xe2) = cVar50;
    *(undefined4 *)((long)param_2 + 0x711) = (undefined4)local_220;
    *(uint *)((long)param_2 + 0x714) = CONCAT31(uStack_db4,local_db8._3_1_);
    local_220 = ppppppplVar39;
    if ((plVar56 != (long *)0x0) && (plVar56[3] != 0)) {
      lVar45 = 0;
      lVar2 = *plVar56;
      uVar51 = plVar56[1];
      uVar48 = uVar51 & 0xa8857cca78b51b5b;
      uVar46 = *(undefined8 *)(lVar2 + uVar48);
      uVar43 = NEON_cmeq(uVar46,0x5454545454545454,1);
      uVar43 = uVar43 & 0x8080808080808080;
      while( true ) {
        for (; uVar43 == 0; uVar43 = uVar43 & 0x8080808080808080) {
          uVar46 = NEON_cmeq(uVar46,0xffffffffffffffff,1);
          bVar36 = NEON_umaxv(uVar46,1);
          if ((bVar36 & 1) != 0) goto LAB_00790604;
          lVar45 = lVar45 + 8;
          uVar48 = uVar48 + lVar45 & uVar51;
          uVar46 = *(undefined8 *)(lVar2 + uVar48);
          uVar43 = NEON_cmeq(uVar46,0x5454545454545454,1);
        }
        uVar4 = (uVar43 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar43 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        lVar49 = lVar2 + (uVar48 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) & uVar51) *
                         -0x20;
        if (*(long *)(lVar49 + -0x18) == -0x577a8335874ae4a5 &&
            *(long *)(lVar49 + -0x20) == 0x46b1739aa40c2b14) break;
        uVar43 = uVar43 - 1 & uVar43;
      }
                    /* try { // try from 007905c0 to 007905d3 has its CatchHandler @ 0079121c */
      auVar59 = (**(code **)(*(long *)(lVar49 + -8) + 0x30))(*(undefined8 *)(lVar49 + -0x10));
      (**(code **)(auVar59._8_8_ + 0x18))(&local_6b0);
      if ((auVar59._0_8_ != 0) &&
         (ppppppplStack_6a8 == (long *******)0xa8857cca78b51b5b &&
          local_6b0 == (long *******)0x46b1739aa40c2b14)) {
        if (*(char *)((long)param_2 + 0x701) == '\x02') {
                    /* try { // try from 0079101c to 00791033 has its CatchHandler @ 007913a4 */
                    /* WARNING: Subroutine does not return */
          core::option::expect_failed
                    ("not dropped",0xb,&PTR_s__root__cargo_registry_src_index__00adc210);
        }
                    /* try { // try from 007905f8 to 00790603 has its CatchHandler @ 007913a4 */
        <hyper_util::client::legacy::connect::capture::hyper_util::client::legacy::connect::capture::CaptureConnectionExtension>
        ::set(auVar59._0_8_,param_2 + 0xdd);
      }
    }
LAB_00790604:
    puVar9 = PTR___CALLSITE_00b00e78;
    if (*(char *)((long)param_2 + 0x701) == '\x02') {
                    /* try { // try from 00790f2c to 00790f47 has its CatchHandler @ 00791498 */
                    /* WARNING: Subroutine does not return */
      core::option::expect_failed
                (&DAT_002e5b2c,0xb,&PTR_s__root__cargo_registry_src_index__00adf5c0);
    }
    if (*(char *)(param_2 + 0xce) == '\x03') {
      if ((*(ulong *)PTR_MAX_LEVEL_00b00e60 & 0xfffffffffffffffe) != 4) {
        bVar36 = PTR___CALLSITE_00b00e78[0x10];
        if (2 < bVar36) {
                    /* try { // try from 00791038 to 00791043 has its CatchHandler @ 007910c4 */
          bVar36 = <tracing_core::callsite::tracing_core::callsite::DefaultCallsite>::register
                             (PTR___CALLSITE_00b00e78);
        }
                    /* try { // try from 00790654 to 00790657 has its CatchHandler @ 0079115c */
        if ((bVar36 != 0) &&
           (uVar43 = tracing::__macro_support::__is_enabled(*(undefined8 *)puVar9),
           (uVar43 & 1) != 0)) {
          lVar45 = *(long *)puVar9;
          if (*(long ********)(lVar45 + 0x38) == (long *******)0x0) {
                    /* try { // try from 0079108c to 007910a3 has its CatchHandler @ 007910e8 */
                    /* WARNING: Subroutine does not return */
            core::option::expect_failed
                      ("FieldSet corrupted (this is a bug)",0x22,
                       &PTR_s__root__cargo_registry_src_index__00adc360);
          }
          local_840 = (long *******)(lVar45 + 0x30);
          local_6b0 = (long *******)*local_840;
          ppppppplStack_448 = (long *******)0x63;
          local_220 = (long *******)&local_6b0;
          ppppppplStack_698 = *(long ********)(lVar45 + 0x48);
          local_6a0 = *(long ********)(lVar45 + 0x40);
          local_690 = (long *******)0x0;
          local_450 = (long *******)0x2e2b75;
          ppppppplStack_218 = (long *******)&local_450;
          local_210 = (long *******)&DAT_00adc160;
          local_850 = (long *******)&local_220;
          ppppppplStack_848 = (long *******)&DAT_00000001;
                    /* try { // try from 007906cc to 007906d3 has its CatchHandler @ 007910ec */
          ppppppplStack_6a8 = *(long ********)(lVar45 + 0x38);
          <tracing_core::event::tracing_core::event::Event>::dispatch(lVar45,&local_850);
        }
      }
      local_6b0 = (long *******)0x0;
      local_680 = (long *******)CONCAT71(local_680._1_7_,4);
      uStack_688._0_2_ = CONCAT11(2,(undefined1)uStack_688);
      if (*(char *)((long)param_2 + 0x701) == '\x02') {
                    /* try { // try from 00790f4c to 00790f63 has its CatchHandler @ 00791484 */
                    /* WARNING: Subroutine does not return */
        core::option::expect_failed
                  (&DAT_002e5b2c,0xb,&PTR_s__root__cargo_registry_src_index__00adf5c0);
      }
                    /* try { // try from 007906f4 to 007906ff has its CatchHandler @ 00791228 */
      <hyper_util::client::legacy::connect::[0]::hyper_util::client::legacy::connect::Connected>::
      clone(&local_850,param_2 + 0xdd);
                    /* try { // try from 00790700 to 00790713 has its CatchHandler @ 00791224 */
      <hyper_util::client::legacy::client::[f]::hyper_util::client::legacy::client::Error>::
      with_connect_info(&local_220,&local_6b0,&local_850);
      unaff_x24 = (long *******)0xffffffffffffffff;
      uVar43 = (ulong)uStack_1f8 >> 0x10;
      unaff_x26 = (long *******)((ulong)uStack_1f8 >> 8 & 0xff);
      local_1280 = ppppppplStack_208;
      local_1278 = local_200;
      uVar58 = (uint)(byte)local_1f0;
      local_1288 = (ulong)uStack_1f8 & 0xff;
      uVar51 = (ulong)local_1f0 >> 8;
      ppppppplStack_1268 = ppppppplStack_218;
      local_1270 = local_220;
      ppppppplVar39 = local_210;
    }
    else {
      if (*(char *)(param_2[0xb2] + 0xc9) == '\x01') {
                    /* try { // try from 00790b6c to 00790b77 has its CatchHandler @ 00791190 */
        FUN_0079362c(&local_6b0,param_2 + 0xbf);
        ppppppplStack_448 = _UNK_002bfdd0;
        local_450 = _DAT_002bfdc8;
        ppppppplStack_438 = _UNK_002bfde0;
        local_440 = _DAT_002bfdd8;
                    /* try { // try from 00790b8c to 00790b9f has its CatchHandler @ 0079144c */
        FUN_007c297c(&local_220,param_2 + 0xb3,&local_450);
        if (local_1f0._2_1_ == -1) {
                    /* try { // try from 00790f94 to 00790fb7 has its CatchHandler @ 0079144c */
                    /* WARNING: Subroutine does not return */
          core::result::unwrap_failed
                    (&DAT_002e53da,0x17,auStack_71,&DAT_00ade620,
                     &PTR_s__root__cargo_registry_src_index__00ade3a8);
        }
        ppppppplStack_848 = ppppppplStack_218;
        local_850 = local_220;
        ppppppplStack_838 = ppppppplStack_208;
        local_840 = local_210;
        uStack_828 = uStack_1f8;
        local_830 = local_200;
        local_820 = local_1f0;
                    /* try { // try from 00790bcc to 00790bd7 has its CatchHandler @ 0079118c */
        FUN_007c3610(&local_850,&local_6b0);
                    /* try { // try from 00790bd8 to 00790bdf has its CatchHandler @ 00791188 */
        FUN_0078d9c8(&local_6b0);
      }
      if (*(char *)(param_2 + 0xca) == '\a') {
                    /* try { // try from 00790bec to 00790bf3 has its CatchHandler @ 00791194 */
        hyper_util::client::legacy::client::authority_form(param_2 + 0xbf);
      }
      else {
        if (*(byte *)((long)param_2 + 0x701) == 2) {
                    /* try { // try from 00790fbc to 00790fd3 has its CatchHandler @ 00791448 */
                    /* WARNING: Subroutine does not return */
          core::option::expect_failed
                    (&DAT_002e5b2c,0xb,&PTR_s__root__cargo_registry_src_index__00adf5c0);
        }
        if ((*(byte *)((long)param_2 + 0x701) & 1) == 0) {
                    /* try { // try from 00790c14 to 00790c1b has its CatchHandler @ 00791130 */
          hyper_util::client::legacy::client::origin_form(param_2 + 0xbf);
        }
        else {
                    /* try { // try from 00790c08 to 00790c0f has its CatchHandler @ 0079112c */
          hyper_util::client::legacy::client::absolute_form(param_2 + 0xbf);
        }
      }
      if (*(char *)((long)param_2 + 0x701) == '\x02') {
                    /* try { // try from 00790f68 to 00790f7f has its CatchHandler @ 00791480 */
                    /* WARNING: Subroutine does not return */
        core::option::expect_failed
                  (&DAT_002e5b2c,0xb,&PTR_s__root__cargo_registry_src_index__00adf5d8);
      }
      uStack_788 = param_2[0xcc];
      local_790 = param_2[0xcb];
      uStack_778 = param_2[0xce];
      local_780 = param_2[0xcd];
      *(undefined1 *)((long)param_2 + 0x699) = 0;
      uStack_768 = param_2[0xd0];
      local_770 = param_2[0xcf];
      uStack_758 = param_2[0xd2];
      local_760 = param_2[0xd1];
      uStack_7c8 = param_2[0xc4];
      local_7d0 = param_2[0xc3];
      uStack_7b8 = param_2[0xc6];
      local_7c0 = param_2[0xc5];
      uStack_7a8 = param_2[200];
      local_7b0 = param_2[199];
      uStack_798 = param_2[0xca];
      local_7a0 = param_2[0xc9];
      uStack_808 = param_2[0xbc];
      local_810 = param_2[0xbb];
      uStack_7f8 = param_2[0xbe];
      local_800 = param_2[0xbd];
      uStack_7e8 = param_2[0xc0];
      local_7f0 = param_2[0xbf];
      uStack_7d8 = param_2[0xc2];
      local_7e0 = param_2[0xc1];
      ppppppplStack_848 = (long *******)param_2[0xb4];
      local_850 = (long *******)param_2[0xb3];
      ppppppplStack_838 = (long *******)param_2[0xb6];
      local_840 = (long *******)param_2[0xb5];
      uStack_828 = (long *******)param_2[0xb8];
      local_830 = (long *******)param_2[0xb7];
      uStack_818 = param_2[0xba];
      local_820 = (long *******)param_2[0xb9];
                    /* try { // try from 00790c8c to 00790c9b has its CatchHandler @ 00791220 */
      FUN_007a4290(&local_6b0,param_2 + 0xda,&local_850);
      ppppppplStack_5a8 = (long *******)((ulong)ppppppplStack_5a8 & 0xffffffffffffff00);
      memcpy(&local_220,&local_6b0,0x110);
      memcpy(param_2 + 0xe3,&local_220,0x110);
      bVar36 = *(byte *)(param_2 + 0x104);
      if (bVar36 < 2) {
LAB_0078e8c4:
        if (bVar36 != 0) {
                    /* try { // try from 0078f450 to 0078f45b has its CatchHandler @ 0078f508 */
          core::panicking::panic_const::panic_const_async_fn_resumed
                    (&PTR_s__root__cargo_registry_src_index__00adc2b8);
          goto LAB_0078e888;
        }
        if (param_2[0xe3] == -1) {
          param_2[0x103] = param_2[0xe4];
          goto LAB_0078ea24;
        }
        ppppppplStack_5e8 = (long *******)param_2[0xfc];
        local_5f0 = (long *******)param_2[0xfb];
        uStack_5d8 = param_2[0xfe];
        local_5e0 = param_2[0xfd];
        uStack_5c8 = param_2[0x100];
        local_5d0 = param_2[0xff];
        uStack_5b8 = param_2[0x102];
        local_5c0 = param_2[0x101];
        ppppppplStack_628 = (long *******)param_2[0xf4];
        local_630 = (long *******)param_2[0xf3];
        ppppppplStack_618 = (long *******)param_2[0xf6];
        local_620 = (long *******)param_2[0xf5];
        ppppppplStack_608 = (long *******)param_2[0xf8];
        local_610 = (long *******)param_2[0xf7];
        ppppppplStack_5f8 = (long *******)param_2[0xfa];
        local_600 = (long *******)param_2[0xf9];
        ppppppplStack_668 = (long *******)param_2[0xec];
        local_670 = (long *******)param_2[0xeb];
        ppppppplStack_658 = (long *******)param_2[0xee];
        local_660 = (long *******)param_2[0xed];
        ppppppplStack_648 = (long *******)param_2[0xf0];
        local_650 = (long *******)param_2[0xef];
        uStack_638 = (long *******)param_2[0xf2];
        local_640 = (long *******)param_2[0xf1];
        ppppppplStack_6a8 = (long *******)param_2[0xe4];
        local_6b0 = (long *******)param_2[0xe3];
        ppppppplStack_698 = (long *******)param_2[0xe6];
        local_6a0 = (long *******)param_2[0xe5];
        uStack_688 = (long *******)param_2[0xe8];
        local_690 = (long *******)param_2[0xe7];
        uStack_678 = (long *******)param_2[0xea];
        local_680 = (long *******)param_2[0xe9];
                    /* try { // try from 0078e934 to 0078e94b has its CatchHandler @ 0078f4cc */
        ppppppplVar37 = (long *******)<hyper::error::hyper::error::Error>::new_canceled();
        FUN_0079fe98(ppppppplVar37,"connection was not ready",0x18);
        ppppppplStack_a28 = local_6a0;
        local_a30 = ppppppplStack_6a8;
        ppppppplStack_9e8 = local_660;
        local_9f0 = ppppppplStack_668;
        uVar7 = (uint6)((ulong)local_680 >> 0x10);
        ppppppplStack_9c8 = local_640;
        local_9d0 = ppppppplStack_648;
        ppppppplStack_9d8 = local_650;
        local_9e0 = ppppppplStack_658;
        uStack_978 = local_5e0;
        local_980 = ppppppplStack_5e8;
        uVar8 = (uint7)((ulong)uStack_678 >> 8);
        ppppppplStack_298 = ppppppplStack_628;
        local_2a0 = local_630;
        uStack_958 = local_5c0;
        local_960 = uStack_5c8;
        local_1280 = local_690;
        local_1278 = uStack_688;
        local_950 = uStack_5b8;
        uStack_968 = local_5d0;
        local_970 = uStack_5d8;
        ppppppplStack_9a8 = local_610;
        local_9b0 = ppppppplStack_618;
        ppppppplStack_998 = local_600;
        local_9a0 = ppppppplStack_608;
        local_290 = local_620;
        local_1320 = local_670;
        ppppppplStack_988 = local_5f0;
        local_990 = ppppppplStack_5f8;
        *(undefined1 *)(param_2 + 0x104) = 1;
        unaff_x24 = local_6b0;
        ppppppplVar39 = ppppppplStack_698;
        ppppppplVar44 = uStack_638;
        bVar3 = (byte)uStack_678;
        bVar36 = local_680._1_1_;
        ppppppplVar38 = local_680;
        if (local_6b0 == (long *******)0xfffffffffffffffd) goto LAB_0078f354;
      }
      else {
LAB_0078e410:
        if (bVar36 != 3) {
                    /* try { // try from 0078e418 to 0078e423 has its CatchHandler @ 0078f508 */
          core::panicking::panic_const::panic_const_async_fn_resumed_panic
                    (&PTR_s__root__cargo_registry_src_index__00adc2b8);
          goto LAB_0078e888;
        }
LAB_0078ea24:
                    /* try { // try from 0078ea28 to 0078ea37 has its CatchHandler @ 0078f4e4 */
        FUN_0079f0e0(&local_6b0,param_2 + 0x103,param_3);
        ppppppplVar37 = local_5b0;
        ppppppplVar44 = uStack_638;
        ppppppplVar38 = local_680;
        ppppppplVar39 = ppppppplStack_698;
        unaff_x24 = local_6b0;
        if (local_6b0 == (long *******)0x3) {
          *(undefined1 *)(param_2 + 0x104) = 3;
LAB_0078f354:
          uVar40 = 4;
LAB_0078f5d0:
          local_12f8 = param_2 + 0xd3;
          *(undefined1 *)local_12f8 = uVar40;
          *param_1 = 0xfffffffffffffffe;
          uVar41 = 3;
          goto LAB_00790ed4;
        }
        local_1278 = uStack_688;
        ppppppplStack_2d8 = local_6a0;
        local_2e0 = ppppppplStack_6a8;
        ppppppplStack_4c8 = local_660;
        local_4d0 = ppppppplStack_668;
        bVar36 = local_680._1_1_;
        ppppppplStack_4b8 = local_650;
        local_4c0 = ppppppplStack_658;
        local_1280 = local_690;
        ppppppplStack_4a8 = local_640;
        local_4b0 = ppppppplStack_648;
        bVar3 = (byte)uStack_678;
        ppppppplStack_258 = ppppppplStack_628;
        local_260 = local_630;
        local_250 = local_620;
        uStack_808 = local_5d0;
        local_810 = uStack_5d8;
        lVar45 = param_2[0x103];
        uVar7 = (uint6)((ulong)local_680 >> 0x10);
        uVar8 = (uint7)((ulong)uStack_678 >> 8);
        uStack_7f8 = local_5c0;
        local_800 = uStack_5c8;
        ppppppplStack_848 = local_610;
        local_850 = ppppppplStack_618;
        ppppppplStack_838 = local_600;
        local_840 = ppppppplStack_608;
        local_7f0 = uStack_5b8;
        local_1320 = local_670;
        uStack_818 = local_5e0;
        local_820 = ppppppplStack_5e8;
        uStack_828 = local_5f0;
        local_830 = ppppppplStack_5f8;
        if (lVar45 != 0) {
          puVar1 = (ulong *)(lVar45 + 0x30);
          do {
            uVar43 = *puVar1;
            cVar50 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = uVar43 | 4;
              cVar50 = ExclusiveMonitorsStatus();
            }
          } while (cVar50 != '\0');
          if ((uVar43 & 10) == 8) {
                    /* try { // try from 0078eb3c to 0078eb3f has its CatchHandler @ 0078f494 */
            (**(code **)(*(long *)(lVar45 + 0x10) + 0x10))(*(undefined8 *)(lVar45 + 0x18));
          }
          if (((uint)uVar43 >> 1 & 1) != 0) {
            memcpy(&local_6b0,(void *)(lVar45 + 0x38),0x108);
            *(undefined8 *)(lVar45 + 0x38) = 0xfffffffffffffffd;
            if (local_6b0 != (long *******)0xfffffffffffffffd) {
                    /* try { // try from 0078eb68 to 0078eb6f has its CatchHandler @ 0078f494 */
              FUN_0079a540(&local_6b0);
            }
          }
          plVar56 = (long *)param_2[0x103];
          if (plVar56 != (long *)0x0) {
            do {
              lVar45 = *plVar56;
              cVar50 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar56,0x10);
              if (bVar6) {
                *plVar56 = lVar45 + -1;
                cVar50 = ExclusiveMonitorsStatus();
              }
            } while (cVar50 != '\0');
            if (lVar45 + -1 == 0) {
              DataMemoryBarrier(2,1);
                    /* try { // try from 0078eb9c to 0078eba3 has its CatchHandler @ 0078f470 */
              <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::oneshot::Inner<core[bcece726f298455b]::result::Result<http[b87e90c26fe47eb4]::response::Response<hyper[9f1bfd30b08ca095]::body::incoming::Incoming>,hyper[9f1bfd30b08ca095]::client::dispatch::TrySendError<http[b87e90c26fe47eb4]::request::Request<reqwest[6fed810f3e38d558]::async_impl::body::Body>>>>>>
              ::drop_slow(param_2 + 0x103);
            }
          }
        }
        if (unaff_x24 == (long *******)0xfffffffffffffffd) {
                    /* try { // try from 0078f434 to 0078f44b has its CatchHandler @ 0078f4dc */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_fmt
                    ("dispatch dropped without returning error",0x51,
                     &PTR_s__root__cargo_registry_src_index__00adc2d0);
        }
        ppppppplStack_a28 = ppppppplStack_2d8;
        local_a30 = local_2e0;
        ppppppplStack_9e8 = ppppppplStack_4c8;
        local_9f0 = local_4d0;
        ppppppplStack_9c8 = ppppppplStack_4a8;
        local_9d0 = local_4b0;
        ppppppplStack_9d8 = ppppppplStack_4b8;
        local_9e0 = local_4c0;
        uStack_978 = uStack_818;
        local_980 = local_820;
        ppppppplStack_298 = ppppppplStack_258;
        local_2a0 = local_260;
        uStack_958 = uStack_7f8;
        local_960 = local_800;
        local_290 = local_250;
        uStack_968 = uStack_808;
        local_970 = local_810;
        ppppppplStack_9a8 = ppppppplStack_848;
        local_9b0 = local_850;
        ppppppplStack_998 = ppppppplStack_838;
        local_9a0 = local_840;
        local_950 = local_7f0;
        ppppppplStack_988 = uStack_828;
        local_990 = local_830;
        *(undefined1 *)(param_2 + 0x104) = 1;
      }
      local_1288 = (ulong)ppppppplVar38 & 0xff;
      uVar51 = (ulong)uVar8;
      uVar43 = (ulong)uVar7;
      uVar58 = (uint)bVar3;
      ppppppplStack_ca8 = ppppppplStack_a28;
      local_cb0 = local_a30;
      ppppppplStack_cd8 = ppppppplStack_9e8;
      local_ce0 = local_9f0;
      ppppppplStack_cb8 = ppppppplStack_9c8;
      local_cc0 = local_9d0;
      ppppppplStack_cf8 = ppppppplStack_298;
      local_d00 = local_2a0;
      ppppppplStack_d68 = ppppppplStack_9a8;
      local_d70 = local_9b0;
      ppppppplStack_cc8 = ppppppplStack_9d8;
      local_cd0 = local_9e0;
      local_cf0 = local_290;
      ppppppplStack_d58 = ppppppplStack_998;
      local_d60 = local_9a0;
      uStack_d18 = uStack_958;
      local_d20 = local_960;
      local_d10 = local_950;
      uStack_d28 = uStack_968;
      local_d30 = local_970;
      ppppppplStack_d48 = ppppppplStack_988;
      local_d50 = local_990;
      uStack_d38 = uStack_978;
      local_d40 = local_980;
                    /* try { // try from 0078ec88 to 0078ec8f has its CatchHandler @ 0078f500 */
      FUN_0078cdc8(param_2 + 0xe3);
      if (unaff_x24 == (long *******)&DAT_fffffffffffffffe) {
        ppppppplStack_448 = ppppppplStack_ca8;
        local_450 = local_cb0;
        local_430 = local_1278;
        ppppppplStack_438 = local_1280;
        ppppppplStack_408 = ppppppplStack_cd8;
        local_410 = local_ce0;
        ppppppplStack_3e8 = ppppppplStack_cb8;
        local_3f0 = local_cc0;
        ppppppplStack_418 = local_1320;
        ppppppplStack_3d0 = ppppppplStack_cf8;
        local_3d8 = local_d00;
        uStack_428 = CONCAT62(uVar7,CONCAT11(bVar36,(char)ppppppplVar38));
        local_420 = CONCAT71(uVar8,bVar3);
        ppppppplStack_3f8 = ppppppplStack_cc8;
        local_400 = local_cd0;
        local_3c8 = local_cf0;
        local_440 = ppppppplVar39;
        local_3e0 = ppppppplVar44;
        if (*(char *)((long)param_2 + 0x701) == '\x02') {
                    /* try { // try from 0078f36c to 0078f387 has its CatchHandler @ 0078f5a0 */
                    /* WARNING: Subroutine does not return */
          core::option::expect_failed
                    (&DAT_002e5b2c,0xb,&PTR_s__root__cargo_registry_src_index__00adf5c0);
        }
        puVar53 = param_2 + 0xd4;
                    /* try { // try from 0078ed3c to 0078ed47 has its CatchHandler @ 0078f490 */
        if ((param_2[0xdd] != 0) &&
           (<hyper_util::client::legacy::connect::[1]::hyper_util::client::legacy::connect::Extra>::
            set(param_2 + 0xdd,&local_3f0), *(char *)((long)param_2 + 0x701) == '\x02')) {
                    /* try { // try from 0078f38c to 0078f3a3 has its CatchHandler @ 0078f59c */
                    /* WARNING: Subroutine does not return */
          core::option::expect_failed
                    (&DAT_002e5b2c,0xb,&PTR_s__root__cargo_registry_src_index__00adf5c0);
        }
        if (*(long *)(param_2[0xda] + 0x10) != 3) {
          if (*(char *)((long)param_2 + 0x701) == '\x02') {
                    /* try { // try from 0078f3d8 to 0078f3ef has its CatchHandler @ 0078f570 */
                    /* WARNING: Subroutine does not return */
            core::option::expect_failed
                      (&DAT_002e5b2c,0xb,&PTR_s__root__cargo_registry_src_index__00adf5c0);
          }
          if ((param_2[0xe1] == 0) || (*(long *)(param_2[0xda] + 0x10) == 1)) {
            ppppppplStack_668 = (long *******)param_2[0xdd];
            local_670 = (long *******)param_2[0xdc];
            ppppppplStack_658 = (long *******)param_2[0xdf];
            local_660 = (long *******)param_2[0xde];
            ppppppplStack_648 = (long *******)param_2[0xe1];
            local_650 = (long *******)param_2[0xe0];
            local_640 = (long *******)param_2[0xe2];
            *(undefined1 *)((long)param_2 + 0x69a) = 0;
            ppppppplStack_6a8 = (long *******)param_2[0xd5];
            local_6b0 = (long *******)*puVar53;
            ppppppplStack_698 = (long *******)param_2[0xd7];
            local_6a0 = (long *******)param_2[0xd6];
            uStack_688 = (long *******)param_2[0xd9];
            local_690 = (long *******)param_2[0xd8];
            uStack_678 = (long *******)param_2[0xdb];
            local_680 = (long *******)param_2[0xda];
                    /* try { // try from 0078f070 to 0078f077 has its CatchHandler @ 0078f478 */
            FUN_0078c534(&local_6b0);
          }
          else if ((local_3e0 == (long *******)0x0) || (ppppppplStack_3d0 == (long *******)0x0)) {
            ppppppplStack_668 = (long *******)param_2[0xdd];
            local_670 = (long *******)param_2[0xdc];
            ppppppplStack_658 = (long *******)param_2[0xdf];
            local_660 = (long *******)param_2[0xde];
            local_640 = (long *******)param_2[0xe2];
            ppppppplStack_648 = (long *******)param_2[0xe1];
            local_650 = (long *******)param_2[0xe0];
            *(undefined1 *)((long)param_2 + 0x69a) = 0;
            ppppppplStack_6a8 = (long *******)param_2[0xd5];
            local_6b0 = (long *******)*puVar53;
            ppppppplStack_698 = (long *******)param_2[0xd7];
            local_6a0 = (long *******)param_2[0xd6];
            uStack_688 = (long *******)param_2[0xd9];
            local_690 = (long *******)param_2[0xd8];
            uStack_678 = (long *******)param_2[0xdb];
            local_680 = (long *******)param_2[0xda];
            lVar45 = *(long *)(param_2[0xb2] + 0xb0);
            lVar2 = *(long *)(param_2[0xb2] + 0xb8);
            __rustc::__rust_no_alloc_shim_is_unstable_v2();
            puVar53 = (undefined8 *)FUN_004b25a4(0x78,8);
            if (puVar53 == (undefined8 *)0x0) {
                    /* try { // try from 0078f424 to 0078f42f has its CatchHandler @ 0078f51c */
                    /* WARNING: Subroutine does not return */
              alloc::alloc::handle_alloc_error(8,0x78);
            }
            lVar49 = *(long *)(lVar2 + 0x10);
            puVar53[9] = ppppppplStack_668;
            puVar53[8] = local_670;
            puVar53[0xb] = ppppppplStack_658;
            puVar53[10] = local_660;
            puVar53[0xd] = ppppppplStack_648;
            puVar53[0xc] = local_650;
            puVar53[1] = ppppppplStack_6a8;
            *puVar53 = local_6b0;
            puVar53[3] = ppppppplStack_698;
            puVar53[2] = local_6a0;
            puVar53[0xe] = local_640;
            puVar53[5] = uStack_688;
            puVar53[4] = local_690;
            puVar53[7] = uStack_678;
            puVar53[6] = local_680;
                    /* try { // try from 0078f338 to 0078f347 has its CatchHandler @ 0078f460 */
            (**(code **)(lVar2 + 0x18))
                      (lVar45 + (lVar49 - 1U & 0xfffffffffffffff0) + 0x10,puVar53,&PTR_FUN_00adce40)
            ;
          }
          else {
            ppppppplStack_668 = (long *******)param_2[0xdd];
            local_670 = (long *******)param_2[0xdc];
            ppppppplStack_658 = (long *******)param_2[0xdf];
            local_660 = (long *******)param_2[0xde];
            local_640 = (long *******)param_2[0xe2];
            ppppppplStack_648 = (long *******)param_2[0xe1];
            local_650 = (long *******)param_2[0xe0];
            *(undefined1 *)((long)param_2 + 0x69a) = 0;
            ppppppplStack_6a8 = (long *******)param_2[0xd5];
            local_6b0 = (long *******)*puVar53;
            ppppppplStack_698 = (long *******)param_2[0xd7];
            local_6a0 = (long *******)param_2[0xd6];
            uStack_688 = (long *******)param_2[0xd9];
            local_690 = (long *******)param_2[0xd8];
            uStack_678 = (long *******)param_2[0xdb];
            local_680 = (long *******)param_2[0xda];
            lVar45 = *(long *)(param_2[0xb2] + 0xb0);
            lVar2 = *(long *)(param_2[0xb2] + 0xb8);
            __rustc::__rust_no_alloc_shim_is_unstable_v2();
            puVar53 = (undefined8 *)FUN_004b25a4(0x78,8);
            if (puVar53 == (undefined8 *)0x0) {
                    /* try { // try from 0078f414 to 0078f41f has its CatchHandler @ 0078f53c */
                    /* WARNING: Subroutine does not return */
              alloc::alloc::handle_alloc_error(8,0x78);
            }
            lVar49 = *(long *)(lVar2 + 0x10);
            puVar53[9] = ppppppplStack_668;
            puVar53[8] = local_670;
            puVar53[0xb] = ppppppplStack_658;
            puVar53[10] = local_660;
            puVar53[0xd] = ppppppplStack_648;
            puVar53[0xc] = local_650;
            puVar53[1] = ppppppplStack_6a8;
            *puVar53 = local_6b0;
            puVar53[3] = ppppppplStack_698;
            puVar53[2] = local_6a0;
            puVar53[0xe] = local_640;
            puVar53[5] = uStack_688;
            puVar53[4] = local_690;
            puVar53[7] = uStack_678;
            puVar53[6] = local_680;
                    /* try { // try from 0078f284 to 0078f293 has its CatchHandler @ 0078f468 */
            (**(code **)(lVar2 + 0x18))
                      (lVar45 + (lVar49 - 1U & 0xfffffffffffffff0) + 0x10,puVar53,&PTR_FUN_00adce20)
            ;
          }
          local_1278 = local_430;
          local_1270 = local_450;
          unaff_x24 = (long *******)&DAT_fffffffffffffffe;
          local_1288 = uStack_428 & 0xff;
          local_1280 = ppppppplStack_438;
          ppppppplStack_b58 = ppppppplStack_408;
          local_b60 = local_410;
          uVar43 = uStack_428 >> 0x10;
          uVar51 = local_420 >> 8;
          local_1300 = (ulong)local_3e0 >> 8;
          unaff_x26 = (long *******)(uStack_428 >> 8 & 0xff);
          ppppppplStack_b38 = ppppppplStack_3e8;
          local_b40 = local_3f0;
          uVar58 = (uint)(byte)local_420;
          local_c10 = local_3c8;
          ppppppplStack_b48 = ppppppplStack_3f8;
          local_b50 = local_400;
          local_1308 = ppppppplStack_418;
          *(undefined2 *)((long)param_2 + 0x699) = 0;
          ppppppplStack_c18 = ppppppplStack_3d0;
          local_c20 = local_3d8;
          ppppppplVar39 = local_440;
          ppppppplStack_1268 = ppppppplStack_448;
          uVar40 = (char)local_3e0;
          goto LAB_00790798;
        }
        local_1280 = ppppppplStack_438;
        local_1278 = local_430;
        local_1288 = uStack_428 & 0xff;
        unaff_x26 = (long *******)(uStack_428 >> 8 & 0xff);
        uVar58 = (uint)(byte)local_420;
        ppppppplStack_b58 = ppppppplStack_408;
        local_b60 = local_410;
        uVar43 = uStack_428 >> 0x10;
        ppppppplStack_1268 = ppppppplStack_448;
        local_1270 = local_450;
        ppppppplStack_b48 = ppppppplStack_3f8;
        local_b50 = local_400;
        uVar51 = local_420 >> 8;
        ppppppplStack_b38 = ppppppplStack_3e8;
        local_b40 = local_3f0;
        local_1300 = (ulong)local_3e0 >> 8;
        ppppppplVar44 = (long *******)((ulong)local_3e0 & 0xff);
        ppppppplStack_c18 = ppppppplStack_3d0;
        local_c20 = local_3d8;
        local_1308 = ppppppplStack_418;
        local_c10 = local_3c8;
        ppppppplVar39 = local_440;
      }
      else {
        uStack_c50 = uStack_d38;
        local_c58 = local_d40;
        ppppppplStack_c98 = ppppppplStack_cf8;
        local_ca0 = local_d00;
        uStack_c40 = uStack_d28;
        local_c48 = local_d30;
        uStack_c30 = uStack_d18;
        local_c38 = local_d20;
        ppppppplStack_c80 = ppppppplStack_d68;
        ppppppplStack_c88 = local_d70;
        ppppppplStack_c70 = ppppppplStack_d58;
        ppppppplStack_c78 = local_d60;
        local_c90 = local_cf0;
        local_c28 = local_d10;
        ppppppplStack_c60 = ppppppplStack_d48;
        local_c68 = local_d50;
        if (unaff_x24 == (long *******)0xffffffffffffffff) {
          local_9b0 = ppppppplVar37;
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          ppppppplVar39 = (long *******)FUN_004b25a4(8,8);
          if (ppppppplVar39 == (long *******)0x0) {
                    /* try { // try from 0078f3c8 to 0078f3d3 has its CatchHandler @ 0078f574 */
                    /* WARNING: Subroutine does not return */
            alloc::alloc::handle_alloc_error(8,8);
          }
          cVar50 = *(char *)((long)param_2 + 0x701);
          *ppppppplVar39 = (long ******)ppppppplVar37;
          local_680 = (long *******)CONCAT71(local_680._1_7_,6);
          ppppppplStack_6a8 = (long *******)&PTR_FUN_00adece8;
          uStack_688._0_2_ = CONCAT11(2,(undefined1)uStack_688);
          local_6b0 = ppppppplVar39;
          if (cVar50 == '\x02') {
                    /* try { // try from 0078f3f4 to 0078f40f has its CatchHandler @ 0078f560 */
                    /* WARNING: Subroutine does not return */
            core::option::expect_failed
                      (&DAT_002e5b2c,0xb,&PTR_s__root__cargo_registry_src_index__00adf5c0);
          }
                    /* try { // try from 0078f160 to 0078f16f has its CatchHandler @ 0078f480 */
          <hyper_util::client::legacy::connect::[0]::hyper_util::client::legacy::connect::Connected>
          ::clone(&local_9b0,param_2 + 0xdd);
                    /* try { // try from 0078f170 to 0078f17f has its CatchHandler @ 0078f47c */
          <hyper_util::client::legacy::client::[f]::hyper_util::client::legacy::client::Error>::
          with_connect_info(&local_850,&local_6b0,&local_9b0);
          local_1280 = ppppppplStack_838;
          uVar43 = (ulong)uStack_828 >> 0x10;
          unaff_x26 = (long *******)((ulong)uStack_828 >> 8 & 0xff);
          uVar58 = (uint)(byte)local_820;
          uVar51 = (ulong)local_820 >> 8;
          local_1278 = local_830;
          local_1288 = (ulong)uStack_828 & 0xff;
          ppppppplStack_1268 = ppppppplStack_848;
          local_1270 = local_850;
          ppppppplVar39 = local_840;
        }
        else {
          local_6a0 = ppppppplStack_ca8;
          ppppppplStack_6a8 = local_cb0;
          uStack_688 = local_1278;
          local_660 = ppppppplStack_cd8;
          ppppppplStack_668 = local_ce0;
          local_640 = ppppppplStack_cb8;
          ppppppplStack_648 = local_cc0;
          ppppppplStack_5e8 = local_d40;
          local_5f0 = ppppppplStack_d48;
          local_650 = ppppppplStack_cc8;
          ppppppplStack_658 = local_cd0;
          uStack_5b8 = local_d10;
          local_5c0 = uStack_d18;
          local_670 = local_1320;
          uStack_5d8 = local_d30;
          local_5e0 = uStack_d38;
          uStack_5c8 = local_d20;
          local_5d0 = uStack_d28;
          ppppppplStack_618 = local_d70;
          local_620 = local_cf0;
          local_690 = local_1280;
          local_680 = (long *******)
                      CONCAT26((short)(uVar7 >> 0x20),
                               CONCAT42((int)uVar7,CONCAT11(bVar36,(char)ppppppplVar38)));
          uStack_678 = (long *******)CONCAT35((int3)(uVar8 >> 0x20),CONCAT41((int)uVar8,bVar3));
          ppppppplStack_628 = ppppppplStack_cf8;
          local_630 = local_d00;
          ppppppplStack_608 = local_d60;
          local_610 = ppppppplStack_d68;
          ppppppplStack_5f8 = local_d50;
          local_600 = ppppppplStack_d58;
          local_130c = (uint)*(byte *)(param_2 + 0xe2);
          local_6b0 = unaff_x24;
          ppppppplStack_698 = ppppppplVar39;
          uStack_638 = ppppppplVar44;
          local_4d0 = ppppppplVar37;
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          ppppppplVar38 = (long *******)FUN_004b25a4(8,8);
          if (ppppppplVar38 == (long *******)0x0) {
                    /* try { // try from 0078f35c to 0078f367 has its CatchHandler @ 0078f5b0 */
                    /* WARNING: Subroutine does not return */
            alloc::alloc::handle_alloc_error(8,8);
          }
          cVar50 = *(char *)((long)param_2 + 0x701);
          ppppppplStack_848 = (long *******)&PTR_FUN_00adece8;
          *ppppppplVar38 = (long ******)ppppppplVar37;
          local_820 = (long *******)((ulong)local_820 & 0xffffffffffffff00);
          uStack_828._0_2_ = CONCAT11(2,(undefined1)uStack_828);
          local_850 = ppppppplVar38;
          if (cVar50 == '\x02') {
                    /* try { // try from 0078f3a8 to 0078f3c3 has its CatchHandler @ 0078f58c */
                    /* WARNING: Subroutine does not return */
            core::option::expect_failed
                      (&DAT_002e5b2c,0xb,&PTR_s__root__cargo_registry_src_index__00adf5c0);
          }
                    /* try { // try from 0078ef58 to 0078ef67 has its CatchHandler @ 0078f48c */
          <hyper_util::client::legacy::connect::[0]::hyper_util::client::legacy::connect::Connected>
          ::clone(&local_4d0,param_2 + 0xdd);
                    /* try { // try from 0078ef68 to 0078ef7b has its CatchHandler @ 0078f484 */
          unaff_x26 = (long *******)(ulong)bVar36;
          <hyper_util::client::legacy::client::[f]::hyper_util::client::legacy::client::Error>::
          with_connect_info(&local_9b0,&local_850,&local_4d0);
          local_1300 = (ulong)ppppppplVar44 >> 8;
          ppppppplStack_b58 = ppppppplStack_cd8;
          local_b60 = local_ce0;
          ppppppplStack_b48 = ppppppplStack_cc8;
          local_b50 = local_cd0;
          ppppppplStack_bd8 = local_c58;
          local_be0 = ppppppplStack_c60;
          uStack_bc8 = local_c48;
          local_bd0 = uStack_c50;
          uStack_ba8 = local_c28;
          local_bb0 = uStack_c30;
          ppppppplStack_b38 = ppppppplStack_cb8;
          local_b40 = local_cc0;
          ppppppplStack_c08 = ppppppplStack_c88;
          local_c10 = local_c90;
          ppppppplStack_c18 = ppppppplStack_c98;
          local_c20 = local_ca0;
          ppppppplStack_be8 = local_c68;
          local_bf0 = ppppppplStack_c70;
          uStack_bb8 = local_c38;
          local_bc0 = uStack_c40;
          ppppppplStack_b78 = ppppppplStack_988;
          local_b80 = local_990;
          ppppppplStack_b88 = ppppppplStack_998;
          local_b90 = local_9a0;
          local_b70 = local_980;
          ppppppplStack_bf8 = ppppppplStack_c78;
          local_c00 = ppppppplStack_c80;
          ppppppplStack_1268 = local_6a0;
          local_1270 = ppppppplStack_6a8;
          local_1308 = local_1320;
          ppppppplStack_b98 = ppppppplStack_9a8;
          local_ba0 = local_9b0;
        }
      }
    }
                    /* try { // try from 00790760 to 00790767 has its CatchHandler @ 007912c8 */
    uVar40 = SUB81(ppppppplVar44,0);
    FUN_0078c534(param_2 + 0xd4);
    bVar36 = *(byte *)((long)param_2 + 0x699);
    *(undefined1 *)((long)param_2 + 0x69a) = 0;
  }
  if ((bVar36 & 1) != 0) {
                    /* try { // try from 0079078c to 00790793 has its CatchHandler @ 007912d0 */
    FUN_0078bb38(param_2 + 0xb3);
  }
  *(undefined1 *)((long)param_2 + 0x699) = 0;
LAB_00790798:
  local_12f8 = param_2 + 0xd3;
  ppppppplStack_f68 = ppppppplStack_b58;
  local_f70 = local_b60;
  ppppppplStack_f58 = ppppppplStack_b48;
  ppppppplStack_f60 = local_b50;
  ppppppplStack_f48 = ppppppplStack_b38;
  local_f50 = local_b40;
  ppppppplStack_fa8 = ppppppplStack_b98;
  local_fb0 = local_ba0;
  ppppppplStack_f98 = ppppppplStack_b88;
  ppppppplStack_fa0 = local_b90;
  ppppppplStack_f88 = ppppppplStack_b78;
  local_f90 = local_b80;
  ppppppplStack_fe8 = ppppppplStack_bd8;
  local_ff0 = local_be0;
  uStack_fd8 = uStack_bc8;
  uStack_fe0 = local_bd0;
  local_f80 = local_b70;
  uStack_fc8 = uStack_bb8;
  local_fd0 = local_bc0;
  uStack_fb8 = uStack_ba8;
  uStack_fc0 = local_bb0;
  ppppppplStack_1028 = ppppppplStack_c18;
  local_1030 = local_c20;
  ppppppplStack_1018 = ppppppplStack_c08;
  local_1020 = local_c10;
  ppppppplStack_1008 = ppppppplStack_bf8;
  local_1010 = local_c00;
  ppppppplStack_ff8 = ppppppplStack_be8;
  ppppppplStack_1000 = local_bf0;
  *(undefined1 *)local_12f8 = 1;
  ppppppplStack_e58 = ppppppplStack_b38;
  local_e60 = local_b40;
  ppppppplStack_e78 = ppppppplStack_b58;
  local_e80 = local_b60;
  ppppppplStack_e68 = ppppppplStack_b48;
  local_e70 = local_b50;
  ppppppplStack_e98 = ppppppplStack_c18;
  local_ea0 = local_c20;
  ppppppplStack_f38 = local_c00;
  local_f40 = ppppppplStack_c08;
  ppppppplStack_f28 = local_bf0;
  local_f30 = ppppppplStack_bf8;
  uStack_ee8 = local_bb0;
  local_ef0 = uStack_bb8;
  uStack_ef8 = local_bc0;
  local_f00 = uStack_bc8;
  uStack_f08 = local_bd0;
  local_f10 = ppppppplStack_bd8;
  ppppppplStack_f18 = local_be0;
  local_f20 = ppppppplStack_be8;
  ppppppplStack_ea8 = local_b70;
  local_eb0 = ppppppplStack_b78;
  local_e90 = local_c10;
  ppppppplStack_eb8 = local_b80;
  local_ec0 = ppppppplStack_b88;
  ppppppplStack_ec8 = local_b90;
  local_ed0 = ppppppplStack_b98;
  ppppppplStack_ed8 = local_ba0;
  local_ee0 = uStack_ba8;
                    /* try { // try from 0079087c to 00790883 has its CatchHandler @ 00791370 */
  FUN_0078d320(param_2 + 0x8b);
  ppppppplVar11 = ppppppplStack_ea8;
  ppppppplVar57 = local_eb0;
  ppppppplVar10 = local_ec0;
  ppppppplVar37 = ppppppplStack_ec8;
  ppppppplVar38 = local_ed0;
  ppppppplVar44 = ppppppplStack_ed8;
  puVar9 = PTR___CALLSITE_00b00e80;
  ppppppplVar52 = (long *******)((ulong)uVar58 | uVar51 << 8);
  ppppppplVar55 = (long *******)(local_1288 & 0xff | (long)unaff_x26 << 8 | uVar43 << 0x10);
  uVar41 = (undefined1)(local_1300 >> 0x30);
  uVar5 = (undefined2)(local_1300 >> 0x20);
  if (unaff_x24 == (long *******)0xffffffffffffffff) {
    ppppppplVar57 = (long *******)0xffffffffffffffff;
    local_1308 = ppppppplVar52;
    ppppppplVar44 = local_1270;
    ppppppplVar52 = ppppppplVar55;
    ppppppplVar37 = ppppppplVar39;
    goto LAB_00790e18;
  }
  if (unaff_x24 == (long *******)&DAT_fffffffffffffffe) {
    ppppppplStack_e28 = ppppppplStack_e78;
    local_e30 = local_e80;
    ppppppplStack_e18 = ppppppplStack_e68;
    local_e20 = local_e70;
    ppppppplStack_e08 = ppppppplStack_e58;
    local_e10 = local_e60;
    ppppppplStack_e48 = ppppppplStack_e98;
    local_e50 = local_ea0;
    local_e40 = local_e90;
    ppppppplVar44 = ppppppplStack_1268;
    ppppppplVar57 = local_1270;
    ppppppplVar37 = local_1280;
    local_1280 = local_1278;
    ppppppplStack_1268 = ppppppplVar39;
    local_1278 = ppppppplVar55;
    goto LAB_00790e18;
  }
  ppppppplStack_6a8 = local_1270;
  local_660 = ppppppplStack_e78;
  ppppppplStack_668 = local_e80;
  uStack_688 = local_1278;
  local_650 = ppppppplStack_e68;
  ppppppplStack_658 = local_e70;
  ppppppplStack_628 = ppppppplStack_e98;
  local_630 = local_ea0;
  local_670 = local_1308;
  uStack_638 = (long *******)((local_1300 & 0xffffffff) << 8);
  local_5e0 = uStack_f08;
  ppppppplStack_5e8 = local_f10;
  local_5d0 = uStack_ef8;
  uStack_5d8 = local_f00;
  local_640 = ppppppplStack_e58;
  ppppppplStack_648 = local_e60;
  local_5c0 = uStack_ee8;
  uStack_5c8 = local_ef0;
  local_610 = ppppppplStack_f38;
  ppppppplStack_618 = local_f40;
  uStack_638 = (long *******)CONCAT17(uVar41,CONCAT25(uVar5,(undefined5)uStack_638));
  local_600 = ppppppplStack_f28;
  ppppppplStack_608 = local_f30;
  local_5f0 = ppppppplStack_f18;
  ppppppplStack_5f8 = local_f20;
  ppppppplStack_848 = local_ed0;
  local_850 = ppppppplStack_ed8;
  local_620 = local_e90;
  local_690 = local_1280;
  uStack_638 = (long *******)CONCAT71(uStack_638._1_7_,uVar40);
  ppppppplStack_838 = local_ec0;
  local_840 = ppppppplStack_ec8;
  uStack_5b8 = local_ee0;
  uStack_828 = local_eb0;
  local_830 = ppppppplStack_eb8;
  local_820 = ppppppplStack_ea8;
  local_6b0 = unaff_x24;
  local_6a0 = ppppppplStack_1268;
  ppppppplStack_698 = ppppppplVar39;
  local_680 = ppppppplVar55;
  uStack_678 = ppppppplVar52;
  if ((*(byte *)(param_2 + 0x59) & local_130c & 1) == 0) {
    local_1278 = ppppppplStack_eb8;
                    /* try { // try from 00790e0c to 00790e13 has its CatchHandler @ 007910d8 */
    FUN_0078bb38(&local_6b0);
    local_1308 = ppppppplVar11;
    ppppppplVar52 = ppppppplVar57;
    ppppppplVar57 = (long *******)0xffffffffffffffff;
    local_1280 = ppppppplVar10;
    ppppppplStack_1268 = ppppppplVar38;
LAB_00790e18:
                    /* try { // try from 00790e18 to 00790e1f has its CatchHandler @ 00791174 */
    FUN_0078d9c8(param_2 + 0x80);
    if (1 < *(byte *)(param_2 + 0x7a)) {
      plVar56 = (long *)param_2[0x7b];
                    /* try { // try from 00790e3c to 00790e43 has its CatchHandler @ 007910f8 */
      (**(code **)(*plVar56 + 0x20))(plVar56 + 3,plVar56[1],plVar56[2]);
      free(plVar56);
    }
                    /* try { // try from 00790e64 to 00790e6b has its CatchHandler @ 0079116c */
    (**(code **)(param_2[0x7c] + 0x20))(param_2 + 0x7f,param_2[0x7d],param_2[0x7e]);
    *(undefined1 *)((long)param_2 + 0xb09) = 0;
                    /* try { // try from 00790e70 to 00790e77 has its CatchHandler @ 00791160 */
    FUN_0078c870(param_2 + 0x40);
    param_1[4] = local_1280;
    param_1[5] = local_1278;
    param_1[9] = ppppppplStack_e28;
    param_1[8] = local_e30;
    param_1[0xb] = ppppppplStack_e18;
    param_1[10] = local_e20;
    *(undefined1 *)((long)param_1 + 0x77) = uVar41;
    param_1[0xd] = ppppppplStack_e08;
    param_1[0xc] = local_e10;
    *(int *)((long)param_1 + 0x71) = (int)local_1300;
    param_1[0x11] = local_e40;
    uVar41 = 1;
    *param_1 = ppppppplVar57;
    param_1[1] = ppppppplVar44;
    param_1[2] = ppppppplStack_1268;
    param_1[3] = ppppppplVar37;
    param_1[6] = ppppppplVar52;
    param_1[7] = local_1308;
    *(undefined1 *)(param_1 + 0xe) = uVar40;
    *(undefined2 *)((long)param_1 + 0x75) = uVar5;
    param_1[0x10] = ppppppplStack_e48;
    param_1[0xf] = local_e50;
LAB_00790ed4:
    *(undefined1 *)(param_2 + 0x161) = uVar41;
    return;
  }
  if (*(long *)PTR_MAX_LEVEL_00b00e60 == 0) {
    bVar36 = PTR___CALLSITE_00b00e80[0x10];
    if (2 < bVar36) {
                    /* try { // try from 00790fd8 to 00790fe3 has its CatchHandler @ 007910cc */
      bVar36 = <tracing_core::callsite::tracing_core::callsite::DefaultCallsite>::register
                         (PTR___CALLSITE_00b00e80);
    }
                    /* try { // try from 00790ac0 to 00790ac3 has its CatchHandler @ 00791218 */
    if ((bVar36 != 0) &&
       (uVar43 = tracing::__macro_support::__is_enabled(*(undefined8 *)puVar9), (uVar43 & 1) != 0))
    {
      lVar45 = *(long *)puVar9;
      if (*(long ********)(lVar45 + 0x38) == (long *******)0x0) {
                    /* try { // try from 00791070 to 00791087 has its CatchHandler @ 00791178 */
                    /* WARNING: Subroutine does not return */
        core::option::expect_failed
                  ("FieldSet corrupted (this is a bug)",0x22,
                   &PTR_s__root__cargo_registry_src_index__00adc300);
      }
      local_200 = (long *******)0x0;
      ppppppplStack_208 = *(long ********)(lVar45 + 0x48);
      local_210 = *(long ********)(lVar45 + 0x40);
      local_9a0 = (long *******)(lVar45 + 0x30);
      local_220 = (long *******)*local_9a0;
      local_c20 = (long *******)&local_850;
      ppppppplStack_1028 = (long *******)&local_c20;
      ppppppplStack_448 = (long *******)&local_1030;
      ppppppplStack_c18 = (long *******)PTR_fmt_00b00e88;
      local_1030 = (long *******)&DAT_002b8994;
      local_450 = (long *******)&local_220;
      local_440 = (long *******)&DAT_00adc160;
      local_9b0 = (long *******)&local_450;
      ppppppplStack_9a8 = (long *******)&DAT_00000001;
                    /* try { // try from 00790b4c to 00790b53 has its CatchHandler @ 0079117c */
      ppppppplStack_218 = *(long ********)(lVar45 + 0x38);
      <tracing_core::event::tracing_core::event::Event>::dispatch(lVar45,&local_9b0);
    }
  }
                    /* try { // try from 007909ac to 007909bb has its CatchHandler @ 00791344 */
  FUN_0079362c(&local_220,param_2 + 0x80);
  unaff_x20 = (long *******)&local_6b0;
                    /* try { // try from 007909c0 to 007909c7 has its CatchHandler @ 00791314 */
  FUN_0078d9c8(&local_650);
  ppppppplVar34 = local_1d0;
  ppppppplVar33 = ppppppplStack_1d8;
  ppppppplVar32 = local_1e0;
  ppppppplVar31 = ppppppplStack_1e8;
  ppppppplVar30 = local_1f0;
  ppppppplVar29 = uStack_1f8;
  ppppppplVar28 = local_200;
  ppppppplVar27 = ppppppplStack_208;
  ppppppplVar26 = local_210;
  ppppppplVar25 = ppppppplStack_218;
  ppppppplVar24 = local_220;
  uVar23 = uStack_5b8;
  uVar22 = local_5c0;
  uVar21 = uStack_5c8;
  uVar20 = local_5d0;
  uVar19 = uStack_5d8;
  uVar18 = local_5e0;
  ppppppplVar17 = ppppppplStack_5e8;
  ppppppplVar16 = local_5f0;
  ppppppplVar15 = ppppppplStack_5f8;
  ppppppplVar14 = ppppppplStack_658;
  ppppppplVar13 = local_660;
  ppppppplVar12 = ppppppplStack_668;
  ppppppplVar55 = local_670;
  ppppppplVar52 = uStack_678;
  ppppppplVar11 = local_680;
  ppppppplVar57 = uStack_688;
  ppppppplVar10 = local_690;
  ppppppplVar37 = ppppppplStack_698;
  ppppppplVar38 = local_6a0;
  ppppppplVar39 = ppppppplStack_6a8;
  ppppppplVar44 = local_6b0;
  ppppppplStack_618 = ppppppplStack_1e8;
  local_620 = local_1f0;
  ppppppplStack_608 = ppppppplStack_1d8;
  local_610 = local_1e0;
  local_600 = local_1d0;
  ppppppplStack_648 = ppppppplStack_218;
  local_650 = local_220;
  uStack_638 = ppppppplStack_208;
  local_640 = local_210;
  ppppppplStack_628 = uStack_1f8;
  local_630 = local_200;
                    /* try { // try from 00790a50 to 00790a57 has its CatchHandler @ 00791310 */
  FUN_0078df18(&local_850);
  uVar46 = 1;
  *(undefined1 *)((long)param_2 + 0xb09) = 1;
  param_2[0x73] = ppppppplVar17;
  param_2[0x72] = ppppppplVar16;
  param_2[0x75] = uVar19;
  param_2[0x74] = uVar18;
  param_2[0x77] = uVar21;
  param_2[0x76] = uVar20;
  param_2[0x79] = uVar23;
  param_2[0x78] = uVar22;
  param_2[0x6b] = ppppppplVar29;
  param_2[0x6a] = ppppppplVar28;
  param_2[0x6d] = ppppppplVar31;
  param_2[0x6c] = ppppppplVar30;
  param_2[0x6f] = ppppppplVar33;
  param_2[0x6e] = ppppppplVar32;
  param_2[0x71] = ppppppplVar15;
  param_2[0x70] = ppppppplVar34;
  param_2[99] = ppppppplVar12;
  param_2[0x62] = ppppppplVar55;
  param_2[0x65] = ppppppplVar14;
  param_2[100] = ppppppplVar13;
  param_2[0x67] = ppppppplVar25;
  param_2[0x66] = ppppppplVar24;
  param_2[0x69] = ppppppplVar27;
  param_2[0x68] = ppppppplVar26;
  param_2[0x5b] = ppppppplVar39;
  param_2[0x5a] = ppppppplVar44;
  param_2[0x5d] = ppppppplVar37;
  param_2[0x5c] = ppppppplVar38;
  param_2[0x5f] = ppppppplVar57;
  param_2[0x5e] = ppppppplVar10;
  param_2[0x61] = ppppppplVar52;
  param_2[0x60] = ppppppplVar11;
  goto LAB_0078e548;
}


// ===== 007914e4  FUN_007914e4 =====

long FUN_007914e4(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *__ptr;
  
  __ptr = (long *)param_1[1];
  lVar3 = *__ptr;
  while (lVar3 == 0) {
    if ((long *)*param_1 == __ptr) {
      return 0;
    }
    std::thread::functions::yield_now();
    __ptr = (long *)param_1[1];
    lVar3 = *__ptr;
  }
  param_1[1] = lVar3;
  if (__ptr[1] != 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: (*tail).value.is_none()",0x29,
               &PTR_s__root__cargo_registry_src_index__00adc3b0);
  }
  lVar5 = *(long *)(lVar3 + 8);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: (*next).value.is_some()",0x29,
               &PTR_s__root__cargo_registry_src_index__00adc3c8);
  }
  *(undefined8 *)(lVar3 + 8) = 0;
  plVar4 = (long *)__ptr[1];
  if (plVar4 != (long *)0x0) {
    do {
      lVar3 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 00791560 to 00791563 has its CatchHandler @ 007915cc */
      <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<futures_channel::mpsc::SenderTask>>>
      ::drop_slow();
    }
  }
  free(__ptr);
  return lVar5;
}


// ===== 00791610  <alloc::collections::vec_deque::[4]::alloc::collections::vec_deque::VecDeque<futures_channel::oneshot::Sender<hyper_util::client::legacy::client::PoolClient<reqwest::async_impl::body::Body>>>>::grow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::collections::vec_deque::[4]::alloc::collections::vec_deque::VecDeque<futures_channel::oneshot::Sender<hyper_util::client::legacy::client::PoolClient<reqwest::async_impl::body::Body>>>>::grow
    */

void __rustcall
<alloc::collections::vec_deque::[4]::alloc::collections::vec_deque::VecDeque<futures_channel::oneshot::Sender<hyper_util::client::legacy::client::PoolClient<reqwest::async_impl::body::Body>>>>
::grow(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<futures_channel::oneshot::Sender<hyper_util::client::legacy::client::PoolClient<reqwest::async_impl::body::Body>>>>
  ::grow_one();
  uVar1 = param_1[2];
  if ((ulong)(lVar4 - param_1[3]) < uVar1) {
    uVar2 = lVar4 - uVar1;
    uVar3 = param_1[3] - uVar2;
    if ((uVar3 < uVar2) && (uVar3 <= (ulong)(*param_1 - lVar4))) {
      memcpy((void *)(param_1[1] + lVar4 * 8),(void *)param_1[1],uVar3 * 8);
      return;
    }
    lVar4 = *param_1 - uVar2;
    memmove((void *)(param_1[1] + lVar4 * 8),(void *)(param_1[1] + uVar1 * 8),uVar2 * 8);
    param_1[2] = lVar4;
  }
  return;
}


// ===== 00791698  <alloc::collections::vec_deque::[4]::alloc::collections::vec_deque::VecDeque<hyper::proto::h1::encode::EncodedBuf<bytes::bytes::Bytes>>>::grow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::collections::vec_deque::[4]::alloc::collections::vec_deque::VecDeque<hyper::proto::h1::encode::EncodedBuf<bytes::bytes::Bytes>>>::grow
    */

void __rustcall
<alloc::collections::vec_deque::[4]::alloc::collections::vec_deque::VecDeque<hyper::proto::h1::encode::EncodedBuf<bytes::bytes::Bytes>>>
::grow(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<hyper::proto::h1::encode::EncodedBuf<bytes::bytes::Bytes>>>
  ::grow_one();
  uVar1 = param_1[2];
  if ((ulong)(lVar4 - param_1[3]) < uVar1) {
    uVar2 = lVar4 - uVar1;
    uVar3 = param_1[3] - uVar2;
    if ((uVar3 < uVar2) && (uVar3 <= (ulong)(*param_1 - lVar4))) {
      memcpy((void *)(param_1[1] + lVar4 * 0x50),(void *)param_1[1],uVar3 * 0x50);
      return;
    }
    lVar4 = *param_1 - uVar2;
    memmove((void *)(param_1[1] + lVar4 * 0x50),(void *)(param_1[1] + uVar1 * 0x50),uVar2 * 0x50);
    param_1[2] = lVar4;
  }
  return;
}


// ===== 00791730  FUN_00791730 =====

void FUN_00791730(undefined8 *param_1,undefined1 (*param_2) [16],char *param_3)

{
  undefined1 (*pauVar1) [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  byte bVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  char cVar10;
  bool bVar11;
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  code *pcVar17;
  char extraout_w8;
  char extraout_w8_00;
  long *plVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined4 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
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
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  char local_98;
  char local_97;
  undefined8 *local_90;
  undefined1 auStack_88 [40];
  
  plVar18 = *(long **)param_2[0xb];
  do {
    lVar19 = *plVar18;
    cVar10 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar11) {
      *plVar18 = lVar19 + 1;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  if (lVar19 < 0) {
LAB_00791978:
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x79197c);
    (*pcVar17)();
  }
  uVar2 = *(undefined8 *)param_2[0xb];
  uVar3 = *(undefined8 *)(param_2[0xb] + 8);
  plVar18 = *(long **)param_2[0xc];
  if (plVar18 == (long *)0x0) {
    uVar21 = 0;
  }
  else {
    do {
      lVar19 = *plVar18;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar11) {
        *plVar18 = lVar19 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar19 < 0) goto LAB_00791978;
    uVar21 = *(undefined8 *)param_2[0xc];
  }
  pauVar1 = param_2 + 1;
  uVar13 = *(undefined8 *)*pauVar1;
  auVar29 = *pauVar1;
  auVar28 = *pauVar1;
  pauVar1 = param_2 + 2;
  uVar23 = *(undefined8 *)*pauVar1;
  auVar16 = *pauVar1;
  auVar15 = *pauVar1;
  uVar5 = param_2[3][0];
  uVar4 = *(undefined4 *)(param_2[3] + 4);
  uVar6 = param_2[3][10];
  bVar7 = param_2[3][8];
  puVar20 = (undefined8 *)(ulong)bVar7;
  uVar8 = param_2[3][9];
  uVar9 = param_2[0xc][10];
  auVar12 = *param_2;
  local_168._0_3_ = (undefined3)*(undefined4 *)(param_2[3] + 1);
  local_168._3_1_ = (undefined1)uVar4;
                    /* try { // try from 007917dc to 007917e3 has its CatchHandler @ 007919b0 */
  FUN_00792ab0(&local_160,param_2 + 4);
  cVar10 = *param_3;
  local_97 = extraout_w8;
  if (cVar10 != '\0') {
    if (cVar10 == '\x01') {
      local_97 = param_3[1];
    }
    else {
      puVar22 = *(undefined8 **)(param_3 + 8);
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      puVar20 = (undefined8 *)FUN_004b25a4(0x20,8);
      if (puVar20 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(8,0x20);
      }
                    /* try { // try from 00791830 to 0079183b has its CatchHandler @ 0079197c */
      (**(code **)*puVar22)(&local_f0,puVar22 + 3,puVar22[1],puVar22[2]);
      puVar20[1] = uStack_e8;
      *puVar20 = local_f0;
      puVar20[3] = uStack_d8;
      puVar20[2] = uStack_e0;
      local_97 = extraout_w8_00;
    }
  }
                    /* try { // try from 00791864 to 0079186f has its CatchHandler @ 00791994 */
  local_98 = cVar10;
  local_90 = puVar20;
  (*(code *)**(undefined8 **)(param_3 + 0x10))
            (auStack_88,param_3 + 0x28,*(undefined8 *)(param_3 + 0x18),
             *(undefined8 *)(param_3 + 0x20));
                    /* try { // try from 00791870 to 00791977 has its CatchHandler @ 007919b8 */
  hyper_util::client::legacy::client::domain_as_uri(&local_f0,&local_98);
  uVar14 = *(undefined8 *)param_3;
  uVar25 = *(undefined8 *)(param_3 + 0x18);
  uVar24 = *(undefined8 *)(param_3 + 0x10);
  uVar27 = *(undefined8 *)(param_3 + 0x28);
  uVar26 = *(undefined8 *)(param_3 + 0x20);
  param_1[0x18] = *(undefined8 *)(param_3 + 8);
  param_1[0x17] = uVar14;
  param_1[0x1a] = uVar25;
  param_1[0x19] = uVar24;
  auVar28 = NEON_ext(auVar28,auVar29,8,1);
  auVar29 = NEON_ext(auVar15,auVar16,8,1);
  param_1[0x1c] = uVar27;
  param_1[0x1b] = uVar26;
  param_1[0x26] = uStack_a8;
  param_1[0x25] = local_b0;
  *(undefined1 *)(param_1 + 7) = uVar5;
  param_1[0x10] = uStack_128;
  param_1[0xf] = local_130;
  param_1[0x12] = uStack_118;
  param_1[0x11] = uStack_120;
  *(byte *)(param_1 + 8) = bVar7;
  *(undefined1 *)((long)param_1 + 0x41) = uVar8;
  param_1[0x16] = uStack_f8;
  param_1[0x15] = uStack_100;
  param_1[0x14] = uStack_108;
  param_1[0x13] = local_110;
  param_1[4] = auVar28._0_8_;
  param_1[3] = uVar13;
  param_1[10] = uStack_158;
  param_1[9] = local_160;
  auVar28 = NEON_ext(auVar12,auVar12,8,1);
  param_1[0xc] = uStack_148;
  param_1[0xb] = local_150;
  param_1[0xe] = uStack_138;
  param_1[0xd] = uStack_140;
  param_1[6] = auVar29._0_8_;
  param_1[5] = uVar23;
  param_1[0x29] = uVar3;
  param_1[0x2a] = uVar21;
  param_1[0x22] = uStack_c8;
  param_1[0x21] = local_d0;
  param_1[0x24] = uStack_b8;
  param_1[0x23] = uStack_c0;
  *param_1 = 5;
  *(undefined1 *)(param_1 + 0x2b) = uVar9;
  *(undefined4 *)((long)param_1 + 0x3c) = uVar4;
  *(undefined4 *)((long)param_1 + 0x39) = local_168;
  param_1[0x1e] = uStack_e8;
  param_1[0x1d] = local_f0;
  param_1[0x20] = uStack_d8;
  param_1[0x1f] = uStack_e0;
  param_1[2] = auVar28._0_8_;
  param_1[1] = auVar12._0_8_;
  *(undefined1 *)((long)param_1 + 0x42) = uVar6;
  param_1[0x27] = local_a0;
  param_1[0x28] = uVar2;
  *(undefined1 *)((long)param_1 + 0x159) = uVar9;
  return;
}


// ===== 00791a20  FUN_00791a20 =====

undefined1  [16] FUN_00791a20(undefined1 (*param_1) [16],undefined8 *param_2)

{
  undefined1 (*pauVar1) [16];
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  bool bVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined *puVar14;
  code *pcVar15;
  char cVar16;
  undefined8 *puVar17;
  ulong uVar18;
  void *__dest;
  long *plVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  char *local_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 local_ca0;
  undefined8 uStack_c98;
  undefined8 local_c90;
  long lStack_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 local_c68;
  undefined8 uStack_c60;
  undefined1 local_c58;
  undefined1 uStack_c57;
  undefined1 uStack_c56;
  undefined5 uStack_c55;
  undefined3 uStack_c50;
  undefined5 uStack_c4d;
  undefined3 uStack_c48;
  undefined5 uStack_c45;
  undefined3 local_c40;
  undefined5 uStack_c3d;
  undefined3 uStack_c38;
  undefined5 uStack_c35;
  undefined3 local_c30;
  undefined5 uStack_c2d;
  undefined3 uStack_c28;
  undefined5 uStack_c25;
  undefined3 uStack_c20;
  undefined5 uStack_c1d;
  undefined3 uStack_c18;
  undefined5 uStack_c15;
  undefined3 local_c10;
  undefined5 uStack_c0d;
  undefined3 uStack_c08;
  undefined5 uStack_c05;
  undefined3 uStack_c00;
  undefined8 uStack_bfd;
  undefined8 local_bf5;
  undefined5 uStack_bed;
  undefined3 uStack_be8;
  undefined5 uStack_be5;
  undefined8 uStack_be0;
  undefined8 local_bd8;
  long *plStack_bd0;
  undefined2 local_bc8;
  undefined1 local_bc6;
  undefined8 local_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 local_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 local_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 local_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 local_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 local_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined8 local_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  undefined8 local_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined8 uStack_ac8;
  char *local_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 uStack_aa8;
  undefined8 local_aa0;
  undefined8 uStack_a98;
  undefined1 local_188;
  undefined5 local_180;
  undefined3 uStack_17b;
  undefined5 uStack_178;
  undefined3 uStack_173;
  undefined5 uStack_170;
  undefined3 uStack_16b;
  undefined5 uStack_168;
  undefined3 uStack_163;
  undefined5 uStack_160;
  undefined3 uStack_15b;
  undefined5 local_158;
  undefined3 uStack_153;
  undefined5 uStack_150;
  undefined3 uStack_14b;
  undefined5 local_148;
  undefined3 uStack_143;
  undefined5 uStack_140;
  undefined3 local_13b;
  undefined5 uStack_138;
  undefined3 uStack_133;
  undefined5 uStack_130;
  undefined3 local_12b;
  undefined5 uStack_128;
  undefined3 uStack_123;
  undefined5 uStack_120;
  undefined3 local_11b;
  undefined5 uStack_118;
  undefined3 uStack_113;
  undefined5 uStack_110;
  undefined4 local_104;
  undefined3 uStack_100;
  undefined2 local_fc;
  undefined1 local_fa;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined3 uStack_e4;
  undefined8 *local_e0;
  char **ppcStack_d8;
  undefined *local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar14 = PTR___CALLSITE_00b00e98;
  bVar4 = *(byte *)(param_2 + 0x1b);
  if (bVar4 - 2 < 2) {
LAB_00791a60:
                    /* try { // try from 00791a68 to 00791a77 has its CatchHandler @ 00791ec0 */
    hyper_util::client::legacy::client::extract_domain
              (&local_180,param_2 + 0xc,*(char *)(param_2 + 0x17) == '\a');
    if (CONCAT35(uStack_17b,local_180) != 1) {
      local_fc = *(undefined2 *)(param_1[0xc] + 8);
      uStack_cb8 = CONCAT35(uStack_16b,uStack_170);
      local_cc0 = (char *)CONCAT35(uStack_173,uStack_178);
      uStack_ca8 = CONCAT35(uStack_15b,uStack_160);
      uStack_cb0 = CONCAT35(uStack_163,uStack_168);
      local_ca0 = CONCAT35(uStack_153,local_158);
      auVar11._8_5_ = uStack_150;
      auVar11._0_8_ = local_ca0;
      auVar11._13_3_ = uStack_14b;
      local_fa = param_1[0xc][10];
      plVar19 = *(long **)param_1[0xb];
      uStack_c98 = auVar11._8_8_;
      do {
        lVar20 = *plVar19;
        cVar16 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar9) {
          *plVar19 = lVar20 + 1;
          cVar16 = ExclusiveMonitorsStatus();
        }
      } while (cVar16 != '\0');
      if (-1 < lVar20) {
        pauVar1 = param_1 + 1;
        uVar21 = *(undefined8 *)*pauVar1;
        auVar11 = *pauVar1;
        auVar24 = *pauVar1;
        pauVar1 = param_1 + 2;
        uVar23 = *(undefined8 *)*pauVar1;
        auVar10 = *pauVar1;
        auVar12 = *pauVar1;
        uVar2 = *(undefined8 *)param_1[0xb];
        uVar3 = *(undefined8 *)(param_1[0xb] + 8);
        uVar5 = param_1[3][0];
        uVar6 = param_1[3][10];
        uVar7 = param_1[3][8];
        uVar8 = param_1[3][9];
        uVar22 = *(undefined8 *)*param_1;
        auVar13 = *param_1;
        auVar25 = *param_1;
        local_e8._0_3_ = (undefined3)*(undefined4 *)(param_1[3] + 1);
        local_e8._3_1_ = (undefined1)*(undefined4 *)(param_1[3] + 4);
        uStack_e4 = (undefined3)((uint)*(undefined4 *)(param_1[3] + 4) >> 8);
                    /* try { // try from 00791c00 to 00791c0b has its CatchHandler @ 00791e8c */
        local_f8 = uVar2;
        uStack_f0 = uVar3;
        FUN_00792ab0(&local_e0,param_1 + 4);
        plStack_bd0 = *(long **)param_1[0xc];
        if (plStack_bd0 != (long *)0x0) {
          do {
            lVar20 = *plStack_bd0;
            cVar16 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plStack_bd0,0x10);
            if (bVar9) {
              *plStack_bd0 = lVar20 + 1;
              cVar16 = ExclusiveMonitorsStatus();
            }
          } while (cVar16 != '\0');
          if (lVar20 < 0) goto LAB_00791e88;
          plStack_bd0 = *(long **)param_1[0xc];
        }
        local_bc8 = local_fc;
        auVar25 = NEON_ext(auVar25,auVar13,8,1);
        uStack_143 = (undefined3)uStack_a8;
        uStack_140 = (undefined5)((ulong)uStack_a8 >> 0x18);
        uStack_14b = (undefined3)local_b0;
        local_148 = (undefined5)((ulong)local_b0 >> 0x18);
        auVar24 = NEON_ext(auVar24,auVar11,8,1);
        uStack_133 = (undefined3)uStack_98;
        uStack_130 = (undefined5)((ulong)uStack_98 >> 0x18);
        local_13b = (undefined3)uStack_a0;
        uStack_138 = (undefined5)((ulong)uStack_a0 >> 0x18);
        local_bc6 = local_fa;
        lStack_c88 = auVar25._0_8_;
        uStack_113 = (undefined3)uStack_78;
        uStack_110 = (undefined5)((ulong)uStack_78 >> 0x18);
        local_11b = (undefined3)uStack_80;
        uStack_118 = (undefined5)((ulong)uStack_80 >> 0x18);
        uStack_c78 = auVar24._0_8_;
        uStack_123 = (undefined3)uStack_88;
        uStack_120 = (undefined5)((ulong)uStack_88 >> 0x18);
        local_12b = (undefined3)local_90;
        uStack_128 = (undefined5)((ulong)local_90 >> 0x18);
        local_104 = local_e8;
        uStack_100 = uStack_e4;
        uStack_173 = SUB83(ppcStack_d8,0);
        uStack_170 = (undefined5)((ulong)ppcStack_d8 >> 0x18);
        uStack_17b = SUB83(local_e0,0);
        uStack_178 = (undefined5)((ulong)local_e0 >> 0x18);
        uStack_163 = (undefined3)uStack_c8;
        uStack_160 = (undefined5)((ulong)uStack_c8 >> 0x18);
        uStack_16b = SUB83(local_d0,0);
        uStack_168 = (undefined5)((ulong)local_d0 >> 0x18);
        uStack_af8 = param_2[0x19];
        local_b00 = param_2[0x18];
        uStack_ae8 = param_2[0x1b];
        uStack_af0 = param_2[0x1a];
        uStack_153 = (undefined3)uStack_b8;
        uStack_150 = (undefined5)((ulong)uStack_b8 >> 0x18);
        uStack_15b = (undefined3)uStack_c0;
        local_158 = (undefined5)((ulong)uStack_c0 >> 0x18);
        uStack_c60._0_5_ = CONCAT41(local_e8,uVar5);
        local_ae0 = param_2[0x1c];
        uStack_ad8 = param_2[0x1d];
        uStack_ac8 = param_2[0x1f];
        uStack_ad0 = param_2[0x1e];
        uStack_c60 = CONCAT44(CONCAT31(uStack_e4,local_e8._3_1_),(undefined4)uStack_c60);
        uStack_b38 = param_2[0x11];
        local_b40 = param_2[0x10];
        uStack_b28 = param_2[0x13];
        uStack_b30 = param_2[0x12];
        local_b20 = param_2[0x14];
        uStack_b18 = param_2[0x15];
        uStack_b08 = param_2[0x17];
        uStack_b10 = param_2[0x16];
        uStack_b78 = param_2[9];
        local_b80 = param_2[8];
        uStack_b68 = param_2[0xb];
        uStack_b70 = param_2[10];
        local_188 = 0;
        local_b60 = param_2[0xc];
        uStack_b58 = param_2[0xd];
        uStack_b48 = param_2[0xf];
        uStack_b50 = param_2[0xe];
        uStack_bb8 = param_2[1];
        local_bc0 = *param_2;
        uStack_ba8 = param_2[3];
        uStack_bb0 = param_2[2];
        auVar24 = NEON_ext(auVar12,auVar10,8,1);
        uStack_b98 = param_2[5];
        local_ba0 = param_2[4];
        uStack_b88 = param_2[7];
        uStack_b90 = param_2[6];
        local_c68 = auVar24._0_8_;
        uStack_ab8 = uStack_cb8;
        local_ac0 = local_cc0;
        uStack_aa8 = uStack_ca8;
        uStack_ab0 = uStack_cb0;
        local_bf5 = CONCAT35(local_11b,uStack_120);
        uStack_a98 = uStack_c98;
        local_aa0 = local_ca0;
        uStack_bfd = CONCAT35(uStack_123,uStack_128);
        uStack_bed = uStack_118;
        uStack_be8 = uStack_113;
        uStack_c05 = uStack_130;
        uStack_c00 = local_12b;
        uStack_c0d = uStack_138;
        uStack_c08 = uStack_133;
        uStack_c15 = uStack_140;
        local_c10 = local_13b;
        uStack_c1d = local_148;
        uStack_c18 = uStack_143;
        uStack_c25 = uStack_150;
        uStack_c20 = uStack_14b;
        uStack_c2d = local_158;
        uStack_c28 = uStack_153;
        uStack_c35 = uStack_160;
        local_c30 = uStack_15b;
        uStack_c3d = uStack_168;
        uStack_c38 = uStack_163;
        uStack_c45 = uStack_170;
        local_c40 = uStack_16b;
        uStack_c4d = uStack_178;
        uStack_c48 = uStack_173;
        uStack_c50 = uStack_17b;
        local_c90 = uVar22;
        uStack_c80 = uVar21;
        uStack_c70 = uVar23;
        local_c58 = uVar7;
        uStack_c57 = uVar8;
        uStack_c56 = uVar6;
        uStack_be5 = uStack_110;
        uStack_be0 = uVar2;
        local_bd8 = uVar3;
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        __dest = (void *)FUN_004b25a4(0xb10,8);
        if (__dest != (void *)0x0) {
          memcpy(__dest,&local_c90,0xb10);
          auVar12._8_8_ = &PTR_FUN_00adc448;
          auVar12._0_8_ = __dest;
          return auVar12;
        }
                    /* try { // try from 00791e38 to 00791e43 has its CatchHandler @ 00791edc */
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(8,0xb10);
      }
LAB_00791e88:
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x791e8c);
      (*pcVar15)();
    }
    uStack_c80 = CONCAT35(uStack_16b,uStack_170);
    lStack_c88 = CONCAT35(uStack_173,uStack_178);
    uStack_c70 = CONCAT35(uStack_15b,uStack_160);
    uStack_c78 = CONCAT35(uStack_163,uStack_168);
    local_c68 = CONCAT35(uStack_153,local_158);
    auVar10._8_5_ = uStack_150;
    auVar10._0_8_ = local_c68;
    auVar10._13_3_ = uStack_14b;
    local_c90 = 0xffffffffffffffff;
    uStack_c60 = auVar10._8_8_;
    local_c58 = (undefined1)local_148;
    uStack_c57 = (undefined1)((uint5)local_148 >> 8);
    uStack_c56 = (undefined1)((uint5)local_148 >> 0x10);
    uStack_c55 = (undefined5)(CONCAT35(uStack_143,local_148) >> 0x18);
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar17 = (undefined8 *)FUN_004b25a4(0x90,8);
    if (puVar17 == (undefined8 *)0x0) {
                    /* try { // try from 00791ac0 to 00791acb has its CatchHandler @ 00791ef0 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x90);
    }
  }
  else {
    if (bVar4 != 1) {
                    /* try { // try from 00791d88 to 00791d8f has its CatchHandler @ 00791ec0 */
      auVar24 = <hyper_util::client::legacy::client::[4]::hyper_util::client::legacy::client::ResponseFuture>
                ::error_version(bVar4);
      goto LAB_00791e08;
    }
    if (*(char *)(param_2 + 0x17) != '\a') goto LAB_00791a60;
                    /* try { // try from 00791e58 to 00791e87 has its CatchHandler @ 00791ec0 */
                    /* try { // try from 00791b10 to 00791b7f has its CatchHandler @ 00791ec0 */
    if ((*(ulong *)PTR_MAX_LEVEL_00b00e60 < 4) &&
       ((((byte)PTR___CALLSITE_00b00e98[0x10] - 1 < 2 ||
         (((byte)PTR___CALLSITE_00b00e98[0x10] != 0 &&
          (cVar16 = <tracing_core::callsite::tracing_core::callsite::DefaultCallsite>::register
                              (PTR___CALLSITE_00b00e98), cVar16 != '\0')))) &&
        (uVar18 = tracing::__macro_support::__is_enabled(*(undefined8 *)puVar14), (uVar18 & 1) != 0)
        ))) {
      lVar20 = *(long *)puVar14;
      lStack_c88 = *(long *)(lVar20 + 0x38);
      if (lStack_c88 == 0) {
                    /* WARNING: Subroutine does not return */
        core::option::expect_failed
                  ("FieldSet corrupted (this is a bug)",0x22,
                   &PTR_s__root__cargo_registry_src_index__00adc410);
      }
      uStack_c78 = *(undefined8 *)(lVar20 + 0x48);
      uStack_c80 = *(undefined8 *)(lVar20 + 0x40);
      uStack_c70 = 0;
      puVar17 = (undefined8 *)(lVar20 + 0x30);
      local_c90 = *puVar17;
      uStack_170 = SUB85(puVar17,0);
      uStack_16b = (undefined3)((ulong)puVar17 >> 0x28);
      local_cc0 = "CONNECT is not allowed for HTTP/1.0";
      uStack_cb8 = 0x47;
      local_e0 = &local_c90;
      ppcStack_d8 = &local_cc0;
      local_d0 = &DAT_00adc160;
      local_180 = SUB85(&local_e0,0);
      uStack_17b = (undefined3)((ulong)&local_e0 >> 0x28);
      uStack_178 = 1;
      uStack_173 = 0;
      <tracing_core::event::tracing_core::event::Event>::dispatch(lVar20,&local_180);
    }
    local_c90 = 0xffffffffffffffff;
    lStack_c88 = 0;
    uStack_c60._0_2_ = CONCAT11(2,(undefined1)uStack_c60);
    local_c58 = 3;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar17 = (undefined8 *)FUN_004b25a4(0x90,8);
    if (puVar17 == (undefined8 *)0x0) {
                    /* try { // try from 00791e48 to 00791e53 has its CatchHandler @ 00791ec8 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x90);
    }
  }
  auVar24._8_8_ = &UNK_00adc428;
  auVar24._0_8_ = puVar17;
  puVar17[0xd] = CONCAT53(uStack_c25,uStack_c28);
  puVar17[0xc] = CONCAT53(uStack_c2d,local_c30);
  puVar17[0xf] = CONCAT53(uStack_c15,uStack_c18);
  puVar17[0xe] = CONCAT53(uStack_c1d,uStack_c20);
  puVar17[0x11] = CONCAT53(uStack_c05,uStack_c08);
  puVar17[0x10] = CONCAT53(uStack_c0d,local_c10);
  puVar17[0xb] = CONCAT53(uStack_c35,uStack_c38);
  puVar17[10] = CONCAT53(uStack_c3d,local_c40);
  puVar17[3] = uStack_c78;
  puVar17[2] = uStack_c80;
  puVar17[5] = local_c68;
  puVar17[4] = uStack_c70;
  puVar17[1] = lStack_c88;
  *puVar17 = local_c90;
  puVar17[7] = CONCAT53(uStack_c55,CONCAT12(uStack_c56,CONCAT11(uStack_c57,local_c58)));
  puVar17[6] = uStack_c60;
  puVar17[9] = CONCAT53(uStack_c45,uStack_c48);
  puVar17[8] = CONCAT53(uStack_c4d,uStack_c50);
LAB_00791e08:
  FUN_0078bb38(param_2);
  return auVar24;
}


// ===== 00791f14  FUN_00791f14 =====

void FUN_00791f14(undefined8 *param_1)

{
  undefined *puVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  void *__ptr;
  undefined8 *local_a8;
  undefined **ppuStack_a0;
  undefined *local_98;
  undefined8 local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 ***pppuStack_60;
  undefined8 **local_58;
  undefined *puStack_50;
  undefined8 **local_48;
  undefined8 uStack_40;
  undefined8 *local_38;
  undefined8 *local_18;
  
  puVar1 = PTR___CALLSITE_00b00ea0;
  local_18 = param_1;
                    /* try { // try from 0079203c to 0079206b has its CatchHandler @ 007920a4 */
                    /* try { // try from 00791f60 to 00791fdb has its CatchHandler @ 007920a4 */
  if ((*(ulong *)PTR_MAX_LEVEL_00b00e60 < 2) &&
     ((((byte)PTR___CALLSITE_00b00ea0[0x10] - 1 < 2 ||
       (((byte)PTR___CALLSITE_00b00ea0[0x10] != 0 &&
        (cVar2 = <tracing_core::callsite::tracing_core::callsite::DefaultCallsite>::register
                           (PTR___CALLSITE_00b00ea0), cVar2 != '\0')))) &&
      (uVar3 = tracing::__macro_support::__is_enabled(*(undefined8 *)puVar1), (uVar3 & 1) != 0)))) {
    lVar4 = *(long *)puVar1;
    lStack_88 = *(long *)(lVar4 + 0x38);
    if (lStack_88 == 0) {
                    /* WARNING: Subroutine does not return */
      core::option::expect_failed
                ("FieldSet corrupted (this is a bug)",0x22,
                 &PTR_s__root__cargo_registry_src_index__00adc148);
    }
    local_70 = 0;
    uStack_78 = *(undefined8 *)(lVar4 + 0x48);
    local_80 = *(undefined8 *)(lVar4 + 0x40);
    local_38 = (undefined8 *)(lVar4 + 0x30);
    local_90 = *local_38;
    local_58 = &local_18;
    puStack_50 = PTR_fmt_00b00ea8;
    pppuStack_60 = &local_58;
    local_68 = &DAT_002a9f53;
    local_a8 = &local_90;
    ppuStack_a0 = &local_68;
    local_98 = &DAT_00adc160;
    local_48 = &local_a8;
    uStack_40 = 1;
    <tracing_core::event::tracing_core::event::Event>::dispatch(lVar4,&local_48);
    param_1 = local_18;
  }
  __ptr = (void *)*param_1;
  if (__ptr != (void *)0x0) {
    puVar6 = (undefined8 *)param_1[1];
    pcVar5 = (code *)*puVar6;
    if (pcVar5 != (code *)0x0) {
                    /* try { // try from 00791ffc to 00792003 has its CatchHandler @ 00792070 */
      (*pcVar5)(__ptr);
    }
    if (puVar6[1] != 0) {
      free(__ptr);
    }
  }
  free(param_1);
  return;
}


// ===== 007920c0  FUN_007920c0 =====

void FUN_007920c0(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  char cVar7;
  void *pvVar8;
  char *pcVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long local_280;
  long lStack_278;
  long lStack_270;
  ulong local_268;
  long local_260;
  long lStack_258;
  long lStack_250;
  ulong uStack_248;
  long local_240;
  long lStack_238;
  long local_230;
  long local_220;
  long lStack_218;
  long lStack_210;
  ulong uStack_208;
  long local_200;
  long lStack_1f8;
  long local_1f0;
  undefined8 *local_1e0;
  char **ppcStack_1d8;
  undefined *local_1d0;
  undefined8 local_1c8;
  long lStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  char *pcStack_1a0;
  undefined8 local_198;
  long local_190;
  long lStack_188;
  long lStack_180;
  undefined8 uStack_178;
  long local_170;
  long lStack_168;
  long local_160;
  long lStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  long local_138;
  long lStack_130;
  long lStack_128;
  ulong uStack_120;
  long local_118;
  long lStack_110;
  long lStack_108;
  ulong uStack_100;
  long local_f8;
  long lStack_f0;
  long local_e8;
  long local_e0;
  long lStack_d8;
  long local_d0;
  byte local_c8;
  undefined1 local_c7;
  undefined8 **local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  
  pvVar8 = (void *)*param_3;
  puVar1 = (undefined8 *)param_3[1];
                    /* try { // try from 007920f4 to 007920ff has its CatchHandler @ 00792518 */
  (*(code *)puVar1[10])(&local_190,pvVar8);
  uStack_178._0_2_ = CONCAT11(*(undefined1 *)(param_3 + 2),(undefined1)uStack_178);
  lStack_218 = lStack_188;
  local_220 = local_190;
  uStack_208 = uStack_178;
  lStack_210 = lStack_180;
                    /* try { // try from 0079211c to 00792127 has its CatchHandler @ 007924f8 */
  if (((*(byte *)((long)param_3 + 0x11) & 1) == 0) ||
     ((*(code *)puVar1[0xc])(&local_260,pvVar8), local_260 == -2)) {
    lStack_278 = lStack_218;
    local_280 = local_220;
    local_268 = uStack_208;
    lStack_270 = lStack_210;
  }
  else {
    lStack_188 = lStack_218;
    local_190 = local_220;
    uStack_178 = uStack_208;
    lStack_180 = lStack_210;
                    /* try { // try from 00792148 to 00792157 has its CatchHandler @ 00792518 */
    FUN_007c88e4(&local_280,&local_190,&local_260);
  }
  bVar2 = *(byte *)(param_2 + 0x12);
  if (((local_268 & 1) == 0) && (bVar2 == 0)) {
    lStack_188 = param_2[9];
    local_190 = param_2[8];
    uStack_178 = param_2[0xb];
    lStack_180 = param_2[10];
    lStack_168 = param_2[0xd];
    local_170 = param_2[0xc];
    local_160 = param_2[0xe];
                    /* try { // try from 00792184 to 00792197 has its CatchHandler @ 007924e4 */
    FUN_007ca73c(&local_220,param_2 + 0x11,&local_190,1);
                    /* try { // try from 00792198 to 0079219f has its CatchHandler @ 00792510 */
    FUN_007c9f00(&local_190);
    puVar6 = PTR___CALLSITE_00b00eb0;
    if ((char)local_220 == -1) {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      pcVar9 = (char *)FUN_004b25a4(0x17,1);
      uVar5 = s_ALPN_upgraded_t_002e2af2._0_8_;
      if (pcVar9 == (char *)0x0) {
                    /* try { // try from 00792460 to 0079246b has its CatchHandler @ 00792510 */
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(1,0x17);
      }
      uVar4 = CONCAT71(s_o_HTTP_2_002e2b01._1_7_,s_o_HTTP_2_002e2b01[0]);
      *(ulong *)(pcVar9 + 8) = CONCAT17(s_o_HTTP_2_002e2b01[0],s_ALPN_upgraded_t_002e2af2._8_7_);
      *(undefined8 *)pcVar9 = uVar5;
      *(undefined8 *)(pcVar9 + 0xf) = uVar4;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      puVar10 = (undefined8 *)FUN_004b25a4(0x18,8);
      if (puVar10 != (undefined8 *)0x0) {
        *(undefined1 *)(param_1 + 6) = 0;
        *puVar10 = 0x17;
        puVar10[1] = pcVar9;
        puVar10[2] = 0x17;
        *param_1 = puVar10;
        param_1[1] = &PTR_FUN_00adc1a0;
        *(undefined1 *)((long)param_1 + 0x29) = 2;
        *(undefined1 *)(param_1 + 0xe) = 2;
                    /* try { // try from 00792318 to 00792323 has its CatchHandler @ 00792518 */
        FUN_0078dfc8(&local_280);
        if ((code *)*puVar1 != (code *)0x0) {
                    /* try { // try from 0079232c to 00792333 has its CatchHandler @ 007924b8 */
          (*(code *)*puVar1)(pvVar8);
        }
        if (puVar1[1] != 0) {
          free(pvVar8);
        }
        plVar13 = (long *)param_2[0x11];
        if (plVar13 != (long *)0x0) {
          do {
            lVar12 = *plVar13;
            cVar7 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar3) {
              *plVar13 = lVar12 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar12 + -1 == 0) {
            DataMemoryBarrier(2,1);
                    /* try { // try from 00792368 to 0079236f has its CatchHandler @ 0079248c */
            <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::sync::poison::mutex::Mutex<hyper_util[52a210df7efc1bae]::client::legacy::pool::PoolInner<hyper_util[52a210df7efc1bae]::client::legacy::client::PoolClient<reqwest[6fed810f3e38d558]::async_impl::body::Body>,(http[b87e90c26fe47eb4]::uri::scheme::Scheme,http[b87e90c26fe47eb4]::uri::authority::Authority)>>>>
            ::drop_slow(param_2 + 0x11);
          }
        }
        plVar13 = (long *)param_2[0xf];
        do {
          lVar12 = *plVar13;
          cVar7 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *plVar13 = lVar12 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar12 + -1 != 0) {
          return;
        }
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
        drop_slow(param_2 + 0xf);
        return;
      }
                    /* try { // try from 00792450 to 0079245b has its CatchHandler @ 00792520 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x18);
    }
    lStack_188 = lStack_218;
    local_190 = local_220;
    uStack_178 = uStack_208;
    lStack_180 = lStack_210;
    lStack_168 = lStack_1f8;
    local_170 = local_200;
    local_160 = local_1f0;
                    /* try { // try from 007923b4 to 00792433 has its CatchHandler @ 007924d4 */
    if ((*(long *)PTR_MAX_LEVEL_00b00e60 == 0) &&
       ((((byte)PTR___CALLSITE_00b00eb0[0x10] - 1 < 2 ||
         (((byte)PTR___CALLSITE_00b00eb0[0x10] != 0 &&
          (cVar7 = <tracing_core::callsite::tracing_core::callsite::DefaultCallsite>::register
                             (PTR___CALLSITE_00b00eb0), cVar7 != '\0')))) &&
        (uVar11 = tracing::__macro_support::__is_enabled(*(undefined8 *)puVar6), (uVar11 & 1) != 0))
       )) {
      lVar12 = *(long *)puVar6;
      lStack_1c0 = *(long *)(lVar12 + 0x38);
      if (lStack_1c0 == 0) {
                    /* try { // try from 00792470 to 00792487 has its CatchHandler @ 007924d4 */
                    /* WARNING: Subroutine does not return */
        core::option::expect_failed
                  ("FieldSet corrupted (this is a bug)",0x22,
                   &PTR_s__root__cargo_registry_src_index__00adc1f8);
      }
      uStack_1b0 = *(undefined8 *)(lVar12 + 0x48);
      local_1b8 = *(undefined8 *)(lVar12 + 0x40);
      local_58 = (undefined8 *)(lVar12 + 0x30);
      local_1c8 = *local_58;
      local_1a8 = 0;
      pcStack_1a0 = "ALPN negotiated h2, updating pool";
      ppcStack_1d8 = &pcStack_1a0;
      local_198 = 0x43;
      local_1e0 = &local_1c8;
      local_1d0 = &DAT_00adc160;
      local_68 = &local_1e0;
      uStack_60 = 1;
      <tracing_core::event::tracing_core::event::Event>::dispatch(lVar12,&local_68);
    }
    bVar2 = *(byte *)(param_2 + 0x12);
  }
  else {
    lStack_188 = param_2[9];
    local_190 = param_2[8];
    uStack_178 = param_2[0xb];
    lStack_180 = param_2[10];
    lStack_168 = param_2[0xd];
    local_170 = param_2[0xc];
    local_160 = param_2[0xe];
  }
  local_c8 = (bVar2 | (byte)local_268 ^ 0xff) & 1;
  local_d0 = param_2[0x11];
  lStack_158 = param_2[7];
  uStack_148 = param_3[1];
  local_150 = *param_3;
  local_140 = param_3[2];
  lStack_d8 = param_2[0x10];
  local_e0 = param_2[0xf];
  local_c7 = 0;
  lStack_130 = lStack_278;
  local_138 = local_280;
  uStack_120 = local_268;
  lStack_128 = lStack_270;
  local_260 = local_190;
  lStack_258 = lStack_188;
  lStack_250 = lStack_180;
  uStack_248 = uStack_178;
  local_240 = local_170;
  lStack_238 = lStack_168;
  local_230 = local_160;
  local_118 = local_190;
  local_190 = *param_2;
  lStack_110 = lStack_188;
  lStack_188 = param_2[1];
  lStack_108 = lStack_180;
  lStack_180 = param_2[2];
  uStack_100 = uStack_178;
  uStack_178 = param_2[3];
  local_f8 = local_170;
  local_170 = param_2[4];
  lStack_f0 = lStack_168;
  lStack_168 = param_2[5];
  local_e8 = local_160;
  local_160 = param_2[6];
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  pvVar8 = (void *)FUN_004b25a4(0x128,8);
  if (pvVar8 != (void *)0x0) {
    memcpy(pvVar8,&local_190,0x128);
    *param_1 = pvVar8;
    *(undefined1 *)(param_1 + 0xe) = 0xfe;
    return;
  }
                    /* try { // try from 00792440 to 0079244b has its CatchHandler @ 007925a8 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x128);
}


// ===== 007925c0  FUN_007925c0 =====

void FUN_007925c0(undefined8 *param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined **ppuStack_90;
  undefined *local_88;
  undefined8 local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined *local_58;
  undefined1 **ppuStack_50;
  undefined1 *local_48;
  undefined *puStack_40;
  undefined8 **local_38;
  undefined8 uStack_30;
  undefined8 *local_28;
  
  puVar1 = PTR___CALLSITE_00b00eb8;
  uStack_c8 = param_1[1];
  local_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_a8 = param_1[5];
  local_b0 = param_1[4];
  local_a0 = param_1[6];
                    /* try { // try from 0079262c to 007926df has its CatchHandler @ 007926e4 */
  if ((*(long *)PTR_MAX_LEVEL_00b00e60 == 0) &&
     ((((byte)PTR___CALLSITE_00b00eb8[0x10] - 1 < 2 ||
       (((byte)PTR___CALLSITE_00b00eb8[0x10] != 0 &&
        (cVar2 = <tracing_core::callsite::tracing_core::callsite::DefaultCallsite>::register
                           (PTR___CALLSITE_00b00eb8), cVar2 != '\0')))) &&
      (iVar3 = tracing::__macro_support::__is_enabled(*(undefined8 *)puVar1), iVar3 != 0)))) {
    lVar4 = *(long *)puVar1;
    lStack_78 = *(long *)(lVar4 + 0x38);
    if (lStack_78 == 0) {
                    /* WARNING: Subroutine does not return */
      core::option::expect_failed
                ("FieldSet corrupted (this is a bug)",0x22,
                 &PTR_s__root__cargo_registry_src_index__00adc228);
    }
    local_60 = 0;
    uStack_68 = *(undefined8 *)(lVar4 + 0x48);
    local_70 = *(undefined8 *)(lVar4 + 0x40);
    local_28 = (undefined8 *)(lVar4 + 0x30);
    local_80 = *local_28;
    puStack_40 = PTR_fmt_00b00ec0;
    ppuStack_50 = &local_48;
    local_58 = &DAT_002ae362;
    local_98 = &local_80;
    ppuStack_90 = &local_58;
    local_88 = &DAT_00adc160;
    local_38 = &local_98;
    uStack_30 = 1;
    local_48 = (undefined1 *)&local_d0;
    <tracing_core::event::tracing_core::event::Event>::dispatch(lVar4,&local_38);
  }
  FUN_0078df18(&local_d0);
  return;
}


// ===== 007926fc  FUN_007926fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007926fc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a04e0;
  param_1[1] = _UNK_002a04e8;
  *param_1 = uVar1;
  return;
}


// ===== 00792710  FUN_00792710 =====

void FUN_00792710(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = param_1[3];
  if (uVar4 == 0) {
    lVar5 = 0;
    uVar2 = 0;
    lVar3 = 0;
  }
  else {
    uVar2 = *param_1;
    uVar1 = 0;
    if (uVar2 <= param_1[2]) {
      uVar1 = uVar2;
    }
    lVar3 = param_1[2] - uVar1;
    lVar5 = uVar4 - (uVar2 - lVar3);
    if (uVar4 < uVar2 - lVar3 || lVar5 == 0) {
      lVar5 = 0;
      uVar2 = lVar3 + uVar4;
    }
  }
  uVar4 = param_1[1];
                    /* try { // try from 0079276c to 0079276f has its CatchHandler @ 00792788 */
  FUN_0078e0b0(uVar4 + lVar3 * 8,uVar2 - lVar3);
  FUN_0078e0b0(uVar4,lVar5);
  return;
}


// ===== 007927a4  FUN_007927a4 =====

void FUN_007927a4(ulong *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar13 = param_1[3];
  if (uVar13 != 0) {
    puVar2 = (ulong *)param_1[1];
    uVar3 = param_1[2];
    uVar5 = *param_1;
    uVar1 = 0;
    if (uVar5 <= uVar3) {
      uVar1 = uVar5;
    }
    lVar8 = uVar3 - uVar1;
    uVar14 = uVar5 - lVar8;
    lVar11 = 0;
    if (uVar14 <= uVar13) {
      lVar11 = uVar13 - uVar14;
    }
    if (uVar13 <= uVar14) {
      uVar5 = lVar8 + uVar13;
    }
    lVar8 = uVar5 - lVar8;
    if (lVar8 != 0) {
      lVar4 = uVar3 * 0x50 + uVar1 * -0x50;
      do {
        if (*(ulong *)((long)puVar2 + lVar4) < 3) {
          lVar9 = 8;
          lVar6 = 0x20;
          lVar7 = 0x10;
          lVar10 = 0x18;
LAB_007928a0:
                    /* try { // try from 007928c0 to 007928c7 has its CatchHandler @ 0079291c */
          (**(code **)(*(long *)((long)puVar2 + lVar4 + lVar9) + 0x20))
                    ((long)puVar2 + lVar4 + lVar6,*(undefined8 *)((long)puVar2 + lVar4 + lVar7),
                     *(undefined8 *)((long)puVar2 + lVar4 + lVar10));
        }
        else if (*(ulong *)((long)puVar2 + lVar4) != 3) {
          lVar9 = 0x18;
          lVar6 = 0x30;
          lVar7 = 0x20;
          lVar10 = 0x28;
          goto LAB_007928a0;
        }
        lVar8 = lVar8 + -1;
        lVar4 = lVar4 + 0x50;
      } while (lVar8 != 0);
    }
    if (uVar14 < uVar13) {
      do {
        puVar12 = puVar2 + 10;
        if (*puVar2 < 3) {
          lVar9 = 8;
          lVar8 = 0x20;
          lVar4 = 0x10;
          lVar6 = 0x18;
LAB_00792814:
                    /* try { // try from 00792838 to 0079283b has its CatchHandler @ 007928f8 */
          (**(code **)(*(long *)((long)puVar12 + lVar9 + -0x50) + 0x20))
                    ((long)puVar12 + lVar8 + -0x50,*(undefined8 *)((long)puVar12 + lVar4 + -0x50),
                     *(undefined8 *)((long)puVar12 + lVar6 + -0x50));
        }
        else if (*puVar2 != 3) {
          lVar9 = 0x18;
          lVar8 = 0x30;
          lVar4 = 0x20;
          lVar6 = 0x28;
          goto LAB_00792814;
        }
        lVar11 = lVar11 + -1;
        puVar2 = puVar12;
      } while (lVar11 != 0);
    }
  }
  return;
}


// ===== 0079295c  FUN_0079295c =====

void FUN_0079295c(void)

{
  return;
}


// ===== 00792968  FUN_00792968 =====

void FUN_00792968(void)

{
  return;
}


// ===== 00792974  FUN_00792974 =====

void FUN_00792974(void)

{
  return;
}


// ===== 00792980  FUN_00792980 =====

void FUN_00792980(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = (long *)*param_1;
  if (plVar6 != (long *)0x0) {
    do {
      lVar5 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x7929e8);
      (*pcVar3)();
    }
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar4 = (undefined8 *)FUN_004b25a4(8,8);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = plVar6;
    return;
  }
                    /* try { // try from 007929d8 to 007929e3 has its CatchHandler @ 007929e8 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,8);
}


// ===== 00792a1c  FUN_00792a1c =====

void FUN_00792a1c(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = *param_2;
  *param_2 = -2;
  if (lVar1 != -2) {
    lVar4 = param_2[0xc];
    lVar3 = param_2[0xb];
    lVar6 = param_2[0xe];
    lVar5 = param_2[0xd];
    lVar2 = param_2[0x11];
    *param_1 = lVar1;
    param_1[0xc] = lVar4;
    param_1[0xb] = lVar3;
    lVar3 = param_2[0x10];
    lVar1 = param_2[0xf];
    param_1[0xe] = lVar6;
    param_1[0xd] = lVar5;
    lVar5 = param_2[4];
    lVar4 = param_2[3];
    param_1[0x10] = lVar3;
    param_1[0xf] = lVar1;
    lVar3 = param_2[6];
    lVar1 = param_2[5];
    param_1[4] = lVar5;
    param_1[3] = lVar4;
    lVar5 = param_2[8];
    lVar4 = param_2[7];
    param_1[6] = lVar3;
    param_1[5] = lVar1;
    lVar3 = param_2[10];
    lVar1 = param_2[9];
    param_1[8] = lVar5;
    param_1[7] = lVar4;
    param_1[10] = lVar3;
    param_1[9] = lVar1;
    lVar3 = param_2[2];
    lVar1 = param_2[1];
    param_1[0x11] = lVar2;
    param_1[2] = lVar3;
    param_1[1] = lVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed
            ("Ready polled after completion",0x1d,&PTR_s__root__cargo_registry_src_index__00adc4f8);
}


// ===== 00792aa0  FUN_00792aa0 =====

void FUN_00792aa0(undefined8 *param_1)

{
  <core::time::Duration_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 00792aa8  FUN_00792aa8 =====

void FUN_00792aa8(undefined8 *param_1)

{
  <rustls_pki_types::server_name::DnsNameInner_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 00792ab0  FUN_00792ab0 =====

void FUN_00792ab0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  bool bVar2;
  code *pcVar3;
  char cVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 unaff_x23;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  long *plVar14;
  undefined1 auVar15 [16];
  undefined7 uStack_108;
  undefined1 local_101;
  undefined7 uStack_100;
  undefined1 uStack_f9;
  undefined7 uStack_f8;
  undefined1 local_f1;
  undefined7 uStack_f0;
  undefined1 uStack_e9;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  long *local_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  long *local_98;
  long *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (*(int *)(param_2 + 1) == -2) {
    auVar15 = (**(code **)(param_2[3] + 0x28))(param_2[2]);
    *(undefined1 (*) [16])(param_1 + 2) = auVar15;
    *(undefined4 *)(param_1 + 1) = 0xfffffffe;
    return;
  }
  plVar5 = (long *)param_2[7];
  do {
    lVar7 = *plVar5;
    cVar4 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar7 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar7 < 0) {
LAB_00792c8c:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x792c90);
    (*pcVar3)();
  }
  uVar10 = param_2[9];
  plVar14 = (long *)param_2[8];
  do {
    lVar7 = *plVar14;
    cVar4 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar2) {
      *plVar14 = lVar7 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar7 < 0) goto LAB_00792c8c;
  plVar8 = (long *)param_2[10];
  do {
    lVar7 = *plVar8;
    cVar4 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar2) {
      *plVar8 = lVar7 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar7 < 0) goto LAB_00792c8c;
  plVar9 = (long *)param_2[0xb];
  do {
    lVar7 = *plVar9;
    cVar4 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar2) {
      *plVar9 = lVar7 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar7 < 0) goto LAB_00792c8c;
  plVar6 = (long *)param_2[0xc];
  do {
    lVar7 = *plVar6;
    cVar4 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar7 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  local_b0 = plVar5;
  plStack_a8 = plVar14;
  uStack_a0 = uVar10;
  local_98 = plVar8;
  local_90 = plVar9;
  if (lVar7 < 0) goto LAB_00792c8c;
  iVar1 = *(int *)(param_2 + 1);
  uVar10 = param_2[0xc];
  if (iVar1 == -1) {
    cVar4 = *(char *)(param_2 + 6);
    uVar11 = *(undefined1 *)(param_2 + 0xd);
    uVar12 = *(undefined1 *)((long)param_2 + 0x69);
    uVar13 = *(undefined1 *)((long)param_2 + 0x6a);
    if (cVar4 == '\x02') goto LAB_00792c04;
  }
  else {
    unaff_x23 = *param_2;
    uVar11 = *(undefined1 *)(param_2 + 0xd);
    uVar12 = *(undefined1 *)((long)param_2 + 0x69);
    uVar13 = *(undefined1 *)((long)param_2 + 0x6a);
    if (*(char *)(param_2 + 6) == '\x02') {
      cVar4 = '\x02';
      goto LAB_00792c04;
    }
  }
                    /* try { // try from 00792be0 to 00792bf3 has its CatchHandler @ 00792c90 */
  local_88 = uVar10;
  (**(code **)param_2[2])(&uStack_108,param_2 + 5,param_2[3],param_2[4]);
  uStack_78 = CONCAT17(uStack_f9,uStack_100);
  local_80 = CONCAT17(local_101,uStack_108);
  uStack_68 = CONCAT17(uStack_e9,uStack_f0);
  uStack_70 = CONCAT17(local_f1,uStack_f8);
  cVar4 = *(char *)(param_2 + 6);
LAB_00792c04:
  *param_1 = unaff_x23;
  uStack_f9 = SUB81(plStack_a8,0);
  uStack_f8 = (undefined7)((ulong)plStack_a8 >> 8);
  local_101 = SUB81(local_b0,0);
  uStack_100 = (undefined7)((ulong)local_b0 >> 8);
  uStack_e9 = SUB81(local_98,0);
  local_f1 = (undefined1)uStack_a0;
  uStack_f0 = (undefined7)((ulong)uStack_a0 >> 8);
  *(int *)(param_1 + 1) = iVar1;
  uStack_c8 = (undefined4)uStack_78;
  uStack_c4 = (undefined4)((ulong)uStack_78 >> 0x20);
  local_d0 = (undefined4)local_80;
  uStack_cc = (undefined4)((ulong)local_80 >> 0x20);
  uStack_b8 = (undefined4)uStack_68;
  local_b4 = (undefined4)((ulong)uStack_68 >> 0x20);
  uStack_c0 = (undefined4)uStack_70;
  uStack_bc = (undefined4)((ulong)uStack_70 >> 0x20);
  *(char *)(param_1 + 6) = cVar4;
  *(ulong *)((long)param_1 + 0x14) = CONCAT44(uStack_c8,uStack_cc);
  *(ulong *)((long)param_1 + 0xc) = CONCAT44(local_d0,uStack_d4);
  *(ulong *)((long)param_1 + 0x24) = CONCAT44(uStack_b8,uStack_bc);
  *(ulong *)((long)param_1 + 0x1c) = CONCAT44(uStack_c0,uStack_c4);
  *(ulong *)((long)param_1 + 0x39) = CONCAT17(uStack_f9,uStack_100);
  *(ulong *)((long)param_1 + 0x31) = CONCAT17(local_101,uStack_108);
  *(undefined4 *)((long)param_1 + 0x2c) = local_b4;
  *(ulong *)((long)param_1 + 0x49) = CONCAT17(uStack_e9,uStack_f0);
  *(ulong *)((long)param_1 + 0x41) = CONCAT17(local_f1,uStack_f8);
  param_1[0xb] = local_90;
  param_1[10] = local_98;
  param_1[0xc] = uVar10;
  *(undefined1 *)(param_1 + 0xd) = uVar11;
  *(undefined1 *)((long)param_1 + 0x69) = uVar12;
  *(undefined1 *)((long)param_1 + 0x6a) = uVar13;
  return;
}


// ===== 00792cc8  FUN_00792cc8 =====

void FUN_00792cc8(long *param_1,undefined8 *param_2)

{
  long local_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long local_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long local_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  (**(code **)(param_2[1] + 0x18))(&local_80,*param_2);
  if (local_80 != -3) {
    if (local_80 == -2) {
      *param_1 = -2;
      param_1[2] = lStack_70;
      param_1[1] = lStack_78;
      return;
    }
    if (local_80 != 3) {
      param_1[5] = lStack_58;
      param_1[4] = local_60;
      param_1[7] = lStack_48;
      param_1[6] = lStack_50;
      param_1[9] = lStack_38;
      param_1[8] = local_40;
      param_1[0xb] = lStack_28;
      param_1[10] = lStack_30;
      param_1[1] = lStack_78;
      *param_1 = local_80;
      param_1[3] = lStack_68;
      param_1[2] = lStack_70;
      return;
    }
  }
  *param_1 = local_80;
  return;
}


// ===== 00792d60  FUN_00792d60 =====

void FUN_00792d60(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00792d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x20))(*param_1);
  return;
}


// ===== 00792d6c  FUN_00792d6c =====

void FUN_00792d6c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00792d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x28))(*param_1);
  return;
}


// ===== 00792d78  FUN_00792d78 =====

void FUN_00792d78(long *param_1)

{
  long *plVar1;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long local_80;
  long local_78;
  long local_70;
  long lStack_68;
  long local_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long local_30;
  long lStack_28;
  
  <reqwest::async_impl::decoder::Decoder_as_http_body::Body>::poll_frame(&local_80);
  if (local_80 == 3) {
    *param_1 = 3;
    return;
  }
  if (local_80 == -2) {
    local_80 = local_78;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    plVar1 = (long *)FUN_004b25a4(8,8);
    if (plVar1 == (long *)0x0) {
                    /* try { // try from 00792e80 to 00792e8b has its CatchHandler @ 00792e90 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,8);
    }
    *plVar1 = local_78;
    *param_1 = -2;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)&PTR_FUN_00adea90;
    return;
  }
  if (local_80 != -3) {
    if (local_80 != -1) {
      lStack_88 = lStack_28;
      local_90 = local_30;
      lStack_a8 = lStack_48;
      local_b0 = local_50;
      lStack_98 = lStack_38;
      lStack_a0 = lStack_40;
      lStack_b8 = lStack_58;
    }
    *param_1 = local_80;
    param_1[1] = local_78;
    param_1[0xb] = lStack_88;
    param_1[10] = local_90;
    param_1[7] = lStack_a8;
    param_1[6] = local_b0;
    param_1[9] = lStack_98;
    param_1[8] = lStack_a0;
    param_1[3] = lStack_68;
    param_1[2] = local_70;
    param_1[5] = lStack_b8;
    param_1[4] = local_60;
    return;
  }
  *param_1 = -3;
  return;
}


// ===== 00792ea8  FUN_00792ea8 =====

undefined8 FUN_00792ea8(void)

{
  return 0;
}


// ===== 00792eb0  FUN_00792eb0 =====

void FUN_00792eb0(long *param_1)

{
  long *plVar1;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  long local_48;
  long lStack_40;
  long local_38;
  long lStack_30;
  long local_28;
  
  FUN_0077a4ec(&local_88);
  if (local_88 != -3) {
    if (local_88 == -2) {
      local_28 = lStack_80;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      plVar1 = (long *)FUN_004b25a4(8,8);
      if (plVar1 != (long *)0x0) {
        *plVar1 = lStack_80;
        *param_1 = -2;
        param_1[1] = (long)plVar1;
        param_1[2] = (long)&PTR_FUN_00adea90;
        return;
      }
                    /* try { // try from 00792f74 to 00792f7f has its CatchHandler @ 00792f84 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,8);
    }
    if (local_88 != 3) {
      param_1[5] = lStack_60;
      param_1[4] = local_68;
      param_1[7] = lStack_50;
      param_1[6] = local_58;
      param_1[9] = lStack_40;
      param_1[8] = local_48;
      param_1[0xb] = lStack_30;
      param_1[10] = local_38;
      param_1[1] = lStack_80;
      *param_1 = local_88;
      param_1[3] = lStack_70;
      param_1[2] = local_78;
      return;
    }
  }
  *param_1 = local_88;
  return;
}


// ===== 00792f9c  FUN_00792f9c =====

void FUN_00792f9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00792fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x90) + 0x20))(*(undefined8 *)(param_1 + 0x88));
  return;
}


// ===== 00792fa8  FUN_00792fa8 =====

void FUN_00792fa8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00792fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x90) + 0x28))(*(undefined8 *)(param_1 + 0x88));
  return;
}


// ===== 00792fb4  FUN_00792fb4 =====

void FUN_00792fb4(long *param_1)

{
  long *plVar1;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  long local_48;
  long lStack_40;
  long local_38;
  long lStack_30;
  long local_28;
  
  FUN_0077a128(&local_88);
  if (local_88 != -3) {
    if (local_88 == -2) {
      local_28 = lStack_80;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      plVar1 = (long *)FUN_004b25a4(8,8);
      if (plVar1 != (long *)0x0) {
        *plVar1 = lStack_80;
        *param_1 = -2;
        param_1[1] = (long)plVar1;
        param_1[2] = (long)&PTR_FUN_00adea90;
        return;
      }
                    /* try { // try from 00793078 to 00793083 has its CatchHandler @ 00793088 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,8);
    }
    if (local_88 != 3) {
      param_1[5] = lStack_60;
      param_1[4] = local_68;
      param_1[7] = lStack_50;
      param_1[6] = local_58;
      param_1[9] = lStack_40;
      param_1[8] = local_48;
      param_1[0xb] = lStack_30;
      param_1[10] = local_38;
      param_1[1] = lStack_80;
      *param_1 = local_88;
      param_1[3] = lStack_70;
      param_1[2] = local_78;
      return;
    }
  }
  *param_1 = local_88;
  return;
}


// ===== 007930a0  FUN_007930a0 =====

void FUN_007930a0(long *param_1)

{
  long *plVar1;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  long local_48;
  long lStack_40;
  long local_38;
  long lStack_30;
  long local_28;
  
  FUN_0077a308(&local_88);
  if (local_88 != -3) {
    if (local_88 == -2) {
      local_28 = lStack_80;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      plVar1 = (long *)FUN_004b25a4(8,8);
      if (plVar1 != (long *)0x0) {
        *plVar1 = lStack_80;
        *param_1 = -2;
        param_1[1] = (long)plVar1;
        param_1[2] = (long)&PTR_FUN_00adea90;
        return;
      }
                    /* try { // try from 00793164 to 0079316f has its CatchHandler @ 00793174 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,8);
    }
    if (local_88 != 3) {
      param_1[5] = lStack_60;
      param_1[4] = local_68;
      param_1[7] = lStack_50;
      param_1[6] = local_58;
      param_1[9] = lStack_40;
      param_1[8] = local_48;
      param_1[0xb] = lStack_30;
      param_1[10] = local_38;
      param_1[1] = lStack_80;
      *param_1 = local_88;
      param_1[3] = lStack_70;
      param_1[2] = local_78;
      return;
    }
  }
  *param_1 = local_88;
  return;
}


// ===== 0079318c  FUN_0079318c =====

void FUN_0079318c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00793194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x20))(*param_1);
  return;
}


// ===== 00793198  FUN_00793198 =====

void FUN_00793198(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007931a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x28))(*param_1);
  return;
}


// ===== 007931a4  FUN_007931a4 =====

void FUN_007931a4(long *param_1)

{
  long *plVar1;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  long local_48;
  long lStack_40;
  long local_38;
  long lStack_30;
  long local_28;
  
  <hyper::body::incoming::Incoming_as_http_body::Body>::poll_frame(&local_88);
  if (local_88 != -3) {
    if (local_88 == -2) {
      local_28 = lStack_80;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      plVar1 = (long *)FUN_004b25a4(8,8);
      if (plVar1 != (long *)0x0) {
        *plVar1 = lStack_80;
        *param_1 = -2;
        param_1[1] = (long)plVar1;
        param_1[2] = (long)&PTR_FUN_00adece8;
        return;
      }
                    /* try { // try from 00793268 to 00793273 has its CatchHandler @ 00793278 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,8);
    }
    if (local_88 != 3) {
      param_1[5] = lStack_60;
      param_1[4] = local_68;
      param_1[7] = lStack_50;
      param_1[6] = local_58;
      param_1[9] = lStack_40;
      param_1[8] = local_48;
      param_1[0xb] = lStack_30;
      param_1[10] = local_38;
      param_1[1] = lStack_80;
      *param_1 = local_88;
      param_1[3] = lStack_70;
      param_1[2] = local_78;
      return;
    }
  }
  *param_1 = local_88;
  return;
}


// ===== 00793290  FUN_00793290 =====

bool FUN_00793290(long *param_1)

{
  return *param_1 == 0 || param_1[2] == 0;
}


// ===== 007932a8  FUN_007932a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007932a8(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (*param_2 == 0) {
    param_1[2] = 0;
    uVar1 = _DAT_002a02b0;
    param_1[1] = _UNK_002a02b8;
    *param_1 = uVar1;
    return;
  }
  uVar2 = param_2[2];
  if (0xfffffffffffffffd < uVar2) {
    param_1[2] = 0;
    *param_1 = 0;
    return;
  }
  param_1[1] = uVar2;
  param_1[2] = uVar2;
  *param_1 = 1;
  return;
}


// ===== 007932ec  FUN_007932ec =====

void FUN_007932ec(ulong *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  ulong local_f8;
  ulong uStack_f0;
  undefined1 local_e8;
  char cStack_e7;
  undefined4 uStack_e6;
  undefined2 uStack_e2;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulong local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  iVar1 = *(int *)(param_2 + 8);
  iVar2 = iVar1;
  if (iVar1 < 1000000000) {
    iVar2 = 999999999;
  }
  if (iVar2 == 999999999) {
    if (iVar1 == -2) {
      (**(code **)(*(long *)(param_2 + 0x18) + 0x18))(&local_a0,*(undefined8 *)(param_2 + 0x10));
      if ((local_a0 & 1) != 0) {
        local_90._1_1_ = -1;
        goto LAB_0079349c;
      }
      if (uStack_98 != 0) {
        *param_1 = uStack_98;
        param_1[1] = local_90;
        local_90._1_1_ = '\x02';
        goto LAB_0079349c;
      }
    }
    cVar3 = *(char *)(param_2 + 0x70);
    *(undefined1 *)(param_2 + 0x70) = 0xff;
    if (cVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      core::option::expect_failed
                ("already called",0xe,&PTR_s__root__cargo_registry_src_index__00adc510);
    }
    uVar6 = *(undefined8 *)(param_2 + 0xb1);
    local_f8 = CONCAT71(local_f8._1_7_,cVar3);
    uVar4 = *(undefined8 *)(param_2 + 0xc0);
    puVar5 = (undefined8 *)((ulong)&local_f8 | 1);
    uVar9 = *(undefined8 *)(param_2 + 0x99);
    uVar8 = *(undefined8 *)(param_2 + 0x91);
    puVar5[9] = *(undefined8 *)(param_2 + 0xb9);
    puVar5[8] = uVar6;
    uVar7 = *(undefined8 *)(param_2 + 0xa9);
    uVar6 = *(undefined8 *)(param_2 + 0xa1);
    *(undefined8 *)((long)puVar5 + 0x4f) = uVar4;
    iVar2 = *(int *)(param_2 + 8);
    uVar11 = *(undefined8 *)(param_2 + 0x79);
    uVar10 = *(undefined8 *)(param_2 + 0x71);
    puVar5[5] = uVar9;
    puVar5[4] = uVar8;
    puVar5[7] = uVar7;
    puVar5[6] = uVar6;
    uVar6 = *(undefined8 *)(param_2 + 0x89);
    uVar4 = *(undefined8 *)(param_2 + 0x81);
    puVar5[1] = uVar11;
    *puVar5 = uVar10;
    puVar5[3] = uVar6;
    puVar5[2] = uVar4;
    if (iVar2 == -2) {
      uStack_68 = uStack_c0;
      local_70 = local_c8;
      uStack_58 = uStack_b0;
      uStack_60 = local_b8;
      local_90 = CONCAT26(uStack_e2,CONCAT42(uStack_e6,CONCAT11(cStack_e7,local_e8)));
      local_50 = local_a8;
      uStack_98 = uStack_f0;
      local_a0 = local_f8;
      uStack_88 = uStack_e0;
      uStack_78 = uStack_d0;
      uStack_80 = local_d8;
      auVar12 = (**(code **)(*(long *)(param_2 + 0x18) + 0x20))
                          (*(undefined8 *)(param_2 + 0x10),&local_a0);
    }
    else {
      auVar12 = <reqwest::connect::ConnectorService_as_tower_service::Service<http::uri::Uri>>::call
                          (param_2,&local_f8);
    }
                    /* try { // try from 0079345c to 00793463 has its CatchHandler @ 00793548 */
    FUN_0078c0a8(param_2);
    *(undefined4 *)(param_2 + 8) = 1000000000;
    *(undefined1 (*) [16])(param_2 + 0x10) = auVar12;
    (**(code **)(auVar12._8_8_ + 0x18))(&local_a0,auVar12._0_8_,param_3);
    cStack_e7 = local_90._1_1_;
    if (local_90._1_1_ == -1) goto LAB_0079349c;
  }
  else {
    if (iVar2 != 1000000000) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                ("polled after completePoolDisabledCheckoutNoLongerWantedCheckedOutClosedValue",0x2b
                 ,&PTR_s__root__cargo_registry_src_index__00adc528);
    }
    (**(code **)(*(long *)(param_2 + 0x18) + 0x18))(&local_a0,*(undefined8 *)(param_2 + 0x10));
    cStack_e7 = local_90._1_1_;
    if (local_90._1_1_ == -1) {
      local_90._1_1_ = -1;
      goto LAB_0079349c;
    }
  }
  if (cStack_e7 != '\x02') {
    local_f8 = local_a0;
    uStack_f0 = uStack_98;
    uStack_e6 = local_90._2_4_;
    uStack_e2 = local_90._6_2_;
    local_e8 = (undefined1)local_90;
                    /* try { // try from 007934d8 to 007934df has its CatchHandler @ 00793554 */
    FUN_0078c0a8(param_2);
    param_1[1] = uStack_f0;
    *param_1 = local_f8;
    *(undefined4 *)(param_2 + 8) = 0x3b9aca01;
    param_1[2] = CONCAT26(uStack_e2,CONCAT42(uStack_e6,CONCAT11(cStack_e7,local_e8)));
    return;
  }
  *param_1 = local_a0;
  param_1[1] = uStack_98;
  local_90._1_1_ = '\x02';
LAB_0079349c:
  *(char *)((long)param_1 + 0x11) = local_90._1_1_;
  return;
}


// ===== 0079357c  thunk_FUN_007bedd0 =====

bool thunk_FUN_007bedd0(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_b0 [112];
  uint uStack_40;
  
  if (*param_1 == -3) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("Map must not be polled after it returned `Poll::Ready`",0x36,
               &PTR_s__root__cargo_registry_src_index__00ade300);
  }
  FUN_007bf420(auStack_b0);
  if ((char)uStack_40 != -1) {
    lVar1 = *param_1;
    if (lVar1 != -2) {
      if (lVar1 == -3) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("internal error: entered unreachable code",0x28,
                   &PTR_s__root__cargo_registry_src_index__00ade2e8);
      }
      lVar2 = lVar1 + -5;
      if (lVar1 < 5) {
        lVar2 = 1;
      }
      if (lVar2 == 1) {
        if (lVar1 == -1) {
          if ((char)param_1[0xf] == '\x02') {
            FUN_007d2768(param_1 + 1);
          }
          else if ((char)param_1[0xf] != -1) {
            FUN_007d0e54(param_1 + 1);
          }
        }
        else {
          FUN_007d11a4(param_1);
        }
      }
      else if (lVar2 == 0) {
        FUN_007d19e8(param_1 + 1);
      }
    }
    *param_1 = -3;
    if ((uStack_40 & 0xff) != 2) {
      FUN_0078c534(auStack_b0);
    }
  }
  return (char)uStack_40 == -1;
}


// ===== 00793580  FUN_00793580 =====

bool FUN_00793580(long *param_1)

{
  char cVar1;
  
  if (*param_1 == -2) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("Map must not be polled after it returned `Poll::Ready`",0x36,
               &PTR_s__root__cargo_registry_src_index__00ade300);
  }
  cVar1 = FUN_007bf914();
  if (cVar1 != '\x02') {
    if (*param_1 != -1) {
      if (*param_1 == -2) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("internal error: entered unreachable code",0x28,
                   &PTR_s__root__cargo_registry_src_index__00ade2e8);
      }
                    /* try { // try from 007935c0 to 007935c7 has its CatchHandler @ 00793614 */
      FUN_007d10e0(param_1);
    }
    *param_1 = -2;
  }
  return cVar1 == '\x02';
}


// ===== 00793620  thunk_FUN_007bef80 =====

undefined8 thunk_FUN_007bef80(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 auStack_60 [41];
  char cStack_37;
  undefined6 uStack_36;
  
  if (*(char *)(param_1 + 0x70) == '\x02') {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("Map must not be polled after it returned `Poll::Ready`",0x36,
               &PTR_s__root__cargo_registry_src_index__00ade300);
  }
  if (*(char *)(param_1 + 0x61) == '\x02') {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed("not dropped",0xb,&PTR_s__root__cargo_registry_src_index__00ade0e8);
  }
  cVar2 = <want::[0]::want::Giver>::poll_want(param_1 + 0x30);
  if (cVar2 == '\x02') {
    return 1;
  }
  if (cVar2 == '\0') {
    stack0xffffffffffffffc8 = CONCAT11(0xff,auStack_60[0x28]);
  }
  else {
    <hyper::error::hyper::error::Error>::new_closed();
    <hyper_util::client::legacy::client::[f]::hyper_util::client::legacy::client::Error>::closed
              (auStack_60);
    if (cStack_37 == -2) {
      return 1;
    }
  }
  uVar1 = stack0xffffffffffffffc8;
  if (*(char *)(param_1 + 0x70) == '\x02') {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("internal error: entered unreachable code",0x28,
               &PTR_s__root__cargo_registry_src_index__00ade2e8);
  }
  FUN_007d0e54(param_1);
  *(undefined1 *)(param_1 + 0x70) = 2;
  cStack_37 = SUB81(uVar1,1);
  if (cStack_37 != -1) {
    unique0x1000011e = uVar1;
    FUN_0078df18(auStack_60);
  }
  return 0;
}


// ===== 00793624  thunk_FUN_007bef80 =====

undefined8 thunk_FUN_007bef80(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 auStack_60 [41];
  char cStack_37;
  undefined6 uStack_36;
  
  if (*(char *)(param_1 + 0x70) == '\x02') {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("Map must not be polled after it returned `Poll::Ready`",0x36,
               &PTR_s__root__cargo_registry_src_index__00ade300);
  }
  if (*(char *)(param_1 + 0x61) == '\x02') {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed("not dropped",0xb,&PTR_s__root__cargo_registry_src_index__00ade0e8);
  }
  cVar2 = <want::[0]::want::Giver>::poll_want(param_1 + 0x30);
  if (cVar2 == '\x02') {
    return 1;
  }
  if (cVar2 == '\0') {
    stack0xffffffffffffffc8 = CONCAT11(0xff,auStack_60[0x28]);
  }
  else {
    <hyper::error::hyper::error::Error>::new_closed();
    <hyper_util::client::legacy::client::[f]::hyper_util::client::legacy::client::Error>::closed
              (auStack_60);
    if (cStack_37 == -2) {
      return 1;
    }
  }
  uVar1 = stack0xffffffffffffffc8;
  if (*(char *)(param_1 + 0x70) == '\x02') {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("internal error: entered unreachable code",0x28,
               &PTR_s__root__cargo_registry_src_index__00ade2e8);
  }
  FUN_007d0e54(param_1);
  *(undefined1 *)(param_1 + 0x70) = 2;
  cStack_37 = SUB81(uVar1,1);
  if (cStack_37 != -1) {
    unique0x1000011e = uVar1;
    FUN_0078df18(auStack_60);
  }
  return 0;
}


// ===== 00793628  thunk_FUN_007bfbb8 =====

void thunk_FUN_007bfbb8(undefined8 *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("Map must not be polled after it returned `Poll::Ready`",0x36,
               &PTR_s__root__cargo_registry_src_index__00ade300);
  }
  <hyper_util::client::legacy::connect::dns::GaiFuture_as_core::future::future::Future>::poll
            (&lStack_58);
  if (lStack_58 == 1) {
    *param_1 = 2;
    return;
  }
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  if (*param_2 != 0) {
    <hyper_util::client::legacy::connect::dns::GaiFuture_as_core::ops::drop::Drop>::drop(param_2);
    lVar2 = *param_2;
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::drop_join_handle_fast
                      (lVar2);
    if (iVar1 != 0) {
      <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::drop_join_handle_slow(lVar2);
    }
    *param_2 = 0;
    FUN_007deae0(param_1,&uStack_80);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic
            ("internal error: entered unreachable code",0x28,
             &PTR_s__root__cargo_registry_src_index__00ade2e8);
}


// ===== 0079362c  FUN_0079362c =====

void FUN_0079362c(char *param_1,char *param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  undefined8 *unaff_x23;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  cVar1 = *param_2;
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      unaff_x23 = (undefined8 *)(ulong)(byte)param_2[1];
    }
    else {
      unaff_x23 = *(undefined8 **)(param_2 + 8);
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      unaff_x20 = (undefined8 *)FUN_004b25a4(0x20,8);
      if (unaff_x20 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(8,0x20);
      }
                    /* try { // try from 00793690 to 0079369b has its CatchHandler @ 00793724 */
      (**(code **)*unaff_x23)(&local_60,unaff_x23 + 3,unaff_x23[1],unaff_x23[2]);
      unaff_x20[1] = uStack_58;
      *unaff_x20 = local_60;
      unaff_x20[3] = uStack_48;
      unaff_x20[2] = uStack_50;
    }
  }
                    /* try { // try from 007936b0 to 007936bb has its CatchHandler @ 00793760 */
  (*(code *)**(undefined8 **)(param_2 + 0x10))
            (&local_60,param_2 + 0x28,*(undefined8 *)(param_2 + 0x18),
             *(undefined8 *)(param_2 + 0x20));
  uVar6 = uStack_48;
  uVar5 = uStack_50;
  uVar4 = uStack_58;
  uVar3 = local_60;
                    /* try { // try from 007936d0 to 007936db has its CatchHandler @ 00793740 */
  (*(code *)**(undefined8 **)(param_2 + 0x30))
            (&local_60,param_2 + 0x48,*(undefined8 *)(param_2 + 0x38),
             *(undefined8 *)(param_2 + 0x40));
  uVar2 = *(undefined2 *)(param_2 + 0x50);
  *param_1 = cVar1;
  param_1[1] = (char)unaff_x23;
  *(undefined8 *)(param_1 + 0x38) = uStack_58;
  *(undefined8 *)(param_1 + 0x30) = local_60;
  *(undefined8 *)(param_1 + 0x48) = uStack_48;
  *(undefined8 *)(param_1 + 0x40) = uStack_50;
  *(undefined8 **)(param_1 + 8) = unaff_x20;
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(undefined8 *)(param_1 + 0x28) = uVar6;
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  *(undefined2 *)(param_1 + 0x50) = uVar2;
  return;
}


// ===== 0079377c  FUN_0079377c =====

/* WARNING: Removing unreachable block (ram,0x00793acc) */

void FUN_0079377c(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  byte bVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *local_c8;
  long *local_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  long *local_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long *local_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long *local_58;
  
  lVar10 = *param_1;
  if (lVar10 != 0) {
    puVar1 = (ulong *)(lVar10 + 0x38);
    if ((long)*puVar1 < 0) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 & 0x7fffffffffffffff;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar6 = (long *)FUN_007914e4(lVar10 + 0x20);
    puVar4 = PTR_GLOBAL_PANIC_COUNT_00b00bf0;
    while (plVar6 != (long *)0x0) {
      plVar9 = plVar6 + 2;
      do {
        local_80 = plVar6;
        if ((int)*plVar9 != 0) {
          ClearExclusiveLocal();
          <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                    (plVar6 + 2);
          break;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *(int *)plVar9 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((*(ulong *)puVar4 & 0x7fffffffffffffff) == 0) {
        bVar5 = 0;
        cVar2 = *(char *)((long)plVar6 + 0x14);
      }
      else {
                    /* try { // try from 00793874 to 007938af has its CatchHandler @ 00793b98 */
        bVar5 = std::panicking::panic_count::is_zero_slow_path();
        bVar5 = bVar5 ^ 1;
        cVar2 = *(char *)((long)plVar6 + 0x14);
      }
      if (cVar2 != '\0') {
        uVar7 = (ulong)local_c0 >> 8;
        local_c0 = (long *)CONCAT71((int7)uVar7,bVar5);
                    /* try { // try from 00793af8 to 00793b1b has its CatchHandler @ 00793c68 */
        local_c8 = plVar9;
                    /* WARNING: Subroutine does not return */
        core::result::unwrap_failed
                  ("called `Result::unwrap()` on an `Err` value",0x2b,&local_c8,&PTR_FUN_00adc390,
                   &PTR_s__root__cargo_registry_src_index__00adc480);
      }
                    /* try { // try from 00793820 to 00793827 has its CatchHandler @ 00793bec */
      <futures_channel::mpsc::[c]::futures_channel::mpsc::SenderTask>::notify(plVar6 + 3);
      if ((((bVar5 & 1) == 0) && ((*(ulong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
         (uVar7 = std::panicking::panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
        *(undefined1 *)((long)plVar6 + 0x14) = 1;
      }
      do {
        lVar8 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *(int *)plVar9 = 0;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar8 == 2) {
        <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(plVar9);
      }
      do {
        lVar8 = *local_80;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(local_80,0x10);
        if (bVar3) {
          *local_80 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<futures_channel::mpsc::SenderTask>>>
        ::drop_slow(&local_80);
      }
      plVar6 = (long *)FUN_007914e4(lVar10 + 0x20);
    }
    lVar10 = *param_1;
    while (lVar10 != 0) {
      while( true ) {
        plVar9 = *(long **)(lVar10 + 0x18);
        plVar6 = (long *)plVar9[5];
        if (plVar6 != (long *)0x0) break;
        if (*(long **)(lVar10 + 0x10) == plVar9) {
          if (*(long *)(*param_1 + 0x38) == 0) {
            plVar6 = (long *)*param_1;
            if (plVar6 != (long *)0x0) {
              do {
                lVar10 = *plVar6;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar3) {
                  *plVar6 = lVar10 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar10 + -1 == 0) {
                DataMemoryBarrier(2,1);
                    /* try { // try from 00793ab0 to 00793ab7 has its CatchHandler @ 00793ba0 */
                <alloc::sync::[n]::alloc::sync::Arc<futures_channel::mpsc::BoundedInner<core::result::Result<bytes::bytes::Bytes,hyper::error::Error>>>>
                ::drop_slow(param_1);
              }
            }
            *param_1 = 0;
            return;
          }
          local_c8 = (long *)0x2;
          if (*param_1 == 0) {
                    /* try { // try from 00793b80 to 00793b8b has its CatchHandler @ 00793c00 */
                    /* WARNING: Subroutine does not return */
            core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00adc540);
          }
          if (*(long *)(*param_1 + 0x38) == 0) {
            return;
          }
                    /* try { // try from 00793a3c to 00793a3f has its CatchHandler @ 00793ba8 */
          std::thread::functions::yield_now();
          if (local_c8 == (long *)0x1) goto LAB_00793a00;
          goto LAB_00793a08;
        }
        std::thread::functions::yield_now();
      }
      *(long **)(lVar10 + 0x18) = plVar6;
      if (*plVar9 != 0) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: (*tail).value.is_none()",0x29,
                   &PTR_s__root__cargo_registry_src_index__00adc3b0);
      }
      if (*plVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: (*next).value.is_some()",0x29,
                   &PTR_s__root__cargo_registry_src_index__00adc3c8);
      }
      lStack_68 = plVar6[4];
      lStack_70 = plVar6[3];
      lStack_78 = plVar6[2];
      local_80 = (long *)plVar6[1];
      *plVar6 = 0;
      if (*plVar9 != 0) {
                    /* try { // try from 0079391c to 00793923 has its CatchHandler @ 00793bc0 */
        FUN_0078b724(plVar9 + 1);
      }
      free(plVar9);
      lVar10 = *param_1;
      lStack_98 = lStack_78;
      local_a0 = local_80;
      lStack_88 = lStack_68;
      lStack_90 = lStack_70;
      if (lVar10 != 0) {
                    /* try { // try from 00793944 to 0079394b has its CatchHandler @ 00793be4 */
        plVar6 = (long *)FUN_007914e4(lVar10 + 0x20);
        if (plVar6 != (long *)0x0) {
          plVar9 = plVar6 + 2;
          do {
            local_58 = plVar6;
            if ((int)*plVar9 != 0) {
              ClearExclusiveLocal();
              <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                        (plVar6 + 2);
              break;
            }
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *(int *)plVar9 = 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((*(ulong *)puVar4 & 0x7fffffffffffffff) == 0) {
            bVar5 = 0;
            cVar2 = *(char *)((long)plVar6 + 0x14);
          }
          else {
                    /* try { // try from 00793a50 to 00793a8b has its CatchHandler @ 00793b90 */
            bVar5 = std::panicking::panic_count::is_zero_slow_path();
            bVar5 = bVar5 ^ 1;
            cVar2 = *(char *)((long)plVar6 + 0x14);
          }
          if (cVar2 != '\0') {
            uVar7 = (ulong)lStack_78 >> 8;
            lStack_78 = CONCAT71((int7)uVar7,bVar5);
                    /* try { // try from 00793b58 to 00793b7b has its CatchHandler @ 00793c20 */
            local_80 = plVar9;
                    /* WARNING: Subroutine does not return */
            core::result::unwrap_failed
                      ("called `Result::unwrap()` on an `Err` value",0x2b,&local_80,
                       &PTR_FUN_00adc390,&PTR_s__root__cargo_registry_src_index__00adc468);
          }
                    /* try { // try from 00793984 to 0079398b has its CatchHandler @ 00793bac */
          <futures_channel::mpsc::[c]::futures_channel::mpsc::SenderTask>::notify(plVar6 + 3);
          if ((((bVar5 & 1) == 0) && ((*(ulong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
             (uVar7 = std::panicking::panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
            *(undefined1 *)((long)plVar6 + 0x14) = 1;
          }
          do {
            lVar10 = *plVar9;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *(int *)plVar9 = 0;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((int)lVar10 == 2) {
            <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(plVar9);
          }
          do {
            lVar10 = *local_58;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(local_58,0x10);
            if (bVar3) {
              *local_58 = lVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar10 + -1 == 0) {
            DataMemoryBarrier(2,1);
                    /* try { // try from 007939cc to 007939d3 has its CatchHandler @ 00793be4 */
            <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<futures_channel::mpsc::SenderTask>>>
            ::drop_slow(&local_58);
          }
          lVar10 = *param_1;
          if (lVar10 == 0) goto LAB_007939f0;
        }
        plVar6 = (long *)(lVar10 + 0x38);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
LAB_007939f0:
      local_c8 = (long *)0x1;
      lStack_b8 = lStack_98;
      local_c0 = local_a0;
      lStack_a8 = lStack_88;
      local_b0 = lStack_90;
LAB_00793a00:
      FUN_0078b724(&local_c0);
LAB_00793a08:
      lVar10 = *param_1;
    }
  }
  return;
}


// ===== 00793ca8  FUN_00793ca8 =====

void FUN_00793ca8(byte *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,&DAT_002e2d00 + *(int *)(&DAT_002e2d00 + (ulong)*param_1 * 4),
             *(undefined8 *)(&DAT_002e2ce8 + (ulong)*param_1 * 8));
  return;
}


// ===== 00793cd0  FUN_00793cd0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00793cd0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a06e0;
  param_1[1] = _UNK_002a06e8;
  *param_1 = uVar1;
  return;
}


// ===== 00793ce4  FUN_00793ce4 =====

undefined1  [16] FUN_00793ce4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = "description() is deprecated; use Display";
  return auVar1;
}


// ===== 00793cf4  FUN_00793cf4 =====

undefined8 FUN_00793cf4(void)

{
  return 0;
}


// ===== 00793cfc  FUN_00793cfc =====

void FUN_00793cfc(void)

{
  return;
}


// ===== 00793d00  FUN_00793d00 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00793d00(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0e70;
  param_1[1] = _UNK_002a0e78;
  *param_1 = uVar1;
  return;
}


// ===== 00793d14  FUN_00793d14 =====

undefined1  [16] FUN_00793d14(undefined1 (*param_1) [16])

{
  return *param_1;
}


// ===== 00793d20  FUN_00793d20 =====

undefined1  [16] FUN_00793d20(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = "description() is deprecated; use Display";
  return auVar1;
}


// ===== 00793d30  FUN_00793d30 =====

undefined8 FUN_00793d30(void)

{
  return 0;
}


// ===== 00793d38  FUN_00793d38 =====

void FUN_00793d38(void)

{
  return;
}


// ===== 00793d3c  FUN_00793d3c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00793d3c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0db0;
  param_1[1] = _UNK_002a0db8;
  *param_1 = uVar1;
  return;
}


// ===== 00793d50  FUN_00793d50 =====

undefined1  [16] FUN_00793d50(byte *param_1,long param_2)

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
        if (uVar10 < 0x85) goto joined_r0x00793e88;
        uVar4 = uVar10 >> 8;
        if (uVar4 < 0x20) {
          if (uVar4 == 0) {
            bVar1 = PTR_WHITESPACE_MAP_00b00d70[uVar11 & 0xff];
joined_r0x00793e60:
            if ((bVar1 & 1) == 0) goto joined_r0x00793e88;
          }
          else if ((uVar4 != 0x16) || (uVar10 != 0x1680)) goto joined_r0x00793e88;
        }
        else {
          if (uVar4 == 0x20) {
            bVar1 = (byte)PTR_WHITESPACE_MAP_00b00d70[uVar11 & 0xff] >> 1;
            goto joined_r0x00793e60;
          }
          if ((uVar4 != 0x30) || (uVar10 != 0x3000)) goto joined_r0x00793e88;
        }
      }
      pbVar6 = pbVar7;
      pbVar8 = pbVar9;
    } while (pbVar7 != pbVar5);
    pbVar8 = (byte *)0x0;
    pbVar9 = (byte *)0x0;
LAB_00793e70:
    auVar12._8_8_ = (long)pbVar9 - (long)pbVar8;
    auVar12._0_8_ = param_1 + (long)pbVar8;
    return auVar12;
  }
  pbVar9 = pbVar8;
  pbVar7 = param_1;
  pbVar8 = (byte *)0x0;
joined_r0x00793e88:
  do {
    do {
      pbVar6 = pbVar5;
      if (pbVar7 == pbVar6) goto LAB_00793e70;
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
    if (uVar10 < 0x85) goto LAB_00793f80;
    uVar4 = uVar10 >> 8;
    if (uVar4 < 0x20) {
      if (uVar4 == 0) {
        bVar1 = PTR_WHITESPACE_MAP_00b00d70[uVar11 & 0xff];
joined_r0x00793f7c:
        if ((bVar1 & 1) == 0) {
LAB_00793f80:
          auVar13._8_8_ = pbVar6 + (long)(pbVar9 + (-(long)pbVar8 - (long)pbVar7));
          auVar13._0_8_ = param_1 + (long)pbVar8;
          return auVar13;
        }
      }
      else if ((uVar4 != 0x16) || (uVar10 != 0x1680)) goto LAB_00793f80;
      goto joined_r0x00793e88;
    }
    if (uVar4 == 0x20) {
      bVar1 = (byte)PTR_WHITESPACE_MAP_00b00d70[uVar11 & 0xff] >> 1;
      goto joined_r0x00793f7c;
    }
    if ((uVar4 != 0x30) || (uVar10 != 0x3000)) goto LAB_00793f80;
  } while( true );
}


// ===== 00793f94  FUN_00793f94 =====

byte FUN_00793f94(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  ulong uVar2;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  undefined8 uStack_98;
  undefined *puStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_40;
  
  uVar2 = param_2[2];
  if (*param_1 == -2) {
    local_a0 = param_1[1];
    cVar1 = local_a0 < uVar2;
    if (uVar2 < local_a0) {
      cVar1 = -1;
    }
    if (cVar1 == '\0') {
      uStack_b8 = param_2[1];
      local_c0 = *param_2;
      uStack_a8 = param_2[3];
      local_b0 = param_2[2];
      FUN_007cee54(param_3,&local_c0);
    }
    else {
      if (cVar1 != '\x01') {
        uStack_b8 = param_2[1];
        local_c0 = *param_2;
        uStack_a8 = param_2[3];
        local_b0 = param_2[2];
        FUN_007cee54(param_3,&local_c0);
        return 0;
      }
      uStack_b8 = param_2[1];
      local_c0 = *param_2;
      uStack_a8 = param_2[3];
      local_b0 = param_2[2];
      FUN_007cf35c(param_3,&local_c0);
    }
  }
  else {
                    /* try { // try from 00794000 to 0079400b has its CatchHandler @ 007940b0 */
    <hyper::proto::h1::encode::[0]::hyper::proto::h1::encode::ChunkSize>::new(&local_c0,uVar2);
    uStack_68 = param_2[1];
    local_70 = *param_2;
    uStack_a8 = param_2[3];
    local_40 = (undefined4)local_b0;
    uStack_98 = uStack_b8;
    local_a0 = local_c0;
    puStack_88 = &DAT_002e2d0c;
    local_80 = 7;
    local_c0 = local_70;
    uStack_b8 = uStack_68;
    local_b0 = param_2[2];
    FUN_007cf588(param_3,&local_c0);
  }
  return (*(byte *)(param_1 + 3) ^ 1) & 1;
}


// ===== 007940d4  FUN_007940d4 =====

void FUN_007940d4(undefined8 *param_1,ulong *param_2,long param_3,uint param_4)

{
  ushort *puVar1;
  undefined2 *puVar2;
  char cVar3;
  ushort uVar4;
  void *__s2;
  undefined8 *puVar5;
  ushort uVar6;
  size_t sVar7;
  undefined *__s1;
  long lVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong *puVar16;
  undefined *puVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  uint *puVar21;
  ulong uVar22;
  byte bVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 *local_300;
  ulong local_2f8;
  long local_2e8;
  undefined1 auStack_2e0 [16];
  ulong local_2d0;
  ulong local_2c8;
  byte bStack_2c0;
  undefined7 uStack_2bf;
  size_t local_2b8;
  ulong uStack_2b0;
  long local_2a8 [4];
  long local_288;
  ulong local_280;
  long local_260;
  ulong local_258;
  ushort local_250;
  ulong uStack_248;
  undefined8 local_240;
  long lStack_238;
  ulong local_230;
  ulong local_228;
  ulong uStack_220;
  undefined8 uStack_218;
  long local_210;
  ulong uStack_208;
  ulong *local_200;
  ulong *local_1f8;
  undefined8 local_1f0;
  ulong *local_1e8;
  ulong local_1e0;
  undefined1 *puStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong local_1c0;
  ulong local_1b0;
  ulong uStack_1a8;
  size_t sStack_1a0;
  ulong uStack_198;
  ulong local_190;
  undefined1 *puStack_188;
  ulong local_180;
  ulong uStack_178;
  ulong local_170;
  long local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  char local_140;
  undefined4 local_13f;
  undefined3 uStack_13b;
  ulong local_130;
  undefined1 *puStack_128;
  ulong local_120;
  ulong uStack_118;
  ulong local_110;
  undefined4 local_108;
  undefined3 uStack_104;
  long local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong *local_d8;
  undefined1 auStack_d0 [32];
  ulong local_b0;
  undefined1 *puStack_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  undefined1 auStack_81 [17];
  
  if (0xfffffffffffffffd < *param_2) {
    *param_1 = 0xffffffffffffffff;
    FUN_00796498(param_3);
    return;
  }
                    /* try { // try from 00794140 to 00794147 has its CatchHandler @ 00794ac0 */
  hyper::proto::h1::encode::allowed_trailer_field_map(&local_300);
  local_2d0 = 0;
                    /* try { // try from 00794150 to 00794157 has its CatchHandler @ 00794ad0 */
  <http::header::map::http::header::map::HeaderMap>::new(local_2a8);
  local_200 = *(ulong **)(param_3 + 0x20);
  lStack_238 = *(long *)(param_3 + 0x38);
  local_240 = *(undefined8 *)(param_3 + 0x30);
  local_1f0 = *(undefined8 *)(param_3 + 0x18);
  local_1e8 = local_200 + *(long *)(param_3 + 0x28) * 0xd;
  local_230 = *(ulong *)(param_3 + 0x40);
  if (*(long *)(param_3 + 0x50) != 0) {
    free(*(void **)(param_3 + 0x48));
  }
  local_228 = 0;
  uStack_218 = local_240;
  uStack_220 = uStack_248;
  uStack_208 = local_230;
  local_210 = lStack_238;
  local_1f8 = local_200;
LAB_007941c4:
  do {
    if (local_228 != 1) {
      puVar16 = local_1f8;
      if (local_1f8 != local_1e8) {
        puVar16 = local_1f8 + 0xd;
        if (*local_1f8 != 2) {
          uStack_1a8 = local_1f8[9];
          local_1b0 = local_1f8[8];
          uStack_198 = local_1f8[0xb];
          sStack_1a0 = local_1f8[10];
          local_228 = *local_1f8 & 1;
          puStack_1d8 = (undefined1 *)local_1f8[4];
          local_1e0 = local_1f8[3];
          local_1c0 = local_1f8[7];
          uStack_1c8 = local_1f8[6];
          uStack_1d0 = local_1f8[5];
          uStack_220 = local_1f8[1];
          local_1f8 = puVar16;
          local_190 = local_1e0;
          puStack_188 = puStack_1d8;
          local_180 = uStack_1d0;
          uStack_178 = uStack_1c8;
          local_170 = local_1c0;
          if ((local_2d0 != 0) && (local_2c8 != 0)) {
                    /* try { // try from 00794268 to 00794273 has its CatchHandler @ 00794ad8 */
            (**(code **)(local_2c8 + 0x20))(&uStack_2b0,CONCAT71(uStack_2bf,bStack_2c0),local_2b8);
          }
          local_2d0 = 1;
          uStack_2bf = (undefined7)(uStack_1a8 >> 8);
          bStack_2c0 = (byte)uStack_1a8;
          local_2c8 = local_1b0;
          uStack_2b0 = uStack_198;
          local_2b8 = sStack_1a0;
          goto LAB_007942b4;
        }
      }
                    /* try { // try from 00794744 to 0079474b has its CatchHandler @ 00794ab8 */
      local_1f8 = puVar16;
      FUN_00795e58(&local_228);
      local_120 = 0;
      local_130 = 0;
      puStack_128 = &DAT_00000001;
      if ((param_4 & 1) == 0) {
        hyper::proto::h1::role::write_headers(local_2a8,&local_130);
      }
      else {
                    /* try { // try from 00794760 to 0079477b has its CatchHandler @ 00794a90 */
        hyper::proto::h1::role::write_headers_title_case(local_2a8,&local_130);
      }
      if (local_120 != 0) {
        puStack_a8 = puStack_128;
        local_b0 = local_130;
        local_a0 = local_120;
                    /* try { // try from 00794794 to 0079479f has its CatchHandler @ 00794a8c */
        <bytes::bytes::Bytes_as_core::convert::From<alloc::vec::Vec<u8>>>::from
                  (&local_228,&local_b0);
        *param_1 = 4;
        param_1[1] = &DAT_002e2d13;
        param_1[2] = 3;
        param_1[4] = uStack_220;
        param_1[3] = local_228;
        param_1[6] = local_210;
        param_1[5] = uStack_218;
        param_1[7] = &DAT_002e2d16;
        param_1[8] = 2;
                    /* try { // try from 007947d8 to 007947e3 has its CatchHandler @ 00794ad0 */
        FUN_00796498(local_2a8);
        if ((local_2d0 != 0) && (local_2c8 != 0)) {
                    /* try { // try from 007947fc to 00794807 has its CatchHandler @ 00794a58 */
          (**(code **)(local_2c8 + 0x20))(&uStack_2b0,CONCAT71(uStack_2bf,bStack_2c0),local_2b8);
        }
        if (local_2f8 == 0) {
          return;
        }
        if (local_2e8 != 0) {
          puVar20 = local_300 + 1;
          uVar19 = NEON_cmge(*local_300,0,1);
          uVar19 = uVar19 & 0x8080808080808080;
          puVar5 = local_300;
          lVar14 = local_2e8;
          do {
            for (; uVar19 == 0; uVar19 = uVar19 & 0x8080808080808080) {
              uVar19 = NEON_cmge(*puVar20,0,1);
              puVar5 = puVar5 + -0x18;
              puVar20 = puVar20 + 1;
            }
            uVar24 = (uVar19 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar19 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
            iVar10 = (int)((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3);
            if (puVar5[(long)-iVar10 * 3 + -3] != 0) {
              free((void *)puVar5[(long)-iVar10 * 3 + -2]);
            }
            lVar14 = lVar14 + -1;
            uVar19 = uVar19 - 1 & uVar19;
          } while (lVar14 != 0);
        }
        goto LAB_0079495c;
      }
      *param_1 = 0xffffffffffffffff;
      if (local_130 != 0) {
        free(puStack_128);
      }
                    /* try { // try from 007948a8 to 007948b3 has its CatchHandler @ 00794ad0 */
      FUN_00796498(local_2a8);
      if ((local_2d0 != 0) && (local_2c8 != 0)) {
                    /* try { // try from 007948cc to 007948d7 has its CatchHandler @ 00794a58 */
        (**(code **)(local_2c8 + 0x20))(&uStack_2b0,CONCAT71(uStack_2bf,bStack_2c0),local_2b8);
      }
      if (local_2f8 != 0) {
        if (local_2e8 != 0) {
          puVar20 = local_300 + 1;
          uVar19 = NEON_cmge(*local_300,0,1);
          uVar19 = uVar19 & 0x8080808080808080;
          puVar5 = local_300;
          lVar14 = local_2e8;
          do {
            for (; uVar19 == 0; uVar19 = uVar19 & 0x8080808080808080) {
              uVar19 = NEON_cmge(*puVar20,0,1);
              puVar5 = puVar5 + -0x18;
              puVar20 = puVar20 + 1;
            }
            uVar24 = (uVar19 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar19 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
            iVar10 = (int)((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3);
            if (puVar5[(long)-iVar10 * 3 + -3] != 0) {
              free((void *)puVar5[(long)-iVar10 * 3 + -2]);
            }
            lVar14 = lVar14 + -1;
            uVar19 = uVar19 - 1 & uVar19;
          } while (lVar14 != 0);
        }
LAB_0079495c:
        if (local_2f8 * 0x19 != -0x21) {
          free(local_300 + local_2f8 * -3 + -3);
        }
      }
      return;
    }
    if (uStack_208 <= uStack_220) {
                    /* try { // try from 007949dc to 007949e7 has its CatchHandler @ 00794afc */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uStack_220,uStack_208,&PTR_s__root__cargo_registry_src_index__00ade808);
    }
    lVar14 = local_210 + uStack_220 * 0x48;
    uStack_220 = (ulong)*(uint *)(lVar14 + 0x10);
    bVar9 = (*(uint *)(lVar14 + 0x10) & 1) != 0;
    if (bVar9) {
      uStack_220 = *(ulong *)(lVar14 + 0x18);
    }
    local_228 = (ulong)bVar9;
    puStack_1d8 = *(undefined1 **)(lVar14 + 0x28);
    local_1e0 = *(ulong *)(lVar14 + 0x20);
    uStack_1c8 = *(ulong *)(lVar14 + 0x38);
    uStack_1d0 = *(ulong *)(lVar14 + 0x30);
    local_1c0 = *(ulong *)(lVar14 + 0x40);
    local_190 = local_1e0;
    puStack_188 = puStack_1d8;
    local_180 = uStack_1d0;
    uStack_178 = uStack_1c8;
    local_170 = local_1c0;
    if ((local_2d0 & 1) == 0) {
                    /* try { // try from 007949a8 to 007949bf has its CatchHandler @ 00794b3c */
                    /* WARNING: Subroutine does not return */
      core::option::expect_failed
                (&DAT_002e2d18,0x13,&PTR_s__root__cargo_registry_src_index__00adc558);
    }
LAB_007942b4:
    uVar19 = local_2c8;
    if (local_2c8 == 0) {
      puVar17 = (undefined *)(ulong)bStack_2c0;
      sVar7 = *(size_t *)(&DAT_002e3408 + (long)puVar17 * 8);
      __s1 = &DAT_002e3690 + *(int *)(&DAT_002e3690 + (long)puVar17 * 4);
    }
    else {
      puVar17 = (undefined *)CONCAT71(uStack_2bf,bStack_2c0);
      sVar7 = local_2b8;
      __s1 = puVar17;
    }
    if (local_2e8 != 0) {
      uVar12 = FUN_007c50d0(auStack_2e0,__s1,sVar7);
      uVar13 = local_2f8;
      puVar5 = local_300;
      lVar14 = 0;
      bVar23 = (byte)(uVar12 >> 0x39);
      uVar25 = CONCAT17(bVar23,CONCAT16(bVar23,CONCAT15(bVar23,CONCAT14(bVar23,CONCAT13(bVar23,
                                                  CONCAT12(bVar23,CONCAT11(bVar23,bVar23)))))));
      uVar12 = uVar12 & local_2f8;
      uVar26 = *(undefined8 *)((long)local_300 + uVar12);
      uVar24 = NEON_cmeq(uVar26,uVar25,1);
      uVar24 = uVar24 & 0x8080808080808080;
      while( true ) {
        for (; uVar24 == 0; uVar24 = uVar24 & 0x8080808080808080) {
          uVar26 = NEON_cmeq(uVar26,0xffffffffffffffff,1);
          bVar23 = NEON_umaxv(uVar26,1);
          if ((bVar23 & 1) != 0) goto LAB_007945d8;
          lVar14 = lVar14 + 8;
          uVar12 = uVar12 + lVar14 & uVar13;
          uVar26 = *(undefined8 *)((long)puVar5 + uVar12);
          uVar24 = NEON_cmeq(uVar26,uVar25,1);
        }
        uVar15 = (uVar24 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar24 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
        uVar15 = uVar12 + ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3) & uVar13;
        if ((sVar7 == puVar5[uVar15 * -3 + -1]) &&
           (iVar10 = memcmp(__s1,(void *)puVar5[uVar15 * -3 + -2],sVar7), iVar10 == 0)) break;
        uVar24 = uVar24 - 1 & uVar24;
      }
      if ((uVar19 != 0) ||
         ((uVar11 = ((uint)puVar17 & 0xff) - 0x10, 0x35 < uVar11 ||
          ((1L << ((ulong)uVar11 & 0x3f) & 0x3a000080402543U) == 0)))) {
        local_110 = local_170;
        puStack_128 = puStack_188;
        local_130 = local_190;
        uStack_118 = uStack_178;
        local_120 = local_180;
                    /* try { // try from 007943d8 to 007943ef has its CatchHandler @ 00794b08 */
        local_d8 = &local_2c8;
        iVar10 = FUN_007c545c(local_2a8);
        if (iVar10 != 0) {
                    /* try { // try from 007949fc to 00794a3b has its CatchHandler @ 00794af4 */
          (**(code **)(local_130 + 0x20))(&uStack_118,puStack_128,local_120);
          goto LAB_00794a04;
        }
        uVar11 = FUN_007c4ba0(local_2a8,&local_d8);
        uVar6 = local_250;
        uVar15 = local_258;
        lVar8 = local_260;
        uVar13 = local_280;
        lVar14 = local_288;
        sVar7 = local_2b8;
        bVar23 = bStack_2c0;
        uVar12 = local_2c8;
        uVar18 = (ulong)local_250;
        __s2 = (void *)CONCAT71(uStack_2bf,bStack_2c0);
        uVar19 = 0;
        uVar24 = (ulong)(local_250 & uVar11);
        break;
      }
    }
LAB_007945d8:
                    /* try { // try from 007945e4 to 007945ef has its CatchHandler @ 00794b0c */
    (**(code **)(local_190 + 0x20))(&uStack_178,puStack_188,local_180);
  } while( true );
LAB_00794430:
  if ((uVar15 <= uVar24) && (uVar24 = 0, uVar15 == 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  puVar1 = (ushort *)(lVar8 + uVar24 * 4);
  uVar22 = (ulong)*puVar1;
  if (uVar22 == 0xffff) {
                    /* try { // try from 007945f8 to 0079460b has its CatchHandler @ 00794b08 */
    <http[b87e90c26fe47eb4]::header::name::HeaderName_as_core[bcece726f298455b]::convert::From<&http[b87e90c26fe47eb4]::header::name::HeaderName>>
    ::from(auStack_d0,&local_2c8);
    local_90 = local_110;
    puStack_a8 = puStack_128;
    local_b0 = local_130;
    uStack_98 = uStack_118;
    local_a0 = local_120;
                    /* try { // try from 00794620 to 00794633 has its CatchHandler @ 00794ac8 */
    uVar19 = FUN_00798b48(local_2a8,uVar11,auStack_d0,&local_b0);
    if ((uVar19 & 1) != 0) goto LAB_00794a04;
    if (local_258 <= uVar24) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar24,local_258,&PTR_s__root__cargo_registry_src_index__00adc600);
    }
    puVar2 = (undefined2 *)(local_260 + uVar24 * 4);
    *puVar2 = (short)uVar13;
    puVar2[1] = (ushort)uVar11;
    goto LAB_007941c4;
  }
  uVar4 = puVar1[1];
  if (uVar19 <= ((int)uVar24 - (uint)(uVar4 & uVar6) & uVar18)) {
    if (uVar4 == (ushort)uVar11) {
      if (uVar13 <= uVar22) {
                    /* try { // try from 007949c4 to 007949d7 has its CatchHandler @ 00794b14 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (uVar22,uVar13,&PTR_s__root__cargo_registry_src_index__00adc5e8);
      }
      puVar21 = (uint *)(lVar14 + uVar22 * 0x68);
      if ((uVar12 == 0) != (*(long *)(puVar21 + 0x10) != 0)) {
        if (*(long *)(puVar21 + 0x10) == 0) {
          if ((byte)puVar21[0x12] == bVar23) goto LAB_007944e0;
        }
        else if ((*(size_t *)(puVar21 + 0x14) == sVar7) &&
                (iVar10 = memcmp(*(void **)(puVar21 + 0x12),__s2,sVar7), iVar10 == 0))
        goto LAB_007944e0;
      }
    }
    uVar19 = uVar19 + 1;
    uVar24 = uVar24 + 1;
    goto LAB_00794430;
  }
  bVar9 = local_2a8[0] != 2;
                    /* try { // try from 00794670 to 00794683 has its CatchHandler @ 00794b08 */
  <http[b87e90c26fe47eb4]::header::name::HeaderName_as_core[bcece726f298455b]::convert::From<&http[b87e90c26fe47eb4]::header::name::HeaderName>>
  ::from(auStack_d0,&local_2c8);
  uVar12 = local_280;
  local_90 = local_110;
  puStack_a8 = puStack_128;
  local_b0 = local_130;
  uStack_98 = uStack_118;
  local_a0 = local_120;
                    /* try { // try from 0079469c to 007946af has its CatchHandler @ 00794ac8 */
  uVar13 = FUN_00798b48(local_2a8,uVar11,auStack_d0,&local_b0);
  if ((uVar13 & 1) != 0) goto LAB_00794a04;
  uVar13 = 0;
  while( true ) {
    uVar6 = (ushort)uVar11;
    if ((local_258 <= uVar24) && (uVar24 = 0, local_258 == 0)) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    puVar1 = (ushort *)(local_260 + uVar24 * 4);
    uVar4 = *puVar1;
    if (uVar4 == 0xffff) break;
    uVar11 = (uint)puVar1[1];
    *puVar1 = (ushort)uVar12;
    uVar13 = uVar13 + 1;
    puVar1[1] = uVar6;
    uVar24 = uVar24 + 1;
    uVar12 = (ulong)(uint)uVar4;
  }
  *puVar1 = (ushort)uVar12;
  puVar1[1] = uVar6;
  if ((0x7f < uVar13 || 0x1ff < uVar19 && bVar9) && (local_2a8[0] == 0)) {
    local_2a8[0] = 1;
  }
  goto LAB_007941c4;
LAB_007944e0:
  local_90 = local_110;
  puStack_a8 = puStack_128;
  local_b0 = local_130;
  uStack_98 = uStack_118;
  local_a0 = local_120;
  if ((*puVar21 & 1) != 0) {
                    /* try { // try from 00794504 to 0079450b has its CatchHandler @ 00794a54 */
    FUN_007c5b7c(local_2a8,*(undefined8 *)(puVar21 + 2));
    uVar13 = local_280;
  }
  if (uVar13 <= uVar22) {
                    /* try { // try from 00794a40 to 00794a4f has its CatchHandler @ 00794a64 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check
              (uVar22,uVar13,&PTR_s__root__cargo_registry_src_index__00adc6f0);
  }
  lVar14 = local_288 + uVar22 * 0x68;
  uStack_f8 = *(undefined8 *)(lVar14 + 0x20);
  local_100 = *(long *)(lVar14 + 0x18);
  uStack_e8 = *(undefined8 *)(lVar14 + 0x30);
  uStack_f0 = *(undefined8 *)(lVar14 + 0x28);
  local_108._0_3_ = (undefined3)*(undefined4 *)(lVar14 + 0x39);
  local_108._3_1_ = (undefined1)*(undefined4 *)(lVar14 + 0x3c);
  uStack_104 = (undefined3)((uint)*(undefined4 *)(lVar14 + 0x3c) >> 8);
  cVar3 = *(char *)(lVar14 + 0x38);
  *(ulong *)(lVar14 + 0x38) = local_90;
  *(undefined1 **)(lVar14 + 0x20) = puStack_a8;
  *(ulong *)(lVar14 + 0x18) = local_b0;
  *(ulong *)(lVar14 + 0x30) = uStack_98;
  *(ulong *)(lVar14 + 0x28) = local_a0;
  if (cVar3 == -1) {
LAB_00794a04:
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              (&DAT_002e2d2b,0x17,auStack_81,&DAT_00adc630,
               &PTR_s__root__cargo_registry_src_index__00adc570);
  }
  local_13f = CONCAT13(local_108._3_1_,(undefined3)local_108);
  uStack_13b = uStack_104;
  local_160 = local_100;
  uStack_158 = uStack_f8;
  local_150 = uStack_f0;
  uStack_148 = uStack_e8;
  local_140 = cVar3;
  if (cVar3 != '\x02') {
                    /* try { // try from 007945a0 to 007945a7 has its CatchHandler @ 00794ac8 */
    (**(code **)(local_100 + 0x20))(&uStack_148,uStack_f8,uStack_f0);
  }
  goto LAB_007941c4;
}


// ===== 00794bb0  FUN_00794bb0 =====

void FUN_00794bb0(undefined8 *param_1,ulong *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  char cVar4;
  ulong uVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  byte bVar11;
  undefined8 uVar12;
  ulong local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar9 = *param_2;
  if ((long)uVar9 < 3) {
    if (1 < uVar9) {
LAB_00794ce8:
      *(undefined1 *)(param_1 + 4) = 2;
      return;
    }
    local_e0 = (ulong)(byte)param_2[10];
    if ((byte)param_2[10] != 2) {
      (**(code **)param_2[6])(param_1,param_2 + 9,param_2[7],param_2[8]);
      *(char *)(param_1 + 4) = (char)param_2[10];
      return;
    }
  }
  else {
    if (uVar9 == 3) {
      uVar9 = param_2[1];
      if (*(long *)(uVar9 + 0x28) != 0) {
        uVar7 = FUN_007c50d0(uVar9 + 0x30,&DAT_002bd0ac,4);
        lVar8 = 0;
        bVar11 = (byte)(uVar7 >> 0x39);
        uVar10 = CONCAT17(bVar11,CONCAT16(bVar11,CONCAT15(bVar11,CONCAT14(bVar11,CONCAT13(bVar11,
                                                  CONCAT12(bVar11,CONCAT11(bVar11,bVar11)))))));
        lVar2 = *(long *)(uVar9 + 0x10);
        uVar3 = *(ulong *)(uVar9 + 0x18);
        uVar7 = uVar7 & uVar3;
        uVar12 = *(undefined8 *)(lVar2 + uVar7);
        uVar9 = NEON_cmeq(uVar12,uVar10,1);
        uVar9 = uVar9 & 0x8080808080808080;
        while( true ) {
          for (; uVar9 != 0; uVar9 = uVar9 - 1 & uVar9) {
            uVar5 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
            lVar1 = lVar2 + (uVar7 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) & uVar3) *
                            -0x68;
            if ((*(long *)(lVar1 + -0x58) == 4) && (**(int **)(lVar1 + -0x60) == 0x70747468)) {
              local_e0 = (ulong)*(byte *)(lVar1 + -8);
              if (*(byte *)(lVar1 + -8) != 2) {
                (*(code *)**(undefined8 **)(lVar1 + -0x28))
                          (param_1,lVar1 + -0x10,*(undefined8 *)(lVar1 + -0x20),
                           *(undefined8 *)(lVar1 + -0x18));
                local_e0 = (ulong)*(byte *)(lVar1 + -8);
              }
              goto LAB_00794db0;
            }
          }
          uVar12 = NEON_cmeq(uVar12,0xffffffffffffffff,1);
          bVar11 = NEON_umaxv(uVar12,1);
          if ((bVar11 & 1) != 0) break;
          lVar8 = lVar8 + 8;
          uVar7 = uVar7 + lVar8 & uVar3;
          uVar12 = *(undefined8 *)(lVar2 + uVar7);
          uVar9 = NEON_cmeq(uVar12,uVar10,1);
          uVar9 = uVar9 & 0x8080808080808080;
        }
      }
      goto LAB_00794ce8;
    }
    FUN_007956b4(&local_e0,param_2 + 1,param_3);
    if (local_e0 != 2) {
      uStack_58 = uStack_a8;
      local_60 = local_b0;
      local_48 = uStack_98;
      uVar12 = local_48;
      uStack_50 = uStack_a0;
      local_48._0_1_ = (char)uStack_98;
      bVar6 = (char)local_48 != '\x02';
      uStack_78 = uStack_c8;
      local_80 = local_d0;
      local_68 = puStack_b8;
      uStack_70 = uStack_c0;
      uStack_88 = uStack_d8;
      local_90 = local_e0;
      cVar4 = (char)local_48;
      local_48 = uVar12;
      if (bVar6) {
                    /* try { // try from 00794d54 to 00794d5f has its CatchHandler @ 00794dc4 */
        (*(code *)*puStack_b8)(&local_40,&uStack_50,local_b0,uStack_a8);
        param_1[1] = uStack_38;
        *param_1 = local_40;
        param_1[3] = uStack_28;
        param_1[2] = uStack_30;
        cVar4 = (char)local_48;
      }
      *(char *)(param_1 + 4) = cVar4;
      FUN_00796068(&local_90);
      return;
    }
  }
LAB_00794db0:
  *(char *)(param_1 + 4) = (char)local_e0;
  return;
}


// ===== 00794ddc  FUN_00794ddc =====

bool FUN_00794ddc(long *param_1,char *param_2)

{
  long lVar1;
  size_t __n;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  int *piVar10;
  byte bVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long local_b0 [10];
  
  lVar7 = *param_1;
  if (lVar7 < 2) {
    if (lVar7 == 0) {
      return true;
    }
    if (*param_2 == '\x01') {
      if ((param_2[1] & 1U) == 0) {
        piVar10 = &DAT_002bd0ac;
LAB_00795010:
        return *piVar10 == 0x70747468;
      }
    }
    else {
      if (*param_2 != '\x02') goto LAB_00795044;
      if (*(long *)(*(long *)(param_2 + 8) + 0x10) == 4) {
        piVar10 = *(int **)(*(long *)(param_2 + 8) + 8);
        goto LAB_00795010;
      }
    }
  }
  else if (lVar7 == 2) {
    if (*param_2 == '\x01') {
      if ((param_2[1] & 1U) != 0) {
        pcVar9 = "http";
LAB_00794ef0:
        return *(int *)pcVar9 == 0x70747468 && (char)*(int *)((long)pcVar9 + 4) == 's';
      }
    }
    else {
      if (*param_2 != '\x02') goto LAB_00795044;
      if (*(long *)(*(long *)(param_2 + 8) + 0x10) == 5) {
        pcVar9 = *(char **)(*(long *)(param_2 + 8) + 8);
        goto LAB_00794ef0;
      }
    }
  }
  else {
    if (lVar7 != 3) {
      FUN_007956b4(local_b0,param_1 + 1);
      bVar4 = local_b0[0] != 2;
      if (bVar4) {
        FUN_00796068(local_b0);
        return bVar4;
      }
      return bVar4;
    }
    lVar7 = param_1[1];
    if (*param_2 == '\x01') {
      __n = 4;
      if (param_2[1] != '\0') {
        __n = 5;
      }
      pcVar9 = "http";
      if (param_2[1] == '\0') {
        pcVar9 = "http\x03";
      }
      lVar8 = *(long *)(lVar7 + 0x28);
    }
    else {
      if (*param_2 != '\x02') {
LAB_00795044:
                    /* WARNING: Subroutine does not return */
        core::option::expect_failed
                  ("Uri should have a schemeInvalidUriCharInvalidSchemeInvalidAuthorityInvalidPortInvalidFormatSchemeMissingAuthorityMissingPathAndQueryMissingTooLongEmptySchemeTooLong"
                   ,0x18,&PTR_s__root__cargo_registry_src_index__00adcd90);
      }
      pcVar9 = *(char **)(*(long *)(param_2 + 8) + 8);
      __n = *(size_t *)(*(long *)(param_2 + 8) + 0x10);
      lVar8 = *(long *)(lVar7 + 0x28);
    }
    if (lVar8 != 0) {
      uVar6 = FUN_007c50d0(lVar7 + 0x30,pcVar9,__n);
      lVar8 = 0;
      lVar1 = *(long *)(lVar7 + 0x10);
      uVar2 = *(ulong *)(lVar7 + 0x18);
      bVar11 = (byte)(uVar6 >> 0x39);
      uVar13 = CONCAT17(bVar11,CONCAT16(bVar11,CONCAT15(bVar11,CONCAT14(bVar11,CONCAT13(bVar11,
                                                  CONCAT12(bVar11,CONCAT11(bVar11,bVar11)))))));
      uVar6 = uVar6 & uVar2;
      uVar14 = *(undefined8 *)(lVar1 + uVar6);
      uVar12 = NEON_cmeq(uVar14,uVar13,1);
      uVar12 = uVar12 & 0x8080808080808080;
      while( true ) {
        for (; uVar12 == 0; uVar12 = uVar12 & 0x8080808080808080) {
          uVar14 = NEON_cmeq(uVar14,0xffffffffffffffff,1);
          bVar11 = NEON_umaxv(uVar14,1);
          if ((bVar11 & 1) != 0) {
            return false;
          }
          lVar8 = lVar8 + 8;
          uVar6 = uVar6 + lVar8 & uVar2;
          uVar14 = *(undefined8 *)(lVar1 + uVar6);
          uVar12 = NEON_cmeq(uVar14,uVar13,1);
        }
        uVar3 = (uVar12 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar12 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
        lVar7 = lVar1 + (uVar6 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) & uVar2) *
                        -0x68;
        if ((__n == *(size_t *)(lVar7 + -0x58)) &&
           (iVar5 = memcmp(pcVar9,*(void **)(lVar7 + -0x60),__n), iVar5 == 0)) break;
        uVar12 = uVar12 - 1 & uVar12;
      }
      return true;
    }
  }
  return false;
}


// ===== 0079505c  FUN_0079505c =====

/* WARNING: Removing unreachable block (ram,0x007950d4) */
/* WARNING: Type propagation algorithm not settling */

void FUN_0079505c(undefined8 *param_1,long *param_2,char *param_3)

{
  long lVar1;
  size_t __n;
  byte bVar2;
  ulong uVar3;
  byte *pbVar4;
  int iVar5;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  long lVar11;
  char *pcVar12;
  int *piVar13;
  long lVar14;
  byte *pbVar15;
  uint uVar16;
  byte *pbVar17;
  uint uVar18;
  void *__s2;
  ulong *puVar19;
  byte bVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  byte local_a4 [16];
  undefined1 local_94;
  undefined1 local_90;
  int iStack_8f;
  undefined4 uStack_8b;
  undefined7 uStack_87;
  undefined1 uStack_80;
  byte *pbVar6;
  
  if (param_2[0xb] != -1) {
    if (*(long *)(param_3 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      core::option::expect_failed
                ("<Uri as Dst>::host should have a str",0x24,
                 &PTR_s__root__cargo_registry_src_index__00adcd78);
    }
    auVar24 = http::uri::authority::host(*(undefined8 *)(param_3 + 0x18));
    pbVar6 = auVar24._0_8_;
    if ((auVar24._8_8_ != 0) && (*pbVar6 == 0x5b)) {
      pbVar8 = (byte *)0x0;
      uVar16 = 0x5b;
      pbVar15 = pbVar6;
      do {
        lVar14 = (long)(pbVar15 + 1) - (long)pbVar15;
        pbVar15 = pbVar15 + 1;
        pbVar17 = pbVar8 + lVar14;
        pbVar9 = pbVar8;
        while( true ) {
          pbVar8 = pbVar17;
          if ((uVar16 != 0x5d) && (pbVar17 = pbVar6 + auVar24._8_8_, uVar16 != 0x5b))
          goto joined_r0x00795454;
          if (pbVar15 == pbVar6 + auVar24._8_8_) {
            pbVar9 = (byte *)0x0;
            pbVar8 = (byte *)0x0;
            goto LAB_007951a0;
          }
          uVar16 = (uint)*pbVar15;
          if (-1 < (char)*pbVar15) break;
          pbVar9 = pbVar8;
          if (uVar16 < 0xe0) {
            uVar16 = pbVar15[1] & 0x3f | (uVar16 & 0x1f) << 6;
            pbVar17 = pbVar15 + 2;
            lVar14 = (long)pbVar17 - (long)pbVar15;
joined_r0x0079516c:
            pbVar15 = pbVar17;
            pbVar17 = pbVar8 + lVar14;
          }
          else {
            uVar18 = pbVar15[2] & 0x3f | (pbVar15[1] & 0x3f) << 6;
            if (uVar16 < 0xf0) {
              uVar16 = uVar18 | (uVar16 & 0x1f) << 0xc;
              pbVar17 = pbVar15 + 3;
              lVar14 = (long)pbVar17 - (long)pbVar15;
              goto joined_r0x0079516c;
            }
            uVar16 = pbVar15[3] & 0x3f | uVar18 << 6 | (uVar16 & 7) << 0x12;
            lVar14 = (long)(pbVar15 + 4) - (long)pbVar15;
            pbVar15 = pbVar15 + 4;
            pbVar17 = pbVar8 + lVar14;
          }
        }
      } while( true );
    }
    goto LAB_007951a8;
  }
  goto LAB_007953b8;
LAB_00795368:
  uVar10 = 1;
LAB_0079536c:
  lVar14 = *param_2;
  goto joined_r0x00795374;
  while( true ) {
    pbVar17 = pbVar4 + -1;
    bVar20 = *pbVar17;
    uVar16 = (uint)(char)bVar20;
    if ((char)bVar20 < 0) {
      pbVar17 = pbVar4 + -2;
      bVar2 = *pbVar17;
      if ((char)bVar2 + 0x40 < 0 == SCARRY4((int)(char)bVar2,0x40)) {
        uVar16 = (int)(char)bVar20 & 0x3fU | ((int)(char)bVar2 & 0x1fU) << 6;
      }
      else {
        pbVar17 = pbVar4 + -3;
        bVar20 = *pbVar17;
        if ((char)bVar20 + 0x40 < 0 == SCARRY4((int)(char)bVar20,0x40)) {
          uVar18 = (int)(char)bVar20 & 0xf;
        }
        else {
          pbVar17 = pbVar4 + -4;
          uVar18 = bVar20 & 0x3f | (*pbVar17 & 7) << 6;
        }
        uVar16 = uVar16 & 0x3f | (bVar2 & 0x3f | uVar18 << 6) << 6;
      }
    }
    if ((uVar16 != 0x5d) && (uVar16 != 0x5b)) break;
joined_r0x00795454:
    pbVar4 = pbVar17;
    if (pbVar15 == pbVar4) goto LAB_007951a0;
  }
  pbVar8 = pbVar4 + ((long)pbVar8 - (long)pbVar15);
LAB_007951a0:
  auVar24._8_8_ = (long)pbVar8 - (long)pbVar9;
  auVar24._0_8_ = pbVar6 + (long)pbVar9;
LAB_007951a8:
  uVar21 = auVar24._8_8_;
  __s2 = auVar24._0_8_;
  <core::net::ip_addr::IpAddr_as_core::str::traits::FromStr>::from_str(local_a4,__s2,uVar21);
  if (local_a4[0] == 2) {
    uVar10 = param_2[0x10];
    if (uVar10 == 0) goto LAB_0079536c;
    lVar14 = uVar10 * 0x18;
    puVar19 = (ulong *)(param_2[0xf] + 0x10);
    do {
      pcVar12 = (char *)puVar19[-1];
      uVar10 = *puVar19;
      if (((uVar21 == uVar10) && (iVar5 = memcmp(pcVar12,__s2,uVar21), iVar5 == 0)) ||
         ((uVar10 != 0 &&
          (((*pcVar12 == '.' && (uVar10 - 1 == uVar21)) &&
           (iVar5 = memcmp(pcVar12 + 1,__s2,uVar21), iVar5 == 0)))))) goto LAB_00795368;
      if ((uVar21 < uVar10) ||
         (iVar5 = memcmp(pcVar12,(void *)((long)__s2 + (uVar21 - uVar10)),uVar10), iVar5 != 0)) {
        if ((uVar10 == 1) && (*pcVar12 == '*')) goto LAB_00795368;
      }
      else if (((uVar10 != 0) && (*pcVar12 == '.')) ||
              ((CARRY8(uVar21,~uVar10) && (*(char *)((long)__s2 + uVar21 + ~uVar10) == '.'))))
      goto LAB_00795368;
      lVar14 = lVar14 + -0x18;
      puVar19 = puVar19 + 3;
    } while (lVar14 != 0);
  }
  else {
    uVar10 = param_2[0xd];
    uStack_8b._3_1_ = (undefined1)local_a4._8_8_;
    uStack_87 = SUB87(local_a4._8_8_,1);
    iStack_8f = (int)local_a4._1_7_;
    iVar5 = iStack_8f;
    uStack_8b._0_3_ = SUB73(local_a4._1_7_,4);
    uStack_80 = local_94;
    if (uVar10 == 0) goto LAB_0079536c;
    pcVar12 = (char *)param_2[0xc];
    lVar14 = uVar10 * 0x12;
    if ((local_a4[0] & 1) == 0) {
      do {
        if (*pcVar12 == '\x02') {
          if ((pcVar12[1] == local_a4[0]) && (iVar5 == *(int *)(pcVar12 + 2))) goto LAB_00795368;
        }
        else {
          uVar21 = <ipnet::ipnet::IpNet_as_ipnet::ipnet::Contains<&core::net::ip_addr::IpAddr>>::
                   contains(pcVar12,&local_90);
          if ((uVar21 & 1) != 0) goto LAB_00795368;
        }
        lVar14 = lVar14 + -0x12;
        pcVar12 = pcVar12 + 0x12;
      } while (lVar14 != 0);
    }
    else {
      lVar1 = CONCAT17(local_94,uStack_87);
      lVar11 = CONCAT44(uStack_8b,iStack_8f);
      do {
        if (*pcVar12 == '\x02') {
          if ((pcVar12[1] == local_a4[0]) &&
             (lVar1 == *(long *)(pcVar12 + 10) && lVar11 == *(long *)(pcVar12 + 2)))
          goto LAB_00795368;
        }
        else {
          uVar21 = <ipnet::ipnet::IpNet_as_ipnet::ipnet::Contains<&core::net::ip_addr::IpAddr>>::
                   contains(pcVar12,&local_90);
          if ((uVar21 & 1) != 0) goto LAB_00795368;
        }
        lVar14 = lVar14 + -0x12;
        pcVar12 = pcVar12 + 0x12;
      } while (lVar14 != 0);
    }
  }
LAB_007953b8:
  uVar10 = 0;
  lVar14 = *param_2;
joined_r0x00795374:
  if (lVar14 < 2) {
    if (lVar14 == 0) {
      if ((uVar10 & 1) != 0) goto LAB_0079563c;
    }
    else {
      if ((uVar10 & 1) != 0) goto LAB_0079563c;
      if (*param_3 == '\x01') {
        if ((param_3[1] & 1U) != 0) goto LAB_0079563c;
        piVar13 = &DAT_002bd0ac;
      }
      else {
        if (*param_3 != '\x02') goto LAB_0079569c;
        if (*(long *)(*(long *)(param_3 + 8) + 0x10) != 4) goto LAB_0079563c;
        piVar13 = *(int **)(*(long *)(param_3 + 8) + 8);
      }
      if (*piVar13 != 0x70747468) goto LAB_0079563c;
    }
  }
  else {
    if (lVar14 != 2) {
      if (lVar14 != 3) {
        if ((uVar10 & 1) == 0) {
          FUN_007956b4(param_1,param_2 + 1,param_3);
          return;
        }
LAB_0079563c:
        *param_1 = 2;
        return;
      }
      if ((uVar10 & 1) != 0) goto LAB_0079563c;
      lVar14 = param_2[1];
      if (*param_3 == '\x01') {
        __n = 4;
        if (param_3[1] != '\0') {
          __n = 5;
        }
        pcVar12 = "http";
        if (param_3[1] == '\0') {
          pcVar12 = "http\x03";
        }
        lVar11 = *(long *)(lVar14 + 0x28);
      }
      else {
        if (*param_3 != '\x02') goto LAB_0079569c;
        pcVar12 = *(char **)(*(long *)(param_3 + 8) + 8);
        __n = *(size_t *)(*(long *)(param_3 + 8) + 0x10);
        lVar11 = *(long *)(lVar14 + 0x28);
      }
      if (lVar11 == 0) goto LAB_0079563c;
      uVar7 = FUN_007c50d0(lVar14 + 0x30,pcVar12,__n);
      lVar11 = 0;
      lVar1 = *(long *)(lVar14 + 0x10);
      uVar10 = *(ulong *)(lVar14 + 0x18);
      bVar20 = (byte)(uVar7 >> 0x39);
      uVar22 = CONCAT17(bVar20,CONCAT16(bVar20,CONCAT15(bVar20,CONCAT14(bVar20,CONCAT13(bVar20,
                                                  CONCAT12(bVar20,CONCAT11(bVar20,bVar20)))))));
      uVar7 = uVar7 & uVar10;
      uVar23 = *(undefined8 *)(lVar1 + uVar7);
      uVar21 = NEON_cmeq(uVar23,uVar22,1);
      uVar21 = uVar21 & 0x8080808080808080;
      while( true ) {
        for (; uVar21 == 0; uVar21 = uVar21 & 0x8080808080808080) {
          uVar23 = NEON_cmeq(uVar23,0xffffffffffffffff,1);
          bVar20 = NEON_umaxv(uVar23,1);
          if ((bVar20 & 1) != 0) goto LAB_0079563c;
          lVar11 = lVar11 + 8;
          uVar7 = uVar7 + lVar11 & uVar10;
          uVar23 = *(undefined8 *)(lVar1 + uVar7);
          uVar21 = NEON_cmeq(uVar23,uVar22,1);
        }
        uVar3 = (uVar21 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar21 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
        lVar14 = lVar1 + (uVar7 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) & uVar10) *
                         -0x68;
        if ((__n == *(size_t *)(lVar14 + -0x58)) &&
           (iVar5 = memcmp(pcVar12,*(void **)(lVar14 + -0x60),__n), iVar5 == 0)) break;
        uVar21 = uVar21 - 1 & uVar21;
      }
      param_2 = (long *)(lVar14 + -0x50);
      goto LAB_0079566c;
    }
    if ((uVar10 & 1) != 0) goto LAB_0079563c;
    if (*param_3 == '\x01') {
      if ((param_3[1] & 1U) == 0) goto LAB_0079563c;
      pcVar12 = "http";
    }
    else {
      if (*param_3 != '\x02') {
LAB_0079569c:
                    /* WARNING: Subroutine does not return */
        core::option::expect_failed
                  ("Uri should have a schemeInvalidUriCharInvalidSchemeInvalidAuthorityInvalidPortInvalidFormatSchemeMissingAuthorityMissingPathAndQueryMissingTooLongEmptySchemeTooLong"
                   ,0x18,&PTR_s__root__cargo_registry_src_index__00adcd90);
      }
      if (*(long *)(*(long *)(param_3 + 8) + 0x10) != 5) goto LAB_0079563c;
      pcVar12 = *(char **)(*(long *)(param_3 + 8) + 8);
    }
    if (*(int *)pcVar12 != 0x70747468 || (char)*(int *)((long)pcVar12 + 4) != 's')
    goto LAB_0079563c;
  }
  param_2 = param_2 + 1;
LAB_0079566c:
  FUN_00799ca8(param_1,param_2);
  return;
}


// ===== 007956b4  FUN_007956b4 =====

void FUN_007956b4(undefined8 *param_1,long *param_2,char *param_3)

{
  uint uVar1;
  char **ppcVar2;
  code *__ptr;
  undefined1 *__dest;
  char cVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  char **local_1c0;
  code *pcStack_1b8;
  char **local_1b0;
  code *pcStack_1a8;
  char ***local_1a0;
  char **ppcStack_198;
  code *pcStack_190;
  code *pcStack_188;
  code *local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  char **local_168;
  code *pcStack_160;
  code *local_158;
  code *pcStack_150;
  char ***local_148;
  char **ppcStack_140;
  code *local_138;
  code *pcStack_130;
  code *pcStack_128;
  undefined8 local_120;
  undefined8 local_118;
  char *local_110;
  undefined8 uStack_108;
  undefined1 local_100 [16];
  char **local_f0;
  code *pcStack_e8;
  code *pcStack_e0;
  code *pcStack_d8;
  char ***local_d0;
  char **ppcStack_c8;
  code *pcStack_c0;
  code *pcStack_b8;
  code *local_b0;
  undefined8 uStack_a8;
  char **local_a0;
  code *pcStack_98;
  code *local_90;
  code *pcStack_88;
  char ***local_80;
  char **ppcStack_78;
  code *pcStack_70;
  code *pcStack_68;
  code *local_60;
  undefined8 uStack_58;
  
  if (*param_3 == '\x01') {
    uStack_108 = 4;
    if (param_3[1] != '\0') {
      uStack_108 = 5;
    }
    local_110 = "http";
    if (param_3[1] == '\0') {
      local_110 = "http\x03";
    }
  }
  else {
    if (*param_3 != '\x02') {
                    /* WARNING: Subroutine does not return */
      core::option::expect_failed
                ("Uri should have a schemeInvalidUriCharInvalidSchemeInvalidAuthorityInvalidPortInvalidFormatSchemeMissingAuthorityMissingPathAndQueryMissingTooLongEmptySchemeTooLong"
                 ,0x18,&PTR_s__root__cargo_registry_src_index__00adcd90);
    }
    uStack_108 = *(undefined8 *)(*(long *)(param_3 + 8) + 0x10);
    local_110 = *(char **)(*(long *)(param_3 + 8) + 8);
  }
  if (*(long *)(param_3 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed
              ("<Uri as Dst>::host should have a str",0x24,
               &PTR_s__root__cargo_registry_src_index__00adcd78);
  }
  local_100 = http::uri::authority::host(*(undefined8 *)(param_3 + 0x18));
  <http::uri::http::uri::Uri>::port(&local_168,param_3);
  local_f0 = (char **)&UNK_002e2d5a;
  if (local_168 == (char **)0x0) {
    local_f0 = (char **)&DAT_00000001;
  }
  pcStack_e8 = (code *)(ulong)(local_168 != (char **)0x0);
  <http::uri::http::uri::Uri>::port(&local_168,param_3);
  if (local_168 == (char **)0x0) {
    local_1b0 = (char **)0x0;
    pcStack_1b8 = (code *)&DAT_00000001;
  }
  else {
    auVar5 = <core::fmt::num::imp::[5]::u16>::_fmt((ulong)local_158 & 0xffff,&local_168,5);
    local_1b0 = auVar5._8_8_;
    if ((long)local_1b0 < 0) {
      uVar4 = 0;
LAB_00795790:
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar4,local_1b0);
    }
    if (local_1b0 == (char **)0x0) {
      pcStack_1b8 = (code *)&DAT_00000001;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar4 = 1;
      __dest = (undefined1 *)FUN_004b25a4(local_1b0,1);
      if (__dest == (undefined1 *)0x0) goto LAB_00795790;
      memcpy(__dest,auVar5._0_8_,(size_t)local_1b0);
      pcStack_1b8 = (code *)__dest;
    }
  }
  local_168 = &local_110;
  pcStack_160 = FUN_00782f80;
  local_158 = (code *)local_100;
  pcStack_150 = FUN_00782f80;
  local_148 = &local_f0;
  ppcStack_140 = (char **)FUN_00782f80;
  pcStack_130 = FUN_00799f4c;
                    /* try { // try from 0079581c to 0079582f has its CatchHandler @ 00795a94 */
  local_1c0 = local_1b0;
  local_138 = (code *)&local_1c0;
  alloc::fmt::format::format_inner(&local_a0,&DAT_002b4397,&local_168);
  if (local_1c0 != (char **)0x0) {
    free(pcStack_1b8);
  }
  __ptr = pcStack_98;
  ppcVar2 = local_a0;
  local_1a0 = (char ***)0x0;
  local_1c0 = (char **)0x0;
  local_1b0 = (char **)0x0;
                    /* try { // try from 00795858 to 00795867 has its CatchHandler @ 00795ab8 */
  <url::url::ParseOptions>::parse(&local_168,&local_1c0,pcStack_98,local_90);
  if (local_168 == (char **)0xffffffffffffffff) {
    local_1c0 = (char **)CONCAT71(local_1c0._1_7_,pcStack_160._0_1_);
                    /* try { // try from 00795a58 to 00795a7b has its CatchHandler @ 00795ab8 */
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              (&DAT_002e2d47,0x13,&local_1c0,&DAT_00adc650,
               &PTR_s__root__cargo_registry_src_index__00adc588);
  }
  local_170 = local_118;
  ppcStack_198 = ppcStack_140;
  local_1a0 = local_148;
  pcStack_188 = pcStack_130;
  pcStack_190 = local_138;
  uStack_178 = local_120;
  local_180 = pcStack_128;
  pcStack_1b8 = pcStack_160;
  local_1c0 = local_168;
  pcStack_1a8 = pcStack_150;
  local_1b0 = (char **)local_158;
  if (ppcVar2 != (char **)0x0) {
    free(__ptr);
  }
                    /* try { // try from 007958c8 to 00795913 has its CatchHandler @ 00795aa4 */
  (**(code **)(param_2[1] + 0x28))
            (&local_f0,*param_2 + (*(long *)(param_2[1] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
             &local_1c0);
  if (local_f0 != (char **)0xffffffffffffffff) {
    pcStack_98 = pcStack_e8;
    local_a0 = local_f0;
    pcStack_88 = pcStack_d8;
    local_90 = pcStack_e0;
    ppcStack_78 = ppcStack_c8;
    local_80 = local_d0;
    pcStack_68 = pcStack_b8;
    pcStack_70 = pcStack_c0;
    uStack_58 = uStack_a8;
    local_60 = local_b0;
    if (local_f0 != (char **)0x2) {
      local_168 = local_f0;
      local_120 = uStack_a8;
      uVar1 = (uint)uStack_a8 & 0xff;
      local_158 = pcStack_e0;
      pcStack_160 = pcStack_e8;
      local_148 = local_d0;
      pcStack_150 = pcStack_d8;
      local_138 = pcStack_c0;
      ppcStack_140 = ppcStack_c8;
      pcStack_128 = local_b0;
      pcStack_130 = pcStack_b8;
      if (local_f0 == (char **)&DAT_00000001) {
        if (uVar1 == 2) {
          cVar3 = (char)param_2[6];
          if (cVar3 != '\x02') {
                    /* try { // try from 007959a0 to 007959db has its CatchHandler @ 00795a80 */
            (**(code **)param_2[2])(&local_a0,param_2 + 5,param_2[3],param_2[4]);
LAB_007959dc:
            cVar3 = (char)param_2[6];
          }
LAB_007959e8:
          local_120 = CONCAT71(local_120._1_7_,cVar3);
          local_138 = pcStack_98;
          ppcStack_140 = local_a0;
          pcStack_128 = pcStack_88;
          pcStack_130 = local_90;
        }
      }
      else if (uVar1 == 2) {
        cVar3 = (char)param_2[6];
        if (cVar3 != '\x02') {
          (**(code **)param_2[2])(&local_a0,param_2 + 5,param_2[3],param_2[4]);
          goto LAB_007959dc;
        }
        goto LAB_007959e8;
      }
      param_1[5] = ppcStack_140;
      param_1[4] = local_148;
      param_1[7] = pcStack_130;
      param_1[6] = local_138;
      param_1[9] = local_120;
      param_1[8] = pcStack_128;
      param_1[1] = pcStack_160;
      *param_1 = local_168;
      param_1[3] = pcStack_150;
      param_1[2] = local_158;
      local_f0 = local_a0;
      pcStack_e8 = pcStack_98;
      pcStack_e0 = local_90;
      pcStack_d8 = pcStack_88;
      goto joined_r0x00795920;
    }
    FUN_00795f7c((ulong)&local_a0 | 8);
  }
  *param_1 = 2;
joined_r0x00795920:
  if (local_1c0 != (char **)0x0) {
    free(pcStack_1b8);
  }
  return;
}


// ===== 00795ad8  FUN_00795ad8 =====

void FUN_00795ad8(long *param_1)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  
  if (*param_1 != -1) {
    if (*param_1 != 0) {
      free((void *)param_1[1]);
    }
    __ptr = (void *)param_1[4];
    lVar1 = param_1[5];
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)((long)__ptr + 8);
      do {
        if (puVar2[-1] != 0) {
          free((void *)*puVar2);
        }
        lVar1 = lVar1 + -1;
        puVar2 = puVar2 + 3;
      } while (lVar1 != 0);
    }
    if (param_1[3] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00795b7c  FUN_00795b7c =====

void FUN_00795b7c(long *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  if (*param_1 != 0) {
    if (param_1[1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x00795bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1[1] + 0x20))(param_1 + 4,param_1[2],param_1[3]);
      return;
    }
    __ptr = (void *)param_1[2];
    puVar1 = (undefined8 *)param_1[3];
    pcVar2 = (code *)*puVar1;
    if (pcVar2 != (code *)0x0) {
                    /* try { // try from 00795bbc to 00795bc3 has its CatchHandler @ 00795bec */
      (*pcVar2)(__ptr);
    }
    if (puVar1[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00795c10  FUN_00795c10 =====

void FUN_00795c10(long *param_1)

{
  if (*param_1 == 2) {
    FUN_00795f7c(param_1 + 1);
    return;
  }
  FUN_007963ac();
  return;
}


// ===== 00795c28  FUN_00795c28 =====

void FUN_00795c28(long *param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  lVar1 = (long)__ptr + 0x38;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 00795c64 to 00795c67 has its CatchHandler @ 00795cb0 */
    (**(code **)(*(long *)(lVar1 + -0x18) + 0x20))
              (lVar1,*(undefined8 *)(lVar1 + -0x10),*(undefined8 *)(lVar1 + -8));
    lVar1 = lVar1 + 0x48;
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00795d04  FUN_00795d04 =====

void FUN_00795d04(long *param_1)

{
                    /* try { // try from 00795d14 to 00795d17 has its CatchHandler @ 00795d48 */
  FUN_0078aa8c();
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 00795d70  FUN_00795d70 =====

void FUN_00795d70(long *param_1)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  
  __ptr = (void *)param_1[1];
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)((long)__ptr + 8);
    do {
      if (puVar2[-1] != 0) {
        free((void *)*puVar2);
      }
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 3;
    } while (lVar1 != 0);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00795df0  FUN_00795df0 =====

void FUN_00795df0(long param_1)

{
  if (*(long *)(param_1 + 0x40) != 0) {
                    /* try { // try from 00795e10 to 00795e17 has its CatchHandler @ 00795e34 */
    (**(code **)(*(long *)(param_1 + 0x40) + 0x20))
              (param_1 + 0x58,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
  }
                    /* WARNING: Could not recover jumptable at 0x00795e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x20))
            (param_1 + 0x30,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}


// ===== 00795e58  FUN_00795e58 =====

void FUN_00795e58(long param_1)

{
  long lVar1;
  long lVar2;
  
                    /* try { // try from 00795e70 to 00795e73 has its CatchHandler @ 00795ef4 */
  FUN_007c7868();
                    /* try { // try from 00795e74 to 00795e7b has its CatchHandler @ 00795eec */
  FUN_0077a95c(param_1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x20) + 1;
  lVar1 = *(long *)(param_1 + 0x18) + 0x38;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 00795ea0 to 00795ea3 has its CatchHandler @ 00795f10 */
    (**(code **)(*(long *)(lVar1 + -0x18) + 0x20))
              (lVar1,*(undefined8 *)(lVar1 + -0x10),*(undefined8 *)(lVar1 + -8));
    lVar1 = lVar1 + 0x48;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    free(*(void **)(param_1 + 0x18));
    return;
  }
  return;
}


// ===== 00795f64  FUN_00795f64 =====

void FUN_00795f64(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 00795f7c  FUN_00795f7c =====

void FUN_00795f7c(undefined8 *param_1)

{
  code *pcVar1;
  long *__ptr;
  undefined8 *puVar2;
  void *__ptr_00;
  
  __ptr = (long *)*param_1;
  __ptr_00 = (void *)__ptr[0xb];
  if (__ptr_00 != (void *)0x0) {
    puVar2 = (undefined8 *)__ptr[0xc];
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
                    /* try { // try from 00795fa4 to 00795fab has its CatchHandler @ 00795ff8 */
      (*pcVar1)(__ptr_00);
    }
    if (puVar2[1] != 0) {
      free(__ptr_00);
    }
  }
  if ((*__ptr != -1) && (*__ptr != 0)) {
    free((void *)__ptr[1]);
  }
  free(__ptr);
  return;
}


// ===== 00796068  FUN_00796068 =====

void FUN_00796068(long *param_1)

{
  if (*param_1 == 0) {
    if ((char)param_1[9] != '\x02') {
                    /* try { // try from 007960bc to 007960c3 has its CatchHandler @ 007960e0 */
      (**(code **)(param_1[5] + 0x20))(param_1 + 8,param_1[6],param_1[7]);
    }
  }
  else if ((char)param_1[9] != '\x02') {
                    /* try { // try from 00796098 to 0079609f has its CatchHandler @ 007960fc */
    (**(code **)(param_1[5] + 0x20))(param_1 + 8,param_1[6],param_1[7]);
  }
                    /* WARNING: Could not recover jumptable at 0x007960dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x20))(param_1 + 4,param_1[2],param_1[3]);
  return;
}


// ===== 00796120  FUN_00796120 =====

void FUN_00796120(long param_1)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  
                    /* try { // try from 00796134 to 00796137 has its CatchHandler @ 007961c8 */
  FUN_007961dc();
  if (*(long *)(param_1 + 0x58) != -1) {
    if (*(long *)(param_1 + 0x58) != 0) {
      free(*(void **)(param_1 + 0x60));
    }
    __ptr = *(void **)(param_1 + 0x78);
    lVar1 = *(long *)(param_1 + 0x80);
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)((long)__ptr + 8);
      do {
        if (puVar2[-1] != 0) {
          free((void *)*puVar2);
        }
        lVar1 = lVar1 + -1;
        puVar2 = puVar2 + 3;
      } while (lVar1 != 0);
    }
    if (*(long *)(param_1 + 0x70) != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 007961dc  FUN_007961dc =====

void FUN_007961dc(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  plVar3 = param_1 + 1;
  lVar5 = *param_1;
  if (lVar5 < 2) {
    if (lVar5 == 0) {
      FUN_00796068();
      return;
    }
    if (lVar5 == 1) {
      FUN_00796068();
      return;
    }
  }
  else {
    if (lVar5 == 2) {
      FUN_00796068();
      return;
    }
    if (lVar5 == 3) {
      plVar3 = (long *)*plVar3;
      do {
        lVar5 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 + -1 != 0) {
        return;
      }
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<std::collections::hash::map::HashMap<alloc::string::String,reqwest::proxy::ProxyScheme>>>
      ::drop_slow();
      return;
    }
  }
  if ((char)param_1[7] != '\x02') {
                    /* try { // try from 00796264 to 0079626b has its CatchHandler @ 007962bc */
    (**(code **)(param_1[3] + 0x20))(param_1 + 6,param_1[4],param_1[5]);
  }
  plVar4 = (long *)*plVar3;
  do {
    lVar5 = *plVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 + -1 != 0) {
    return;
  }
  DataMemoryBarrier(2,1);
  <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::drop_slow
            (plVar3);
  return;
}


// ===== 007962f0  FUN_007962f0 =====

void FUN_007962f0(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 00796310  FUN_00796310 =====

void FUN_00796310(byte *param_1)

{
  if ((9 < *param_1) && (*(long *)(param_1 + 0x10) != 0)) {
    free(*(void **)(param_1 + 8));
    return;
  }
  return;
}


// ===== 00796334  FUN_00796334 =====

void FUN_00796334(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)param_1[0x22];
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
                    /* try { // try from 00796360 to 00796367 has its CatchHandler @ 00796394 */
    <alloc::sync::[n]::alloc::sync::Arc<reqwest::async_impl::client::ClientRef>>::drop_slow
              (param_1 + 0x22);
  }
  if (*param_1 == 2) {
    FUN_00795f7c(param_1 + 1);
    return;
  }
  FUN_007963ac(param_1);
  return;
}


// ===== 007963ac  FUN_007963ac =====

void FUN_007963ac(long *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  if ((9 < *(byte *)(param_1 + 0x1e)) && (param_1[0x20] != 0)) {
    free((void *)param_1[0x1f]);
  }
  if (param_1[0x11] != 0) {
    free((void *)param_1[0x12]);
  }
                    /* try { // try from 007963f0 to 007963f7 has its CatchHandler @ 00796480 */
  FUN_00796498(param_1 + 5);
  if (*param_1 != 0) {
    if (param_1[1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x0079641c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1[1] + 0x20))(param_1 + 4,param_1[2],param_1[3]);
      return;
    }
    __ptr = (void *)param_1[2];
    puVar1 = (undefined8 *)param_1[3];
    pcVar2 = (code *)*puVar1;
    if (pcVar2 != (code *)0x0) {
                    /* try { // try from 0079642c to 00796433 has its CatchHandler @ 0079645c */
      (*pcVar2)(__ptr);
    }
    if (puVar1[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00796498  FUN_00796498 =====

void FUN_00796498(long param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    free(*(void **)(param_1 + 0x48));
  }
                    /* try { // try from 007964c8 to 007964cf has its CatchHandler @ 0079655c */
  FUN_0078aa8c(param_1 + 0x18);
  if (*(long *)(param_1 + 0x18) != 0) {
    free(*(void **)(param_1 + 0x20));
  }
  __ptr = *(void **)(param_1 + 0x38);
  lVar2 = *(long *)(param_1 + 0x40) + 1;
  lVar1 = (long)__ptr + 0x38;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 00796510 to 00796513 has its CatchHandler @ 0079658c */
    (**(code **)(*(long *)(lVar1 + -0x18) + 0x20))
              (lVar1,*(undefined8 *)(lVar1 + -0x10),*(undefined8 *)(lVar1 + -8));
    lVar1 = lVar1 + 0x48;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 007965e0  FUN_007965e0 =====

long FUN_007965e0(long *param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar1 = *param_1;
  if (lVar1 != param_1[1]) {
    puVar4 = (ulong *)(lVar1 + 0x28);
    uVar3 = (ulong)(param_1[1] - lVar1) / 0x50;
    do {
      uVar6 = puVar4[-5];
      if ((long)uVar6 < 2) {
        if (uVar6 == 0) {
          uVar6 = puVar4[-2];
        }
        else {
          uVar6 = *puVar4;
          if (puVar4[-2] <= *puVar4) {
            uVar6 = puVar4[-2];
          }
        }
      }
      else {
        if (uVar6 == 2) {
          uVar7 = puVar4[4];
          uVar5 = (ulong)(byte)(*(char *)((long)puVar4 + 0x13) - *(char *)((long)puVar4 + 0x12));
          bVar2 = CARRY8(puVar4[-2],uVar5);
          uVar5 = puVar4[-2] + uVar5;
        }
        else {
          if (uVar6 == 3) {
            uVar6 = puVar4[-3];
            goto LAB_00796634;
          }
          bVar2 = CARRY8(puVar4[-3],*puVar4);
          uVar5 = puVar4[-3] + *puVar4;
          uVar7 = puVar4[3];
        }
        if (bVar2) {
          uVar5 = 0xffffffffffffffff;
        }
        uVar6 = uVar5 + uVar7;
        if (CARRY8(uVar5,uVar7)) {
          uVar6 = 0xffffffffffffffff;
        }
      }
LAB_00796634:
      uVar3 = uVar3 - 1;
      param_2 = uVar6 + param_2;
      puVar4 = puVar4 + 10;
    } while (uVar3 != 0);
  }
  lVar1 = param_1[2];
  if (lVar1 != param_1[3]) {
    puVar4 = (ulong *)(lVar1 + 0x28);
    uVar3 = (ulong)(param_1[3] - lVar1) / 0x50;
    do {
      uVar6 = puVar4[-5];
      if ((long)uVar6 < 2) {
        if (uVar6 == 0) {
          uVar6 = puVar4[-2];
        }
        else {
          uVar6 = *puVar4;
          if (puVar4[-2] <= *puVar4) {
            uVar6 = puVar4[-2];
          }
        }
      }
      else {
        if (uVar6 == 2) {
          uVar7 = puVar4[4];
          uVar5 = (ulong)(byte)(*(char *)((long)puVar4 + 0x13) - *(char *)((long)puVar4 + 0x12));
          bVar2 = CARRY8(puVar4[-2],uVar5);
          uVar5 = puVar4[-2] + uVar5;
        }
        else {
          if (uVar6 == 3) {
            uVar6 = puVar4[-3];
            goto LAB_007966e8;
          }
          bVar2 = CARRY8(puVar4[-3],*puVar4);
          uVar5 = puVar4[-3] + *puVar4;
          uVar7 = puVar4[3];
        }
        if (bVar2) {
          uVar5 = 0xffffffffffffffff;
        }
        uVar6 = uVar5 + uVar7;
        if (CARRY8(uVar5,uVar7)) {
          uVar6 = 0xffffffffffffffff;
        }
      }
LAB_007966e8:
      uVar3 = uVar3 - 1;
      param_2 = uVar6 + param_2;
      puVar4 = puVar4 + 10;
    } while (uVar3 != 0);
  }
  return param_2;
}


// ===== 00796754  <reqwest::async_impl::request::reqwest::async_impl::request::Request>::try_clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::request::reqwest::async_impl::request::Request>::try_clone */

void __rustcall
<reqwest::async_impl::request::reqwest::async_impl::request::Request>::try_clone
          (undefined8 *param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  ulong unaff_x21;
  undefined1 *unaff_x22;
  ulong __n;
  undefined8 uVar4;
  void *__src;
  ulong uVar5;
  long local_278;
  long local_250;
  long lStack_248;
  void *pvStack_240;
  undefined8 *local_238;
  undefined1 auStack_230 [8];
  long local_228;
  long lStack_220;
  long local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  void *pvStack_1e0;
  ulong local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  long local_188;
  long lStack_180;
  undefined8 local_178;
  long local_170;
  int local_168;
  byte local_160;
  undefined4 local_15f;
  undefined3 uStack_15b;
  undefined1 *local_158;
  ulong uStack_150;
  undefined1 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined2 uStack_118;
  undefined2 uStack_116;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 local_104;
  long local_100;
  long lStack_f8;
  undefined1 local_f0;
  undefined7 uStack_ef;
  undefined4 local_e8;
  undefined3 uStack_e4;
  long local_e0;
  long lStack_d8;
  long local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  if (*param_2 == 1) {
    if ((undefined8 *)param_2[1] == (undefined8 *)0x0) {
      *param_1 = 2;
      return;
    }
    (**(code **)param_2[1])(&lStack_248,param_2 + 4,param_2[2],param_2[3]);
    bVar1 = *(byte *)(param_2 + 0x1e);
    local_278 = 1;
  }
  else {
    bVar1 = *(byte *)(param_2 + 0x1e);
    local_278 = 0;
  }
  if (8 < bVar1) {
    if (bVar1 == 9) {
      unaff_x22 = (undefined1 *)param_2[0x1f];
      unaff_x21 = (ulong)*(byte *)(param_2 + 0x20);
      local_e8._0_3_ = (undefined3)*(undefined4 *)((long)param_2 + 0xf1);
      local_e8._3_1_ = (undefined1)*(undefined4 *)((long)param_2 + 0xf4);
      uStack_e4 = (undefined3)((uint)*(undefined4 *)((long)param_2 + 0xf4) >> 8);
    }
    else {
      unaff_x21 = param_2[0x20];
      if ((long)unaff_x21 < 0) {
        uVar4 = 0;
LAB_00796a90:
                    /* try { // try from 00796a90 to 00796a9b has its CatchHandler @ 00796bc8 */
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(uVar4,unaff_x21);
      }
      if (unaff_x21 == 0) {
        unaff_x22 = &DAT_00000001;
      }
      else {
        pvVar3 = (void *)param_2[0x1f];
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        uVar4 = 1;
        unaff_x22 = (undefined1 *)FUN_004b25a4(unaff_x21,1);
        if (unaff_x22 == (undefined1 *)0x0) goto LAB_00796a90;
        memcpy(unaff_x22,pvVar3,unaff_x21);
      }
    }
  }
                    /* try { // try from 00796800 to 0079680b has its CatchHandler @ 00796ba4 */
  <alloc::string::String_as_core::clone::Clone>::clone(&local_140,param_2 + 0x11);
  local_f0 = (undefined1)param_2[0x1b];
  uStack_118 = (undefined2)param_2[0x16];
  local_104 = *(undefined4 *)((long)param_2 + 0xc4);
  lStack_f8 = param_2[0x1a];
  local_100 = param_2[0x19];
  uStack_116 = *(undefined2 *)((long)param_2 + 0xb2);
  local_128 = (undefined4)param_2[0x14];
  uStack_124 = *(undefined4 *)((long)param_2 + 0xa4);
  local_120 = (undefined4)param_2[0x15];
  uStack_11c = *(undefined4 *)((long)param_2 + 0xac);
  uStack_10c = (undefined4)*(undefined8 *)((long)param_2 + 0xbc);
  uStack_108 = (undefined4)((ulong)*(undefined8 *)((long)param_2 + 0xbc) >> 0x20);
  uStack_114 = (undefined4)*(undefined8 *)((long)param_2 + 0xb4);
  uStack_110 = (undefined4)((ulong)*(undefined8 *)((long)param_2 + 0xb4) >> 0x20);
                    /* try { // try from 00796854 to 0079685b has its CatchHandler @ 00796b80 */
  <http::header::map::http::header::map::HeaderMap>::new(&local_e0);
  uStack_1a0 = CONCAT44(uStack_114,CONCAT22(uStack_116,uStack_118));
  local_1a8 = CONCAT44(uStack_11c,local_120);
  uStack_190 = CONCAT44(local_104,uStack_108);
  local_198 = CONCAT44(uStack_10c,uStack_110);
  local_170 = 2;
  lStack_180 = lStack_f8;
  local_188 = local_100;
  uStack_1b0 = CONCAT44(uStack_124,local_128);
  local_250 = 0;
  uStack_1c0 = uStack_138;
  local_1c8 = local_140;
  local_1b8 = local_130;
  local_15f = local_e8;
  uStack_15b = uStack_e4;
  local_178 = CONCAT71(uStack_ef,local_f0);
  local_148 = 2;
  uStack_200 = uStack_b8;
  local_208 = local_c0;
  uStack_1f0 = uStack_a8;
  local_1f8 = local_b0;
  local_168 = (int)param_2[0x1d];
  pvStack_1e0 = (void *)uStack_98;
  local_1e8 = local_a0;
  uStack_1d0 = uStack_88;
  local_1d8 = uStack_90;
  lStack_220 = lStack_d8;
  local_228 = local_e0;
  uStack_210 = uStack_c8;
  local_218 = local_d0;
  if (local_168 != -1) {
    local_170 = param_2[0x1c];
  }
  uVar5 = param_2[0xf];
  uVar4 = 0;
  __n = uVar5 * 4;
  local_160 = bVar1;
  local_158 = unaff_x22;
  uStack_150 = unaff_x21;
  if ((uVar5 >> 0x3e == 0) && (__n < 0x7fffffffffffffff)) {
    lVar2 = param_2[0x10];
    if (__n == 0) {
      pvVar3 = (void *)0x2;
    }
    else {
      __src = (void *)param_2[0xe];
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar4 = 2;
      pvVar3 = (void *)FUN_004b25a4(__n,2);
      if (pvVar3 == (void *)0x0) goto LAB_00796948;
      if (uVar5 != 0) {
        memcpy(pvVar3,__src,__n);
      }
    }
                    /* try { // try from 00796968 to 00796973 has its CatchHandler @ 00796b64 */
    FUN_00789c40(&local_78,param_2 + 8);
                    /* try { // try from 00796974 to 0079697f has its CatchHandler @ 00796b50 */
    FUN_00789b14(&local_140,param_2 + 0xb);
    local_d0 = param_2[7];
    local_c0 = uStack_70;
    uStack_c8 = local_78;
    lStack_d8 = param_2[6];
    local_e0 = param_2[5];
    uStack_b8 = local_68;
    uStack_a8 = uStack_138;
    local_b0 = local_140;
    local_a0 = local_130;
                    /* try { // try from 007969b4 to 007969bb has its CatchHandler @ 00796b18 */
    FUN_00796498(&local_228);
    local_1e8 = local_a0;
    local_148 = (undefined1)param_2[0x21];
    uStack_210 = uStack_c8;
    local_218 = local_d0;
    uStack_200 = uStack_b8;
    local_208 = local_c0;
    uStack_1f0 = uStack_a8;
    local_1f8 = local_b0;
    lStack_220 = lStack_d8;
    local_228 = local_e0;
    uStack_1d0 = CONCAT62(uStack_1d0._2_6_,(short)lVar2);
    pvStack_1e0 = pvVar3;
    local_1d8 = uVar5;
    if (local_250 != 0) {
      if (lStack_248 == 0) {
        if ((code *)*local_238 != (code *)0x0) {
                    /* try { // try from 00796a24 to 00796a2b has its CatchHandler @ 00796adc */
          (*(code *)*local_238)(pvStack_240);
        }
        if (local_238[1] != 0) {
          free(pvStack_240);
        }
      }
      else {
                    /* try { // try from 00796a0c to 00796a13 has its CatchHandler @ 00796af8 */
        (**(code **)(lStack_248 + 0x20))(auStack_230,pvStack_240,local_238);
      }
    }
    local_250 = local_278;
    memcpy(param_1,&local_250,0x110);
    return;
  }
LAB_00796948:
                    /* try { // try from 00796948 to 00796953 has its CatchHandler @ 00796bd0 */
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar4,__n);
}


// ===== 00796bf8  <reqwest::proxy::[1]::reqwest::proxy::Proxy>::basic_auth =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::proxy::[1]::reqwest::proxy::Proxy>::basic_auth */

void __rustcall
<reqwest::proxy::[1]::reqwest::proxy::Proxy>::basic_auth
          (ulong *param_1,ulong *param_2,void *param_3,size_t param_4,void *param_5,size_t param_6)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong local_78;
  ulong uStack_70;
  ulong local_68;
  ulong uStack_60;
  ulong local_58;
  
  if (2 < *param_2) {
    if (*param_2 != 4) {
                    /* try { // try from 00796ef0 to 00796f07 has its CatchHandler @ 00796fa8 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic(&DAT_002e2d6f,0xf,&PTR_s__root__cargo_registry_src_index__00adc6c0);
    }
    FUN_007c3be4(&local_78,param_3,param_4,param_5,param_6);
    if ((char)param_2[7] != '\x02') {
                    /* try { // try from 00796ce0 to 00796ce7 has its CatchHandler @ 00796f68 */
      (**(code **)(param_2[3] + 0x20))(param_2 + 6,param_2[4],param_2[5]);
    }
    param_2[4] = uStack_70;
    param_2[3] = local_78;
    param_2[6] = uStack_60;
    param_2[5] = local_68;
    param_2[7] = local_58;
    goto LAB_00796eac;
  }
  if (param_2[1] == 1) {
    if (-1 < (long)param_4) {
      if (param_4 == 0) {
        puVar1 = &DAT_00000001;
      }
      else {
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        uVar3 = 1;
        puVar1 = (undefined1 *)FUN_004b25a4(param_4,1);
        if (puVar1 == (undefined1 *)0x0) goto LAB_00796c98;
        memcpy(puVar1,param_3,param_4);
      }
      if ((long)param_6 < 0) {
        uVar3 = 0;
LAB_00796c80:
                    /* try { // try from 00796c80 to 00796c8b has its CatchHandler @ 00796f8c */
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(uVar3,param_6);
      }
      if (param_6 == 0) {
        puVar2 = &DAT_00000001;
      }
      else {
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        uVar3 = 1;
        puVar2 = (undefined1 *)FUN_004b25a4(param_6,1);
        if (puVar2 == (undefined1 *)0x0) goto LAB_00796c80;
        memcpy(puVar2,param_5,param_6);
      }
                    /* try { // try from 00796dd0 to 00796de7 has its CatchHandler @ 00796f48 */
      FUN_007c3be4(&local_78,puVar1,param_4,puVar2,param_6);
      if (param_6 != 0) {
        free(puVar2);
      }
      if (param_4 != 0) {
        free(puVar1);
      }
      if ((char)param_2[10] != '\x02') {
                    /* try { // try from 00796e28 to 00796e2f has its CatchHandler @ 00796f10 */
        (**(code **)(param_2[6] + 0x20))(param_2 + 9,param_2[7],param_2[8]);
      }
LAB_00796e98:
      param_2[7] = uStack_70;
      param_2[6] = local_78;
      param_2[9] = uStack_60;
      param_2[8] = local_68;
      param_2[10] = local_58;
LAB_00796eac:
      uVar5 = param_2[0xd];
      uVar4 = param_2[0xc];
      uVar7 = param_2[0xf];
      uVar6 = param_2[0xe];
      param_1[0x10] = param_2[0x10];
      param_1[0xd] = uVar5;
      param_1[0xc] = uVar4;
      param_1[0xf] = uVar7;
      param_1[0xe] = uVar6;
      uVar4 = param_2[4];
      uVar6 = param_2[7];
      uVar5 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = uVar4;
      param_1[7] = uVar6;
      param_1[6] = uVar5;
      uVar4 = param_2[8];
      uVar6 = param_2[0xb];
      uVar5 = param_2[10];
      param_1[9] = param_2[9];
      param_1[8] = uVar4;
      param_1[0xb] = uVar6;
      param_1[10] = uVar5;
      uVar4 = *param_2;
      uVar6 = param_2[3];
      uVar5 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar4;
      param_1[3] = uVar6;
      param_1[2] = uVar5;
      return;
    }
  }
  else if (-1 < (long)param_4) {
    if (param_4 == 0) {
      puVar1 = &DAT_00000001;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar3 = 1;
      puVar1 = (undefined1 *)FUN_004b25a4(param_4,1);
      if (puVar1 == (undefined1 *)0x0) goto LAB_00796c98;
      memcpy(puVar1,param_3,param_4);
    }
    if ((long)param_6 < 0) {
      uVar3 = 0;
LAB_00796d44:
                    /* try { // try from 00796d44 to 00796d4f has its CatchHandler @ 00796f88 */
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar3,param_6);
    }
    if (param_6 == 0) {
      puVar2 = &DAT_00000001;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar3 = 1;
      puVar2 = (undefined1 *)FUN_004b25a4(param_6,1);
      if (puVar2 == (undefined1 *)0x0) goto LAB_00796d44;
      memcpy(puVar2,param_5,param_6);
    }
                    /* try { // try from 00796e38 to 00796e4f has its CatchHandler @ 00796f2c */
    FUN_007c3be4(&local_78,puVar1,param_4,puVar2,param_6);
    if (param_6 != 0) {
      free(puVar2);
    }
    if (param_4 != 0) {
      free(puVar1);
    }
    if ((char)param_2[10] != '\x02') {
                    /* try { // try from 00796e90 to 00796e97 has its CatchHandler @ 00796f0c */
      (**(code **)(param_2[6] + 0x20))(param_2 + 9,param_2[7],param_2[8]);
    }
    goto LAB_00796e98;
  }
  uVar3 = 0;
LAB_00796c98:
                    /* try { // try from 00796c98 to 00796cc7 has its CatchHandler @ 00796fa8 */
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar3,param_4);
}


// ===== 00796fc0  <reqwest::proxy::[1]::reqwest::proxy::Proxy>::custom_http_auth =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::proxy::[1]::reqwest::proxy::Proxy>::custom_http_auth */

void __rustcall
<reqwest::proxy::[1]::reqwest::proxy::Proxy>::custom_http_auth
          (ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (*param_2 < 3) {
    puVar1 = param_2 + 6;
    if (param_2[1] == 1) {
      if ((char)param_2[10] != '\x02') {
                    /* try { // try from 00797010 to 00797017 has its CatchHandler @ 007970d8 */
        (**(code **)(param_2[6] + 0x20))(param_2 + 9,param_2[7],param_2[8]);
      }
    }
    else if ((char)param_2[10] != '\x02') {
                    /* try { // try from 00797034 to 0079703b has its CatchHandler @ 007970d4 */
      (**(code **)(param_2[6] + 0x20))(param_2 + 9,param_2[7],param_2[8]);
    }
  }
  else {
    if (*param_2 != 4) {
                    /* try { // try from 007970b4 to 007970cb has its CatchHandler @ 007970f0 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic(&DAT_002e2d6f,0xf,&PTR_s__root__cargo_registry_src_index__00adc6d8);
    }
    puVar1 = param_2 + 3;
    if ((char)param_2[7] != '\x02') {
                    /* try { // try from 00797064 to 0079706b has its CatchHandler @ 007970d0 */
      (**(code **)(param_2[3] + 0x20))(param_2 + 6,param_2[4],param_2[5]);
    }
  }
  uVar5 = param_3[1];
  uVar4 = *param_3;
  uVar3 = param_3[3];
  uVar2 = param_3[2];
  puVar1[4] = param_3[4];
  puVar1[1] = uVar5;
  *puVar1 = uVar4;
  puVar1[3] = uVar3;
  puVar1[2] = uVar2;
  uVar3 = param_2[0xd];
  uVar2 = param_2[0xc];
  uVar5 = param_2[0xf];
  uVar4 = param_2[0xe];
  param_1[0x10] = param_2[0x10];
  param_1[0xd] = uVar3;
  param_1[0xc] = uVar2;
  param_1[0xf] = uVar5;
  param_1[0xe] = uVar4;
  uVar2 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar4 = param_2[4];
  uVar3 = param_2[7];
  uVar2 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar4;
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  uVar2 = param_2[8];
  uVar4 = param_2[0xb];
  uVar3 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar2;
  param_1[0xb] = uVar4;
  param_1[10] = uVar3;
  return;
}


// ===== 00797120  FUN_00797120 =====

bool FUN_00797120(ulong *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  byte bVar8;
  byte bVar9;
  undefined8 uVar10;
  
  uVar6 = *param_1;
  if ((long)uVar6 < 3) {
    if (1 < uVar6) {
      return false;
    }
    return (char)param_1[10] != '\x02';
  }
  if (uVar6 != 3) {
    return true;
  }
  uVar6 = param_1[1];
  if (*(long *)(uVar6 + 0x28) != 0) {
    uVar5 = FUN_007c50d0(uVar6 + 0x30,&DAT_002bd0ac,4);
    lVar7 = 0;
    bVar8 = (byte)(uVar5 >> 0x39);
    lVar2 = *(long *)(uVar6 + 0x10);
    uVar3 = *(ulong *)(uVar6 + 0x18);
    uVar5 = uVar5 & uVar3;
    uVar10 = *(undefined8 *)(lVar2 + uVar5);
    uVar6 = NEON_cmeq(uVar10,CONCAT17(bVar8,CONCAT16(bVar8,CONCAT15(bVar8,CONCAT14(bVar8,CONCAT13(
                                                  bVar8,CONCAT12(bVar8,CONCAT11(bVar8,bVar8))))))),1
                     );
    while( true ) {
      for (uVar6 = uVar6 & 0x8080808080808080; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
        uVar4 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        lVar1 = lVar2 + (uVar5 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) & uVar3) *
                        -0x68;
        if ((*(long *)(lVar1 + -0x58) == 4) && (**(int **)(lVar1 + -0x60) == 0x70747468)) {
          return *(char *)(lVar1 + -8) != '\x02';
        }
      }
      uVar10 = NEON_cmeq(uVar10,0xffffffffffffffff,1);
      bVar9 = NEON_umaxv(uVar10,1);
      if ((bVar9 & 1) != 0) break;
      lVar7 = lVar7 + 8;
      uVar5 = uVar5 + lVar7 & uVar3;
      uVar10 = *(undefined8 *)(lVar2 + uVar5);
      uVar6 = NEON_cmeq(uVar10,CONCAT17(bVar8,CONCAT16(bVar8,CONCAT15(bVar8,CONCAT14(bVar8,CONCAT13(
                                                  bVar8,CONCAT12(bVar8,CONCAT11(bVar8,bVar8))))))),1
                       );
    }
  }
  return false;
}


// ===== 00797258  FUN_00797258 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00797258(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long local_f0;
  long *plStack_e8;
  undefined *local_e0;
  long lStack_d8;
  char *local_d0;
  long lStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  long local_b0;
  long lStack_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined *local_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long local_40;
  long lStack_38;
  undefined1 uStack_11;
  
  uVar5 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00bf8;
  if (uVar5 == 0) {
    uVar5 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00bf8);
    plVar4 = (long *)pthread_getspecific((pthread_key_t)uVar5);
  }
  else {
    plVar4 = (long *)pthread_getspecific((pthread_key_t)uVar5);
  }
  local_60 = PTR_DAT_00adc708;
  lStack_58 = _UNK_00adc710;
  lStack_50 = _DAT_00adc718;
  lStack_48 = _UNK_00adc720;
  if (plVar4 < (long *)0x2) {
    plVar4 = (long *)FUN_007bbf8c(uVar5 & 0xffffffff,plVar4,0);
    local_60 = PTR_DAT_00adc708;
    lStack_58 = _UNK_00adc710;
    lStack_50 = _DAT_00adc718;
    lStack_48 = _UNK_00adc720;
  }
  PTR_DAT_00adc708 = local_60;
  _UNK_00adc710 = lStack_58;
  _DAT_00adc718 = lStack_50;
  _UNK_00adc720 = lStack_48;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00adfa00);
  }
  lStack_38 = plVar4[1];
  local_40 = *plVar4;
  *plVar4 = *plVar4 + 1;
                    /* try { // try from 007972bc to 007974cf has its CatchHandler @ 007975e0 */
  iVar3 = FUN_00798c70(&local_60,&DAT_002bd0ac,4,&DAT_002e31ed,9);
  if ((iVar3 == 0) ||
     (uVar5 = FUN_00798c70(&local_60,&DAT_002e2d42,5,&DAT_002e31ed,9), (uVar5 & 1) == 0)) {
    FUN_00798c70(&local_60,&DAT_002bd0ac,4,&DAT_002e31f6,9);
    FUN_00798c70(&local_60,&DAT_002e2d42,5,&DAT_002e31f6,9);
  }
  std::sys::env::unix::getenv(&local_f0,&DAT_002e3265,0xe);
  if (local_f0 == -1) {
    uVar5 = FUN_00798c70(&local_60,&DAT_002bd0ac,4,&DAT_002e31ff,10);
    if ((uVar5 & 1) == 0) {
      FUN_00798c70(&local_60,&DAT_002bd0ac,4,&DAT_002e3209,10);
    }
  }
  else {
    if (local_f0 != 0) {
      free(plStack_e8);
    }
    puVar1 = PTR_MAX_LOG_LEVEL_FILTER_00b00c78;
    if (1 < *(ulong *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78) {
      local_f0 = 2;
      plStack_e8 = (long *)&DAT_002e3213;
      local_e0 = (undefined *)0xe;
      iVar3 = <log::__private_api::GlobalLogger_as_log::Log>::enabled(&uStack_11,&local_f0);
      if ((iVar3 != 0) && (std::sys::env::unix::getenv(&local_f0,&DAT_002e31ff,10), local_f0 != -1))
      {
        if (local_f0 != 0) {
          free(plStack_e8);
        }
        if (1 < *(ulong *)puVar1) {
          puStack_b8 = &DAT_002e3213;
          local_b0 = 0xe;
          local_f0 = 0;
          plStack_e8 = (long *)&DAT_002e3213;
          local_a0 = &DAT_002e3221;
          local_98 = 0x5d;
          lStack_d8 = _UNK_002a0aa8;
          local_e0 = (undefined *)_DAT_002a0aa0;
          lStack_c0 = _UNK_0029fdf8;
          lStack_c8 = _DAT_0029fdf0;
          local_d0 = 
          "/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/reqwest-0.12.15/src/proxy.rs";
          lStack_a8 = DAT_002a1728;
          <log::__private_api::GlobalLogger_as_log::Log>::log(&uStack_11,&local_f0);
        }
      }
    }
  }
  uVar5 = FUN_00798c70(&local_60,&DAT_002e2d42,5,&DAT_002e324f,0xb);
  if ((uVar5 & 1) == 0) {
    FUN_00798c70(&local_60,&DAT_002e2d42,5,&DAT_002e325a,0xb);
  }
  lStack_d8 = lStack_58;
  local_e0 = local_60;
  lStack_c8 = lStack_48;
  local_d0 = (char *)lStack_50;
  puStack_b8 = (undefined *)lStack_38;
  lStack_c0 = local_40;
  plStack_e8 = (long *)0x1;
  local_f0 = 1;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  plVar4 = (long *)FUN_004b25a4(0x40,8);
  lVar2 = local_f0;
  if (plVar4 != (long *)0x0) {
    local_f0 = 3;
    local_98 = 0xffffffffffffffff;
    plVar4[1] = (long)plStack_e8;
    *plVar4 = lVar2;
    plVar4[3] = lStack_d8;
    plVar4[2] = (long)local_e0;
    plVar4[5] = lStack_c8;
    plVar4[4] = (long)local_d0;
    plVar4[7] = (long)puStack_b8;
    plVar4[6] = lStack_c0;
                    /* try { // try from 00797524 to 0079752b has its CatchHandler @ 007975cc */
    plStack_e8 = plVar4;
    <reqwest::proxy::[3]::reqwest::proxy::NoProxy>::from_env(&local_60);
    param_1[0x10] = lStack_38;
    param_1[0xd] = lStack_50;
    param_1[0xc] = lStack_58;
    param_1[0xf] = local_40;
    param_1[0xe] = lStack_48;
    param_1[5] = lStack_c8;
    param_1[4] = (long)local_d0;
    param_1[7] = (long)puStack_b8;
    param_1[6] = lStack_c0;
    param_1[9] = lStack_a8;
    param_1[8] = local_b0;
    param_1[0xb] = (long)local_60;
    param_1[10] = (long)local_a0;
    param_1[1] = (long)plStack_e8;
    *param_1 = local_f0;
    param_1[3] = lStack_d8;
    param_1[2] = (long)local_e0;
    return;
  }
                    /* try { // try from 007975bc to 007975c7 has its CatchHandler @ 007975f4 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x40);
}


// ===== 0079760c  <reqwest::proxy::[1]::reqwest::proxy::Proxy>::no_proxy =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::proxy::[1]::reqwest::proxy::Proxy>::no_proxy */

void __rustcall
<reqwest::proxy::[1]::reqwest::proxy::Proxy>::no_proxy
          (undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  void *__ptr;
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar2 = param_2[0xb];
  if (lVar2 != -1) {
    if (lVar2 != 0) {
      free((void *)param_2[0xc]);
    }
    __ptr = (void *)param_2[0xf];
    lVar2 = param_2[0x10];
    if (lVar2 != 0) {
      puVar3 = (undefined8 *)((long)__ptr + 8);
      do {
        if (puVar3[-1] != 0) {
          free((void *)*puVar3);
        }
        lVar2 = lVar2 + -1;
        puVar3 = puVar3 + 3;
      } while (lVar2 != 0);
    }
    if (param_2[0xe] != 0) {
      free(__ptr);
    }
  }
  lVar5 = param_3[1];
  lVar2 = *param_3;
  lVar8 = param_3[3];
  lVar7 = param_3[2];
  lVar10 = param_3[4];
  param_2[0x10] = param_3[5];
  param_2[0xf] = lVar10;
  param_2[0xc] = lVar5;
  param_2[0xb] = lVar2;
  param_2[0xe] = lVar8;
  param_2[0xd] = lVar7;
  uVar4 = param_2[4];
  uVar9 = param_2[7];
  uVar6 = param_2[6];
  uVar1 = param_2[0x10];
  param_1[5] = param_2[5];
  param_1[4] = uVar4;
  param_1[7] = uVar9;
  param_1[6] = uVar6;
  uVar4 = *param_2;
  uVar9 = param_2[3];
  uVar6 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  param_1[3] = uVar9;
  param_1[2] = uVar6;
  uVar9 = param_2[8];
  uVar6 = param_2[0xb];
  uVar4 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar9;
  param_1[0xb] = uVar6;
  param_1[10] = uVar4;
  uVar9 = param_2[0xc];
  uVar6 = param_2[0xf];
  uVar4 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar9;
  param_1[0xf] = uVar6;
  param_1[0xe] = uVar4;
  param_1[0x10] = uVar1;
  return;
}


// ===== 007976f8  <reqwest::proxy::[3]::reqwest::proxy::NoProxy>::from_string =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::proxy::[3]::reqwest::proxy::NoProxy>::from_string */

void __rustcall
<reqwest::proxy::[3]::reqwest::proxy::NoProxy>::from_string
          (long *param_1,long param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined1 *__dest;
  ulong uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 *local_f0;
  long local_e8;
  long lStack_e0;
  long local_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  char local_b8;
  undefined7 uStack_b7;
  undefined8 uStack_b0;
  undefined2 local_a8;
  char local_a4;
  undefined7 uStack_a3;
  undefined8 uStack_9c;
  undefined1 local_94;
  
  if (param_3 == 0) {
    *param_1 = -1;
  }
  else {
    uVar8 = 1;
    local_e8 = 0;
    lStack_e0 = 1;
    local_d8 = 0;
    local_d0 = 0;
    lStack_c8 = 8;
    local_c0 = 0;
    uVar2 = 0;
    lVar9 = 0;
joined_r0x0079777c:
    do {
      uVar10 = uVar2;
      if (param_3 < uVar2) {
LAB_00797828:
        bVar1 = true;
        uVar4 = param_3;
        lVar7 = lVar9;
      }
      else {
        uVar10 = param_3;
        if (param_3 - uVar2 < 0x10) {
          uVar4 = 0;
          if (param_3 != uVar2) {
            do {
              if (*(char *)(param_2 + uVar2 + uVar4) == ',') goto LAB_007977f4;
              uVar4 = uVar4 + 1;
            } while (param_3 - uVar2 != uVar4);
            goto LAB_00797828;
          }
          auVar11 = ZEXT816(0);
        }
        else {
                    /* try { // try from 007977d4 to 007977e3 has its CatchHandler @ 00797a08 */
          auVar11 = core::slice::memchr::memchr_aligned(0x2c,param_2 + uVar2,param_3 - uVar2);
        }
        uVar4 = auVar11._8_8_;
        if (auVar11._0_8_ != 1) goto LAB_00797828;
LAB_007977f4:
        uVar4 = uVar4 + uVar2;
        uVar10 = uVar4 + 1;
        uVar2 = uVar10;
        if ((param_3 <= uVar4) || (*(char *)(param_2 + uVar4) != ',')) goto joined_r0x0079777c;
        bVar1 = false;
        lVar7 = uVar4 + 1;
      }
      auVar11 = FUN_00793d50(param_2 + lVar9,uVar4 - lVar9);
      puVar5 = auVar11._8_8_;
                    /* try { // try from 00797844 to 00797867 has its CatchHandler @ 00797a04 */
      <ipnet::ipnet::IpNet_as_core::str::traits::FromStr>::from_str(&local_b8);
      lVar3 = local_d8;
      uVar2 = uVar10;
      lVar9 = lVar7;
      if (local_b8 == '\x02') {
        <core::net::ip_addr::IpAddr_as_core::str::traits::FromStr>::from_str
                  (&local_a4,auVar11._0_8_,puVar5);
        lVar3 = local_d8;
        if (local_a4 == '\x02') {
          if ((long)puVar5 < 0) {
            uVar8 = 0;
LAB_007979a8:
                    /* try { // try from 007979a8 to 007979b3 has its CatchHandler @ 00797a0c */
                    /* WARNING: Subroutine does not return */
            alloc::raw_vec::handle_error(uVar8,local_f0);
          }
          if (puVar5 == (undefined1 *)0x0) {
            local_f0 = &DAT_00000001;
            if (local_c0 == local_d0) {
LAB_00797944:
                    /* try { // try from 00797944 to 0079794b has its CatchHandler @ 007979e8 */
              lVar7 = local_c0;
              <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<addr2line::function::FunctionAddress>>::
              grow_one(&local_d0);
              local_c0 = lVar7;
            }
          }
          else {
            __rustc::__rust_no_alloc_shim_is_unstable_v2();
            __dest = (undefined1 *)FUN_004b25a4(puVar5,1);
            local_f0 = puVar5;
            if (__dest == (undefined1 *)0x0) goto LAB_007979a8;
            memcpy(__dest,auVar11._0_8_,(size_t)puVar5);
            local_f0 = __dest;
            if (local_c0 == local_d0) goto LAB_00797944;
          }
          puVar6 = (undefined8 *)(lStack_c8 + local_c0 * 0x18);
          local_c0 = local_c0 + 1;
          *puVar6 = puVar5;
          puVar6[1] = local_f0;
          puVar6[2] = puVar5;
          if (bVar1) break;
          goto joined_r0x0079777c;
        }
        if (local_d8 == local_e8) {
          <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<reqwest::proxy::Ip>>::grow_one(&local_e8);
        }
        puVar5 = (undefined1 *)(lStack_e0 + lVar3 * 0x12);
        *puVar5 = 2;
        *(undefined8 *)(puVar5 + 9) = uStack_9c;
        *(ulong *)(puVar5 + 1) = CONCAT71(uStack_a3,local_a4);
        puVar5[0x11] = local_94;
      }
      else {
        if (local_d8 == local_e8) {
                    /* try { // try from 007978c8 to 007978eb has its CatchHandler @ 00797a04 */
          <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<reqwest::proxy::Ip>>::grow_one(&local_e8);
        }
        puVar6 = (undefined8 *)(lStack_e0 + lVar3 * 0x12);
        puVar6[1] = uStack_b0;
        *puVar6 = CONCAT71(uStack_b7,local_b8);
        *(undefined2 *)(puVar6 + 2) = local_a8;
      }
      local_d8 = lVar3 + 1;
    } while (!bVar1);
    param_1[1] = lStack_e0;
    *param_1 = local_e8;
    param_1[3] = local_d0;
    param_1[2] = local_d8;
    param_1[5] = local_c0;
    param_1[4] = lStack_c8;
  }
  return;
}


// ===== 00797a3c  <reqwest::proxy::[3]::reqwest::proxy::NoProxy>::from_env =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::proxy::[3]::reqwest::proxy::NoProxy>::from_env */

void __rustcall <reqwest::proxy::[3]::reqwest::proxy::NoProxy>::from_env(long *param_1)

{
  long lVar1;
  void *__ptr;
  long lVar2;
  long lVar3;
  long lVar4;
  void *__ptr_00;
  long local_80;
  long lStack_78;
  void *local_70;
  long lStack_68;
  long local_60;
  long lStack_58;
  void *local_50;
  long lStack_48;
  long local_40;
  long lStack_38;
  
  std::env::var::inner(&local_60,&DAT_002a1a40,8);
  __ptr_00 = local_50;
  lVar4 = lStack_58;
  lVar1 = lStack_58;
  __ptr = local_50;
  lVar2 = lStack_48;
  lVar3 = local_60;
                    /* try { // try from 00797a78 to 00797a8b has its CatchHandler @ 00797ba4 */
  if ((local_60 == 1) &&
     (std::env::var::inner(&local_80,&DAT_002a13c0,8), lVar1 = lStack_78, __ptr = local_70,
     lVar2 = lStack_68, lVar3 = local_80, lVar4 - 1U < 0xfffffffffffffffe)) {
    free(__ptr_00);
    lVar1 = lStack_78;
    __ptr = local_70;
    lVar2 = lStack_68;
    lVar3 = local_80;
  }
  if (lVar3 == 1) {
    if ((lVar1 != -1) && (lVar1 != 0)) {
      free(__ptr);
    }
  }
  else if (lVar1 != -1) {
                    /* try { // try from 00797af4 to 00797b03 has its CatchHandler @ 00797b98 */
    from_string(&local_60,__ptr,lVar2);
    if (local_60 == -1) {
      *param_1 = 0;
      param_1[1] = 1;
      param_1[3] = 0;
      param_1[2] = 0;
      param_1[4] = 8;
      param_1[5] = 0;
    }
    else {
      *param_1 = local_60;
      param_1[1] = lStack_58;
      param_1[3] = lStack_48;
      param_1[2] = (long)local_50;
      param_1[4] = local_40;
      param_1[5] = lStack_38;
    }
    if (lVar1 != 0) {
      free(__ptr);
      return;
    }
    return;
  }
  *param_1 = -1;
  return;
}


// ===== 00797bcc  <reqwest::proxy::[6]::reqwest::proxy::ProxyScheme>::parse =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::proxy::[6]::reqwest::proxy::ProxyScheme>::parse */

void __rustcall
<reqwest::proxy::[6]::reqwest::proxy::ProxyScheme>::parse(long *param_1,long *param_2)

{
  int *__s1;
  ulong uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar11;
  ulong __n;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  long local_180;
  long lStack_178;
  long local_170;
  long local_168;
  long lStack_160;
  long local_158;
  long lStack_150;
  long local_148;
  long lStack_140;
  long local_138;
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  long local_100;
  long lStack_f8;
  long local_f0;
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  long lStack_d0;
  long local_c8;
  long lStack_c0;
  long lStack_b8;
  long local_a8;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  long local_98;
  long lStack_90;
  long local_88;
  long local_80;
  void *local_78;
  undefined8 uStack_70;
  long local_68;
  void *local_60;
  undefined8 uStack_58;
  
  uVar2 = *(uint *)((long)param_2 + 0x2c);
  __n = (ulong)uVar2;
  if (uVar2 == 0) {
LAB_00797ca0:
                    /* try { // try from 00797ca0 to 00797d03 has its CatchHandler @ 00798088 */
    lVar11 = FUN_0076e4f4(0);
  }
  else {
    __s1 = (int *)param_2[1];
    uVar1 = param_2[2];
    if (__n < uVar1) {
      iVar9 = (int)*(char *)((long)__s1 + __n);
      if (iVar9 == -0x41 || iVar9 + 0x41 < 0 != SCARRY4(iVar9,0x41)) {
LAB_00797c10:
                    /* try { // try from 00797c10 to 00797c67 has its CatchHandler @ 00798088 */
                    /* WARNING: Subroutine does not return */
        core::str::slice_error_fail
                  (__s1,uVar1,0,__n,&PTR_s__root__cargo_registry_src_index__00adc968);
      }
    }
    else if (uVar1 != __n) goto LAB_00797c10;
    if (uVar2 == 5) {
      iVar9 = memcmp(__s1,&DAT_002e2d42,__n);
      if (iVar9 == 0) {
        <url[8e44a8feacbe3d30]::Url_as_core[bcece726f298455b]::ops::index::Index<core[bcece726f298455b]::ops::range::Range<url[8e44a8feacbe3d30]::slicing::Position>>>
        ::index(param_2,6,9,&PTR_s__root__cargo_registry_src_index__00adc690);
        local_e0 = CONCAT71(local_e0._1_7_,2);
                    /* try { // try from 00797d0c to 00797d13 has its CatchHandler @ 00798014 */
        <http::uri::authority::Authority_as_core::str::traits::FromStr>::from_str(&local_a8);
        if (local_a8 == 0) {
                    /* try { // try from 00797f38 to 00797f3f has its CatchHandler @ 00798014 */
          lVar11 = FUN_0076e1fc(0,extraout_x1_00,uStack_a0);
          if ((char)local_e0 != '\x02') {
                    /* try { // try from 00797f5c to 00797f6b has its CatchHandler @ 00798088 */
            (**(code **)(local_100 + 0x20))(&lStack_e8,lStack_f8,local_f0);
          }
          goto LAB_00797cb4;
        }
        local_180 = 1;
LAB_00797d24:
        lVar8 = lStack_90;
        lVar7 = local_98;
        lVar6 = local_a8;
        lVar5 = local_e0;
        lVar4 = lStack_e8;
        lVar3 = lStack_f8;
        lVar11 = local_100;
        local_170 = CONCAT71(uStack_9f,uStack_a0);
        lStack_160 = lStack_90;
        local_168 = local_98;
        lStack_150 = lStack_f8;
        local_158 = local_100;
        lStack_140 = lStack_e8;
        local_148 = local_f0;
        local_138 = local_e0;
        lStack_178 = local_a8;
                    /* try { // try from 00797d48 to 00797d6f has its CatchHandler @ 00798074 */
        auVar12 = <url::url::Url>::password(param_2);
        lVar10 = auVar12._0_8_;
        if (lVar10 != 0) {
          auVar13 = <url::url::Url>::username(param_2);
          <percent_encoding::[4]::percent_encoding::PercentDecode>::decode_utf8_lossy
                    (auStack_130,auVar13._0_8_,auVar13._0_8_ + auVar13._8_8_);
                    /* try { // try from 00797d70 to 00797d7f has its CatchHandler @ 00797ff0 */
          <percent_encoding::[4]::percent_encoding::PercentDecode>::decode_utf8_lossy
                    (auStack_118,lVar10,lVar10 + auVar12._8_8_);
          lStack_f8 = lVar6;
          lStack_e8 = lVar7;
          lStack_d8 = lVar11;
          local_e0 = lVar8;
          local_c8 = local_f0;
          lStack_d0 = lVar3;
          lStack_b8 = lVar5;
          lStack_c0 = lVar4;
          local_100 = local_180;
          local_f0 = local_170;
          if (local_180 == 1) {
                    /* try { // try from 00797da4 to 00797daf has its CatchHandler @ 00797fc8 */
            <alloc::string::String_as_core::convert::From<alloc::borrow::Cow<str>>>::from
                      (&local_80,auStack_130);
                    /* try { // try from 00797db4 to 00797dbf has its CatchHandler @ 00797fb4 */
            <alloc::string::String_as_core::convert::From<alloc::borrow::Cow<str>>>::from
                      (&local_68,auStack_118);
                    /* try { // try from 00797dc4 to 00797dd7 has its CatchHandler @ 00797f94 */
            FUN_007c3be4(&local_a8,local_78,uStack_70,local_60,uStack_58);
            if (local_68 != 0) {
              free(local_60);
            }
            if (local_80 != 0) {
              free(local_78);
            }
            if ((char)lStack_b8 != '\x02') {
                    /* try { // try from 00797e1c to 00797e23 has its CatchHandler @ 00797f74 */
              (**(code **)(lStack_d8 + 0x20))(&lStack_c0,lStack_d0,local_c8);
            }
          }
          else {
                    /* try { // try from 00797e28 to 00797e33 has its CatchHandler @ 00797fc8 */
            <alloc::string::String_as_core::convert::From<alloc::borrow::Cow<str>>>::from
                      (&local_80,auStack_130);
                    /* try { // try from 00797e38 to 00797e43 has its CatchHandler @ 00797fb0 */
            <alloc::string::String_as_core::convert::From<alloc::borrow::Cow<str>>>::from
                      (&local_68,auStack_118);
                    /* try { // try from 00797e48 to 00797e5b has its CatchHandler @ 00797f90 */
            FUN_007c3be4(&local_a8,local_78,uStack_70,local_60,uStack_58);
            if (local_68 != 0) {
              free(local_60);
            }
            if (local_80 != 0) {
              free(local_78);
            }
            if ((char)lStack_b8 != '\x02') {
                    /* try { // try from 00797ea0 to 00797ea7 has its CatchHandler @ 00797f70 */
              (**(code **)(lStack_d8 + 0x20))(&lStack_c0,lStack_d0,local_c8);
            }
          }
          lStack_150 = CONCAT71(uStack_9f,uStack_a0);
          lStack_b8 = local_88;
          lStack_d8 = local_a8;
          lStack_c0 = lStack_90;
          local_c8 = local_98;
          local_138 = local_88;
          lStack_140 = lStack_90;
          local_158 = local_a8;
          lStack_160 = local_e0;
          local_148 = local_98;
          lStack_178 = lStack_f8;
          local_180 = local_100;
          local_168 = lStack_e8;
          local_170 = local_f0;
        }
        param_1[9] = local_138;
        param_1[8] = lStack_140;
        param_1[5] = local_158;
        param_1[4] = lStack_160;
        param_1[7] = local_148;
        param_1[6] = lStack_150;
        param_1[1] = lStack_178;
        *param_1 = local_180;
        param_1[3] = local_168;
        param_1[2] = local_170;
        lVar11 = *param_2;
        goto joined_r0x00797cc0;
      }
      goto LAB_00797ca0;
    }
    if ((uVar2 != 4) || (*__s1 != 0x70747468)) goto LAB_00797ca0;
    <url[8e44a8feacbe3d30]::Url_as_core[bcece726f298455b]::ops::index::Index<core[bcece726f298455b]::ops::range::Range<url[8e44a8feacbe3d30]::slicing::Position>>>
    ::index(param_2,6,9,&PTR_s__root__cargo_registry_src_index__00adc6a8);
    local_e0 = CONCAT71(local_e0._1_7_,2);
                    /* try { // try from 00797c70 to 00797c77 has its CatchHandler @ 00798044 */
    <http::uri::authority::Authority_as_core::str::traits::FromStr>::from_str(&local_a8);
    if (local_a8 != 0) {
      local_180 = 0;
      goto LAB_00797d24;
    }
                    /* try { // try from 00797efc to 00797f03 has its CatchHandler @ 00798044 */
    lVar11 = FUN_0076e1fc(0,extraout_x1,uStack_a0);
    if ((char)local_e0 != '\x02') {
                    /* try { // try from 00797f20 to 00797f2f has its CatchHandler @ 00798088 */
      (**(code **)(local_100 + 0x20))(&lStack_e8,lStack_f8,local_f0);
    }
  }
LAB_00797cb4:
  *param_1 = 2;
  param_1[1] = lVar11;
  lVar11 = *param_2;
joined_r0x00797cc0:
  if (lVar11 != 0) {
    free((void *)param_2[1]);
  }
  return;
}


// ===== 007980a8  <reqwest::async_impl::request::reqwest::async_impl::request::RequestBuilder>::new =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::request::reqwest::async_impl::request::RequestBuilder>::new */

void __rustcall
<reqwest::async_impl::request::reqwest::async_impl::request::RequestBuilder>::new
          (void *param_1,undefined8 param_2,void *param_3)

{
  ushort *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  ushort uVar4;
  long lVar5;
  char cVar6;
  size_t __n;
  bool bVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined **ppuVar14;
  ulong uVar15;
  long *plVar16;
  uint uVar17;
  void *pvVar18;
  long *plVar19;
  undefined1 auVar20 [16];
  long local_528 [17];
  undefined1 auStack_4a0 [8];
  long local_498;
  ulong uStack_490;
  uint local_474;
  undefined8 local_418;
  void *local_410;
  long lStack_408;
  long lStack_400;
  void *pvStack_3f8;
  long local_3f0;
  long local_3e8;
  void *local_3e0;
  long lStack_3d8;
  long lStack_3d0;
  void *pvStack_3c8;
  long local_3c0;
  long local_3b8;
  void *local_3b0;
  long lStack_3a8;
  long local_270;
  void *pvStack_268;
  long lStack_260;
  void *pvStack_258;
  undefined8 local_250;
  long local_248;
  void *local_240;
  long lStack_238;
  long local_220 [4];
  long local_200;
  void *local_1f8;
  void *local_1f0;
  long local_1e8;
  void *local_1e0;
  long local_1d8;
  ulong local_1d0;
  ushort local_1c8;
  long local_130;
  void *pvStack_128;
  long lStack_120;
  void *pvStack_118;
  long local_110;
  long local_100;
  void *pvStack_f8;
  size_t local_f0;
  undefined8 uStack_e8;
  long local_e0;
  void *pvStack_d8;
  size_t sStack_d0;
  undefined8 uStack_c8;
  long local_c0;
  void *pvStack_b8;
  long local_b0;
  void *pvStack_a8;
  long local_a0;
  void *pvStack_98;
  long lStack_90;
  void *pvStack_88;
  long local_80;
  undefined1 auStack_71 [17];
  
  local_418 = param_2;
  memcpy(local_528,param_3,0x110);
  if (local_528[0] != 2) {
    uVar13 = (ulong)local_474;
    if (local_474 != 0) {
      if (uVar13 < uStack_490) {
        iVar8 = (int)*(char *)(local_498 + uVar13);
        if (iVar8 == -0x41 || iVar8 + 0x41 < 0 != SCARRY4(iVar8,0x41)) {
LAB_00798110:
                    /* try { // try from 00798110 to 00798193 has its CatchHandler @ 0079887c */
                    /* WARNING: Subroutine does not return */
          core::str::slice_error_fail();
        }
      }
      else if (uStack_490 != uVar13) goto LAB_00798110;
    }
    if ((2 < uStack_490 - uVar13) &&
       (*(short *)(local_498 + uVar13) == 0x2f3a && (char)((short *)(local_498 + uVar13))[1] == '/')
       ) {
      auVar20 = <url::url::Url>::username(auStack_4a0);
      <percent_encoding::[4]::percent_encoding::PercentDecode>::decode_utf8
                (&local_248,auVar20._0_8_,auVar20._0_8_ + auVar20._8_8_);
      if (local_248 != -2) {
        local_130 = local_248;
        lStack_120 = lStack_238;
        pvStack_128 = local_240;
        <alloc::string::String_as_core::convert::From<alloc::borrow::Cow<str>>>::from
                  (&local_270,&local_130);
                    /* try { // try from 00798194 to 007981eb has its CatchHandler @ 00798874 */
        auVar20 = <url::url::Url>::password(auStack_4a0);
        lVar10 = auVar20._0_8_;
        if ((lVar10 == 0) ||
           (<percent_encoding::[4]::percent_encoding::PercentDecode>::decode_utf8
                      (&local_3b8,lVar10,lVar10 + auVar20._8_8_), local_3b8 == -2)) {
          bVar7 = true;
          local_c0 = -1;
        }
        else {
          local_248 = local_3b8;
          lStack_238 = lStack_3a8;
          local_240 = local_3b0;
          <alloc::string::String_as_core::convert::From<alloc::borrow::Cow<str>>>::from
                    (&local_c0,&local_248);
          bVar7 = local_c0 == -1;
        }
        if ((lStack_260 == 0) && (bVar7)) {
          if (local_270 != 0) {
            free(pvStack_268);
          }
        }
        else {
                    /* try { // try from 0079821c to 0079823b has its CatchHandler @ 00798884 */
          uVar13 = <url::url::Url>::set_username(auStack_4a0,1,0);
          if ((uVar13 & 1) != 0) {
            ppuVar14 = &PTR_s__root__cargo_registry_src_index__00adc728;
            puVar12 = &DAT_002e3273;
LAB_007986e0:
                    /* try { // try from 007986e0 to 007986f3 has its CatchHandler @ 00798884 */
                    /* WARNING: Subroutine does not return */
            core::result::unwrap_failed(puVar12,0x2f,auStack_71,&DAT_00adc670,ppuVar14);
          }
          iVar8 = <url::url::Url>::set_password(auStack_4a0,0);
          if (iVar8 != 0) {
            ppuVar14 = &PTR_s__root__cargo_registry_src_index__00adc740;
            puVar12 = &DAT_002e32a2;
            goto LAB_007986e0;
          }
          lStack_408 = lStack_260;
          local_410 = pvStack_268;
          pvStack_3f8 = pvStack_b8;
          lStack_400 = local_c0;
          local_3f0 = local_b0;
          if (local_270 != -1) {
            local_3e8 = local_270;
            lStack_3d8 = lStack_260;
            local_3e0 = pvStack_268;
            pvStack_3c8 = pvStack_b8;
            lStack_3d0 = local_c0;
            local_3c0 = local_b0;
            memcpy(&local_3b8,local_528,0x118);
                    /* try { // try from 00798284 to 00798293 has its CatchHandler @ 007987e4 */
            FUN_007c38f4(&local_270,&local_3e8,&lStack_3d0);
            memcpy(&local_248,&local_3b8,0x118);
            if (local_248 == 2) {
              memcpy(param_1,&local_3b8,0x118);
              (**(code **)(local_270 + 0x20))(&pvStack_258,pvStack_268,lStack_260);
              return;
            }
            pvStack_f8 = _UNK_002bfad0;
            local_100 = _s__002bfac8;
            uStack_e8 = _UNK_002bfae0;
            local_f0 = _DAT_002bfad8;
            local_110 = CONCAT71((int7)((ulong)local_250 >> 8),1);
            pvStack_128 = pvStack_268;
            local_130 = local_270;
            pvStack_118 = pvStack_258;
            lStack_120 = lStack_260;
                    /* try { // try from 0079833c to 00798353 has its CatchHandler @ 00798800 */
            iVar8 = FUN_007c545c(local_220);
            if (iVar8 != 0) {
                    /* try { // try from 0079871c to 00798723 has its CatchHandler @ 007987dc */
              (**(code **)(local_130 + 0x20))(&pvStack_118,pvStack_128,lStack_120);
              if (local_100 != 0) {
                    /* try { // try from 00798738 to 00798777 has its CatchHandler @ 007987f8 */
                (**(code **)(local_100 + 0x20))(&uStack_e8,pvStack_f8,local_f0);
              }
LAB_00798740:
                    /* WARNING: Subroutine does not return */
              core::result::unwrap_failed
                        (&DAT_002e2d2b,0x17,auStack_71,&DAT_00adc630,
                         &PTR_s__root__cargo_registry_src_index__00adc5a0);
            }
            uVar9 = FUN_007c4738(local_220,&local_100);
            __n = local_f0;
            pvVar18 = pvStack_f8;
            lVar5 = local_100;
            uVar11 = local_1d0;
            lVar10 = local_1d8;
            uVar13 = 0;
            uVar15 = (ulong)(local_1c8 & uVar9);
            cVar6 = (char)pvStack_f8;
            do {
              if (uVar11 <= uVar15) {
                uVar15 = 0;
              }
              if (uVar11 == 0) {
                do {
                    /* WARNING: Do nothing block with infinite loop */
                } while( true );
              }
              puVar1 = (ushort *)(lVar10 + uVar15 * 4);
              pvStack_b8 = (void *)(ulong)*puVar1;
              if (pvStack_b8 == (void *)0xffff) {
                local_a0 = local_110;
                pvStack_d8 = pvStack_f8;
                local_e0 = local_100;
                uStack_c8 = uStack_e8;
                sStack_d0 = local_f0;
                pvStack_b8 = pvStack_128;
                local_c0 = local_130;
                pvStack_a8 = pvStack_118;
                local_b0 = lStack_120;
                    /* try { // try from 00798514 to 0079859b has its CatchHandler @ 007987f8 */
                uVar13 = FUN_00798b48(local_220,uVar9,&local_e0,&local_c0);
                if ((uVar13 & 1) != 0) goto LAB_00798740;
                if (local_1d0 <= uVar15) {
                    /* WARNING: Subroutine does not return */
                  core::panicking::panic_bounds_check
                            (uVar15,local_1d0,&PTR_s__root__cargo_registry_src_index__00adc5d0);
                }
                puVar2 = (undefined2 *)(local_1d8 + uVar15 * 4);
                *puVar2 = (short)local_1f8;
                puVar2[1] = (ushort)uVar9;
                goto LAB_0079854c;
              }
              uVar4 = puVar1[1];
              if (((ulong)((int)uVar15 - (uint)(uVar4 & local_1c8)) & (ulong)local_1c8) < uVar13) {
                bVar7 = local_220[0] != 2;
                local_a0 = local_110;
                pvStack_d8 = pvStack_f8;
                local_e0 = local_100;
                uStack_c8 = uStack_e8;
                sStack_d0 = local_f0;
                pvStack_b8 = pvStack_128;
                local_c0 = local_130;
                pvStack_a8 = pvStack_118;
                local_b0 = lStack_120;
                uVar11 = FUN_00798b48(local_220,uVar9,&local_e0,&local_c0);
                if ((uVar11 & 1) == 0) {
                  uVar11 = 0;
                  uVar3 = (uint)local_1f8 & 0xffff;
                  if (local_1d0 <= uVar15) {
                    uVar15 = 0;
                  }
                  while( true ) {
                    if (local_1d0 == 0) {
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    puVar1 = (ushort *)(local_1d8 + uVar15 * 4);
                    uVar17 = (uint)*puVar1;
                    uVar4 = (ushort)uVar9;
                    if (uVar17 == 0xffff) break;
                    uVar9 = (uint)puVar1[1];
                    *puVar1 = (ushort)uVar3;
                    uVar11 = uVar11 + 1;
                    puVar1[1] = uVar4;
                    uVar15 = uVar15 + 1;
                    uVar3 = uVar17;
                    if (local_1d0 <= uVar15) {
                      uVar15 = 0;
                    }
                  }
                  *puVar1 = (ushort)uVar3;
                  puVar1[1] = uVar4;
                  if ((0x7f < uVar11 || 0x1ff < uVar13 && bVar7) && (local_220[0] == 0)) {
                    local_220[0] = 1;
                  }
                  goto LAB_0079854c;
                }
                goto LAB_00798740;
              }
              if (uVar4 == (ushort)uVar9) {
                if (local_1f8 <= pvStack_b8) {
                    /* try { // try from 007986f8 to 00798707 has its CatchHandler @ 00798800 */
                    /* WARNING: Subroutine does not return */
                  core::panicking::panic_bounds_check
                            (pvStack_b8,local_1f8,&PTR_s__root__cargo_registry_src_index__00adc5b8);
                }
                plVar19 = (long *)(local_200 + (long)pvStack_b8 * 0x68);
                if ((lVar5 == 0) != (plVar19[8] != 0)) {
                  if (plVar19[8] == 0) {
                    if ((char)plVar19[9] == cVar6) goto LAB_00798448;
                  }
                  else if ((plVar19[10] == __n) &&
                          (iVar8 = memcmp((void *)plVar19[9],pvVar18,__n), iVar8 == 0))
                  goto LAB_00798448;
                }
              }
              uVar13 = uVar13 + 1;
              uVar15 = uVar15 + 1;
            } while( true );
          }
        }
      }
    }
  }
  plVar19 = local_528;
  goto LAB_007982e8;
LAB_00798448:
  pvStack_a8 = pvStack_b8;
  if (*plVar19 == 1) {
    pvVar18 = (void *)plVar19[2];
    local_80 = local_110;
    local_c0 = 1;
    pvStack_98 = pvStack_128;
    local_a0 = local_130;
    pvStack_88 = pvStack_118;
    lStack_90 = lStack_120;
    local_b0 = 0;
    pvStack_b8 = pvVar18;
    if (local_1e0 == local_1f0) {
                    /* try { // try from 0079848c to 00798493 has its CatchHandler @ 007987b4 */
      <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<http[b87e90c26fe47eb4]::header::map::ExtraValue<http[b87e90c26fe47eb4]::header::value::HeaderValue>>>
      ::grow_one(&local_1f0);
    }
    plVar16 = (long *)(local_1e8 + (long)local_1e0 * 0x48);
    lVar10 = (long)local_1e0 + 1;
    plVar16[1] = (long)pvStack_b8;
    *plVar16 = local_c0;
    plVar16[8] = local_80;
    plVar16[5] = (long)pvStack_98;
    plVar16[4] = local_a0;
    plVar16[7] = (long)pvStack_88;
    plVar16[6] = lStack_90;
    plVar16[3] = (long)pvStack_a8;
    plVar16[2] = local_b0;
    if (local_1e0 < pvVar18) {
      local_1e0 = (void *)lVar10;
                    /* try { // try from 0079877c to 0079878b has its CatchHandler @ 007987d8 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (pvVar18,lVar10,&PTR_s__root__cargo_registry_src_index__00adc618);
    }
    local_1e8 = local_1e8 + (long)pvVar18 * 0x48;
    *(undefined8 *)(local_1e8 + 0x10) = 1;
    *(void **)(local_1e8 + 0x18) = local_1e0;
    *plVar19 = 1;
    plVar19[2] = (long)local_1e0;
  }
  else {
    local_c0 = 0;
    local_80 = local_110;
    local_b0 = 0;
    pvStack_98 = pvStack_128;
    local_a0 = local_130;
    pvStack_88 = pvStack_118;
    lStack_90 = lStack_120;
    if (local_1e0 == local_1f0) {
                    /* try { // try from 00798654 to 0079865b has its CatchHandler @ 00798790 */
      <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<http[b87e90c26fe47eb4]::header::map::ExtraValue<http[b87e90c26fe47eb4]::header::value::HeaderValue>>>
      ::grow_one(&local_1f0);
    }
    plVar16 = (long *)(local_1e8 + (long)local_1e0 * 0x48);
    plVar16[1] = (long)pvStack_b8;
    *plVar16 = local_c0;
    plVar16[8] = local_80;
    plVar16[5] = (long)pvStack_98;
    plVar16[4] = local_a0;
    plVar16[7] = (long)pvStack_88;
    plVar16[6] = lStack_90;
    plVar16[3] = (long)pvStack_a8;
    plVar16[2] = local_b0;
    *plVar19 = 1;
    plVar19[1] = (long)local_1e0;
    plVar19[2] = (long)local_1e0;
  }
  local_1e0 = (void *)((long)local_1e0 + 1);
  if (local_100 != 0) {
                    /* try { // try from 007986b0 to 007986b7 has its CatchHandler @ 007987f8 */
    (**(code **)(local_100 + 0x20))(&uStack_e8,pvStack_f8,local_f0);
  }
LAB_0079854c:
  plVar19 = &local_248;
LAB_007982e8:
  memcpy(param_1,plVar19,0x118);
  return;
}


// ===== 007988c8  <reqwest::async_impl::request::reqwest::async_impl::request::RequestBuilder>::send =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::request::reqwest::async_impl::request::RequestBuilder>::send */

void __rustcall
<reqwest::async_impl::request::reqwest::async_impl::request::RequestBuilder>::send
          (undefined8 *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_140 [272];
  
  if (*param_2 == 2) {
    lVar4 = param_2[1];
    *param_1 = 2;
    param_1[1] = lVar4;
  }
  else {
    memcpy(auStack_140,param_2,0x110);
                    /* try { // try from 00798910 to 0079891f has its CatchHandler @ 00798968 */
    FUN_00781158(param_1,param_2 + 0x22,auStack_140);
  }
  plVar3 = (long *)param_2[0x22];
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
    <alloc::sync::[n]::alloc::sync::Arc<reqwest::async_impl::client::ClientRef>>::drop_slow
              (param_2 + 0x22);
    return;
  }
  return;
}


// ===== 0079899c  <reqwest::async_impl::request::reqwest::async_impl::request::RequestBuilder>::build =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::request::reqwest::async_impl::request::RequestBuilder>::build */

void __rustcall
<reqwest::async_impl::request::reqwest::async_impl::request::RequestBuilder>::build
          (void *param_1,void *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  memcpy(param_1,param_2,0x110);
  plVar3 = *(long **)((long)param_2 + 0x110);
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
    <alloc::sync::[n]::alloc::sync::Arc<reqwest::async_impl::client::ClientRef>>::drop_slow
              ((long)param_2 + 0x110);
    return;
  }
  return;
}


// ===== 007989f4  <reqwest::async_impl::request::reqwest::async_impl::request::RequestBuilder>::headers =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::request::reqwest::async_impl::request::RequestBuilder>::headers */

void __rustcall
<reqwest::async_impl::request::reqwest::async_impl::request::RequestBuilder>::headers
          (void *param_1,long *param_2,undefined8 *param_3)

{
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*param_2 == 2) {
    memcpy(param_1,param_2,0x118);
    FUN_00796498(param_3);
    return;
  }
  uStack_68 = param_3[5];
  local_70 = param_3[4];
  uStack_58 = param_3[7];
  uStack_60 = param_3[6];
  uStack_48 = param_3[9];
  local_50 = param_3[8];
  uStack_38 = param_3[0xb];
  uStack_40 = param_3[10];
  uStack_88 = param_3[1];
  local_90 = *param_3;
  uStack_78 = param_3[3];
  uStack_80 = param_3[2];
                    /* try { // try from 00798a60 to 00798a6b has its CatchHandler @ 00798a90 */
  FUN_007c62e8(param_2 + 5,&local_90);
  memcpy(param_1,param_2,0x118);
  return;
}


// ===== 00798aa8  <reqwest::async_impl::request::reqwest::async_impl::request::RequestBuilder>::try_clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::request::reqwest::async_impl::request::RequestBuilder>::try_clone */

void __rustcall
<reqwest::async_impl::request::reqwest::async_impl::request::RequestBuilder>::try_clone
          (undefined8 *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long local_140 [34];
  
  if ((*param_2 == 2) ||
     (<reqwest::async_impl::request::reqwest::async_impl::request::Request>::try_clone(local_140),
     local_140[0] == 2)) {
    *param_1 = 0xffffffffffffffff;
    return;
  }
  plVar4 = (long *)param_2[0x22];
  do {
    lVar5 = *plVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (-1 < lVar5) {
    lVar5 = param_2[0x22];
    memcpy(param_1,local_140,0x110);
    param_1[0x22] = lVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x798b48);
  (*pcVar3)();
}


// ===== 00798b48  FUN_00798b48 =====

bool FUN_00798b48(long param_1,undefined2 param_2,long *param_3,long *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined6 uStack_36;
  
  uVar3 = *(ulong *)(param_1 + 0x28);
  if (uVar3 >> 0xf == 0) {
    lVar6 = param_3[1];
    lVar4 = *param_3;
    lVar9 = param_3[3];
    lVar8 = param_3[2];
    lVar1 = param_4[4];
    lVar11 = param_4[1];
    lVar10 = *param_4;
    lVar7 = param_4[3];
    lVar5 = param_4[2];
    if (uVar3 == *(ulong *)(param_1 + 0x18)) {
                    /* try { // try from 00798bd0 to 00798bd3 has its CatchHandler @ 00798c34 */
      <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<http[b87e90c26fe47eb4]::header::map::Bucket<http[b87e90c26fe47eb4]::header::value::HeaderValue>>>
      ::grow_one();
    }
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x20) + uVar3 * 0x68);
    puVar2[3] = lVar10;
    puVar2[2] = uStack_88;
    puVar2[5] = lVar5;
    puVar2[4] = lVar11;
    puVar2[1] = uStack_90;
    *puVar2 = 0;
    puVar2[0xc] = CONCAT62(uStack_36,param_2);
    puVar2[9] = lVar6;
    puVar2[8] = lVar4;
    puVar2[0xb] = lVar9;
    puVar2[10] = lVar8;
    puVar2[7] = lVar1;
    puVar2[6] = lVar7;
    *(ulong *)(param_1 + 0x28) = uVar3 + 1;
  }
  else {
                    /* try { // try from 00798b78 to 00798b7f has its CatchHandler @ 00798c48 */
    (**(code **)(*param_4 + 0x20))(param_4 + 3,param_4[1],param_4[2]);
    if (*param_3 != 0) {
      (**(code **)(*param_3 + 0x20))(param_3 + 3,param_3[1],param_3[2]);
    }
  }
  return (uVar3 & 0xffffffffffff8000) != 0;
}


// ===== 00798c70  FUN_00798c70 =====

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_00798c70(undefined8 param_1,void *param_2,size_t param_3,undefined8 param_4,undefined8 param_5)

{
  void ****ppppvVar1;
  void ****ppppvVar2;
  void *__dest;
  undefined8 uVar3;
  long extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  code *pcVar4;
  char *pcVar5;
  void ****ppppvVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint local_288 [2];
  long local_280;
  void ****local_278;
  void ****ppppvStack_270;
  void ****local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  long local_218;
  void *local_210;
  undefined8 uStack_208;
  size_t local_200;
  void *pvStack_1f8;
  size_t local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  void ****local_1b0;
  void ****ppppvStack_1a8;
  size_t local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  void ****local_150 [2];
  undefined8 local_140;
  undefined8 local_130;
  void ****local_128;
  void ****local_120;
  size_t local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  code ****local_d0;
  void ****ppppvStack_c8;
  size_t local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  std::env::var::inner(local_288,param_4,param_5);
  if ((local_288[0] & 1) != 0) {
    if (local_280 == -1) {
      return 0;
    }
joined_r0x00798d64:
    if (local_280 != 0) {
      free(local_278);
    }
    return 0;
  }
  FUN_00793d50(local_278,ppppvStack_270);
  if (extraout_x1 == 0) goto joined_r0x00798d64;
  local_130 = 0;
  local_150[0] = (void ****)0x0;
  local_140 = 0;
                    /* try { // try from 00798cec to 00798d93 has its CatchHandler @ 00799114 */
  <url::url::ParseOptions>::parse(&local_128,local_150,local_278,ppppvStack_270);
  if (local_128 == (void ****)0xffffffffffffffff) {
    auVar7 = FUN_0076e118(0,extraout_x1_00,(ulong)local_120 & 0xff);
  }
  else {
    uStack_88 = uStack_e0;
    local_90 = local_e8;
    uVar3 = local_90;
    local_80 = local_d8;
    local_90._0_1_ = (char)local_e8;
    uStack_a8 = uStack_100;
    local_b0 = local_108;
    uStack_98 = uStack_f0;
    local_a0 = local_f8;
    uStack_b8 = uStack_110;
    local_c0 = local_118;
    local_d0 = (code ****)local_128;
    ppppvStack_c8 = local_120;
    local_90 = uVar3;
    if ((char)local_90 != '\0') {
      local_1b0 = local_128;
      ppppvStack_1a8 = local_120;
      local_160 = local_d8;
      uStack_178 = uStack_f0;
      local_180 = local_f8;
      uStack_168 = uStack_e0;
      local_170 = local_e8;
LAB_00798fa0:
                    /* try { // try from 00798fa4 to 00798faf has its CatchHandler @ 00799114 */
      local_1a0 = local_118;
      uStack_198 = uStack_110;
      local_190 = local_108;
      uStack_188 = uStack_100;
      <reqwest::proxy::[6]::reqwest::proxy::ProxyScheme>::parse(&local_268,&local_1b0);
      ppppvVar1 = local_268;
      if (local_280 != 0) {
        free(local_278);
      }
      if (ppppvVar1 != (void ****)0x2) {
        uStack_188 = uStack_240;
        local_190 = local_248;
        uStack_178 = uStack_230;
        local_180 = local_238;
        uStack_168 = uStack_220;
        local_170 = local_228;
        ppppvStack_1a8 = (void ****)uStack_260;
        local_1b0 = local_268;
        uStack_198 = uStack_250;
        local_1a0 = local_258;
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        __dest = (void *)FUN_004b25a4(param_3,1);
        if (__dest == (void *)0x0) {
                    /* try { // try from 007990b8 to 007990c3 has its CatchHandler @ 007990e0 */
                    /* WARNING: Subroutine does not return */
          alloc::raw_vec::handle_error(1,param_3);
        }
        memcpy(__dest,param_2,param_3);
        uStack_a8 = uStack_240;
        local_b0 = local_248;
        uStack_98 = uStack_230;
        local_a0 = local_238;
        uStack_88 = uStack_220;
        local_90 = local_228;
        ppppvStack_c8 = (void ****)uStack_260;
        local_d0 = (code ****)local_268;
        uStack_b8 = uStack_250;
        local_c0 = local_258;
        local_200 = param_3;
        pvStack_1f8 = __dest;
        local_1f0 = param_3;
        FUN_007b2d40(&local_128,param_1,&local_200,&local_d0);
        if (local_128 != (void ****)0x2) {
          FUN_00796068(&local_128);
        }
        return 1;
      }
      goto LAB_00798fd0;
    }
    auVar7 = FUN_00772be0(&local_d0);
  }
  ppppvVar1 = auVar7._0_8_;
  if (ppppvVar1[0xb] != (void ***)0x0) {
    auVar8._8_8_ = ppppvVar1[0xc];
    auVar8._0_8_ = ppppvVar1[0xb];
    local_150[0] = ppppvVar1;
    do {
      pcVar5 = auVar8._0_8_;
      pcVar4 = *(code **)(auVar8._8_8_ + 0x38);
                    /* try { // try from 00798df8 to 00798e4b has its CatchHandler @ 00799120 */
      (*pcVar4)(&local_d0,pcVar5);
      if (ppppvStack_c8 == (void ****)0xd9d3eed8e8d2b646 &&
          local_d0 == (code ****)0xc21ec0368b42692b) {
        if (*pcVar5 == '\x06') {
LAB_00798e88:
          local_d0 = (code ****)&local_128;
          local_128 = local_278;
          local_120 = ppppvStack_270;
          ppppvStack_c8 = (void ****)FUN_00782f80;
                    /* try { // try from 00798ea0 to 00798eb3 has its CatchHandler @ 007990dc */
          alloc::fmt::format::format_inner(&local_218,&DAT_002b35c8,&local_d0);
          local_b0 = 0;
          local_d0 = (code ****)0x0;
          local_c0 = 0;
                    /* try { // try from 00798ec4 to 00798f4b has its CatchHandler @ 007990f4 */
          <url::url::ParseOptions>::parse(&local_128,&local_d0,local_210,uStack_208);
          if (local_128 == (void ****)0xffffffffffffffff) {
            ppppvVar2 = (void ****)FUN_0076e118(0,extraout_x1_01,(ulong)local_120 & 0xff);
LAB_00798f4c:
            ppppvVar6 = (void ****)0xffffffffffffffff;
          }
          else {
            uStack_88 = uStack_e0;
            local_90 = local_e8;
            uVar3 = local_90;
            local_80 = local_d8;
            local_90._0_1_ = (char)local_e8;
            uStack_a8 = uStack_100;
            local_b0 = local_108;
            uStack_98 = uStack_f0;
            local_a0 = local_f8;
            uStack_b8 = uStack_110;
            local_c0 = local_118;
            local_d0 = (code ****)local_128;
            ppppvStack_c8 = local_120;
            local_90 = uVar3;
            if ((char)local_90 == '\0') {
              ppppvVar2 = (void ****)FUN_00772be0(&local_d0);
              goto LAB_00798f4c;
            }
            local_1c0 = local_d8;
            uStack_1d8 = uStack_f0;
            local_1e0 = local_f8;
            uStack_1c8 = uStack_e0;
            uStack_1d0 = local_e8;
            pvStack_1f8 = uStack_110;
            local_200 = local_118;
            uStack_1e8 = uStack_100;
            local_1f0 = local_108;
            ppppvVar2 = local_120;
            ppppvVar6 = local_128;
          }
          if (local_218 != 0) {
            free(local_210);
          }
          local_128 = ppppvVar1;
          if (ppppvVar6 == (void ****)0xffffffffffffffff) {
            local_d0 = (code ****)ppppvVar2;
                    /* try { // try from 007990a0 to 007990a7 has its CatchHandler @ 007990c8 */
            uVar3 = FUN_0076def8(0);
                    /* try { // try from 007990a8 to 007990b3 has its CatchHandler @ 00799110 */
            FUN_00795f7c(&local_d0);
            goto LAB_00798e68;
          }
                    /* try { // try from 00798f78 to 00798f7f has its CatchHandler @ 00799110 */
          FUN_00795f7c(&local_128);
          local_160 = local_1c0;
          uStack_178 = uStack_1d8;
          local_180 = local_1e0;
          uStack_168 = uStack_1c8;
          local_170 = uStack_1d0;
          local_108 = local_1f0;
          uStack_100 = uStack_1e8;
          local_118 = local_200;
          uStack_110 = pvStack_1f8;
          local_1b0 = ppppvVar6;
          ppppvStack_1a8 = ppppvVar2;
          goto LAB_00798fa0;
        }
      }
      else {
        (*pcVar4)(&local_d0,pcVar5);
        if (ppppvStack_c8 == (void ****)0xa7c7fca9cf3f4d09 &&
            local_d0 == (code ****)0x8d6c4bb4ef6907c9) goto LAB_00798e88;
      }
      auVar8 = (**(code **)(auVar8._8_8_ + 0x30))(pcVar5);
      auVar7._8_8_ = auVar8._8_8_;
      auVar7._0_8_ = local_150[0];
    } while (auVar8._0_8_ != 0);
  }
                    /* try { // try from 00798e58 to 00798e63 has its CatchHandler @ 00799110 */
  local_150[0] = auVar7._0_8_;
  uVar3 = FUN_0076def8(0,auVar7._8_8_,ppppvVar1);
LAB_00798e68:
  local_268 = (void ****)0x2;
  uStack_260 = uVar3;
  if (local_280 != 0) {
    free(local_278);
  }
LAB_00798fd0:
  FUN_00795f7c(&uStack_260);
  return 0;
}


// ===== 0079914c  <reqwest::async_impl::request::Request_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::request::Request as core::fmt::Debug>::fmt */

void __rustcall
<reqwest::async_impl::request::Request_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_002e32e1,7);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (auStack_30,&DAT_002e32d1,6,param_1 + 0xf0,&PTR_FUN_00adc758);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar1,&DAT_002e32d7,3,param_1 + 0x88,&PTR_FUN_00adc778);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (uVar1,&DAT_002e32da,7,param_1 + 0x28,&PTR_FUN_00adc798);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 007991e8  <reqwest::async_impl::request::RequestBuilder_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::request::RequestBuilder as core::fmt::Debug>::fmt */

void __rustcall
<reqwest::async_impl::request::RequestBuilder_as_core::fmt::Debug>::fmt
          (long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_002e32e8,0xe);
  if (*param_1 == 2) {
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (auStack_30,&DAT_002e32f6,5,param_1 + 1,&PTR_FUN_00adc7b8);
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
    return;
  }
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (auStack_30,&DAT_002e32d1,6,param_1 + 0x1e,&PTR_FUN_00adc758);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar1,&DAT_002e32d7,3,param_1 + 0x11,&PTR_FUN_00adc778);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (uVar1,&DAT_002e32da,7,param_1 + 5,&PTR_FUN_00adc798);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 007992c4  FUN_007992c4 =====

void FUN_007992c4(long *param_1,undefined8 *param_2)

{
  long *local_28;
  long **local_20;
  code *pcStack_18;
  
  local_28 = (long *)*param_1 + 1;
  if (*(long *)*param_1 == 1) {
    local_20 = &local_28;
    pcStack_18 = FUN_007c75f4;
    core::fmt::write(*param_2,param_2[1],&DAT_002bad6d,&local_20);
    return;
  }
  local_20 = &local_28;
  pcStack_18 = FUN_007c75f4;
  core::fmt::write(*param_2,param_2[1],&DAT_002b35c8,&local_20);
  return;
}


// ===== 00799348  FUN_00799348 =====

void FUN_00799348(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,&DAT_002e33d4,0xd,&local_18,&DAT_00adc9e0);
  return;
}


// ===== 0079938c  FUN_0079938c =====

void FUN_0079938c(undefined8 *param_1,undefined8 param_2)

{
  char *local_18;
  
  local_18 = (char *)*param_1;
  if (*local_18 == '\x02') {
    local_18 = local_18 + 1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002e330f,7,&local_18,&DAT_00adc980);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,&DAT_002e3316,7,&local_18,&DAT_00adc9a0);
  return;
}


// ===== 00799408  FUN_00799408 =====

void FUN_00799408(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  lVar2 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple(auStack_38,param_2,&DAT_002e32fb,5);
  uVar1 = <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field
                    (auStack_38,lVar2,&PTR_FUN_00adc7f0);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field
            (uVar1,lVar2 + 0x58,&PTR_FUN_00adc810);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::finish();
  return;
}


// ===== 0079946c  FUN_0079946c =====

void FUN_0079946c(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002e330e,1);
  return;
}


// ===== 00799480  FUN_00799480 =====

void FUN_00799480(long *param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = *param_1 + 0x18;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
            (param_2,&DAT_002e33e1,7,&DAT_002e33e8,3,*param_1,&PTR_FUN_00adca00,&DAT_002e33eb,7,
             &local_18,&DAT_00adca20);
  return;
}


// ===== 007994f0  FUN_007994f0 =====

void FUN_007994f0(undefined8 *param_1)

{
  <rustls::enums::ContentType_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 007994f8  FUN_007994f8 =====

void FUN_007994f8(undefined8 *param_1)

{
  <rustls::enums::HandshakeType_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 00799500  FUN_00799500 =====

void FUN_00799500(undefined8 *param_1)

{
  <rustls::enums::AlertDescription_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 00799508  FUN_00799508 =====

void FUN_00799508(long *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt
            (*(undefined8 *)(*param_1 + 8),*(undefined8 *)(*param_1 + 0x10),param_2);
  return;
}


// ===== 0079951c  FUN_0079951c =====

void FUN_0079951c(undefined8 *param_1)

{
  <core::net::ip_addr::IpAddr_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 00799524  FUN_00799524 =====

void FUN_00799524(undefined8 *param_1)

{
  <core::net::ip_addr::Ipv4Addr_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 0079952c  FUN_0079952c =====

void FUN_0079952c(undefined8 *param_1)

{
  <core::net::ip_addr::Ipv6Addr_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 00799534  <reqwest::proxy::Proxy_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::proxy::Proxy as core::fmt::Debug>::fmt */

void __rustcall <reqwest::proxy::Proxy_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple(auStack_38,param_2,&DAT_002e32fb,5);
  uVar1 = <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field
                    (auStack_38,param_1,&PTR_FUN_00adc7f0);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field
            (uVar1,param_1 + 0x58,&PTR_FUN_00adc810);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::finish();
  return;
}


// ===== 0079959c  FUN_0079959c =====

void FUN_0079959c(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  undefined1 auStack_c8 [16];
  long local_b8;
  ulong uStack_b0;
  undefined1 local_a4 [4];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 auStack_80 [28];
  undefined4 local_64;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_c8,param_2,&DAT_002e3300,3);
  lVar1 = *(long *)(param_1 + 8);
  uVar2 = *(ulong *)(param_1 + 0x10);
  uVar3 = *(uint *)(param_1 + 0x2c);
  uStack_b0 = (ulong)uVar3;
  if (uVar3 != 0) {
    if (uStack_b0 < uVar2) {
      iVar6 = (int)*(char *)(lVar1 + uStack_b0);
      if (iVar6 == -0x41 || iVar6 + 0x41 < 0 != SCARRY4(iVar6,0x41)) {
LAB_007995f0:
                    /* WARNING: Subroutine does not return */
        core::str::slice_error_fail
                  (lVar1,uVar2,0,uStack_b0,&PTR_s__root__cargo_registry_src_index__00adc968);
      }
    }
    else if (uVar2 != uStack_b0) goto LAB_007995f0;
  }
  local_b8 = lVar1;
  uVar4 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (auStack_c8,&DAT_002e3303,6,&local_b8,&DAT_00adc830);
  uVar5 = (ulong)(uVar3 + 1);
  if (uVar3 != 0xffffffff) {
    if (uVar5 < uVar2) {
      iVar6 = (int)*(char *)(lVar1 + uVar5);
      if (iVar6 != -0x41 && iVar6 + 0x41 < 0 == SCARRY4(iVar6,0x41)) goto LAB_0079966c;
    }
    else if (uVar2 == uVar5) goto LAB_0079966c;
                    /* WARNING: Subroutine does not return */
    core::str::slice_error_fail
              (lVar1,uVar2,uVar5,uVar2,&PTR_s__root__cargo_registry_src_index__00adc950);
  }
LAB_0079966c:
  if (uVar2 == uVar5) {
    local_a4[0] = true;
  }
  else {
    local_a4[0] = *(char *)(lVar1 + uVar5) != '/';
  }
  uVar4 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar4,&DAT_0029f1c0,0x10,local_a4,&DAT_00adc850);
  local_a0 = <url::url::Url>::username(param_1);
  uVar4 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar4,&DAT_002a1858,8,local_a0,&DAT_00adc830);
  local_90 = <url::url::Url>::password(param_1);
  uVar4 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar4,&DAT_002a19f0,8,local_90,&DAT_00adc870);
  <url::url::Url>::host(auStack_80,param_1);
  uVar4 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar4,&DAT_002e2fbd,4,auStack_80,&DAT_00adc890);
  local_64 = *(undefined4 *)(param_1 + 0x28);
  uVar4 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar4,&DAT_002bd12c,4,&local_64,&DAT_00adc8b0);
  local_60 = <url::url::Url>::path(param_1);
  uVar4 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar4,&DAT_002bd17c,4,local_60,&DAT_00adc830);
  local_50 = <url::url::Url>::query(param_1);
  uVar4 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar4,&DAT_002e3309,5,local_50,&DAT_00adc870);
  local_40 = <url::url::Url>::fragment(param_1);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (uVar4,&DAT_002a11a0,8,local_40,&DAT_00adc870);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00799800  <&alloc::string::String_as_reqwest::into_url::IntoUrlSealed>::into_url =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&alloc::string::String as reqwest::into_url::IntoUrlSealed>::into_url */

void __rustcall
<&alloc::string::String_as_reqwest::into_url::IntoUrlSealed>::into_url(long *param_1,long param_2)

{
  long lVar1;
  undefined8 extraout_x1;
  long local_d0;
  undefined1 local_c8;
  undefined7 uStack_c7;
  long local_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long local_80;
  long local_78 [2];
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  long local_48;
  long lStack_40;
  long local_38;
  long lStack_30;
  long local_28;
  
  local_58 = 0;
  local_78[0] = 0;
  local_68 = 0;
  <url::url::ParseOptions>::parse
            (&local_d0,local_78,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  if (local_d0 == -1) {
    lVar1 = FUN_0076e118(0,extraout_x1,local_c8);
    *param_1 = -1;
    param_1[1] = lVar1;
    return;
  }
  lStack_50 = lStack_a8;
  local_58 = lStack_b0;
  local_28 = local_80;
  lStack_60 = lStack_b8;
  local_68 = local_c0;
  lStack_40 = lStack_98;
  local_48 = local_a0;
  lStack_30 = lStack_88;
  local_38 = lStack_90;
  lVar1 = local_38;
  local_38._0_1_ = (char)lStack_90;
  local_78[0] = local_d0;
  if ((char)local_38 != '\0') {
    param_1[5] = lStack_a8;
    param_1[4] = lStack_b0;
    param_1[7] = lStack_98;
    param_1[6] = local_a0;
    param_1[9] = lStack_88;
    param_1[8] = lStack_90;
    param_1[10] = local_80;
    param_1[1] = CONCAT71(uStack_c7,local_c8);
    *param_1 = local_d0;
    param_1[3] = lStack_b8;
    param_1[2] = local_c0;
    return;
  }
  local_38 = lVar1;
  lVar1 = FUN_00772be0(local_78);
  *param_1 = -1;
  param_1[1] = lVar1;
  return;
}


// ===== 007998e4  <alloc::string::String_as_reqwest::into_url::IntoUrlSealed>::into_url =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::string::String as reqwest::into_url::IntoUrlSealed>::into_url */

void __rustcall
<alloc::string::String_as_reqwest::into_url::IntoUrlSealed>::into_url(long *param_1,long *param_2)

{
  void *__ptr;
  undefined8 extraout_x1;
  long lVar1;
  long local_e0;
  undefined1 local_d8;
  undefined7 uStack_d7;
  long local_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long local_90;
  long local_88 [2];
  long local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  long local_48;
  long lStack_40;
  long local_38;
  
  __ptr = (void *)param_2[1];
  local_68 = 0;
  local_88[0] = 0;
  local_78 = 0;
                    /* try { // try from 00799910 to 007999b3 has its CatchHandler @ 007999e0 */
  <url::url::ParseOptions>::parse(&local_e0,local_88,__ptr,param_2[2]);
  if (local_e0 == -1) {
    lVar1 = FUN_0076e118(0,extraout_x1,local_d8);
  }
  else {
    lStack_60 = lStack_b8;
    local_68 = lStack_c0;
    local_38 = local_90;
    lStack_70 = lStack_c8;
    local_78 = local_d0;
    lStack_50 = lStack_a8;
    local_58 = local_b0;
    lStack_40 = lStack_98;
    local_48 = lStack_a0;
    lVar1 = local_48;
    local_48._0_1_ = (char)lStack_a0;
    local_88[0] = local_e0;
    if ((char)local_48 != '\0') {
      param_1[5] = lStack_b8;
      param_1[4] = lStack_c0;
      param_1[7] = lStack_a8;
      param_1[6] = local_b0;
      param_1[9] = lStack_98;
      param_1[8] = lStack_a0;
      param_1[10] = local_90;
      param_1[1] = CONCAT71(uStack_d7,local_d8);
      *param_1 = local_e0;
      param_1[3] = lStack_c8;
      param_1[2] = local_d0;
      lVar1 = *param_2;
      goto joined_r0x007999c0;
    }
    local_48 = lVar1;
    lVar1 = FUN_00772be0(local_88);
  }
  *param_1 = -1;
  param_1[1] = lVar1;
  lVar1 = *param_2;
joined_r0x007999c0:
  if (lVar1 == 0) {
    return;
  }
  free(__ptr);
  return;
}


// ===== 00799a00  FUN_00799a00 =====

void FUN_00799a00(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *param_1;
  iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::drop_join_handle_fast
                    (uVar2);
  if (iVar1 != 0) {
    <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::drop_join_handle_slow(uVar2);
    return;
  }
  return;
}


// ===== 00799a38  <reqwest::proxy::ProxyScheme_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::proxy::ProxyScheme as core::fmt::Debug>::fmt */

void __rustcall
<reqwest::proxy::ProxyScheme_as_core::fmt::Debug>::fmt(long *param_1,undefined8 *param_2)

{
  long *local_28;
  long **local_20;
  code *pcStack_18;
  
  local_28 = param_1 + 1;
  if (*param_1 == 1) {
    local_20 = &local_28;
    pcStack_18 = FUN_007c75f4;
    core::fmt::write(*param_2,param_2[1],&DAT_002bad6d,&local_20);
    return;
  }
  local_20 = &local_28;
  pcStack_18 = FUN_007c75f4;
  core::fmt::write(*param_2,param_2[1],&DAT_002b35c8,&local_20);
  return;
}


// ===== 00799ab8  FUN_00799ab8 =====

void FUN_00799ab8(char *param_1,undefined8 param_2)

{
  char *local_18;
  
  if (*param_1 != -1) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00adc8d0);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 00799b14  FUN_00799b14 =====

void FUN_00799b14(long *param_1,undefined8 param_2)

{
  long *local_18;
  
  if (*param_1 != -1) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00adc8f0);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 00799b70  FUN_00799b70 =====

void FUN_00799b70(long *param_1,undefined8 param_2)

{
  long *local_18;
  
  if (*param_1 != 0) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00adc910);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 00799bc8  FUN_00799bc8 =====

void FUN_00799bc8(short *param_1,undefined8 param_2)

{
  short *local_18;
  
  if (*param_1 == 1) {
    local_18 = param_1 + 1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00adc930);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 00799c28  <reqwest::proxy::Custom_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::proxy::Custom as core::fmt::Debug>::fmt */

void __rustcall
<reqwest::proxy::Custom_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002e330e,1);
  return;
}


// ===== 00799c3c  <bool_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <bool_as_core::fmt::Display>::fmt(void)

{
  (*(code *)PTR_fmt_00b02798)();
  return;
}


// ===== 00799c40  FUN_00799c40 =====

void FUN_00799c40(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,&DAT_002e331d,9,&local_18,&DAT_00adc9c0);
  return;
}


// ===== 00799c80  FUN_00799c80 =====

void FUN_00799c80(byte *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,&DAT_002e3828 + *(int *)(&DAT_002e3828 + (ulong)*param_1 * 4),
             *(undefined8 *)(&DAT_002e37d8 + (ulong)*param_1 * 8));
  return;
}


// ===== 00799ca8  FUN_00799ca8 =====

void FUN_00799ca8(undefined8 *param_1,long *param_2)

{
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined7 uStack_57;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*param_2 == 1) {
    if ((char)param_2[9] == '\x02') {
      local_58 = 2;
    }
    else {
      (**(code **)param_2[5])(&local_78,param_2 + 8,param_2[6],param_2[7]);
      local_58 = (undefined1)param_2[9];
    }
                    /* try { // try from 00799d24 to 00799d2f has its CatchHandler @ 00799e0c */
    (**(code **)param_2[1])(&local_50,param_2 + 4,param_2[2],param_2[3]);
    *param_1 = 1;
    param_1[2] = uStack_48;
    param_1[1] = local_50;
    param_1[4] = uStack_38;
    param_1[3] = uStack_40;
    param_1[6] = uStack_70;
    param_1[5] = local_78;
    param_1[8] = uStack_60;
    param_1[7] = local_68;
    param_1[9] = CONCAT71(uStack_57,local_58);
    return;
  }
  if ((char)param_2[9] == '\x02') {
    local_58 = 2;
  }
  else {
    (**(code **)param_2[5])(&local_78,param_2 + 8,param_2[6],param_2[7]);
    local_58 = (undefined1)param_2[9];
  }
                    /* try { // try from 00799d9c to 00799da7 has its CatchHandler @ 00799de4 */
  (**(code **)param_2[1])(&local_50,param_2 + 4,param_2[2],param_2[3]);
  *param_1 = 0;
  param_1[8] = uStack_60;
  param_1[7] = local_68;
  param_1[2] = uStack_48;
  param_1[1] = local_50;
  param_1[4] = uStack_38;
  param_1[3] = uStack_40;
  param_1[6] = uStack_70;
  param_1[5] = local_78;
  param_1[9] = CONCAT71(uStack_57,local_58);
  return;
}


// ===== 00799e3c  FUN_00799e3c =====

void FUN_00799e3c(long *param_1,undefined8 param_2)

{
  long lVar1;
  long *local_18;
  
  local_18 = param_1 + 1;
  lVar1 = *param_1;
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
                (param_2,&DAT_002e33f2,3,&local_18,&DAT_00adca40);
      return;
    }
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd164,4,&local_18,&DAT_00adca40);
    return;
  }
  if (lVar1 != 2) {
    if (lVar1 == 3) {
      <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
                (param_2,&DAT_002e33fa,6,&local_18,&DAT_00adca60);
      return;
    }
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002e3400,6,&local_18,&DAT_00adca80);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,&DAT_002e33f5,5,&local_18,&DAT_00adca40);
  return;
}


// ===== 00799f4c  FUN_00799f4c =====

void FUN_00799f4c(long param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


// ===== 00799f60  FUN_00799f60 =====

void FUN_00799f60(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,&DAT_002e3406,2);
  return;
}


// ===== 00799f74  FUN_00799f74 =====

undefined8 FUN_00799f74(void)

{
  return 0;
}


// ===== 00799f7c  FUN_00799f7c =====

undefined1  [16] FUN_00799f7c(ulong param_1,ulong param_2,long param_3)

{
  int *piVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if ((param_1 & 1) != 0) {
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = 1;
    return auVar6;
  }
  uVar2 = *(uint *)(param_3 + 0x2c);
  uVar4 = (ulong)uVar2;
  if (uVar2 != 0) {
    piVar1 = *(int **)(param_3 + 8);
    param_2 = *(ulong *)(param_3 + 0x10);
    if (uVar4 < param_2) {
      iVar5 = (int)*(char *)((long)piVar1 + uVar4);
      if (iVar5 == -0x41 || iVar5 + 0x41 < 0 != SCARRY4(iVar5,0x41)) {
LAB_00799fa8:
                    /* WARNING: Subroutine does not return */
        core::str::slice_error_fail
                  (piVar1,param_2,0,uVar4,&PTR_s__root__cargo_registry_src_index__00adcda8);
      }
    }
    else if (param_2 != uVar4) goto LAB_00799fa8;
    if ((int)uVar2 < 4) {
      if (uVar2 == 2) {
        if ((short)*piVar1 == 0x7377) {
LAB_0079a058:
          auVar8._8_8_ = 0x50;
          auVar8._0_8_ = 1;
          return auVar8;
        }
      }
      else if (uVar2 == 3) {
        if ((short)*piVar1 == 0x7377 && *(char *)((long)piVar1 + 2) == 's') goto LAB_0079a08c;
        if ((short)*piVar1 == 0x7466 && *(char *)((long)piVar1 + 2) == 'p') {
          auVar7._8_8_ = 0x15;
          auVar7._0_8_ = 1;
          return auVar7;
        }
      }
    }
    else if (uVar2 == 5) {
      if (*piVar1 == 0x70747468 && (char)piVar1[1] == 's') {
LAB_0079a08c:
        auVar9._8_8_ = 0x1bb;
        auVar9._0_8_ = 1;
        return auVar9;
      }
    }
    else if ((uVar2 == 4) && (*piVar1 == 0x70747468)) goto LAB_0079a058;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2;
  return auVar3 << 0x40;
}


// ===== 0079a098  FUN_0079a098 =====

void FUN_0079a098(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 uStack_11;
  
  uStack_40 = *param_4;
  local_38 = param_4[1];
  puVar1 = (undefined8 *)param_4[4];
  local_58 = *puVar1;
  uStack_50 = puVar1[1];
  uStack_2c = *(undefined4 *)(puVar1 + 2);
  uStack_70 = param_4[2];
  local_68 = param_4[3];
  local_78 = 0;
  uStack_60 = 0;
  local_30 = 1;
  local_48 = param_3;
  local_28 = param_1;
  uStack_20 = param_2;
  <log::__private_api::GlobalLogger_as_log::Log>::log(&uStack_11,&local_78);
  return;
}


// ===== 0079a0f0  FUN_0079a0f0 =====

void FUN_0079a0f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_148 [256];
  ulong local_48;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  while( true ) {
    FUN_0079bf6c(auStack_148,uVar1,uVar2);
    if (0xfffffffffffffffd < local_48) break;
                    /* try { // try from 0079a128 to 0079a12f has its CatchHandler @ 0079a158 */
    <tokio::sync::mpsc::unbounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::add_permit
              (uVar3);
    FUN_0079a3dc(auStack_148);
  }
  FUN_0079a3dc(auStack_148);
  return;
}


// ===== 0079a170  FUN_0079a170 =====

void FUN_0079a170(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 4;
    *(undefined4 *)(plVar5 + 8) = 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(char *)plVar1 = '\x01';
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((char)lVar4 == '\0') {
      lVar4 = plVar5[2];
      plVar5[2] = 0;
      *(undefined4 *)(plVar5 + 4) = 0;
      if (lVar4 != 0) {
                    /* try { // try from 0079a1c4 to 0079a1c7 has its CatchHandler @ 0079a244 */
        (**(code **)(lVar4 + 8))(plVar5[3]);
      }
    }
    plVar1 = plVar5 + 7;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(char *)plVar1 = '\x01';
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((char)lVar4 == '\0') {
      lVar4 = plVar5[5];
      plVar5[5] = 0;
      if (lVar4 != 0) {
                    /* try { // try from 0079a1f0 to 0079a1f3 has its CatchHandler @ 0079a234 */
        (**(code **)(lVar4 + 0x18))(plVar5[6]);
      }
      *(undefined4 *)plVar1 = 0;
    }
    do {
      lVar4 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<futures_channel::oneshot::Inner<core::convert::Infallible>>>
      ::drop_slow(param_1);
      return;
    }
  }
  return;
}


// ===== 0079a274  FUN_0079a274 =====

void FUN_0079a274(long *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  if (*param_1 != 0) {
    plVar5 = (long *)param_1[1];
    if (plVar5 != (long *)0x0) {
                    /* try { // try from 0079a298 to 0079a2bb has its CatchHandler @ 0079a2f8 */
      uVar3 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(plVar5 + 6);
      if ((uVar3 & 5) == 1) {
        (**(code **)(plVar5[4] + 0x10))(plVar5[5]);
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
        <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::oneshot::Inner<core[bcece726f298455b]::result::Result<http[b87e90c26fe47eb4]::response::Response<hyper[9f1bfd30b08ca095]::body::incoming::Incoming>,hyper[9f1bfd30b08ca095]::client::dispatch::TrySendError<http[b87e90c26fe47eb4]::request::Request<reqwest[6fed810f3e38d558]::async_impl::body::Body>>>>>>
        ::drop_slow(param_1 + 1);
        return;
      }
    }
  }
  return;
}


// ===== 0079a328  FUN_0079a328 =====

void FUN_0079a328(long *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  if (*param_1 != 0) {
    plVar5 = (long *)param_1[1];
    if (plVar5 != (long *)0x0) {
                    /* try { // try from 0079a34c to 0079a36f has its CatchHandler @ 0079a3ac */
      uVar3 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(plVar5 + 0x18);
      if ((uVar3 & 5) == 1) {
        (**(code **)(plVar5[0x16] + 0x10))(plVar5[0x17]);
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
        <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::oneshot::Inner<core[bcece726f298455b]::result::Result<http[b87e90c26fe47eb4]::response::Response<hyper[9f1bfd30b08ca095]::body::incoming::Incoming>,hyper[9f1bfd30b08ca095]::error::Error>>>>
        ::drop_slow(param_1 + 1);
        return;
      }
    }
  }
  return;
}


// ===== 0079a3dc  FUN_0079a3dc =====

void FUN_0079a3dc(long param_1)

{
  if (*(ulong *)(param_1 + 0x100) < 0xfffffffffffffffe) {
                    /* try { // try from 0079a3f4 to 0079a3fb has its CatchHandler @ 0079a440 */
    FUN_007a6ccc();
    if (*(long *)(param_1 + 0x100) != 2) {
                    /* try { // try from 0079a414 to 0079a41b has its CatchHandler @ 0079a42c */
      FUN_0079a864(param_1);
      FUN_0079ae54(param_1 + 0x100);
      return;
    }
  }
  return;
}


// ===== 0079a458  FUN_0079a458 =====

void FUN_0079a458(long *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  if (*param_1 != 0) {
    if (param_1[1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x0079a488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1[1] + 0x20))(param_1 + 4,param_1[2],param_1[3]);
      return;
    }
    __ptr = (void *)param_1[2];
    puVar1 = (undefined8 *)param_1[3];
    pcVar2 = (code *)*puVar1;
    if (pcVar2 != (code *)0x0) {
                    /* try { // try from 0079a498 to 0079a49f has its CatchHandler @ 0079a4c8 */
      (*pcVar2)(__ptr);
    }
    if (puVar1[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 0079a4ec  FUN_0079a4ec =====

void FUN_0079a4ec(long param_1)

{
  if (*(long *)(param_1 + 0x100) == 2) {
    return;
  }
                    /* try { // try from 0079a510 to 0079a517 has its CatchHandler @ 0079a528 */
  FUN_0079a864();
  FUN_0079ae54(param_1 + 0x100);
  return;
}


// ===== 0079a540  FUN_0079a540 =====

void FUN_0079a540(long *param_1)

{
  code *pcVar1;
  undefined8 *__ptr;
  void *__ptr_00;
  undefined8 *puVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 == -2) {
    FUN_0079a910(param_1 + 1);
    return;
  }
  __ptr = (undefined8 *)param_1[0x20];
  __ptr_00 = (void *)*__ptr;
  if (__ptr_00 != (void *)0x0) {
    puVar2 = (undefined8 *)__ptr[1];
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
                    /* try { // try from 0079a594 to 0079a59b has its CatchHandler @ 0079a5f4 */
      (*pcVar1)(__ptr_00);
    }
    if (puVar2[1] != 0) {
      free(__ptr_00);
    }
  }
  free(__ptr);
  if (lVar3 != -1) {
    FUN_0079a864(param_1);
    return;
  }
  return;
}


// ===== 0079a63c  FUN_0079a63c =====

void FUN_0079a63c(long *param_1)

{
  code *pcVar1;
  undefined8 *__ptr;
  void *__ptr_00;
  undefined8 *puVar2;
  
  if (*param_1 != -1) {
    FUN_0079a910();
    return;
  }
  __ptr = (undefined8 *)param_1[1];
  __ptr_00 = (void *)*__ptr;
  if (__ptr_00 != (void *)0x0) {
    puVar2 = (undefined8 *)__ptr[1];
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
                    /* try { // try from 0079a680 to 0079a687 has its CatchHandler @ 0079a6b8 */
      (*pcVar1)(__ptr_00);
    }
    if (puVar2[1] != 0) {
      free(__ptr_00);
    }
  }
  free(__ptr);
  return;
}


// ===== 0079a6ec  FUN_0079a6ec =====

void FUN_0079a6ec(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 0079a6fc to 0079a6ff has its CatchHandler @ 0079a73c */
  FUN_0079377c();
  plVar3 = (long *)*param_1;
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
      <alloc::sync::[n]::alloc::sync::Arc<futures_channel::mpsc::BoundedInner<core::result::Result<bytes::bytes::Bytes,hyper::error::Error>>>>
      ::drop_slow(param_1);
      return;
    }
  }
  return;
}


// ===== 0079a774  FUN_0079a774 =====

void FUN_0079a774(long *param_1)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = *param_1;
  pcVar1 = (char *)(lVar7 + 0x88);
  *(undefined4 *)(lVar7 + 0xa8) = 1;
  do {
    cVar2 = *pcVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar5) {
      *pcVar1 = '\x01';
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (cVar2 == '\0') {
    lVar3 = *(long *)(lVar7 + 0x78);
    *(undefined8 *)(lVar7 + 0x78) = 0;
    *(undefined4 *)(lVar7 + 0x88) = 0;
    if (lVar3 != 0) {
                    /* try { // try from 0079a7c0 to 0079a7f7 has its CatchHandler @ 0079a830 */
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar7 + 0x80));
    }
  }
  pcVar1 = (char *)(lVar7 + 0xa0);
  do {
    cVar2 = *pcVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar5) {
      *pcVar1 = '\x01';
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (cVar2 == '\0') {
    lVar3 = *(long *)(lVar7 + 0x90);
    *(undefined8 *)(lVar7 + 0x90) = 0;
    *(undefined4 *)(lVar7 + 0xa0) = 0;
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 8))(*(undefined8 *)(lVar7 + 0x98));
    }
  }
  plVar6 = (long *)*param_1;
  do {
    lVar7 = *plVar6;
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar5) {
      *plVar6 = lVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar7 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<futures_channel::oneshot::Inner<http::header::map::HeaderMap>>>
    ::drop_slow(param_1);
    return;
  }
  return;
}


// ===== 0079a864  FUN_0079a864 =====

void FUN_0079a864(long param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
                    /* try { // try from 0079a874 to 0079a877 has its CatchHandler @ 0079a8f8 */
  FUN_0079b82c();
  if (*(long *)(param_1 + 0xe0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0079a894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0xe0) + 0x20))
              (param_1 + 0xf8,*(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0xf0));
    return;
  }
  __ptr = *(void **)(param_1 + 0xe8);
  puVar1 = *(undefined8 **)(param_1 + 0xf0);
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
                    /* try { // try from 0079a8a4 to 0079a8ab has its CatchHandler @ 0079a8d4 */
    (*pcVar2)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0079a910  FUN_0079a910 =====

void FUN_0079a910(long param_1)

{
  void *__ptr;
  
                    /* try { // try from 0079a920 to 0079a923 has its CatchHandler @ 0079a970 */
  FUN_0079bb48();
  __ptr = *(void **)(param_1 + 0x60);
  if (__ptr != (void *)0x0) {
                    /* try { // try from 0079a92c to 0079a933 has its CatchHandler @ 0079a954 */
    FUN_007b3bec(__ptr);
    free(__ptr);
  }
  FUN_0079b970(param_1 + 0x70);
  return;
}


// ===== 0079a998  FUN_0079a998 =====

void FUN_0079a998(long *param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  lVar1 = (long)__ptr + 0x38;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 0079a9d4 to 0079a9d7 has its CatchHandler @ 0079aa20 */
    (**(code **)(*(long *)(lVar1 + -0x18) + 0x20))
              (lVar1,*(undefined8 *)(lVar1 + -0x10),*(undefined8 *)(lVar1 + -8));
    lVar1 = lVar1 + 0x48;
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0079aa74  FUN_0079aa74 =====

void FUN_0079aa74(undefined8 *param_1)

{
  void *__ptr;
  char cVar1;
  long extraout_x1;
  
  cVar1 = *(char *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = 0;
  if (cVar1 != '\x01') {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00adcc80);
  }
  __ptr = (void *)param_1[2];
  alloc::sync::arcinner_layout_for_value_layout(*param_1,param_1[1]);
  if (extraout_x1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0079aad0  FUN_0079aad0 =====

void FUN_0079aad0(void *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  
  if (param_1 != (void *)0xffffffffffffffff) {
    plVar1 = (long *)((long)param_1 + 8);
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 + -1 == 0) {
      DataMemoryBarrier(2,1);
      uVar2 = *(ulong *)(param_2 + 0x10);
      if (uVar2 < 9) {
        uVar2 = 8;
      }
      if ((*(long *)(param_2 + 8) + uVar2 + 0xf & -uVar2) != 0) {
        free(param_1);
        return;
      }
    }
  }
  return;
}


// ===== 0079ab20  FUN_0079ab20 =====

void FUN_0079ab20(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x30);
  if ((uVar1 & 1) != 0) {
                    /* try { // try from 0079ab38 to 0079ab4b has its CatchHandler @ 0079ab74 */
    <tokio::sync::oneshot::tokio::sync::oneshot::Task>::drop_task(param_1 + 0x20);
  }
  if (((uint)uVar1 >> 3 & 1) != 0) {
    <tokio::sync::oneshot::tokio::sync::oneshot::Task>::drop_task(param_1 + 0x10);
  }
  if (*(long *)(param_1 + 0x38) == -3) {
    return;
  }
  FUN_0079a540((long *)(param_1 + 0x38));
  return;
}


// ===== 0079ab98  FUN_0079ab98 =====

void FUN_0079ab98(long param_1)

{
  ulong uVar1;
  void *__ptr;
  void *pvVar2;
  undefined1 auStack_148 [256];
  ulong local_48;
  
  do {
                    /* try { // try from 0079abb0 to 0079abcb has its CatchHandler @ 0079ac18 */
    FUN_0079bf6c(auStack_148,param_1 + 0x1a0,param_1 + 0x80);
    uVar1 = local_48;
    FUN_0079a3dc(auStack_148);
  } while (uVar1 < 0xfffffffffffffffe);
  __ptr = *(void **)(param_1 + 0x1a8);
  do {
    pvVar2 = *(void **)((long)__ptr + 0x2308);
    free(__ptr);
    __ptr = pvVar2;
  } while (pvVar2 != (void *)0x0);
  if (*(long *)(param_1 + 0x100) != 0) {
    (**(code **)(*(long *)(param_1 + 0x100) + 0x18))(*(undefined8 *)(param_1 + 0x108));
  }
  return;
}


// ===== 0079ac3c  FUN_0079ac3c =====

void FUN_0079ac3c(long param_1)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  
  __ptr = *(void **)(param_1 + 0x18);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)((long)__ptr + 0x20);
    do {
      if ((puVar2[-4] != -1) && (puVar2[-4] != 0)) {
        free((void *)puVar2[-3]);
      }
      if ((puVar2[-1] != -1) && (puVar2[-1] != 0)) {
        free((void *)*puVar2);
      }
      if (((ulong)puVar2[2] < 0xfffffffffffffffe) && (puVar2[2] != 0)) {
        free((void *)puVar2[3]);
      }
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 9;
    } while (lVar1 != 0);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0079acfc  FUN_0079acfc =====

void FUN_0079acfc(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
                    /* try { // try from 0079ad14 to 0079ad3b has its CatchHandler @ 0079ad78 */
    uVar3 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(plVar5 + 6);
    if ((uVar3 & 5) == 1) {
      (**(code **)(plVar5[4] + 0x10))(plVar5[5]);
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
      <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::oneshot::Inner<core[bcece726f298455b]::result::Result<http[b87e90c26fe47eb4]::response::Response<hyper[9f1bfd30b08ca095]::body::incoming::Incoming>,hyper[9f1bfd30b08ca095]::client::dispatch::TrySendError<http[b87e90c26fe47eb4]::request::Request<reqwest[6fed810f3e38d558]::async_impl::body::Body>>>>>>
      ::drop_slow(param_1);
      return;
    }
  }
  return;
}


// ===== 0079ada8  FUN_0079ada8 =====

void FUN_0079ada8(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
                    /* try { // try from 0079adc0 to 0079ade7 has its CatchHandler @ 0079ae24 */
    uVar3 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(plVar5 + 0x18);
    if ((uVar3 & 5) == 1) {
      (**(code **)(plVar5[0x16] + 0x10))(plVar5[0x17]);
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
      <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::oneshot::Inner<core[bcece726f298455b]::result::Result<http[b87e90c26fe47eb4]::response::Response<hyper[9f1bfd30b08ca095]::body::incoming::Incoming>,hyper[9f1bfd30b08ca095]::error::Error>>>>
      ::drop_slow(param_1);
      return;
    }
  }
  return;
}


// ===== 0079ae54  FUN_0079ae54 =====

void FUN_0079ae54(long *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
                    /* try { // try from 0079ae68 to 0079ae6b has its CatchHandler @ 0079af9c */
  FUN_007a6df0();
  if (*param_1 == 0) {
    if (param_1[1] != 0) {
      plVar5 = (long *)param_1[2];
      if (plVar5 != (long *)0x0) {
                    /* try { // try from 0079aee4 to 0079af07 has its CatchHandler @ 0079af44 */
        uVar3 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(plVar5 + 6);
        if ((uVar3 & 5) == 1) {
          (**(code **)(plVar5[4] + 0x10))(plVar5[5]);
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
          <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::oneshot::Inner<core[bcece726f298455b]::result::Result<http[b87e90c26fe47eb4]::response::Response<hyper[9f1bfd30b08ca095]::body::incoming::Incoming>,hyper[9f1bfd30b08ca095]::client::dispatch::TrySendError<http[b87e90c26fe47eb4]::request::Request<reqwest[6fed810f3e38d558]::async_impl::body::Body>>>>>>
          ::drop_slow(param_1 + 2);
          return;
        }
      }
    }
  }
  else if (param_1[1] != 0) {
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
                    /* try { // try from 0079ae84 to 0079aea7 has its CatchHandler @ 0079af70 */
      uVar3 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(plVar5 + 0x18);
      if ((uVar3 & 5) == 1) {
        (**(code **)(plVar5[0x16] + 0x10))(plVar5[0x17]);
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
        <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::oneshot::Inner<core[bcece726f298455b]::result::Result<http[b87e90c26fe47eb4]::response::Response<hyper[9f1bfd30b08ca095]::body::incoming::Incoming>,hyper[9f1bfd30b08ca095]::error::Error>>>>
        ::drop_slow(param_1 + 2);
        return;
      }
    }
  }
  return;
}


// ===== 0079afc8  FUN_0079afc8 =====

void FUN_0079afc8(long param_1)

{
                    /* try { // try from 0079afd8 to 0079afdb has its CatchHandler @ 0079b020 */
  FUN_007a6ccc();
  if (*(long *)(param_1 + 0x100) == 2) {
    return;
  }
                    /* try { // try from 0079aff4 to 0079affb has its CatchHandler @ 0079b00c */
  FUN_0079a864(param_1);
  FUN_0079ae54(param_1 + 0x100);
  return;
}


// ===== 0079b038  FUN_0079b038 =====

void FUN_0079b038(long param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  
  if (*(int *)(param_1 + 0x48) == -2) {
    __ptr = *(void **)(param_1 + 0x50);
    puVar1 = *(undefined8 **)(param_1 + 0x58);
    pcVar4 = (code *)*puVar1;
    if (pcVar4 != (code *)0x0) {
                    /* try { // try from 0079b064 to 0079b06b has its CatchHandler @ 0079b2ac */
      (*pcVar4)(__ptr);
    }
    if (puVar1[1] != 0) {
      free(__ptr);
    }
  }
  else {
    plVar5 = *(long **)(param_1 + 0x78);
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 0079b0a4 to 0079b0a7 has its CatchHandler @ 0079b1e8 */
      <alloc::sync::[n]::alloc::sync::Arc<hyper_util::client::legacy::connect::http::Config>>::
      drop_slow();
    }
    plVar5 = *(long **)(param_1 + 0x80);
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 0079b0c8 to 0079b0cb has its CatchHandler @ 0079b1e0 */
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
      drop_slow();
    }
    plVar5 = *(long **)(param_1 + 0x90);
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 0079b0ec to 0079b0ef has its CatchHandler @ 0079b1d8 */
      <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow();
    }
    plVar5 = *(long **)(param_1 + 0x98);
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 0079b110 to 0079b113 has its CatchHandler @ 0079b1d0 */
      <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow();
    }
    plVar5 = *(long **)(param_1 + 0xa0);
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 0079b134 to 0079b137 has its CatchHandler @ 0079b1c8 */
      <alloc::sync::[n]::alloc::sync::Arc<alloc::vec::Vec<reqwest::proxy::Proxy>>>::drop_slow();
    }
    if (*(char *)(param_1 + 0x70) != '\x02') {
                    /* try { // try from 0079b150 to 0079b157 has its CatchHandler @ 0079b1c0 */
      (**(code **)(*(long *)(param_1 + 0x50) + 0x20))
                (param_1 + 0x68,*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60));
    }
  }
  plVar5 = *(long **)(param_1 + 0xb0);
  do {
    lVar6 = *plVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0079b178 to 0079b17b has its CatchHandler @ 0079b2f4 */
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
    drop_slow();
  }
  plVar5 = *(long **)(param_1 + 0xc0);
  if (plVar5 != (long *)0x0) {
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::sync::poison::mutex::Mutex<hyper_util[52a210df7efc1bae]::client::legacy::pool::PoolInner<hyper_util[52a210df7efc1bae]::client::legacy::client::PoolClient<reqwest[6fed810f3e38d558]::async_impl::body::Body>,(http[b87e90c26fe47eb4]::uri::scheme::Scheme,http[b87e90c26fe47eb4]::uri::authority::Authority)>>>>
      ::drop_slow((undefined8 *)(param_1 + 0xc0));
      return;
    }
  }
  return;
}


// ===== 0079b32c  FUN_0079b32c =====

void FUN_0079b32c(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
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
                    /* try { // try from 0079b358 to 0079b35f has its CatchHandler @ 0079b370 */
    <alloc::sync::[n]::alloc::sync::Arc<want::Inner>>::drop_slow(param_1);
  }
  FUN_0079b388(param_1 + 1);
  return;
}


// ===== 0079b388  FUN_0079b388 =====

void FUN_0079b388(undefined8 *param_1)

{
  long *plVar1;
  ulong *puVar2;
  long *plVar3;
  ulong *puVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  
  plVar14 = (long *)*param_1;
  plVar1 = plVar14 + 0x39;
  do {
    lVar12 = *plVar1;
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar12 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (lVar12 + -1 == 0) {
    plVar1 = plVar14 + 0x10;
    puVar2 = (ulong *)(plVar14 + 0x11);
    do {
      uVar11 = *puVar2;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar8) {
        *puVar2 = uVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar12 = *plVar1;
    uVar15 = uVar11 & 0xffffffffffffffe0;
    uVar7 = uVar15 - *(long *)(lVar12 + 0x2300);
    if (uVar7 != 0) {
      bVar8 = (uVar11 & 0x1f) < uVar7 >> 5;
      lVar9 = lVar12;
LAB_0079b4a0:
      do {
        plVar3 = (long *)(lVar9 + 0x2308);
        lVar12 = *plVar3;
        if (*plVar3 == 0) {
          lVar12 = *(long *)(lVar9 + 0x2300);
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          lVar10 = FUN_004b25a4(0x2320,8);
          if (lVar10 == 0) {
                    /* try { // try from 0079b5dc to 0079b5e7 has its CatchHandler @ 0079b5f0 */
                    /* WARNING: Subroutine does not return */
            alloc::alloc::handle_alloc_error(8,0x2320);
          }
          *(undefined8 *)(lVar10 + 0x2308) = 0;
          *(long *)(lVar10 + 0x2300) = lVar12 + 0x20;
          *(undefined8 *)(lVar10 + 0x2318) = 0;
          *(undefined8 *)(lVar10 + 0x2310) = 0;
LAB_0079b4dc:
          lVar12 = *plVar3;
          if (lVar12 == 0) goto code_r0x0079b4e4;
          ClearExclusiveLocal();
          plVar3 = (long *)(lVar12 + 0x2308);
          *(long *)(lVar10 + 0x2300) = *(long *)(lVar12 + 0x2300) + 0x20;
          do {
            lVar13 = *plVar3;
            if (lVar13 != 0) {
              ClearExclusiveLocal();
              do {
                InstructionSynchronizationBarrier();
                *(long *)(lVar10 + 0x2300) = *(long *)(lVar13 + 0x2300) + 0x20;
                plVar3 = (long *)(lVar13 + 0x2308);
                while (lVar13 = *plVar3, lVar13 == 0) {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                  if (bVar6) {
                    *plVar3 = lVar10;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 == '\0') goto LAB_0079b568;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar6) {
              *plVar3 = lVar10;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
LAB_0079b568:
        puVar4 = (ulong *)(lVar9 + 0x2310);
        if ((bool)(bVar8 & (int)*puVar4 == -1)) {
          do {
            if (*plVar1 != lVar9) {
              ClearExclusiveLocal();
              goto LAB_0079b48c;
            }
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar8) {
              *plVar1 = lVar12;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          do {
            uVar11 = *puVar2;
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar8) {
              *puVar2 = uVar11;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          *(ulong *)(lVar9 + 0x2318) = uVar11;
          do {
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(puVar4,0x10);
            if (bVar8) {
              *puVar4 = *puVar4 | 0x100000000;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          bVar8 = true;
          InstructionSynchronizationBarrier();
          lVar9 = lVar12;
          if (*(ulong *)(lVar12 + 0x2300) == uVar15) break;
          goto LAB_0079b4a0;
        }
LAB_0079b48c:
        bVar8 = false;
        InstructionSynchronizationBarrier();
        lVar9 = lVar12;
      } while (*(ulong *)(lVar12 + 0x2300) != uVar15);
    }
    puVar2 = (ulong *)(lVar12 + 0x2310);
    do {
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar8) {
        *puVar2 = *puVar2 | 0x200000000;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
                    /* try { // try from 0079b40c to 0079b417 has its CatchHandler @ 0079b5ec */
    <tokio::sync::task::atomic_waker::[0]::tokio::sync::task::atomic_waker::AtomicWaker>::wake
              (plVar14 + 0x20);
  }
  do {
    lVar12 = *plVar14;
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar8) {
      *plVar14 = lVar12 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (lVar12 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::mpsc::chan::Chan<hyper[9f1bfd30b08ca095]::client::dispatch::Envelope<http[b87e90c26fe47eb4]::request::Request<reqwest[6fed810f3e38d558]::async_impl::body::Body>,http[b87e90c26fe47eb4]::response::Response<hyper[9f1bfd30b08ca095]::body::incoming::Incoming>>,tokio[8c8895dbfa691109]::sync::mpsc::unbounded::Semaphore>>>
    ::drop_slow(param_1);
    return;
  }
  return;
code_r0x0079b4e4:
  cVar5 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
  if (bVar6) {
    *plVar3 = lVar10;
    cVar5 = ExclusiveMonitorsStatus();
  }
  lVar12 = lVar10;
  if (cVar5 == '\0') goto LAB_0079b568;
  goto LAB_0079b4dc;
}


// ===== 0079b624  FUN_0079b624 =====

void FUN_0079b624(long *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  if (*param_1 == 0) {
    __ptr = (void *)param_1[1];
    puVar1 = (undefined8 *)param_1[2];
    pcVar2 = (code *)*puVar1;
    if (pcVar2 != (code *)0x0) {
                    /* try { // try from 0079b650 to 0079b657 has its CatchHandler @ 0079b674 */
      (*pcVar2)(__ptr);
    }
    if (puVar1[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 0079b698  FUN_0079b698 =====

void FUN_0079b698(long *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  if (*param_1 == 0) {
    __ptr = (void *)param_1[1];
    puVar1 = (undefined8 *)param_1[2];
    pcVar2 = (code *)*puVar1;
    if (pcVar2 != (code *)0x0) {
                    /* try { // try from 0079b6c4 to 0079b6cb has its CatchHandler @ 0079b6e8 */
      (*pcVar2)(__ptr);
    }
    if (puVar1[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 0079b70c  FUN_0079b70c =====

void FUN_0079b70c(void *param_1)

{
  if (param_1 != (void *)0x0) {
                    /* try { // try from 0079b71c to 0079b723 has its CatchHandler @ 0079b748 */
    FUN_007b3bec();
    free(param_1);
    return;
  }
  return;
}


// ===== 0079b764  FUN_0079b764 =====

void FUN_0079b764(byte *param_1)

{
  long *__ptr;
  
  if (1 < *param_1) {
    __ptr = *(long **)(param_1 + 8);
                    /* try { // try from 0079b790 to 0079b797 has its CatchHandler @ 0079b7d8 */
    (**(code **)(*__ptr + 0x20))(__ptr + 3,__ptr[1],__ptr[2]);
    free(__ptr);
  }
                    /* try { // try from 0079b7b4 to 0079b7bb has its CatchHandler @ 0079b808 */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x20))
            (param_1 + 0x28,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0079b7d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x20))
            (param_1 + 0x48,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  return;
}


// ===== 0079b82c  FUN_0079b82c =====

void FUN_0079b82c(long param_1)

{
  void *__ptr;
  
  if ((9 < *(byte *)(param_1 + 0xb8)) && (*(long *)(param_1 + 200) != 0)) {
    free(*(void **)(param_1 + 0xc0));
  }
                    /* try { // try from 0079b85c to 0079b863 has its CatchHandler @ 0079b8c4 */
  FUN_0079b764(param_1 + 0x60);
                    /* try { // try from 0079b864 to 0079b86b has its CatchHandler @ 0079b8bc */
  FUN_0079bb48(param_1);
  __ptr = *(void **)(param_1 + 0xd0);
  if (__ptr != (void *)0x0) {
                    /* try { // try from 0079b874 to 0079b87b has its CatchHandler @ 0079b8a0 */
    FUN_007b3bec(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 0079b8e4  FUN_0079b8e4 =====

void FUN_0079b8e4(long *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0079b90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))(param_1 + 3,param_1[1],param_1[2]);
    return;
  }
  __ptr = (void *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
                    /* try { // try from 0079b91c to 0079b923 has its CatchHandler @ 0079b94c */
    (*pcVar2)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0079b970  FUN_0079b970 =====

void FUN_0079b970(long *param_1)

{
  char *pcVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  
  if (*param_1 != 0) {
                    /* try { // try from 0079b984 to 0079b98b has its CatchHandler @ 0079bb00 */
    <hyper::common::watch::Sender_as_core::ops::drop::Drop>::drop();
    plVar6 = (long *)*param_1;
    do {
      lVar7 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 0079b9a8 to 0079b9af has its CatchHandler @ 0079bac4 */
      <alloc::sync::[n]::alloc::sync::Arc<hyper::common::watch::Shared>>::drop_slow(param_1);
    }
                    /* try { // try from 0079b9b0 to 0079b9b7 has its CatchHandler @ 0079bacc */
    FUN_0079377c(param_1 + 3);
    plVar6 = (long *)param_1[3];
    if (plVar6 != (long *)0x0) {
      do {
        lVar7 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 0079b9d8 to 0079b9df has its CatchHandler @ 0079ba8c */
        <alloc::sync::[n]::alloc::sync::Arc<futures_channel::mpsc::BoundedInner<core::result::Result<bytes::bytes::Bytes,hyper::error::Error>>>>
        ::drop_slow(param_1 + 3);
      }
    }
    param_1 = param_1 + 1;
    lVar7 = *param_1;
    pcVar1 = (char *)(lVar7 + 0x88);
    *(undefined4 *)(lVar7 + 0xa8) = 1;
    do {
      cVar3 = *pcVar1;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar4) {
        *pcVar1 = '\x01';
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (cVar3 == '\0') {
      lVar2 = *(long *)(lVar7 + 0x78);
      *(undefined8 *)(lVar7 + 0x78) = 0;
      *(undefined4 *)(lVar7 + 0x88) = 0;
      if (lVar2 != 0) {
                    /* try { // try from 0079ba1c to 0079ba53 has its CatchHandler @ 0079ba94 */
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar7 + 0x80));
      }
    }
    pcVar1 = (char *)(lVar7 + 0xa0);
    do {
      cVar3 = *pcVar1;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar4) {
        *pcVar1 = '\x01';
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (cVar3 == '\0') {
      lVar2 = *(long *)(lVar7 + 0x90);
      *(undefined8 *)(lVar7 + 0x90) = 0;
      *(undefined4 *)(lVar7 + 0xa0) = 0;
      if (lVar2 != 0) {
        (**(code **)(lVar2 + 8))(*(undefined8 *)(lVar7 + 0x98));
      }
    }
    plVar6 = (long *)*param_1;
    do {
      lVar7 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<futures_channel::oneshot::Inner<http::header::map::HeaderMap>>>
      ::drop_slow(param_1);
      return;
    }
  }
  return;
}


// ===== 0079bb48  FUN_0079bb48 =====

void FUN_0079bb48(long param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    free(*(void **)(param_1 + 0x48));
  }
                    /* try { // try from 0079bb78 to 0079bb7f has its CatchHandler @ 0079bc0c */
  FUN_0078aa8c(param_1 + 0x18);
  if (*(long *)(param_1 + 0x18) != 0) {
    free(*(void **)(param_1 + 0x20));
  }
  __ptr = *(void **)(param_1 + 0x38);
  lVar2 = *(long *)(param_1 + 0x40) + 1;
  lVar1 = (long)__ptr + 0x38;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 0079bbc0 to 0079bbc3 has its CatchHandler @ 0079bc3c */
    (**(code **)(*(long *)(lVar1 + -0x18) + 0x20))
              (lVar1,*(undefined8 *)(lVar1 + -0x10),*(undefined8 *)(lVar1 + -8));
    lVar1 = lVar1 + 0x48;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0079bc98  FUN_0079bc98 =====

void FUN_0079bc98(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  void *__ptr;
  undefined8 *puVar6;
  
  __ptr = (void *)*param_1;
  if (__ptr != (void *)0x0) {
    puVar6 = (undefined8 *)param_1[1];
    pcVar3 = (code *)*puVar6;
    if (pcVar3 != (code *)0x0) {
                    /* try { // try from 0079bcc0 to 0079bcc7 has its CatchHandler @ 0079bd1c */
      (*pcVar3)(__ptr);
    }
    if (puVar6[1] != 0) {
      free(__ptr);
    }
  }
  plVar4 = (long *)param_1[2];
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
    <alloc::sync::[n]::alloc::sync::Arc<core::sync::atomic::Atomic<bool>>>::drop_slow(param_1 + 2);
    return;
  }
  return;
}


// ===== 0079bd68  FUN_0079bd68 =====

undefined1  [16] FUN_0079bd68(undefined8 param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined8 local_280;
  undefined8 uStack_278;
  long local_200;
  undefined8 uStack_1f8;
  undefined8 local_180;
  undefined8 local_170;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long local_e0;
  long lStack_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  local_200 = FUN_004b25a4(0x2320,8);
  if (local_200 == 0) {
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x2320);
  }
  uStack_1f8 = 0;
  local_180 = 0;
  local_170 = 0;
  *(undefined8 *)(local_200 + 0x2318) = 0;
  *(undefined8 *)(local_200 + 0x2310) = 0;
  *(undefined8 *)(local_200 + 0x2308) = 0;
  *(undefined8 *)(local_200 + 0x2300) = 0;
  uStack_278 = 1;
  local_280 = 1;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  local_d0 = 0;
  local_c8 = 0;
  uStack_b8 = 1;
  local_b0 = 0;
  local_e0 = local_200;
  lStack_d8 = local_200;
  local_c0 = param_1;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  auVar5._0_8_ = (long *)FUN_004b25a4(0x200,0x80);
  if (auVar5._0_8_ != (long *)0x0) {
    memcpy(auVar5._0_8_,&local_280,0x200);
    do {
      lVar4 = *auVar5._0_8_;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(auVar5._0_8_,0x10);
      if (bVar2) {
        *auVar5._0_8_ = lVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (-1 < lVar4) {
      auVar5._8_8_ = auVar5._0_8_;
      return auVar5;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x79be30);
    (*pcVar3)();
  }
                    /* try { // try from 0079be20 to 0079be2b has its CatchHandler @ 0079be3c */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(0x80,0x200);
}


// ===== 0079be54  FUN_0079be54 =====

void FUN_0079be54(ulong *param_1,ulong param_2,ulong param_3,undefined8 param_4,ulong param_5)

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
  FUN_0079c54c(&local_38,*param_1,param_1[1],uVar2,param_4);
  if (local_38 != 1) {
    *param_1 = uVar2;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 0079beec  <reqwest::redirect::reqwest::redirect::Policy>::redirect =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::redirect::reqwest::redirect::Policy>::redirect */

void __rustcall
<reqwest::redirect::reqwest::redirect::Policy>::redirect
          (undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (*param_2 == 0) {
    uStack_28 = param_3[1];
    local_30 = *param_3;
    uStack_18 = param_3[3];
    uStack_20 = param_3[2];
    (**(code **)(param_2[2] + 0x28))(param_2[1],&local_30);
    return;
  }
  if (*param_2 == 1) {
    if ((ulong)param_3[2] < (ulong)param_2[1]) {
      *param_1 = 0;
      return;
    }
    *param_1 = 2;
    param_1[1] = 1;
    param_1[2] = &DAT_00adcaf0;
    return;
  }
  *param_1 = 1;
  return;
}


// ===== 0079bf6c  FUN_0079bf6c =====

void FUN_0079bf6c(void *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  void *__ptr;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  pvVar4 = (void *)*param_2;
  uVar6 = *(ulong *)((long)pvVar4 + 0x2300);
  while (uVar6 != (param_2[2] & 0xffffffffffffffe0U)) {
    pvVar4 = *(void **)((long)pvVar4 + 0x2308);
    if (pvVar4 == (void *)0x0) goto LAB_0079c04c;
    *param_2 = (long)pvVar4;
    InstructionSynchronizationBarrier();
    uVar6 = *(ulong *)((long)pvVar4 + 0x2300);
  }
  __ptr = (void *)param_2[1];
  if (((__ptr == pvVar4) || ((*(ulong *)((long)__ptr + 0x2310) >> 0x20 & 1) == 0)) ||
     ((ulong)param_2[2] < *(ulong *)((long)__ptr + 0x2318))) {
LAB_0079bff0:
    uVar7 = param_2[2];
    uVar6 = uVar7 & 0x1f;
    if ((*(ulong *)((long)pvVar4 + 0x2310) >> uVar6 & 1) != 0) {
      memcpy(param_1,(void *)((long)pvVar4 + uVar6 * 0x118),0x118);
      if (*(ulong *)((long)param_1 + 0x100) < 0xfffffffffffffffe) {
        param_2[2] = uVar7 + 1;
      }
      return;
    }
    if ((*(ulong *)((long)pvVar4 + 0x2310) >> 0x21 & 1) != 0) {
      *(undefined8 *)((long)param_1 + 0x100) = 0xffffffffffffffff;
      return;
    }
LAB_0079c04c:
    *(undefined8 *)((long)param_1 + 0x100) = 0xfffffffffffffffe;
    return;
  }
LAB_0079c08c:
  if (*(long *)((long)__ptr + 0x2308) == 0) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00adcb48);
  }
  param_2[1] = *(long *)((long)__ptr + 0x2308);
  *(undefined8 *)((long)__ptr + 0x2300) = 0;
  *(undefined8 *)((long)__ptr + 0x2310) = 0;
  *(undefined8 *)((long)__ptr + 0x2308) = 0;
  lVar5 = *param_3;
  *(long *)((long)__ptr + 0x2300) = *(long *)(lVar5 + 0x2300) + 0x20;
  plVar1 = (long *)(lVar5 + 0x2308);
  do {
    lVar5 = *plVar1;
    if (lVar5 != 0) {
      ClearExclusiveLocal();
      *(long *)((long)__ptr + 0x2300) = *(long *)(lVar5 + 0x2300) + 0x20;
      plVar1 = (long *)(lVar5 + 0x2308);
      goto LAB_0079c0e0;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = (long)__ptr;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  goto LAB_0079c134;
  while( true ) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = (long)__ptr;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') break;
LAB_0079c0e0:
    lVar5 = *plVar1;
    if (lVar5 != 0) {
      ClearExclusiveLocal();
      plVar1 = (long *)(lVar5 + 0x2308);
      *(long *)((long)__ptr + 0x2300) = *(long *)(lVar5 + 0x2300) + 0x20;
      goto LAB_0079c108;
    }
  }
  goto LAB_0079c134;
  while( true ) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = (long)__ptr;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') break;
LAB_0079c108:
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      free(__ptr);
      break;
    }
  }
LAB_0079c134:
  InstructionSynchronizationBarrier();
  pvVar4 = (void *)*param_2;
  __ptr = (void *)param_2[1];
  if (((__ptr == pvVar4) || ((*(ulong *)((long)__ptr + 0x2310) >> 0x20 & 1) == 0)) ||
     ((ulong)param_2[2] < *(ulong *)((long)__ptr + 0x2318))) goto LAB_0079bff0;
  goto LAB_0079c08c;
}


// ===== 0079c188  FUN_0079c188 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0079c188(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  auVar5 = alloc::sync::arcinner_layout_for_value_layout(8,0xb0);
  lVar4 = auVar5._8_8_;
  puVar2 = auVar5._0_8_;
  puVar3 = puVar2;
  if (lVar4 != 0) {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar3 = (undefined8 *)FUN_004b25a4(lVar4,puVar2);
  }
  if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(puVar2,lVar4);
  }
  param_1[2] = puVar3;
  uVar1 = _DAT_0029f1d0;
  param_1[1] = _UNK_0029f1d8;
  *param_1 = uVar1;
  puVar3[1] = 1;
  *puVar3 = 1;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}


// ===== 0079c20c  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<futures_channel::oneshot::Sender<hyper_util::client::legacy::client::PoolClient<reqwest::async_impl::body::Body>>>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<futures_channel::oneshot::Sender<hyper_util::client::legacy::client::PoolClient<reqwest::async_impl::body::Body>>>>::grow_one
    */

void __rustcall
<alloc::raw_vec::[4]::alloc::raw_vec::RawVec<futures_channel::oneshot::Sender<hyper_util::client::legacy::client::PoolClient<reqwest::async_impl::body::Body>>>>
::grow_one(ulong *param_1)

{
  ulong uVar1;
  long local_38;
  ulong local_30;
  undefined8 uStack_28;
  
  uVar1 = *param_1 * 2;
  if (uVar1 < 5) {
    uVar1 = 4;
  }
  FUN_0079c54c(&local_38,*param_1,param_1[1],uVar1,8,8);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 0079c274  <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<hyper_util[52a210df7efc1bae]::client::legacy::pool::Idle<hyper_util[52a210df7efc1bae]::client::legacy::client::PoolClient<reqwest[6fed810f3e38d558]::async_impl::body::Body>>>>::grow_one =====

/* <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<hyper_util[52a210df7efc1bae]::client::legacy::pool::Idle<hyper_util[52a210df7efc1bae]::client::legacy::client::PoolClient<reqwest[6fed810f3e38d558]::async_impl::body::Body>>>>::grow_one
    */

void <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<hyper_util[52a210df7efc1bae]::client::legacy::pool::Idle<hyper_util[52a210df7efc1bae]::client::legacy::client::PoolClient<reqwest[6fed810f3e38d558]::async_impl::body::Body>>>>
     ::grow_one(ulong *param_1)

{
  ulong uVar1;
  long local_38;
  ulong local_30;
  undefined8 uStack_28;
  
  uVar1 = *param_1 * 2;
  if (uVar1 < 5) {
    uVar1 = 4;
  }
  FUN_0079c54c(&local_38,*param_1,param_1[1],uVar1,8,0x48);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 0079c2dc  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<hyper::proto::h1::encode::EncodedBuf<bytes::bytes::Bytes>>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<hyper::proto::h1::encode::EncodedBuf<bytes::bytes::Bytes>>>::grow_one
    */

void __rustcall
<alloc::raw_vec::[4]::alloc::raw_vec::RawVec<hyper::proto::h1::encode::EncodedBuf<bytes::bytes::Bytes>>>
::grow_one(ulong *param_1)

{
  ulong uVar1;
  long local_38;
  ulong local_30;
  undefined8 uStack_28;
  
  uVar1 = *param_1 * 2;
  if (uVar1 < 5) {
    uVar1 = 4;
  }
  FUN_0079c54c(&local_38,*param_1,param_1[1],uVar1,8,0x50);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 0079c344  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<rustls_pki_types::PrivateKeyDer>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<rustls_pki_types::PrivateKeyDer>>::grow_one */

void __rustcall
<alloc::raw_vec::[4]::alloc::raw_vec::RawVec<rustls_pki_types::PrivateKeyDer>>::grow_one
          (ulong *param_1)

{
  ulong uVar1;
  long local_38;
  ulong local_30;
  undefined8 uStack_28;
  
  uVar1 = *param_1 * 2;
  if (uVar1 < 5) {
    uVar1 = 4;
  }
  FUN_0079c54c(&local_38,*param_1,param_1[1],uVar1,8,0x20);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 0079c3ac  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<url::Url>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<url::Url>>::grow_one */

void __rustcall <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<url::Url>>::grow_one(ulong *param_1)

{
  ulong uVar1;
  long local_38;
  ulong local_30;
  undefined8 uStack_28;
  
  uVar1 = *param_1 * 2;
  if (uVar1 < 5) {
    uVar1 = 4;
  }
  FUN_0079c54c(&local_38,*param_1,param_1[1],uVar1,8,0x58);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 0079c414  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<reqwest::tls::CertificateRevocationList>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<reqwest::tls::CertificateRevocationList>>::grow_one
    */

void __rustcall
<alloc::raw_vec::[4]::alloc::raw_vec::RawVec<reqwest::tls::CertificateRevocationList>>::grow_one
          (ulong *param_1)

{
  ulong uVar1;
  long local_38;
  ulong local_30;
  undefined8 uStack_28;
  
  uVar1 = *param_1 * 2;
  if (uVar1 < 5) {
    uVar1 = 4;
  }
  FUN_0079c54c(&local_38,*param_1,param_1[1],uVar1,8,0x18);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 0079c47c  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<reqwest::proxy::Ip>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<reqwest::proxy::Ip>>::grow_one */

void __rustcall
<alloc::raw_vec::[4]::alloc::raw_vec::RawVec<reqwest::proxy::Ip>>::grow_one(ulong *param_1)

{
  ulong uVar1;
  long local_38;
  ulong local_30;
  undefined8 uStack_28;
  
  uVar1 = *param_1 * 2;
  if (uVar1 < 5) {
    uVar1 = 4;
  }
  FUN_0079c54c(&local_38,*param_1,param_1[1],uVar1,1,0x12);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 0079c4e4  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<reqwest::proxy::Proxy>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<reqwest::proxy::Proxy>>::grow_one */

void __rustcall
<alloc::raw_vec::[4]::alloc::raw_vec::RawVec<reqwest::proxy::Proxy>>::grow_one(ulong *param_1)

{
  ulong uVar1;
  long local_38;
  ulong local_30;
  undefined8 uStack_28;
  
  uVar1 = *param_1 * 2;
  if (uVar1 < 5) {
    uVar1 = 4;
  }
  FUN_0079c54c(&local_38,*param_1,param_1[1],uVar1,8,0x88);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 0079c54c  FUN_0079c54c =====

void FUN_0079c54c(undefined8 *param_1,long param_2,undefined8 param_3,ulong param_4,long param_5,
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
  goto LAB_0079c5e8;
  if (param_2 == 0) {
    lVar5 = param_5;
    if (param_4 != 0) {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      lVar5 = FUN_004b25a4(param_4,param_5);
      if (lVar5 == 0) goto LAB_0079c5c8;
    }
LAB_0079c5d8:
    uVar3 = 0;
    param_1[1] = lVar5;
  }
  else {
    lVar5 = FUN_004b2600(param_3,param_6 * param_2,param_5,param_4);
    if (lVar5 != 0) goto LAB_0079c5d8;
LAB_0079c5c8:
    uVar3 = 1;
    param_1[1] = param_5;
  }
  lVar5 = 0x10;
  uVar4 = param_4;
LAB_0079c5e8:
  *(ulong *)((long)param_1 + lVar5) = uVar4;
  *param_1 = uVar3;
  return;
}


// ===== 0079c600  FUN_0079c600 =====

void FUN_0079c600(undefined8 *param_1,ulong param_2,ulong param_3,long param_4,ulong param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  long lVar3;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_5;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2;
  if ((SUB168(auVar1 * auVar2,8) != 0) ||
     (param_5 = param_5 * param_2,
     0x8000000000000000U - param_4 <= param_5 && param_5 - (0x8000000000000000U - param_4) != 0)) {
    *param_1 = 1;
    param_1[1] = 0;
    return;
  }
  if (param_5 == 0) {
    param_1[1] = 0;
    param_1[2] = param_4;
    *param_1 = 0;
    return;
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  if ((param_3 & 1) == 0) {
    lVar3 = FUN_004b25a4(param_5,param_4);
  }
  else {
    lVar3 = FUN_004b263c();
  }
  if (lVar3 != 0) {
    param_1[1] = param_2;
    param_1[2] = lVar3;
    *param_1 = 0;
    return;
  }
  param_1[1] = param_4;
  param_1[2] = param_5;
  *param_1 = 1;
  return;
}


// ===== 0079c6e4  FUN_0079c6e4 =====

void FUN_0079c6e4(long *param_1,void *param_2)

{
  long *plVar1;
  ulong *puVar2;
  long *plVar3;
  ulong *puVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  
  lVar14 = *param_1;
  plVar1 = (long *)(lVar14 + 0x80);
  puVar2 = (ulong *)(lVar14 + 0x88);
  do {
    uVar11 = *puVar2;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar7) {
      *puVar2 = uVar11 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  lVar8 = *plVar1;
  uVar15 = uVar11 & 0xffffffffffffffe0;
  uVar13 = uVar15 - *(long *)(lVar8 + 0x2300);
  if (uVar13 != 0) {
    bVar7 = (uVar11 & 0x1f) < uVar13 >> 5;
    lVar9 = lVar8;
LAB_0079c76c:
    do {
      plVar3 = (long *)(lVar9 + 0x2308);
      lVar8 = *plVar3;
      if (*plVar3 == 0) {
        lVar8 = *(long *)(lVar9 + 0x2300);
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        lVar10 = FUN_004b25a4(0x2320,8);
        if (lVar10 == 0) {
                    /* try { // try from 0079c908 to 0079c913 has its CatchHandler @ 0079c918 */
                    /* WARNING: Subroutine does not return */
          alloc::alloc::handle_alloc_error(8,0x2320);
        }
        *(undefined8 *)(lVar10 + 0x2308) = 0;
        *(long *)(lVar10 + 0x2300) = lVar8 + 0x20;
        *(undefined8 *)(lVar10 + 0x2318) = 0;
        *(undefined8 *)(lVar10 + 0x2310) = 0;
LAB_0079c7a8:
        lVar8 = *plVar3;
        if (lVar8 == 0) goto code_r0x0079c7b0;
        ClearExclusiveLocal();
        plVar3 = (long *)(lVar8 + 0x2308);
        *(long *)(lVar10 + 0x2300) = *(long *)(lVar8 + 0x2300) + 0x20;
        do {
          lVar12 = *plVar3;
          if (lVar12 != 0) {
            ClearExclusiveLocal();
            do {
              InstructionSynchronizationBarrier();
              *(long *)(lVar10 + 0x2300) = *(long *)(lVar12 + 0x2300) + 0x20;
              plVar3 = (long *)(lVar12 + 0x2308);
              while (lVar12 = *plVar3, lVar12 == 0) {
                cVar6 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar5) {
                  *plVar3 = lVar10;
                  cVar6 = ExclusiveMonitorsStatus();
                }
                if (cVar6 == '\0') goto LAB_0079c834;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar6 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar5) {
            *plVar3 = lVar10;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
LAB_0079c834:
      puVar4 = (ulong *)(lVar9 + 0x2310);
      if ((bool)(bVar7 & (int)*puVar4 == -1)) {
        do {
          if (*plVar1 != lVar9) {
            ClearExclusiveLocal();
            goto LAB_0079c758;
          }
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar8;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        do {
          uVar13 = *puVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar13;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        *(ulong *)(lVar9 + 0x2318) = uVar13;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar4,0x10);
          if (bVar7) {
            *puVar4 = *puVar4 | 0x100000000;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        bVar7 = true;
        InstructionSynchronizationBarrier();
        lVar9 = lVar8;
        if (*(ulong *)(lVar8 + 0x2300) == uVar15) break;
        goto LAB_0079c76c;
      }
LAB_0079c758:
      bVar7 = false;
      InstructionSynchronizationBarrier();
      lVar9 = lVar8;
    } while (*(ulong *)(lVar8 + 0x2300) != uVar15);
  }
  memmove((void *)(lVar8 + (uVar11 & 0x1f) * 0x118),param_2,0x118);
  puVar2 = (ulong *)(lVar8 + 0x2310);
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar7) {
      *puVar2 = *puVar2 | 1L << (uVar11 & 0x1f);
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  <tokio::sync::task::atomic_waker::[0]::tokio::sync::task::atomic_waker::AtomicWaker>::wake
            (lVar14 + 0x100);
  return;
code_r0x0079c7b0:
  cVar6 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
  if (bVar5) {
    *plVar3 = lVar10;
    cVar6 = ExclusiveMonitorsStatus();
  }
  lVar8 = lVar10;
  if (cVar6 == '\0') goto LAB_0079c834;
  goto LAB_0079c7a8;
}


// ===== 0079c930  FUN_0079c930 =====

undefined8 FUN_0079c930(long *param_1,long *param_2)

{
  ulong *puVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined1 *puVar6;
  char *pcVar7;
  char cVar8;
  ulong uVar9;
  long lVar10;
  char local_28;
  char local_27;
  undefined2 local_24;
  undefined1 local_22;
  
  uVar9 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar9 == 0) {
    uVar9 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar6 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar9);
    if (&DAT_00000001 < puVar6) goto LAB_0079c970;
LAB_0079cac0:
    puVar6 = (undefined1 *)FUN_007bc03c(uVar9 & 0xffffffff,puVar6,0);
    if (puVar6 != (undefined1 *)0x0) goto LAB_0079c974;
LAB_0079cad4:
    lVar10 = *param_1;
    local_28 = '\0';
    local_27 = '\0';
  }
  else {
    puVar6 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar9);
    if (puVar6 < (undefined1 *)0x2) goto LAB_0079cac0;
LAB_0079c970:
    if (puVar6 == (undefined1 *)0x0) goto LAB_0079cad4;
LAB_0079c974:
    cVar2 = puVar6[0x44];
    cVar3 = puVar6[0x45];
    cVar8 = cVar3;
    if (cVar2 == '\x01') {
      if (cVar3 == '\0') {
        tokio::task::coop::register_waker(param_2);
        local_22 = 0;
        local_24 = 0;
        pcVar7 = (char *)((ulong)&local_24 | 1);
        goto LAB_0079ca84;
      }
      cVar8 = cVar3 + -1;
    }
    puVar6[0x45] = cVar8;
    local_22 = 0;
    local_24 = 0;
    <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop((ulong)&local_24 | 1);
    lVar10 = *param_1;
    local_28 = cVar2;
    local_27 = cVar3;
  }
  if (lVar10 == 0) {
                    /* try { // try from 0079cae4 to 0079caef has its CatchHandler @ 0079caf4 */
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00adcb78);
  }
  puVar1 = (ulong *)(lVar10 + 0x30);
                    /* try { // try from 0079c9bc to 0079ca1b has its CatchHandler @ 0079caf4 */
  uVar5 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::load(lVar10 + 0x30,2);
  if ((uVar5 >> 2 & 1) != 0) goto LAB_0079ca48;
  if ((uVar5 >> 3 & 1) == 0) {
LAB_0079ca10:
    <tokio::sync::oneshot::tokio::sync::oneshot::Task>::set_task(lVar10 + 0x10,param_2);
    do {
      uVar9 = *puVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar9 | 8;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)uVar9 >> 2 & 1) != 0) {
LAB_0079ca48:
      local_28 = '\0';
      <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop(&local_28);
      return 0;
    }
  }
  else if ((*(long *)(lVar10 + 0x18) != ((long *)*param_2)[1]) ||
          (*(long *)(lVar10 + 0x10) != *(long *)*param_2)) {
    do {
      uVar9 = *puVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar9 & 0xfffffffffffffff7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)uVar9 >> 2 & 1) != 0) {
      do {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 8;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_0079ca48;
    }
    <tokio::sync::oneshot::tokio::sync::oneshot::Task>::drop_task(lVar10 + 0x10);
    goto LAB_0079ca10;
  }
  pcVar7 = &local_28;
LAB_0079ca84:
  <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop(pcVar7);
  return 1;
}


// ===== 0079cb0c  FUN_0079cb0c =====

void FUN_0079cb0c(long *param_1,long *param_2,void *param_3)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  long *__dest;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *local_38;
  
  if (param_2 == (long *)0x0) {
                    /* try { // try from 0079cc54 to 0079cc5f has its CatchHandler @ 0079ccbc */
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00adcb90);
  }
  __dest = param_2 + 7;
  local_38 = param_2;
  if (*__dest != -3) {
                    /* try { // try from 0079cb48 to 0079cb4f has its CatchHandler @ 0079cc7c */
    FUN_0079a540(__dest);
  }
  memcpy(__dest,param_3,0x108);
                    /* try { // try from 0079cb60 to 0079cb87 has its CatchHandler @ 0079cc94 */
  uVar3 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(param_2 + 6);
  if ((uVar3 & 5) == 1) {
    (**(code **)(param_2[4] + 0x10))(param_2[5]);
  }
  if ((uVar3 >> 2 & 1) == 0) {
    *param_1 = -3;
    do {
      lVar4 = *param_2 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar2) {
        *param_2 = lVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  else {
    lVar4 = *__dest;
    *__dest = -3;
    if (lVar4 == -3) {
                    /* try { // try from 0079cc64 to 0079cc6f has its CatchHandler @ 0079cc94 */
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00adcba8);
    }
    lVar6 = param_2[0x21];
    lVar5 = param_2[0x20];
    lVar8 = param_2[0x23];
    lVar7 = param_2[0x22];
    *param_1 = lVar4;
    param_1[0x1a] = lVar6;
    param_1[0x19] = lVar5;
    param_1[0x1c] = lVar8;
    param_1[0x1b] = lVar7;
    lVar4 = param_2[0x24];
    lVar6 = param_2[0x27];
    lVar5 = param_2[0x26];
    param_1[0x1e] = param_2[0x25];
    param_1[0x1d] = lVar4;
    param_1[0x20] = lVar6;
    param_1[0x1f] = lVar5;
    lVar4 = param_2[0x18];
    lVar6 = param_2[0x1b];
    lVar5 = param_2[0x1a];
    param_1[0x12] = param_2[0x19];
    param_1[0x11] = lVar4;
    param_1[0x14] = lVar6;
    param_1[0x13] = lVar5;
    lVar4 = param_2[0x1c];
    lVar6 = param_2[0x1f];
    lVar5 = param_2[0x1e];
    param_1[0x16] = param_2[0x1d];
    param_1[0x15] = lVar4;
    param_1[0x18] = lVar6;
    param_1[0x17] = lVar5;
    lVar4 = param_2[0x10];
    lVar6 = param_2[0x13];
    lVar5 = param_2[0x12];
    param_1[10] = param_2[0x11];
    param_1[9] = lVar4;
    param_1[0xc] = lVar6;
    param_1[0xb] = lVar5;
    lVar4 = param_2[0x14];
    lVar6 = param_2[0x17];
    lVar5 = param_2[0x16];
    param_1[0xe] = param_2[0x15];
    param_1[0xd] = lVar4;
    param_1[0x10] = lVar6;
    param_1[0xf] = lVar5;
    lVar4 = param_2[8];
    lVar6 = param_2[0xb];
    lVar5 = param_2[10];
    param_1[2] = param_2[9];
    param_1[1] = lVar4;
    param_1[4] = lVar6;
    param_1[3] = lVar5;
    lVar4 = param_2[0xc];
    lVar6 = param_2[0xf];
    lVar5 = param_2[0xe];
    param_1[6] = param_2[0xd];
    param_1[5] = lVar4;
    param_1[8] = lVar6;
    param_1[7] = lVar5;
    do {
      lVar4 = *param_2 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar2) {
        *param_2 = lVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if (lVar4 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0079cc38 to 0079cc3f has its CatchHandler @ 0079cc74 */
    <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::oneshot::Inner<core[bcece726f298455b]::result::Result<http[b87e90c26fe47eb4]::response::Response<hyper[9f1bfd30b08ca095]::body::incoming::Incoming>,hyper[9f1bfd30b08ca095]::client::dispatch::TrySendError<http[b87e90c26fe47eb4]::request::Request<reqwest[6fed810f3e38d558]::async_impl::body::Body>>>>>>
    ::drop_slow(&local_38);
  }
  return;
}


// ===== 0079ccdc  FUN_0079ccdc =====

undefined8 FUN_0079ccdc(long *param_1,long *param_2)

{
  ulong *puVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined1 *puVar6;
  char *pcVar7;
  char cVar8;
  ulong uVar9;
  long lVar10;
  char local_28;
  char local_27;
  undefined2 local_24;
  undefined1 local_22;
  
  uVar9 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar9 == 0) {
    uVar9 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar6 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar9);
    if (&DAT_00000001 < puVar6) goto LAB_0079cd1c;
LAB_0079ce6c:
    puVar6 = (undefined1 *)FUN_007bc03c(uVar9 & 0xffffffff,puVar6,0);
    if (puVar6 != (undefined1 *)0x0) goto LAB_0079cd20;
LAB_0079ce80:
    lVar10 = *param_1;
    local_28 = '\0';
    local_27 = '\0';
  }
  else {
    puVar6 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar9);
    if (puVar6 < (undefined1 *)0x2) goto LAB_0079ce6c;
LAB_0079cd1c:
    if (puVar6 == (undefined1 *)0x0) goto LAB_0079ce80;
LAB_0079cd20:
    cVar2 = puVar6[0x44];
    cVar3 = puVar6[0x45];
    cVar8 = cVar3;
    if (cVar2 == '\x01') {
      if (cVar3 == '\0') {
        tokio::task::coop::register_waker(param_2);
        local_22 = 0;
        local_24 = 0;
        pcVar7 = (char *)((ulong)&local_24 | 1);
        goto LAB_0079ce30;
      }
      cVar8 = cVar3 + -1;
    }
    puVar6[0x45] = cVar8;
    local_22 = 0;
    local_24 = 0;
    <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop((ulong)&local_24 | 1);
    lVar10 = *param_1;
    local_28 = cVar2;
    local_27 = cVar3;
  }
  if (lVar10 == 0) {
                    /* try { // try from 0079ce90 to 0079ce9b has its CatchHandler @ 0079cea0 */
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00adcb78);
  }
  puVar1 = (ulong *)(lVar10 + 0xc0);
                    /* try { // try from 0079cd68 to 0079cdc7 has its CatchHandler @ 0079cea0 */
  uVar5 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::load(lVar10 + 0xc0,2);
  if ((uVar5 >> 2 & 1) != 0) goto LAB_0079cdf4;
  if ((uVar5 >> 3 & 1) == 0) {
LAB_0079cdbc:
    <tokio::sync::oneshot::tokio::sync::oneshot::Task>::set_task(lVar10 + 0xa0,param_2);
    do {
      uVar9 = *puVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar9 | 8;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)uVar9 >> 2 & 1) != 0) {
LAB_0079cdf4:
      local_28 = '\0';
      <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop(&local_28);
      return 0;
    }
  }
  else if ((*(long *)(lVar10 + 0xa8) != ((long *)*param_2)[1]) ||
          (*(long *)(lVar10 + 0xa0) != *(long *)*param_2)) {
    do {
      uVar9 = *puVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar9 & 0xfffffffffffffff7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)uVar9 >> 2 & 1) != 0) {
      do {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 8;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_0079cdf4;
    }
    <tokio::sync::oneshot::tokio::sync::oneshot::Task>::drop_task(lVar10 + 0xa0);
    goto LAB_0079cdbc;
  }
  pcVar7 = &local_28;
LAB_0079ce30:
  <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop(pcVar7);
  return 1;
}


// ===== 0079ceb8  FUN_0079ceb8 =====

void FUN_0079ceb8(long *param_1,long *param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *local_38;
  
  if (param_2 == (long *)0x0) {
                    /* try { // try from 0079d000 to 0079d00b has its CatchHandler @ 0079d080 */
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00adcb90);
  }
  plVar6 = param_2 + 2;
  local_38 = param_2;
  if (*plVar6 != -2) {
                    /* try { // try from 0079cef4 to 0079cefb has its CatchHandler @ 0079d028 */
    FUN_0079a63c(plVar6);
  }
  lVar5 = param_3[0xd];
  lVar4 = param_3[0xc];
  lVar8 = param_3[0xf];
  lVar7 = param_3[0xe];
  lVar9 = param_3[0x10];
  param_2[0x13] = param_3[0x11];
  param_2[0x12] = lVar9;
  param_2[0xf] = lVar5;
  param_2[0xe] = lVar4;
  param_2[0x11] = lVar8;
  param_2[0x10] = lVar7;
  lVar4 = param_3[4];
  lVar7 = param_3[7];
  lVar5 = param_3[6];
  param_2[7] = param_3[5];
  param_2[6] = lVar4;
  param_2[9] = lVar7;
  param_2[8] = lVar5;
  lVar4 = param_3[8];
  lVar7 = param_3[0xb];
  lVar5 = param_3[10];
  param_2[0xb] = param_3[9];
  param_2[10] = lVar4;
  param_2[0xd] = lVar7;
  param_2[0xc] = lVar5;
  lVar4 = *param_3;
  lVar7 = param_3[3];
  lVar5 = param_3[2];
  param_2[3] = param_3[1];
  *plVar6 = lVar4;
  param_2[5] = lVar7;
  param_2[4] = lVar5;
                    /* try { // try from 0079cf24 to 0079cf4b has its CatchHandler @ 0079d058 */
  uVar3 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(param_2 + 0x18);
  if ((uVar3 & 5) == 1) {
    (**(code **)(param_2[0x16] + 0x10))(param_2[0x17]);
  }
  if ((uVar3 >> 2 & 1) == 0) {
    *param_1 = -2;
    do {
      lVar4 = *param_2 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar2) {
        *param_2 = lVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  else {
    lVar4 = *plVar6;
    *plVar6 = -2;
    if (lVar4 == -2) {
                    /* try { // try from 0079d010 to 0079d01b has its CatchHandler @ 0079d058 */
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00adcba8);
    }
    lVar8 = param_2[0xe];
    lVar7 = param_2[0xd];
    lVar10 = param_2[0x10];
    lVar9 = param_2[0xf];
    lVar5 = param_2[0x13];
    *param_1 = lVar4;
    param_1[0xc] = lVar8;
    param_1[0xb] = lVar7;
    lVar7 = param_2[0x12];
    lVar4 = param_2[0x11];
    param_1[0xe] = lVar10;
    param_1[0xd] = lVar9;
    lVar9 = param_2[6];
    lVar8 = param_2[5];
    param_1[0x10] = lVar7;
    param_1[0xf] = lVar4;
    lVar7 = param_2[8];
    lVar4 = param_2[7];
    param_1[4] = lVar9;
    param_1[3] = lVar8;
    lVar9 = param_2[10];
    lVar8 = param_2[9];
    param_1[6] = lVar7;
    param_1[5] = lVar4;
    lVar7 = param_2[0xc];
    lVar4 = param_2[0xb];
    param_1[8] = lVar9;
    param_1[7] = lVar8;
    param_1[10] = lVar7;
    param_1[9] = lVar4;
    lVar7 = param_2[4];
    lVar4 = param_2[3];
    param_1[0x11] = lVar5;
    param_1[2] = lVar7;
    param_1[1] = lVar4;
    do {
      lVar4 = *param_2 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar2) {
        *param_2 = lVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if (lVar4 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0079cfe4 to 0079cfeb has its CatchHandler @ 0079d020 */
    <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::oneshot::Inner<core[bcece726f298455b]::result::Result<http[b87e90c26fe47eb4]::response::Response<hyper[9f1bfd30b08ca095]::body::incoming::Incoming>,hyper[9f1bfd30b08ca095]::error::Error>>>>
    ::drop_slow(&local_38);
  }
  return;
}


// ===== 0079d0a0  FUN_0079d0a0 =====

void FUN_0079d0a0(void *param_1,long *param_2,undefined8 *param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined **ppuVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  char local_274;
  char local_273;
  undefined1 auStack_270 [256];
  long local_170;
  undefined2 local_158;
  undefined1 local_156;
  
  uVar9 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar9 == 0) {
    uVar9 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar4 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar9);
    if (puVar4 < (undefined1 *)0x2) goto LAB_0079d180;
LAB_0079d0e8:
    if (puVar4 != (undefined1 *)0x0) goto LAB_0079d0ec;
LAB_0079d194:
    local_274 = '\0';
    local_273 = '\0';
  }
  else {
    puVar4 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar9);
    if (&DAT_00000001 < puVar4) goto LAB_0079d0e8;
LAB_0079d180:
    puVar4 = (undefined1 *)FUN_007bc03c(uVar9 & 0xffffffff,puVar4,0);
    if (puVar4 == (undefined1 *)0x0) goto LAB_0079d194;
LAB_0079d0ec:
    cVar1 = puVar4[0x44];
    cVar2 = puVar4[0x45];
    cVar6 = cVar2;
    if (cVar1 == '\x01') {
      if (cVar2 == '\0') {
        tokio::task::coop::register_waker(param_3);
        local_156 = 0;
        local_158 = 0;
        <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop((ulong)&local_158 | 1);
        *(undefined8 *)((long)param_1 + 0x100) = 0xfffffffffffffffe;
        return;
      }
      cVar6 = cVar2 + -1;
    }
    puVar4[0x45] = cVar6;
    local_156 = 0;
    local_158 = 0;
    <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop((ulong)&local_158 | 1);
    local_274 = cVar1;
    local_273 = cVar2;
  }
  lVar8 = *param_2;
                    /* try { // try from 0079d1a8 to 0079d223 has its CatchHandler @ 0079d2f8 */
  FUN_0079bf6c(auStack_270,lVar8 + 0x1a0,lVar8 + 0x80);
  if (local_170 == -1) {
    uVar9 = <tokio::sync::mpsc::unbounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::is_idle
                      (lVar8 + 0x1c0);
    if ((uVar9 & 1) == 0) {
      ppuVar5 = &PTR_s__root__cargo_registry_src_index__00adcab8;
LAB_0079d2c0:
                    /* try { // try from 0079d2c0 to 0079d2cf has its CatchHandler @ 0079d2f8 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic("assertion failed: self.inner.semaphore.is_idle()",0x30,ppuVar5);
    }
LAB_0079d25c:
    local_274 = '\0';
    uVar7 = 0xffffffffffffffff;
  }
  else {
    if (local_170 != -2) {
      memcpy(&local_158,auStack_270,0x118);
                    /* try { // try from 0079d244 to 0079d24b has its CatchHandler @ 0079d2e4 */
      <tokio::sync::mpsc::unbounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::add_permit
                (lVar8 + 0x1c0);
LAB_0079d284:
      local_274 = '\0';
      memcpy(param_1,auStack_270,0x118);
      goto LAB_0079d298;
    }
    <tokio::sync::task::atomic_waker::[0]::tokio::sync::task::atomic_waker::AtomicWaker>::
    register_by_ref(lVar8 + 0x100,*param_3);
    FUN_0079bf6c(auStack_270,lVar8 + 0x1a0,lVar8 + 0x80);
    if (local_170 == -1) {
                    /* try { // try from 0079d250 to 0079d257 has its CatchHandler @ 0079d2f8 */
      uVar9 = <tokio::sync::mpsc::unbounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::
              is_idle(lVar8 + 0x1c0);
      if ((uVar9 & 1) == 0) {
        ppuVar5 = &PTR_s__root__cargo_registry_src_index__00adcaa0;
        goto LAB_0079d2c0;
      }
      goto LAB_0079d25c;
    }
    if (local_170 != -2) {
      memcpy(&local_158,auStack_270,0x118);
                    /* try { // try from 0079d27c to 0079d283 has its CatchHandler @ 0079d2d4 */
      <tokio::sync::mpsc::unbounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::add_permit
                (lVar8 + 0x1c0);
      goto LAB_0079d284;
    }
    if (((*(byte *)(lVar8 + 0x1b8) & 1) != 0) &&
       (iVar3 = <tokio::sync::mpsc::unbounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::
                is_idle(lVar8 + 0x1c0), iVar3 != 0)) goto LAB_0079d25c;
    uVar7 = 0xfffffffffffffffe;
  }
  *(undefined8 *)((long)param_1 + 0x100) = uVar7;
LAB_0079d298:
  <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop(&local_274);
  return;
}


// ===== 0079d310  FUN_0079d310 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0079d310(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  long lVar9;
  bool bVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  auVar22 = alloc::sync::arcinner_layout_for_value_layout(8,0xb0);
  lVar13 = auVar22._8_8_;
  puVar11 = auVar22._0_8_;
  puVar12 = puVar11;
  lVar9 = local_78;
  if (lVar13 != 0) {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar12 = (undefined8 *)FUN_004b25a4(lVar13,puVar11);
    lVar9 = local_78;
  }
  if (puVar12 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(puVar11,lVar13);
  }
  puVar12[1] = 1;
  *puVar12 = 1;
  bVar10 = *(char *)((long)param_1 + 0x96) == '\x01';
  if (bVar10) {
    uStack_98 = *(undefined8 *)((long)param_1 + 0x9f);
    local_a0 = *(undefined8 *)((long)param_1 + 0x97);
  }
  uVar1 = *(undefined4 *)(param_1 + 0xd);
  uVar2 = *(undefined4 *)(param_1 + 0xf);
  uVar5 = *(undefined1 *)(param_1 + 0x12);
  uVar15 = *param_1;
  uVar19 = param_1[1];
  uVar6 = *(undefined1 *)((long)param_1 + 0x91);
  uVar17 = param_1[0xc];
  uVar16 = param_1[0xe];
  uVar7 = *(undefined1 *)((long)param_1 + 0xa7);
  uVar8 = *(undefined1 *)(param_1 + 0x15);
  uVar4 = *(undefined4 *)((long)param_1 + 0x92);
  uVar18 = param_1[2];
  uVar20 = param_1[3];
  local_78 = param_1[4];
  if (local_78 != -1) {
                    /* try { // try from 0079d3f0 to 0079d3f7 has its CatchHandler @ 0079d4b4 */
    local_78 = lVar9;
    <alloc::string::String_as_core::clone::Clone>::clone(&local_78);
    uStack_88 = uStack_68;
    local_90 = local_70;
  }
  puVar12[6] = local_78;
  uVar3 = *(undefined4 *)(param_1 + 0x11);
  uVar14 = param_1[0x10];
  puVar12[2] = uVar15;
  puVar12[3] = uVar19;
  puVar12[4] = uVar18;
  puVar12[5] = uVar20;
  puVar12[8] = uStack_88;
  puVar12[7] = local_90;
  uVar19 = param_1[8];
  uVar18 = param_1[7];
  uVar21 = param_1[10];
  uVar20 = param_1[9];
  uVar15 = param_1[0xb];
  puVar12[0x12] = uVar14;
  *(undefined4 *)(puVar12 + 0x13) = uVar3;
  puVar12[0xd] = uVar15;
  puVar12[0xe] = uVar17;
  *(undefined1 *)((long)puVar12 + 0xa1) = uVar6;
  puVar12[10] = uVar19;
  puVar12[9] = uVar18;
  *(undefined4 *)((long)puVar12 + 0xa2) = uVar4;
  puVar12[0xc] = uVar21;
  puVar12[0xb] = uVar20;
  *(undefined4 *)(puVar12 + 0xf) = uVar1;
  puVar12[0x10] = uVar16;
  *(undefined4 *)(puVar12 + 0x11) = uVar2;
  *(undefined1 *)(puVar12 + 0x14) = uVar5;
  *(bool *)((long)puVar12 + 0xa6) = bVar10;
  *(undefined8 *)((long)puVar12 + 0xaf) = uStack_98;
  *(undefined8 *)((long)puVar12 + 0xa7) = local_a0;
  *(undefined1 *)((long)puVar12 + 0xb7) = uVar7;
  *(undefined1 *)(puVar12 + 0x17) = uVar8;
  return puVar12;
}


// ===== 0079d4cc  <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<dyn Trait<Assoc = X> +
   reqwest::dns::resolve::Resolve>>::drop_slow */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::drop_slow
          (undefined8 *param_1)

{
  long *plVar1;
  void *__ptr;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  
  __ptr = (void *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  uVar6 = puVar2[2];
  if ((code *)*puVar2 != (code *)0x0) {
                    /* try { // try from 0079d4f8 to 0079d4ff has its CatchHandler @ 0079d56c */
    (*(code *)*puVar2)((long)__ptr + (uVar6 - 1 & 0xfffffffffffffff0) + 0x10);
  }
  if (__ptr != (void *)0xffffffffffffffff) {
    plVar1 = (long *)((long)__ptr + 8);
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 + -1 == 0) {
      DataMemoryBarrier(2,1);
      if (uVar6 < 9) {
        uVar6 = 8;
      }
      if ((uVar6 + puVar2[1] + 0xf & -uVar6) != 0) {
        free(__ptr);
        return;
      }
    }
  }
  return;
}


// ===== 0079d584  <alloc::sync::[n]::alloc::sync::Arc<alloc::vec::Vec<reqwest::proxy::Proxy>>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<alloc::vec::Vec<reqwest::proxy::Proxy>>>::drop_slow */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<alloc::vec::Vec<reqwest::proxy::Proxy>>>::drop_slow
          (undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  void *__ptr;
  
  __ptr = (void *)*param_1;
  lVar5 = *(long *)((long)__ptr + 0x20) + 1;
  lVar4 = *(long *)((long)__ptr + 0x18);
  while (lVar5 = lVar5 + -1, lVar5 != 0) {
                    /* try { // try from 0079d5b0 to 0079d5b3 has its CatchHandler @ 0079d630 */
    FUN_007864bc(lVar4);
    lVar4 = lVar4 + 0x88;
  }
  if (*(long *)((long)__ptr + 0x10) != 0) {
    free(*(void **)((long)__ptr + 0x18));
  }
  if (__ptr != (void *)0xffffffffffffffff) {
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
    if (lVar5 + -1 == 0) {
      DataMemoryBarrier(2,1);
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 0079d6ac  <alloc::sync::[n]::alloc::sync::Arc<futures_channel::oneshot::Inner<hyper_util::client::legacy::client::PoolClient<reqwest::async_impl::body::Body>>>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<futures_channel::oneshot::Inner<hyper_util::client::legacy::client::PoolClient<reqwest::async_impl::body::Body>>>>::drop_slow
    */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<futures_channel::oneshot::Inner<hyper_util::client::legacy::client::PoolClient<reqwest::async_impl::body::Body>>>>
::drop_slow(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  void *__ptr;
  
  __ptr = (void *)*param_1;
  if (*(char *)((long)__ptr + 0x41) != '\x02') {
                    /* try { // try from 0079d6c8 to 0079d6cf has its CatchHandler @ 0079d788 */
    FUN_0079bc98((long)__ptr + 0x28);
    plVar3 = *(long **)((long)__ptr + 0x10);
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
                    /* try { // try from 0079d6ec to 0079d6f3 has its CatchHandler @ 0079d76c */
      <alloc::sync::[n]::alloc::sync::Arc<want::Inner>>::drop_slow((long)__ptr + 0x10);
    }
                    /* try { // try from 0079d6f4 to 0079d6fb has its CatchHandler @ 0079d780 */
    FUN_0079b388((long)__ptr + 0x18);
  }
  if (*(long *)((long)__ptr + 0x50) != 0) {
                    /* try { // try from 0079d70c to 0079d70f has its CatchHandler @ 0079d7b8 */
    (**(code **)(*(long *)((long)__ptr + 0x50) + 0x18))(*(undefined8 *)((long)__ptr + 0x58));
  }
  if (*(long *)((long)__ptr + 0x68) != 0) {
                    /* try { // try from 0079d720 to 0079d723 has its CatchHandler @ 0079d7b0 */
    (**(code **)(*(long *)((long)__ptr + 0x68) + 0x18))(*(undefined8 *)((long)__ptr + 0x70));
  }
  if (__ptr != (void *)0xffffffffffffffff) {
    plVar3 = (long *)((long)__ptr + 8);
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
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 0079d810  <alloc::sync::[n]::alloc::sync::Arc<futures_channel::oneshot::Inner<core::convert::Infallible>>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<futures_channel::oneshot::Inner<core::convert::Infallible>>>::drop_slow
    */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<futures_channel::oneshot::Inner<core::convert::Infallible>>>::
drop_slow(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  void *__ptr;
  
  __ptr = (void *)*param_1;
  if (*(long *)((long)__ptr + 0x10) != 0) {
                    /* try { // try from 0079d830 to 0079d833 has its CatchHandler @ 0079d898 */
    (**(code **)(*(long *)((long)__ptr + 0x10) + 0x18))(*(undefined8 *)((long)__ptr + 0x18));
  }
  if (*(long *)((long)__ptr + 0x28) != 0) {
                    /* try { // try from 0079d844 to 0079d847 has its CatchHandler @ 0079d890 */
    (**(code **)(*(long *)((long)__ptr + 0x28) + 0x18))(*(undefined8 *)((long)__ptr + 0x30));
  }
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


// ===== 0079d8f0  <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::oneshot::Inner<core[bcece726f298455b]::result::Result<http[b87e90c26fe47eb4]::response::Response<hyper[9f1bfd30b08ca095]::body::incoming::Incoming>,hyper[9f1bfd30b08ca095]::client::dispatch::TrySendError<http[b87e90c26fe47eb4]::request::Request<reqwest[6fed810f3e38d558]::async_impl::body::Body>>>>>>::drop_slow =====

/* <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::oneshot::Inner<core[bcece726f298455b]::result::Result<http[b87e90c26fe47eb4]::response::Response<hyper[9f1bfd30b08ca095]::body::incoming::Incoming>,
   hyper[9f1bfd30b08ca095]::client::dispatch::TrySendError<http[b87e90c26fe47eb4]::request::Request<reqwest[6fed810f3e38d558]::async_impl::body::Body>>>>>>::drop_slow
    */

void <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::oneshot::Inner<core[bcece726f298455b]::result::Result<http[b87e90c26fe47eb4]::response::Response<hyper[9f1bfd30b08ca095]::body::incoming::Incoming>,hyper[9f1bfd30b08ca095]::client::dispatch::TrySendError<http[b87e90c26fe47eb4]::request::Request<reqwest[6fed810f3e38d558]::async_impl::body::Body>>>>>>
     ::drop_slow(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  void *__ptr;
  ulong uVar5;
  
  __ptr = (void *)*param_1;
  uVar5 = *(ulong *)((long)__ptr + 0x30);
  if ((uVar5 & 1) != 0) {
                    /* try { // try from 0079d908 to 0079d91b has its CatchHandler @ 0079d980 */
    <tokio::sync::oneshot::tokio::sync::oneshot::Task>::drop_task((long)__ptr + 0x20);
  }
  if (((uint)uVar5 >> 3 & 1) != 0) {
    <tokio::sync::oneshot::tokio::sync::oneshot::Task>::drop_task((long)__ptr + 0x10);
  }
  if (*(long *)((long)__ptr + 0x38) != -3) {
                    /* try { // try from 0079d92c to 0079d92f has its CatchHandler @ 0079d978 */
    FUN_0079a540();
  }
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


// ===== 0079d9dc  <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::oneshot::Inner<core[bcece726f298455b]::result::Result<http[b87e90c26fe47eb4]::response::Response<hyper[9f1bfd30b08ca095]::body::incoming::Incoming>,hyper[9f1bfd30b08ca095]::error::Error>>>>::drop_slow =====

/* <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::oneshot::Inner<core[bcece726f298455b]::result::Result<http[b87e90c26fe47eb4]::response::Response<hyper[9f1bfd30b08ca095]::body::incoming::Incoming>,
   hyper[9f1bfd30b08ca095]::error::Error>>>>::drop_slow */

void <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::oneshot::Inner<core[bcece726f298455b]::result::Result<http[b87e90c26fe47eb4]::response::Response<hyper[9f1bfd30b08ca095]::body::incoming::Incoming>,hyper[9f1bfd30b08ca095]::error::Error>>>>
     ::drop_slow(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  void *__ptr;
  ulong uVar5;
  
  __ptr = (void *)*param_1;
  uVar5 = *(ulong *)((long)__ptr + 0xc0);
  if ((uVar5 & 1) != 0) {
                    /* try { // try from 0079d9f4 to 0079da07 has its CatchHandler @ 0079da6c */
    <tokio::sync::oneshot::tokio::sync::oneshot::Task>::drop_task((long)__ptr + 0xb0);
  }
  if (((uint)uVar5 >> 3 & 1) != 0) {
    <tokio::sync::oneshot::tokio::sync::oneshot::Task>::drop_task((long)__ptr + 0xa0);
  }
  if (*(long *)((long)__ptr + 0x10) != -2) {
                    /* try { // try from 0079da14 to 0079da1b has its CatchHandler @ 0079da64 */
    FUN_0079a63c((long)__ptr + 0x10);
  }
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


// ===== 0079dac4  <alloc::sync::[n]::alloc::sync::Arc<std::collections::hash::map::HashMap<alloc::string::String,alloc::vec::Vec<core::net::socket_addr::SocketAddr>>>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<std::collections::hash::map::HashMap<alloc::string::String,
   alloc::vec::Vec<core::net::socket_addr::SocketAddr>>>>::drop_slow */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<std::collections::hash::map::HashMap<alloc::string::String,alloc::vec::Vec<core::net::socket_addr::SocketAddr>>>>
::drop_slow(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  void *__ptr;
  
  __ptr = (void *)*param_1;
                    /* try { // try from 0079dad4 to 0079dadb has its CatchHandler @ 0079db24 */
  FUN_007b38f0((long)__ptr + 0x10);
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


// ===== 0079db64  <alloc::sync::[n]::alloc::sync::Arc<std::collections::hash::map::HashMap<alloc::string::String,reqwest::proxy::ProxyScheme>>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<std::collections::hash::map::HashMap<alloc::string::String,
   reqwest::proxy::ProxyScheme>>>::drop_slow */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<std::collections::hash::map::HashMap<alloc::string::String,reqwest::proxy::ProxyScheme>>>
::drop_slow(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  void *__ptr;
  
  __ptr = (void *)*param_1;
                    /* try { // try from 0079db74 to 0079db7b has its CatchHandler @ 0079dbc4 */
  FUN_007b39fc((long)__ptr + 0x10);
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


// ===== 0079dc04  FUN_0079dc04 =====

void FUN_0079dc04(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined **local_20;
  code *pcStack_18;
  
  plVar1 = (long *)(*param_1 + 8);
  do {
    lVar4 = *plVar1;
    while (lVar4 != -1) {
      if (lVar4 < 0) {
        local_20 = &PTR_s_Arc_counter_overflow_00adcbc0;
        pcStack_18 = FUN_00782f80;
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  (&DAT_002ab692,&local_20,&PTR_s__nix_store_8006w282fgsx3273c878b_00adcbd0);
      }
      lVar5 = *plVar1;
      if (lVar5 == lVar4) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        lVar4 = lVar5;
        if (cVar2 == '\0') {
          return;
        }
      }
      else {
        ClearExclusiveLocal();
        lVar4 = lVar5;
      }
    }
    InstructionSynchronizationBarrier();
  } while( true );
}


// ===== 0079dc94  <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::sync::poison::mutex::Mutex<hyper_util[52a210df7efc1bae]::client::legacy::pool::PoolInner<hyper_util[52a210df7efc1bae]::client::legacy::client::PoolClient<reqwest[6fed810f3e38d558]::async_impl::body::Body>,(http[b87e90c26fe47eb4]::uri::scheme::Scheme,http[b87e90c26fe47eb4]::uri::authority::Authority)>>>>::drop_slow =====

/* <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::sync::poison::mutex::Mutex<hyper_util[52a210df7efc1bae]::client::legacy::pool::PoolInner<hyper_util[52a210df7efc1bae]::client::legacy::client::PoolClient<reqwest[6fed810f3e38d558]::async_impl::body::Body>,
   (http[b87e90c26fe47eb4]::uri::scheme::Scheme,
   http[b87e90c26fe47eb4]::uri::authority::Authority)>>>>::drop_slow */

void <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::sync::poison::mutex::Mutex<hyper_util[52a210df7efc1bae]::client::legacy::pool::PoolInner<hyper_util[52a210df7efc1bae]::client::legacy::client::PoolClient<reqwest[6fed810f3e38d558]::async_impl::body::Body>,(http[b87e90c26fe47eb4]::uri::scheme::Scheme,http[b87e90c26fe47eb4]::uri::authority::Authority)>>>>
     ::drop_slow(undefined8 *param_1)

{
  char *pcVar1;
  char cVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  void *__ptr;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  
  __ptr = (void *)*param_1;
                    /* try { // try from 0079dcb0 to 0079dcb7 has its CatchHandler @ 0079df84 */
  FUN_007b3ee0((long)__ptr + 0x28);
  lVar7 = *(long *)((long)__ptr + 0x60);
  if (lVar7 != 0) {
    lVar8 = *(long *)((long)__ptr + 0x70);
    if (lVar8 != 0) {
      puVar10 = *(undefined8 **)((long)__ptr + 0x58);
      puVar11 = puVar10 + 1;
      uVar12 = NEON_cmge(*puVar10,0,1);
      uVar12 = uVar12 & 0x8080808080808080;
      do {
        for (; uVar12 == 0; uVar12 = uVar12 & 0x8080808080808080) {
          puVar10 = puVar10 + -0x48;
          uVar12 = NEON_cmge(*puVar11,0,1);
          puVar11 = puVar11 + 1;
        }
        uVar3 = (uVar12 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar12 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
                    /* try { // try from 0079dd14 to 0079dd17 has its CatchHandler @ 0079df9c */
        FUN_007b23ec(puVar10 + (long)-(int)((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) * 9
                               + -9);
        lVar8 = lVar8 + -1;
        uVar12 = uVar12 - 1 & uVar12;
      } while (lVar8 != 0);
    }
    if (lVar7 * 0x49 != -0x51) {
      free((void *)(*(long *)((long)__ptr + 0x58) + lVar7 * -0x48 + -0x48));
    }
  }
  lVar7 = *(long *)((long)__ptr + 0x90);
  if (lVar7 != 0) {
    lVar8 = *(long *)((long)__ptr + 0xa0);
    if (lVar8 != 0) {
      puVar10 = *(undefined8 **)((long)__ptr + 0x88);
      puVar11 = puVar10 + 1;
      uVar12 = NEON_cmge(*puVar10,0,1);
      uVar12 = uVar12 & 0x8080808080808080;
      do {
        for (; uVar12 == 0; uVar12 = uVar12 & 0x8080808080808080) {
          puVar10 = puVar10 + -0x50;
          uVar12 = NEON_cmge(*puVar11,0,1);
          puVar11 = puVar11 + 1;
        }
        uVar3 = (uVar12 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar12 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
                    /* try { // try from 0079ddac to 0079ddaf has its CatchHandler @ 0079df94 */
        FUN_007b2538(puVar10 + (long)-(int)((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) * 10
                               + -10);
        lVar8 = lVar8 + -1;
        uVar12 = uVar12 - 1 & uVar12;
      } while (lVar8 != 0);
    }
    if (lVar7 * 0x51 != -0x59) {
      free((void *)(*(long *)((long)__ptr + 0x88) + lVar7 * -0x50 + -0x50));
    }
  }
  plVar9 = (long *)((long)__ptr + 0xd0);
  lVar7 = *plVar9;
  if (lVar7 != 0) {
    pcVar1 = (char *)(lVar7 + 0x20);
    *(undefined4 *)(lVar7 + 0x40) = 1;
    do {
      cVar2 = *pcVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar5) {
        *pcVar1 = '\x01';
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (cVar2 == '\0') {
      lVar8 = *(long *)(lVar7 + 0x10);
      *(undefined8 *)(lVar7 + 0x10) = 0;
      *(undefined4 *)(lVar7 + 0x20) = 0;
      if (lVar8 != 0) {
                    /* try { // try from 0079de2c to 0079de2f has its CatchHandler @ 0079df3c */
        (**(code **)(lVar8 + 8))(*(undefined8 *)(lVar7 + 0x18));
      }
    }
    pcVar1 = (char *)(lVar7 + 0x38);
    do {
      cVar2 = *pcVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar5) {
        *pcVar1 = '\x01';
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (cVar2 == '\0') {
      lVar8 = *(long *)(lVar7 + 0x28);
      *(undefined8 *)(lVar7 + 0x28) = 0;
      if (lVar8 != 0) {
                    /* try { // try from 0079de58 to 0079de5b has its CatchHandler @ 0079df30 */
        (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar7 + 0x30));
      }
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
    }
    plVar6 = (long *)*plVar9;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 0079de7c to 0079de83 has its CatchHandler @ 0079df74 */
      <alloc::sync::[n]::alloc::sync::Arc<futures_channel::oneshot::Inner<core::convert::Infallible>>>
      ::drop_slow(plVar9);
    }
  }
  plVar9 = *(long **)((long)__ptr + 0xb8);
  do {
    lVar7 = *plVar9;
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar5) {
      *plVar9 = lVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar7 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0079dea4 to 0079dea7 has its CatchHandler @ 0079df7c */
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
    drop_slow();
  }
  plVar9 = *(long **)((long)__ptr + 0x18);
  if (plVar9 != (long *)0x0) {
    do {
      lVar7 = *plVar9;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 0079dec8 to 0079decf has its CatchHandler @ 0079df6c */
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
      drop_slow((long)__ptr + 0x18);
    }
  }
  if (__ptr != (void *)0xffffffffffffffff) {
    plVar9 = (long *)((long)__ptr + 8);
    do {
      lVar7 = *plVar9;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      DataMemoryBarrier(2,1);
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 0079e03c  <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::mpsc::chan::Chan<hyper[9f1bfd30b08ca095]::client::dispatch::Envelope<http[b87e90c26fe47eb4]::request::Request<reqwest[6fed810f3e38d558]::async_impl::body::Body>,http[b87e90c26fe47eb4]::response::Response<hyper[9f1bfd30b08ca095]::body::incoming::Incoming>>,tokio[8c8895dbfa691109]::sync::mpsc::unbounded::Semaphore>>>::drop_slow =====

/* <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::mpsc::chan::Chan<hyper[9f1bfd30b08ca095]::client::dispatch::Envelope<http[b87e90c26fe47eb4]::request::Request<reqwest[6fed810f3e38d558]::async_impl::body::Body>,
   http[b87e90c26fe47eb4]::response::Response<hyper[9f1bfd30b08ca095]::body::incoming::Incoming>>,
   tokio[8c8895dbfa691109]::sync::mpsc::unbounded::Semaphore>>>::drop_slow */

void <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::mpsc::chan::Chan<hyper[9f1bfd30b08ca095]::client::dispatch::Envelope<http[b87e90c26fe47eb4]::request::Request<reqwest[6fed810f3e38d558]::async_impl::body::Body>,http[b87e90c26fe47eb4]::response::Response<hyper[9f1bfd30b08ca095]::body::incoming::Incoming>>,tokio[8c8895dbfa691109]::sync::mpsc::unbounded::Semaphore>>>
     ::drop_slow(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  void *__ptr;
  long lVar5;
  void *__ptr_00;
  void *pvVar6;
  undefined1 auStack_148 [256];
  ulong local_48;
  
  __ptr_00 = (void *)*param_1;
  do {
                    /* try { // try from 0079e054 to 0079e06f has its CatchHandler @ 0079e0f8 */
    FUN_0079bf6c(auStack_148,(long)__ptr_00 + 0x1a0,(long)__ptr_00 + 0x80);
    uVar4 = local_48;
    FUN_0079a3dc(auStack_148);
  } while (uVar4 < 0xfffffffffffffffe);
  __ptr = *(void **)((long)__ptr_00 + 0x1a8);
  do {
    pvVar6 = *(void **)((long)__ptr + 0x2308);
    free(__ptr);
    __ptr = pvVar6;
  } while (pvVar6 != (void *)0x0);
  if (*(long *)((long)__ptr_00 + 0x100) != 0) {
                    /* try { // try from 0079e0a4 to 0079e0a7 has its CatchHandler @ 0079e0f0 */
    (**(code **)(*(long *)((long)__ptr_00 + 0x100) + 0x18))(*(undefined8 *)((long)__ptr_00 + 0x108))
    ;
  }
  if (__ptr_00 != (void *)0xffffffffffffffff) {
    plVar1 = (long *)((long)__ptr_00 + 8);
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      DataMemoryBarrier(2,1);
      free(__ptr_00);
    }
  }
  return;
}


// ===== 0079e150  <alloc::sync::[n]::alloc::sync::Arc<want::Inner>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<want::Inner>>::drop_slow */

void __rustcall <alloc::sync::[n]::alloc::sync::Arc<want::Inner>>::drop_slow(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  void *__ptr;
  
  __ptr = (void *)*param_1;
  if (*(long *)((long)__ptr + 0x18) != 0) {
                    /* try { // try from 0079e170 to 0079e173 has its CatchHandler @ 0079e1bc */
    (**(code **)(*(long *)((long)__ptr + 0x18) + 0x18))(*(undefined8 *)((long)__ptr + 0x20));
  }
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


// ===== 0079e1fc  <alloc::sync::[n]::alloc::sync::Arc<reqwest::async_impl::client::ClientRef>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<reqwest::async_impl::client::ClientRef>>::drop_slow */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<reqwest::async_impl::client::ClientRef>>::drop_slow
          (undefined8 *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  void *__ptr_00;
  
  __ptr_00 = (void *)*param_1;
                    /* try { // try from 0079e210 to 0079e217 has its CatchHandler @ 0079e2f4 */
  FUN_0079bb48((long)__ptr_00 + 0xe0);
                    /* try { // try from 0079e218 to 0079e21f has its CatchHandler @ 0079e2ec */
  FUN_0079b038((long)__ptr_00 + 0x10);
  if (*(long *)((long)__ptr_00 + 0x140) == 0) {
    __ptr = *(void **)((long)__ptr_00 + 0x148);
    puVar1 = *(undefined8 **)((long)__ptr_00 + 0x150);
    pcVar4 = (code *)*puVar1;
    if (pcVar4 != (code *)0x0) {
                    /* try { // try from 0079e234 to 0079e23b has its CatchHandler @ 0079e2c4 */
      (*pcVar4)(__ptr);
    }
    if (puVar1[1] != 0) {
      free(__ptr);
    }
  }
  plVar5 = *(long **)((long)__ptr_00 + 0x178);
  do {
    lVar6 = *plVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0079e26c to 0079e273 has its CatchHandler @ 0079e2e4 */
    <alloc::sync::[n]::alloc::sync::Arc<alloc::vec::Vec<reqwest::proxy::Proxy>>>::drop_slow
              ((long)__ptr_00 + 0x178);
  }
  if (__ptr_00 != (void *)0xffffffffffffffff) {
    plVar5 = (long *)((long)__ptr_00 + 8);
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      DataMemoryBarrier(2,1);
      free(__ptr_00);
      return;
    }
  }
  return;
}


// ===== 0079e36c  FUN_0079e36c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0079e36c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  void *__s2;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [12];
  unkuint10 Var5;
  long local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 auStack_70 [8];
  char local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_4 == 0) {
    return;
  }
  param_3 = param_3 + param_4 * 0x58;
  auVar2 = <url::url::Url>::host_str(param_2);
  auVar3 = <url::url::Url>::host_str(param_3 + -0x58);
  __s2 = auVar3._0_8_;
  if (auVar2._0_8_ == (void *)0x0) {
    if (__s2 != (void *)0x0) goto LAB_0079e42c;
  }
  else if (((__s2 == (void *)0x0) || (auVar2._8_8_ != auVar3._8_8_)) ||
          (iVar1 = memcmp(auVar2._0_8_,__s2,auVar2._8_8_), iVar1 != 0)) goto LAB_0079e42c;
  auVar4 = FUN_00799f7c(*(undefined2 *)(param_2 + 0x28),*(undefined2 *)(param_2 + 0x2a),param_2);
  Var5 = FUN_00799f7c(*(undefined2 *)(param_3 + -0x30),*(undefined2 *)(param_3 + -0x2e),
                      param_3 + -0x58);
  if ((auVar4 & (undefined1  [12])0x1) == (undefined1  [12])0x0) {
    if ((Var5 & 0xffff) == 0) {
      return;
    }
  }
  else if (((Var5 & 1) != 0) && ((auVar4._8_4_ & 0xffff) == (uint)(ushort)(Var5 >> 0x40))) {
    return;
  }
LAB_0079e42c:
  uStack_58 = _UNK_002bfad0;
  local_60 = _s__002bfac8;
  uStack_48 = _UNK_002bfae0;
  uStack_50 = _DAT_002bfad8;
  FUN_007c3138(&local_88,param_1,&local_60);
  if (local_68 != '\x02') {
    (**(code **)(local_88 + 0x20))(auStack_70,uStack_80,local_78);
  }
  uStack_58 = _UNK_002bf870;
  local_60 = _DAT_002bf868;
  uStack_48 = _UNK_002bf880;
  uStack_50 = _DAT_002bf878;
  FUN_007c3138(&local_88,param_1,&local_60);
  if (local_68 != '\x02') {
    (**(code **)(local_88 + 0x20))(auStack_70,uStack_80,local_78);
  }
  FUN_007c351c(&local_88,param_1,"cookie2",7);
  if (local_68 != '\x02') {
    (**(code **)(local_88 + 0x20))(auStack_70,uStack_80,local_78);
  }
  uStack_58 = _UNK_002bfc90;
  local_60 = _s__002bfc88;
  uStack_48 = _UNK_002bfca0;
  uStack_50 = _DAT_002bfc98;
  FUN_007c3138(&local_88,param_1,&local_60);
  if (local_68 != '\x02') {
    (**(code **)(local_88 + 0x20))(auStack_70,uStack_80,local_78);
  }
  uStack_58 = _UNK_002bff90;
  local_60 = _s__002bff88;
  uStack_48 = _UNK_002bffa0;
  uStack_50 = _DAT_002bff98;
  FUN_007c3138(&local_88,param_1,&local_60);
  if (local_68 != '\x02') {
    (**(code **)(local_88 + 0x20))(auStack_70,uStack_80,local_78);
  }
  return;
}


// ===== 0079e590  FUN_0079e590 =====

void FUN_0079e590(void)

{
  return;
}


// ===== 0079e594  FUN_0079e594 =====

void FUN_0079e594(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  param_1[2] = param_4;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00adcbe8;
  param_1[1] = param_3;
  return;
}


// ===== 0079e5a8  FUN_0079e5a8 =====

undefined8 FUN_0079e5a8(void)

{
  return 0;
}


// ===== 0079e5b0  <reqwest::connect::sealed::Conn_as_hyper_util::client::legacy::connect::Connection>::connected =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::connect::sealed::Conn as hyper_util::client::legacy::connect::Connection>::connected */

void __rustcall
<reqwest::connect::sealed::Conn_as_hyper_util::client::legacy::connect::Connection>::connected
          (undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long local_68 [3];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *param_2;
  lVar2 = param_2[1];
  (**(code **)(lVar2 + 0x50))(&local_50,uVar1);
  uStack_38._0_2_ = CONCAT11(*(undefined1 *)(param_2 + 2),(undefined1)uStack_38);
  uVar3 = uStack_38;
                    /* try { // try from 0079e5fc to 0079e607 has its CatchHandler @ 0079e65c */
  if (((*(byte *)((long)param_2 + 0x11) & 1) != 0) &&
     ((**(code **)(lVar2 + 0x60))(local_68,uVar1), local_68[0] != -2)) {
    uStack_38 = uVar3;
    FUN_007c88e4(param_1,&local_50,local_68);
    return;
  }
  param_1[1] = uStack_48;
  *param_1 = local_50;
  param_1[3] = uVar3;
  param_1[2] = uStack_40;
  return;
}


// ===== 0079e674  <reqwest::connect::sealed::Conn_as_hyper::rt::io::Write>::poll_flush =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::connect::sealed::Conn as hyper::rt::io::Write>::poll_flush */

void __rustcall
<reqwest::connect::sealed::Conn_as_hyper::rt::io::Write>::poll_flush(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0079e67c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x28))(*param_1);
  return;
}


// ===== 0079e680  <reqwest::connect::sealed::Conn_as_hyper::rt::io::Write>::poll_write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::connect::sealed::Conn as hyper::rt::io::Write>::poll_write */

void __rustcall
<reqwest::connect::sealed::Conn_as_hyper::rt::io::Write>::poll_write(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0079e68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x20))(*param_1);
  return;
}


// ===== 0079e690  <reqwest::connect::sealed::Conn_as_hyper::rt::io::Write>::poll_shutdown =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::connect::sealed::Conn as hyper::rt::io::Write>::poll_shutdown */

void __rustcall
<reqwest::connect::sealed::Conn_as_hyper::rt::io::Write>::poll_shutdown(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0079e698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x30))(*param_1);
  return;
}


// ===== 0079e69c  <reqwest::connect::sealed::Conn_as_hyper::rt::io::Write>::is_write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::connect::sealed::Conn as hyper::rt::io::Write>::is_write_vectored */

void __rustcall
<reqwest::connect::sealed::Conn_as_hyper::rt::io::Write>::is_write_vectored(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0079e6a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x38))(*param_1);
  return;
}


// ===== 0079e6a8  <reqwest::connect::sealed::Conn_as_hyper::rt::io::Write>::poll_write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::connect::sealed::Conn as hyper::rt::io::Write>::poll_write_vectored */

void __rustcall
<reqwest::connect::sealed::Conn_as_hyper::rt::io::Write>::poll_write_vectored(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0079e6b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x40))(*param_1);
  return;
}


// ===== 0079e6b8  <reqwest::redirect::Policy_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::redirect::Policy as core::fmt::Debug>::fmt */

void __rustcall
<reqwest::redirect::Policy_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple(auStack_38,param_2,"Policy",6);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field
            (auStack_38,param_1,&PTR_FUN_00adcc28);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::finish();
  return;
}


// ===== 0079e710  FUN_0079e710 =====

void FUN_0079e710(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,"Elapsed",7,&local_18,&DAT_00adcc48);
  return;
}


// ===== 0079e750  FUN_0079e750 =====

void FUN_0079e750(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = ((long *)*param_1)[1];
                    /* WARNING: Could not recover jumptable at 0x0079e76c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x18))
            (*(long *)*param_1 + (*(long *)(lVar1 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
  return;
}


// ===== 0079e770  FUN_0079e770 =====

void FUN_0079e770(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined1 auStack_68 [16];
  undefined8 *local_58;
  undefined8 *local_38;
  
  lVar3 = *(long *)*param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_map(auStack_68,param_2);
  lVar4 = *(long *)(lVar3 + 0x28);
  if (lVar4 != 0) {
    puVar5 = *(undefined8 **)(lVar3 + 0x10);
    puVar6 = puVar5 + 1;
    uVar7 = NEON_cmge(*puVar5,0,1);
    uVar7 = uVar7 & 0x8080808080808080;
    do {
      for (; uVar7 == 0; uVar7 = uVar7 & 0x8080808080808080) {
        puVar5 = puVar5 + -0x68;
        uVar7 = NEON_cmge(*puVar6,0,1);
        puVar6 = puVar6 + 1;
      }
      uVar1 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 - 1 & uVar7;
      iVar2 = (int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3);
      lVar4 = lVar4 + -1;
      local_58 = puVar5 + (long)-iVar2 * 0xd + -0xd;
      local_38 = puVar5 + (long)-iVar2 * 0xd + -10;
      <core::fmt::builders::[7]::core::fmt::builders::DebugMap>::entry
                (auStack_68,&local_58,&DAT_00ad8780,&local_38,&DAT_00ad88e0);
    } while (lVar4 != 0);
  }
  <core::fmt::builders::[7]::core::fmt::builders::DebugMap>::finish(auStack_68);
  return;
}


// ===== 0079e864  FUN_0079e864 =====

void FUN_0079e864(undefined8 *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,&DAT_002e3a28 + *(int *)(&DAT_002e3a28 + (ulong)*(byte *)*param_1 * 4),
             *(undefined8 *)(&DAT_002e39d0 + (ulong)*(byte *)*param_1 * 8));
  return;
}


// ===== 0079e890  FUN_0079e890 =====

void FUN_0079e890(undefined8 *param_1)

{
  <http::status::StatusCode_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 0079e898  FUN_0079e898 =====

void FUN_0079e898(undefined8 *param_1)

{
  <http::status::StatusCode_as_core::fmt::Display>::fmt(*param_1);
  return;
}


// ===== 0079e8a0  <reqwest::redirect::PolicyKind_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::redirect::PolicyKind as core::fmt::Debug>::fmt */

void __rustcall
<reqwest::redirect::PolicyKind_as_core::fmt::Debug>::fmt(long *param_1,undefined8 param_2)

{
  long local_30;
  undefined1 auStack_28 [24];
  
  if (*param_1 == 0) {
    <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"Custom",6);
    return;
  }
  if (*param_1 == 1) {
    local_30 = param_1[1];
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple(auStack_28,param_2,"Limit",5);
    <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field
              (auStack_28,&local_30,&DAT_00adcc98);
    <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::finish();
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,&DAT_002bd198,4);
  return;
}


// ===== 0079e924  <reqwest::redirect::TooManyRedirects_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::redirect::TooManyRedirects as core::fmt::Display>::fmt */

void __rustcall
<reqwest::redirect::TooManyRedirects_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"too many redirects",0x12);
  return;
}


// ===== 0079e938  <http::request::Request<reqwest::async_impl::body::Body>as_core::convert::TryFrom<reqwest::async_impl::request::Request>>::try_from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::request::Request<reqwest::async_impl::body::Body> as
   core::convert::TryFrom<reqwest::async_impl::request::Request>>::try_from */

void __rustcall
<http::request::Request<reqwest::async_impl::body::Body>as_core::convert::TryFrom<reqwest::async_impl::request::Request>>
::try_from(long *param_1,long *param_2)

{
  void *__ptr;
  long lVar1;
  void *__ptr_00;
  byte bVar2;
  undefined1 *__ptr_01;
  undefined8 *puVar3;
  ulong uVar4;
  char cVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  undefined **ppuVar10;
  uint uVar11;
  ulong uVar12;
  void *pvVar13;
  long lVar14;
  byte bVar15;
  ulong local_648;
  long local_640;
  long lStack_638;
  long lStack_630;
  long lStack_628;
  long local_620;
  long lStack_618;
  long lStack_610;
  long lStack_608;
  long local_600;
  long lStack_5f8;
  long lStack_5f0;
  long lStack_5e8;
  long local_5e0;
  undefined **ppuStack_5d8;
  undefined1 *puStack_5d0;
  undefined8 *local_5c8;
  long lStack_5c0;
  undefined **local_5b0;
  ulong uStack_5a8;
  undefined **local_5a0;
  long lStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  long local_550;
  long lStack_548;
  long lStack_540;
  long lStack_538;
  long local_530;
  long lStack_528;
  long local_520;
  long lStack_518;
  long local_510;
  long lStack_508;
  long local_500;
  undefined4 local_4f8;
  undefined4 uStack_4f4;
  void *local_4f0;
  long lStack_4e8;
  long local_4e0;
  long lStack_4d8;
  undefined **local_4d0;
  undefined1 *puStack_4c8;
  undefined8 *local_4c0;
  long lStack_4b8;
  long local_4b0;
  long lStack_4a8;
  undefined3 local_498;
  undefined1 uStack_495;
  undefined3 uStack_494;
  undefined **local_490;
  long lStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  long local_440;
  long lStack_438;
  long local_430;
  long lStack_428;
  long local_420;
  long lStack_418;
  long local_410;
  long lStack_408;
  long lStack_400;
  long lStack_3f8;
  long local_3f0;
  long local_3e0;
  long lStack_3d8;
  undefined4 local_3c8;
  undefined3 uStack_3c4;
  undefined **local_3c0;
  long lStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  long lStack_370;
  long lStack_368;
  long local_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  long local_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  long local_320;
  undefined **local_310;
  ulong uStack_308;
  undefined **ppuStack_300;
  long lStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  long local_2c0;
  long lStack_2b8;
  long local_2b0;
  long lStack_2a8;
  long local_2a0;
  long lStack_298;
  long local_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long local_270;
  void *local_250;
  long lStack_248;
  long local_240;
  long lStack_238;
  long local_230;
  long lStack_228;
  undefined3 local_218;
  undefined1 uStack_215;
  undefined3 uStack_214;
  undefined **local_210;
  undefined8 uStack_208;
  undefined **local_200;
  long lStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  char local_1b0;
  byte bStack_1af;
  undefined1 uStack_1ae;
  undefined5 uStack_1ad;
  undefined3 uStack_1a8;
  undefined5 uStack_1a5;
  undefined3 local_1a0;
  undefined5 uStack_19d;
  undefined3 uStack_198;
  undefined5 uStack_195;
  undefined3 local_190;
  undefined5 uStack_18d;
  undefined3 uStack_188;
  undefined5 uStack_185;
  undefined3 local_180;
  undefined5 uStack_17d;
  undefined3 uStack_178;
  undefined5 uStack_175;
  undefined3 local_170;
  undefined5 uStack_16d;
  undefined3 uStack_168;
  undefined5 uStack_165;
  undefined3 local_160;
  undefined5 uStack_15d;
  undefined4 uStack_158;
  undefined4 uStack_154;
  void *local_150;
  long lStack_148;
  long local_140;
  long lStack_138;
  char local_130;
  byte bStack_12f;
  undefined1 uStack_12e;
  undefined5 uStack_12d;
  undefined3 uStack_128;
  undefined5 uStack_125;
  undefined3 uStack_120;
  undefined8 local_11d;
  undefined8 uStack_115;
  undefined8 local_10d;
  undefined8 uStack_105;
  undefined8 local_fd;
  undefined8 uStack_f5;
  undefined8 local_ed;
  undefined5 uStack_e5;
  undefined3 uStack_e0;
  undefined5 uStack_dd;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined5 uStack_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  
  lStack_618 = param_2[10];
  local_620 = param_2[9];
  lStack_608 = param_2[0xc];
  lStack_610 = param_2[0xb];
  bVar2 = *(byte *)(param_2 + 0x1e);
  lStack_5f8 = param_2[0xe];
  local_600 = param_2[0xd];
  lVar14 = param_2[0x21];
  lStack_5e8 = param_2[0x10];
  lStack_5f0 = param_2[0xf];
  lStack_638 = param_2[6];
  local_640 = param_2[5];
  __ptr = (void *)param_2[0x1f];
  lVar8 = param_2[0x20];
  lStack_628 = param_2[8];
  lStack_630 = param_2[7];
  lStack_5c0 = param_2[4];
  ppuStack_5d8 = (undefined **)param_2[1];
  local_5e0 = *param_2;
  local_5c8 = (undefined8 *)param_2[3];
  puStack_5d0 = (undefined1 *)param_2[2];
  lVar1 = param_2[0x11];
  __ptr_00 = (void *)param_2[0x12];
  lVar9 = param_2[0x13];
                    /* try { // try from 0079e9c4 to 0079ea3b has its CatchHandler @ 0079f084 */
  <http::request::[2]::http::request::Parts>::new(&local_210);
  lStack_248 = lStack_148;
  local_250 = local_150;
  lStack_238 = lStack_138;
  local_240 = local_140;
  uStack_2e8 = uStack_1e8;
  local_2f0 = local_1f0;
  uStack_2d8 = uStack_1d8;
  local_2e0 = local_1e0;
  uStack_2c8 = uStack_1c8;
  local_2d0 = local_1d0;
  lStack_2b8 = uStack_1b8;
  local_2c0 = local_1c0;
  uStack_308 = (ulong)uStack_208;
  local_310 = local_210;
  lStack_2f8 = lStack_1f8;
  ppuStack_300 = local_200;
  <http::request::[4]::http::request::Builder>::version(&local_210,&local_310,(char)lVar14);
  lVar14 = lStack_148;
  pvVar13 = local_150;
  uVar4 = (ulong)uStack_208;
  lStack_288 = CONCAT53(uStack_175,uStack_178);
  local_290 = CONCAT53(uStack_17d,local_180);
  lStack_278 = CONCAT53(uStack_165,uStack_168);
  lStack_280 = CONCAT53(uStack_16d,local_170);
  lStack_2b8 = CONCAT53(uStack_1a5,uStack_1a8);
  local_2c0 = CONCAT53(uStack_1ad,CONCAT12(uStack_1ae,CONCAT11(bStack_1af,local_1b0)));
  local_270 = CONCAT53(uStack_15d,local_160);
  uStack_2d8 = uStack_1c8;
  local_2e0 = local_1d0;
  uStack_2c8 = uStack_1b8;
  local_2d0 = local_1c0;
  lStack_2a8 = CONCAT53(uStack_195,uStack_198);
  local_2b0 = CONCAT53(uStack_19d,local_1a0);
  local_648 = (ulong)uStack_208._2_6_;
  lStack_298 = CONCAT53(uStack_185,uStack_188);
  local_2a0 = CONCAT53(uStack_18d,local_190);
  uStack_308 = lStack_1f8;
  local_310 = local_200;
  lStack_2f8 = uStack_1e8;
  ppuStack_300 = (undefined **)local_1f0;
  uVar12 = (ulong)uStack_208 >> 8 & 0xff;
  bVar15 = (byte)uStack_158;
  uVar11 = (uint)(byte)uStack_208;
  uStack_2e8 = uStack_1d8;
  local_2f0 = local_1e0;
  local_d0._0_3_ = (undefined3)((uint)uStack_158 >> 8);
  local_d0._0_7_ = CONCAT43(uStack_154,(undefined3)local_d0);
  uStack_128 = (undefined3)lStack_138;
  uStack_125 = (undefined5)((ulong)lStack_138 >> 0x18);
  local_130 = (char)local_140;
  bStack_12f = (byte)((ulong)local_140 >> 8);
  uStack_12e = (undefined1)((ulong)local_140 >> 0x10);
  uStack_12d = (undefined5)((ulong)local_140 >> 0x18);
  if (local_210 == (undefined **)0xffffffffffffffff) {
    if ((9 < bVar2) && (lVar8 != 0)) {
      free(__ptr);
    }
  }
  else {
    if ((9 < (byte)uStack_158) && (lStack_148 != 0)) {
      free(local_150);
    }
    lStack_288 = CONCAT53(uStack_175,uStack_178);
    local_290 = CONCAT53(uStack_17d,local_180);
    lStack_278 = CONCAT53(uStack_165,uStack_168);
    lStack_280 = CONCAT53(uStack_16d,local_170);
    local_270 = CONCAT53(uStack_15d,local_160);
    lStack_2b8 = CONCAT53(uStack_1a5,uStack_1a8);
    local_2c0 = CONCAT53(uStack_1ad,CONCAT12(uStack_1ae,CONCAT11(bStack_1af,local_1b0)));
    local_d0._0_3_ = (undefined3)*(undefined4 *)((long)param_2 + 0xf1);
    local_d0._0_7_ = CONCAT43(*(undefined4 *)((long)param_2 + 0xf4),(undefined3)local_d0);
    lStack_2a8 = CONCAT53(uStack_195,uStack_198);
    local_2b0 = CONCAT53(uStack_19d,local_1a0);
    lStack_298 = CONCAT53(uStack_185,uStack_188);
    local_2a0 = CONCAT53(uStack_18d,local_190);
    uStack_308 = lStack_1f8;
    local_310 = local_200;
    uStack_128 = (undefined3)lStack_138;
    uStack_125 = (undefined5)((ulong)lStack_138 >> 0x18);
    local_130 = (char)local_140;
    bStack_12f = (byte)((ulong)local_140 >> 8);
    uStack_12e = (undefined1)((ulong)local_140 >> 0x10);
    uStack_12d = (undefined5)((ulong)local_140 >> 0x18);
    pvVar13 = __ptr;
    lVar14 = lVar8;
    ppuStack_300 = (undefined **)local_1f0;
    lStack_2f8 = uStack_1e8;
    local_2f0 = local_1e0;
    uStack_2e8 = uStack_1d8;
    local_2e0 = local_1d0;
    uStack_2d8 = uStack_1c8;
    local_2d0 = local_1c0;
    uStack_2c8 = uStack_1b8;
    bVar15 = bVar2;
  }
  lStack_338 = lStack_288;
  local_340 = local_290;
  lStack_328 = lStack_278;
  lStack_330 = lStack_280;
  local_320 = local_270;
  uVar7 = (undefined4)local_d0;
  uStack_378 = uStack_2c8;
  local_380 = local_2d0;
  lStack_368 = lStack_2b8;
  lStack_370 = local_2c0;
  lStack_358 = lStack_2a8;
  local_360 = local_2b0;
  lStack_348 = lStack_298;
  lStack_350 = local_2a0;
  local_3c8._0_3_ = (undefined3)local_d0;
  local_3c8._3_1_ = (undefined1)((ulong)local_d0 >> 0x18);
  uStack_3c4 = (undefined3)((ulong)local_d0 >> 0x20);
  lStack_3b8 = uStack_308;
  local_3c0 = local_310;
  uStack_3a8 = lStack_2f8;
  uStack_3b0 = ppuStack_300;
  uStack_398 = uStack_2e8;
  local_3a0 = local_2f0;
  uStack_388 = uStack_2d8;
  uStack_390 = local_2e0;
  lStack_3d8 = CONCAT53(uStack_125,uStack_128);
  local_3e0 = CONCAT53(uStack_12d,CONCAT12(uStack_12e,CONCAT11(bStack_12f,local_130)));
  local_218 = (undefined3)local_3c8;
  uStack_215 = local_3c8._3_1_;
  uStack_214 = uStack_3c4;
  local_3c8 = uVar7;
  local_230 = local_3e0;
  lStack_228 = lStack_3d8;
  if (local_210 == (undefined **)0xffffffffffffffff) {
    ppuVar10 = (undefined **)0xffffffffffffffff;
  }
  else {
    uStack_208._0_6_ = uStack_208._2_6_ << 0x10;
    uStack_178 = (undefined3)lStack_288;
    uStack_175 = (undefined5)((ulong)lStack_288 >> 0x18);
    local_180 = (undefined3)local_290;
    uStack_17d = (undefined5)((ulong)local_290 >> 0x18);
    uStack_168 = (undefined3)lStack_278;
    uStack_165 = (undefined5)((ulong)lStack_278 >> 0x18);
    local_170 = (undefined3)lStack_280;
    uStack_16d = (undefined5)((ulong)lStack_280 >> 0x18);
    uStack_208 = (undefined1 *)CONCAT26((short)(uVar4 >> 0x30),(int6)uStack_208);
    uStack_1b8 = uStack_2c8;
    local_1c0 = local_2d0;
    uStack_1a8 = (undefined3)lStack_2b8;
    uStack_1a5 = (undefined5)((ulong)lStack_2b8 >> 0x18);
    local_1b0 = (char)local_2c0;
    bStack_1af = (byte)((ulong)local_2c0 >> 8);
    uStack_1ae = (undefined1)((ulong)local_2c0 >> 0x10);
    uStack_1ad = (undefined5)((ulong)local_2c0 >> 0x18);
    local_160 = (undefined3)local_270;
    uStack_15d = (undefined5)((ulong)local_270 >> 0x18);
    uStack_198 = (undefined3)lStack_2a8;
    uStack_195 = (undefined5)((ulong)lStack_2a8 >> 0x18);
    local_1a0 = (undefined3)local_2b0;
    uStack_19d = (undefined5)((ulong)local_2b0 >> 0x18);
    uStack_188 = (undefined3)lStack_298;
    uStack_185 = (undefined5)((ulong)lStack_298 >> 0x18);
    local_190 = (undefined3)local_2a0;
    uStack_18d = (undefined5)((ulong)local_2a0 >> 0x18);
    uStack_158 = CONCAT31((undefined3)local_3c8,bVar15);
    uStack_154 = local_d0._3_4_;
    uStack_1e8 = lStack_2f8;
    local_1f0 = ppuStack_300;
    lStack_1f8 = uStack_308;
    local_200 = local_310;
    uStack_1d8 = uStack_2e8;
    local_1e0 = local_2f0;
    uStack_1c8 = uStack_2d8;
    local_1d0 = local_2e0;
    uStack_208._0_2_ = (undefined2)uVar4;
                    /* try { // try from 0079ec90 to 0079ecab has its CatchHandler @ 0079f06c */
    local_150 = pvVar13;
    lStack_148 = lVar14;
    local_140 = local_3e0;
    lStack_138 = lStack_3d8;
    <bytes::bytes::bytes::bytes::Bytes>::copy_from_slice(&local_d0,__ptr_00,lVar9);
    <http::uri::http::uri::Uri>::from_shared(&local_130,&local_d0);
    uVar6 = uStack_12e;
    bVar2 = bStack_12f;
    cVar5 = local_130;
    uVar12 = (ulong)bStack_12f;
    if (local_130 == -1) {
                    /* try { // try from 0079edb4 to 0079edbf has its CatchHandler @ 0079f084 */
      FUN_0079b82c(&local_210);
      ppuVar10 = (undefined **)0xffffffffffffffff;
      uVar11 = 2;
    }
    else {
      uStack_a8 = uStack_105;
      local_b0 = local_10d;
      uStack_98 = uStack_f5;
      uStack_a0 = local_fd;
      uStack_c8 = CONCAT35(uStack_120,uStack_125);
      local_d0 = CONCAT35(uStack_128,uStack_12d);
      uStack_88 = uStack_e5;
      local_90 = local_ed;
      uStack_83 = uStack_e0;
      uStack_80 = uStack_dd;
      uStack_b8 = uStack_115;
      uStack_c0 = local_11d;
                    /* try { // try from 0079ecec to 0079ecf3 has its CatchHandler @ 0079eff8 */
      FUN_0079b764(&local_1b0);
      local_1b0 = cVar5;
      bStack_1af = bVar2;
      uVar11 = (uint)(byte)uStack_208;
      uStack_195 = (undefined5)uStack_b8;
      local_190 = (undefined3)((ulong)uStack_b8 >> 0x28);
      uStack_19d = (undefined5)uStack_c0;
      uStack_198 = (undefined3)((ulong)uStack_c0 >> 0x28);
      uVar12 = (ulong)uStack_208 >> 8 & 0xff;
      bVar15 = (byte)uStack_158;
      local_648 = (ulong)uStack_208 >> 0x10;
      uStack_1a5 = (undefined5)uStack_c8;
      local_1a0 = (undefined3)((ulong)uStack_c8 >> 0x28);
      uStack_1ad = (undefined5)local_d0;
      uStack_1a8 = (undefined3)((ulong)local_d0 >> 0x28);
      uStack_1ae = uVar6;
      uStack_15d = uStack_80;
      uStack_165 = uStack_88;
      local_160 = uStack_83;
      uStack_16d = (undefined5)local_90;
      uStack_168 = (undefined3)((ulong)local_90 >> 0x28);
      uStack_185 = (undefined5)uStack_a8;
      local_180 = (undefined3)((ulong)uStack_a8 >> 0x28);
      uStack_18d = (undefined5)local_b0;
      uStack_188 = (undefined3)((ulong)local_b0 >> 0x28);
      uStack_175 = (undefined5)uStack_98;
      local_170 = (undefined3)((ulong)uStack_98 >> 0x28);
      uStack_17d = (undefined5)uStack_a0;
      uStack_178 = (undefined3)((ulong)uStack_a0 >> 0x28);
      lStack_298 = CONCAT53(uStack_185,uStack_188);
      local_2a0 = CONCAT53(uStack_18d,local_190);
      local_270 = CONCAT53(uStack_80,uStack_83);
      lStack_288 = CONCAT53(uStack_175,uStack_178);
      local_290 = CONCAT53(uStack_17d,local_180);
      lStack_278 = CONCAT53(uStack_88,uStack_168);
      lStack_280 = CONCAT53(uStack_16d,local_170);
      local_218 = (undefined3)((uint)uStack_158 >> 8);
      uStack_215 = (undefined1)uStack_154;
      uStack_214 = (undefined3)((uint)uStack_154 >> 8);
      uStack_2d8 = uStack_1c8;
      local_2e0 = local_1d0;
      uStack_2c8 = uStack_1b8;
      local_2d0 = local_1c0;
      lStack_2b8 = CONCAT53(uStack_1a5,uStack_1a8);
      local_2c0 = CONCAT53(uStack_1ad,CONCAT12(uVar6,CONCAT11(bVar2,cVar5)));
      lStack_2a8 = CONCAT53(uStack_195,uStack_198);
      local_2b0 = CONCAT53(uStack_19d,local_1a0);
      uStack_308 = lStack_1f8;
      local_310 = local_200;
      lStack_2f8 = uStack_1e8;
      ppuStack_300 = (undefined **)local_1f0;
      uStack_2e8 = uStack_1d8;
      local_2f0 = local_1e0;
      lStack_228 = lStack_138;
      local_230 = local_140;
      ppuVar10 = local_210;
      pvVar13 = local_150;
      lVar14 = lStack_148;
    }
  }
  puVar3 = local_5c8;
  __ptr_01 = puStack_5d0;
  local_3f0 = local_270;
  lStack_408 = lStack_288;
  local_410 = local_290;
  lStack_3f8 = lStack_278;
  lStack_400 = lStack_280;
  uStack_448 = uStack_2c8;
  local_450 = local_2d0;
  lStack_438 = lStack_2b8;
  local_440 = local_2c0;
  _local_498 = CONCAT13(uStack_215,local_218);
  uStack_494 = uStack_214;
  lStack_428 = lStack_2a8;
  local_430 = local_2b0;
  lStack_418 = lStack_298;
  local_420 = local_2a0;
  lStack_488 = uStack_308;
  local_490 = local_310;
  uStack_478 = lStack_2f8;
  local_480 = ppuStack_300;
  uStack_468 = uStack_2e8;
  local_470 = local_2f0;
  uStack_458 = uStack_2d8;
  local_460 = local_2e0;
  lStack_4a8 = lStack_228;
  local_4b0 = local_230;
  if (local_5e0 == 1) {
    local_210 = ppuStack_5d8;
    uStack_208 = puStack_5d0;
    lStack_1f8 = lStack_5c0;
    local_200 = (undefined **)local_5c8;
    if (ppuVar10 != (undefined **)0xffffffffffffffff) {
LAB_0079ee94:
      lStack_518 = lStack_288;
      local_520 = local_290;
      lStack_508 = lStack_278;
      local_510 = lStack_280;
      uStack_5a8 = (ulong)uVar11 | uVar12 << 8 | local_648 << 0x10;
      lStack_528 = lStack_298;
      local_530 = local_2a0;
      local_500 = local_270;
      uStack_568 = uStack_2d8;
      local_570 = local_2e0;
      uStack_558 = uStack_2c8;
      uStack_560 = local_2d0;
      uStack_4f4 = CONCAT31(uStack_214,uStack_215);
      lStack_548 = lStack_2b8;
      local_550 = local_2c0;
      lStack_538 = lStack_2a8;
      lStack_540 = local_2b0;
      local_4f8 = CONCAT31(local_218,bVar15);
      lStack_598 = uStack_308;
      local_5a0 = local_310;
      uStack_588 = lStack_2f8;
      uStack_590 = ppuStack_300;
      uStack_578 = uStack_2e8;
      local_580 = local_2f0;
      lStack_4b8 = lStack_1f8;
      local_4c0 = local_200;
      lStack_4d8 = lStack_228;
      local_4e0 = local_230;
      puStack_4c8 = uStack_208;
      local_4d0 = local_210;
                    /* try { // try from 0079ef14 to 0079ef1b has its CatchHandler @ 0079f034 */
      local_5b0 = ppuVar10;
      local_4f0 = pvVar13;
      lStack_4e8 = lVar14;
      FUN_0079bb48(&local_5b0);
      param_1[0x1d] = (long)puStack_4c8;
      param_1[0x1c] = (long)local_4d0;
      param_1[0x1f] = lStack_4b8;
      param_1[0x1e] = (long)local_4c0;
      param_1[0x19] = lStack_4e8;
      param_1[0x18] = (long)local_4f0;
      param_1[0x1b] = lStack_4d8;
      param_1[0x1a] = local_4e0;
      param_1[0x15] = lStack_508;
      param_1[0x14] = local_510;
      param_1[0x17] = CONCAT44(uStack_4f4,local_4f8);
      param_1[0x16] = local_500;
      param_1[0x11] = lStack_528;
      param_1[0x10] = local_530;
      param_1[0x13] = lStack_518;
      param_1[0x12] = local_520;
      param_1[1] = lStack_638;
      *param_1 = local_640;
      param_1[3] = lStack_628;
      param_1[2] = lStack_630;
      param_1[5] = lStack_618;
      param_1[4] = local_620;
      param_1[7] = lStack_608;
      param_1[6] = lStack_610;
      param_1[0xd] = lStack_548;
      param_1[0xc] = local_550;
      param_1[0xf] = lStack_538;
      param_1[0xe] = lStack_540;
      param_1[9] = lStack_5f8;
      param_1[8] = local_600;
      param_1[0xb] = lStack_5e8;
      param_1[10] = lStack_5f0;
      goto LAB_0079ef94;
    }
    if (ppuStack_5d8 != (undefined **)0x0) goto LAB_0079ef64;
    if ((code *)*local_5c8 != (code *)0x0) {
                    /* try { // try from 0079ee50 to 0079ee57 has its CatchHandler @ 0079efc8 */
      (*(code *)*local_5c8)(puStack_5d0);
    }
    if (puVar3[1] != 0) {
      free(__ptr_01);
    }
  }
  else {
    local_210 = &PTR_FUN_00adcbe8;
    uStack_208 = &DAT_00000001;
    lStack_1f8 = 0;
    local_200 = (undefined **)0x0;
    if (ppuVar10 != (undefined **)0xffffffffffffffff) goto LAB_0079ee94;
LAB_0079ef64:
                    /* try { // try from 0079ef70 to 0079ef83 has its CatchHandler @ 0079f060 */
    (*(code *)local_210[4])(&lStack_1f8,uStack_208,local_200);
  }
  lVar8 = FUN_0076e2e0(0);
  *param_1 = -1;
  param_1[1] = lVar8;
                    /* try { // try from 0079ef8c to 0079ef93 has its CatchHandler @ 0079eff0 */
  FUN_0079bb48(&local_640);
LAB_0079ef94:
  if (lVar1 != 0) {
    free(__ptr_00);
  }
  return;
}


// ===== 0079f0e0  FUN_0079f0e0 =====

void FUN_0079f0e0(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined1 *puVar6;
  char *pcVar7;
  char cVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  char local_54;
  char local_53;
  
  lVar11 = *param_2;
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              ("called after complete",0x2b,&PTR_s__root__cargo_registry_src_index__00adccd0);
  }
  uVar10 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar10 != 0) {
    puVar6 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar10);
    if (&DAT_00000001 < puVar6) goto LAB_0079f134;
LAB_0079f1c4:
    puVar6 = (undefined1 *)FUN_007bc03c(uVar10 & 0xffffffff,puVar6,0);
    if (puVar6 == (undefined1 *)0x0) goto LAB_0079f1d8;
LAB_0079f138:
    cVar2 = puVar6[0x44];
    cVar3 = puVar6[0x45];
    cVar8 = cVar3;
    if (cVar2 != '\x01') {
LAB_0079f154:
      puVar6[0x45] = cVar8;
      local_268 = local_268 & 0xffffffffff000000;
      <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop((ulong)&local_268 | 1);
      local_54 = cVar2;
      local_53 = cVar3;
      goto LAB_0079f1e0;
    }
    if (cVar3 != '\0') {
      cVar8 = cVar3 + -1;
      goto LAB_0079f154;
    }
    tokio::task::coop::register_waker(param_3);
    local_268 = local_268 & 0xffffffffff000000;
    pcVar7 = (char *)((ulong)&local_268 | 1);
LAB_0079f26c:
    <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop(pcVar7);
LAB_0079f2ec:
    *param_1 = 3;
    return;
  }
  uVar10 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
           lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
  puVar6 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar10);
  if (puVar6 <= &DAT_00000001) goto LAB_0079f1c4;
LAB_0079f134:
  if (puVar6 != (undefined1 *)0x0) goto LAB_0079f138;
LAB_0079f1d8:
  local_54 = '\0';
  local_53 = '\0';
LAB_0079f1e0:
  puVar1 = (ulong *)(lVar11 + 0x30);
                    /* try { // try from 0079f1ec to 0079f253 has its CatchHandler @ 0079f3dc */
  uVar5 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::load(lVar11 + 0x30,2);
  if ((uVar5 >> 1 & 1) == 0) {
    if ((uVar5 >> 2 & 1) == 0) {
      if ((uVar5 & 1) == 0) {
LAB_0079f248:
        <tokio::sync::oneshot::tokio::sync::oneshot::Task>::set_task(lVar11 + 0x20,param_3);
        do {
          uVar10 = *puVar1;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar10 | 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (((uint)uVar10 >> 1 & 1) != 0) goto LAB_0079f284;
      }
      else if ((*(long *)(lVar11 + 0x28) != ((long *)*param_3)[1]) ||
              (*(long *)(lVar11 + 0x20) != *(long *)*param_3)) {
        do {
          uVar10 = *puVar1;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar10 & 0xfffffffffffffffe;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (((uint)uVar10 >> 1 & 1) != 0) {
          do {
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = *puVar1 | 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          goto LAB_0079f284;
        }
        <tokio::sync::oneshot::tokio::sync::oneshot::Task>::drop_task(lVar11 + 0x20);
        goto LAB_0079f248;
      }
      pcVar7 = &local_54;
      goto LAB_0079f26c;
    }
  }
  else {
LAB_0079f284:
    uVar10 = *(ulong *)(lVar11 + 0x38);
    local_54 = '\0';
    *(undefined8 *)(lVar11 + 0x38) = 0xfffffffffffffffd;
    if (uVar10 != 0xfffffffffffffffd) {
      uStack_98 = *(undefined8 *)(lVar11 + 0x108);
      local_a0 = *(undefined8 *)(lVar11 + 0x100);
      uStack_88 = *(undefined8 *)(lVar11 + 0x118);
      uStack_90 = *(undefined8 *)(lVar11 + 0x110);
      uStack_78 = *(undefined8 *)(lVar11 + 0x128);
      local_80 = *(undefined8 *)(lVar11 + 0x120);
      uStack_68 = *(undefined8 *)(lVar11 + 0x138);
      uStack_70 = *(undefined8 *)(lVar11 + 0x130);
      uStack_d8 = *(undefined8 *)(lVar11 + 200);
      local_e0 = *(undefined8 *)(lVar11 + 0xc0);
      uStack_c8 = *(undefined8 *)(lVar11 + 0xd8);
      uStack_d0 = *(undefined8 *)(lVar11 + 0xd0);
      uStack_b8 = *(undefined8 *)(lVar11 + 0xe8);
      local_c0 = *(undefined8 *)(lVar11 + 0xe0);
      uStack_a8 = *(undefined8 *)(lVar11 + 0xf8);
      uStack_b0 = *(undefined8 *)(lVar11 + 0xf0);
      uStack_118 = *(undefined8 *)(lVar11 + 0x88);
      local_120 = *(undefined8 *)(lVar11 + 0x80);
      uStack_108 = *(undefined8 *)(lVar11 + 0x98);
      uStack_110 = *(undefined8 *)(lVar11 + 0x90);
      uStack_f8 = *(undefined8 *)(lVar11 + 0xa8);
      local_100 = *(undefined8 *)(lVar11 + 0xa0);
      uStack_e8 = *(undefined8 *)(lVar11 + 0xb8);
      uStack_f0 = *(undefined8 *)(lVar11 + 0xb0);
      uStack_158 = *(undefined8 *)(lVar11 + 0x48);
      local_160 = *(undefined8 *)(lVar11 + 0x40);
      uStack_148 = *(undefined8 *)(lVar11 + 0x58);
      uStack_150 = *(undefined8 *)(lVar11 + 0x50);
      uStack_138 = *(undefined8 *)(lVar11 + 0x68);
      local_140 = *(undefined8 *)(lVar11 + 0x60);
      uStack_128 = *(undefined8 *)(lVar11 + 0x78);
      uStack_130 = *(undefined8 *)(lVar11 + 0x70);
      <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop(&local_54);
      if (uVar10 != 3) goto LAB_0079f308;
      goto LAB_0079f2ec;
    }
  }
  local_54 = '\0';
  <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop(&local_54);
  uVar10 = 0xfffffffffffffffd;
LAB_0079f308:
  uStack_198 = uStack_98;
  local_1a0 = local_a0;
  uStack_188 = uStack_88;
  local_190 = uStack_90;
  uStack_178 = uStack_78;
  local_180 = local_80;
  uStack_168 = uStack_68;
  local_170 = uStack_70;
  uStack_1d8 = uStack_d8;
  local_1e0 = local_e0;
  uStack_1c8 = uStack_c8;
  local_1d0 = uStack_d0;
  uStack_1b8 = uStack_b8;
  local_1c0 = local_c0;
  uStack_1a8 = uStack_a8;
  local_1b0 = uStack_b0;
  plVar9 = (long *)*param_2;
  uStack_218 = uStack_118;
  local_220 = local_120;
  uStack_208 = uStack_108;
  uStack_210 = uStack_110;
  uStack_1f8 = uStack_f8;
  local_200 = local_100;
  uStack_1e8 = uStack_e8;
  uStack_1f0 = uStack_f0;
  uStack_258 = uStack_158;
  local_260 = local_160;
  uStack_248 = uStack_148;
  uStack_250 = uStack_150;
  uStack_238 = uStack_138;
  local_240 = local_140;
  uStack_228 = uStack_128;
  uStack_230 = uStack_130;
  local_268 = uVar10;
  if (plVar9 != (long *)0x0) {
    do {
      lVar11 = *plVar9;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 0079f380 to 0079f387 has its CatchHandler @ 0079f3b8 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::oneshot::Inner<core[bcece726f298455b]::result::Result<http[b87e90c26fe47eb4]::response::Response<hyper[9f1bfd30b08ca095]::body::incoming::Incoming>,hyper[9f1bfd30b08ca095]::client::dispatch::TrySendError<http[b87e90c26fe47eb4]::request::Request<reqwest[6fed810f3e38d558]::async_impl::body::Body>>>>>>
      ::drop_slow(param_2);
    }
  }
  *param_2 = 0;
  memcpy(param_1,&local_268,0x108);
  return;
}


// ===== 0079f3f4  FUN_0079f3f4 =====

void FUN_0079f3f4(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002a0830,0x10);
  return;
}


// ===== 0079f408  FUN_0079f408 =====

void FUN_0079f408(long *param_1)

{
  long *plVar1;
  ulong *puVar2;
  long *plVar3;
  ulong *puVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  
  lVar14 = *param_1;
  plVar1 = (long *)(lVar14 + 0x1c8);
  do {
    lVar12 = *plVar1;
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar12 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (lVar12 + -1 != 0) {
    return;
  }
  plVar1 = (long *)(lVar14 + 0x80);
  puVar2 = (ulong *)(lVar14 + 0x88);
  do {
    uVar11 = *puVar2;
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar8) {
      *puVar2 = uVar11 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  lVar12 = *plVar1;
  uVar15 = uVar11 & 0xffffffffffffffe0;
  uVar7 = uVar15 - *(long *)(lVar12 + 0x2300);
  if (uVar7 != 0) {
    bVar8 = (uVar11 & 0x1f) < uVar7 >> 5;
    lVar9 = lVar12;
LAB_0079f4ec:
    do {
      plVar3 = (long *)(lVar9 + 0x2308);
      lVar12 = *plVar3;
      if (*plVar3 == 0) {
        lVar12 = *(long *)(lVar9 + 0x2300);
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        lVar10 = FUN_004b25a4(0x2320,8);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          alloc::alloc::handle_alloc_error(8,0x2320);
        }
        *(undefined8 *)(lVar10 + 0x2308) = 0;
        *(long *)(lVar10 + 0x2300) = lVar12 + 0x20;
        *(undefined8 *)(lVar10 + 0x2318) = 0;
        *(undefined8 *)(lVar10 + 0x2310) = 0;
LAB_0079f528:
        lVar12 = *plVar3;
        if (lVar12 == 0) goto code_r0x0079f530;
        ClearExclusiveLocal();
        plVar3 = (long *)(lVar12 + 0x2308);
        *(long *)(lVar10 + 0x2300) = *(long *)(lVar12 + 0x2300) + 0x20;
        do {
          lVar13 = *plVar3;
          if (lVar13 != 0) {
            ClearExclusiveLocal();
            do {
              InstructionSynchronizationBarrier();
              *(long *)(lVar10 + 0x2300) = *(long *)(lVar13 + 0x2300) + 0x20;
              plVar3 = (long *)(lVar13 + 0x2308);
              while (lVar13 = *plVar3, lVar13 == 0) {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar6) {
                  *plVar3 = lVar10;
                  cVar5 = ExclusiveMonitorsStatus();
                }
                if (cVar5 == '\0') goto LAB_0079f5b4;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *plVar3 = lVar10;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
LAB_0079f5b4:
      puVar4 = (ulong *)(lVar9 + 0x2310);
      if ((bool)(bVar8 & (int)*puVar4 == -1)) {
        do {
          if (*plVar1 != lVar9) {
            ClearExclusiveLocal();
            goto LAB_0079f4d8;
          }
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar12;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        do {
          uVar11 = *puVar2;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar11;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        *(ulong *)(lVar9 + 0x2318) = uVar11;
        do {
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar4,0x10);
          if (bVar8) {
            *puVar4 = *puVar4 | 0x100000000;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        bVar8 = true;
        InstructionSynchronizationBarrier();
        lVar9 = lVar12;
        if (*(ulong *)(lVar12 + 0x2300) == uVar15) break;
        goto LAB_0079f4ec;
      }
LAB_0079f4d8:
      bVar8 = false;
      InstructionSynchronizationBarrier();
      lVar9 = lVar12;
    } while (*(ulong *)(lVar12 + 0x2300) != uVar15);
  }
  puVar2 = (ulong *)(lVar12 + 0x2310);
  do {
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar8) {
      *puVar2 = *puVar2 | 0x200000000;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  <tokio::sync::task::atomic_waker::[0]::tokio::sync::task::atomic_waker::AtomicWaker>::wake
            (lVar14 + 0x100);
  return;
code_r0x0079f530:
  cVar5 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
  if (bVar6) {
    *plVar3 = lVar10;
    cVar5 = ExclusiveMonitorsStatus();
  }
  lVar12 = lVar10;
  if (cVar5 == '\0') goto LAB_0079f5b4;
  goto LAB_0079f528;
}


// ===== 0079f634  FUN_0079f634 =====

void FUN_0079f634(undefined8 *param_1)

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


// ===== 0079f66c  FUN_0079f66c =====

void FUN_0079f66c(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [16];
  long local_18;
  
  lVar1 = *(long *)(*param_1 + 0x18);
  lVar2 = *(long *)(*param_1 + 0x20);
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_40,param_2);
  if (lVar2 != 0) {
    lVar2 = lVar2 * 0x88;
    do {
      local_18 = lVar1;
      <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
                (auStack_40,&local_18,&DAT_00ad8720);
      lVar2 = lVar2 + -0x88;
      lVar1 = lVar1 + 0x88;
    } while (lVar2 != 0);
  }
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 0079f6e4  FUN_0079f6e4 =====

void FUN_0079f6e4(long *param_1)

{
  <rustls::webpki::anchors::RootCertStore_as_core::fmt::Debug>::fmt(*param_1 + 0x10);
  return;
}


// ===== 0079f6f0  FUN_0079f6f0 =====

void FUN_0079f6f0(undefined8 param_1,long param_2)

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


// ===== 0079f708  <reqwest::connect::sealed::Conn_as_hyper::rt::io::Read>::poll_read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::connect::sealed::Conn as hyper::rt::io::Read>::poll_read */

void __rustcall
<reqwest::connect::sealed::Conn_as_hyper::rt::io::Read>::poll_read(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0079f710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x18))(*param_1);
  return;
}


// ===== 0079f714  FUN_0079f714 =====

void FUN_0079f714(long param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  char cVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  code *pcStack_28;
  undefined1 **local_20;
  code *pcStack_18;
  
  local_30 = (undefined1 *)&local_40;
  cVar2 = *(char *)(param_1 + 0x32);
  cVar3 = *(char *)(param_1 + 0x33);
  local_38 = *(undefined1 **)(param_1 + 0x10);
  puVar7 = (undefined1 *)(ulong)(byte)(cVar3 - cVar2);
  puVar1 = puVar7 + (long)local_38;
  if (CARRY8((ulong)puVar7,(ulong)local_38)) {
    puVar1 = (undefined1 *)0xffffffffffffffff;
  }
  puVar4 = param_2;
  if (puVar1 != (undefined1 *)0x0) {
    puVar4 = param_2 + -(long)puVar1;
    if (param_2 < puVar1 || puVar4 == (undefined1 *)0x0) {
      local_40 = param_2;
      if (cVar3 != cVar2) {
        local_40 = param_2 + -(long)puVar7;
        if (param_2 < puVar7 || local_40 == (undefined1 *)0x0) {
          *(char *)(param_1 + 0x32) = cVar2 + (char)param_2;
          return;
        }
        *(char *)(param_1 + 0x32) = cVar3;
      }
      if (local_40 <= local_38) {
        *(undefined1 **)(param_1 + 8) = local_40 + *(long *)(param_1 + 8);
        *(long *)(param_1 + 0x10) = (long)local_38 - (long)local_40;
        return;
      }
LAB_0079f814:
      pcStack_28 = FUN_0079f6f0;
      local_20 = &local_38;
      pcStack_18 = FUN_0079f6f0;
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_002afeea,&local_30,&PTR_s__root__cargo_registry_src_index__00adccb8);
    }
    puVar6 = puVar1;
    if (cVar3 != cVar2) {
      puVar6 = puVar1 + -(long)puVar7;
      if (puVar1 < puVar7 || puVar6 == (undefined1 *)0x0) {
        *(char *)(param_1 + 0x32) = cVar2 + (char)puVar1;
        pcStack_28 = *(code **)(param_1 + 0x40);
        lVar5 = (long)pcStack_28 - (long)puVar4;
        if (pcStack_28 < puVar4) goto LAB_0079f7f4;
        goto LAB_0079f788;
      }
      *(char *)(param_1 + 0x32) = cVar3;
    }
    local_40 = puVar6;
    if (local_38 < puVar6) goto LAB_0079f814;
    *(undefined1 **)(param_1 + 8) = puVar6 + *(long *)(param_1 + 8);
    *(long *)(param_1 + 0x10) = (long)local_38 - (long)puVar6;
  }
  pcStack_28 = *(code **)(param_1 + 0x40);
  lVar5 = (long)pcStack_28 - (long)puVar4;
  if (pcStack_28 < puVar4) {
LAB_0079f7f4:
    local_30 = puVar4;
                    /* WARNING: Subroutine does not return */
    bytes::panic_advance(&local_30);
  }
LAB_0079f788:
  *(undefined1 **)(param_1 + 0x38) = puVar4 + *(long *)(param_1 + 0x38);
  *(long *)(param_1 + 0x40) = lVar5;
  return;
}


// ===== 0079f848  FUN_0079f848 =====

void FUN_0079f848(long *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  code *pcStack_28;
  undefined1 **local_20;
  code *pcStack_18;
  
  local_30 = (undefined1 *)&local_40;
  puVar4 = (undefined1 *)param_1[1];
  local_38 = (undefined1 *)param_1[4];
  puVar3 = puVar4 + (long)local_38;
  if (CARRY8((ulong)puVar4,(ulong)local_38)) {
    puVar3 = (undefined1 *)0xffffffffffffffff;
  }
  puVar1 = param_2;
  if (puVar3 != (undefined1 *)0x0) {
    puVar1 = param_2 + -(long)puVar3;
    if (param_2 < puVar3 || puVar1 == (undefined1 *)0x0) {
      if (puVar4 != (undefined1 *)0x0) {
        if (param_2 <= puVar4) {
          *param_1 = (long)(param_2 + *param_1);
          param_1[1] = (long)puVar4 - (long)param_2;
          return;
        }
        param_2 = param_2 + -(long)puVar4;
        *param_1 = (long)(puVar4 + *param_1);
        param_1[1] = 0;
      }
      local_40 = param_2;
      if (param_2 <= local_38) {
        param_1[3] = (long)(param_2 + param_1[3]);
        param_1[4] = (long)local_38 - (long)param_2;
        return;
      }
LAB_0079f944:
      pcStack_28 = FUN_0079f6f0;
      local_20 = &local_38;
      pcStack_18 = FUN_0079f6f0;
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_002afeea,&local_30,&PTR_s__root__cargo_registry_src_index__00adccb8);
    }
    if (puVar4 != (undefined1 *)0x0) {
      if (puVar3 <= puVar4) {
        *param_1 = (long)(puVar3 + *param_1);
        param_1[1] = (long)puVar4 - (long)puVar3;
        pcStack_28 = (code *)param_1[7];
        lVar2 = (long)pcStack_28 - (long)puVar1;
        if (pcStack_28 < puVar1) goto LAB_0079f924;
        goto LAB_0079f8b4;
      }
      puVar3 = puVar3 + -(long)puVar4;
      *param_1 = (long)(puVar4 + *param_1);
      param_1[1] = 0;
    }
    local_40 = puVar3;
    if (local_38 < puVar3) goto LAB_0079f944;
    param_1[3] = (long)(puVar3 + param_1[3]);
    param_1[4] = (long)local_38 - (long)puVar3;
  }
  pcStack_28 = (code *)param_1[7];
  lVar2 = (long)pcStack_28 - (long)puVar1;
  if (pcStack_28 < puVar1) {
LAB_0079f924:
    local_30 = puVar1;
                    /* WARNING: Subroutine does not return */
    bytes::panic_advance(&local_30);
  }
LAB_0079f8b4:
  param_1[6] = (long)(puVar1 + param_1[6]);
  param_1[7] = lVar2;
  return;
}


// ===== 0079f978  <http::uri::Uri_as_reqwest::proxy::Dst>::host =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::uri::Uri as reqwest::proxy::Dst>::host */

void __rustcall <http::uri::Uri_as_reqwest::proxy::Dst>::host(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    http::uri::authority::host(*(undefined8 *)(param_1 + 0x18));
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed
            ("<Uri as Dst>::host should have a str",0x24,
             &PTR_s__root__cargo_registry_src_index__00adcd78);
}


// ===== 0079f9a8  <http::uri::Uri_as_reqwest::proxy::Dst>::port =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::uri::Uri as reqwest::proxy::Dst>::port */

undefined1  [16] __rustcall <http::uri::Uri_as_reqwest::proxy::Dst>::port(void)

{
  undefined1 auVar1 [16];
  long local_28 [2];
  undefined2 local_18;
  
  <http::uri::http::uri::Uri>::port(local_28);
  auVar1._1_7_ = 0;
  auVar1[0] = local_28[0] != 0;
  auVar1._8_2_ = local_18;
  auVar1._10_6_ = 0;
  return auVar1;
}


// ===== 0079f9d8  <http::uri::Uri_as_reqwest::proxy::Dst>::scheme =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::uri::Uri as reqwest::proxy::Dst>::scheme */

undefined1  [16] __rustcall <http::uri::Uri_as_reqwest::proxy::Dst>::scheme(char *param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined1 auVar3 [16];
  
  if (*param_1 == '\x01') {
    uVar1 = 4;
    if (param_1[1] != '\0') {
      uVar1 = 5;
    }
    pcVar2 = "http";
    if (param_1[1] == '\0') {
      pcVar2 = "http\x03";
    }
    auVar3._8_8_ = uVar1;
    auVar3._0_8_ = pcVar2;
    return auVar3;
  }
  if (*param_1 == '\x02') {
    return *(undefined1 (*) [16])(*(long *)(param_1 + 8) + 8);
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed
            ("Uri should have a schemeInvalidUriCharInvalidSchemeInvalidAuthorityInvalidPortInvalidFormatSchemeMissingAuthorityMissingPathAndQueryMissingTooLongEmptySchemeTooLong"
             ,0x18,&PTR_s__root__cargo_registry_src_index__00adcd90);
}


// ===== 0079fa40  FUN_0079fa40 =====

void FUN_0079fa40(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_148 [256];
  ulong local_48;
  
  lVar4 = *param_1;
  if ((*(byte *)(lVar4 + 0x1b8) & 1) == 0) {
    *(undefined1 *)(lVar4 + 0x1b8) = 1;
  }
  puVar1 = (ulong *)(lVar4 + 0x1c0);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = *puVar1 | 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters(lVar4 + 0x180);
  while( true ) {
                    /* try { // try from 0079fa94 to 0079faa3 has its CatchHandler @ 0079fb44 */
    FUN_0079bf6c(auStack_148,lVar4 + 0x1a0,lVar4 + 0x80);
    if (0xfffffffffffffffd < local_48) break;
                    /* try { // try from 0079fab0 to 0079fab7 has its CatchHandler @ 0079fb30 */
    <tokio::sync::mpsc::unbounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::add_permit
              (puVar1);
                    /* try { // try from 0079fab8 to 0079fabf has its CatchHandler @ 0079fb44 */
    FUN_0079a3dc(auStack_148);
  }
                    /* try { // try from 0079fac4 to 0079facb has its CatchHandler @ 0079fb18 */
  FUN_0079a3dc(auStack_148);
  while( true ) {
    FUN_0079bf6c(auStack_148,lVar4 + 0x1a0,lVar4 + 0x80);
    if (0xfffffffffffffffd < local_48) break;
                    /* try { // try from 0079fae8 to 0079faef has its CatchHandler @ 0079fb1c */
    <tokio::sync::mpsc::unbounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::add_permit
              (puVar1);
    FUN_0079a3dc(auStack_148);
  }
  FUN_0079a3dc(auStack_148);
  return;
}


// ===== 0079fb5c  FUN_0079fb5c =====

undefined1  [16] FUN_0079fb5c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = "description() is deprecated; use Display";
  return auVar1;
}


// ===== 0079fb6c  FUN_0079fb6c =====

undefined8 FUN_0079fb6c(void)

{
  return 0;
}


// ===== 0079fb74  FUN_0079fb74 =====

void FUN_0079fb74(void)

{
  return;
}


// ===== 0079fb78  FUN_0079fb78 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0079fb78(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029f510;
  param_1[1] = _UNK_0029f518;
  *param_1 = uVar1;
  return;
}


// ===== 0079fb8c  FUN_0079fb8c =====

undefined8 FUN_0079fb8c(void)

{
  return 0;
}


// ===== 0079fb94  FUN_0079fb94 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0079fb94(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0840;
  param_1[1] = _UNK_002a0848;
  *param_1 = uVar1;
  return;
}


// ===== 0079fba8  FUN_0079fba8 =====

undefined8 * FUN_0079fba8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  void *__ptr;
  undefined8 *puVar4;
  
                    /* try { // try from 0079fbc0 to 0079fbc7 has its CatchHandler @ 0079fc80 */
  puVar1 = (undefined8 *)<hyper::error::hyper::error::Error>::new_user(0);
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar2 = (undefined8 *)FUN_004b25a4(8,8);
  if (puVar2 != (undefined8 *)0x0) {
    __ptr = (void *)*puVar1;
    *puVar2 = param_1;
    if (__ptr != (void *)0x0) {
      puVar4 = (undefined8 *)puVar1[1];
      pcVar3 = (code *)*puVar4;
      if (pcVar3 != (code *)0x0) {
                    /* try { // try from 0079fc00 to 0079fc07 has its CatchHandler @ 0079fc50 */
        (*pcVar3)(__ptr);
      }
      if (puVar4[1] != 0) {
        free(__ptr);
      }
    }
    *puVar1 = puVar2;
    puVar1[1] = &PTR_FUN_00adea90;
    return puVar1;
  }
                    /* try { // try from 0079fc40 to 0079fc4b has its CatchHandler @ 0079fc94 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,8);
}


// ===== 0079fcb8  FUN_0079fcb8 =====

long * FUN_0079fcb8(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  void *__ptr;
  undefined8 *puVar3;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(8,8);
  if (puVar1 != (undefined8 *)0x0) {
    __ptr = (void *)*param_1;
    *puVar1 = param_2;
    if (__ptr != (void *)0x0) {
      puVar3 = (undefined8 *)param_1[1];
      pcVar2 = (code *)*puVar3;
      if (pcVar2 != (code *)0x0) {
                    /* try { // try from 0079fd08 to 0079fd0f has its CatchHandler @ 0079fd58 */
        (*pcVar2)(__ptr);
      }
      if (puVar3[1] != 0) {
        free(__ptr);
      }
    }
    *param_1 = (long)puVar1;
    param_1[1] = (long)&PTR_FUN_00adece8;
    return param_1;
  }
                    /* try { // try from 0079fd48 to 0079fd53 has its CatchHandler @ 0079fd84 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,8);
}


// ===== 0079fda8  FUN_0079fda8 =====

long * FUN_0079fda8(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  void *__ptr;
  undefined8 *puVar3;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(8,8);
  if (puVar1 != (undefined8 *)0x0) {
    __ptr = (void *)*param_1;
    *puVar1 = param_2;
    if (__ptr != (void *)0x0) {
      puVar3 = (undefined8 *)param_1[1];
      pcVar2 = (code *)*puVar3;
      if (pcVar2 != (code *)0x0) {
                    /* try { // try from 0079fdf8 to 0079fdff has its CatchHandler @ 0079fe48 */
        (*pcVar2)(__ptr);
      }
      if (puVar3[1] != 0) {
        free(__ptr);
      }
    }
    *param_1 = (long)puVar1;
    param_1[1] = (long)&PTR_FUN_00adee50;
    return param_1;
  }
                    /* try { // try from 0079fe38 to 0079fe43 has its CatchHandler @ 0079fe74 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,8);
}


// ===== 0079fe98  FUN_0079fe98 =====

long * FUN_0079fe98(long *param_1,void *param_2,size_t param_3)

{
  undefined1 *__dest;
  size_t *psVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  void *__ptr;
  
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      __dest = &DAT_00000001;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      psVar1 = (size_t *)FUN_004b25a4(0x18,8);
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar4 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_3,1);
      if (__dest == (undefined1 *)0x0) goto LAB_0079febc;
      memcpy(__dest,param_2,param_3);
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      psVar1 = (size_t *)FUN_004b25a4(0x18,8);
    }
    if (psVar1 != (size_t *)0x0) {
      __ptr = (void *)*param_1;
      *psVar1 = param_3;
      psVar1[1] = (size_t)__dest;
      psVar1[2] = param_3;
      if (__ptr != (void *)0x0) {
        puVar3 = (undefined8 *)param_1[1];
        pcVar2 = (code *)*puVar3;
        if (pcVar2 != (code *)0x0) {
                    /* try { // try from 0079ff30 to 0079ff37 has its CatchHandler @ 0079ff98 */
          (*pcVar2)(__ptr);
        }
        if (puVar3[1] != 0) {
          free(__ptr);
        }
      }
      *param_1 = (long)psVar1;
      param_1[1] = (long)&PTR_FUN_00add058;
      return param_1;
    }
                    /* try { // try from 0079ff88 to 0079ff93 has its CatchHandler @ 0079ffc4 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x18);
  }
  uVar4 = 0;
LAB_0079febc:
                    /* try { // try from 0079febc to 0079fec7 has its CatchHandler @ 0079ffe0 */
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar4,param_3);
}


// ===== 0079fff8  FUN_0079fff8 =====

void FUN_0079fff8(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar3 = (undefined8 *)FUN_004b25a4(0x50,8);
  if (puVar3 != (undefined8 *)0x0) {
    uVar5 = param_2[2];
    uVar7 = param_2[5];
    uVar6 = param_2[4];
    lVar4 = *(long *)(lVar2 + 0x10);
    uVar10 = param_2[1];
    uVar9 = *param_2;
    puVar3[3] = param_2[3];
    puVar3[2] = uVar5;
    puVar3[5] = uVar7;
    puVar3[4] = uVar6;
    uVar8 = param_2[7];
    uVar7 = param_2[6];
    uVar6 = param_2[9];
    uVar5 = param_2[8];
    puVar3[1] = uVar10;
    *puVar3 = uVar9;
    puVar3[7] = uVar8;
    puVar3[6] = uVar7;
    puVar3[9] = uVar6;
    puVar3[8] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x007a006c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x18))
              (lVar1 + (lVar4 - 1U & 0xfffffffffffffff0) + 0x10,puVar3,&PTR_FUN_00adce60);
    return;
  }
                    /* try { // try from 007a0070 to 007a007b has its CatchHandler @ 007a0080 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x50);
}


// ===== 007a0098  FUN_007a0098 =====

void FUN_007a0098(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x80) == 3) {
    uVar1 = *(ulong *)(param_1 + 0xe8);
    if ((uVar1 ^ 0x8000000000000000) == 2) {
      if (*(char *)(param_1 + 0x145) == '\x01') {
        if (((*(byte *)(param_1 + 0x108) != 0xff) && (9 < *(byte *)(param_1 + 0x108))) &&
           (*(long *)(param_1 + 0x118) != 0)) {
          free(*(void **)(param_1 + 0x110));
        }
        *(undefined1 *)(param_1 + 0x145) = 0;
        *(undefined1 *)(param_1 + 0x108) = 0xff;
        *(undefined8 *)(param_1 + 0x80) = 0;
                    /* try { // try from 007a0168 to 007a0173 has its CatchHandler @ 007a01c0 */
        if (((-0x7ffffffffffffffd < (long)uVar1) && (1 < uVar1 + 2)) &&
           (FUN_0078af38(param_1 + 0xe8), *(long *)(param_1 + 0xe8) != 0)) {
          free(*(void **)(param_1 + 0xf0));
        }
        *(undefined8 *)(param_1 + 0xe8) = 0x8000000000000000;
        *(undefined1 *)(param_1 + 0x143) = 1;
        return;
      }
      <hyper::proto::h1::conn::[5]::hyper::proto::h1::conn::State>::close();
      return;
    }
    if ((uVar1 ^ 0x8000000000000000) == 3) goto LAB_007a00f0;
  }
  else if ((*(long *)(param_1 + 0x80) == 4) && (*(long *)(param_1 + 0xe8) == -0x7ffffffffffffffe)) {
LAB_007a00f0:
    <hyper::proto::h1::conn::[5]::hyper::proto::h1::conn::State>::close();
    return;
  }
  return;
}


// ===== 007a01f0  FUN_007a01f0 =====

void FUN_007a01f0(undefined8 *param_1,long *param_2,long *param_3,long *param_4)

{
  ushort *puVar1;
  undefined2 *puVar2;
  void *__s2;
  undefined4 uVar3;
  ushort uVar4;
  ushort uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  uint *puVar18;
  size_t __n;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined4 local_b8;
  long local_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long local_70;
  
                    /* try { // try from 007a0220 to 007a0227 has its CatchHandler @ 007a05f8 */
  iVar7 = FUN_007c545c(param_2);
  if (iVar7 == 0) {
                    /* try { // try from 007a027c to 007a0287 has its CatchHandler @ 007a05f8 */
    uVar8 = FUN_007c4738(param_2,param_3);
    uVar4 = *(ushort *)(param_2 + 0xb);
    lVar14 = param_2[9];
    uVar9 = param_2[10];
    lVar15 = param_2[4];
    uVar10 = param_2[5];
    lVar11 = *param_3;
    __s2 = (void *)param_3[1];
    uVar13 = (ulong)(uVar4 & uVar8);
    uVar17 = 0;
    lVar6 = param_3[1];
    __n = param_3[2];
    do {
      if ((uVar9 <= uVar13) && (uVar13 = 0, uVar9 == 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      puVar1 = (ushort *)(lVar14 + uVar13 * 4);
      uVar19 = (ulong)*puVar1;
      if (uVar19 == 0xffff) {
        lStack_a8 = param_3[1];
        local_b0 = *param_3;
        lStack_98 = param_3[3];
        lStack_a0 = param_3[2];
        local_70 = param_4[4];
        lStack_88 = param_4[1];
        local_90 = *param_4;
        lStack_78 = param_4[3];
        lStack_80 = param_4[2];
        iVar7 = FUN_007a6ae8(param_2,uVar8,&local_b0,&local_90);
        if (iVar7 != 0) {
LAB_007a04d4:
          uVar12 = 0xff;
          goto LAB_007a04dc;
        }
        if ((ulong)param_2[10] <= uVar13) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (uVar13,param_2[10],&PTR_s__root__cargo_registry_src_index__00adce98);
        }
        puVar2 = (undefined2 *)(param_2[9] + uVar13 * 4);
        *puVar2 = (short)uVar10;
        puVar2[1] = (ushort)uVar8;
        goto LAB_007a0480;
      }
      uVar5 = puVar1[1];
      if (((ulong)((int)uVar13 - (uint)(uVar5 & uVar4)) & (ulong)uVar4) < uVar17) {
        local_70 = param_4[4];
        lStack_a8 = param_3[1];
        local_b0 = *param_3;
        lStack_98 = param_3[3];
        lStack_a0 = param_3[2];
        lVar14 = *param_2;
        lStack_88 = param_4[1];
        local_90 = *param_4;
        lStack_78 = param_4[3];
        lStack_80 = param_4[2];
        uVar9 = FUN_007a6ae8(param_2,uVar8,&local_b0,&local_90);
        if ((uVar9 & 1) != 0) goto LAB_007a04d4;
        lVar15 = param_2[9];
        uVar19 = param_2[10];
        uVar9 = 0;
        uVar16 = (uint)uVar10 & 0xffff;
        while( true ) {
          uVar5 = (ushort)uVar8;
          uVar4 = (ushort)uVar16;
          if ((uVar19 <= uVar13) && (uVar13 = 0, uVar19 == 0)) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          puVar1 = (ushort *)(lVar15 + uVar13 * 4);
          uVar16 = (uint)*puVar1;
          if (uVar16 == 0xffff) break;
          uVar8 = (uint)puVar1[1];
          *puVar1 = uVar4;
          uVar9 = uVar9 + 1;
          puVar1[1] = uVar5;
          uVar13 = uVar13 + 1;
        }
        *puVar1 = uVar4;
        puVar1[1] = uVar5;
        if ((0x7f < uVar9 || 0x1ff < uVar17 && lVar14 != 2) && (*param_2 == 0)) {
          *param_2 = 1;
        }
LAB_007a0480:
        uVar12 = 2;
LAB_007a04dc:
        *(undefined1 *)(param_1 + 4) = uVar12;
        return;
      }
      if (uVar5 == (ushort)uVar8) {
        if (uVar10 <= uVar19) {
                    /* try { // try from 007a058c to 007a059f has its CatchHandler @ 007a05f8 */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (uVar19,uVar10,&PTR_s__root__cargo_registry_src_index__00adce80);
        }
        puVar18 = (uint *)(lVar15 + uVar19 * 0x68);
        if ((lVar11 == 0) != (*(long *)(puVar18 + 0x10) != 0)) {
          if (*(long *)(puVar18 + 0x10) == 0) {
            if ((char)puVar18[0x12] == (char)lVar6) goto LAB_007a0388;
          }
          else if ((*(size_t *)(puVar18 + 0x14) == __n) &&
                  (iVar7 = memcmp(*(void **)(puVar18 + 0x12),__s2,__n), iVar7 == 0))
          goto LAB_007a0388;
        }
      }
      uVar17 = uVar17 + 1;
      uVar13 = uVar13 + 1;
    } while( true );
  }
  lVar14 = *param_4;
  lVar15 = param_4[1];
  lVar11 = param_4[2];
  *(undefined1 *)(param_1 + 4) = 0xff;
                    /* try { // try from 007a0240 to 007a0247 has its CatchHandler @ 007a05ec */
  (**(code **)(lVar14 + 0x20))(param_4 + 3,lVar15,lVar11);
  if (*param_3 == 0) {
    return;
  }
  lVar14 = param_3[1];
  lVar11 = param_3[2];
  UNRECOVERED_JUMPTABLE = *(code **)(*param_3 + 0x20);
LAB_007a025c:
                    /* WARNING: Could not recover jumptable at 0x007a0278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_3 + 3,lVar14,lVar11);
  return;
LAB_007a0388:
  lStack_88 = param_4[1];
  local_90 = *param_4;
  lStack_78 = param_4[3];
  lStack_80 = param_4[2];
  local_70 = param_4[4];
  if ((*puVar18 & 1) != 0) {
                    /* try { // try from 007a03ac to 007a03b3 has its CatchHandler @ 007a05c8 */
    FUN_007c5b7c(param_2,*(undefined8 *)(puVar18 + 2));
    uVar10 = param_2[5];
  }
  if (uVar10 <= uVar19) {
                    /* try { // try from 007a05b4 to 007a05c3 has its CatchHandler @ 007a05c8 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check
              (uVar19,uVar10,&PTR_s__root__cargo_registry_src_index__00adcfe8);
  }
  lVar14 = param_2[4] + uVar19 * 0x68;
  uVar3 = *(undefined4 *)(lVar14 + 0x3c);
  uVar23 = *(undefined8 *)(lVar14 + 0x20);
  uVar22 = *(undefined8 *)(lVar14 + 0x18);
  *(long *)(lVar14 + 0x20) = lStack_88;
  *(long *)(lVar14 + 0x18) = local_90;
  uVar21 = *(undefined8 *)(lVar14 + 0x30);
  uVar20 = *(undefined8 *)(lVar14 + 0x28);
  uVar12 = *(undefined1 *)(lVar14 + 0x38);
  *(long *)(lVar14 + 0x30) = lStack_78;
  *(long *)(lVar14 + 0x28) = lStack_80;
  *(long *)(lVar14 + 0x38) = local_70;
  lVar15 = *param_3;
  local_b8._0_3_ = (undefined3)*(undefined4 *)(lVar14 + 0x39);
  local_b8._3_1_ = (undefined1)uVar3;
  param_1[1] = uVar23;
  *param_1 = uVar22;
  param_1[3] = uVar21;
  param_1[2] = uVar20;
  *(undefined1 *)(param_1 + 4) = uVar12;
  *(undefined4 *)((long)param_1 + 0x21) = local_b8;
  *(undefined4 *)((long)param_1 + 0x24) = uVar3;
  if (lVar15 == 0) {
    return;
  }
  lVar14 = param_3[1];
  lVar11 = param_3[2];
  UNRECOVERED_JUMPTABLE = *(code **)(lVar15 + 0x20);
  goto LAB_007a025c;
}


// ===== 007a0640  FUN_007a0640 =====

void FUN_007a0640(undefined8 *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  __ptr = (void *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
                    /* try { // try from 007a0658 to 007a065f has its CatchHandler @ 007a0688 */
    (*pcVar2)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 007a06ac  FUN_007a06ac =====

void FUN_007a06ac(void *param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 007a06cc to 007a06d3 has its CatchHandler @ 007a0704 */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 007a0724  FUN_007a0724 =====

void FUN_007a0724(long *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  if (*param_1 != 0) {
    if (param_1[1] == 0) {
      __ptr = (void *)param_1[2];
      puVar1 = (undefined8 *)param_1[3];
      pcVar2 = (code *)*puVar1;
      if (pcVar2 != (code *)0x0) {
                    /* try { // try from 007a0768 to 007a076f has its CatchHandler @ 007a07a0 */
        (*pcVar2)(__ptr);
      }
      if (puVar1[1] != 0) {
        free(__ptr);
      }
    }
    else {
                    /* try { // try from 007a0750 to 007a0757 has its CatchHandler @ 007a07d4 */
      (**(code **)(param_1[1] + 0x20))(param_1 + 4,param_1[2],param_1[3]);
    }
  }
  free(param_1);
  return;
}


// ===== 007a07f0  FUN_007a07f0 =====

void FUN_007a07f0(long *param_1)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = *param_1;
  if (lVar7 != 0) {
    pcVar1 = (char *)(lVar7 + 0x88);
    *(undefined4 *)(lVar7 + 0xa8) = 1;
    do {
      cVar2 = *pcVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar5) {
        *pcVar1 = '\x01';
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (cVar2 == '\0') {
      lVar3 = *(long *)(lVar7 + 0x78);
      *(undefined8 *)(lVar7 + 0x78) = 0;
      *(undefined4 *)(lVar7 + 0x88) = 0;
      if (lVar3 != 0) {
                    /* try { // try from 007a0844 to 007a0847 has its CatchHandler @ 007a08c4 */
        (**(code **)(lVar3 + 8))(*(undefined8 *)(lVar7 + 0x80));
      }
    }
    pcVar1 = (char *)(lVar7 + 0xa0);
    do {
      cVar2 = *pcVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar5) {
        *pcVar1 = '\x01';
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (cVar2 == '\0') {
      lVar3 = *(long *)(lVar7 + 0x90);
      *(undefined8 *)(lVar7 + 0x90) = 0;
      if (lVar3 != 0) {
                    /* try { // try from 007a0870 to 007a0873 has its CatchHandler @ 007a08b8 */
        (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar7 + 0x98));
      }
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
    }
    plVar6 = (long *)*param_1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<futures_channel::oneshot::Inner<http::header::map::HeaderMap>>>
      ::drop_slow(param_1);
      return;
    }
  }
  return;
}


