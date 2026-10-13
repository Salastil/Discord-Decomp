// ===== 0035fe88  rive::Artboard::initialize =====

/* rive::Artboard::initialize() */

Joystick * __thiscall rive::Artboard::initialize(Artboard *this)

{
  undefined1 (*pauVar1) [16];
  long lVar2;
  char cVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  void *pvVar7;
  StateMachine *this_00;
  ScriptedObject *this_01;
  Joystick *pJVar8;
  size_t sVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  ScriptedObject *pSVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  Joystick *pJVar19;
  Joystick *pJVar20;
  ulong uVar21;
  Joystick *pJVar22;
  Artboard *pAVar23;
  long *plVar24;
  undefined8 *puVar25;
  long *plVar26;
  undefined8 *puVar27;
  Joystick *pJVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  void *pvVar31;
  long *plVar32;
  Artboard *pAVar33;
  long *plVar34;
  Joystick *pJVar35;
  Component *pCVar36;
  Joystick *pJVar37;
  undefined8 *puVar38;
  Component *this_02;
  undefined8 uVar39;
  undefined8 *puVar40;
  undefined8 *puVar41;
  long *__dest;
  long lVar42;
  undefined8 *puVar43;
  Joystick *pJVar44;
  long *plVar45;
  undefined2 uVar46;
  undefined8 uVar47;
  float fVar48;
  undefined1 auVar49 [16];
  long local_1e8;
  undefined8 *local_1e0;
  undefined8 *local_1d8;
  undefined8 *local_1d0;
  undefined8 *local_1c8;
  undefined8 local_1c0;
  byte local_1b8 [16];
  void *local_1a8;
  void *local_1a0;
  undefined8 uStack_198;
  undefined8 *local_190;
  undefined8 uStack_188;
  undefined4 local_180;
  void *local_178;
  undefined8 uStack_170;
  undefined8 *local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined **local_148;
  undefined4 local_140;
  ushort local_138;
  void *local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 local_108;
  void *pvStack_100;
  void *local_f8;
  undefined8 uStack_f0;
  undefined2 local_e8;
  void *local_e0;
  void *local_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  void *local_a0;
  ulong uStack_98;
  void *local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long local_78;
  
  lVar14 = tpidr_el0;
  local_78 = *(long *)(lVar14 + 0x28);
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x200) = *(undefined8 *)(this + 0x174);
  markLayoutDirty(this,(LayoutComponent *)this);
  plVar34 = *(long **)(this + 0xa60);
  for (plVar32 = *(long **)(this + 0xa58); plVar32 != plVar34; plVar32 = plVar32 + 1) {
    plVar5 = (long *)*plVar32;
    if ((plVar5 != (long *)0x0) &&
       (cVar3 = (**(code **)(*plVar5 + 0x38))(plVar5,this + 0x998), cVar3 == '\x02'))
    goto LAB_0035ff10;
  }
  if (this[0xbe8] == (Artboard)0x0) {
    puVar40 = *(undefined8 **)(this + 0xa90);
    for (puVar38 = *(undefined8 **)(this + 0xa88); puVar38 != puVar40; puVar38 = puVar38 + 1) {
      cVar3 = (**(code **)(*(long *)*puVar38 + 0x38))((long *)*puVar38,this + 0x998);
      if (cVar3 == '\x02') goto LAB_0035ff10;
    }
    puVar40 = *(undefined8 **)(this + 0xaa8);
    for (puVar38 = *(undefined8 **)(this + 0xaa0); puVar38 != puVar40; puVar38 = puVar38 + 1) {
      cVar3 = (**(code **)(*(long *)*puVar38 + 0x38))((long *)*puVar38,this + 0x998);
      if (cVar3 == '\x02') goto LAB_0035ff10;
    }
    if ((*(long *)(this + 0xa90) == *(long *)(this + 0xa88)) &&
       (*(long *)(this + 0xaa8) == *(long *)(this + 0xaa0))) {
      this_00 = (StateMachine *)operator_new(0xa0);
      StateMachine::StateMachine(this_00);
      FUN_003621d4(local_1b8,"Auto Generated State Machine");
      FUN_00362260(this_00,local_1b8);
      if ((local_1b8[0] & 1) != 0) {
        operator_delete(local_1a8);
      }
      FUN_0036233c(this + 0xaa0,this_00);
    }
  }
  puVar38 = *(undefined8 **)(this + 0xa58);
  puVar40 = *(undefined8 **)(this + 0xa60);
  local_80 = 0x3f800000;
  uStack_98 = 0;
  local_a0 = (void *)0x0;
  uStack_88 = 0;
  local_90 = (void *)0x0;
  for (; puVar38 != puVar40; puVar38 = puVar38 + 1) {
    pJVar35 = (Joystick *)*puVar38;
    if (pJVar35 != (Joystick *)0x0) {
      cVar3 = (**(code **)(*(long *)pJVar35 + 0x40))(pJVar35,this + 0x998);
      if (cVar3 == '\x02') goto LAB_00361414;
      uVar6 = (**(code **)(*(long *)pJVar35 + 0x18))(pJVar35,10);
      if ((uVar6 & 1) != 0) {
        uVar4 = (**(code **)(*(long *)pJVar35 + 0x10))(pJVar35);
        uVar4 = uVar4 & 0xffff;
        if (uVar4 < 0x22f) {
          if (uVar4 - 0x1c3 < 2) {
            lVar15 = 400;
          }
          else {
            lVar15 = 400;
            if (uVar4 != 0x5c) goto LAB_003601c4;
          }
        }
        else {
          lVar15 = 400;
          if (uVar4 != 0x22f) {
            if (uVar4 != 0x265) goto LAB_003601c4;
            lVar15 = 0x90;
          }
        }
        plVar32 = *(long **)(this + 0xb80);
        if (plVar32 < *(long **)(this + 0xb88)) {
          plVar34 = plVar32 + 1;
          *plVar32 = (long)(pJVar35 + lVar15);
LAB_003601c0:
          *(long **)(this + 0xb80) = plVar34;
          goto LAB_003601c4;
        }
        plVar5 = *(long **)(this + 0xb78);
        lVar42 = (long)plVar32 - (long)plVar5 >> 3;
        uVar6 = lVar42 + 1;
        if (uVar6 >> 0x3d == 0) {
          uVar17 = (long)*(long **)(this + 0xb88) - (long)plVar5;
          uVar16 = (long)uVar17 >> 2;
          if (uVar16 <= uVar6) {
            uVar16 = uVar6;
          }
          if (0x7ffffffffffffff7 < uVar17) {
            uVar16 = 0x1fffffffffffffff;
          }
          if (uVar16 == 0) {
            pvVar7 = (void *)0x0;
          }
          else {
            if (uVar16 >> 0x3d != 0) goto LAB_00361cb4;
            pvVar7 = operator_new(uVar16 << 3);
          }
          plVar45 = (long *)((long)pvVar7 + lVar42 * 8);
          plVar34 = plVar45 + 1;
          *plVar45 = (long)(pJVar35 + lVar15);
          plVar24 = plVar32;
          if ((long)plVar32 - (long)plVar5 != 0) {
            uVar6 = ((long)plVar32 - (long)plVar5) - 8;
            if ((0x37 < uVar6) &&
               (0x1f < (ulong)((long)plVar32 + (-((long)plVar32 - (long)plVar5) - (long)pvVar7)))) {
              plVar24 = plVar45 + -2;
              plVar26 = plVar32 + -2;
              uVar6 = (uVar6 >> 3) + 1;
              uVar21 = uVar6 & 0x3ffffffffffffffc;
              plVar32 = plVar32 + -uVar21;
              uVar17 = uVar21;
              do {
                auVar49 = *(undefined1 (*) [16])(plVar26 + -2);
                lVar42 = plVar26[1];
                lVar15 = *plVar26;
                uVar17 = uVar17 - 4;
                plVar26 = plVar26 + -4;
                plVar24[-1] = auVar49._8_8_;
                plVar24[-2] = auVar49._0_8_;
                plVar24[1] = lVar42;
                *plVar24 = lVar15;
                plVar24 = plVar24 + -4;
              } while (uVar17 != 0);
              plVar45 = plVar45 + -uVar21;
              plVar24 = plVar5;
              if (uVar6 == uVar21) goto LAB_003601a4;
            }
            do {
              plVar32 = plVar32 + -1;
              plVar45 = plVar45 + -1;
              *plVar45 = *plVar32;
            } while (plVar32 != plVar5);
            plVar24 = *(long **)(this + 0xb78);
          }
LAB_003601a4:
          *(long **)(this + 0xb78) = plVar45;
          *(long **)(this + 0xb80) = plVar34;
          *(void **)(this + 0xb88) = (void *)((long)pvVar7 + uVar16 * 8);
          if (plVar24 != (long *)0x0) {
            operator_delete(plVar24);
          }
          goto LAB_003601c0;
        }
LAB_00361cd4:
        FUN_003624a0();
        goto LAB_00361cd8;
      }
LAB_003601c4:
      uVar4 = (**(code **)(*(long *)pJVar35 + 0x10))(pJVar35);
      uVar4 = uVar4 & 0xffff;
      if (uVar4 < 0x1c3) {
        if (uVar4 == 0x31) {
          local_148 = (undefined **)
                      (**(code **)(*(long *)this + 0x348))(this,*(undefined4 *)(pJVar35 + 0x28));
          if (local_148 == (undefined **)0x0) {
            fprintf((FILE *)(PTR___sF_0067cee8 + 0x130),
                    "Artboard::initialize - Draw rule targets missing component width id %d\n",
                    (ulong)*(uint *)(pJVar35 + 0x28));
          }
          else {
            lVar15 = FUN_003624b4(&local_a0,local_148,&local_148);
            *(Joystick **)(lVar15 + 0x18) = pJVar35;
          }
        }
        else {
          if (uVar4 == 0x5c) goto LAB_00360254;
          if (uVar4 == 0x94) {
            if (*(long *)(pJVar35 + 0x100) != 0) {
              this[0xbd0] = (Artboard)0x0;
            }
            if (*(LinearAnimation **)(pJVar35 + 0xf8) != (LinearAnimation *)0x0) {
              Joystick::addAnimationDependents(pJVar35,this,*(LinearAnimation **)(pJVar35 + 0xf8));
            }
            if (*(LinearAnimation **)(pJVar35 + 0xf0) != (LinearAnimation *)0x0) {
              Joystick::addAnimationDependents(pJVar35,this,*(LinearAnimation **)(pJVar35 + 0xf0));
            }
            puVar43 = *(undefined8 **)(this + 0xb68);
            if (puVar43 < *(undefined8 **)(this + 0xb70)) {
              puVar30 = puVar43 + 1;
              *puVar43 = pJVar35;
            }
            else {
              puVar41 = *(undefined8 **)(this + 0xb60);
              lVar15 = (long)puVar43 - (long)puVar41 >> 3;
              uVar6 = lVar15 + 1;
              if (uVar6 >> 0x3d != 0) goto LAB_00361ce0;
              uVar17 = (long)*(undefined8 **)(this + 0xb70) - (long)puVar41;
              uVar16 = (long)uVar17 >> 2;
              if (uVar16 <= uVar6) {
                uVar16 = uVar6;
              }
              if (0x7ffffffffffffff7 < uVar17) {
                uVar16 = 0x1fffffffffffffff;
              }
              if (uVar16 == 0) {
                pvVar7 = (void *)0x0;
              }
              else {
                if (uVar16 >> 0x3d != 0) goto LAB_00361cb4;
                pvVar7 = operator_new(uVar16 << 3);
              }
              puVar12 = (undefined8 *)((long)pvVar7 + lVar15 * 8);
              puVar30 = puVar12 + 1;
              *puVar12 = pJVar35;
              puVar27 = puVar43;
              if ((long)puVar43 - (long)puVar41 != 0) {
                uVar6 = ((long)puVar43 - (long)puVar41) - 8;
                if ((0x37 < uVar6) &&
                   (0x1f < (ulong)((long)puVar43 + (-((long)puVar43 - (long)puVar41) - (long)pvVar7)
                                  ))) {
                  puVar27 = puVar12 + -2;
                  puVar25 = puVar43 + -2;
                  uVar6 = (uVar6 >> 3) + 1;
                  uVar21 = uVar6 & 0x3ffffffffffffffc;
                  puVar43 = puVar43 + -uVar21;
                  uVar17 = uVar21;
                  do {
                    auVar49 = *(undefined1 (*) [16])(puVar25 + -2);
                    uVar47 = puVar25[1];
                    uVar39 = *puVar25;
                    uVar17 = uVar17 - 4;
                    puVar25 = puVar25 + -4;
                    puVar27[-1] = auVar49._8_8_;
                    puVar27[-2] = auVar49._0_8_;
                    puVar27[1] = uVar47;
                    *puVar27 = uVar39;
                    puVar27 = puVar27 + -4;
                  } while (uVar17 != 0);
                  puVar12 = puVar12 + -uVar21;
                  puVar27 = puVar41;
                  if (uVar6 == uVar21) goto LAB_00360794;
                }
                do {
                  puVar43 = puVar43 + -1;
                  puVar12 = puVar12 + -1;
                  *puVar12 = *puVar43;
                } while (puVar43 != puVar41);
                puVar27 = *(undefined8 **)(this + 0xb60);
              }
LAB_00360794:
              *(undefined8 **)(this + 0xb60) = puVar12;
              *(undefined8 **)(this + 0xb68) = puVar30;
              *(void **)(this + 0xb70) = (void *)((long)pvVar7 + uVar16 * 8);
              if (puVar27 != (undefined8 *)0x0) {
                operator_delete(puVar27);
              }
            }
            *(undefined8 **)(this + 0xb68) = puVar30;
          }
        }
      }
      else if (uVar4 - 0x1c3 < 2) {
LAB_00360254:
        puVar43 = *(undefined8 **)(this + 0xb20);
        if (puVar43 < *(undefined8 **)(this + 0xb28)) {
          puVar30 = puVar43 + 1;
          *puVar43 = pJVar35;
        }
        else {
          puVar41 = *(undefined8 **)(this + 0xb18);
          lVar15 = (long)puVar43 - (long)puVar41 >> 3;
          uVar6 = lVar15 + 1;
          if (uVar6 >> 0x3d != 0) {
            FUN_0034aee4();
            goto LAB_00361cd4;
          }
          uVar17 = (long)*(undefined8 **)(this + 0xb28) - (long)puVar41;
          uVar16 = (long)uVar17 >> 2;
          if (uVar16 <= uVar6) {
            uVar16 = uVar6;
          }
          if (0x7ffffffffffffff7 < uVar17) {
            uVar16 = 0x1fffffffffffffff;
          }
          if (uVar16 == 0) {
            pvVar7 = (void *)0x0;
          }
          else {
            if (uVar16 >> 0x3d != 0) goto LAB_00361cb4;
            pvVar7 = operator_new(uVar16 << 3);
          }
          puVar12 = (undefined8 *)((long)pvVar7 + lVar15 * 8);
          puVar30 = puVar12 + 1;
          *puVar12 = pJVar35;
          puVar27 = puVar43;
          if ((long)puVar43 - (long)puVar41 != 0) {
            uVar6 = ((long)puVar43 - (long)puVar41) - 8;
            if ((0x37 < uVar6) &&
               (0x1f < (ulong)((long)puVar43 + (-((long)puVar43 - (long)puVar41) - (long)pvVar7))))
            {
              puVar27 = puVar12 + -2;
              puVar25 = puVar43 + -2;
              uVar6 = (uVar6 >> 3) + 1;
              uVar21 = uVar6 & 0x3ffffffffffffffc;
              puVar43 = puVar43 + -uVar21;
              uVar17 = uVar21;
              do {
                auVar49 = *(undefined1 (*) [16])(puVar25 + -2);
                uVar47 = puVar25[1];
                uVar39 = *puVar25;
                uVar17 = uVar17 - 4;
                puVar25 = puVar25 + -4;
                puVar27[-1] = auVar49._8_8_;
                puVar27[-2] = auVar49._0_8_;
                puVar27[1] = uVar47;
                *puVar27 = uVar39;
                puVar27 = puVar27 + -4;
              } while (uVar17 != 0);
              puVar12 = puVar12 + -uVar21;
              puVar27 = puVar41;
              if (uVar6 == uVar21) goto LAB_003603b4;
            }
            do {
              puVar43 = puVar43 + -1;
              puVar12 = puVar12 + -1;
              *puVar12 = *puVar43;
            } while (puVar43 != puVar41);
            puVar27 = *(undefined8 **)(this + 0xb18);
          }
LAB_003603b4:
          *(undefined8 **)(this + 0xb18) = puVar12;
          *(undefined8 **)(this + 0xb20) = puVar30;
          *(void **)(this + 0xb28) = (void *)((long)pvVar7 + uVar16 * 8);
          if (puVar27 != (undefined8 *)0x0) {
            operator_delete(puVar27);
          }
        }
        plVar32 = *(long **)(this + 0xb50);
        *(undefined8 **)(this + 0xb20) = puVar30;
        if (plVar32 < *(long **)(this + 0xb58)) {
          plVar24 = plVar32 + 1;
          *plVar32 = (long)(pJVar35 + 0x198);
LAB_003603f0:
          *(long **)(this + 0xb50) = plVar24;
        }
        else {
          plVar34 = *(long **)(this + 0xb48);
          lVar15 = (long)plVar32 - (long)plVar34 >> 3;
          uVar6 = lVar15 + 1;
          if (uVar6 >> 0x3d != 0) goto LAB_00361cc8;
          uVar17 = (long)*(long **)(this + 0xb58) - (long)plVar34;
          uVar16 = (long)uVar17 >> 2;
          if (uVar16 <= uVar6) {
            uVar16 = uVar6;
          }
          if (0x7ffffffffffffff7 < uVar17) {
            uVar16 = 0x1fffffffffffffff;
          }
          if (uVar16 == 0) {
            pvVar7 = (void *)0x0;
          }
          else {
            if (uVar16 >> 0x3d != 0) goto LAB_00361cb4;
            pvVar7 = operator_new(uVar16 << 3);
          }
          plVar5 = (long *)((long)pvVar7 + lVar15 * 8);
          plVar45 = plVar5 + 1;
          *plVar5 = (long)(pJVar35 + 0x198);
          if ((long)plVar32 - (long)plVar34 != 0) {
            uVar6 = ((long)plVar32 - (long)plVar34) - 8;
            plVar24 = plVar32;
            if ((0x37 < uVar6) &&
               (0x1f < (ulong)((long)plVar32 + (-((long)plVar32 - (long)plVar34) - (long)pvVar7))))
            {
              plVar26 = plVar5 + -2;
              plVar11 = plVar32 + -2;
              uVar6 = (uVar6 >> 3) + 1;
              uVar21 = uVar6 & 0x3ffffffffffffffc;
              plVar24 = plVar32 + -uVar21;
              uVar17 = uVar21;
              do {
                auVar49 = *(undefined1 (*) [16])(plVar11 + -2);
                lVar42 = plVar11[1];
                lVar15 = *plVar11;
                uVar17 = uVar17 - 4;
                plVar11 = plVar11 + -4;
                plVar26[-1] = auVar49._8_8_;
                plVar26[-2] = auVar49._0_8_;
                plVar26[1] = lVar42;
                *plVar26 = lVar15;
                plVar26 = plVar26 + -4;
              } while (uVar17 != 0);
              plVar5 = plVar5 + -uVar21;
              plVar32 = plVar34;
              if (uVar6 == uVar21) goto LAB_003604e4;
            }
            do {
              plVar24 = plVar24 + -1;
              plVar5 = plVar5 + -1;
              *plVar5 = *plVar24;
            } while (plVar24 != plVar34);
            plVar32 = *(long **)(this + 0xb48);
          }
LAB_003604e4:
          *(long **)(this + 0xb48) = plVar5;
          *(long **)(this + 0xb50) = plVar45;
          *(void **)(this + 0xb58) = (void *)((long)pvVar7 + uVar16 * 8);
          if (plVar32 != (long *)0x0) {
            operator_delete(plVar32);
          }
          *(long **)(this + 0xb50) = plVar45;
        }
      }
      else {
        if (uVar4 != 0x22f) goto LAB_003607b4;
        puVar43 = *(undefined8 **)(this + 0xb38);
        if (puVar43 < *(undefined8 **)(this + 0xb40)) {
          puVar30 = puVar43 + 1;
          *puVar43 = pJVar35;
        }
        else {
          puVar41 = *(undefined8 **)(this + 0xb30);
          lVar15 = (long)puVar43 - (long)puVar41 >> 3;
          uVar6 = lVar15 + 1;
          if (uVar6 >> 0x3d != 0) goto LAB_00361cdc;
          uVar17 = (long)*(undefined8 **)(this + 0xb40) - (long)puVar41;
          uVar16 = (long)uVar17 >> 2;
          if (uVar16 <= uVar6) {
            uVar16 = uVar6;
          }
          if (0x7ffffffffffffff7 < uVar17) {
            uVar16 = 0x1fffffffffffffff;
          }
          if (uVar16 == 0) {
            pvVar7 = (void *)0x0;
          }
          else {
            if (uVar16 >> 0x3d != 0) goto LAB_00361cb4;
            pvVar7 = operator_new(uVar16 << 3);
          }
          puVar12 = (undefined8 *)((long)pvVar7 + lVar15 * 8);
          puVar30 = puVar12 + 1;
          *puVar12 = pJVar35;
          puVar27 = puVar43;
          if ((long)puVar43 - (long)puVar41 != 0) {
            uVar6 = ((long)puVar43 - (long)puVar41) - 8;
            if ((0x37 < uVar6) &&
               (0x1f < (ulong)((long)puVar43 + (-((long)puVar43 - (long)puVar41) - (long)pvVar7))))
            {
              puVar27 = puVar12 + -2;
              puVar25 = puVar43 + -2;
              uVar6 = (uVar6 >> 3) + 1;
              uVar21 = uVar6 & 0x3ffffffffffffffc;
              puVar43 = puVar43 + -uVar21;
              uVar17 = uVar21;
              do {
                auVar49 = *(undefined1 (*) [16])(puVar25 + -2);
                uVar47 = puVar25[1];
                uVar39 = *puVar25;
                uVar17 = uVar17 - 4;
                puVar25 = puVar25 + -4;
                puVar27[-1] = auVar49._8_8_;
                puVar27[-2] = auVar49._0_8_;
                puVar27[1] = uVar47;
                *puVar27 = uVar39;
                puVar27 = puVar27 + -4;
              } while (uVar17 != 0);
              puVar12 = puVar12 + -uVar21;
              puVar27 = puVar41;
              if (uVar6 == uVar21) goto LAB_003606fc;
            }
            do {
              puVar43 = puVar43 + -1;
              puVar12 = puVar12 + -1;
              *puVar12 = *puVar43;
            } while (puVar43 != puVar41);
            puVar27 = *(undefined8 **)(this + 0xb30);
          }
LAB_003606fc:
          *(undefined8 **)(this + 0xb30) = puVar12;
          *(undefined8 **)(this + 0xb38) = puVar30;
          *(void **)(this + 0xb40) = (void *)((long)pvVar7 + uVar16 * 8);
          if (puVar27 != (undefined8 *)0x0) {
            operator_delete(puVar27);
          }
        }
        plVar32 = *(long **)(this + 0xb50);
        *(undefined8 **)(this + 0xb38) = puVar30;
        if (*(long **)(this + 0xb58) <= plVar32) {
          plVar34 = *(long **)(this + 0xb48);
          lVar15 = (long)plVar32 - (long)plVar34 >> 3;
          uVar6 = lVar15 + 1;
          if (uVar6 >> 0x3d == 0) {
            uVar17 = (long)*(long **)(this + 0xb58) - (long)plVar34;
            uVar16 = (long)uVar17 >> 2;
            if (uVar16 <= uVar6) {
              uVar16 = uVar6;
            }
            if (0x7ffffffffffffff7 < uVar17) {
              uVar16 = 0x1fffffffffffffff;
            }
            if (uVar16 == 0) {
              pvVar7 = (void *)0x0;
            }
            else {
              if (uVar16 >> 0x3d != 0) goto LAB_00361cb4;
              pvVar7 = operator_new(uVar16 << 3);
            }
            plVar5 = (long *)((long)pvVar7 + lVar15 * 8);
            plVar24 = plVar5 + 1;
            *plVar5 = (long)(pJVar35 + 0x178);
            plVar45 = plVar32;
            if ((long)plVar32 - (long)plVar34 != 0) {
              uVar6 = ((long)plVar32 - (long)plVar34) - 8;
              if ((0x37 < uVar6) &&
                 (0x1f < (ulong)((long)plVar32 + (-((long)plVar32 - (long)plVar34) - (long)pvVar7)))
                 ) {
                plVar45 = plVar5 + -2;
                plVar26 = plVar32 + -2;
                uVar6 = (uVar6 >> 3) + 1;
                uVar21 = uVar6 & 0x3ffffffffffffffc;
                plVar32 = plVar32 + -uVar21;
                uVar17 = uVar21;
                do {
                  auVar49 = *(undefined1 (*) [16])(plVar26 + -2);
                  lVar42 = plVar26[1];
                  lVar15 = *plVar26;
                  uVar17 = uVar17 - 4;
                  plVar26 = plVar26 + -4;
                  plVar45[-1] = auVar49._8_8_;
                  plVar45[-2] = auVar49._0_8_;
                  plVar45[1] = lVar42;
                  *plVar45 = lVar15;
                  plVar45 = plVar45 + -4;
                } while (uVar17 != 0);
                plVar5 = plVar5 + -uVar21;
                plVar45 = plVar34;
                if (uVar6 == uVar21) goto LAB_00360a34;
              }
              do {
                plVar32 = plVar32 + -1;
                plVar5 = plVar5 + -1;
                *plVar5 = *plVar32;
              } while (plVar32 != plVar34);
              plVar45 = *(long **)(this + 0xb48);
            }
LAB_00360a34:
            *(long **)(this + 0xb48) = plVar5;
            *(long **)(this + 0xb50) = plVar24;
            *(void **)(this + 0xb58) = (void *)((long)pvVar7 + uVar16 * 8);
            if (plVar45 != (long *)0x0) {
              operator_delete(plVar45);
            }
            goto LAB_003603f0;
          }
          goto LAB_00361cc8;
        }
        *plVar32 = (long)(pJVar35 + 0x178);
        *(long **)(this + 0xb50) = plVar32 + 1;
      }
LAB_003607b4:
      uVar4 = (**(code **)(*(long *)pJVar35 + 0x10))(pJVar35);
      uVar4 = uVar4 & 0xffff;
      if (uVar4 < 0x22f) {
        if (uVar4 < 0x1c3) {
          if (uVar4 != 1) {
            lVar15 = 0x188;
            if (uVar4 == 0x5c) goto LAB_00360878;
            if (uVar4 != 0x199) goto LAB_0035fff4;
          }
          lVar15 = 0x1b8;
        }
        else {
          lVar15 = 0x188;
          if (1 < uVar4 - 0x1c3) {
            if (uVar4 != 0x209) goto LAB_0035fff4;
            lVar15 = 0xb8;
          }
        }
      }
      else if (uVar4 < 0x275) {
        lVar15 = 0x188;
        if (uVar4 != 0x22f) {
          if (uVar4 != 0x239) {
            if (uVar4 == 0x25b) goto LAB_00360864;
            goto LAB_0035fff4;
          }
          lVar15 = 0x1a8;
        }
      }
      else if (uVar4 == 0x275) {
        lVar15 = 0x158;
      }
      else if (uVar4 == 0x27d) {
LAB_00360864:
        lVar15 = 0x1f0;
      }
      else {
        if (uVar4 != 0x280) goto LAB_0035fff4;
        lVar15 = 0x120;
      }
LAB_00360878:
      plVar32 = *(long **)(this + 0xbb0);
      if (plVar32 < *(long **)(this + 3000)) {
        plVar34 = plVar32 + 1;
        *plVar32 = (long)(pJVar35 + lVar15);
      }
      else {
        plVar5 = *(long **)(this + 0xba8);
        lVar42 = (long)plVar32 - (long)plVar5 >> 3;
        uVar6 = lVar42 + 1;
        if (uVar6 >> 0x3d != 0) goto LAB_00361cc0;
        uVar17 = (long)*(long **)(this + 3000) - (long)plVar5;
        uVar16 = (long)uVar17 >> 2;
        if (uVar16 <= uVar6) {
          uVar16 = uVar6;
        }
        if (0x7ffffffffffffff7 < uVar17) {
          uVar16 = 0x1fffffffffffffff;
        }
        if (uVar16 == 0) {
          pvVar7 = (void *)0x0;
        }
        else {
          if (uVar16 >> 0x3d != 0) goto LAB_00361cb4;
          pvVar7 = operator_new(uVar16 << 3);
        }
        plVar45 = (long *)((long)pvVar7 + lVar42 * 8);
        plVar34 = plVar45 + 1;
        *plVar45 = (long)(pJVar35 + lVar15);
        plVar24 = plVar32;
        if ((long)plVar32 - (long)plVar5 != 0) {
          uVar6 = ((long)plVar32 - (long)plVar5) - 8;
          if ((0x37 < uVar6) &&
             (0x1f < (ulong)((long)plVar32 + (-((long)plVar32 - (long)plVar5) - (long)pvVar7)))) {
            plVar24 = plVar45 + -2;
            plVar26 = plVar32 + -2;
            uVar6 = (uVar6 >> 3) + 1;
            uVar21 = uVar6 & 0x3ffffffffffffffc;
            plVar32 = plVar32 + -uVar21;
            uVar17 = uVar21;
            do {
              auVar49 = *(undefined1 (*) [16])(plVar26 + -2);
              lVar42 = plVar26[1];
              lVar15 = *plVar26;
              uVar17 = uVar17 - 4;
              plVar26 = plVar26 + -4;
              plVar24[-1] = auVar49._8_8_;
              plVar24[-2] = auVar49._0_8_;
              plVar24[1] = lVar42;
              *plVar24 = lVar15;
              plVar24 = plVar24 + -4;
            } while (uVar17 != 0);
            plVar45 = plVar45 + -uVar21;
            plVar24 = plVar5;
            if (uVar6 == uVar21) goto LAB_00360978;
          }
          do {
            plVar32 = plVar32 + -1;
            plVar45 = plVar45 + -1;
            *plVar45 = *plVar32;
          } while (plVar32 != plVar5);
          plVar24 = *(long **)(this + 0xba8);
        }
LAB_00360978:
        *(long **)(this + 0xba8) = plVar45;
        *(long **)(this + 0xbb0) = plVar34;
        *(void **)(this + 3000) = (void *)((long)pvVar7 + uVar16 * 8);
        if (plVar24 != (long *)0x0) {
          operator_delete(plVar24);
        }
      }
      *(long **)(this + 0xbb0) = plVar34;
    }
LAB_0035fff4:
  }
  if (this[0xbe8] == (Artboard)0x0) {
    puVar40 = *(undefined8 **)(this + 0xa90);
    for (puVar38 = *(undefined8 **)(this + 0xa88); puVar38 != puVar40; puVar38 = puVar38 + 1) {
      cVar3 = (**(code **)(*(long *)*puVar38 + 0x40))((long *)*puVar38,this + 0x998);
      if (cVar3 == '\x02') goto LAB_00361414;
    }
    puVar40 = *(undefined8 **)(this + 0xaa8);
    for (puVar38 = *(undefined8 **)(this + 0xaa0); puVar38 != puVar40; puVar38 = puVar38 + 1) {
      cVar3 = (**(code **)(*(long *)*puVar38 + 0x40))((long *)*puVar38,this + 0x998);
      if (cVar3 == '\x02') goto LAB_00361414;
    }
  }
  puVar40 = *(undefined8 **)(this + 0xa60);
  for (puVar38 = *(undefined8 **)(this + 0xa58); puVar38 != puVar40; puVar38 = puVar38 + 1) {
    pAVar33 = (Artboard *)*puVar38;
    if (pAVar33 != (Artboard *)0x0) {
      uVar6 = (**(code **)(*(long *)pAVar33 + 0x18))(pAVar33,10);
      if ((uVar6 & 1) != 0) {
        (**(code **)(*(long *)pAVar33 + 0x68))(pAVar33);
      }
      uVar6 = (**(code **)(*(long *)pAVar33 + 0x18))(pAVar33,0xd);
      if ((pAVar33 == this) || ((uVar6 & 1) == 0)) {
        uVar6 = (**(code **)(*(long *)pAVar33 + 0x18))(pAVar33,0x2a);
        if ((uVar6 & 1) != 0) {
          pJVar44 = *(Joystick **)(this + 0xaf0);
          if (pJVar44 < *(Joystick **)(this + 0xaf8)) {
            pJVar19 = pJVar44 + 8;
            *(Artboard **)pJVar44 = pAVar33;
          }
          else {
            pJVar35 = *(Joystick **)(this + 0xae8);
            lVar15 = (long)pJVar44 - (long)pJVar35 >> 3;
            uVar6 = lVar15 + 1;
            if (uVar6 >> 0x3d != 0) goto LAB_00361cd8;
            uVar17 = (long)*(Joystick **)(this + 0xaf8) - (long)pJVar35;
            uVar16 = (long)uVar17 >> 2;
            if (uVar16 <= uVar6) {
              uVar16 = uVar6;
            }
            if (0x7ffffffffffffff7 < uVar17) {
              uVar16 = 0x1fffffffffffffff;
            }
            if (uVar16 == 0) {
              pvVar7 = (void *)0x0;
            }
            else {
              if (uVar16 >> 0x3d != 0) goto LAB_00361cb4;
              pvVar7 = operator_new(uVar16 << 3);
            }
            plVar32 = (long *)((long)pvVar7 + lVar15 * 8);
            pJVar19 = (Joystick *)(plVar32 + 1);
            *plVar32 = (long)pAVar33;
            if ((long)pJVar44 - (long)pJVar35 != 0) {
              uVar6 = ((long)pJVar44 - (long)pJVar35) - 8;
              pJVar37 = pJVar44;
              if ((0x37 < uVar6) &&
                 ((Joystick *)0x1f < pJVar44 + (-((long)pJVar44 - (long)pJVar35) - (long)pvVar7))) {
                plVar34 = plVar32 + -2;
                pJVar22 = pJVar44 + -0x10;
                uVar6 = (uVar6 >> 3) + 1;
                uVar21 = uVar6 & 0x3ffffffffffffffc;
                pJVar37 = pJVar44 + uVar21 * -8;
                uVar17 = uVar21;
                do {
                  auVar49 = *(undefined1 (*) [16])(pJVar22 + -0x10);
                  lVar42 = *(long *)(pJVar22 + 8);
                  lVar15 = *(long *)pJVar22;
                  uVar17 = uVar17 - 4;
                  pJVar22 = pJVar22 + -0x20;
                  plVar34[-1] = auVar49._8_8_;
                  plVar34[-2] = auVar49._0_8_;
                  plVar34[1] = lVar42;
                  *plVar34 = lVar15;
                  plVar34 = plVar34 + -4;
                } while (uVar17 != 0);
                plVar32 = plVar32 + -uVar21;
                pJVar44 = pJVar35;
                if (uVar6 == uVar21) goto LAB_00360e34;
              }
              do {
                pJVar37 = pJVar37 + -8;
                plVar32 = plVar32 + -1;
                *plVar32 = *(long *)pJVar37;
              } while (pJVar37 != pJVar35);
              pJVar44 = *(Joystick **)(this + 0xae8);
            }
LAB_00360e34:
            *(long **)(this + 0xae8) = plVar32;
            *(Joystick **)(this + 0xaf0) = pJVar19;
            *(void **)(this + 0xaf8) = (void *)((long)pvVar7 + uVar16 * 8);
            if (pJVar44 != (Joystick *)0x0) {
              operator_delete(pJVar44);
            }
          }
          *(Joystick **)(this + 0xaf0) = pJVar19;
        }
      }
      else {
        puVar43 = *(undefined8 **)(this + 0xad8);
        if (puVar43 < *(undefined8 **)(this + 0xae0)) {
          puVar27 = puVar43 + 1;
          *puVar43 = pAVar33;
        }
        else {
          puVar41 = *(undefined8 **)(this + 0xad0);
          lVar15 = (long)puVar43 - (long)puVar41 >> 3;
          uVar6 = lVar15 + 1;
          if (uVar6 >> 0x3d != 0) goto LAB_00361cb8;
          uVar17 = (long)*(undefined8 **)(this + 0xae0) - (long)puVar41;
          uVar16 = (long)uVar17 >> 2;
          if (uVar16 <= uVar6) {
            uVar16 = uVar6;
          }
          if (0x7ffffffffffffff7 < uVar17) {
            uVar16 = 0x1fffffffffffffff;
          }
          if (uVar16 == 0) {
            pvVar7 = (void *)0x0;
          }
          else {
            if (uVar16 >> 0x3d != 0) goto LAB_00361cb4;
            pvVar7 = operator_new(uVar16 << 3);
          }
          puVar12 = (undefined8 *)((long)pvVar7 + lVar15 * 8);
          puVar27 = puVar12 + 1;
          *puVar12 = pAVar33;
          if ((long)puVar43 - (long)puVar41 != 0) {
            uVar6 = ((long)puVar43 - (long)puVar41) - 8;
            puVar30 = puVar43;
            if ((0x37 < uVar6) &&
               (0x1f < (ulong)((long)puVar43 + (-((long)puVar43 - (long)puVar41) - (long)pvVar7))))
            {
              puVar25 = puVar12 + -2;
              puVar29 = puVar43 + -2;
              uVar6 = (uVar6 >> 3) + 1;
              uVar21 = uVar6 & 0x3ffffffffffffffc;
              puVar30 = puVar43 + -uVar21;
              uVar17 = uVar21;
              do {
                auVar49 = *(undefined1 (*) [16])(puVar29 + -2);
                uVar47 = puVar29[1];
                uVar39 = *puVar29;
                uVar17 = uVar17 - 4;
                puVar29 = puVar29 + -4;
                puVar25[-1] = auVar49._8_8_;
                puVar25[-2] = auVar49._0_8_;
                puVar25[1] = uVar47;
                *puVar25 = uVar39;
                puVar25 = puVar25 + -4;
              } while (uVar17 != 0);
              puVar12 = puVar12 + -uVar21;
              puVar43 = puVar41;
              if (uVar6 == uVar21) goto LAB_00360c3c;
            }
            do {
              puVar30 = puVar30 + -1;
              puVar12 = puVar12 + -1;
              *puVar12 = *puVar30;
            } while (puVar30 != puVar41);
            puVar43 = *(undefined8 **)(this + 0xad0);
          }
LAB_00360c3c:
          *(undefined8 **)(this + 0xad0) = puVar12;
          *(undefined8 **)(this + 0xad8) = puVar27;
          *(void **)(this + 0xae0) = (void *)((long)pvVar7 + uVar16 * 8);
          if (puVar43 != (undefined8 *)0x0) {
            operator_delete(puVar43);
          }
        }
        *(undefined8 **)(this + 0xad8) = puVar27;
        uVar6 = (**(code **)(*(long *)pAVar33 + 0x18))(pAVar33,0x201);
        if ((uVar6 & 1) != 0) {
          lVar10 = *(long *)(pAVar33 + 0x30);
          lVar15 = *(long *)(this + 0xad8) - *(long *)(this + 0xad0) >> 3;
          lVar42 = (*(long *)(this + 0xad8) - *(long *)(this + 0xad0)) + -0x10;
          do {
            lVar15 = lVar15 + -1;
            if (lVar15 == 0) break;
            pauVar1 = (undefined1 (*) [16])(*(long *)(this + 0xad0) + lVar42);
            lVar2 = *(long *)*pauVar1;
            auVar49 = NEON_ext(*pauVar1,*pauVar1,8,1);
            puVar43 = (undefined8 *)(*(long *)(this + 0xad0) + lVar42);
            puVar43[1] = auVar49._8_8_;
            *puVar43 = auVar49._0_8_;
            lVar42 = lVar42 + -8;
          } while (lVar2 != lVar10);
        }
        uVar39 = NEON_cnt(uStack_98,1);
        uVar46 = NEON_uaddlv(uVar39,1);
        uVar4 = CONCAT22((short)((ulong)uVar39 >> 0x10),uVar46);
        pAVar23 = pAVar33;
        do {
          if (uStack_98 != 0) {
            uVar6 = ((ulong)(uint)((int)pAVar23 << 3) + 8 ^ (ulong)pAVar23 >> 0x20) *
                    -0x622015f714c7d297;
            uVar6 = ((ulong)pAVar23 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
            uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
            if (uVar4 < 2) {
              uVar16 = uStack_98 - 1 & uVar6;
            }
            else {
              uVar16 = uVar6;
              if (uStack_98 <= uVar6) {
                uVar16 = 0;
                if (uStack_98 != 0) {
                  uVar16 = uVar6 / uStack_98;
                }
                uVar16 = uVar6 - uVar16 * uStack_98;
              }
            }
            plVar32 = *(long **)((long)local_a0 + uVar16 * 8);
            if (plVar32 != (long *)0x0) {
              do {
                while( true ) {
                  plVar32 = (long *)*plVar32;
                  if (plVar32 == (long *)0x0) goto LAB_00360ce8;
                  uVar17 = plVar32[1];
                  if (uVar17 != uVar6) break;
                  if ((Artboard *)plVar32[2] == pAVar23) {
                    *(long *)(pAVar33 + 0x158) = plVar32[3];
                    goto LAB_00360a5c;
                  }
                }
                if (uVar4 < 2) {
                  uVar17 = uVar17 & uStack_98 - 1;
                }
                else if (uStack_98 <= uVar17) {
                  uVar21 = 0;
                  if (uStack_98 != 0) {
                    uVar21 = uVar17 / uStack_98;
                  }
                  uVar17 = uVar17 - uVar21 * uStack_98;
                }
              } while (uVar17 == uVar16);
            }
          }
LAB_00360ce8:
          pAVar23 = *(Artboard **)(pAVar23 + 0x30);
        } while (pAVar23 != (Artboard *)0x0);
      }
    }
LAB_00360a5c:
  }
  lVar15 = *(long *)(this + 0xad0);
  if (*(long *)(this + 0xad8) == lVar15) {
    local_1d8 = (undefined8 *)0x0;
  }
  else {
    puVar40 = (undefined8 *)0x0;
    puVar38 = (undefined8 *)0x0;
    puVar43 = (undefined8 *)0x0;
    puVar41 = (undefined8 *)0x0;
    uVar16 = 0;
    uVar6 = 0;
    local_1e0 = (undefined8 *)0x0;
    local_1d8 = (undefined8 *)0x0;
    do {
      plVar32 = *(long **)(lVar15 + uVar16 * 8);
      puVar12 = puVar40;
      if (puVar41 != puVar40) {
        plVar34 = (long *)puVar40[-1];
        plVar5 = plVar32;
        do {
          uVar16 = (**(code **)(*plVar5 + 0x18))(plVar5,0x199);
          puVar12 = puVar41;
          if ((plVar5 == plVar34) && ((uVar16 & 1) != 0)) goto LAB_003611c4;
          plVar5 = (long *)plVar5[6];
        } while (plVar5 != (long *)0x0);
        if (plVar34 != (long *)0x0) {
          uVar16 = -(uVar6 >> 0x1f) & 0xfffffff800000000 | uVar6 << 3;
          uVar6 = (ulong)(int)uVar6;
          lVar15 = uVar16 - 8;
          local_1e8 = uVar16 - 0x10;
          puVar41 = puVar43;
          do {
            plVar45 = *(long **)(this + 0xad0);
            plVar24 = *(long **)(this + 0xad8);
            plVar34 = plVar34 + 0xfc;
            plVar5 = plVar45 + uVar6;
            if (plVar24 < *(long **)(this + 0xae0)) {
              if (plVar5 == plVar24) {
                *plVar5 = (long)plVar34;
                *(long **)(this + 0xad8) = plVar5 + 1;
              }
              else {
                plVar45 = plVar24;
                if (plVar24 + -1 < plVar24) {
                  *plVar24 = plVar24[-1];
                  plVar45 = plVar24 + 1;
                }
                *(long **)(this + 0xad8) = plVar45;
                if (plVar24 != plVar5 + 1) {
                  sVar9 = (long)plVar24 - (long)(plVar5 + 1);
                  memmove((void *)((long)plVar24 - sVar9),plVar5,sVar9);
                }
                *plVar5 = (long)plVar34;
              }
            }
            else {
              uVar16 = ((long)plVar24 - (long)plVar45 >> 3) + 1;
              if (uVar16 >> 0x3d != 0) goto LAB_00361cb8;
              uVar21 = (long)*(long **)(this + 0xae0) - (long)plVar45;
              uVar17 = (long)uVar21 >> 2;
              if (uVar17 <= uVar16) {
                uVar17 = uVar16;
              }
              if (0x7ffffffffffffff7 < uVar21) {
                uVar17 = 0x1fffffffffffffff;
              }
              if (uVar17 == 0) {
                pvVar7 = (void *)0x0;
              }
              else {
                if (uVar17 >> 0x3d != 0) goto LAB_00361cb4;
                pvVar7 = operator_new(uVar17 << 3);
              }
              plVar24 = (long *)((long)pvVar7 + uVar6 * 8);
              plVar26 = (long *)((long)pvVar7 + uVar17 * 8);
              plVar11 = plVar45;
              if (uVar6 == uVar17) {
                if ((long)uVar6 < 1) {
                  uVar16 = uVar6 << 1;
                  if (uVar6 == 0) {
                    uVar16 = 1;
                  }
                  if (uVar16 >> 0x3d != 0) goto LAB_00361cb4;
                  plVar24 = (long *)operator_new(uVar16 * 8);
                  plVar26 = plVar24 + uVar16;
                  if (pvVar7 != (void *)0x0) {
                    operator_delete(pvVar7);
                    plVar11 = *(long **)(this + 0xad0);
                  }
                }
                else {
                  plVar24 = (long *)((long)plVar24 -
                                    ((uVar6 & 0x1fffffffffffffff) * 4 + 4 & 0xfffffffffffffff8));
                }
              }
              __dest = plVar24 + 1;
              *plVar24 = (long)plVar34;
              if (plVar11 != plVar5) {
                uVar16 = (long)plVar5 + (-8 - (long)plVar11);
                plVar34 = plVar5;
                if ((0x17 < uVar16) && (0x1f < (ulong)((long)plVar5 - (long)plVar24))) {
                  plVar34 = plVar24 + -2;
                  uVar16 = (uVar16 >> 3) + 1;
                  uVar17 = uVar16 & 0x3ffffffffffffffc;
                  uVar21 = ((ulong)((long)plVar45 + (lVar15 - (long)plVar11)) >> 3) + 1 &
                           0x3ffffffffffffffc;
                  plVar45 = (long *)((long)plVar45 + local_1e8);
                  do {
                    auVar49 = *(undefined1 (*) [16])(plVar45 + -2);
                    lVar10 = plVar45[1];
                    lVar42 = *plVar45;
                    uVar21 = uVar21 - 4;
                    plVar45 = plVar45 + -4;
                    plVar34[-1] = auVar49._8_8_;
                    plVar34[-2] = auVar49._0_8_;
                    plVar34[1] = lVar10;
                    *plVar34 = lVar42;
                    plVar34 = plVar34 + -4;
                  } while (uVar21 != 0);
                  plVar24 = plVar24 + -uVar17;
                  plVar34 = plVar5 + -uVar17;
                  if (uVar16 == uVar17) goto LAB_00361114;
                }
                do {
                  plVar34 = plVar34 + -1;
                  plVar24 = plVar24 + -1;
                  *plVar24 = *plVar34;
                } while (plVar34 != plVar11);
              }
LAB_00361114:
              sVar9 = *(long *)(this + 0xad8) - (long)plVar5;
              if (sVar9 != 0) {
                memmove(__dest,plVar5,sVar9);
              }
              pvVar7 = *(void **)(this + 0xad0);
              *(long **)(this + 0xad0) = plVar24;
              *(size_t *)(this + 0xad8) = (long)__dest + sVar9;
              *(long **)(this + 0xae0) = plVar26;
              if (pvVar7 != (void *)0x0) {
                operator_delete(pvVar7);
              }
            }
            puVar27 = puVar41 + -1;
            uVar6 = uVar6 + 1;
            puVar40 = puVar38;
            puVar12 = puVar38;
            puVar43 = puVar38;
            if (puVar38 == puVar27) break;
            plVar34 = (long *)puVar41[-2];
            plVar5 = plVar32;
            do {
              uVar16 = (**(code **)(*plVar5 + 0x18))(plVar5,0x199);
              if ((plVar5 == plVar34) && (puVar40 = puVar27, puVar43 = puVar27, (uVar16 & 1) != 0))
              goto LAB_003611c4;
              plVar5 = (long *)plVar5[6];
            } while (plVar5 != (long *)0x0);
            lVar15 = lVar15 + 8;
            local_1e8 = local_1e8 + 8;
            puVar41 = puVar27;
          } while( true );
        }
      }
LAB_003611c4:
      uVar16 = (**(code **)(*plVar32 + 0x18))(plVar32,0x199);
      puVar41 = puVar12;
      puVar12 = local_1d8;
      if ((uVar16 & 1) != 0) {
        if (puVar43 < local_1e0) {
          puVar40 = puVar43 + 1;
          *puVar43 = plVar32;
          puVar43 = puVar40;
        }
        else {
          lVar15 = (long)puVar43 - (long)local_1d8;
          uVar16 = (lVar15 >> 3) + 1;
          if (uVar16 >> 0x3d != 0) goto LAB_00361cc4;
          uVar17 = (long)local_1e0 - (long)local_1d8 >> 2;
          if (uVar17 <= uVar16) {
            uVar17 = uVar16;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)local_1e0 - (long)local_1d8)) {
            uVar17 = 0x1fffffffffffffff;
          }
          if (uVar17 == 0) {
            pvVar7 = (void *)0x0;
          }
          else {
            if (uVar17 >> 0x3d != 0) goto LAB_00361cb4;
            pvVar7 = operator_new(uVar17 << 3);
          }
          puVar38 = (undefined8 *)((long)pvVar7 + (lVar15 >> 3) * 8);
          puVar40 = puVar38 + 1;
          *puVar38 = plVar32;
          if ((long)puVar43 - (long)local_1d8 != 0) {
            uVar16 = ((long)puVar43 - (long)local_1d8) - 8;
            if ((((0x147 < uVar16) &&
                 (uVar21 = (long)pvVar7 + lVar15 + -8,
                 uVar21 - (uVar16 & 0xfffffffffffffff8) <= uVar21)) &&
                ((undefined8 *)((long)(puVar43 + -1) - (uVar16 & 0xfffffffffffffff8)) <=
                 puVar43 + -1)) && (0x1f < (ulong)((long)puVar43 + (-lVar15 - (long)pvVar7)))) {
              puVar41 = puVar38 + -2;
              puVar12 = puVar43 + -2;
              uVar16 = (uVar16 >> 3) + 1;
              uVar18 = uVar16 & 0x3ffffffffffffffc;
              puVar43 = puVar43 + -uVar18;
              uVar21 = uVar18;
              do {
                auVar49 = *(undefined1 (*) [16])(puVar12 + -2);
                uVar47 = puVar12[1];
                uVar39 = *puVar12;
                uVar21 = uVar21 - 4;
                puVar12 = puVar12 + -4;
                puVar41[-1] = auVar49._8_8_;
                puVar41[-2] = auVar49._0_8_;
                puVar41[1] = uVar47;
                *puVar41 = uVar39;
                puVar41 = puVar41 + -4;
              } while (uVar21 != 0);
              puVar38 = puVar38 + -uVar18;
              if (uVar16 == uVar18) goto LAB_003612bc;
            }
            do {
              puVar43 = puVar43 + -1;
              puVar38 = puVar38 + -1;
              *puVar38 = *puVar43;
            } while (puVar43 != local_1d8);
          }
LAB_003612bc:
          local_1e0 = (undefined8 *)((long)pvVar7 + uVar17 * 8);
          puVar41 = puVar38;
          puVar43 = puVar40;
          puVar12 = puVar38;
          if (local_1d8 != (undefined8 *)0x0) {
            operator_delete(local_1d8);
          }
        }
      }
      local_1d8 = puVar12;
      uVar4 = (int)uVar6 + 1;
      uVar6 = (ulong)uVar4;
      plVar32 = *(long **)(this + 0xad8);
      lVar15 = *(long *)(this + 0xad0);
      uVar16 = (ulong)(int)uVar4;
    } while (uVar16 < (ulong)((long)plVar32 - lVar15 >> 3));
    while (local_1d8 != puVar43) {
      lVar15 = puVar43[-1];
      if (plVar32 < *(long **)(this + 0xae0)) {
        plVar34 = plVar32 + 1;
        *plVar32 = lVar15 + 0x7e0;
      }
      else {
        plVar5 = *(long **)(this + 0xad0);
        lVar42 = (long)plVar32 - (long)plVar5;
        uVar6 = (lVar42 >> 3) + 1;
        if (uVar6 >> 0x3d != 0) goto LAB_00361cb8;
        uVar17 = (long)*(long **)(this + 0xae0) - (long)plVar5;
        uVar16 = (long)uVar17 >> 2;
        if (uVar16 <= uVar6) {
          uVar16 = uVar6;
        }
        if (0x7ffffffffffffff7 < uVar17) {
          uVar16 = 0x1fffffffffffffff;
        }
        if (uVar16 == 0) {
          pvVar7 = (void *)0x0;
        }
        else {
          if (uVar16 >> 0x3d != 0) goto LAB_00361cb4;
          pvVar7 = operator_new(uVar16 << 3);
        }
        plVar45 = (long *)((long)pvVar7 + (lVar42 >> 3) * 8);
        plVar34 = plVar45 + 1;
        *plVar45 = lVar15 + 0x7e0;
        plVar24 = plVar32;
        if ((long)plVar32 - (long)plVar5 != 0) {
          uVar6 = ((long)plVar32 - (long)plVar5) - 8;
          if (((0x147 < uVar6) &&
              (uVar17 = (long)pvVar7 + lVar42 + -8, uVar17 - (uVar6 & 0xfffffffffffffff8) <= uVar17)
              ) && (((long *)((long)(plVar32 + -1) - (uVar6 & 0xfffffffffffffff8)) <= plVar32 + -1
                    && (0x1f < (ulong)((long)plVar32 + (-lVar42 - (long)pvVar7)))))) {
            plVar24 = plVar45 + -2;
            plVar26 = plVar32 + -2;
            uVar6 = (uVar6 >> 3) + 1;
            uVar21 = uVar6 & 0x3ffffffffffffffc;
            plVar32 = plVar32 + -uVar21;
            uVar17 = uVar21;
            do {
              auVar49 = *(undefined1 (*) [16])(plVar26 + -2);
              lVar42 = plVar26[1];
              lVar15 = *plVar26;
              uVar17 = uVar17 - 4;
              plVar26 = plVar26 + -4;
              plVar24[-1] = auVar49._8_8_;
              plVar24[-2] = auVar49._0_8_;
              plVar24[1] = lVar42;
              *plVar24 = lVar15;
              plVar24 = plVar24 + -4;
            } while (uVar17 != 0);
            plVar45 = plVar45 + -uVar21;
            plVar24 = plVar5;
            if (uVar6 == uVar21) goto LAB_003614fc;
          }
          do {
            plVar32 = plVar32 + -1;
            plVar45 = plVar45 + -1;
            *plVar45 = *plVar32;
          } while (plVar32 != plVar5);
          plVar24 = *(long **)(this + 0xad0);
        }
LAB_003614fc:
        *(long **)(this + 0xad0) = plVar45;
        *(long **)(this + 0xad8) = plVar34;
        *(void **)(this + 0xae0) = (void *)((long)pvVar7 + uVar16 * 8);
        if (plVar24 != (long *)0x0) {
          operator_delete(plVar24);
        }
      }
      *(long **)(this + 0xad8) = plVar34;
      puVar40 = puVar40 + -1;
      plVar32 = plVar34;
      puVar43 = puVar40;
    }
  }
  sortDependencies(this);
  puVar38 = *(undefined8 **)(this + 0xa58);
  puVar40 = *(undefined8 **)(this + 0xa60);
  if (puVar38 == puVar40) {
    plVar32 = (long *)0x0;
    plVar34 = (long *)0x0;
  }
  else {
    plVar5 = (long *)0x0;
    plVar34 = (long *)0x0;
    plVar45 = (long *)0x0;
    do {
      local_148 = (undefined **)*puVar38;
      plVar32 = plVar45;
      if ((local_148 != (undefined **)0x0) && (uStack_98 != 0)) {
        uVar39 = NEON_cnt(uStack_98,1);
        uVar6 = ((ulong)(uint)((int)local_148 << 3) + 8 ^ (ulong)local_148 >> 0x20) *
                -0x622015f714c7d297;
        uVar46 = NEON_uaddlv(uVar39,1);
        uVar4 = CONCAT22((short)((ulong)uVar39 >> 0x10),uVar46);
        uVar6 = ((ulong)local_148 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
        uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
        if (uVar4 < 2) {
          uVar16 = uStack_98 - 1 & uVar6;
        }
        else {
          uVar16 = uVar6;
          if (uStack_98 <= uVar6) {
            uVar16 = 0;
            if (uStack_98 != 0) {
              uVar16 = uVar6 / uStack_98;
            }
            uVar16 = uVar6 - uVar16 * uStack_98;
          }
        }
        plVar24 = *(long **)((long)local_a0 + uVar16 * 8);
        if ((plVar24 != (long *)0x0) && (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0)) {
LAB_0036169c:
          uVar17 = plVar24[1];
          if (uVar17 == uVar6) {
            if ((undefined **)plVar24[2] != local_148) goto LAB_00361694;
            lVar15 = FUN_003624b4(&local_a0,local_148,&local_148);
            if (plVar5 <= plVar34) {
              lVar42 = (long)plVar34 - (long)plVar45;
              pJVar35 = (Joystick *)(lVar42 >> 3);
              pJVar44 = pJVar35 + 1;
              if ((ulong)pJVar44 >> 0x3d != 0) goto LAB_00361ce4;
              pJVar19 = (Joystick *)((long)plVar5 - (long)plVar45 >> 2);
              if (pJVar19 <= pJVar44) {
                pJVar19 = pJVar44;
              }
              if (0x7ffffffffffffff7 < (ulong)((long)plVar5 - (long)plVar45)) {
                pJVar19 = (Joystick *)0x1fffffffffffffff;
              }
              if (pJVar19 == (Joystick *)0x0) {
                pvVar7 = (void *)0x0;
              }
              else {
                if ((ulong)pJVar19 >> 0x3d != 0) goto LAB_00361cb4;
                pvVar7 = operator_new((long)pJVar19 << 3);
              }
              plVar32 = (long *)((long)pvVar7 + (long)pJVar35 * 8);
              plVar24 = plVar32 + 1;
              *plVar32 = *(long *)(lVar15 + 0x18);
              if ((long)plVar34 - (long)plVar45 == 0) goto LAB_0036179c;
              uVar6 = ((long)plVar34 - (long)plVar45) - 8;
              if ((((uVar6 < 0x148) ||
                   (uVar16 = (long)pvVar7 + lVar42 + -8,
                   uVar16 < uVar16 - (uVar6 & 0xfffffffffffffff8))) ||
                  (plVar34 + -1 < (long *)((long)(plVar34 + -1) - (uVar6 & 0xfffffffffffffff8)))) ||
                 ((ulong)((long)plVar34 + (-lVar42 - (long)pvVar7)) < 0x20)) goto LAB_0036178c;
              plVar5 = plVar32 + -2;
              plVar26 = plVar34 + -2;
              uVar6 = (uVar6 >> 3) + 1;
              uVar17 = uVar6 & 0x3ffffffffffffffc;
              plVar34 = plVar34 + -uVar17;
              uVar16 = uVar17;
              do {
                auVar49 = *(undefined1 (*) [16])(plVar26 + -2);
                lVar42 = plVar26[1];
                lVar15 = *plVar26;
                uVar16 = uVar16 - 4;
                plVar26 = plVar26 + -4;
                plVar5[-1] = auVar49._8_8_;
                plVar5[-2] = auVar49._0_8_;
                plVar5[1] = lVar42;
                *plVar5 = lVar15;
                plVar5 = plVar5 + -4;
              } while (uVar16 != 0);
              plVar32 = plVar32 + -uVar17;
              if (uVar6 != uVar17) {
LAB_0036178c:
                do {
                  plVar34 = plVar34 + -1;
                  plVar32 = plVar32 + -1;
                  *plVar32 = *plVar34;
                } while (plVar34 != plVar45);
              }
LAB_0036179c:
              plVar5 = (long *)((long)pvVar7 + (long)pJVar19 * 8);
              plVar34 = plVar24;
              if (plVar45 != (long *)0x0) {
                operator_delete(plVar45);
              }
              goto LAB_003616f8;
            }
            *plVar34 = *(long *)(lVar15 + 0x18);
            plVar34 = plVar34 + 1;
          }
          else {
            if (uVar4 < 2) {
              uVar17 = uVar17 & uStack_98 - 1;
            }
            else if (uStack_98 <= uVar17) {
              uVar21 = 0;
              if (uStack_98 != 0) {
                uVar21 = uVar17 / uStack_98;
              }
              uVar17 = uVar17 - uVar21 * uStack_98;
            }
            if (uVar17 == uVar16) goto LAB_00361694;
          }
        }
      }
LAB_003616f8:
      puVar38 = puVar38 + 1;
      plVar45 = plVar32;
    } while (puVar38 != puVar40);
  }
  local_140 = 0xffffffff;
  local_138 = 0;
  local_120 = 0;
  local_118 = 0;
  pvStack_100 = (void *)0x0;
  local_108 = 0;
  uStack_f0 = 0;
  local_f8 = (void *)0x0;
  local_e8 = 0xfffe;
  local_d0 = 0;
  local_e0 = (void *)0x0;
  local_d8 = (void *)0x0;
  local_c0 = 0xffffffff;
  local_148 = (undefined **)(PTR_vtable_0067cfa8 + 0x10);
  local_b0 = 0;
  uStack_a8 = 0;
  local_b8 = 0;
  for (plVar5 = plVar32; plVar5 != plVar34; plVar5 = plVar5 + 1) {
    puVar40 = *(undefined8 **)(*plVar5 + 0x90);
    for (puVar38 = *(undefined8 **)(*plVar5 + 0x88); puVar38 != puVar40; puVar38 = puVar38 + 1) {
      pCVar36 = (Component *)*puVar38;
      Component::addDependent((Component *)&local_148,pCVar36);
      lVar15 = *(long *)(*(long *)(pCVar36 + 0x90) + 0x158);
      if (lVar15 != 0) {
        puVar41 = *(undefined8 **)(this + 0xa60);
        for (puVar43 = *(undefined8 **)(this + 0xa58); puVar43 != puVar41; puVar43 = puVar43 + 1) {
          this_02 = (Component *)*puVar43;
          if (((this_02 != (Component *)0x0) &&
              (uVar6 = (**(code **)(*(long *)this_02 + 0x18))(this_02,0x30), (uVar6 & 1) != 0)) &&
             (*(long *)(this_02 + 0x30) == lVar15)) {
            Component::addDependent(this_02,pCVar36);
          }
        }
      }
    }
  }
  local_180 = 0x3f800000;
  local_158 = 0x3f800000;
  local_1d0 = (undefined8 *)0x0;
  local_1c8 = (undefined8 *)0x0;
  uStack_198 = 0;
  local_1a0 = (void *)0x0;
  uStack_188 = 0;
  local_190 = (undefined8 *)0x0;
  uStack_170 = 0;
  local_178 = (void *)0x0;
  uStack_160 = 0;
  local_168 = (undefined8 *)0x0;
  local_1c0 = 0;
  DependencySorter::visit
            ((DependencySorter *)&local_1a0,(Component *)&local_148,(vector *)&local_1d0);
  if ((local_1c8 != local_1d0) && (puVar38 = local_1d0 + 1, puVar38 != local_1c8)) {
    puVar40 = *(undefined8 **)(this + 0xb08);
    do {
      uVar39 = *puVar38;
      if (puVar40 < *(undefined8 **)(this + 0xb10)) {
        puVar43 = puVar40 + 1;
        *puVar40 = uVar39;
      }
      else {
        puVar41 = *(undefined8 **)(this + 0xb00);
        lVar15 = (long)puVar40 - (long)puVar41;
        uVar6 = (lVar15 >> 3) + 1;
        if (uVar6 >> 0x3d != 0) goto LAB_00361cbc;
        uVar17 = (long)*(undefined8 **)(this + 0xb10) - (long)puVar41;
        uVar16 = (long)uVar17 >> 2;
        if (uVar16 <= uVar6) {
          uVar16 = uVar6;
        }
        if (0x7ffffffffffffff7 < uVar17) {
          uVar16 = 0x1fffffffffffffff;
        }
        if (uVar16 == 0) {
          pvVar7 = (void *)0x0;
        }
        else {
          if (uVar16 >> 0x3d != 0) {
LAB_00361cb4:
                    /* WARNING: Subroutine does not return */
            FUN_00324008();
          }
          pvVar7 = operator_new(uVar16 << 3);
        }
        puVar12 = (undefined8 *)((long)pvVar7 + (lVar15 >> 3) * 8);
        puVar43 = puVar12 + 1;
        *puVar12 = uVar39;
        puVar27 = puVar40;
        if ((long)puVar40 - (long)puVar41 != 0) {
          uVar6 = ((long)puVar40 - (long)puVar41) - 8;
          if ((((0x147 < uVar6) &&
               (uVar17 = (long)pvVar7 + lVar15 + -8, uVar17 - (uVar6 & 0xfffffffffffffff8) <= uVar17
               )) && ((undefined8 *)((long)(puVar40 + -1) - (uVar6 & 0xfffffffffffffff8)) <=
                      puVar40 + -1)) && (0x1f < (ulong)((long)puVar40 + (-lVar15 - (long)pvVar7))))
          {
            puVar27 = puVar12 + -2;
            puVar30 = puVar40 + -2;
            uVar6 = (uVar6 >> 3) + 1;
            uVar21 = uVar6 & 0x3ffffffffffffffc;
            puVar40 = puVar40 + -uVar21;
            uVar17 = uVar21;
            do {
              auVar49 = *(undefined1 (*) [16])(puVar30 + -2);
              uVar47 = puVar30[1];
              uVar39 = *puVar30;
              uVar17 = uVar17 - 4;
              puVar30 = puVar30 + -4;
              puVar27[-1] = auVar49._8_8_;
              puVar27[-2] = auVar49._0_8_;
              puVar27[1] = uVar47;
              *puVar27 = uVar39;
              puVar27 = puVar27 + -4;
            } while (uVar17 != 0);
            puVar12 = puVar12 + -uVar21;
            puVar27 = puVar41;
            if (uVar6 == uVar21) goto LAB_00361a74;
          }
          do {
            puVar40 = puVar40 + -1;
            puVar12 = puVar12 + -1;
            *puVar12 = *puVar40;
          } while (puVar40 != puVar41);
          puVar27 = *(undefined8 **)(this + 0xb00);
        }
LAB_00361a74:
        *(undefined8 **)(this + 0xb00) = puVar12;
        *(undefined8 **)(this + 0xb08) = puVar43;
        *(void **)(this + 0xb10) = (void *)((long)pvVar7 + uVar16 * 8);
        if (puVar27 != (undefined8 *)0x0) {
          operator_delete(puVar27);
        }
      }
      puVar38 = puVar38 + 1;
      *(undefined8 **)(this + 0xb08) = puVar43;
      puVar40 = puVar43;
    } while (puVar38 != local_1c8);
  }
  if (this[0xbe8] != (Artboard)0x0) {
    puVar40 = *(undefined8 **)(this + 0xb98);
    for (puVar38 = *(undefined8 **)(this + 0xb90); puVar38 != puVar40; puVar38 = puVar38 + 1) {
      this_01 = (ScriptedObject *)*puVar38;
      pSVar13 = *(ScriptedObject **)(this_01 + 8);
      if (pSVar13 != (ScriptedObject *)0x0) {
        if (((this_01[0x71] == (ScriptedObject)0x0) && (*(long *)(pSVar13 + 0xd8) != 0)) &&
           (*(long *)(*(long *)(pSVar13 + 0xd8) + 0x110) != 0)) {
          ScriptAsset::initScriptedObjectWith(pSVar13);
        }
        ScriptedObject::hydrateScriptInputs(this_01);
      }
    }
  }
  pvVar7 = local_178;
  puVar38 = local_168;
  if (local_1d0 != (undefined8 *)0x0) {
    operator_delete(local_1d0);
    pvVar7 = local_178;
    puVar38 = local_168;
  }
  while (puVar38 != (undefined8 *)0x0) {
    pvVar31 = (void *)*puVar38;
    local_178 = pvVar7;
    operator_delete(puVar38);
    pvVar7 = local_178;
    puVar38 = (undefined8 *)pvVar31;
  }
  local_178 = (void *)0x0;
  pvVar31 = local_1a0;
  puVar38 = local_190;
  if (pvVar7 != (void *)0x0) {
    operator_delete(pvVar7);
    pvVar31 = local_1a0;
    puVar38 = local_190;
  }
  while (puVar38 != (undefined8 *)0x0) {
    pvVar7 = (void *)*puVar38;
    local_1a0 = pvVar31;
    operator_delete(puVar38);
    pvVar31 = local_1a0;
    puVar38 = (undefined8 *)pvVar7;
  }
  local_1a0 = (void *)0x0;
  if (pvVar31 != (void *)0x0) {
    operator_delete(pvVar31);
  }
  local_148 = (undefined **)(PTR_vtable_0067cee0 + 0x10);
  if (local_e0 != (void *)0x0) {
    local_d8 = local_e0;
    operator_delete(local_e0);
  }
  if (pvStack_100 != (void *)0x0) {
    local_f8 = pvStack_100;
    operator_delete(pvStack_100);
  }
  local_148 = &PTR_FUN_00678650;
  if ((local_138 & 1) != 0) {
    operator_delete(local_128);
  }
  if (plVar32 != (long *)0x0) {
    operator_delete(plVar32);
  }
  if (local_1d8 != (undefined8 *)0x0) {
    operator_delete(local_1d8);
  }
  uVar4 = 0;
  pvVar7 = local_a0;
  puVar38 = (undefined8 *)local_90;
joined_r0x0036141c:
  while (puVar38 != (undefined8 *)0x0) {
    pvVar31 = (void *)*puVar38;
    local_a0 = pvVar7;
    operator_delete(puVar38);
    pvVar7 = local_a0;
    puVar38 = (undefined8 *)pvVar31;
  }
  local_a0 = (void *)0x0;
  if (pvVar7 != (void *)0x0) {
    operator_delete(pvVar7);
  }
LAB_00361c7c:
  if (*(long *)(lVar14 + 0x28) == local_78) {
    return (Joystick *)(ulong)uVar4;
  }
LAB_00361ccc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0035ff10:
  uVar4 = 2;
  goto LAB_00361c7c;
LAB_00361414:
  uVar4 = 2;
  pvVar7 = local_a0;
  puVar38 = (undefined8 *)local_90;
  goto joined_r0x0036141c;
LAB_00361cb8:
  FUN_0035d4f8();
LAB_00361cbc:
  FUN_00362aa0();
LAB_00361cc0:
  FUN_00362910();
LAB_00361cc4:
  FUN_00362924();
LAB_00361cc8:
  FUN_003628e8();
  goto LAB_00361ccc;
LAB_00361694:
  plVar24 = (long *)*plVar24;
  if (plVar24 == (long *)0x0) goto LAB_003616f8;
  goto LAB_0036169c;
LAB_00361cd8:
  FUN_0035e1d4();
LAB_00361cdc:
  FUN_0034af0c();
LAB_00361ce0:
  FUN_003628fc();
LAB_00361ce4:
  auVar49 = FUN_00362a8c();
  uVar6 = auVar49._8_8_;
  pJVar44 = auVar49._0_8_;
  if (pJVar44[0xc18] != (Joystick)0x0) {
    pJVar35 = (Joystick *)
              fwrite("Artboard::markLayoutDirty - trying to mark a layout dirty during clean pass!\n"
                     ,0x4d,1,(FILE *)(PTR___sF_0067cee8 + 0x130));
    return pJVar35;
  }
  pJVar19 = *(Joystick **)(pJVar44 + 0xbf8);
  uVar16 = ((ulong)(uint)(auVar49._8_4_ << 3) + 8 ^ uVar6 >> 0x20) * -0x622015f714c7d297;
  uVar16 = (uVar6 >> 0x20 ^ uVar16 >> 0x2f ^ uVar16) * -0x622015f714c7d297;
  pJVar37 = (Joystick *)((uVar16 ^ uVar16 >> 0x2f) * -0x622015f714c7d297);
  if (pJVar19 != (Joystick *)0x0) {
    uVar39 = NEON_cnt(pJVar19,1);
    uVar46 = NEON_uaddlv(uVar39,1);
    uVar4 = CONCAT22((short)((ulong)uVar39 >> 0x10),uVar46);
    if (uVar4 < 2) {
      pJVar35 = (Joystick *)((ulong)pJVar37 & (ulong)(pJVar19 + -1));
    }
    else {
      pJVar35 = pJVar37;
      if (pJVar19 <= pJVar37) {
        uVar16 = 0;
        if (pJVar19 != (Joystick *)0x0) {
          uVar16 = (ulong)pJVar37 / (ulong)pJVar19;
        }
        pJVar35 = pJVar37 + -(uVar16 * (long)pJVar19);
      }
    }
    plVar32 = *(long **)(*(long *)(pJVar44 + 0xbf0) + (long)pJVar35 * 8);
    if ((plVar32 != (long *)0x0) && (plVar32 = (long *)*plVar32, plVar32 != (long *)0x0)) {
      do {
        pJVar22 = (Joystick *)plVar32[1];
        if (pJVar22 == pJVar37) {
          pJVar22 = pJVar44;
          if (plVar32[2] == uVar6) goto LAB_003620d4;
        }
        else {
          if (uVar4 < 2) {
            pJVar22 = (Joystick *)((ulong)pJVar22 & (ulong)(pJVar19 + -1));
          }
          else if (pJVar19 <= pJVar22) {
            uVar16 = 0;
            if (pJVar19 != (Joystick *)0x0) {
              uVar16 = (ulong)pJVar22 / (ulong)pJVar19;
            }
            pJVar22 = pJVar22 + -(uVar16 * (long)pJVar19);
          }
          if (pJVar22 != pJVar35) break;
        }
        plVar32 = (long *)*plVar32;
      } while (plVar32 != (long *)0x0);
    }
  }
  pJVar8 = (Joystick *)operator_new(0x18);
  lVar14 = *(long *)(pJVar44 + 0xc08);
  fVar48 = *(float *)(pJVar44 + 0xc10);
  *(long *)pJVar8 = 0;
  *(Joystick **)(pJVar8 + 8) = pJVar37;
  *(ulong *)(pJVar8 + 0x10) = uVar6;
  pJVar22 = pJVar8;
  if ((pJVar19 == (Joystick *)0x0) || (fVar48 * (float)pJVar19 < (float)(lVar14 + 1))) {
    if (pJVar19 < (Joystick *)0x3) {
      uVar6 = 1;
    }
    else {
      uVar6 = (ulong)(((ulong)pJVar19 & (ulong)(pJVar19 + -1)) != 0);
    }
    pJVar35 = (Joystick *)(uVar6 | (long)pJVar19 << 1);
    pJVar20 = (Joystick *)(long)((float)(lVar14 + 1) / fVar48);
    if (pJVar35 <= pJVar20) {
      pJVar35 = pJVar20;
    }
    if (pJVar35 + -1 == (Joystick *)0x0) {
      pJVar35 = (Joystick *)0x2;
    }
    else if (((ulong)pJVar35 & (ulong)(pJVar35 + -1)) != 0) {
      pJVar22 = (Joystick *)std::__ndk1::__next_prime((ulong)pJVar35);
      pJVar19 = *(Joystick **)(pJVar44 + 0xbf8);
      pJVar35 = pJVar22;
    }
    if (pJVar19 < pJVar35) {
LAB_00361ebc:
      if ((ulong)pJVar35 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00324008();
      }
      pJVar22 = (Joystick *)operator_new((long)pJVar35 << 3);
      pJVar19 = *(Joystick **)(pJVar44 + 0xbf0);
      *(Joystick **)(pJVar44 + 0xbf0) = pJVar22;
      if (pJVar19 != (Joystick *)0x0) {
        operator_delete(pJVar19);
        pJVar22 = pJVar19;
      }
      pJVar19 = (Joystick *)0x0;
      *(Joystick **)(pJVar44 + 0xbf8) = pJVar35;
      do {
        *(undefined8 *)(*(long *)(pJVar44 + 0xbf0) + (long)pJVar19 * 8) = 0;
        pJVar19 = pJVar19 + 1;
      } while (pJVar35 != pJVar19);
      plVar32 = *(long **)(pJVar44 + 0xc00);
      pJVar19 = pJVar35;
      if (plVar32 != (long *)0x0) {
        pJVar20 = (Joystick *)plVar32[1];
        uVar39 = NEON_cnt(pJVar35,1);
        uVar46 = NEON_uaddlv(uVar39,1);
        uVar4 = CONCAT22((short)((ulong)uVar39 >> 0x10),uVar46);
        if (uVar4 < 2) {
          pJVar20 = (Joystick *)((ulong)pJVar20 & (ulong)(pJVar35 + -1));
        }
        else if (pJVar35 <= pJVar20) {
          uVar6 = 0;
          if (pJVar35 != (Joystick *)0x0) {
            uVar6 = (ulong)pJVar20 / (ulong)pJVar35;
          }
          pJVar20 = pJVar20 + -(uVar6 * (long)pJVar35);
        }
        *(Joystick **)(*(long *)(pJVar44 + 0xbf0) + (long)pJVar20 * 8) = pJVar44 + 0xc00;
        plVar34 = (long *)*plVar32;
        if (plVar34 != (long *)0x0) {
          do {
            pJVar28 = (Joystick *)plVar34[1];
            if (uVar4 < 2) {
              pJVar28 = (Joystick *)((ulong)pJVar28 & (ulong)(pJVar35 + -1));
            }
            else if (pJVar35 <= pJVar28) {
              uVar6 = 0;
              if (pJVar35 != (Joystick *)0x0) {
                uVar6 = (ulong)pJVar28 / (ulong)pJVar35;
              }
              pJVar28 = pJVar28 + -(uVar6 * (long)pJVar35);
            }
            if (pJVar28 != pJVar20) {
              if (*(long *)(*(long *)(pJVar44 + 0xbf0) + (long)pJVar28 * 8) == 0) {
                *(long **)(*(long *)(pJVar44 + 0xbf0) + (long)pJVar28 * 8) = plVar32;
                pJVar20 = pJVar28;
              }
              else {
                *plVar32 = *plVar34;
                *plVar34 = **(long **)(*(long *)(pJVar44 + 0xbf0) + (long)pJVar28 * 8);
                **(undefined8 **)(*(long *)(pJVar44 + 0xbf0) + (long)pJVar28 * 8) = plVar34;
                plVar34 = plVar32;
              }
            }
            plVar32 = plVar34;
            plVar34 = (long *)*plVar32;
          } while (plVar34 != (long *)0x0);
        }
      }
    }
    else if (pJVar35 < pJVar19) {
      pJVar22 = (Joystick *)(long)((float)*(ulong *)(pJVar44 + 0xc08) / *(float *)(pJVar44 + 0xc10))
      ;
      if (pJVar19 < (Joystick *)0x3) {
LAB_00362194:
        pJVar22 = (Joystick *)std::__ndk1::__next_prime((ulong)pJVar22);
      }
      else {
        uVar39 = NEON_cnt(pJVar19,1);
        uVar46 = NEON_uaddlv(uVar39,1);
        if (1 < CONCAT22((short)((ulong)uVar39 >> 0x10),uVar46)) goto LAB_00362194;
        if ((Joystick *)0x1 < pJVar22) {
          pJVar22 = (Joystick *)(1L << (-LZCOUNT(pJVar22 + -1) & 0x3fU));
        }
      }
      if (pJVar35 <= pJVar22) {
        pJVar35 = pJVar22;
      }
      if (pJVar35 < pJVar19) {
        if (pJVar35 != (Joystick *)0x0) goto LAB_00361ebc;
        pJVar22 = *(Joystick **)(pJVar44 + 0xbf0);
        *(long *)(pJVar44 + 0xbf0) = 0;
        if (pJVar22 != (Joystick *)0x0) {
          operator_delete(pJVar22);
        }
        *(long *)(pJVar44 + 0xbf8) = 0;
        pJVar19 = (Joystick *)0x0;
      }
      else {
        pJVar19 = *(Joystick **)(pJVar44 + 0xbf8);
      }
    }
    if (((ulong)pJVar19 & (ulong)(pJVar19 + -1)) == 0) {
      pJVar35 = (Joystick *)((ulong)(pJVar19 + -1) & (ulong)pJVar37);
    }
    else {
      pJVar35 = pJVar37;
      if (pJVar19 <= pJVar37) {
        uVar6 = 0;
        if (pJVar19 != (Joystick *)0x0) {
          uVar6 = (ulong)pJVar37 / (ulong)pJVar19;
        }
        pJVar35 = pJVar37 + -(uVar6 * (long)pJVar19);
      }
    }
  }
  lVar14 = *(long *)(pJVar44 + 0xbf0);
  plVar32 = *(long **)(lVar14 + (long)pJVar35 * 8);
  if (plVar32 == (long *)0x0) {
    lVar15 = *(long *)(pJVar44 + 0xc00);
    *(Joystick **)(pJVar44 + 0xc00) = pJVar8;
    *(long *)pJVar8 = lVar15;
    *(Joystick **)(lVar14 + (long)pJVar35 * 8) = pJVar44 + 0xc00;
    if (lVar15 == 0) goto LAB_003620c8;
    pJVar35 = *(Joystick **)(lVar15 + 8);
    if (((ulong)pJVar19 & (ulong)(pJVar19 + -1)) == 0) {
      pJVar35 = (Joystick *)((ulong)pJVar35 & (ulong)(pJVar19 + -1));
    }
    else if (pJVar19 <= pJVar35) {
      uVar6 = 0;
      if (pJVar19 != (Joystick *)0x0) {
        uVar6 = (ulong)pJVar35 / (ulong)pJVar19;
      }
      pJVar35 = pJVar35 + -(uVar6 * (long)pJVar19);
    }
    plVar32 = (long *)(*(long *)(pJVar44 + 0xbf0) + (long)pJVar35 * 8);
  }
  else {
    *(long *)pJVar8 = *plVar32;
  }
  *plVar32 = (long)pJVar8;
LAB_003620c8:
  *(long *)(pJVar44 + 0xc08) = *(long *)(pJVar44 + 0xc08) + 1;
LAB_003620d4:
  if (pJVar44[0xbe8] != (Joystick)0x0) {
    if (*(long **)(pJVar44 + 0xc38) == (long *)0x0) {
      pJVar44[0xc31] = (Joystick)0x1;
      pJVar22 = (Joystick *)0x0;
    }
    else {
      uVar6 = (**(code **)(**(long **)(pJVar44 + 0xc38) + 0x68))();
      pJVar22 = *(Joystick **)(pJVar44 + 0xc38);
      if ((uVar6 & 1) == 0) {
        pJVar44[0xc31] = (Joystick)0x1;
        if (pJVar22 != (Joystick *)0x0) {
          pJVar22 = (Joystick *)(**(code **)(*(long *)pJVar22 + 0x60))();
        }
      }
      else {
        pJVar22 = (Joystick *)(**(code **)(*(long *)pJVar22 + 0x38))(pJVar22,pJVar44);
      }
    }
  }
  if ((*(ushort *)(pJVar44 + 0x60) >> 2 & 1) == 0) {
    *(ushort *)(pJVar44 + 0x60) = *(ushort *)(pJVar44 + 0x60) | 4;
    pJVar22 = (Joystick *)(**(code **)(*(long *)pJVar44 + 0x70))(pJVar44);
    lVar14 = *(long *)(pJVar44 + 0x80);
    uVar4 = *(uint *)(pJVar44 + 0x38);
    *(undefined1 *)(lVar14 + 0xc32) = 1;
    *(ushort *)(lVar14 + 0x60) = *(ushort *)(lVar14 + 0x60) | 4;
    if (uVar4 < *(uint *)(lVar14 + 0xbd4)) {
      *(uint *)(lVar14 + 0xbd4) = uVar4;
    }
  }
  return pJVar22;
}


// ===== 00361ce8  rive::Artboard::markLayoutDirty =====

/* rive::Artboard::markLayoutDirty(rive::LayoutComponent*) */

void __thiscall rive::Artboard::markLayoutDirty(Artboard *this,LayoutComponent *param_1)

{
  uint uVar1;
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  void *pvVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  ulong unaff_x21;
  ulong uVar15;
  undefined2 uVar16;
  undefined8 uVar17;
  float fVar18;
  
  if (this[0xc18] != (Artboard)0x0) {
    fwrite("Artboard::markLayoutDirty - trying to mark a layout dirty during clean pass!\n",0x4d,1,
           (FILE *)(PTR___sF_0067cee8 + 0x130));
    return;
  }
  uVar15 = *(ulong *)(this + 0xbf8);
  uVar4 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ (ulong)param_1 >> 0x20) * -0x622015f714c7d297;
  uVar4 = ((ulong)param_1 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
  uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
  if (uVar15 != 0) {
    uVar17 = NEON_cnt(uVar15,1);
    uVar16 = NEON_uaddlv(uVar17,1);
    uVar10 = CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) & 0xffffffff;
    if (uVar10 < 2) {
      unaff_x21 = uVar4 & uVar15 - 1;
    }
    else {
      unaff_x21 = uVar4;
      if (uVar15 <= uVar4) {
        uVar12 = 0;
        if (uVar15 != 0) {
          uVar12 = uVar4 / uVar15;
        }
        unaff_x21 = uVar4 - uVar12 * uVar15;
      }
    }
    plVar9 = *(long **)(*(long *)(this + 0xbf0) + unaff_x21 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      do {
        uVar12 = plVar9[1];
        if (uVar12 == uVar4) {
          if ((LayoutComponent *)plVar9[2] == param_1) goto LAB_003620d4;
        }
        else {
          if (uVar10 < 2) {
            uVar12 = uVar12 & uVar15 - 1;
          }
          else if (uVar15 <= uVar12) {
            uVar11 = 0;
            if (uVar15 != 0) {
              uVar11 = uVar12 / uVar15;
            }
            uVar12 = uVar12 - uVar11 * uVar15;
          }
          if (uVar12 != unaff_x21) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  plVar9 = (long *)operator_new(0x18);
  lVar5 = *(long *)(this + 0xc08);
  fVar18 = *(float *)(this + 0xc10);
  *plVar9 = 0;
  plVar9[1] = uVar4;
  plVar9[2] = (long)param_1;
  if ((uVar15 == 0) || (fVar18 * (float)uVar15 < (float)(lVar5 + 1))) {
    if (uVar15 < 3) {
      uVar10 = 1;
    }
    else {
      uVar10 = (ulong)((uVar15 & uVar15 - 1) != 0);
    }
    uVar10 = uVar10 | uVar15 << 1;
    uVar12 = (ulong)((float)(lVar5 + 1) / fVar18);
    if (uVar10 <= uVar12) {
      uVar10 = uVar12;
    }
    if (uVar10 - 1 == 0) {
      uVar10 = 2;
    }
    else if ((uVar10 & uVar10 - 1) != 0) {
      uVar10 = std::__ndk1::__next_prime(uVar10);
      uVar15 = *(ulong *)(this + 0xbf8);
    }
    if (uVar15 < uVar10) {
LAB_00361ebc:
      if (uVar10 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00324008();
      }
      pvVar3 = operator_new(uVar10 << 3);
      pvVar6 = *(void **)(this + 0xbf0);
      *(void **)(this + 0xbf0) = pvVar3;
      if (pvVar6 != (void *)0x0) {
        operator_delete(pvVar6);
      }
      uVar15 = 0;
      *(ulong *)(this + 0xbf8) = uVar10;
      do {
        *(undefined8 *)(*(long *)(this + 0xbf0) + uVar15 * 8) = 0;
        uVar15 = uVar15 + 1;
      } while (uVar10 != uVar15);
      plVar7 = *(long **)(this + 0xc00);
      uVar15 = uVar10;
      if (plVar7 != (long *)0x0) {
        uVar12 = plVar7[1];
        uVar17 = NEON_cnt(uVar10,1);
        uVar16 = NEON_uaddlv(uVar17,1);
        uVar11 = CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) & 0xffffffff;
        if (uVar11 < 2) {
          uVar12 = uVar12 & uVar10 - 1;
        }
        else if (uVar10 <= uVar12) {
          uVar14 = 0;
          if (uVar10 != 0) {
            uVar14 = uVar12 / uVar10;
          }
          uVar12 = uVar12 - uVar14 * uVar10;
        }
        *(Artboard **)(*(long *)(this + 0xbf0) + uVar12 * 8) = this + 0xc00;
        plVar13 = (long *)*plVar7;
        if (plVar13 != (long *)0x0) {
          do {
            uVar14 = plVar13[1];
            if (uVar11 < 2) {
              uVar14 = uVar14 & uVar10 - 1;
            }
            else if (uVar10 <= uVar14) {
              uVar2 = 0;
              if (uVar10 != 0) {
                uVar2 = uVar14 / uVar10;
              }
              uVar14 = uVar14 - uVar2 * uVar10;
            }
            if (uVar14 != uVar12) {
              if (*(long *)(*(long *)(this + 0xbf0) + uVar14 * 8) == 0) {
                *(long **)(*(long *)(this + 0xbf0) + uVar14 * 8) = plVar7;
                uVar12 = uVar14;
              }
              else {
                *plVar7 = *plVar13;
                *plVar13 = **(long **)(*(long *)(this + 0xbf0) + uVar14 * 8);
                **(undefined8 **)(*(long *)(this + 0xbf0) + uVar14 * 8) = plVar13;
                plVar13 = plVar7;
              }
            }
            plVar7 = plVar13;
            plVar13 = (long *)*plVar7;
          } while (plVar13 != (long *)0x0);
        }
      }
    }
    else if (uVar10 < uVar15) {
      uVar12 = (ulong)((float)*(ulong *)(this + 0xc08) / *(float *)(this + 0xc10));
      if (uVar15 < 3) {
LAB_00362194:
        uVar12 = std::__ndk1::__next_prime(uVar12);
      }
      else {
        uVar17 = NEON_cnt(uVar15,1);
        uVar16 = NEON_uaddlv(uVar17,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16)) goto LAB_00362194;
        if (1 < uVar12) {
          uVar12 = 1L << (-LZCOUNT(uVar12 - 1) & 0x3fU);
        }
      }
      if (uVar10 <= uVar12) {
        uVar10 = uVar12;
      }
      if (uVar10 < uVar15) {
        if (uVar10 != 0) goto LAB_00361ebc;
        pvVar3 = *(void **)(this + 0xbf0);
        *(undefined8 *)(this + 0xbf0) = 0;
        if (pvVar3 != (void *)0x0) {
          operator_delete(pvVar3);
        }
        *(undefined8 *)(this + 0xbf8) = 0;
        uVar15 = 0;
      }
      else {
        uVar15 = *(ulong *)(this + 0xbf8);
      }
    }
    if ((uVar15 & uVar15 - 1) == 0) {
      unaff_x21 = uVar15 - 1 & uVar4;
    }
    else {
      unaff_x21 = uVar4;
      if (uVar15 <= uVar4) {
        uVar10 = 0;
        if (uVar15 != 0) {
          uVar10 = uVar4 / uVar15;
        }
        unaff_x21 = uVar4 - uVar10 * uVar15;
      }
    }
  }
  lVar5 = *(long *)(this + 0xbf0);
  plVar7 = *(long **)(lVar5 + unaff_x21 * 8);
  if (plVar7 == (long *)0x0) {
    lVar8 = *(long *)(this + 0xc00);
    *(long **)(this + 0xc00) = plVar9;
    *plVar9 = lVar8;
    *(Artboard **)(lVar5 + unaff_x21 * 8) = this + 0xc00;
    if (lVar8 == 0) goto LAB_003620c8;
    uVar4 = *(ulong *)(lVar8 + 8);
    if ((uVar15 & uVar15 - 1) == 0) {
      uVar4 = uVar4 & uVar15 - 1;
    }
    else if (uVar15 <= uVar4) {
      uVar10 = 0;
      if (uVar15 != 0) {
        uVar10 = uVar4 / uVar15;
      }
      uVar4 = uVar4 - uVar10 * uVar15;
    }
    plVar7 = (long *)(*(long *)(this + 0xbf0) + uVar4 * 8);
  }
  else {
    *plVar9 = *plVar7;
  }
  *plVar7 = (long)plVar9;
LAB_003620c8:
  *(long *)(this + 0xc08) = *(long *)(this + 0xc08) + 1;
LAB_003620d4:
  if (this[0xbe8] != (Artboard)0x0) {
    if (*(long **)(this + 0xc38) == (long *)0x0) {
      this[0xc31] = (Artboard)0x1;
    }
    else {
      uVar15 = (**(code **)(**(long **)(this + 0xc38) + 0x68))();
      plVar9 = *(long **)(this + 0xc38);
      if ((uVar15 & 1) == 0) {
        this[0xc31] = (Artboard)0x1;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x60))();
        }
      }
      else {
        (**(code **)(*plVar9 + 0x38))(plVar9,this);
      }
    }
  }
  if ((*(ushort *)(this + 0x60) >> 2 & 1) == 0) {
    *(ushort *)(this + 0x60) = *(ushort *)(this + 0x60) | 4;
    (**(code **)(*(long *)this + 0x70))(this);
    lVar5 = *(long *)(this + 0x80);
    uVar1 = *(uint *)(this + 0x38);
    *(undefined1 *)(lVar5 + 0xc32) = 1;
    *(ushort *)(lVar5 + 0x60) = *(ushort *)(lVar5 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar5 + 0xbd4)) {
      *(uint *)(lVar5 + 0xbd4) = uVar1;
    }
  }
  return;
}


// ===== 003621d4  FUN_003621d4 =====

void FUN_003621d4(long *param_1,char *param_2)

{
  size_t __n;
  void *__dest;
  
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_0031faf0(param_1);
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00362244;
  }
  else {
    __dest = operator_new((__n | 0xf) + 1);
    param_1[1] = __n;
    param_1[2] = (long)__dest;
    *param_1 = (__n | 0xf) + 2;
  }
  memmove(__dest,param_2,__n);
LAB_00362244:
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}


// ===== 00362260  FUN_00362260 =====

void FUN_00362260(long *param_1,basic_string *param_2)

{
  size_t sVar1;
  size_t sVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  basic_string bVar4;
  int iVar5;
  ulong uVar6;
  basic_string *pbVar7;
  basic_string *__s2;
  
  bVar3 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (param_1 + 2);
  bVar4 = *param_2;
  uVar6 = (ulong)((byte)bVar3 >> 1);
  sVar1 = uVar6;
  if (((byte)bVar3 & 1) != 0) {
    sVar1 = param_1[3];
  }
  sVar2 = (ulong)((byte)bVar4 >> 1);
  if (((byte)bVar4 & 1) != 0) {
    sVar2 = *(size_t *)(param_2 + 8);
  }
  if (sVar1 != sVar2) {
LAB_0036230c:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (param_1 + 2),param_2);
                    /* WARNING: Could not recover jumptable at 0x00362328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x50))(param_1);
    return;
  }
  __s2 = *(basic_string **)(param_2 + 0x10);
  if (((byte)bVar4 & 1) == 0) {
    __s2 = param_2 + 1;
  }
  if (((byte)bVar3 & 1) == 0) {
    if (1 < (byte)bVar3) {
      pbVar7 = (basic_string *)((long)param_1 + 0x11);
      do {
        if (*pbVar7 != *__s2) goto LAB_0036230c;
        uVar6 = uVar6 - 1;
        pbVar7 = pbVar7 + 1;
        __s2 = __s2 + 1;
      } while (uVar6 != 0);
    }
  }
  else {
    iVar5 = memcmp((void *)param_1[4],__s2,param_1[3]);
    if (iVar5 != 0) goto LAB_0036230c;
  }
  return;
}


// ===== 0036233c  FUN_0036233c =====

void FUN_0036233c(ulong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar10 = (undefined8 *)param_1[1];
  if (puVar10 < (undefined8 *)param_1[2]) {
    puVar13 = puVar10 + 1;
    *puVar10 = param_2;
    goto LAB_0036247c;
  }
  puVar9 = (undefined8 *)*param_1;
  lVar12 = (long)puVar10 - (long)puVar9 >> 3;
  uVar6 = lVar12 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_00362ab4();
LAB_0036249c:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar3 = (long)param_1[2] - (long)puVar9;
  uVar5 = (long)uVar3 >> 2;
  if (uVar5 <= uVar6) {
    uVar5 = uVar6;
  }
  if (0x7ffffffffffffff7 < uVar3) {
    uVar5 = 0x1fffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3d != 0) goto LAB_0036249c;
    pvVar2 = operator_new(uVar5 << 3);
  }
  puVar4 = (undefined8 *)((long)pvVar2 + lVar12 * 8);
  puVar13 = puVar4 + 1;
  *puVar4 = param_2;
  if ((long)puVar10 - (long)puVar9 != 0) {
    uVar6 = ((long)puVar10 - (long)puVar9) - 8;
    puVar11 = puVar10;
    if ((0x37 < uVar6) &&
       (0x1f < (ulong)((long)puVar10 + (-((long)puVar10 - (long)puVar9) - (long)pvVar2)))) {
      puVar8 = puVar10 + -2;
      uVar6 = (uVar6 >> 3) + 1;
      uVar7 = uVar6 & 0x3ffffffffffffffc;
      puVar11 = puVar10 + -uVar7;
      puVar10 = puVar4 + -2;
      uVar3 = uVar7;
      do {
        puVar1 = puVar8 + -1;
        uVar16 = puVar8[-2];
        uVar15 = puVar8[1];
        uVar14 = *puVar8;
        uVar3 = uVar3 - 4;
        puVar8 = puVar8 + -4;
        puVar10[-1] = *puVar1;
        puVar10[-2] = uVar16;
        puVar10[1] = uVar15;
        *puVar10 = uVar14;
        puVar10 = puVar10 + -4;
      } while (uVar3 != 0);
      puVar4 = puVar4 + -uVar7;
      puVar10 = puVar9;
      if (uVar6 == uVar7) goto LAB_00362468;
    }
    do {
      puVar11 = puVar11 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar11;
    } while (puVar11 != puVar9);
    puVar10 = (undefined8 *)*param_1;
  }
LAB_00362468:
  *param_1 = (ulong)puVar4;
  param_1[1] = (ulong)puVar13;
  param_1[2] = (ulong)((long)pvVar2 + uVar5 * 8);
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_0036247c:
  param_1[1] = (ulong)puVar13;
  return;
}


// ===== 003624a0  FUN_003624a0 =====

void FUN_003624a0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 003624b4  FUN_003624b4 =====

void FUN_003624b4(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x23;
  undefined2 uVar15;
  undefined8 uVar16;
  float fVar17;
  
  uVar14 = param_1[1];
  uVar6 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ param_2 >> 0x20) * -0x622015f714c7d297;
  uVar6 = (param_2 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
  uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  if (uVar14 != 0) {
    uVar16 = NEON_cnt(uVar14,1);
    uVar15 = NEON_uaddlv(uVar16,1);
    uVar9 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
    if (uVar9 < 2) {
      unaff_x23 = uVar6 & uVar14 - 1;
    }
    else {
      unaff_x23 = uVar6;
      if (uVar14 <= uVar6) {
        uVar11 = 0;
        if (uVar14 != 0) {
          uVar11 = uVar6 / uVar14;
        }
        unaff_x23 = uVar6 - uVar11 * uVar14;
      }
    }
    plVar7 = *(long **)(*param_1 + unaff_x23 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar11 = plVar7[1];
        if (uVar11 == uVar6) {
          if (plVar7[2] == param_2) {
            return;
          }
        }
        else {
          if (uVar9 < 2) {
            uVar11 = uVar11 & uVar14 - 1;
          }
          else if (uVar14 <= uVar11) {
            uVar5 = 0;
            if (uVar14 != 0) {
              uVar5 = uVar11 / uVar14;
            }
            uVar11 = uVar11 - uVar5 * uVar14;
          }
          if (uVar11 != unaff_x23) break;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  plVar7 = (long *)operator_new(0x20);
  lVar3 = param_1[3];
  lVar8 = *param_3;
  fVar17 = *(float *)(param_1 + 4);
  *plVar7 = 0;
  plVar7[1] = uVar6;
  plVar7[2] = lVar8;
  plVar7[3] = 0;
  if ((uVar14 == 0) || (fVar17 * (float)uVar14 < (float)(lVar3 + 1))) {
    if (uVar14 < 3) {
      uVar9 = 1;
    }
    else {
      uVar9 = (ulong)((uVar14 & uVar14 - 1) != 0);
    }
    uVar9 = uVar9 | uVar14 << 1;
    uVar11 = (ulong)((float)(lVar3 + 1) / fVar17);
    if (uVar9 <= uVar11) {
      uVar9 = uVar11;
    }
    if (uVar9 - 1 == 0) {
      uVar9 = 2;
    }
    else if ((uVar9 & uVar9 - 1) != 0) {
      uVar9 = std::__ndk1::__next_prime(uVar9);
      uVar14 = param_1[1];
    }
    if (uVar14 < uVar9) {
LAB_00362654:
      if (uVar9 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00324008();
      }
      pvVar2 = operator_new(uVar9 << 3);
      pvVar4 = (void *)*param_1;
      *param_1 = (long)pvVar2;
      if (pvVar4 != (void *)0x0) {
        operator_delete(pvVar4);
      }
      uVar14 = 0;
      param_1[1] = uVar9;
      do {
        *(undefined8 *)(*param_1 + uVar14 * 8) = 0;
        uVar14 = uVar14 + 1;
      } while (uVar9 != uVar14);
      plVar10 = (long *)param_1[2];
      uVar14 = uVar9;
      if (plVar10 != (long *)0x0) {
        uVar11 = plVar10[1];
        uVar16 = NEON_cnt(uVar9,1);
        uVar15 = NEON_uaddlv(uVar16,1);
        uVar5 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
        if (uVar5 < 2) {
          uVar11 = uVar11 & uVar9 - 1;
        }
        else if (uVar9 <= uVar11) {
          uVar13 = 0;
          if (uVar9 != 0) {
            uVar13 = uVar11 / uVar9;
          }
          uVar11 = uVar11 - uVar13 * uVar9;
        }
        *(long **)(*param_1 + uVar11 * 8) = param_1 + 2;
        plVar12 = (long *)*plVar10;
        if (plVar12 != (long *)0x0) {
          do {
            uVar13 = plVar12[1];
            if (uVar5 < 2) {
              uVar13 = uVar13 & uVar9 - 1;
            }
            else if (uVar9 <= uVar13) {
              uVar1 = 0;
              if (uVar9 != 0) {
                uVar1 = uVar13 / uVar9;
              }
              uVar13 = uVar13 - uVar1 * uVar9;
            }
            if (uVar13 != uVar11) {
              if (*(long *)(*param_1 + uVar13 * 8) == 0) {
                *(long **)(*param_1 + uVar13 * 8) = plVar10;
                uVar11 = uVar13;
              }
              else {
                *plVar10 = *plVar12;
                *plVar12 = **(long **)(*param_1 + uVar13 * 8);
                **(undefined8 **)(*param_1 + uVar13 * 8) = plVar12;
                plVar12 = plVar10;
              }
            }
            plVar10 = plVar12;
            plVar12 = (long *)*plVar10;
          } while (plVar12 != (long *)0x0);
        }
      }
    }
    else if (uVar9 < uVar14) {
      uVar11 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar14 < 3) {
LAB_0036288c:
        uVar11 = std::__ndk1::__next_prime(uVar11);
      }
      else {
        uVar16 = NEON_cnt(uVar14,1);
        uVar15 = NEON_uaddlv(uVar16,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15)) goto LAB_0036288c;
        if (1 < uVar11) {
          uVar11 = 1L << (-LZCOUNT(uVar11 - 1) & 0x3fU);
        }
      }
      if (uVar9 <= uVar11) {
        uVar9 = uVar11;
      }
      if (uVar9 < uVar14) {
        if (uVar9 != 0) goto LAB_00362654;
        pvVar2 = (void *)*param_1;
        *param_1 = 0;
        if (pvVar2 != (void *)0x0) {
          operator_delete(pvVar2);
        }
        param_1[1] = 0;
        uVar14 = 0;
      }
      else {
        uVar14 = param_1[1];
      }
    }
    if ((uVar14 & uVar14 - 1) == 0) {
      unaff_x23 = uVar14 - 1 & uVar6;
    }
    else {
      unaff_x23 = uVar6;
      if (uVar14 <= uVar6) {
        uVar9 = 0;
        if (uVar14 != 0) {
          uVar9 = uVar6 / uVar14;
        }
        unaff_x23 = uVar6 - uVar9 * uVar14;
      }
    }
  }
  lVar3 = *param_1;
  plVar10 = *(long **)(lVar3 + unaff_x23 * 8);
  if (plVar10 == (long *)0x0) {
    plVar10 = param_1 + 2;
    lVar8 = *plVar10;
    *plVar10 = (long)plVar7;
    *plVar7 = lVar8;
    *(long **)(lVar3 + unaff_x23 * 8) = plVar10;
    if (*plVar7 == 0) goto LAB_0036286c;
    uVar6 = *(ulong *)(*plVar7 + 8);
    if ((uVar14 & uVar14 - 1) == 0) {
      uVar6 = uVar6 & uVar14 - 1;
    }
    else if (uVar14 <= uVar6) {
      uVar9 = 0;
      if (uVar14 != 0) {
        uVar9 = uVar6 / uVar14;
      }
      uVar6 = uVar6 - uVar9 * uVar14;
    }
    plVar10 = (long *)(*param_1 + uVar6 * 8);
  }
  else {
    *plVar7 = *plVar10;
  }
  *plVar10 = (long)plVar7;
LAB_0036286c:
  param_1[3] = param_1[3] + 1;
  return;
}


// ===== 003628e8  FUN_003628e8 =====

void FUN_003628e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 003628fc  FUN_003628fc =====

void FUN_003628fc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 00362910  FUN_00362910 =====

void FUN_00362910(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 00362924  FUN_00362924 =====

void FUN_00362924(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 00362938  rive::Artboard::sortDependencies =====

/* rive::Artboard::sortDependencies() */

void __thiscall rive::Artboard::sortDependencies(Artboard *this)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  void *pvVar11;
  void *pvVar12;
  void *local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  void *local_58;
  undefined8 uStack_50;
  void *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  local_60 = 0x3f800000;
  uStack_78 = 0;
  local_80 = (void *)0x0;
  uStack_68 = 0;
  local_70 = (undefined8 *)0x0;
  *(undefined8 *)(this + 0xac0) = *(undefined8 *)(this + 0xab8);
  uStack_50 = 0;
  local_58 = (void *)0x0;
  uStack_40 = 0;
  local_48 = (void *)0x0;
  local_38 = 0x3f800000;
  DependencySorter::visit((DependencySorter *)&local_80,(Component *)this,this + 0xab8);
  plVar4 = *(long **)(this + 0xab8);
  plVar6 = *(long **)(this + 0xac0);
  if (plVar4 != plVar6) {
    uVar7 = (long)plVar6 + (-8 - (long)plVar4);
    if (uVar7 < 8) {
      uVar8 = 0;
    }
    else {
      uVar10 = 0;
      uVar7 = (uVar7 >> 3) + 1;
      uVar8 = uVar7 & 0x3ffffffffffffffe;
      do {
        iVar9 = (int)uVar10;
        lVar1 = (plVar4 + uVar10)[1];
        *(int *)(plVar4[uVar10] + 0x38) = iVar9;
        uVar10 = uVar10 + 2;
        *(int *)(lVar1 + 0x38) = iVar9 + 1;
      } while (uVar8 != uVar10);
      if (uVar7 == uVar8) goto LAB_00362a0c;
      plVar4 = plVar4 + uVar8;
    }
    do {
      plVar5 = plVar4 + 1;
      *(int *)(*plVar4 + 0x38) = (int)uVar8;
      uVar8 = (ulong)((int)uVar8 + 1);
      plVar4 = plVar5;
    } while (plVar5 != plVar6);
  }
LAB_00362a0c:
  *(ushort *)(this + 0x60) = *(ushort *)(this + 0x60) | 4;
  pvVar12 = local_58;
  puVar3 = (undefined8 *)local_48;
  while (puVar3 != (undefined8 *)0x0) {
    pvVar11 = (void *)*puVar3;
    local_58 = pvVar12;
    operator_delete(puVar3);
    pvVar12 = local_58;
    puVar3 = (undefined8 *)pvVar11;
  }
  local_58 = (void *)0x0;
  pvVar11 = local_80;
  puVar3 = local_70;
  if (pvVar12 != (void *)0x0) {
    operator_delete(pvVar12);
    pvVar11 = local_80;
    puVar3 = local_70;
  }
  while (puVar3 != (undefined8 *)0x0) {
    pvVar12 = (void *)*puVar3;
    local_80 = pvVar11;
    operator_delete(puVar3);
    pvVar11 = local_80;
    puVar3 = (undefined8 *)pvVar12;
  }
  local_80 = (void *)0x0;
  if (pvVar11 != (void *)0x0) {
    operator_delete(pvVar11);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00362a8c  FUN_00362a8c =====

void FUN_00362a8c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 00362aa0  FUN_00362aa0 =====

void FUN_00362aa0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 00362ab4  FUN_00362ab4 =====

void FUN_00362ab4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 00362ac8  rive::Artboard::initScriptedObjects =====

/* rive::Artboard::initScriptedObjects() */

void __thiscall rive::Artboard::initScriptedObjects(Artboard *this)

{
  ScriptedObject *this_00;
  ScriptedObject *pSVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (this[0xbe8] != (Artboard)0x0) {
    puVar3 = *(undefined8 **)(this + 0xb98);
    for (puVar2 = *(undefined8 **)(this + 0xb90); puVar2 != puVar3; puVar2 = puVar2 + 1) {
      this_00 = (ScriptedObject *)*puVar2;
      pSVar1 = *(ScriptedObject **)(this_00 + 8);
      if (pSVar1 != (ScriptedObject *)0x0) {
        if (((this_00[0x71] == (ScriptedObject)0x0) && (*(long *)(pSVar1 + 0xd8) != 0)) &&
           (*(long *)(*(long *)(pSVar1 + 0xd8) + 0x110) != 0)) {
          ScriptAsset::initScriptedObjectWith(pSVar1);
        }
        ScriptedObject::hydrateScriptInputs(this_00);
      }
    }
  }
  return;
}


// ===== 00362b48  rive::Artboard::addObject =====

/* rive::Artboard::addObject(rive::Core*) */

void __thiscall rive::Artboard::addObject(Artboard *this,Core *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar13 = *(undefined8 **)(this + 0xa60);
  if (puVar13 < *(undefined8 **)(this + 0xa68)) {
    puVar12 = puVar13 + 1;
    *puVar13 = param_1;
    goto LAB_00362c90;
  }
  puVar9 = *(undefined8 **)(this + 0xa58);
  lVar11 = (long)puVar13 - (long)puVar9 >> 3;
  uVar6 = lVar11 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_0035fe74();
LAB_00362cb0:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar3 = (long)*(undefined8 **)(this + 0xa68) - (long)puVar9;
  uVar5 = (long)uVar3 >> 2;
  if (uVar5 <= uVar6) {
    uVar5 = uVar6;
  }
  if (0x7ffffffffffffff7 < uVar3) {
    uVar5 = 0x1fffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3d != 0) goto LAB_00362cb0;
    pvVar2 = operator_new(uVar5 << 3);
  }
  puVar4 = (undefined8 *)((long)pvVar2 + lVar11 * 8);
  puVar12 = puVar4 + 1;
  *puVar4 = param_1;
  if ((long)puVar13 - (long)puVar9 != 0) {
    uVar6 = ((long)puVar13 - (long)puVar9) - 8;
    puVar10 = puVar13;
    if ((0x37 < uVar6) &&
       (0x1f < (ulong)((long)puVar13 + (-((long)puVar13 - (long)puVar9) - (long)pvVar2)))) {
      puVar8 = puVar13 + -2;
      uVar6 = (uVar6 >> 3) + 1;
      uVar7 = uVar6 & 0x3ffffffffffffffc;
      puVar10 = puVar13 + -uVar7;
      puVar13 = puVar4 + -2;
      uVar3 = uVar7;
      do {
        puVar1 = puVar8 + -1;
        uVar16 = puVar8[-2];
        uVar15 = puVar8[1];
        uVar14 = *puVar8;
        uVar3 = uVar3 - 4;
        puVar8 = puVar8 + -4;
        puVar13[-1] = *puVar1;
        puVar13[-2] = uVar16;
        puVar13[1] = uVar15;
        *puVar13 = uVar14;
        puVar13 = puVar13 + -4;
      } while (uVar3 != 0);
      puVar4 = puVar4 + -uVar7;
      puVar13 = puVar9;
      if (uVar6 == uVar7) goto LAB_00362c78;
    }
    do {
      puVar10 = puVar10 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar10;
    } while (puVar10 != puVar9);
    puVar13 = *(undefined8 **)(this + 0xa58);
  }
LAB_00362c78:
  *(undefined8 **)(this + 0xa58) = puVar4;
  *(undefined8 **)(this + 0xa60) = puVar12;
  *(void **)(this + 0xa68) = (void *)((long)pvVar2 + uVar5 * 8);
  if (puVar13 != (undefined8 *)0x0) {
    operator_delete(puVar13);
  }
LAB_00362c90:
  *(undefined8 **)(this + 0xa60) = puVar12;
  return;
}


// ===== 00362cb4  rive::Artboard::addAnimation =====

/* rive::Artboard::addAnimation(rive::LinearAnimation*) */

void __thiscall rive::Artboard::addAnimation(Artboard *this,LinearAnimation *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar13 = *(undefined8 **)(this + 0xa90);
  if (puVar13 < *(undefined8 **)(this + 0xa98)) {
    puVar12 = puVar13 + 1;
    *puVar13 = param_1;
    goto LAB_00362dfc;
  }
  puVar9 = *(undefined8 **)(this + 0xa88);
  lVar11 = (long)puVar13 - (long)puVar9 >> 3;
  uVar6 = lVar11 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_00362e20();
LAB_00362e1c:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar3 = (long)*(undefined8 **)(this + 0xa98) - (long)puVar9;
  uVar5 = (long)uVar3 >> 2;
  if (uVar5 <= uVar6) {
    uVar5 = uVar6;
  }
  if (0x7ffffffffffffff7 < uVar3) {
    uVar5 = 0x1fffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3d != 0) goto LAB_00362e1c;
    pvVar2 = operator_new(uVar5 << 3);
  }
  puVar4 = (undefined8 *)((long)pvVar2 + lVar11 * 8);
  puVar12 = puVar4 + 1;
  *puVar4 = param_1;
  if ((long)puVar13 - (long)puVar9 != 0) {
    uVar6 = ((long)puVar13 - (long)puVar9) - 8;
    puVar10 = puVar13;
    if ((0x37 < uVar6) &&
       (0x1f < (ulong)((long)puVar13 + (-((long)puVar13 - (long)puVar9) - (long)pvVar2)))) {
      puVar8 = puVar13 + -2;
      uVar6 = (uVar6 >> 3) + 1;
      uVar7 = uVar6 & 0x3ffffffffffffffc;
      puVar10 = puVar13 + -uVar7;
      puVar13 = puVar4 + -2;
      uVar3 = uVar7;
      do {
        puVar1 = puVar8 + -1;
        uVar16 = puVar8[-2];
        uVar15 = puVar8[1];
        uVar14 = *puVar8;
        uVar3 = uVar3 - 4;
        puVar8 = puVar8 + -4;
        puVar13[-1] = *puVar1;
        puVar13[-2] = uVar16;
        puVar13[1] = uVar15;
        *puVar13 = uVar14;
        puVar13 = puVar13 + -4;
      } while (uVar3 != 0);
      puVar4 = puVar4 + -uVar7;
      puVar13 = puVar9;
      if (uVar6 == uVar7) goto LAB_00362de4;
    }
    do {
      puVar10 = puVar10 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar10;
    } while (puVar10 != puVar9);
    puVar13 = *(undefined8 **)(this + 0xa88);
  }
LAB_00362de4:
  *(undefined8 **)(this + 0xa88) = puVar4;
  *(undefined8 **)(this + 0xa90) = puVar12;
  *(void **)(this + 0xa98) = (void *)((long)pvVar2 + uVar5 * 8);
  if (puVar13 != (undefined8 *)0x0) {
    operator_delete(puVar13);
  }
LAB_00362dfc:
  *(undefined8 **)(this + 0xa90) = puVar12;
  return;
}


// ===== 00362e20  FUN_00362e20 =====

void FUN_00362e20(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 00362e34  rive::Artboard::addStateMachine =====

/* rive::Artboard::addStateMachine(rive::StateMachine*) */

void __thiscall rive::Artboard::addStateMachine(Artboard *this,StateMachine *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar13 = *(undefined8 **)(this + 0xaa8);
  if (puVar13 < *(undefined8 **)(this + 0xab0)) {
    puVar12 = puVar13 + 1;
    *puVar13 = param_1;
    goto LAB_00362f7c;
  }
  puVar9 = *(undefined8 **)(this + 0xaa0);
  lVar11 = (long)puVar13 - (long)puVar9 >> 3;
  uVar6 = lVar11 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_00362ab4();
LAB_00362f9c:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar3 = (long)*(undefined8 **)(this + 0xab0) - (long)puVar9;
  uVar5 = (long)uVar3 >> 2;
  if (uVar5 <= uVar6) {
    uVar5 = uVar6;
  }
  if (0x7ffffffffffffff7 < uVar3) {
    uVar5 = 0x1fffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3d != 0) goto LAB_00362f9c;
    pvVar2 = operator_new(uVar5 << 3);
  }
  puVar4 = (undefined8 *)((long)pvVar2 + lVar11 * 8);
  puVar12 = puVar4 + 1;
  *puVar4 = param_1;
  if ((long)puVar13 - (long)puVar9 != 0) {
    uVar6 = ((long)puVar13 - (long)puVar9) - 8;
    puVar10 = puVar13;
    if ((0x37 < uVar6) &&
       (0x1f < (ulong)((long)puVar13 + (-((long)puVar13 - (long)puVar9) - (long)pvVar2)))) {
      puVar8 = puVar13 + -2;
      uVar6 = (uVar6 >> 3) + 1;
      uVar7 = uVar6 & 0x3ffffffffffffffc;
      puVar10 = puVar13 + -uVar7;
      puVar13 = puVar4 + -2;
      uVar3 = uVar7;
      do {
        puVar1 = puVar8 + -1;
        uVar16 = puVar8[-2];
        uVar15 = puVar8[1];
        uVar14 = *puVar8;
        uVar3 = uVar3 - 4;
        puVar8 = puVar8 + -4;
        puVar13[-1] = *puVar1;
        puVar13[-2] = uVar16;
        puVar13[1] = uVar15;
        *puVar13 = uVar14;
        puVar13 = puVar13 + -4;
      } while (uVar3 != 0);
      puVar4 = puVar4 + -uVar7;
      puVar13 = puVar9;
      if (uVar6 == uVar7) goto LAB_00362f64;
    }
    do {
      puVar10 = puVar10 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar10;
    } while (puVar10 != puVar9);
    puVar13 = *(undefined8 **)(this + 0xaa0);
  }
LAB_00362f64:
  *(undefined8 **)(this + 0xaa0) = puVar4;
  *(undefined8 **)(this + 0xaa8) = puVar12;
  *(void **)(this + 0xab0) = (void *)((long)pvVar2 + uVar5 * 8);
  if (puVar13 != (undefined8 *)0x0) {
    operator_delete(puVar13);
  }
LAB_00362f7c:
  *(undefined8 **)(this + 0xaa8) = puVar12;
  return;
}


// ===== 00362fa0  rive::Artboard::addScriptedObject =====

/* rive::Artboard::addScriptedObject(rive::ScriptedObject*) */

void __thiscall rive::Artboard::addScriptedObject(Artboard *this,ScriptedObject *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar13 = *(undefined8 **)(this + 0xb98);
  if (puVar13 < *(undefined8 **)(this + 0xba0)) {
    puVar12 = puVar13 + 1;
    *puVar13 = param_1;
    goto LAB_003630e8;
  }
  puVar9 = *(undefined8 **)(this + 0xb90);
  lVar11 = (long)puVar13 - (long)puVar9 >> 3;
  uVar6 = lVar11 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_0034af20();
LAB_00363108:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar3 = (long)*(undefined8 **)(this + 0xba0) - (long)puVar9;
  uVar5 = (long)uVar3 >> 2;
  if (uVar5 <= uVar6) {
    uVar5 = uVar6;
  }
  if (0x7ffffffffffffff7 < uVar3) {
    uVar5 = 0x1fffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3d != 0) goto LAB_00363108;
    pvVar2 = operator_new(uVar5 << 3);
  }
  puVar4 = (undefined8 *)((long)pvVar2 + lVar11 * 8);
  puVar12 = puVar4 + 1;
  *puVar4 = param_1;
  if ((long)puVar13 - (long)puVar9 != 0) {
    uVar6 = ((long)puVar13 - (long)puVar9) - 8;
    puVar10 = puVar13;
    if ((0x37 < uVar6) &&
       (0x1f < (ulong)((long)puVar13 + (-((long)puVar13 - (long)puVar9) - (long)pvVar2)))) {
      puVar8 = puVar13 + -2;
      uVar6 = (uVar6 >> 3) + 1;
      uVar7 = uVar6 & 0x3ffffffffffffffc;
      puVar10 = puVar13 + -uVar7;
      puVar13 = puVar4 + -2;
      uVar3 = uVar7;
      do {
        puVar1 = puVar8 + -1;
        uVar16 = puVar8[-2];
        uVar15 = puVar8[1];
        uVar14 = *puVar8;
        uVar3 = uVar3 - 4;
        puVar8 = puVar8 + -4;
        puVar13[-1] = *puVar1;
        puVar13[-2] = uVar16;
        puVar13[1] = uVar15;
        *puVar13 = uVar14;
        puVar13 = puVar13 + -4;
      } while (uVar3 != 0);
      puVar4 = puVar4 + -uVar7;
      puVar13 = puVar9;
      if (uVar6 == uVar7) goto LAB_003630d0;
    }
    do {
      puVar10 = puVar10 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar10;
    } while (puVar10 != puVar9);
    puVar13 = *(undefined8 **)(this + 0xb90);
  }
LAB_003630d0:
  *(undefined8 **)(this + 0xb90) = puVar4;
  *(undefined8 **)(this + 0xb98) = puVar12;
  *(void **)(this + 0xba0) = (void *)((long)pvVar2 + uVar5 * 8);
  if (puVar13 != (undefined8 *)0x0) {
    operator_delete(puVar13);
  }
LAB_003630e8:
  *(undefined8 **)(this + 0xb98) = puVar12;
  return;
}


// ===== 0036310c  rive::Artboard::pollAsyncWork =====

/* rive::Artboard::pollAsyncWork() */

void rive::Artboard::pollAsyncWork(void)

{
  int iVar1;
  
  if (((DAT_00686e90 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00686e90), iVar1 != 0)) {
    __cxa_atexit(FUN_0037da6c,&DAT_00686e88,&PTR_LOOP_006513f0);
    __cxa_guard_release(&DAT_00686e90);
  }
  if ((DAT_00686e88 != (WorkPool *)0x0) && (*(long *)(DAT_00686e88 + 0x30) != 0)) {
    WorkPool::pollCompletedWork(DAT_00686e88,0x10);
    return;
  }
  return;
}


// ===== 00363188  rive::Artboard::drawCanvases =====

/* rive::Artboard::drawCanvases() */

void __thiscall rive::Artboard::drawCanvases(Artboard *this)

{
  undefined1 uVar1;
  long lVar2;
  
  if (((*(long *)(this + 0xbc8) != 0) &&
      (lVar2 = *(long *)(*(long *)(this + 0xbc8) + 8), lVar2 != 0)) &&
     (lVar2 = *(long *)(lVar2 + 0x78), lVar2 != 0)) {
    uVar1 = *(undefined1 *)(lVar2 + 0x21);
    *(undefined1 *)(lVar2 + 0x21) = 1;
    internalDrawCanvases(this);
    *(undefined1 *)(lVar2 + 0x21) = uVar1;
    return;
  }
  internalDrawCanvases(this);
  return;
}


// ===== 003631dc  rive::Artboard::findDrawCanvasLuauState =====

/* rive::Artboard::findDrawCanvasLuauState() const */

long __thiscall rive::Artboard::findDrawCanvasLuauState(Artboard *this)

{
  long lVar1;
  ulong uVar2;
  Artboard *this_00;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  for (plVar3 = *(long **)(this + 0xb90); plVar3 != *(long **)(this + 0xb98); plVar3 = plVar3 + 1) {
    if (*(char *)(*plVar3 + 0x31) < '\0') {
      lVar1 = *(long *)(*plVar3 + 0x48);
      if (lVar1 == 0) {
        return 0;
      }
      return *(long *)(lVar1 + 8);
    }
  }
  puVar5 = *(undefined8 **)(this + 0xb48);
  puVar6 = *(undefined8 **)(this + 0xb50);
  do {
    if (puVar5 == puVar6) {
      return 0;
    }
    plVar3 = (long *)*puVar5;
    lVar1 = (**(code **)*plVar3)(plVar3);
    if (lVar1 != 0) {
      uVar4 = 0;
      do {
        this_00 = (Artboard *)(**(code **)(*plVar3 + 8))(plVar3,uVar4 & 0xffffffff);
        if ((this_00 != (Artboard *)0x0) && (lVar1 = findDrawCanvasLuauState(this_00), lVar1 != 0))
        {
          return lVar1;
        }
        uVar4 = uVar4 + 1;
        uVar2 = (**(code **)*plVar3)(plVar3);
      } while (uVar4 < uVar2);
    }
    puVar5 = puVar5 + 1;
  } while( true );
}


// ===== 003632b0  rive::Artboard::idOf =====

/* rive::Artboard::idOf(rive::Core*) const */

undefined4 __thiscall rive::Artboard::idOf(Artboard *this,Core *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar2 = *(undefined8 **)(this + 0xa60);
  puVar4 = *(undefined8 **)(this + 0xa58);
  puVar5 = puVar4;
  for (puVar1 = puVar4; (puVar1 != puVar2 && (puVar5 = puVar1, (Core *)*puVar1 != param_1));
      puVar1 = puVar1 + 1) {
    puVar5 = puVar2;
  }
  uVar3 = 0;
  if (puVar5 != puVar2) {
    uVar3 = (undefined4)((ulong)((long)puVar5 - (long)puVar4) >> 3);
  }
  return uVar3;
}


// ===== 003632f4  rive::Artboard::onComponentDirty =====

/* rive::Artboard::onComponentDirty(rive::Component*) */

void __thiscall rive::Artboard::onComponentDirty(Artboard *this,Component *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  this[0xc32] = (Artboard)0x1;
  *(ushort *)(this + 0x60) = *(ushort *)(this + 0x60) | 4;
  if (uVar1 < *(uint *)(this + 0xbd4)) {
    *(uint *)(this + 0xbd4) = uVar1;
  }
  return;
}


// ===== 00363320  rive::Artboard::sharesLayoutWithHost =====

/* rive::Artboard::sharesLayoutWithHost() const */

void __thiscall rive::Artboard::sharesLayoutWithHost(Artboard *this)

{
  if (*(long **)(this + 0xc38) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00363330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0xc38) + 0x68))();
    return;
  }
  return;
}


// ===== 00363338  rive::Artboard::cloneObjectDataBinds =====

/* rive::Artboard::cloneObjectDataBinds(rive::Core const*, rive::Core*, rive::Artboard*) const */

void __thiscall
rive::Artboard::cloneObjectDataBinds(Artboard *this,Core *param_1,Core *param_2,Artboard *param_3)

{
  ulong __n;
  void *__dest;
  DataBind *pDVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  void *__src;
  long *plVar5;
  ulong uVar6;
  
  __src = *(void **)(this + 0x9b8);
  __n = *(long *)(this + 0x9c0) - (long)__src;
  if (__n == 0) {
    return;
  }
  if (-1 < (long)__n) {
    __dest = operator_new(__n);
    memcpy(__dest,__src,__n);
    uVar6 = 0;
    do {
      plVar5 = *(long **)((long)__dest + uVar6);
      if ((Core *)plVar5[6] == param_1) {
        pDVar1 = (DataBind *)(**(code **)(*plVar5 + 0x28))(plVar5);
        lVar4 = plVar5[0xb];
        *(Core **)(pDVar1 + 0x30) = param_2;
        *(long *)(pDVar1 + 0x58) = lVar4;
        if ((param_2 != (Core *)0x0) &&
           (uVar2 = (**(code **)(*(long *)param_2 + 0x18))(param_2,10), (uVar2 & 1) != 0)) {
          Component::addCollapsable(*(Component **)(pDVar1 + 0x30),pDVar1);
        }
        if ((long *)plVar5[9] != (long *)0x0) {
          uVar3 = (**(code **)(*(long *)plVar5[9] + 0x28))();
          *(undefined8 *)(pDVar1 + 0x48) = uVar3;
        }
        DataBindContainer::addDataBind((DataBindContainer *)(param_3 + 0x9b0),pDVar1);
      }
      uVar6 = uVar6 + 8;
    } while (__n != uVar6);
    operator_delete(__dest);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00345418();
}


// ===== 00363454  rive::Artboard::host =====

/* rive::Artboard::host(rive::ArtboardHost*) */

void __thiscall rive::Artboard::host(Artboard *this,ArtboardHost *param_1)

{
  ulong uVar1;
  Artboard *this_00;
  
  *(ArtboardHost **)(this + 0xc38) = param_1;
  this[0x960] = (Artboard)0x1;
  if ((((param_1 != (ArtboardHost *)0x0) &&
       (uVar1 = (**(code **)(*(long *)param_1 + 0x68))(param_1), (uVar1 & 1) != 0)) &&
      (*(long **)(this + 0xc38) != (long *)0x0)) &&
     (this_00 = (Artboard *)(**(code **)(**(long **)(this + 0xc38) + 0x40))(),
     this_00 != (Artboard *)0x0)) {
    markLayoutDirty(this_00,(LayoutComponent *)this);
    LayoutComponent::syncLayoutChildren((LayoutComponent *)this_00);
    return;
  }
  return;
}


// ===== 003634c8  rive::Artboard::parentArtboard =====

/* rive::Artboard::parentArtboard() const */

void __thiscall rive::Artboard::parentArtboard(Artboard *this)

{
  if (*(long **)(this + 0xc38) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003634d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0xc38) + 0x40))();
    return;
  }
  return;
}


// ===== 003634e0  rive::Artboard::host =====

/* rive::Artboard::host() const */

undefined8 __thiscall rive::Artboard::host(Artboard *this)

{
  return *(undefined8 *)(this + 0xc38);
}


// ===== 003634e8  rive::Artboard::layoutWidth =====

/* rive::Artboard::layoutWidth() const */

undefined4 __thiscall rive::Artboard::layoutWidth(Artboard *this)

{
  return *(undefined4 *)(this + 0x200);
}


// ===== 003634f0  rive::Artboard::layoutHeight =====

/* rive::Artboard::layoutHeight() const */

undefined4 __thiscall rive::Artboard::layoutHeight(Artboard *this)

{
  return *(undefined4 *)(this + 0x204);
}


// ===== 003634f8  rive::Artboard::layoutX =====

/* rive::Artboard::layoutX() const */

undefined4 __thiscall rive::Artboard::layoutX(Artboard *this)

{
  return *(undefined4 *)(this + 0x1f8);
}


// ===== 00363500  rive::Artboard::layoutY =====

/* rive::Artboard::layoutY() const */

undefined4 __thiscall rive::Artboard::layoutY(Artboard *this)

{
  return *(undefined4 *)(this + 0x1fc);
}


// ===== 00363508  rive::Artboard::syncStyleChangesWithUpdate =====

/* rive::Artboard::syncStyleChangesWithUpdate(bool) */

void __thiscall rive::Artboard::syncStyleChangesWithUpdate(Artboard *this,bool param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = (**(code **)(*(long *)this + 0x350))();
  if (((uVar1 & 1) == 0) || ((this[0xc30] == (Artboard)0x0 && (!param_1)))) {
    return;
  }
  if (*(long *)(this + 0x1e8) == 0) {
    uVar2 = *(undefined4 *)(this + 0x174);
  }
  else {
    uVar2 = *(undefined4 *)(this + 0x174);
    uVar3 = 0x7fc00000;
    if (*(char *)(*(long *)(this + 0x1e8) + 0x13c) != '\0') {
      uVar2 = 0x7fc00000;
      goto LAB_00363574;
    }
  }
  uVar3 = *(undefined4 *)(this + 0x178);
LAB_00363574:
  rive_YGNodeCalculateLayoutWithContext(uVar2,uVar3,*(undefined8 *)(this + 0x1f0),0,0);
                    /* WARNING: Could not recover jumptable at 0x0036359c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x2d0))(this,1);
  return;
}


// ===== 003635a0  rive::Artboard::updateComponents =====

/* rive::Artboard::updateComponents() */

ushort __thiscall rive::Artboard::updateComponents(Artboard *this)

{
  ushort uVar1;
  bool bVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  
  uVar1 = *(ushort *)(this + 0x60);
  uVar4 = (uint)uVar1;
  if ((uVar1 >> 2 & 1) != 0) {
    lVar6 = *(long *)(this + 0xac0);
    lVar8 = *(long *)(this + 0xab8);
    uVar7 = 0;
    do {
      uVar4 = uVar4 & 0xfffb;
      *(short *)(this + 0x60) = (short)uVar4;
      if (lVar6 != lVar8) {
        uVar5 = 0;
        uVar4 = 0;
        do {
          *(uint *)(this + 0xbd4) = uVar4;
          plVar3 = *(long **)(*(long *)(this + 0xab8) + uVar5 * 8);
          if (*(ushort *)(plVar3 + 0xc) != 0 && (*(ushort *)(plVar3 + 0xc) & 1) == 0) {
            *(undefined2 *)(plVar3 + 0xc) = 0;
            (**(code **)(*plVar3 + 0x78))();
            if (*(uint *)(this + 0xbd4) < uVar4) break;
          }
          uVar4 = uVar4 + 1;
          uVar5 = (ulong)uVar4;
        } while (uVar5 < (ulong)(lVar6 - lVar8 >> 3));
        uVar4 = (uint)*(ushort *)(this + 0x60);
      }
    } while (((uVar4 >> 2 & 1) != 0) && (bVar2 = uVar7 < 99, uVar7 = uVar7 + 1, bVar2));
  }
  return uVar1 >> 2 & 1;
}


// ===== 00363678  rive::Artboard::takeLayoutData =====

/* rive::Artboard::takeLayoutData() */

undefined8 __thiscall rive::Artboard::takeLayoutData(Artboard *this)

{
  this[0xc30] = (Artboard)0x0;
  return *(undefined8 *)(this + 0x1f0);
}


// ===== 00363688  rive::Artboard::cleanLayout =====

/* rive::Artboard::cleanLayout(rive::LayoutComponent*) */

void __thiscall rive::Artboard::cleanLayout(Artboard *this,LayoutComponent *param_1)

{
  ulong uVar1;
  long lVar2;
  Artboard *pAVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  void *local_50 [3];
  long local_38;
  ulong uVar11;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  do {
    pAVar3 = this;
    if (pAVar3[0xc18] != (Artboard)0x0) {
      if (*(long *)(lVar2 + 0x28) == local_38) {
        fwrite("Artboard::cleanLayout - trying to remove a dirty layout during clean pass!\n",0x4b,1
               ,(FILE *)(PTR___sF_0067cee8 + 0x130));
        return;
      }
      goto LAB_00363848;
    }
    if ((*(long *)(pAVar3 + 0xc08) != 0) && (uVar5 = *(ulong *)(pAVar3 + 0xbf8), uVar5 != 0)) {
      uVar10 = NEON_cnt(uVar5,1);
      uVar4 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ (ulong)param_1 >> 0x20) * -0x622015f714c7d297;
      uVar9 = NEON_uaddlv(uVar10,1);
      uVar11 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9);
      uVar4 = ((ulong)param_1 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
      uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
      if ((uVar11 & 0xffffffff) < 2) {
        uVar6 = uVar5 - 1 & uVar4;
      }
      else {
        uVar6 = uVar4;
        if (uVar5 <= uVar4) {
          uVar6 = 0;
          if (uVar5 != 0) {
            uVar6 = uVar4 / uVar5;
          }
          uVar6 = uVar4 - uVar6 * uVar5;
        }
      }
      plVar7 = *(long **)(*(long *)(pAVar3 + 0xbf0) + uVar6 * 8);
      if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
        do {
          uVar8 = plVar7[1];
          if (uVar8 == uVar4) {
            if ((Artboard *)plVar7[2] == (Artboard *)param_1) {
              FUN_0036384c(local_50,pAVar3 + 0xbf0);
              if (local_50[0] != (void *)0x0) {
                operator_delete(local_50[0]);
              }
              break;
            }
          }
          else {
            if ((uVar11 & 0xffffffff) < 2) {
              uVar8 = uVar8 & uVar5 - 1;
            }
            else if (uVar5 <= uVar8) {
              uVar1 = 0;
              if (uVar5 != 0) {
                uVar1 = uVar8 / uVar5;
              }
              uVar8 = uVar8 - uVar1 * uVar5;
            }
            if (uVar8 != uVar6) break;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  } while (((param_1 == (LayoutComponent *)pAVar3) && (*(long **)(pAVar3 + 0xc38) != (long *)0x0))
          && (this = (Artboard *)(**(code **)(**(long **)(pAVar3 + 0xc38) + 0x40))(),
             param_1 = (LayoutComponent *)pAVar3, this != (Artboard *)0x0));
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_00363848:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036384c  FUN_0036384c =====

void FUN_0036384c(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  
  uVar5 = param_2[1];
  uVar3 = param_3[1];
  uVar11 = NEON_cnt(uVar5,1);
  uVar10 = NEON_uaddlv(uVar11,1);
  uVar7 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
  if (uVar7 < 2) {
    uVar3 = uVar5 - 1 & uVar3;
  }
  else if (uVar5 <= uVar3) {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar3 / uVar5;
    }
    uVar3 = uVar3 - uVar9 * uVar5;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar6 = plVar2;
    plVar2 = (long *)*plVar6;
  } while ((long *)*plVar6 != param_3);
  if (plVar6 != param_2 + 2) {
    uVar9 = plVar6[1];
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_00363918;
  }
  if (*param_3 != 0) {
    uVar9 = *(ulong *)(*param_3 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_00363918;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_00363918:
  lVar8 = *param_3;
  if (lVar8 != 0) {
    uVar9 = *(ulong *)(lVar8 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar7 * uVar5;
    }
    if (uVar9 != uVar3) {
      *(long **)(*param_2 + uVar9 * 8) = plVar6;
      lVar8 = *param_3;
    }
  }
  lVar4 = param_2[3];
  *plVar6 = lVar8;
  *param_3 = 0;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  param_2[3] = lVar4 + -1;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


// ===== 00363980  rive::Artboard::markHostTransformDirty =====

/* rive::Artboard::markHostTransformDirty() */

void __thiscall rive::Artboard::markHostTransformDirty(Artboard *this)

{
  this[0xc31] = (Artboard)0x1;
  if (*(long **)(this + 0xc38) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0036399c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0xc38) + 0x60))();
    return;
  }
  return;
}


// ===== 003639a4  rive::Artboard::calculateLayout =====

/* rive::Artboard::calculateLayout() */

void __thiscall rive::Artboard::calculateLayout(Artboard *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(long *)(this + 0x1e8) == 0) {
    uVar1 = *(undefined4 *)(this + 0x174);
  }
  else {
    uVar1 = *(undefined4 *)(this + 0x174);
    uVar2 = 0x7fc00000;
    if (*(char *)(*(long *)(this + 0x1e8) + 0x13c) != '\0') {
      uVar1 = 0x7fc00000;
      goto LAB_003639d4;
    }
  }
  uVar2 = *(undefined4 *)(this + 0x178);
LAB_003639d4:
  rive_YGNodeCalculateLayoutWithContext(uVar1,uVar2,*(undefined8 *)(this + 0x1f0),0,0);
  return;
}


// ===== 003639e4  rive::Artboard::updatePass =====

/* rive::Artboard::updatePass(bool) */

undefined4 rive::Artboard::updatePass(bool param_1)

{
  bool bVar1;
  Artboard *pAVar2;
  ulong uVar3;
  long *plVar4;
  uint uVar5;
  undefined8 *puVar6;
  Joystick *this;
  undefined8 *puVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  ushort uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  pAVar2 = (Artboard *)(ulong)param_1;
  (**(code **)(*(long *)pAVar2 + 0x330))(pAVar2,1);
  uVar3 = (**(code **)(*(long *)pAVar2 + 0x350))(pAVar2);
  if (((uVar3 & 1) != 0) && (pAVar2[0xc30] != (Artboard)0x0)) {
    if (*(long *)(pAVar2 + 0x1e8) == 0) {
      uVar12 = *(undefined4 *)(pAVar2 + 0x174);
LAB_00363a5c:
      uVar13 = *(undefined4 *)(pAVar2 + 0x178);
    }
    else {
      uVar12 = *(undefined4 *)(pAVar2 + 0x174);
      uVar13 = 0x7fc00000;
      if (*(char *)(*(long *)(pAVar2 + 0x1e8) + 0x13c) == '\0') goto LAB_00363a5c;
      uVar12 = 0x7fc00000;
    }
    rive_YGNodeCalculateLayoutWithContext(uVar12,uVar13,*(undefined8 *)(pAVar2 + 0x1f0),0,0);
    (**(code **)(*(long *)pAVar2 + 0x2d0))(pAVar2,1);
  }
  pAVar2[0xc31] = (Artboard)0x0;
  if (pAVar2[0xbd0] != (Artboard)0x0) {
    puVar7 = *(undefined8 **)(pAVar2 + 0xb68);
    for (puVar6 = *(undefined8 **)(pAVar2 + 0xb60); puVar6 != puVar7; puVar6 = puVar6 + 1) {
      Joystick::apply((Joystick *)*puVar6,pAVar2);
    }
  }
  uVar11 = *(ushort *)(pAVar2 + 0x60);
  uVar5 = (uint)uVar11;
  if ((uVar11 >> 2 & 1) == 0) {
    if (pAVar2[0xbd0] == (Artboard)0x0) goto LAB_00363b68;
LAB_00363c7c:
    uVar12 = 0;
  }
  else {
    lVar8 = *(long *)(pAVar2 + 0xac0);
    lVar10 = *(long *)(pAVar2 + 0xab8);
    uVar9 = 0;
    do {
      uVar5 = uVar5 & 0xfffb;
      *(short *)(pAVar2 + 0x60) = (short)uVar5;
      if (lVar8 != lVar10) {
        uVar3 = 0;
        uVar5 = 0;
        do {
          *(uint *)(pAVar2 + 0xbd4) = uVar5;
          plVar4 = *(long **)(*(long *)(pAVar2 + 0xab8) + uVar3 * 8);
          if (*(ushort *)(plVar4 + 0xc) != 0 && (*(ushort *)(plVar4 + 0xc) & 1) == 0) {
            *(undefined2 *)(plVar4 + 0xc) = 0;
            (**(code **)(*plVar4 + 0x78))();
            if (*(uint *)(pAVar2 + 0xbd4) < uVar5) break;
          }
          uVar5 = uVar5 + 1;
          uVar3 = (ulong)uVar5;
        } while (uVar3 < (ulong)(lVar8 - lVar10 >> 3));
        uVar5 = (uint)*(ushort *)(pAVar2 + 0x60);
      }
    } while (((uVar5 >> 2 & 1) != 0) && (bVar1 = uVar9 < 99, uVar9 = uVar9 + 1, bVar1));
    if (pAVar2[0xbd0] == (Artboard)0x0) {
LAB_00363b68:
      puVar7 = *(undefined8 **)(pAVar2 + 0xb68);
      uVar11 = uVar11 >> 2 & 1;
      for (puVar6 = *(undefined8 **)(pAVar2 + 0xb60); puVar6 != puVar7; puVar6 = puVar6 + 1) {
        this = (Joystick *)*puVar6;
        if (*(long *)(this + 0x100) != 0) {
          (**(code **)(*(long *)pAVar2 + 0x330))(pAVar2,1);
          uVar5 = (uint)*(ushort *)(pAVar2 + 0x60);
          if ((*(ushort *)(pAVar2 + 0x60) >> 2 & 1) != 0) {
            lVar8 = *(long *)(pAVar2 + 0xac0);
            lVar10 = *(long *)(pAVar2 + 0xab8);
            uVar9 = 0;
            do {
              uVar5 = uVar5 & 0xfffb;
              *(short *)(pAVar2 + 0x60) = (short)uVar5;
              if (lVar8 != lVar10) {
                uVar3 = 0;
                uVar5 = 0;
                do {
                  *(uint *)(pAVar2 + 0xbd4) = uVar5;
                  plVar4 = *(long **)(*(long *)(pAVar2 + 0xab8) + uVar3 * 8);
                  if (*(ushort *)(plVar4 + 0xc) != 0 && (*(ushort *)(plVar4 + 0xc) & 1) == 0) {
                    *(undefined2 *)(plVar4 + 0xc) = 0;
                    (**(code **)(*plVar4 + 0x78))();
                    if (*(uint *)(pAVar2 + 0xbd4) < uVar5) break;
                  }
                  uVar5 = uVar5 + 1;
                  uVar3 = (ulong)uVar5;
                } while (uVar3 < (ulong)(lVar8 - lVar10 >> 3));
                uVar5 = (uint)*(ushort *)(pAVar2 + 0x60);
              }
              uVar11 = 1;
            } while (((uVar5 >> 2 & 1) != 0) && (bVar1 = uVar9 < 99, uVar9 = uVar9 + 1, bVar1));
          }
        }
        Joystick::apply(this,pAVar2);
      }
      (**(code **)(*(long *)pAVar2 + 0x330))(pAVar2,1);
      uVar5 = (uint)*(ushort *)(pAVar2 + 0x60);
      if ((*(ushort *)(pAVar2 + 0x60) >> 2 & 1) == 0) {
        if (uVar11 == 0) goto LAB_00363c7c;
      }
      else {
        lVar8 = *(long *)(pAVar2 + 0xac0);
        lVar10 = *(long *)(pAVar2 + 0xab8);
        uVar9 = 0;
        do {
          uVar5 = uVar5 & 0xfffb;
          *(short *)(pAVar2 + 0x60) = (short)uVar5;
          if (lVar8 != lVar10) {
            uVar3 = 0;
            uVar5 = 0;
            do {
              *(uint *)(pAVar2 + 0xbd4) = uVar5;
              plVar4 = *(long **)(*(long *)(pAVar2 + 0xab8) + uVar3 * 8);
              if (*(ushort *)(plVar4 + 0xc) != 0 && (*(ushort *)(plVar4 + 0xc) & 1) == 0) {
                *(undefined2 *)(plVar4 + 0xc) = 0;
                (**(code **)(*plVar4 + 0x78))();
                if (*(uint *)(pAVar2 + 0xbd4) < uVar5) break;
              }
              uVar5 = uVar5 + 1;
              uVar3 = (ulong)uVar5;
            } while (uVar3 < (ulong)(lVar8 - lVar10 >> 3));
            uVar5 = (uint)*(ushort *)(pAVar2 + 0x60);
          }
        } while (((uVar5 >> 2 & 1) != 0) && (bVar1 = uVar9 < 99, uVar9 = uVar9 + 1, bVar1));
      }
    }
    uVar12 = 1;
    (**(code **)(*(long *)pAVar2 + 0x330))(pAVar2,1);
  }
  return uVar12;
}


// ===== 00363d50  rive::Artboard::advanceInternal =====

/* rive::Artboard::advanceInternal(float, rive::AdvanceFlags) */

uint __thiscall
rive::Artboard::advanceInternal(undefined4 param_1,Artboard *this,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar10;
  undefined8 *puVar9;
  
  puVar10 = *(undefined8 **)(this + 0xbb0);
  if (*(undefined8 **)(this + 0xba8) == puVar10) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    puVar8 = *(undefined8 **)(this + 0xba8);
    do {
      puVar9 = puVar8 + 1;
      uVar1 = (*(code *)**(undefined8 **)*puVar8)(param_1,(undefined8 *)*puVar8,param_3);
      uVar7 = uVar1 | uVar7;
      puVar8 = puVar9;
    } while (puVar9 != puVar10);
  }
  plVar6 = *(long **)(this + 0x9c0);
  plVar5 = *(long **)(this + 0x9b8);
  if (plVar6 != plVar5) {
    uVar1 = 0;
    do {
      lVar4 = *plVar5;
      plVar3 = *(long **)(lVar4 + 0x48);
      if (plVar3 == (long *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0;
        if ((*(long *)(lVar4 + 0x38) != 0) && (*(char *)(lVar4 + 0x28) == '\0')) {
          uVar2 = (**(code **)(*plVar3 + 0x88))(param_1,plVar3);
        }
      }
      plVar5 = plVar5 + 1;
      uVar1 = uVar2 | uVar1;
    } while (plVar5 != plVar6);
    uVar7 = uVar1 | uVar7;
  }
  return uVar7 & 1;
}


// ===== 00363e38  rive::Artboard::advance =====

/* rive::Artboard::advance(float, rive::AdvanceFlags) */

ushort __thiscall rive::Artboard::advance(undefined4 param_1,Artboard *this,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  undefined8 *puVar8;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 *puVar9;
  
  if (((DAT_00686e90 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_00686e90), iVar4 != 0)) {
    __cxa_atexit(FUN_0037da6c,&DAT_00686e88,&PTR_LOOP_006513f0);
    __cxa_guard_release(&DAT_00686e90);
  }
  if ((DAT_00686e88 != (WorkPool *)0x0) && (*(long *)(DAT_00686e88 + 0x30) != 0)) {
    WorkPool::pollCompletedWork(DAT_00686e88,0x10);
  }
  puVar11 = *(undefined8 **)(this + 0xbb0);
  if (*(undefined8 **)(this + 0xba8) == puVar11) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    puVar8 = *(undefined8 **)(this + 0xba8);
    do {
      puVar9 = puVar8 + 1;
      uVar2 = (*(code *)**(undefined8 **)*puVar8)(param_1,(undefined8 *)*puVar8,param_3 | 4);
      uVar7 = uVar2 | uVar7;
      puVar8 = puVar9;
    } while (puVar9 != puVar11);
  }
  plVar10 = *(long **)(this + 0x9c0);
  plVar12 = *(long **)(this + 0x9b8);
  if (plVar10 == plVar12) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    do {
      lVar6 = *plVar12;
      plVar5 = *(long **)(lVar6 + 0x48);
      if (plVar5 == (long *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
        if ((*(long *)(lVar6 + 0x38) != 0) && (*(char *)(lVar6 + 0x28) == '\0')) {
          uVar3 = (**(code **)(*plVar5 + 0x88))(param_1,plVar5);
        }
      }
      plVar12 = plVar12 + 1;
      uVar2 = uVar3 | uVar2;
    } while (plVar12 != plVar10);
  }
  uVar3 = updatePass(SUB81(this,0));
  if (((uVar2 | uVar7 | uVar3) & 1) == 0) {
    uVar1 = *(ushort *)(this + 0x60) >> 2 & 1;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


// ===== 00363fac  rive::Artboard::rootTransform =====

/* rive::Artboard::rootTransform(rive::Vec2D const&) */

undefined1  [16] __thiscall rive::Artboard::rootTransform(Artboard *this,Vec2D *param_1)

{
  long *plVar1;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  
  plVar1 = *(long **)(this + 0xc38);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,param_1,this);
    auVar2._4_4_ = extraout_var;
    auVar2._0_4_ = extraout_s0;
    auVar2._8_8_ = extraout_var_00;
    return auVar2;
  }
  return ZEXT416(*(uint *)param_1);
}


// ===== 00363fdc  rive::Artboard::addToRenderPath =====

/* rive::Artboard::addToRenderPath(rive::RenderPath*, rive::Mat2D const&) */

void __thiscall rive::Artboard::addToRenderPath(Artboard *this,RenderPath *param_1,Mat2D *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  Mat2D *pMVar6;
  code *pcVar7;
  long *plVar8;
  uint uVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  for (plVar8 = *(long **)(this + 0xbe0); plVar8 != (long *)0x0; plVar8 = (long *)plVar8[0x2c]) {
    uVar4 = (**(code **)(*plVar8 + 0x1e8))(plVar8);
    if (((uVar4 & 1) == 0) && (uVar4 = (**(code **)(*plVar8 + 0x18))(plVar8,3), (uVar4 & 1) != 0)) {
      puVar1 = (undefined8 *)plVar8[0x32];
      uVar9 = (uint)*(byte *)(plVar8 + 0x30);
      for (puVar10 = (undefined8 *)plVar8[0x31]; puVar10 != puVar1; puVar10 = puVar10 + 1) {
        uVar3 = (**(code **)(*(long *)*puVar10 + 0xd8))();
        uVar9 = uVar3 | uVar9;
      }
      if ((uVar9 >> 1 & 1) == 0) {
        uVar5 = ShapePaintPath::renderPath
                          ((ShapePaintPath *)(plVar8 + 0x51),*(Factory **)(plVar8[8] + 0xbd8));
        pcVar7 = *(code **)(*(long *)param_1 + 0x20);
        pMVar6 = param_2;
      }
      else {
        uVar5 = ShapePaintPath::renderPath
                          ((ShapePaintPath *)(plVar8 + 0x46),*(Factory **)(plVar8[8] + 0xbd8));
        fVar14 = (float)*(undefined8 *)((long)plVar8 + 0xa4);
        fVar16 = (float)((ulong)plVar8[0x15] >> 0x20);
        fVar11 = (float)plVar8[0x15];
        fVar15 = (float)*(undefined8 *)param_2;
        fVar17 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
        pcVar7 = *(code **)(*(long *)param_1 + 0x20);
        fVar19 = (float)((ulong)*(undefined8 *)((long)plVar8 + 0xb4) >> 0x20);
        fVar12 = (float)*(undefined8 *)(param_2 + 8);
        fVar13 = (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
        fVar18 = (float)*(undefined8 *)((long)plVar8 + 0xb4);
        local_70 = CONCAT44(fVar13 * fVar11 + fVar14 * fVar17,fVar12 * fVar11 + fVar14 * fVar15);
        uStack_68 = CONCAT44(fVar13 * (float)plVar8[0x16] + fVar16 * fVar17,
                             fVar12 * (float)plVar8[0x16] + fVar16 * fVar15);
        local_60 = CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) +
                            fVar13 * fVar19 + fVar17 * fVar18,
                            (float)*(undefined8 *)(param_2 + 0x10) +
                            fVar12 * fVar19 + fVar15 * fVar18);
        pMVar6 = (Mat2D *)&local_70;
      }
      (*pcVar7)(param_1,uVar5,pMVar6);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00364144  rive::Artboard::addToRawPath =====

/* rive::Artboard::addToRawPath(rive::RawPath&, rive::Mat2D const*) */

void __thiscall rive::Artboard::addToRawPath(Artboard *this,RawPath *param_1,Mat2D *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  RawPath *pRVar5;
  Mat2D *pMVar6;
  long *plVar7;
  uint uVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  for (plVar7 = *(long **)(this + 0xbe0); plVar7 != (long *)0x0; plVar7 = (long *)plVar7[0x2c]) {
    uVar4 = (**(code **)(*plVar7 + 0x1e8))(plVar7);
    if (((uVar4 & 1) == 0) && (uVar4 = (**(code **)(*plVar7 + 0x18))(plVar7,3), (uVar4 & 1) != 0)) {
      puVar1 = (undefined8 *)plVar7[0x32];
      uVar8 = (uint)*(byte *)(plVar7 + 0x30);
      for (puVar9 = (undefined8 *)plVar7[0x31]; puVar9 != puVar1; puVar9 = puVar9 + 1) {
        uVar3 = (**(code **)(*(long *)*puVar9 + 0xd8))();
        uVar8 = uVar3 | uVar8;
      }
      if ((uVar8 >> 1 & 1) == 0) {
        pRVar5 = (RawPath *)(plVar7 + 0x53);
        pMVar6 = param_2;
      }
      else {
        if (param_2 == (Mat2D *)0x0) {
          uStack_68 = *(undefined8 *)((long)plVar7 + 0xac);
          local_70 = *(undefined8 *)((long)plVar7 + 0xa4);
          local_60 = *(undefined8 *)((long)plVar7 + 0xb4);
        }
        else {
          fVar13 = (float)*(undefined8 *)((long)plVar7 + 0xa4);
          fVar15 = (float)((ulong)plVar7[0x15] >> 0x20);
          fVar10 = (float)plVar7[0x15];
          fVar14 = (float)*(undefined8 *)param_2;
          fVar16 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
          fVar18 = (float)((ulong)*(undefined8 *)((long)plVar7 + 0xb4) >> 0x20);
          fVar11 = (float)*(undefined8 *)(param_2 + 8);
          fVar12 = (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
          fVar17 = (float)*(undefined8 *)((long)plVar7 + 0xb4);
          local_70 = CONCAT44(fVar12 * fVar10 + fVar13 * fVar16,fVar11 * fVar10 + fVar13 * fVar14);
          uStack_68 = CONCAT44(fVar12 * (float)plVar7[0x16] + fVar15 * fVar16,
                               fVar11 * (float)plVar7[0x16] + fVar15 * fVar14);
          local_60 = CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) +
                              fVar12 * fVar18 + fVar16 * fVar17,
                              (float)*(undefined8 *)(param_2 + 0x10) +
                              fVar11 * fVar18 + fVar14 * fVar17);
        }
        pRVar5 = (RawPath *)(plVar7 + 0x48);
        pMVar6 = (Mat2D *)&local_70;
      }
      RawPath::addPath(param_1,pRVar5,pMVar6);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0036429c  rive::Artboard::origin =====

/* rive::Artboard::origin() const */

undefined1  [16] __thiscall rive::Artboard::origin(Artboard *this)

{
  undefined1 auVar1 [16];
  
  if (this[0xbe9] != (Artboard)0x0) {
    return ZEXT816(0);
  }
  auVar1._0_4_ = (float)*(undefined8 *)(this + 0x984) * -(float)*(undefined8 *)(this + 0x200);
  auVar1._4_4_ = (float)((ulong)*(undefined8 *)(this + 0x984) >> 0x20) *
                 -(float)((ulong)*(undefined8 *)(this + 0x200) >> 0x20);
  auVar1._8_8_ = 0;
  return auVar1;
}


// ===== 003642cc  rive::Artboard::bounds =====

/* rive::Artboard::bounds() const */

float __thiscall rive::Artboard::bounds(Artboard *this)

{
  if (this[0xbe9] != (Artboard)0x0) {
    return 0.0;
  }
  return -(*(float *)(this + 0x200) * *(float *)(this + 0x984));
}


// ===== 00364308  rive::Artboard::isTranslucent =====

/* rive::Artboard::isTranslucent() const */

undefined8 __thiscall rive::Artboard::isTranslucent(Artboard *this)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(this + 0x1a0);
  puVar1 = *(undefined8 **)(this + 0x1a8);
  while( true ) {
    if (puVar4 == puVar1) {
      return 1;
    }
    plVar3 = (long *)*puVar4;
    uVar2 = (**(code **)(*plVar3 + 0x98))(plVar3);
    if (((uVar2 & 1) != 0) && ((*(byte *)(plVar3[0x1a] + 8) >> 1 & 1) == 0)) break;
    puVar4 = puVar4 + 1;
  }
  return 0;
}


// ===== 0036436c  rive::Artboard::hasAudio =====

/* rive::Artboard::hasAudio() const */

undefined8 __thiscall rive::Artboard::hasAudio(Artboard *this)

{
  short sVar1;
  long lVar2;
  Artboard *this_00;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  plVar4 = *(long **)(this + 0xa58);
  plVar6 = *(long **)(this + 0xa60);
  while( true ) {
    if (plVar4 == plVar6) {
      puVar7 = *(undefined8 **)(this + 0xb48);
      puVar8 = *(undefined8 **)(this + 0xb50);
      do {
        if (puVar7 == puVar8) {
          return 0;
        }
        plVar4 = (long *)*puVar7;
        lVar2 = (**(code **)*plVar4)(plVar4);
        if (lVar2 != 0) {
          uVar5 = 0;
          do {
            this_00 = (Artboard *)(**(code **)(*plVar4 + 8))(plVar4,uVar5 & 0xffffffff);
            if ((this_00 != (Artboard *)0x0) && (uVar3 = hasAudio(this_00), (uVar3 & 1) != 0)) {
              return 1;
            }
            uVar5 = uVar5 + 1;
            uVar3 = (**(code **)*plVar4)(plVar4);
          } while (uVar5 < uVar3);
        }
        puVar7 = puVar7 + 1;
      } while( true );
    }
    if (((long *)*plVar4 != (long *)0x0) &&
       (sVar1 = (**(code **)(*(long *)*plVar4 + 0x10))(), sVar1 == 0x197)) break;
    plVar4 = plVar4 + 1;
  }
  return 1;
}


// ===== 0036444c  rive::Artboard::isTranslucent =====

/* rive::Artboard::isTranslucent(rive::LinearAnimation const*) const */

undefined8 __thiscall rive::Artboard::isTranslucent(Artboard *this,LinearAnimation *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar5 = *(long **)(param_1 + 0x48);
  plVar2 = *(long **)(param_1 + 0x50);
  if (plVar5 == plVar2) {
    plVar6 = *(long **)(this + 0x1a0);
    plVar7 = *(long **)(this + 0x1a8);
  }
  else {
    do {
      lVar3 = (**(code **)(*(long *)this + 0x348))(this,*(undefined4 *)(*plVar5 + 0xc));
      plVar7 = *(long **)(this + 0x1a8);
      plVar6 = *(long **)(this + 0x1a0);
      for (plVar1 = plVar6; plVar1 != plVar7; plVar1 = plVar1 + 1) {
        if (lVar3 == *plVar1) {
          return 1;
        }
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar2);
  }
  while( true ) {
    if (plVar6 == plVar7) {
      return 1;
    }
    plVar5 = (long *)*plVar6;
    uVar4 = (**(code **)(*plVar5 + 0x98))(plVar5);
    if (((uVar4 & 1) != 0) && ((*(byte *)(plVar5[0x1a] + 8) >> 1 & 1) == 0)) break;
    plVar6 = plVar6 + 1;
  }
  return 0;
}


// ===== 00364518  rive::Artboard::isTranslucent =====

/* rive::Artboard::isTranslucent(rive::LinearAnimationInstance const*) const */

undefined8 __thiscall rive::Artboard::isTranslucent(Artboard *this,LinearAnimationInstance *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar5 = *(long **)(*(long *)(param_1 + 0x38) + 0x48);
  plVar2 = *(long **)(*(long *)(param_1 + 0x38) + 0x50);
  if (plVar5 == plVar2) {
    plVar6 = *(long **)(this + 0x1a0);
    plVar7 = *(long **)(this + 0x1a8);
  }
  else {
    do {
      lVar3 = (**(code **)(*(long *)this + 0x348))(this,*(undefined4 *)(*plVar5 + 0xc));
      plVar7 = *(long **)(this + 0x1a8);
      plVar6 = *(long **)(this + 0x1a0);
      for (plVar1 = plVar6; plVar1 != plVar7; plVar1 = plVar1 + 1) {
        if (lVar3 == *plVar1) {
          return 1;
        }
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar2);
  }
  while( true ) {
    if (plVar6 == plVar7) {
      return 1;
    }
    plVar5 = (long *)*plVar6;
    uVar4 = (**(code **)(*plVar5 + 0x98))(plVar5);
    if (((uVar4 & 1) != 0) && ((*(byte *)(plVar5[0x1a] + 8) >> 1 & 1) == 0)) break;
    plVar6 = plVar6 + 1;
  }
  return 0;
}


// ===== 003645e8  rive::Artboard::animationNameAt =====

/* rive::Artboard::animationNameAt(unsigned long) const */

void rive::Artboard::animationNameAt(ulong param_1)

{
  ulong in_x1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((in_x1 < (ulong)(*(long *)(param_1 + 0xa90) - *(long *)(param_1 + 0xa88) >> 3)) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0xa88) + in_x1 * 8), lVar1 != 0)) {
    if ((*(byte *)(lVar1 + 0x10) & 1) == 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x18);
      uVar2 = *(undefined8 *)(lVar1 + 0x10);
      *(undefined8 *)(in_x8 + 0x10) = *(undefined8 *)(lVar1 + 0x20);
      *(undefined8 *)(in_x8 + 8) = uVar3;
      *(undefined8 *)in_x8 = uVar2;
      return;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(in_x8,*(char **)(lVar1 + 0x20),*(ulong *)(lVar1 + 0x18));
    return;
  }
  *(undefined2 *)in_x8 = 0;
  return;
}


// ===== 00364638  rive::Artboard::animation =====

/* rive::Artboard::animation(unsigned long) const */

undefined8 __thiscall rive::Artboard::animation(Artboard *this,ulong param_1)

{
  if (param_1 < (ulong)(*(long *)(this + 0xa90) - *(long *)(this + 0xa88) >> 3)) {
    return *(undefined8 *)(*(long *)(this + 0xa88) + param_1 * 8);
  }
  return 0;
}


// ===== 0036465c  rive::Artboard::rootFocusDataCount =====

/* rive::Artboard::rootFocusDataCount() const */

long __thiscall rive::Artboard::rootFocusDataCount(Artboard *this)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar7 = *(undefined8 **)(this + 0xa58);
  puVar8 = *(undefined8 **)(this + 0xa60);
  if (puVar7 == puVar8) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    do {
      plVar4 = (long *)*puVar7;
      if ((plVar4 != (long *)0x0) &&
         (uVar2 = (**(code **)(*plVar4 + 0x18))(plVar4,0x28d), (uVar2 & 1) != 0)) {
        for (plVar5 = (long *)plVar4[6]; plVar5 != (long *)0x0; plVar5 = (long *)plVar5[6]) {
          uVar2 = (**(code **)(*plVar5 + 0x18))(plVar5,2);
          if ((uVar2 & 1) != 0) {
            puVar1 = (undefined8 *)plVar5[0x12];
            for (puVar9 = (undefined8 *)plVar5[0x11]; puVar9 != puVar1; puVar9 = puVar9 + 1) {
              plVar6 = (long *)*puVar9;
              uVar2 = (**(code **)(*plVar6 + 0x18))(plVar6,0x28d);
              if ((plVar6 != plVar4) && ((uVar2 & 1) != 0)) goto LAB_00364690;
            }
          }
        }
        lVar3 = lVar3 + 1;
      }
LAB_00364690:
      puVar7 = puVar7 + 1;
    } while (puVar7 != puVar8);
  }
  return lVar3;
}


// ===== 00364744  rive::Artboard::rootFocusDataAt =====

/* rive::Artboard::rootFocusDataAt(unsigned long) const */

long * __thiscall rive::Artboard::rootFocusDataAt(Artboard *this,ulong param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  
  puVar6 = *(undefined8 **)(this + 0xa58);
  puVar7 = *(undefined8 **)(this + 0xa60);
  if (puVar6 != puVar7) {
    uVar8 = 0;
    do {
      plVar3 = (long *)*puVar6;
      if ((plVar3 != (long *)0x0) &&
         (uVar2 = (**(code **)(*plVar3 + 0x18))(plVar3,0x28d), (uVar2 & 1) != 0)) {
        for (plVar4 = (long *)plVar3[6]; plVar4 != (long *)0x0; plVar4 = (long *)plVar4[6]) {
          uVar2 = (**(code **)(*plVar4 + 0x18))(plVar4,2);
          if ((uVar2 & 1) != 0) {
            puVar1 = (undefined8 *)plVar4[0x12];
            for (puVar9 = (undefined8 *)plVar4[0x11]; puVar9 != puVar1; puVar9 = puVar9 + 1) {
              plVar5 = (long *)*puVar9;
              uVar2 = (**(code **)(*plVar5 + 0x18))(plVar5,0x28d);
              if ((plVar5 != plVar3) && ((uVar2 & 1) != 0)) goto LAB_00364788;
            }
          }
        }
        if (uVar8 == param_1) {
          return plVar3;
        }
        uVar8 = uVar8 + 1;
      }
LAB_00364788:
      puVar6 = puVar6 + 1;
    } while (puVar6 != puVar7);
  }
  return (long *)0x0;
}


// ===== 00364840  rive::Artboard::buildFocusTree =====

/* rive::Artboard::buildFocusTree(rive::FocusManager*, rive::rcp<rive::FocusNode>) */

void __thiscall
rive::Artboard::buildFocusTree(Artboard *this,FocusManager *param_1,undefined8 *param_3)

{
  FocusManager *pFVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  int iVar5;
  ulong uVar6;
  Artboard *pAVar7;
  long lVar8;
  FocusManager *extraout_x1;
  FocusManager *extraout_x1_00;
  FocusManager *extraout_x1_01;
  FocusManager *extraout_x1_02;
  FocusManager *extraout_x1_03;
  FocusManager *extraout_x1_04;
  FocusManager *extraout_x1_05;
  FocusManager *extraout_x1_06;
  Component *extraout_x1_07;
  Component *extraout_x1_08;
  Component *extraout_x1_09;
  Component *extraout_x1_10;
  Component *extraout_x1_11;
  Component *extraout_x1_12;
  Component *extraout_x1_13;
  Component *extraout_x1_14;
  Component *pCVar9;
  Component *extraout_x1_15;
  FocusManager *pFVar10;
  void *pvVar11;
  long *plVar12;
  FocusData *pFVar13;
  long lVar14;
  void *pvVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined1 auVar21 [16];
  void *local_98;
  void *local_90;
  void *local_88;
  void *local_80;
  void *local_78;
  long local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (param_1 != (FocusManager *)0x0) {
    *(FocusManager **)(this + 0xc40) = param_1;
    pvVar11 = (void *)*param_3;
    pCVar9 = (Component *)param_1;
    if (pvVar11 != (void *)0x0) {
      FUN_00340fb0(1,pvVar11);
      pCVar9 = (Component *)extraout_x1;
    }
    puVar19 = *(undefined8 **)(this + 0xa60);
    for (puVar18 = *(undefined8 **)(this + 0xa58); puVar18 != puVar19; puVar18 = puVar18 + 1) {
      plVar12 = (long *)*puVar18;
      if (plVar12 != (long *)0x0) {
        auVar21 = (**(code **)(*plVar12 + 0x18))(plVar12,0x28d);
        pCVar9 = auVar21._8_8_;
        if ((auVar21 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
          for (plVar16 = (long *)plVar12[6]; plVar16 != (long *)0x0; plVar16 = (long *)plVar16[6]) {
            uVar6 = (**(code **)(*plVar16 + 0x18))(plVar16,2);
            if ((uVar6 & 1) != 0) {
              puVar2 = (undefined8 *)plVar16[0x12];
              for (puVar20 = (undefined8 *)plVar16[0x11]; puVar20 != puVar2; puVar20 = puVar20 + 1)
              {
                plVar17 = (long *)*puVar20;
                uVar6 = (**(code **)(*plVar17 + 0x18))(plVar17,0x28d);
                if ((plVar17 != plVar12) && ((uVar6 & 1) != 0)) {
                  FocusData::focusNode();
                  pvVar15 = local_78;
                  pvVar4 = local_78;
                  if (local_78 == (void *)0x0) goto LAB_00364984;
                  goto LAB_00364978;
                }
              }
            }
          }
          pvVar15 = pvVar11;
          pvVar4 = pvVar11;
          if (pvVar11 != (void *)0x0) {
            FUN_00340fb0(1,pvVar11);
            local_78 = pvVar11;
LAB_00364978:
            pvVar15 = local_78;
            FUN_00340fb0(1,local_78);
            pvVar4 = local_78;
          }
LAB_00364984:
          local_78 = pvVar4;
          local_80 = pvVar15;
          FocusData::focusNode();
          FocusManager::addChild(param_1,&local_80,&local_88);
          pvVar4 = local_88;
          pCVar9 = (Component *)extraout_x1_01;
          if ((local_88 != (void *)0x0) &&
             (iVar5 = FUN_00340fe0(0xffffffff,local_88), pCVar9 = (Component *)extraout_x1_02,
             pvVar15 = local_80, iVar5 == 1)) {
            if ((*(byte *)((long)pvVar4 + 0x38) & 1) != 0) {
              operator_delete(*(void **)((long)pvVar4 + 0x48));
            }
            local_70 = (long)pvVar4 + 0x20;
            FUN_0034b070(&local_70);
            pCVar9 = (Component *)extraout_x1_03;
            operator_delete(pvVar4);
            pvVar15 = local_80;
          }
          if ((pvVar15 != (void *)0x0) &&
             (iVar5 = FUN_00340fe0(0xffffffff,pvVar15), pCVar9 = (Component *)extraout_x1_04,
             iVar5 == 1)) {
            if ((*(byte *)((long)pvVar15 + 0x38) & 1) != 0) {
              operator_delete(*(void **)((long)pvVar15 + 0x48));
            }
            local_70 = (long)pvVar15 + 0x20;
            FUN_0034b070(&local_70);
            pCVar9 = (Component *)extraout_x1_05;
            operator_delete(pvVar15);
          }
          pvVar15 = local_78;
          if ((local_78 != (void *)0x0) &&
             (iVar5 = FUN_00340fe0(0xffffffff,local_78), pCVar9 = (Component *)extraout_x1_06,
             iVar5 == 1)) {
            if ((*(byte *)((long)pvVar15 + 0x38) & 1) != 0) {
              operator_delete(*(void **)((long)pvVar15 + 0x48));
            }
            local_70 = (long)pvVar15 + 0x20;
            FUN_0034b070(&local_70);
            pCVar9 = (Component *)extraout_x1_00;
            operator_delete(pvVar15);
          }
        }
      }
    }
    puVar19 = *(undefined8 **)(this + 0xb20);
    for (puVar18 = *(undefined8 **)(this + 0xb18); puVar18 != puVar19; puVar18 = puVar18 + 1) {
      pFVar13 = (FocusData *)*puVar18;
      FocusData::findClosestFocusNode(pFVar13,pCVar9);
      if (local_78 == (void *)0x0) {
        if (pvVar11 == (void *)0x0) {
          local_78 = (void *)0x0;
        }
        else {
          FUN_00340fb0(1,pvVar11);
          local_78 = pvVar11;
        }
      }
      pvVar15 = local_78;
      auVar21 = (**(code **)(*(long *)pFVar13 + 0x298))(pFVar13,0);
      pCVar9 = auVar21._8_8_;
      pAVar7 = auVar21._0_8_;
      if ((pAVar7 != (Artboard *)0x0) && (*(FocusManager **)(pAVar7 + 0xc40) != param_1)) {
        cleanupFocusTree(pAVar7);
        if (pvVar15 == (void *)0x0) {
          local_90 = (void *)0x0;
          buildFocusTree(pAVar7,param_1,&local_90);
          pCVar9 = extraout_x1_10;
        }
        else {
          FUN_00340fb0(1,pvVar15);
          local_90 = pvVar15;
          buildFocusTree(pAVar7,param_1,&local_90);
          iVar5 = FUN_00340fe0(0xffffffff,pvVar15);
          pCVar9 = extraout_x1_08;
          if (iVar5 == 1) {
            if ((*(byte *)((long)pvVar15 + 0x38) & 1) != 0) {
              operator_delete(*(void **)((long)pvVar15 + 0x48));
            }
            local_70 = (long)pvVar15 + 0x20;
            FUN_0034b070(&local_70);
            pCVar9 = extraout_x1_09;
            operator_delete(pvVar15);
          }
        }
      }
      puVar20 = *(undefined8 **)(pFVar13 + 0x1d0);
      pvVar15 = local_78;
      for (lVar8 = *(long *)(pFVar13 + 0x1d8) - (long)puVar20; local_78 = pvVar15, lVar8 != 0;
          lVar8 = lVar8 + -8) {
        plVar12 = (long *)*puVar20;
        auVar21 = (**(code **)(*plVar12 + 0x18))(plVar12,0x5f);
        pCVar9 = auVar21._8_8_;
        if (((auVar21 & (undefined1  [16])0x1) != (undefined1  [16])0x0) &&
           (lVar14 = plVar12[0x15], lVar14 != 0)) {
          pFVar10 = *(FocusManager **)(lVar14 + 0x2e8);
          pFVar1 = (FocusManager *)(lVar14 + 0x2c8);
          if (pFVar10 != (FocusManager *)0x0) {
            pFVar1 = pFVar10;
          }
          if ((pFVar1 != param_1) && (pFVar10 != param_1)) {
            pAVar7 = *(Artboard **)(lVar14 + 0x10);
            if (pAVar7 == (Artboard *)0x0) {
              *(FocusManager **)(lVar14 + 0x2e8) = param_1;
            }
            else {
              if (*(long *)(pAVar7 + 0xc40) == 0) {
                *(FocusManager **)(lVar14 + 0x2e8) = param_1;
              }
              else {
                cleanupFocusTree(pAVar7);
                pAVar7 = *(Artboard **)(lVar14 + 0x10);
                *(FocusManager **)(lVar14 + 0x2e8) = param_1;
                pCVar9 = extraout_x1_12;
                if (pAVar7 == (Artboard *)0x0) goto LAB_00364bac;
              }
              local_70 = 0;
              buildFocusTree(pAVar7,param_1,&local_70);
              pCVar9 = extraout_x1_13;
            }
          }
        }
LAB_00364bac:
        puVar20 = puVar20 + 1;
        pvVar15 = local_78;
      }
      if ((pvVar15 != (void *)0x0) &&
         (iVar5 = FUN_00340fe0(0xffffffff,pvVar15), pCVar9 = extraout_x1_11, iVar5 == 1)) {
        if ((*(byte *)((long)pvVar15 + 0x38) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar15 + 0x48));
        }
        local_70 = (long)pvVar15 + 0x20;
        FUN_0034b070(&local_70);
        pCVar9 = extraout_x1_07;
        operator_delete(pvVar15);
      }
    }
    puVar19 = *(undefined8 **)(this + 0xb38);
    for (puVar18 = *(undefined8 **)(this + 0xb30); puVar18 != puVar19; puVar18 = puVar18 + 1) {
      pFVar13 = (FocusData *)*puVar18;
      FocusData::findClosestFocusNode(pFVar13,pCVar9);
      if (local_78 == (void *)0x0) {
        if (pvVar11 == (void *)0x0) {
          local_78 = (void *)0x0;
        }
        else {
          FUN_00340fb0(1,pvVar11);
          local_78 = pvVar11;
        }
      }
      pvVar15 = local_78;
      auVar21 = (**(code **)(*(long *)pFVar13 + 0x240))(pFVar13);
      pCVar9 = auVar21._8_8_;
      if (auVar21._0_8_ != 0) {
        uVar6 = 0;
        do {
          pAVar7 = (Artboard *)(**(code **)(*(long *)pFVar13 + 0x248))(pFVar13,uVar6 & 0xffffffff);
          if ((pAVar7 != (Artboard *)0x0) && (*(FocusManager **)(pAVar7 + 0xc40) != param_1)) {
            cleanupFocusTree(pAVar7);
            pvVar15 = local_78;
            if (local_78 == (void *)0x0) {
              local_98 = (void *)0x0;
              buildFocusTree(pAVar7,param_1,&local_98);
            }
            else {
              FUN_00340fb0(1,local_78);
              local_98 = pvVar15;
              buildFocusTree(pAVar7,param_1,&local_98);
              iVar5 = FUN_00340fe0(0xffffffff,pvVar15);
              if (iVar5 == 1) {
                if ((*(byte *)((long)pvVar15 + 0x38) & 1) != 0) {
                  operator_delete(*(void **)((long)pvVar15 + 0x48));
                }
                local_70 = (long)pvVar15 + 0x20;
                FUN_0034b070(&local_70);
                operator_delete(pvVar15);
              }
            }
          }
          lVar8 = ArtboardComponentList::stateMachineInstance
                            ((ArtboardComponentList *)pFVar13,(int)uVar6);
          if (lVar8 != 0) {
            pFVar10 = *(FocusManager **)(lVar8 + 0x2e8);
            pFVar1 = (FocusManager *)(lVar8 + 0x2c8);
            if (pFVar10 != (FocusManager *)0x0) {
              pFVar1 = pFVar10;
            }
            if ((pFVar1 != param_1) && (pFVar10 != param_1)) {
              pAVar7 = *(Artboard **)(lVar8 + 0x10);
              if (pAVar7 == (Artboard *)0x0) {
                *(FocusManager **)(lVar8 + 0x2e8) = param_1;
              }
              else {
                if (*(long *)(pAVar7 + 0xc40) == 0) {
                  *(FocusManager **)(lVar8 + 0x2e8) = param_1;
                }
                else {
                  cleanupFocusTree(pAVar7);
                  pAVar7 = *(Artboard **)(lVar8 + 0x10);
                  *(FocusManager **)(lVar8 + 0x2e8) = param_1;
                  if (pAVar7 == (Artboard *)0x0) goto LAB_00364cc4;
                }
                local_70 = 0;
                buildFocusTree(pAVar7,param_1,&local_70);
              }
            }
          }
LAB_00364cc4:
          uVar6 = uVar6 + 1;
          auVar21 = (**(code **)(*(long *)pFVar13 + 0x240))(pFVar13);
          pCVar9 = auVar21._8_8_;
          pvVar15 = local_78;
        } while (uVar6 < auVar21._0_8_);
      }
      if ((pvVar15 != (void *)0x0) &&
         (iVar5 = FUN_00340fe0(0xffffffff,pvVar15), pCVar9 = extraout_x1_15, iVar5 == 1)) {
        if ((*(byte *)((long)pvVar15 + 0x38) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar15 + 0x48));
        }
        local_70 = (long)pvVar15 + 0x20;
        FUN_0034b070(&local_70);
        pCVar9 = extraout_x1_14;
        operator_delete(pvVar15);
      }
    }
    if ((pvVar11 != (void *)0x0) && (iVar5 = FUN_00340fe0(0xffffffff,pvVar11), iVar5 == 1)) {
      if ((*(byte *)((long)pvVar11 + 0x38) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar11 + 0x48));
      }
      local_70 = (long)pvVar11 + 0x20;
      FUN_0034b070(&local_70);
      if (*(long *)(lVar3 + 0x28) == local_68) {
        operator_delete(pvVar11);
        return;
      }
      goto LAB_00364ed0;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
LAB_00364ed0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00364ed4  rive::Artboard::cleanupFocusTree =====

/* rive::Artboard::cleanupFocusTree() */

void __thiscall rive::Artboard::cleanupFocusTree(Artboard *this)

{
  long lVar1;
  void *pvVar2;
  int iVar3;
  ulong uVar4;
  Artboard *pAVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  FocusManager *pFVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  void *local_60;
  void *local_58;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0xc40) != 0) {
    puVar11 = *(undefined8 **)(this + 0xa60);
    for (puVar10 = *(undefined8 **)(this + 0xa58); puVar10 != puVar11; puVar10 = puVar10 + 1) {
      plVar8 = (long *)*puVar10;
      if ((plVar8 != (long *)0x0) &&
         (uVar4 = (**(code **)(*plVar8 + 0x18))(plVar8,0x28d), (uVar4 & 1) != 0)) {
        FocusData::focusNode();
        pvVar2 = local_58;
        if (local_58 != (void *)0x0) {
          pFVar9 = *(FocusManager **)((long)local_58 + 0x18);
          if (pFVar9 == *(FocusManager **)(this + 0xc40)) {
            FUN_00340fb0(1,local_58);
            local_60 = pvVar2;
            FocusManager::removeChild(pFVar9,&local_60);
            iVar3 = FUN_00340fe0(0xffffffff,pvVar2);
            if (iVar3 == 1) {
              if ((*(byte *)((long)pvVar2 + 0x38) & 1) != 0) {
                operator_delete(*(void **)((long)pvVar2 + 0x48));
              }
              local_50 = (long)pvVar2 + 0x20;
              FUN_0034b070(&local_50);
              operator_delete(pvVar2);
            }
          }
          pvVar2 = local_58;
          if ((local_58 != (void *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,local_58), iVar3 == 1))
          {
            if ((*(byte *)((long)pvVar2 + 0x38) & 1) != 0) {
              operator_delete(*(void **)((long)pvVar2 + 0x48));
            }
            local_50 = (long)pvVar2 + 0x20;
            FUN_0034b070(&local_50);
            operator_delete(pvVar2);
          }
        }
      }
    }
    puVar11 = *(undefined8 **)(this + 0xb20);
    for (puVar10 = *(undefined8 **)(this + 0xb18); puVar10 != puVar11; puVar10 = puVar10 + 1) {
      pAVar5 = (Artboard *)(**(code **)(*(long *)*puVar10 + 0x298))((long *)*puVar10,0);
      if ((pAVar5 != (Artboard *)0x0) && (*(long *)(pAVar5 + 0xc40) == *(long *)(this + 0xc40))) {
        cleanupFocusTree(pAVar5);
      }
    }
    puVar11 = *(undefined8 **)(this + 0xb38);
    for (puVar10 = *(undefined8 **)(this + 0xb30); puVar10 != puVar11; puVar10 = puVar10 + 1) {
      plVar8 = (long *)*puVar10;
      lVar6 = (**(code **)(*plVar8 + 0x240))(plVar8);
      if (lVar6 != 0) {
        uVar4 = 0;
        do {
          pAVar5 = (Artboard *)(**(code **)(*plVar8 + 0x248))(plVar8,uVar4 & 0xffffffff);
          if ((pAVar5 != (Artboard *)0x0) && (*(long *)(pAVar5 + 0xc40) == *(long *)(this + 0xc40)))
          {
            cleanupFocusTree(pAVar5);
          }
          uVar4 = uVar4 + 1;
          uVar7 = (**(code **)(*plVar8 + 0x240))(plVar8);
        } while (uVar4 < uVar7);
      }
    }
    *(undefined8 *)(this + 0xc40) = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003650fc  rive::Artboard::buildFocusTree =====

/* rive::Artboard::buildFocusTree(rive::rcp<rive::FocusNode>) */

void __thiscall rive::Artboard::buildFocusTree(Artboard *this,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  long lVar4;
  void *local_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pvVar3 = (void *)*param_2;
  if ((pvVar3 != (void *)0x0) && (lVar4 = *(long *)((long)pvVar3 + 0x18), lVar4 != 0)) {
    FUN_00340fb0(1,pvVar3);
    local_48 = pvVar3;
    buildFocusTree(this,lVar4,&local_48);
    iVar2 = FUN_00340fe0(0xffffffff,pvVar3);
    if (iVar2 == 1) {
      if ((*(byte *)((long)pvVar3 + 0x38) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar3 + 0x48));
      }
      local_40 = (long)pvVar3 + 0x20;
      FUN_0034b070(&local_40);
      if (*(long *)(lVar1 + 0x28) == local_38) {
        operator_delete(pvVar3);
        return;
      }
      goto LAB_003651d0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_003651d0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003651d4  rive::Artboard::buildSemanticTree =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::Artboard::buildSemanticTree(rive::SemanticManager*, rive::rcp<rive::SemanticNode>) */

void __thiscall
rive::Artboard::buildSemanticTree(Artboard *this,SemanticManager *param_1,long *param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  Artboard *pAVar7;
  SemanticManager *extraout_x1;
  SemanticManager *extraout_x1_00;
  SemanticManager *extraout_x1_01;
  SemanticManager *extraout_x1_02;
  SemanticManager *extraout_x1_03;
  SemanticManager *extraout_x1_04;
  SemanticManager *extraout_x1_05;
  SemanticManager *extraout_x1_06;
  SemanticManager *extraout_x1_07;
  SemanticManager *pSVar8;
  Component *extraout_x1_08;
  SemanticManager *extraout_x1_09;
  SemanticManager *extraout_x1_10;
  SemanticManager *extraout_x1_11;
  long lVar9;
  long lVar10;
  SemanticData *pSVar11;
  long lVar12;
  undefined4 *puVar13;
  byte *pbVar14;
  long *plVar15;
  SemanticData *pSVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined1 auVar20 [16];
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined4 *local_78;
  long local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (param_1 == (SemanticManager *)0x0) {
LAB_003656a4:
    if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  *(SemanticManager **)(this + 0xc48) = param_1;
  lVar10 = *param_3;
  pSVar8 = param_1;
  if (lVar10 != 0) {
    FUN_00340fb0(1,lVar10);
    pSVar8 = extraout_x1;
  }
  lVar9 = lVar10;
  if (*(long *)(this + 0xc38) == 0) goto LAB_0036534c;
  puVar13 = *(undefined4 **)(this + 0xc50);
  if (puVar13 == (undefined4 *)0x0) {
    puVar13 = (undefined4 *)operator_new(0xb8);
    *(undefined2 *)(puVar13 + 0x12) = 0;
    *puVar13 = 1;
    *(undefined2 *)(puVar13 + 0x18) = 0;
    *(undefined8 *)(puVar13 + 3) = 0;
    *(undefined8 *)(puVar13 + 1) = 0;
    *(undefined8 *)(puVar13 + 7) = 0;
    *(undefined8 *)(puVar13 + 5) = 0;
    *(undefined8 *)((long)puVar13 + 0x2a) = 0;
    *(undefined8 *)((long)puVar13 + 0x22) = 0;
    uVar5 = _UNK_0024e258;
    uVar4 = _DAT_0024e250;
    puVar13[0x1e] = 0;
    *(undefined8 *)(puVar13 + 0x21) = uVar5;
    *(undefined8 *)(puVar13 + 0x1f) = uVar4;
    *(undefined8 *)(puVar13 + 0x25) = 0;
    *(undefined8 *)(puVar13 + 0x23) = 0;
    puVar13[0x27] = 0;
    *(undefined4 **)(this + 0xc50) = puVar13;
    *(undefined1 *)(puVar13 + 0x28) = 1;
    *(undefined8 *)(puVar13 + 0x2a) = 0;
    *(Artboard **)(puVar13 + 0x2c) = this;
    local_70 = *param_3;
    if (local_70 != 0) goto LAB_00365244;
LAB_003652c4:
    local_70 = 0;
LAB_003652c8:
    FUN_00340fb0(1,puVar13);
  }
  else {
    local_70 = *param_3;
    if (local_70 == 0) goto LAB_003652c4;
LAB_00365244:
    FUN_00340fb0(1,local_70);
    puVar13 = *(undefined4 **)(this + 0xc50);
    if (puVar13 != (undefined4 *)0x0) goto LAB_003652c8;
  }
  local_78 = puVar13;
  SemanticManager::addChild(param_1,&local_70,&local_78);
  pSVar8 = extraout_x1_00;
  if (local_78 != (undefined4 *)0x0) {
    FUN_0035fa18();
    pSVar8 = extraout_x1_01;
  }
  if (local_70 != 0) {
    FUN_0035fa18();
    pSVar8 = extraout_x1_02;
  }
  lVar9 = *(long *)(this + 0xc50);
  if (lVar9 != 0) {
    pbVar14 = *(byte **)(this + 0xc48);
    if (pbVar14 != (byte *)0x0) {
      FUN_004987d0(pbVar14 + 0x168,*(undefined4 *)(lVar9 + 4),*(undefined4 *)(lVar9 + 4));
      *pbVar14 = *pbVar14 | 4;
      lVar9 = *(long *)(this + 0xc50);
      pSVar8 = extraout_x1_03;
      if (lVar9 == 0) goto LAB_00365340;
    }
    FUN_00340fb0(1,lVar9);
    pSVar8 = extraout_x1_04;
  }
LAB_00365340:
  if (lVar10 != 0) {
    FUN_0035fa18(lVar10);
    pSVar8 = extraout_x1_05;
  }
LAB_0036534c:
  puVar18 = *(undefined8 **)(this + 0xa60);
  for (puVar17 = *(undefined8 **)(this + 0xa58); puVar17 != puVar18; puVar17 = puVar17 + 1) {
    pSVar11 = (SemanticData *)*puVar17;
    if (pSVar11 != (SemanticData *)0x0) {
      auVar20 = (**(code **)(*(long *)pSVar11 + 0x18))(pSVar11,0x29c);
      pSVar8 = auVar20._8_8_;
      if ((auVar20 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
        for (plVar15 = *(long **)(pSVar11 + 0x30); plVar15 != (long *)0x0;
            plVar15 = (long *)plVar15[6]) {
          uVar6 = (**(code **)(*plVar15 + 0x18))(plVar15,2);
          if ((uVar6 & 1) != 0) {
            puVar2 = (undefined8 *)plVar15[0x12];
            for (puVar19 = (undefined8 *)plVar15[0x11]; puVar19 != puVar2; puVar19 = puVar19 + 1) {
              pSVar16 = (SemanticData *)*puVar19;
              uVar6 = (**(code **)(*(long *)pSVar16 + 0x18))(pSVar16,0x29c);
              if ((pSVar16 != pSVar11) && ((uVar6 & 1) != 0)) {
                SemanticData::semanticNode();
                lVar10 = local_80;
                lVar12 = local_80;
                if (local_80 == 0) goto LAB_00365424;
                goto LAB_00365418;
              }
            }
          }
        }
        lVar10 = lVar9;
        lVar12 = lVar9;
        if (lVar9 != 0) {
          FUN_00340fb0(1,lVar9);
          local_80 = lVar9;
LAB_00365418:
          lVar10 = local_80;
          FUN_00340fb0(1,local_80);
          lVar12 = local_80;
        }
LAB_00365424:
        local_80 = lVar12;
        local_88 = lVar10;
        SemanticData::semanticNode();
        SemanticManager::addChild(param_1,&local_88,&local_90);
        if (local_90 != 0) {
          FUN_0035fa18();
        }
        if (local_88 != 0) {
          FUN_0035fa18();
        }
        SemanticData::syncSemanticTreeVisibility(pSVar11);
        pSVar8 = extraout_x1_06;
        if (local_80 != 0) {
          FUN_0035fa18();
          pSVar8 = extraout_x1_07;
        }
      }
    }
  }
  puVar17 = *(undefined8 **)(this + 0xb18);
  puVar18 = *(undefined8 **)(this + 0xb20);
joined_r0x00365480:
  if (puVar17 != puVar18) {
    do {
      pSVar11 = (SemanticData *)*puVar17;
      SemanticData::findClosestSemanticNode(pSVar11,(Component *)pSVar8);
      lVar10 = local_80;
      if (local_80 == 0) {
        if (lVar9 == 0) {
          lVar10 = 0;
          local_80 = 0;
        }
        else {
          FUN_00340fb0(1,lVar9);
          bVar1 = local_80 != 0;
          lVar10 = lVar9;
          local_80 = lVar9;
          if (bVar1) {
            FUN_0035fa18();
          }
        }
      }
      auVar20 = (**(code **)(*(long *)pSVar11 + 0x298))(pSVar11,0);
      pSVar8 = auVar20._8_8_;
      pAVar7 = auVar20._0_8_;
      if ((pAVar7 != (Artboard *)0x0) && (*(SemanticManager **)(pAVar7 + 0xc48) != param_1)) {
        cleanupSemanticTree(pAVar7);
        if (lVar10 == 0) goto LAB_00365664;
        FUN_00340fb0(1,lVar10);
        local_98 = lVar10;
        buildSemanticTree(pAVar7,param_1,&local_98);
        FUN_0035fa18(lVar10);
        pSVar8 = extraout_x1_09;
        lVar10 = local_80;
      }
      if (lVar10 != 0) {
        FUN_0035fa18(lVar10);
        pSVar8 = extraout_x1_10;
      }
      puVar17 = puVar17 + 1;
      if (puVar17 == puVar18) break;
    } while( true );
  }
  puVar18 = *(undefined8 **)(this + 0xb38);
  for (puVar17 = *(undefined8 **)(this + 0xb30); puVar17 != puVar18; puVar17 = puVar17 + 1) {
    pSVar11 = (SemanticData *)*puVar17;
    SemanticData::findClosestSemanticNode(pSVar11,(Component *)pSVar8);
    lVar10 = local_80;
    if (local_80 == 0) {
      if (lVar9 == 0) {
        lVar10 = 0;
        local_80 = 0;
      }
      else {
        FUN_00340fb0(1,lVar9);
        bVar1 = local_80 != 0;
        lVar10 = lVar9;
        local_80 = lVar9;
        if (bVar1) {
          FUN_0035fa18();
        }
      }
    }
    auVar20 = (**(code **)(*(long *)pSVar11 + 0x240))(pSVar11);
    pSVar8 = auVar20._8_8_;
    lVar12 = lVar10;
    if (auVar20._0_8_ != 0) {
      uVar6 = 0;
      do {
        pAVar7 = (Artboard *)(**(code **)(*(long *)pSVar11 + 0x248))(pSVar11,uVar6 & 0xffffffff);
        if ((pAVar7 != (Artboard *)0x0) && (*(SemanticManager **)(pAVar7 + 0xc48) != param_1)) {
          cleanupSemanticTree(pAVar7);
          if (lVar10 == 0) {
            local_a0 = 0;
            buildSemanticTree(pAVar7,param_1,&local_a0);
          }
          else {
            FUN_00340fb0(1,lVar10);
            local_a0 = lVar10;
            buildSemanticTree(pAVar7,param_1,&local_a0);
            FUN_0035fa18(lVar10);
          }
        }
        uVar6 = uVar6 + 1;
        auVar20 = (**(code **)(*(long *)pSVar11 + 0x240))(pSVar11);
        pSVar8 = auVar20._8_8_;
        lVar12 = local_80;
      } while (uVar6 < auVar20._0_8_);
    }
    if (lVar12 != 0) {
      FUN_0035fa18(lVar12);
      pSVar8 = (SemanticManager *)extraout_x1_08;
    }
  }
  if (lVar9 != 0) {
    FUN_0035fa18(lVar9);
  }
  goto LAB_003656a4;
LAB_00365664:
  local_98 = 0;
  buildSemanticTree(pAVar7,param_1,&local_98);
  puVar17 = puVar17 + 1;
  pSVar8 = extraout_x1_11;
  goto joined_r0x00365480;
}


// ===== 003656d8  rive::Artboard::cleanupSemanticTree =====

/* rive::Artboard::cleanupSemanticTree() */

void __thiscall rive::Artboard::cleanupSemanticTree(Artboard *this)

{
  long lVar1;
  Artboard *pAVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  SemanticManager *pSVar9;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0xc48) == 0) goto LAB_003658cc;
  puVar7 = *(undefined8 **)(this + 0xb20);
  for (puVar5 = *(undefined8 **)(this + 0xb18); puVar5 != puVar7; puVar5 = puVar5 + 1) {
    pAVar2 = (Artboard *)(**(code **)(*(long *)*puVar5 + 0x298))((long *)*puVar5,0);
    if ((pAVar2 != (Artboard *)0x0) && (*(long *)(pAVar2 + 0xc48) == *(long *)(this + 0xc48))) {
      cleanupSemanticTree(pAVar2);
    }
  }
  puVar7 = *(undefined8 **)(this + 0xb38);
  for (puVar5 = *(undefined8 **)(this + 0xb30); puVar5 != puVar7; puVar5 = puVar5 + 1) {
    plVar6 = (long *)*puVar5;
    lVar3 = (**(code **)(*plVar6 + 0x240))(plVar6);
    if (lVar3 != 0) {
      uVar8 = 0;
      do {
        pAVar2 = (Artboard *)(**(code **)(*plVar6 + 0x248))(plVar6,uVar8 & 0xffffffff);
        if ((pAVar2 != (Artboard *)0x0) && (*(long *)(pAVar2 + 0xc48) == *(long *)(this + 0xc48))) {
          cleanupSemanticTree(pAVar2);
        }
        uVar8 = uVar8 + 1;
        uVar4 = (**(code **)(*plVar6 + 0x240))(plVar6);
      } while (uVar8 < uVar4);
    }
  }
  puVar7 = *(undefined8 **)(this + 0xa60);
  for (puVar5 = *(undefined8 **)(this + 0xa58); puVar5 != puVar7; puVar5 = puVar5 + 1) {
    plVar6 = (long *)*puVar5;
    if (((plVar6 != (long *)0x0) &&
        (uVar8 = (**(code **)(*plVar6 + 0x18))(plVar6,0x29c), (uVar8 & 1) != 0)) &&
       (plVar6[0x1d] != 0)) {
      SemanticData::semanticNode();
      lVar3 = local_50;
      if (local_50 != 0) {
        pSVar9 = *(SemanticManager **)(local_50 + 0x98);
        if (pSVar9 == *(SemanticManager **)(this + 0xc48)) {
          FUN_00340fb0(1,local_50);
          local_58 = lVar3;
          SemanticManager::removeChild(pSVar9,&local_58);
          FUN_0035fa18(lVar3);
        }
        FUN_0035fa18(lVar3);
      }
    }
  }
  lVar3 = *(long *)(this + 0xc50);
  if (lVar3 == 0) {
    *(undefined8 *)(this + 0xc50) = 0;
  }
  else {
    pSVar9 = *(SemanticManager **)(lVar3 + 0x98);
    if (pSVar9 == *(SemanticManager **)(this + 0xc48)) {
      FUN_00340fb0(1,lVar3);
      local_60 = lVar3;
      SemanticManager::removeChild(pSVar9,&local_60);
      FUN_0035fa18(lVar3);
      lVar3 = *(long *)(this + 0xc50);
      *(undefined8 *)(this + 0xc50) = 0;
      if (lVar3 == 0) goto LAB_003658c8;
    }
    else {
      *(undefined8 *)(this + 0xc50) = 0;
    }
    FUN_0035fa18();
  }
LAB_003658c8:
  *(undefined8 *)(this + 0xc48) = 0;
LAB_003658cc:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003658f8  rive::Artboard::markSemanticBoundaryTransformDirty =====

/* rive::Artboard::markSemanticBoundaryTransformDirty() */

void __thiscall rive::Artboard::markSemanticBoundaryTransformDirty(Artboard *this)

{
  undefined4 uVar1;
  byte *pbVar2;
  
  if ((*(long *)(this + 0xc50) != 0) && (pbVar2 = *(byte **)(this + 0xc48), pbVar2 != (byte *)0x0))
  {
    uVar1 = *(undefined4 *)(*(long *)(this + 0xc50) + 4);
    FUN_004987d0(pbVar2 + 0x168,uVar1,uVar1);
    *pbVar2 = *pbVar2 | 4;
  }
  return;
}


// ===== 0036593c  rive::Artboard::collapseSemanticBoundary =====

/* rive::Artboard::collapseSemanticBoundary(bool) */

void __thiscall rive::Artboard::collapseSemanticBoundary(Artboard *this,bool param_1)

{
  undefined4 uVar1;
  byte bVar2;
  ulong uVar3;
  byte *pbVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  if (*(long *)(this + 0xc48) != 0) {
    if ((param_1) && (*(long *)(this + 0xc50) != 0)) {
      FUN_00365a30();
      return;
    }
    puVar7 = *(undefined8 **)(this + 0xa60);
    for (puVar6 = *(undefined8 **)(this + 0xa58); puVar6 != puVar7; puVar6 = puVar6 + 1) {
      plVar5 = (long *)*puVar6;
      if ((plVar5 != (long *)0x0) &&
         (uVar3 = (**(code **)(*plVar5 + 0x18))(plVar5,0x29c), (uVar3 & 1) != 0)) {
        bVar2 = (**(code **)(*plVar5 + 0x80))(plVar5);
        if ((bool)(bVar2 & 1) != param_1) {
          (**(code **)(*plVar5 + 0x60))(plVar5);
        }
      }
    }
    if (((!param_1) && (*(long *)(this + 0xc50) != 0)) &&
       (pbVar4 = *(byte **)(this + 0xc48), pbVar4 != (byte *)0x0)) {
      uVar1 = *(undefined4 *)(*(long *)(this + 0xc50) + 4);
      FUN_004987d0(pbVar4 + 0x168,uVar1,uVar1);
      *pbVar4 = *pbVar4 | 4;
    }
  }
  return;
}


// ===== 00365a30  FUN_00365a30 =====

void FUN_00365a30(long param_1)

{
  long lVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x18);
  uVar3 = lVar1 - lVar7;
  if (uVar3 == 0) {
    return;
  }
  if (-1 < (long)uVar3) {
    pvVar2 = operator_new(uVar3);
    lVar4 = 0;
    do {
      lVar6 = lVar4;
      lVar4 = *(long *)(lVar7 + lVar6);
      if (lVar4 != 0) {
        FUN_00340fb0(1,lVar4);
      }
      *(long *)((long)pvVar2 + lVar6) = lVar4;
      lVar4 = lVar6 + 8;
    } while (lVar7 + lVar4 != lVar1);
    lVar7 = 0;
    do {
      plVar5 = *(long **)(*(long *)((long)pvVar2 + lVar7) + 0xa8);
      if ((plVar5 != (long *)0x0) &&
         (uVar3 = (**(code **)(*plVar5 + 0x80))(plVar5), (uVar3 & 1) == 0)) {
        (**(code **)(*plVar5 + 0x60))(plVar5,1);
      }
      FUN_00365a30(*(undefined8 *)((long)pvVar2 + lVar7));
      lVar7 = lVar7 + 8;
    } while (lVar4 != lVar7);
    do {
      if (*(long *)((long)pvVar2 + lVar6) != 0) {
        FUN_0035fa18();
      }
      lVar6 = lVar6 + -8;
    } while (lVar6 != -8);
    operator_delete(pvVar2);
    return;
  }
  FUN_00365b34();
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 00365b34  FUN_00365b34 =====

void FUN_00365b34(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 00365b48  rive::Artboard::stateMachineNameAt =====

/* rive::Artboard::stateMachineNameAt(unsigned long) const */

void rive::Artboard::stateMachineNameAt(ulong param_1)

{
  ulong in_x1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((in_x1 < (ulong)(*(long *)(param_1 + 0xaa8) - *(long *)(param_1 + 0xaa0) >> 3)) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0xaa0) + in_x1 * 8), lVar1 != 0)) {
    if ((*(byte *)(lVar1 + 0x10) & 1) == 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x18);
      uVar2 = *(undefined8 *)(lVar1 + 0x10);
      *(undefined8 *)(in_x8 + 0x10) = *(undefined8 *)(lVar1 + 0x20);
      *(undefined8 *)(in_x8 + 8) = uVar3;
      *(undefined8 *)in_x8 = uVar2;
      return;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(in_x8,*(char **)(lVar1 + 0x20),*(ulong *)(lVar1 + 0x18));
    return;
  }
  *(undefined2 *)in_x8 = 0;
  return;
}


// ===== 00365b98  rive::Artboard::stateMachine =====

/* rive::Artboard::stateMachine(unsigned long) const */

undefined8 __thiscall rive::Artboard::stateMachine(Artboard *this,ulong param_1)

{
  if (param_1 < (ulong)(*(long *)(this + 0xaa8) - *(long *)(this + 0xaa0) >> 3)) {
    return *(undefined8 *)(*(long *)(this + 0xaa0) + param_1 * 8);
  }
  return 0;
}


// ===== 00365bbc  rive::Artboard::animation =====

/* rive::Artboard::animation(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) const */

long __thiscall rive::Artboard::animation(Artboard *this,basic_string *param_1)

{
  size_t sVar1;
  size_t sVar2;
  basic_string *__s2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  plVar7 = *(long **)(this + 0xa88);
  plVar8 = *(long **)(this + 0xa90);
  if (plVar7 != plVar8) {
    sVar2 = *(size_t *)(param_1 + 8);
    __s2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      __s2 = param_1 + 1;
      sVar2 = (ulong)((byte)*param_1 >> 1);
    }
    do {
      lVar6 = *plVar7;
      bVar3 = *(byte *)(lVar6 + 0x10);
      sVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        sVar1 = *(size_t *)(lVar6 + 0x18);
      }
      if (sVar1 == sVar2) {
        if ((bVar3 & 1) == 0) {
          if (bVar3 < 2) {
            return lVar6;
          }
          uVar5 = 0;
          while (*(basic_string *)(lVar6 + uVar5 + 0x11) == __s2[uVar5]) {
            uVar5 = uVar5 + 1;
            if (bVar3 >> 1 == uVar5) {
              return lVar6;
            }
          }
        }
        else {
          iVar4 = memcmp(*(void **)(lVar6 + 0x20),__s2,*(size_t *)(lVar6 + 0x18));
          if (iVar4 == 0) {
            return lVar6;
          }
        }
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar8);
  }
  return 0;
}


// ===== 00365c88  rive::Artboard::stateMachine =====

/* rive::Artboard::stateMachine(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) const */

long __thiscall rive::Artboard::stateMachine(Artboard *this,basic_string *param_1)

{
  size_t sVar1;
  size_t sVar2;
  basic_string *__s2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  plVar7 = *(long **)(this + 0xaa0);
  plVar8 = *(long **)(this + 0xaa8);
  if (plVar7 != plVar8) {
    sVar2 = *(size_t *)(param_1 + 8);
    __s2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      __s2 = param_1 + 1;
      sVar2 = (ulong)((byte)*param_1 >> 1);
    }
    do {
      lVar6 = *plVar7;
      bVar3 = *(byte *)(lVar6 + 0x10);
      sVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        sVar1 = *(size_t *)(lVar6 + 0x18);
      }
      if (sVar1 == sVar2) {
        if ((bVar3 & 1) == 0) {
          if (bVar3 < 2) {
            return lVar6;
          }
          uVar5 = 0;
          while (*(basic_string *)(lVar6 + uVar5 + 0x11) == __s2[uVar5]) {
            uVar5 = uVar5 + 1;
            if (bVar3 >> 1 == uVar5) {
              return lVar6;
            }
          }
        }
        else {
          iVar4 = memcmp(*(void **)(lVar6 + 0x20),__s2,*(size_t *)(lVar6 + 0x18));
          if (iVar4 == 0) {
            return lVar6;
          }
        }
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar8);
  }
  return 0;
}


// ===== 00365d54  rive::Artboard::defaultStateMachineIndex =====

/* rive::Artboard::defaultStateMachineIndex() const */

int __thiscall rive::Artboard::defaultStateMachineIndex(Artboard *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x98c);
  if ((ulong)(*(long *)(this + 0xaa8) - *(long *)(this + 0xaa0) >> 3) <= (ulong)(long)iVar1) {
    iVar1 = -1;
  }
  return iVar1;
}


// ===== 00365d70  rive::Artboard::nestedArtboard =====

/* rive::Artboard::nestedArtboard(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) const */

long __thiscall rive::Artboard::nestedArtboard(Artboard *this,basic_string *param_1)

{
  size_t sVar1;
  size_t sVar2;
  basic_string *__s2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  plVar7 = *(long **)(this + 0xb18);
  plVar8 = *(long **)(this + 0xb20);
  if (plVar7 != plVar8) {
    sVar2 = *(size_t *)(param_1 + 8);
    __s2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      __s2 = param_1 + 1;
      sVar2 = (ulong)((byte)*param_1 >> 1);
    }
    do {
      lVar6 = *plVar7;
      bVar3 = *(byte *)(lVar6 + 0x10);
      sVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        sVar1 = *(size_t *)(lVar6 + 0x18);
      }
      if (sVar1 == sVar2) {
        if ((bVar3 & 1) == 0) {
          if (bVar3 < 2) {
            return lVar6;
          }
          uVar5 = 0;
          while (*(basic_string *)(lVar6 + uVar5 + 0x11) == __s2[uVar5]) {
            uVar5 = uVar5 + 1;
            if (bVar3 >> 1 == uVar5) {
              return lVar6;
            }
          }
        }
        else {
          iVar4 = memcmp(*(void **)(lVar6 + 0x20),__s2,*(size_t *)(lVar6 + 0x18));
          if (iVar4 == 0) {
            return lVar6;
          }
        }
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar8);
  }
  return 0;
}


// ===== 00365e3c  rive::Artboard::nestedArtboardAtPath =====

/* rive::Artboard::nestedArtboardAtPath(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

long * __thiscall rive::Artboard::nestedArtboardAtPath(Artboard *this,basic_string *param_1)

{
  ulong uVar1;
  ulong uVar2;
  basic_string *pbVar3;
  basic_string bVar4;
  byte bVar5;
  long lVar6;
  basic_string *__src;
  int iVar7;
  basic_string *pbVar8;
  Artboard *this_00;
  ulong uVar9;
  undefined1 *puVar10;
  char *pcVar11;
  char *pcVar12;
  long *plVar13;
  void *__dest;
  undefined8 *puVar14;
  char *pcVar15;
  undefined8 *puVar16;
  ulong local_98;
  ulong local_90;
  void *local_88;
  ulong local_80;
  ulong uStack_78;
  char *local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  bVar4 = *param_1;
  uVar2 = *(ulong *)(param_1 + 8);
  pbVar3 = *(basic_string **)(param_1 + 0x10);
  uVar1 = uVar2;
  __src = pbVar3;
  if (((byte)bVar4 & 1) == 0) {
    uVar1 = (ulong)((byte)bVar4 >> 1);
    __src = param_1 + 1;
  }
  if (0 < (long)uVar1) {
    pbVar8 = __src;
    uVar9 = uVar1;
    while (pbVar8 = (basic_string *)memchr(pbVar8,0x2f,uVar9), pbVar8 != (basic_string *)0x0) {
      if (*pbVar8 == (basic_string)0x2f) {
        if ((pbVar8 != __src + uVar1) &&
           (uVar9 = (long)pbVar8 - (long)__src, uVar9 != 0xffffffffffffffff)) {
          if (uVar9 <= uVar1) {
            uVar1 = uVar9;
          }
          if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_0031faf0(&local_80);
          }
          if (uVar1 < 0x17) {
            pcVar15 = (char *)((ulong)&local_80 | 1);
            local_80 = CONCAT71(local_80._1_7_,(char)((int)uVar1 << 1));
            if (pbVar8 != __src) goto LAB_003660b0;
          }
          else {
            pcVar15 = (char *)operator_new((uVar1 | 0xf) + 1);
            local_80 = (uVar1 | 0xf) + 2;
            uStack_78 = uVar1;
            local_70 = pcVar15;
LAB_003660b0:
            memmove(pcVar15,__src,uVar1);
          }
          pcVar15[uVar1] = '\0';
          bVar4 = *param_1;
          uVar1 = (ulong)((byte)bVar4 >> 1);
          if (((byte)bVar4 & 1) != 0) {
            uVar1 = *(ulong *)(param_1 + 8);
          }
          if (uVar1 <= uVar9) {
            FUN_00366174();
LAB_0036616c:
                    /* WARNING: Subroutine does not return */
            FUN_0031faf0(&local_98);
          }
          uVar9 = uVar9 + 1;
          pbVar3 = param_1 + 1;
          if (((byte)bVar4 & 1) != 0) {
            pbVar3 = *(basic_string **)(param_1 + 0x10);
          }
          uVar2 = uVar1 - uVar9;
          if (uVar1 <= uVar1 - uVar9) {
            uVar2 = uVar1;
          }
          if (0xffffffffffffffef < uVar2) goto LAB_0036616c;
          if (uVar2 < 0x17) {
            __dest = (void *)((ulong)&local_98 | 1);
            local_98 = CONCAT71(local_98._1_7_,(char)((int)uVar2 << 1));
            if (uVar1 != uVar9) goto LAB_00366144;
          }
          else {
            __dest = operator_new((uVar2 | 0xf) + 1);
            local_98 = (uVar2 | 0xf) + 2;
            local_90 = uVar2;
            local_88 = __dest;
LAB_00366144:
            memmove(__dest,pbVar3 + uVar9,uVar2);
          }
          puVar10 = (undefined1 *)((long)__dest + uVar2);
          goto LAB_00365f48;
        }
        break;
      }
      pbVar8 = pbVar8 + 1;
      uVar9 = (long)(__src + uVar1) - (long)pbVar8;
      if ((long)uVar9 < 1) break;
    }
  }
  if (((byte)bVar4 & 1) == 0) {
    uStack_78 = *(ulong *)(param_1 + 8);
    local_80 = *(ulong *)param_1;
    local_70 = *(char **)(param_1 + 0x10);
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_80,(char *)pbVar3,uVar2);
  }
  local_98 = local_98 & 0xffffffffffffff00;
  puVar10 = (undefined1 *)((ulong)&local_98 | 1);
LAB_00365f48:
  *puVar10 = 0;
  uVar1 = local_80 >> 1 & 0x7f;
  if ((local_80 & 1) != 0) {
    uVar1 = uStack_78;
  }
  if (uVar1 != 0) {
    puVar14 = *(undefined8 **)(this + 0xb18);
    puVar16 = *(undefined8 **)(this + 0xb20);
    if (puVar14 != puVar16) {
      pcVar15 = (char *)((ulong)&local_80 | 1);
      if ((local_80 & 1) != 0) {
        pcVar15 = local_70;
      }
      do {
        plVar13 = (long *)*puVar14;
        bVar5 = *(byte *)(plVar13 + 2);
        uVar9 = (ulong)(bVar5 >> 1);
        uVar2 = uVar9;
        if ((bVar5 & 1) != 0) {
          uVar2 = plVar13[3];
        }
        if (uVar2 == uVar1) {
          if ((bVar5 & 1) == 0) {
            if (bVar5 < 2) {
LAB_00366000:
              uVar1 = local_98 >> 1 & 0x7f;
              if ((local_98 & 1) != 0) {
                uVar1 = local_90;
              }
              if (uVar1 != 0) {
                this_00 = (Artboard *)(**(code **)(*plVar13 + 0x298))(plVar13,0);
                plVar13 = (long *)nestedArtboardAtPath(this_00,(basic_string *)&local_98);
              }
              goto LAB_00366040;
            }
            pcVar11 = (char *)((long)plVar13 + 0x11);
            pcVar12 = pcVar15;
            while (*pcVar11 == *pcVar12) {
              uVar9 = uVar9 - 1;
              pcVar11 = pcVar11 + 1;
              pcVar12 = pcVar12 + 1;
              if (uVar9 == 0) {
                if (plVar13 != (long *)0x0) goto LAB_00366000;
                goto LAB_00366040;
              }
            }
          }
          else {
            iVar7 = memcmp((void *)plVar13[4],pcVar15,plVar13[3]);
            if (iVar7 == 0) goto LAB_00366000;
          }
        }
        puVar14 = puVar14 + 1;
      } while (puVar14 != puVar16);
    }
  }
  plVar13 = (long *)0x0;
LAB_00366040:
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return plVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00366174  FUN_00366174 =====

void FUN_00366174(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00366188("basic_string");
}


// ===== 00366188  FUN_00366188 =====

void FUN_00366188(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  std::__ndk1::__libcpp_verbose_abort
            ("out_of_range was thrown in -fno-exceptions mode with message \"%s\"",param_1);
}


// ===== 003661a0  rive::Artboard::frameOrigin =====

/* rive::Artboard::frameOrigin(bool) */

void __thiscall rive::Artboard::frameOrigin(Artboard *this,bool param_1)

{
  uint uVar1;
  long lVar2;
  
  if (this[0xbe9] != (Artboard)param_1) {
    this[0xbe9] = (Artboard)param_1;
    if ((*(ushort *)(this + 0x60) >> 4 & 1) == 0) {
      *(ushort *)(this + 0x60) = *(ushort *)(this + 0x60) | 0x10;
      (**(code **)(*(long *)this + 0x70))();
      lVar2 = *(long *)(this + 0x80);
      uVar1 = *(uint *)(this + 0x38);
      *(undefined1 *)(lVar2 + 0xc32) = 1;
      *(ushort *)(lVar2 + 0x60) = *(ushort *)(lVar2 + 0x60) | 4;
      if (uVar1 < *(uint *)(lVar2 + 0xbd4)) {
        *(uint *)(lVar2 + 0xbd4) = uVar1;
      }
    }
  }
  return;
}


// ===== 00366218  rive::Artboard::buildDataContext =====

/* rive::Artboard::buildDataContext(rive::rcp<rive::DataContext>) */

void rive::Artboard::buildDataContext(void)

{
  return;
}


// ===== 0036621c  rive::Artboard::volume =====

/* rive::Artboard::volume() const */

undefined4 __thiscall rive::Artboard::volume(Artboard *this)

{
  return *(undefined4 *)(this + 0xc68);
}


// ===== 00366224  rive::Artboard::volume =====

/* rive::Artboard::volume(float) */

void __thiscall rive::Artboard::volume(Artboard *this,float param_1)

{
  long lVar1;
  ulong uVar2;
  Artboard *this_00;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar5 = *(undefined8 **)(this + 0xb48);
  puVar6 = *(undefined8 **)(this + 0xb50);
  *(float *)(this + 0xc68) = param_1;
  for (; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    plVar3 = (long *)*puVar5;
    lVar1 = (**(code **)*plVar3)(plVar3);
    if (lVar1 != 0) {
      uVar4 = 0;
      do {
        this_00 = (Artboard *)(**(code **)(*plVar3 + 8))(plVar3,uVar4 & 0xffffffff);
        if (this_00 != (Artboard *)0x0) {
          volume(this_00,param_1);
        }
        uVar4 = uVar4 + 1;
        uVar2 = (**(code **)*plVar3)(plVar3);
      } while (uVar4 < uVar2);
    }
  }
  return;
}


// ===== 003662d4  rive::Artboard::dataContext =====

/* rive::Artboard::dataContext(rive::rcp<rive::DataContext>) */

void __thiscall rive::Artboard::dataContext(Artboard *this,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = *param_2;
  if (lVar3 == 0) {
    local_40 = 0;
    internalDataContext(this,&local_40);
  }
  else {
    FUN_00340fb0(1,lVar3);
    local_40 = lVar3;
    internalDataContext(this,&local_40);
    iVar2 = FUN_00340fe0(0xffffffff,lVar3);
    if (iVar2 == 1) {
      FUN_003453a8(lVar3);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00366370  rive::Artboard::bindViewModelInstance =====

/* rive::Artboard::bindViewModelInstance(rive::rcp<rive::ViewModelInstance>) */

void __thiscall rive::Artboard::bindViewModelInstance(Artboard *this,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined8 local_48;
  long *plStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)*param_2;
  if (plVar3 == (long *)0x0) {
    local_48 = 0;
    plStack_40 = (long *)0x0;
    bindViewModelInstance(this,&plStack_40,&local_48);
  }
  else {
    FUN_00340fb0(1,(long)plVar3 + 0xa4);
    local_48 = 0;
    plStack_40 = plVar3;
    bindViewModelInstance(this,&plStack_40,&local_48);
    iVar2 = FUN_00340fe0(0xffffffff,(long)plVar3 + 0xa4);
    if (iVar2 == 1) {
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Could not recover jumptable at 0x003663fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 8))(plVar3);
        return;
      }
      goto LAB_00366434;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_00366434:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00366438  rive::Artboard::bindViewModelInstance =====

/* rive::Artboard::bindViewModelInstance(rive::rcp<rive::ViewModelInstance>,
   rive::rcp<rive::DataContext>) */

void __thiscall rive::Artboard::bindViewModelInstance(Artboard *this,long *param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  DataContext *pDVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  ViewModelInstance *this_00;
  long lVar8;
  DataContext *local_58;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar6 = *param_2;
  clearDataContext(this);
  if (lVar6 == 0) {
    puVar5 = *(undefined8 **)(this + 0x9c0);
    for (puVar4 = *(undefined8 **)(this + 0x9b8); puVar4 != puVar5; puVar4 = puVar4 + 1) {
      (**(code **)(*(long *)*puVar4 + 0x80))();
    }
    puVar4 = *(undefined8 **)(this + 0xb48);
    puVar5 = *(undefined8 **)(this + 0xb50);
    *(undefined8 *)(this + 0xa48) = 0;
    for (; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      (**(code **)(*(long *)*puVar4 + 0x28))();
    }
  }
  else {
    pDVar3 = (DataContext *)operator_new(0x18);
    local_50 = (long *)*param_2;
    if (local_50 != (long *)0x0) {
      FUN_00340fb0(1,(long)local_50 + 0xa4);
    }
    DataContext::DataContext(pDVar3,&local_50);
    plVar7 = local_50;
    if ((local_50 != (long *)0x0) &&
       (iVar2 = FUN_00340fe0(0xffffffff,(long)local_50 + 0xa4), iVar2 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
    plVar7 = *(long **)(pDVar3 + 0x10);
    if (plVar7 != (long *)0x0) {
      FUN_00340fb0(1,(long)plVar7 + 0xa4);
      iVar2 = FUN_00340fe0(0xffffffff,(long)plVar7 + 0xa4);
      if (iVar2 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
      this_00 = *(ViewModelInstance **)(pDVar3 + 0x10);
      if (this_00 != (ViewModelInstance *)0x0) {
        FUN_00340fb0(1,this_00 + 0xa4);
      }
      ViewModelInstance::addDependent(this_00,(DataBindContainer *)(this + 0x9b0));
      iVar2 = FUN_00340fe0(0xffffffff,this_00 + 0xa4);
      if (iVar2 == 1) {
        (**(code **)(*(long *)this_00 + 8))(this_00);
      }
    }
    lVar6 = *param_3;
    if (lVar6 != 0) {
      FUN_00340fb0(1,lVar6);
      FUN_00340fb0(1,lVar6);
    }
    lVar8 = *(long *)(pDVar3 + 8);
    *(long *)(pDVar3 + 8) = lVar6;
    if ((lVar8 != 0) && (iVar2 = FUN_00340fe0(0xffffffff,lVar8), iVar2 == 1)) {
      FUN_003453a8(lVar8);
    }
    if ((lVar6 != 0) && (iVar2 = FUN_00340fe0(0xffffffff,lVar6), iVar2 == 1)) {
      FUN_003453a8(lVar6);
    }
    FUN_00340fb0(1,pDVar3);
    local_58 = pDVar3;
    internalDataContext(this,&local_58);
    iVar2 = FUN_00340fe0(0xffffffff,pDVar3);
    if (iVar2 == 1) {
      FUN_003453a8(pDVar3);
    }
    iVar2 = FUN_00340fe0(0xffffffff,pDVar3);
    if (iVar2 == 1) {
      FUN_003453a8(pDVar3);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0036668c  rive::Artboard::isAncestor =====

/* rive::Artboard::isAncestor(rive::Artboard const*) */

undefined8 __thiscall rive::Artboard::isAncestor(Artboard *this,Artboard *param_1)

{
  Artboard *pAVar1;
  long lVar2;
  
  while( true ) {
    if (param_1 != (Artboard *)0x0) {
      pAVar1 = param_1;
      if (param_1[0xbe8] != (Artboard)0x0) {
        pAVar1 = *(Artboard **)(param_1 + 0xc60);
      }
      if (*(Artboard **)(this + 0xc60) == pAVar1) {
        return 1;
      }
    }
    if (*(long **)(this + 0xc38) == (long *)0x0) {
      return 0;
    }
    lVar2 = (**(code **)(**(long **)(this + 0xc38) + 0x40))();
    if (lVar2 == 0) break;
    this = (Artboard *)(**(code **)(**(long **)(this + 0xc38) + 0x40))();
  }
  return 0;
}


// ===== 00366704  rive::Artboard::changed =====

/* rive::Artboard::changed() */

void __thiscall rive::Artboard::changed(Artboard *this)

{
  long lVar1;
  
  if (this[0xc32] != (Artboard)0x0) {
    return;
  }
  while( true ) {
    this[0xc32] = (Artboard)0x1;
    if (*(long **)(this + 0xc38) == (long *)0x0) {
      return;
    }
    lVar1 = (**(code **)(**(long **)(this + 0xc38) + 0x40))();
    if (lVar1 == 0) break;
    this = (Artboard *)(**(code **)(**(long **)(this + 0xc38) + 0x40))();
    if (this[0xc32] != (Artboard)0x0) {
      return;
    }
  }
  return;
}


// ===== 00366768  rive::ArtboardInstance::ArtboardInstance =====

/* rive::ArtboardInstance::ArtboardInstance() */

void __thiscall rive::ArtboardInstance::ArtboardInstance(ArtboardInstance *this)

{
  undefined *puVar1;
  
  LayoutComponent::LayoutComponent((LayoutComponent *)this);
  *(undefined8 *)(this + 0x984) = 0;
  *(undefined8 *)(this + 0x98c) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xbc8) = 0;
  *(undefined8 *)(this + 0x9c0) = 0;
  *(undefined8 *)(this + 0x9b8) = 0;
  *(undefined8 *)(this + 0x9d0) = 0;
  *(undefined8 *)(this + 0x9c8) = 0;
  *(undefined8 *)(this + 0x9e0) = 0;
  *(undefined8 *)(this + 0x9d8) = 0;
  *(undefined8 *)(this + 0x9f0) = 0;
  *(undefined8 *)(this + 0x9e8) = 0;
  *(undefined8 *)(this + 0xa00) = 0;
  *(undefined8 *)(this + 0x9f8) = 0;
  *(undefined8 *)(this + 0xa10) = 0;
  *(undefined8 *)(this + 0xa08) = 0;
  *(undefined8 *)(this + 0xa20) = 0;
  *(undefined8 *)(this + 0xa18) = 0;
  *(undefined8 *)(this + 0xa30) = 0;
  *(undefined8 *)(this + 0xa28) = 0;
  *(undefined8 *)(this + 0xa40) = 0;
  *(undefined8 *)(this + 0xa38) = 0;
  *(undefined8 *)(this + 0xa49) = 0;
  *(undefined8 *)(this + 0xa41) = 0;
  *(undefined8 *)(this + 0xa60) = 0;
  *(undefined8 *)(this + 0xa58) = 0;
  *(undefined8 *)(this + 0xa70) = 0;
  *(undefined8 *)(this + 0xa68) = 0;
  *(undefined8 *)(this + 0xa80) = 0;
  *(undefined8 *)(this + 0xa78) = 0;
  *(undefined8 *)(this + 0xa90) = 0;
  *(undefined8 *)(this + 0xa88) = 0;
  *(undefined8 *)(this + 0xaa0) = 0;
  *(undefined8 *)(this + 0xa98) = 0;
  *(undefined8 *)(this + 0xab0) = 0;
  *(undefined8 *)(this + 0xaa8) = 0;
  *(undefined8 *)(this + 0xac0) = 0;
  *(undefined8 *)(this + 0xab8) = 0;
  *(undefined8 *)(this + 0xad0) = 0;
  *(undefined8 *)(this + 0xac8) = 0;
  *(undefined8 *)(this + 0xae0) = 0;
  *(undefined8 *)(this + 0xad8) = 0;
  *(undefined8 *)(this + 0xaf0) = 0;
  *(undefined8 *)(this + 0xae8) = 0;
  *(undefined8 *)(this + 0xb00) = 0;
  *(undefined8 *)(this + 0xaf8) = 0;
  *(undefined8 *)(this + 0xb10) = 0;
  *(undefined8 *)(this + 0xb08) = 0;
  *(undefined8 *)(this + 0xb20) = 0;
  *(undefined8 *)(this + 0xb18) = 0;
  *(undefined8 *)(this + 0xb30) = 0;
  *(undefined8 *)(this + 0xb28) = 0;
  *(undefined8 *)(this + 0xb40) = 0;
  *(undefined8 *)(this + 0xb38) = 0;
  *(undefined8 *)(this + 0xb50) = 0;
  *(undefined8 *)(this + 0xb48) = 0;
  *(undefined8 *)(this + 0xb60) = 0;
  *(undefined8 *)(this + 0xb58) = 0;
  *(undefined8 *)(this + 0xb70) = 0;
  *(undefined8 *)(this + 0xb68) = 0;
  *(undefined8 *)(this + 0xb80) = 0;
  *(undefined8 *)(this + 0xb78) = 0;
  *(undefined8 *)(this + 0xb90) = 0;
  *(undefined8 *)(this + 0xb88) = 0;
  *(undefined8 *)(this + 0xba0) = 0;
  *(undefined8 *)(this + 0xb98) = 0;
  *(undefined8 *)(this + 0xbb0) = 0;
  *(undefined8 *)(this + 0xba8) = 0;
  *(undefined8 *)(this + 0xbc0) = 0;
  *(undefined8 *)(this + 3000) = 0;
  *(undefined8 *)(this + 0xbdc) = 0;
  *(undefined8 *)(this + 0xbd4) = 0;
  *(undefined8 *)(this + 0xbe1) = 0;
  this[0xbd0] = (ArtboardInstance)0x1;
  this[0xbe9] = (ArtboardInstance)0x1;
  *(undefined8 *)(this + 0xbf8) = 0;
  *(undefined8 *)(this + 0xbf0) = 0;
  *(undefined8 *)(this + 0xc08) = 0;
  *(undefined8 *)(this + 0xc00) = 0;
  *(undefined4 *)(this + 0xc10) = 0x3f800000;
  this[0xc18] = (ArtboardInstance)0x0;
  *(undefined8 *)(this + 0xc28) = 0;
  *(undefined8 *)(this + 0xc20) = 0;
  *(undefined2 *)(this + 0xc30) = 1;
  this[0xc32] = (ArtboardInstance)0x1;
  *(undefined8 *)(this + 0xc60) = 0;
  *(undefined8 *)(this + 0xc40) = 0;
  *(undefined8 *)(this + 0xc38) = 0;
  *(undefined8 *)(this + 0xc50) = 0;
  *(undefined8 *)(this + 0xc48) = 0;
  this[0xc58] = (ArtboardInstance)0x0;
  puVar1 = PTR_vtable_0067cfa0;
  this[0x171] = (ArtboardInstance)0x1;
  *(undefined4 *)(this + 0xc68) = 0x3f800000;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined **)(this + 200) = puVar1 + 0x398;
  *(undefined **)(this + 0x188) = puVar1 + 0x3c0;
  *(undefined **)(this + 400) = puVar1 + 0x3e0;
  *(undefined **)(this + 0x1b8) = puVar1 + 0x430;
  *(undefined **)(this + 0x1c0) = puVar1 + 0x448;
  *(undefined **)(this + 0x1c8) = puVar1 + 0x470;
  *(undefined **)(this + 0x998) = puVar1 + 0x4c8;
  *(undefined **)(this + 0x9a0) = puVar1 + 0x4f0;
  *(undefined **)(this + 0x9a8) = puVar1 + 0x508;
  *(undefined **)(this + 0x9b0) = puVar1 + 0x520;
  *(undefined8 *)(this + 0xc70) = 0;
  return;
}


// ===== 003668a0  rive::ArtboardInstance::~ArtboardInstance =====

/* rive::ArtboardInstance::~ArtboardInstance() */

void __thiscall rive::ArtboardInstance::~ArtboardInstance(ArtboardInstance *this)

{
  ~ArtboardInstance(this);
  operator_delete(this);
  return;
}


// ===== 003668c4  rive::ArtboardInstance::~ArtboardInstance =====

/* non-virtual thunk to rive::ArtboardInstance::~ArtboardInstance() */

void __thiscall rive::ArtboardInstance::~ArtboardInstance(ArtboardInstance *this)

{
  ~ArtboardInstance(this + -400);
  return;
}


// ===== 003668cc  rive::ArtboardInstance::~ArtboardInstance =====

/* non-virtual thunk to rive::ArtboardInstance::~ArtboardInstance() */

void __thiscall rive::ArtboardInstance::~ArtboardInstance(ArtboardInstance *this)

{
  ~ArtboardInstance(this + -400);
  operator_delete(this + -400);
  return;
}


// ===== 003668f4  rive::ArtboardInstance::~ArtboardInstance =====

/* non-virtual thunk to rive::ArtboardInstance::~ArtboardInstance() */

void __thiscall rive::ArtboardInstance::~ArtboardInstance(ArtboardInstance *this)

{
  ~ArtboardInstance(this + -0x1c0);
  return;
}


// ===== 003668fc  rive::ArtboardInstance::~ArtboardInstance =====

/* non-virtual thunk to rive::ArtboardInstance::~ArtboardInstance() */

void __thiscall rive::ArtboardInstance::~ArtboardInstance(ArtboardInstance *this)

{
  ~ArtboardInstance(this + -0x1c0);
  operator_delete(this + -0x1c0);
  return;
}


// ===== 00366924  rive::ArtboardInstance::~ArtboardInstance =====

/* non-virtual thunk to rive::ArtboardInstance::~ArtboardInstance() */

void __thiscall rive::ArtboardInstance::~ArtboardInstance(ArtboardInstance *this)

{
  ~ArtboardInstance(this + -0x998);
  return;
}


// ===== 0036692c  rive::ArtboardInstance::~ArtboardInstance =====

/* non-virtual thunk to rive::ArtboardInstance::~ArtboardInstance() */

void __thiscall rive::ArtboardInstance::~ArtboardInstance(ArtboardInstance *this)

{
  ~ArtboardInstance(this + -0x998);
  operator_delete(this + -0x998);
  return;
}


// ===== 00366954  rive::ArtboardInstance::~ArtboardInstance =====

/* rive::ArtboardInstance::~ArtboardInstance() */

void __thiscall rive::ArtboardInstance::~ArtboardInstance(ArtboardInstance *this)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  File *this_00;
  
  puVar2 = PTR_vtable_0067cfa0;
  this_00 = *(File **)(this + 0xc70);
  puVar1 = PTR_vtable_0067cfa0 + 0x398;
  *(undefined **)this = PTR_vtable_0067cfa0 + 0x10;
  *(undefined **)(this + 200) = puVar1;
  *(undefined **)(this + 0x188) = puVar2 + 0x3c0;
  *(undefined **)(this + 400) = puVar2 + 0x3e0;
  *(undefined **)(this + 0x1b8) = puVar2 + 0x430;
  *(undefined **)(this + 0x1c0) = puVar2 + 0x448;
  *(undefined **)(this + 0x1c8) = puVar2 + 0x470;
  *(undefined **)(this + 0x998) = puVar2 + 0x4c8;
  *(undefined **)(this + 0x9a0) = puVar2 + 0x4f0;
  *(undefined **)(this + 0x9a8) = puVar2 + 0x508;
  *(undefined **)(this + 0x9b0) = puVar2 + 0x520;
  if ((this_00 != (File *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,this_00), iVar3 == 1)) {
    File::~File(this_00);
    operator_delete(this_00);
  }
  Artboard::~Artboard((Artboard *)this);
  return;
}


// ===== 003669f8  rive::ArtboardInstance::file =====

/* rive::ArtboardInstance::file(rive::rcp<rive::File const>) */

void __thiscall rive::ArtboardInstance::file(ArtboardInstance *this,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  File *this_00;
  
  uVar2 = *param_2;
  *param_2 = 0;
  this_00 = *(File **)(this + 0xc70);
  *(undefined8 *)(this + 0xc70) = uVar2;
  if ((this_00 != (File *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,this_00), iVar1 == 1)) {
    File::~File(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}


// ===== 00366a50  rive::ArtboardInstance::animationAt =====

/* rive::ArtboardInstance::animationAt(unsigned long) */

void rive::ArtboardInstance::animationAt(ulong param_1)

{
  LinearAnimationInstance *this;
  ulong in_x1;
  undefined8 *in_x8;
  LinearAnimation *pLVar1;
  
  if ((in_x1 < (ulong)(*(long *)(param_1 + 0xa90) - *(long *)(param_1 + 0xa88) >> 3)) &&
     (pLVar1 = *(LinearAnimation **)(*(long *)(param_1 + 0xa88) + in_x1 * 8),
     pLVar1 != (LinearAnimation *)0x0)) {
    this = (LinearAnimationInstance *)operator_new(0x80);
    LinearAnimationInstance::LinearAnimationInstance(this,pLVar1,(ArtboardInstance *)param_1,1.0);
  }
  else {
    this = (LinearAnimationInstance *)0x0;
  }
  *in_x8 = this;
  return;
}


// ===== 00366ac0  rive::ArtboardInstance::animationNamed =====

/* rive::ArtboardInstance::animationNamed(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void rive::ArtboardInstance::animationNamed(basic_string *param_1)

{
  size_t sVar1;
  size_t sVar2;
  LinearAnimation *__s2;
  LinearAnimation LVar3;
  int iVar4;
  LinearAnimationInstance *this;
  byte *in_x1;
  undefined8 *in_x8;
  ulong uVar5;
  LinearAnimation *pLVar6;
  LinearAnimation *pLVar7;
  LinearAnimation *pLVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  puVar9 = *(undefined8 **)(param_1 + 0xa88);
  puVar10 = *(undefined8 **)(param_1 + 0xa90);
  if (puVar9 != puVar10) {
    sVar2 = *(size_t *)(in_x1 + 8);
    __s2 = *(LinearAnimation **)(in_x1 + 0x10);
    if ((*in_x1 & 1) == 0) {
      __s2 = (LinearAnimation *)(in_x1 + 1);
      sVar2 = (ulong)(*in_x1 >> 1);
    }
    do {
      pLVar8 = (LinearAnimation *)*puVar9;
      LVar3 = pLVar8[0x10];
      uVar5 = (ulong)((byte)LVar3 >> 1);
      sVar1 = uVar5;
      if (((byte)LVar3 & 1) != 0) {
        sVar1 = *(size_t *)(pLVar8 + 0x18);
      }
      if (sVar1 == sVar2) {
        if (((byte)LVar3 & 1) == 0) {
          if ((byte)LVar3 < 2) {
LAB_00366b80:
            this = (LinearAnimationInstance *)operator_new(0x80);
            LinearAnimationInstance::LinearAnimationInstance
                      (this,pLVar8,(ArtboardInstance *)param_1,1.0);
            goto LAB_00366ba4;
          }
          pLVar6 = pLVar8 + 0x11;
          pLVar7 = __s2;
          while (*pLVar6 == *pLVar7) {
            uVar5 = uVar5 - 1;
            pLVar6 = pLVar6 + 1;
            pLVar7 = pLVar7 + 1;
            if (uVar5 == 0) {
              if (pLVar8 != (LinearAnimation *)0x0) goto LAB_00366b80;
              goto LAB_00366ba0;
            }
          }
        }
        else {
          iVar4 = memcmp(*(void **)(pLVar8 + 0x20),__s2,*(size_t *)(pLVar8 + 0x18));
          if (iVar4 == 0) goto LAB_00366b80;
        }
      }
      puVar9 = puVar9 + 1;
    } while (puVar9 != puVar10);
  }
LAB_00366ba0:
  this = (LinearAnimationInstance *)0x0;
LAB_00366ba4:
  *in_x8 = this;
  return;
}


// ===== 00366bc0  rive::ArtboardInstance::stateMachineAt =====

/* rive::ArtboardInstance::stateMachineAt(unsigned long) */

void rive::ArtboardInstance::stateMachineAt(ulong param_1)

{
  StateMachineInstance *this;
  ulong in_x1;
  undefined8 *in_x8;
  StateMachine *pSVar1;
  
  if ((in_x1 < (ulong)(*(long *)(param_1 + 0xaa8) - *(long *)(param_1 + 0xaa0) >> 3)) &&
     (pSVar1 = *(StateMachine **)(*(long *)(param_1 + 0xaa0) + in_x1 * 8),
     pSVar1 != (StateMachine *)0x0)) {
    this = (StateMachineInstance *)operator_new(0x378);
    StateMachineInstance::StateMachineInstance(this,pSVar1,(ArtboardInstance *)param_1);
  }
  else {
    this = (StateMachineInstance *)0x0;
  }
  *in_x8 = this;
  return;
}


// ===== 00366c2c  rive::ArtboardInstance::stateMachineNamed =====

/* rive::ArtboardInstance::stateMachineNamed(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void rive::ArtboardInstance::stateMachineNamed(basic_string *param_1)

{
  size_t sVar1;
  size_t sVar2;
  StateMachine *__s2;
  StateMachine SVar3;
  int iVar4;
  StateMachineInstance *this;
  byte *in_x1;
  undefined8 *in_x8;
  ulong uVar5;
  StateMachine *pSVar6;
  StateMachine *pSVar7;
  StateMachine *pSVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  puVar9 = *(undefined8 **)(param_1 + 0xaa0);
  puVar10 = *(undefined8 **)(param_1 + 0xaa8);
  if (puVar9 != puVar10) {
    sVar2 = *(size_t *)(in_x1 + 8);
    __s2 = *(StateMachine **)(in_x1 + 0x10);
    if ((*in_x1 & 1) == 0) {
      __s2 = (StateMachine *)(in_x1 + 1);
      sVar2 = (ulong)(*in_x1 >> 1);
    }
    do {
      pSVar8 = (StateMachine *)*puVar9;
      SVar3 = pSVar8[0x10];
      uVar5 = (ulong)((byte)SVar3 >> 1);
      sVar1 = uVar5;
      if (((byte)SVar3 & 1) != 0) {
        sVar1 = *(size_t *)(pSVar8 + 0x18);
      }
      if (sVar1 == sVar2) {
        if (((byte)SVar3 & 1) == 0) {
          if ((byte)SVar3 < 2) {
LAB_00366cec:
            this = (StateMachineInstance *)operator_new(0x378);
            StateMachineInstance::StateMachineInstance(this,pSVar8,(ArtboardInstance *)param_1);
            goto LAB_00366d0c;
          }
          pSVar6 = pSVar8 + 0x11;
          pSVar7 = __s2;
          while (*pSVar6 == *pSVar7) {
            uVar5 = uVar5 - 1;
            pSVar6 = pSVar6 + 1;
            pSVar7 = pSVar7 + 1;
            if (uVar5 == 0) {
              if (pSVar8 != (StateMachine *)0x0) goto LAB_00366cec;
              goto LAB_00366d08;
            }
          }
        }
        else {
          iVar4 = memcmp(*(void **)(pSVar8 + 0x20),__s2,*(size_t *)(pSVar8 + 0x18));
          if (iVar4 == 0) goto LAB_00366cec;
        }
      }
      puVar9 = puVar9 + 1;
    } while (puVar9 != puVar10);
  }
LAB_00366d08:
  this = (StateMachineInstance *)0x0;
LAB_00366d0c:
  *in_x8 = this;
  return;
}


// ===== 00366d28  rive::ArtboardInstance::defaultStateMachine =====

/* rive::ArtboardInstance::defaultStateMachine() */

void rive::ArtboardInstance::defaultStateMachine(void)

{
  uint uVar1;
  ArtboardInstance *in_x0;
  StateMachineInstance *this;
  undefined8 *in_x8;
  ulong uVar2;
  StateMachine *pSVar3;
  
  uVar1 = *(uint *)(in_x0 + 0x98c);
  uVar2 = *(long *)(in_x0 + 0xaa8) - *(long *)(in_x0 + 0xaa0) >> 3;
  if (uVar2 <= (ulong)(long)(int)uVar1) {
    uVar1 = 0xffffffff;
  }
  if ((((int)uVar1 < 0) || (uVar2 <= uVar1)) ||
     (pSVar3 = *(StateMachine **)(*(long *)(in_x0 + 0xaa0) + (ulong)uVar1 * 8),
     pSVar3 == (StateMachine *)0x0)) {
    this = (StateMachineInstance *)0x0;
  }
  else {
    this = (StateMachineInstance *)operator_new(0x378);
    StateMachineInstance::StateMachineInstance(this,pSVar3,in_x0);
  }
  *in_x8 = this;
  return;
}


// ===== 00366da8  rive::ArtboardInstance::defaultScene =====

/* rive::ArtboardInstance::defaultScene() */

void rive::ArtboardInstance::defaultScene(void)

{
  uint uVar1;
  ArtboardInstance *in_x0;
  StateMachineInstance *this;
  undefined8 *in_x8;
  long *plVar2;
  ulong uVar3;
  StateMachine *pSVar4;
  LinearAnimation *pLVar5;
  
  plVar2 = *(long **)(in_x0 + 0xaa0);
  uVar1 = *(uint *)(in_x0 + 0x98c);
  uVar3 = (long)*(long **)(in_x0 + 0xaa8) - (long)plVar2 >> 3;
  if (uVar3 <= (ulong)(long)(int)uVar1) {
    uVar1 = 0xffffffff;
  }
  if (((((int)uVar1 < 0) || (uVar3 <= uVar1)) ||
      (pSVar4 = (StateMachine *)plVar2[uVar1], pSVar4 == (StateMachine *)0x0)) &&
     ((*(long **)(in_x0 + 0xaa8) == plVar2 ||
      (pSVar4 = (StateMachine *)*plVar2, pSVar4 == (StateMachine *)0x0)))) {
    if ((*(undefined8 **)(in_x0 + 0xa90) == *(undefined8 **)(in_x0 + 0xa88)) ||
       (pLVar5 = (LinearAnimation *)**(undefined8 **)(in_x0 + 0xa88),
       pLVar5 == (LinearAnimation *)0x0)) {
      this = (StateMachineInstance *)0x0;
    }
    else {
      this = (StateMachineInstance *)operator_new(0x80);
      LinearAnimationInstance::LinearAnimationInstance
                ((LinearAnimationInstance *)this,pLVar5,in_x0,1.0);
    }
  }
  else {
    this = (StateMachineInstance *)operator_new(0x378);
    StateMachineInstance::StateMachineInstance(this,pSVar4,in_x0);
  }
  *in_x8 = this;
  return;
}


// ===== 00366e6c  rive::ArtboardInstance::input =====

/* rive::ArtboardInstance::input(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
rive::ArtboardInstance::input(ArtboardInstance *this,basic_string *param_1,basic_string *param_2)

{
  long lVar1;
  NestedArtboard *pNVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong local_80;
  ulong uStack_78;
  char *local_70;
  undefined2 local_68 [12];
  ulong local_50;
  ulong uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar4 = (ulong)((byte)*param_2 >> 1);
  if (((byte)*param_2 & 1) != 0) {
    uVar4 = *(ulong *)(param_2 + 8);
  }
  if (uVar4 != 0) {
    pNVar2 = (NestedArtboard *)Artboard::nestedArtboardAtPath((Artboard *)this,param_2);
    if (pNVar2 == (NestedArtboard *)0x0) goto LAB_00366fd4;
    if (((byte)*param_1 & 1) == 0) {
      uStack_78 = *(ulong *)(param_1 + 8);
      local_80 = *(ulong *)param_1;
      local_70 = *(char **)(param_1 + 0x10);
      if ((local_80 & 1) == 0) goto LAB_00366efc;
LAB_00366ed8:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_50,local_70,uStack_78);
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_80,*(char **)(param_1 + 0x10),*(ulong *)(param_1 + 8));
      if ((local_80 & 1) != 0) goto LAB_00366ed8;
LAB_00366efc:
      uStack_48 = uStack_78;
      local_50 = local_80;
      local_40 = local_70;
    }
    local_68[0] = 0;
    lVar3 = NestedArtboard::input(pNVar2,&local_50,local_68);
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if (((lVar3 != 0) && (plVar5 = *(long **)(lVar3 + 0x30), plVar5 != (long *)0x0)) &&
       (uVar4 = (**(code **)(*plVar5 + 0x18))(plVar5,0x5f), (uVar4 & 1) != 0)) {
      pNVar2 = (NestedArtboard *)plVar5[0x15];
      if ((pNVar2 == (NestedArtboard *)0x0) ||
         (pNVar2 = (NestedArtboard *)
                   (**(code **)(*(long *)pNVar2 + 0x70))(pNVar2,*(undefined4 *)(lVar3 + 0x88)),
         pNVar2 == (NestedArtboard *)0x0)) goto LAB_00366fd4;
      plVar5 = *(long **)(lVar3 + 0x30);
      if ((plVar5 != (long *)0x0) &&
         (uVar4 = (**(code **)(*plVar5 + 0x18))(plVar5,0x5f), (uVar4 & 1) != 0)) {
        pNVar2 = (NestedArtboard *)plVar5[0x15];
        if (pNVar2 != (NestedArtboard *)0x0) {
          pNVar2 = (NestedArtboard *)
                   (**(code **)(*(long *)pNVar2 + 0x70))(pNVar2,*(undefined4 *)(lVar3 + 0x88));
        }
        goto LAB_00366fd4;
      }
    }
  }
  pNVar2 = (NestedArtboard *)0x0;
LAB_00366fd4:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pNVar2);
  }
  return;
}


// ===== 00366ffc  rive::ArtboardInstance::getBool =====

/* rive::ArtboardInstance::getBool(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
rive::ArtboardInstance::getBool(ArtboardInstance *this,basic_string *param_1,basic_string *param_2)

{
  long lVar1;
  NestedArtboard *pNVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong local_80;
  ulong uStack_78;
  char *local_70;
  undefined2 local_68 [12];
  ulong local_50;
  ulong uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar4 = (ulong)((byte)*param_2 >> 1);
  if (((byte)*param_2 & 1) != 0) {
    uVar4 = *(ulong *)(param_2 + 8);
  }
  if (uVar4 != 0) {
    pNVar2 = (NestedArtboard *)Artboard::nestedArtboardAtPath((Artboard *)this,param_2);
    if (pNVar2 == (NestedArtboard *)0x0) goto LAB_00367164;
    if (((byte)*param_1 & 1) == 0) {
      uStack_78 = *(ulong *)(param_1 + 8);
      local_80 = *(ulong *)param_1;
      local_70 = *(char **)(param_1 + 0x10);
      if ((local_80 & 1) == 0) goto LAB_0036708c;
LAB_00367068:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_50,local_70,uStack_78);
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_80,*(char **)(param_1 + 0x10),*(ulong *)(param_1 + 8));
      if ((local_80 & 1) != 0) goto LAB_00367068;
LAB_0036708c:
      uStack_48 = uStack_78;
      local_50 = local_80;
      local_40 = local_70;
    }
    local_68[0] = 0;
    lVar3 = NestedArtboard::input(pNVar2,&local_50,local_68);
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if (((lVar3 != 0) && (plVar5 = *(long **)(lVar3 + 0x30), plVar5 != (long *)0x0)) &&
       (uVar4 = (**(code **)(*plVar5 + 0x18))(plVar5,0x5f), (uVar4 & 1) != 0)) {
      pNVar2 = (NestedArtboard *)plVar5[0x15];
      if ((pNVar2 == (NestedArtboard *)0x0) ||
         (pNVar2 = (NestedArtboard *)
                   (**(code **)(*(long *)pNVar2 + 0x70))(pNVar2,*(undefined4 *)(lVar3 + 0x88)),
         pNVar2 == (NestedArtboard *)0x0)) goto LAB_00367164;
      plVar5 = *(long **)(lVar3 + 0x30);
      if ((plVar5 != (long *)0x0) &&
         (uVar4 = (**(code **)(*plVar5 + 0x18))(plVar5,0x5f), (uVar4 & 1) != 0)) {
        pNVar2 = (NestedArtboard *)plVar5[0x15];
        if (pNVar2 != (NestedArtboard *)0x0) {
          pNVar2 = (NestedArtboard *)
                   (**(code **)(*(long *)pNVar2 + 0x70))(pNVar2,*(undefined4 *)(lVar3 + 0x88));
        }
        goto LAB_00367164;
      }
    }
  }
  pNVar2 = (NestedArtboard *)0x0;
LAB_00367164:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pNVar2);
  }
  return;
}


// ===== 0036718c  rive::ArtboardInstance::getNumber =====

/* rive::ArtboardInstance::getNumber(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
rive::ArtboardInstance::getNumber
          (ArtboardInstance *this,basic_string *param_1,basic_string *param_2)

{
  long lVar1;
  NestedArtboard *pNVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong local_80;
  ulong uStack_78;
  char *local_70;
  undefined2 local_68 [12];
  ulong local_50;
  ulong uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar4 = (ulong)((byte)*param_2 >> 1);
  if (((byte)*param_2 & 1) != 0) {
    uVar4 = *(ulong *)(param_2 + 8);
  }
  if (uVar4 != 0) {
    pNVar2 = (NestedArtboard *)Artboard::nestedArtboardAtPath((Artboard *)this,param_2);
    if (pNVar2 == (NestedArtboard *)0x0) goto LAB_003672f4;
    if (((byte)*param_1 & 1) == 0) {
      uStack_78 = *(ulong *)(param_1 + 8);
      local_80 = *(ulong *)param_1;
      local_70 = *(char **)(param_1 + 0x10);
      if ((local_80 & 1) == 0) goto LAB_0036721c;
LAB_003671f8:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_50,local_70,uStack_78);
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_80,*(char **)(param_1 + 0x10),*(ulong *)(param_1 + 8));
      if ((local_80 & 1) != 0) goto LAB_003671f8;
LAB_0036721c:
      uStack_48 = uStack_78;
      local_50 = local_80;
      local_40 = local_70;
    }
    local_68[0] = 0;
    lVar3 = NestedArtboard::input(pNVar2,&local_50,local_68);
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if (((lVar3 != 0) && (plVar5 = *(long **)(lVar3 + 0x30), plVar5 != (long *)0x0)) &&
       (uVar4 = (**(code **)(*plVar5 + 0x18))(plVar5,0x5f), (uVar4 & 1) != 0)) {
      pNVar2 = (NestedArtboard *)plVar5[0x15];
      if ((pNVar2 == (NestedArtboard *)0x0) ||
         (pNVar2 = (NestedArtboard *)
                   (**(code **)(*(long *)pNVar2 + 0x70))(pNVar2,*(undefined4 *)(lVar3 + 0x88)),
         pNVar2 == (NestedArtboard *)0x0)) goto LAB_003672f4;
      plVar5 = *(long **)(lVar3 + 0x30);
      if ((plVar5 != (long *)0x0) &&
         (uVar4 = (**(code **)(*plVar5 + 0x18))(plVar5,0x5f), (uVar4 & 1) != 0)) {
        pNVar2 = (NestedArtboard *)plVar5[0x15];
        if (pNVar2 != (NestedArtboard *)0x0) {
          pNVar2 = (NestedArtboard *)
                   (**(code **)(*(long *)pNVar2 + 0x70))(pNVar2,*(undefined4 *)(lVar3 + 0x88));
        }
        goto LAB_003672f4;
      }
    }
  }
  pNVar2 = (NestedArtboard *)0x0;
LAB_003672f4:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pNVar2);
  }
  return;
}


// ===== 0036731c  rive::ArtboardInstance::getTrigger =====

/* rive::ArtboardInstance::getTrigger(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
rive::ArtboardInstance::getTrigger
          (ArtboardInstance *this,basic_string *param_1,basic_string *param_2)

{
  long lVar1;
  NestedArtboard *pNVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong local_80;
  ulong uStack_78;
  char *local_70;
  undefined2 local_68 [12];
  ulong local_50;
  ulong uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar4 = (ulong)((byte)*param_2 >> 1);
  if (((byte)*param_2 & 1) != 0) {
    uVar4 = *(ulong *)(param_2 + 8);
  }
  if (uVar4 != 0) {
    pNVar2 = (NestedArtboard *)Artboard::nestedArtboardAtPath((Artboard *)this,param_2);
    if (pNVar2 == (NestedArtboard *)0x0) goto LAB_00367484;
    if (((byte)*param_1 & 1) == 0) {
      uStack_78 = *(ulong *)(param_1 + 8);
      local_80 = *(ulong *)param_1;
      local_70 = *(char **)(param_1 + 0x10);
      if ((local_80 & 1) == 0) goto LAB_003673ac;
LAB_00367388:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_50,local_70,uStack_78);
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_80,*(char **)(param_1 + 0x10),*(ulong *)(param_1 + 8));
      if ((local_80 & 1) != 0) goto LAB_00367388;
LAB_003673ac:
      uStack_48 = uStack_78;
      local_50 = local_80;
      local_40 = local_70;
    }
    local_68[0] = 0;
    lVar3 = NestedArtboard::input(pNVar2,&local_50,local_68);
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if (((lVar3 != 0) && (plVar5 = *(long **)(lVar3 + 0x30), plVar5 != (long *)0x0)) &&
       (uVar4 = (**(code **)(*plVar5 + 0x18))(plVar5,0x5f), (uVar4 & 1) != 0)) {
      pNVar2 = (NestedArtboard *)plVar5[0x15];
      if ((pNVar2 == (NestedArtboard *)0x0) ||
         (pNVar2 = (NestedArtboard *)
                   (**(code **)(*(long *)pNVar2 + 0x70))(pNVar2,*(undefined4 *)(lVar3 + 0x88)),
         pNVar2 == (NestedArtboard *)0x0)) goto LAB_00367484;
      plVar5 = *(long **)(lVar3 + 0x30);
      if ((plVar5 != (long *)0x0) &&
         (uVar4 = (**(code **)(*plVar5 + 0x18))(plVar5,0x5f), (uVar4 & 1) != 0)) {
        pNVar2 = (NestedArtboard *)plVar5[0x15];
        if (pNVar2 != (NestedArtboard *)0x0) {
          pNVar2 = (NestedArtboard *)
                   (**(code **)(*(long *)pNVar2 + 0x70))(pNVar2,*(undefined4 *)(lVar3 + 0x88));
        }
        goto LAB_00367484;
      }
    }
  }
  pNVar2 = (NestedArtboard *)0x0;
LAB_00367484:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pNVar2);
  }
  return;
}


// ===== 003674ac  rive::ArtboardInstance::getTextRun =====

/* rive::ArtboardInstance::getTextRun(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

TextValueRun * __thiscall
rive::ArtboardInstance::getTextRun
          (ArtboardInstance *this,basic_string *param_1,basic_string *param_2)

{
  ulong uVar1;
  long *plVar2;
  Artboard *this_00;
  TextValueRun *pTVar3;
  
  uVar1 = (ulong)((byte)*param_2 >> 1);
  if (((byte)*param_2 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
  }
  if (((uVar1 != 0) &&
      (plVar2 = (long *)Artboard::nestedArtboardAtPath((Artboard *)this,param_2),
      plVar2 != (long *)0x0)) &&
     (this_00 = (Artboard *)(**(code **)(*plVar2 + 0x298))(plVar2,0), this_00 != (Artboard *)0x0)) {
    pTVar3 = Artboard::find<rive::TextValueRun>(this_00,param_1);
    return pTVar3;
  }
  return (TextValueRun *)0x0;
}


// ===== 00367514  rive::AdvancingComponent::from =====

/* rive::AdvancingComponent::from(rive::Core*) */

Core * rive::AdvancingComponent::from(Core *param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x10))();
  uVar1 = uVar1 & 0xffff;
  if (0x22e < uVar1) {
    if (uVar1 < 0x275) {
      if (uVar1 == 0x22f) goto LAB_00367598;
      if (uVar1 == 0x239) {
        return param_1 + 0x1a8;
      }
      if (uVar1 != 0x25b) {
        return (Core *)0x0;
      }
    }
    else {
      if (uVar1 == 0x275) {
        return param_1 + 0x158;
      }
      if (uVar1 != 0x27d) {
        if (uVar1 == 0x280) {
          return param_1 + 0x120;
        }
        return (Core *)0x0;
      }
    }
    return param_1 + 0x1f0;
  }
  if (0x1c2 < uVar1) {
    if (1 < uVar1 - 0x1c3) {
      if (uVar1 == 0x209) {
        return param_1 + 0xb8;
      }
      return (Core *)0x0;
    }
LAB_00367598:
    return param_1 + 0x188;
  }
  if (uVar1 != 1) {
    if (uVar1 == 0x5c) goto LAB_00367598;
    if (uVar1 != 0x199) {
      return (Core *)0x0;
    }
  }
  return param_1 + 0x1b8;
}


// ===== 003675f0  rive::ArtboardComponentList::ArtboardComponentList =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::ArtboardComponentList::ArtboardComponentList() */

void __thiscall rive::ArtboardComponentList::ArtboardComponentList(ArtboardComponentList *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar3 = _UNK_00281c00;
  uVar2 = _DAT_00281bf8;
  uVar1 = DAT_0024e658;
  *(undefined8 *)(this + 0x120) = _UNK_00281c00;
  *(undefined8 *)(this + 0x118) = uVar2;
  *(undefined2 *)(this + 0x60) = 0xfffe;
  *(undefined8 *)(this + 0x134) = 3;
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined2 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0xa0) = 0x3f800000;
  *(undefined8 *)(this + 0xb4) = 0;
  *(undefined8 *)(this + 0xac) = uVar3;
  *(undefined8 *)(this + 0xa4) = uVar2;
  *(undefined8 *)(this + 0xbc) = uVar1;
  *(undefined4 *)(this + 0xc4) = 0x3f800000;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xd8) = uVar3;
  *(undefined8 *)(this + 0xd0) = uVar2;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  this[0x130] = (ArtboardComponentList)0x0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  this[0x170] = (ArtboardComponentList)0x1;
  *(undefined4 *)(this + 0x174) = 0xffffffff;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  puVar4 = PTR_vtable_0067cfc0;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined4 *)(this + 0x238) = 0x3f800000;
  *(undefined8 *)(this + 0x248) = 0;
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined8 *)(this + 600) = 0;
  *(undefined8 *)(this + 0x250) = 0;
  *(undefined **)this = puVar4 + 0x10;
  *(undefined **)(this + 200) = puVar4 + 0x3a8;
  *(undefined **)(this + 0x178) = puVar4 + 0x3d0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined **)(this + 0x188) = puVar4 + 0x478;
  *(undefined **)(this + 400) = puVar4 + 0x490;
  *(undefined **)(this + 0x198) = puVar4 + 0x4a8;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined **)(this + 0x1c8) = puVar4 + 0x578;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined8 *)(this + 0x1e8) = 0;
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined8 *)(this + 0x230) = 0;
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x270) = 0;
  *(undefined8 *)(this + 0x268) = 0;
  *(undefined8 *)(this + 0x280) = 0;
  *(undefined8 *)(this + 0x278) = 0;
  *(undefined8 *)(this + 0x2c0) = 0;
  *(undefined8 *)(this + 0x2b8) = 0;
  *(undefined8 *)(this + 0x2d0) = 0;
  *(undefined8 *)(this + 0x2c8) = 0;
  *(undefined8 *)(this + 0x310) = 0;
  *(undefined8 *)(this + 0x308) = 0;
  *(undefined8 *)(this + 800) = 0;
  *(undefined8 *)(this + 0x318) = 0;
  *(undefined **)(this + 0x1b8) = puVar4 + 0x500;
  *(undefined **)(this + 0x1c0) = puVar4 + 0x518;
  *(undefined4 *)(this + 0x260) = 0x3f800000;
  *(undefined4 *)(this + 0x288) = 0x3f800000;
  *(undefined8 *)(this + 0x298) = 0;
  *(undefined8 *)(this + 0x290) = 0;
  *(undefined8 *)(this + 0x2a8) = 0;
  *(undefined8 *)(this + 0x2a0) = 0;
  *(undefined4 *)(this + 0x2b0) = 0x3f800000;
  *(undefined4 *)(this + 0x2d8) = 0x3f800000;
  *(undefined8 *)(this + 0x2e8) = 0;
  *(undefined8 *)(this + 0x2e0) = 0;
  *(undefined8 *)(this + 0x2f8) = 0;
  *(undefined8 *)(this + 0x2f0) = 0;
  *(undefined4 *)(this + 0x300) = 0x3f800000;
  *(undefined4 *)(this + 0x328) = 0x3f800000;
  *(undefined8 *)(this + 0x348) = 0;
  *(undefined8 *)(this + 0x340) = 0;
  *(undefined8 *)(this + 0x358) = 0;
  *(undefined8 *)(this + 0x350) = 0;
  *(undefined8 *)(this + 0x368) = 0;
  *(undefined8 *)(this + 0x360) = 0;
  *(undefined8 *)(this + 0x378) = 0;
  *(undefined8 *)(this + 0x370) = 0;
  *(undefined8 *)(this + 0x338) = 0;
  *(undefined8 *)(this + 0x330) = 0;
  *(undefined8 *)(this + 0x388) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x398) = 0;
  *(undefined8 *)(this + 0x390) = 0;
  *(undefined8 *)(this + 0x3a8) = 0;
  *(undefined8 *)(this + 0x3a0) = 0;
  *(undefined4 *)(this + 0x3b0) = 0x3f800000;
  *(undefined8 *)(this + 0x3c0) = 0;
  *(undefined8 *)(this + 0x3b8) = 0;
  *(undefined8 *)(this + 0x3d0) = 0;
  *(undefined8 *)(this + 0x3c8) = 0;
  *(undefined4 *)(this + 0x3d8) = 0x3f800000;
  *(undefined8 *)(this + 1000) = 0;
  *(undefined8 *)(this + 0x3e0) = 0;
  *(undefined8 *)(this + 0x3f8) = 0;
  *(undefined8 *)(this + 0x3f0) = 0;
  *(undefined4 *)(this + 0x400) = 0x3f800000;
  *(undefined4 *)(this + 0x408) = 0;
  *(undefined8 *)(this + 0x440) = 0;
  *(undefined8 *)(this + 0x438) = 0;
  *(undefined8 *)(this + 0x430) = 0;
  *(undefined8 *)(this + 0x428) = 0;
  *(undefined8 *)(this + 0x420) = 0;
  *(undefined8 *)(this + 0x418) = 0;
  *(undefined8 *)(this + 0x410) = 0;
  *(undefined4 *)(this + 0x448) = 0x3f800000;
  return;
}


// ===== 00367780  rive::ArtboardComponentList::~ArtboardComponentList =====

/* rive::ArtboardComponentList::~ArtboardComponentList() */

void __thiscall rive::ArtboardComponentList::~ArtboardComponentList(ArtboardComponentList *this)

{
  ~ArtboardComponentList(this);
  operator_delete(this);
  return;
}


// ===== 003677a4  FUN_003677a4 =====

undefined8 FUN_003677a4(void)

{
  return 0x22f;
}


// ===== 003677ac  FUN_003677ac =====

undefined8 FUN_003677ac(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 & 0xffff;
  if ((((0x26 < uVar1) || ((1L << ((ulong)param_2 & 0x3f) & 0x4000002c04U) == 0)) && (uVar1 != 0x5b)
      ) && (uVar1 != 0x22f)) {
    return 0;
  }
  return 1;
}


// ===== 003677f4  FUN_003677f4 =====

undefined8 FUN_003677f4(long param_1,ushort param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  undefined4 uVar10;
  
  if (0x16 < param_2) {
    if (param_2 == 0x17) {
      uVar9 = 0;
      uVar4 = 0;
      pbVar7 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar7) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_00367974;
        }
        pbVar8 = pbVar7 + 1;
        bVar1 = *pbVar7;
        uVar2 = uVar9 & 0x3f;
        uVar9 = (ulong)(((uint)uVar9 & 0xff) + 7);
        uVar4 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar4;
        pbVar7 = pbVar8;
      } while ((char)bVar1 < '\0');
      param_3[2] = (long)pbVar8;
      if (uVar4 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_00367974:
        uVar4 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x134) = (int)uVar4;
      return 1;
    }
    if (param_2 == 0x81) {
      uVar9 = 0;
      uVar4 = 0;
      pbVar7 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar7) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_00367990;
        }
        pbVar8 = pbVar7 + 1;
        bVar1 = *pbVar7;
        uVar2 = uVar9 & 0x3f;
        uVar9 = (ulong)(((uint)uVar9 & 0xff) + 7);
        uVar4 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar4;
        pbVar7 = pbVar8;
      } while ((char)bVar1 < '\0');
      param_3[2] = (long)pbVar8;
      if (uVar4 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_00367990:
        uVar4 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x138) = (int)uVar4;
      return 1;
    }
    if (param_2 == 800) {
      uVar9 = 0;
      uVar4 = 0;
      pbVar7 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar7) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003679ac;
        }
        pbVar8 = pbVar7 + 1;
        bVar1 = *pbVar7;
        uVar2 = uVar9 & 0x3f;
        uVar9 = (ulong)(((uint)uVar9 & 0xff) + 7);
        uVar4 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar4;
        pbVar7 = pbVar8;
      } while ((char)bVar1 < '\0');
      param_3[2] = (long)pbVar8;
      if (uVar4 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003679ac:
        uVar4 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x174) = (int)uVar4;
      return 1;
    }
LAB_00367968:
    uVar3 = FUN_0035ea44();
    return uVar3;
  }
  if (param_2 == 0xd) {
    puVar6 = (undefined4 *)param_3[2];
    puVar5 = (undefined4 *)(*param_3 + param_3[1]);
    if ((long)puVar5 - (long)puVar6 < 4) {
      uVar10 = 0;
      *(undefined1 *)(param_3 + 3) = 1;
    }
    else {
      puVar5 = puVar6 + 1;
      uVar10 = *puVar6;
    }
    *(undefined4 *)(param_1 + 0x110) = uVar10;
  }
  else {
    if (param_2 != 0xe) goto LAB_00367968;
    puVar6 = (undefined4 *)param_3[2];
    puVar5 = (undefined4 *)(*param_3 + param_3[1]);
    if ((long)puVar5 - (long)puVar6 < 4) {
      uVar10 = 0;
      *(undefined1 *)(param_3 + 3) = 1;
    }
    else {
      puVar5 = puVar6 + 1;
      uVar10 = *puVar6;
    }
    *(undefined4 *)(param_1 + 0x114) = uVar10;
  }
  param_3[2] = (long)puVar5;
  return 1;
}


// ===== 003679e8  rive::ArtboardComponentList::clone =====

/* rive::ArtboardComponentList::clone() const */

ArtboardComponentList * __thiscall rive::ArtboardComponentList::clone(ArtboardComponentList *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ArtboardComponentList *this_00;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  this_00 = (ArtboardComponentList *)operator_new(0x450);
  ArtboardComponentList(this_00);
  uVar7 = *(undefined8 *)(this + 0xbc);
  uVar1 = *(undefined4 *)(this + 0x174);
  uVar2 = *(undefined4 *)(this + 0x134);
  uVar3 = *(undefined4 *)(this + 0x138);
  *(undefined8 *)(this_00 + 0x110) = *(undefined8 *)(this + 0x110);
  uVar5 = *(undefined4 *)(this + 0xc4);
  *(undefined8 *)(this_00 + 0xbc) = uVar7;
  uVar6 = *(undefined4 *)(this + 0xa0);
  *(undefined4 *)(this_00 + 0x174) = uVar1;
  *(undefined4 *)(this_00 + 0x134) = uVar2;
  *(undefined4 *)(this_00 + 0x138) = uVar3;
  *(undefined4 *)(this_00 + 0xc4) = uVar5;
  *(undefined4 *)(this_00 + 0xa0) = uVar6;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this_00 + 0x10),(basic_string *)(this + 0x10));
  lVar4 = *(long *)this;
  *(undefined4 *)(this_00 + 0x28) = *(undefined4 *)(this + 0x28);
  uVar7 = (**(code **)(lVar4 + 0x318))(this);
  (**(code **)(*(long *)this_00 + 0x310))(this_00,uVar7);
  return this_00;
}


// ===== 00367a88  rive::ArtboardComponentList::collapse =====

/* rive::ArtboardComponentList::collapse(bool) */

uint __thiscall rive::ArtboardComponentList::collapse(ArtboardComponentList *this,bool param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  Artboard *this_00;
  Component *pCVar6;
  undefined8 *puVar7;
  
  uVar2 = Component::collapse((Component *)this,param_1);
  if ((uVar2 & 1) != 0) {
    puVar1 = *(undefined8 **)(this + 0x90);
    for (puVar7 = *(undefined8 **)(this + 0x88); puVar7 != puVar1; puVar7 = puVar7 + 1) {
      (**(code **)(*(long *)*puVar7 + 0x60))((long *)*puVar7,param_1);
    }
    puVar1 = *(undefined8 **)(this + 0x70);
    for (puVar7 = *(undefined8 **)(this + 0x68); puVar7 != puVar1; puVar7 = puVar7 + 1) {
      pCVar6 = (Component *)*puVar7;
      uVar3 = (**(code **)(*(long *)pCVar6 + 0x18))(pCVar6,0x26);
      if (((uVar3 & 1) != 0) && (*(long *)(pCVar6 + 0x100) != *(long *)(pCVar6 + 0xf8))) {
        Component::addDirt(pCVar6,0x80,1);
      }
    }
    lVar4 = (**(code **)(*(long *)this + 0x240))(this);
    if (lVar4 != 0) {
      uVar3 = 0;
      do {
        this_00 = (Artboard *)(**(code **)(*(long *)this + 0x248))(this,uVar3 & 0xffffffff);
        if (this_00 != (Artboard *)0x0) {
          Artboard::collapseSemanticBoundary(this_00,param_1);
        }
        uVar3 = uVar3 + 1;
        uVar5 = (**(code **)(*(long *)this + 0x240))(this);
      } while (uVar3 < uVar5);
    }
  }
  return uVar2 & 1;
}


// ===== 00367b9c  rive::ArtboardComponentList::update =====

/* rive::ArtboardComponentList::update(rive::ComponentDirt) */

void __thiscall rive::ArtboardComponentList::update(ArtboardComponentList *this,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  byte *pbVar7;
  float fVar8;
  
  uVar1 = param_2 & 0xffff;
  if ((param_2 >> 6 & 1) != 0) {
    (**(code **)(*(long *)this + 200))(this);
  }
  if ((uVar1 >> 7 & 1) != 0) {
    (**(code **)(*(long *)this + 0xd0))(this);
  }
  if ((uVar1 >> 8 & 1) != 0) {
    *(undefined4 *)(this + 0xe8) = *(undefined4 *)(this + 0xa0);
    if (*(long **)(this + 0xf0) != (long *)0x0) {
      fVar8 = (float)(**(code **)(**(long **)(this + 0xf0) + 0xa0))();
      *(float *)(this + 0xe8) = fVar8 * *(float *)(this + 0xe8);
    }
  }
  lVar3 = (**(code **)(*(long *)this + 0x240))(this);
  if (lVar3 != 0) {
    if (((uVar1 >> 7 & 1) != 0) && (lVar3 = (**(code **)(*(long *)this + 0x240))(this), lVar3 != 0))
    {
      uVar6 = 0;
      do {
        lVar3 = (**(code **)(*(long *)this + 0x248))(this,uVar6 & 0xffffffff);
        if (((lVar3 != 0) && (*(long *)(lVar3 + 0xc50) != 0)) &&
           (pbVar7 = *(byte **)(lVar3 + 0xc48), pbVar7 != (byte *)0x0)) {
          uVar2 = *(undefined4 *)(*(long *)(lVar3 + 0xc50) + 4);
          FUN_004987d0(pbVar7 + 0x168,uVar2,uVar2);
          *pbVar7 = *pbVar7 | 4;
        }
        uVar6 = uVar6 + 1;
        uVar4 = (**(code **)(*(long *)this + 0x240))(this);
      } while (uVar6 < uVar4);
    }
    if (((uVar1 >> 8 & 1) != 0) && (lVar3 = (**(code **)(*(long *)this + 0x240))(this), lVar3 != 0))
    {
      uVar6 = 0;
      do {
        plVar5 = (long *)(**(code **)(*(long *)this + 0x248))(this,uVar6 & 0xffffffff);
        if ((plVar5 != (long *)0x0) && (*(float *)(plVar5 + 0x14) != *(float *)(this + 0xe8))) {
          *(float *)(plVar5 + 0x14) = *(float *)(this + 0xe8);
          (**(code **)(*plVar5 + 0x98))();
        }
        uVar6 = uVar6 + 1;
        uVar4 = (**(code **)(*(long *)this + 0x240))(this);
      } while (uVar6 < uVar4);
    }
    if (((uVar1 >> 2 & 1) != 0) && (lVar3 = (**(code **)(*(long *)this + 0x240))(this), lVar3 != 0))
    {
      uVar6 = 0;
      do {
        lVar3 = (**(code **)(*(long *)this + 0x248))(this,uVar6 & 0xffffffff);
        if (lVar3 != 0) {
          Artboard::updatePass(SUB81(lVar3,0));
        }
        uVar6 = uVar6 + 1;
        uVar4 = (**(code **)(*(long *)this + 0x240))(this);
      } while (uVar6 < uVar4);
    }
  }
  return;
}


// ===== 00367d94  rive::ArtboardComponentList::updateConstraints =====

/* rive::ArtboardComponentList::updateConstraints() */

void __thiscall rive::ArtboardComponentList::updateConstraints(ArtboardComponentList *this)

{
  undefined8 *puVar1;
  short sVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  puVar1 = *(undefined8 **)(this + 0x1a8);
  for (puVar5 = *(undefined8 **)(this + 0x1a0); puVar1 != puVar5; puVar5 = puVar5 + 1) {
    (*(code *)**(undefined8 **)*puVar5)((undefined8 *)*puVar5,this + 0x198);
  }
  if ((*(long *)(this + 0x1d8) != *(long *)(this + 0x1d0)) &&
     (uVar3 = (**(code **)(*(long *)this + 0x340))(this), (uVar3 & 1) == 0)) {
    puVar1 = *(undefined8 **)(this + 0x1d8);
    for (puVar5 = *(undefined8 **)(this + 0x1d0); puVar5 != puVar1; puVar5 = puVar5 + 1) {
      (*(code *)**(undefined8 **)*puVar5)((undefined8 *)*puVar5,this + 0x1c8);
    }
  }
  puVar1 = *(undefined8 **)(this + 0x100);
  for (puVar5 = *(undefined8 **)(this + 0xf8); puVar5 != puVar1; puVar5 = puVar5 + 1) {
    plVar4 = (long *)*puVar5;
    sVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
    if (sVar2 != 0x271) {
      (**(code **)(*plVar4 + 0xa0))(plVar4,this);
    }
  }
  return;
}


// ===== 00367e78  rive::ArtboardComponentList::updateWorldTransform =====

/* rive::ArtboardComponentList::updateWorldTransform() */

void __thiscall rive::ArtboardComponentList::updateWorldTransform(ArtboardComponentList *this)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  updateArtboardsWorldTransform();
  lVar2 = *(long *)(this + 0xf0);
  this[0x130] = (ArtboardComponentList)0x1;
  if (lVar2 == 0) {
    *(undefined8 *)(this + 0xac) = *(undefined8 *)(this + 0xd8);
    *(undefined8 *)(this + 0xa4) = *(undefined8 *)(this + 0xd0);
    *(undefined8 *)(this + 0xb4) = *(undefined8 *)(this + 0xe0);
  }
  else {
    fVar7 = (float)((ulong)*(undefined8 *)(this + 0xd4) >> 0x20);
    fVar3 = (float)*(undefined8 *)(this + 0xd4);
    fVar6 = (float)*(undefined8 *)(lVar2 + 0xa4);
    fVar8 = (float)((ulong)*(undefined8 *)(lVar2 + 0xa4) >> 0x20);
    fVar10 = (float)((ulong)*(undefined8 *)(this + 0xe0) >> 0x20);
    fVar4 = (float)*(undefined8 *)(lVar2 + 0xac);
    fVar5 = (float)((ulong)*(undefined8 *)(lVar2 + 0xac) >> 0x20);
    fVar9 = (float)*(undefined8 *)(this + 0xe0);
    uVar1 = *(undefined8 *)(lVar2 + 0xb4);
    *(ulong *)(this + 0xac) =
         CONCAT44(fVar5 * (float)*(undefined8 *)(this + 0xdc) + fVar7 * fVar8,
                  fVar4 * (float)*(undefined8 *)(this + 0xdc) + fVar7 * fVar6);
    *(ulong *)(this + 0xa4) =
         CONCAT44(fVar5 * fVar3 + (float)*(undefined8 *)(this + 0xd0) * fVar8,
                  fVar4 * fVar3 + (float)*(undefined8 *)(this + 0xd0) * fVar6);
    *(ulong *)(this + 0xb4) =
         CONCAT44((float)((ulong)uVar1 >> 0x20) + fVar5 * fVar10 + fVar8 * fVar9,
                  (float)uVar1 + fVar4 * fVar10 + fVar6 * fVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00367f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xc0))(this);
  return;
}


// ===== 00367f18  rive::ArtboardComponentList::draw =====

/* rive::ArtboardComponentList::draw(rive::Renderer*) */

void __thiscall rive::ArtboardComponentList::draw(ArtboardComponentList *this,Renderer *param_1)

{
  long lVar1;
  ulong uVar2;
  Artboard *pAVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  Artboard *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (this[0x170] != (ArtboardComponentList)0x0) {
    (**(code **)(*(long *)param_1 + 0x10))(param_1);
  }
  uVar2 = (**(code **)(*(long *)this + 0x340))(this);
  if ((uVar2 & 1) == 0) {
    (**(code **)(*(long *)param_1 + 0x20))(param_1,this + 0xa4);
    ensureOrderedListIndices(this);
    puVar6 = *(undefined4 **)(this + 0x418);
    for (puVar5 = *(undefined4 **)(this + 0x410); puVar5 != puVar6; puVar5 = puVar5 + 1) {
      pAVar3 = (Artboard *)(**(code **)(*(long *)this + 0x248))(this,*puVar5);
      local_68 = pAVar3;
      if (pAVar3 != (Artboard *)0x0) {
        (**(code **)(*(long *)param_1 + 0x10))(param_1);
        lVar4 = FUN_0036b2dc(this + 0x308,pAVar3,&local_68);
        uStack_58 = *(undefined8 *)(lVar4 + 0x20);
        local_60 = *(undefined8 *)(lVar4 + 0x18);
        local_50 = *(undefined8 *)(lVar4 + 0x28);
        (**(code **)(*(long *)param_1 + 0x20))(param_1,&local_60);
        Artboard::drawInternal(pAVar3,param_1);
        (**(code **)(*(long *)param_1 + 0x18))(param_1);
      }
    }
  }
  else {
    (**(code **)(*(long *)param_1 + 0x20))(param_1,*(long *)(this + 0x30) + 0xa4);
    if ((*(int *)(this + 0x388) != -1) && (*(int *)(this + 0x38c) != -1)) {
      ensureOrderedListIndices(this);
      puVar6 = *(undefined4 **)(this + 0x418);
      for (puVar5 = *(undefined4 **)(this + 0x410); puVar5 != puVar6; puVar5 = puVar5 + 1) {
        pAVar3 = (Artboard *)(**(code **)(*(long *)this + 0x248))(this,*puVar5);
        local_68 = pAVar3;
        if (pAVar3 != (Artboard *)0x0) {
          (**(code **)(*(long *)param_1 + 0x10))(param_1);
          lVar4 = FUN_0036b2dc(this + 0x308,pAVar3,&local_68);
          uStack_58 = *(undefined8 *)(lVar4 + 0x20);
          local_60 = *(undefined8 *)(lVar4 + 0x18);
          local_50 = *(undefined8 *)(lVar4 + 0x28);
          (**(code **)(*(long *)param_1 + 0x20))(param_1,&local_60);
          Artboard::drawInternal(pAVar3,param_1);
          (**(code **)(*(long *)param_1 + 0x18))(param_1);
        }
      }
    }
  }
  if (this[0x170] != (ArtboardComponentList)0x0) {
    (**(code **)(*(long *)param_1 + 0x18))(param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00368140  rive::ArtboardComponentList::hitTest =====

/* rive::ArtboardComponentList::hitTest(rive::HitInfo*, rive::Mat2D const&) */

undefined8 rive::ArtboardComponentList::hitTest(HitInfo *param_1,Mat2D *param_2)

{
  return 0;
}


// ===== 00368148  FUN_00368148 =====

uint FUN_00368148(long param_1)

{
  return (*(uint *)(param_1 + 0x138) | (uint)*(ushort *)(param_1 + 0x60)) & 1;
}


// ===== 0036815c  rive::ArtboardComponentList::willDraw =====

/* rive::ArtboardComponentList::willDraw() */

byte __thiscall rive::ArtboardComponentList::willDraw(ArtboardComponentList *this)

{
  byte bVar1;
  
  bVar1 = (**(code **)(*(long *)this + 0x1e8))();
  return *(long *)(this + 0x1f0) != *(long *)(this + 0x1e8) & (bVar1 ^ 0xff);
}


// ===== 00368194  FUN_00368194 =====

void FUN_00368194(void)

{
  return;
}


// ===== 00368198  rive::ArtboardComponentList::layoutNode =====

/* rive::ArtboardComponentList::layoutNode(int) */

long rive::ArtboardComponentList::layoutNode(int param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (**(code **)(*(long *)(ulong)(uint)param_1 + 0x248))();
  lVar2 = lVar1;
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x1f0);
    *(undefined1 *)(lVar1 + 0xc30) = 0;
  }
  return lVar2;
}


// ===== 003681c4  FUN_003681c4 =====

long FUN_003681c4(long param_1)

{
  return *(long *)(param_1 + 0x1f0) - *(long *)(param_1 + 0x1e8) >> 3;
}


// ===== 003681d4  rive::ArtboardComponentList::artboardInstance =====

/* rive::ArtboardComponentList::artboardInstance(int) */

ulong __thiscall
rive::ArtboardComponentList::artboardInstance(ArtboardComponentList *this,int param_1)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  undefined2 uVar12;
  undefined8 uVar13;
  
  uVar4 = (**(code **)(*(long *)this + 0x340))();
  if ((uVar4 & 1) == 0) {
    if (-1 < param_1) {
      if ((ulong)(uint)param_1 < (ulong)(*(long *)(this + 0x338) - *(long *)(this + 0x330) >> 3)) {
        return *(ulong *)(*(long *)(this + 0x330) + (ulong)(uint)param_1 * 8);
      }
    }
  }
  else if (-1 < param_1) {
    if ((ulong)(uint)param_1 < (ulong)(*(long *)(this + 0x1f0) - *(long *)(this + 0x1e8) >> 3)) {
      plVar11 = *(long **)(*(long *)(this + 0x1e8) + (ulong)(uint)param_1 * 8);
      if (plVar11 != (long *)0x0) {
        uVar4 = FUN_00340fb0(1,(long)plVar11 + 0x14);
      }
      uVar5 = *(ulong *)(this + 0x248);
      if (uVar5 != 0) {
        uVar6 = ((ulong)(uint)((int)plVar11 << 3) + 8 ^ (ulong)plVar11 >> 0x20) *
                -0x622015f714c7d297;
        uVar13 = NEON_cnt(uVar5,1);
        uVar12 = NEON_uaddlv(uVar13,1);
        uVar6 = ((ulong)plVar11 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
        uVar7 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
        uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
        if (uVar7 < 2) {
          uVar8 = uVar6 & uVar5 - 1;
        }
        else {
          uVar8 = uVar6;
          if (uVar5 <= uVar6) {
            uVar8 = 0;
            if (uVar5 != 0) {
              uVar8 = uVar6 / uVar5;
            }
            uVar8 = uVar6 - uVar8 * uVar5;
          }
        }
        plVar9 = *(long **)(*(long *)(this + 0x240) + uVar8 * 8);
        if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
          do {
            uVar10 = plVar9[1];
            if (uVar10 == uVar6) {
              if ((long *)plVar9[2] == plVar11) {
                uVar4 = plVar9[3];
                bVar2 = false;
                goto joined_r0x00368384;
              }
            }
            else {
              if (uVar7 < 2) {
                uVar10 = uVar10 & uVar5 - 1;
              }
              else if (uVar5 <= uVar10) {
                uVar1 = 0;
                if (uVar5 != 0) {
                  uVar1 = uVar10 / uVar5;
                }
                uVar10 = uVar10 - uVar1 * uVar5;
              }
              if (uVar10 != uVar8) break;
            }
            plVar9 = (long *)*plVar9;
          } while (plVar9 != (long *)0x0);
        }
      }
      bVar2 = true;
joined_r0x00368384:
      if ((plVar11 != (long *)0x0) &&
         (iVar3 = FUN_00340fe0(0xffffffff,(long)plVar11 + 0x14), iVar3 == 1)) {
        (**(code **)(*plVar11 + 8))(plVar11);
      }
      if (!bVar2) {
        return uVar4;
      }
    }
  }
  return 0;
}


// ===== 0036838c  rive::ArtboardComponentList::advanceComponent =====

/* rive::ArtboardComponentList::advanceComponent(float, rive::AdvanceFlags) */

uint __thiscall
rive::ArtboardComponentList::advanceComponent
          (float param_1,ArtboardComponentList *this,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  StateMachineInstance *this_00;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar11;
  
  lVar4 = (**(code **)(*(long *)this + 0x240))();
  if (((lVar4 == 0) || (uVar5 = (**(code **)(*(long *)this + 0x80))(this), (uVar5 & 1) != 0)) ||
     (lVar4 = (**(code **)(*(long *)this + 0x240))(this), lVar4 == 0)) {
    uVar9 = 0;
  }
  else {
    uVar5 = 0;
    uVar9 = 0;
    do {
      if ((((param_3 & 1) != 0) &&
          (this_00 = (StateMachineInstance *)stateMachineInstance(this,(int)uVar5),
          this_00 != (StateMachineInstance *)0x0)) &&
         (((param_3 >> 3 & 1) != 0 ||
          (uVar6 = StateMachineInstance::tryChangeState(this_00), (uVar6 & 1) != 0)))) {
        uVar1 = StateMachineInstance::advance(this_00,param_1,(bool)((byte)(param_3 >> 3) & 1));
        uVar9 = uVar1 | uVar9;
      }
      lVar4 = (**(code **)(*(long *)this + 0x248))(this,uVar5 & 0xffffffff);
      if (lVar4 != 0) {
        puVar12 = *(undefined8 **)(lVar4 + 0xbb0);
        if (*(undefined8 **)(lVar4 + 0xba8) == puVar12) {
          uVar1 = 0;
        }
        else {
          uVar1 = 0;
          puVar10 = *(undefined8 **)(lVar4 + 0xba8);
          do {
            puVar11 = puVar10 + 1;
            uVar2 = (*(code *)**(undefined8 **)*puVar10)
                              (param_1,(undefined8 *)*puVar10,param_3 & 0xfffffffb);
            uVar1 = uVar2 | uVar1;
            puVar10 = puVar11;
          } while (puVar11 != puVar12);
        }
        plVar13 = *(long **)(lVar4 + 0x9c0);
        plVar14 = *(long **)(lVar4 + 0x9b8);
        if (plVar13 == plVar14) {
          uVar2 = 0;
        }
        else {
          uVar2 = 0;
          do {
            lVar8 = *plVar14;
            plVar7 = *(long **)(lVar8 + 0x48);
            if (plVar7 == (long *)0x0) {
              uVar3 = 0;
            }
            else {
              uVar3 = 0;
              if ((*(long *)(lVar8 + 0x38) != 0) && (*(char *)(lVar8 + 0x28) == '\0')) {
                uVar3 = (**(code **)(*plVar7 + 0x88))(param_1,plVar7);
              }
            }
            plVar14 = plVar14 + 1;
            uVar2 = uVar3 | uVar2;
          } while (plVar14 != plVar13);
        }
        uVar9 = uVar2 | uVar1 | uVar9;
        if (((*(ushort *)(lVar4 + 0x60) >> 2 & 1) != 0) &&
           ((*(ushort *)(this + 0x60) >> 2 & 1) == 0)) {
          *(ushort *)(this + 0x60) = *(ushort *)(this + 0x60) | 4;
          (**(code **)(*(long *)this + 0x70))(this);
          lVar4 = *(long *)(this + 0x80);
          uVar1 = *(uint *)(this + 0x38);
          *(undefined1 *)(lVar4 + 0xc32) = 1;
          *(ushort *)(lVar4 + 0x60) = *(ushort *)(lVar4 + 0x60) | 4;
          if (uVar1 < *(uint *)(lVar4 + 0xbd4)) {
            *(uint *)(lVar4 + 0xbd4) = uVar1;
          }
        }
      }
      uVar5 = uVar5 + 1;
      uVar6 = (**(code **)(*(long *)this + 0x240))(this);
    } while (uVar5 < uVar6);
  }
  return uVar9 & 1;
}


// ===== 003685a0  rive::ArtboardComponentList::reset =====

/* rive::ArtboardComponentList::reset() */

void __thiscall rive::ArtboardComponentList::reset(ArtboardComponentList *this)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined2 uVar18;
  undefined8 uVar19;
  
  puVar1 = *(ulong **)(this + 0x1e8);
  puVar2 = *(ulong **)(this + 0x1f0);
  do {
    if (puVar1 == puVar2) {
      return;
    }
    uVar7 = *(ulong *)(this + 0x248);
    uVar6 = *puVar1;
    if (uVar7 == 0) {
LAB_003686c4:
      plVar11 = (long *)0x0;
    }
    else {
      uVar19 = NEON_cnt(uVar7,1);
      uVar8 = ((ulong)(uint)((int)uVar6 << 3) + 8 ^ uVar6 >> 0x20) * -0x622015f714c7d297;
      uVar18 = NEON_uaddlv(uVar19,1);
      uVar9 = CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar18) & 0xffffffff;
      uVar8 = (uVar6 >> 0x20 ^ uVar8 >> 0x2f ^ uVar8) * -0x622015f714c7d297;
      uVar8 = (uVar8 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
      if (uVar9 < 2) {
        uVar10 = uVar8 & uVar7 - 1;
      }
      else {
        uVar10 = uVar8;
        if (uVar7 <= uVar8) {
          uVar10 = 0;
          if (uVar7 != 0) {
            uVar10 = uVar8 / uVar7;
          }
          uVar10 = uVar8 - uVar10 * uVar7;
        }
      }
      plVar11 = *(long **)(*(long *)(this + 0x240) + uVar10 * 8);
      if (plVar11 == (long *)0x0) goto LAB_003686c4;
      plVar11 = (long *)*plVar11;
      if (plVar11 != (long *)0x0) {
        do {
          uVar12 = plVar11[1];
          if (uVar12 == uVar8) {
            if (plVar11[2] == uVar6) break;
          }
          else {
            if (uVar9 < 2) {
              uVar12 = uVar12 & uVar7 - 1;
            }
            else if (uVar7 <= uVar12) {
              uVar4 = 0;
              if (uVar7 != 0) {
                uVar4 = uVar12 / uVar7;
              }
              uVar12 = uVar12 - uVar4 * uVar7;
            }
            if (uVar12 != uVar10) goto LAB_003686c4;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
    if (this[0x408] != (ArtboardComponentList)0x0) {
      plVar13 = *(long **)(uVar6 + 0x18);
      if (plVar13 != (long *)0x0) {
        FUN_00340fb0(1,(long)plVar13 + 0xa4);
        puVar3 = (undefined8 *)plVar13[0x16];
        for (puVar16 = (undefined8 *)plVar13[0x15]; puVar16 != puVar3; puVar16 = puVar16 + 1) {
          plVar14 = (long *)*puVar16;
          if (plVar14 != (long *)0x0) {
            FUN_00340fb0(1,(long)plVar14 + 0x8c);
          }
          (**(code **)(*plVar14 + 0xa0))(plVar14);
          iVar5 = FUN_00340fe0(0xffffffff,(long)plVar14 + 0x8c);
          if (iVar5 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14);
          }
        }
      }
      if (((plVar11 != (long *)0x0) && (plVar11[3] != 0)) &&
         (lVar15 = *(long *)(plVar11[3] + 0xbc0), lVar15 != 0)) {
        FUN_00340fb0(1,lVar15);
        plVar14 = *(long **)(lVar15 + 0x10);
        if (plVar14 != (long *)0x0) {
          FUN_00340fb0(1,(long)plVar14 + 0xa4);
          if (plVar14 != plVar13) {
            puVar3 = (undefined8 *)plVar14[0x16];
            for (puVar16 = (undefined8 *)plVar14[0x15]; puVar16 != puVar3; puVar16 = puVar16 + 1) {
              plVar17 = (long *)*puVar16;
              if (plVar17 != (long *)0x0) {
                FUN_00340fb0(1,(long)plVar17 + 0x8c);
              }
              (**(code **)(*plVar17 + 0xa0))(plVar17);
              iVar5 = FUN_00340fe0(0xffffffff,(long)plVar17 + 0x8c);
              if (iVar5 == 1) {
                (**(code **)(*plVar17 + 8))(plVar17);
              }
            }
          }
          iVar5 = FUN_00340fe0(0xffffffff,(long)plVar14 + 0xa4);
          if (iVar5 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14);
          }
        }
        iVar5 = FUN_00340fe0(0xffffffff,lVar15);
        if (iVar5 == 1) {
          FUN_003453a8(lVar15);
        }
      }
      if ((plVar13 != (long *)0x0) &&
         (iVar5 = FUN_00340fe0(0xffffffff,(long)plVar13 + 0xa4), iVar5 == 1)) {
        (**(code **)(*plVar13 + 8))(plVar13);
      }
    }
    if (plVar11 != (long *)0x0) {
      (**(code **)(*(long *)plVar11[3] + 0x358))();
    }
    puVar1 = puVar1 + 1;
  } while( true );
}


// ===== 0036889c  rive::ArtboardComponentList::layoutBounds =====

/* rive::ArtboardComponentList::layoutBounds() */

undefined1  [16] rive::ArtboardComponentList::layoutBounds(void)

{
  return ZEXT816(0);
}


// ===== 003688b0  rive::ArtboardComponentList::layoutBoundsForNode =====

/* rive::ArtboardComponentList::layoutBoundsForNode(int) */

void __thiscall
rive::ArtboardComponentList::layoutBoundsForNode(ArtboardComponentList *this,int param_1)

{
  ulong uVar1;
  long *plVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  
  uVar1 = (**(code **)(*(long *)this + 0x340))();
  if ((uVar1 & 1) == 0) {
    if (param_1 < 0) {
      return;
    }
    uVar1 = (**(code **)(*(long *)this + 0x308))(0,this);
    if (uVar1 <= (uint)param_1) {
      return;
    }
    plVar2 = (long *)(**(code **)(*(long *)this + 0x248))(0,0,0,0,this,(ulong)(uint)param_1);
    (**(code **)(*plVar2 + 0x288))();
    return;
  }
  dVar4 = fmod((double)param_1,
               (double)(ulong)(*(long *)(this + 0x1f0) - *(long *)(this + 0x1e8) >> 3));
  plVar2 = *(long **)(this + 0x30);
  if (plVar2 == (long *)0x0) goto LAB_00368a54;
  uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,0x199);
  plVar2 = *(long **)(this + 0x30);
  if (((uVar1 & 1) == 0) || (plVar2 == (long *)0x0)) {
joined_r0x00368a10:
    if (plVar2 == (long *)0x0) goto LAB_00368a54;
  }
  else {
    uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,0x199);
    plVar2 = *(long **)(this + 0x30);
    if (((uVar1 & 1) == 0) ||
       (((plVar2 == (long *)0x0 || (plVar2[0x3d] == 0)) ||
        ((*(uint *)(plVar2[0x3d] + 0x11c) & 0xfffffffe) == 2)))) goto joined_r0x00368a10;
  }
  (**(code **)(*plVar2 + 0x18))(plVar2,0x199);
LAB_00368a54:
  if (dVar4 != 0.0 && dVar4 < 0.0 == NAN(dVar4)) {
    iVar3 = 1;
    do {
      dVar5 = (double)iVar3;
      iVar3 = iVar3 + 1;
    } while (dVar4 != dVar5 && dVar4 < dVar5 == (NAN(dVar4) || NAN(dVar5)));
  }
  return;
}


// ===== 00368af8  rive::ArtboardComponentList::markHostingLayoutDirty =====

/* rive::ArtboardComponentList::markHostingLayoutDirty(rive::ArtboardInstance*) */

void __thiscall
rive::ArtboardComponentList::markHostingLayoutDirty
          (ArtboardComponentList *this,ArtboardInstance *param_1)

{
  long lVar1;
  ArtboardInstance *pAVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = (**(code **)(*(long *)this + 0x240))();
  if (lVar1 != 0) {
    uVar4 = 0;
    do {
      pAVar2 = (ArtboardInstance *)(**(code **)(*(long *)this + 0x248))(this,uVar4 & 0xffffffff);
      if (pAVar2 != (ArtboardInstance *)0x0 && pAVar2 == param_1) {
        Artboard::markLayoutDirty(*(Artboard **)(this + 0x40),(LayoutComponent *)param_1);
        break;
      }
      uVar4 = uVar4 + 1;
      uVar3 = (**(code **)(*(long *)this + 0x240))(this);
    } while (uVar4 < uVar3);
  }
  Component::addDirt((Component *)this,0x80,1);
  return;
}


// ===== 00368b8c  FUN_00368b8c =====

void FUN_00368b8c(void)

{
  return;
}


// ===== 00368b90  rive::ArtboardComponentList::updateList =====

/* rive::ArtboardComponentList::updateList(std::__ndk1::vector<rive::rcp<rive::ViewModelInstanceListItem>,
   std::__ndk1::allocator<rive::rcp<rive::ViewModelInstanceListItem> > >*) */

void __thiscall rive::ArtboardComponentList::updateList(ArtboardComponentList *this,vector *param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ArtboardComponentList AVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  int iVar7;
  ulong uVar8;
  void *pvVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  ulong *puVar20;
  uint uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined2 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  long *local_80;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  if (param_1 != (vector *)0x0) {
    plVar19 = *(long **)(this + 0x1e8);
    plVar15 = *(long **)param_1;
    if ((long)*(long **)(this + 0x1f0) - (long)plVar19 == *(long *)(param_1 + 8) - (long)plVar15) {
      for (; plVar19 != *(long **)(this + 0x1f0); plVar19 = plVar19 + 1) {
        if (*plVar19 != *plVar15) goto LAB_00368c40;
        plVar15 = plVar15 + 1;
      }
      if (*(long *)(lVar5 + 0x28) == local_78) {
        return;
      }
      goto LAB_003694b4;
    }
  }
LAB_00368c40:
  puVar23 = *(undefined8 **)(this + 0x208);
  puVar22 = *(undefined8 **)(this + 0x200);
  while (puVar23 != puVar22) {
    puVar23 = puVar23 + -1;
    plVar19 = (long *)*puVar23;
    if ((plVar19 != (long *)0x0) &&
       (iVar7 = FUN_00340fe0(0xffffffff,(long)plVar19 + 0x14), iVar7 == 1)) {
      (**(code **)(*plVar19 + 8))(plVar19);
    }
  }
  *(undefined8 **)(this + 0x208) = puVar22;
  FUN_00371548(this + 0x200,*(long *)(this + 0x1e8),*(long *)(this + 0x1f0),
               *(long *)(this + 0x1f0) - *(long *)(this + 0x1e8) >> 3);
  puVar22 = *(undefined8 **)(this + 0x1e8);
  puVar23 = *(undefined8 **)(this + 0x1f0);
  while (puVar23 != puVar22) {
    puVar23 = puVar23 + -1;
    plVar19 = (long *)*puVar23;
    if ((plVar19 != (long *)0x0) &&
       (iVar7 = FUN_00340fe0(0xffffffff,(long)plVar19 + 0x14), iVar7 == 1)) {
      (**(code **)(*plVar19 + 8))(plVar19);
    }
  }
  *(undefined8 **)(this + 0x1f0) = puVar22;
  FUN_00371548(this + 0x1e8,*(long *)param_1,*(long *)(param_1 + 8),
               *(long *)(param_1 + 8) - *(long *)param_1 >> 3);
  this[0x40b] = (ArtboardComponentList)0x0;
  *(undefined8 *)(this + 0x370) = *(undefined8 *)(this + 0x368);
  *(undefined8 *)(this + 0x338) = *(undefined8 *)(this + 0x330);
  *(undefined8 *)(this + 0x350) = *(undefined8 *)(this + 0x348);
  uVar8 = (**(code **)(*(long *)this + 0x340))(this);
  if ((uVar8 & 1) == 0) {
    lVar10 = *(long *)(this + 0x1f0) - *(long *)(this + 0x1e8);
    uVar8 = lVar10 >> 3;
    uVar14 = *(long *)(this + 0x338) - *(long *)(this + 0x330) >> 3;
    if (uVar8 < uVar14 || uVar8 - uVar14 == 0) {
      if (uVar8 < uVar14) {
        *(long *)(this + 0x338) = *(long *)(this + 0x330) + lVar10;
      }
    }
    else {
      FUN_0036fe48(this + 0x330,uVar8 - uVar14,0);
      lVar10 = *(long *)(this + 0x1f0) - *(long *)(this + 0x1e8);
      uVar8 = lVar10 >> 3;
    }
    uVar14 = *(long *)(this + 0x350) - *(long *)(this + 0x348) >> 3;
    if (uVar8 < uVar14 || uVar8 - uVar14 == 0) {
      if (uVar8 < uVar14) {
        *(long *)(this + 0x350) = *(long *)(this + 0x348) + lVar10;
      }
    }
    else {
      FUN_00370088(this + 0x348,uVar8 - uVar14,0);
    }
  }
  plVar19 = *(long **)(this + 0x30);
  if (((plVar19 != (long *)0x0) &&
      (uVar8 = (**(code **)(*plVar19 + 0x18))(plVar19,0x199), (uVar8 & 1) != 0)) &&
     (*(long *)(this + 0x30) != 0)) {
    rive_YGNodeRemoveAllChildren(*(undefined8 *)(*(long *)(this + 0x30) + 0x1f0));
  }
  puVar23 = *(undefined8 **)(this + 0x208);
  for (puVar22 = *(undefined8 **)(this + 0x200); puVar22 != puVar23; puVar22 = puVar22 + 1) {
    plVar19 = (long *)*puVar22;
    if (plVar19 != (long *)0x0) {
      FUN_00340fb0(1,(long)plVar19 + 0x14);
    }
    puVar12 = *(undefined8 **)(this + 0x1f0);
    puVar1 = *(undefined8 **)(this + 0x1e8);
    puVar11 = puVar1;
    for (; (puVar1 != puVar12 && (puVar11 = puVar1, (long *)*puVar1 != plVar19));
        puVar1 = puVar1 + 1) {
      puVar11 = puVar12;
    }
    if (puVar11 == puVar12) {
      if (plVar19 == (long *)0x0) {
        local_80 = (long *)0x0;
        removeArtboard(this,&local_80);
      }
      else {
        FUN_00340fb0(1,(long)plVar19 + 0x14);
        local_80 = plVar19;
        removeArtboard(this,&local_80);
        iVar7 = FUN_00340fe0(0xffffffff,(long)plVar19 + 0x14);
        if (iVar7 == 1) {
          (**(code **)(*plVar19 + 8))(plVar19);
        }
      }
    }
    if ((plVar19 != (long *)0x0) &&
       (iVar7 = FUN_00340fe0(0xffffffff,(long)plVar19 + 0x14), iVar7 == 1)) {
      (**(code **)(*plVar19 + 8))(plVar19);
    }
  }
  puVar20 = *(ulong **)(this + 0x1e8);
  puVar2 = *(ulong **)(this + 0x1f0);
  if (puVar20 != puVar2) {
    uVar21 = 0;
    do {
      plVar19 = *(long **)(*puVar20 + 0x18);
      if (plVar19 != (long *)0x0) {
        FUN_00340fb0(1,(long)plVar19 + 0xa4);
        uVar8 = plVar19[0x1f];
        if (uVar8 != 0) {
          uVar25 = NEON_cnt(uVar8,1);
          uVar24 = NEON_uaddlv(uVar25,1);
          uVar14 = CONCAT62((int6)((ulong)uVar25 >> 0x10),uVar24) & 0xffffffff;
          if (uVar14 < 2) {
            uVar13 = (ulong)((int)uVar8 - 1) & 0xf;
          }
          else if (uVar8 < 0x10) {
            uVar13 = 0;
            if (uVar8 != 0) {
              uVar13 = 0xf / uVar8;
            }
            uVar13 = 0xf - uVar13 * uVar8;
          }
          else {
            uVar13 = 0xf;
          }
          plVar15 = *(long **)(plVar19[0x1e] + uVar13 * 8);
          if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
            do {
              uVar17 = plVar15[1];
              if (uVar17 == 0xf) {
                if ((char)plVar15[2] == '\x0f') {
                  plVar15 = (long *)plVar15[3];
                  if ((plVar15 != (long *)0x0) && (*(uint *)(plVar15 + 0x22) != uVar21)) {
                    *(uint *)(plVar15 + 0x22) = uVar21;
                    (**(code **)(*plVar15 + 0xa8))();
                  }
                  break;
                }
              }
              else {
                if (uVar14 < 2) {
                  uVar17 = uVar17 & uVar8 - 1;
                }
                else if (uVar8 <= uVar17) {
                  uVar16 = 0;
                  if (uVar8 != 0) {
                    uVar16 = uVar17 / uVar8;
                  }
                  uVar17 = uVar17 - uVar16 * uVar8;
                }
                if (uVar17 != uVar13) break;
              }
              plVar15 = (long *)*plVar15;
            } while (plVar15 != (long *)0x0);
          }
        }
      }
      lVar10 = findArtboard(this,(rcp *)puVar20);
      if (lVar10 != 0) {
        puVar22 = *(undefined8 **)(this + 0x370);
        uVar29 = *(undefined4 *)(lVar10 + 0x174);
        uVar28 = *(undefined4 *)(lVar10 + 0x178);
        if (puVar22 < *(undefined8 **)(this + 0x378)) {
          *(undefined4 *)puVar22 = uVar29;
          *(undefined4 *)((long)puVar22 + 4) = uVar28;
          puVar22 = puVar22 + 1;
        }
        else {
          puVar23 = *(undefined8 **)(this + 0x368);
          lVar10 = (long)puVar22 - (long)puVar23 >> 3;
          uVar8 = lVar10 + 1;
          if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00371ef8();
          }
          uVar13 = (long)*(undefined8 **)(this + 0x378) - (long)puVar23;
          uVar14 = (long)uVar13 >> 2;
          if (uVar14 <= uVar8) {
            uVar14 = uVar8;
          }
          if (0x7ffffffffffffff7 < uVar13) {
            uVar14 = 0x1fffffffffffffff;
          }
          if (uVar14 == 0) {
            pvVar9 = (void *)0x0;
          }
          else {
            if (uVar14 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00324008();
            }
            pvVar9 = operator_new(uVar14 << 3);
          }
          puVar1 = (undefined8 *)((long)pvVar9 + lVar10 * 8);
          *(undefined4 *)puVar1 = uVar29;
          *(undefined4 *)((long)puVar1 + 4) = uVar28;
          puVar12 = puVar1;
          puVar11 = puVar22;
          if ((long)puVar22 - (long)puVar23 != 0) {
            uVar8 = ((long)puVar22 - (long)puVar23) - 8;
            if ((0x37 < uVar8) &&
               (0x1f < (ulong)((long)puVar22 + (-((long)puVar22 - (long)puVar23) - (long)pvVar9))))
            {
              puVar12 = puVar1 + -2;
              puVar11 = puVar22 + -2;
              uVar8 = (uVar8 >> 3) + 1;
              uVar17 = uVar8 & 0x3ffffffffffffffc;
              puVar22 = puVar22 + -uVar17;
              uVar13 = uVar17;
              do {
                puVar6 = puVar11 + -1;
                uVar27 = puVar11[-2];
                uVar26 = puVar11[1];
                uVar25 = *puVar11;
                uVar13 = uVar13 - 4;
                puVar11 = puVar11 + -4;
                puVar12[-1] = *puVar6;
                puVar12[-2] = uVar27;
                puVar12[1] = uVar26;
                *puVar12 = uVar25;
                puVar12 = puVar12 + -4;
              } while (uVar13 != 0);
              puVar12 = puVar1 + -uVar17;
              puVar11 = puVar23;
              if (uVar8 == uVar17) goto LAB_00369108;
            }
            do {
              puVar22 = puVar22 + -1;
              puVar12 = puVar12 + -1;
              *puVar12 = *puVar22;
            } while (puVar22 != puVar23);
            puVar11 = *(undefined8 **)(this + 0x368);
          }
LAB_00369108:
          puVar22 = puVar1 + 1;
          *(undefined8 **)(this + 0x368) = puVar12;
          *(undefined8 **)(this + 0x370) = puVar22;
          *(void **)(this + 0x378) = (void *)((long)pvVar9 + uVar14 * 8);
          if (puVar11 != (undefined8 *)0x0) {
            operator_delete(puVar11);
          }
        }
        *(undefined8 **)(this + 0x370) = puVar22;
      }
      uVar8 = *(ulong *)(this + 0x248);
      if (uVar8 == 0) {
LAB_00369200:
        plVar15 = (long *)0x0;
      }
      else {
        uVar14 = *puVar20;
        uVar25 = NEON_cnt(uVar8,1);
        uVar13 = ((ulong)(uint)((int)uVar14 << 3) + 8 ^ uVar14 >> 0x20) * -0x622015f714c7d297;
        uVar24 = NEON_uaddlv(uVar25,1);
        uVar17 = CONCAT62((int6)((ulong)uVar25 >> 0x10),uVar24) & 0xffffffff;
        uVar13 = (uVar14 >> 0x20 ^ uVar13 >> 0x2f ^ uVar13) * -0x622015f714c7d297;
        uVar13 = (uVar13 ^ uVar13 >> 0x2f) * -0x622015f714c7d297;
        if (uVar17 < 2) {
          uVar16 = uVar13 & uVar8 - 1;
        }
        else {
          uVar16 = uVar13;
          if (uVar8 <= uVar13) {
            uVar16 = 0;
            if (uVar8 != 0) {
              uVar16 = uVar13 / uVar8;
            }
            uVar16 = uVar13 - uVar16 * uVar8;
          }
        }
        plVar15 = *(long **)(*(long *)(this + 0x240) + uVar16 * 8);
        if (plVar15 == (long *)0x0) goto LAB_00369200;
        plVar15 = (long *)*plVar15;
        if (plVar15 != (long *)0x0) {
          do {
            uVar18 = plVar15[1];
            if (uVar18 == uVar13) {
              if (plVar15[2] == uVar14) break;
            }
            else {
              if (uVar17 < 2) {
                uVar18 = uVar18 & uVar8 - 1;
              }
              else if (uVar8 <= uVar18) {
                uVar4 = 0;
                if (uVar8 != 0) {
                  uVar4 = uVar18 / uVar8;
                }
                uVar18 = uVar18 - uVar4 * uVar8;
              }
              if (uVar18 != uVar16) goto LAB_00369200;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
      }
      uVar8 = (**(code **)(*(long *)this + 0x340))(this);
      if ((uVar8 & 1) == 0) {
        if (plVar15 == (long *)0x0) {
          createArtboardAt(this,uVar21,false);
        }
        else {
          uVar8 = *(ulong *)(this + 0x270);
          *(long *)(*(long *)(this + 0x330) + (ulong)uVar21 * 8) = plVar15[3];
          if (uVar8 != 0) {
            uVar14 = *puVar20;
            uVar25 = NEON_cnt(uVar8,1);
            uVar13 = ((ulong)(uint)((int)uVar14 << 3) + 8 ^ uVar14 >> 0x20) * -0x622015f714c7d297;
            uVar24 = NEON_uaddlv(uVar25,1);
            uVar17 = CONCAT62((int6)((ulong)uVar25 >> 0x10),uVar24) & 0xffffffff;
            uVar13 = (uVar14 >> 0x20 ^ uVar13 >> 0x2f ^ uVar13) * -0x622015f714c7d297;
            uVar13 = (uVar13 ^ uVar13 >> 0x2f) * -0x622015f714c7d297;
            if (uVar17 < 2) {
              uVar16 = uVar13 & uVar8 - 1;
            }
            else {
              uVar16 = uVar13;
              if (uVar8 <= uVar13) {
                uVar16 = 0;
                if (uVar8 != 0) {
                  uVar16 = uVar13 / uVar8;
                }
                uVar16 = uVar13 - uVar16 * uVar8;
              }
            }
            plVar15 = *(long **)(*(long *)(this + 0x268) + uVar16 * 8);
            if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
              do {
                uVar18 = plVar15[1];
                if (uVar18 == uVar13) {
                  if (plVar15[2] == uVar14) {
                    *(long *)(*(long *)(this + 0x348) + (ulong)uVar21 * 8) = plVar15[3];
                    break;
                  }
                }
                else {
                  if (uVar17 < 2) {
                    uVar18 = uVar18 & uVar8 - 1;
                  }
                  else if (uVar8 <= uVar18) {
                    uVar4 = 0;
                    if (uVar8 != 0) {
                      uVar4 = uVar18 / uVar8;
                    }
                    uVar18 = uVar18 - uVar4 * uVar8;
                  }
                  if (uVar18 != uVar16) break;
                }
                plVar15 = (long *)*plVar15;
              } while (plVar15 != (long *)0x0);
            }
          }
        }
      }
      if ((plVar19 != (long *)0x0) &&
         (iVar7 = FUN_00340fe0(0xffffffff,(long)plVar19 + 0xa4), iVar7 == 1)) {
        (**(code **)(*plVar19 + 8))(plVar19);
      }
      puVar20 = puVar20 + 1;
      uVar21 = uVar21 + 1;
    } while (puVar20 != puVar2);
  }
  computeLayoutBounds(this);
  plVar19 = *(long **)(this + 0x30);
  if (((plVar19 != (long *)0x0) &&
      (uVar8 = (**(code **)(*plVar19 + 0x18))(plVar19,0x199), (uVar8 & 1) != 0)) &&
     (*(LayoutComponent **)(this + 0x30) != (LayoutComponent *)0x0)) {
    LayoutComponent::syncLayoutChildren(*(LayoutComponent **)(this + 0x30));
  }
  (**(code **)(*(long *)this + 0x2f8))(this,0);
  Component::addDirt((Component *)this,0x80,1);
  if ((*(ushort *)(this + 0x60) >> 2 & 1) == 0) {
    *(ushort *)(this + 0x60) = *(ushort *)(this + 0x60) | 4;
    (**(code **)(*(long *)this + 0x70))(this);
    lVar10 = *(long *)(this + 0x80);
    uVar21 = *(uint *)(this + 0x38);
    *(undefined1 *)(lVar10 + 0xc32) = 1;
    *(ushort *)(lVar10 + 0x60) = *(ushort *)(lVar10 + 0x60) | 4;
    if (uVar21 < *(uint *)(lVar10 + 0xbd4)) {
      *(uint *)(lVar10 + 0xbd4) = uVar21;
    }
  }
  plVar19 = *(long **)(this + 0x1e8);
  AVar3 = this[0x40a];
  this[0x40a] = (ArtboardComponentList)0x0;
  for (; plVar19 != *(long **)(this + 0x1f0); plVar19 = plVar19 + 1) {
    if ((*(long *)(*plVar19 + 0x18) != 0) &&
       (lVar10 = *(long *)(*(long *)(*plVar19 + 0x18) + 0x118), lVar10 != 0)) {
      for (plVar15 = *(long **)(lVar10 + 0x30); plVar15 != *(long **)(lVar10 + 0x38);
          plVar15 = plVar15 + 1) {
        if (*(int *)(*plVar15 + 0x28) == 0x10) {
          this[0x40a] = (ArtboardComponentList)0x1;
          goto joined_r0x003694a4;
        }
      }
    }
  }
joined_r0x003694a4:
  if (AVar3 == (ArtboardComponentList)0x0) {
    this[0x40b] = (ArtboardComponentList)0x0;
  }
  if (*(long *)(lVar5 + 0x28) == local_78) {
    syncDrawIndexListeners(this);
    return;
  }
LAB_003694b4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003694b8  rive::ArtboardComponentList::internalDataContext =====

/* rive::ArtboardComponentList::internalDataContext(rive::rcp<rive::DataContext>) */

void __thiscall
rive::ArtboardComponentList::internalDataContext(ArtboardComponentList *this,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  StateMachineInstance *pSVar5;
  Artboard *pAVar6;
  long lVar7;
  long *plVar8;
  long local_68;
  long local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  for (plVar8 = *(long **)(this + 0x250); plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
    lVar3 = *(long *)(plVar8[3] + 0xbc0);
    if (lVar3 != 0) {
      FUN_00340fb0(1,lVar3);
      lVar4 = *param_2;
      if (lVar4 != 0) {
        FUN_00340fb0(1,lVar4);
        FUN_00340fb0(1,lVar4);
      }
      lVar7 = *(long *)(lVar3 + 8);
      *(long *)(lVar3 + 8) = lVar4;
      if ((lVar7 != 0) && (iVar2 = FUN_00340fe0(0xffffffff,lVar7), iVar2 == 1)) {
        FUN_003453a8(lVar7);
      }
      if ((lVar4 != 0) && (iVar2 = FUN_00340fe0(0xffffffff,lVar4), iVar2 == 1)) {
        FUN_003453a8(lVar4);
      }
      pAVar6 = (Artboard *)plVar8[3];
      FUN_00340fb0(1,lVar3);
      local_60 = lVar3;
      Artboard::internalDataContext(pAVar6,&local_60);
      lVar4 = local_60;
      if ((local_60 != 0) && (iVar2 = FUN_00340fe0(0xffffffff,local_60), iVar2 == 1)) {
        FUN_003453a8(lVar4);
      }
      iVar2 = FUN_00340fe0(0xffffffff,lVar3);
      if (iVar2 == 1) {
        FUN_003453a8(lVar3);
      }
    }
  }
  for (plVar8 = *(long **)(this + 0x278); plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
    lVar3 = *(long *)(plVar8[3] + 0xe8);
    if (lVar3 != 0) {
      FUN_00340fb0(1,lVar3);
      lVar4 = *param_2;
      if (lVar4 != 0) {
        FUN_00340fb0(1,lVar4);
        FUN_00340fb0(1,lVar4);
      }
      lVar7 = *(long *)(lVar3 + 8);
      *(long *)(lVar3 + 8) = lVar4;
      if ((lVar7 != 0) && (iVar2 = FUN_00340fe0(0xffffffff,lVar7), iVar2 == 1)) {
        FUN_003453a8(lVar7);
      }
      if ((lVar4 != 0) && (iVar2 = FUN_00340fe0(0xffffffff,lVar4), iVar2 == 1)) {
        FUN_003453a8(lVar4);
      }
      pSVar5 = (StateMachineInstance *)plVar8[3];
      FUN_00340fb0(1,lVar3);
      local_68 = lVar3;
      StateMachineInstance::internalDataContext(pSVar5,&local_68);
      lVar4 = local_68;
      if ((local_68 != 0) && (iVar2 = FUN_00340fe0(0xffffffff,local_68), iVar2 == 1)) {
        FUN_003453a8(lVar4);
      }
      iVar2 = FUN_00340fe0(0xffffffff,lVar3);
      if (iVar2 == 1) {
        FUN_003453a8(lVar3);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00369700  rive::ArtboardComponentList::bindViewModelInstance =====

/* rive::ArtboardComponentList::bindViewModelInstance(rive::rcp<rive::ViewModelInstance>,
   rive::rcp<rive::DataContext>) */

void rive::ArtboardComponentList::bindViewModelInstance(void)

{
  return;
}


// ===== 00369704  rive::ArtboardComponentList::clearDataContext =====

/* rive::ArtboardComponentList::clearDataContext() */

void rive::ArtboardComponentList::clearDataContext(void)

{
  return;
}


// ===== 00369708  rive::ArtboardComponentList::unbind =====

/* rive::ArtboardComponentList::unbind() */

void rive::ArtboardComponentList::unbind(void)

{
  (*(code *)PTR_clear_0067f5d0)();
  return;
}


// ===== 0036970c  rive::ArtboardComponentList::updateDataBinds =====

/* rive::ArtboardComponentList::updateDataBinds() */

void __thiscall rive::ArtboardComponentList::updateDataBinds(ArtboardComponentList *this)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  
  lVar1 = (**(code **)(*(long *)this + 0x240))();
  if (lVar1 != 0) {
    uVar4 = 0;
    do {
      lVar1 = stateMachineInstance(this,(int)uVar4);
      if (lVar1 != 0) {
        (*(code *)**(undefined8 **)(lVar1 + 0x40))((undefined8 *)(lVar1 + 0x40),0);
      }
      plVar3 = (long *)(**(code **)(*(long *)this + 0x248))(this,uVar4 & 0xffffffff);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x330))(plVar3,1);
      }
      uVar4 = uVar4 + 1;
      uVar2 = (**(code **)(*(long *)this + 0x240))(this);
    } while (uVar4 < uVar2);
  }
  return;
}


// ===== 003697a8  FUN_003697a8 =====

undefined8 FUN_003697a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}


// ===== 003697b0  rive::ArtboardComponentList::hitTestHost =====

/* rive::ArtboardComponentList::hitTestHost(rive::Vec2D const&, bool, rive::ArtboardInstance*) */

uint __thiscall
rive::ArtboardComponentList::hitTestHost
          (ArtboardComponentList *this,Vec2D *param_1,bool param_2,ArtboardInstance *param_3)

{
  ArtboardComponentList *pAVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ArtboardComponentList *pAVar6;
  float fVar7;
  float fVar8;
  ArtboardInstance *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_3 == (ArtboardInstance *)0x0) {
    uVar3 = 0;
  }
  else {
    local_40 = param_3;
    lVar4 = FUN_0036b2dc(this + 0x308,param_3,&local_40);
    fVar7 = *(float *)(lVar4 + 0x28) + *(float *)param_1;
    fVar8 = *(float *)(lVar4 + 0x2c) + *(float *)(param_1 + 4);
    uVar5 = (**(code **)(*(long *)this + 0x340))(this);
    pAVar6 = *(ArtboardComponentList **)(this + 0x30);
    pAVar1 = pAVar6;
    if ((uVar5 & 1) == 0) {
      pAVar1 = this;
    }
    local_40 = (ArtboardInstance *)
               CONCAT44((float)((ulong)*(undefined8 *)(pAVar1 + 0xb4) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(pAVar1 + 0xac) >> 0x20) * fVar8 +
                        (float)((ulong)*(undefined8 *)(pAVar1 + 0xa4) >> 0x20) * fVar7,
                        (float)*(undefined8 *)(pAVar1 + 0xb4) +
                        (float)*(undefined8 *)(pAVar1 + 0xac) * fVar8 +
                        (float)*(undefined8 *)(pAVar1 + 0xa4) * fVar7);
    uVar3 = (**(code **)(*(long *)pAVar6 + 0x88))(pAVar6,&local_40,param_2,0);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00369898  rive::ArtboardComponentList::hostTransformPoint =====

/* rive::ArtboardComponentList::hostTransformPoint(rive::Vec2D const&, rive::ArtboardInstance*) */

void __thiscall
rive::ArtboardComponentList::hostTransformPoint
          (ArtboardComponentList *this,Vec2D *param_1,ArtboardInstance *param_2)

{
  ArtboardComponentList *pAVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  ArtboardInstance *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_40 = param_2;
  lVar3 = FUN_0036b2dc(this + 0x308,param_2,&local_40);
  fVar6 = *(float *)(lVar3 + 0x28) + *(float *)param_1;
  fVar7 = *(float *)(lVar3 + 0x2c) + *(float *)(param_1 + 4);
  uVar4 = (**(code **)(*(long *)this + 0x340))(this);
  pAVar1 = *(ArtboardComponentList **)(this + 0x30);
  if ((uVar4 & 1) == 0) {
    pAVar1 = this;
  }
  local_40 = (ArtboardInstance *)
             CONCAT44((float)((ulong)*(undefined8 *)(pAVar1 + 0xb4) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(pAVar1 + 0xac) >> 0x20) * fVar7 +
                      (float)((ulong)*(undefined8 *)(pAVar1 + 0xa4) >> 0x20) * fVar6,
                      (float)*(undefined8 *)(pAVar1 + 0xb4) +
                      (float)*(undefined8 *)(pAVar1 + 0xac) * fVar7 +
                      (float)*(undefined8 *)(pAVar1 + 0xa4) * fVar6);
  if ((*(long *)(this + 0x40) != 0) &&
     (plVar5 = *(long **)(*(long *)(this + 0x40) + 0xc38), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x50))(plVar5,&local_40);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0036997c  rive::ArtboardComponentList::worldTransformForArtboard =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::ArtboardComponentList::worldTransformForArtboard(rive::ArtboardInstance*) */

void rive::ArtboardComponentList::worldTransformForArtboard(ArtboardInstance *param_1)

{
  ArtboardInstance *pAVar1;
  long lVar2;
  undefined1 auVar3 [16];
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 in_x1;
  undefined8 *in_x8;
  float fVar7;
  float in_s1;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_60 = (undefined4)in_x1;
  fStack_5c = (float)((ulong)in_x1 >> 0x20);
  lVar4 = FUN_0036b2dc(param_1 + 0x308,in_x1,&local_60);
  plVar5 = *(long **)(param_1 + 0x30);
  fVar17 = *(float *)(lVar4 + 0x28);
  fVar16 = *(float *)(lVar4 + 0x2c);
  if (((plVar5 == (long *)0x0) ||
      (uVar6 = (**(code **)(*plVar5 + 0x18))(plVar5,0x199), (uVar6 & 1) == 0)) ||
     (lVar4 = *(long *)(param_1 + 0x30), lVar4 == 0)) {
    uVar6 = (**(code **)(*(long *)param_1 + 0x340))(param_1);
    pAVar1 = *(ArtboardInstance **)(param_1 + 0x30);
    if ((uVar6 & 1) == 0) {
      pAVar1 = param_1;
    }
    fStack_58 = (float)_UNK_0024e5b8;
    fStack_54 = (float)((ulong)_UNK_0024e5b8 >> 0x20);
    local_60 = (undefined4)_DAT_0024e5b0;
    fStack_5c = (float)((ulong)_DAT_0024e5b0 >> 0x20);
    fVar7 = (float)*(undefined8 *)(pAVar1 + 0xac);
    fVar9 = (float)((ulong)*(undefined8 *)(pAVar1 + 0xac) >> 0x20);
    fVar8 = (float)*(undefined8 *)(pAVar1 + 0xa4);
    fVar12 = (float)((ulong)*(undefined8 *)(pAVar1 + 0xa4) >> 0x20);
    in_x8[2] = CONCAT44((float)((ulong)*(undefined8 *)(pAVar1 + 0xb4) >> 0x20) +
                        fVar9 * fVar16 + fVar12 * fVar17,
                        (float)*(undefined8 *)(pAVar1 + 0xb4) + fVar7 * fVar16 + fVar8 * fVar17);
    in_x8[1] = CONCAT44(fVar9 * fStack_54 + fStack_58 * fVar12,fVar7 * fStack_54 + fStack_58 * fVar8
                       );
    *in_x8 = CONCAT44(fVar9 * fStack_5c + fVar12 * 1.0,fVar7 * fStack_5c + fVar8 * 1.0);
  }
  else {
    fVar7 = (float)(**(code **)(*(long *)param_1 + 0x260))(param_1);
    fVar8 = (float)*(undefined8 *)(lVar4 + 0xac);
    fVar9 = (float)((ulong)*(undefined8 *)(lVar4 + 0xac) >> 0x20);
    fStack_58 = (float)_UNK_0024e5b8;
    fStack_54 = (float)((ulong)_UNK_0024e5b8 >> 0x20);
    fStack_5c = (float)((ulong)_DAT_0024e5b0 >> 0x20);
    local_60 = (undefined4)_DAT_0024e5b0;
    fVar18 = (float)*(undefined8 *)(lVar4 + 0xa4);
    fVar19 = (float)((ulong)*(undefined8 *)(lVar4 + 0xa4) >> 0x20);
    fVar12 = fVar8 * fStack_5c + fVar18 * 1.0;
    fVar13 = fVar9 * fStack_5c + fVar19 * 1.0;
    fVar14 = fVar8 * fStack_54 + fStack_58 * fVar18;
    fVar15 = fVar9 * fStack_54 + fStack_58 * fVar19;
    auVar10._4_4_ = fVar13;
    auVar10._0_4_ = fVar12;
    auVar10._8_4_ = fVar14;
    auVar10._12_4_ = fVar15;
    auVar3._4_4_ = fVar13;
    auVar3._0_4_ = fVar12;
    auVar3._8_4_ = fVar14;
    auVar3._12_4_ = fVar15;
    auVar10 = NEON_ext(auVar10,auVar3,8,1);
    uVar11 = *(undefined8 *)(lVar4 + 0xb4);
    in_x8[1] = CONCAT44(fVar15 * fStack_54 + fStack_58 * fVar13,
                        fVar14 * fStack_54 + fStack_58 * fVar12);
    *in_x8 = CONCAT44(fVar15 * fStack_5c + fVar13 * 1.0,fVar14 * fStack_5c + fVar12 * 1.0);
    in_x8[2] = CONCAT44((float)((ulong)uVar11 >> 0x20) + fVar9 * in_s1 + fVar19 * fVar7 +
                        auVar10._4_4_ * fVar16 + fVar13 * fVar17,
                        (float)uVar11 + fVar8 * in_s1 + fVar18 * fVar7 +
                        auVar10._0_4_ * fVar16 + fVar12 * fVar17);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
  local_50 = fVar17;
  fStack_4c = fVar16;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00369b3c  FUN_00369b3c =====

void FUN_00369b3c(Component *param_1)

{
  uint uVar1;
  long lVar2;
  
  if ((*(ushort *)(param_1 + 0x60) >> 6 & 1) == 0) {
    *(ushort *)(param_1 + 0x60) = *(ushort *)(param_1 + 0x60) | 0x40;
    (**(code **)(*(long *)param_1 + 0x70))();
    lVar2 = *(long *)(param_1 + 0x80);
    uVar1 = *(uint *)(param_1 + 0x38);
    *(undefined1 *)(lVar2 + 0xc32) = 1;
    *(ushort *)(lVar2 + 0x60) = *(ushort *)(lVar2 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar2 + 0xbd4)) {
      *(uint *)(lVar2 + 0xbd4) = uVar1;
    }
    rive::Component::addDirt(param_1,0x80,1);
    return;
  }
  return;
}


// ===== 00369bb0  FUN_00369bb0 =====

void FUN_00369bb0(void)

{
  return;
}


// ===== 00369bb4  rive::ArtboardComponentList::syncStyleChanges =====

/* rive::ArtboardComponentList::syncStyleChanges() */

uint __thiscall rive::ArtboardComponentList::syncStyleChanges(ArtboardComponentList *this)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  uint uVar6;
  
  lVar2 = (**(code **)(*(long *)this + 0x240))();
  if (lVar2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar5 = 0;
    uVar6 = 0;
    do {
      plVar4 = (long *)(**(code **)(*(long *)this + 0x248))(this,uVar5 & 0xffffffff);
      if (plVar4 != (long *)0x0) {
        uVar1 = (**(code **)(*plVar4 + 0x350))();
        uVar6 = uVar1 | uVar6;
      }
      uVar5 = uVar5 + 1;
      uVar3 = (**(code **)(*(long *)this + 0x240))(this);
    } while (uVar5 < uVar3);
  }
  return uVar6 & 1;
}


// ===== 00369c44  rive::ArtboardComponentList::updateLayoutBounds =====

/* rive::ArtboardComponentList::updateLayoutBounds(bool) */

void rive::ArtboardComponentList::updateLayoutBounds(bool param_1)

{
  ArtboardComponentList *this;
  long lVar1;
  ulong uVar2;
  long *plVar3;
  uint in_w1;
  ulong uVar4;
  float fVar5;
  float in_s1;
  float in_s2;
  float in_s3;
  
  this = (ArtboardComponentList *)(ulong)param_1;
  lVar1 = (**(code **)(*(long *)this + 0x240))();
  if (lVar1 != 0) {
    uVar4 = 0;
    do {
      plVar3 = (long *)(**(code **)(*(long *)this + 0x248))(this,uVar4 & 0xffffffff);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x2d0))(plVar3,in_w1 & 1);
        fVar5 = (float)(**(code **)(*plVar3 + 0x288))(plVar3);
        in_s1 = in_s3 - in_s1;
        (**(code **)(*(long *)this + 0x358))(in_s2 - fVar5,in_s1,this,uVar4 & 0xffffffff);
      }
      uVar4 = uVar4 + 1;
      uVar2 = (**(code **)(*(long *)this + 0x240))(this);
    } while (uVar4 < uVar2);
  }
  computeLayoutBounds(this);
  return;
}


// ===== 00369d00  rive::ArtboardComponentList::cascadeLayoutStyle =====

/* rive::ArtboardComponentList::cascadeLayoutStyle(rive::LayoutStyleInterpolation,
   rive::KeyFrameInterpolator*, float, rive::LayoutDirection) */

undefined8 __thiscall
rive::ArtboardComponentList::cascadeLayoutStyle
          (undefined4 param_1,ArtboardComponentList *this,undefined4 param_3,undefined8 param_4,
          undefined4 param_5)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  
  iVar1 = (**(code **)(*(long *)this + 0x240))();
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      plVar3 = (long *)(**(code **)(*(long *)this + 0x248))(this,iVar1);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x2d8))(param_1,plVar3,param_3,param_4,param_5);
      }
      iVar1 = iVar1 + 1;
      iVar2 = (**(code **)(*(long *)this + 0x240))(this);
    } while (iVar1 < iVar2);
  }
  return 0;
}


// ===== 00369db8  rive::ArtboardComponentList::markLayoutNodeDirty =====

/* rive::ArtboardComponentList::markLayoutNodeDirty(bool) */

void rive::ArtboardComponentList::markLayoutNodeDirty(bool param_1)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  plVar2 = (long *)(ulong)param_1;
  plVar3 = (long *)plVar2[6];
  if (plVar3 == (long *)0x0) {
    bVar1 = true;
  }
  else {
    uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,0x199);
    bVar1 = true;
    if ((((uVar4 & 1) != 0) && (plVar2[6] != 0)) &&
       (lVar6 = *(long *)(plVar2[6] + 0x1e8), lVar6 != 0)) {
      bVar1 = (*(uint *)(lVar6 + 0x11c) & 0xfffffffe) == 2;
    }
  }
  lVar6 = (**(code **)(*plVar2 + 0x240))(plVar2);
  if (lVar6 != 0) {
    uVar4 = 0;
    do {
      plVar3 = (long *)(**(code **)(*plVar2 + 0x248))(plVar2,uVar4 & 0xffffffff);
      if (plVar3 != (long *)0x0) {
        *(bool *)((long)plVar3 + 0x974) = bVar1;
        (**(code **)(*plVar3 + 0x2e0))(plVar3,0);
      }
      uVar4 = uVar4 + 1;
      uVar5 = (**(code **)(*plVar2 + 0x240))(plVar2);
    } while (uVar4 < uVar5);
  }
  return;
}


// ===== 00369e8c  FUN_00369e8c =====

undefined8 FUN_00369e8c(void)

{
  return 1;
}


// ===== 00369e94  FUN_00369e94 =====

long FUN_00369e94(long param_1)

{
  return *(long *)(param_1 + 0x1f0) - *(long *)(param_1 + 0x1e8) >> 3;
}


// ===== 00369ea4  rive::ArtboardComponentList::file =====

/* rive::ArtboardComponentList::file(rive::File*) */

void __thiscall rive::ArtboardComponentList::file(ArtboardComponentList *this,File *param_1)

{
  *(File **)(this + 0x360) = param_1;
  return;
}


// ===== 00369eac  rive::ArtboardComponentList::file =====

/* rive::ArtboardComponentList::file() const */

undefined8 __thiscall rive::ArtboardComponentList::file(ArtboardComponentList *this)

{
  return *(undefined8 *)(this + 0x360);
}


// ===== 00369eb4  rive::ArtboardComponentList::addVirtualizable =====

/* rive::ArtboardComponentList::addVirtualizable(int) */

void __thiscall
rive::ArtboardComponentList::addVirtualizable(ArtboardComponentList *this,int param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  Artboard *pAVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *local_60;
  Artboard *local_58;
  long *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (((ulong)(long)param_1 < (ulong)(*(long *)(this + 0x1f0) - *(long *)(this + 0x1e8) >> 3)) &&
     (plVar10 = *(long **)(*(long *)(this + 0x1e8) + (long)param_1 * 8), plVar10 != (long *)0x0)) {
    FUN_00340fb0(1,(long)plVar10 + 0x14);
    local_50 = plVar10;
    pAVar6 = (Artboard *)findArtboard(this,(rcp *)&local_50);
    local_58 = pAVar6;
    if (pAVar6 != (Artboard *)0x0) {
      createArtboardRecorders(this,pAVar6);
      lVar7 = FUN_0036c920(this + 0x290,pAVar6,&local_58);
      if (*(long *)(lVar7 + 0x18) == *(long *)(lVar7 + 0x20)) {
        createArtboardAt(this,param_1,true);
        uVar2 = *(ushort *)(this + 0x60);
      }
      else {
        applyRecorders((Artboard *)this,*(Artboard **)(*(long *)(lVar7 + 0x20) + -8));
        local_60 = *(long **)(*(long *)(lVar7 + 0x20) + -8);
        *(undefined8 *)(*(long *)(lVar7 + 0x20) + -8) = 0;
        addArtboardAt(this,&local_60,param_1,1);
        plVar8 = local_60;
        local_60 = (long *)0x0;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 8))();
        }
        plVar11 = (long *)(*(long *)(lVar7 + 0x20) + -8);
        plVar8 = (long *)*plVar11;
        *plVar11 = 0;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 8))();
        }
        *(long **)(lVar7 + 0x20) = plVar11;
        uVar2 = *(ushort *)(this + 0x60);
      }
      if ((uVar2 >> 2 & 1) == 0) {
        *(ushort *)(this + 0x60) = uVar2 | 4;
        (**(code **)(*(long *)this + 0x70))(this);
        lVar7 = *(long *)(this + 0x80);
        uVar1 = *(uint *)(this + 0x38);
        *(undefined1 *)(lVar7 + 0xc32) = 1;
        *(ushort *)(lVar7 + 0x60) = *(ushort *)(lVar7 + 0x60) | 4;
        if (uVar1 < *(uint *)(lVar7 + 0xbd4)) {
          *(uint *)(lVar7 + 0xbd4) = uVar1;
        }
      }
      plVar8 = *(long **)(this + 0x30);
      if (((plVar8 != (long *)0x0) &&
          (uVar9 = (**(code **)(*plVar8 + 0x18))(plVar8,0x199), (uVar9 & 1) != 0)) &&
         (plVar8 = *(long **)(this + 0x30), plVar8 != (long *)0x0)) {
        do {
          *(undefined1 *)(plVar8 + 0x4e) = 0;
          plVar8[0x4d] = 0;
          *(undefined4 *)((long)plVar8 + 0x274) = 0;
          if ((*(ushort *)(plVar8 + 0xc) >> 0xb & 1) == 0) {
            *(ushort *)(plVar8 + 0xc) = *(ushort *)(plVar8 + 0xc) | 0x800;
            (**(code **)(*plVar8 + 0x70))(plVar8);
            lVar7 = plVar8[0x10];
            uVar1 = *(uint *)(plVar8 + 7);
            *(undefined1 *)(lVar7 + 0xc32) = 1;
            *(ushort *)(lVar7 + 0x60) = *(ushort *)(lVar7 + 0x60) | 4;
            if (uVar1 < *(uint *)(lVar7 + 0xbd4)) {
              *(uint *)(lVar7 + 0xbd4) = uVar1;
            }
          }
          bVar4 = (long *)plVar8[8] != plVar8;
          plVar8 = (long *)plVar8[8];
        } while (bVar4);
      }
    }
    iVar5 = FUN_00340fe0(0xffffffff,(long)plVar10 + 0x14);
    if (iVar5 == 1) {
      (**(code **)(*plVar10 + 8))(plVar10);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036a108  rive::ArtboardComponentList::removeVirtualizable =====

/* rive::ArtboardComponentList::removeVirtualizable(int) */

void __thiscall
rive::ArtboardComponentList::removeVirtualizable(ArtboardComponentList *this,int param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  void *pvVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  undefined2 uVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  long local_78;
  long *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (((ulong)(*(long *)(this + 0x1f0) - *(long *)(this + 0x1e8) >> 3) <= (ulong)(long)param_1) ||
     (plVar17 = *(long **)(*(long *)(this + 0x1e8) + (long)param_1 * 8), plVar17 == (long *)0x0)) {
    local_70 = (long *)0x0;
    removeArtboardAt(this,param_1);
    goto LAB_0036a1d4;
  }
  FUN_00340fb0(1,(long)plVar17 + 0x14);
  local_70 = plVar17;
  lVar6 = findArtboard(this,(rcp *)&local_70);
  local_78 = lVar6;
  lVar7 = FUN_0036c500(this + 0x240,plVar17,&local_70);
  plVar18 = *(long **)(lVar7 + 0x18);
  *(undefined8 *)(lVar7 + 0x18) = 0;
  if ((lVar6 != 0) && (plVar18 != (long *)0x0)) {
    lVar6 = FUN_0036c920(this + 0x290,lVar6,&local_78);
    puVar2 = *(undefined8 **)(lVar6 + 0x20);
    if (puVar2 < *(undefined8 **)(lVar6 + 0x28)) {
      plVar21 = puVar2 + 1;
      *puVar2 = plVar18;
    }
    else {
      lVar22 = (long)puVar2 - *(long *)(lVar6 + 0x18);
      lVar7 = lVar22 >> 3;
      uVar10 = lVar7 + 1;
      if (uVar10 >> 0x3d != 0) {
        FUN_0036e01c();
LAB_0036a4e0:
                    /* WARNING: Subroutine does not return */
        FUN_00324008();
      }
      uVar9 = (long)*(undefined8 **)(lVar6 + 0x28) - *(long *)(lVar6 + 0x18);
      uVar11 = (long)uVar9 >> 2;
      if (uVar11 <= uVar10) {
        uVar11 = uVar10;
      }
      if (0x7ffffffffffffff7 < uVar9) {
        uVar11 = 0x1fffffffffffffff;
      }
      if (uVar11 == 0) {
        pvVar8 = (void *)0x0;
      }
      else {
        if (uVar11 >> 0x3d != 0) goto LAB_0036a4e0;
        pvVar8 = operator_new(uVar11 << 3);
      }
      plVar13 = (long *)((long)pvVar8 + lVar7 * 8);
      pvVar1 = (void *)((long)pvVar8 + uVar11 * 8);
      plVar21 = plVar13 + 1;
      *plVar13 = (long)plVar18;
      plVar18 = *(long **)(lVar6 + 0x18);
      plVar20 = *(long **)(lVar6 + 0x20);
      lVar7 = (long)plVar20 - (long)plVar18;
      if (lVar7 == 0) {
        *(long **)(lVar6 + 0x18) = plVar13;
        *(long **)(lVar6 + 0x20) = plVar21;
        *(void **)(lVar6 + 0x28) = pvVar1;
      }
      else {
        uVar10 = lVar7 - 8;
        plVar19 = plVar20;
        if ((uVar10 < 0x78) ||
           (((long *)((long)plVar20 + (-8 - (uVar10 & 0xfffffffffffffff8))) < plVar13 &&
            ((long *)((long)pvVar8 + (lVar22 - (uVar10 & 0xfffffffffffffff8)) + -8) < plVar20)))) {
LAB_0036a2f8:
          do {
            plVar19 = plVar19 + -1;
            lVar7 = *plVar19;
            *plVar19 = 0;
            plVar13 = plVar13 + -1;
            *plVar13 = lVar7;
          } while (plVar19 != plVar18);
        }
        else {
          plVar15 = plVar13 + -2;
          uVar10 = (uVar10 >> 3) + 1;
          uVar9 = uVar10 & 0x3ffffffffffffffc;
          plVar19 = plVar20 + -uVar9;
          uVar11 = uVar9;
          do {
            plVar16 = plVar20 + -4;
            lVar26 = plVar20[-3];
            lVar25 = *plVar16;
            lVar22 = plVar20[-1];
            lVar7 = plVar20[-2];
            uVar11 = uVar11 - 4;
            plVar20[-3] = 0;
            *plVar16 = 0;
            plVar20[-1] = 0;
            plVar20[-2] = 0;
            plVar15[-1] = lVar26;
            plVar15[-2] = lVar25;
            plVar15[1] = lVar22;
            *plVar15 = lVar7;
            plVar15 = plVar15 + -4;
            plVar20 = plVar16;
          } while (uVar11 != 0);
          plVar13 = plVar13 + -uVar9;
          if (uVar10 != uVar9) goto LAB_0036a2f8;
        }
        plVar20 = *(long **)(lVar6 + 0x18);
        plVar18 = *(long **)(lVar6 + 0x20);
        *(long **)(lVar6 + 0x18) = plVar13;
        *(long **)(lVar6 + 0x20) = plVar21;
        *(void **)(lVar6 + 0x28) = pvVar1;
        while (plVar18 != plVar20) {
          plVar18 = plVar18 + -1;
          plVar13 = (long *)*plVar18;
          *plVar18 = 0;
          if (plVar13 != (long *)0x0) {
            (**(code **)(*plVar13 + 8))();
          }
        }
      }
      if (plVar20 != (long *)0x0) {
        operator_delete(plVar20);
      }
    }
    plVar18 = (long *)0x0;
    *(long **)(lVar6 + 0x20) = plVar21;
  }
  uVar10 = *(ulong *)(this + 0x270);
  if (uVar10 != 0) {
    uVar11 = ((ulong)(uint)((int)plVar17 << 3) + 8 ^ (ulong)plVar17 >> 0x20) * -0x622015f714c7d297;
    uVar24 = NEON_cnt(uVar10,1);
    uVar23 = NEON_uaddlv(uVar24,1);
    uVar11 = ((ulong)plVar17 >> 0x20 ^ uVar11 >> 0x2f ^ uVar11) * -0x622015f714c7d297;
    uVar9 = CONCAT62((int6)((ulong)uVar24 >> 0x10),uVar23) & 0xffffffff;
    uVar11 = (uVar11 ^ uVar11 >> 0x2f) * -0x622015f714c7d297;
    if (uVar9 < 2) {
      uVar12 = uVar11 & uVar10 - 1;
    }
    else {
      uVar12 = uVar11;
      if (uVar10 <= uVar11) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = uVar11 / uVar10;
        }
        uVar12 = uVar11 - uVar12 * uVar10;
      }
    }
    plVar13 = *(long **)(*(long *)(this + 0x268) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      do {
        uVar14 = plVar13[1];
        if (uVar14 == uVar11) {
          if ((long *)plVar13[2] == plVar17) {
            lVar6 = FUN_0036cd58(this + 0x2b8,local_78,&local_78);
            plVar17 = *(long **)(lVar6 + 0x20);
            if (plVar17 < *(long **)(lVar6 + 0x28)) {
              lVar7 = plVar13[3];
              plVar13[3] = 0;
              plVar13 = plVar17 + 1;
              *plVar17 = lVar7;
            }
            else {
              plVar13 = (long *)FUN_0036d190(lVar6 + 0x18,plVar13 + 3);
            }
            *(long **)(lVar6 + 0x20) = plVar13;
            break;
          }
        }
        else {
          if (uVar9 < 2) {
            uVar14 = uVar14 & uVar10 - 1;
          }
          else if (uVar10 <= uVar14) {
            uVar3 = 0;
            if (uVar10 != 0) {
              uVar3 = uVar14 / uVar10;
            }
            uVar14 = uVar14 - uVar3 * uVar10;
          }
          if (uVar14 != uVar12) break;
        }
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
    }
  }
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 8))(plVar18);
  }
  plVar17 = local_70;
  removeArtboardAt(this,param_1);
  if ((plVar17 != (long *)0x0) &&
     (iVar5 = FUN_00340fe0(0xffffffff,(long)plVar17 + 0x14), iVar5 == 1)) {
    (**(code **)(*plVar17 + 8))(plVar17);
  }
LAB_0036a1d4:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0036a4e4  FUN_0036a4e4 =====

void FUN_0036a4e4(long param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x388) = param_2;
  *(undefined4 *)(param_1 + 0x38c) = param_3;
  *(undefined1 *)(param_1 + 0x40b) = 0;
  return;
}


// ===== 0036a4f4  rive::ArtboardComponentList::setVirtualizablePosition =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::ArtboardComponentList::setVirtualizablePosition(int, rive::Vec2D) */

void __thiscall
rive::ArtboardComponentList::setVirtualizablePosition
          (float param_1,float param_2,ArtboardComponentList *this)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = (**(code **)(*(long *)this + 0x248))();
  local_40 = lVar3;
  if (lVar3 != 0) {
    fVar6 = 0.0;
    fVar7 = 0.0;
    plVar4 = *(long **)(this + 0x30);
    if ((((plVar4 != (long *)0x0) &&
         (uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,0x199), (uVar5 & 1) != 0)) &&
        (*(long *)(this + 0x30) != 0)) && (*(char *)(lVar3 + 0xbe9) == '\0')) {
      fVar6 = (float)*(undefined8 *)(lVar3 + 0x984) * -(float)*(undefined8 *)(lVar3 + 0x200);
      fVar7 = (float)((ulong)*(undefined8 *)(lVar3 + 0x984) >> 0x20) *
              -(float)((ulong)*(undefined8 *)(lVar3 + 0x200) >> 0x20);
    }
    lVar3 = FUN_0036b2dc(this + 0x308,lVar3,&local_40);
    *(ulong *)(lVar3 + 0x28) = CONCAT44(param_2 - fVar7,param_1 - fVar6);
    uVar2 = _DAT_0024e5b0;
    *(undefined8 *)(lVar3 + 0x20) = _UNK_0024e5b8;
    *(undefined8 *)(lVar3 + 0x18) = uVar2;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036a5d4  rive::ArtboardComponentList::virtualizationEnabled =====

/* rive::ArtboardComponentList::virtualizationEnabled() */

bool __thiscall rive::ArtboardComponentList::virtualizationEnabled(ArtboardComponentList *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  puVar1 = *(undefined8 **)(this + 0x1a0);
  puVar2 = *(undefined8 **)(this + 0x1a8);
  while( true ) {
    if (puVar1 == puVar2) {
      return false;
    }
    plVar6 = (long *)*puVar1;
    plVar3 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6);
    uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,0x209);
    if ((uVar4 & 1) != 0) break;
    puVar1 = puVar1 + 1;
  }
  lVar5 = (**(code **)(*plVar6 + 0x10))(plVar6);
  if (lVar5 == 0) {
    return false;
  }
  return *(char *)(lVar5 + 0xac) != '\0';
}


// ===== 0036a65c  FUN_0036a65c =====

ulong FUN_0036a65c(long param_1)

{
  return (ulong)(*(long *)(param_1 + 0x1f0) - *(long *)(param_1 + 0x1e8)) >> 3;
}


// ===== 0036a66c  FUN_0036a66c =====

long FUN_0036a66c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x248))();
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + 0x9a0;
  }
  return lVar1;
}


// ===== 0036a694  rive::ArtboardComponentList::setItemSize =====

/* rive::ArtboardComponentList::setItemSize(rive::Vec2D, int) */

void rive::ArtboardComponentList::setItemSize
               (undefined4 param_1,undefined4 param_2,long param_3,int param_4)

{
  undefined4 *puVar1;
  
  if ((ulong)(long)param_4 < (ulong)(*(long *)(param_3 + 0x370) - *(long *)(param_3 + 0x368) >> 3))
  {
    puVar1 = (undefined4 *)(*(long *)(param_3 + 0x368) + (long)param_4 * 8);
    *puVar1 = param_1;
    puVar1[1] = param_2;
  }
  return;
}


// ===== 0036a6b8  rive::ArtboardComponentList::size =====

/* rive::ArtboardComponentList::size() */

undefined4 __thiscall rive::ArtboardComponentList::size(ArtboardComponentList *this)

{
  return *(undefined4 *)(this + 0x380);
}


// ===== 0036a6c4  rive::ArtboardComponentList::itemSize =====

/* rive::ArtboardComponentList::itemSize(int) */

undefined4 __thiscall rive::ArtboardComponentList::itemSize(ArtboardComponentList *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((ulong)(long)param_1 < (ulong)(*(long *)(this + 0x370) - *(long *)(this + 0x368) >> 3)) {
    uVar1 = *(undefined4 *)(*(long *)(this + 0x368) + (long)param_1 * 8);
  }
  return uVar1;
}


// ===== 0036a6f0  rive::ArtboardComponentList::listTransform =====

/* rive::ArtboardComponentList::listTransform() */

ArtboardComponentList * __thiscall
rive::ArtboardComponentList::listTransform(ArtboardComponentList *this)

{
  return this + 0xa4;
}


// ===== 0036a6f8  rive::ArtboardComponentList::listItemTransforms =====

/* rive::ArtboardComponentList::listItemTransforms(std::__ndk1::vector<rive::Mat2D*,
   std::__ndk1::allocator<rive::Mat2D*> >&) */

void __thiscall
rive::ArtboardComponentList::listItemTransforms(ArtboardComponentList *this,vector *param_1)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  long local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x1f0) - *(long *)(this + 0x1e8) != 0) {
    uVar4 = *(long *)(this + 0x1f0) - *(long *)(this + 0x1e8) >> 3;
    uVar12 = 0;
    if (uVar4 < 2) {
      uVar4 = 1;
    }
    do {
      local_70 = (**(code **)(*(long *)this + 0x248))(this,uVar12 & 0xffffffff);
      if (local_70 != 0) {
        lVar2 = FUN_0036b2dc(this + 0x308,local_70,&local_70);
        plVar14 = *(long **)(param_1 + 8);
        if (plVar14 < *(long **)(param_1 + 0x10)) {
          plVar15 = plVar14 + 1;
          *plVar14 = lVar2 + 0x18;
        }
        else {
          plVar13 = *(long **)param_1;
          lVar16 = (long)plVar14 - (long)plVar13 >> 3;
          uVar7 = lVar16 + 1;
          if (uVar7 >> 0x3d != 0) {
            FUN_0036c210();
LAB_0036a8e4:
                    /* WARNING: Subroutine does not return */
            FUN_00324008();
          }
          uVar5 = (long)*(long **)(param_1 + 0x10) - (long)plVar13;
          uVar8 = (long)uVar5 >> 2;
          if (uVar8 <= uVar7) {
            uVar8 = uVar7;
          }
          if (0x7ffffffffffffff7 < uVar5) {
            uVar8 = 0x1fffffffffffffff;
          }
          if (uVar8 == 0) {
            pvVar3 = (void *)0x0;
          }
          else {
            if (uVar8 >> 0x3d != 0) goto LAB_0036a8e4;
            pvVar3 = operator_new(uVar8 << 3);
          }
          plVar6 = (long *)((long)pvVar3 + lVar16 * 8);
          plVar15 = plVar6 + 1;
          *plVar6 = lVar2 + 0x18;
          if ((long)plVar14 - (long)plVar13 != 0) {
            uVar7 = ((long)plVar14 - (long)plVar13) - 8;
            plVar17 = plVar14;
            if ((0x37 < uVar7) &&
               (0x1f < (ulong)((long)plVar14 + (-((long)plVar14 - (long)plVar13) - (long)pvVar3))))
            {
              plVar10 = plVar6 + -2;
              plVar11 = plVar14 + -2;
              uVar7 = (uVar7 >> 3) + 1;
              uVar9 = uVar7 & 0x3ffffffffffffffc;
              plVar17 = plVar14 + -uVar9;
              uVar5 = uVar9;
              do {
                plVar14 = plVar11 + -1;
                lVar18 = plVar11[-2];
                lVar16 = plVar11[1];
                lVar2 = *plVar11;
                uVar5 = uVar5 - 4;
                plVar11 = plVar11 + -4;
                plVar10[-1] = *plVar14;
                plVar10[-2] = lVar18;
                plVar10[1] = lVar16;
                *plVar10 = lVar2;
                plVar10 = plVar10 + -4;
              } while (uVar5 != 0);
              plVar6 = plVar6 + -uVar9;
              plVar14 = plVar13;
              if (uVar7 == uVar9) goto LAB_0036a890;
            }
            do {
              plVar17 = plVar17 + -1;
              plVar6 = plVar6 + -1;
              *plVar6 = *plVar17;
            } while (plVar17 != plVar13);
            plVar14 = *(long **)param_1;
          }
LAB_0036a890:
          *(long **)param_1 = plVar6;
          *(long **)(param_1 + 8) = plVar15;
          *(void **)(param_1 + 0x10) = (void *)((long)pvVar3 + uVar8 * 8);
          if (plVar14 != (long *)0x0) {
            operator_delete(plVar14);
          }
        }
        *(long **)(param_1 + 8) = plVar15;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar4);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0036a8ec  FUN_0036a8ec =====

undefined2 FUN_0036a8ec(long *param_1)

{
  undefined2 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x10))();
  return uVar1;
}


// ===== 0036a90c  FUN_0036a90c =====

long FUN_0036a90c(long param_1)

{
  return *(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x70) >> 3;
}


// ===== 0036a91c  rive::ArtboardComponentList::artboardInstance =====

/* non-virtual thunk to rive::ArtboardComponentList::artboardInstance(int) */

void __thiscall
rive::ArtboardComponentList::artboardInstance(ArtboardComponentList *this,int param_1)

{
  artboardInstance(this + -0x178,param_1);
  return;
}


// ===== 0036a924  rive::ArtboardComponentList::internalDataContext =====

/* non-virtual thunk to
   rive::ArtboardComponentList::internalDataContext(rive::rcp<rive::DataContext>) */

void __thiscall rive::ArtboardComponentList::internalDataContext(ArtboardComponentList *this)

{
  internalDataContext(this + -0x178);
  return;
}


// ===== 0036a92c  rive::ArtboardComponentList::bindViewModelInstance =====

/* non-virtual thunk to
   rive::ArtboardComponentList::bindViewModelInstance(rive::rcp<rive::ViewModelInstance>,
   rive::rcp<rive::DataContext>) */

void __thiscall rive::ArtboardComponentList::bindViewModelInstance(void)

{
  return;
}


// ===== 0036a930  rive::ArtboardComponentList::clearDataContext =====

/* non-virtual thunk to rive::ArtboardComponentList::clearDataContext() */

void __thiscall rive::ArtboardComponentList::clearDataContext(ArtboardComponentList *this)

{
  return;
}


// ===== 0036a934  rive::ArtboardComponentList::unbind =====

/* non-virtual thunk to rive::ArtboardComponentList::unbind() */

void __thiscall rive::ArtboardComponentList::unbind(ArtboardComponentList *this)

{
  clear(this + -0x178);
  return;
}


// ===== 0036a93c  rive::ArtboardComponentList::updateDataBinds =====

/* non-virtual thunk to rive::ArtboardComponentList::updateDataBinds() */

void __thiscall rive::ArtboardComponentList::updateDataBinds(ArtboardComponentList *this)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  ArtboardComponentList *this_00;
  ulong uVar4;
  
  this_00 = this + -0x178;
  lVar1 = (**(code **)(*(long *)this_00 + 0x240))(this_00);
  if (lVar1 != 0) {
    uVar4 = 0;
    do {
      lVar1 = stateMachineInstance(this_00,(int)uVar4);
      if (lVar1 != 0) {
        (*(code *)**(undefined8 **)(lVar1 + 0x40))((undefined8 *)(lVar1 + 0x40),0);
      }
      plVar3 = (long *)(**(code **)(*(long *)this_00 + 0x248))(this_00,uVar4 & 0xffffffff);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x330))(plVar3,1);
      }
      uVar4 = uVar4 + 1;
      uVar2 = (**(code **)(*(long *)this_00 + 0x240))(this_00);
    } while (uVar4 < uVar2);
  }
  return;
}


// ===== 0036a9dc  rive::ArtboardComponentList::markHostingLayoutDirty =====

/* non-virtual thunk to rive::ArtboardComponentList::markHostingLayoutDirty(rive::ArtboardInstance*)
    */

void __thiscall
rive::ArtboardComponentList::markHostingLayoutDirty
          (ArtboardComponentList *this,ArtboardInstance *param_1)

{
  long lVar1;
  ArtboardInstance *pAVar2;
  ulong uVar3;
  Component *pCVar4;
  ulong uVar5;
  
  pCVar4 = (Component *)(this + -0x178);
  lVar1 = (**(code **)(*(long *)pCVar4 + 0x240))(pCVar4);
  if (lVar1 != 0) {
    uVar5 = 0;
    do {
      pAVar2 = (ArtboardInstance *)(**(code **)(*(long *)pCVar4 + 0x248))(pCVar4,uVar5 & 0xffffffff)
      ;
      if (pAVar2 != (ArtboardInstance *)0x0 && pAVar2 == param_1) {
        Artboard::markLayoutDirty(*(Artboard **)(this + -0x138),(LayoutComponent *)param_1);
        break;
      }
      uVar5 = uVar5 + 1;
      uVar3 = (**(code **)(*(long *)pCVar4 + 0x240))(pCVar4);
    } while (uVar5 < uVar3);
  }
  Component::addDirt(pCVar4,0x80,1);
  return;
}


// ===== 0036aa7c  FUN_0036aa7c =====

undefined8 FUN_0036aa7c(long param_1)

{
  return *(undefined8 *)(param_1 + -0x138);
}


// ===== 0036aa88  rive::ArtboardComponentList::hitTestHost =====

/* non-virtual thunk to rive::ArtboardComponentList::hitTestHost(rive::Vec2D const&, bool,
   rive::ArtboardInstance*) */

uint __thiscall
rive::ArtboardComponentList::hitTestHost
          (ArtboardComponentList *this,Vec2D *param_1,bool param_2,ArtboardInstance *param_3)

{
  ArtboardComponentList *pAVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ArtboardComponentList *pAVar6;
  ArtboardComponentList *pAVar7;
  float fVar8;
  float fVar9;
  ArtboardInstance *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_3 == (ArtboardInstance *)0x0) {
    uVar3 = 0;
  }
  else {
    pAVar7 = this + -0x178;
    local_50 = param_3;
    lVar4 = FUN_0036b2dc(this + 400,param_3,&local_50);
    fVar8 = *(float *)(lVar4 + 0x28) + *(float *)param_1;
    fVar9 = *(float *)(lVar4 + 0x2c) + *(float *)(param_1 + 4);
    uVar5 = (**(code **)(*(long *)pAVar7 + 0x340))(pAVar7);
    pAVar6 = *(ArtboardComponentList **)(this + -0x148);
    pAVar1 = pAVar6;
    if ((uVar5 & 1) == 0) {
      pAVar1 = pAVar7;
    }
    local_50 = (ArtboardInstance *)
               CONCAT44((float)((ulong)*(undefined8 *)(pAVar1 + 0xb4) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(pAVar1 + 0xac) >> 0x20) * fVar9 +
                        (float)((ulong)*(undefined8 *)(pAVar1 + 0xa4) >> 0x20) * fVar8,
                        (float)*(undefined8 *)(pAVar1 + 0xb4) +
                        (float)*(undefined8 *)(pAVar1 + 0xac) * fVar9 +
                        (float)*(undefined8 *)(pAVar1 + 0xa4) * fVar8);
    uVar3 = (**(code **)(*(long *)pAVar6 + 0x88))(pAVar6,&local_50,param_2,0);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036ab80  rive::ArtboardComponentList::hostTransformPoint =====

/* non-virtual thunk to rive::ArtboardComponentList::hostTransformPoint(rive::Vec2D const&,
   rive::ArtboardInstance*) */

void __thiscall
rive::ArtboardComponentList::hostTransformPoint
          (ArtboardComponentList *this,Vec2D *param_1,ArtboardInstance *param_2)

{
  ArtboardComponentList *pAVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ArtboardComponentList *pAVar6;
  float fVar7;
  float fVar8;
  ArtboardInstance *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pAVar6 = this + -0x178;
  local_40 = param_2;
  lVar3 = FUN_0036b2dc(this + 400,param_2,&local_40);
  fVar7 = *(float *)(lVar3 + 0x28) + *(float *)param_1;
  fVar8 = *(float *)(lVar3 + 0x2c) + *(float *)(param_1 + 4);
  uVar4 = (**(code **)(*(long *)pAVar6 + 0x340))(pAVar6);
  pAVar1 = *(ArtboardComponentList **)(this + -0x148);
  if ((uVar4 & 1) == 0) {
    pAVar1 = pAVar6;
  }
  local_40 = (ArtboardInstance *)
             CONCAT44((float)((ulong)*(undefined8 *)(pAVar1 + 0xb4) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(pAVar1 + 0xac) >> 0x20) * fVar8 +
                      (float)((ulong)*(undefined8 *)(pAVar1 + 0xa4) >> 0x20) * fVar7,
                      (float)*(undefined8 *)(pAVar1 + 0xb4) +
                      (float)*(undefined8 *)(pAVar1 + 0xac) * fVar8 +
                      (float)*(undefined8 *)(pAVar1 + 0xa4) * fVar7);
  if ((*(long *)(this + -0x138) != 0) &&
     (plVar5 = *(long **)(*(long *)(this + -0x138) + 0xc38), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x50))(plVar5,&local_40);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0036ac70  rive::ArtboardComponentList::worldTransformForArtboard =====

/* non-virtual thunk to
   rive::ArtboardComponentList::worldTransformForArtboard(rive::ArtboardInstance*) */

void __thiscall
rive::ArtboardComponentList::worldTransformForArtboard
          (ArtboardComponentList *this,ArtboardInstance *param_1)

{
  worldTransformForArtboard((ArtboardInstance *)(this + -0x178));
  return;
}


// ===== 0036ac78  FUN_0036ac78 =====

void FUN_0036ac78(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  Component *pCVar4;
  
  uVar2 = *(ushort *)(param_1 + -0x118);
  if ((uVar2 >> 6 & 1) == 0) {
    pCVar4 = (Component *)(param_1 + -0x178);
    *(ushort *)(param_1 + -0x118) = uVar2 | 0x40;
    (**(code **)(*(long *)pCVar4 + 0x70))(pCVar4);
    lVar3 = *(long *)(param_1 + -0xf8);
    uVar1 = *(uint *)(param_1 + -0x140);
    *(undefined1 *)(lVar3 + 0xc32) = 1;
    *(ushort *)(lVar3 + 0x60) = *(ushort *)(lVar3 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar3 + 0xbd4)) {
      *(uint *)(lVar3 + 0xbd4) = uVar1;
    }
    rive::Component::addDirt(pCVar4,0x80,1);
    return;
  }
  return;
}


// ===== 0036acfc  FUN_0036acfc =====

undefined8 FUN_0036acfc(void)

{
  return 1;
}


// ===== 0036ad04  rive::ArtboardComponentList::file =====

/* non-virtual thunk to rive::ArtboardComponentList::file(rive::File*) */

void __thiscall rive::ArtboardComponentList::file(ArtboardComponentList *this,File *param_1)

{
  *(File **)(this + 0x1e8) = param_1;
  return;
}


// ===== 0036ad0c  rive::ArtboardComponentList::file =====

/* non-virtual thunk to rive::ArtboardComponentList::file() const */

undefined8 __thiscall rive::ArtboardComponentList::file(ArtboardComponentList *this)

{
  return *(undefined8 *)(this + 0x1e8);
}


// ===== 0036ad14  FUN_0036ad14 =====

long FUN_0036ad14(long param_1)

{
  return param_1 + -0x178;
}


// ===== 0036ad1c  FUN_0036ad1c =====

void FUN_0036ad1c(void)

{
  return;
}


// ===== 0036ad20  FUN_0036ad20 =====

undefined2 FUN_0036ad20(long param_1)

{
  undefined2 uVar1;
  
  uVar1 = (**(code **)(*(long *)(param_1 + -0x178) + 0x10))();
  return uVar1;
}


// ===== 0036ad44  rive::ArtboardComponentList::advanceComponent =====

/* non-virtual thunk to rive::ArtboardComponentList::advanceComponent(float, rive::AdvanceFlags) */

void __thiscall rive::ArtboardComponentList::advanceComponent(ArtboardComponentList *this)

{
  advanceComponent(this + -0x188);
  return;
}


// ===== 0036ad4c  rive::ArtboardComponentList::reset =====

/* non-virtual thunk to rive::ArtboardComponentList::reset() */

void __thiscall rive::ArtboardComponentList::reset(ArtboardComponentList *this)

{
  reset(this + -400);
  return;
}


// ===== 0036ad54  rive::ArtboardComponentList::layoutNode =====

/* non-virtual thunk to rive::ArtboardComponentList::layoutNode(int) */

long __thiscall rive::ArtboardComponentList::layoutNode(ArtboardComponentList *this,int param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (**(code **)(*(long *)(this + -0x198) + 0x248))(this + -0x198,param_1);
  lVar2 = lVar1;
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x1f0);
    *(undefined1 *)(lVar1 + 0xc30) = 0;
  }
  return lVar2;
}


// ===== 0036ad84  FUN_0036ad84 =====

long FUN_0036ad84(long param_1)

{
  return param_1 + -0x198;
}


// ===== 0036ad8c  rive::ArtboardComponentList::layoutBounds =====

/* non-virtual thunk to rive::ArtboardComponentList::layoutBounds() */

undefined1  [16] __thiscall rive::ArtboardComponentList::layoutBounds(ArtboardComponentList *this)

{
  return ZEXT816(0);
}


// ===== 0036ada0  rive::ArtboardComponentList::layoutBoundsForNode =====

/* non-virtual thunk to rive::ArtboardComponentList::layoutBoundsForNode(int) */

void __thiscall
rive::ArtboardComponentList::layoutBoundsForNode(ArtboardComponentList *this,int param_1)

{
  layoutBoundsForNode(this + -0x198,param_1);
  return;
}


// ===== 0036ada8  rive::ArtboardComponentList::syncStyleChanges =====

/* non-virtual thunk to rive::ArtboardComponentList::syncStyleChanges() */

uint __thiscall rive::ArtboardComponentList::syncStyleChanges(ArtboardComponentList *this)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  ArtboardComponentList *pAVar5;
  ulong uVar6;
  uint uVar7;
  
  pAVar5 = this + -0x198;
  lVar2 = (**(code **)(*(long *)pAVar5 + 0x240))(pAVar5);
  if (lVar2 == 0) {
    uVar7 = 0;
  }
  else {
    uVar6 = 0;
    uVar7 = 0;
    do {
      plVar4 = (long *)(**(code **)(*(long *)pAVar5 + 0x248))(pAVar5,uVar6 & 0xffffffff);
      if (plVar4 != (long *)0x0) {
        uVar1 = (**(code **)(*plVar4 + 0x350))();
        uVar7 = uVar1 | uVar7;
      }
      uVar6 = uVar6 + 1;
      uVar3 = (**(code **)(*(long *)pAVar5 + 0x240))(pAVar5);
    } while (uVar6 < uVar3);
  }
  return uVar7 & 1;
}


// ===== 0036ae3c  rive::ArtboardComponentList::updateLayoutBounds =====

/* non-virtual thunk to rive::ArtboardComponentList::updateLayoutBounds(bool) */

void __thiscall
rive::ArtboardComponentList::updateLayoutBounds(ArtboardComponentList *this,bool param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  ArtboardComponentList *this_00;
  ulong uVar4;
  float fVar5;
  float in_s1;
  float in_s2;
  float in_s3;
  
  this_00 = this + -0x198;
  lVar1 = (**(code **)(*(long *)this_00 + 0x240))(this_00);
  if (lVar1 != 0) {
    uVar4 = 0;
    do {
      plVar3 = (long *)(**(code **)(*(long *)this_00 + 0x248))(this_00,uVar4 & 0xffffffff);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x2d0))(plVar3,param_1);
        fVar5 = (float)(**(code **)(*plVar3 + 0x288))(plVar3);
        in_s1 = in_s3 - in_s1;
        (**(code **)(*(long *)this_00 + 0x358))(in_s2 - fVar5,in_s1,this_00,uVar4 & 0xffffffff);
      }
      uVar4 = uVar4 + 1;
      uVar2 = (**(code **)(*(long *)this_00 + 0x240))(this_00);
    } while (uVar4 < uVar2);
  }
  computeLayoutBounds(this_00);
  return;
}


// ===== 0036aefc  rive::ArtboardComponentList::markLayoutNodeDirty =====

/* non-virtual thunk to rive::ArtboardComponentList::markLayoutNodeDirty(bool) */

void __thiscall
rive::ArtboardComponentList::markLayoutNodeDirty(ArtboardComponentList *this,bool param_1)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ArtboardComponentList *pAVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  uVar6 = (ulong)param_1;
  plVar2 = *(long **)(this + -0x168);
  pAVar5 = this + -0x198;
  if (plVar2 == (long *)0x0) {
    bVar1 = true;
  }
  else {
    auVar7 = (**(code **)(*plVar2 + 0x18))(plVar2,0x199);
    uVar6 = auVar7._8_8_;
    bVar1 = true;
    if ((((auVar7 & (undefined1  [16])0x1) != (undefined1  [16])0x0) &&
        (lVar4 = *(long *)(this + -0x168), lVar4 != 0)) &&
       (lVar4 = *(long *)(lVar4 + 0x1e8), lVar4 != 0)) {
      bVar1 = (*(uint *)(lVar4 + 0x11c) & 0xfffffffe) == 2;
    }
  }
  lVar4 = (**(code **)(*(long *)pAVar5 + 0x240))(pAVar5,uVar6);
  if (lVar4 != 0) {
    uVar6 = 0;
    do {
      plVar2 = (long *)(**(code **)(*(long *)pAVar5 + 0x248))(pAVar5,uVar6 & 0xffffffff);
      if (plVar2 != (long *)0x0) {
        *(bool *)((long)plVar2 + 0x974) = bVar1;
        (**(code **)(*plVar2 + 0x2e0))(plVar2,0);
      }
      uVar6 = uVar6 + 1;
      uVar3 = (**(code **)(*(long *)pAVar5 + 0x240))(pAVar5);
    } while (uVar6 < uVar3);
  }
  return;
}


// ===== 0036afd8  FUN_0036afd8 =====

long FUN_0036afd8(long param_1)

{
  return *(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50) >> 3;
}


// ===== 0036afe8  rive::ArtboardComponentList::cascadeLayoutStyle =====

/* non-virtual thunk to
   rive::ArtboardComponentList::cascadeLayoutStyle(rive::LayoutStyleInterpolation,
   rive::KeyFrameInterpolator*, float, rive::LayoutDirection) */

undefined8 __thiscall
rive::ArtboardComponentList::cascadeLayoutStyle
          (undefined4 param_1,ArtboardComponentList *this,undefined4 param_3,undefined8 param_4,
          undefined4 param_5)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  
  this = this + -0x198;
  iVar1 = (**(code **)(*(long *)this + 0x240))(this);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      plVar3 = (long *)(**(code **)(*(long *)this + 0x248))(this,iVar1);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x2d8))(param_1,plVar3,param_3,param_4,param_5);
      }
      iVar1 = iVar1 + 1;
      iVar2 = (**(code **)(*(long *)this + 0x240))(this);
    } while (iVar1 < iVar2);
  }
  return 0;
}


// ===== 0036b0a4  rive::ArtboardComponentList::updateList =====

/* non-virtual thunk to
   rive::ArtboardComponentList::updateList(std::__ndk1::vector<rive::rcp<rive::ViewModelInstanceListItem>,
   std::__ndk1::allocator<rive::rcp<rive::ViewModelInstanceListItem> > >*) */

void __thiscall rive::ArtboardComponentList::updateList(ArtboardComponentList *this,vector *param_1)

{
  updateList(this + -0x1b8,param_1);
  return;
}


// ===== 0036b0ac  rive::ArtboardComponentList::virtualizationEnabled =====

/* non-virtual thunk to rive::ArtboardComponentList::virtualizationEnabled() */

bool __thiscall rive::ArtboardComponentList::virtualizationEnabled(ArtboardComponentList *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  puVar1 = *(undefined8 **)(this + -0x20);
  puVar2 = *(undefined8 **)(this + -0x18);
  while( true ) {
    if (puVar1 == puVar2) {
      return false;
    }
    plVar6 = (long *)*puVar1;
    plVar3 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6);
    uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,0x209);
    if ((uVar4 & 1) != 0) break;
    puVar1 = puVar1 + 1;
  }
  lVar5 = (**(code **)(*plVar6 + 0x10))(plVar6);
  if (lVar5 == 0) {
    return false;
  }
  return *(char *)(lVar5 + 0xac) != '\0';
}


// ===== 0036b134  FUN_0036b134 =====

ulong FUN_0036b134(long param_1)

{
  return (ulong)(*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28)) >> 3;
}


// ===== 0036b144  FUN_0036b144 =====

long FUN_0036b144(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (**(code **)(*(long *)(param_1 + -0x1c0) + 0x248))();
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + 0x9a0;
  }
  return lVar1;
}


// ===== 0036b170  rive::ArtboardComponentList::size =====

/* non-virtual thunk to rive::ArtboardComponentList::size() */

undefined4 __thiscall rive::ArtboardComponentList::size(ArtboardComponentList *this)

{
  return *(undefined4 *)(this + 0x1c0);
}


// ===== 0036b17c  rive::ArtboardComponentList::itemSize =====

/* non-virtual thunk to rive::ArtboardComponentList::itemSize(int) */

undefined4 __thiscall rive::ArtboardComponentList::itemSize(ArtboardComponentList *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((ulong)(long)param_1 < (ulong)(*(long *)(this + 0x1b0) - *(long *)(this + 0x1a8) >> 3)) {
    uVar1 = *(undefined4 *)(*(long *)(this + 0x1a8) + (long)param_1 * 8);
  }
  return uVar1;
}


// ===== 0036b1a4  rive::ArtboardComponentList::setItemSize =====

/* non-virtual thunk to rive::ArtboardComponentList::setItemSize(rive::Vec2D, int) */

void __thiscall
rive::ArtboardComponentList::setItemSize
          (undefined4 param_1,undefined4 param_2,ArtboardComponentList *this,int param_4)

{
  undefined4 *puVar1;
  
  if ((ulong)(long)param_4 < (ulong)(*(long *)(this + 0x1b0) - *(long *)(this + 0x1a8) >> 3)) {
    puVar1 = (undefined4 *)(*(long *)(this + 0x1a8) + (long)param_4 * 8);
    *puVar1 = param_1;
    puVar1[1] = param_2;
  }
  return;
}


// ===== 0036b1c4  rive::ArtboardComponentList::addVirtualizable =====

/* non-virtual thunk to rive::ArtboardComponentList::addVirtualizable(int) */

void __thiscall
rive::ArtboardComponentList::addVirtualizable(ArtboardComponentList *this,int param_1)

{
  addVirtualizable(this + -0x1c0,param_1);
  return;
}


// ===== 0036b1cc  rive::ArtboardComponentList::removeVirtualizable =====

/* non-virtual thunk to rive::ArtboardComponentList::removeVirtualizable(int) */

void __thiscall
rive::ArtboardComponentList::removeVirtualizable(ArtboardComponentList *this,int param_1)

{
  removeVirtualizable(this + -0x1c0,param_1);
  return;
}


// ===== 0036b1d4  FUN_0036b1d4 =====

void FUN_0036b1d4(long param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x1c8) = param_2;
  *(undefined4 *)(param_1 + 0x1cc) = param_3;
  *(undefined1 *)(param_1 + 0x24b) = 0;
  return;
}


// ===== 0036b1e4  rive::ArtboardComponentList::setVirtualizablePosition =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* non-virtual thunk to rive::ArtboardComponentList::setVirtualizablePosition(int, rive::Vec2D) */

void __thiscall
rive::ArtboardComponentList::setVirtualizablePosition
          (float param_1,float param_2,ArtboardComponentList *this)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = (**(code **)(*(long *)(this + -0x1c0) + 0x248))();
  local_50 = lVar3;
  if (lVar3 != 0) {
    fVar6 = 0.0;
    fVar7 = 0.0;
    plVar4 = *(long **)(this + -400);
    if ((((plVar4 != (long *)0x0) &&
         (uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,0x199), (uVar5 & 1) != 0)) &&
        (*(long *)(this + -400) != 0)) && (*(char *)(lVar3 + 0xbe9) == '\0')) {
      fVar6 = (float)*(undefined8 *)(lVar3 + 0x984) * -(float)*(undefined8 *)(lVar3 + 0x200);
      fVar7 = (float)((ulong)*(undefined8 *)(lVar3 + 0x984) >> 0x20) *
              -(float)((ulong)*(undefined8 *)(lVar3 + 0x200) >> 0x20);
    }
    lVar3 = FUN_0036b2dc(this + 0x148,lVar3,&local_50);
    *(ulong *)(lVar3 + 0x28) = CONCAT44(param_2 - fVar7,param_1 - fVar6);
    uVar2 = _DAT_0024e5b0;
    *(undefined8 *)(lVar3 + 0x20) = _UNK_0024e5b8;
    *(undefined8 *)(lVar3 + 0x18) = uVar2;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036b2cc  rive::ArtboardComponentList::listTransform =====

/* non-virtual thunk to rive::ArtboardComponentList::listTransform() */

ArtboardComponentList * __thiscall
rive::ArtboardComponentList::listTransform(ArtboardComponentList *this)

{
  return this + -0x124;
}


// ===== 0036b2d4  rive::ArtboardComponentList::listItemTransforms =====

/* non-virtual thunk to
   rive::ArtboardComponentList::listItemTransforms(std::__ndk1::vector<rive::Mat2D*,
   std::__ndk1::allocator<rive::Mat2D*> >&) */

void __thiscall
rive::ArtboardComponentList::listItemTransforms(ArtboardComponentList *this,vector *param_1)

{
  listItemTransforms(this + -0x1c8,param_1);
  return;
}


// ===== 0036b2dc  FUN_0036b2dc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0036b2dc(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  ulong unaff_x23;
  undefined2 uVar16;
  undefined8 uVar17;
  float fVar18;
  
  uVar15 = param_1[1];
  uVar6 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ param_2 >> 0x20) * -0x622015f714c7d297;
  uVar6 = (param_2 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
  uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  if (uVar15 != 0) {
    uVar17 = NEON_cnt(uVar15,1);
    uVar16 = NEON_uaddlv(uVar17,1);
    uVar9 = CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) & 0xffffffff;
    if (uVar9 < 2) {
      unaff_x23 = uVar6 & uVar15 - 1;
    }
    else {
      unaff_x23 = uVar6;
      if (uVar15 <= uVar6) {
        uVar11 = 0;
        if (uVar15 != 0) {
          uVar11 = uVar6 / uVar15;
        }
        unaff_x23 = uVar6 - uVar11 * uVar15;
      }
    }
    plVar7 = *(long **)(*param_1 + unaff_x23 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar11 = plVar7[1];
        if (uVar11 == uVar6) {
          if (plVar7[2] == param_2) {
            return;
          }
        }
        else {
          if (uVar9 < 2) {
            uVar11 = uVar11 & uVar15 - 1;
          }
          else if (uVar15 <= uVar11) {
            uVar5 = 0;
            if (uVar15 != 0) {
              uVar5 = uVar11 / uVar15;
            }
            uVar11 = uVar11 - uVar5 * uVar15;
          }
          if (uVar11 != unaff_x23) break;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  plVar7 = (long *)operator_new(0x30);
  lVar3 = param_1[3];
  lVar8 = *param_3;
  fVar18 = *(float *)(param_1 + 4);
  *plVar7 = 0;
  plVar7[1] = uVar6;
  plVar7[2] = lVar8;
  lVar12 = _UNK_00281c00;
  lVar8 = _DAT_00281bf8;
  plVar7[5] = 0;
  plVar7[4] = lVar12;
  plVar7[3] = lVar8;
  if ((uVar15 == 0) || (fVar18 * (float)uVar15 < (float)(lVar3 + 1))) {
    if (uVar15 < 3) {
      uVar9 = 1;
    }
    else {
      uVar9 = (ulong)((uVar15 & uVar15 - 1) != 0);
    }
    uVar9 = uVar9 | uVar15 << 1;
    uVar11 = (ulong)((float)(lVar3 + 1) / fVar18);
    if (uVar9 <= uVar11) {
      uVar9 = uVar11;
    }
    if (uVar9 - 1 == 0) {
      uVar9 = 2;
    }
    else if ((uVar9 & uVar9 - 1) != 0) {
      uVar9 = std::__ndk1::__next_prime(uVar9);
      uVar15 = param_1[1];
    }
    if (uVar15 < uVar9) {
LAB_0036b490:
      if (uVar9 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00324008();
      }
      pvVar2 = operator_new(uVar9 << 3);
      pvVar4 = (void *)*param_1;
      *param_1 = (long)pvVar2;
      if (pvVar4 != (void *)0x0) {
        operator_delete(pvVar4);
      }
      uVar15 = 0;
      param_1[1] = uVar9;
      do {
        *(undefined8 *)(*param_1 + uVar15 * 8) = 0;
        uVar15 = uVar15 + 1;
      } while (uVar9 != uVar15);
      plVar10 = (long *)param_1[2];
      uVar15 = uVar9;
      if (plVar10 != (long *)0x0) {
        uVar11 = plVar10[1];
        uVar17 = NEON_cnt(uVar9,1);
        uVar16 = NEON_uaddlv(uVar17,1);
        uVar5 = CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) & 0xffffffff;
        if (uVar5 < 2) {
          uVar11 = uVar11 & uVar9 - 1;
        }
        else if (uVar9 <= uVar11) {
          uVar14 = 0;
          if (uVar9 != 0) {
            uVar14 = uVar11 / uVar9;
          }
          uVar11 = uVar11 - uVar14 * uVar9;
        }
        *(long **)(*param_1 + uVar11 * 8) = param_1 + 2;
        plVar13 = (long *)*plVar10;
        if (plVar13 != (long *)0x0) {
          do {
            uVar14 = plVar13[1];
            if (uVar5 < 2) {
              uVar14 = uVar14 & uVar9 - 1;
            }
            else if (uVar9 <= uVar14) {
              uVar1 = 0;
              if (uVar9 != 0) {
                uVar1 = uVar14 / uVar9;
              }
              uVar14 = uVar14 - uVar1 * uVar9;
            }
            if (uVar14 != uVar11) {
              if (*(long *)(*param_1 + uVar14 * 8) == 0) {
                *(long **)(*param_1 + uVar14 * 8) = plVar10;
                uVar11 = uVar14;
              }
              else {
                *plVar10 = *plVar13;
                *plVar13 = **(long **)(*param_1 + uVar14 * 8);
                **(undefined8 **)(*param_1 + uVar14 * 8) = plVar13;
                plVar13 = plVar10;
              }
            }
            plVar10 = plVar13;
            plVar13 = (long *)*plVar10;
          } while (plVar13 != (long *)0x0);
        }
      }
    }
    else if (uVar9 < uVar15) {
      uVar11 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar15 < 3) {
LAB_0036b6c8:
        uVar11 = std::__ndk1::__next_prime(uVar11);
      }
      else {
        uVar17 = NEON_cnt(uVar15,1);
        uVar16 = NEON_uaddlv(uVar17,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16)) goto LAB_0036b6c8;
        if (1 < uVar11) {
          uVar11 = 1L << (-LZCOUNT(uVar11 - 1) & 0x3fU);
        }
      }
      if (uVar9 <= uVar11) {
        uVar9 = uVar11;
      }
      if (uVar9 < uVar15) {
        if (uVar9 != 0) goto LAB_0036b490;
        pvVar2 = (void *)*param_1;
        *param_1 = 0;
        if (pvVar2 != (void *)0x0) {
          operator_delete(pvVar2);
        }
        param_1[1] = 0;
        uVar15 = 0;
      }
      else {
        uVar15 = param_1[1];
      }
    }
    if ((uVar15 & uVar15 - 1) == 0) {
      unaff_x23 = uVar15 - 1 & uVar6;
    }
    else {
      unaff_x23 = uVar6;
      if (uVar15 <= uVar6) {
        uVar9 = 0;
        if (uVar15 != 0) {
          uVar9 = uVar6 / uVar15;
        }
        unaff_x23 = uVar6 - uVar9 * uVar15;
      }
    }
  }
  lVar8 = *param_1;
  plVar10 = *(long **)(lVar8 + unaff_x23 * 8);
  if (plVar10 == (long *)0x0) {
    plVar10 = param_1 + 2;
    lVar12 = *plVar10;
    *plVar10 = (long)plVar7;
    *plVar7 = lVar12;
    *(long **)(lVar8 + unaff_x23 * 8) = plVar10;
    if (*plVar7 == 0) goto LAB_0036b6a8;
    uVar6 = *(ulong *)(*plVar7 + 8);
    if ((uVar15 & uVar15 - 1) == 0) {
      uVar6 = uVar6 & uVar15 - 1;
    }
    else if (uVar15 <= uVar6) {
      uVar9 = 0;
      if (uVar15 != 0) {
        uVar9 = uVar6 / uVar15;
      }
      uVar6 = uVar6 - uVar9 * uVar15;
    }
    plVar10 = (long *)(*param_1 + uVar6 * 8);
  }
  else {
    *plVar7 = *plVar10;
  }
  *plVar10 = (long)plVar7;
LAB_0036b6a8:
  param_1[3] = param_1[3] + 1;
  return;
}


// ===== 0036b724  rive::ArtboardComponentList::computeLayoutBounds =====

/* rive::ArtboardComponentList::computeLayoutBounds() */

void __thiscall rive::ArtboardComponentList::computeLayoutBounds(ArtboardComponentList *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  float *pfVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  uVar4 = (**(code **)(*(long *)this + 0x340))();
  if ((uVar4 & 1) == 0) {
    return;
  }
  fVar14 = 0.0;
  plVar5 = *(long **)(this + 0x30);
  if (plVar5 == (long *)0x0) {
    fVar15 = 0.0;
  }
  else {
    uVar4 = (**(code **)(*plVar5 + 0x18))(plVar5,0x199);
    fVar15 = 0.0;
    plVar9 = *(long **)(this + 0x30);
    plVar5 = plVar9;
    if (((uVar4 & 1) == 0) || (plVar9 == (long *)0x0)) {
joined_r0x0036b800:
      if (plVar5 == (long *)0x0) goto LAB_0036b840;
    }
    else {
      uVar4 = (**(code **)(*plVar9 + 0x18))(plVar9,0x199);
      plVar5 = *(long **)(this + 0x30);
      if (((uVar4 & 1) == 0) ||
         (((plVar5 == (long *)0x0 || (plVar5[0x3d] == 0)) ||
          ((*(uint *)(plVar5[0x3d] + 0x11c) & 0xfffffffe) == 2)))) {
        lVar6 = plVar9[0x3d];
        if ((lVar6 != 0) && (fVar15 = *(float *)(lVar6 + 0x88), *(int *)(lVar6 + 0x188) == 2)) {
          fVar15 = (fVar15 / 100.0) * *(float *)(plVar9 + 0x40);
        }
        goto joined_r0x0036b800;
      }
      lVar6 = plVar9[0x3d];
      if ((lVar6 != 0) && (fVar15 = *(float *)(lVar6 + 0x8c), *(int *)(lVar6 + 0x18c) == 2)) {
        fVar15 = (fVar15 / 100.0) * *(float *)((long)plVar9 + 0x204);
      }
    }
    uVar4 = (**(code **)(*plVar5 + 0x18))(plVar5,0x199);
    bVar3 = true;
    if (((uVar4 & 1) == 0) || (*(long *)(this + 0x30) == 0)) goto LAB_0036b844;
    lVar6 = *(long *)(*(long *)(this + 0x30) + 0x1e8);
    if (lVar6 != 0) {
      bVar3 = (*(uint *)(lVar6 + 0x11c) & 0xfffffffe) == 2;
      goto LAB_0036b844;
    }
  }
LAB_0036b840:
  bVar3 = true;
LAB_0036b844:
  fVar10 = 0.0;
  lVar6 = *(long *)(this + 0x370) - *(long *)(this + 0x368);
  if (lVar6 != 0) {
    lVar6 = lVar6 >> 3;
    pfVar8 = (float *)(*(long *)(this + 0x368) + 4);
    lVar7 = lVar6 + -1;
    if (lVar6 == 0 || lVar7 == 0) {
      lVar6 = 1;
    }
    do {
      fVar12 = pfVar8[-1];
      fVar11 = *pfVar8;
      fVar13 = 0.0;
      if (lVar7 != 0) {
        fVar13 = fVar15;
      }
      if (bVar3) {
        if (fVar11 <= fVar14) {
          fVar11 = fVar14;
        }
        fVar14 = fVar11;
        fVar10 = fVar10 + fVar13 + fVar12;
      }
      else {
        if (fVar12 <= fVar10) {
          fVar12 = fVar10;
        }
        fVar10 = fVar12;
        fVar14 = fVar14 + fVar13 + fVar11;
      }
      lVar6 = lVar6 + -1;
      lVar7 = lVar7 + -1;
      pfVar8 = pfVar8 + 2;
    } while (lVar6 != 0);
  }
  puVar1 = *(undefined8 **)(this + 0x1a0);
  puVar2 = *(undefined8 **)(this + 0x1a8);
  *(float *)(this + 0x380) = fVar10;
  *(float *)(this + 900) = fVar14;
  while( true ) {
    if (puVar1 == puVar2) {
      return;
    }
    plVar9 = (long *)*puVar1;
    plVar5 = (long *)(**(code **)(*plVar9 + 0x10))(plVar9);
    uVar4 = (**(code **)(*plVar5 + 0x18))(plVar5,0x209);
    if ((uVar4 & 1) != 0) break;
    puVar1 = puVar1 + 1;
  }
  lVar6 = (**(code **)(*plVar9 + 0x10))(plVar9);
  if (lVar6 == 0) {
    return;
  }
  ScrollConstraint::constrainVirtualized(SUB81(lVar6,0));
  return;
}


// ===== 0036b970  rive::ArtboardComponentList::stateMachineInstance =====

/* rive::ArtboardComponentList::stateMachineInstance(int) */

ulong __thiscall
rive::ArtboardComponentList::stateMachineInstance(ArtboardComponentList *this,int param_1)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  undefined2 uVar12;
  undefined8 uVar13;
  
  uVar4 = (**(code **)(*(long *)this + 0x340))();
  if ((uVar4 & 1) == 0) {
    if (-1 < param_1) {
      if ((ulong)(uint)param_1 < (ulong)(*(long *)(this + 0x350) - *(long *)(this + 0x348) >> 3)) {
        return *(ulong *)(*(long *)(this + 0x348) + (ulong)(uint)param_1 * 8);
      }
    }
  }
  else if (-1 < param_1) {
    if ((ulong)(uint)param_1 < (ulong)(*(long *)(this + 0x1f0) - *(long *)(this + 0x1e8) >> 3)) {
      plVar11 = *(long **)(*(long *)(this + 0x1e8) + (ulong)(uint)param_1 * 8);
      if (plVar11 != (long *)0x0) {
        uVar4 = FUN_00340fb0(1,(long)plVar11 + 0x14);
      }
      uVar5 = *(ulong *)(this + 0x270);
      if (uVar5 != 0) {
        uVar6 = ((ulong)(uint)((int)plVar11 << 3) + 8 ^ (ulong)plVar11 >> 0x20) *
                -0x622015f714c7d297;
        uVar13 = NEON_cnt(uVar5,1);
        uVar12 = NEON_uaddlv(uVar13,1);
        uVar6 = ((ulong)plVar11 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
        uVar7 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
        uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
        if (uVar7 < 2) {
          uVar8 = uVar6 & uVar5 - 1;
        }
        else {
          uVar8 = uVar6;
          if (uVar5 <= uVar6) {
            uVar8 = 0;
            if (uVar5 != 0) {
              uVar8 = uVar6 / uVar5;
            }
            uVar8 = uVar6 - uVar8 * uVar5;
          }
        }
        plVar9 = *(long **)(*(long *)(this + 0x268) + uVar8 * 8);
        if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
          do {
            uVar10 = plVar9[1];
            if (uVar10 == uVar6) {
              if ((long *)plVar9[2] == plVar11) {
                uVar4 = plVar9[3];
                bVar2 = false;
                goto joined_r0x0036bb20;
              }
            }
            else {
              if (uVar7 < 2) {
                uVar10 = uVar10 & uVar5 - 1;
              }
              else if (uVar5 <= uVar10) {
                uVar1 = 0;
                if (uVar5 != 0) {
                  uVar1 = uVar10 / uVar5;
                }
                uVar10 = uVar10 - uVar1 * uVar5;
              }
              if (uVar10 != uVar8) break;
            }
            plVar9 = (long *)*plVar9;
          } while (plVar9 != (long *)0x0);
        }
      }
      bVar2 = true;
joined_r0x0036bb20:
      if ((plVar11 != (long *)0x0) &&
         (iVar3 = FUN_00340fe0(0xffffffff,(long)plVar11 + 0x14), iVar3 == 1)) {
        (**(code **)(*plVar11 + 8))(plVar11);
      }
      if (!bVar2) {
        return uVar4;
      }
    }
  }
  return 0;
}


// ===== 0036bb28  rive::ArtboardComponentList::clear =====

/* rive::ArtboardComponentList::clear() */

void __thiscall rive::ArtboardComponentList::clear(ArtboardComponentList *this)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  
  for (plVar5 = *(long **)(this + 0x250); plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
    if ((Artboard *)plVar5[3] != (Artboard *)0x0) {
      Artboard::cleanupSemanticTree((Artboard *)plVar5[3]);
    }
  }
  if (*(long *)(this + 0x440) != 0) {
    puVar7 = (undefined8 *)*(void **)(this + 0x438);
    while (puVar7 != (undefined8 *)0x0) {
      pvVar6 = (void *)*puVar7;
      FUN_0036c094(puVar7 + 2);
      operator_delete(puVar7);
      puVar7 = (undefined8 *)pvVar6;
    }
    lVar3 = *(long *)(this + 0x430);
    *(undefined8 *)(this + 0x438) = 0;
    if (lVar3 != 0) {
      lVar4 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x428) + lVar4 * 8) = 0;
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar4);
    }
    *(undefined8 *)(this + 0x440) = 0;
  }
  plVar5 = *(long **)(this + 0x250);
  this[0x40b] = (ArtboardComponentList)0x0;
  for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
    if ((Artboard *)plVar5[3] != (Artboard *)0x0) {
      Artboard::cleanupFocusTree((Artboard *)plVar5[3]);
    }
  }
  plVar5 = *(long **)(this + 0x3f0);
  if (plVar5 != (long *)0x0) {
    lVar3 = *(long *)(this + 0x40);
    do {
      puVar8 = (undefined8 *)plVar5[4];
      for (puVar7 = (undefined8 *)plVar5[3]; puVar7 != puVar8; puVar7 = puVar7 + 1) {
        (**(code **)(*(long *)*puVar7 + 0x80))();
        if (lVar3 != 0) {
          DataBindContainer::removeDataBind
                    ((DataBindContainer *)(lVar3 + 0x9b0),(DataBind *)*puVar7);
        }
      }
      plVar5 = (long *)*plVar5;
    } while (plVar5 != (long *)0x0);
  }
  if (*(long *)(this + 0x3f8) != 0) {
    puVar7 = (undefined8 *)*(void **)(this + 0x3f0);
    while (puVar7 != (undefined8 *)0x0) {
      plVar5 = (long *)puVar7[3];
      pvVar6 = (void *)*puVar7;
      if (plVar5 != (long *)0x0) {
        plVar9 = (long *)puVar7[4];
        plVar2 = plVar5;
        if (plVar9 != plVar5) {
          do {
            plVar9 = plVar9 + -1;
            plVar2 = (long *)*plVar9;
            *plVar9 = 0;
            if (plVar2 != (long *)0x0) {
              (**(code **)(*plVar2 + 8))();
            }
          } while (plVar9 != plVar5);
          plVar2 = (long *)puVar7[3];
        }
        puVar7[4] = plVar5;
        operator_delete(plVar2);
      }
      plVar5 = (long *)puVar7[2];
      if ((plVar5 != (long *)0x0) &&
         (iVar1 = FUN_00340fe0(0xffffffff,(long)plVar5 + 0x14), iVar1 == 1)) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
      operator_delete(puVar7);
      puVar7 = (undefined8 *)pvVar6;
    }
    lVar3 = *(long *)(this + 1000);
    *(undefined8 *)(this + 0x3f0) = 0;
    if (lVar3 != 0) {
      lVar4 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x3e0) + lVar4 * 8) = 0;
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar4);
    }
    *(undefined8 *)(this + 0x3f8) = 0;
  }
  for (plVar5 = *(long **)(this + 0x278); plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
    plVar2 = (long *)plVar5[3];
    plVar5[3] = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  for (plVar5 = *(long **)(this + 0x250); plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
    plVar2 = (long *)plVar5[3];
    plVar5[3] = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  if (*(long *)(this + 0x280) != 0) {
    puVar7 = (undefined8 *)*(void **)(this + 0x278);
    while (puVar7 != (undefined8 *)0x0) {
      plVar5 = (long *)puVar7[3];
      pvVar6 = (void *)*puVar7;
      puVar7[3] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)puVar7[2];
      if ((plVar5 != (long *)0x0) &&
         (iVar1 = FUN_00340fe0(0xffffffff,(long)plVar5 + 0x14), iVar1 == 1)) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
      operator_delete(puVar7);
      puVar7 = (undefined8 *)pvVar6;
    }
    lVar3 = *(long *)(this + 0x270);
    *(undefined8 *)(this + 0x278) = 0;
    if (lVar3 != 0) {
      lVar4 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x268) + lVar4 * 8) = 0;
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar4);
    }
    *(undefined8 *)(this + 0x280) = 0;
  }
  *(undefined8 *)(this + 0x338) = *(undefined8 *)(this + 0x330);
  *(undefined8 *)(this + 0x350) = *(undefined8 *)(this + 0x348);
  if (*(long *)(this + 600) != 0) {
    puVar7 = (undefined8 *)*(void **)(this + 0x250);
    while (puVar7 != (undefined8 *)0x0) {
      plVar5 = (long *)puVar7[3];
      pvVar6 = (void *)*puVar7;
      puVar7[3] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)puVar7[2];
      if ((plVar5 != (long *)0x0) &&
         (iVar1 = FUN_00340fe0(0xffffffff,(long)plVar5 + 0x14), iVar1 == 1)) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
      operator_delete(puVar7);
      puVar7 = (undefined8 *)pvVar6;
    }
    lVar3 = *(long *)(this + 0x248);
    *(undefined8 *)(this + 0x250) = 0;
    if (lVar3 != 0) {
      lVar4 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x240) + lVar4 * 8) = 0;
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar4);
    }
    *(undefined8 *)(this + 600) = 0;
  }
  puVar7 = *(undefined8 **)(this + 0x1e8);
  puVar8 = *(undefined8 **)(this + 0x1f0);
  while (puVar8 != puVar7) {
    puVar8 = puVar8 + -1;
    plVar5 = (long *)*puVar8;
    if ((plVar5 != (long *)0x0) &&
       (iVar1 = FUN_00340fe0(0xffffffff,(long)plVar5 + 0x14), iVar1 == 1)) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
  }
  *(undefined8 **)(this + 0x1f0) = puVar7;
  if (*(long *)(this + 0x230) != 0) {
    puVar7 = (undefined8 *)*(void **)(this + 0x228);
    while (puVar7 != (undefined8 *)0x0) {
      pvVar6 = (void *)*puVar7;
      operator_delete(puVar7);
      puVar7 = (undefined8 *)pvVar6;
    }
    lVar3 = *(long *)(this + 0x220);
    *(undefined8 *)(this + 0x228) = 0;
    if (lVar3 != 0) {
      lVar4 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x218) + lVar4 * 8) = 0;
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar4);
    }
    *(undefined8 *)(this + 0x230) = 0;
  }
  if (*(long *)(this + 0x2a8) != 0) {
    puVar7 = (undefined8 *)*(void **)(this + 0x2a0);
    while (puVar7 != (undefined8 *)0x0) {
      plVar5 = (long *)puVar7[3];
      pvVar6 = (void *)*puVar7;
      if (plVar5 != (long *)0x0) {
        plVar9 = (long *)puVar7[4];
        plVar2 = plVar5;
        if (plVar9 != plVar5) {
          do {
            plVar9 = plVar9 + -1;
            plVar2 = (long *)*plVar9;
            *plVar9 = 0;
            if (plVar2 != (long *)0x0) {
              (**(code **)(*plVar2 + 8))();
            }
          } while (plVar9 != plVar5);
          plVar2 = (long *)puVar7[3];
        }
        puVar7[4] = plVar5;
        operator_delete(plVar2);
      }
      operator_delete(puVar7);
      puVar7 = (undefined8 *)pvVar6;
    }
    lVar3 = *(long *)(this + 0x298);
    *(undefined8 *)(this + 0x2a0) = 0;
    if (lVar3 != 0) {
      lVar4 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x290) + lVar4 * 8) = 0;
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar4);
    }
    *(undefined8 *)(this + 0x2a8) = 0;
  }
  if (*(long *)(this + 0x2d0) != 0) {
    puVar7 = (undefined8 *)*(void **)(this + 0x2c8);
    while (puVar7 != (undefined8 *)0x0) {
      plVar5 = (long *)puVar7[3];
      pvVar6 = (void *)*puVar7;
      if (plVar5 != (long *)0x0) {
        plVar9 = (long *)puVar7[4];
        plVar2 = plVar5;
        if (plVar9 != plVar5) {
          do {
            plVar9 = plVar9 + -1;
            plVar2 = (long *)*plVar9;
            *plVar9 = 0;
            if (plVar2 != (long *)0x0) {
              (**(code **)(*plVar2 + 8))();
            }
          } while (plVar9 != plVar5);
          plVar2 = (long *)puVar7[3];
        }
        puVar7[4] = plVar5;
        operator_delete(plVar2);
      }
      operator_delete(puVar7);
      puVar7 = (undefined8 *)pvVar6;
    }
    lVar3 = *(long *)(this + 0x2c0);
    *(undefined8 *)(this + 0x2c8) = 0;
    if (lVar3 != 0) {
      lVar4 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x2b8) + lVar4 * 8) = 0;
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar4);
    }
    *(undefined8 *)(this + 0x2d0) = 0;
  }
  if (*(long *)(this + 0x3a8) != 0) {
    puVar7 = (undefined8 *)*(void **)(this + 0x3a0);
    while (puVar7 != (undefined8 *)0x0) {
      pvVar6 = (void *)*puVar7;
      operator_delete(puVar7);
      puVar7 = (undefined8 *)pvVar6;
    }
    lVar3 = *(long *)(this + 0x398);
    *(undefined8 *)(this + 0x3a0) = 0;
    if (lVar3 != 0) {
      lVar4 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x390) + lVar4 * 8) = 0;
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar4);
    }
    *(undefined8 *)(this + 0x3a8) = 0;
  }
  return;
}


// ===== 0036c094  FUN_0036c094 =====

/* WARNING: Removing unreachable block (ram,0x0036c148) */

void FUN_0036c094(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  void *pvVar5;
  long *plVar6;
  long lVar7;
  
  pvVar5 = (void *)param_1[1];
  param_1[1] = 0;
  if (pvVar5 != (void *)0x0) {
    lVar7 = *(long *)((long)pvVar5 + 0x10);
    if (lVar7 != 0) {
      plVar2 = *(long **)(lVar7 + 0xf0);
      plVar6 = *(long **)(lVar7 + 0xe8);
      plVar3 = plVar6;
      for (; (plVar6 != plVar2 && (plVar3 = plVar6, (void *)*plVar6 != pvVar5)); plVar6 = plVar6 + 1
          ) {
        plVar3 = plVar2;
      }
      if ((plVar3 != plVar2) && (plVar6 = plVar3 + 1, plVar4 = plVar3, plVar6 != plVar2)) {
        do {
          plVar3 = plVar4;
          if ((void *)*plVar6 != pvVar5) {
            plVar3 = plVar4 + 1;
            *plVar4 = *plVar6;
          }
          plVar6 = plVar6 + 1;
          plVar4 = plVar3;
        } while (plVar6 != plVar2);
        plVar2 = *(long **)(lVar7 + 0xf0);
      }
      if (plVar3 != plVar2) {
        *(long **)(lVar7 + 0xf0) = plVar3;
      }
      plVar6 = *(long **)((long)pvVar5 + 0x10);
      *(undefined8 *)((long)pvVar5 + 0x10) = 0;
      if (plVar6 != (long *)0x0) {
        iVar1 = FUN_00340fe0(0xffffffff,(long)plVar6 + 0x8c);
        if (iVar1 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
        plVar6 = *(long **)((long)pvVar5 + 0x10);
        if ((plVar6 != (long *)0x0) &&
           (iVar1 = FUN_00340fe0(0xffffffff,(long)plVar6 + 0x8c), iVar1 == 1)) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
      }
    }
    operator_delete(pvVar5);
  }
  plVar6 = (long *)*param_1;
  if ((plVar6 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,(long)plVar6 + 0x14), iVar1 == 1))
  {
                    /* WARNING: Could not recover jumptable at 0x0036c1f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 8))(plVar6);
    return;
  }
  return;
}


// ===== 0036c210  FUN_0036c210 =====

void FUN_0036c210(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 0036c224  rive::ArtboardComponentList::findArtboard =====

/* rive::ArtboardComponentList::findArtboard(rive::rcp<rive::ViewModelInstanceListItem> const&)
   const */

long __thiscall rive::ArtboardComponentList::findArtboard(ArtboardComponentList *this,rcp *param_1)

{
  ArtboardComponentList *pAVar1;
  void *__src;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  long *__dest;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined2 uVar18;
  undefined8 uVar19;
  uint local_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  plVar14 = *(long **)(*(long *)param_1 + 0x18);
  if (plVar14 != (long *)0x0) {
    FUN_00340fb0(1,(long)plVar14 + 0xa4);
    uVar2 = *(uint *)(plVar14 + 0x14);
    uVar16 = (ulong)uVar2;
    uVar8 = *(ulong *)(this + 0x220);
    pAVar1 = this + 0x218;
    uVar15 = (ulong)(int)uVar2;
    local_6c = uVar2;
    if (uVar8 != 0) {
      uVar19 = NEON_cnt(uVar8,1);
      uVar18 = NEON_uaddlv(uVar19,1);
      uVar9 = CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar18) & 0xffffffff;
      if (uVar9 < 2) {
        uVar10 = (ulong)((int)uVar8 - 1U & uVar2);
      }
      else {
        uVar10 = uVar16;
        if (uVar8 <= uVar16) {
          uVar10 = 0;
          if (uVar8 != 0) {
            uVar10 = uVar16 / uVar8;
          }
          uVar10 = uVar16 - uVar10 * uVar8;
        }
      }
      plVar11 = *(long **)(*(long *)pAVar1 + uVar10 * 8);
      if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
        do {
          uVar13 = plVar11[1];
          if (uVar13 == uVar16) {
            if (*(uint *)(plVar11 + 2) == uVar2) {
              lVar17 = plVar11[3];
              goto LAB_0036c480;
            }
          }
          else {
            if (uVar9 < 2) {
              uVar13 = uVar13 & uVar8 - 1;
            }
            else if (uVar8 <= uVar13) {
              uVar3 = 0;
              if (uVar8 != 0) {
                uVar3 = uVar13 / uVar8;
              }
              uVar13 = uVar13 - uVar3 * uVar8;
            }
            if (uVar13 != uVar10) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
    __src = *(void **)(*(long *)(this + 0x360) + 0x88);
    uVar8 = *(long *)(*(long *)(this + 0x360) + 0x90) - (long)__src;
    if (uVar8 == 0) {
      __dest = (long *)0x0;
      plVar11 = (long *)0x0;
      uVar8 = *(ulong *)(this + 0x3c0);
    }
    else {
      if ((long)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0036e030();
      }
      __dest = (long *)operator_new(uVar8);
      plVar11 = (long *)((long)__dest + uVar8);
      memcpy(__dest,__src,uVar8);
      uVar8 = *(ulong *)(this + 0x3c0);
    }
    plVar5 = __dest;
    if (uVar8 != 0) {
      uVar19 = NEON_cnt(uVar8,1);
      uVar18 = NEON_uaddlv(uVar19,1);
      uVar9 = CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar18) & 0xffffffff;
      if (uVar9 < 2) {
        uVar10 = uVar8 - 1 & uVar15;
      }
      else {
        uVar10 = uVar15;
        if (uVar8 <= uVar15) {
          uVar10 = 0;
          if (uVar8 != 0) {
            uVar10 = uVar15 / uVar8;
          }
          uVar10 = uVar15 - uVar10 * uVar8;
        }
      }
      plVar12 = *(long **)(*(long *)(this + 0x3b8) + uVar10 * 8);
      if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
        do {
          uVar13 = plVar12[1];
          if (uVar13 == uVar15) {
            if (*(uint *)(plVar12 + 2) == uVar2) {
              if ((ulong)(long)*(int *)((long)plVar12 + 0x14) <
                  (ulong)((long)plVar11 - (long)__dest >> 3)) {
                lVar17 = __dest[*(int *)((long)plVar12 + 0x14)];
                lVar7 = FUN_0036e044(pAVar1,uVar2,&local_6c);
                *(long *)(lVar7 + 0x18) = lVar17;
                goto LAB_0036c478;
              }
              break;
            }
          }
          else {
            if (uVar9 < 2) {
              uVar13 = uVar13 & uVar8 - 1;
            }
            else if (uVar8 <= uVar13) {
              uVar3 = 0;
              if (uVar8 != 0) {
                uVar3 = uVar13 / uVar8;
              }
              uVar13 = uVar13 - uVar3 * uVar8;
            }
            if (uVar13 != uVar10) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
    do {
      if (plVar5 == plVar11) goto LAB_0036c470;
      lVar17 = *plVar5;
      if (*(uint *)(lVar17 + 0x990) == uVar2) {
        lVar7 = FUN_0036e044(pAVar1,uVar16,&local_6c);
        *(long *)(lVar7 + 0x18) = lVar17;
        lVar17 = *plVar5;
        goto joined_r0x0036c4f0;
      }
      plVar5 = plVar5 + 1;
    } while( true );
  }
  lVar17 = 0;
LAB_0036c4a4:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return lVar17;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0036c470:
  lVar17 = 0;
joined_r0x0036c4f0:
  if (__dest != (long *)0x0) {
LAB_0036c478:
    operator_delete(__dest);
  }
LAB_0036c480:
  iVar6 = FUN_00340fe0(0xffffffff,(long)plVar14 + 0xa4);
  if (iVar6 == 1) {
    (**(code **)(*plVar14 + 8))(plVar14);
  }
  goto LAB_0036c4a4;
}


// ===== 0036c500  FUN_0036c500 =====

long * FUN_0036c500(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong unaff_x24;
  undefined2 uVar15;
  undefined8 uVar16;
  float fVar17;
  
  uVar14 = param_1[1];
  uVar6 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ param_2 >> 0x20) * -0x622015f714c7d297;
  uVar6 = (param_2 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
  uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  if (uVar14 != 0) {
    uVar16 = NEON_cnt(uVar14,1);
    uVar15 = NEON_uaddlv(uVar16,1);
    uVar8 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
    if (uVar8 < 2) {
      unaff_x24 = uVar6 & uVar14 - 1;
    }
    else {
      unaff_x24 = uVar6;
      if (uVar14 <= uVar6) {
        uVar10 = 0;
        if (uVar14 != 0) {
          uVar10 = uVar6 / uVar14;
        }
        unaff_x24 = uVar6 - uVar10 * uVar14;
      }
    }
    plVar7 = *(long **)(*param_1 + unaff_x24 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar10 = plVar7[1];
        if (uVar10 == uVar6) {
          if (plVar7[2] == param_2) {
            return plVar7;
          }
        }
        else {
          if (uVar8 < 2) {
            uVar10 = uVar10 & uVar14 - 1;
          }
          else if (uVar14 <= uVar10) {
            uVar5 = 0;
            if (uVar14 != 0) {
              uVar5 = uVar10 / uVar14;
            }
            uVar10 = uVar10 - uVar5 * uVar14;
          }
          if (uVar10 != unaff_x24) break;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  plVar7 = (long *)operator_new(0x20);
  lVar13 = *param_3;
  *plVar7 = 0;
  plVar7[1] = uVar6;
  if (lVar13 != 0) {
    FUN_00340fb0(1,lVar13 + 0x14);
  }
  lVar3 = param_1[3];
  fVar17 = *(float *)(param_1 + 4);
  plVar7[2] = lVar13;
  plVar7[3] = 0;
  if ((uVar14 == 0) || (fVar17 * (float)uVar14 < (float)(lVar3 + 1))) {
    if (uVar14 < 3) {
      uVar8 = 1;
    }
    else {
      uVar8 = (ulong)((uVar14 & uVar14 - 1) != 0);
    }
    uVar8 = uVar8 | uVar14 << 1;
    uVar14 = (ulong)((float)(lVar3 + 1) / fVar17);
    if (uVar8 <= uVar14) {
      uVar8 = uVar14;
    }
    if (uVar8 - 1 == 0) {
      uVar8 = 2;
    }
    else if ((uVar8 & uVar8 - 1) != 0) {
      uVar8 = std::__ndk1::__next_prime(uVar8);
    }
    uVar14 = param_1[1];
    if (uVar14 < uVar8) {
LAB_0036c6ac:
      if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00324008();
      }
      pvVar2 = operator_new(uVar8 << 3);
      pvVar4 = (void *)*param_1;
      *param_1 = (long)pvVar2;
      if (pvVar4 != (void *)0x0) {
        operator_delete(pvVar4);
      }
      uVar14 = 0;
      param_1[1] = uVar8;
      do {
        *(undefined8 *)(*param_1 + uVar14 * 8) = 0;
        uVar14 = uVar14 + 1;
      } while (uVar8 != uVar14);
      plVar9 = (long *)param_1[2];
      uVar14 = uVar8;
      if (plVar9 != (long *)0x0) {
        uVar10 = plVar9[1];
        uVar16 = NEON_cnt(uVar8,1);
        uVar15 = NEON_uaddlv(uVar16,1);
        uVar5 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
        if (uVar5 < 2) {
          uVar10 = uVar10 & uVar8 - 1;
        }
        else if (uVar8 <= uVar10) {
          uVar12 = 0;
          if (uVar8 != 0) {
            uVar12 = uVar10 / uVar8;
          }
          uVar10 = uVar10 - uVar12 * uVar8;
        }
        *(long **)(*param_1 + uVar10 * 8) = param_1 + 2;
        plVar11 = (long *)*plVar9;
        if (plVar11 != (long *)0x0) {
          do {
            uVar12 = plVar11[1];
            if (uVar5 < 2) {
              uVar12 = uVar12 & uVar8 - 1;
            }
            else if (uVar8 <= uVar12) {
              uVar1 = 0;
              if (uVar8 != 0) {
                uVar1 = uVar12 / uVar8;
              }
              uVar12 = uVar12 - uVar1 * uVar8;
            }
            if (uVar12 != uVar10) {
              if (*(long *)(*param_1 + uVar12 * 8) == 0) {
                *(long **)(*param_1 + uVar12 * 8) = plVar9;
                uVar10 = uVar12;
              }
              else {
                *plVar9 = *plVar11;
                *plVar11 = **(long **)(*param_1 + uVar12 * 8);
                **(undefined8 **)(*param_1 + uVar12 * 8) = plVar11;
                plVar11 = plVar9;
              }
            }
            plVar9 = plVar11;
            plVar11 = (long *)*plVar9;
          } while (plVar11 != (long *)0x0);
        }
      }
    }
    else if (uVar8 < uVar14) {
      uVar10 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar14 < 3) {
LAB_0036c8e0:
        uVar10 = std::__ndk1::__next_prime(uVar10);
      }
      else {
        uVar16 = NEON_cnt(uVar14,1);
        uVar15 = NEON_uaddlv(uVar16,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15)) goto LAB_0036c8e0;
        if (1 < uVar10) {
          uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
        }
      }
      if (uVar8 <= uVar10) {
        uVar8 = uVar10;
      }
      if (uVar8 < uVar14) {
        if (uVar8 != 0) goto LAB_0036c6ac;
        pvVar2 = (void *)*param_1;
        *param_1 = 0;
        if (pvVar2 != (void *)0x0) {
          operator_delete(pvVar2);
        }
        param_1[1] = 0;
        uVar14 = 0;
      }
      else {
        uVar14 = param_1[1];
      }
    }
    if ((uVar14 & uVar14 - 1) == 0) {
      unaff_x24 = uVar14 - 1 & uVar6;
    }
    else {
      unaff_x24 = uVar6;
      if (uVar14 <= uVar6) {
        uVar8 = 0;
        if (uVar14 != 0) {
          uVar8 = uVar6 / uVar14;
        }
        unaff_x24 = uVar6 - uVar8 * uVar14;
      }
    }
  }
  lVar13 = *param_1;
  plVar9 = *(long **)(lVar13 + unaff_x24 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_1 + 2;
    lVar3 = *plVar9;
    *plVar9 = (long)plVar7;
    *plVar7 = lVar3;
    *(long **)(lVar13 + unaff_x24 * 8) = plVar9;
    if (*plVar7 == 0) goto LAB_0036c8bc;
    uVar6 = *(ulong *)(*plVar7 + 8);
    if ((uVar14 & uVar14 - 1) == 0) {
      uVar6 = uVar6 & uVar14 - 1;
    }
    else if (uVar14 <= uVar6) {
      uVar8 = 0;
      if (uVar14 != 0) {
        uVar8 = uVar6 / uVar14;
      }
      uVar6 = uVar6 - uVar8 * uVar14;
    }
    plVar9 = (long *)(*param_1 + uVar6 * 8);
  }
  else {
    *plVar7 = *plVar9;
  }
  *plVar9 = (long)plVar7;
LAB_0036c8bc:
  param_1[3] = param_1[3] + 1;
  return plVar7;
}


// ===== 0036c920  FUN_0036c920 =====

void FUN_0036c920(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x23;
  undefined2 uVar15;
  undefined8 uVar16;
  float fVar17;
  
  uVar14 = param_1[1];
  uVar6 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ param_2 >> 0x20) * -0x622015f714c7d297;
  uVar6 = (param_2 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
  uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  if (uVar14 != 0) {
    uVar16 = NEON_cnt(uVar14,1);
    uVar15 = NEON_uaddlv(uVar16,1);
    uVar9 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
    if (uVar9 < 2) {
      unaff_x23 = uVar6 & uVar14 - 1;
    }
    else {
      unaff_x23 = uVar6;
      if (uVar14 <= uVar6) {
        uVar11 = 0;
        if (uVar14 != 0) {
          uVar11 = uVar6 / uVar14;
        }
        unaff_x23 = uVar6 - uVar11 * uVar14;
      }
    }
    plVar7 = *(long **)(*param_1 + unaff_x23 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar11 = plVar7[1];
        if (uVar11 == uVar6) {
          if (plVar7[2] == param_2) {
            return;
          }
        }
        else {
          if (uVar9 < 2) {
            uVar11 = uVar11 & uVar14 - 1;
          }
          else if (uVar14 <= uVar11) {
            uVar5 = 0;
            if (uVar14 != 0) {
              uVar5 = uVar11 / uVar14;
            }
            uVar11 = uVar11 - uVar5 * uVar14;
          }
          if (uVar11 != unaff_x23) break;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  plVar7 = (long *)operator_new(0x30);
  lVar3 = param_1[3];
  lVar8 = *param_3;
  fVar17 = *(float *)(param_1 + 4);
  *plVar7 = 0;
  plVar7[1] = uVar6;
  plVar7[2] = lVar8;
  plVar7[3] = 0;
  plVar7[4] = 0;
  plVar7[5] = 0;
  if ((uVar14 == 0) || (fVar17 * (float)uVar14 < (float)(lVar3 + 1))) {
    if (uVar14 < 3) {
      uVar9 = 1;
    }
    else {
      uVar9 = (ulong)((uVar14 & uVar14 - 1) != 0);
    }
    uVar9 = uVar9 | uVar14 << 1;
    uVar11 = (ulong)((float)(lVar3 + 1) / fVar17);
    if (uVar9 <= uVar11) {
      uVar9 = uVar11;
    }
    if (uVar9 - 1 == 0) {
      uVar9 = 2;
    }
    else if ((uVar9 & uVar9 - 1) != 0) {
      uVar9 = std::__ndk1::__next_prime(uVar9);
      uVar14 = param_1[1];
    }
    if (uVar14 < uVar9) {
LAB_0036cac4:
      if (uVar9 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00324008();
      }
      pvVar2 = operator_new(uVar9 << 3);
      pvVar4 = (void *)*param_1;
      *param_1 = (long)pvVar2;
      if (pvVar4 != (void *)0x0) {
        operator_delete(pvVar4);
      }
      uVar14 = 0;
      param_1[1] = uVar9;
      do {
        *(undefined8 *)(*param_1 + uVar14 * 8) = 0;
        uVar14 = uVar14 + 1;
      } while (uVar9 != uVar14);
      plVar10 = (long *)param_1[2];
      uVar14 = uVar9;
      if (plVar10 != (long *)0x0) {
        uVar11 = plVar10[1];
        uVar16 = NEON_cnt(uVar9,1);
        uVar15 = NEON_uaddlv(uVar16,1);
        uVar5 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
        if (uVar5 < 2) {
          uVar11 = uVar11 & uVar9 - 1;
        }
        else if (uVar9 <= uVar11) {
          uVar13 = 0;
          if (uVar9 != 0) {
            uVar13 = uVar11 / uVar9;
          }
          uVar11 = uVar11 - uVar13 * uVar9;
        }
        *(long **)(*param_1 + uVar11 * 8) = param_1 + 2;
        plVar12 = (long *)*plVar10;
        if (plVar12 != (long *)0x0) {
          do {
            uVar13 = plVar12[1];
            if (uVar5 < 2) {
              uVar13 = uVar13 & uVar9 - 1;
            }
            else if (uVar9 <= uVar13) {
              uVar1 = 0;
              if (uVar9 != 0) {
                uVar1 = uVar13 / uVar9;
              }
              uVar13 = uVar13 - uVar1 * uVar9;
            }
            if (uVar13 != uVar11) {
              if (*(long *)(*param_1 + uVar13 * 8) == 0) {
                *(long **)(*param_1 + uVar13 * 8) = plVar10;
                uVar11 = uVar13;
              }
              else {
                *plVar10 = *plVar12;
                *plVar12 = **(long **)(*param_1 + uVar13 * 8);
                **(undefined8 **)(*param_1 + uVar13 * 8) = plVar12;
                plVar12 = plVar10;
              }
            }
            plVar10 = plVar12;
            plVar12 = (long *)*plVar10;
          } while (plVar12 != (long *)0x0);
        }
      }
    }
    else if (uVar9 < uVar14) {
      uVar11 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar14 < 3) {
LAB_0036ccfc:
        uVar11 = std::__ndk1::__next_prime(uVar11);
      }
      else {
        uVar16 = NEON_cnt(uVar14,1);
        uVar15 = NEON_uaddlv(uVar16,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15)) goto LAB_0036ccfc;
        if (1 < uVar11) {
          uVar11 = 1L << (-LZCOUNT(uVar11 - 1) & 0x3fU);
        }
      }
      if (uVar9 <= uVar11) {
        uVar9 = uVar11;
      }
      if (uVar9 < uVar14) {
        if (uVar9 != 0) goto LAB_0036cac4;
        pvVar2 = (void *)*param_1;
        *param_1 = 0;
        if (pvVar2 != (void *)0x0) {
          operator_delete(pvVar2);
        }
        param_1[1] = 0;
        uVar14 = 0;
      }
      else {
        uVar14 = param_1[1];
      }
    }
    if ((uVar14 & uVar14 - 1) == 0) {
      unaff_x23 = uVar14 - 1 & uVar6;
    }
    else {
      unaff_x23 = uVar6;
      if (uVar14 <= uVar6) {
        uVar9 = 0;
        if (uVar14 != 0) {
          uVar9 = uVar6 / uVar14;
        }
        unaff_x23 = uVar6 - uVar9 * uVar14;
      }
    }
  }
  lVar3 = *param_1;
  plVar10 = *(long **)(lVar3 + unaff_x23 * 8);
  if (plVar10 == (long *)0x0) {
    plVar10 = param_1 + 2;
    lVar8 = *plVar10;
    *plVar10 = (long)plVar7;
    *plVar7 = lVar8;
    *(long **)(lVar3 + unaff_x23 * 8) = plVar10;
    if (*plVar7 == 0) goto LAB_0036ccdc;
    uVar6 = *(ulong *)(*plVar7 + 8);
    if ((uVar14 & uVar14 - 1) == 0) {
      uVar6 = uVar6 & uVar14 - 1;
    }
    else if (uVar14 <= uVar6) {
      uVar9 = 0;
      if (uVar14 != 0) {
        uVar9 = uVar6 / uVar14;
      }
      uVar6 = uVar6 - uVar9 * uVar14;
    }
    plVar10 = (long *)(*param_1 + uVar6 * 8);
  }
  else {
    *plVar7 = *plVar10;
  }
  *plVar10 = (long)plVar7;
LAB_0036ccdc:
  param_1[3] = param_1[3] + 1;
  return;
}


// ===== 0036cd58  FUN_0036cd58 =====

void FUN_0036cd58(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x23;
  undefined2 uVar15;
  undefined8 uVar16;
  float fVar17;
  
  uVar14 = param_1[1];
  uVar6 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ param_2 >> 0x20) * -0x622015f714c7d297;
  uVar6 = (param_2 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
  uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  if (uVar14 != 0) {
    uVar16 = NEON_cnt(uVar14,1);
    uVar15 = NEON_uaddlv(uVar16,1);
    uVar9 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
    if (uVar9 < 2) {
      unaff_x23 = uVar6 & uVar14 - 1;
    }
    else {
      unaff_x23 = uVar6;
      if (uVar14 <= uVar6) {
        uVar11 = 0;
        if (uVar14 != 0) {
          uVar11 = uVar6 / uVar14;
        }
        unaff_x23 = uVar6 - uVar11 * uVar14;
      }
    }
    plVar7 = *(long **)(*param_1 + unaff_x23 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar11 = plVar7[1];
        if (uVar11 == uVar6) {
          if (plVar7[2] == param_2) {
            return;
          }
        }
        else {
          if (uVar9 < 2) {
            uVar11 = uVar11 & uVar14 - 1;
          }
          else if (uVar14 <= uVar11) {
            uVar5 = 0;
            if (uVar14 != 0) {
              uVar5 = uVar11 / uVar14;
            }
            uVar11 = uVar11 - uVar5 * uVar14;
          }
          if (uVar11 != unaff_x23) break;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  plVar7 = (long *)operator_new(0x30);
  lVar3 = param_1[3];
  lVar8 = *param_3;
  fVar17 = *(float *)(param_1 + 4);
  *plVar7 = 0;
  plVar7[1] = uVar6;
  plVar7[2] = lVar8;
  plVar7[3] = 0;
  plVar7[4] = 0;
  plVar7[5] = 0;
  if ((uVar14 == 0) || (fVar17 * (float)uVar14 < (float)(lVar3 + 1))) {
    if (uVar14 < 3) {
      uVar9 = 1;
    }
    else {
      uVar9 = (ulong)((uVar14 & uVar14 - 1) != 0);
    }
    uVar9 = uVar9 | uVar14 << 1;
    uVar11 = (ulong)((float)(lVar3 + 1) / fVar17);
    if (uVar9 <= uVar11) {
      uVar9 = uVar11;
    }
    if (uVar9 - 1 == 0) {
      uVar9 = 2;
    }
    else if ((uVar9 & uVar9 - 1) != 0) {
      uVar9 = std::__ndk1::__next_prime(uVar9);
      uVar14 = param_1[1];
    }
    if (uVar14 < uVar9) {
LAB_0036cefc:
      if (uVar9 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00324008();
      }
      pvVar2 = operator_new(uVar9 << 3);
      pvVar4 = (void *)*param_1;
      *param_1 = (long)pvVar2;
      if (pvVar4 != (void *)0x0) {
        operator_delete(pvVar4);
      }
      uVar14 = 0;
      param_1[1] = uVar9;
      do {
        *(undefined8 *)(*param_1 + uVar14 * 8) = 0;
        uVar14 = uVar14 + 1;
      } while (uVar9 != uVar14);
      plVar10 = (long *)param_1[2];
      uVar14 = uVar9;
      if (plVar10 != (long *)0x0) {
        uVar11 = plVar10[1];
        uVar16 = NEON_cnt(uVar9,1);
        uVar15 = NEON_uaddlv(uVar16,1);
        uVar5 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
        if (uVar5 < 2) {
          uVar11 = uVar11 & uVar9 - 1;
        }
        else if (uVar9 <= uVar11) {
          uVar13 = 0;
          if (uVar9 != 0) {
            uVar13 = uVar11 / uVar9;
          }
          uVar11 = uVar11 - uVar13 * uVar9;
        }
        *(long **)(*param_1 + uVar11 * 8) = param_1 + 2;
        plVar12 = (long *)*plVar10;
        if (plVar12 != (long *)0x0) {
          do {
            uVar13 = plVar12[1];
            if (uVar5 < 2) {
              uVar13 = uVar13 & uVar9 - 1;
            }
            else if (uVar9 <= uVar13) {
              uVar1 = 0;
              if (uVar9 != 0) {
                uVar1 = uVar13 / uVar9;
              }
              uVar13 = uVar13 - uVar1 * uVar9;
            }
            if (uVar13 != uVar11) {
              if (*(long *)(*param_1 + uVar13 * 8) == 0) {
                *(long **)(*param_1 + uVar13 * 8) = plVar10;
                uVar11 = uVar13;
              }
              else {
                *plVar10 = *plVar12;
                *plVar12 = **(long **)(*param_1 + uVar13 * 8);
                **(undefined8 **)(*param_1 + uVar13 * 8) = plVar12;
                plVar12 = plVar10;
              }
            }
            plVar10 = plVar12;
            plVar12 = (long *)*plVar10;
          } while (plVar12 != (long *)0x0);
        }
      }
    }
    else if (uVar9 < uVar14) {
      uVar11 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar14 < 3) {
LAB_0036d134:
        uVar11 = std::__ndk1::__next_prime(uVar11);
      }
      else {
        uVar16 = NEON_cnt(uVar14,1);
        uVar15 = NEON_uaddlv(uVar16,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15)) goto LAB_0036d134;
        if (1 < uVar11) {
          uVar11 = 1L << (-LZCOUNT(uVar11 - 1) & 0x3fU);
        }
      }
      if (uVar9 <= uVar11) {
        uVar9 = uVar11;
      }
      if (uVar9 < uVar14) {
        if (uVar9 != 0) goto LAB_0036cefc;
        pvVar2 = (void *)*param_1;
        *param_1 = 0;
        if (pvVar2 != (void *)0x0) {
          operator_delete(pvVar2);
        }
        param_1[1] = 0;
        uVar14 = 0;
      }
      else {
        uVar14 = param_1[1];
      }
    }
    if ((uVar14 & uVar14 - 1) == 0) {
      unaff_x23 = uVar14 - 1 & uVar6;
    }
    else {
      unaff_x23 = uVar6;
      if (uVar14 <= uVar6) {
        uVar9 = 0;
        if (uVar14 != 0) {
          uVar9 = uVar6 / uVar14;
        }
        unaff_x23 = uVar6 - uVar9 * uVar14;
      }
    }
  }
  lVar3 = *param_1;
  plVar10 = *(long **)(lVar3 + unaff_x23 * 8);
  if (plVar10 == (long *)0x0) {
    plVar10 = param_1 + 2;
    lVar8 = *plVar10;
    *plVar10 = (long)plVar7;
    *plVar7 = lVar8;
    *(long **)(lVar3 + unaff_x23 * 8) = plVar10;
    if (*plVar7 == 0) goto LAB_0036d114;
    uVar6 = *(ulong *)(*plVar7 + 8);
    if ((uVar14 & uVar14 - 1) == 0) {
      uVar6 = uVar6 & uVar14 - 1;
    }
    else if (uVar14 <= uVar6) {
      uVar9 = 0;
      if (uVar14 != 0) {
        uVar9 = uVar6 / uVar14;
      }
      uVar6 = uVar6 - uVar9 * uVar14;
    }
    plVar10 = (long *)(*param_1 + uVar6 * 8);
  }
  else {
    *plVar7 = *plVar10;
  }
  *plVar10 = (long)plVar7;
LAB_0036d114:
  param_1[3] = param_1[3] + 1;
  return;
}


// ===== 0036d190  FUN_0036d190 =====

long * FUN_0036d190(ulong *param_1,long *param_2)

{
  void *pvVar1;
  void *pvVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  
  lVar14 = param_1[1] - *param_1;
  lVar11 = lVar14 >> 3;
  uVar6 = lVar11 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_0036e008();
LAB_0036d32c:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar4 = param_1[2] - *param_1;
  uVar5 = (long)uVar4 >> 2;
  if (uVar5 <= uVar6) {
    uVar5 = uVar6;
  }
  if (0x7ffffffffffffff7 < uVar4) {
    uVar5 = 0x1fffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3d != 0) goto LAB_0036d32c;
    pvVar2 = operator_new(uVar5 << 3);
  }
  lVar7 = *param_2;
  *param_2 = 0;
  plVar3 = (long *)((long)pvVar2 + lVar11 * 8);
  plVar15 = (long *)*param_1;
  plVar13 = (long *)param_1[1];
  pvVar1 = (void *)((long)pvVar2 + uVar5 * 8);
  plVar10 = plVar3 + 1;
  *plVar3 = lVar7;
  lVar11 = (long)plVar13 - (long)plVar15;
  if (lVar11 == 0) {
    *param_1 = (ulong)plVar3;
    param_1[1] = (ulong)plVar10;
    param_1[2] = (ulong)pvVar1;
    goto LAB_0036d304;
  }
  uVar6 = lVar11 - 8;
  plVar12 = plVar13;
  if ((uVar6 < 0x78) ||
     (((long *)((long)plVar13 + (-8 - (uVar6 & 0xfffffffffffffff8))) < plVar3 &&
      ((long *)((long)pvVar2 + (lVar14 - (uVar6 & 0xfffffffffffffff8)) + -8) < plVar13)))) {
LAB_0036d2ac:
    do {
      plVar12 = plVar12 + -1;
      lVar11 = *plVar12;
      *plVar12 = 0;
      plVar3 = plVar3 + -1;
      *plVar3 = lVar11;
    } while (plVar12 != plVar15);
  }
  else {
    plVar8 = plVar3 + -2;
    uVar6 = (uVar6 >> 3) + 1;
    uVar4 = uVar6 & 0x3ffffffffffffffc;
    plVar12 = plVar13 + -uVar4;
    uVar5 = uVar4;
    do {
      plVar9 = plVar13 + -4;
      lVar16 = plVar13[-3];
      lVar7 = *plVar9;
      lVar14 = plVar13[-1];
      lVar11 = plVar13[-2];
      uVar5 = uVar5 - 4;
      plVar13[-3] = 0;
      *plVar9 = 0;
      plVar13[-1] = 0;
      plVar13[-2] = 0;
      plVar8[-1] = lVar16;
      plVar8[-2] = lVar7;
      plVar8[1] = lVar14;
      *plVar8 = lVar11;
      plVar8 = plVar8 + -4;
      plVar13 = plVar9;
    } while (uVar5 != 0);
    plVar3 = plVar3 + -uVar4;
    if (uVar6 != uVar4) goto LAB_0036d2ac;
  }
  plVar13 = (long *)*param_1;
  plVar15 = (long *)param_1[1];
  *param_1 = (ulong)plVar3;
  param_1[1] = (ulong)plVar10;
  param_1[2] = (ulong)pvVar1;
  while (plVar15 != plVar13) {
    plVar15 = plVar15 + -1;
    plVar3 = (long *)*plVar15;
    *plVar15 = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
LAB_0036d304:
  if (plVar13 != (long *)0x0) {
    operator_delete(plVar13);
  }
  return plVar10;
}


// ===== 0036d330  rive::ArtboardComponentList::removeArtboardAt =====

/* rive::ArtboardComponentList::removeArtboardAt(int) */

void __thiscall
rive::ArtboardComponentList::removeArtboardAt(ArtboardComponentList *this,int param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = (**(code **)(*(long *)this + 0x340))();
  if ((-1 < param_1) && ((uVar3 & 1) == 0)) {
    if ((ulong)(uint)param_1 < (ulong)(*(long *)(this + 0x338) - *(long *)(this + 0x330) >> 3)) {
      lVar4 = (ulong)(uint)param_1 * 8;
      *(undefined8 *)(*(long *)(this + 0x330) + lVar4) = 0;
      *(undefined8 *)(*(long *)(this + 0x348) + lVar4) = 0;
    }
  }
  if (((ulong)(long)param_1 < (ulong)(*(long *)(this + 0x1f0) - *(long *)(this + 0x1e8) >> 3)) &&
     (plVar5 = *(long **)(*(long *)(this + 0x1e8) + (long)param_1 * 8), plVar5 != (long *)0x0)) {
    FUN_00340fb0(1,(long)plVar5 + 0x14);
    FUN_00340fb0(1,(long)plVar5 + 0x14);
    local_40 = plVar5;
    removeArtboard(this,&local_40);
    iVar2 = FUN_00340fe0(0xffffffff,(long)plVar5 + 0x14);
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    iVar2 = FUN_00340fe0(0xffffffff,(long)plVar5 + 0x14);
    if (iVar2 == 1) {
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Could not recover jumptable at 0x0036d43c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 8))(plVar5);
        return;
      }
      goto LAB_0036d474;
    }
  }
  else {
    local_40 = (long *)0x0;
    removeArtboard(this,&local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_0036d474:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036d478  rive::ArtboardComponentList::removeArtboard =====

/* WARNING: Removing unreachable block (ram,0x0036d814) */
/* rive::ArtboardComponentList::removeArtboard(rive::rcp<rive::ViewModelInstanceListItem>) */

void __thiscall
rive::ArtboardComponentList::removeArtboard(ArtboardComponentList *this,ulong *param_2)

{
  long *plVar1;
  ulong uVar2;
  ArtboardComponentList *pAVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ArtboardComponentList *pAVar19;
  ulong uVar20;
  ArtboardComponentList *pAVar21;
  undefined2 uVar22;
  undefined8 uVar23;
  
  uVar5 = *param_2;
  this[0x40b] = (ArtboardComponentList)0x0;
  FUN_0036daf8(this + 0x428,uVar5);
  uVar5 = *(ulong *)(this + 0x248);
  if (uVar5 != 0) {
    uVar8 = *param_2;
    uVar23 = NEON_cnt(uVar5,1);
    uVar11 = ((ulong)(uint)((int)uVar8 << 3) + 8 ^ uVar8 >> 0x20) * -0x622015f714c7d297;
    uVar22 = NEON_uaddlv(uVar23,1);
    uVar12 = CONCAT62((int6)((ulong)uVar23 >> 0x10),uVar22) & 0xffffffff;
    uVar11 = (uVar8 >> 0x20 ^ uVar11 >> 0x2f ^ uVar11) * -0x622015f714c7d297;
    uVar11 = (uVar11 ^ uVar11 >> 0x2f) * -0x622015f714c7d297;
    if (uVar12 < 2) {
      uVar18 = uVar11 & uVar5 - 1;
    }
    else {
      uVar18 = uVar11;
      if (uVar5 <= uVar11) {
        uVar18 = 0;
        if (uVar5 != 0) {
          uVar18 = uVar11 / uVar5;
        }
        uVar18 = uVar11 - uVar18 * uVar5;
      }
    }
    plVar15 = *(long **)(*(long *)(this + 0x240) + uVar18 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
LAB_0036d558:
      uVar17 = plVar15[1];
      if (uVar17 == uVar11) {
        if (plVar15[2] != uVar8) goto LAB_0036d550;
        if ((Artboard *)plVar15[3] == (Artboard *)0x0) {
LAB_0036d750:
          lVar16 = 0;
        }
        else {
          Artboard::cleanupSemanticTree((Artboard *)plVar15[3]);
          if ((Artboard *)plVar15[3] == (Artboard *)0x0) goto LAB_0036d750;
          Artboard::cleanupFocusTree((Artboard *)plVar15[3]);
          lVar16 = plVar15[3];
        }
        plVar1 = *(long **)(this + 0x90);
        for (plVar15 = *(long **)(this + 0x88); plVar15 != plVar1; plVar15 = plVar15 + 1) {
          uVar5 = (**(code **)(*(long *)*plVar15 + 0x18))((long *)*plVar15,0x25e);
          if ((uVar5 & 1) != 0) {
            lVar7 = *plVar15;
            plVar6 = *(long **)(lVar7 + 0xb0);
            plVar13 = *(long **)(lVar7 + 0xa8);
            plVar9 = plVar13;
            for (; (plVar13 != plVar6 && (plVar9 = plVar13, *plVar13 != lVar16));
                plVar13 = plVar13 + 1) {
              plVar9 = plVar6;
            }
            if ((plVar9 != plVar6) && (plVar13 = plVar9 + 1, plVar10 = plVar9, plVar13 != plVar6)) {
              do {
                plVar9 = plVar10;
                if (*plVar13 != lVar16) {
                  plVar9 = plVar10 + 1;
                  *plVar10 = *plVar13;
                }
                plVar13 = plVar13 + 1;
                plVar10 = plVar9;
              } while (plVar13 != plVar6);
              plVar6 = *(long **)(lVar7 + 0xb0);
            }
            if (plVar9 != plVar6) {
              *(long **)(lVar7 + 0xb0) = plVar9;
            }
          }
        }
      }
      else {
        if (uVar12 < 2) {
          uVar17 = uVar17 & uVar5 - 1;
        }
        else if (uVar5 <= uVar17) {
          uVar20 = 0;
          if (uVar5 != 0) {
            uVar20 = uVar17 / uVar5;
          }
          uVar17 = uVar17 - uVar20 * uVar5;
        }
        if (uVar17 == uVar18) goto LAB_0036d550;
      }
    }
  }
LAB_0036d58c:
  removeBridgeBinds(this,(rcp *)param_2);
  uVar8 = *param_2;
  uVar5 = ((ulong)(uint)((int)uVar8 << 3) + 8 ^ uVar8 >> 0x20) * -0x622015f714c7d297;
  uVar11 = *(ulong *)(this + 0x270);
  uVar5 = (uVar8 >> 0x20 ^ uVar5 >> 0x2f ^ uVar5) * -0x622015f714c7d297;
  uVar5 = (uVar5 ^ uVar5 >> 0x2f) * -0x622015f714c7d297;
  if (uVar11 != 0) {
    uVar23 = NEON_cnt(uVar11,1);
    uVar22 = NEON_uaddlv(uVar23,1);
    uVar12 = CONCAT62((int6)((ulong)uVar23 >> 0x10),uVar22) & 0xffffffff;
    if (uVar12 < 2) {
      uVar18 = uVar5 & uVar11 - 1;
    }
    else {
      uVar18 = uVar5;
      if (uVar11 <= uVar5) {
        uVar18 = 0;
        if (uVar11 != 0) {
          uVar18 = uVar5 / uVar11;
        }
        uVar18 = uVar5 - uVar18 * uVar11;
      }
    }
    lVar16 = *(long *)(this + 0x268);
    puVar14 = *(undefined8 **)(lVar16 + uVar18 * 8);
    if ((puVar14 != (undefined8 *)0x0) &&
       (pAVar21 = (ArtboardComponentList *)*puVar14, pAVar21 != (ArtboardComponentList *)0x0)) {
      uVar17 = uVar11 - 1;
LAB_0036d634:
      uVar20 = *(ulong *)(pAVar21 + 8);
      if (uVar20 == uVar5) {
        if (*(ulong *)(pAVar21 + 0x10) != uVar8) goto LAB_0036d62c;
        if (uVar12 < 2) {
          uVar5 = uVar17 & uVar5;
        }
        else if (uVar11 <= uVar5) {
          uVar8 = 0;
          if (uVar11 != 0) {
            uVar8 = uVar5 / uVar11;
          }
          uVar5 = uVar5 - uVar8 * uVar11;
        }
        pAVar3 = *(ArtboardComponentList **)(lVar16 + uVar5 * 8);
        do {
          pAVar19 = pAVar3;
          pAVar3 = *(ArtboardComponentList **)pAVar19;
        } while (*(ArtboardComponentList **)pAVar19 != pAVar21);
        if (pAVar19 == this + 0x278) {
LAB_0036d8c8:
          if (*(long *)pAVar21 != 0) {
            uVar8 = *(ulong *)(*(long *)pAVar21 + 8);
            if (uVar12 < 2) {
              uVar8 = uVar8 & uVar17;
            }
            else if (uVar11 <= uVar8) {
              uVar18 = 0;
              if (uVar11 != 0) {
                uVar18 = uVar8 / uVar11;
              }
              uVar8 = uVar8 - uVar18 * uVar11;
            }
            if (uVar8 == uVar5) goto LAB_0036d934;
          }
          *(undefined8 *)(lVar16 + uVar5 * 8) = 0;
        }
        else {
          uVar8 = *(ulong *)(pAVar19 + 8);
          if (uVar12 < 2) {
            uVar8 = uVar8 & uVar17;
          }
          else if (uVar11 <= uVar8) {
            uVar18 = 0;
            if (uVar11 != 0) {
              uVar18 = uVar8 / uVar11;
            }
            uVar8 = uVar8 - uVar18 * uVar11;
          }
          if (uVar8 != uVar5) goto LAB_0036d8c8;
        }
LAB_0036d934:
        lVar16 = *(long *)pAVar21;
        if (lVar16 != 0) {
          uVar8 = *(ulong *)(lVar16 + 8);
          if (uVar12 < 2) {
            uVar8 = uVar8 & uVar17;
          }
          else if (uVar11 <= uVar8) {
            uVar12 = 0;
            if (uVar11 != 0) {
              uVar12 = uVar8 / uVar11;
            }
            uVar8 = uVar8 - uVar12 * uVar11;
          }
          if (uVar8 != uVar5) {
            *(ArtboardComponentList **)(*(long *)(this + 0x268) + uVar8 * 8) = pAVar19;
            lVar16 = *(long *)pAVar21;
          }
        }
        lVar7 = *(long *)(this + 0x280);
        *(long *)pAVar19 = lVar16;
        plVar15 = *(long **)(pAVar21 + 0x18);
        *(undefined8 *)pAVar21 = 0;
        *(undefined8 *)(pAVar21 + 0x18) = 0;
        *(long *)(this + 0x280) = lVar7 + -1;
        if (plVar15 != (long *)0x0) {
          (**(code **)(*plVar15 + 8))();
        }
        plVar15 = *(long **)(pAVar21 + 0x10);
        if ((plVar15 != (long *)0x0) &&
           (iVar4 = FUN_00340fe0(0xffffffff,(long)plVar15 + 0x14), iVar4 == 1)) {
          (**(code **)(*plVar15 + 8))(plVar15);
        }
        operator_delete(pAVar21);
        uVar8 = *param_2;
        uVar5 = ((ulong)(uint)((int)uVar8 << 3) + 8 ^ uVar8 >> 0x20) * -0x622015f714c7d297;
        uVar5 = (uVar8 >> 0x20 ^ uVar5 >> 0x2f ^ uVar5) * -0x622015f714c7d297;
        uVar5 = (uVar5 ^ uVar5 >> 0x2f) * -0x622015f714c7d297;
        uVar11 = *(ulong *)(this + 0x248);
        if (uVar11 == 0) {
          return;
        }
        goto LAB_0036d670;
      }
      if (uVar12 < 2) {
        uVar20 = uVar20 & uVar17;
      }
      else if (uVar11 <= uVar20) {
        uVar2 = 0;
        if (uVar11 != 0) {
          uVar2 = uVar20 / uVar11;
        }
        uVar20 = uVar20 - uVar2 * uVar11;
      }
      if (uVar20 == uVar18) goto LAB_0036d62c;
    }
  }
LAB_0036d668:
  uVar11 = *(ulong *)(this + 0x248);
  if (uVar11 != 0) {
LAB_0036d670:
    uVar23 = NEON_cnt(uVar11,1);
    uVar22 = NEON_uaddlv(uVar23,1);
    uVar12 = CONCAT62((int6)((ulong)uVar23 >> 0x10),uVar22) & 0xffffffff;
    if (uVar12 < 2) {
      uVar18 = uVar5 & uVar11 - 1;
    }
    else {
      uVar18 = uVar5;
      if (uVar11 <= uVar5) {
        uVar18 = 0;
        if (uVar11 != 0) {
          uVar18 = uVar5 / uVar11;
        }
        uVar18 = uVar5 - uVar18 * uVar11;
      }
    }
    lVar16 = *(long *)(this + 0x240);
    puVar14 = *(undefined8 **)(lVar16 + uVar18 * 8);
    if ((puVar14 != (undefined8 *)0x0) &&
       (pAVar21 = (ArtboardComponentList *)*puVar14, pAVar21 != (ArtboardComponentList *)0x0)) {
      uVar17 = uVar11 - 1;
      do {
        uVar20 = *(ulong *)(pAVar21 + 8);
        if (uVar20 == uVar5) {
          if (*(ulong *)(pAVar21 + 0x10) == uVar8) {
            if (uVar12 < 2) {
              uVar5 = uVar17 & uVar5;
            }
            else if (uVar11 <= uVar5) {
              uVar8 = 0;
              if (uVar11 != 0) {
                uVar8 = uVar5 / uVar11;
              }
              uVar5 = uVar5 - uVar8 * uVar11;
            }
            pAVar3 = *(ArtboardComponentList **)(lVar16 + uVar5 * 8);
            do {
              pAVar19 = pAVar3;
              pAVar3 = *(ArtboardComponentList **)pAVar19;
            } while (*(ArtboardComponentList **)pAVar19 != pAVar21);
            if (pAVar19 != this + 0x250) {
              uVar8 = *(ulong *)(pAVar19 + 8);
              if (uVar12 < 2) {
                uVar8 = uVar8 & uVar17;
              }
              else if (uVar11 <= uVar8) {
                uVar18 = 0;
                if (uVar11 != 0) {
                  uVar18 = uVar8 / uVar11;
                }
                uVar8 = uVar8 - uVar18 * uVar11;
              }
              if (uVar8 == uVar5) goto LAB_0036da40;
            }
            if (*(long *)pAVar21 != 0) {
              uVar8 = *(ulong *)(*(long *)pAVar21 + 8);
              if (uVar12 < 2) {
                uVar8 = uVar8 & uVar17;
              }
              else if (uVar11 <= uVar8) {
                uVar18 = 0;
                if (uVar11 != 0) {
                  uVar18 = uVar8 / uVar11;
                }
                uVar8 = uVar8 - uVar18 * uVar11;
              }
              if (uVar8 == uVar5) goto LAB_0036da40;
            }
            *(undefined8 *)(lVar16 + uVar5 * 8) = 0;
LAB_0036da40:
            lVar16 = *(long *)pAVar21;
            if (lVar16 != 0) {
              uVar8 = *(ulong *)(lVar16 + 8);
              if (uVar12 < 2) {
                uVar8 = uVar8 & uVar17;
              }
              else if (uVar11 <= uVar8) {
                uVar12 = 0;
                if (uVar11 != 0) {
                  uVar12 = uVar8 / uVar11;
                }
                uVar8 = uVar8 - uVar12 * uVar11;
              }
              if (uVar8 != uVar5) {
                *(ArtboardComponentList **)(*(long *)(this + 0x240) + uVar8 * 8) = pAVar19;
                lVar16 = *(long *)pAVar21;
              }
            }
            lVar7 = *(long *)(this + 600);
            *(long *)pAVar19 = lVar16;
            plVar15 = *(long **)(pAVar21 + 0x18);
            *(undefined8 *)pAVar21 = 0;
            *(undefined8 *)(pAVar21 + 0x18) = 0;
            *(long *)(this + 600) = lVar7 + -1;
            if (plVar15 != (long *)0x0) {
              (**(code **)(*plVar15 + 8))();
            }
            plVar15 = *(long **)(pAVar21 + 0x10);
            if ((plVar15 != (long *)0x0) &&
               (iVar4 = FUN_00340fe0(0xffffffff,(long)plVar15 + 0x14), iVar4 == 1)) {
              (**(code **)(*plVar15 + 8))(plVar15);
            }
            operator_delete(pAVar21);
            return;
          }
        }
        else {
          if (uVar12 < 2) {
            uVar20 = uVar20 & uVar17;
          }
          else if (uVar11 <= uVar20) {
            uVar2 = 0;
            if (uVar11 != 0) {
              uVar2 = uVar20 / uVar11;
            }
            uVar20 = uVar20 - uVar2 * uVar11;
          }
          if (uVar20 != uVar18) {
            return;
          }
        }
        pAVar21 = *(ArtboardComponentList **)pAVar21;
      } while (pAVar21 != (ArtboardComponentList *)0x0);
    }
  }
  return;
LAB_0036d550:
  plVar15 = (long *)*plVar15;
  if (plVar15 == (long *)0x0) goto LAB_0036d58c;
  goto LAB_0036d558;
LAB_0036d62c:
  pAVar21 = *(ArtboardComponentList **)pAVar21;
  if (pAVar21 == (ArtboardComponentList *)0x0) goto LAB_0036d668;
  goto LAB_0036d634;
}


// ===== 0036daf8  FUN_0036daf8 =====

void FUN_0036daf8(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  undefined2 uVar14;
  undefined8 uVar15;
  
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    uVar5 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ param_2 >> 0x20) * -0x622015f714c7d297;
    uVar15 = NEON_cnt(uVar3,1);
    uVar14 = NEON_uaddlv(uVar15,1);
    uVar5 = (param_2 >> 0x20 ^ uVar5 >> 0x2f ^ uVar5) * -0x622015f714c7d297;
    uVar6 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff;
    uVar5 = (uVar5 ^ uVar5 >> 0x2f) * -0x622015f714c7d297;
    if (uVar6 < 2) {
      uVar12 = uVar5 & uVar3 - 1;
    }
    else {
      uVar12 = uVar5;
      if (uVar3 <= uVar5) {
        uVar12 = 0;
        if (uVar3 != 0) {
          uVar12 = uVar5 / uVar3;
        }
        uVar12 = uVar5 - uVar12 * uVar3;
      }
    }
    lVar7 = *param_1;
    puVar8 = *(undefined8 **)(lVar7 + uVar12 * 8);
    if ((puVar8 != (undefined8 *)0x0) && (plVar13 = (long *)*puVar8, plVar13 != (long *)0x0)) {
      uVar9 = uVar3 - 1;
      do {
        uVar10 = plVar13[1];
        if (uVar10 == uVar5) {
          if (plVar13[2] == param_2) {
            if (uVar6 < 2) {
              uVar5 = uVar9 & uVar5;
            }
            else if (uVar3 <= uVar5) {
              uVar12 = 0;
              if (uVar3 != 0) {
                uVar12 = uVar5 / uVar3;
              }
              uVar5 = uVar5 - uVar12 * uVar3;
            }
            plVar2 = *(long **)(lVar7 + uVar5 * 8);
            do {
              plVar11 = plVar2;
              plVar2 = (long *)*plVar11;
            } while ((long *)*plVar11 != plVar13);
            if (plVar11 != param_1 + 2) {
              uVar12 = plVar11[1];
              if (uVar6 < 2) {
                uVar12 = uVar12 & uVar9;
              }
              else if (uVar3 <= uVar12) {
                uVar10 = 0;
                if (uVar3 != 0) {
                  uVar10 = uVar12 / uVar3;
                }
                uVar12 = uVar12 - uVar10 * uVar3;
              }
              if (uVar12 == uVar5) goto LAB_0036dc94;
            }
            if (*plVar13 != 0) {
              uVar12 = *(ulong *)(*plVar13 + 8);
              if (uVar6 < 2) {
                uVar12 = uVar12 & uVar9;
              }
              else if (uVar3 <= uVar12) {
                uVar10 = 0;
                if (uVar3 != 0) {
                  uVar10 = uVar12 / uVar3;
                }
                uVar12 = uVar12 - uVar10 * uVar3;
              }
              if (uVar12 == uVar5) goto LAB_0036dc94;
            }
            *(undefined8 *)(lVar7 + uVar5 * 8) = 0;
LAB_0036dc94:
            lVar7 = *plVar13;
            if (lVar7 != 0) {
              uVar12 = *(ulong *)(lVar7 + 8);
              if (uVar6 < 2) {
                uVar12 = uVar12 & uVar9;
              }
              else if (uVar3 <= uVar12) {
                uVar6 = 0;
                if (uVar3 != 0) {
                  uVar6 = uVar12 / uVar3;
                }
                uVar12 = uVar12 - uVar6 * uVar3;
              }
              if (uVar12 != uVar5) {
                *(long **)(*param_1 + uVar12 * 8) = plVar11;
                lVar7 = *plVar13;
              }
            }
            lVar4 = param_1[3];
            *plVar11 = lVar7;
            *plVar13 = 0;
            param_1[3] = lVar4 + -1;
            FUN_0036c094(plVar13 + 2);
            operator_delete(plVar13);
            return;
          }
        }
        else {
          if (uVar6 < 2) {
            uVar10 = uVar10 & uVar9;
          }
          else if (uVar3 <= uVar10) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar10 / uVar3;
            }
            uVar10 = uVar10 - uVar1 * uVar3;
          }
          if (uVar10 != uVar12) {
            return;
          }
        }
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
    }
  }
  return;
}


// ===== 0036dd00  rive::ArtboardComponentList::removeBridgeBinds =====

/* rive::ArtboardComponentList::removeBridgeBinds(rive::rcp<rive::ViewModelInstanceListItem> const&)
    */

void __thiscall
rive::ArtboardComponentList::removeBridgeBinds(ArtboardComponentList *this,rcp *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ArtboardComponentList *pAVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ArtboardComponentList *pAVar13;
  ulong uVar14;
  ArtboardComponentList *pAVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  undefined2 uVar19;
  undefined8 uVar20;
  
  uVar6 = *(ulong *)(this + 1000);
  if (uVar6 != 0) {
    uVar10 = *(ulong *)param_1;
    uVar20 = NEON_cnt(uVar6,1);
    uVar8 = ((ulong)(uint)((int)uVar10 << 3) + 8 ^ uVar10 >> 0x20) * -0x622015f714c7d297;
    uVar19 = NEON_uaddlv(uVar20,1);
    uVar9 = CONCAT62((int6)((ulong)uVar20 >> 0x10),uVar19) & 0xffffffff;
    uVar8 = (uVar10 >> 0x20 ^ uVar8 >> 0x2f ^ uVar8) * -0x622015f714c7d297;
    uVar8 = (uVar8 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
    if (uVar9 < 2) {
      uVar11 = uVar8 & uVar6 - 1;
    }
    else {
      uVar11 = uVar8;
      if (uVar6 <= uVar8) {
        uVar11 = 0;
        if (uVar6 != 0) {
          uVar11 = uVar8 / uVar6;
        }
        uVar11 = uVar8 - uVar11 * uVar6;
      }
    }
    puVar12 = *(undefined8 **)(*(long *)(this + 0x3e0) + uVar11 * 8);
    if ((puVar12 != (undefined8 *)0x0) &&
       (pAVar15 = (ArtboardComponentList *)*puVar12, pAVar15 != (ArtboardComponentList *)0x0)) {
      do {
        uVar14 = *(ulong *)(pAVar15 + 8);
        if (uVar14 == uVar8) {
          if (*(ulong *)(pAVar15 + 0x10) == uVar10) {
            puVar12 = *(undefined8 **)(pAVar15 + 0x18);
            puVar1 = *(undefined8 **)(pAVar15 + 0x20);
            if (puVar12 != puVar1) {
              lVar18 = *(long *)(this + 0x40);
              do {
                (**(code **)(*(long *)*puVar12 + 0x80))();
                if (lVar18 != 0) {
                  DataBindContainer::removeDataBind
                            ((DataBindContainer *)(lVar18 + 0x9b0),(DataBind *)*puVar12);
                }
                puVar12 = puVar12 + 1;
              } while (puVar12 != puVar1);
              uVar6 = *(ulong *)(this + 1000);
              uVar8 = *(ulong *)(pAVar15 + 8);
              uVar20 = NEON_cnt(uVar6,1);
              uVar19 = NEON_uaddlv(uVar20,1);
              uVar9 = CONCAT62((int6)((ulong)uVar20 >> 0x10),uVar19) & 0xffffffff;
            }
            if (uVar9 < 2) {
              uVar8 = uVar6 - 1 & uVar8;
            }
            else if (uVar6 <= uVar8) {
              uVar10 = 0;
              if (uVar6 != 0) {
                uVar10 = uVar8 / uVar6;
              }
              uVar8 = uVar8 - uVar10 * uVar6;
            }
            pAVar3 = *(ArtboardComponentList **)(*(long *)(this + 0x3e0) + uVar8 * 8);
            do {
              pAVar13 = pAVar3;
              pAVar3 = *(ArtboardComponentList **)pAVar13;
            } while (*(ArtboardComponentList **)pAVar13 != pAVar15);
            if (pAVar13 != this + 0x3f0) {
              uVar10 = *(ulong *)(pAVar13 + 8);
              if (uVar9 < 2) {
                uVar10 = uVar10 & uVar6 - 1;
              }
              else if (uVar6 <= uVar10) {
                uVar11 = 0;
                if (uVar6 != 0) {
                  uVar11 = uVar10 / uVar6;
                }
                uVar10 = uVar10 - uVar11 * uVar6;
              }
              if (uVar10 == uVar8) goto LAB_0036df20;
            }
            if (*(long *)pAVar15 != 0) {
              uVar10 = *(ulong *)(*(long *)pAVar15 + 8);
              if (uVar9 < 2) {
                uVar10 = uVar10 & uVar6 - 1;
              }
              else if (uVar6 <= uVar10) {
                uVar11 = 0;
                if (uVar6 != 0) {
                  uVar11 = uVar10 / uVar6;
                }
                uVar10 = uVar10 - uVar11 * uVar6;
              }
              if (uVar10 == uVar8) goto LAB_0036df20;
            }
            *(undefined8 *)(*(long *)(this + 0x3e0) + uVar8 * 8) = 0;
LAB_0036df20:
            lVar18 = *(long *)pAVar15;
            if (lVar18 != 0) {
              uVar10 = *(ulong *)(lVar18 + 8);
              if (uVar9 < 2) {
                uVar10 = uVar10 & uVar6 - 1;
              }
              else if (uVar6 <= uVar10) {
                uVar9 = 0;
                if (uVar6 != 0) {
                  uVar9 = uVar10 / uVar6;
                }
                uVar10 = uVar10 - uVar9 * uVar6;
              }
              if (uVar10 != uVar8) {
                *(ArtboardComponentList **)(*(long *)(this + 0x3e0) + uVar10 * 8) = pAVar13;
                lVar18 = *(long *)pAVar15;
              }
            }
            lVar7 = *(long *)(this + 0x3f8);
            plVar16 = *(long **)(pAVar15 + 0x18);
            *(long *)pAVar13 = lVar18;
            *(undefined8 *)pAVar15 = 0;
            *(long *)(this + 0x3f8) = lVar7 + -1;
            if (plVar16 != (long *)0x0) {
              plVar17 = *(long **)(pAVar15 + 0x20);
              plVar5 = plVar16;
              if (plVar17 != plVar16) {
                do {
                  plVar17 = plVar17 + -1;
                  plVar5 = (long *)*plVar17;
                  *plVar17 = 0;
                  if (plVar5 != (long *)0x0) {
                    (**(code **)(*plVar5 + 8))();
                  }
                } while (plVar17 != plVar16);
                plVar5 = *(long **)(pAVar15 + 0x18);
              }
              *(long **)(pAVar15 + 0x20) = plVar16;
              operator_delete(plVar5);
            }
            plVar16 = *(long **)(pAVar15 + 0x10);
            if ((plVar16 != (long *)0x0) &&
               (iVar4 = FUN_00340fe0(0xffffffff,(long)plVar16 + 0x14), iVar4 == 1)) {
              (**(code **)(*plVar16 + 8))(plVar16);
            }
            operator_delete(pAVar15);
            return;
          }
        }
        else {
          if (uVar9 < 2) {
            uVar14 = uVar14 & uVar6 - 1;
          }
          else if (uVar6 <= uVar14) {
            uVar2 = 0;
            if (uVar6 != 0) {
              uVar2 = uVar14 / uVar6;
            }
            uVar14 = uVar14 - uVar2 * uVar6;
          }
          if (uVar14 != uVar11) {
            return;
          }
        }
        pAVar15 = *(ArtboardComponentList **)pAVar15;
      } while (pAVar15 != (ArtboardComponentList *)0x0);
    }
  }
  return;
}


// ===== 0036e008  FUN_0036e008 =====

void FUN_0036e008(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 0036e01c  FUN_0036e01c =====

void FUN_0036e01c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 0036e030  FUN_0036e030 =====

void FUN_0036e030(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 0036e044  FUN_0036e044 =====

void FUN_0036e044(long *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  void *pvVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong unaff_x23;
  undefined2 uVar16;
  undefined8 uVar17;
  float fVar18;
  
  uVar15 = param_1[1];
  uVar14 = (ulong)param_2;
  if (uVar15 != 0) {
    uVar17 = NEON_cnt(uVar15,1);
    uVar16 = NEON_uaddlv(uVar17,1);
    uVar8 = CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) & 0xffffffff;
    if (uVar8 < 2) {
      unaff_x23 = (ulong)((int)uVar15 - 1U & param_2);
    }
    else {
      unaff_x23 = uVar14;
      if (uVar15 <= uVar14) {
        uVar10 = 0;
        if (uVar15 != 0) {
          uVar10 = uVar14 / uVar15;
        }
        unaff_x23 = uVar14 - uVar10 * uVar15;
      }
    }
    plVar7 = *(long **)(*param_1 + unaff_x23 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar10 = plVar7[1];
        if (uVar10 == uVar14) {
          if (*(uint *)(plVar7 + 2) == param_2) {
            return;
          }
        }
        else {
          if (uVar8 < 2) {
            uVar10 = uVar10 & uVar15 - 1;
          }
          else if (uVar15 <= uVar10) {
            uVar6 = 0;
            if (uVar15 != 0) {
              uVar6 = uVar10 / uVar15;
            }
            uVar10 = uVar10 - uVar6 * uVar15;
          }
          if (uVar10 != unaff_x23) break;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  plVar7 = (long *)operator_new(0x20);
  lVar4 = param_1[3];
  uVar1 = *param_3;
  fVar18 = *(float *)(param_1 + 4);
  *plVar7 = 0;
  plVar7[1] = uVar14;
  *(undefined4 *)(plVar7 + 2) = uVar1;
  plVar7[3] = 0;
  if ((uVar15 == 0) || (fVar18 * (float)uVar15 < (float)(lVar4 + 1))) {
    if (uVar15 < 3) {
      uVar8 = 1;
    }
    else {
      uVar8 = (ulong)((uVar15 & uVar15 - 1) != 0);
    }
    uVar8 = uVar8 | uVar15 << 1;
    uVar10 = (ulong)((float)(lVar4 + 1) / fVar18);
    if (uVar8 <= uVar10) {
      uVar8 = uVar10;
    }
    if (uVar8 - 1 == 0) {
      uVar8 = 2;
    }
    else if ((uVar8 & uVar8 - 1) != 0) {
      uVar8 = std::__ndk1::__next_prime(uVar8);
      uVar15 = param_1[1];
    }
    if (uVar15 < uVar8) {
LAB_0036e1b4:
      if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00324008();
      }
      pvVar3 = operator_new(uVar8 << 3);
      pvVar5 = (void *)*param_1;
      *param_1 = (long)pvVar3;
      if (pvVar5 != (void *)0x0) {
        operator_delete(pvVar5);
      }
      uVar15 = 0;
      param_1[1] = uVar8;
      do {
        *(undefined8 *)(*param_1 + uVar15 * 8) = 0;
        uVar15 = uVar15 + 1;
      } while (uVar8 != uVar15);
      plVar9 = (long *)param_1[2];
      uVar15 = uVar8;
      if (plVar9 != (long *)0x0) {
        uVar10 = plVar9[1];
        uVar17 = NEON_cnt(uVar8,1);
        uVar16 = NEON_uaddlv(uVar17,1);
        uVar6 = CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) & 0xffffffff;
        if (uVar6 < 2) {
          uVar10 = uVar10 & uVar8 - 1;
        }
        else if (uVar8 <= uVar10) {
          uVar13 = 0;
          if (uVar8 != 0) {
            uVar13 = uVar10 / uVar8;
          }
          uVar10 = uVar10 - uVar13 * uVar8;
        }
        *(long **)(*param_1 + uVar10 * 8) = param_1 + 2;
        plVar12 = (long *)*plVar9;
        if (plVar12 != (long *)0x0) {
          do {
            uVar13 = plVar12[1];
            if (uVar6 < 2) {
              uVar13 = uVar13 & uVar8 - 1;
            }
            else if (uVar8 <= uVar13) {
              uVar2 = 0;
              if (uVar8 != 0) {
                uVar2 = uVar13 / uVar8;
              }
              uVar13 = uVar13 - uVar2 * uVar8;
            }
            if (uVar13 != uVar10) {
              if (*(long *)(*param_1 + uVar13 * 8) == 0) {
                *(long **)(*param_1 + uVar13 * 8) = plVar9;
                uVar10 = uVar13;
              }
              else {
                *plVar9 = *plVar12;
                *plVar12 = **(long **)(*param_1 + uVar13 * 8);
                **(undefined8 **)(*param_1 + uVar13 * 8) = plVar12;
                plVar12 = plVar9;
              }
            }
            plVar9 = plVar12;
            plVar12 = (long *)*plVar9;
          } while (plVar12 != (long *)0x0);
        }
      }
    }
    else if (uVar8 < uVar15) {
      uVar10 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar15 < 3) {
LAB_0036e3ec:
        uVar10 = std::__ndk1::__next_prime(uVar10);
      }
      else {
        uVar17 = NEON_cnt(uVar15,1);
        uVar16 = NEON_uaddlv(uVar17,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16)) goto LAB_0036e3ec;
        if (1 < uVar10) {
          uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
        }
      }
      if (uVar8 <= uVar10) {
        uVar8 = uVar10;
      }
      if (uVar8 < uVar15) {
        if (uVar8 != 0) goto LAB_0036e1b4;
        pvVar3 = (void *)*param_1;
        *param_1 = 0;
        if (pvVar3 != (void *)0x0) {
          operator_delete(pvVar3);
        }
        param_1[1] = 0;
        uVar15 = 0;
      }
      else {
        uVar15 = param_1[1];
      }
    }
    if ((uVar15 & uVar15 - 1) == 0) {
      unaff_x23 = (ulong)((int)uVar15 - 1U & param_2);
    }
    else {
      unaff_x23 = uVar14;
      if (uVar15 <= uVar14) {
        uVar8 = 0;
        if (uVar15 != 0) {
          uVar8 = uVar14 / uVar15;
        }
        unaff_x23 = uVar14 - uVar8 * uVar15;
      }
    }
  }
  lVar4 = *param_1;
  plVar9 = *(long **)(lVar4 + unaff_x23 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_1 + 2;
    lVar11 = *plVar9;
    *plVar9 = (long)plVar7;
    *plVar7 = lVar11;
    *(long **)(lVar4 + unaff_x23 * 8) = plVar9;
    if (*plVar7 == 0) goto LAB_0036e3cc;
    uVar14 = *(ulong *)(*plVar7 + 8);
    if ((uVar15 & uVar15 - 1) == 0) {
      uVar14 = uVar14 & uVar15 - 1;
    }
    else if (uVar15 <= uVar14) {
      uVar8 = 0;
      if (uVar15 != 0) {
        uVar8 = uVar14 / uVar15;
      }
      uVar14 = uVar14 - uVar8 * uVar15;
    }
    plVar9 = (long *)(*param_1 + uVar14 * 8);
  }
  else {
    *plVar7 = *plVar9;
  }
  *plVar9 = (long)plVar7;
LAB_0036e3cc:
  param_1[3] = param_1[3] + 1;
  return;
}


// ===== 0036e448  rive::ArtboardComponentList::createArtboardRecorders =====

/* rive::ArtboardComponentList::createArtboardRecorders(rive::Artboard const*) */

void __thiscall
rive::ArtboardComponentList::createArtboardRecorders(ArtboardComponentList *this,Artboard *param_1)

{
  ulong uVar1;
  PropertyRecorder *this_00;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  void *pvVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong unaff_x23;
  ulong uVar16;
  undefined8 *puVar17;
  undefined2 uVar18;
  undefined8 uVar19;
  float fVar20;
  
  if (param_1 == (Artboard *)0x0) {
    return;
  }
  uVar3 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ (ulong)param_1 >> 0x20) * -0x622015f714c7d297;
  uVar3 = ((ulong)param_1 >> 0x20 ^ uVar3 >> 0x2f ^ uVar3) * -0x622015f714c7d297;
  uVar16 = (uVar3 ^ uVar3 >> 0x2f) * -0x622015f714c7d297;
  uVar3 = *(ulong *)(this + 0x2e8);
  if (uVar3 != 0) {
    uVar19 = NEON_cnt(uVar3,1);
    uVar18 = NEON_uaddlv(uVar19,1);
    uVar9 = CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar18) & 0xffffffff;
    if (uVar9 < 2) {
      uVar10 = uVar3 - 1 & uVar16;
    }
    else {
      uVar10 = uVar16;
      if (uVar3 <= uVar16) {
        uVar10 = 0;
        if (uVar3 != 0) {
          uVar10 = uVar16 / uVar3;
        }
        uVar10 = uVar16 - uVar10 * uVar3;
      }
    }
    plVar11 = *(long **)(*(long *)(this + 0x2e0) + uVar10 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      do {
        uVar13 = plVar11[1];
        if (uVar13 == uVar16) {
          if ((Artboard *)plVar11[2] == param_1) {
            return;
          }
        }
        else {
          if (uVar9 < 2) {
            uVar13 = uVar13 & uVar3 - 1;
          }
          else if (uVar3 <= uVar13) {
            uVar14 = 0;
            if (uVar3 != 0) {
              uVar14 = uVar13 / uVar3;
            }
            uVar13 = uVar13 - uVar14 * uVar3;
          }
          if (uVar13 != uVar10) break;
        }
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
  }
  this_00 = (PropertyRecorder *)operator_new(0xd8);
  PropertyRecorder::PropertyRecorder(this_00);
  PropertyRecorder::recordArtboard(this_00,param_1);
  uVar3 = *(ulong *)(this + 0x2e8);
  if (uVar3 != 0) {
    uVar19 = NEON_cnt(uVar3,1);
    uVar18 = NEON_uaddlv(uVar19,1);
    uVar9 = CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar18) & 0xffffffff;
    if (uVar9 < 2) {
      unaff_x23 = uVar16 & uVar3 - 1;
    }
    else {
      unaff_x23 = uVar16;
      if (uVar3 <= uVar16) {
        uVar10 = 0;
        if (uVar3 != 0) {
          uVar10 = uVar16 / uVar3;
        }
        unaff_x23 = uVar16 - uVar10 * uVar3;
      }
    }
    puVar8 = *(undefined8 **)(*(long *)(this + 0x2e0) + unaff_x23 * 8);
    if ((puVar8 != (undefined8 *)0x0) && (plVar11 = (long *)*puVar8, plVar11 != (long *)0x0)) {
      do {
        uVar10 = plVar11[1];
        if (uVar10 == uVar16) {
          if ((Artboard *)plVar11[2] == param_1) goto LAB_0036e8c4;
        }
        else {
          if (uVar9 < 2) {
            uVar10 = uVar10 & uVar3 - 1;
          }
          else if (uVar3 <= uVar10) {
            uVar13 = 0;
            if (uVar3 != 0) {
              uVar13 = uVar10 / uVar3;
            }
            uVar10 = uVar10 - uVar13 * uVar3;
          }
          if (uVar10 != unaff_x23) break;
        }
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
  }
  plVar11 = (long *)operator_new(0x20);
  lVar4 = *(long *)(this + 0x2f8);
  fVar20 = *(float *)(this + 0x300);
  *plVar11 = 0;
  plVar11[1] = uVar16;
  plVar11[2] = (long)param_1;
  plVar11[3] = 0;
  if ((uVar3 == 0) || (fVar20 * (float)uVar3 < (float)(lVar4 + 1))) {
    if (uVar3 < 3) {
      uVar9 = 1;
    }
    else {
      uVar9 = (ulong)((uVar3 & uVar3 - 1) != 0);
    }
    uVar9 = uVar9 | uVar3 << 1;
    uVar10 = (ulong)((float)(lVar4 + 1) / fVar20);
    if (uVar9 <= uVar10) {
      uVar9 = uVar10;
    }
    if (uVar9 - 1 == 0) {
      uVar9 = 2;
    }
    else if ((uVar9 & uVar9 - 1) != 0) {
      uVar9 = std::__ndk1::__next_prime(uVar9);
      uVar3 = *(ulong *)(this + 0x2e8);
    }
    if (uVar3 < uVar9) {
LAB_0036e6a8:
      if (uVar9 >> 0x3d != 0) goto LAB_0036ea3c;
      pvVar2 = operator_new(uVar9 << 3);
      pvVar5 = *(void **)(this + 0x2e0);
      *(void **)(this + 0x2e0) = pvVar2;
      if (pvVar5 != (void *)0x0) {
        operator_delete(pvVar5);
      }
      uVar3 = 0;
      *(ulong *)(this + 0x2e8) = uVar9;
      do {
        *(undefined8 *)(*(long *)(this + 0x2e0) + uVar3 * 8) = 0;
        uVar3 = uVar3 + 1;
      } while (uVar9 != uVar3);
      plVar6 = *(long **)(this + 0x2f0);
      uVar3 = uVar9;
      if (plVar6 != (long *)0x0) {
        uVar10 = plVar6[1];
        uVar19 = NEON_cnt(uVar9,1);
        uVar18 = NEON_uaddlv(uVar19,1);
        uVar13 = CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar18) & 0xffffffff;
        if (uVar13 < 2) {
          uVar10 = uVar10 & uVar9 - 1;
        }
        else if (uVar9 <= uVar10) {
          uVar14 = 0;
          if (uVar9 != 0) {
            uVar14 = uVar10 / uVar9;
          }
          uVar10 = uVar10 - uVar14 * uVar9;
        }
        *(ArtboardComponentList **)(*(long *)(this + 0x2e0) + uVar10 * 8) = this + 0x2f0;
        plVar12 = (long *)*plVar6;
        if (plVar12 != (long *)0x0) {
          do {
            uVar14 = plVar12[1];
            if (uVar13 < 2) {
              uVar14 = uVar14 & uVar9 - 1;
            }
            else if (uVar9 <= uVar14) {
              uVar1 = 0;
              if (uVar9 != 0) {
                uVar1 = uVar14 / uVar9;
              }
              uVar14 = uVar14 - uVar1 * uVar9;
            }
            if (uVar14 != uVar10) {
              if (*(long *)(*(long *)(this + 0x2e0) + uVar14 * 8) == 0) {
                *(long **)(*(long *)(this + 0x2e0) + uVar14 * 8) = plVar6;
                uVar10 = uVar14;
              }
              else {
                *plVar6 = *plVar12;
                *plVar12 = **(long **)(*(long *)(this + 0x2e0) + uVar14 * 8);
                **(undefined8 **)(*(long *)(this + 0x2e0) + uVar14 * 8) = plVar12;
                plVar12 = plVar6;
              }
            }
            plVar6 = plVar12;
            plVar12 = (long *)*plVar6;
          } while (plVar12 != (long *)0x0);
        }
      }
    }
    else if (uVar9 < uVar3) {
      uVar10 = (ulong)((float)*(ulong *)(this + 0x2f8) / *(float *)(this + 0x300));
      if (uVar3 < 3) {
LAB_0036e9fc:
        uVar10 = std::__ndk1::__next_prime(uVar10);
      }
      else {
        uVar19 = NEON_cnt(uVar3,1);
        uVar18 = NEON_uaddlv(uVar19,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar18)) goto LAB_0036e9fc;
        if (1 < uVar10) {
          uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
        }
      }
      if (uVar9 <= uVar10) {
        uVar9 = uVar10;
      }
      if (uVar9 < uVar3) {
        if (uVar9 != 0) goto LAB_0036e6a8;
        pvVar2 = *(void **)(this + 0x2e0);
        *(undefined8 *)(this + 0x2e0) = 0;
        if (pvVar2 != (void *)0x0) {
          operator_delete(pvVar2);
        }
        *(undefined8 *)(this + 0x2e8) = 0;
        uVar3 = 0;
      }
      else {
        uVar3 = *(ulong *)(this + 0x2e8);
      }
    }
    if ((uVar3 & uVar3 - 1) == 0) {
      unaff_x23 = uVar3 - 1 & uVar16;
    }
    else {
      unaff_x23 = uVar16;
      if (uVar3 <= uVar16) {
        uVar9 = 0;
        if (uVar3 != 0) {
          uVar9 = uVar16 / uVar3;
        }
        unaff_x23 = uVar16 - uVar9 * uVar3;
      }
    }
  }
  lVar4 = *(long *)(this + 0x2e0);
  plVar6 = *(long **)(lVar4 + unaff_x23 * 8);
  if (plVar6 == (long *)0x0) {
    lVar7 = *(long *)(this + 0x2f0);
    *(long **)(this + 0x2f0) = plVar11;
    *plVar11 = lVar7;
    *(ArtboardComponentList **)(lVar4 + unaff_x23 * 8) = this + 0x2f0;
    if (*plVar11 != 0) {
      uVar16 = *(ulong *)(*plVar11 + 8);
      if ((uVar3 & uVar3 - 1) == 0) {
        uVar16 = uVar16 & uVar3 - 1;
      }
      else if (uVar3 <= uVar16) {
        uVar9 = 0;
        if (uVar3 != 0) {
          uVar9 = uVar16 / uVar3;
        }
        uVar16 = uVar16 - uVar9 * uVar3;
      }
      plVar6 = (long *)(*(long *)(this + 0x2e0) + uVar16 * 8);
      goto LAB_0036e8b4;
    }
  }
  else {
    *plVar11 = *plVar6;
LAB_0036e8b4:
    *plVar6 = (long)plVar11;
  }
  *(long *)(this + 0x2f8) = *(long *)(this + 0x2f8) + 1;
LAB_0036e8c4:
  pvVar2 = (void *)plVar11[3];
  plVar11[3] = (long)this_00;
  if (pvVar2 != (void *)0x0) {
    puVar8 = *(undefined8 **)((long)pvVar2 + 0xc0);
    if (puVar8 != (undefined8 *)0x0) {
      puVar17 = *(undefined8 **)((long)pvVar2 + 200);
      puVar15 = puVar8;
      if (puVar17 != puVar8) {
        do {
          puVar17 = puVar17 + -1;
          puVar15 = (undefined8 *)*puVar17;
          *puVar17 = 0;
          if (puVar15 != (undefined8 *)0x0) {
            pvVar5 = (void *)*puVar15;
            if (pvVar5 != (void *)0x0) {
              puVar15[1] = pvVar5;
              operator_delete(pvVar5);
            }
            operator_delete(puVar15);
          }
        } while (puVar17 != puVar8);
        puVar15 = *(undefined8 **)((long)pvVar2 + 0xc0);
      }
      *(undefined8 **)((long)pvVar2 + 200) = puVar8;
      operator_delete(puVar15);
    }
    pvVar5 = *(void **)((long)pvVar2 + 0xa8);
    if (pvVar5 != (void *)0x0) {
      *(void **)((long)pvVar2 + 0xb0) = pvVar5;
      operator_delete(pvVar5);
    }
    (**(code **)(**(long **)((long)pvVar2 + 0x68) + 8))();
    pvVar5 = *(void **)((long)pvVar2 + 0x48);
    if (pvVar5 != (void *)0x0) {
      *(void **)((long)pvVar2 + 0x50) = pvVar5;
      operator_delete(pvVar5);
    }
    (**(code **)(**(long **)((long)pvVar2 + 8) + 8))();
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(param_1 + 0xb18);
  uVar3 = *(long *)(param_1 + 0xb20) - (long)pvVar2;
  if (uVar3 == 0) {
    return;
  }
  if (-1 < (long)uVar3) {
    pvVar5 = operator_new(uVar3);
    memcpy(pvVar5,pvVar2,uVar3);
    uVar16 = 0;
    do {
      if (*(long *)((long)pvVar5 + uVar16) != 0) {
        createArtboardRecorders(this,*(Artboard **)(*(long *)((long)pvVar5 + uVar16) + 0x1b0));
      }
      uVar16 = uVar16 + 8;
    } while (uVar3 != uVar16);
    operator_delete(pvVar5);
    return;
  }
  FUN_0034aee4();
LAB_0036ea3c:
                    /* WARNING: Subroutine does not return */
  FUN_00324008();
}


// ===== 0036ea40  rive::ArtboardComponentList::createArtboardAt =====

/* rive::ArtboardComponentList::createArtboardAt(int, bool) */

void __thiscall
rive::ArtboardComponentList::createArtboardAt(ArtboardComponentList *this,int param_1,bool param_2)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *local_68;
  long *local_60;
  long *local_58;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((ulong)(long)param_1 < (ulong)(*(long *)(this + 0x1f0) - *(long *)(this + 0x1e8) >> 3)) &&
     (plVar5 = *(long **)(*(long *)(this + 0x1e8) + (long)param_1 * 8), plVar5 != (long *)0x0)) {
    FUN_00340fb0(1,(long)plVar5 + 0x14);
    FUN_00340fb0(1,(long)plVar5 + 0x14);
    local_58 = plVar5;
    lVar4 = findArtboard(this,(rcp *)&local_58);
    if (lVar4 == 0) {
      local_50 = (long *)0x0;
    }
    else {
      FUN_00370c6c(&local_50,lVar4);
    }
    iVar3 = FUN_00340fe0(0xffffffff,(long)plVar5 + 0x14);
    if (iVar3 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    plVar2 = local_50;
    if (local_50 != (long *)0x0) {
      FUN_00340fb0(1,(long)plVar5 + 0x14);
      local_60 = plVar5;
      attachArtboardOverride(this,plVar2,&local_60);
      iVar3 = FUN_00340fe0(0xffffffff,(long)plVar5 + 0x14);
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
      local_68 = local_50;
      addArtboardAt(this,&local_68,param_1,param_2);
      plVar2 = local_68;
      local_68 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
    }
    iVar3 = FUN_00340fe0(0xffffffff,(long)plVar5 + 0x14);
    if (iVar3 == 1) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x0036ebb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 8))(plVar5);
        return;
      }
      goto LAB_0036ebe0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_0036ebe0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036ebe4  rive::ArtboardComponentList::applyRecorders =====

/* rive::ArtboardComponentList::applyRecorders(rive::Artboard*, rive::Artboard const*) */

void rive::ArtboardComponentList::applyRecorders(Artboard *param_1,Artboard *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  LayoutComponent LVar4;
  int iVar5;
  void *__dest;
  ArtboardComponentList *this;
  long lVar6;
  long *plVar7;
  Artboard *pAVar8;
  undefined8 *puVar9;
  ulong in_x2;
  uint in_w3;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  LayoutComponent *pLVar16;
  StateMachineInstance *this_00;
  void *__src;
  StateMachine *pSVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  undefined2 uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  Artboard *pAStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  
  if (param_2 == (Artboard *)0x0) {
    return;
  }
  uVar10 = *(ulong *)(param_1 + 0x2e8);
  if (uVar10 != 0) {
    uVar11 = ((ulong)(uint)((int)in_x2 << 3) + 8 ^ in_x2 >> 0x20) * -0x622015f714c7d297;
    uVar23 = NEON_cnt(uVar10,1);
    uVar22 = NEON_uaddlv(uVar23,1);
    uVar11 = (in_x2 >> 0x20 ^ uVar11 >> 0x2f ^ uVar11) * -0x622015f714c7d297;
    uVar12 = CONCAT62((int6)((ulong)uVar23 >> 0x10),uVar22) & 0xffffffff;
    uVar11 = (uVar11 ^ uVar11 >> 0x2f) * -0x622015f714c7d297;
    if (uVar12 < 2) {
      uVar13 = uVar10 - 1 & uVar11;
    }
    else {
      uVar13 = uVar11;
      if (uVar10 <= uVar11) {
        uVar13 = 0;
        if (uVar10 != 0) {
          uVar13 = uVar11 / uVar10;
        }
        uVar13 = uVar11 - uVar13 * uVar10;
      }
    }
    plVar14 = *(long **)(*(long *)(param_1 + 0x2e0) + uVar13 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      do {
        uVar15 = plVar14[1];
        if (uVar15 == uVar11) {
          if (plVar14[2] == in_x2) {
            if ((PropertyRecorder *)plVar14[3] != (PropertyRecorder *)0x0) {
              PropertyRecorder::apply((PropertyRecorder *)plVar14[3],param_2);
            }
            break;
          }
        }
        else {
          if (uVar12 < 2) {
            uVar15 = uVar15 & uVar10 - 1;
          }
          else if (uVar10 <= uVar15) {
            uVar2 = 0;
            if (uVar10 != 0) {
              uVar2 = uVar15 / uVar10;
            }
            uVar15 = uVar15 - uVar2 * uVar10;
          }
          if (uVar15 != uVar13) break;
        }
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
  }
  iVar5 = (int)in_x2;
  __src = *(void **)(param_2 + 0xb18);
  uVar10 = *(long *)(param_2 + 0xb20) - (long)__src;
  if (uVar10 == 0) {
    return;
  }
  if (-1 < (long)uVar10) {
    __dest = operator_new(uVar10);
    memcpy(__dest,__src,uVar10);
    uVar11 = 0;
    do {
      if ((*(long *)((long)__dest + uVar11) != 0) &&
         (pAVar8 = *(Artboard **)(*(long *)((long)__dest + uVar11) + 0x1b0),
         pAVar8 != (Artboard *)0x0)) {
        applyRecorders(param_1,pAVar8);
      }
      uVar11 = uVar11 + 8;
    } while (uVar10 != uVar11);
    operator_delete(__dest);
    return;
  }
  auVar24 = FUN_0034aee4();
  puVar9 = auVar24._8_8_;
  this = auVar24._0_8_;
  pcStack_88 = addArtboardAt;
  lVar3 = tpidr_el0;
  uVar10 = (ulong)iVar5;
  lStack_98 = *(long *)(lVar3 + 0x28);
  puStack_90 = &stack0xffffffffffffffd0;
  if (((ulong)(*(long *)(this + 0x1f0) - *(long *)(this + 0x1e8) >> 3) <= uVar10) ||
     (plVar14 = *(long **)(*(long *)(this + 0x1e8) + uVar10 * 8),
     puStack_90 = &stack0xffffffffffffffd0, plVar14 == (long *)0x0)) goto LAB_0036f23c;
  puStack_90 = &stack0xffffffffffffffd0;
  FUN_00340fb0(1,(long)plVar14 + 0x14);
  pLVar16 = (LayoutComponent *)*puVar9;
  plStack_a0 = plVar14;
  lVar6 = FUN_0036c500(this + 0x240,plVar14,&plStack_a0);
  uVar23 = *puVar9;
  *puVar9 = 0;
  plVar7 = *(long **)(lVar6 + 0x18);
  *(undefined8 *)(lVar6 + 0x18) = uVar23;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
  FUN_00340fb0(1,(long)plVar14 + 0x14);
  plStack_a8 = plVar14;
  bindArtboard(this,pLVar16,&plStack_a8);
  iVar5 = FUN_00340fe0(0xffffffff,(long)plVar14 + 0x14);
  if (iVar5 == 1) {
    (**(code **)(*plVar14 + 8))(plVar14);
  }
  if (pLVar16 != (LayoutComponent *)0x0) {
    lVar6 = *(long *)(this + 0x178);
    pLVar16[0x960] = (LayoutComponent)0x1;
    *(ArtboardComponentList **)(pLVar16 + 0xc38) = this + 0x178;
    uVar11 = (**(code **)(lVar6 + 0x68))();
    if ((((uVar11 & 1) != 0) && (*(long **)(pLVar16 + 0xc38) != (long *)0x0)) &&
       (pAVar8 = (Artboard *)(**(code **)(**(long **)(pLVar16 + 0xc38) + 0x40))(),
       pAVar8 != (Artboard *)0x0)) {
      Artboard::markLayoutDirty(pAVar8,pLVar16);
      LayoutComponent::syncLayoutChildren((LayoutComponent *)pAVar8);
    }
    if (pLVar16[0xbe9] != (LayoutComponent)0x0) {
      pLVar16[0xbe9] = (LayoutComponent)0x0;
      if ((*(ushort *)(pLVar16 + 0x60) >> 4 & 1) == 0) {
        *(ushort *)(pLVar16 + 0x60) = *(ushort *)(pLVar16 + 0x60) | 0x10;
        (**(code **)(*(long *)pLVar16 + 0x70))(pLVar16);
        lVar6 = *(long *)(pLVar16 + 0x80);
        uVar1 = *(uint *)(pLVar16 + 0x38);
        *(undefined1 *)(lVar6 + 0xc32) = 1;
        *(ushort *)(lVar6 + 0x60) = *(ushort *)(lVar6 + 0x60) | 4;
        if (uVar1 < *(uint *)(lVar6 + 0xbd4)) {
          *(uint *)(lVar6 + 0xbd4) = uVar1;
        }
      }
    }
    plVar14 = *(long **)(this + 0x30);
    if (plVar14 == (long *)0x0) {
LAB_0036ef50:
      LVar4 = (LayoutComponent)0x1;
    }
    else {
      uVar11 = (**(code **)(*plVar14 + 0x18))(plVar14,0x199);
      LVar4 = (LayoutComponent)0x1;
      if (((uVar11 & 1) != 0) && (*(long *)(this + 0x30) != 0)) {
        lVar6 = *(long *)(*(long *)(this + 0x30) + 0x1e8);
        if (lVar6 == 0) goto LAB_0036ef50;
        LVar4 = (LayoutComponent)((*(uint *)(lVar6 + 0x11c) & 0xfffffffe) == 2);
      }
    }
    pLVar16[0x974] = LVar4;
    (**(code **)(*(long *)pLVar16 + 0x2e0))(pLVar16,0);
  }
  if ((((in_w3 & 1) != 0) && (plVar14 = *(long **)(this + 0x30), plVar14 != (long *)0x0)) &&
     ((uVar11 = (**(code **)(*plVar14 + 0x18))(plVar14,0x199), (uVar11 & 1) != 0 &&
      (*(LayoutComponent **)(this + 0x30) != (LayoutComponent *)0x0)))) {
    LayoutComponent::syncLayoutChildren(*(LayoutComponent **)(this + 0x30));
  }
  pAVar8 = (Artboard *)findArtboard(this,(rcp *)&plStack_a0);
  pAStack_b0 = pAVar8;
  if (pAVar8 == (Artboard *)0x0) {
LAB_0036f06c:
    if (pLVar16 == (LayoutComponent *)0x0) {
      this_00 = (StateMachineInstance *)0x0;
    }
    else {
      if ((*(undefined8 **)(pLVar16 + 0xaa8) == *(undefined8 **)(pLVar16 + 0xaa0)) ||
         (pSVar17 = (StateMachine *)**(undefined8 **)(pLVar16 + 0xaa0),
         pSVar17 == (StateMachine *)0x0)) {
        this_00 = (StateMachineInstance *)0x0;
      }
      else {
        this_00 = (StateMachineInstance *)operator_new(0x378);
        StateMachineInstance::StateMachineInstance(this_00,pSVar17,(ArtboardInstance *)pLVar16);
      }
      linkStateMachineToArtboard(this,this_00,(ArtboardInstance *)pLVar16);
    }
    plVar14 = plStack_a0;
    lVar6 = FUN_0036f734(this + 0x268,plStack_a0,&plStack_a0);
    plVar7 = *(long **)(lVar6 + 0x18);
    *(StateMachineInstance **)(lVar6 + 0x18) = this_00;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  else {
    lVar6 = FUN_0036cd58(this + 0x2b8,pAVar8,&pAStack_b0);
    if (*(long *)(lVar6 + 0x18) == *(long *)(lVar6 + 0x20)) goto LAB_0036f06c;
    this_00 = *(StateMachineInstance **)(*(long *)(lVar6 + 0x20) + -8);
    if (*(long *)(this_00 + 0x148) != 0) {
      lVar21 = 0;
      uVar11 = 0;
      do {
        lVar20 = *(long *)(this_00 + 0x150);
        lVar18 = lVar20 + lVar21;
        plVar14 = *(long **)(lVar18 + 0x20);
        plVar19 = *(long **)(lVar18 + 0x28);
        plVar7 = *(long **)(lVar18 + 0x18);
        if ((plVar19 != (long *)0x0 && plVar19 != plVar7) && plVar19 != plVar14) {
          (**(code **)(*plVar19 + 8))(plVar19);
          plVar7 = *(long **)(lVar18 + 0x18);
          plVar14 = *(long **)(lVar18 + 0x20);
        }
        *(undefined8 *)(lVar18 + 0x28) = 0;
        if ((plVar14 != (long *)0x0) && (plVar14 != plVar7)) {
          (**(code **)(*plVar14 + 8))();
        }
        *(undefined8 *)(lVar18 + 0x20) = 0;
        FUN_0034a530(lVar18,*(undefined8 *)(*(long *)(lVar20 + lVar21 + 8) + 0x48));
        uVar11 = uVar11 + 1;
        lVar21 = lVar21 + 0x68;
      } while (uVar11 < *(ulong *)(this_00 + 0x148));
    }
    applyRecorders(this,this_00,pAVar8);
    plVar14 = plStack_a0;
    lVar18 = *(long *)(lVar6 + 0x20);
    lVar21 = FUN_0036f734(this + 0x268,plStack_a0,&plStack_a0);
    uVar23 = *(undefined8 *)(lVar18 + -8);
    *(undefined8 *)(lVar18 + -8) = 0;
    plVar7 = *(long **)(lVar21 + 0x18);
    *(undefined8 *)(lVar21 + 0x18) = uVar23;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    linkStateMachineToArtboard(this,this_00,(ArtboardInstance *)pLVar16);
    plVar19 = (long *)(*(long *)(lVar6 + 0x20) + -8);
    plVar7 = (long *)*plVar19;
    *plVar19 = 0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    *(long **)(lVar6 + 0x20) = plVar19;
  }
  uVar11 = (**(code **)(*(long *)this + 0x340))(this);
  if ((uVar11 & 1) == 0) {
    lVar6 = *(long *)(this + 0x330);
    uVar11 = *(long *)(this + 0x338) - lVar6 >> 3;
    if (uVar11 <= uVar10) {
      uVar12 = uVar10 + 1;
      if (uVar12 < uVar11 || uVar12 - uVar11 == 0) {
        if (uVar12 < uVar11) {
          *(ulong *)(this + 0x338) = lVar6 + uVar12 * 8;
        }
      }
      else {
        FUN_0036fe48(this + 0x330,uVar12 - uVar11,0);
      }
      uVar11 = *(long *)(this + 0x350) - *(long *)(this + 0x348) >> 3;
      if (uVar12 < uVar11 || uVar12 - uVar11 == 0) {
        if (uVar12 < uVar11) {
          *(ulong *)(this + 0x350) = *(long *)(this + 0x348) + uVar12 * 8;
        }
      }
      else {
        FUN_00370088(this + 0x348,uVar12 - uVar11,0);
      }
      lVar6 = *(long *)(this + 0x330);
    }
    *(LayoutComponent **)(lVar6 + uVar10 * 8) = pLVar16;
    *(StateMachineInstance **)(*(long *)(this + 0x348) + uVar10 * 8) = this_00;
  }
  if ((plVar14 != (long *)0x0) &&
     (iVar5 = FUN_00340fe0(0xffffffff,(long)plVar14 + 0x14), iVar5 == 1)) {
    (**(code **)(*plVar14 + 8))(plVar14);
  }
LAB_0036f23c:
  if (*(long *)(lVar3 + 0x28) != lStack_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0036ed84  rive::ArtboardComponentList::addArtboardAt =====

/* rive::ArtboardComponentList::addArtboardAt(std::__ndk1::unique_ptr<rive::ArtboardInstance,
   std::__ndk1::default_delete<rive::ArtboardInstance> >, int, bool) */

void __thiscall
rive::ArtboardComponentList::addArtboardAt
          (ArtboardComponentList *this,undefined8 *param_2,int param_3,uint param_4)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  LayoutComponent LVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  Artboard *pAVar9;
  undefined8 uVar10;
  LayoutComponent *pLVar11;
  long *plVar12;
  StateMachineInstance *this_00;
  StateMachine *pSVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  Artboard *local_80;
  long *local_78;
  long *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  uVar17 = (ulong)param_3;
  local_68 = *(long *)(lVar3 + 0x28);
  if (((ulong)(*(long *)(this + 0x1f0) - *(long *)(this + 0x1e8) >> 3) <= uVar17) ||
     (plVar12 = *(long **)(*(long *)(this + 0x1e8) + uVar17 * 8), plVar12 == (long *)0x0))
  goto LAB_0036f23c;
  FUN_00340fb0(1,(long)plVar12 + 0x14);
  pLVar11 = (LayoutComponent *)*param_2;
  local_70 = plVar12;
  lVar6 = FUN_0036c500(this + 0x240,plVar12,&local_70);
  uVar10 = *param_2;
  *param_2 = 0;
  plVar7 = *(long **)(lVar6 + 0x18);
  *(undefined8 *)(lVar6 + 0x18) = uVar10;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
  FUN_00340fb0(1,(long)plVar12 + 0x14);
  local_78 = plVar12;
  bindArtboard(this,pLVar11,&local_78);
  iVar5 = FUN_00340fe0(0xffffffff,(long)plVar12 + 0x14);
  if (iVar5 == 1) {
    (**(code **)(*plVar12 + 8))(plVar12);
  }
  if (pLVar11 != (LayoutComponent *)0x0) {
    lVar6 = *(long *)(this + 0x178);
    pLVar11[0x960] = (LayoutComponent)0x1;
    *(ArtboardComponentList **)(pLVar11 + 0xc38) = this + 0x178;
    uVar8 = (**(code **)(lVar6 + 0x68))();
    if ((((uVar8 & 1) != 0) && (*(long **)(pLVar11 + 0xc38) != (long *)0x0)) &&
       (pAVar9 = (Artboard *)(**(code **)(**(long **)(pLVar11 + 0xc38) + 0x40))(),
       pAVar9 != (Artboard *)0x0)) {
      Artboard::markLayoutDirty(pAVar9,pLVar11);
      LayoutComponent::syncLayoutChildren((LayoutComponent *)pAVar9);
    }
    if (pLVar11[0xbe9] != (LayoutComponent)0x0) {
      pLVar11[0xbe9] = (LayoutComponent)0x0;
      if ((*(ushort *)(pLVar11 + 0x60) >> 4 & 1) == 0) {
        *(ushort *)(pLVar11 + 0x60) = *(ushort *)(pLVar11 + 0x60) | 0x10;
        (**(code **)(*(long *)pLVar11 + 0x70))(pLVar11);
        lVar6 = *(long *)(pLVar11 + 0x80);
        uVar2 = *(uint *)(pLVar11 + 0x38);
        *(undefined1 *)(lVar6 + 0xc32) = 1;
        *(ushort *)(lVar6 + 0x60) = *(ushort *)(lVar6 + 0x60) | 4;
        if (uVar2 < *(uint *)(lVar6 + 0xbd4)) {
          *(uint *)(lVar6 + 0xbd4) = uVar2;
        }
      }
    }
    plVar12 = *(long **)(this + 0x30);
    if (plVar12 == (long *)0x0) {
LAB_0036ef50:
      LVar4 = (LayoutComponent)0x1;
    }
    else {
      uVar8 = (**(code **)(*plVar12 + 0x18))(plVar12,0x199);
      LVar4 = (LayoutComponent)0x1;
      if (((uVar8 & 1) != 0) && (*(long *)(this + 0x30) != 0)) {
        lVar6 = *(long *)(*(long *)(this + 0x30) + 0x1e8);
        if (lVar6 == 0) goto LAB_0036ef50;
        LVar4 = (LayoutComponent)((*(uint *)(lVar6 + 0x11c) & 0xfffffffe) == 2);
      }
    }
    pLVar11[0x974] = LVar4;
    (**(code **)(*(long *)pLVar11 + 0x2e0))(pLVar11,0);
  }
  if ((((param_4 & 1) != 0) && (plVar12 = *(long **)(this + 0x30), plVar12 != (long *)0x0)) &&
     ((uVar8 = (**(code **)(*plVar12 + 0x18))(plVar12,0x199), (uVar8 & 1) != 0 &&
      (*(LayoutComponent **)(this + 0x30) != (LayoutComponent *)0x0)))) {
    LayoutComponent::syncLayoutChildren(*(LayoutComponent **)(this + 0x30));
  }
  pAVar9 = (Artboard *)findArtboard(this,(rcp *)&local_70);
  local_80 = pAVar9;
  if (pAVar9 == (Artboard *)0x0) {
LAB_0036f06c:
    if (pLVar11 == (LayoutComponent *)0x0) {
      this_00 = (StateMachineInstance *)0x0;
    }
    else {
      if ((*(undefined8 **)(pLVar11 + 0xaa8) == *(undefined8 **)(pLVar11 + 0xaa0)) ||
         (pSVar13 = (StateMachine *)**(undefined8 **)(pLVar11 + 0xaa0),
         pSVar13 == (StateMachine *)0x0)) {
        this_00 = (StateMachineInstance *)0x0;
      }
      else {
        this_00 = (StateMachineInstance *)operator_new(0x378);
        StateMachineInstance::StateMachineInstance(this_00,pSVar13,(ArtboardInstance *)pLVar11);
      }
      linkStateMachineToArtboard(this,this_00,(ArtboardInstance *)pLVar11);
    }
    plVar12 = local_70;
    lVar6 = FUN_0036f734(this + 0x268,local_70,&local_70);
    plVar7 = *(long **)(lVar6 + 0x18);
    *(StateMachineInstance **)(lVar6 + 0x18) = this_00;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  else {
    lVar6 = FUN_0036cd58(this + 0x2b8,pAVar9,&local_80);
    if (*(long *)(lVar6 + 0x18) == *(long *)(lVar6 + 0x20)) goto LAB_0036f06c;
    this_00 = *(StateMachineInstance **)(*(long *)(lVar6 + 0x20) + -8);
    if (*(long *)(this_00 + 0x148) != 0) {
      lVar18 = 0;
      uVar8 = 0;
      do {
        lVar16 = *(long *)(this_00 + 0x150);
        lVar14 = lVar16 + lVar18;
        plVar12 = *(long **)(lVar14 + 0x20);
        plVar15 = *(long **)(lVar14 + 0x28);
        plVar7 = *(long **)(lVar14 + 0x18);
        if ((plVar15 != (long *)0x0 && plVar15 != plVar7) && plVar15 != plVar12) {
          (**(code **)(*plVar15 + 8))(plVar15);
          plVar7 = *(long **)(lVar14 + 0x18);
          plVar12 = *(long **)(lVar14 + 0x20);
        }
        *(undefined8 *)(lVar14 + 0x28) = 0;
        if ((plVar12 != (long *)0x0) && (plVar12 != plVar7)) {
          (**(code **)(*plVar12 + 8))();
        }
        *(undefined8 *)(lVar14 + 0x20) = 0;
        FUN_0034a530(lVar14,*(undefined8 *)(*(long *)(lVar16 + lVar18 + 8) + 0x48));
        uVar8 = uVar8 + 1;
        lVar18 = lVar18 + 0x68;
      } while (uVar8 < *(ulong *)(this_00 + 0x148));
    }
    applyRecorders(this,this_00,pAVar9);
    plVar12 = local_70;
    lVar14 = *(long *)(lVar6 + 0x20);
    lVar18 = FUN_0036f734(this + 0x268,local_70,&local_70);
    uVar10 = *(undefined8 *)(lVar14 + -8);
    *(undefined8 *)(lVar14 + -8) = 0;
    plVar7 = *(long **)(lVar18 + 0x18);
    *(undefined8 *)(lVar18 + 0x18) = uVar10;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    linkStateMachineToArtboard(this,this_00,(ArtboardInstance *)pLVar11);
    plVar15 = (long *)(*(long *)(lVar6 + 0x20) + -8);
    plVar7 = (long *)*plVar15;
    *plVar15 = 0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    *(long **)(lVar6 + 0x20) = plVar15;
  }
  uVar8 = (**(code **)(*(long *)this + 0x340))(this);
  if ((uVar8 & 1) == 0) {
    lVar6 = *(long *)(this + 0x330);
    uVar8 = *(long *)(this + 0x338) - lVar6 >> 3;
    if (uVar8 <= uVar17) {
      uVar1 = uVar17 + 1;
      if (uVar1 < uVar8 || uVar1 - uVar8 == 0) {
        if (uVar1 < uVar8) {
          *(ulong *)(this + 0x338) = lVar6 + uVar1 * 8;
        }
      }
      else {
        FUN_0036fe48(this + 0x330,uVar1 - uVar8,0);
      }
      uVar8 = *(long *)(this + 0x350) - *(long *)(this + 0x348) >> 3;
      if (uVar1 < uVar8 || uVar1 - uVar8 == 0) {
        if (uVar1 < uVar8) {
          *(ulong *)(this + 0x350) = *(long *)(this + 0x348) + uVar1 * 8;
        }
      }
      else {
        FUN_00370088(this + 0x348,uVar1 - uVar8,0);
      }
      lVar6 = *(long *)(this + 0x330);
    }
    *(LayoutComponent **)(lVar6 + uVar17 * 8) = pLVar11;
    *(StateMachineInstance **)(*(long *)(this + 0x348) + uVar17 * 8) = this_00;
  }
  if ((plVar12 != (long *)0x0) &&
     (iVar5 = FUN_00340fe0(0xffffffff,(long)plVar12 + 0x14), iVar5 == 1)) {
    (**(code **)(*plVar12 + 8))(plVar12);
  }
LAB_0036f23c:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036f270  rive::ArtboardComponentList::bindArtboard =====

/* rive::ArtboardComponentList::bindArtboard(rive::ArtboardInstance*,
   rive::rcp<rive::ViewModelInstanceListItem>) */

void __thiscall
rive::ArtboardComponentList::bindArtboard
          (ArtboardComponentList *this,Artboard *param_1,long *param_3)

{
  Artboard *pAVar1;
  long lVar2;
  int iVar3;
  ViewModelInstance *pVVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ViewModel *pVVar8;
  ViewModelInstance *pVVar9;
  long local_80;
  ViewModelInstance *local_78;
  ViewModelInstance *local_70;
  long *local_68;
  ViewModelInstance *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (param_1 == (Artboard *)0x0) goto LAB_0036f614;
  lVar7 = *(long *)(*(long *)(this + 0x40) + 0xbc0);
  if (lVar7 != 0) {
    FUN_00340fb0(1,lVar7);
  }
  pVVar8 = *(ViewModel **)(this + 0x360);
  if (pVVar8 == (ViewModel *)0x0) {
LAB_0036f500:
    pVVar4 = *(ViewModelInstance **)(*param_3 + 0x18);
    if (pVVar4 != (ViewModelInstance *)0x0) {
      FUN_00340fb0(1,pVVar4 + 0xa4);
      goto LAB_0036f518;
    }
  }
  else {
    pAVar1 = param_1;
    if (param_1[0xbe8] != (Artboard)0x0) {
      pAVar1 = *(Artboard **)(param_1 + 0xc60);
    }
    if ((this[0x409] == (ArtboardComponentList)0x0) || (pAVar1 == (Artboard *)0x0))
    goto LAB_0036f500;
    pVVar9 = *(ViewModelInstance **)(*param_3 + 0x18);
    if (pVVar9 == (ViewModelInstance *)0x0) {
      if (((ulong)*(uint *)(pAVar1 + 0x990) <
           (ulong)(*(long *)(pVVar8 + 0xa8) - *(long *)(pVVar8 + 0xa0) >> 3)) &&
         (lVar6 = *(long *)(*(long *)(pVVar8 + 0xa0) + (ulong)*(uint *)(pAVar1 + 0x990) * 8),
         lVar6 != 0)) {
        if ((*(long **)(lVar6 + 0x50) == *(long **)(lVar6 + 0x48)) ||
           (plVar5 = (long *)**(long **)(lVar6 + 0x48), plVar5 == (long *)0x0)) {
          File::createViewModelInstance(pVVar8);
        }
        else {
          pVVar9 = (ViewModelInstance *)(**(code **)(*plVar5 + 0x28))();
          local_70 = pVVar9;
          if (pVVar9 == (ViewModelInstance *)0x0) {
            local_60 = (ViewModelInstance *)0x0;
            File::completeViewModelInstance((File *)pVVar8,&local_60);
            goto LAB_0036f500;
          }
          FUN_00340fb0(1,pVVar9 + 0xa4);
          local_60 = pVVar9;
          File::completeViewModelInstance((File *)pVVar8,&local_60);
          iVar3 = FUN_00340fe0(0xffffffff,pVVar9 + 0xa4);
          if (iVar3 == 1) {
            (**(code **)(*(long *)pVVar9 + 8))(pVVar9);
          }
        }
        pVVar9 = local_70;
        if (local_70 != (ViewModelInstance *)0x0) {
          lVar6 = *param_3;
          FUN_00340fb0(1,local_70 + 0xa4);
          FUN_00340fb0(1,pVVar9 + 0xa4);
          plVar5 = *(long **)(lVar6 + 0x18);
          *(ViewModelInstance **)(lVar6 + 0x18) = pVVar9;
          if ((plVar5 != (long *)0x0) &&
             (iVar3 = FUN_00340fe0(0xffffffff,(long)plVar5 + 0xa4), iVar3 == 1)) {
            (**(code **)(*plVar5 + 8))(plVar5);
          }
          iVar3 = FUN_00340fe0(0xffffffff,pVVar9 + 0xa4);
          pVVar4 = pVVar9;
          if (iVar3 == 1) {
            lVar6 = *(long *)pVVar9;
            goto LAB_0036f464;
          }
          goto LAB_0036f518;
        }
      }
      goto LAB_0036f500;
    }
    FUN_00340fb0(1,pVVar9 + 0xa4);
    pVVar4 = (ViewModelInstance *)(**(code **)(*(long *)pVVar9 + 0x28))(pVVar9);
    File::completeViewModelProperties(*(File **)(this + 0x360),pVVar4);
    FUN_00340fb0(1,pVVar4 + 0xa4);
    param_3 = (long *)*param_3;
    local_68 = param_3;
    if (param_3 == (long *)0x0) {
      createBridgeBinds(this,&local_68,pVVar9,pVVar4);
    }
    else {
      FUN_00340fb0(1,(long)param_3 + 0x14);
      createBridgeBinds(this,&local_68,pVVar9,pVVar4);
      iVar3 = FUN_00340fe0(0xffffffff,(long)param_3 + 0x14);
      if (iVar3 == 1) {
        (**(code **)(*param_3 + 8))(param_3);
      }
    }
    iVar3 = FUN_00340fe0(0xffffffff,pVVar4 + 0xa4);
    if (iVar3 == 1) {
      (**(code **)(*(long *)pVVar4 + 8))(pVVar4);
    }
    iVar3 = FUN_00340fe0(0xffffffff,pVVar9 + 0xa4);
    if (iVar3 == 1) {
      lVar6 = *(long *)pVVar9;
LAB_0036f464:
      (**(code **)(lVar6 + 8))(pVVar9);
    }
LAB_0036f518:
    FUN_00340fb0(1,pVVar4 + 0xa4);
  }
  local_78 = pVVar4;
  if (lVar7 == 0) {
    local_80 = 0;
    Artboard::bindViewModelInstance(param_1,&local_78,&local_80);
    pVVar9 = pVVar4;
  }
  else {
    FUN_00340fb0(1,lVar7);
    local_80 = lVar7;
    Artboard::bindViewModelInstance(param_1,&local_78,&local_80);
    iVar3 = FUN_00340fe0(0xffffffff,lVar7);
    pVVar9 = local_78;
    if (iVar3 == 1) {
      FUN_003453a8(lVar7);
      pVVar9 = local_78;
    }
  }
  if ((pVVar9 != (ViewModelInstance *)0x0) &&
     (iVar3 = FUN_00340fe0(0xffffffff,pVVar9 + 0xa4), iVar3 == 1)) {
    (**(code **)(*(long *)pVVar9 + 8))(pVVar9);
  }
  (**(code **)(*(long *)param_1 + 0x330))(param_1,1);
  this[0x40b] = (ArtboardComponentList)0x0;
  if ((pVVar4 != (ViewModelInstance *)0x0) &&
     (iVar3 = FUN_00340fe0(0xffffffff,pVVar4 + 0xa4), iVar3 == 1)) {
    (**(code **)(*(long *)pVVar4 + 8))(pVVar4);
  }
  if ((lVar7 != 0) && (iVar3 = FUN_00340fe0(0xffffffff,lVar7), iVar3 == 1)) {
    FUN_003453a8(lVar7);
  }
LAB_0036f614:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0036f644  rive::ArtboardComponentList::applyRecorders =====

/* rive::ArtboardComponentList::applyRecorders(rive::StateMachineInstance*, rive::Artboard const*)
    */

void __thiscall
rive::ArtboardComponentList::applyRecorders
          (ArtboardComponentList *this,StateMachineInstance *param_1,Artboard *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  
  uVar2 = *(ulong *)(this + 0x2e8);
  if (uVar2 != 0) {
    uVar3 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ (ulong)param_2 >> 0x20) * -0x622015f714c7d297;
    uVar9 = NEON_cnt(uVar2,1);
    uVar8 = NEON_uaddlv(uVar9,1);
    uVar3 = ((ulong)param_2 >> 0x20 ^ uVar3 >> 0x2f ^ uVar3) * -0x622015f714c7d297;
    uVar4 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8) & 0xffffffff;
    uVar3 = (uVar3 ^ uVar3 >> 0x2f) * -0x622015f714c7d297;
    if (uVar4 < 2) {
      uVar5 = uVar2 - 1 & uVar3;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*(long *)(this + 0x2e0) + uVar5 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      do {
        uVar7 = plVar6[1];
        if (uVar7 == uVar3) {
          if ((Artboard *)plVar6[2] == param_2) {
            if ((PropertyRecorder *)plVar6[3] == (PropertyRecorder *)0x0) {
              return;
            }
            PropertyRecorder::apply((PropertyRecorder *)plVar6[3],param_1);
            return;
          }
        }
        else {
          if (uVar4 < 2) {
            uVar7 = uVar7 & uVar2 - 1;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) {
            return;
          }
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  return;
}


// ===== 0036f734  FUN_0036f734 =====

long * FUN_0036f734(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong unaff_x24;
  undefined2 uVar15;
  undefined8 uVar16;
  float fVar17;
  
  uVar14 = param_1[1];
  uVar6 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ param_2 >> 0x20) * -0x622015f714c7d297;
  uVar6 = (param_2 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
  uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  if (uVar14 != 0) {
    uVar16 = NEON_cnt(uVar14,1);
    uVar15 = NEON_uaddlv(uVar16,1);
    uVar8 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
    if (uVar8 < 2) {
      unaff_x24 = uVar6 & uVar14 - 1;
    }
    else {
      unaff_x24 = uVar6;
      if (uVar14 <= uVar6) {
        uVar10 = 0;
        if (uVar14 != 0) {
          uVar10 = uVar6 / uVar14;
        }
        unaff_x24 = uVar6 - uVar10 * uVar14;
      }
    }
    plVar7 = *(long **)(*param_1 + unaff_x24 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar10 = plVar7[1];
        if (uVar10 == uVar6) {
          if (plVar7[2] == param_2) {
            return plVar7;
          }
        }
        else {
          if (uVar8 < 2) {
            uVar10 = uVar10 & uVar14 - 1;
          }
          else if (uVar14 <= uVar10) {
            uVar5 = 0;
            if (uVar14 != 0) {
              uVar5 = uVar10 / uVar14;
            }
            uVar10 = uVar10 - uVar5 * uVar14;
          }
          if (uVar10 != unaff_x24) break;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  plVar7 = (long *)operator_new(0x20);
  lVar13 = *param_3;
  *plVar7 = 0;
  plVar7[1] = uVar6;
  if (lVar13 != 0) {
    FUN_00340fb0(1,lVar13 + 0x14);
  }
  lVar3 = param_1[3];
  fVar17 = *(float *)(param_1 + 4);
  plVar7[2] = lVar13;
  plVar7[3] = 0;
  if ((uVar14 == 0) || (fVar17 * (float)uVar14 < (float)(lVar3 + 1))) {
    if (uVar14 < 3) {
      uVar8 = 1;
    }
    else {
      uVar8 = (ulong)((uVar14 & uVar14 - 1) != 0);
    }
    uVar8 = uVar8 | uVar14 << 1;
    uVar14 = (ulong)((float)(lVar3 + 1) / fVar17);
    if (uVar8 <= uVar14) {
      uVar8 = uVar14;
    }
    if (uVar8 - 1 == 0) {
      uVar8 = 2;
    }
    else if ((uVar8 & uVar8 - 1) != 0) {
      uVar8 = std::__ndk1::__next_prime(uVar8);
    }
    uVar14 = param_1[1];
    if (uVar14 < uVar8) {
LAB_0036f8e0:
      if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00324008();
      }
      pvVar2 = operator_new(uVar8 << 3);
      pvVar4 = (void *)*param_1;
      *param_1 = (long)pvVar2;
      if (pvVar4 != (void *)0x0) {
        operator_delete(pvVar4);
      }
      uVar14 = 0;
      param_1[1] = uVar8;
      do {
        *(undefined8 *)(*param_1 + uVar14 * 8) = 0;
        uVar14 = uVar14 + 1;
      } while (uVar8 != uVar14);
      plVar9 = (long *)param_1[2];
      uVar14 = uVar8;
      if (plVar9 != (long *)0x0) {
        uVar10 = plVar9[1];
        uVar16 = NEON_cnt(uVar8,1);
        uVar15 = NEON_uaddlv(uVar16,1);
        uVar5 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
        if (uVar5 < 2) {
          uVar10 = uVar10 & uVar8 - 1;
        }
        else if (uVar8 <= uVar10) {
          uVar12 = 0;
          if (uVar8 != 0) {
            uVar12 = uVar10 / uVar8;
          }
          uVar10 = uVar10 - uVar12 * uVar8;
        }
        *(long **)(*param_1 + uVar10 * 8) = param_1 + 2;
        plVar11 = (long *)*plVar9;
        if (plVar11 != (long *)0x0) {
          do {
            uVar12 = plVar11[1];
            if (uVar5 < 2) {
              uVar12 = uVar12 & uVar8 - 1;
            }
            else if (uVar8 <= uVar12) {
              uVar1 = 0;
              if (uVar8 != 0) {
                uVar1 = uVar12 / uVar8;
              }
              uVar12 = uVar12 - uVar1 * uVar8;
            }
            if (uVar12 != uVar10) {
              if (*(long *)(*param_1 + uVar12 * 8) == 0) {
                *(long **)(*param_1 + uVar12 * 8) = plVar9;
                uVar10 = uVar12;
              }
              else {
                *plVar9 = *plVar11;
                *plVar11 = **(long **)(*param_1 + uVar12 * 8);
                **(undefined8 **)(*param_1 + uVar12 * 8) = plVar11;
                plVar11 = plVar9;
              }
            }
            plVar9 = plVar11;
            plVar11 = (long *)*plVar9;
          } while (plVar11 != (long *)0x0);
        }
      }
    }
    else if (uVar8 < uVar14) {
      uVar10 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar14 < 3) {
LAB_0036fb14:
        uVar10 = std::__ndk1::__next_prime(uVar10);
      }
      else {
        uVar16 = NEON_cnt(uVar14,1);
        uVar15 = NEON_uaddlv(uVar16,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15)) goto LAB_0036fb14;
        if (1 < uVar10) {
          uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
        }
      }
      if (uVar8 <= uVar10) {
        uVar8 = uVar10;
      }
      if (uVar8 < uVar14) {
        if (uVar8 != 0) goto LAB_0036f8e0;
        pvVar2 = (void *)*param_1;
        *param_1 = 0;
        if (pvVar2 != (void *)0x0) {
          operator_delete(pvVar2);
        }
        param_1[1] = 0;
        uVar14 = 0;
      }
      else {
        uVar14 = param_1[1];
      }
    }
    if ((uVar14 & uVar14 - 1) == 0) {
      unaff_x24 = uVar14 - 1 & uVar6;
    }
    else {
      unaff_x24 = uVar6;
      if (uVar14 <= uVar6) {
        uVar8 = 0;
        if (uVar14 != 0) {
          uVar8 = uVar6 / uVar14;
        }
        unaff_x24 = uVar6 - uVar8 * uVar14;
      }
    }
  }
  lVar13 = *param_1;
  plVar9 = *(long **)(lVar13 + unaff_x24 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_1 + 2;
    lVar3 = *plVar9;
    *plVar9 = (long)plVar7;
    *plVar7 = lVar3;
    *(long **)(lVar13 + unaff_x24 * 8) = plVar9;
    if (*plVar7 == 0) goto LAB_0036faf0;
    uVar6 = *(ulong *)(*plVar7 + 8);
    if ((uVar14 & uVar14 - 1) == 0) {
      uVar6 = uVar6 & uVar14 - 1;
    }
    else if (uVar14 <= uVar6) {
      uVar8 = 0;
      if (uVar14 != 0) {
        uVar8 = uVar6 / uVar14;
      }
      uVar6 = uVar6 - uVar8 * uVar14;
    }
    plVar9 = (long *)(*param_1 + uVar6 * 8);
  }
  else {
    *plVar7 = *plVar9;
  }
  *plVar9 = (long)plVar7;
LAB_0036faf0:
  param_1[3] = param_1[3] + 1;
  return plVar7;
}


// ===== 0036fb54  rive::ArtboardComponentList::linkStateMachineToArtboard =====

/* rive::ArtboardComponentList::linkStateMachineToArtboard(rive::StateMachineInstance*,
   rive::ArtboardInstance*) */

void __thiscall
rive::ArtboardComponentList::linkStateMachineToArtboard
          (ArtboardComponentList *this,StateMachineInstance *param_1,ArtboardInstance *param_2)

{
  long lVar1;
  void *pvVar2;
  int iVar3;
  Artboard *pAVar4;
  Component *extraout_x1;
  Component *extraout_x1_00;
  Component *extraout_x1_01;
  Component *extraout_x1_02;
  Component *extraout_x1_03;
  Component *pCVar5;
  Component *extraout_x1_04;
  Component *extraout_x1_05;
  Component *extraout_x1_06;
  void *pvVar6;
  long lVar7;
  long lVar8;
  void *local_70;
  void *local_68;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (StateMachineInstance *)0x0) || (param_2 == (ArtboardInstance *)0x0))
  goto LAB_0036fe18;
  pvVar6 = *(void **)(param_2 + 0xbc0);
  if (pvVar6 == (void *)0x0) {
    StateMachineInstance::clearDataContext(param_1);
    local_60 = (void *)0x0;
    StateMachineInstance::internalDataContext(param_1,&local_60);
  }
  else {
    FUN_00340fb0(1,pvVar6);
    FUN_00340fb0(1,pvVar6);
    StateMachineInstance::clearDataContext(param_1);
    FUN_00340fb0(1,pvVar6);
    local_60 = pvVar6;
    StateMachineInstance::internalDataContext(param_1,&local_60);
    FUN_003462d8(pvVar6);
    iVar3 = FUN_00340fe0(0xffffffff,pvVar6);
    if (iVar3 == 1) {
      FUN_003453a8(pvVar6);
    }
  }
  (*(code *)**(undefined8 **)(param_1 + 0x40))(param_1 + 0x40,0);
  lVar8 = *(long *)(this + 0x40);
  if (lVar8 != 0) {
    lVar7 = *(long *)(lVar8 + 0xc40);
    pCVar5 = extraout_x1;
    if (lVar7 != 0) {
      if (*(long *)(param_1 + 0x2e8) != lVar7) {
        pAVar4 = *(Artboard **)(param_1 + 0x10);
        if (pAVar4 == (Artboard *)0x0) {
          *(long *)(param_1 + 0x2e8) = lVar7;
        }
        else {
          if (*(long *)(pAVar4 + 0xc40) == 0) {
            *(long *)(param_1 + 0x2e8) = lVar7;
          }
          else {
            Artboard::cleanupFocusTree(pAVar4);
            pAVar4 = *(Artboard **)(param_1 + 0x10);
            *(long *)(param_1 + 0x2e8) = lVar7;
            pCVar5 = extraout_x1_00;
            if (pAVar4 == (Artboard *)0x0) goto LAB_0036fc84;
          }
          local_60 = (void *)0x0;
          Artboard::buildFocusTree(pAVar4,lVar7,&local_60);
          pCVar5 = extraout_x1_01;
        }
      }
LAB_0036fc84:
      FocusData::findClosestFocusNode((FocusData *)this,pCVar5);
      pvVar2 = local_68;
      if (local_68 == (void *)0x0) {
        local_70 = (void *)0x0;
        Artboard::buildFocusTree((Artboard *)param_2,lVar7,&local_70);
        pCVar5 = extraout_x1_06;
      }
      else {
        FUN_00340fb0(1,local_68);
        local_70 = pvVar2;
        Artboard::buildFocusTree((Artboard *)param_2,lVar7,&local_70);
        iVar3 = FUN_00340fe0(0xffffffff,pvVar2);
        pCVar5 = extraout_x1_02;
        if (iVar3 == 1) {
          if ((*(byte *)((long)pvVar2 + 0x38) & 1) != 0) {
            operator_delete(*(void **)((long)pvVar2 + 0x48));
          }
          local_60 = (void *)((long)pvVar2 + 0x20);
          FUN_0034b070(&local_60);
          pCVar5 = extraout_x1_03;
          operator_delete(pvVar2);
        }
        pvVar2 = local_68;
        if ((local_68 != (void *)0x0) &&
           (iVar3 = FUN_00340fe0(0xffffffff,local_68), pCVar5 = extraout_x1_04, iVar3 == 1)) {
          if ((*(byte *)((long)pvVar2 + 0x38) & 1) != 0) {
            operator_delete(*(void **)((long)pvVar2 + 0x48));
          }
          local_60 = (void *)((long)pvVar2 + 0x20);
          FUN_0034b070(&local_60);
          pCVar5 = extraout_x1_05;
          operator_delete(pvVar2);
        }
      }
    }
    lVar8 = *(long *)(lVar8 + 0xc48);
    if (lVar8 != 0) {
      SemanticData::findClosestSemanticNode((SemanticData *)this,pCVar5);
      if (local_68 != (void *)0x0) {
        FUN_00340fb0(1,local_68);
      }
      if (*(long *)(param_1 + 0x328) != lVar8) {
        pAVar4 = *(Artboard **)(param_1 + 0x10);
        if (pAVar4 == (Artboard *)0x0) {
          *(long *)(param_1 + 0x328) = lVar8;
        }
        else {
          if (*(long *)(pAVar4 + 0xc48) == 0) {
            *(long *)(param_1 + 0x328) = lVar8;
          }
          else {
            Artboard::cleanupSemanticTree(pAVar4);
            pAVar4 = *(Artboard **)(param_1 + 0x10);
            *(long *)(param_1 + 0x328) = lVar8;
            if (pAVar4 == (Artboard *)0x0) goto LAB_0036fde4;
          }
          if (local_68 != (void *)0x0) {
            FUN_00340fb0(1,local_68);
          }
          local_60 = local_68;
          Artboard::buildSemanticTree(pAVar4,lVar8,&local_60);
          FUN_0034f1d0(&local_60);
        }
      }
LAB_0036fde4:
      if (local_68 != (void *)0x0) {
        FUN_0035fa18(local_68);
        FUN_0035fa18(local_68);
      }
    }
  }
  if ((pvVar6 != (void *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,pvVar6), iVar3 == 1)) {
    FUN_003453a8(pvVar6);
  }
LAB_0036fe18:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0036fe48  FUN_0036fe48 =====

void FUN_0036fe48(long *param_1,ulong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar11 = (undefined8 *)param_1[1];
  if (param_2 <= (ulong)(param_1[2] - (long)puVar11 >> 3)) {
    puVar12 = puVar11;
    if (param_2 != 0) {
      uVar8 = param_2 - 1 & 0x1fffffffffffffff;
      puVar12 = puVar11 + param_2;
      if (2 < uVar8) {
        uVar8 = uVar8 + 1;
        puVar5 = puVar11 + 2;
        uVar4 = uVar8 & 0x3ffffffffffffffc;
        uVar6 = uVar4;
        do {
          puVar5[-1] = param_3;
          puVar5[-2] = param_3;
          puVar5[1] = param_3;
          *puVar5 = param_3;
          uVar6 = uVar6 - 4;
          puVar5 = puVar5 + 4;
        } while (uVar6 != 0);
        if (uVar8 == uVar4) goto LAB_0036ff40;
        puVar11 = puVar11 + uVar4;
      }
      do {
        puVar5 = puVar11 + 1;
        *puVar11 = param_3;
        puVar11 = puVar5;
      } while (puVar5 != puVar12);
    }
LAB_0036ff40:
    param_1[1] = (long)puVar12;
    return;
  }
  puVar12 = (undefined8 *)*param_1;
  lVar13 = (long)puVar11 - (long)puVar12;
  lVar14 = lVar13 >> 3;
  uVar8 = lVar14 + param_2;
  if (uVar8 >> 0x3d != 0) {
    FUN_003702dc();
LAB_00370084:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar4 = param_1[2] - (long)puVar12;
  uVar6 = (long)uVar4 >> 2;
  if (uVar6 <= uVar8) {
    uVar6 = uVar8;
  }
  if (0x7ffffffffffffff7 < uVar4) {
    uVar6 = 0x1fffffffffffffff;
  }
  if (uVar6 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (uVar6 >> 0x3d != 0) goto LAB_00370084;
    pvVar3 = operator_new(uVar6 << 3);
  }
  puVar5 = (undefined8 *)((long)pvVar3 + lVar14 * 8);
  uVar8 = param_2 - 1 & 0x1fffffffffffffff;
  puVar1 = puVar5 + param_2;
  puVar7 = puVar5;
  if (uVar8 < 3) {
LAB_0036ff9c:
    do {
      puVar12 = puVar7 + 1;
      *puVar7 = param_3;
      puVar7 = puVar12;
    } while (puVar12 != puVar1);
    puVar12 = (undefined8 *)*param_1;
  }
  else {
    uVar8 = uVar8 + 1;
    puVar7 = puVar5 + 2;
    uVar9 = uVar8 & 0x3ffffffffffffffc;
    uVar4 = uVar9;
    do {
      puVar7[-1] = param_3;
      puVar7[-2] = param_3;
      puVar7[1] = param_3;
      *puVar7 = param_3;
      uVar4 = uVar4 - 4;
      puVar7 = puVar7 + 4;
    } while (uVar4 != 0);
    if (uVar8 != uVar9) {
      puVar7 = puVar5 + uVar9;
      goto LAB_0036ff9c;
    }
  }
  puVar7 = puVar11;
  if ((long)puVar11 - (long)puVar12 != 0) {
    uVar8 = ((long)puVar11 - (long)puVar12) - 8;
    if ((0x37 < uVar8) && (0x1f < (ulong)((long)puVar11 - (lVar13 + (long)pvVar3)))) {
      puVar10 = puVar11 + -2;
      uVar8 = (uVar8 >> 3) + 1;
      uVar9 = uVar8 & 0x3ffffffffffffffc;
      puVar11 = puVar11 + -uVar9;
      puVar7 = puVar5 + -2;
      uVar4 = uVar9;
      do {
        puVar2 = puVar10 + -1;
        uVar17 = puVar10[-2];
        uVar16 = puVar10[1];
        uVar15 = *puVar10;
        uVar4 = uVar4 - 4;
        puVar10 = puVar10 + -4;
        puVar7[-1] = *puVar2;
        puVar7[-2] = uVar17;
        puVar7[1] = uVar16;
        *puVar7 = uVar15;
        puVar7 = puVar7 + -4;
      } while (uVar4 != 0);
      puVar5 = puVar5 + -uVar9;
      puVar7 = puVar12;
      if (uVar8 == uVar9) goto LAB_00370038;
    }
    do {
      puVar11 = puVar11 + -1;
      puVar5 = puVar5 + -1;
      *puVar5 = *puVar11;
    } while (puVar11 != puVar12);
    puVar7 = (undefined8 *)*param_1;
  }
LAB_00370038:
  *param_1 = (long)puVar5;
  param_1[1] = (long)puVar1;
  param_1[2] = (long)((long)pvVar3 + uVar6 * 8);
  if (puVar7 == (undefined8 *)0x0) {
    return;
  }
  operator_delete(puVar7);
  return;
}


// ===== 00370088  FUN_00370088 =====

void FUN_00370088(long *param_1,ulong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar11 = (undefined8 *)param_1[1];
  if (param_2 <= (ulong)(param_1[2] - (long)puVar11 >> 3)) {
    puVar12 = puVar11;
    if (param_2 != 0) {
      uVar8 = param_2 - 1 & 0x1fffffffffffffff;
      puVar12 = puVar11 + param_2;
      if (2 < uVar8) {
        uVar8 = uVar8 + 1;
        puVar5 = puVar11 + 2;
        uVar4 = uVar8 & 0x3ffffffffffffffc;
        uVar6 = uVar4;
        do {
          puVar5[-1] = param_3;
          puVar5[-2] = param_3;
          puVar5[1] = param_3;
          *puVar5 = param_3;
          uVar6 = uVar6 - 4;
          puVar5 = puVar5 + 4;
        } while (uVar6 != 0);
        if (uVar8 == uVar4) goto LAB_00370180;
        puVar11 = puVar11 + uVar4;
      }
      do {
        puVar5 = puVar11 + 1;
        *puVar11 = param_3;
        puVar11 = puVar5;
      } while (puVar5 != puVar12);
    }
LAB_00370180:
    param_1[1] = (long)puVar12;
    return;
  }
  puVar12 = (undefined8 *)*param_1;
  lVar13 = (long)puVar11 - (long)puVar12;
  lVar14 = lVar13 >> 3;
  uVar8 = lVar14 + param_2;
  if (uVar8 >> 0x3d != 0) {
    FUN_003702c8();
LAB_003702c4:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar4 = param_1[2] - (long)puVar12;
  uVar6 = (long)uVar4 >> 2;
  if (uVar6 <= uVar8) {
    uVar6 = uVar8;
  }
  if (0x7ffffffffffffff7 < uVar4) {
    uVar6 = 0x1fffffffffffffff;
  }
  if (uVar6 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (uVar6 >> 0x3d != 0) goto LAB_003702c4;
    pvVar3 = operator_new(uVar6 << 3);
  }
  puVar5 = (undefined8 *)((long)pvVar3 + lVar14 * 8);
  uVar8 = param_2 - 1 & 0x1fffffffffffffff;
  puVar1 = puVar5 + param_2;
  puVar7 = puVar5;
  if (uVar8 < 3) {
LAB_003701dc:
    do {
      puVar12 = puVar7 + 1;
      *puVar7 = param_3;
      puVar7 = puVar12;
    } while (puVar12 != puVar1);
    puVar12 = (undefined8 *)*param_1;
  }
  else {
    uVar8 = uVar8 + 1;
    puVar7 = puVar5 + 2;
    uVar9 = uVar8 & 0x3ffffffffffffffc;
    uVar4 = uVar9;
    do {
      puVar7[-1] = param_3;
      puVar7[-2] = param_3;
      puVar7[1] = param_3;
      *puVar7 = param_3;
      uVar4 = uVar4 - 4;
      puVar7 = puVar7 + 4;
    } while (uVar4 != 0);
    if (uVar8 != uVar9) {
      puVar7 = puVar5 + uVar9;
      goto LAB_003701dc;
    }
  }
  puVar7 = puVar11;
  if ((long)puVar11 - (long)puVar12 != 0) {
    uVar8 = ((long)puVar11 - (long)puVar12) - 8;
    if ((0x37 < uVar8) && (0x1f < (ulong)((long)puVar11 - (lVar13 + (long)pvVar3)))) {
      puVar10 = puVar11 + -2;
      uVar8 = (uVar8 >> 3) + 1;
      uVar9 = uVar8 & 0x3ffffffffffffffc;
      puVar11 = puVar11 + -uVar9;
      puVar7 = puVar5 + -2;
      uVar4 = uVar9;
      do {
        puVar2 = puVar10 + -1;
        uVar17 = puVar10[-2];
        uVar16 = puVar10[1];
        uVar15 = *puVar10;
        uVar4 = uVar4 - 4;
        puVar10 = puVar10 + -4;
        puVar7[-1] = *puVar2;
        puVar7[-2] = uVar17;
        puVar7[1] = uVar16;
        *puVar7 = uVar15;
        puVar7 = puVar7 + -4;
      } while (uVar4 != 0);
      puVar5 = puVar5 + -uVar9;
      puVar7 = puVar12;
      if (uVar8 == uVar9) goto LAB_00370278;
    }
    do {
      puVar11 = puVar11 + -1;
      puVar5 = puVar5 + -1;
      *puVar5 = *puVar11;
    } while (puVar11 != puVar12);
    puVar7 = (undefined8 *)*param_1;
  }
LAB_00370278:
  *param_1 = (long)puVar5;
  param_1[1] = (long)puVar1;
  param_1[2] = (long)((long)pvVar3 + uVar6 * 8);
  if (puVar7 == (undefined8 *)0x0) {
    return;
  }
  operator_delete(puVar7);
  return;
}


// ===== 003702c8  FUN_003702c8 =====

void FUN_003702c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 003702dc  FUN_003702dc =====

void FUN_003702dc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 003702f0  rive::ArtboardComponentList::createBridgeBinds =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::ArtboardComponentList::createBridgeBinds(rive::rcp<rive::ViewModelInstanceListItem>,
   rive::ViewModelInstance*, rive::ViewModelInstance*) */

void __thiscall
rive::ArtboardComponentList::createBridgeBinds
          (ArtboardComponentList *this,ulong *param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  ushort uVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  void *pvVar11;
  long lVar12;
  DataBind *pDVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  void *pvVar19;
  long *plVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  ulong uVar25;
  long *plVar26;
  ulong unaff_x21;
  ViewModelInstanceValue *this_00;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  undefined2 uVar30;
  undefined8 uVar31;
  float fVar32;
  DataBind *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  if ((((param_3 == 0) || (param_4 == 0)) || (*(long *)(param_4 + 0x118) == 0)) ||
     (lVar15 = *(long *)(this + 0x40), lVar15 == 0)) goto LAB_00370be8;
  uVar29 = *param_2;
  uVar27 = *(ulong *)(this + 1000);
  uVar16 = ((ulong)(uint)((int)uVar29 << 3) + 8 ^ uVar29 >> 0x20) * -0x622015f714c7d297;
  uVar16 = (uVar29 >> 0x20 ^ uVar16 >> 0x2f ^ uVar16) * -0x622015f714c7d297;
  uVar16 = (uVar16 ^ uVar16 >> 0x2f) * -0x622015f714c7d297;
  if (uVar27 != 0) {
    uVar31 = NEON_cnt(uVar27,1);
    uVar30 = NEON_uaddlv(uVar31,1);
    uVar23 = CONCAT62((int6)((ulong)uVar31 >> 0x10),uVar30) & 0xffffffff;
    if (uVar23 < 2) {
      unaff_x21 = uVar16 & uVar27 - 1;
    }
    else {
      unaff_x21 = uVar16;
      if (uVar27 <= uVar16) {
        uVar22 = 0;
        if (uVar27 != 0) {
          uVar22 = uVar16 / uVar27;
        }
        unaff_x21 = uVar16 - uVar22 * uVar27;
      }
    }
    puVar17 = *(undefined8 **)(*(long *)(this + 0x3e0) + unaff_x21 * 8);
    if ((puVar17 != (undefined8 *)0x0) && (plVar26 = (long *)*puVar17, plVar26 != (long *)0x0)) {
      do {
        uVar22 = plVar26[1];
        if (uVar22 == uVar16) {
          if (plVar26[2] == uVar29) goto LAB_00370714;
        }
        else {
          if (uVar23 < 2) {
            uVar22 = uVar22 & uVar27 - 1;
          }
          else if (uVar27 <= uVar22) {
            uVar25 = 0;
            if (uVar27 != 0) {
              uVar25 = uVar22 / uVar27;
            }
            uVar22 = uVar22 - uVar25 * uVar27;
          }
          if (uVar22 != unaff_x21) break;
        }
        plVar26 = (long *)*plVar26;
      } while (plVar26 != (long *)0x0);
    }
  }
  plVar26 = (long *)operator_new(0x30);
  *plVar26 = 0;
  plVar26[1] = uVar16;
  if (uVar29 != 0) {
    FUN_00340fb0(1,uVar29 + 0x14);
  }
  lVar18 = *(long *)(this + 0x3f8);
  fVar32 = *(float *)(this + 0x400);
  plVar26[2] = uVar29;
  plVar26[3] = 0;
  plVar26[4] = 0;
  plVar26[5] = 0;
  if ((uVar27 == 0) || (fVar32 * (float)uVar27 < (float)(lVar18 + 1))) {
    if (uVar27 < 3) {
      uVar29 = 1;
    }
    else {
      uVar29 = (ulong)((uVar27 & uVar27 - 1) != 0);
    }
    uVar29 = uVar29 | uVar27 << 1;
    uVar27 = (ulong)((float)(lVar18 + 1) / fVar32);
    if (uVar29 <= uVar27) {
      uVar29 = uVar27;
    }
    if (uVar29 - 1 == 0) {
      uVar29 = 2;
    }
    else if ((uVar29 & uVar29 - 1) != 0) {
      uVar29 = std::__ndk1::__next_prime(uVar29);
    }
    uVar27 = *(ulong *)(this + 1000);
    if (uVar27 < uVar29) {
LAB_003704ec:
      if (uVar29 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00324008();
      }
      pvVar11 = operator_new(uVar29 << 3);
      pvVar19 = *(void **)(this + 0x3e0);
      *(void **)(this + 0x3e0) = pvVar11;
      if (pvVar19 != (void *)0x0) {
        operator_delete(pvVar19);
      }
      uVar27 = 0;
      *(ulong *)(this + 1000) = uVar29;
      do {
        *(undefined8 *)(*(long *)(this + 0x3e0) + uVar27 * 8) = 0;
        uVar27 = uVar27 + 1;
      } while (uVar29 != uVar27);
      plVar20 = *(long **)(this + 0x3f0);
      uVar27 = uVar29;
      if (plVar20 != (long *)0x0) {
        uVar23 = plVar20[1];
        uVar31 = NEON_cnt(uVar29,1);
        uVar30 = NEON_uaddlv(uVar31,1);
        uVar22 = CONCAT62((int6)((ulong)uVar31 >> 0x10),uVar30) & 0xffffffff;
        if (uVar22 < 2) {
          uVar23 = uVar23 & uVar29 - 1;
        }
        else if (uVar29 <= uVar23) {
          uVar25 = 0;
          if (uVar29 != 0) {
            uVar25 = uVar23 / uVar29;
          }
          uVar23 = uVar23 - uVar25 * uVar29;
        }
        *(ArtboardComponentList **)(*(long *)(this + 0x3e0) + uVar23 * 8) = this + 0x3f0;
        plVar24 = (long *)*plVar20;
        if (plVar24 != (long *)0x0) {
          do {
            uVar25 = plVar24[1];
            if (uVar22 < 2) {
              uVar25 = uVar25 & uVar29 - 1;
            }
            else if (uVar29 <= uVar25) {
              uVar4 = 0;
              if (uVar29 != 0) {
                uVar4 = uVar25 / uVar29;
              }
              uVar25 = uVar25 - uVar4 * uVar29;
            }
            if (uVar25 != uVar23) {
              if (*(long *)(*(long *)(this + 0x3e0) + uVar25 * 8) == 0) {
                *(long **)(*(long *)(this + 0x3e0) + uVar25 * 8) = plVar20;
                uVar23 = uVar25;
              }
              else {
                *plVar20 = *plVar24;
                *plVar24 = **(long **)(*(long *)(this + 0x3e0) + uVar25 * 8);
                **(undefined8 **)(*(long *)(this + 0x3e0) + uVar25 * 8) = plVar24;
                plVar24 = plVar20;
              }
            }
            plVar20 = plVar24;
            plVar24 = (long *)*plVar20;
          } while (plVar24 != (long *)0x0);
        }
      }
    }
    else if (uVar29 < uVar27) {
      uVar23 = (ulong)((float)*(ulong *)(this + 0x3f8) / *(float *)(this + 0x400));
      if (uVar27 < 3) {
LAB_00370c18:
        uVar23 = std::__ndk1::__next_prime(uVar23);
      }
      else {
        uVar31 = NEON_cnt(uVar27,1);
        uVar30 = NEON_uaddlv(uVar31,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar31 >> 0x10),uVar30)) goto LAB_00370c18;
        if (1 < uVar23) {
          uVar23 = 1L << (-LZCOUNT(uVar23 - 1) & 0x3fU);
        }
      }
      if (uVar29 <= uVar23) {
        uVar29 = uVar23;
      }
      if (uVar29 < uVar27) {
        if (uVar29 != 0) goto LAB_003704ec;
        pvVar11 = *(void **)(this + 0x3e0);
        *(undefined8 *)(this + 0x3e0) = 0;
        if (pvVar11 != (void *)0x0) {
          operator_delete(pvVar11);
        }
        *(undefined8 *)(this + 1000) = 0;
        uVar27 = 0;
      }
      else {
        uVar27 = *(ulong *)(this + 1000);
      }
    }
    if ((uVar27 & uVar27 - 1) == 0) {
      unaff_x21 = uVar27 - 1 & uVar16;
    }
    else {
      unaff_x21 = uVar16;
      if (uVar27 <= uVar16) {
        uVar29 = 0;
        if (uVar27 != 0) {
          uVar29 = uVar16 / uVar27;
        }
        unaff_x21 = uVar16 - uVar29 * uVar27;
      }
    }
  }
  lVar18 = *(long *)(this + 0x3e0);
  plVar20 = *(long **)(lVar18 + unaff_x21 * 8);
  if (plVar20 == (long *)0x0) {
    lVar21 = *(long *)(this + 0x3f0);
    *(long **)(this + 0x3f0) = plVar26;
    *plVar26 = lVar21;
    *(ArtboardComponentList **)(lVar18 + unaff_x21 * 8) = this + 0x3f0;
    if (*plVar26 != 0) {
      uVar16 = *(ulong *)(*plVar26 + 8);
      if ((uVar27 & uVar27 - 1) == 0) {
        uVar16 = uVar16 & uVar27 - 1;
      }
      else if (uVar27 <= uVar16) {
        uVar29 = 0;
        if (uVar27 != 0) {
          uVar29 = uVar16 / uVar27;
        }
        uVar16 = uVar16 - uVar29 * uVar27;
      }
      plVar20 = (long *)(*(long *)(this + 0x3e0) + uVar16 * 8);
      goto LAB_00370704;
    }
  }
  else {
    *plVar26 = *plVar20;
LAB_00370704:
    *plVar20 = (long)plVar26;
  }
  *(long *)(this + 0x3f8) = *(long *)(this + 0x3f8) + 1;
LAB_00370714:
  lVar21 = _UNK_0024e158;
  lVar18 = _DAT_0024e150;
  puVar3 = *(undefined8 **)(param_4 + 0xb0);
  for (puVar17 = *(undefined8 **)(param_4 + 0xa8); puVar17 != puVar3; puVar17 = puVar17 + 1) {
    plVar20 = (long *)*puVar17;
    lVar28 = plVar20[0x15];
    if ((lVar28 != 0) && ((*(byte *)(lVar28 + 0x2c) & 3) != 0)) {
      for (puVar2 = *(undefined8 **)(param_3 + 0xa8); puVar2 != *(undefined8 **)(param_3 + 0xb0);
          puVar2 = puVar2 + 1) {
        this_00 = (ViewModelInstanceValue *)*puVar2;
        if (*(long *)(this_00 + 0xa8) == lVar28) {
          uVar7 = (**(code **)(*plVar20 + 0x10))(plVar20);
          if (uVar7 < 0x1ba) {
            if (uVar7 == 0x1aa) {
              iVar9 = 0x22b;
              iVar10 = 0x22b;
              uVar14 = *(uint *)(lVar28 + 0x2c);
            }
            else if (uVar7 == 0x1b0) {
              iVar9 = 0x230;
              iVar10 = 0x230;
              uVar14 = *(uint *)(lVar28 + 0x2c);
            }
            else {
              if (uVar7 != 0x1b1) break;
              iVar9 = 0x231;
              iVar10 = 0x231;
              uVar14 = *(uint *)(lVar28 + 0x2c);
            }
          }
          else if (uVar7 < 0x1c1) {
            if (uVar7 == 0x1ba) {
              iVar9 = 0x23f;
              iVar10 = 0x23f;
              uVar14 = *(uint *)(lVar28 + 0x2c);
            }
            else {
              if (uVar7 != 0x1bc) break;
              iVar9 = 0x241;
              iVar10 = 0x241;
              uVar14 = *(uint *)(lVar28 + 0x2c);
            }
          }
          else if (uVar7 == 0x1c1) {
            iVar9 = 0x251;
            iVar10 = 0x251;
            uVar14 = *(uint *)(lVar28 + 0x2c);
          }
          else {
            if (uVar7 != 0x1f5) break;
            iVar9 = 0x2af;
            iVar10 = 0x2af;
            uVar14 = *(uint *)(lVar28 + 0x2c);
          }
          if ((uVar14 & 1) != 0) {
            pDVar13 = (DataBind *)operator_new(0x60);
            puVar6 = PTR_vtable_0067cfc8;
            puVar1 = PTR_vtable_0067cfc8 + 0xb8;
            *(long *)(pDVar13 + 0x10) = lVar21;
            *(long *)(pDVar13 + 8) = lVar18;
            *(undefined **)(pDVar13 + 0x18) = puVar1;
            *(long *)(pDVar13 + 0x28) = 0;
            *(long *)(pDVar13 + 0x20) = 0;
            *(undefined **)pDVar13 = puVar6 + 0x10;
            *(long *)(pDVar13 + 0x48) = 0;
            *(long *)(pDVar13 + 0x40) = 0;
            *(long *)(pDVar13 + 0x58) = 0;
            *(long *)(pDVar13 + 0x50) = 0;
            *(undefined4 *)(pDVar13 + 0x27) = 0;
            *(long *)(pDVar13 + 0x20) = 0;
            pDVar13[0x50] = (DataBind)0x0;
            *(long *)(pDVar13 + 0x38) = 0;
            *(long *)(pDVar13 + 0x30) = 0;
            local_70 = pDVar13;
            FUN_00340fb0(1,this_00 + 0x8c);
            if (((byte)pDVar13[0x10] >> 2 & 1) == 0) {
              ViewModelInstanceValue::addDependent
                        (this_00,(ViewModelValueDependent *)(pDVar13 + 0x18));
            }
            FUN_00340fb0(1,this_00 + 0x8c);
            plVar24 = *(long **)(pDVar13 + 0x38);
            *(ViewModelInstanceValue **)(pDVar13 + 0x38) = this_00;
            if (plVar24 == (long *)0x0) {
LAB_00370910:
              plVar24 = *(long **)(pDVar13 + 0x30);
              if ((plVar24 != (long *)0x0) &&
                 (uVar27 = (**(code **)(*plVar24 + 0x18))(plVar24,0x22f), (uVar27 & 1) != 0)) {
                lVar12 = *(long *)(pDVar13 + 0x30);
                sVar8 = (**(code **)(**(long **)(pDVar13 + 0x38) + 0x10))();
                *(bool *)(lVar12 + 0x408) = sVar8 == 0x1ba;
              }
            }
            else {
              iVar9 = FUN_00340fe0(0xffffffff,(long)plVar24 + 0x8c);
              if (iVar9 == 1) {
                (**(code **)(*plVar24 + 8))(plVar24);
              }
              if (*(long *)(pDVar13 + 0x38) != 0) goto LAB_00370910;
            }
            iVar9 = FUN_00340fe0(0xffffffff,this_00 + 0x8c);
            if (iVar9 == 1) {
              (**(code **)(*(long *)this_00 + 8))(this_00);
            }
            pDVar13 = local_70;
            *(long **)(local_70 + 0x30) = plVar20;
            if (*(int *)(local_70 + 0xc) != iVar10) {
              *(int *)(local_70 + 0xc) = iVar10;
              (**(code **)(*(long *)local_70 + 0x50))(local_70);
            }
            if (*(int *)(pDVar13 + 0x10) != 0) {
              *(undefined4 *)(pDVar13 + 0x10) = 0;
              (**(code **)(*(long *)pDVar13 + 0x58))(pDVar13);
            }
            (**(code **)(*(long *)pDVar13 + 0x78))(pDVar13);
            DataBindContainer::addDataBind((DataBindContainer *)(lVar15 + 0x9b0),pDVar13);
            puVar2 = (undefined8 *)plVar26[4];
            if (puVar2 < (undefined8 *)plVar26[5]) {
              *puVar2 = pDVar13;
              plVar26[4] = (long)(puVar2 + 1);
            }
            else {
              lVar12 = FUN_003516cc(plVar26 + 3,&local_70);
              plVar26[4] = lVar12;
              if (local_70 != (DataBind *)0x0) {
                (**(code **)(*(long *)local_70 + 8))(local_70);
              }
            }
            uVar14 = *(uint *)(lVar28 + 0x2c);
            iVar9 = iVar10;
          }
          if ((uVar14 >> 1 & 1) != 0) {
            pDVar13 = (DataBind *)operator_new(0x60);
            puVar6 = PTR_vtable_0067cfc8;
            puVar1 = PTR_vtable_0067cfc8 + 0xb8;
            *(long *)(pDVar13 + 0x10) = lVar21;
            *(long *)(pDVar13 + 8) = lVar18;
            *(undefined **)(pDVar13 + 0x18) = puVar1;
            *(long *)(pDVar13 + 0x28) = 0;
            *(long *)(pDVar13 + 0x20) = 0;
            *(undefined **)pDVar13 = puVar6 + 0x10;
            *(long *)(pDVar13 + 0x48) = 0;
            *(long *)(pDVar13 + 0x40) = 0;
            *(long *)(pDVar13 + 0x58) = 0;
            *(long *)(pDVar13 + 0x50) = 0;
            *(undefined4 *)(pDVar13 + 0x27) = 0;
            *(long *)(pDVar13 + 0x20) = 0;
            pDVar13[0x50] = (DataBind)0x0;
            *(long *)(pDVar13 + 0x38) = 0;
            *(long *)(pDVar13 + 0x30) = 0;
            local_70 = pDVar13;
            FUN_00340fb0(1,this_00 + 0x8c);
            if (((byte)pDVar13[0x10] >> 2 & 1) == 0) {
              ViewModelInstanceValue::addDependent
                        (this_00,(ViewModelValueDependent *)(pDVar13 + 0x18));
            }
            FUN_00340fb0(1,this_00 + 0x8c);
            plVar24 = *(long **)(pDVar13 + 0x38);
            *(ViewModelInstanceValue **)(pDVar13 + 0x38) = this_00;
            if (plVar24 == (long *)0x0) {
LAB_00370ae0:
              plVar24 = *(long **)(pDVar13 + 0x30);
              if ((plVar24 != (long *)0x0) &&
                 (uVar27 = (**(code **)(*plVar24 + 0x18))(plVar24,0x22f), (uVar27 & 1) != 0)) {
                lVar28 = *(long *)(pDVar13 + 0x30);
                sVar8 = (**(code **)(**(long **)(pDVar13 + 0x38) + 0x10))();
                *(bool *)(lVar28 + 0x408) = sVar8 == 0x1ba;
              }
            }
            else {
              iVar10 = FUN_00340fe0(0xffffffff,(long)plVar24 + 0x8c);
              if (iVar10 == 1) {
                (**(code **)(*plVar24 + 8))(plVar24);
              }
              if (*(long *)(pDVar13 + 0x38) != 0) goto LAB_00370ae0;
            }
            iVar10 = FUN_00340fe0(0xffffffff,this_00 + 0x8c);
            if (iVar10 == 1) {
              (**(code **)(*(long *)this_00 + 8))(this_00);
            }
            pDVar13 = local_70;
            *(long **)(local_70 + 0x30) = plVar20;
            if (*(int *)(local_70 + 0xc) != iVar9) {
              *(int *)(local_70 + 0xc) = iVar9;
              (**(code **)(*(long *)local_70 + 0x50))(local_70);
            }
            if (*(int *)(pDVar13 + 0x10) != 1) {
              *(undefined4 *)(pDVar13 + 0x10) = 1;
              (**(code **)(*(long *)pDVar13 + 0x58))(pDVar13);
            }
            (**(code **)(*(long *)pDVar13 + 0x78))(pDVar13);
            DataBindContainer::addDataBind((DataBindContainer *)(lVar15 + 0x9b0),pDVar13);
            puVar2 = (undefined8 *)plVar26[4];
            if (puVar2 < (undefined8 *)plVar26[5]) {
              *puVar2 = pDVar13;
              plVar26[4] = (long)(puVar2 + 1);
            }
            else {
              lVar28 = FUN_003516cc(plVar26 + 3,&local_70);
              plVar26[4] = lVar28;
              if (local_70 != (DataBind *)0x0) {
                (**(code **)(*(long *)local_70 + 8))(local_70);
              }
            }
          }
          break;
        }
      }
    }
  }
LAB_00370be8:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00370c6c  FUN_00370c6c =====

void FUN_00370c6c(long *param_1,Artboard *param_2)

{
  int iVar1;
  long *plVar2;
  undefined4 uVar3;
  ArtboardInstance AVar4;
  undefined8 *puVar5;
  ArtboardComponentListOverride *pAVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  ArtboardInstance *this;
  void *pvVar10;
  void *__dest;
  ArtboardComponentListOverride *this_00;
  code *UNRECOVERED_JUMPTABLE;
  Core *pCVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  int iVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long *plVar21;
  undefined8 *puVar22;
  Artboard *pAVar23;
  Core *pCVar24;
  long lVar25;
  undefined8 *puVar26;
  Core *pCVar27;
  long lVar28;
  undefined8 *puVar29;
  long *plVar30;
  ArtboardComponentListOverride *pAVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  undefined4 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined4 uVar37;
  undefined8 uVar38;
  undefined1 auVar39 [16];
  
  this = (ArtboardInstance *)operator_new(0xc78);
  rive::ArtboardInstance::ArtboardInstance(this);
  uVar34 = *(undefined4 *)(param_2 + 0x984);
  uVar3 = *(undefined4 *)(param_2 + 0x98c);
  uVar37 = *(undefined4 *)(param_2 + 0x988);
  *param_1 = (long)this;
  *(undefined4 *)(this + 0x984) = uVar34;
  uVar34 = *(undefined4 *)(param_2 + 0x174);
  *(undefined4 *)(this + 0x98c) = uVar3;
  uVar3 = *(undefined4 *)(param_2 + 0x990);
  *(undefined4 *)(this + 0x174) = uVar34;
  uVar34 = *(undefined4 *)(param_2 + 0x178);
  *(undefined4 *)(this + 0x990) = uVar3;
  AVar4 = *(ArtboardInstance *)(param_2 + 0x171);
  *(undefined4 *)(this + 0x178) = uVar34;
  uVar35 = *(undefined8 *)(param_2 + 0x180);
  this[0x171] = AVar4;
  uVar3 = *(undefined4 *)(param_2 + 0x17c);
  *(undefined8 *)(this + 0x180) = uVar35;
  uVar35 = *(undefined8 *)(param_2 + 0x110);
  *(undefined4 *)(this + 0x17c) = uVar3;
  uVar3 = *(undefined4 *)(param_2 + 0x134);
  *(undefined8 *)(this + 0x110) = uVar35;
  uVar35 = *(undefined8 *)(param_2 + 0xbc);
  *(undefined4 *)(this + 0x134) = uVar3;
  uVar3 = *(undefined4 *)(param_2 + 0x138);
  *(undefined8 *)(this + 0xbc) = uVar35;
  uVar34 = *(undefined4 *)(param_2 + 0xc4);
  *(undefined4 *)(this + 0x988) = uVar37;
  *(undefined4 *)(this + 0xc4) = uVar34;
  uVar34 = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(this + 0x138) = uVar3;
  *(undefined4 *)(this + 0xa0) = uVar34;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x10),(basic_string *)(param_2 + 0x10));
  uVar35 = *(undefined8 *)(param_2 + 0xbd8);
  AVar4 = *(ArtboardInstance *)(param_2 + 0xbe9);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined8 *)(this + 0xbd8) = uVar35;
  this[0xbe9] = AVar4;
  if (this != (ArtboardInstance *)param_2) {
    lVar28 = *(long *)(param_2 + 0xbc0);
    if (lVar28 != 0) {
      FUN_00340fb0(1,lVar28);
    }
    lVar25 = *(long *)(this + 0xbc0);
    *(long *)(this + 0xbc0) = lVar28;
    if ((lVar25 != 0) && (iVar9 = FUN_00340fe0(0xffffffff,lVar25), iVar9 == 1)) {
      FUN_003453a8(lVar25);
    }
  }
  pCVar24 = (Core *)*param_1;
  uVar35 = *(undefined8 *)(param_2 + 0xc28);
  pCVar24[0xbe8] = (Core)0x1;
  *(undefined8 *)(pCVar24 + 0xc28) = uVar35;
  pAVar23 = param_2;
  if (param_2[0xbe8] != (Artboard)0x0) {
    pAVar23 = *(Artboard **)(param_2 + 0xc60);
  }
  *(Artboard **)(pCVar24 + 0xc60) = pAVar23;
  pCVar11 = pCVar24;
  rive::Artboard::cloneObjectDataBinds(param_2,(Core *)param_2,pCVar24,(Artboard *)pCVar24);
  puVar26 = *(undefined8 **)(pCVar24 + 0xa60);
  if (puVar26 < *(undefined8 **)(pCVar24 + 0xa68)) {
    puVar29 = puVar26 + 1;
    *puVar26 = pCVar24;
LAB_00370ef0:
    *(undefined8 **)(pCVar24 + 0xa60) = puVar29;
    if ((*(undefined8 **)(param_2 + 0xa58) != *(undefined8 **)(param_2 + 0xa60)) &&
       (puVar26 = *(undefined8 **)(param_2 + 0xa58) + 1,
       puVar26 != *(undefined8 **)(param_2 + 0xa60))) {
      do {
        pCVar27 = (Core *)*puVar26;
        if (pCVar27 == (Core *)0x0) {
          uVar35 = 0;
        }
        else {
          uVar35 = (**(code **)(*(long *)pCVar27 + 0x28))(pCVar27);
        }
        puVar29 = *(undefined8 **)(pCVar24 + 0xa60);
        if (puVar29 < *(undefined8 **)(pCVar24 + 0xa68)) {
          puVar22 = puVar29 + 1;
          *puVar29 = uVar35;
        }
        else {
          puVar32 = *(undefined8 **)(pCVar24 + 0xa58);
          lVar28 = (long)puVar29 - (long)puVar32 >> 3;
          uVar14 = lVar28 + 1;
          if (uVar14 >> 0x3d != 0) goto LAB_003713b0;
          uVar13 = (long)*(undefined8 **)(pCVar24 + 0xa68) - (long)puVar32;
          uVar15 = (long)uVar13 >> 2;
          if (uVar15 <= uVar14) {
            uVar15 = uVar14;
          }
          if (0x7ffffffffffffff7 < uVar13) {
            uVar15 = 0x1fffffffffffffff;
          }
          if (uVar15 == 0) {
            pvVar10 = (void *)0x0;
          }
          else {
            if (uVar15 >> 0x3d != 0) goto LAB_003713a4;
            pvVar10 = operator_new(uVar15 << 3);
          }
          puVar33 = (undefined8 *)((long)pvVar10 + lVar28 * 8);
          puVar22 = puVar33 + 1;
          *puVar33 = uVar35;
          if ((long)puVar29 - (long)puVar32 != 0) {
            uVar14 = ((long)puVar29 - (long)puVar32) - 8;
            if ((uVar14 < 0x38) ||
               ((ulong)((long)puVar29 + (-((long)puVar29 - (long)puVar32) - (long)pvVar10)) < 0x20))
            {
LAB_0037130c:
              do {
                puVar29 = puVar29 + -1;
                puVar33 = puVar33 + -1;
                *puVar33 = *puVar29;
              } while (puVar29 != puVar32);
            }
            else {
              puVar12 = puVar33 + -2;
              puVar19 = puVar29 + -2;
              uVar14 = (uVar14 >> 3) + 1;
              uVar16 = uVar14 & 0x3ffffffffffffffc;
              puVar29 = puVar29 + -uVar16;
              uVar13 = uVar16;
              do {
                puVar20 = puVar19 + -1;
                uVar38 = puVar19[-2];
                uVar36 = puVar19[1];
                uVar35 = *puVar19;
                uVar13 = uVar13 - 4;
                puVar19 = puVar19 + -4;
                puVar12[-1] = *puVar20;
                puVar12[-2] = uVar38;
                puVar12[1] = uVar36;
                *puVar12 = uVar35;
                puVar12 = puVar12 + -4;
              } while (uVar13 != 0);
              puVar33 = puVar33 + -uVar16;
              if (uVar14 != uVar16) goto LAB_0037130c;
            }
            puVar29 = *(undefined8 **)(pCVar24 + 0xa58);
          }
          *(undefined8 **)(pCVar24 + 0xa58) = puVar33;
          *(undefined8 **)(pCVar24 + 0xa60) = puVar22;
          *(void **)(pCVar24 + 0xa68) = (void *)((long)pvVar10 + uVar15 * 8);
          if (puVar29 != (undefined8 *)0x0) {
            operator_delete(puVar29);
          }
        }
        *(undefined8 **)(pCVar24 + 0xa60) = puVar22;
        pCVar11 = (Core *)puVar22[-1];
        rive::Artboard::cloneObjectDataBinds(param_2,pCVar27,pCVar11,(Artboard *)*param_1);
        puVar26 = puVar26 + 1;
      } while (puVar26 != *(undefined8 **)(param_2 + 0xa60));
    }
    puVar29 = *(undefined8 **)(param_2 + 0xa90);
    for (puVar26 = *(undefined8 **)(param_2 + 0xa88); puVar26 != puVar29; puVar26 = puVar26 + 1) {
      lVar28 = *param_1;
      uVar35 = *puVar26;
      puVar22 = *(undefined8 **)(lVar28 + 0xa90);
      if (puVar22 < *(undefined8 **)(lVar28 + 0xa98)) {
        puVar32 = puVar22 + 1;
        *puVar22 = uVar35;
      }
      else {
        puVar33 = *(undefined8 **)(lVar28 + 0xa88);
        lVar25 = (long)puVar22 - (long)puVar33 >> 3;
        uVar14 = lVar25 + 1;
        if (uVar14 >> 0x3d != 0) goto LAB_003713ac;
        uVar13 = (long)*(undefined8 **)(lVar28 + 0xa98) - (long)puVar33;
        uVar15 = (long)uVar13 >> 2;
        if (uVar15 <= uVar14) {
          uVar15 = uVar14;
        }
        if (0x7ffffffffffffff7 < uVar13) {
          uVar15 = 0x1fffffffffffffff;
        }
        if (uVar15 == 0) {
          pvVar10 = (void *)0x0;
        }
        else {
          if (uVar15 >> 0x3d != 0) goto LAB_003713a4;
          pvVar10 = operator_new(uVar15 << 3);
        }
        puVar12 = (undefined8 *)((long)pvVar10 + lVar25 * 8);
        puVar32 = puVar12 + 1;
        *puVar12 = uVar35;
        if ((long)puVar22 - (long)puVar33 != 0) {
          uVar14 = ((long)puVar22 - (long)puVar33) - 8;
          if ((uVar14 < 0x38) ||
             ((ulong)((long)puVar22 + (-((long)puVar22 - (long)puVar33) - (long)pvVar10)) < 0x20)) {
LAB_0037104c:
            do {
              puVar22 = puVar22 + -1;
              puVar12 = puVar12 + -1;
              *puVar12 = *puVar22;
            } while (puVar22 != puVar33);
          }
          else {
            puVar19 = puVar12 + -2;
            puVar20 = puVar22 + -2;
            uVar14 = (uVar14 >> 3) + 1;
            uVar16 = uVar14 & 0x3ffffffffffffffc;
            puVar22 = puVar22 + -uVar16;
            uVar13 = uVar16;
            do {
              puVar5 = puVar20 + -1;
              uVar38 = puVar20[-2];
              uVar36 = puVar20[1];
              uVar35 = *puVar20;
              uVar13 = uVar13 - 4;
              puVar20 = puVar20 + -4;
              puVar19[-1] = *puVar5;
              puVar19[-2] = uVar38;
              puVar19[1] = uVar36;
              *puVar19 = uVar35;
              puVar19 = puVar19 + -4;
            } while (uVar13 != 0);
            puVar12 = puVar12 + -uVar16;
            if (uVar14 != uVar16) goto LAB_0037104c;
          }
          puVar22 = *(undefined8 **)(lVar28 + 0xa88);
        }
        *(undefined8 **)(lVar28 + 0xa88) = puVar12;
        *(undefined8 **)(lVar28 + 0xa90) = puVar32;
        *(void **)(lVar28 + 0xa98) = (void *)((long)pvVar10 + uVar15 * 8);
        if (puVar22 != (undefined8 *)0x0) {
          operator_delete(puVar22);
        }
      }
      *(undefined8 **)(lVar28 + 0xa90) = puVar32;
    }
    puVar26 = *(undefined8 **)(param_2 + 0xaa0);
    puVar29 = *(undefined8 **)(param_2 + 0xaa8);
    while( true ) {
      if (puVar26 == puVar29) {
        pAVar23 = (Artboard *)*param_1;
        cVar8 = rive::Artboard::initialize(pAVar23);
        if (cVar8 != '\0') {
          UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pAVar23 + 8);
          *param_1 = 0;
                    /* WARNING: Could not recover jumptable at 0x00371380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(pAVar23);
          return;
        }
        return;
      }
      lVar28 = *param_1;
      uVar35 = *puVar26;
      puVar22 = *(undefined8 **)(lVar28 + 0xaa8);
      if (*(undefined8 **)(lVar28 + 0xab0) <= puVar22) break;
      puVar12 = puVar22 + 1;
      *puVar22 = uVar35;
LAB_00371088:
      puVar26 = puVar26 + 1;
      *(undefined8 **)(lVar28 + 0xaa8) = puVar12;
    }
    puVar32 = *(undefined8 **)(lVar28 + 0xaa0);
    lVar25 = (long)puVar22 - (long)puVar32 >> 3;
    uVar14 = lVar25 + 1;
    if (uVar14 >> 0x3d == 0) {
      uVar13 = (long)*(undefined8 **)(lVar28 + 0xab0) - (long)puVar32;
      uVar15 = (long)uVar13 >> 2;
      if (uVar15 <= uVar14) {
        uVar15 = uVar14;
      }
      if (0x7ffffffffffffff7 < uVar13) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 == 0) {
        pvVar10 = (void *)0x0;
      }
      else {
        if (uVar15 >> 0x3d != 0) {
LAB_003713a4:
                    /* WARNING: Subroutine does not return */
          FUN_00324008();
        }
        pvVar10 = operator_new(uVar15 << 3);
      }
      puVar33 = (undefined8 *)((long)pvVar10 + lVar25 * 8);
      puVar12 = puVar33 + 1;
      *puVar33 = uVar35;
      if ((long)puVar22 - (long)puVar32 != 0) {
        uVar14 = ((long)puVar22 - (long)puVar32) - 8;
        if ((uVar14 < 0x38) ||
           ((ulong)((long)puVar22 + (-((long)puVar22 - (long)puVar32) - (long)pvVar10)) < 0x20)) {
LAB_00371190:
          do {
            puVar22 = puVar22 + -1;
            puVar33 = puVar33 + -1;
            *puVar33 = *puVar22;
          } while (puVar22 != puVar32);
        }
        else {
          puVar19 = puVar33 + -2;
          puVar20 = puVar22 + -2;
          uVar14 = (uVar14 >> 3) + 1;
          uVar16 = uVar14 & 0x3ffffffffffffffc;
          puVar22 = puVar22 + -uVar16;
          uVar13 = uVar16;
          do {
            puVar5 = puVar20 + -1;
            uVar38 = puVar20[-2];
            uVar36 = puVar20[1];
            uVar35 = *puVar20;
            uVar13 = uVar13 - 4;
            puVar20 = puVar20 + -4;
            puVar19[-1] = *puVar5;
            puVar19[-2] = uVar38;
            puVar19[1] = uVar36;
            *puVar19 = uVar35;
            puVar19 = puVar19 + -4;
          } while (uVar13 != 0);
          puVar33 = puVar33 + -uVar16;
          if (uVar14 != uVar16) goto LAB_00371190;
        }
        puVar22 = *(undefined8 **)(lVar28 + 0xaa0);
      }
      *(undefined8 **)(lVar28 + 0xaa0) = puVar33;
      *(undefined8 **)(lVar28 + 0xaa8) = puVar12;
      *(void **)(lVar28 + 0xab0) = (void *)((long)pvVar10 + uVar15 * 8);
      if (puVar22 != (undefined8 *)0x0) {
        operator_delete(puVar22);
      }
      goto LAB_00371088;
    }
    FUN_00362ab4();
LAB_003713ac:
    FUN_00362e20();
  }
  else {
    puVar22 = *(undefined8 **)(pCVar24 + 0xa58);
    lVar28 = (long)puVar26 - (long)puVar22 >> 3;
    uVar14 = lVar28 + 1;
    if (uVar14 >> 0x3d == 0) {
      uVar13 = (long)*(undefined8 **)(pCVar24 + 0xa68) - (long)puVar22;
      uVar15 = (long)uVar13 >> 2;
      if (uVar15 <= uVar14) {
        uVar15 = uVar14;
      }
      if (0x7ffffffffffffff7 < uVar13) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 == 0) {
        pvVar10 = (void *)0x0;
      }
      else {
        if (uVar15 >> 0x3d != 0) goto LAB_003713a4;
        pvVar10 = operator_new(uVar15 << 3);
      }
      puVar32 = (undefined8 *)((long)pvVar10 + lVar28 * 8);
      puVar29 = puVar32 + 1;
      *puVar32 = pCVar24;
      if ((long)puVar26 - (long)puVar22 != 0) {
        uVar14 = ((long)puVar26 - (long)puVar22) - 8;
        if ((uVar14 < 0x38) ||
           ((ulong)((long)puVar26 + (-((long)puVar26 - (long)puVar22) - (long)pvVar10)) < 0x20)) {
LAB_00370ebc:
          do {
            puVar26 = puVar26 + -1;
            puVar32 = puVar32 + -1;
            *puVar32 = *puVar26;
          } while (puVar26 != puVar22);
        }
        else {
          puVar33 = puVar32 + -2;
          puVar12 = puVar26 + -2;
          uVar14 = (uVar14 >> 3) + 1;
          uVar16 = uVar14 & 0x3ffffffffffffffc;
          puVar26 = puVar26 + -uVar16;
          uVar13 = uVar16;
          do {
            puVar19 = puVar12 + -1;
            uVar38 = puVar12[-2];
            uVar36 = puVar12[1];
            uVar35 = *puVar12;
            uVar13 = uVar13 - 4;
            puVar12 = puVar12 + -4;
            puVar33[-1] = *puVar19;
            puVar33[-2] = uVar38;
            puVar33[1] = uVar36;
            *puVar33 = uVar35;
            puVar33 = puVar33 + -4;
          } while (uVar13 != 0);
          puVar32 = puVar32 + -uVar16;
          if (uVar14 != uVar16) goto LAB_00370ebc;
        }
        puVar26 = *(undefined8 **)(pCVar24 + 0xa58);
      }
      *(undefined8 **)(pCVar24 + 0xa58) = puVar32;
      *(undefined8 **)(pCVar24 + 0xa60) = puVar29;
      *(void **)(pCVar24 + 0xa68) = (void *)((long)pvVar10 + uVar15 * 8);
      if (puVar26 != (undefined8 *)0x0) {
        operator_delete(puVar26);
      }
      goto LAB_00370ef0;
    }
  }
LAB_003713b0:
  auVar39 = FUN_0035fe74();
  lVar28 = auVar39._0_8_;
  plVar21 = *(long **)(*(long *)pCVar11 + 0x18);
  if (plVar21 == (long *)0x0) {
    return;
  }
  FUN_00340fb0(1,(long)plVar21 + 0xa4);
  pvVar10 = *(void **)(*(long *)(lVar28 + 0x360) + 0x88);
  uVar14 = *(long *)(*(long *)(lVar28 + 0x360) + 0x90) - (long)pvVar10;
  if (uVar14 == 0) {
    __dest = (void *)0x0;
    lVar25 = 0;
    iVar9 = -1;
LAB_00371470:
    if ((ulong)(lVar25 - (long)__dest >> 3) <= (ulong)(long)iVar9) goto LAB_003714e8;
  }
  else {
    if ((long)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0036e030();
    }
    __dest = operator_new(uVar14);
    lVar25 = (long)__dest + uVar14;
    memcpy(__dest,pvVar10,uVar14);
    lVar17 = 0;
    iVar1 = -2;
    do {
      iVar18 = iVar1;
      plVar30 = (long *)((long)__dest + lVar17);
      iVar1 = iVar18 + 1;
      bVar7 = uVar14 - 8 != lVar17;
      lVar17 = lVar17 + 8;
    } while (*(int *)(*plVar30 + 0x990) != (int)plVar21[0x14] && bVar7);
    iVar9 = iVar18 + 2;
    if (iVar1 == -2 || iVar18 + 3 < 0 != SCARRY4(iVar1,2)) goto LAB_00371470;
  }
  plVar30 = *(long **)(lVar28 + 0x88);
  plVar2 = *(long **)(lVar28 + 0x90);
  if (plVar30 != plVar2) {
    pAVar31 = (ArtboardComponentListOverride *)0x0;
    do {
      uVar14 = (**(code **)(*(long *)*plVar30 + 0x18))((long *)*plVar30,0x25e);
      pAVar6 = pAVar31;
      if ((uVar14 & 1) != 0) {
        this_00 = (ArtboardComponentListOverride *)*plVar30;
        pAVar6 = this_00;
        if ((*(int *)(this_00 + 0x88) != -1) &&
           (pAVar6 = pAVar31, *(int *)(this_00 + 0x88) == iVar9)) goto LAB_003714e0;
      }
      this_00 = pAVar6;
      plVar30 = plVar30 + 1;
      pAVar31 = this_00;
    } while (plVar30 != plVar2);
    if (this_00 != (ArtboardComponentListOverride *)0x0) {
LAB_003714e0:
      rive::ArtboardComponentListOverride::addArtboard(this_00,auVar39._8_8_);
    }
  }
LAB_003714e8:
  if (__dest != (void *)0x0) {
    operator_delete(__dest);
  }
  iVar9 = FUN_00340fe0(0xffffffff,(long)plVar21 + 0xa4);
  if (iVar9 != 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00371528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar21 + 8))(plVar21);
  return;
}


// ===== 003713b4  rive::ArtboardComponentList::attachArtboardOverride =====

/* rive::ArtboardComponentList::attachArtboardOverride(rive::ArtboardInstance*,
   rive::rcp<rive::ViewModelInstanceListItem>) */

void __thiscall
rive::ArtboardComponentList::attachArtboardOverride
          (ArtboardComponentList *this,ArtboardInstance *param_1,long *param_3)

{
  int iVar1;
  void *__src;
  long *plVar2;
  ArtboardComponentListOverride *pAVar3;
  bool bVar4;
  int iVar5;
  void *__dest;
  ulong uVar6;
  ArtboardComponentListOverride *this_00;
  long lVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  ArtboardComponentListOverride *pAVar12;
  
  plVar9 = *(long **)(*param_3 + 0x18);
  if (plVar9 == (long *)0x0) {
    return;
  }
  FUN_00340fb0(1,(long)plVar9 + 0xa4);
  __src = *(void **)(*(long *)(this + 0x360) + 0x88);
  uVar6 = *(long *)(*(long *)(this + 0x360) + 0x90) - (long)__src;
  if (uVar6 == 0) {
    __dest = (void *)0x0;
    lVar11 = 0;
    iVar5 = -1;
LAB_00371470:
    if ((ulong)(lVar11 - (long)__dest >> 3) <= (ulong)(long)iVar5) goto LAB_003714e8;
  }
  else {
    if ((long)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0036e030();
    }
    __dest = operator_new(uVar6);
    lVar11 = (long)__dest + uVar6;
    memcpy(__dest,__src,uVar6);
    lVar7 = 0;
    iVar1 = -2;
    do {
      iVar8 = iVar1;
      plVar10 = (long *)((long)__dest + lVar7);
      iVar1 = iVar8 + 1;
      bVar4 = uVar6 - 8 != lVar7;
      lVar7 = lVar7 + 8;
    } while (*(int *)(*plVar10 + 0x990) != (int)plVar9[0x14] && bVar4);
    iVar5 = iVar8 + 2;
    if (iVar1 == -2 || iVar8 + 3 < 0 != SCARRY4(iVar1,2)) goto LAB_00371470;
  }
  plVar10 = *(long **)(this + 0x88);
  plVar2 = *(long **)(this + 0x90);
  if (plVar10 != plVar2) {
    pAVar12 = (ArtboardComponentListOverride *)0x0;
    do {
      uVar6 = (**(code **)(*(long *)*plVar10 + 0x18))((long *)*plVar10,0x25e);
      pAVar3 = pAVar12;
      if ((uVar6 & 1) != 0) {
        this_00 = (ArtboardComponentListOverride *)*plVar10;
        pAVar3 = this_00;
        if ((*(int *)(this_00 + 0x88) != -1) &&
           (pAVar3 = pAVar12, *(int *)(this_00 + 0x88) == iVar5)) goto LAB_003714e0;
      }
      this_00 = pAVar3;
      plVar10 = plVar10 + 1;
      pAVar12 = this_00;
    } while (plVar10 != plVar2);
    if (this_00 != (ArtboardComponentListOverride *)0x0) {
LAB_003714e0:
      ArtboardComponentListOverride::addArtboard(this_00,param_1);
    }
  }
LAB_003714e8:
  if (__dest != (void *)0x0) {
    operator_delete(__dest);
  }
  iVar5 = FUN_00340fe0(0xffffffff,(long)plVar9 + 0xa4);
  if (iVar5 != 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00371528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar9 + 8))(plVar9);
  return;
}


// ===== 00371548  FUN_00371548 =====

/* WARNING: Removing unreachable block (ram,0x00371e1c) */

void FUN_00371548(undefined8 *param_1,long *param_2,long *param_3,ulong param_4)

{
  ulong *puVar1;
  ulong uVar2;
  int iVar3;
  long *plVar4;
  ViewModelValueDependent *pVVar5;
  ulong uVar6;
  long lVar7;
  ViewModelValueDependent *pVVar8;
  void *pvVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ViewModelValueDependent *pVVar15;
  long *plVar16;
  ulong uVar17;
  ViewModelValueDependent *pVVar18;
  void *pvVar19;
  ViewModelInstanceValue *this;
  long *plVar20;
  long lVar21;
  ulong *puVar22;
  long *plVar23;
  ViewModelValueDependent *pVVar24;
  ViewModelValueDependent *pVVar25;
  undefined2 uVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  
  uVar6 = param_1[2];
  plVar20 = (long *)*param_1;
  if (param_4 <= (ulong)((long)(uVar6 - (long)plVar20) >> 3)) {
    plVar4 = (long *)param_1[1];
    lVar21 = (long)plVar4 - (long)plVar20;
    if ((ulong)(lVar21 >> 3) < param_4) {
      plVar23 = (long *)((long)param_2 + lVar21);
      if (plVar4 != plVar20) {
        do {
          if (param_2 != plVar20) {
            lVar7 = *param_2;
            if (lVar7 != 0) {
              FUN_00340fb0(1,lVar7 + 0x14);
            }
            plVar4 = (long *)*plVar20;
            *plVar20 = lVar7;
            if ((plVar4 != (long *)0x0) &&
               (iVar3 = FUN_00340fe0(0xffffffff,(long)plVar4 + 0x14), iVar3 == 1)) {
              (**(code **)(*plVar4 + 8))(plVar4);
            }
          }
          lVar21 = lVar21 + -8;
          param_2 = param_2 + 1;
          plVar20 = plVar20 + 1;
        } while (lVar21 != 0);
        plVar20 = (long *)param_1[1];
      }
      for (; plVar23 != param_3; plVar23 = plVar23 + 1) {
        lVar21 = *plVar23;
        if (lVar21 != 0) {
          FUN_00340fb0(1,lVar21 + 0x14);
        }
        *plVar20 = lVar21;
        plVar20 = plVar20 + 1;
      }
      param_1[1] = plVar20;
    }
    else {
      if (param_2 != param_3) {
        do {
          if (param_2 != plVar20) {
            lVar21 = *param_2;
            if (lVar21 != 0) {
              FUN_00340fb0(1,lVar21 + 0x14);
            }
            plVar4 = (long *)*plVar20;
            *plVar20 = lVar21;
            if ((plVar4 != (long *)0x0) &&
               (iVar3 = FUN_00340fe0(0xffffffff,(long)plVar4 + 0x14), iVar3 == 1)) {
              (**(code **)(*plVar4 + 8))(plVar4);
            }
          }
          param_2 = param_2 + 1;
          plVar20 = plVar20 + 1;
        } while (param_2 != param_3);
        plVar4 = (long *)param_1[1];
      }
      while (plVar4 != plVar20) {
        plVar4 = plVar4 + -1;
        plVar23 = (long *)*plVar4;
        if ((plVar23 != (long *)0x0) &&
           (iVar3 = FUN_00340fe0(0xffffffff,(long)plVar23 + 0x14), iVar3 == 1)) {
          (**(code **)(*plVar23 + 8))(plVar23);
        }
      }
      param_1[1] = plVar20;
    }
    return;
  }
  if (plVar20 != (long *)0x0) {
    plVar23 = (long *)param_1[1];
    plVar4 = plVar20;
    if (plVar23 != plVar20) {
      do {
        plVar23 = plVar23 + -1;
        plVar4 = (long *)*plVar23;
        if ((plVar4 != (long *)0x0) &&
           (iVar3 = FUN_00340fe0(0xffffffff,(long)plVar4 + 0x14), iVar3 == 1)) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
      } while (plVar23 != plVar20);
      plVar4 = (long *)*param_1;
    }
    param_1[1] = plVar20;
    operator_delete(plVar4);
    uVar6 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (param_4 >> 0x3d == 0) {
    uVar11 = (long)uVar6 >> 2;
    if ((ulong)((long)uVar6 >> 2) <= param_4) {
      uVar11 = param_4;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar11 = 0x1fffffffffffffff;
    }
    if (uVar11 >> 0x3d == 0) {
      plVar4 = (long *)operator_new(uVar11 * 8);
      *param_1 = plVar4;
      param_1[1] = plVar4;
      param_1[2] = plVar4 + uVar11;
      plVar20 = plVar4;
      if (param_2 != param_3) {
        do {
          lVar21 = *param_2;
          if (lVar21 != 0) {
            FUN_00340fb0(1,lVar21 + 0x14);
          }
          param_2 = param_2 + 1;
          plVar4 = plVar20 + 1;
          *plVar20 = lVar21;
          plVar20 = plVar4;
        } while (param_2 != param_3);
      }
      param_1[1] = plVar4;
      return;
    }
  }
  lVar21 = FUN_00371f80();
  if (*(long *)(lVar21 + 0x440) != 0) {
    puVar14 = (undefined8 *)*(void **)(lVar21 + 0x438);
    while (puVar14 != (undefined8 *)0x0) {
      pvVar19 = (void *)*puVar14;
      FUN_0036c094(puVar14 + 2);
      operator_delete(puVar14);
      puVar14 = (undefined8 *)pvVar19;
    }
    lVar7 = *(long *)(lVar21 + 0x430);
    *(undefined8 *)(lVar21 + 0x438) = 0;
    if (lVar7 != 0) {
      lVar10 = 0;
      do {
        *(undefined8 *)(*(long *)(lVar21 + 0x428) + lVar10 * 8) = 0;
        lVar10 = lVar10 + 1;
      } while (lVar7 != lVar10);
    }
    *(undefined8 *)(lVar21 + 0x440) = 0;
  }
  if (*(char *)(lVar21 + 0x40a) != '\0') {
    puVar22 = *(ulong **)(lVar21 + 0x1e8);
    puVar1 = *(ulong **)(lVar21 + 0x1f0);
    if (puVar22 != puVar1) {
      plVar20 = (long *)(lVar21 + 0x438);
LAB_003718d0:
      lVar7 = *(long *)(*puVar22 + 0x18);
      if ((lVar7 != 0) && (uVar6 = *(ulong *)(lVar7 + 0xf8), uVar6 != 0)) {
        uVar28 = NEON_cnt(uVar6,1);
        uVar26 = NEON_uaddlv(uVar28,1);
        uVar11 = CONCAT62((int6)((ulong)uVar28 >> 0x10),uVar26) & 0xffffffff;
        if (uVar11 < 2) {
          uVar13 = (ulong)((int)uVar6 - 1) & 0x10;
        }
        else if (uVar6 < 0x11) {
          uVar13 = 0;
          if (uVar6 != 0) {
            uVar13 = 0x10 / uVar6;
          }
          uVar13 = 0x10 - uVar13 * uVar6;
        }
        else {
          uVar13 = 0x10;
        }
        plVar4 = *(long **)(*(long *)(lVar7 + 0xf0) + uVar13 * 8);
        if ((plVar4 != (long *)0x0) && (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0)) {
          do {
            uVar17 = plVar4[1];
            if (uVar17 == 0x10) {
              if ((char)plVar4[2] == '\x10') {
                this = (ViewModelInstanceValue *)plVar4[3];
                if (this != (ViewModelInstanceValue *)0x0) {
                  pVVar5 = (ViewModelValueDependent *)operator_new(0x18);
                  *(undefined ***)pVVar5 = &PTR_FUN_00654170;
                  *(long *)(pVVar5 + 8) = lVar21;
                  FUN_00340fb0(1,this + 0x8c);
                  *(ViewModelInstanceValue **)(pVVar5 + 0x10) = this;
                  rive::ViewModelInstanceValue::addDependent(this,pVVar5);
                  uVar6 = *puVar22;
                  uVar11 = ((ulong)(uint)((int)uVar6 << 3) + 8 ^ uVar6 >> 0x20) *
                           -0x622015f714c7d297;
                  uVar11 = (uVar6 >> 0x20 ^ uVar11 >> 0x2f ^ uVar11) * -0x622015f714c7d297;
                  pVVar24 = (ViewModelValueDependent *)
                            ((uVar11 ^ uVar11 >> 0x2f) * -0x622015f714c7d297);
                  pVVar25 = *(ViewModelValueDependent **)(lVar21 + 0x430);
                  pVVar8 = pVVar5;
                  if (pVVar25 == (ViewModelValueDependent *)0x0) goto LAB_00371a90;
                  uVar28 = NEON_cnt(pVVar25,1);
                  uVar26 = NEON_uaddlv(uVar28,1);
                  uVar11 = CONCAT62((int6)((ulong)uVar28 >> 0x10),uVar26) & 0xffffffff;
                  if (uVar11 < 2) {
                    pVVar8 = (ViewModelValueDependent *)((ulong)pVVar24 & (ulong)(pVVar25 + -1));
                  }
                  else {
                    pVVar8 = pVVar24;
                    if (pVVar25 <= pVVar24) {
                      uVar13 = 0;
                      if (pVVar25 != (ViewModelValueDependent *)0x0) {
                        uVar13 = (ulong)pVVar24 / (ulong)pVVar25;
                      }
                      pVVar8 = pVVar24 + -(uVar13 * (long)pVVar25);
                    }
                  }
                  puVar14 = *(undefined8 **)(*(long *)(lVar21 + 0x428) + (long)pVVar8 * 8);
                  if ((puVar14 == (undefined8 *)0x0) ||
                     (plVar4 = (long *)*puVar14, plVar4 == (long *)0x0)) goto LAB_00371a90;
                  goto LAB_00371a5c;
                }
                break;
              }
            }
            else {
              if (uVar11 < 2) {
                uVar17 = uVar17 & uVar6 - 1;
              }
              else if (uVar6 <= uVar17) {
                uVar2 = 0;
                if (uVar6 != 0) {
                  uVar2 = uVar17 / uVar6;
                }
                uVar17 = uVar17 - uVar2 * uVar6;
              }
              if (uVar17 != uVar13) break;
            }
            plVar4 = (long *)*plVar4;
          } while (plVar4 != (long *)0x0);
        }
      }
      goto LAB_003718c4;
    }
  }
  return;
LAB_00371a5c:
  do {
    pVVar15 = (ViewModelValueDependent *)plVar4[1];
    if (pVVar15 == pVVar24) {
      if (plVar4[2] == uVar6) goto LAB_00371d70;
    }
    else {
      if (uVar11 < 2) {
        pVVar15 = (ViewModelValueDependent *)((ulong)pVVar15 & (ulong)(pVVar25 + -1));
      }
      else if (pVVar25 <= pVVar15) {
        uVar13 = 0;
        if (pVVar25 != (ViewModelValueDependent *)0x0) {
          uVar13 = (ulong)pVVar15 / (ulong)pVVar25;
        }
        pVVar15 = pVVar15 + -(uVar13 * (long)pVVar25);
      }
      if (pVVar15 != pVVar8) break;
    }
    plVar4 = (long *)*plVar4;
  } while (plVar4 != (long *)0x0);
LAB_00371a90:
  plVar4 = (long *)operator_new(0x20);
  uVar6 = *puVar22;
  *plVar4 = 0;
  plVar4[1] = (long)pVVar24;
  if (uVar6 != 0) {
    FUN_00340fb0(1,uVar6 + 0x14);
  }
  lVar7 = *(long *)(lVar21 + 0x440);
  fVar29 = *(float *)(lVar21 + 0x448);
  plVar4[2] = uVar6;
  plVar4[3] = 0;
  fVar27 = (float)(lVar7 + 1);
  if ((pVVar25 == (ViewModelValueDependent *)0x0) || (fVar29 * (float)pVVar25 < fVar27)) {
    if (pVVar25 < (ViewModelValueDependent *)0x3) {
      uVar6 = 1;
    }
    else {
      uVar6 = (ulong)(((ulong)pVVar25 & (ulong)(pVVar25 + -1)) != 0);
    }
    pVVar8 = (ViewModelValueDependent *)(uVar6 | (long)pVVar25 << 1);
    pVVar25 = (ViewModelValueDependent *)(long)(fVar27 / fVar29);
    if (pVVar8 <= pVVar25) {
      pVVar8 = pVVar25;
    }
    if (pVVar8 + -1 == (ViewModelValueDependent *)0x0) {
      pVVar8 = (ViewModelValueDependent *)0x2;
    }
    else if (((ulong)pVVar8 & (ulong)(pVVar8 + -1)) != 0) {
      pVVar8 = (ViewModelValueDependent *)std::__ndk1::__next_prime((ulong)pVVar8);
    }
    pVVar25 = *(ViewModelValueDependent **)(lVar21 + 0x430);
    if (pVVar25 < pVVar8) {
LAB_00371b54:
      if ((ulong)pVVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00324008();
      }
      pvVar19 = operator_new((long)pVVar8 << 3);
      pvVar9 = *(void **)(lVar21 + 0x428);
      *(void **)(lVar21 + 0x428) = pvVar19;
      if (pvVar9 != (void *)0x0) {
        operator_delete(pvVar9);
      }
      pVVar25 = (ViewModelValueDependent *)0x0;
      *(ViewModelValueDependent **)(lVar21 + 0x430) = pVVar8;
      do {
        *(undefined8 *)(*(long *)(lVar21 + 0x428) + (long)pVVar25 * 8) = 0;
        pVVar25 = pVVar25 + 1;
      } while (pVVar8 != pVVar25);
      plVar23 = (long *)*plVar20;
      pVVar25 = pVVar8;
      if (plVar23 != (long *)0x0) {
        pVVar15 = (ViewModelValueDependent *)plVar23[1];
        uVar28 = NEON_cnt(pVVar8,1);
        uVar26 = NEON_uaddlv(uVar28,1);
        uVar6 = CONCAT62((int6)((ulong)uVar28 >> 0x10),uVar26) & 0xffffffff;
        if (uVar6 < 2) {
          pVVar15 = (ViewModelValueDependent *)((ulong)pVVar15 & (ulong)(pVVar8 + -1));
        }
        else if (pVVar8 <= pVVar15) {
          uVar11 = 0;
          if (pVVar8 != (ViewModelValueDependent *)0x0) {
            uVar11 = (ulong)pVVar15 / (ulong)pVVar8;
          }
          pVVar15 = pVVar15 + -(uVar11 * (long)pVVar8);
        }
        *(long **)(*(long *)(lVar21 + 0x428) + (long)pVVar15 * 8) = plVar20;
        plVar16 = (long *)*plVar23;
        if (plVar16 != (long *)0x0) {
          do {
            pVVar18 = (ViewModelValueDependent *)plVar16[1];
            if (uVar6 < 2) {
              pVVar18 = (ViewModelValueDependent *)((ulong)pVVar18 & (ulong)(pVVar8 + -1));
            }
            else if (pVVar8 <= pVVar18) {
              uVar11 = 0;
              if (pVVar8 != (ViewModelValueDependent *)0x0) {
                uVar11 = (ulong)pVVar18 / (ulong)pVVar8;
              }
              pVVar18 = pVVar18 + -(uVar11 * (long)pVVar8);
            }
            if (pVVar18 != pVVar15) {
              if (*(long *)(*(long *)(lVar21 + 0x428) + (long)pVVar18 * 8) == 0) {
                *(long **)(*(long *)(lVar21 + 0x428) + (long)pVVar18 * 8) = plVar23;
                pVVar15 = pVVar18;
              }
              else {
                *plVar23 = *plVar16;
                *plVar16 = **(long **)(*(long *)(lVar21 + 0x428) + (long)pVVar18 * 8);
                **(undefined8 **)(*(long *)(lVar21 + 0x428) + (long)pVVar18 * 8) = plVar16;
                plVar16 = plVar23;
              }
            }
            plVar23 = plVar16;
            plVar16 = (long *)*plVar23;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    else if (pVVar8 < pVVar25) {
      pVVar15 = (ViewModelValueDependent *)
                (long)((float)*(ulong *)(lVar21 + 0x440) / *(float *)(lVar21 + 0x448));
      if (pVVar25 < (ViewModelValueDependent *)0x3) {
LAB_00371e98:
        pVVar15 = (ViewModelValueDependent *)std::__ndk1::__next_prime((ulong)pVVar15);
      }
      else {
        uVar28 = NEON_cnt(pVVar25,1);
        uVar26 = NEON_uaddlv(uVar28,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar28 >> 0x10),uVar26)) goto LAB_00371e98;
        if ((ViewModelValueDependent *)0x1 < pVVar15) {
          pVVar15 = (ViewModelValueDependent *)(1L << (-LZCOUNT(pVVar15 + -1) & 0x3fU));
        }
      }
      if (pVVar8 <= pVVar15) {
        pVVar8 = pVVar15;
      }
      if (pVVar8 < pVVar25) {
        if (pVVar8 != (ViewModelValueDependent *)0x0) goto LAB_00371b54;
        pvVar19 = *(void **)(lVar21 + 0x428);
        *(undefined8 *)(lVar21 + 0x428) = 0;
        if (pvVar19 != (void *)0x0) {
          operator_delete(pvVar19);
        }
        *(undefined8 *)(lVar21 + 0x430) = 0;
        pVVar25 = (ViewModelValueDependent *)0x0;
      }
      else {
        pVVar25 = *(ViewModelValueDependent **)(lVar21 + 0x430);
      }
    }
    if (((ulong)pVVar25 & (ulong)(pVVar25 + -1)) == 0) {
      pVVar8 = (ViewModelValueDependent *)((ulong)(pVVar25 + -1) & (ulong)pVVar24);
    }
    else {
      pVVar8 = pVVar24;
      if (pVVar25 <= pVVar24) {
        uVar6 = 0;
        if (pVVar25 != (ViewModelValueDependent *)0x0) {
          uVar6 = (ulong)pVVar24 / (ulong)pVVar25;
        }
        pVVar8 = pVVar24 + -(uVar6 * (long)pVVar25);
      }
    }
  }
  lVar7 = *(long *)(lVar21 + 0x428);
  plVar23 = *(long **)(lVar7 + (long)pVVar8 * 8);
  if (plVar23 == (long *)0x0) {
    lVar10 = *plVar20;
    *plVar20 = (long)plVar4;
    *plVar4 = lVar10;
    *(long **)(lVar7 + (long)pVVar8 * 8) = plVar20;
    if (*plVar4 == 0) goto LAB_00371d64;
    pVVar8 = *(ViewModelValueDependent **)(*plVar4 + 8);
    if (((ulong)pVVar25 & (ulong)(pVVar25 + -1)) == 0) {
      pVVar8 = (ViewModelValueDependent *)((ulong)pVVar8 & (ulong)(pVVar25 + -1));
    }
    else if (pVVar25 <= pVVar8) {
      uVar6 = 0;
      if (pVVar25 != (ViewModelValueDependent *)0x0) {
        uVar6 = (ulong)pVVar8 / (ulong)pVVar25;
      }
      pVVar8 = pVVar8 + -(uVar6 * (long)pVVar25);
    }
    plVar23 = (long *)(*(long *)(lVar21 + 0x428) + (long)pVVar8 * 8);
  }
  else {
    *plVar4 = *plVar23;
  }
  *plVar23 = (long)plVar4;
LAB_00371d64:
  *(long *)(lVar21 + 0x440) = *(long *)(lVar21 + 0x440) + 1;
LAB_00371d70:
  pvVar19 = (void *)plVar4[3];
  plVar4[3] = (long)pVVar5;
  if (pvVar19 != (void *)0x0) {
    lVar7 = *(long *)((long)pvVar19 + 0x10);
    if (lVar7 != 0) {
      plVar23 = *(long **)(lVar7 + 0xf0);
      plVar4 = *(long **)(lVar7 + 0xe8);
      plVar16 = plVar4;
      for (; (plVar4 != plVar23 && (plVar16 = plVar4, (void *)*plVar4 != pvVar19));
          plVar4 = plVar4 + 1) {
        plVar16 = plVar23;
      }
      if ((plVar16 != plVar23) && (plVar4 = plVar16 + 1, plVar12 = plVar16, plVar4 != plVar23)) {
        do {
          plVar16 = plVar12;
          if ((void *)*plVar4 != pvVar19) {
            plVar16 = plVar12 + 1;
            *plVar12 = *plVar4;
          }
          plVar4 = plVar4 + 1;
          plVar12 = plVar16;
        } while (plVar4 != plVar23);
        plVar23 = *(long **)(lVar7 + 0xf0);
      }
      if (plVar16 != plVar23) {
        *(long **)(lVar7 + 0xf0) = plVar16;
      }
      plVar4 = *(long **)((long)pvVar19 + 0x10);
      *(undefined8 *)((long)pvVar19 + 0x10) = 0;
      if (plVar4 != (long *)0x0) {
        iVar3 = FUN_00340fe0(0xffffffff,(long)plVar4 + 0x8c);
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
        plVar4 = *(long **)((long)pvVar19 + 0x10);
        if ((plVar4 != (long *)0x0) &&
           (iVar3 = FUN_00340fe0(0xffffffff,(long)plVar4 + 0x8c), iVar3 == 1)) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
      }
    }
    operator_delete(pvVar19);
  }
LAB_003718c4:
  puVar22 = puVar22 + 1;
  if (puVar22 == puVar1) {
    return;
  }
  goto LAB_003718d0;
}


// ===== 00371808  rive::ArtboardComponentList::syncDrawIndexListeners =====

/* WARNING: Removing unreachable block (ram,0x00371e1c) */
/* rive::ArtboardComponentList::syncDrawIndexListeners() */

void __thiscall rive::ArtboardComponentList::syncDrawIndexListeners(ArtboardComponentList *this)

{
  ArtboardComponentList *pAVar1;
  ulong *puVar2;
  ulong uVar3;
  int iVar4;
  ViewModelValueDependent *pVVar5;
  long lVar6;
  ulong uVar7;
  ViewModelValueDependent *pVVar8;
  void *pvVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long *plVar16;
  ViewModelValueDependent *pVVar17;
  long *plVar18;
  ulong uVar19;
  ViewModelValueDependent *pVVar20;
  void *pvVar21;
  ViewModelInstanceValue *this_00;
  ulong *puVar22;
  ViewModelValueDependent *pVVar23;
  ViewModelValueDependent *pVVar24;
  undefined2 uVar25;
  undefined8 uVar26;
  float fVar27;
  
  if (*(long *)(this + 0x440) != 0) {
    puVar15 = (undefined8 *)*(void **)(this + 0x438);
    while (puVar15 != (undefined8 *)0x0) {
      pvVar21 = (void *)*puVar15;
      FUN_0036c094(puVar15 + 2);
      operator_delete(puVar15);
      puVar15 = (undefined8 *)pvVar21;
    }
    lVar6 = *(long *)(this + 0x430);
    *(undefined8 *)(this + 0x438) = 0;
    if (lVar6 != 0) {
      lVar10 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x428) + lVar10 * 8) = 0;
        lVar10 = lVar10 + 1;
      } while (lVar6 != lVar10);
    }
    *(undefined8 *)(this + 0x440) = 0;
  }
  if (this[0x40a] != (ArtboardComponentList)0x0) {
    puVar22 = *(ulong **)(this + 0x1e8);
    puVar2 = *(ulong **)(this + 0x1f0);
    if (puVar22 != puVar2) {
      pAVar1 = this + 0x438;
LAB_003718d0:
      lVar6 = *(long *)(*puVar22 + 0x18);
      if ((lVar6 != 0) && (uVar7 = *(ulong *)(lVar6 + 0xf8), uVar7 != 0)) {
        uVar26 = NEON_cnt(uVar7,1);
        uVar25 = NEON_uaddlv(uVar26,1);
        uVar11 = CONCAT62((int6)((ulong)uVar26 >> 0x10),uVar25) & 0xffffffff;
        if (uVar11 < 2) {
          uVar14 = (ulong)((int)uVar7 - 1) & 0x10;
        }
        else if (uVar7 < 0x11) {
          uVar14 = 0;
          if (uVar7 != 0) {
            uVar14 = 0x10 / uVar7;
          }
          uVar14 = 0x10 - uVar14 * uVar7;
        }
        else {
          uVar14 = 0x10;
        }
        plVar16 = *(long **)(*(long *)(lVar6 + 0xf0) + uVar14 * 8);
        if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
          do {
            uVar19 = plVar16[1];
            if (uVar19 == 0x10) {
              if ((char)plVar16[2] == '\x10') {
                this_00 = (ViewModelInstanceValue *)plVar16[3];
                if (this_00 != (ViewModelInstanceValue *)0x0) {
                  pVVar5 = (ViewModelValueDependent *)operator_new(0x18);
                  *(undefined ***)pVVar5 = &PTR_FUN_00654170;
                  *(ArtboardComponentList **)(pVVar5 + 8) = this;
                  FUN_00340fb0(1,this_00 + 0x8c);
                  *(ViewModelInstanceValue **)(pVVar5 + 0x10) = this_00;
                  ViewModelInstanceValue::addDependent(this_00,pVVar5);
                  uVar7 = *puVar22;
                  uVar11 = ((ulong)(uint)((int)uVar7 << 3) + 8 ^ uVar7 >> 0x20) *
                           -0x622015f714c7d297;
                  uVar11 = (uVar7 >> 0x20 ^ uVar11 >> 0x2f ^ uVar11) * -0x622015f714c7d297;
                  pVVar23 = (ViewModelValueDependent *)
                            ((uVar11 ^ uVar11 >> 0x2f) * -0x622015f714c7d297);
                  pVVar24 = *(ViewModelValueDependent **)(this + 0x430);
                  pVVar8 = pVVar5;
                  if (pVVar24 == (ViewModelValueDependent *)0x0) goto LAB_00371a90;
                  uVar26 = NEON_cnt(pVVar24,1);
                  uVar25 = NEON_uaddlv(uVar26,1);
                  uVar11 = CONCAT62((int6)((ulong)uVar26 >> 0x10),uVar25) & 0xffffffff;
                  if (uVar11 < 2) {
                    pVVar8 = (ViewModelValueDependent *)((ulong)pVVar23 & (ulong)(pVVar24 + -1));
                  }
                  else {
                    pVVar8 = pVVar23;
                    if (pVVar24 <= pVVar23) {
                      uVar14 = 0;
                      if (pVVar24 != (ViewModelValueDependent *)0x0) {
                        uVar14 = (ulong)pVVar23 / (ulong)pVVar24;
                      }
                      pVVar8 = pVVar23 + -(uVar14 * (long)pVVar24);
                    }
                  }
                  puVar15 = *(undefined8 **)(*(long *)(this + 0x428) + (long)pVVar8 * 8);
                  if ((puVar15 == (undefined8 *)0x0) ||
                     (plVar16 = (long *)*puVar15, plVar16 == (long *)0x0)) goto LAB_00371a90;
                  goto LAB_00371a5c;
                }
                break;
              }
            }
            else {
              if (uVar11 < 2) {
                uVar19 = uVar19 & uVar7 - 1;
              }
              else if (uVar7 <= uVar19) {
                uVar3 = 0;
                if (uVar7 != 0) {
                  uVar3 = uVar19 / uVar7;
                }
                uVar19 = uVar19 - uVar3 * uVar7;
              }
              if (uVar19 != uVar14) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
      goto LAB_003718c4;
    }
  }
  return;
LAB_00371a5c:
  do {
    pVVar17 = (ViewModelValueDependent *)plVar16[1];
    if (pVVar17 == pVVar23) {
      if (plVar16[2] == uVar7) goto LAB_00371d70;
    }
    else {
      if (uVar11 < 2) {
        pVVar17 = (ViewModelValueDependent *)((ulong)pVVar17 & (ulong)(pVVar24 + -1));
      }
      else if (pVVar24 <= pVVar17) {
        uVar14 = 0;
        if (pVVar24 != (ViewModelValueDependent *)0x0) {
          uVar14 = (ulong)pVVar17 / (ulong)pVVar24;
        }
        pVVar17 = pVVar17 + -(uVar14 * (long)pVVar24);
      }
      if (pVVar17 != pVVar8) break;
    }
    plVar16 = (long *)*plVar16;
  } while (plVar16 != (long *)0x0);
LAB_00371a90:
  plVar16 = (long *)operator_new(0x20);
  uVar7 = *puVar22;
  *plVar16 = 0;
  plVar16[1] = (long)pVVar23;
  if (uVar7 != 0) {
    FUN_00340fb0(1,uVar7 + 0x14);
  }
  lVar6 = *(long *)(this + 0x440);
  fVar27 = *(float *)(this + 0x448);
  plVar16[2] = uVar7;
  plVar16[3] = 0;
  if ((pVVar24 == (ViewModelValueDependent *)0x0) || (fVar27 * (float)pVVar24 < (float)(lVar6 + 1)))
  {
    if (pVVar24 < (ViewModelValueDependent *)0x3) {
      uVar7 = 1;
    }
    else {
      uVar7 = (ulong)(((ulong)pVVar24 & (ulong)(pVVar24 + -1)) != 0);
    }
    pVVar8 = (ViewModelValueDependent *)(uVar7 | (long)pVVar24 << 1);
    pVVar24 = (ViewModelValueDependent *)(long)((float)(lVar6 + 1) / fVar27);
    if (pVVar8 <= pVVar24) {
      pVVar8 = pVVar24;
    }
    if (pVVar8 + -1 == (ViewModelValueDependent *)0x0) {
      pVVar8 = (ViewModelValueDependent *)0x2;
    }
    else if (((ulong)pVVar8 & (ulong)(pVVar8 + -1)) != 0) {
      pVVar8 = (ViewModelValueDependent *)std::__ndk1::__next_prime((ulong)pVVar8);
    }
    pVVar24 = *(ViewModelValueDependent **)(this + 0x430);
    if (pVVar24 < pVVar8) {
LAB_00371b54:
      if ((ulong)pVVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00324008();
      }
      pvVar21 = operator_new((long)pVVar8 << 3);
      pvVar9 = *(void **)(this + 0x428);
      *(void **)(this + 0x428) = pvVar21;
      if (pvVar9 != (void *)0x0) {
        operator_delete(pvVar9);
      }
      pVVar24 = (ViewModelValueDependent *)0x0;
      *(ViewModelValueDependent **)(this + 0x430) = pVVar8;
      do {
        *(undefined8 *)(*(long *)(this + 0x428) + (long)pVVar24 * 8) = 0;
        pVVar24 = pVVar24 + 1;
      } while (pVVar8 != pVVar24);
      plVar12 = *(long **)pAVar1;
      pVVar24 = pVVar8;
      if (plVar12 != (long *)0x0) {
        pVVar17 = (ViewModelValueDependent *)plVar12[1];
        uVar26 = NEON_cnt(pVVar8,1);
        uVar25 = NEON_uaddlv(uVar26,1);
        uVar7 = CONCAT62((int6)((ulong)uVar26 >> 0x10),uVar25) & 0xffffffff;
        if (uVar7 < 2) {
          pVVar17 = (ViewModelValueDependent *)((ulong)pVVar17 & (ulong)(pVVar8 + -1));
        }
        else if (pVVar8 <= pVVar17) {
          uVar11 = 0;
          if (pVVar8 != (ViewModelValueDependent *)0x0) {
            uVar11 = (ulong)pVVar17 / (ulong)pVVar8;
          }
          pVVar17 = pVVar17 + -(uVar11 * (long)pVVar8);
        }
        *(ArtboardComponentList **)(*(long *)(this + 0x428) + (long)pVVar17 * 8) = pAVar1;
        plVar18 = (long *)*plVar12;
        if (plVar18 != (long *)0x0) {
          do {
            pVVar20 = (ViewModelValueDependent *)plVar18[1];
            if (uVar7 < 2) {
              pVVar20 = (ViewModelValueDependent *)((ulong)pVVar20 & (ulong)(pVVar8 + -1));
            }
            else if (pVVar8 <= pVVar20) {
              uVar11 = 0;
              if (pVVar8 != (ViewModelValueDependent *)0x0) {
                uVar11 = (ulong)pVVar20 / (ulong)pVVar8;
              }
              pVVar20 = pVVar20 + -(uVar11 * (long)pVVar8);
            }
            if (pVVar20 != pVVar17) {
              if (*(long *)(*(long *)(this + 0x428) + (long)pVVar20 * 8) == 0) {
                *(long **)(*(long *)(this + 0x428) + (long)pVVar20 * 8) = plVar12;
                pVVar17 = pVVar20;
              }
              else {
                *plVar12 = *plVar18;
                *plVar18 = **(long **)(*(long *)(this + 0x428) + (long)pVVar20 * 8);
                **(undefined8 **)(*(long *)(this + 0x428) + (long)pVVar20 * 8) = plVar18;
                plVar18 = plVar12;
              }
            }
            plVar12 = plVar18;
            plVar18 = (long *)*plVar12;
          } while (plVar18 != (long *)0x0);
        }
      }
    }
    else if (pVVar8 < pVVar24) {
      pVVar17 = (ViewModelValueDependent *)
                (long)((float)*(ulong *)(this + 0x440) / *(float *)(this + 0x448));
      if (pVVar24 < (ViewModelValueDependent *)0x3) {
LAB_00371e98:
        pVVar17 = (ViewModelValueDependent *)std::__ndk1::__next_prime((ulong)pVVar17);
      }
      else {
        uVar26 = NEON_cnt(pVVar24,1);
        uVar25 = NEON_uaddlv(uVar26,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar26 >> 0x10),uVar25)) goto LAB_00371e98;
        if ((ViewModelValueDependent *)0x1 < pVVar17) {
          pVVar17 = (ViewModelValueDependent *)(1L << (-LZCOUNT(pVVar17 + -1) & 0x3fU));
        }
      }
      if (pVVar8 <= pVVar17) {
        pVVar8 = pVVar17;
      }
      if (pVVar8 < pVVar24) {
        if (pVVar8 != (ViewModelValueDependent *)0x0) goto LAB_00371b54;
        pvVar21 = *(void **)(this + 0x428);
        *(undefined8 *)(this + 0x428) = 0;
        if (pvVar21 != (void *)0x0) {
          operator_delete(pvVar21);
        }
        *(undefined8 *)(this + 0x430) = 0;
        pVVar24 = (ViewModelValueDependent *)0x0;
      }
      else {
        pVVar24 = *(ViewModelValueDependent **)(this + 0x430);
      }
    }
    if (((ulong)pVVar24 & (ulong)(pVVar24 + -1)) == 0) {
      pVVar8 = (ViewModelValueDependent *)((ulong)(pVVar24 + -1) & (ulong)pVVar23);
    }
    else {
      pVVar8 = pVVar23;
      if (pVVar24 <= pVVar23) {
        uVar7 = 0;
        if (pVVar24 != (ViewModelValueDependent *)0x0) {
          uVar7 = (ulong)pVVar23 / (ulong)pVVar24;
        }
        pVVar8 = pVVar23 + -(uVar7 * (long)pVVar24);
      }
    }
  }
  lVar6 = *(long *)(this + 0x428);
  plVar12 = *(long **)(lVar6 + (long)pVVar8 * 8);
  if (plVar12 == (long *)0x0) {
    lVar10 = *(long *)pAVar1;
    *(long **)pAVar1 = plVar16;
    *plVar16 = lVar10;
    *(ArtboardComponentList **)(lVar6 + (long)pVVar8 * 8) = pAVar1;
    if (*plVar16 == 0) goto LAB_00371d64;
    pVVar8 = *(ViewModelValueDependent **)(*plVar16 + 8);
    if (((ulong)pVVar24 & (ulong)(pVVar24 + -1)) == 0) {
      pVVar8 = (ViewModelValueDependent *)((ulong)pVVar8 & (ulong)(pVVar24 + -1));
    }
    else if (pVVar24 <= pVVar8) {
      uVar7 = 0;
      if (pVVar24 != (ViewModelValueDependent *)0x0) {
        uVar7 = (ulong)pVVar8 / (ulong)pVVar24;
      }
      pVVar8 = pVVar8 + -(uVar7 * (long)pVVar24);
    }
    plVar12 = (long *)(*(long *)(this + 0x428) + (long)pVVar8 * 8);
  }
  else {
    *plVar16 = *plVar12;
  }
  *plVar12 = (long)plVar16;
LAB_00371d64:
  *(long *)(this + 0x440) = *(long *)(this + 0x440) + 1;
LAB_00371d70:
  pvVar21 = (void *)plVar16[3];
  plVar16[3] = (long)pVVar5;
  if (pvVar21 != (void *)0x0) {
    lVar6 = *(long *)((long)pvVar21 + 0x10);
    if (lVar6 != 0) {
      plVar12 = *(long **)(lVar6 + 0xf0);
      plVar16 = *(long **)(lVar6 + 0xe8);
      plVar18 = plVar16;
      for (; (plVar16 != plVar12 && (plVar18 = plVar16, (void *)*plVar16 != pvVar21));
          plVar16 = plVar16 + 1) {
        plVar18 = plVar12;
      }
      if ((plVar18 != plVar12) && (plVar16 = plVar18 + 1, plVar13 = plVar18, plVar16 != plVar12)) {
        do {
          plVar18 = plVar13;
          if ((void *)*plVar16 != pvVar21) {
            plVar18 = plVar13 + 1;
            *plVar13 = *plVar16;
          }
          plVar16 = plVar16 + 1;
          plVar13 = plVar18;
        } while (plVar16 != plVar12);
        plVar12 = *(long **)(lVar6 + 0xf0);
      }
      if (plVar18 != plVar12) {
        *(long **)(lVar6 + 0xf0) = plVar18;
      }
      plVar16 = *(long **)((long)pvVar21 + 0x10);
      *(undefined8 *)((long)pvVar21 + 0x10) = 0;
      if (plVar16 != (long *)0x0) {
        iVar4 = FUN_00340fe0(0xffffffff,(long)plVar16 + 0x8c);
        if (iVar4 == 1) {
          (**(code **)(*plVar16 + 8))(plVar16);
        }
        plVar16 = *(long **)((long)pvVar21 + 0x10);
        if ((plVar16 != (long *)0x0) &&
           (iVar4 = FUN_00340fe0(0xffffffff,(long)plVar16 + 0x8c), iVar4 == 1)) {
          (**(code **)(*plVar16 + 8))(plVar16);
        }
      }
    }
    operator_delete(pvVar21);
  }
LAB_003718c4:
  puVar22 = puVar22 + 1;
  if (puVar22 == puVar2) {
    return;
  }
  goto LAB_003718d0;
}


// ===== 00371ef8  FUN_00371ef8 =====

void FUN_00371ef8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 00371f0c  FUN_00371f0c =====

void FUN_00371f0c(long param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 8);
  if (plVar3 != (long *)0x0) {
    *(undefined1 *)((long)plVar3 + 0x40b) = 0;
    if ((*(ushort *)(plVar3 + 0xc) >> 2 & 1) == 0) {
      *(ushort *)(plVar3 + 0xc) = *(ushort *)(plVar3 + 0xc) | 4;
      (**(code **)(*plVar3 + 0x70))(plVar3);
      lVar2 = plVar3[0x10];
      uVar1 = *(uint *)(plVar3 + 7);
      *(undefined1 *)(lVar2 + 0xc32) = 1;
      *(ushort *)(lVar2 + 0x60) = *(ushort *)(lVar2 + 0x60) | 4;
      if (uVar1 < *(uint *)(lVar2 + 0xbd4)) {
        *(uint *)(lVar2 + 0xbd4) = uVar1;
      }
    }
  }
  return;
}


// ===== 00371f7c  FUN_00371f7c =====

void FUN_00371f7c(void)

{
  return;
}


// ===== 00371f80  FUN_00371f80 =====

void FUN_00371f80(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 00371f94  rive::ArtboardComponentList::ensureOrderedListIndices =====

/* rive::ArtboardComponentList::ensureOrderedListIndices() */

void __thiscall rive::ArtboardComponentList::ensureOrderedListIndices(ArtboardComponentList *this)

{
  ArtboardComponentList *pAVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  undefined8 *puVar8;
  ulong uVar9;
  void *pvVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  int *piVar14;
  ulong uVar15;
  int *piVar16;
  undefined4 *puVar17;
  ulong uVar18;
  int *piVar19;
  undefined8 *puVar20;
  int *piVar21;
  undefined8 *puVar22;
  int *piVar23;
  undefined4 *puVar24;
  ulong uVar25;
  long lVar26;
  int iVar27;
  undefined4 *puVar28;
  int *piVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  ArtboardComponentList *local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  uVar25 = *(long *)(this + 0x1f0) - *(long *)(this + 0x1e8);
  iVar27 = (int)(uVar25 >> 3);
  if (iVar27 == 0) {
    this[0x40b] = (ArtboardComponentList)0x0;
    *(undefined8 *)(this + 0x418) = *(undefined8 *)(this + 0x410);
    goto LAB_00372448;
  }
  if (this[0x40b] != (ArtboardComponentList)0x0) goto LAB_00372448;
  pAVar1 = this + 0x410;
  *(undefined8 *)(this + 0x418) = *(undefined8 *)(this + 0x410);
  uVar9 = (**(code **)(*(long *)this + 0x340))(this);
  if ((((uVar9 & 1) == 0) || (iVar13 = *(int *)(this + 0x388), iVar13 < 0)) ||
     (iVar3 = *(int *)(this + 0x38c), iVar3 < 0)) {
    puVar24 = *(undefined4 **)(this + 0x410);
    uVar9 = (long)(uVar25 * 0x20000000) >> 0x20;
    if ((ulong)(*(long *)(this + 0x420) - (long)puVar24 >> 2) < uVar9) {
      if (uVar9 >> 0x3e != 0) {
LAB_00372478:
        FUN_00330fec(pAVar1);
LAB_00372480:
                    /* WARNING: Subroutine does not return */
        FUN_00324008();
      }
      puVar28 = *(undefined4 **)(this + 0x418);
      pvVar10 = operator_new((long)(uVar25 * 0x20000000) >> 0x1e);
      lVar26 = (long)puVar28 - (long)puVar24;
      puVar2 = (undefined4 *)((long)pvVar10 + lVar26);
      puVar17 = puVar2;
      if (lVar26 != 0) {
        if ((0x1b < lVar26 - 4U) && (0x1f < (ulong)((long)puVar24 - (long)pvVar10))) {
          puVar20 = (undefined8 *)(puVar28 + -4);
          uVar25 = (lVar26 - 4U >> 2) + 1;
          uVar18 = uVar25 & 0x7ffffffffffffff8;
          puVar28 = puVar28 + -uVar18;
          puVar22 = (undefined8 *)((long)pvVar10 + ((long)puVar20 - (long)puVar24));
          uVar15 = uVar18;
          do {
            puVar8 = puVar20 + -1;
            uVar32 = puVar20[-2];
            uVar31 = puVar20[1];
            uVar30 = *puVar20;
            uVar15 = uVar15 - 8;
            puVar20 = puVar20 + -4;
            puVar22[-1] = *puVar8;
            puVar22[-2] = uVar32;
            puVar22[1] = uVar31;
            *puVar22 = uVar30;
            puVar22 = puVar22 + -4;
          } while (uVar15 != 0);
          puVar17 = puVar2 + -uVar18;
          if (uVar25 == uVar18) goto LAB_00372268;
        }
        do {
          puVar28 = puVar28 + -1;
          puVar17 = puVar17 + -1;
          *puVar17 = *puVar28;
        } while (puVar28 != puVar24);
      }
LAB_00372268:
      *(undefined4 **)(this + 0x410) = puVar17;
      *(undefined4 **)(this + 0x418) = puVar2;
      *(void **)(this + 0x420) = (void *)((long)pvVar10 + uVar9 * 4);
      if (puVar24 != (undefined4 *)0x0) {
        operator_delete(puVar24);
      }
    }
    if (0 < iVar27) {
      iVar13 = 0;
      piVar16 = *(int **)(this + 0x418);
      do {
        if (piVar16 < *(int **)(this + 0x420)) {
          piVar29 = piVar16 + 1;
          *piVar16 = iVar13;
        }
        else {
          piVar23 = *(int **)pAVar1;
          lVar26 = (long)piVar16 - (long)piVar23;
          uVar25 = (lVar26 >> 2) + 1;
          if (uVar25 >> 0x3e != 0) goto LAB_00372478;
          uVar15 = (long)*(int **)(this + 0x420) - (long)piVar23;
          uVar9 = (long)uVar15 >> 1;
          if (uVar9 <= uVar25) {
            uVar9 = uVar25;
          }
          if (0x7ffffffffffffffb < uVar15) {
            uVar9 = 0x3fffffffffffffff;
          }
          if (uVar9 == 0) {
            pvVar10 = (void *)0x0;
          }
          else {
            if (uVar9 >> 0x3e != 0) goto LAB_00372480;
            pvVar10 = operator_new(uVar9 << 2);
          }
          piVar14 = (int *)((long)pvVar10 + (lVar26 >> 2) * 4);
          piVar29 = piVar14 + 1;
          *piVar14 = iVar13;
          if ((long)piVar16 - (long)piVar23 != 0) {
            uVar25 = ((long)piVar16 - (long)piVar23) - 4;
            if (((0xab < uVar25) &&
                (uVar15 = (long)pvVar10 + lVar26 + -4,
                uVar15 - (uVar25 & 0xfffffffffffffffc) <= uVar15)) &&
               (((int *)((long)(piVar16 + -1) - (uVar25 & 0xfffffffffffffffc)) <= piVar16 + -1 &&
                (0x1f < (ulong)((long)piVar16 + (-lVar26 - (long)pvVar10)))))) {
              piVar19 = piVar14 + -4;
              piVar21 = piVar16 + -4;
              uVar25 = (uVar25 >> 2) + 1;
              uVar18 = uVar25 & 0x7ffffffffffffff8;
              piVar16 = piVar16 + -uVar18;
              uVar15 = uVar18;
              do {
                piVar7 = piVar21 + -2;
                uVar32 = *(undefined8 *)(piVar21 + -4);
                uVar31 = *(undefined8 *)(piVar21 + 2);
                uVar30 = *(undefined8 *)piVar21;
                uVar15 = uVar15 - 8;
                piVar21 = piVar21 + -8;
                *(undefined8 *)(piVar19 + -2) = *(undefined8 *)piVar7;
                *(undefined8 *)(piVar19 + -4) = uVar32;
                *(undefined8 *)(piVar19 + 2) = uVar31;
                *(undefined8 *)piVar19 = uVar30;
                piVar19 = piVar19 + -8;
              } while (uVar15 != 0);
              piVar14 = piVar14 + -uVar18;
              if (uVar25 == uVar18) goto LAB_00372344;
            }
            do {
              piVar16 = piVar16 + -1;
              piVar14 = piVar14 + -1;
              *piVar14 = *piVar16;
            } while (piVar16 != piVar23);
          }
LAB_00372344:
          *(int **)(this + 0x410) = piVar14;
          *(int **)(this + 0x418) = piVar29;
          *(void **)(this + 0x420) = (void *)((long)pvVar10 + uVar9 * 4);
          if (piVar23 != (int *)0x0) {
            operator_delete(piVar23);
          }
        }
        iVar13 = iVar13 + 1;
        *(int **)(this + 0x418) = piVar29;
        piVar16 = piVar29;
      } while (iVar13 != iVar27);
    }
  }
  else {
    iVar4 = 0;
    if (iVar27 != 0) {
      iVar4 = iVar3 / iVar27;
    }
    piVar16 = *(int **)(this + 0x418);
    do {
      iVar5 = 0;
      if (iVar27 != 0) {
        iVar5 = iVar13 / iVar27;
      }
      iVar5 = iVar13 - iVar5 * iVar27;
      if (piVar16 < *(int **)(this + 0x420)) {
        piVar29 = piVar16 + 1;
        *piVar16 = iVar5;
      }
      else {
        piVar23 = *(int **)pAVar1;
        lVar26 = (long)piVar16 - (long)piVar23;
        uVar25 = (lVar26 >> 2) + 1;
        if (uVar25 >> 0x3e != 0) goto LAB_00372478;
        uVar15 = (long)*(int **)(this + 0x420) - (long)piVar23;
        uVar9 = (long)uVar15 >> 1;
        if (uVar9 <= uVar25) {
          uVar9 = uVar25;
        }
        if (0x7ffffffffffffffb < uVar15) {
          uVar9 = 0x3fffffffffffffff;
        }
        if (uVar9 == 0) {
          pvVar10 = (void *)0x0;
        }
        else {
          if (uVar9 >> 0x3e != 0) goto LAB_00372480;
          pvVar10 = operator_new(uVar9 << 2);
        }
        piVar14 = (int *)((long)pvVar10 + (lVar26 >> 2) * 4);
        piVar29 = piVar14 + 1;
        *piVar14 = iVar5;
        if ((long)piVar16 - (long)piVar23 != 0) {
          uVar25 = ((long)piVar16 - (long)piVar23) - 4;
          if ((((0xab < uVar25) &&
               (uVar15 = (long)pvVar10 + lVar26 + -4,
               uVar15 - (uVar25 & 0xfffffffffffffffc) <= uVar15)) &&
              ((int *)((long)(piVar16 + -1) - (uVar25 & 0xfffffffffffffffc)) <= piVar16 + -1)) &&
             (0x1f < (ulong)((long)piVar16 + (-lVar26 - (long)pvVar10)))) {
            piVar19 = piVar14 + -4;
            piVar21 = piVar16 + -4;
            uVar25 = (uVar25 >> 2) + 1;
            uVar18 = uVar25 & 0x7ffffffffffffff8;
            piVar16 = piVar16 + -uVar18;
            uVar15 = uVar18;
            do {
              piVar7 = piVar21 + -2;
              uVar32 = *(undefined8 *)(piVar21 + -4);
              uVar31 = *(undefined8 *)(piVar21 + 2);
              uVar30 = *(undefined8 *)piVar21;
              uVar15 = uVar15 - 8;
              piVar21 = piVar21 + -8;
              *(undefined8 *)(piVar19 + -2) = *(undefined8 *)piVar7;
              *(undefined8 *)(piVar19 + -4) = uVar32;
              *(undefined8 *)(piVar19 + 2) = uVar31;
              *(undefined8 *)piVar19 = uVar30;
              piVar19 = piVar19 + -8;
            } while (uVar15 != 0);
            piVar14 = piVar14 + -uVar18;
            if (uVar25 == uVar18) goto LAB_003720d8;
          }
          do {
            piVar16 = piVar16 + -1;
            piVar14 = piVar14 + -1;
            *piVar14 = *piVar16;
          } while (piVar16 != piVar23);
        }
LAB_003720d8:
        *(int **)(this + 0x410) = piVar14;
        *(int **)(this + 0x418) = piVar29;
        *(void **)(this + 0x420) = (void *)((long)pvVar10 + uVar9 * 4);
        if (piVar23 != (int *)0x0) {
          operator_delete(piVar23);
        }
      }
      iVar13 = iVar5 + 1;
      *(int **)(this + 0x418) = piVar29;
      piVar16 = piVar29;
    } while (iVar5 != iVar3 - iVar4 * iVar27);
  }
  if (this[0x40a] != (ArtboardComponentList)0x0) {
    lVar11 = *(long *)(this + 0x410);
    lVar12 = *(long *)(this + 0x418);
    lVar26 = 0;
    if (lVar12 != lVar11) {
      lVar26 = LZCOUNT(lVar12 - lVar11 >> 2) * -2 + 0x7e;
    }
    local_70 = this;
    FUN_00372488(lVar11,lVar12,&local_70,lVar26,1);
  }
  this[0x40b] = (ArtboardComponentList)0x1;
LAB_00372448:
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00372488  FUN_00372488 =====

void FUN_00372488(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,
                 uint param_5)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  ulong uVar22;
  undefined8 *puVar23;
  
  do {
    puVar9 = (undefined4 *)((long)param_2 + -4);
    puVar14 = param_1;
LAB_003724d8:
    param_1 = puVar14;
    uVar22 = (long)param_2 - (long)param_1 >> 2;
    if (uVar22 - 2 == 0 || (long)uVar22 < 2) {
      if (uVar22 < 2) {
        return;
      }
      if (uVar22 == 2) {
        uVar22 = FUN_00372c50(*param_3,*puVar9,*(undefined4 *)param_1);
        if ((uVar22 & 1) == 0) {
          return;
        }
        uVar4 = *(undefined4 *)param_1;
        *(undefined4 *)param_1 = *puVar9;
        *puVar9 = uVar4;
        return;
      }
    }
    else {
      if (uVar22 == 3) {
        FUN_00372f4c(param_1,(undefined4 *)((long)param_1 + 4),puVar9,param_3);
        return;
      }
      if (uVar22 == 4) {
        FUN_00373034(param_1,(undefined4 *)((long)param_1 + 4),param_1 + 1,puVar9,param_3);
        return;
      }
      if (uVar22 == 5) {
        FUN_00373034(param_1,(undefined4 *)((long)param_1 + 4),param_1 + 1,
                     (undefined4 *)((long)param_1 + 0xc),param_3);
        uVar22 = FUN_00372c50(*param_3,*puVar9,*(undefined4 *)((long)param_1 + 0xc));
        if ((uVar22 & 1) == 0) {
          return;
        }
        uVar4 = *(undefined4 *)((long)param_1 + 0xc);
        uVar8 = *param_3;
        *(undefined4 *)((long)param_1 + 0xc) = *puVar9;
        *puVar9 = uVar4;
        uVar22 = FUN_00372c50(uVar8,*(undefined4 *)((long)param_1 + 0xc),
                              *(undefined4 *)(param_1 + 1));
        if ((uVar22 & 1) == 0) {
          return;
        }
        uVar4 = *(undefined4 *)(param_1 + 1);
        uVar3 = *(undefined4 *)((long)param_1 + 0xc);
        uVar8 = *param_3;
        *(undefined4 *)(param_1 + 1) = uVar3;
        *(undefined4 *)((long)param_1 + 0xc) = uVar4;
        uVar22 = FUN_00372c50(uVar8,uVar3,*(undefined4 *)((long)param_1 + 4));
        if ((uVar22 & 1) == 0) {
          return;
        }
        uVar4 = *(undefined4 *)((long)param_1 + 4);
        uVar3 = *(undefined4 *)(param_1 + 1);
        uVar8 = *param_3;
        *(undefined4 *)((long)param_1 + 4) = uVar3;
        *(undefined4 *)(param_1 + 1) = uVar4;
        uVar22 = FUN_00372c50(uVar8,uVar3,*(undefined4 *)param_1);
        if ((uVar22 & 1) == 0) {
          return;
        }
        uVar8 = NEON_rev64(*param_1,4);
        *param_1 = uVar8;
        return;
      }
    }
    if ((long)uVar22 < 0x18) {
      puVar14 = (undefined8 *)((long)param_1 + 4);
      if ((param_5 & 1) == 0) {
        if (param_1 == param_2 || puVar14 == param_2) {
          return;
        }
        do {
          puVar18 = puVar14;
          uVar22 = FUN_00372c50(*param_3,*(undefined4 *)((long)param_1 + 4),*(undefined4 *)param_1);
          if ((uVar22 & 1) != 0) {
            uVar4 = *(undefined4 *)puVar18;
            puVar14 = puVar18;
            do {
              puVar19 = (undefined8 *)((long)puVar14 + -4);
              uVar8 = *param_3;
              *(undefined4 *)puVar14 = *(undefined4 *)puVar19;
              uVar22 = FUN_00372c50(uVar8,uVar4,*(undefined4 *)(puVar14 + -1));
              puVar14 = puVar19;
            } while ((uVar22 & 1) != 0);
            *(undefined4 *)puVar19 = uVar4;
          }
          puVar14 = (undefined8 *)((long)puVar18 + 4);
          param_1 = puVar18;
        } while ((undefined8 *)((long)puVar18 + 4) != param_2);
        return;
      }
      if (param_1 == param_2 || puVar14 == param_2) {
        return;
      }
      lVar12 = 0;
      puVar18 = param_1;
      break;
    }
    if (param_4 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar10 = uVar22 - 2 >> 1;
      uVar13 = uVar10;
      goto LAB_003729d8;
    }
    uVar13 = uVar22 >> 1;
    puVar20 = (undefined4 *)((long)param_1 + uVar13 * 4);
    if (uVar22 < 0x81) {
      FUN_00372f4c(puVar20,param_1,puVar9,param_3);
    }
    else {
      FUN_00372f4c(param_1,puVar20,puVar9,param_3);
      puVar21 = (undefined4 *)((long)param_1 + 4);
      puVar1 = (undefined4 *)((long)param_1 + uVar13 * 4);
      FUN_00372f4c(puVar21,puVar1 + -1,param_2 + -1,param_3);
      FUN_00372f4c(param_1 + 1,puVar21 + uVar13,(undefined4 *)((long)param_2 + -0xc),param_3);
      FUN_00372f4c(puVar1 + -1,puVar20,puVar21 + uVar13,param_3);
      uVar4 = *(undefined4 *)param_1;
      *(undefined4 *)param_1 = *puVar1;
      *puVar1 = uVar4;
    }
    if ((param_5 & 1) == 0) {
      uVar22 = FUN_00372c50(*param_3,*(undefined4 *)((long)param_1 + -4),*(undefined4 *)param_1);
      if ((uVar22 & 1) == 0) {
        uVar4 = *(undefined4 *)param_1;
        uVar22 = FUN_00372c50(*param_3,uVar4,*puVar9);
        puVar14 = param_1;
        if ((uVar22 & 1) == 0) {
          do {
            puVar14 = (undefined8 *)((long)puVar14 + 4);
            if (param_2 <= puVar14) break;
            uVar22 = FUN_00372c50(*param_3,uVar4,*(undefined4 *)puVar14);
          } while ((uVar22 & 1) == 0);
        }
        else {
          do {
            puVar14 = (undefined8 *)((long)puVar14 + 4);
            uVar22 = FUN_00372c50(*param_3,uVar4,*(undefined4 *)puVar14);
          } while ((uVar22 & 1) == 0);
        }
        puVar18 = param_2;
        if (puVar14 < param_2) {
          do {
            puVar18 = (undefined8 *)((long)puVar18 + -4);
            uVar22 = FUN_00372c50(*param_3,uVar4,*(undefined4 *)puVar18);
          } while ((uVar22 & 1) != 0);
        }
        while (puVar14 < puVar18) {
          uVar3 = *(undefined4 *)puVar14;
          *(undefined4 *)puVar14 = *(undefined4 *)puVar18;
          *(undefined4 *)puVar18 = uVar3;
          do {
            puVar14 = (undefined8 *)((long)puVar14 + 4);
            uVar22 = FUN_00372c50(*param_3,uVar4,*(undefined4 *)puVar14);
          } while ((uVar22 & 1) == 0);
          do {
            puVar18 = (undefined8 *)((long)puVar18 + -4);
            uVar22 = FUN_00372c50(*param_3,uVar4,*(undefined4 *)puVar18);
          } while ((uVar22 & 1) != 0);
        }
        puVar18 = (undefined8 *)((long)puVar14 + -4);
        if (puVar18 != param_1) {
          *(undefined4 *)param_1 = *(undefined4 *)puVar18;
        }
        *(undefined4 *)puVar18 = uVar4;
        param_5 = 0;
        param_4 = param_4 + -1;
        goto LAB_003724d8;
      }
    }
    param_4 = param_4 + -1;
    uVar4 = *(undefined4 *)param_1;
    puVar14 = param_1;
    do {
      puVar18 = puVar14;
      puVar14 = (undefined8 *)((long)puVar18 + 4);
      uVar22 = FUN_00372c50(*param_3,*(undefined4 *)puVar14,uVar4);
    } while ((uVar22 & 1) != 0);
    puVar19 = param_2;
    if (puVar18 == param_1) {
      do {
        if (puVar19 <= puVar14) break;
        puVar19 = (undefined8 *)((long)puVar19 + -4);
        uVar22 = FUN_00372c50(*param_3,*(undefined4 *)puVar19,uVar4);
      } while ((uVar22 & 1) == 0);
    }
    else {
      do {
        puVar19 = (undefined8 *)((long)puVar19 + -4);
        uVar22 = FUN_00372c50(*param_3,*(undefined4 *)puVar19,uVar4);
      } while ((uVar22 & 1) == 0);
    }
    puVar17 = puVar19;
    puVar23 = puVar14;
    if (puVar14 < puVar19) {
      do {
        uVar3 = *(undefined4 *)puVar23;
        *(undefined4 *)puVar23 = *(undefined4 *)puVar17;
        *(undefined4 *)puVar17 = uVar3;
        do {
          puVar18 = puVar23;
          puVar23 = (undefined8 *)((long)puVar18 + 4);
          uVar22 = FUN_00372c50(*param_3,*(undefined4 *)puVar23,uVar4);
        } while ((uVar22 & 1) != 0);
        do {
          puVar17 = (undefined8 *)((long)puVar17 + -4);
          uVar22 = FUN_00372c50(*param_3,*(undefined4 *)puVar17,uVar4);
        } while ((uVar22 & 1) == 0);
      } while (puVar23 < puVar17);
    }
    if (puVar18 != param_1) {
      *(undefined4 *)param_1 = *(undefined4 *)puVar18;
    }
    *(undefined4 *)puVar18 = uVar4;
    if (puVar14 < puVar19) goto LAB_003726e4;
    uVar22 = FUN_003730e4(param_1,puVar18,param_3);
    uVar13 = FUN_003730e4((undefined8 *)((long)puVar18 + 4),param_2,param_3);
    if ((uVar13 & 1) == 0) goto code_r0x003726e0;
    param_2 = puVar18;
    if ((uVar22 & 1) != 0) {
      return;
    }
  } while( true );
LAB_00372968:
  puVar19 = puVar14;
  uVar22 = FUN_00372c50(*param_3,*(undefined4 *)((long)puVar18 + 4),*(undefined4 *)puVar18);
  if ((uVar22 & 1) != 0) {
    uVar4 = *(undefined4 *)puVar19;
    lVar5 = lVar12;
    do {
      lVar15 = lVar5;
      puVar9 = (undefined4 *)((long)param_1 + lVar15);
      puVar9[1] = *puVar9;
      puVar14 = param_1;
      if (lVar15 == 0) goto LAB_00372954;
      uVar22 = FUN_00372c50(*param_3,uVar4,puVar9[-1]);
      lVar5 = lVar15 + -4;
    } while ((uVar22 & 1) != 0);
    puVar14 = (undefined8 *)((long)param_1 + lVar15);
LAB_00372954:
    *(undefined4 *)puVar14 = uVar4;
  }
  lVar12 = lVar12 + 4;
  puVar14 = (undefined8 *)((long)puVar19 + 4);
  puVar18 = puVar19;
  if ((undefined8 *)((long)puVar19 + 4) == param_2) {
    return;
  }
  goto LAB_00372968;
LAB_003729d8:
  do {
    if ((long)uVar13 <= (long)uVar10) {
      uVar11 = uVar13 << 1 | 1;
      uVar7 = uVar13 * 2 + 2;
      puVar9 = (undefined4 *)((long)param_1 + uVar11 * 4);
      puVar20 = puVar9;
      uVar16 = uVar11;
      if ((long)uVar7 < (long)uVar22) {
        uVar6 = FUN_00372c50(*param_3,*puVar9,puVar9[1]);
        puVar20 = puVar9 + 1;
        uVar16 = uVar7;
        if ((uVar6 & 1) == 0) {
          puVar20 = puVar9;
          uVar16 = uVar11;
        }
      }
      puVar9 = (undefined4 *)((long)param_1 + uVar13 * 4);
      uVar7 = FUN_00372c50(*param_3,*puVar20,*puVar9);
      if ((uVar7 & 1) == 0) {
        uVar4 = *puVar9;
        do {
          puVar21 = puVar20;
          *puVar9 = *puVar21;
          if ((long)uVar10 < (long)uVar16) break;
          uVar11 = uVar16 << 1 | 1;
          uVar7 = uVar16 * 2 + 2;
          puVar9 = (undefined4 *)((long)param_1 + uVar11 * 4);
          uVar16 = uVar11;
          puVar20 = puVar9;
          if ((long)uVar7 < (long)uVar22) {
            uVar6 = FUN_00372c50(*param_3,*puVar9,puVar9[1]);
            uVar16 = uVar7;
            puVar20 = puVar9 + 1;
            if ((uVar6 & 1) == 0) {
              uVar16 = uVar11;
              puVar20 = puVar9;
            }
          }
          uVar7 = FUN_00372c50(*param_3,*puVar20,uVar4);
          puVar9 = puVar21;
        } while ((uVar7 & 1) == 0);
        *puVar21 = uVar4;
      }
    }
    bVar2 = uVar13 != 0;
    uVar13 = uVar13 - 1;
  } while (bVar2);
  do {
    uVar4 = *(undefined4 *)param_1;
    uVar13 = 0;
    puVar14 = param_1;
    do {
      uVar7 = uVar13 << 1 | 1;
      uVar10 = uVar13 * 2 + 2;
      puVar18 = (undefined8 *)((long)puVar14 + uVar13 * 4 + 4);
      uVar11 = uVar7;
      puVar19 = puVar18;
      if ((long)uVar10 < (long)uVar22) {
        puVar19 = (undefined8 *)((long)puVar14 + uVar13 * 4 + 8);
        uVar13 = FUN_00372c50(*param_3,*(undefined4 *)((long)puVar14 + uVar13 * 4 + 4),
                              *(undefined4 *)puVar19);
        uVar11 = uVar10;
        if ((uVar13 & 1) == 0) {
          uVar11 = uVar7;
          puVar19 = puVar18;
        }
      }
      *(undefined4 *)puVar14 = *(undefined4 *)puVar19;
      uVar13 = uVar11;
      puVar14 = puVar19;
    } while ((long)uVar11 <= (long)(uVar22 - 2 >> 1));
    param_2 = (undefined8 *)((long)param_2 + -4);
    if (puVar19 == param_2) {
      *(undefined4 *)puVar19 = uVar4;
    }
    else {
      lVar12 = (long)puVar19 + (4 - (long)param_1) >> 2;
      *(undefined4 *)puVar19 = *(undefined4 *)param_2;
      *(undefined4 *)param_2 = uVar4;
      if (1 < lVar12) {
        uVar10 = lVar12 - 2U >> 1;
        puVar14 = (undefined8 *)((long)param_1 + uVar10 * 4);
        uVar13 = FUN_00372c50(*param_3,*(undefined4 *)puVar14,*(undefined4 *)puVar19);
        if ((uVar13 & 1) != 0) {
          uVar4 = *(undefined4 *)puVar19;
          do {
            puVar18 = puVar14;
            *(undefined4 *)puVar19 = *(undefined4 *)puVar18;
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1 >> 1;
            puVar14 = (undefined8 *)((long)param_1 + uVar10 * 4);
            uVar13 = FUN_00372c50(*param_3,*(undefined4 *)puVar14,uVar4);
            puVar19 = puVar18;
          } while ((uVar13 & 1) != 0);
          *(undefined4 *)puVar18 = uVar4;
        }
      }
    }
    bVar2 = (long)uVar22 < 3;
    uVar22 = uVar22 - 1;
    if (bVar2) {
      return;
    }
  } while( true );
code_r0x003726e0:
  puVar14 = (undefined8 *)((long)puVar18 + 4);
  if ((uVar22 & 1) == 0) {
LAB_003726e4:
    FUN_00372488(param_1,puVar18,param_3,param_4,param_5 & 1);
    param_5 = 0;
    puVar14 = (undefined8 *)((long)puVar18 + 4);
  }
  goto LAB_003724d8;
}


// ===== 00372c50  FUN_00372c50 =====

bool FUN_00372c50(long param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  undefined2 uVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  
  fVar12 = 0.0;
  fVar11 = 0.0;
  if (-1 < (int)param_2) {
    if ((((ulong)param_2 < (ulong)(*(long *)(param_1 + 0x1f0) - *(long *)(param_1 + 0x1e8) >> 3)) &&
        (lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x1e8) + (ulong)param_2 * 8) + 0x18),
        lVar6 != 0)) && (lVar4 = *(long *)(lVar6 + 0x118), lVar4 != 0)) {
      plVar7 = *(long **)(lVar4 + 0x30);
      if (plVar7 != *(long **)(lVar4 + 0x38)) {
        do {
          if (*(int *)(*plVar7 + 0x28) == 0x10) {
            fVar11 = 0.0;
            uVar3 = *(ulong *)(lVar6 + 0xf8);
            if (uVar3 == 0) goto LAB_00372dd4;
            uVar13 = NEON_cnt(uVar3,1);
            uVar10 = NEON_uaddlv(uVar13,1);
            uVar5 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar10) & 0xffffffff;
            if (uVar5 < 2) {
              uVar8 = (ulong)((int)uVar3 - 1) & 0x10;
            }
            else {
              uVar8 = 0x10;
              if (uVar3 < 0x11) {
                uVar8 = 0;
                if (uVar3 != 0) {
                  uVar8 = 0x10 / uVar3;
                }
                uVar8 = 0x10 - uVar8 * uVar3;
              }
            }
            plVar7 = *(long **)(*(long *)(lVar6 + 0xf0) + uVar8 * 8);
            if ((plVar7 == (long *)0x0) || (plVar7 = (long *)*plVar7, plVar7 == (long *)0x0))
            goto LAB_00372dd4;
            goto LAB_00372d3c;
          }
          plVar7 = plVar7 + 1;
        } while (plVar7 != *(long **)(lVar4 + 0x38));
        goto LAB_00372cc0;
      }
    }
  }
  goto LAB_00372dd4;
LAB_00372ec0:
  do {
    uVar9 = plVar7[1];
    if (uVar9 == 0x10) {
      if ((char)plVar7[2] == '\x10') {
        plVar7 = (long *)plVar7[3];
        if ((plVar7 != (long *)0x0) &&
           (uVar3 = (**(code **)(*plVar7 + 0x18))(plVar7,0x1ba), (uVar3 & 1) != 0)) {
          fVar12 = *(float *)(plVar7 + 0x22);
          fVar14 = ABS(fVar12);
          fVar15 = fVar12;
          if (fVar14 >= INFINITY) {
            fVar15 = 0.0;
          }
          if (fVar14 == INFINITY || fVar14 < INFINITY != NAN(fVar14)) {
            fVar12 = fVar15;
          }
        }
        break;
      }
    }
    else {
      if (uVar5 < 2) {
        uVar9 = uVar9 & uVar3 - 1;
      }
      else if (uVar3 <= uVar9) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar9 / uVar3;
        }
        uVar9 = uVar9 - uVar1 * uVar3;
      }
      if (uVar9 != uVar8) break;
    }
    plVar7 = (long *)*plVar7;
  } while (plVar7 != (long *)0x0);
  goto LAB_00372e28;
LAB_00372d3c:
  do {
    uVar9 = plVar7[1];
    if (uVar9 == 0x10) {
      if ((char)plVar7[2] == '\x10') {
        plVar7 = (long *)plVar7[3];
        fVar11 = 0.0;
        if ((plVar7 != (long *)0x0) &&
           (uVar3 = (**(code **)(*plVar7 + 0x18))(plVar7,0x1ba), (uVar3 & 1) != 0)) {
          fVar11 = *(float *)(plVar7 + 0x22);
          fVar14 = ABS(fVar11);
          fVar15 = fVar11;
          if (fVar14 >= INFINITY) {
            fVar15 = 0.0;
          }
          if (fVar14 == INFINITY || fVar14 < INFINITY != NAN(fVar14)) {
            fVar11 = fVar15;
          }
        }
        goto LAB_00372dd4;
      }
    }
    else {
      if (uVar5 < 2) {
        uVar9 = uVar9 & uVar3 - 1;
      }
      else if (uVar3 <= uVar9) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar9 / uVar3;
        }
        uVar9 = uVar9 - uVar1 * uVar3;
      }
      if (uVar9 != uVar8) break;
    }
    plVar7 = (long *)*plVar7;
  } while (plVar7 != (long *)0x0);
LAB_00372cc0:
  fVar11 = 0.0;
LAB_00372dd4:
  if (-1 < (int)param_3) {
    if ((((ulong)param_3 < (ulong)(*(long *)(param_1 + 0x1f0) - *(long *)(param_1 + 0x1e8) >> 3)) &&
        (lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x1e8) + (ulong)param_3 * 8) + 0x18),
        lVar6 != 0)) && (lVar4 = *(long *)(lVar6 + 0x118), lVar4 != 0)) {
      for (plVar7 = *(long **)(lVar4 + 0x30); plVar7 != *(long **)(lVar4 + 0x38);
          plVar7 = plVar7 + 1) {
        if (*(int *)(*plVar7 + 0x28) == 0x10) {
          uVar3 = *(ulong *)(lVar6 + 0xf8);
          if (uVar3 != 0) {
            uVar13 = NEON_cnt(uVar3,1);
            uVar10 = NEON_uaddlv(uVar13,1);
            uVar5 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar10) & 0xffffffff;
            if (uVar5 < 2) {
              uVar8 = (ulong)((int)uVar3 - 1) & 0x10;
            }
            else {
              uVar8 = 0x10;
              if (uVar3 < 0x11) {
                uVar8 = 0;
                if (uVar3 != 0) {
                  uVar8 = 0x10 / uVar3;
                }
                uVar8 = 0x10 - uVar8 * uVar3;
              }
            }
            plVar7 = *(long **)(*(long *)(lVar6 + 0xf0) + uVar8 * 8);
            if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
              goto LAB_00372ec0;
            }
          }
          break;
        }
      }
    }
  }
LAB_00372e28:
  bVar2 = fVar11 < fVar12;
  if (fVar11 == fVar12) {
    bVar2 = (int)param_2 < (int)param_3;
  }
  return bVar2;
}


// ===== 00372f4c  FUN_00372f4c =====

void FUN_00372f4c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar2 = FUN_00372c50(*param_4,*param_2,*param_1);
  uVar3 = FUN_00372c50(*param_4,*param_3,*param_2);
  if ((uVar2 & 1) == 0) {
    if ((uVar3 & 1) != 0) {
      uVar1 = *param_2;
      uVar4 = *param_4;
      *param_2 = *param_3;
      *param_3 = uVar1;
      uVar2 = FUN_00372c50(uVar4,*param_2,*param_1);
      if ((uVar2 & 1) != 0) {
        uVar1 = *param_1;
        *param_1 = *param_2;
        *param_2 = uVar1;
      }
    }
  }
  else {
    uVar1 = *param_1;
    if ((uVar3 & 1) == 0) {
      uVar4 = *param_4;
      *param_1 = *param_2;
      *param_2 = uVar1;
      uVar2 = FUN_00372c50(uVar4,*param_3);
      if ((uVar2 & 1) != 0) {
        uVar1 = *param_2;
        *param_2 = *param_3;
        *param_3 = uVar1;
      }
    }
    else {
      *param_1 = *param_3;
      *param_3 = uVar1;
    }
  }
  return;
}


// ===== 00373034  FUN_00373034 =====

void FUN_00373034(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined8 *param_5)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  FUN_00372f4c();
  uVar2 = FUN_00372c50(*param_5,*param_4,*param_3);
  if ((uVar2 & 1) != 0) {
    uVar1 = *param_3;
    uVar3 = *param_5;
    *param_3 = *param_4;
    *param_4 = uVar1;
    uVar2 = FUN_00372c50(uVar3,*param_3,*param_2);
    if ((uVar2 & 1) != 0) {
      uVar1 = *param_2;
      uVar3 = *param_5;
      *param_2 = *param_3;
      *param_3 = uVar1;
      uVar2 = FUN_00372c50(uVar3,*param_2,*param_1);
      if ((uVar2 & 1) != 0) {
        uVar1 = *param_1;
        *param_1 = *param_2;
        *param_2 = uVar1;
      }
    }
  }
  return;
}


// ===== 003730e4  FUN_003730e4 =====

bool FUN_003730e4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  
  uVar6 = (long)param_2 - (long)param_1 >> 2;
  if ((long)uVar6 < 3) {
    if (uVar6 < 2) {
      return true;
    }
    if (uVar6 == 2) {
      uVar6 = FUN_00372c50(*param_3,*(undefined4 *)((long)param_2 + -4),*(undefined4 *)param_1);
      if ((uVar6 & 1) == 0) {
        return true;
      }
      uVar3 = *(undefined4 *)param_1;
      *(undefined4 *)param_1 = *(undefined4 *)((long)param_2 + -4);
      *(undefined4 *)((long)param_2 + -4) = uVar3;
      return true;
    }
  }
  else {
    if (uVar6 == 3) {
      FUN_00372f4c(param_1,(undefined4 *)((long)param_1 + 4),(undefined4 *)((long)param_2 + -4),
                   param_3);
      return true;
    }
    if (uVar6 == 4) {
      FUN_00373034(param_1,(undefined4 *)((long)param_1 + 4),param_1 + 1,
                   (undefined4 *)((long)param_2 + -4),param_3);
      return true;
    }
    if (uVar6 == 5) {
      FUN_00373034(param_1,(undefined4 *)((long)param_1 + 4),param_1 + 1,
                   (undefined4 *)((long)param_1 + 0xc),param_3);
      uVar6 = FUN_00372c50(*param_3,*(undefined4 *)((long)param_2 + -4),
                           *(undefined4 *)((long)param_1 + 0xc));
      if ((uVar6 & 1) == 0) {
        return true;
      }
      uVar3 = *(undefined4 *)((long)param_1 + 0xc);
      uVar5 = *param_3;
      *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)((long)param_2 + -4);
      *(undefined4 *)((long)param_2 + -4) = uVar3;
      uVar6 = FUN_00372c50(uVar5,*(undefined4 *)((long)param_1 + 0xc),*(undefined4 *)(param_1 + 1));
      if ((uVar6 & 1) == 0) {
        return true;
      }
      uVar3 = *(undefined4 *)(param_1 + 1);
      uVar2 = *(undefined4 *)((long)param_1 + 0xc);
      uVar5 = *param_3;
      *(undefined4 *)(param_1 + 1) = uVar2;
      *(undefined4 *)((long)param_1 + 0xc) = uVar3;
      uVar6 = FUN_00372c50(uVar5,uVar2,*(undefined4 *)((long)param_1 + 4));
      if ((uVar6 & 1) == 0) {
        return true;
      }
      uVar3 = *(undefined4 *)((long)param_1 + 4);
      uVar2 = *(undefined4 *)(param_1 + 1);
      uVar5 = *param_3;
      *(undefined4 *)((long)param_1 + 4) = uVar2;
      *(undefined4 *)(param_1 + 1) = uVar3;
      uVar6 = FUN_00372c50(uVar5,uVar2,*(undefined4 *)param_1);
      if ((uVar6 & 1) == 0) {
        return true;
      }
      uVar5 = NEON_rev64(*param_1,4);
      *param_1 = uVar5;
      return true;
    }
  }
  FUN_00372f4c(param_1,(undefined4 *)((long)param_1 + 4),param_1 + 1,param_3);
  if ((undefined8 *)((long)param_1 + 0xc) != param_2) {
    lVar9 = 0;
    iVar10 = 0;
    puVar7 = param_1 + 1;
    puVar8 = (undefined8 *)((long)param_1 + 0xc);
    do {
      uVar6 = FUN_00372c50(*param_3,*(undefined4 *)puVar8,*(undefined4 *)puVar7);
      if ((uVar6 & 1) != 0) {
        uVar3 = *(undefined4 *)puVar8;
        lVar4 = lVar9;
        do {
          lVar11 = lVar4;
          *(undefined4 *)((long)param_1 + lVar11 + 0xc) =
               *(undefined4 *)((long)param_1 + lVar11 + 8);
          puVar7 = param_1;
          if (lVar11 == -8) goto LAB_0037323c;
          uVar6 = FUN_00372c50(*param_3,uVar3,*(undefined4 *)((long)param_1 + lVar11 + 4));
          lVar4 = lVar11 + -4;
        } while ((uVar6 & 1) != 0);
        puVar7 = (undefined8 *)((long)param_1 + lVar11 + 8);
LAB_0037323c:
        iVar10 = iVar10 + 1;
        *(undefined4 *)puVar7 = uVar3;
        if (iVar10 == 8) {
          return (undefined8 *)((long)puVar8 + 4) == param_2;
        }
      }
      puVar1 = (undefined8 *)((long)puVar8 + 4);
      lVar9 = lVar9 + 4;
      puVar7 = puVar8;
      puVar8 = puVar1;
    } while (puVar1 != param_2);
  }
  return true;
}


// ===== 003732fc  rive::ArtboardComponentList::updateArtboardsWorldTransform =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::ArtboardComponentList::updateArtboardsWorldTransform() */

void rive::ArtboardComponentList::updateArtboardsWorldTransform(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  long *in_x0;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 in_d1;
  float fVar10;
  float fVar11;
  float local_80;
  float fStack_70;
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar8 = in_x0[0x3d];
  lVar1 = in_x0[0x3e];
  if ((lVar1 - lVar8 != 0) && (uVar6 = (**(code **)(*in_x0 + 0x340))(), (uVar6 & 1) == 0)) {
    plVar7 = (long *)in_x0[6];
    uVar6 = lVar1 - lVar8 >> 3;
    if (plVar7 == (long *)0x0) {
      bVar5 = 1;
    }
    else {
      bVar5 = (**(code **)(*plVar7 + 0x18))(plVar7,0x199);
      bVar5 = bVar5 ^ 1 | in_x0[6] == 0;
    }
    uVar4 = _UNK_0024e5b8;
    uVar3 = _DAT_0024e5b0;
    uVar9 = 0;
    if (uVar6 < 2) {
      uVar6 = 1;
    }
    do {
      plVar7 = (long *)(**(code **)(*in_x0 + 0x248))();
      local_80 = (float)in_d1;
      local_60 = plVar7;
      if (plVar7 != (long *)0x0) {
        if ((bVar5 & 1) == 0) {
          fStack_70 = (float)(**(code **)(*plVar7 + 0x288))(plVar7);
          fVar10 = 0.0;
          fVar11 = 0.0;
          if (*(char *)((long)plVar7 + 0xbe9) == '\0') {
            fVar10 = (float)*(undefined8 *)((long)plVar7 + 0x984) * -(float)plVar7[0x40];
            fVar11 = (float)((ulong)*(undefined8 *)((long)plVar7 + 0x984) >> 0x20) *
                     -(float)((ulong)plVar7[0x40] >> 0x20);
          }
        }
        else {
          fStack_70 = (float)(**(code **)(*plVar7 + 0x298))(plVar7);
          fVar10 = 0.0;
          fVar11 = 0.0;
        }
        lVar8 = FUN_0036b2dc(in_x0 + 0x61,plVar7,&local_60);
        in_d1 = CONCAT44(local_80,fStack_70);
        *(undefined8 *)(lVar8 + 0x20) = uVar4;
        *(undefined8 *)(lVar8 + 0x18) = uVar3;
        *(ulong *)(lVar8 + 0x28) = CONCAT44(local_80 - fVar11,fStack_70 - fVar10);
      }
      uVar9 = uVar9 + 1;
    } while (uVar6 != uVar9);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0037346c  rive::ArtboardComponentList::~ArtboardComponentList =====

/* rive::ArtboardComponentList::~ArtboardComponentList() */

void __thiscall rive::ArtboardComponentList::~ArtboardComponentList(ArtboardComponentList *this)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  void *pvVar4;
  long *plVar5;
  long *plVar6;
  void *pvVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  void *pvVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  puVar2 = PTR_vtable_0067cfc0;
  puVar1 = PTR_vtable_0067cfc0 + 0x3a8;
  *(undefined **)this = PTR_vtable_0067cfc0 + 0x10;
  *(undefined **)(this + 200) = puVar1;
  *(undefined **)(this + 0x178) = puVar2 + 0x3d0;
  *(undefined **)(this + 0x188) = puVar2 + 0x478;
  *(undefined **)(this + 400) = puVar2 + 0x490;
  *(undefined **)(this + 0x198) = puVar2 + 0x4a8;
  *(undefined **)(this + 0x1b8) = puVar2 + 0x500;
  *(undefined **)(this + 0x1c0) = puVar2 + 0x518;
  *(undefined **)(this + 0x1c8) = puVar2 + 0x578;
  clear(this);
  puVar8 = (undefined8 *)*(void **)(this + 0x438);
  while (puVar8 != (undefined8 *)0x0) {
    pvVar7 = (void *)*puVar8;
    FUN_0036c094(puVar8 + 2);
    operator_delete(puVar8);
    puVar8 = (undefined8 *)pvVar7;
  }
  pvVar7 = *(void **)(this + 0x428);
  *(undefined8 *)(this + 0x428) = 0;
  if (pvVar7 != (void *)0x0) {
    operator_delete(pvVar7);
  }
  pvVar7 = *(void **)(this + 0x410);
  if (pvVar7 != (void *)0x0) {
    *(void **)(this + 0x418) = pvVar7;
    operator_delete(pvVar7);
  }
  puVar8 = (undefined8 *)*(void **)(this + 0x3f0);
  while (puVar8 != (undefined8 *)0x0) {
    plVar6 = (long *)puVar8[3];
    pvVar7 = (void *)*puVar8;
    if (plVar6 != (long *)0x0) {
      plVar11 = (long *)puVar8[4];
      plVar5 = plVar6;
      if (plVar11 != plVar6) {
        do {
          plVar11 = plVar11 + -1;
          plVar5 = (long *)*plVar11;
          *plVar11 = 0;
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 8))();
          }
        } while (plVar11 != plVar6);
        plVar5 = (long *)puVar8[3];
      }
      puVar8[4] = plVar6;
      operator_delete(plVar5);
    }
    plVar6 = (long *)puVar8[2];
    if ((plVar6 != (long *)0x0) &&
       (iVar3 = FUN_00340fe0(0xffffffff,(long)plVar6 + 0x14), iVar3 == 1)) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    operator_delete(puVar8);
    puVar8 = (undefined8 *)pvVar7;
  }
  pvVar7 = *(void **)(this + 0x3e0);
  *(undefined8 *)(this + 0x3e0) = 0;
  if (pvVar7 != (void *)0x0) {
    operator_delete(pvVar7);
  }
  puVar8 = (undefined8 *)*(void **)(this + 0x3c8);
  while (puVar8 != (undefined8 *)0x0) {
    pvVar7 = (void *)*puVar8;
    operator_delete(puVar8);
    puVar8 = (undefined8 *)pvVar7;
  }
  pvVar7 = *(void **)(this + 0x3b8);
  *(undefined8 *)(this + 0x3b8) = 0;
  if (pvVar7 != (void *)0x0) {
    operator_delete(pvVar7);
  }
  puVar8 = (undefined8 *)*(void **)(this + 0x3a0);
  while (puVar8 != (undefined8 *)0x0) {
    pvVar7 = (void *)*puVar8;
    operator_delete(puVar8);
    puVar8 = (undefined8 *)pvVar7;
  }
  pvVar7 = *(void **)(this + 0x390);
  *(undefined8 *)(this + 0x390) = 0;
  if (pvVar7 != (void *)0x0) {
    operator_delete(pvVar7);
  }
  pvVar7 = *(void **)(this + 0x368);
  if (pvVar7 != (void *)0x0) {
    *(void **)(this + 0x370) = pvVar7;
    operator_delete(pvVar7);
  }
  pvVar7 = *(void **)(this + 0x348);
  if (pvVar7 != (void *)0x0) {
    *(void **)(this + 0x350) = pvVar7;
    operator_delete(pvVar7);
  }
  pvVar7 = *(void **)(this + 0x330);
  if (pvVar7 != (void *)0x0) {
    *(void **)(this + 0x338) = pvVar7;
    operator_delete(pvVar7);
  }
  puVar8 = (undefined8 *)*(void **)(this + 0x318);
  while (puVar8 != (undefined8 *)0x0) {
    pvVar7 = (void *)*puVar8;
    operator_delete(puVar8);
    puVar8 = (undefined8 *)pvVar7;
  }
  pvVar7 = *(void **)(this + 0x308);
  *(undefined8 *)(this + 0x308) = 0;
  if (pvVar7 != (void *)0x0) {
    operator_delete(pvVar7);
  }
  puVar8 = (undefined8 *)*(void **)(this + 0x2f0);
  while (puVar8 != (undefined8 *)0x0) {
    pvVar7 = (void *)puVar8[3];
    pvVar10 = (void *)*puVar8;
    puVar8[3] = 0;
    if (pvVar7 != (void *)0x0) {
      puVar12 = *(undefined8 **)((long)pvVar7 + 0xc0);
      if (puVar12 != (undefined8 *)0x0) {
        puVar13 = *(undefined8 **)((long)pvVar7 + 200);
        puVar9 = puVar12;
        if (puVar13 != puVar12) {
          do {
            puVar13 = puVar13 + -1;
            puVar9 = (undefined8 *)*puVar13;
            *puVar13 = 0;
            if (puVar9 != (undefined8 *)0x0) {
              pvVar4 = (void *)*puVar9;
              if (pvVar4 != (void *)0x0) {
                puVar9[1] = pvVar4;
                operator_delete(pvVar4);
              }
              operator_delete(puVar9);
            }
          } while (puVar13 != puVar12);
          puVar9 = *(undefined8 **)((long)pvVar7 + 0xc0);
        }
        *(undefined8 **)((long)pvVar7 + 200) = puVar12;
        operator_delete(puVar9);
      }
      pvVar4 = *(void **)((long)pvVar7 + 0xa8);
      if (pvVar4 != (void *)0x0) {
        *(void **)((long)pvVar7 + 0xb0) = pvVar4;
        operator_delete(pvVar4);
      }
      (**(code **)(**(long **)((long)pvVar7 + 0x68) + 8))();
      pvVar4 = *(void **)((long)pvVar7 + 0x48);
      if (pvVar4 != (void *)0x0) {
        *(void **)((long)pvVar7 + 0x50) = pvVar4;
        operator_delete(pvVar4);
      }
      (**(code **)(**(long **)((long)pvVar7 + 8) + 8))();
      operator_delete(pvVar7);
    }
    operator_delete(puVar8);
    puVar8 = (undefined8 *)pvVar10;
  }
  pvVar7 = *(void **)(this + 0x2e0);
  *(undefined8 *)(this + 0x2e0) = 0;
  if (pvVar7 != (void *)0x0) {
    operator_delete(pvVar7);
  }
  puVar8 = (undefined8 *)*(void **)(this + 0x2c8);
  while (puVar8 != (undefined8 *)0x0) {
    plVar6 = (long *)puVar8[3];
    pvVar7 = (void *)*puVar8;
    if (plVar6 != (long *)0x0) {
      plVar11 = (long *)puVar8[4];
      plVar5 = plVar6;
      if (plVar11 != plVar6) {
        do {
          plVar11 = plVar11 + -1;
          plVar5 = (long *)*plVar11;
          *plVar11 = 0;
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 8))();
          }
        } while (plVar11 != plVar6);
        plVar5 = (long *)puVar8[3];
      }
      puVar8[4] = plVar6;
      operator_delete(plVar5);
    }
    operator_delete(puVar8);
    puVar8 = (undefined8 *)pvVar7;
  }
  pvVar7 = *(void **)(this + 0x2b8);
  *(undefined8 *)(this + 0x2b8) = 0;
  if (pvVar7 != (void *)0x0) {
    operator_delete(pvVar7);
  }
  puVar8 = (undefined8 *)*(void **)(this + 0x2a0);
  while (puVar8 != (undefined8 *)0x0) {
    plVar6 = (long *)puVar8[3];
    pvVar7 = (void *)*puVar8;
    if (plVar6 != (long *)0x0) {
      plVar11 = (long *)puVar8[4];
      plVar5 = plVar6;
      if (plVar11 != plVar6) {
        do {
          plVar11 = plVar11 + -1;
          plVar5 = (long *)*plVar11;
          *plVar11 = 0;
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 8))();
          }
        } while (plVar11 != plVar6);
        plVar5 = (long *)puVar8[3];
      }
      puVar8[4] = plVar6;
      operator_delete(plVar5);
    }
    operator_delete(puVar8);
    puVar8 = (undefined8 *)pvVar7;
  }
  pvVar7 = *(void **)(this + 0x290);
  *(undefined8 *)(this + 0x290) = 0;
  if (pvVar7 != (void *)0x0) {
    operator_delete(pvVar7);
  }
  puVar8 = (undefined8 *)*(void **)(this + 0x278);
  while (puVar8 != (undefined8 *)0x0) {
    plVar6 = (long *)puVar8[3];
    pvVar7 = (void *)*puVar8;
    puVar8[3] = 0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    plVar6 = (long *)puVar8[2];
    if ((plVar6 != (long *)0x0) &&
       (iVar3 = FUN_00340fe0(0xffffffff,(long)plVar6 + 0x14), iVar3 == 1)) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    operator_delete(puVar8);
    puVar8 = (undefined8 *)pvVar7;
  }
  pvVar7 = *(void **)(this + 0x268);
  *(undefined8 *)(this + 0x268) = 0;
  if (pvVar7 != (void *)0x0) {
    operator_delete(pvVar7);
  }
  puVar8 = (undefined8 *)*(void **)(this + 0x250);
  while (puVar8 != (undefined8 *)0x0) {
    plVar6 = (long *)puVar8[3];
    pvVar7 = (void *)*puVar8;
    puVar8[3] = 0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    plVar6 = (long *)puVar8[2];
    if ((plVar6 != (long *)0x0) &&
       (iVar3 = FUN_00340fe0(0xffffffff,(long)plVar6 + 0x14), iVar3 == 1)) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    operator_delete(puVar8);
    puVar8 = (undefined8 *)pvVar7;
  }
  pvVar7 = *(void **)(this + 0x240);
  *(undefined8 *)(this + 0x240) = 0;
  if (pvVar7 != (void *)0x0) {
    operator_delete(pvVar7);
  }
  puVar8 = (undefined8 *)*(void **)(this + 0x228);
  while (puVar8 != (undefined8 *)0x0) {
    pvVar7 = (void *)*puVar8;
    operator_delete(puVar8);
    puVar8 = (undefined8 *)pvVar7;
  }
  pvVar7 = *(void **)(this + 0x218);
  *(undefined8 *)(this + 0x218) = 0;
  if (pvVar7 != (void *)0x0) {
    operator_delete(pvVar7);
  }
  puVar8 = *(undefined8 **)(this + 0x200);
  if (puVar8 != (undefined8 *)0x0) {
    puVar9 = *(undefined8 **)(this + 0x208);
    puVar12 = puVar8;
    if (puVar9 != puVar8) {
      do {
        puVar9 = puVar9 + -1;
        plVar6 = (long *)*puVar9;
        if ((plVar6 != (long *)0x0) &&
           (iVar3 = FUN_00340fe0(0xffffffff,(long)plVar6 + 0x14), iVar3 == 1)) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
      } while (puVar9 != puVar8);
      puVar12 = *(undefined8 **)(this + 0x200);
    }
    *(undefined8 **)(this + 0x208) = puVar8;
    operator_delete(puVar12);
  }
  puVar8 = *(undefined8 **)(this + 0x1e8);
  if (puVar8 != (undefined8 *)0x0) {
    puVar9 = *(undefined8 **)(this + 0x1f0);
    puVar12 = puVar8;
    if (puVar9 != puVar8) {
      do {
        puVar9 = puVar9 + -1;
        plVar6 = (long *)*puVar9;
        if ((plVar6 != (long *)0x0) &&
           (iVar3 = FUN_00340fe0(0xffffffff,(long)plVar6 + 0x14), iVar3 == 1)) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
      } while (puVar9 != puVar8);
      puVar12 = *(undefined8 **)(this + 0x1e8);
    }
    *(undefined8 **)(this + 0x1f0) = puVar8;
    operator_delete(puVar12);
  }
  pvVar7 = *(void **)(this + 0x1d0);
  *(undefined ***)(this + 0x1c8) = &PTR___cxa_pure_virtual_00654150;
  if (pvVar7 != (void *)0x0) {
    *(void **)(this + 0x1d8) = pvVar7;
    operator_delete(pvVar7);
  }
  pvVar7 = *(void **)(this + 0x1a0);
  *(undefined ***)(this + 0x198) = &PTR___cxa_pure_virtual_006687d0;
  if (pvVar7 != (void *)0x0) {
    *(void **)(this + 0x1a8) = pvVar7;
    operator_delete(pvVar7);
  }
  if (*(long **)(this + 0x180) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x180) + 8))();
  }
  FUN_0035e448(this);
  return;
}


// ===== 00373a6c  FUN_00373a6c =====

undefined8 FUN_00373a6c(void)

{
  return 0;
}


// ===== 00373a74  FUN_00373a74 =====

void FUN_00373a74(void)

{
  return;
}


// ===== 00373a78  FUN_00373a78 =====

void FUN_00373a78(void)

{
  return;
}


// ===== 00373a7c  FUN_00373a7c =====

undefined8 FUN_00373a7c(void)

{
  return 0;
}


// ===== 00373a84  rive::ArtboardComponentList::clearDrawIndexListeners =====

/* rive::ArtboardComponentList::clearDrawIndexListeners() */

void __thiscall rive::ArtboardComponentList::clearDrawIndexListeners(ArtboardComponentList *this)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  
  if (*(long *)(this + 0x440) != 0) {
    puVar1 = (undefined8 *)*(void **)(this + 0x438);
    while (puVar1 != (undefined8 *)0x0) {
      pvVar4 = (void *)*puVar1;
      FUN_0036c094(puVar1 + 2);
      operator_delete(puVar1);
      puVar1 = (undefined8 *)pvVar4;
    }
    lVar2 = *(long *)(this + 0x430);
    *(undefined8 *)(this + 0x438) = 0;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x428) + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    *(undefined8 *)(this + 0x440) = 0;
  }
  return;
}


// ===== 00373afc  rive::ArtboardComponentList::invalidateOrderedListIndicesCache =====

/* rive::ArtboardComponentList::invalidateOrderedListIndicesCache() */

void __thiscall
rive::ArtboardComponentList::invalidateOrderedListIndicesCache(ArtboardComponentList *this)

{
  this[0x40b] = (ArtboardComponentList)0x0;
  return;
}


// ===== 00373b04  rive::ArtboardComponentList::listItem =====

/* rive::ArtboardComponentList::listItem(int) */

void rive::ArtboardComponentList::listItem(int param_1)

{
  int in_w1;
  long *in_x8;
  long lVar1;
  
  lVar1 = *(long *)((ulong)(uint)param_1 + 0x1e8);
  if ((ulong)(long)in_w1 < (ulong)(*(long *)((ulong)(uint)param_1 + 0x1f0) - lVar1 >> 3)) {
    lVar1 = *(long *)(lVar1 + (long)in_w1 * 8);
    if (lVar1 != 0) {
      FUN_00340fb0(1,lVar1 + 0x14);
    }
  }
  else {
    lVar1 = 0;
  }
  *in_x8 = lVar1;
  return;
}


// ===== 00373b58  rive::ArtboardComponentList::indexOfArtboardInstance =====

/* rive::ArtboardComponentList::indexOfArtboardInstance(rive::ArtboardInstance*) const */

ulong __thiscall
rive::ArtboardComponentList::indexOfArtboardInstance
          (ArtboardComponentList *this,ArtboardInstance *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined2 uVar12;
  undefined8 uVar13;
  
  if (param_1 != (ArtboardInstance *)0x0) {
    lVar1 = *(long *)(this + 0x1f0) - *(long *)(this + 0x1e8);
    if (lVar1 != 0) {
      uVar6 = *(ulong *)(this + 0x248);
      uVar8 = lVar1 >> 3;
      uVar3 = 0;
      if (uVar8 < 2) {
        uVar8 = 1;
      }
      uVar13 = NEON_cnt(uVar6,1);
      uVar12 = NEON_uaddlv(uVar13,1);
      uVar7 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
      do {
        if (uVar6 != 0) {
          uVar9 = *(ulong *)(*(long *)(this + 0x1e8) + uVar3 * 8);
          uVar10 = ((ulong)(uint)((int)uVar9 << 3) + 8 ^ uVar9 >> 0x20) * -0x622015f714c7d297;
          uVar10 = (uVar9 >> 0x20 ^ uVar10 >> 0x2f ^ uVar10) * -0x622015f714c7d297;
          uVar10 = (uVar10 ^ uVar10 >> 0x2f) * -0x622015f714c7d297;
          if (uVar7 < 2) {
            uVar11 = uVar10 & uVar6 - 1;
          }
          else {
            uVar11 = uVar10;
            if (uVar6 <= uVar10) {
              uVar11 = 0;
              if (uVar6 != 0) {
                uVar11 = uVar10 / uVar6;
              }
              uVar11 = uVar10 - uVar11 * uVar6;
            }
          }
          plVar4 = *(long **)(*(long *)(this + 0x240) + uVar11 * 8);
          if (plVar4 != (long *)0x0) {
            do {
              while( true ) {
                plVar4 = (long *)*plVar4;
                if (plVar4 == (long *)0x0) goto LAB_00373bb8;
                uVar5 = plVar4[1];
                if (uVar10 - uVar5 == 0) break;
                if (uVar7 < 2) {
                  uVar5 = uVar5 & uVar6 - 1;
                }
                else if (uVar6 <= uVar5) {
                  uVar2 = 0;
                  if (uVar6 != 0) {
                    uVar2 = uVar5 / uVar6;
                  }
                  uVar5 = uVar5 - uVar2 * uVar6;
                }
                if (uVar5 != uVar11) goto LAB_00373bb8;
              }
            } while (plVar4[2] != uVar9);
            if ((ArtboardInstance *)plVar4[3] == param_1) {
              return uVar3;
            }
          }
        }
LAB_00373bb8:
        uVar3 = uVar3 + 1;
      } while (uVar3 != uVar8);
    }
  }
  return 0xffffffff;
}


// ===== 00373c78  rive::ArtboardComponentList::mainAxisIsRow =====

/* rive::ArtboardComponentList::mainAxisIsRow() */

bool __thiscall rive::ArtboardComponentList::mainAxisIsRow(ArtboardComponentList *this)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  plVar2 = *(long **)(this + 0x30);
  if (plVar2 == (long *)0x0) {
    bVar1 = true;
  }
  else {
    uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,0x199);
    bVar1 = true;
    if ((((uVar3 & 1) != 0) && (*(long *)(this + 0x30) != 0)) &&
       (lVar4 = *(long *)(*(long *)(this + 0x30) + 0x1e8), lVar4 != 0)) {
      bVar1 = (*(uint *)(lVar4 + 0x11c) & 0xfffffffe) == 2;
    }
  }
  return bVar1;
}


// ===== 00373ce0  rive::ArtboardComponentList::disposeListItem =====

/* rive::ArtboardComponentList::disposeListItem(rive::rcp<rive::ViewModelInstanceListItem> const&)
    */

void __thiscall
rive::ArtboardComponentList::disposeListItem(ArtboardComponentList *this,rcp *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = *(long **)param_1;
  if (plVar3 == (long *)0x0) {
    local_40 = (long *)0x0;
    removeArtboard(this,&local_40);
  }
  else {
    FUN_00340fb0(1,(long)plVar3 + 0x14);
    local_40 = plVar3;
    removeArtboard(this,&local_40);
    iVar2 = FUN_00340fe0(0xffffffff,(long)plVar3 + 0x14);
    if (iVar2 == 1) {
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Could not recover jumptable at 0x00373d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 8))(plVar3);
        return;
      }
      goto LAB_00373d9c;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_00373d9c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00373da0  rive::ArtboardComponentList::createArtboard =====

/* rive::ArtboardComponentList::createArtboard(rive::Component*,
   rive::rcp<rive::ViewModelInstanceListItem>) const */

void rive::ArtboardComponentList::createArtboard
               (undefined8 *param_1_00,ArtboardComponentList *param_1,undefined8 param_3,
               rcp *param_4)

{
  long lVar1;
  
  lVar1 = findArtboard(param_1,param_4);
  if (lVar1 != 0) {
    FUN_00370c6c(param_1_00,lVar1);
    return;
  }
  *param_1_00 = 0;
  return;
}


// ===== 00373de0  rive::ArtboardComponentList::createStateMachineInstance =====

/* rive::ArtboardComponentList::createStateMachineInstance(rive::Component*,
   rive::ArtboardInstance*) */

void rive::ArtboardComponentList::createStateMachineInstance
               (Component *param_1,ArtboardInstance *param_2)

{
  StateMachineInstance *this;
  ArtboardInstance *in_x2;
  undefined8 *in_x8;
  StateMachine *pSVar1;
  
  if (in_x2 != (ArtboardInstance *)0x0) {
    if ((*(undefined8 **)(in_x2 + 0xaa8) == *(undefined8 **)(in_x2 + 0xaa0)) ||
       (pSVar1 = (StateMachine *)**(undefined8 **)(in_x2 + 0xaa0), pSVar1 == (StateMachine *)0x0)) {
      this = (StateMachineInstance *)0x0;
    }
    else {
      this = (StateMachineInstance *)operator_new(0x378);
      StateMachineInstance::StateMachineInstance(this,pSVar1,in_x2);
    }
    *in_x8 = this;
    linkStateMachineToArtboard((ArtboardComponentList *)param_1,this,in_x2);
    return;
  }
  *in_x8 = 0;
  return;
}


// ===== 00373e6c  rive::ArtboardComponentList::listsAreEqual =====

/* rive::ArtboardComponentList::listsAreEqual(std::__ndk1::vector<rive::rcp<rive::ViewModelInstanceListItem>,
   std::__ndk1::allocator<rive::rcp<rive::ViewModelInstanceListItem> > >*,
   std::__ndk1::vector<rive::rcp<rive::ViewModelInstanceListItem>,
   std::__ndk1::allocator<rive::rcp<rive::ViewModelInstanceListItem> > >*) */

bool __thiscall
rive::ArtboardComponentList::listsAreEqual
          (ArtboardComponentList *this,vector *param_1,vector *param_2)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  
  bVar3 = false;
  if ((param_1 != (vector *)0x0) && (param_2 != (vector *)0x0)) {
    plVar1 = *(long **)param_1;
    plVar2 = *(long **)(param_1 + 8);
    plVar4 = *(long **)param_2;
    if ((long)plVar2 - (long)plVar1 != *(long *)(param_2 + 8) - (long)plVar4) {
      return false;
    }
    if (plVar1 == plVar2) {
      return true;
    }
    do {
      plVar5 = plVar1 + 1;
      bVar3 = *plVar1 == *plVar4;
      if (!bVar3) {
        return bVar3;
      }
      plVar4 = plVar4 + 1;
      plVar1 = plVar5;
    } while (plVar5 != plVar2);
  }
  return bVar3;
}


// ===== 00373ed0  rive::ArtboardComponentList::layoutParent =====

/* rive::ArtboardComponentList::layoutParent() */

long * __thiscall rive::ArtboardComponentList::layoutParent(ArtboardComponentList *this)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = *(long **)(this + 0x30);
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,0x199);
    plVar1 = *(long **)(this + 0x30);
    if ((uVar2 & 1) == 0) {
      plVar1 = (long *)0x0;
    }
  }
  return plVar1;
}


// ===== 00373f10  rive::ArtboardComponentList::syncLayoutChildren =====

/* rive::ArtboardComponentList::syncLayoutChildren() */

void __thiscall rive::ArtboardComponentList::syncLayoutChildren(ArtboardComponentList *this)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = *(long **)(this + 0x30);
  if (((plVar1 != (long *)0x0) &&
      (uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,0x199), (uVar2 & 1) != 0)) &&
     (*(LayoutComponent **)(this + 0x30) != (LayoutComponent *)0x0)) {
    LayoutComponent::syncLayoutChildren(*(LayoutComponent **)(this + 0x30));
    return;
  }
  return;
}


// ===== 00373f5c  rive::ArtboardComponentList::recomputeListUsesDrawIndexSort =====

/* rive::ArtboardComponentList::recomputeListUsesDrawIndexSort() */

void __thiscall
rive::ArtboardComponentList::recomputeListUsesDrawIndexSort(ArtboardComponentList *this)

{
  long *plVar1;
  long *plVar2;
  ArtboardComponentList AVar3;
  long lVar4;
  
  plVar1 = *(long **)(this + 0x1e8);
  AVar3 = this[0x40a];
  this[0x40a] = (ArtboardComponentList)0x0;
  do {
    if (plVar1 == *(long **)(this + 0x1f0)) {
joined_r0x00373f70:
      if (AVar3 != (ArtboardComponentList)0x0) {
        this[0x40b] = (ArtboardComponentList)0x0;
      }
      return;
    }
    if ((*(long *)(*plVar1 + 0x18) != 0) &&
       (lVar4 = *(long *)(*(long *)(*plVar1 + 0x18) + 0x118), lVar4 != 0)) {
      for (plVar2 = *(long **)(lVar4 + 0x30); plVar2 != *(long **)(lVar4 + 0x38);
          plVar2 = plVar2 + 1) {
        if (*(int *)(*plVar2 + 0x28) == 0x10) {
          this[0x40a] = (ArtboardComponentList)0x1;
          goto joined_r0x00373f70;
        }
      }
    }
    plVar1 = plVar1 + 1;
  } while( true );
}


// ===== 00373fd8  rive::ArtboardComponentList::gap =====

/* rive::ArtboardComponentList::gap() */

float __thiscall rive::ArtboardComponentList::gap(ArtboardComponentList *this)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = 0.0;
  plVar1 = *(long **)(this + 0x30);
  if (((plVar1 != (long *)0x0) &&
      (uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,0x199), (uVar2 & 1) != 0)) &&
     (plVar1 = *(long **)(this + 0x30), plVar1 != (long *)0x0)) {
    uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,0x199);
    if ((((uVar2 & 1) == 0) || (*(long *)(this + 0x30) == 0)) ||
       ((lVar3 = *(long *)(*(long *)(this + 0x30) + 0x1e8), lVar3 == 0 ||
        ((*(uint *)(lVar3 + 0x11c) & 0xfffffffe) == 2)))) {
      lVar3 = plVar1[0x3d];
      if (lVar3 == 0) {
        return 0.0;
      }
      fVar5 = *(float *)(lVar3 + 0x88);
      if (*(int *)(lVar3 + 0x188) != 2) {
        return fVar5;
      }
      fVar4 = *(float *)(plVar1 + 0x40);
    }
    else {
      lVar3 = plVar1[0x3d];
      if (lVar3 == 0) {
        return 0.0;
      }
      fVar5 = *(float *)(lVar3 + 0x8c);
      if (*(int *)(lVar3 + 0x18c) != 2) {
        return fVar5;
      }
      fVar4 = *(float *)((long)plVar1 + 0x204);
    }
    fVar4 = (fVar5 / 100.0) * fVar4;
  }
  return fVar4;
}


// ===== 003740b0  rive::ArtboardComponentList::listItemDrawIndex =====

/* rive::ArtboardComponentList::listItemDrawIndex(int) const */

float __thiscall
rive::ArtboardComponentList::listItemDrawIndex(ArtboardComponentList *this,int param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  undefined2 uVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  
  if (param_1 < 0) {
    return 0.0;
  }
  if ((ulong)(*(long *)(this + 0x1f0) - *(long *)(this + 0x1e8) >> 3) <= (ulong)(uint)param_1) {
    return 0.0;
  }
  lVar5 = *(long *)(*(long *)(*(long *)(this + 0x1e8) + (ulong)(uint)param_1 * 8) + 0x18);
  if (lVar5 == 0) {
    return 0.0;
  }
  lVar3 = *(long *)(lVar5 + 0x118);
  if (lVar3 == 0) {
    return 0.0;
  }
  plVar6 = *(long **)(lVar3 + 0x30);
  while( true ) {
    if (plVar6 == *(long **)(lVar3 + 0x38)) {
      return 0.0;
    }
    if (*(int *)(*plVar6 + 0x28) == 0x10) break;
    plVar6 = plVar6 + 1;
  }
  uVar2 = *(ulong *)(lVar5 + 0xf8);
  if (uVar2 == 0) {
    return 0.0;
  }
  uVar13 = NEON_cnt(uVar2,1);
  uVar10 = NEON_uaddlv(uVar13,1);
  uVar4 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar10) & 0xffffffff;
  if (uVar4 < 2) {
    uVar7 = (ulong)((int)uVar2 - 1) & 0x10;
  }
  else {
    uVar7 = 0x10;
    if (uVar2 < 0x11) {
      uVar7 = 0;
      if (uVar2 != 0) {
        uVar7 = 0x10 / uVar2;
      }
      uVar7 = 0x10 - uVar7 * uVar2;
    }
  }
  plVar6 = *(long **)(*(long *)(lVar5 + 0xf0) + uVar7 * 8);
  if (plVar6 == (long *)0x0) {
    return 0.0;
  }
  plVar6 = (long *)*plVar6;
  if (plVar6 == (long *)0x0) {
    return 0.0;
  }
  do {
    uVar8 = plVar6[1];
    if (uVar8 == 0x10) {
      if ((char)plVar6[2] == '\x10') {
        plVar6 = (long *)plVar6[3];
        if (plVar6 == (long *)0x0) {
          return 0.0;
        }
        uVar2 = (**(code **)(*plVar6 + 0x18))(0,plVar6,0x1ba);
        if ((uVar2 & 1) == 0) {
          return 0.0;
        }
        fVar9 = *(float *)(plVar6 + 0x22);
        fVar11 = ABS(fVar9);
        fVar12 = fVar9;
        if (fVar11 >= INFINITY) {
          fVar12 = 0.0;
        }
        if (fVar11 != INFINITY && fVar11 < INFINITY == NAN(fVar11)) {
          return fVar9;
        }
        return fVar12;
      }
    }
    else {
      if (uVar4 < 2) {
        uVar8 = uVar8 & uVar2 - 1;
      }
      else if (uVar2 <= uVar8) {
        uVar1 = 0;
        if (uVar2 != 0) {
          uVar1 = uVar8 / uVar2;
        }
        uVar8 = uVar8 - uVar1 * uVar2;
      }
      if (uVar8 != uVar7) {
        return 0.0;
      }
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) {
      return 0.0;
    }
  } while( true );
}


// ===== 00374210  rive::ArtboardComponentList::removeDrawIndexListenerForItem =====

/* rive::ArtboardComponentList::removeDrawIndexListenerForItem(rive::rcp<rive::ViewModelInstanceListItem>
   const&) */

void __thiscall
rive::ArtboardComponentList::removeDrawIndexListenerForItem
          (ArtboardComponentList *this,rcp *param_1)

{
  FUN_0036daf8(this + 0x428,*(undefined8 *)param_1);
  return;
}


// ===== 0037421c  rive::ArtboardComponentList::orderedListIndices =====

/* rive::ArtboardComponentList::orderedListIndices() */

ArtboardComponentList * __thiscall
rive::ArtboardComponentList::orderedListIndices(ArtboardComponentList *this)

{
  ensureOrderedListIndices(this);
  return this + 0x410;
}


// ===== 00374240  rive::ArtboardComponentList::artboardPosition =====

/* rive::ArtboardComponentList::artboardPosition(rive::ArtboardInstance*) */

void __thiscall
rive::ArtboardComponentList::artboardPosition(ArtboardComponentList *this,ArtboardInstance *param_1)

{
  long lVar1;
  long lVar2;
  ArtboardInstance *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_1;
  lVar2 = FUN_0036b2dc(this + 0x308,param_1,&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined4 *)(lVar2 + 0x28),*(undefined4 *)(lVar2 + 0x2c));
}


// ===== 00374294  rive::ArtboardComponentList::worldToLocal =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::ArtboardComponentList::worldToLocal(rive::Vec2D, rive::Vec2D*, int) */

void rive::ArtboardComponentList::worldToLocal
               (float param_1,float param_2,long *param_3,undefined8 *param_4,undefined4 param_5)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  undefined4 local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar4 = (**(code **)(*param_3 + 0x248))(param_3,param_5);
  if (uVar4 != 0) {
    local_50 = (undefined4)uVar4;
    fStack_4c = (float)(uVar4 >> 0x20);
    lVar5 = FUN_0036b2dc(param_3 + 0x61,uVar4,&local_50);
    uVar6 = *(undefined8 *)(lVar5 + 0x28);
    uVar4 = (**(code **)(*param_3 + 0x340))(param_3);
    plVar1 = (long *)param_3[6];
    if ((uVar4 & 1) == 0) {
      plVar1 = param_3;
    }
    fStack_48 = (float)_UNK_0024e5b8;
    fStack_44 = (float)((ulong)_UNK_0024e5b8 >> 0x20);
    local_50 = (undefined4)_DAT_0024e5b0;
    fStack_4c = (float)((ulong)_DAT_0024e5b0 >> 0x20);
    fVar9 = (float)*(undefined8 *)((long)plVar1 + 0xac);
    fVar10 = (float)((ulong)*(undefined8 *)((long)plVar1 + 0xac) >> 0x20);
    fVar11 = (float)*(undefined8 *)((long)plVar1 + 0xa4);
    fVar12 = (float)((ulong)*(undefined8 *)((long)plVar1 + 0xa4) >> 0x20);
    auVar8._0_4_ = fVar9 * fStack_4c + fVar11 * 1.0;
    auVar8._4_4_ = fVar10 * fStack_4c + fVar12 * 1.0;
    auVar8._8_4_ = fVar9 * fStack_44 + fStack_48 * fVar11;
    auVar8._12_4_ = fVar10 * fStack_44 + fStack_48 * fVar12;
    fVar14 = (float)NEON_fmadd(auVar8._0_4_,auVar8._12_4_,-auVar8._4_4_ * auVar8._8_4_);
    uVar4 = (ulong)(fVar14 != 0.0);
    local_40 = uVar6;
    if (fVar14 != 0.0) {
      fVar15 = (float)((ulong)uVar6 >> 0x20);
      fVar14 = 1.0 / fVar14;
      auVar13 = NEON_ext(auVar8,auVar8,0xc,1);
      fVar9 = (float)*(undefined8 *)((long)plVar1 + 0xb4) + fVar9 * fVar15 + fVar11 * (float)uVar6;
      fVar10 = (float)((ulong)*(undefined8 *)((long)plVar1 + 0xb4) >> 0x20) +
               fVar10 * fVar15 + fVar12 * (float)uVar6;
      auVar7 = NEON_ext(auVar8,auVar8,4,1);
      fVar11 = auVar8._12_4_ * fVar14;
      fVar12 = -auVar8._4_4_ * fVar14;
      uVar6 = NEON_rev64(CONCAT44(fVar10 * -auVar13._4_4_,fVar9 * -auVar13._0_4_),4);
      auVar13._4_4_ = fVar12;
      auVar13._0_4_ = fVar11;
      auVar13._8_4_ = -auVar8._8_4_ * fVar14;
      auVar13._12_4_ = auVar8._0_4_ * fVar14;
      auVar3._4_4_ = fVar12;
      auVar3._0_4_ = fVar11;
      auVar3._8_4_ = -auVar8._8_4_ * fVar14;
      auVar3._12_4_ = auVar8._0_4_ * fVar14;
      auVar8 = NEON_ext(auVar13,auVar3,8,1);
      uVar6 = NEON_rev64(CONCAT44(fVar14 * ((float)((ulong)uVar6 >> 0x20) + fVar10 * auVar7._4_4_),
                                  fVar14 * ((float)uVar6 + fVar9 * auVar7._0_4_)),4);
      *param_4 = CONCAT44((float)((ulong)uVar6 >> 0x20) + auVar8._4_4_ * param_2 + fVar12 * param_1,
                          (float)uVar6 + auVar8._0_4_ * param_2 + fVar11 * param_1);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


// ===== 00374404  rive::ArtboardComponentList::clearArtboardOverride =====

/* WARNING: Removing unreachable block (ram,0x003744e4) */
/* rive::ArtboardComponentList::clearArtboardOverride(rive::ArtboardInstance*) */

void __thiscall
rive::ArtboardComponentList::clearArtboardOverride
          (ArtboardComponentList *this,ArtboardInstance *param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  
  plVar2 = *(long **)(this + 0x90);
  for (plVar1 = *(long **)(this + 0x88); plVar1 != plVar2; plVar1 = plVar1 + 1) {
    uVar3 = (**(code **)(*(long *)*plVar1 + 0x18))((long *)*plVar1,0x25e);
    if ((uVar3 & 1) != 0) {
      lVar8 = *plVar1;
      puVar4 = *(undefined8 **)(lVar8 + 0xb0);
      puVar7 = *(undefined8 **)(lVar8 + 0xa8);
      puVar5 = puVar7;
      for (; (puVar7 != puVar4 && (puVar5 = puVar7, (ArtboardInstance *)*puVar7 != param_1));
          puVar7 = puVar7 + 1) {
        puVar5 = puVar4;
      }
      if ((puVar5 != puVar4) && (puVar7 = puVar5 + 1, puVar6 = puVar5, puVar7 != puVar4)) {
        do {
          puVar5 = puVar6;
          if ((ArtboardInstance *)*puVar7 != param_1) {
            puVar5 = puVar6 + 1;
            *puVar6 = (ArtboardInstance *)*puVar7;
          }
          puVar7 = puVar7 + 1;
          puVar6 = puVar5;
        } while (puVar7 != puVar4);
        puVar4 = *(undefined8 **)(lVar8 + 0xb0);
      }
      if (puVar5 != puVar4) {
        *(undefined8 **)(lVar8 + 0xb0) = puVar5;
      }
    }
  }
  return;
}


// ===== 00374508  rive::ArtboardComponentList::scrollConstraint =====

/* rive::ArtboardComponentList::scrollConstraint() */

undefined8 __thiscall rive::ArtboardComponentList::scrollConstraint(ArtboardComponentList *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  
  puVar1 = *(undefined8 **)(this + 0x1a0);
  puVar2 = *(undefined8 **)(this + 0x1a8);
  while( true ) {
    if (puVar1 == puVar2) {
      return 0;
    }
    plVar6 = (long *)*puVar1;
    plVar3 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6);
    uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,0x209);
    if ((uVar4 & 1) != 0) break;
    puVar1 = puVar1 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00374584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(*plVar6 + 0x10))(plVar6);
  return uVar5;
}


// ===== 00374588  rive::ArtboardComponentList::addMapRule =====

/* rive::ArtboardComponentList::addMapRule(rive::ArtboardListMapRule*) */

void __thiscall
rive::ArtboardComponentList::addMapRule(ArtboardComponentList *this,ArtboardListMapRule *param_1)

{
  ArtboardComponentList *pAVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong unaff_x25;
  undefined2 uVar14;
  undefined8 uVar15;
  float fVar16;
  
  uVar2 = *(undefined4 *)(param_1 + 0x88);
  iVar3 = *(int *)(param_1 + 0x8c);
  uVar12 = *(ulong *)(this + 0x3c0);
  pAVar1 = this + 0x3b8;
  uVar13 = (ulong)iVar3;
  if (uVar12 != 0) {
    uVar15 = NEON_cnt(uVar12,1);
    uVar14 = NEON_uaddlv(uVar15,1);
    uVar9 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff;
    if (uVar9 < 2) {
      unaff_x25 = uVar12 - 1 & uVar13;
    }
    else {
      unaff_x25 = uVar13;
      if (uVar12 <= uVar13) {
        uVar10 = 0;
        if (uVar12 != 0) {
          uVar10 = uVar13 / uVar12;
        }
        unaff_x25 = uVar13 - uVar10 * uVar12;
      }
    }
    puVar8 = *(undefined8 **)(*(long *)pAVar1 + unaff_x25 * 8);
    if ((puVar8 != (undefined8 *)0x0) && (plVar11 = (long *)*puVar8, plVar11 != (long *)0x0)) {
      do {
        uVar10 = plVar11[1];
        if (uVar10 == uVar13) {
          if ((int)plVar11[2] == iVar3) goto LAB_00374814;
        }
        else {
          if (uVar9 < 2) {
            uVar10 = uVar10 & uVar12 - 1;
          }
          else if (uVar12 <= uVar10) {
            uVar4 = 0;
            if (uVar12 != 0) {
              uVar4 = uVar10 / uVar12;
            }
            uVar10 = uVar10 - uVar4 * uVar12;
          }
          if (uVar10 != unaff_x25) break;
        }
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
  }
  plVar11 = (long *)operator_new(0x18);
  lVar5 = *(long *)(this + 0x3d0);
  fVar16 = *(float *)(this + 0x3d8);
  plVar11[1] = uVar13;
  *(int *)(plVar11 + 2) = iVar3;
  *(undefined4 *)((long)plVar11 + 0x14) = 0;
  if ((uVar12 == 0) || (fVar16 * (float)uVar12 < (float)(lVar5 + 1))) {
    if (uVar12 < 3) {
      uVar9 = 1;
    }
    else {
      uVar9 = (ulong)((uVar12 & uVar12 - 1) != 0);
    }
    uVar9 = uVar9 | uVar12 << 1;
    uVar10 = (ulong)((float)(lVar5 + 1) / fVar16);
    if (uVar9 <= uVar10) {
      uVar9 = uVar10;
    }
    if (uVar9 - 1 == 0) {
      uVar9 = 2;
    }
    else if ((uVar9 & uVar9 - 1) != 0) {
      uVar9 = std::__ndk1::__next_prime(uVar9);
      uVar12 = *(ulong *)(this + 0x3c0);
    }
    if (uVar12 < uVar9) {
LAB_003746f4:
      FUN_00374830(pAVar1);
    }
    else if (uVar9 < uVar12) {
      uVar10 = (ulong)((float)*(ulong *)(this + 0x3d0) / *(float *)(this + 0x3d8));
      if (uVar12 < 3) {
LAB_00374758:
        uVar10 = std::__ndk1::__next_prime(uVar10);
      }
      else {
        uVar15 = NEON_cnt(uVar12,1);
        uVar14 = NEON_uaddlv(uVar15,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14)) goto LAB_00374758;
        if (1 < uVar10) {
          uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
        }
      }
      if (uVar9 <= uVar10) {
        uVar9 = uVar10;
      }
      if (uVar9 < uVar12) goto LAB_003746f4;
    }
    uVar12 = *(ulong *)(this + 0x3c0);
    if ((uVar12 & uVar12 - 1) == 0) {
      unaff_x25 = uVar12 - 1 & uVar13;
    }
    else {
      unaff_x25 = uVar13;
      if (uVar12 <= uVar13) {
        uVar9 = 0;
        if (uVar12 != 0) {
          uVar9 = uVar13 / uVar12;
        }
        unaff_x25 = uVar13 - uVar9 * uVar12;
      }
    }
  }
  lVar5 = *(long *)pAVar1;
  plVar6 = *(long **)(lVar5 + unaff_x25 * 8);
  if (plVar6 == (long *)0x0) {
    lVar7 = *(long *)(this + 0x3c8);
    *(long **)(this + 0x3c8) = plVar11;
    *plVar11 = lVar7;
    *(ArtboardComponentList **)(lVar5 + unaff_x25 * 8) = this + 0x3c8;
    if (lVar7 == 0) goto LAB_00374808;
    uVar13 = *(ulong *)(lVar7 + 8);
    if ((uVar12 & uVar12 - 1) == 0) {
      uVar13 = uVar13 & uVar12 - 1;
    }
    else if (uVar12 <= uVar13) {
      uVar9 = 0;
      if (uVar12 != 0) {
        uVar9 = uVar13 / uVar12;
      }
      uVar13 = uVar13 - uVar9 * uVar12;
    }
    plVar6 = (long *)(*(long *)pAVar1 + uVar13 * 8);
  }
  else {
    *plVar11 = *plVar6;
  }
  *plVar6 = (long)plVar11;
LAB_00374808:
  *(long *)(this + 0x3d0) = *(long *)(this + 0x3d0) + 1;
LAB_00374814:
  *(undefined4 *)((long)plVar11 + 0x14) = uVar2;
  return;
}


// ===== 00374830  FUN_00374830 =====

void FUN_00374830(long *param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  if (param_2 == 0) {
    pvVar2 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00324008();
    }
    pvVar2 = operator_new(param_2 << 3);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)pvVar2;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    uVar4 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      uVar4 = plVar5[1];
      uVar10 = NEON_cnt(param_2,1);
      uVar9 = NEON_uaddlv(uVar10,1);
      uVar6 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
      if (uVar6 < 2) {
        uVar4 = uVar4 & param_2 - 1;
      }
      else if (param_2 <= uVar4) {
        uVar8 = 0;
        if (param_2 != 0) {
          uVar8 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar8 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      plVar7 = (long *)*plVar5;
      if (plVar7 != (long *)0x0) {
        do {
          uVar8 = plVar7[1];
          if (uVar6 < 2) {
            uVar8 = uVar8 & param_2 - 1;
          }
          else if (param_2 <= uVar8) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar1 * param_2;
          }
          if (uVar8 != uVar4) {
            if (*(long *)(*param_1 + uVar8 * 8) == 0) {
              *(long **)(*param_1 + uVar8 * 8) = plVar5;
              uVar4 = uVar8;
            }
            else {
              *plVar5 = *plVar7;
              *plVar7 = **(long **)(*param_1 + uVar8 * 8);
              **(undefined8 **)(*param_1 + uVar8 * 8) = plVar7;
              plVar7 = plVar5;
            }
          }
          plVar5 = plVar7;
          plVar7 = (long *)*plVar5;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  return;
}


// ===== 0037498c  rive::PropertyRecorder::PropertyRecorder =====

/* rive::PropertyRecorder::PropertyRecorder() */

void __thiscall rive::PropertyRecorder::PropertyRecorder(PropertyRecorder *this)

{
  PropertyRecorder *pPVar1;
  PropertyRecorder *pPVar2;
  
  pPVar2 = this + 0x48;
  *(undefined ***)this = &PTR_FUN_00654190;
  *(PropertyRecorder **)(this + 8) = this;
  *(undefined8 *)(this + 0x20) = 0;
  *(PropertyRecorder **)(this + 0x10) = pPVar2;
  *(long *)(this + 0x18) = *(long *)(this + 0x50) - *(long *)pPVar2;
  BinaryDataReader::BinaryDataReader((BinaryDataReader *)(this + 0x28),(uchar *)0x0,0);
  *(undefined8 *)(this + 0x50) = 0;
  pPVar1 = this + 0xa8;
  *(undefined8 *)pPVar2 = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined ***)(this + 0x60) = &PTR_FUN_00654190;
  *(PropertyRecorder **)(this + 0x68) = this + 0x60;
  *(PropertyRecorder **)(this + 0x70) = pPVar1;
  *(long *)(this + 0x78) = *(long *)(this + 0xb0) - *(long *)pPVar1;
  *(undefined8 *)(this + 0x80) = 0;
  BinaryDataReader::BinaryDataReader((BinaryDataReader *)(this + 0x88),(uchar *)0x0,0);
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)pPVar1 = 0;
  return;
}


// ===== 00374a28  rive::PropertyRecorder::writeObjectId =====

/* rive::PropertyRecorder::writeObjectId(unsigned int, rive::VectorBinaryWriter&) */

void __thiscall
rive::PropertyRecorder::writeObjectId
          (PropertyRecorder *this,uint param_1,VectorBinaryWriter *param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  byte local_38 [16];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  uVar4 = 0;
  do {
    uVar2 = uVar4 + 1;
    local_38[uVar4] = (byte)param_1 & 0x7f | (0x7f < param_1) << 7;
    bVar1 = 0x7f < param_1;
    uVar4 = uVar2;
    param_1 = param_1 >> 7;
  } while (bVar1);
  (**(code **)**(undefined8 **)(param_2 + 8))
            (*(undefined8 **)(param_2 + 8),local_38,uVar2 & 0xffffffff);
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00374aac  rive::PropertyRecorder::writeTotalProperties =====

/* rive::PropertyRecorder::writeTotalProperties(unsigned int, rive::VectorBinaryWriter&) */

void __thiscall
rive::PropertyRecorder::writeTotalProperties
          (PropertyRecorder *this,uint param_1,VectorBinaryWriter *param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  byte local_38 [16];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  uVar4 = 0;
  do {
    uVar2 = uVar4 + 1;
    local_38[uVar4] = (byte)param_1 & 0x7f | (0x7f < param_1) << 7;
    bVar1 = 0x7f < param_1;
    uVar4 = uVar2;
    param_1 = param_1 >> 7;
  } while (bVar1);
  (**(code **)**(undefined8 **)(param_2 + 8))
            (*(undefined8 **)(param_2 + 8),local_38,uVar2 & 0xffffffff);
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00374b30  rive::PropertyRecorder::writePropertyKey =====

/* rive::PropertyRecorder::writePropertyKey(unsigned int, rive::VectorBinaryWriter&) */

void __thiscall
rive::PropertyRecorder::writePropertyKey
          (PropertyRecorder *this,uint param_1,VectorBinaryWriter *param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  byte local_38 [16];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  uVar4 = 0;
  do {
    uVar2 = uVar4 + 1;
    local_38[uVar4] = (byte)param_1 & 0x7f | (0x7f < param_1) << 7;
    bVar1 = 0x7f < param_1;
    uVar4 = uVar2;
    param_1 = param_1 >> 7;
  } while (bVar1);
  (**(code **)**(undefined8 **)(param_2 + 8))
            (*(undefined8 **)(param_2 + 8),local_38,uVar2 & 0xffffffff);
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00374bb4  rive::PropertyRecorder::writePropertyValue =====

/* rive::PropertyRecorder::writePropertyValue(float, rive::VectorBinaryWriter&) */

void __thiscall
rive::PropertyRecorder::writePropertyValue
          (PropertyRecorder *this,float param_1,VectorBinaryWriter *param_2)

{
  long lVar1;
  float local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = param_1;
  (**(code **)**(undefined8 **)(param_2 + 8))(*(undefined8 **)(param_2 + 8),&local_2c,4);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00374c10  rive::PropertyRecorder::writePropertyValue =====

/* rive::PropertyRecorder::writePropertyValue(int, rive::VectorBinaryWriter&) */

void __thiscall
rive::PropertyRecorder::writePropertyValue
          (PropertyRecorder *this,int param_1,VectorBinaryWriter *param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  byte local_38 [16];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  uVar4 = 0;
  do {
    uVar2 = uVar4 + 1;
    local_38[uVar4] = (byte)param_1 & 0x7f | (0x7fU < (uint)param_1) << 7;
    bVar1 = 0x7f < (uint)param_1;
    uVar4 = uVar2;
    param_1 = (uint)param_1 >> 7;
  } while (bVar1);
  (**(code **)**(undefined8 **)(param_2 + 8))
            (*(undefined8 **)(param_2 + 8),local_38,uVar2 & 0xffffffff);
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00374c94  rive::PropertyRecorder::writePropertyValue =====

/* rive::PropertyRecorder::writePropertyValue(unsigned int, rive::VectorBinaryWriter&) */

void __thiscall
rive::PropertyRecorder::writePropertyValue
          (PropertyRecorder *this,uint param_1,VectorBinaryWriter *param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  byte local_38 [16];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  uVar4 = 0;
  do {
    uVar2 = uVar4 + 1;
    local_38[uVar4] = (byte)param_1 & 0x7f | (0x7f < param_1) << 7;
    bVar1 = 0x7f < param_1;
    uVar4 = uVar2;
    param_1 = param_1 >> 7;
  } while (bVar1);
  (**(code **)**(undefined8 **)(param_2 + 8))
            (*(undefined8 **)(param_2 + 8),local_38,uVar2 & 0xffffffff);
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00374d18  rive::PropertyRecorder::writePropertyValue =====

/* rive::PropertyRecorder::writePropertyValue(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, rive::VectorBinaryWriter&) */

void __thiscall
rive::PropertyRecorder::writePropertyValue(undefined8 param_1,ulong *param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  byte local_48 [16];
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  if ((*param_2 & 1) == 0) {
    uStack_58 = param_2[1];
    local_60 = *param_2;
    local_50 = (void *)param_2[2];
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_60,(char *)param_2[2],param_2[1]);
  }
  uVar6 = 0;
  uVar7 = local_60 >> 1 & 0x7f;
  uVar3 = uVar7;
  if ((local_60 & 1) != 0) {
    uVar7 = uStack_58;
    uVar3 = uStack_58;
  }
  do {
    uVar2 = uVar6 + 1;
    local_48[uVar6] = (byte)uVar7 & 0x7f | (0x7f < uVar7) << 7;
    bVar1 = 0x7f < uVar7;
    uVar6 = uVar2;
    uVar7 = uVar7 >> 7;
  } while (bVar1);
  (**(code **)**(undefined8 **)(param_3 + 8))
            (*(undefined8 **)(param_3 + 8),local_48,uVar2 & 0xffffffff);
  if (uVar3 != 0) {
    pvVar4 = (void *)((ulong)&local_60 | 1);
    if ((local_60 & 1) != 0) {
      pvVar4 = local_50;
    }
    (**(code **)**(undefined8 **)(param_3 + 8))(*(undefined8 **)(param_3 + 8),pvVar4,uVar3);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar5 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00374e2c  rive::PropertyRecorder::writePropertyValue =====

/* rive::PropertyRecorder::writePropertyValue(bool, rive::VectorBinaryWriter&) */

void __thiscall
rive::PropertyRecorder::writePropertyValue
          (PropertyRecorder *this,bool param_1,VectorBinaryWriter *param_2)

{
  long lVar1;
  undefined1 local_2c [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c[0] = param_1;
  (**(code **)**(undefined8 **)(param_2 + 8))(*(undefined8 **)(param_2 + 8),local_2c,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00374e88  rive::PropertyRecorder::clear =====

/* rive::PropertyRecorder::clear() */

void __thiscall rive::PropertyRecorder::clear(PropertyRecorder *this)

{
  *(undefined8 *)(this + 0x20) = 0;
  return;
}


// ===== 00374e90  rive::PropertyRecorder::complete =====

/* rive::PropertyRecorder::complete(rive::VectorBinaryWriter&, rive::BinaryDataReader&,
   std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >&) */

void __thiscall
rive::PropertyRecorder::complete
          (PropertyRecorder *this,VectorBinaryWriter *param_1,BinaryDataReader *param_2,
          vector *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)param_3;
  lVar2 = *(long *)(param_1 + 0x20);
  *(long *)(param_2 + 0x18) = lVar2;
  *(long *)param_2 = lVar1;
  *(long *)(param_2 + 8) = lVar1 + lVar2;
  return;
}


// ===== 00374ea8  rive::PropertyRecorder::recordArtboard =====

/* rive::PropertyRecorder::recordArtboard(rive::Artboard const*) */

void __thiscall rive::PropertyRecorder::recordArtboard(PropertyRecorder *this,Artboard *param_1)

{
  long lVar1;
  long lVar2;
  StateMachineInput *pSVar3;
  StateMachineLayer *pSVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  if ((*(long **)(param_1 + 0xaa8) == *(long **)(param_1 + 0xaa0)) ||
     (lVar6 = **(long **)(param_1 + 0xaa0), lVar6 == 0)) {
    *(long *)(this + 0xa0) = *(long *)(this + 0x80);
    *(long *)(this + 0x88) = *(long *)(this + 0xa8);
    *(long *)(this + 0x90) = *(long *)(this + 0xa8) + *(long *)(this + 0x80);
  }
  else {
    lVar2 = *(long *)(lVar6 + 0x48) - *(long *)(lVar6 + 0x40);
    if (lVar2 != 0) {
      uVar5 = lVar2 >> 3;
      uVar7 = 0;
      if (uVar5 < 2) {
        uVar5 = 1;
      }
      do {
        if (uVar7 < (ulong)(*(long *)(lVar6 + 0x48) - *(long *)(lVar6 + 0x40) >> 3)) {
          pSVar3 = *(StateMachineInput **)(*(long *)(lVar6 + 0x40) + uVar7 * 8);
        }
        else {
          pSVar3 = (StateMachineInput *)0x0;
        }
        recordStateMachineInput(this,pSVar3);
        uVar7 = uVar7 + 1;
      } while (uVar5 != uVar7);
    }
    lVar2 = *(long *)(lVar6 + 0x28);
    lVar1 = *(long *)(lVar6 + 0x30);
    *(long *)(this + 0xa0) = *(long *)(this + 0x80);
    *(long *)(this + 0x88) = *(long *)(this + 0xa8);
    *(long *)(this + 0x90) = *(long *)(this + 0xa8) + *(long *)(this + 0x80);
    lVar1 = lVar1 - lVar2;
    if (lVar1 != 0) {
      uVar5 = lVar1 >> 3;
      uVar7 = 0;
      if (uVar5 < 2) {
        uVar5 = 1;
      }
      do {
        if (uVar7 < (ulong)(*(long *)(lVar6 + 0x30) - *(long *)(lVar6 + 0x28) >> 3)) {
          pSVar4 = *(StateMachineLayer **)(*(long *)(lVar6 + 0x28) + uVar7 * 8);
        }
        else {
          pSVar4 = (StateMachineLayer *)0x0;
        }
        recordStateMachineLayer(this,pSVar4);
        uVar7 = uVar7 + 1;
      } while (uVar5 != uVar7);
    }
  }
  recordDataBinds(this,param_1);
  writeProperties(this,param_1);
  *(long *)(this + 0x28) = *(long *)(this + 0x48);
  *(long *)(this + 0x30) = *(long *)(this + 0x48) + *(long *)(this + 0x20);
  *(long *)(this + 0x40) = *(long *)(this + 0x20);
  return;
}


// ===== 00374fe4  rive::PropertyRecorder::recordStateMachineInput =====

/* rive::PropertyRecorder::recordStateMachineInput(rive::StateMachineInput const*) */

void __thiscall
rive::PropertyRecorder::recordStateMachineInput(PropertyRecorder *this,StateMachineInput *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  StateMachineInput SVar5;
  uint local_48 [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 != (StateMachineInput *)0x0) {
    uVar2 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x38);
    if ((uVar2 & 1) == 0) {
      uVar2 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x3b);
      if ((uVar2 & 1) == 0) {
        uVar2 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x3a);
        if ((uVar2 & 1) == 0) goto LAB_003750d4;
        SVar5 = (StateMachineInput)0x2;
      }
      else {
        local_48[0] = CONCAT31(local_48[0]._1_3_,1);
        (**(code **)**(undefined8 **)(this + 0x68))(*(undefined8 **)(this + 0x68),local_48,1);
        SVar5 = param_1[0x28];
      }
      puVar3 = *(undefined8 **)(this + 0x68);
      local_48[0] = CONCAT31(local_48[0]._1_3_,SVar5);
      uVar4 = 1;
    }
    else {
      local_48[0] = local_48[0] & 0xffffff00;
      (**(code **)**(undefined8 **)(this + 0x68))(*(undefined8 **)(this + 0x68),local_48,1);
      local_48[0] = *(uint *)(param_1 + 0x28);
      puVar3 = *(undefined8 **)(this + 0x68);
      uVar4 = 4;
    }
    (**(code **)*puVar3)(puVar3,local_48,uVar4);
  }
LAB_003750d4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003750fc  rive::PropertyRecorder::recordStateMachineLayer =====

/* rive::PropertyRecorder::recordStateMachineLayer(rive::StateMachineLayer const*) */

void __thiscall
rive::PropertyRecorder::recordStateMachineLayer(PropertyRecorder *this,StateMachineLayer *param_1)

{
  LinearAnimation *pLVar1;
  long *plVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  puVar3 = PTR_m_EmptyAnimation_0067cd00;
  if (*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28) != 0) {
    uVar5 = *(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28) >> 3;
    uVar7 = 0;
    if (uVar5 < 2) {
      uVar5 = 1;
    }
    do {
      if (uVar7 < (ulong)(*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28) >> 3)) {
        plVar6 = *(long **)(*(long *)(param_1 + 0x28) + uVar7 * 8);
      }
      else {
        plVar6 = (long *)0x0;
      }
      uVar4 = (**(code **)(*plVar6 + 0x18))(plVar6,0x3d);
      if ((uVar4 & 1) == 0) {
        uVar4 = (**(code **)(*plVar6 + 0x18))(plVar6,0x48);
        if ((uVar4 & 1) != 0) {
          plVar2 = (long *)plVar6[0xd];
          plVar6 = (long *)plVar6[0xc];
          while (plVar6 != plVar2) {
            pLVar1 = (LinearAnimation *)puVar3;
            if (*(LinearAnimation **)(*plVar6 + 0x10) != (LinearAnimation *)0x0) {
              pLVar1 = *(LinearAnimation **)(*plVar6 + 0x10);
            }
            recordLinearAnimation(this,pLVar1);
            plVar6 = plVar6 + 1;
          }
        }
      }
      else {
        recordLinearAnimation(this,(LinearAnimation *)plVar6[0xd]);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar5);
  }
  return;
}


// ===== 003751f0  rive::PropertyRecorder::recordDataBinds =====

/* rive::PropertyRecorder::recordDataBinds(rive::Artboard const*) */

void __thiscall rive::PropertyRecorder::recordDataBinds(PropertyRecorder *this,Artboard *param_1)

{
  int iVar1;
  ulong __n;
  long *__dest;
  undefined8 uVar2;
  uint uVar3;
  long *plVar4;
  void *__src;
  long *plVar5;
  
  __src = *(void **)(param_1 + 0x9b8);
  __n = *(long *)(param_1 + 0x9c0) - (long)__src;
  if (__n == 0) {
    return;
  }
  if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00345418();
  }
  __dest = (long *)operator_new(__n);
  memcpy(__dest,__src,__n);
  plVar5 = __dest;
  do {
    plVar4 = *(long **)(param_1 + 0xa58);
    if (plVar4 != *(long **)(param_1 + 0xa60)) {
      uVar3 = 0;
      do {
        if (*plVar4 == *(long *)(*plVar5 + 0x30)) {
          iVar1 = *(int *)(*plVar5 + 0xc);
          uVar2 = getCoreObjectData(this,uVar3);
          uVar3 = iVar1 - 4;
          if ((uVar3 < 0x3f4) && (*(uint *)(&DAT_00252478 + (ulong)uVar3 * 4) < 5)) {
            FUN_003763e0(uVar2,iVar1);
          }
          break;
        }
        plVar4 = plVar4 + 1;
        uVar3 = uVar3 + 1;
      } while (plVar4 != *(long **)(param_1 + 0xa60));
    }
    plVar5 = plVar5 + 1;
    if (plVar5 == (long *)((long)__dest + __n)) {
      operator_delete(__dest);
      return;
    }
  } while( true );
}


// ===== 00375300  rive::PropertyRecorder::writeProperties =====

/* rive::PropertyRecorder::writeProperties(rive::Artboard const*) */

void __thiscall rive::PropertyRecorder::writeProperties(PropertyRecorder *this,Artboard *param_1)

{
  bool bVar1;
  ulong uVar2;
  char *pcVar3;
  void *__src;
  long *plVar4;
  int iVar5;
  ushort uVar6;
  ulong __n;
  long lVar7;
  byte bVar8;
  undefined1 uVar9;
  uint uVar10;
  ushort *__dest;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ushort *puVar17;
  long *plVar18;
  undefined4 uVar19;
  ulong local_c0;
  ulong uStack_b8;
  char *local_b0;
  byte local_a8;
  undefined7 uStack_a7;
  ulong uStack_a0;
  char *local_98;
  ulong local_90 [2];
  char *local_80;
  byte local_78 [16];
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  plVar18 = *(long **)(this + 0xc0);
  plVar4 = *(long **)(this + 200);
  if (plVar18 != plVar4) {
    do {
      puVar16 = (undefined8 *)*plVar18;
      __src = (void *)*puVar16;
      __n = puVar16[1] - (long)__src;
      if (__n != 0) {
        if ((long)__n < 0) {
          FUN_00375898();
          goto LAB_00375894;
        }
        __dest = (ushort *)operator_new(__n);
        memcpy(__dest,__src,__n);
        lVar11 = (**(code **)(*(long *)param_1 + 0x348))(param_1,*(undefined4 *)(puVar16 + 3));
        uVar14 = 0;
        uVar10 = *(uint *)(*plVar18 + 0x18);
        do {
          uVar13 = uVar14 + 1;
          *(byte *)((long)local_90 + uVar14) = (byte)uVar10 & 0x7f | (0x7f < uVar10) << 7;
          bVar1 = 0x7f < uVar10;
          uVar14 = uVar13;
          uVar10 = uVar10 >> 7;
        } while (bVar1);
        (**(code **)**(undefined8 **)(this + 8))
                  (*(undefined8 **)(this + 8),local_90,uVar13 & 0xffffffff);
        uVar13 = __n >> 1;
        uVar14 = 0;
        do {
          uVar10 = (uint)uVar13;
          bVar8 = (byte)uVar13;
          uVar13 = (ulong)(uVar10 >> 7);
          uVar15 = uVar14 + 1;
          *(byte *)((long)local_90 + uVar14) = bVar8 & 0x7f | (0x7f < uVar10) << 7;
          uVar14 = uVar15;
        } while (0x7f < uVar10);
        (**(code **)**(undefined8 **)(this + 8))
                  (*(undefined8 **)(this + 8),local_90,uVar15 & 0xffffffff);
        puVar17 = __dest;
        do {
          uVar12 = (uint)*puVar17;
          uVar10 = *puVar17 - 4;
          if (uVar10 < 0x3f4) {
            iVar5 = *(int *)(&DAT_00252478 + (ulong)uVar10 * 4);
            if (iVar5 < 2) {
              if (iVar5 == 0) {
                uVar14 = 0;
                do {
                  uVar13 = uVar14 + 1;
                  *(byte *)((long)local_90 + uVar14) = (byte)uVar12 & 0x7f | (0x7f < uVar12) << 7;
                  bVar1 = 0x7f < uVar12;
                  uVar14 = uVar13;
                  uVar12 = uVar12 >> 7;
                } while (bVar1);
                (**(code **)**(undefined8 **)(this + 8))
                          (*(undefined8 **)(this + 8),local_90,uVar13 & 0xffffffff);
                uVar10 = FUN_003758ac(lVar11,*puVar17);
                uVar14 = 0;
                do {
                  uVar13 = uVar14 + 1;
                  *(byte *)((long)local_90 + uVar14) = (byte)uVar10 & 0x7f | (0x7f < uVar10) << 7;
                  bVar1 = 0x7f < uVar10;
                  uVar14 = uVar13;
                  uVar10 = uVar10 >> 7;
                } while (bVar1);
                puVar16 = *(undefined8 **)(this + 8);
                uVar13 = uVar13 & 0xffffffff;
LAB_00375454:
                (**(code **)*puVar16)(puVar16,local_90,uVar13);
              }
              else if (iVar5 == 1) {
                uVar14 = 0;
                do {
                  uVar13 = uVar14 + 1;
                  *(byte *)((long)local_90 + uVar14) = (byte)uVar12 & 0x7f | (0x7f < uVar12) << 7;
                  bVar1 = 0x7f < uVar12;
                  uVar14 = uVar13;
                  uVar12 = uVar12 >> 7;
                } while (bVar1);
                (**(code **)**(undefined8 **)(this + 8))
                          (*(undefined8 **)(this + 8),local_90,uVar13 & 0xffffffff);
                FUN_00375c88(&local_a8,lVar11,*puVar17);
                if ((local_a8 & 1) == 0) {
                  local_c0 = CONCAT71(uStack_a7,local_a8);
                  uStack_b8 = uStack_a0;
                  local_b0 = local_98;
                  if ((local_a8 & 1) == 0) goto LAB_00375704;
LAB_0037557c:
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  __init_copy_ctor_external
                            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                              *)local_90,local_b0,uStack_b8);
                }
                else {
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  __init_copy_ctor_external
                            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                              *)&local_c0,local_98,uStack_a0);
                  if ((local_c0 & 1) != 0) goto LAB_0037557c;
LAB_00375704:
                  local_90[1] = uStack_b8;
                  local_90[0] = local_c0;
                  local_80 = local_b0;
                }
                uVar13 = 0;
                uVar15 = local_90[0] >> 1 & 0x7f;
                uVar14 = uVar15;
                if ((local_90[0] & 1) != 0) {
                  uVar15 = local_90[1];
                  uVar14 = local_90[1];
                }
                do {
                  uVar2 = uVar13 + 1;
                  local_78[uVar13] = (byte)uVar15 & 0x7f | (0x7f < uVar15) << 7;
                  bVar1 = 0x7f < uVar15;
                  uVar13 = uVar2;
                  uVar15 = uVar15 >> 7;
                } while (bVar1);
                (**(code **)**(undefined8 **)(this + 8))
                          (*(undefined8 **)(this + 8),local_78,uVar2 & 0xffffffff);
                if (uVar14 != 0) {
                  pcVar3 = (char *)((ulong)local_90 | 1);
                  if ((local_90[0] & 1) != 0) {
                    pcVar3 = local_80;
                  }
                  (**(code **)**(undefined8 **)(this + 8))(*(undefined8 **)(this + 8),pcVar3,uVar14)
                  ;
                }
                if ((local_90[0] & 1) != 0) {
                  operator_delete(local_80);
                }
                if ((local_c0 & 1) != 0) {
                  operator_delete(local_b0);
                }
                if ((local_a8 & 1) != 0) {
                  operator_delete(local_98);
                }
              }
            }
            else if (iVar5 == 4) {
              uVar14 = 0;
              do {
                uVar13 = uVar14 + 1;
                *(byte *)((long)local_90 + uVar14) = (byte)uVar12 & 0x7f | (0x7f < uVar12) << 7;
                bVar1 = 0x7f < uVar12;
                uVar14 = uVar13;
                uVar12 = uVar12 >> 7;
              } while (bVar1);
              (**(code **)**(undefined8 **)(this + 8))
                        (*(undefined8 **)(this + 8),local_90,uVar13 & 0xffffffff);
              uVar9 = FUN_00375ed4(lVar11,*puVar17);
              local_90[0] = CONCAT71(local_90[0]._1_7_,uVar9) & 0xffffffffffffff01;
              (**(code **)**(undefined8 **)(this + 8))(*(undefined8 **)(this + 8),local_90,1);
            }
            else {
              if (iVar5 == 3) {
                uVar14 = 0;
                do {
                  uVar13 = uVar14 + 1;
                  *(byte *)((long)local_90 + uVar14) = (byte)uVar12 & 0x7f | (0x7f < uVar12) << 7;
                  bVar1 = 0x7f < uVar12;
                  uVar14 = uVar13;
                  uVar12 = uVar12 >> 7;
                } while (bVar1);
                (**(code **)**(undefined8 **)(this + 8))
                          (*(undefined8 **)(this + 8),local_90,uVar13 & 0xffffffff);
                uVar6 = *puVar17;
                uVar10 = 0;
                if (uVar6 < 0x22b) {
                  if ((uVar6 == 0x25) || (uVar6 == 0x26)) {
LAB_00375810:
                    uVar10 = *(uint *)(lVar11 + 0x88);
                  }
                  else if (uVar6 == 0x58) {
                    uVar10 = *(uint *)(lVar11 + 0x28);
                  }
                }
                else if (uVar6 < 0x28b) {
                  if (uVar6 == 0x22b) {
                    uVar10 = *(uint *)(lVar11 + 0x110);
                  }
                  else if (uVar6 == 0x27e) goto LAB_00375818;
                }
                else if (uVar6 == 0x28b) {
LAB_00375818:
                  uVar10 = *(uint *)(lVar11 + 0xc);
                }
                else if (uVar6 == 0x344) goto LAB_00375810;
                uVar14 = 0;
                do {
                  uVar13 = uVar14 + 1;
                  *(byte *)((long)local_90 + uVar14) = (byte)uVar10 & 0x7f | (0x7f < uVar10) << 7;
                  bVar1 = 0x7f < uVar10;
                  uVar14 = uVar13;
                  uVar10 = uVar10 >> 7;
                } while (bVar1);
                puVar16 = *(undefined8 **)(this + 8);
                uVar13 = uVar13 & 0xffffffff;
                goto LAB_00375454;
              }
              if (iVar5 == 2) {
                uVar14 = 0;
                do {
                  uVar13 = uVar14 + 1;
                  *(byte *)((long)local_90 + uVar14) = (byte)uVar12 & 0x7f | (0x7f < uVar12) << 7;
                  bVar1 = 0x7f < uVar12;
                  uVar14 = uVar13;
                  uVar12 = uVar12 >> 7;
                } while (bVar1);
                (**(code **)**(undefined8 **)(this + 8))
                          (*(undefined8 **)(this + 8),local_90,uVar13 & 0xffffffff);
                uVar19 = FUN_003567b0(lVar11,*puVar17);
                puVar16 = *(undefined8 **)(this + 8);
                local_90[0] = CONCAT44(local_90[0]._4_4_,uVar19);
                uVar13 = 4;
                goto LAB_00375454;
              }
            }
          }
          puVar17 = puVar17 + 1;
        } while (puVar17 != (ushort *)((long)__dest + __n));
        operator_delete(__dest);
      }
      plVar18 = plVar18 + 1;
    } while (plVar18 != plVar4);
  }
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
LAB_00375894:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00375898  FUN_00375898 =====

void FUN_00375898(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 003758ac  FUN_003758ac =====

undefined4 FUN_003758ac(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  switch(param_2) {
  case 5:
  case 0x7a:
  case 0xe0:
  case 0x277:
  case 0x36b:
    return *(undefined4 *)(param_1 + 0x28);
  case 0x17:
    return *(undefined4 *)(param_1 + 0x134);
  case 0x28:
  case 0x2cb:
  case 0x3dc:
    return *(undefined4 *)(param_1 + 0xe0);
  case 0x30:
    return *(undefined4 *)(param_1 + 0xe4);
  case 0x31:
    return *(undefined4 *)(param_1 + 0xe8);
  case 0x33:
  case 0x35:
  case 0x43:
  case 0xa5:
  case 0x195:
  case 0x225:
  case 0x24a:
  case 0x27d:
  case 0x28d:
  case 0x2a5:
  case 0x2a7:
  case 0x2ae:
  case 0x2b1:
  case 0x343:
  case 0x3a3:
  case 0x3c5:
  case 0x3cb:
  case 0x3d1:
  case 0x3d4:
  case 0x3f2:
  case 0x3f7:
    return *(undefined4 *)(param_1 + 0xc);
  case 0x38:
  case 0xcc:
    return *(undefined4 *)(param_1 + 0x28);
  case 0x39:
  case 0x3bd:
    return *(undefined4 *)(param_1 + 0x2c);
  case 0x3b:
    return *(undefined4 *)(param_1 + 0x34);
  case 0x3c:
  case 0x23e:
    return *(undefined4 *)(param_1 + 0x38);
  case 0x3d:
    return *(undefined4 *)(param_1 + 0x3c);
  case 0x44:
  case 400:
  case 0x3cd:
    return *(undefined4 *)(param_1 + 0x14);
  case 0x45:
  case 0xe4:
  case 0x307:
  case 0x308:
    return *(undefined4 *)(param_1 + 0x18);
  case 0x5c:
  case 0x5f:
  case 0x66:
  case 0xed:
  case 0x110:
  case 0x121:
  case 0x140:
  case 0x164:
  case 0x30a:
  case 0x35a:
  case 0x368:
  case 0x36c:
  case 0x39a:
  case 0x3a6:
  case 0x3d6:
    uVar1 = *(undefined4 *)(param_1 + 0x88);
    break;
  case 0x5d:
  case 0x67:
  case 0x78:
  case 0xad:
  case 0x2d2:
  case 0x369:
  case 0x3a7:
  case 0x3bc:
    return *(undefined4 *)(param_1 + 0x8c);
  case 0x6e:
  case 0x2d5:
  case 0x35d:
    return *(undefined4 *)(param_1 + 0x98);
  case 0x6f:
  case 0xb2:
    return *(undefined4 *)(param_1 + 0x9c);
  case 0x70:
  case 0x236:
    return *(undefined4 *)(param_1 + 0xa0);
  case 0x71:
  case 0x2d7:
    return *(undefined4 *)(param_1 + 0xa4);
  case 0x75:
    return *(undefined4 *)(param_1 + 0x94);
  case 0x77:
  case 0x22a:
  case 0x366:
    return *(undefined4 *)(param_1 + 0x88);
  case 0x79:
  case 0xc3:
  case 0xc6:
  case 0x14f:
  case 0x2ec:
  case 0x35f:
  case 0x390:
    return *(undefined4 *)(param_1 + 0xa0);
  case 0x7d:
    return *(undefined4 *)(param_1 + 0x1b8);
  case 0x80:
  case 0x128:
  case 0x25c:
    return *(undefined4 *)(param_1 + 0x134);
  case 0x81:
  case 0x25d:
    return *(undefined4 *)(param_1 + 0x138);
  case 0x95:
  case 399:
    return *(undefined4 *)(param_1 + 100);
  case 0x97:
    return *(undefined4 *)(param_1 + 0x40);
  case 0x98:
    return *(undefined4 *)(param_1 + 0x44);
  case 0x9b:
  case 0x189:
  case 0x28a:
  case 0x337:
    return *(undefined4 *)(param_1 + 0xc);
  case 0x9c:
  case 0xe3:
  case 0x185:
  case 0x188:
  case 0x226:
  case 0x3a2:
  case 0x3b8:
  case 0x3c2:
  case 0x3cc:
  case 0x3d2:
  case 0x3f3:
    return *(undefined4 *)(param_1 + 0x10);
  case 0x9e:
    return *(undefined4 *)(param_1 + 0x48);
  case 0xa0:
    return *(undefined4 *)(param_1 + 0x4c);
  case 0xa7:
    return *(undefined4 *)(param_1 + 0x78);
  case 0xa8:
    return *(undefined4 *)(param_1 + 0x18);
  case 0xab:
    return *(undefined4 *)(param_1 + 0x90);
  case 0xaf:
  case 0xb4:
  case 0x35e:
  case 0x37d:
    return *(undefined4 *)(param_1 + 0x9c);
  case 0xb3:
    return *(undefined4 *)(param_1 + 0x98);
  case 0xc5:
  case 0x119:
  case 0x26c:
  case 800:
  case 0x350:
    return *(undefined4 *)(param_1 + 0x174);
  case 0xce:
    return *(undefined4 *)(param_1 + 0x174);
  case 0xe1:
    return *(undefined4 *)(param_1 + 0x60);
  case 0xec:
    return *(undefined4 *)(param_1 + 0x98c);
  case 0xf0:
  case 0x24b:
    return *(undefined4 *)(param_1 + 0x10);
  case 0xf9:
  case 0x29d:
  case 0x2aa:
  case 0x2c9:
  case 0x2e7:
  case 0x2f5:
  case 0x2fc:
  case 0x330:
  case 0x377:
  case 0x37c:
  case 0x3da:
    return *(undefined4 *)(param_1 + 0xd8);
  case 0x117:
  case 0x12e:
  case 0x13c:
    return *(undefined4 *)(param_1 + 0xac);
  case 0x11c:
    return *(undefined4 *)(param_1 + 0x178);
  case 0x11f:
  case 0x26e:
    return *(undefined4 *)(param_1 + 0x17c);
  case 0x12a:
    return *(undefined4 *)(param_1 + 0x20);
  case 0x12d:
  case 0x2d6:
    return *(undefined4 *)(param_1 + 0xa8);
  case 0x138:
    return *(undefined4 *)(param_1 + 0xb0);
  case 0x139:
  case 0x146:
    return *(undefined4 *)(param_1 + 0xb4);
  case 0x145:
    return *(undefined4 *)(param_1 + 0xb0);
  case 0x15d:
    return *(undefined4 *)(param_1 + 0x50);
  case 0x15e:
    return *(undefined4 *)(param_1 + 0x54);
  case 0x165:
  case 0x2a1:
    return *(undefined4 *)(param_1 + 0x8c);
  case 0x179:
    return *(undefined4 *)(param_1 + 0x194);
  case 0x17a:
    return *(undefined4 *)(param_1 + 200);
  case 0x198:
    return *(undefined4 *)(param_1 + 0xc0);
  case 0x1ee:
    return *(undefined4 *)(param_1 + 0x17c);
  case 0x218:
  case 0x2c5:
    return *(undefined4 *)(param_1 + 0x40);
  case 0x219:
    return *(undefined4 *)(param_1 + 0x58);
  case 0x21a:
    return *(undefined4 *)(param_1 + 0x210);
  case 0x230:
  case 0x241:
  case 0x2af:
  case 0x32e:
  case 0x338:
  case 0x34e:
  case 0x3c6:
    return *(undefined4 *)(param_1 + 0x110);
  case 0x235:
    return *(undefined4 *)(param_1 + 0x30);
  case 0x247:
    return *(undefined4 *)(param_1 + 0x990);
  case 0x24d:
    return *(undefined4 *)(param_1 + 0x104);
  case 0x24e:
    return *(undefined4 *)(param_1 + 0x108);
  case 0x24f:
    return *(undefined4 *)(param_1 + 0x10c);
  case 0x254:
    return *(undefined4 *)(param_1 + 0x114);
  case 0x255:
    return *(undefined4 *)(param_1 + 0x118);
  case 0x256:
    return *(undefined4 *)(param_1 + 0x11c);
  case 599:
    return *(undefined4 *)(param_1 + 0x120);
  case 600:
    return *(undefined4 *)(param_1 + 0x124);
  case 0x259:
    return *(undefined4 *)(param_1 + 0x128);
  case 0x25a:
    return *(undefined4 *)(param_1 + 300);
  case 0x25b:
    return *(undefined4 *)(param_1 + 0x130);
  case 0x25f:
    return *(undefined4 *)(param_1 + 0x140);
  case 0x260:
    return *(undefined4 *)(param_1 + 0x144);
  case 0x261:
    return *(undefined4 *)(param_1 + 0x148);
  case 0x262:
    return *(undefined4 *)(param_1 + 0x14c);
  case 0x263:
    return *(undefined4 *)(param_1 + 0x150);
  case 0x264:
    return *(undefined4 *)(param_1 + 0x154);
  case 0x265:
    return *(undefined4 *)(param_1 + 0x158);
  case 0x266:
    return *(undefined4 *)(param_1 + 0x15c);
  case 0x267:
    return *(undefined4 *)(param_1 + 0x160);
  case 0x268:
    return *(undefined4 *)(param_1 + 0x164);
  case 0x269:
    return *(undefined4 *)(param_1 + 0x168);
  case 0x26a:
    return *(undefined4 *)(param_1 + 0x16c);
  case 0x26b:
    return *(undefined4 *)(param_1 + 0x170);
  case 0x26d:
    return *(undefined4 *)(param_1 + 0x178);
  case 0x26f:
    return *(undefined4 *)(param_1 + 0x180);
  case 0x270:
    return *(undefined4 *)(param_1 + 0x184);
  case 0x271:
    return *(undefined4 *)(param_1 + 0x188);
  case 0x272:
    return *(undefined4 *)(param_1 + 0x18c);
  case 0x273:
    return *(undefined4 *)(param_1 + 400);
  case 0x274:
    return *(undefined4 *)(param_1 + 0x194);
  case 0x275:
  case 0x2ab:
    return *(undefined4 *)(param_1 + 0x198);
  case 0x276:
    return *(undefined4 *)(param_1 + 0x19c);
  case 0x278:
    return *(undefined4 *)(param_1 + 0x100);
  case 0x28f:
    return *(undefined4 *)(param_1 + 0xf8);
  case 0x290:
    return *(undefined4 *)(param_1 + 0xfc);
  case 0x294:
    return *(undefined4 *)(param_1 + 0x14);
  case 0x299:
    return *(undefined4 *)(param_1 + 0x218);
  case 0x29a:
    return *(undefined4 *)(param_1 + 0x21c);
  case 0x29b:
    return *(undefined4 *)(param_1 + 0x220);
  case 0x29c:
    return *(undefined4 *)(param_1 + 0x224);
  case 0x2a0:
  case 0x2db:
    return *(undefined4 *)(param_1 + 0x88);
  case 0x2ad:
    return *(undefined4 *)(param_1 + 0x19c);
  case 0x2c1:
    return *(undefined4 *)(param_1 + 0xf0);
  case 0x2c4:
    return *(undefined4 *)(param_1 + 0x38);
  case 0x2ca:
    return *(undefined4 *)(param_1 + 0xdc);
  case 0x2e9:
    return *(undefined4 *)(param_1 + 0xf8);
  case 0x2ea:
    return *(undefined4 *)(param_1 + 0xd8);
  case 0x2eb:
    return *(undefined4 *)(param_1 + 0xa4);
  case 0x2f6:
  case 0x2fd:
  case 0x3db:
    return *(undefined4 *)(param_1 + 0xdc);
  case 0x358:
    return *(undefined4 *)(param_1 + 0x94);
  case 0x36a:
    return *(undefined4 *)(param_1 + 0x1ac);
  case 0x3a4:
    return *(undefined4 *)(param_1 + 0x1a4);
  case 0x3ce:
    return *(undefined4 *)(param_1 + 0x180);
  }
  return uVar1;
}


// ===== 00375c88  FUN_00375c88 =====

void FUN_00375c88(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,long param_2,int param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_3 < 0x242) {
    if (param_3 < 0x10c) {
      if (param_3 < 0xcb) {
        if (((param_3 != 4) && (param_3 != 0x37)) && (param_3 != 0x8a)) {
LAB_00375eb4:
          *(undefined2 *)param_1 = 0;
          return;
        }
      }
      else if (param_3 != 0xcb) {
        if (param_3 == 0xf6) {
          pbVar1 = (byte *)(param_2 + 0x88);
          if ((*pbVar1 & 1) != 0) {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            __init_copy_ctor_external(param_1,*(char **)(param_2 + 0x98),*(ulong *)(param_2 + 0x90))
            ;
            return;
          }
        }
        else {
          if (param_3 != 0xf8) goto LAB_00375eb4;
LAB_00375e18:
          pbVar1 = (byte *)(param_2 + 0xc0);
          if ((*pbVar1 & 1) != 0) {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            __init_copy_ctor_external(param_1,*(char **)(param_2 + 0xd0),*(ulong *)(param_2 + 200));
            return;
          }
        }
        goto LAB_00375de0;
      }
LAB_00375dd4:
      pbVar1 = (byte *)(param_2 + 0x10);
      if ((*pbVar1 & 1) != 0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external(param_1,*(char **)(param_2 + 0x20),*(ulong *)(param_2 + 0x18));
        return;
      }
    }
    else if (param_3 < 0x22d) {
      if (param_3 == 0x10c) {
LAB_00375e48:
        pbVar1 = (byte *)(param_2 + 0x90);
        if ((*pbVar1 & 1) != 0) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external(param_1,*(char **)(param_2 + 0xa0),*(ulong *)(param_2 + 0x98));
          return;
        }
      }
      else if (param_3 == 0x118) {
LAB_00375e30:
        pbVar1 = (byte *)(param_2 + 0x28);
        if ((*pbVar1 & 1) != 0) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external(param_1,*(char **)(param_2 + 0x38),*(ulong *)(param_2 + 0x30));
          return;
        }
      }
      else {
        if (param_3 != 0x16a) goto LAB_00375eb4;
        pbVar1 = (byte *)(param_2 + 0x30);
        if ((*pbVar1 & 1) != 0) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external(param_1,*(char **)(param_2 + 0x40),*(ulong *)(param_2 + 0x38));
          return;
        }
      }
    }
    else {
      if (param_3 == 0x22d) goto LAB_00375dd4;
      if (param_3 == 0x231) {
        if ((*(byte *)(param_2 + 0x110) & 1) != 0) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external(param_1,*(char **)(param_2 + 0x120),*(ulong *)(param_2 + 0x118))
          ;
          return;
        }
        uVar4 = *(undefined8 *)(param_2 + 0x118);
        uVar3 = *(undefined8 *)(param_2 + 0x110);
        uVar2 = *(undefined8 *)(param_2 + 0x120);
        goto LAB_00375de8;
      }
      if (param_3 != 0x23c) goto LAB_00375eb4;
      pbVar1 = (byte *)(param_2 + 0x40);
      if ((*pbVar1 & 1) != 0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external(param_1,*(char **)(param_2 + 0x50),*(ulong *)(param_2 + 0x48));
        return;
      }
    }
  }
  else {
    if (param_3 < 0x2fe) {
      if (param_3 < 0x28e) {
        if (param_3 != 0x242) {
          if (param_3 == 0x243) goto LAB_00375e30;
          if (param_3 != 0x27b) goto LAB_00375eb4;
        }
      }
      else if ((param_3 != 0x28e) && (param_3 != 0x296)) {
        if (param_3 != 0x2e8) goto LAB_00375eb4;
        goto LAB_00375d8c;
      }
      goto LAB_00375dd4;
    }
    if (param_3 < 0x3d7) {
      if (param_3 == 0x2fe) {
LAB_00375d8c:
        pbVar1 = (byte *)(param_2 + 0xe0);
        if ((*pbVar1 & 1) != 0) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external(param_1,*(char **)(param_2 + 0xf0),*(ulong *)(param_2 + 0xe8));
          return;
        }
      }
      else if (param_3 == 0x331) {
        if ((*(byte *)(param_2 + 0x178) & 1) != 0) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external(param_1,*(char **)(param_2 + 0x188),*(ulong *)(param_2 + 0x180))
          ;
          return;
        }
        pbVar1 = (byte *)(param_2 + 0x178);
      }
      else {
        if (param_3 != 0x39e) goto LAB_00375eb4;
        pbVar1 = (byte *)(param_2 + 0x80);
        if ((*pbVar1 & 1) != 0) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external(param_1,*(char **)(param_2 + 0x90),*(ulong *)(param_2 + 0x88));
          return;
        }
      }
    }
    else {
      if (param_3 == 0x3d7) goto LAB_00375e48;
      if (param_3 != 0x3d8) {
        if (param_3 != 0x3d9) goto LAB_00375eb4;
        goto LAB_00375e18;
      }
      pbVar1 = (byte *)(param_2 + 0xa8);
      if ((*pbVar1 & 1) != 0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external(param_1,*(char **)(param_2 + 0xb8),*(ulong *)(param_2 + 0xb0));
        return;
      }
    }
  }
LAB_00375de0:
  uVar4 = *(undefined8 *)(pbVar1 + 8);
  uVar3 = *(undefined8 *)pbVar1;
  uVar2 = *(undefined8 *)(pbVar1 + 0x10);
LAB_00375de8:
  *(undefined8 *)(param_1 + 8) = uVar4;
  *(undefined8 *)param_1 = uVar3;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  return;
}


// ===== 00375ed4  FUN_00375ed4 =====

ulong FUN_00375ed4(long *param_1,int param_2)

{
  ulong uVar1;
  char cVar2;
  
  uVar1 = 0;
  if (param_2 < 0x25e) {
    if (param_2 < 0xee) {
      switch(param_2) {
      case 0x20:
        cVar2 = (char)param_1[0x35];
        break;
      default:
        goto switchD_00375f0c_caseD_21;
      case 0x29:
                    /* WARNING: Could not recover jumptable at 0x00376144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*param_1 + 0x98))(param_1);
        return uVar1;
      case 0x32:
        cVar2 = *(char *)((long)param_1 + 0xec);
        break;
      case 0x3e:
        cVar2 = (char)param_1[8];
        break;
      case 0x5e:
        cVar2 = (char)param_1[0x12];
        break;
      case 0x8d:
      case 0xb5:
        cVar2 = (char)param_1[5];
        break;
      case 0xa4:
        cVar2 = (char)param_1[0x37];
        break;
      case 0xae:
switchD_00375f0c_caseD_ae:
        cVar2 = (char)param_1[0x13];
        break;
      case 0xbc:
switchD_00375f0c_caseD_bc:
        cVar2 = (char)param_1[0x16];
        break;
      case 0xbd:
        cVar2 = *(char *)((long)param_1 + 0xb1);
        break;
      case 0xbe:
        cVar2 = *(char *)((long)param_1 + 0xb2);
        break;
      case 0xbf:
        cVar2 = *(char *)((long)param_1 + 0xb3);
        break;
      case 0xc0:
        cVar2 = (char)param_1[0x18];
        break;
      case 0xc1:
        cVar2 = *(char *)((long)param_1 + 0xc1);
        break;
      case 0xc2:
        cVar2 = *(char *)((long)param_1 + 0xc2);
        break;
      case 0xc4:
        cVar2 = *(char *)((long)param_1 + 0x171);
        break;
      case 0xc9:
        cVar2 = *(char *)((long)param_1 + 0xb4);
      }
    }
    else if (param_2 < 0x16d) {
      if (param_2 < 0x14d) {
        if (param_2 == 0xee) {
                    /* WARNING: Could not recover jumptable at 0x003761ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar1 = (**(code **)(*param_1 + 0xa0))(param_1);
          return uVar1;
        }
        if (param_2 != 0xf5) {
          return 0;
        }
LAB_00376024:
        cVar2 = (char)param_1[0x11];
      }
      else if (param_2 == 0x14d) {
        cVar2 = (char)param_1[0x17];
      }
      else {
        if (param_2 != 0x16c) {
          return 0;
        }
LAB_003760a0:
        cVar2 = *(char *)((long)param_1 + 0xa4);
      }
    }
    else if (param_2 < 0x21d) {
      if (param_2 == 0x16d) {
        cVar2 = *(char *)((long)param_1 + 0xa5);
      }
      else {
        if (param_2 != 0x178) {
          return 0;
        }
        cVar2 = *(char *)((long)param_1 + 0x41);
      }
    }
    else if (param_2 == 0x21d) {
      cVar2 = *(char *)((long)param_1 + 0x14);
    }
    else {
      if (param_2 != 0x251) {
        return 0;
      }
      cVar2 = (char)param_1[0x22];
    }
  }
  else if (param_2 < 0x30b) {
    if (param_2 < 0x2b5) {
      if (param_2 < 0x287) {
        if (param_2 == 0x25e) {
          cVar2 = *(char *)((long)param_1 + 0x13c);
        }
        else {
          if (param_2 != 0x27a) {
            if (param_2 != 0x27f) {
              return 0;
            }
            goto LAB_003760f0;
          }
LAB_00376088:
          cVar2 = *(char *)((long)param_1 + 0xc);
        }
      }
      else {
        if (param_2 == 0x287) goto LAB_00376088;
        if (param_2 != 0x2a4) {
          if (param_2 != 0x2b3) {
            return 0;
          }
          goto LAB_003760a0;
        }
LAB_003760f8:
        cVar2 = *(char *)((long)param_1 + 0x8c);
      }
    }
    else if (param_2 < 0x2de) {
      if (param_2 == 0x2b5) goto LAB_003760f8;
      if (param_2 != 0x2bf) {
        if (param_2 != 0x2d4) {
          return 0;
        }
        goto LAB_003760e8;
      }
LAB_003760f0:
      cVar2 = (char)param_1[0x34];
    }
    else if (param_2 == 0x2de) {
      cVar2 = *(char *)((long)param_1 + 0x9c);
    }
    else {
      if (param_2 == 0x2f0) goto switchD_00375f0c_caseD_bc;
      if (param_2 != 0x302) {
        return 0;
      }
      cVar2 = (char)param_1[0x27];
    }
  }
  else if (param_2 < 0x392) {
    if (param_2 < 0x353) {
      if (param_2 == 0x30b) goto switchD_00375f0c_caseD_ae;
      if (param_2 == 0x30e) {
        cVar2 = *(char *)((long)param_1 + 0x99);
      }
      else {
        if (param_2 != 0x352) {
          return 0;
        }
        cVar2 = *(char *)((long)param_1 + 0xac);
      }
    }
    else if (param_2 == 0x353) {
      cVar2 = *(char *)((long)param_1 + 0xad);
    }
    else if (param_2 == 0x37b) {
      cVar2 = *(char *)((long)param_1 + 0xae);
    }
    else {
      if (param_2 != 0x37f) {
        return 0;
      }
      cVar2 = (char)param_1[0x2f];
    }
  }
  else if (param_2 < 0x3ba) {
    if (param_2 != 0x392) {
      if (param_2 != 0x399) {
        if (param_2 != 0x3b9) {
          return 0;
        }
        goto LAB_00376024;
      }
      goto LAB_00376088;
    }
LAB_003760e8:
    cVar2 = (char)param_1[0x14];
  }
  else if (param_2 < 0x3d3) {
    if (param_2 == 0x3ba) {
      cVar2 = *(char *)((long)param_1 + 0x89);
    }
    else {
      if (param_2 != 0x3bb) {
        return 0;
      }
      cVar2 = *(char *)((long)param_1 + 0x8a);
    }
  }
  else if (param_2 == 0x3d3) {
    cVar2 = *(char *)((long)param_1 + 0x194);
  }
  else {
    if (param_2 != 0x3f6) {
      return 0;
    }
    cVar2 = *(char *)((long)param_1 + 0x184);
  }
  uVar1 = (ulong)(cVar2 != '\0');
switchD_00375f0c_caseD_21:
  return uVar1;
}


// ===== 003761e0  rive::PropertyRecorder::getCoreObjectData =====

/* rive::PropertyRecorder::getCoreObjectData(unsigned int) */

undefined8 * __thiscall
rive::PropertyRecorder::getCoreObjectData(PropertyRecorder *this,uint param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  plVar15 = *(long **)(this + 200);
  plVar11 = *(long **)(this + 0xc0);
  for (plVar4 = plVar11; plVar4 != plVar15; plVar4 = plVar4 + 1) {
    if (*(uint *)((undefined8 *)*plVar4 + 3) == param_1) {
      return (undefined8 *)*plVar4;
    }
  }
  puVar2 = (undefined8 *)operator_new(0x20);
  plVar4 = *(long **)(this + 0xd0);
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  *(uint *)(puVar2 + 3) = param_1;
  if (plVar15 < plVar4) {
    plVar4 = plVar15 + 1;
    *plVar15 = (long)puVar2;
    goto LAB_003763b8;
  }
  lVar12 = (long)plVar15 - (long)plVar11;
  uVar8 = (lVar12 >> 3) + 1;
  if (uVar8 >> 0x3d != 0) {
    FUN_0037656c();
LAB_003763dc:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar5 = (long)plVar4 - (long)plVar11;
  uVar7 = (long)uVar5 >> 2;
  if (uVar7 <= uVar8) {
    uVar7 = uVar8;
  }
  if (0x7ffffffffffffff7 < uVar5) {
    uVar7 = 0x1fffffffffffffff;
  }
  if (uVar7 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (uVar7 >> 0x3d != 0) goto LAB_003763dc;
    pvVar3 = operator_new(uVar7 << 3);
  }
  plVar6 = (long *)((long)pvVar3 + (lVar12 >> 3) * 8);
  pvVar1 = (void *)((long)pvVar3 + uVar7 * 8);
  plVar4 = plVar6 + 1;
  *plVar6 = (long)puVar2;
  if (plVar11 == plVar15) {
    *(long **)(this + 0xc0) = plVar6;
    *(long **)(this + 200) = plVar4;
    *(void **)(this + 0xd0) = pvVar1;
  }
  else {
    uVar8 = lVar12 - 8;
    plVar14 = plVar15;
    if ((uVar8 < 0x78) ||
       (((long *)((long)plVar15 + (-8 - (uVar8 & 0xfffffffffffffff8))) < plVar6 &&
        ((long *)((long)pvVar3 + (lVar12 - (uVar8 & 0xfffffffffffffff8)) + -8) < plVar15)))) {
LAB_00376348:
      do {
        plVar14 = plVar14 + -1;
        lVar12 = *plVar14;
        *plVar14 = 0;
        plVar6 = plVar6 + -1;
        *plVar6 = lVar12;
      } while (plVar14 != plVar11);
    }
    else {
      plVar9 = plVar6 + -2;
      uVar8 = (uVar8 >> 3) + 1;
      uVar5 = uVar8 & 0x3ffffffffffffffc;
      plVar14 = plVar15 + -uVar5;
      uVar7 = uVar5;
      do {
        plVar10 = plVar15 + -4;
        lVar18 = plVar15[-3];
        lVar17 = *plVar10;
        lVar16 = plVar15[-1];
        lVar12 = plVar15[-2];
        uVar7 = uVar7 - 4;
        plVar15[-3] = 0;
        *plVar10 = 0;
        plVar15[-1] = 0;
        plVar15[-2] = 0;
        plVar9[-1] = lVar18;
        plVar9[-2] = lVar17;
        plVar9[1] = lVar16;
        *plVar9 = lVar12;
        plVar9 = plVar9 + -4;
        plVar15 = plVar10;
      } while (uVar7 != 0);
      plVar6 = plVar6 + -uVar5;
      if (uVar8 != uVar5) goto LAB_00376348;
    }
    plVar11 = *(long **)(this + 0xc0);
    plVar15 = *(long **)(this + 200);
    *(long **)(this + 0xc0) = plVar6;
    *(long **)(this + 200) = plVar4;
    *(void **)(this + 0xd0) = pvVar1;
    while (plVar15 != plVar11) {
      plVar15 = plVar15 + -1;
      puVar13 = (undefined8 *)*plVar15;
      *plVar15 = 0;
      if (puVar13 != (undefined8 *)0x0) {
        pvVar3 = (void *)*puVar13;
        if (pvVar3 != (void *)0x0) {
          puVar13[1] = pvVar3;
          operator_delete(pvVar3);
        }
        operator_delete(puVar13);
      }
    }
  }
  if (plVar11 != (long *)0x0) {
    operator_delete(plVar11);
  }
LAB_003763b8:
  *(long **)(this + 200) = plVar4;
  return puVar2;
}


// ===== 003763e0  FUN_003763e0 =====

void FUN_003763e0(long *param_1,short param_2)

{
  ulong uVar1;
  short *psVar2;
  short *psVar3;
  void *pvVar4;
  short *psVar5;
  ulong uVar6;
  short *psVar7;
  ulong uVar8;
  short *psVar9;
  short *psVar10;
  ulong uVar11;
  short *psVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  psVar12 = (short *)param_1[1];
  psVar2 = (short *)*param_1;
  psVar5 = psVar2;
  for (psVar7 = psVar2; (psVar7 != psVar12 && (psVar5 = psVar7, *psVar7 != param_2));
      psVar7 = psVar7 + 1) {
    psVar5 = psVar12;
  }
  if (psVar5 != psVar12) {
    return;
  }
  if (psVar12 < (short *)param_1[2]) {
    psVar5 = psVar12 + 1;
    *psVar12 = param_2;
    goto LAB_00376548;
  }
  lVar14 = (long)psVar12 - (long)psVar2;
  lVar13 = lVar14 >> 1;
  if (lVar13 == -2 || lVar13 + 2 < 0 != SCARRY8(lVar13,2)) {
    FUN_00375898();
LAB_00376568:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar6 = param_1[2] - (long)psVar2;
  uVar1 = uVar6;
  if (uVar6 <= lVar13 + 1U) {
    uVar1 = lVar13 + 1;
  }
  if (0x7ffffffffffffffd < uVar6) {
    uVar1 = 0x7fffffffffffffff;
  }
  if (uVar1 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if ((long)uVar1 < 0) goto LAB_00376568;
    pvVar4 = operator_new(uVar1 << 1);
  }
  psVar7 = (short *)((long)pvVar4 + lVar13 * 2);
  psVar5 = psVar7 + 1;
  *psVar7 = param_2;
  if (psVar2 != psVar12) {
    if ((0x1d < lVar14 - 2U) && (0x1f < (ulong)((long)psVar12 + (-lVar14 - (long)pvVar4)))) {
      psVar10 = psVar12 + -8;
      uVar6 = (lVar14 - 2U >> 1) + 1;
      uVar8 = uVar6 & 0xfffffffffffffff0;
      psVar12 = psVar12 + -uVar8;
      psVar9 = psVar7 + -8;
      uVar11 = uVar8;
      do {
        psVar3 = psVar10 + -4;
        uVar17 = *(undefined8 *)(psVar10 + -8);
        uVar16 = *(undefined8 *)(psVar10 + 4);
        uVar15 = *(undefined8 *)psVar10;
        uVar11 = uVar11 - 0x10;
        psVar10 = psVar10 + -0x10;
        *(undefined8 *)(psVar9 + -4) = *(undefined8 *)psVar3;
        *(undefined8 *)(psVar9 + -8) = uVar17;
        *(undefined8 *)(psVar9 + 4) = uVar16;
        *(undefined8 *)psVar9 = uVar15;
        psVar9 = psVar9 + -0x10;
      } while (uVar11 != 0);
      psVar7 = psVar7 + -uVar8;
      if (uVar6 == uVar8) goto LAB_0037652c;
    }
    do {
      psVar12 = psVar12 + -1;
      psVar7 = psVar7 + -1;
      *psVar7 = *psVar12;
    } while (psVar12 != psVar2);
  }
LAB_0037652c:
  *param_1 = (long)psVar7;
  param_1[1] = (long)psVar5;
  param_1[2] = (long)((long)pvVar4 + uVar1 * 2);
  if (psVar2 != (short *)0x0) {
    operator_delete(psVar2);
  }
LAB_00376548:
  param_1[1] = (long)psVar5;
  return;
}


// ===== 0037656c  FUN_0037656c =====

void FUN_0037656c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 00376580  rive::PropertyRecorder::recordLinearAnimation =====

/* rive::PropertyRecorder::recordLinearAnimation(rive::LinearAnimation const*) */

void __thiscall
rive::PropertyRecorder::recordLinearAnimation(PropertyRecorder *this,LinearAnimation *param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  if ((param_1 != (LinearAnimation *)0x0) &&
     (*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) != 0)) {
    uVar4 = *(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3;
    uVar6 = 0;
    if (uVar4 < 2) {
      uVar4 = 1;
    }
    do {
      if ((uVar6 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3)) &&
         (lVar7 = *(long *)(*(long *)(param_1 + 0x48) + uVar6 * 8), lVar7 != 0)) {
        uVar3 = getCoreObjectData(this,*(uint *)(lVar7 + 0xc));
        lVar2 = *(long *)(lVar7 + 0x18) - *(long *)(lVar7 + 0x10);
        if (lVar2 != 0) {
          uVar5 = lVar2 >> 3;
          uVar8 = 0;
          if (uVar5 < 2) {
            uVar5 = 1;
          }
          do {
            uVar1 = *(int *)(*(long *)(*(long *)(lVar7 + 0x10) + uVar8 * 8) + 0xc) - 4;
            if ((uVar1 < 0x3f4) && (*(uint *)(&DAT_00252478 + (ulong)uVar1 * 4) < 5)) {
              FUN_003763e0(uVar3);
            }
            uVar8 = uVar8 + 1;
          } while (uVar5 != uVar8);
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar4);
  }
  return;
}


// ===== 0037667c  rive::PropertyRecorder::recordStateMachineInputs =====

/* rive::PropertyRecorder::recordStateMachineInputs(rive::StateMachine const*) */

void __thiscall
rive::PropertyRecorder::recordStateMachineInputs(PropertyRecorder *this,StateMachine *param_1)

{
  StateMachineInput *pSVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((param_1 != (StateMachine *)0x0) &&
     (*(long *)(param_1 + 0x48) - *(long *)(param_1 + 0x40) != 0)) {
    uVar2 = *(long *)(param_1 + 0x48) - *(long *)(param_1 + 0x40) >> 3;
    uVar3 = 0;
    if (uVar2 < 2) {
      uVar2 = 1;
    }
    do {
      if (uVar3 < (ulong)(*(long *)(param_1 + 0x48) - *(long *)(param_1 + 0x40) >> 3)) {
        pSVar1 = *(StateMachineInput **)(*(long *)(param_1 + 0x40) + uVar3 * 8);
      }
      else {
        pSVar1 = (StateMachineInput *)0x0;
      }
      recordStateMachineInput(this,pSVar1);
      uVar3 = uVar3 + 1;
    } while (uVar2 != uVar3);
  }
  *(long *)(this + 0x88) = *(long *)(this + 0xa8);
  *(long *)(this + 0x90) = *(long *)(this + 0xa8) + *(long *)(this + 0x80);
  *(long *)(this + 0xa0) = *(long *)(this + 0x80);
  return;
}


// ===== 0037670c  rive::PropertyRecorder::recordStateMachine =====

/* rive::PropertyRecorder::recordStateMachine(rive::StateMachine const*) */

void __thiscall
rive::PropertyRecorder::recordStateMachine(PropertyRecorder *this,StateMachine *param_1)

{
  StateMachineLayer *pSVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((param_1 != (StateMachine *)0x0) &&
     (*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28) != 0)) {
    uVar2 = *(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28) >> 3;
    uVar3 = 0;
    if (uVar2 < 2) {
      uVar2 = 1;
    }
    do {
      if (uVar3 < (ulong)(*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28) >> 3)) {
        pSVar1 = *(StateMachineLayer **)(*(long *)(param_1 + 0x28) + uVar3 * 8);
      }
      else {
        pSVar1 = (StateMachineLayer *)0x0;
      }
      recordStateMachineLayer(this,pSVar1);
      uVar3 = uVar3 + 1;
    } while (uVar2 != uVar3);
  }
  return;
}


// ===== 00376788  rive::PropertyRecorder::getObjectId =====

/* rive::PropertyRecorder::getObjectId(rive::Artboard const*, rive::Core*) */

int __thiscall
rive::PropertyRecorder::getObjectId(PropertyRecorder *this,Artboard *param_1,Core *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0xa58);
  if (puVar2 != *(undefined8 **)(param_1 + 0xa60)) {
    iVar1 = 0;
    do {
      if ((Core *)*puVar2 == param_2) {
        return iVar1;
      }
      puVar2 = puVar2 + 1;
      iVar1 = iVar1 + 1;
    } while (puVar2 != *(undefined8 **)(param_1 + 0xa60));
  }
  return -1;
}


// ===== 003767c0  rive::PropertyRecorder::addPropertyKey =====

/* rive::PropertyRecorder::addPropertyKey(rive::CoreObjectData*, int) */

void __thiscall
rive::PropertyRecorder::addPropertyKey(PropertyRecorder *this,CoreObjectData *param_1,int param_2)

{
  if ((param_2 - 4U < 0x3f4) && (*(uint *)(&DAT_00252478 + (ulong)(param_2 - 4U) * 4) < 5)) {
    FUN_003763e0(param_1,param_2);
    return;
  }
  return;
}


// ===== 003767f0  rive::PropertyRecorder::recordStateMachineLayerState =====

/* rive::PropertyRecorder::recordStateMachineLayerState(rive::LayerState const*) */

void __thiscall
rive::PropertyRecorder::recordStateMachineLayerState(PropertyRecorder *this,LayerState *param_1)

{
  LinearAnimation *pLVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  ulong uVar5;
  
  uVar5 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x3d);
  if ((uVar5 & 1) != 0) {
    recordLinearAnimation(this,*(LinearAnimation **)(param_1 + 0x68));
    return;
  }
  uVar5 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x48);
  puVar4 = PTR_m_EmptyAnimation_0067cd00;
  if ((uVar5 & 1) != 0) {
    plVar2 = *(long **)(param_1 + 0x68);
    plVar3 = *(long **)(param_1 + 0x60);
    while (plVar3 != plVar2) {
      pLVar1 = (LinearAnimation *)puVar4;
      if (*(LinearAnimation **)(*plVar3 + 0x10) != (LinearAnimation *)0x0) {
        pLVar1 = *(LinearAnimation **)(*plVar3 + 0x10);
      }
      recordLinearAnimation(this,pLVar1);
      plVar3 = plVar3 + 1;
    }
  }
  return;
}


// ===== 00376894  rive::PropertyRecorder::recordKeyedObject =====

/* rive::PropertyRecorder::recordKeyedObject(rive::KeyedObject const*) */

void __thiscall
rive::PropertyRecorder::recordKeyedObject(PropertyRecorder *this,KeyedObject *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_1 != (KeyedObject *)0x0) {
    uVar2 = getCoreObjectData(this,*(uint *)(param_1 + 0xc));
    if (*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10) != 0) {
      uVar3 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10) >> 3;
      uVar4 = 0;
      if (uVar3 < 2) {
        uVar3 = 1;
      }
      do {
        uVar1 = *(int *)(*(long *)(*(long *)(param_1 + 0x10) + uVar4 * 8) + 0xc) - 4;
        if ((uVar1 < 0x3f4) && (*(uint *)(&DAT_00252478 + (ulong)uVar1 * 4) < 5)) {
          FUN_003763e0(uVar2);
        }
        uVar4 = uVar4 + 1;
      } while (uVar3 != uVar4);
    }
  }
  return;
}


// ===== 00376934  rive::PropertyRecorder::apply =====

/* rive::PropertyRecorder::apply(rive::StateMachineInstance*) */

void __thiscall rive::PropertyRecorder::apply(PropertyRecorder *this,StateMachineInstance *param_1)

{
  float *pfVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  byte *pbVar6;
  byte *pbVar7;
  float *pfVar8;
  byte *pbVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  char cVar14;
  uint uVar15;
  float fVar16;
  
  pbVar6 = *(byte **)(this + 0xa8);
  pbVar9 = *(byte **)(this + 0x90);
  *(byte **)(this + 0x88) = pbVar6;
  if (pbVar6 < pbVar9) {
    uVar13 = 0;
    do {
      uVar12 = 0;
      uVar15 = 0;
      do {
        if (pbVar9 <= pbVar6) {
          lVar10 = *(long *)param_1;
          this[0x98] = (PropertyRecorder)0x1;
          *(byte **)(this + 0x88) = pbVar9;
          lVar10 = (**(code **)(lVar10 + 0x70))(param_1,uVar13);
          goto LAB_003769e0;
        }
        pbVar7 = pbVar6 + 1;
        bVar3 = *pbVar6;
        uVar4 = uVar12 & 0x1f;
        uVar12 = (uVar12 & 0xff) + 7;
        uVar15 = (bVar3 & 0x7f) << (ulong)uVar4 | uVar15;
        pbVar6 = pbVar7;
      } while ((char)bVar3 < '\0');
      lVar10 = *(long *)param_1;
      *(byte **)(this + 0x88) = pbVar7;
      lVar10 = (**(code **)(lVar10 + 0x70))(param_1,uVar13);
      if (uVar15 == 1) {
        pcVar2 = *(char **)(this + 0x88);
        if (*(long *)(this + 0x90) - (long)pcVar2 < 1) {
          cVar14 = '\0';
          this[0x98] = (PropertyRecorder)0x1;
          *(long *)(this + 0x88) = *(long *)(this + 0x90);
        }
        else {
          *(char **)(this + 0x88) = pcVar2 + 1;
          cVar14 = *pcVar2;
        }
        lVar10 = (**(code **)(*(long *)param_1 + 0x78))(param_1,*(long *)(lVar10 + 0x10) + 0x10);
        if ((lVar10 != 0) && ((bool)*(char *)(lVar10 + 0x18) != (cVar14 != '\0'))) {
          *(bool *)(lVar10 + 0x18) = cVar14 != '\0';
LAB_00376a98:
          *(undefined1 *)(*(long *)(lVar10 + 8) + 0x128) = 1;
        }
      }
      else if (uVar15 == 0) {
LAB_003769e0:
        pfVar1 = *(float **)(this + 0x88);
        pfVar8 = *(float **)(this + 0x90);
        if ((long)pfVar8 - (long)pfVar1 < 4) {
          fVar16 = 0.0;
          this[0x98] = (PropertyRecorder)0x1;
        }
        else {
          pfVar8 = pfVar1 + 1;
          fVar16 = *pfVar1;
        }
        lVar11 = *(long *)param_1;
        *(float **)(this + 0x88) = pfVar8;
        lVar10 = (**(code **)(lVar11 + 0x80))(param_1,*(long *)(lVar10 + 0x10) + 0x10);
        if ((lVar10 != 0) && (*(float *)(lVar10 + 0x18) != fVar16)) {
          *(float *)(lVar10 + 0x18) = fVar16;
          goto LAB_00376a98;
        }
      }
      pbVar6 = *(byte **)(this + 0x88);
      pbVar9 = *(byte **)(this + 0x90);
    } while ((pbVar6 < pbVar9) && (bVar5 = uVar13 < 0x13, uVar13 = uVar13 + 1, bVar5));
  }
  return;
}


// ===== 00376ad0  rive::PropertyRecorder::apply =====

/* rive::PropertyRecorder::apply(rive::Artboard*) */

void __thiscall rive::PropertyRecorder::apply(PropertyRecorder *this,Artboard *param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  byte bVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  PropertyRecorder *pPVar13;
  uint uVar14;
  undefined4 uVar15;
  ulong local_a0;
  ulong uStack_98;
  char *local_90;
  byte local_80;
  ulong uStack_78;
  char *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pbVar8 = *(byte **)(this + 0x48);
  pPVar13 = this + 0x28;
  *(byte **)pPVar13 = pbVar8;
  pbVar6 = *(byte **)(this + 0x30);
  if (pbVar8 < pbVar6) {
    do {
      uVar11 = 0;
      uVar14 = 0;
      do {
        if (pbVar6 <= pbVar8) {
          uVar14 = 0;
          this[0x38] = (PropertyRecorder)0x1;
          pbVar9 = pbVar6;
          break;
        }
        pbVar9 = pbVar8 + 1;
        bVar7 = *pbVar8;
        uVar12 = uVar11 & 0x1f;
        uVar11 = (uVar11 & 0xff) + 7;
        uVar14 = (bVar7 & 0x7f) << (ulong)uVar12 | uVar14;
        pbVar8 = pbVar9;
      } while ((char)bVar7 < '\0');
      lVar10 = *(long *)param_1;
      *(byte **)(this + 0x28) = pbVar9;
      uVar3 = (**(code **)(lVar10 + 0x348))(param_1,uVar14);
      pbVar6 = *(byte **)(this + 0x30);
      uVar11 = 0;
      uVar14 = 0;
      pbVar9 = *(byte **)(this + 0x28);
      do {
        if (pbVar6 <= pbVar9) {
          *(byte **)(this + 0x28) = pbVar6;
          this[0x38] = (PropertyRecorder)0x1;
          goto LAB_00376dc8;
        }
        pbVar8 = pbVar9 + 1;
        bVar7 = *pbVar9;
        uVar12 = uVar11 & 0x1f;
        uVar11 = (uVar11 & 0xff) + 7;
        uVar14 = (bVar7 & 0x7f) << (ulong)uVar12 | uVar14;
        pbVar9 = pbVar8;
      } while ((char)bVar7 < '\0');
      *(byte **)pPVar13 = pbVar8;
      if (uVar14 != 0) {
        uVar11 = 0;
        do {
          pbVar8 = *(byte **)(this + 0x30);
          uVar12 = 0;
          uVar4 = 0;
          pbVar6 = *(byte **)(this + 0x28);
          do {
            pbVar9 = pbVar6;
            if (pbVar8 <= pbVar9) {
              this[0x38] = (PropertyRecorder)0x1;
              *(byte **)(this + 0x28) = pbVar8;
              goto LAB_00376bc4;
            }
            pbVar6 = pbVar9 + 1;
            uVar5 = uVar12 & 0x1f;
            uVar12 = (uVar12 & 0xff) + 7;
            uVar4 = (*pbVar9 & 0x7f) << (ulong)uVar5 | uVar4;
          } while ((char)*pbVar9 < '\0');
          *(byte **)pPVar13 = pbVar6;
          if (uVar4 - 4 < 0x3f4) {
            uVar12 = *(uint *)(&DAT_00252478 + (ulong)(uVar4 - 4) * 4);
            if ((int)uVar12 < 2) {
              uVar5 = uVar12;
              if (uVar12 == 0) {
                do {
                  if (pbVar8 <= pbVar6) {
                    uVar5 = 0;
                    this[0x38] = (PropertyRecorder)0x1;
                    pbVar9 = pbVar8;
                    break;
                  }
                  pbVar9 = pbVar6 + 1;
                  bVar7 = *pbVar6;
                  uVar1 = uVar12 & 0x1f;
                  uVar12 = (uVar12 & 0xff) + 7;
                  uVar5 = (bVar7 & 0x7f) << (ulong)uVar1 | uVar5;
                  pbVar6 = pbVar9;
                } while ((char)bVar7 < '\0');
                *(byte **)pPVar13 = pbVar9;
                FUN_00376dfc(uVar3,uVar4,uVar5);
              }
              else if (uVar12 == 1) {
                BinaryDataReader::readString();
                if ((local_80 & 1) == 0) {
                  local_a0 = (ulong)local_80;
                  uStack_98 = uStack_78;
                  local_90 = local_70;
                }
                else {
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  __init_copy_ctor_external
                            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                              *)&local_a0,local_70,uStack_78);
                }
                FUN_00377e50(uVar3,uVar4,&local_a0);
                if ((local_a0 & 1) != 0) {
                  operator_delete(local_90);
                }
                if ((local_80 & 1) != 0) {
                  operator_delete(local_70);
                }
              }
            }
            else if (uVar12 == 2) {
              if ((long)pbVar8 - (long)pbVar6 < 4) {
                uVar15 = 0;
                this[0x38] = (PropertyRecorder)0x1;
              }
              else {
                pbVar8 = pbVar9 + 5;
                uVar15 = *(undefined4 *)pbVar6;
              }
              *(byte **)pPVar13 = pbVar8;
              FUN_003575a8(uVar15,uVar3);
            }
            else if (uVar12 == 3) {
              uVar12 = 0;
              uVar5 = 0;
              do {
                if (pbVar8 <= pbVar6) {
                  uVar5 = 0;
                  this[0x38] = (PropertyRecorder)0x1;
                  pbVar9 = pbVar8;
                  break;
                }
                pbVar9 = pbVar6 + 1;
                bVar7 = *pbVar6;
                uVar1 = uVar12 & 0x1f;
                uVar12 = (uVar12 & 0xff) + 7;
                uVar5 = (bVar7 & 0x7f) << (ulong)uVar1 | uVar5;
                pbVar6 = pbVar9;
              } while ((char)bVar7 < '\0');
              *(byte **)pPVar13 = pbVar9;
              FUN_00358888(uVar3,uVar4,uVar5);
            }
            else if (uVar12 == 4) {
              if ((long)pbVar8 - (long)pbVar6 < 1) {
                bVar7 = 0;
                this[0x38] = (PropertyRecorder)0x1;
                *(byte **)(this + 0x28) = pbVar8;
              }
              else {
                *(byte **)pPVar13 = pbVar9 + 2;
                bVar7 = *pbVar6;
              }
              FUN_00379548(uVar3,uVar4,bVar7 != 0);
            }
          }
LAB_00376bc4:
          uVar11 = uVar11 + 1;
        } while (uVar11 != uVar14);
        pbVar8 = *(byte **)(this + 0x28);
        pbVar6 = *(byte **)(this + 0x30);
      }
    } while (pbVar8 < pbVar6);
  }
LAB_00376dc8:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00376dfc  FUN_00376dfc =====

void FUN_00376dfc(long *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  switch(param_2) {
  case 5:
  case 0x38:
  case 0xe0:
  case 0x36b:
    if ((int)param_1[5] != param_3) {
      *(int *)(param_1 + 5) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00376f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x58))();
      return;
    }
    break;
  case 0x17:
  case 0x128:
    iVar1 = *(int *)((long)param_1 + 0x134);
    goto joined_r0x00377148;
  case 0x28:
    if ((int)param_1[0x1c] != param_3) {
      *(int *)(param_1 + 0x1c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x003776f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x100))();
      return;
    }
    break;
  case 0x30:
    if (*(int *)((long)param_1 + 0xe4) != param_3) {
      *(int *)((long)param_1 + 0xe4) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x108))();
      return;
    }
    break;
  case 0x31:
    if ((int)param_1[0x1d] != param_3) {
      *(int *)(param_1 + 0x1d) = param_3;
                    /* WARNING: Could not recover jumptable at 0x003770e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x110))();
      return;
    }
    break;
  case 0x33:
  case 0x35:
  case 0x43:
  case 0xa5:
  case 0x189:
  case 0x225:
  case 0x3c5:
  case 0x3d4:
    iVar1 = *(int *)((long)param_1 + 0xc);
    goto joined_r0x00376e54;
  case 0x39:
    iVar1 = *(int *)((long)param_1 + 0x2c);
    goto joined_r0x003776d0;
  case 0x3b:
    if (*(int *)((long)param_1 + 0x34) != param_3) {
      *(int *)((long)param_1 + 0x34) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x70))();
      return;
    }
    break;
  case 0x3c:
    if ((int)param_1[7] != param_3) {
      *(int *)(param_1 + 7) = param_3;
                    /* WARNING: Could not recover jumptable at 0x003774f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x78))();
      return;
    }
    break;
  case 0x3d:
    if (*(int *)((long)param_1 + 0x3c) != param_3) {
      *(int *)((long)param_1 + 0x3c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x80))();
      return;
    }
    break;
  case 0x44:
    if (*(int *)((long)param_1 + 0x14) != param_3) {
      *(int *)((long)param_1 + 0x14) = param_3;
                    /* WARNING: Could not recover jumptable at 0x003771e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x58))();
      return;
    }
    break;
  case 0x45:
    if ((int)param_1[3] != param_3) {
      *(int *)(param_1 + 3) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x60))();
      return;
    }
    break;
  case 0x5c:
  case 0x5f:
  case 0x66:
  case 0x110:
  case 0x121:
  case 0x164:
  case 0x30a:
  case 0x368:
  case 0x36c:
  case 0x3a6:
  case 0x3d6:
    iVar1 = (int)param_1[0x11];
    goto joined_r0x00376e9c;
  case 0x5d:
  case 0x67:
  case 0x165:
  case 0x369:
  case 0x3a7:
    iVar1 = *(int *)((long)param_1 + 0x8c);
    goto joined_r0x00376fb8;
  case 0x6e:
    if ((int)param_1[0x13] != param_3) {
      *(int *)(param_1 + 0x13) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xa0))();
      return;
    }
    break;
  case 0x6f:
    if (*(int *)((long)param_1 + 0x9c) != param_3) {
      *(int *)((long)param_1 + 0x9c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x003777d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xa8))();
      return;
    }
    break;
  case 0x70:
    if ((int)param_1[0x14] != param_3) {
      *(int *)(param_1 + 0x14) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xb0))();
      return;
    }
    break;
  case 0x71:
    if (*(int *)((long)param_1 + 0xa4) != param_3) {
      *(int *)((long)param_1 + 0xa4) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xb8))();
      return;
    }
    break;
  case 0x75:
    iVar1 = *(int *)((long)param_1 + 0x94);
    goto joined_r0x00377a28;
  case 0x77:
  case 0xed:
  case 0x22a:
  case 0x2a0:
  case 0x2db:
  case 0x35a:
  case 0x39a:
    iVar1 = (int)param_1[0x11];
joined_r0x00376e9c:
    if (iVar1 != param_3) {
      *(int *)(param_1 + 0x11) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00376eac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x90))();
      return;
    }
    break;
  case 0x78:
  case 0x2a1:
    iVar1 = *(int *)((long)param_1 + 0x8c);
joined_r0x00376fb8:
    if (iVar1 != param_3) {
      *(int *)((long)param_1 + 0x8c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00376fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x98))();
      return;
    }
    break;
  case 0x79:
  case 0x14f:
  case 0x2ec:
    iVar1 = (int)param_1[0x14];
    goto joined_r0x00376f80;
  case 0x7a:
  case 0x277:
    if ((int)param_1[5] != param_3) {
      *(int *)(param_1 + 5) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00376fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x78))();
      return;
    }
    break;
  case 0x7d:
    if ((int)param_1[0x37] != param_3) {
      *(int *)(param_1 + 0x37) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x220))();
      return;
    }
    break;
  case 0x80:
    iVar1 = *(int *)((long)param_1 + 0x134);
joined_r0x00377148:
    if (iVar1 != param_3) {
      *(int *)((long)param_1 + 0x134) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1c8))();
      return;
    }
    break;
  case 0x81:
    if ((int)param_1[0x27] != param_3) {
      *(int *)(param_1 + 0x27) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1d0))();
      return;
    }
    break;
  case 0x95:
    if (*(int *)((long)param_1 + 100) != param_3) {
      *(int *)((long)param_1 + 100) = param_3;
                    /* WARNING: Could not recover jumptable at 0x003774bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x68))();
      return;
    }
    break;
  case 0x97:
  case 0x218:
    if ((int)param_1[8] != param_3) {
      *(int *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x003770bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x50))();
      return;
    }
    break;
  case 0x98:
    if (*(int *)((long)param_1 + 0x44) != param_3) {
      *(int *)((long)param_1 + 0x44) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x58))();
      return;
    }
    break;
  case 0x9b:
  case 0x195:
  case 0x28a:
  case 0x3a3:
  case 0x3f7:
    if (*(int *)((long)param_1 + 0xc) != param_3) {
      *(int *)((long)param_1 + 0xc) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00376ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x68))();
      return;
    }
    break;
  case 0x9c:
    if ((int)param_1[2] != param_3) {
      *(int *)(param_1 + 2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x70))();
      return;
    }
    break;
  case 0x9e:
    if ((int)param_1[9] != param_3) {
      *(int *)(param_1 + 9) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x60))();
      return;
    }
    break;
  case 0xa0:
    if (*(int *)((long)param_1 + 0x4c) != param_3) {
      *(int *)((long)param_1 + 0x4c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x68))();
      return;
    }
    break;
  case 0xa7:
    if ((int)param_1[0xf] != param_3) {
      *(int *)(param_1 + 0xf) = param_3;
                    /* WARNING: Could not recover jumptable at 0x003777ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x60))();
      return;
    }
    break;
  case 0xa8:
    if ((int)param_1[3] != param_3) {
      *(int *)(param_1 + 3) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x58))();
      return;
    }
    break;
  case 0xab:
    if ((int)param_1[0x12] != param_3) {
      *(int *)(param_1 + 0x12) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x98))();
      return;
    }
    break;
  case 0xad:
  case 0x2d2:
    iVar1 = *(int *)((long)param_1 + 0x8c);
    goto joined_r0x003778bc;
  case 0xaf:
  case 0xb2:
  case 0xb4:
    if (*(int *)((long)param_1 + 0x9c) != param_3) {
      *(int *)((long)param_1 + 0x9c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00376f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xc0))();
      return;
    }
    break;
  case 0xb3:
    if ((int)param_1[0x13] != param_3) {
      *(int *)(param_1 + 0x13) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xb8))();
      return;
    }
    break;
  case 0xc3:
    if ((int)param_1[0x14] != param_3) {
      *(int *)(param_1 + 0x14) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 200))();
      return;
    }
    break;
  case 0xc5:
    if (*(int *)((long)param_1 + 0x174) != param_3) {
      *(int *)((long)param_1 + 0x174) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x240))();
      return;
    }
    break;
  case 0xc6:
  case 0x236:
  case 0x390:
    iVar1 = (int)param_1[0x14];
joined_r0x00376f80:
    if (iVar1 != param_3) {
      *(int *)(param_1 + 0x14) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00376f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x98))();
      return;
    }
    break;
  case 0xcc:
    if ((int)param_1[5] != param_3) {
      *(int *)(param_1 + 5) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x68))();
      return;
    }
    break;
  case 0xce:
  case 0x119:
    iVar1 = *(int *)((long)param_1 + 0x174);
    goto joined_r0x00376fe4;
  case 0xe1:
    if ((int)param_1[0xc] != param_3) {
      *(int *)(param_1 + 0xc) = param_3;
                    /* WARNING: Could not recover jumptable at 0x003772a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x78))();
      return;
    }
    break;
  case 0xe3:
  case 0xf0:
  case 0x185:
  case 0x188:
  case 0x3a2:
  case 0x3b8:
  case 0x3d2:
  case 0x3f3:
    if ((int)param_1[2] != param_3) {
      *(int *)(param_1 + 2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00376e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x60))();
      return;
    }
    break;
  case 0xe4:
    if ((int)param_1[3] != param_3) {
      *(int *)(param_1 + 3) = param_3;
                    /* WARNING: Could not recover jumptable at 0x003771c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x80))();
      return;
    }
    break;
  case 0xec:
    if (*(int *)((long)param_1 + 0x98c) != param_3) {
      *(int *)((long)param_1 + 0x98c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0037713c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 800))();
      return;
    }
    break;
  case 0xf9:
    if ((int)param_1[0x1b] != param_3) {
      *(int *)(param_1 + 0x1b) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xa8))();
      return;
    }
    break;
  case 0x117:
  case 0x13c:
    if (*(int *)((long)param_1 + 0xac) != param_3) {
      *(int *)((long)param_1 + 0xac) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0037704c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xb0))();
      return;
    }
    break;
  case 0x11c:
    if ((int)param_1[0x2f] != param_3) {
      *(int *)(param_1 + 0x2f) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x238))();
      return;
    }
    break;
  case 0x11f:
    if (*(int *)((long)param_1 + 0x17c) != param_3) {
      *(int *)((long)param_1 + 0x17c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x240))();
      return;
    }
    break;
  case 0x12a:
    if ((int)param_1[4] != param_3) {
      *(int *)(param_1 + 4) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0037752c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x68))();
      return;
    }
    break;
  case 0x12d:
    if ((int)param_1[0x15] != param_3) {
      *(int *)(param_1 + 0x15) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xd0))();
      return;
    }
    break;
  case 0x12e:
    if (*(int *)((long)param_1 + 0xac) != param_3) {
      *(int *)((long)param_1 + 0xac) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xd8))();
      return;
    }
    break;
  case 0x138:
    if ((int)param_1[0x16] != param_3) {
      *(int *)(param_1 + 0x16) = param_3;
                    /* WARNING: Could not recover jumptable at 0x003772fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xe0))();
      return;
    }
    break;
  case 0x139:
    if (*(int *)((long)param_1 + 0xb4) != param_3) {
      *(int *)((long)param_1 + 0xb4) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xe8))();
      return;
    }
    break;
  case 0x140:
    iVar1 = (int)param_1[0x11];
    goto joined_r0x003776c0;
  case 0x145:
    if ((int)param_1[0x16] != param_3) {
      *(int *)(param_1 + 0x16) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xb8))();
      return;
    }
    break;
  case 0x146:
    if (*(int *)((long)param_1 + 0xb4) != param_3) {
      *(int *)((long)param_1 + 0xb4) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xc0))();
      return;
    }
    break;
  case 0x15d:
    if ((int)param_1[10] != param_3) {
      *(int *)(param_1 + 10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x003772c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x70))();
      return;
    }
    break;
  case 0x15e:
    if (*(int *)((long)param_1 + 0x54) != param_3) {
      *(int *)((long)param_1 + 0x54) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0037736c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x78))();
      return;
    }
    break;
  case 0x179:
    if (*(int *)((long)param_1 + 0x194) != param_3) {
      *(int *)((long)param_1 + 0x194) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x270))();
      return;
    }
    break;
  case 0x17a:
    if ((int)param_1[0x19] != param_3) {
      *(int *)(param_1 + 0x19) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xe8))();
      return;
    }
    break;
  case 399:
    if (*(int *)((long)param_1 + 100) != param_3) {
      *(int *)((long)param_1 + 100) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x80))();
      return;
    }
    break;
  case 400:
    if (*(int *)((long)param_1 + 0x14) != param_3) {
      *(int *)((long)param_1 + 0x14) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x68))();
      return;
    }
    break;
  case 0x198:
    if ((int)param_1[0x18] != param_3) {
      *(int *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xa0))();
      return;
    }
    break;
  case 0x1ee:
    if (*(int *)((long)param_1 + 0x17c) != param_3) {
      *(int *)((long)param_1 + 0x17c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x248))();
      return;
    }
    break;
  case 0x219:
    if ((int)param_1[0xb] != param_3) {
      *(int *)(param_1 + 0xb) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x80))();
      return;
    }
    break;
  case 0x21a:
    if ((int)param_1[0x42] != param_3) {
      *(int *)(param_1 + 0x42) = param_3;
                    /* WARNING: Could not recover jumptable at 0x003779ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x358))();
      return;
    }
    break;
  case 0x226:
  case 0x3c2:
    iVar1 = (int)param_1[2];
    goto joined_r0x00376fd4;
  case 0x230:
  case 0x241:
  case 0x32e:
  case 0x338:
  case 0x34e:
  case 0x3c6:
    if ((int)param_1[0x22] != param_3) {
      *(int *)(param_1 + 0x22) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00376ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xa8))();
      return;
    }
    break;
  case 0x235:
    if ((int)param_1[6] != param_3) {
      *(int *)(param_1 + 6) = param_3;
                    /* WARNING: Could not recover jumptable at 0x003771ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x68))();
      return;
    }
    break;
  case 0x23e:
  case 0x2c4:
    if ((int)param_1[7] != param_3) {
      *(int *)(param_1 + 7) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x70))();
      return;
    }
    break;
  case 0x247:
    if ((int)param_1[0x132] != param_3) {
      *(int *)(param_1 + 0x132) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x328))();
      return;
    }
    break;
  case 0x24a:
  case 0x27d:
  case 0x2a7:
  case 0x2ae:
  case 0x337:
  case 0x343:
  case 0x3cb:
  case 0x3f2:
    iVar1 = *(int *)((long)param_1 + 0xc);
joined_r0x00376e54:
    if (iVar1 != param_3) {
      *(int *)((long)param_1 + 0xc) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00376e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x50))();
      return;
    }
    break;
  case 0x24b:
  case 0x3cc:
    iVar1 = (int)param_1[2];
joined_r0x00376fd4:
    if (iVar1 != param_3) {
      *(int *)(param_1 + 2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x003770a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x58))();
      return;
    }
    break;
  case 0x24d:
    if (*(int *)((long)param_1 + 0x104) != param_3) {
      *(int *)((long)param_1 + 0x104) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x188))();
      return;
    }
    break;
  case 0x24e:
    if ((int)param_1[0x21] != param_3) {
      *(int *)(param_1 + 0x21) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 400))();
      return;
    }
    break;
  case 0x24f:
    if (*(int *)((long)param_1 + 0x10c) != param_3) {
      *(int *)((long)param_1 + 0x10c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x003773c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x198))();
      return;
    }
    break;
  case 0x254:
    if (*(int *)((long)param_1 + 0x114) != param_3) {
      *(int *)((long)param_1 + 0x114) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1a8))();
      return;
    }
    break;
  case 0x255:
    if ((int)param_1[0x23] != param_3) {
      *(int *)(param_1 + 0x23) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1b0))();
      return;
    }
    break;
  case 0x256:
    if (*(int *)((long)param_1 + 0x11c) != param_3) {
      *(int *)((long)param_1 + 0x11c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0037770c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1b8))();
      return;
    }
    break;
  case 599:
    if ((int)param_1[0x24] != param_3) {
      *(int *)(param_1 + 0x24) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1c0))();
      return;
    }
    break;
  case 600:
    if (*(int *)((long)param_1 + 0x124) != param_3) {
      *(int *)((long)param_1 + 0x124) = param_3;
                    /* WARNING: Could not recover jumptable at 0x003779e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1c8))();
      return;
    }
    break;
  case 0x259:
    if ((int)param_1[0x25] != param_3) {
      *(int *)(param_1 + 0x25) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1d0))();
      return;
    }
    break;
  case 0x25a:
    if (*(int *)((long)param_1 + 300) != param_3) {
      *(int *)((long)param_1 + 300) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0037759c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1d8))();
      return;
    }
    break;
  case 0x25b:
    if ((int)param_1[0x26] != param_3) {
      *(int *)(param_1 + 0x26) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1e0))();
      return;
    }
    break;
  case 0x25c:
    if (*(int *)((long)param_1 + 0x134) != param_3) {
      *(int *)((long)param_1 + 0x134) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1e8))();
      return;
    }
    break;
  case 0x25d:
    if ((int)param_1[0x27] != param_3) {
      *(int *)(param_1 + 0x27) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0037721c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1f0))();
      return;
    }
    break;
  case 0x25f:
    if ((int)param_1[0x28] != param_3) {
      *(int *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x003772e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x200))();
      return;
    }
    break;
  case 0x260:
    if (*(int *)((long)param_1 + 0x144) != param_3) {
      *(int *)((long)param_1 + 0x144) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x208))();
      return;
    }
    break;
  case 0x261:
    if ((int)param_1[0x29] != param_3) {
      *(int *)(param_1 + 0x29) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x210))();
      return;
    }
    break;
  case 0x262:
    if (*(int *)((long)param_1 + 0x14c) != param_3) {
      *(int *)((long)param_1 + 0x14c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x218))();
      return;
    }
    break;
  case 0x263:
    if ((int)param_1[0x2a] != param_3) {
      *(int *)(param_1 + 0x2a) = param_3;
                    /* WARNING: Could not recover jumptable at 0x003773f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x220))();
      return;
    }
    break;
  case 0x264:
    if (*(int *)((long)param_1 + 0x154) != param_3) {
      *(int *)((long)param_1 + 0x154) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x228))();
      return;
    }
    break;
  case 0x265:
    if ((int)param_1[0x2b] != param_3) {
      *(int *)(param_1 + 0x2b) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x230))();
      return;
    }
    break;
  case 0x266:
    if (*(int *)((long)param_1 + 0x15c) != param_3) {
      *(int *)((long)param_1 + 0x15c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x003774d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x238))();
      return;
    }
    break;
  case 0x267:
    if ((int)param_1[0x2c] != param_3) {
      *(int *)(param_1 + 0x2c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x240))();
      return;
    }
    break;
  case 0x268:
    if (*(int *)((long)param_1 + 0x164) != param_3) {
      *(int *)((long)param_1 + 0x164) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x248))();
      return;
    }
    break;
  case 0x269:
    if ((int)param_1[0x2d] != param_3) {
      *(int *)(param_1 + 0x2d) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x250))();
      return;
    }
    break;
  case 0x26a:
    if (*(int *)((long)param_1 + 0x16c) != param_3) {
      *(int *)((long)param_1 + 0x16c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x003778b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 600))();
      return;
    }
    break;
  case 0x26b:
    if ((int)param_1[0x2e] != param_3) {
      *(int *)(param_1 + 0x2e) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x260))();
      return;
    }
    break;
  case 0x26c:
    if (*(int *)((long)param_1 + 0x174) != param_3) {
      *(int *)((long)param_1 + 0x174) = param_3;
                    /* WARNING: Could not recover jumptable at 0x003773dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x268))();
      return;
    }
    break;
  case 0x26d:
    if ((int)param_1[0x2f] != param_3) {
      *(int *)(param_1 + 0x2f) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x270))();
      return;
    }
    break;
  case 0x26e:
    if (*(int *)((long)param_1 + 0x17c) != param_3) {
      *(int *)((long)param_1 + 0x17c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x003778e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x278))();
      return;
    }
    break;
  case 0x26f:
    if ((int)param_1[0x30] != param_3) {
      *(int *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x280))();
      return;
    }
    break;
  case 0x270:
    if (*(int *)((long)param_1 + 0x184) != param_3) {
      *(int *)((long)param_1 + 0x184) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x288))();
      return;
    }
    break;
  case 0x271:
    if ((int)param_1[0x31] != param_3) {
      *(int *)(param_1 + 0x31) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x290))();
      return;
    }
    break;
  case 0x272:
    if (*(int *)((long)param_1 + 0x18c) != param_3) {
      *(int *)((long)param_1 + 0x18c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x298))();
      return;
    }
    break;
  case 0x273:
    if ((int)param_1[0x32] != param_3) {
      *(int *)(param_1 + 0x32) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x2a0))();
      return;
    }
    break;
  case 0x274:
    if (*(int *)((long)param_1 + 0x194) != param_3) {
      *(int *)((long)param_1 + 0x194) = param_3;
                    /* WARNING: Could not recover jumptable at 0x003774a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x2a8))();
      return;
    }
    break;
  case 0x275:
    if ((int)param_1[0x33] != param_3) {
      *(int *)(param_1 + 0x33) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x2b0))();
      return;
    }
    break;
  case 0x276:
    if (*(int *)((long)param_1 + 0x19c) != param_3) {
      *(int *)((long)param_1 + 0x19c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x003779c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x2b8))();
      return;
    }
    break;
  case 0x278:
    if ((int)param_1[0x20] != param_3) {
      *(int *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0037728c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x180))();
      return;
    }
    break;
  case 0x28d:
  case 0x2a5:
  case 0x2b1:
  case 0x3d1:
    if (*(int *)((long)param_1 + 0xc) != param_3) {
      *(int *)((long)param_1 + 0xc) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00376f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x58))();
      return;
    }
    break;
  case 0x28f:
    if ((int)param_1[0x1f] != param_3) {
      *(int *)(param_1 + 0x1f) = param_3;
                    /* WARNING: Could not recover jumptable at 0x003775f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x170))();
      return;
    }
    break;
  case 0x290:
    if (*(int *)((long)param_1 + 0xfc) != param_3) {
      *(int *)((long)param_1 + 0xfc) = param_3;
                    /* WARNING: Could not recover jumptable at 0x003773a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x178))();
      return;
    }
    break;
  case 0x294:
  case 0x3cd:
    if (*(int *)((long)param_1 + 0x14) != param_3) {
      *(int *)((long)param_1 + 0x14) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x60))();
      return;
    }
    break;
  case 0x299:
    if ((int)param_1[0x43] != param_3) {
      *(int *)(param_1 + 0x43) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0037744c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x368))();
      return;
    }
    break;
  case 0x29a:
    if (*(int *)((long)param_1 + 0x21c) != param_3) {
      *(int *)((long)param_1 + 0x21c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x370))();
      return;
    }
    break;
  case 0x29b:
    if ((int)param_1[0x44] != param_3) {
      *(int *)(param_1 + 0x44) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x378))();
      return;
    }
    break;
  case 0x29c:
    if (*(int *)((long)param_1 + 0x224) != param_3) {
      *(int *)((long)param_1 + 0x224) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x380))();
      return;
    }
    break;
  case 0x29d:
  case 0x2aa:
  case 0x2c9:
  case 0x2e7:
  case 0x2ea:
  case 0x2f5:
  case 0x2fc:
  case 0x330:
  case 0x377:
    iVar1 = (int)param_1[0x1b];
    goto joined_r0x00377aa8;
  case 0x2ab:
    if ((int)param_1[0x33] != param_3) {
      *(int *)(param_1 + 0x33) = param_3;
                    /* WARNING: Could not recover jumptable at 0x003776b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x278))();
      return;
    }
    break;
  case 0x2ad:
    if (*(int *)((long)param_1 + 0x19c) != param_3) {
      *(int *)((long)param_1 + 0x19c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x280))();
      return;
    }
    break;
  case 0x2af:
    if ((int)param_1[0x22] != param_3) {
      *(int *)(param_1 + 0x22) = param_3;
                    /* WARNING: Could not recover jumptable at 0x003775b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xb0))();
      return;
    }
    break;
  case 0x2c1:
    if ((int)param_1[0x1e] != param_3) {
      *(int *)(param_1 + 0x1e) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x160))();
      return;
    }
    break;
  case 0x2c5:
    if ((int)param_1[8] != param_3) {
      *(int *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0037785c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x58))();
      return;
    }
    break;
  case 0x2ca:
  case 0x2f6:
  case 0x2fd:
    if (*(int *)((long)param_1 + 0xdc) != param_3) {
      *(int *)((long)param_1 + 0xdc) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00376f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xa8))();
      return;
    }
    break;
  case 0x2cb:
    if ((int)param_1[0x1c] != param_3) {
      *(int *)(param_1 + 0x1c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0037777c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xb0))();
      return;
    }
    break;
  case 0x2d5:
    if ((int)param_1[0x13] != param_3) {
      *(int *)(param_1 + 0x13) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 200))();
      return;
    }
    break;
  case 0x2d6:
    if ((int)param_1[0x15] != param_3) {
      *(int *)(param_1 + 0x15) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x130))();
      return;
    }
    break;
  case 0x2d7:
    if (*(int *)((long)param_1 + 0xa4) != param_3) {
      *(int *)((long)param_1 + 0xa4) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377a64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x128))();
      return;
    }
    break;
  case 0x2e9:
    if ((int)param_1[0x1f] != param_3) {
      *(int *)(param_1 + 0x1f) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xb0))();
      return;
    }
    break;
  case 0x2eb:
    if (*(int *)((long)param_1 + 0xa4) != param_3) {
      *(int *)((long)param_1 + 0xa4) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0037760c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xa8))();
      return;
    }
    break;
  case 0x307:
  case 0x308:
    if ((int)param_1[3] != param_3) {
      *(int *)(param_1 + 3) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x50))();
      return;
    }
    break;
  case 800:
  case 0x350:
    iVar1 = *(int *)((long)param_1 + 0x174);
joined_r0x00376fe4:
    if (iVar1 != param_3) {
      *(int *)((long)param_1 + 0x174) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x230))();
      return;
    }
    break;
  case 0x358:
    iVar1 = *(int *)((long)param_1 + 0x94);
joined_r0x00377a28:
    if (iVar1 != param_3) {
      *(int *)((long)param_1 + 0x94) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377da0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xa8))();
      return;
    }
    break;
  case 0x35d:
    if ((int)param_1[0x13] != param_3) {
      *(int *)(param_1 + 0x13) = param_3;
                    /* WARNING: Could not recover jumptable at 0x003775d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xb0))();
      return;
    }
    break;
  case 0x35e:
    if (*(int *)((long)param_1 + 0x9c) != param_3) {
      *(int *)((long)param_1 + 0x9c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0037767c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xb8))();
      return;
    }
    break;
  case 0x35f:
    if ((int)param_1[0x14] != param_3) {
      *(int *)(param_1 + 0x14) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xc0))();
      return;
    }
    break;
  case 0x366:
    iVar1 = (int)param_1[0x11];
joined_r0x003776c0:
    if (iVar1 != param_3) {
      *(int *)(param_1 + 0x11) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377dbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x98))();
      return;
    }
    break;
  case 0x36a:
    if (*(int *)((long)param_1 + 0x1ac) != param_3) {
      *(int *)((long)param_1 + 0x1ac) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1f8))();
      return;
    }
    break;
  case 0x37c:
    iVar1 = (int)param_1[0x1b];
joined_r0x00377aa8:
    if (iVar1 != param_3) {
      *(int *)(param_1 + 0x1b) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00376e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xa0))();
      return;
    }
    break;
  case 0x37d:
    if (*(int *)((long)param_1 + 0x9c) != param_3) {
      *(int *)((long)param_1 + 0x9c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x003777b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xa0))();
      return;
    }
    break;
  case 0x3a4:
    if (*(int *)((long)param_1 + 0x1a4) != param_3) {
      *(int *)((long)param_1 + 0x1a4) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0037793c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x290))();
      return;
    }
    break;
  case 0x3bc:
    iVar1 = *(int *)((long)param_1 + 0x8c);
joined_r0x003778bc:
    if (iVar1 != param_3) {
      *(int *)((long)param_1 + 0x8c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x003778cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xa8))();
      return;
    }
    break;
  case 0x3bd:
    iVar1 = *(int *)((long)param_1 + 0x2c);
joined_r0x003776d0:
    if (iVar1 != param_3) {
      *(int *)((long)param_1 + 0x2c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x60))();
      return;
    }
    break;
  case 0x3ce:
    if ((int)param_1[0x30] != param_3) {
      *(int *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x248))();
      return;
    }
    break;
  case 0x3da:
    if ((int)param_1[0x1b] != param_3) {
      *(int *)(param_1 + 0x1b) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xb0))();
      return;
    }
    break;
  case 0x3db:
    if (*(int *)((long)param_1 + 0xdc) != param_3) {
      *(int *)((long)param_1 + 0xdc) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xb8))();
      return;
    }
    break;
  case 0x3dc:
    if ((int)param_1[0x1c] != param_3) {
      *(int *)(param_1 + 0x1c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00377840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xc0))();
      return;
    }
  }
  return;
}


// ===== 00377e50  FUN_00377e50 =====

void FUN_00377e50(long *param_1,int param_2,ulong *param_3)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  char *pcVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar7;
  ulong uVar8;
  char *pcVar9;
  char **ppcVar10;
  byte bVar11;
  ulong local_340;
  size_t sStack_338;
  char *local_330 [2];
  ulong local_320;
  size_t sStack_318;
  char *local_310 [2];
  ulong local_300;
  size_t sStack_2f8;
  char *local_2f0 [2];
  ulong local_2e0;
  size_t sStack_2d8;
  char *local_2d0 [2];
  ulong local_2c0;
  size_t sStack_2b8;
  char *local_2b0 [2];
  ulong local_2a0;
  size_t sStack_298;
  char *local_290 [2];
  ulong local_280;
  size_t sStack_278;
  char *local_270 [2];
  ulong local_260;
  size_t sStack_258;
  char *local_250 [2];
  ulong local_240;
  size_t sStack_238;
  char *local_230 [2];
  ulong local_220;
  size_t sStack_218;
  char *local_210 [2];
  ulong local_200;
  size_t sStack_1f8;
  char *local_1f0 [2];
  ulong local_1e0;
  size_t sStack_1d8;
  char *local_1d0 [2];
  ulong local_1c0;
  size_t sStack_1b8;
  char *local_1b0 [2];
  ulong local_1a0;
  size_t sStack_198;
  char *local_190 [2];
  ulong local_180;
  size_t sStack_178;
  char *local_170 [2];
  ulong local_160;
  size_t sStack_158;
  char *local_150 [2];
  ulong local_140;
  size_t sStack_138;
  char *local_130 [2];
  ulong local_120;
  size_t sStack_118;
  char *local_110 [2];
  ulong local_100;
  size_t sStack_f8;
  char *local_f0 [2];
  ulong local_e0;
  size_t sStack_d8;
  char *local_d0 [2];
  ulong local_c0;
  size_t sStack_b8;
  char *local_b0 [2];
  ulong local_a0;
  size_t sStack_98;
  char *local_90 [2];
  ulong local_80;
  size_t sStack_78;
  char *local_70 [2];
  ulong local_60;
  size_t sStack_58;
  char *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  if (param_2 < 0x242) {
    if (param_2 < 0x10c) {
      if (param_2 < 0xcb) {
        if (param_2 == 4) {
          if ((*param_3 & 1) == 0) {
            sStack_78 = param_3[1];
            local_80 = *param_3;
            local_70[0] = (char *)param_3[2];
          }
          else {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            __init_copy_ctor_external
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_80,(char *)param_3[2],param_3[1]);
          }
          bVar7 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )(param_1 + 2);
          ppcVar10 = local_70;
          uVar8 = (ulong)((byte)bVar7 >> 1);
          sVar1 = uVar8;
          if (((byte)bVar7 & 1) != 0) {
            sVar1 = param_1[3];
          }
          bVar11 = (byte)local_80._0_1_ & 1;
          sVar2 = (ulong)((byte)local_80._0_1_ >> 1);
          if ((local_80 & 1) != 0) {
            sVar2 = sStack_78;
          }
          if (sVar1 != sVar2) {
LAB_0037916c:
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)(param_1 + 2),(basic_string *)&local_80);
            (**(code **)(*param_1 + 0x50))(param_1);
            bVar7 = local_80._0_1_;
            goto LAB_0037950c;
          }
          pcVar6 = (char *)((ulong)&local_80 | 1);
          if ((local_80 & 1) != 0) {
            pcVar6 = local_70[0];
          }
          if (((byte)bVar7 & 1) == 0) {
            if (1 < (byte)bVar7) {
              pcVar9 = (char *)((long)param_1 + 0x11);
              do {
                if (*pcVar9 != *pcVar6) goto LAB_0037916c;
                uVar8 = uVar8 - 1;
                pcVar9 = pcVar9 + 1;
                pcVar6 = pcVar6 + 1;
              } while (uVar8 != 0);
            }
          }
          else {
            iVar5 = memcmp((void *)param_1[4],pcVar6,param_1[3]);
            if (iVar5 != 0) goto LAB_0037916c;
          }
        }
        else if (param_2 == 0x37) {
          if ((*param_3 & 1) == 0) {
            sStack_138 = param_3[1];
            local_140 = *param_3;
            local_130[0] = (char *)param_3[2];
          }
          else {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            __init_copy_ctor_external
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_140,(char *)param_3[2],param_3[1]);
          }
          bVar7 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )(param_1 + 2);
          ppcVar10 = local_130;
          uVar8 = (ulong)((byte)bVar7 >> 1);
          sVar1 = uVar8;
          if (((byte)bVar7 & 1) != 0) {
            sVar1 = param_1[3];
          }
          bVar11 = (byte)local_140._0_1_ & 1;
          sVar2 = (ulong)((byte)local_140._0_1_ >> 1);
          if ((local_140 & 1) != 0) {
            sVar2 = sStack_138;
          }
          if (sVar1 != sVar2) {
LAB_00378fa4:
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)(param_1 + 2),(basic_string *)&local_140);
            (**(code **)(*param_1 + 0x50))(param_1);
            bVar7 = local_140._0_1_;
            goto LAB_0037950c;
          }
          pcVar6 = (char *)((ulong)&local_140 | 1);
          if ((local_140 & 1) != 0) {
            pcVar6 = local_130[0];
          }
          if (((byte)bVar7 & 1) == 0) {
            if (1 < (byte)bVar7) {
              pcVar9 = (char *)((long)param_1 + 0x11);
              do {
                if (*pcVar9 != *pcVar6) goto LAB_00378fa4;
                uVar8 = uVar8 - 1;
                pcVar9 = pcVar9 + 1;
                pcVar6 = pcVar6 + 1;
              } while (uVar8 != 0);
            }
          }
          else {
            iVar5 = memcmp((void *)param_1[4],pcVar6,param_1[3]);
            if (iVar5 != 0) goto LAB_00378fa4;
          }
        }
        else {
          if (param_2 != 0x8a) goto LAB_0037951c;
          if ((*param_3 & 1) == 0) {
            sStack_158 = param_3[1];
            local_160 = *param_3;
            local_150[0] = (char *)param_3[2];
          }
          else {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            __init_copy_ctor_external
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_160,(char *)param_3[2],param_3[1]);
          }
          bVar7 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )(param_1 + 2);
          ppcVar10 = local_150;
          uVar8 = (ulong)((byte)bVar7 >> 1);
          sVar1 = uVar8;
          if (((byte)bVar7 & 1) != 0) {
            sVar1 = param_1[3];
          }
          bVar11 = (byte)local_160._0_1_ & 1;
          sVar2 = (ulong)((byte)local_160._0_1_ >> 1);
          if ((local_160 & 1) != 0) {
            sVar2 = sStack_158;
          }
          if (sVar1 != sVar2) {
LAB_0037934c:
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)(param_1 + 2),(basic_string *)&local_160);
            (**(code **)(*param_1 + 0x50))(param_1);
            bVar7 = local_160._0_1_;
            goto LAB_0037950c;
          }
          pcVar6 = (char *)((ulong)&local_160 | 1);
          if ((local_160 & 1) != 0) {
            pcVar6 = local_150[0];
          }
          if (((byte)bVar7 & 1) == 0) {
            if (1 < (byte)bVar7) {
              pcVar9 = (char *)((long)param_1 + 0x11);
              do {
                if (*pcVar9 != *pcVar6) goto LAB_0037934c;
                uVar8 = uVar8 - 1;
                pcVar9 = pcVar9 + 1;
                pcVar6 = pcVar6 + 1;
              } while (uVar8 != 0);
            }
          }
          else {
            iVar5 = memcmp((void *)param_1[4],pcVar6,param_1[3]);
            if (iVar5 != 0) goto LAB_0037934c;
          }
        }
      }
      else if (param_2 == 0xcb) {
        if ((*param_3 & 1) == 0) {
          sStack_2f8 = param_3[1];
          local_300 = *param_3;
          local_2f0[0] = (char *)param_3[2];
        }
        else {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_300,(char *)param_3[2],param_3[1]);
        }
        bVar7 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (param_1 + 2);
        ppcVar10 = local_2f0;
        uVar8 = (ulong)((byte)bVar7 >> 1);
        sVar1 = uVar8;
        if (((byte)bVar7 & 1) != 0) {
          sVar1 = param_1[3];
        }
        bVar11 = (byte)local_300._0_1_ & 1;
        sVar2 = (ulong)((byte)local_300._0_1_ >> 1);
        if ((local_300 & 1) != 0) {
          sVar2 = sStack_2f8;
        }
        if (sVar1 != sVar2) {
LAB_0037925c:
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::operator=
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(param_1 + 2),(basic_string *)&local_300);
          (**(code **)(*param_1 + 0x50))(param_1);
          bVar7 = local_300._0_1_;
          goto LAB_0037950c;
        }
        pcVar6 = (char *)((ulong)&local_300 | 1);
        if ((local_300 & 1) != 0) {
          pcVar6 = local_2f0[0];
        }
        if (((byte)bVar7 & 1) == 0) {
          if (1 < (byte)bVar7) {
            pcVar9 = (char *)((long)param_1 + 0x11);
            do {
              if (*pcVar9 != *pcVar6) goto LAB_0037925c;
              uVar8 = uVar8 - 1;
              pcVar9 = pcVar9 + 1;
              pcVar6 = pcVar6 + 1;
            } while (uVar8 != 0);
          }
        }
        else {
          iVar5 = memcmp((void *)param_1[4],pcVar6,param_1[3]);
          if (iVar5 != 0) goto LAB_0037925c;
        }
      }
      else if (param_2 == 0xf6) {
        if ((*param_3 & 1) == 0) {
          sStack_238 = param_3[1];
          local_240 = *param_3;
          local_230[0] = (char *)param_3[2];
        }
        else {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_240,(char *)param_3[2],param_3[1]);
        }
        bVar7 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (param_1 + 0x11);
        ppcVar10 = local_230;
        uVar8 = (ulong)((byte)bVar7 >> 1);
        sVar1 = uVar8;
        if (((byte)bVar7 & 1) != 0) {
          sVar1 = param_1[0x12];
        }
        bVar11 = (byte)local_240._0_1_ & 1;
        sVar2 = (ulong)((byte)local_240._0_1_ >> 1);
        if ((local_240 & 1) != 0) {
          sVar2 = sStack_238;
        }
        if (sVar1 != sVar2) {
LAB_00379088:
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::operator=
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(param_1 + 0x11),(basic_string *)&local_240);
          (**(code **)(*param_1 + 0x90))(param_1);
          bVar7 = local_240._0_1_;
          goto LAB_0037950c;
        }
        pcVar6 = (char *)((ulong)&local_240 | 1);
        if ((local_240 & 1) != 0) {
          pcVar6 = local_230[0];
        }
        if (((byte)bVar7 & 1) == 0) {
          if (1 < (byte)bVar7) {
            pcVar9 = (char *)((long)param_1 + 0x89);
            do {
              if (*pcVar9 != *pcVar6) goto LAB_00379088;
              uVar8 = uVar8 - 1;
              pcVar9 = pcVar9 + 1;
              pcVar6 = pcVar6 + 1;
            } while (uVar8 != 0);
          }
        }
        else {
          iVar5 = memcmp((void *)param_1[0x13],pcVar6,param_1[0x12]);
          if (iVar5 != 0) goto LAB_00379088;
        }
      }
      else {
        if (param_2 != 0xf8) goto LAB_0037951c;
        if ((*param_3 & 1) == 0) {
          sStack_1b8 = param_3[1];
          local_1c0 = *param_3;
          local_1b0[0] = (char *)param_3[2];
        }
        else {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_1c0,(char *)param_3[2],param_3[1]);
        }
        bVar7 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (param_1 + 0x18);
        ppcVar10 = local_1b0;
        uVar8 = (ulong)((byte)bVar7 >> 1);
        sVar1 = uVar8;
        if (((byte)bVar7 & 1) != 0) {
          sVar1 = param_1[0x19];
        }
        bVar11 = (byte)local_1c0._0_1_ & 1;
        sVar2 = (ulong)((byte)local_1c0._0_1_ >> 1);
        if ((local_1c0 & 1) != 0) {
          sVar2 = sStack_1b8;
        }
        if (sVar1 != sVar2) {
LAB_0037943c:
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::operator=
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(param_1 + 0x18),(basic_string *)&local_1c0);
          (**(code **)(*param_1 + 0xa0))(param_1);
          bVar7 = local_1c0._0_1_;
          goto LAB_0037950c;
        }
        pcVar6 = (char *)((ulong)&local_1c0 | 1);
        if ((local_1c0 & 1) != 0) {
          pcVar6 = local_1b0[0];
        }
        if (((byte)bVar7 & 1) == 0) {
          if (1 < (byte)bVar7) {
            pcVar9 = (char *)((long)param_1 + 0xc1);
            do {
              if (*pcVar9 != *pcVar6) goto LAB_0037943c;
              uVar8 = uVar8 - 1;
              pcVar9 = pcVar9 + 1;
              pcVar6 = pcVar6 + 1;
            } while (uVar8 != 0);
          }
        }
        else {
          iVar5 = memcmp((void *)param_1[0x1a],pcVar6,param_1[0x19]);
          if (iVar5 != 0) goto LAB_0037943c;
        }
      }
    }
    else if (param_2 < 0x22d) {
      if (param_2 == 0x10c) {
        if ((*param_3 & 1) == 0) {
          sStack_2d8 = param_3[1];
          local_2e0 = *param_3;
          local_2d0[0] = (char *)param_3[2];
        }
        else {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_2e0,(char *)param_3[2],param_3[1]);
        }
        bVar7 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (param_1 + 0x12);
        ppcVar10 = local_2d0;
        uVar8 = (ulong)((byte)bVar7 >> 1);
        sVar1 = uVar8;
        if (((byte)bVar7 & 1) != 0) {
          sVar1 = param_1[0x13];
        }
        bVar11 = (byte)local_2e0._0_1_ & 1;
        sVar2 = (ulong)((byte)local_2e0._0_1_ >> 1);
        if ((local_2e0 & 1) != 0) {
          sVar2 = sStack_2d8;
        }
        if (sVar1 != sVar2) {
LAB_003791e4:
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::operator=
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(param_1 + 0x12),(basic_string *)&local_2e0);
          (**(code **)(*param_1 + 0x98))(param_1);
          bVar7 = local_2e0._0_1_;
          goto LAB_0037950c;
        }
        pcVar6 = (char *)((ulong)&local_2e0 | 1);
        if ((local_2e0 & 1) != 0) {
          pcVar6 = local_2d0[0];
        }
        if (((byte)bVar7 & 1) == 0) {
          if (1 < (byte)bVar7) {
            pcVar9 = (char *)((long)param_1 + 0x91);
            do {
              if (*pcVar9 != *pcVar6) goto LAB_003791e4;
              uVar8 = uVar8 - 1;
              pcVar9 = pcVar9 + 1;
              pcVar6 = pcVar6 + 1;
            } while (uVar8 != 0);
          }
        }
        else {
          iVar5 = memcmp((void *)param_1[0x14],pcVar6,param_1[0x13]);
          if (iVar5 != 0) goto LAB_003791e4;
        }
      }
      else if (param_2 == 0x118) {
        if ((*param_3 & 1) == 0) {
          sStack_178 = param_3[1];
          local_180 = *param_3;
          local_170[0] = (char *)param_3[2];
        }
        else {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_180,(char *)param_3[2],param_3[1]);
        }
        bVar7 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (param_1 + 5);
        ppcVar10 = local_170;
        uVar8 = (ulong)((byte)bVar7 >> 1);
        sVar1 = uVar8;
        if (((byte)bVar7 & 1) != 0) {
          sVar1 = param_1[6];
        }
        bVar11 = (byte)local_180._0_1_ & 1;
        sVar2 = (ulong)((byte)local_180._0_1_ >> 1);
        if ((local_180 & 1) != 0) {
          sVar2 = sStack_178;
        }
        if (sVar1 != sVar2) {
LAB_0037901c:
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::operator=
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(param_1 + 5),(basic_string *)&local_180);
          (**(code **)(*param_1 + 0x78))(param_1);
          bVar7 = local_180._0_1_;
          goto LAB_0037950c;
        }
        pcVar6 = (char *)((ulong)&local_180 | 1);
        if ((local_180 & 1) != 0) {
          pcVar6 = local_170[0];
        }
        if (((byte)bVar7 & 1) == 0) {
          if (1 < (byte)bVar7) {
            pcVar9 = (char *)((long)param_1 + 0x29);
            do {
              if (*pcVar9 != *pcVar6) goto LAB_0037901c;
              uVar8 = uVar8 - 1;
              pcVar9 = pcVar9 + 1;
              pcVar6 = pcVar6 + 1;
            } while (uVar8 != 0);
          }
        }
        else {
          iVar5 = memcmp((void *)param_1[7],pcVar6,param_1[6]);
          if (iVar5 != 0) goto LAB_0037901c;
        }
      }
      else {
        if (param_2 != 0x16a) goto LAB_0037951c;
        if ((*param_3 & 1) == 0) {
          sStack_318 = param_3[1];
          local_320 = *param_3;
          local_310[0] = (char *)param_3[2];
        }
        else {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_320,(char *)param_3[2],param_3[1]);
        }
        bVar7 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (param_1 + 6);
        ppcVar10 = local_310;
        uVar8 = (ulong)((byte)bVar7 >> 1);
        sVar1 = uVar8;
        if (((byte)bVar7 & 1) != 0) {
          sVar1 = param_1[7];
        }
        bVar11 = (byte)local_320._0_1_ & 1;
        sVar2 = (ulong)((byte)local_320._0_1_ >> 1);
        if ((local_320 & 1) != 0) {
          sVar2 = sStack_318;
        }
        if (sVar1 != sVar2) {
LAB_003793c4:
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::operator=
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(param_1 + 6),(basic_string *)&local_320);
          (**(code **)(*param_1 + 0x78))(param_1);
          bVar7 = local_320._0_1_;
          goto LAB_0037950c;
        }
        pcVar6 = (char *)((ulong)&local_320 | 1);
        if ((local_320 & 1) != 0) {
          pcVar6 = local_310[0];
        }
        if (((byte)bVar7 & 1) == 0) {
          if (1 < (byte)bVar7) {
            pcVar9 = (char *)((long)param_1 + 0x31);
            do {
              if (*pcVar9 != *pcVar6) goto LAB_003793c4;
              uVar8 = uVar8 - 1;
              pcVar9 = pcVar9 + 1;
              pcVar6 = pcVar6 + 1;
            } while (uVar8 != 0);
          }
        }
        else {
          iVar5 = memcmp((void *)param_1[8],pcVar6,param_1[7]);
          if (iVar5 != 0) goto LAB_003793c4;
        }
      }
    }
    else if (param_2 == 0x22d) {
      if ((*param_3 & 1) == 0) {
        sStack_58 = param_3[1];
        local_60 = *param_3;
        local_50 = (char *)param_3[2];
      }
      else {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_60,(char *)param_3[2],param_3[1]);
      }
      bVar7 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_1 + 2);
      ppcVar10 = &local_50;
      uVar8 = (ulong)((byte)bVar7 >> 1);
      sVar1 = uVar8;
      if (((byte)bVar7 & 1) != 0) {
        sVar1 = param_1[3];
      }
      bVar11 = (byte)local_60._0_1_ & 1;
      sVar2 = (ulong)((byte)local_60._0_1_ >> 1);
      if ((local_60 & 1) != 0) {
        sVar2 = sStack_58;
      }
      if (sVar1 != sVar2) {
LAB_003792d4:
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)(param_1 + 2),(basic_string *)&local_60);
        (**(code **)(*param_1 + 0x50))(param_1);
        bVar7 = local_60._0_1_;
        goto LAB_0037950c;
      }
      pcVar6 = (char *)((ulong)&local_60 | 1);
      if ((local_60 & 1) != 0) {
        pcVar6 = local_50;
      }
      if (((byte)bVar7 & 1) == 0) {
        if (1 < (byte)bVar7) {
          pcVar9 = (char *)((long)param_1 + 0x11);
          do {
            if (*pcVar9 != *pcVar6) goto LAB_003792d4;
            uVar8 = uVar8 - 1;
            pcVar9 = pcVar9 + 1;
            pcVar6 = pcVar6 + 1;
          } while (uVar8 != 0);
        }
      }
      else {
        iVar5 = memcmp((void *)param_1[4],pcVar6,param_1[3]);
        if (iVar5 != 0) goto LAB_003792d4;
      }
    }
    else if (param_2 == 0x231) {
      if ((*param_3 & 1) == 0) {
        sStack_b8 = param_3[1];
        local_c0 = *param_3;
        local_b0[0] = (char *)param_3[2];
      }
      else {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_c0,(char *)param_3[2],param_3[1]);
      }
      bVar3 = *(byte *)(param_1 + 0x22);
      ppcVar10 = local_b0;
      uVar8 = (ulong)(bVar3 >> 1);
      sVar1 = uVar8;
      if ((bVar3 & 1) != 0) {
        sVar1 = param_1[0x23];
      }
      bVar11 = (byte)local_c0._0_1_ & 1;
      sVar2 = (ulong)((byte)local_c0._0_1_ >> 1);
      if ((local_c0 & 1) != 0) {
        sVar2 = sStack_b8;
      }
      if (sVar1 != sVar2) {
LAB_003790f0:
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)(param_1 + 0x22),(basic_string *)&local_c0);
        (**(code **)(*param_1 + 0xa8))(param_1);
        bVar7 = local_c0._0_1_;
        goto LAB_0037950c;
      }
      pcVar6 = (char *)((ulong)&local_c0 | 1);
      if ((local_c0 & 1) != 0) {
        pcVar6 = local_b0[0];
      }
      if ((bVar3 & 1) == 0) {
        if (1 < bVar3) {
          pcVar9 = (char *)((long)param_1 + 0x111);
          do {
            if (*pcVar9 != *pcVar6) goto LAB_003790f0;
            uVar8 = uVar8 - 1;
            pcVar9 = pcVar9 + 1;
            pcVar6 = pcVar6 + 1;
          } while (uVar8 != 0);
        }
      }
      else {
        iVar5 = memcmp((void *)param_1[0x24],pcVar6,param_1[0x23]);
        if (iVar5 != 0) goto LAB_003790f0;
      }
    }
    else {
      if (param_2 != 0x23c) goto LAB_0037951c;
      if ((*param_3 & 1) == 0) {
        sStack_98 = param_3[1];
        local_a0 = *param_3;
        local_90[0] = (char *)param_3[2];
      }
      else {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_a0,(char *)param_3[2],param_3[1]);
      }
      bVar7 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_1 + 8);
      ppcVar10 = local_90;
      uVar8 = (ulong)((byte)bVar7 >> 1);
      sVar1 = uVar8;
      if (((byte)bVar7 & 1) != 0) {
        sVar1 = param_1[9];
      }
      bVar11 = (byte)local_a0._0_1_ & 1;
      sVar2 = (ulong)((byte)local_a0._0_1_ >> 1);
      if ((local_a0 & 1) != 0) {
        sVar2 = sStack_98;
      }
      if (sVar1 != sVar2) {
LAB_003794b4:
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)(param_1 + 8),(basic_string *)&local_a0);
        (**(code **)(*param_1 + 0x58))(param_1);
        bVar7 = local_a0._0_1_;
        goto LAB_0037950c;
      }
      pcVar6 = (char *)((ulong)&local_a0 | 1);
      if ((local_a0 & 1) != 0) {
        pcVar6 = local_90[0];
      }
      if (((byte)bVar7 & 1) == 0) {
        if (1 < (byte)bVar7) {
          pcVar9 = (char *)((long)param_1 + 0x41);
          do {
            if (*pcVar9 != *pcVar6) goto LAB_003794b4;
            uVar8 = uVar8 - 1;
            pcVar9 = pcVar9 + 1;
            pcVar6 = pcVar6 + 1;
          } while (uVar8 != 0);
        }
      }
      else {
        iVar5 = memcmp((void *)param_1[10],pcVar6,param_1[9]);
        if (iVar5 != 0) goto LAB_003794b4;
      }
    }
  }
  else if (param_2 < 0x2fe) {
    if (param_2 < 0x28e) {
      if (param_2 == 0x242) {
        if ((*param_3 & 1) == 0) {
          sStack_d8 = param_3[1];
          local_e0 = *param_3;
          local_d0[0] = (char *)param_3[2];
        }
        else {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_e0,(char *)param_3[2],param_3[1]);
        }
        bVar7 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (param_1 + 2);
        ppcVar10 = local_d0;
        uVar8 = (ulong)((byte)bVar7 >> 1);
        sVar1 = uVar8;
        if (((byte)bVar7 & 1) != 0) {
          sVar1 = param_1[3];
        }
        bVar11 = (byte)local_e0._0_1_ & 1;
        sVar2 = (ulong)((byte)local_e0._0_1_ >> 1);
        if ((local_e0 & 1) != 0) {
          sVar2 = sStack_d8;
        }
        if (sVar1 != sVar2) {
LAB_003791a8:
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::operator=
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(param_1 + 2),(basic_string *)&local_e0);
          (**(code **)(*param_1 + 0x50))(param_1);
          bVar7 = local_e0._0_1_;
          goto LAB_0037950c;
        }
        pcVar6 = (char *)((ulong)&local_e0 | 1);
        if ((local_e0 & 1) != 0) {
          pcVar6 = local_d0[0];
        }
        if (((byte)bVar7 & 1) == 0) {
          if (1 < (byte)bVar7) {
            pcVar9 = (char *)((long)param_1 + 0x11);
            do {
              if (*pcVar9 != *pcVar6) goto LAB_003791a8;
              uVar8 = uVar8 - 1;
              pcVar9 = pcVar9 + 1;
              pcVar6 = pcVar6 + 1;
            } while (uVar8 != 0);
          }
        }
        else {
          iVar5 = memcmp((void *)param_1[4],pcVar6,param_1[3]);
          if (iVar5 != 0) goto LAB_003791a8;
        }
      }
      else if (param_2 == 0x243) {
        if ((*param_3 & 1) == 0) {
          sStack_f8 = param_3[1];
          local_100 = *param_3;
          local_f0[0] = (char *)param_3[2];
        }
        else {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_100,(char *)param_3[2],param_3[1]);
        }
        bVar7 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (param_1 + 5);
        ppcVar10 = local_f0;
        uVar8 = (ulong)((byte)bVar7 >> 1);
        sVar1 = uVar8;
        if (((byte)bVar7 & 1) != 0) {
          sVar1 = param_1[6];
        }
        bVar11 = (byte)local_100._0_1_ & 1;
        sVar2 = (ulong)((byte)local_100._0_1_ >> 1);
        if ((local_100 & 1) != 0) {
          sVar2 = sStack_f8;
        }
        if (sVar1 != sVar2) {
LAB_00378fe0:
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::operator=
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(param_1 + 5),(basic_string *)&local_100);
          (**(code **)(*param_1 + 0x58))(param_1);
          bVar7 = local_100._0_1_;
          goto LAB_0037950c;
        }
        pcVar6 = (char *)((ulong)&local_100 | 1);
        if ((local_100 & 1) != 0) {
          pcVar6 = local_f0[0];
        }
        if (((byte)bVar7 & 1) == 0) {
          if (1 < (byte)bVar7) {
            pcVar9 = (char *)((long)param_1 + 0x29);
            do {
              if (*pcVar9 != *pcVar6) goto LAB_00378fe0;
              uVar8 = uVar8 - 1;
              pcVar9 = pcVar9 + 1;
              pcVar6 = pcVar6 + 1;
            } while (uVar8 != 0);
          }
        }
        else {
          iVar5 = memcmp((void *)param_1[7],pcVar6,param_1[6]);
          if (iVar5 != 0) goto LAB_00378fe0;
        }
      }
      else {
        if (param_2 != 0x27b) goto LAB_0037951c;
        if ((*param_3 & 1) == 0) {
          sStack_298 = param_3[1];
          local_2a0 = *param_3;
          local_290[0] = (char *)param_3[2];
        }
        else {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_2a0,(char *)param_3[2],param_3[1]);
        }
        bVar7 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (param_1 + 2);
        ppcVar10 = local_290;
        uVar8 = (ulong)((byte)bVar7 >> 1);
        sVar1 = uVar8;
        if (((byte)bVar7 & 1) != 0) {
          sVar1 = param_1[3];
        }
        bVar11 = (byte)local_2a0._0_1_ & 1;
        sVar2 = (ulong)((byte)local_2a0._0_1_ >> 1);
        if ((local_2a0 & 1) != 0) {
          sVar2 = sStack_298;
        }
        if (sVar1 != sVar2) {
LAB_00379388:
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::operator=
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(param_1 + 2),(basic_string *)&local_2a0);
          (**(code **)(*param_1 + 0x50))(param_1);
          bVar7 = local_2a0._0_1_;
          goto LAB_0037950c;
        }
        pcVar6 = (char *)((ulong)&local_2a0 | 1);
        if ((local_2a0 & 1) != 0) {
          pcVar6 = local_290[0];
        }
        if (((byte)bVar7 & 1) == 0) {
          if (1 < (byte)bVar7) {
            pcVar9 = (char *)((long)param_1 + 0x11);
            do {
              if (*pcVar9 != *pcVar6) goto LAB_00379388;
              uVar8 = uVar8 - 1;
              pcVar9 = pcVar9 + 1;
              pcVar6 = pcVar6 + 1;
            } while (uVar8 != 0);
          }
        }
        else {
          iVar5 = memcmp((void *)param_1[4],pcVar6,param_1[3]);
          if (iVar5 != 0) goto LAB_00379388;
        }
      }
    }
    else if (param_2 == 0x28e) {
      if ((*param_3 & 1) == 0) {
        sStack_198 = param_3[1];
        local_1a0 = *param_3;
        local_190[0] = (char *)param_3[2];
      }
      else {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_1a0,(char *)param_3[2],param_3[1]);
      }
      bVar7 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_1 + 2);
      ppcVar10 = local_190;
      uVar8 = (ulong)((byte)bVar7 >> 1);
      sVar1 = uVar8;
      if (((byte)bVar7 & 1) != 0) {
        sVar1 = param_1[3];
      }
      bVar11 = (byte)local_1a0._0_1_ & 1;
      sVar2 = (ulong)((byte)local_1a0._0_1_ >> 1);
      if ((local_1a0 & 1) != 0) {
        sVar2 = sStack_198;
      }
      if (sVar1 != sVar2) {
LAB_00379298:
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)(param_1 + 2),(basic_string *)&local_1a0);
        (**(code **)(*param_1 + 0x58))(param_1);
        bVar7 = local_1a0._0_1_;
        goto LAB_0037950c;
      }
      pcVar6 = (char *)((ulong)&local_1a0 | 1);
      if ((local_1a0 & 1) != 0) {
        pcVar6 = local_190[0];
      }
      if (((byte)bVar7 & 1) == 0) {
        if (1 < (byte)bVar7) {
          pcVar9 = (char *)((long)param_1 + 0x11);
          do {
            if (*pcVar9 != *pcVar6) goto LAB_00379298;
            uVar8 = uVar8 - 1;
            pcVar9 = pcVar9 + 1;
            pcVar6 = pcVar6 + 1;
          } while (uVar8 != 0);
        }
      }
      else {
        iVar5 = memcmp((void *)param_1[4],pcVar6,param_1[3]);
        if (iVar5 != 0) goto LAB_00379298;
      }
    }
    else if (param_2 == 0x296) {
      if ((*param_3 & 1) == 0) {
        sStack_118 = param_3[1];
        local_120 = *param_3;
        local_110[0] = (char *)param_3[2];
      }
      else {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_120,(char *)param_3[2],param_3[1]);
      }
      bVar7 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_1 + 2);
      ppcVar10 = local_110;
      uVar8 = (ulong)((byte)bVar7 >> 1);
      sVar1 = uVar8;
      if (((byte)bVar7 & 1) != 0) {
        sVar1 = param_1[3];
      }
      bVar11 = (byte)local_120._0_1_ & 1;
      sVar2 = (ulong)((byte)local_120._0_1_ >> 1);
      if ((local_120 & 1) != 0) {
        sVar2 = sStack_118;
      }
      if (sVar1 != sVar2) {
LAB_003790c4:
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)(param_1 + 2),(basic_string *)&local_120);
        (**(code **)(*param_1 + 0x50))(param_1);
        bVar7 = local_120._0_1_;
        goto LAB_0037950c;
      }
      pcVar6 = (char *)((ulong)&local_120 | 1);
      if ((local_120 & 1) != 0) {
        pcVar6 = local_110[0];
      }
      if (((byte)bVar7 & 1) == 0) {
        if (1 < (byte)bVar7) {
          pcVar9 = (char *)((long)param_1 + 0x11);
          do {
            if (*pcVar9 != *pcVar6) goto LAB_003790c4;
            uVar8 = uVar8 - 1;
            pcVar9 = pcVar9 + 1;
            pcVar6 = pcVar6 + 1;
          } while (uVar8 != 0);
        }
      }
      else {
        iVar5 = memcmp((void *)param_1[4],pcVar6,param_1[3]);
        if (iVar5 != 0) goto LAB_003790c4;
      }
    }
    else {
      if (param_2 != 0x2e8) goto LAB_0037951c;
      if ((*param_3 & 1) == 0) {
        sStack_258 = param_3[1];
        local_260 = *param_3;
        local_250[0] = (char *)param_3[2];
      }
      else {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_260,(char *)param_3[2],param_3[1]);
      }
      bVar7 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_1 + 0x1c);
      ppcVar10 = local_250;
      uVar8 = (ulong)((byte)bVar7 >> 1);
      sVar1 = uVar8;
      if (((byte)bVar7 & 1) != 0) {
        sVar1 = param_1[0x1d];
      }
      bVar11 = (byte)local_260._0_1_ & 1;
      sVar2 = (ulong)((byte)local_260._0_1_ >> 1);
      if ((local_260 & 1) != 0) {
        sVar2 = sStack_258;
      }
      if (sVar1 != sVar2) {
LAB_00379478:
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)(param_1 + 0x1c),(basic_string *)&local_260);
        (**(code **)(*param_1 + 0xa8))(param_1);
        bVar7 = local_260._0_1_;
        goto LAB_0037950c;
      }
      pcVar6 = (char *)((ulong)&local_260 | 1);
      if ((local_260 & 1) != 0) {
        pcVar6 = local_250[0];
      }
      if (((byte)bVar7 & 1) == 0) {
        if (1 < (byte)bVar7) {
          pcVar9 = (char *)((long)param_1 + 0xe1);
          do {
            if (*pcVar9 != *pcVar6) goto LAB_00379478;
            uVar8 = uVar8 - 1;
            pcVar9 = pcVar9 + 1;
            pcVar6 = pcVar6 + 1;
          } while (uVar8 != 0);
        }
      }
      else {
        iVar5 = memcmp((void *)param_1[0x1e],pcVar6,param_1[0x1d]);
        if (iVar5 != 0) goto LAB_00379478;
      }
    }
  }
  else if (param_2 < 0x3d7) {
    if (param_2 == 0x2fe) {
      if ((*param_3 & 1) == 0) {
        sStack_278 = param_3[1];
        local_280 = *param_3;
        local_270[0] = (char *)param_3[2];
      }
      else {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_280,(char *)param_3[2],param_3[1]);
      }
      bVar7 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_1 + 0x1c);
      ppcVar10 = local_270;
      uVar8 = (ulong)((byte)bVar7 >> 1);
      sVar1 = uVar8;
      if (((byte)bVar7 & 1) != 0) {
        sVar1 = param_1[0x1d];
      }
      bVar11 = (byte)local_280._0_1_ & 1;
      sVar2 = (ulong)((byte)local_280._0_1_ >> 1);
      if ((local_280 & 1) != 0) {
        sVar2 = sStack_278;
      }
      if (sVar1 != sVar2) {
LAB_00379220:
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)(param_1 + 0x1c),(basic_string *)&local_280);
        (**(code **)(*param_1 + 0xb0))(param_1);
        bVar7 = local_280._0_1_;
        goto LAB_0037950c;
      }
      pcVar6 = (char *)((ulong)&local_280 | 1);
      if ((local_280 & 1) != 0) {
        pcVar6 = local_270[0];
      }
      if (((byte)bVar7 & 1) == 0) {
        if (1 < (byte)bVar7) {
          pcVar9 = (char *)((long)param_1 + 0xe1);
          do {
            if (*pcVar9 != *pcVar6) goto LAB_00379220;
            uVar8 = uVar8 - 1;
            pcVar9 = pcVar9 + 1;
            pcVar6 = pcVar6 + 1;
          } while (uVar8 != 0);
        }
      }
      else {
        iVar5 = memcmp((void *)param_1[0x1e],pcVar6,param_1[0x1d]);
        if (iVar5 != 0) goto LAB_00379220;
      }
    }
    else if (param_2 == 0x331) {
      if ((*param_3 & 1) == 0) {
        sStack_2b8 = param_3[1];
        local_2c0 = *param_3;
        local_2b0[0] = (char *)param_3[2];
      }
      else {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_2c0,(char *)param_3[2],param_3[1]);
      }
      bVar3 = *(byte *)(param_1 + 0x2f);
      ppcVar10 = local_2b0;
      uVar8 = (ulong)(bVar3 >> 1);
      sVar1 = uVar8;
      if ((bVar3 & 1) != 0) {
        sVar1 = param_1[0x30];
      }
      bVar11 = (byte)local_2c0._0_1_ & 1;
      sVar2 = (ulong)((byte)local_2c0._0_1_ >> 1);
      if ((local_2c0 & 1) != 0) {
        sVar2 = sStack_2b8;
      }
      if (sVar1 != sVar2) {
LAB_00379048:
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)(param_1 + 0x2f),(basic_string *)&local_2c0);
        (**(code **)(*param_1 + 0x230))(param_1);
        bVar7 = local_2c0._0_1_;
        goto LAB_0037950c;
      }
      pcVar6 = (char *)((ulong)&local_2c0 | 1);
      if ((local_2c0 & 1) != 0) {
        pcVar6 = local_2b0[0];
      }
      if ((bVar3 & 1) == 0) {
        if (1 < bVar3) {
          pcVar9 = (char *)((long)param_1 + 0x179);
          do {
            if (*pcVar9 != *pcVar6) goto LAB_00379048;
            uVar8 = uVar8 - 1;
            pcVar9 = pcVar9 + 1;
            pcVar6 = pcVar6 + 1;
          } while (uVar8 != 0);
        }
      }
      else {
        iVar5 = memcmp((void *)param_1[0x31],pcVar6,param_1[0x30]);
        if (iVar5 != 0) goto LAB_00379048;
      }
    }
    else {
      if (param_2 != 0x39e) goto LAB_0037951c;
      if ((*param_3 & 1) == 0) {
        sStack_338 = param_3[1];
        local_340 = *param_3;
        local_330[0] = (char *)param_3[2];
      }
      else {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_340,(char *)param_3[2],param_3[1]);
      }
      bVar7 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_1 + 0x10);
      ppcVar10 = local_330;
      uVar8 = (ulong)((byte)bVar7 >> 1);
      sVar1 = uVar8;
      if (((byte)bVar7 & 1) != 0) {
        sVar1 = param_1[0x11];
      }
      bVar11 = (byte)local_340._0_1_ & 1;
      sVar2 = (ulong)((byte)local_340._0_1_ >> 1);
      if ((local_340 & 1) != 0) {
        sVar2 = sStack_338;
      }
      if (sVar1 != sVar2) {
LAB_00379400:
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)(param_1 + 0x10),(basic_string *)&local_340);
        (**(code **)(*param_1 + 0x98))(param_1);
        bVar7 = local_340._0_1_;
        goto LAB_0037950c;
      }
      pcVar6 = (char *)((ulong)&local_340 | 1);
      if ((local_340 & 1) != 0) {
        pcVar6 = local_330[0];
      }
      if (((byte)bVar7 & 1) == 0) {
        if (1 < (byte)bVar7) {
          pcVar9 = (char *)((long)param_1 + 0x81);
          do {
            if (*pcVar9 != *pcVar6) goto LAB_00379400;
            uVar8 = uVar8 - 1;
            pcVar9 = pcVar9 + 1;
            pcVar6 = pcVar6 + 1;
          } while (uVar8 != 0);
        }
      }
      else {
        iVar5 = memcmp((void *)param_1[0x12],pcVar6,param_1[0x11]);
        if (iVar5 != 0) goto LAB_00379400;
      }
    }
  }
  else {
    if (param_2 == 0x3d7) {
      if ((*param_3 & 1) == 0) {
        sStack_1d8 = param_3[1];
        local_1e0 = *param_3;
        local_1d0[0] = (char *)param_3[2];
      }
      else {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_1e0,(char *)param_3[2],param_3[1]);
      }
      bVar7 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_1 + 0x12);
      ppcVar10 = local_1d0;
      uVar8 = (ulong)((byte)bVar7 >> 1);
      sVar1 = uVar8;
      if (((byte)bVar7 & 1) != 0) {
        sVar1 = param_1[0x13];
      }
      bVar11 = (byte)local_1e0._0_1_ & 1;
      sVar2 = (ulong)((byte)local_1e0._0_1_ >> 1);
      if ((local_1e0 & 1) != 0) {
        sVar2 = sStack_1d8;
      }
      if (sVar1 == sVar2) {
        pcVar6 = (char *)((ulong)&local_1e0 | 1);
        if ((local_1e0 & 1) != 0) {
          pcVar6 = local_1d0[0];
        }
        if (((byte)bVar7 & 1) == 0) {
          if (1 < (byte)bVar7) {
            pcVar9 = (char *)((long)param_1 + 0x91);
            do {
              if (*pcVar9 != *pcVar6) goto LAB_00379310;
              uVar8 = uVar8 - 1;
              pcVar9 = pcVar9 + 1;
              pcVar6 = pcVar6 + 1;
            } while (uVar8 != 0);
          }
        }
        else {
          iVar5 = memcmp((void *)param_1[0x14],pcVar6,param_1[0x13]);
          if (iVar5 != 0) goto LAB_00379310;
        }
        goto LAB_00379510;
      }
LAB_00379310:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                (param_1 + 0x12),(basic_string *)&local_1e0);
      (**(code **)(*param_1 + 0x98))(param_1);
      bVar7 = local_1e0._0_1_;
    }
    else if (param_2 == 0x3d8) {
      if ((*param_3 & 1) == 0) {
        sStack_1f8 = param_3[1];
        local_200 = *param_3;
        local_1f0[0] = (char *)param_3[2];
      }
      else {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_200,(char *)param_3[2],param_3[1]);
      }
      bVar7 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_1 + 0x15);
      ppcVar10 = local_1f0;
      uVar8 = (ulong)((byte)bVar7 >> 1);
      sVar1 = uVar8;
      if (((byte)bVar7 & 1) != 0) {
        sVar1 = param_1[0x16];
      }
      bVar11 = (byte)local_200._0_1_ & 1;
      sVar2 = (ulong)((byte)local_200._0_1_ >> 1);
      if ((local_200 & 1) != 0) {
        sVar2 = sStack_1f8;
      }
      if (sVar1 == sVar2) {
        pcVar6 = (char *)((ulong)&local_200 | 1);
        if ((local_200 & 1) != 0) {
          pcVar6 = local_1f0[0];
        }
        if (((byte)bVar7 & 1) == 0) {
          if (1 < (byte)bVar7) {
            pcVar9 = (char *)((long)param_1 + 0xa9);
            do {
              if (*pcVar9 != *pcVar6) goto LAB_00379130;
              uVar8 = uVar8 - 1;
              pcVar9 = pcVar9 + 1;
              pcVar6 = pcVar6 + 1;
            } while (uVar8 != 0);
          }
        }
        else {
          iVar5 = memcmp((void *)param_1[0x17],pcVar6,param_1[0x16]);
          if (iVar5 != 0) goto LAB_00379130;
        }
        goto LAB_00379510;
      }
LAB_00379130:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                (param_1 + 0x15),(basic_string *)&local_200);
      (**(code **)(*param_1 + 0xa0))(param_1);
      bVar7 = local_200._0_1_;
    }
    else {
      if (param_2 != 0x3d9) goto LAB_0037951c;
      if ((*param_3 & 1) == 0) {
        sStack_218 = param_3[1];
        local_220 = *param_3;
        local_210[0] = (char *)param_3[2];
      }
      else {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_220,(char *)param_3[2],param_3[1]);
      }
      bVar7 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_1 + 0x18);
      ppcVar10 = local_210;
      uVar8 = (ulong)((byte)bVar7 >> 1);
      sVar1 = uVar8;
      if (((byte)bVar7 & 1) != 0) {
        sVar1 = param_1[0x19];
      }
      bVar11 = (byte)local_220._0_1_ & 1;
      sVar2 = (ulong)((byte)local_220._0_1_ >> 1);
      if ((local_220 & 1) != 0) {
        sVar2 = sStack_218;
      }
      if (sVar1 == sVar2) {
        pcVar6 = (char *)((ulong)&local_220 | 1);
        if ((local_220 & 1) != 0) {
          pcVar6 = local_210[0];
        }
        if (((byte)bVar7 & 1) == 0) {
          if (1 < (byte)bVar7) {
            pcVar9 = (char *)((long)param_1 + 0xc1);
            do {
              if (*pcVar9 != *pcVar6) goto LAB_003794f0;
              uVar8 = uVar8 - 1;
              pcVar9 = pcVar9 + 1;
              pcVar6 = pcVar6 + 1;
            } while (uVar8 != 0);
          }
        }
        else {
          iVar5 = memcmp((void *)param_1[0x1a],pcVar6,param_1[0x19]);
          if (iVar5 != 0) goto LAB_003794f0;
        }
        goto LAB_00379510;
      }
LAB_003794f0:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                (param_1 + 0x18),(basic_string *)&local_220);
      (**(code **)(*param_1 + 0xa8))(param_1);
      bVar7 = local_220._0_1_;
    }
LAB_0037950c:
    bVar11 = (byte)bVar7 & 1;
  }
LAB_00379510:
  if (bVar11 != 0) {
    operator_delete(*ppcVar10);
  }
LAB_0037951c:
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00379548  FUN_00379548 =====

void FUN_00379548(long *param_1,int param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 < 0x16d) {
    if (param_2 < 0xee) {
      switch(param_2) {
      case 0x20:
        goto switchD_003795bc_caseD_20;
      default:
        return;
      case 0x29:
        if ((uint)*(byte *)(param_1 + 0x14) == (param_3 & 1)) {
          return;
        }
        *(char *)(param_1 + 0x14) = (char)(param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x003797f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0xa0))();
        return;
      case 0x32:
        if ((uint)*(byte *)((long)param_1 + 0xec) == (param_3 & 1)) {
          return;
        }
        *(char *)((long)param_1 + 0xec) = (char)(param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x003797d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x118))();
        return;
      case 0x3e:
        if ((uint)*(byte *)(param_1 + 8) == (param_3 & 1)) {
          return;
        }
        *(char *)(param_1 + 8) = (char)(param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x00379834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x88))();
        return;
      case 0x5e:
        if ((uint)*(byte *)(param_1 + 0x12) == (param_3 & 1)) {
          return;
        }
        *(char *)(param_1 + 0x12) = (char)(param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x003797b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0xa0))();
        return;
      case 0x8d:
        if ((uint)*(byte *)(param_1 + 5) == (param_3 & 1)) {
          return;
        }
        *(char *)(param_1 + 5) = (char)(param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x00379754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x58))();
        return;
      case 0xa4:
        if ((uint)*(byte *)(param_1 + 0x37) == (param_3 & 1)) {
          return;
        }
        *(char *)(param_1 + 0x37) = (char)(param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x00379854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x220))();
        return;
      case 0xae:
        if ((uint)*(byte *)(param_1 + 0x13) == (param_3 & 1)) {
          return;
        }
        *(char *)(param_1 + 0x13) = (char)(param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x00379874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0xb8))();
        return;
      case 0xb5:
        if ((uint)*(byte *)(param_1 + 5) == (param_3 & 1)) {
          return;
        }
        *(char *)(param_1 + 5) = (char)(param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x00379894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x78))();
        return;
      case 0xbc:
        if ((uint)*(byte *)(param_1 + 0x16) == (param_3 & 1)) {
          return;
        }
        *(char *)(param_1 + 0x16) = (char)(param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x00379794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0xe8))();
        return;
      case 0xbd:
        if ((uint)*(byte *)((long)param_1 + 0xb1) == (param_3 & 1)) {
          return;
        }
        *(char *)((long)param_1 + 0xb1) = (char)(param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x00379734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0xf0))();
        return;
      case 0xbe:
        if ((uint)*(byte *)((long)param_1 + 0xb2) == (param_3 & 1)) {
          return;
        }
        *(char *)((long)param_1 + 0xb2) = (char)(param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x00379714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0xf8))();
        return;
      case 0xbf:
        if ((uint)*(byte *)((long)param_1 + 0xb3) == (param_3 & 1)) {
          return;
        }
        *(char *)((long)param_1 + 0xb3) = (char)(param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x00379814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x100))();
        return;
      case 0xc0:
        if ((uint)*(byte *)(param_1 + 0x18) == (param_3 & 1)) {
          return;
        }
        *(char *)(param_1 + 0x18) = (char)(param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x00379694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x120))();
        return;
      case 0xc1:
        if ((uint)*(byte *)((long)param_1 + 0xc1) == (param_3 & 1)) {
          return;
        }
        *(char *)((long)param_1 + 0xc1) = (char)(param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x003796b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x128))();
        return;
      case 0xc2:
        if ((uint)*(byte *)((long)param_1 + 0xc2) == (param_3 & 1)) {
          return;
        }
        *(char *)((long)param_1 + 0xc2) = (char)(param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x003796d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x130))();
        return;
      case 0xc4:
        if ((uint)*(byte *)((long)param_1 + 0x171) == (param_3 & 1)) {
          return;
        }
        *(char *)((long)param_1 + 0x171) = (char)(param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x003796f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x230))();
        return;
      case 0xc9:
        if ((uint)*(byte *)((long)param_1 + 0xb4) == (param_3 & 1)) {
          return;
        }
        *(char *)((long)param_1 + 0xb4) = (char)(param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x00379774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 200))();
        return;
      }
    }
    if (0x14c < param_2) {
      if (param_2 == 0x14d) {
        if ((uint)*(byte *)(param_1 + 0x17) == (param_3 & 1)) {
          return;
        }
        *(char *)(param_1 + 0x17) = (char)(param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x003798c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 200))();
        return;
      }
      if (param_2 != 0x16c) {
        return;
      }
      if ((uint)*(byte *)((long)param_1 + 0xa4) == (param_3 & 1)) {
        return;
      }
      *(char *)((long)param_1 + 0xa4) = (char)(param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x00379644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xd0))();
      return;
    }
    if (param_2 == 0xee) {
                    /* WARNING: Could not recover jumptable at 0x003798a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xa8))(param_1,param_3 & 1);
      return;
    }
    if (param_2 != 0xf5) {
      return;
    }
switchD_00379570_caseD_3b9:
    if ((uint)*(byte *)(param_1 + 0x11) == (param_3 & 1)) {
      return;
    }
    *(char *)(param_1 + 0x11) = (char)(param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x00379614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x90))();
    return;
  }
  switch(param_2) {
  case 0x21d:
    if ((uint)*(byte *)((long)param_1 + 0x14) != (param_3 & 1)) {
      *(char *)((long)param_1 + 0x14) = (char)(param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x00379afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x68))();
      return;
    }
    break;
  case 0x21e:
  case 0x21f:
  case 0x220:
  case 0x221:
  case 0x222:
  case 0x223:
  case 0x224:
  case 0x225:
  case 0x226:
  case 0x227:
  case 0x228:
  case 0x229:
  case 0x22a:
  case 0x22b:
  case 0x22c:
  case 0x22d:
  case 0x22e:
  case 0x22f:
  case 0x230:
  case 0x231:
  case 0x232:
  case 0x233:
  case 0x234:
  case 0x235:
  case 0x236:
  case 0x237:
  case 0x238:
  case 0x239:
  case 0x23a:
  case 0x23b:
  case 0x23c:
  case 0x23d:
  case 0x23e:
  case 0x23f:
  case 0x240:
  case 0x241:
  case 0x242:
  case 0x243:
  case 0x244:
  case 0x245:
  case 0x246:
  case 0x247:
  case 0x248:
  case 0x249:
  case 0x24a:
  case 0x24b:
  case 0x24c:
  case 0x24d:
  case 0x24e:
  case 0x24f:
  case 0x250:
  case 0x252:
  case 0x253:
  case 0x254:
  case 0x255:
  case 0x256:
  case 599:
  case 600:
  case 0x259:
  case 0x25a:
  case 0x25b:
  case 0x25c:
  case 0x25d:
  case 0x25f:
  case 0x260:
  case 0x261:
  case 0x262:
  case 0x263:
  case 0x264:
  case 0x265:
  case 0x266:
  case 0x267:
  case 0x268:
  case 0x269:
  case 0x26a:
  case 0x26b:
  case 0x26c:
  case 0x26d:
  case 0x26e:
  case 0x26f:
  case 0x270:
  case 0x271:
  case 0x272:
  case 0x273:
  case 0x274:
  case 0x275:
  case 0x276:
  case 0x277:
  case 0x278:
  case 0x279:
  case 0x27b:
  case 0x27c:
  case 0x27d:
  case 0x27e:
  case 0x280:
  case 0x281:
  case 0x282:
  case 0x283:
  case 0x284:
  case 0x285:
  case 0x286:
  case 0x288:
  case 0x289:
  case 0x28a:
  case 0x28b:
  case 0x28c:
  case 0x28d:
  case 0x28e:
  case 0x28f:
  case 0x290:
  case 0x291:
  case 0x292:
  case 0x293:
  case 0x294:
  case 0x295:
  case 0x296:
  case 0x297:
  case 0x298:
  case 0x299:
  case 0x29a:
  case 0x29b:
  case 0x29c:
  case 0x29d:
  case 0x29e:
  case 0x29f:
  case 0x2a0:
  case 0x2a1:
  case 0x2a2:
  case 0x2a3:
  case 0x2a5:
  case 0x2a6:
  case 0x2a7:
  case 0x2a8:
  case 0x2a9:
  case 0x2aa:
  case 0x2ab:
  case 0x2ac:
  case 0x2ad:
  case 0x2ae:
  case 0x2af:
  case 0x2b0:
  case 0x2b1:
  case 0x2b2:
  case 0x2b4:
  case 0x2b6:
  case 0x2b7:
  case 0x2b8:
  case 0x2b9:
  case 0x2ba:
  case 699:
  case 700:
  case 0x2bd:
  case 0x2be:
  case 0x2c0:
  case 0x2c1:
  case 0x2c2:
  case 0x2c3:
  case 0x2c4:
  case 0x2c5:
  case 0x2c6:
  case 0x2c7:
  case 0x2c8:
  case 0x2c9:
  case 0x2ca:
  case 0x2cb:
  case 0x2cc:
  case 0x2cd:
  case 0x2ce:
  case 0x2cf:
  case 0x2d0:
  case 0x2d1:
  case 0x2d2:
  case 0x2d3:
  case 0x2d5:
  case 0x2d6:
  case 0x2d7:
  case 0x2d8:
  case 0x2d9:
  case 0x2da:
  case 0x2db:
  case 0x2dc:
  case 0x2dd:
  case 0x2df:
  case 0x2e0:
  case 0x2e1:
  case 0x2e2:
  case 0x2e3:
  case 0x2e4:
  case 0x2e5:
  case 0x2e6:
  case 0x2e7:
  case 0x2e8:
  case 0x2e9:
  case 0x2ea:
  case 0x2eb:
  case 0x2ec:
  case 0x2ed:
  case 0x2ee:
  case 0x2ef:
  case 0x2f1:
  case 0x2f2:
  case 0x2f3:
  case 0x2f4:
  case 0x2f5:
  case 0x2f6:
  case 0x2f7:
  case 0x2f8:
  case 0x2f9:
  case 0x2fa:
  case 0x2fb:
  case 0x2fc:
  case 0x2fd:
  case 0x2fe:
  case 0x2ff:
  case 0x300:
  case 0x301:
  case 0x303:
  case 0x304:
  case 0x305:
  case 0x306:
  case 0x307:
  case 0x308:
  case 0x309:
  case 0x30a:
  case 0x30c:
  case 0x30d:
  case 0x30f:
  case 0x310:
  case 0x311:
  case 0x312:
  case 0x313:
  case 0x314:
  case 0x315:
  case 0x316:
  case 0x317:
  case 0x318:
  case 0x319:
  case 0x31a:
  case 0x31b:
  case 0x31c:
  case 0x31d:
  case 0x31e:
  case 799:
  case 800:
  case 0x321:
  case 0x322:
  case 0x323:
  case 0x324:
  case 0x325:
  case 0x326:
  case 0x327:
  case 0x328:
  case 0x329:
  case 0x32a:
  case 0x32b:
  case 0x32c:
  case 0x32d:
  case 0x32e:
  case 0x32f:
  case 0x330:
  case 0x331:
  case 0x332:
  case 0x333:
  case 0x334:
  case 0x335:
  case 0x336:
  case 0x337:
  case 0x338:
  case 0x339:
  case 0x33a:
  case 0x33b:
  case 0x33c:
  case 0x33d:
  case 0x33e:
  case 0x33f:
  case 0x340:
  case 0x341:
  case 0x342:
  case 0x343:
  case 0x344:
  case 0x345:
  case 0x346:
  case 0x347:
  case 0x348:
  case 0x349:
  case 0x34a:
  case 0x34b:
  case 0x34c:
  case 0x34d:
  case 0x34e:
  case 0x34f:
  case 0x350:
  case 0x351:
  case 0x354:
  case 0x355:
  case 0x356:
  case 0x357:
  case 0x358:
  case 0x359:
  case 0x35a:
  case 0x35b:
  case 0x35c:
  case 0x35d:
  case 0x35e:
  case 0x35f:
  case 0x360:
  case 0x361:
  case 0x362:
  case 0x363:
  case 0x364:
  case 0x365:
  case 0x366:
  case 0x367:
  case 0x368:
  case 0x369:
  case 0x36a:
  case 0x36b:
  case 0x36c:
  case 0x36d:
  case 0x36e:
  case 0x36f:
  case 0x370:
  case 0x371:
  case 0x372:
  case 0x373:
  case 0x374:
  case 0x375:
  case 0x376:
  case 0x377:
  case 0x378:
  case 0x379:
  case 0x37a:
  case 0x37c:
  case 0x37d:
  case 0x37e:
  case 0x380:
  case 0x381:
  case 0x382:
  case 899:
  case 900:
  case 0x385:
  case 0x386:
  case 0x387:
  case 0x388:
  case 0x389:
  case 0x38a:
  case 0x38b:
  case 0x38c:
  case 0x38d:
  case 0x38e:
  case 0x38f:
  case 0x390:
  case 0x391:
  case 0x393:
  case 0x394:
  case 0x395:
  case 0x396:
  case 0x397:
  case 0x398:
  case 0x39a:
  case 0x39b:
  case 0x39c:
  case 0x39d:
  case 0x39e:
  case 0x39f:
  case 0x3a0:
  case 0x3a1:
  case 0x3a2:
  case 0x3a3:
  case 0x3a4:
  case 0x3a5:
  case 0x3a6:
  case 0x3a7:
  case 0x3a8:
  case 0x3a9:
  case 0x3aa:
  case 0x3ab:
  case 0x3ac:
  case 0x3ad:
  case 0x3ae:
  case 0x3af:
  case 0x3b0:
  case 0x3b1:
  case 0x3b2:
  case 0x3b3:
  case 0x3b4:
  case 0x3b5:
  case 0x3b6:
  case 0x3b7:
  case 0x3b8:
  case 0x3bc:
  case 0x3bd:
  case 0x3be:
  case 0x3bf:
  case 0x3c0:
  case 0x3c1:
  case 0x3c2:
  case 0x3c3:
  case 0x3c4:
  case 0x3c5:
  case 0x3c6:
  case 0x3c7:
  case 0x3c8:
  case 0x3c9:
  case 0x3ca:
  case 0x3cb:
  case 0x3cc:
  case 0x3cd:
  case 0x3ce:
  case 0x3cf:
  case 0x3d0:
  case 0x3d1:
  case 0x3d2:
  case 0x3d4:
  case 0x3d5:
  case 0x3d6:
  case 0x3d7:
  case 0x3d8:
  case 0x3d9:
  case 0x3da:
  case 0x3db:
  case 0x3dc:
  case 0x3f2:
  case 0x3f3:
  case 0x3f4:
  case 0x3f5:
    break;
  case 0x251:
    if ((uint)*(byte *)(param_1 + 0x22) != (param_3 & 1)) {
      *(char *)(param_1 + 0x22) = (char)(param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x00379a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xa8))();
      return;
    }
    break;
  case 0x25e:
    if ((uint)*(byte *)((long)param_1 + 0x13c) != (param_3 & 1)) {
      *(char *)((long)param_1 + 0x13c) = (char)(param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x00379adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1f8))();
      return;
    }
    break;
  case 0x27a:
    if ((uint)*(byte *)((long)param_1 + 0xc) != (param_3 & 1)) {
      *(char *)((long)param_1 + 0xc) = (char)(param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x00379b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x50))();
      return;
    }
    break;
  case 0x27f:
    if ((uint)*(byte *)(param_1 + 0x34) != (param_3 & 1)) {
      *(char *)(param_1 + 0x34) = (char)(param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x00379abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x2c0))();
      return;
    }
    break;
  case 0x287:
    if ((uint)*(byte *)((long)param_1 + 0xc) != (param_3 & 1)) {
      *(char *)((long)param_1 + 0xc) = (char)(param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x00379b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x58))();
      return;
    }
    break;
  case 0x2a4:
  case 0x2b5:
    if ((uint)*(byte *)((long)param_1 + 0x8c) != (param_3 & 1)) {
      *(char *)((long)param_1 + 0x8c) = (char)(param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x00379590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x98))();
      return;
    }
    break;
  case 0x2b3:
    if ((uint)*(byte *)((long)param_1 + 0xa4) != (param_3 & 1)) {
      *(char *)((long)param_1 + 0xa4) = (char)(param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x00379ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xa0))();
      return;
    }
    break;
  case 0x2bf:
    if ((uint)*(byte *)(param_1 + 0x34) != (param_3 & 1)) {
      *(char *)(param_1 + 0x34) = (char)(param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x00379a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x288))();
      return;
    }
    break;
  case 0x2d4:
    if ((uint)*(byte *)(param_1 + 0x14) != (param_3 & 1)) {
      *(char *)(param_1 + 0x14) = (char)(param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x00379be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x120))();
      return;
    }
    break;
  case 0x2de:
    if ((uint)*(byte *)((long)param_1 + 0x9c) != (param_3 & 1)) {
      *(char *)((long)param_1 + 0x9c) = (char)(param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x00379ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xd0))();
      return;
    }
    break;
  case 0x2f0:
    if ((uint)*(byte *)(param_1 + 0x16) != (param_3 & 1)) {
      *(char *)(param_1 + 0x16) = (char)(param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x00379c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xb8))();
      return;
    }
    break;
  case 0x302:
    if ((uint)*(byte *)(param_1 + 0x27) != (param_3 & 1)) {
      *(char *)(param_1 + 0x27) = (char)(param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x00379bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1d0))();
      return;
    }
    break;
  case 0x30b:
    if ((uint)*(byte *)(param_1 + 0x13) != (param_3 & 1)) {
      *(char *)(param_1 + 0x13) = (char)(param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x00379c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x98))();
      return;
    }
    break;
  case 0x30e:
    if ((uint)*(byte *)((long)param_1 + 0x99) != (param_3 & 1)) {
      *(char *)((long)param_1 + 0x99) = (char)(param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x00379a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xa0))();
      return;
    }
    break;
  case 0x352:
    if ((uint)*(byte *)((long)param_1 + 0xac) != (param_3 & 1)) {
      *(char *)((long)param_1 + 0xac) = (char)(param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x003799c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x138))();
      return;
    }
    break;
  case 0x353:
    if ((uint)*(byte *)((long)param_1 + 0xad) != (param_3 & 1)) {
      *(char *)((long)param_1 + 0xad) = (char)(param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x00379d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x140))();
      return;
    }
    break;
  case 0x37b:
    if ((uint)*(byte *)((long)param_1 + 0xae) != (param_3 & 1)) {
      *(char *)((long)param_1 + 0xae) = (char)(param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x00379c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x148))();
      return;
    }
    break;
  case 0x37f:
    if ((uint)*(byte *)(param_1 + 0x2f) != (param_3 & 1)) {
      *(char *)(param_1 + 0x2f) = (char)(param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x00379b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x250))();
      return;
    }
    break;
  case 0x392:
    if ((uint)*(byte *)(param_1 + 0x14) != (param_3 & 1)) {
      *(char *)(param_1 + 0x14) = (char)(param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x00379a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xa8))();
      return;
    }
    break;
  case 0x399:
    if ((uint)*(byte *)((long)param_1 + 0xc) != (param_3 & 1)) {
      *(char *)((long)param_1 + 0xc) = (char)(param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x00379d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x68))();
      return;
    }
    break;
  case 0x3b9:
    goto switchD_00379570_caseD_3b9;
  case 0x3ba:
    if ((uint)*(byte *)((long)param_1 + 0x89) != (param_3 & 1)) {
      *(char *)((long)param_1 + 0x89) = (char)(param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x00379c08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x98))();
      return;
    }
    break;
  case 0x3bb:
    if ((uint)*(byte *)((long)param_1 + 0x8a) != (param_3 & 1)) {
      *(char *)((long)param_1 + 0x8a) = (char)(param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x003799e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xa0))();
      return;
    }
    break;
  case 0x3d3:
    if ((uint)*(byte *)((long)param_1 + 0x194) != (param_3 & 1)) {
      *(char *)((long)param_1 + 0x194) = (char)(param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x0037995c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x240))();
      return;
    }
    break;
  case 0x3dd:
    if (param_1 == (long *)0x0) {
      return;
    }
    uVar4 = *(uint *)((long)param_1 + 0xdc) & 0xfffffffe | param_3 & 1;
    if (*(uint *)((long)param_1 + 0xdc) == uVar4) {
      return;
    }
    goto LAB_00379d30;
  case 0x3de:
    if (param_1 == (long *)0x0) {
      return;
    }
    uVar3 = *(uint *)((long)param_1 + 0xdc);
    bVar1 = (param_3 & 1) == 0;
    uVar2 = 2;
    uVar4 = uVar3 & 0xfffffffd;
    goto LAB_00379d20;
  case 0x3df:
    if (param_1 == (long *)0x0) {
      return;
    }
    uVar3 = *(uint *)((long)param_1 + 0xdc);
    bVar1 = (param_3 & 1) == 0;
    uVar2 = 4;
    uVar4 = uVar3 & 0xfffffffb;
    goto LAB_00379d20;
  case 0x3e0:
    if (param_1 == (long *)0x0) {
      return;
    }
    uVar3 = *(uint *)((long)param_1 + 0xdc);
    bVar1 = (param_3 & 1) == 0;
    uVar2 = 8;
    uVar4 = uVar3 & 0xfffffff7;
    goto LAB_00379d20;
  case 0x3e1:
    if (param_1 == (long *)0x0) {
      return;
    }
    uVar3 = *(uint *)((long)param_1 + 0xdc);
    bVar1 = (param_3 & 1) == 0;
    uVar2 = 0x10;
    uVar4 = uVar3 & 0xffffffef;
    goto LAB_00379d20;
  case 0x3e2:
    if (param_1 == (long *)0x0) {
      return;
    }
    uVar3 = *(uint *)((long)param_1 + 0xdc);
    bVar1 = (param_3 & 1) == 0;
    uVar2 = 0x20;
    uVar4 = uVar3 & 0xffffffdf;
    goto LAB_00379d20;
  case 0x3e3:
    if (param_1 == (long *)0x0) {
      return;
    }
    uVar3 = *(uint *)((long)param_1 + 0xdc);
    bVar1 = (param_3 & 1) == 0;
    uVar2 = 0x40;
    uVar4 = uVar3 & 0xffffffbf;
LAB_00379d20:
    if (bVar1) {
      uVar2 = 0;
    }
    uVar4 = uVar4 | uVar2;
    if (uVar3 != uVar4) {
LAB_00379d30:
      *(uint *)((long)param_1 + 0xdc) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00379d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xb8))();
      return;
    }
    break;
  case 0x3e4:
    if (param_1 == (long *)0x0) {
      return;
    }
    uVar3 = *(uint *)(param_1 + 0x1c);
    uVar4 = uVar3 & 0xfffffffe | param_3 & 1;
    goto LAB_00379de0;
  case 0x3e5:
    if (param_1 == (long *)0x0) {
      return;
    }
    uVar3 = *(uint *)(param_1 + 0x1c);
    bVar1 = (param_3 & 1) == 0;
    uVar2 = 2;
    uVar4 = uVar3 & 0xfffffffd;
    goto LAB_00379dd8;
  case 0x3e6:
    if (param_1 == (long *)0x0) {
      return;
    }
    uVar3 = *(uint *)(param_1 + 0x1c);
    bVar1 = (param_3 & 1) == 0;
    uVar2 = 4;
    uVar4 = uVar3 & 0xfffffffb;
    goto LAB_00379dd8;
  case 999:
    if (param_1 == (long *)0x0) {
      return;
    }
    uVar3 = *(uint *)(param_1 + 0x1c);
    bVar1 = (param_3 & 1) == 0;
    uVar2 = 8;
    uVar4 = uVar3 & 0xfffffff7;
    goto LAB_00379dd8;
  case 1000:
    if (param_1 == (long *)0x0) {
      return;
    }
    uVar3 = *(uint *)(param_1 + 0x1c);
    bVar1 = (param_3 & 1) == 0;
    uVar2 = 0x10;
    uVar4 = uVar3 & 0xffffffef;
    goto LAB_00379dd8;
  case 0x3e9:
    if (param_1 == (long *)0x0) {
      return;
    }
    uVar3 = *(uint *)(param_1 + 0x1c);
    bVar1 = (param_3 & 1) == 0;
    uVar2 = 0x20;
    uVar4 = uVar3 & 0xffffffdf;
    goto LAB_00379dd8;
  case 0x3ea:
    if (param_1 == (long *)0x0) {
      return;
    }
    uVar3 = *(uint *)(param_1 + 0x1c);
    bVar1 = (param_3 & 1) == 0;
    uVar2 = 0x40;
    uVar4 = uVar3 & 0xffffffbf;
    goto LAB_00379dd8;
  case 0x3eb:
    if (param_1 == (long *)0x0) {
      return;
    }
    uVar3 = *(uint *)(param_1 + 0x1c);
    bVar1 = (param_3 & 1) == 0;
    uVar2 = 0x80;
    uVar4 = uVar3 & 0xffffff7f;
    goto LAB_00379dd8;
  case 0x3ec:
    if (param_1 == (long *)0x0) {
      return;
    }
    uVar3 = *(uint *)(param_1 + 0x1c);
    bVar1 = (param_3 & 1) == 0;
    uVar2 = 0x100;
    uVar4 = uVar3 & 0xfffffeff;
    goto LAB_00379dd8;
  case 0x3ed:
    if (param_1 == (long *)0x0) {
      return;
    }
    uVar3 = *(uint *)(param_1 + 0x1c);
    bVar1 = (param_3 & 1) == 0;
    uVar2 = 0x200;
    uVar4 = uVar3 & 0xfffffdff;
    goto LAB_00379dd8;
  case 0x3ee:
    if (param_1 == (long *)0x0) {
      return;
    }
    uVar3 = *(uint *)(param_1 + 0x1c);
    bVar1 = (param_3 & 1) == 0;
    uVar2 = 0x400;
    uVar4 = uVar3 & 0xfffffbff;
    goto LAB_00379dd8;
  case 0x3ef:
    if (param_1 == (long *)0x0) {
      return;
    }
    uVar3 = *(uint *)(param_1 + 0x1c);
    bVar1 = (param_3 & 1) == 0;
    uVar2 = 0x800;
    uVar4 = uVar3 & 0xfffff7ff;
    goto LAB_00379dd8;
  case 0x3f0:
    if (param_1 == (long *)0x0) {
      return;
    }
    uVar3 = *(uint *)(param_1 + 0x1c);
    bVar1 = (param_3 & 1) == 0;
    uVar2 = 0x1000;
    uVar4 = uVar3 & 0xffffefff;
    goto LAB_00379dd8;
  case 0x3f1:
    if (param_1 == (long *)0x0) {
      return;
    }
    uVar3 = *(uint *)(param_1 + 0x1c);
    bVar1 = (param_3 & 1) == 0;
    uVar2 = 0x2000;
    uVar4 = uVar3 & 0xffffdfff;
LAB_00379dd8:
    if (bVar1) {
      uVar2 = 0;
    }
    uVar4 = uVar4 | uVar2;
LAB_00379de0:
    if (uVar3 != uVar4) {
      *(uint *)(param_1 + 0x1c) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00379df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xc0))();
      return;
    }
    break;
  case 0x3f6:
    if ((uint)*(byte *)((long)param_1 + 0x184) != (param_3 & 1)) {
      *(char *)((long)param_1 + 0x184) = (char)(param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x00379a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x268))();
      return;
    }
    break;
  default:
    if (param_2 == 0x16d) {
      if ((uint)*(byte *)((long)param_1 + 0xa5) != (param_3 & 1)) {
        *(char *)((long)param_1 + 0xa5) = (char)(param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x00379e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0xd8))();
        return;
      }
    }
    else if ((param_2 == 0x178) && ((uint)*(byte *)((long)param_1 + 0x41) != (param_3 & 1))) {
      *(char *)((long)param_1 + 0x41) = (char)(param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x00379674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x90))();
      return;
    }
  }
  return;
switchD_003795bc_caseD_20:
  if ((uint)*(byte *)(param_1 + 0x35) == (param_3 & 1)) {
    return;
  }
  *(char *)(param_1 + 0x35) = (char)(param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x003795dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1f0))();
  return;
}


// ===== 00379e1c  rive::BlendAnimation::import =====

/* rive::BlendAnimation::import(rive::ImportStack&) */

undefined8 __thiscall rive::BlendAnimation::import(BlendAnimation *this,ImportStack *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if (uVar4 == 0) {
    return 1;
  }
  uVar12 = NEON_cnt(uVar4,1);
  uVar11 = NEON_uaddlv(uVar12,1);
  uVar6 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
  if (uVar6 < 2) {
    uVar7 = (ulong)((uint)uVar4 - 1) & 0x3c;
  }
  else {
    uVar7 = 0x3c;
    if (uVar4 < 0x3d) {
      uVar1 = (uint)uVar4 & 0xff;
      uVar2 = 0;
      if ((uVar4 & 0xff) != 0) {
        uVar2 = 0x3c / uVar1;
      }
      uVar7 = (ulong)(0x3c - uVar2 * uVar1);
    }
  }
  plVar8 = *(long **)(*(long *)param_1 + uVar7 * 8);
  if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
    do {
      uVar9 = plVar8[1];
      if (uVar9 == 0x3c) {
        if ((short)plVar8[2] == 0x3c) {
          lVar10 = plVar8[3];
          if (lVar10 == 0) {
            return 1;
          }
          uVar4 = (**(code **)(**(long **)(lVar10 + 8) + 0x18))(*(long **)(lVar10 + 8),0x48);
          if ((uVar4 & 1) == 0) {
            return 2;
          }
          BlendState::addAnimation(*(BlendState **)(lVar10 + 8),this);
          uVar4 = *(ulong *)(param_1 + 8);
          if (uVar4 == 0) {
            return 1;
          }
          uVar12 = NEON_cnt(uVar4,1);
          uVar11 = NEON_uaddlv(uVar12,1);
          uVar7 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
          uVar6 = (ulong)~(uint)uVar4 & 1;
          if (1 < uVar7) {
            uVar6 = (ulong)(uVar4 - 1 != 0);
          }
          plVar8 = *(long **)(*(long *)param_1 + uVar6 * 8);
          if (plVar8 == (long *)0x0) {
            return 1;
          }
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) {
            return 1;
          }
          do {
            uVar9 = plVar8[1];
            if (uVar9 == 1) {
              if ((short)plVar8[2] == 1) {
                if (plVar8[3] == 0) {
                  return 1;
                }
                lVar10 = *(long *)(plVar8[3] + 8);
                lVar5 = *(long *)(lVar10 + 0xa88);
                if ((ulong)*(uint *)(this + 0xc) < (ulong)(*(long *)(lVar10 + 0xa90) - lVar5 >> 3))
                {
                  *(undefined8 *)(this + 0x10) =
                       *(undefined8 *)(lVar5 + (ulong)*(uint *)(this + 0xc) * 8);
                  return 0;
                }
                return 0;
              }
            }
            else {
              if (uVar7 < 2) {
                uVar9 = uVar9 & uVar4 - 1;
              }
              else if (uVar4 <= uVar9) {
                uVar3 = 0;
                if (uVar4 != 0) {
                  uVar3 = uVar9 / uVar4;
                }
                uVar9 = uVar9 - uVar3 * uVar4;
              }
              if (uVar9 != uVar6) {
                return 1;
              }
            }
            plVar8 = (long *)*plVar8;
            if (plVar8 == (long *)0x0) {
              return 1;
            }
          } while( true );
        }
      }
      else {
        if (uVar6 < 2) {
          uVar9 = uVar9 & uVar4 - 1;
        }
        else if (uVar4 <= uVar9) {
          uVar3 = 0;
          if (uVar4 != 0) {
            uVar3 = uVar9 / uVar4;
          }
          uVar9 = uVar9 - uVar3 * uVar4;
        }
        if (uVar9 != uVar7) {
          return 1;
        }
      }
      plVar8 = (long *)*plVar8;
    } while (plVar8 != (long *)0x0);
  }
  return 1;
}


// ===== 0037a008  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 0037a00c  FUN_0037a00c =====

undefined8 FUN_0037a00c(void)

{
  return 0x4a;
}


// ===== 0037a014  FUN_0037a014 =====

bool FUN_0037a014(undefined8 param_1,short param_2)

{
  return param_2 == 0x4a;
}


// ===== 0037a024  FUN_0037a024 =====

bool FUN_0037a024(long param_1,short param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  
  if (param_2 == 0xa5) {
    uVar6 = 0;
    uVar3 = 0;
    pbVar4 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar4) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_0037a088;
      }
      pbVar5 = pbVar4 + 1;
      bVar1 = *pbVar4;
      uVar2 = uVar6 & 0x3f;
      uVar6 = (ulong)(((uint)uVar6 & 0xff) + 7);
      uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
      pbVar4 = pbVar5;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar5;
    if (uVar3 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_0037a088:
      uVar3 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
  }
  return param_2 == 0xa5;
}


// ===== 0037a0a0  FUN_0037a0a0 =====

void FUN_0037a0a0(void)

{
  return;
}


// ===== 0037a0a4  rive::FileAsset::import =====

/* rive::FileAsset::import(rive::ImportStack&) */

void __thiscall rive::FileAsset::import(FileAsset *this,ImportStack *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  BackboardImporter *pBVar11;
  undefined2 uVar12;
  undefined8 uVar13;
  FileAsset *local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  uVar6 = (**(code **)(*(long *)this + 0x80))();
  if ((uVar6 & 1) == 0) {
LAB_0037a1d4:
    uVar13 = 0;
  }
  else {
    uVar6 = *(ulong *)(param_1 + 8);
    if (uVar6 != 0) {
      uVar13 = NEON_cnt(uVar6,1);
      uVar12 = NEON_uaddlv(uVar13,1);
      uVar7 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
      if (uVar7 < 2) {
        uVar8 = (ulong)((uint)uVar6 - 1) & 0x17;
      }
      else {
        uVar8 = 0x17;
        if (uVar6 < 0x18) {
          uVar1 = (uint)uVar6 & 0xff;
          uVar2 = 0;
          if ((uVar6 & 0xff) != 0) {
            uVar2 = 0x17 / uVar1;
          }
          uVar8 = (ulong)(0x17 - uVar2 * uVar1);
        }
      }
      plVar9 = *(long **)(*(long *)param_1 + uVar8 * 8);
      if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
        do {
          uVar10 = plVar9[1];
          if (uVar10 == 0x17) {
            if ((short)plVar9[2] == 0x17) {
              pBVar11 = (BackboardImporter *)plVar9[3];
              if (pBVar11 != (BackboardImporter *)0x0) {
                FUN_00340fb0(1,this + 0x48);
                local_40 = this;
                BackboardImporter::addFileAsset(pBVar11,&local_40);
                iVar5 = FUN_00340fe0(0xffffffff,this + 0x48);
                if (iVar5 == 1) {
                  (**(code **)(*(long *)this + 8))(this);
                }
                goto LAB_0037a1d4;
              }
              break;
            }
          }
          else {
            if (uVar7 < 2) {
              uVar10 = uVar10 & uVar6 - 1;
            }
            else if (uVar6 <= uVar10) {
              uVar3 = 0;
              if (uVar6 != 0) {
                uVar3 = uVar10 / uVar6;
              }
              uVar10 = uVar10 - uVar3 * uVar6;
            }
            if (uVar10 != uVar8) break;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
    uVar13 = 1;
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar13);
  }
  return;
}


// ===== 0037a208  rive::FileAsset::uniqueName =====

/* rive::FileAsset::uniqueName() const */

void rive::FileAsset::uniqueName(void)

{
  ulong uVar1;
  size_t __n;
  long lVar2;
  bool bVar3;
  long in_x0;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *in_x8;
  undefined8 uVar6;
  void *pvVar7;
  void *pvVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte local_a0 [16];
  void *local_90;
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((*(byte *)(in_x0 + 0x10) & 1) == 0) {
    uStack_68 = *(ulong *)(in_x0 + 0x18);
    local_70 = *(ulong *)(in_x0 + 0x10);
    local_60 = *(void **)(in_x0 + 0x20);
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_70,*(char **)(in_x0 + 0x20),*(ulong *)(in_x0 + 0x18));
  }
  uVar4 = std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::rfind
                    ((char)&stack0xffffffffffffffb0 + -0x20,0x2e);
  if (uVar4 != 0xffffffffffffffff) {
    bVar3 = (local_70 & 1) != 0;
    uVar1 = local_70 >> 1 & 0x7f;
    if (bVar3) {
      uVar1 = uStack_68;
    }
    pvVar7 = (void *)((ulong)&local_70 | 1);
    if (bVar3) {
      pvVar7 = local_60;
    }
    if (uVar4 <= uVar1) {
      uVar1 = uVar4;
    }
    if (0xffffffffffffffef < uVar1) goto LAB_0037a464;
    if (uVar1 < 0x17) {
      pvVar8 = (void *)((ulong)&local_88 | 1);
      local_88 = CONCAT71(local_88._1_7_,(char)((int)uVar1 << 1));
      if (uVar1 != 0) goto LAB_0037a2e8;
    }
    else {
      pvVar8 = operator_new((uVar1 | 0xf) + 1);
      local_88 = (uVar1 | 0xf) + 2;
      uStack_80 = uVar1;
      local_78 = pvVar8;
LAB_0037a2e8:
      memmove(pvVar8,pvVar7,uVar1);
    }
    *(undefined1 *)((long)pvVar8 + uVar1) = 0;
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
    uStack_68 = uStack_80;
    local_70 = local_88;
    local_60 = local_78;
  }
  uVar4 = local_70;
  __n = local_70 >> 1 & 0x7f;
  if ((local_70 & 1) != 0) {
    __n = uStack_68;
  }
  uVar1 = __n + 1;
  if (0xffffffffffffffef < uVar1) {
LAB_0037a464:
                    /* WARNING: Subroutine does not return */
    FUN_0031faf0(&local_88);
  }
  if (uVar1 < 0x17) {
    uStack_80 = 0;
    pvVar7 = (void *)((ulong)&local_88 | 1);
    local_78 = (void *)0x0;
    local_88 = (ulong)(byte)((int)uVar1 << 1);
    if (__n == 0) goto LAB_0037a3a0;
  }
  else {
    pvVar7 = operator_new((uVar1 | 0xf) + 1);
    local_88 = (uVar1 | 0xf) + 2;
    uStack_80 = uVar1;
    local_78 = pvVar7;
  }
  pvVar8 = (void *)((ulong)&local_70 | 1);
  if ((uVar4 & 1) != 0) {
    pvVar8 = local_60;
  }
  memmove(pvVar7,pvVar8,__n);
LAB_0037a3a0:
  *(undefined2 *)((long)pvVar7 + __n) = 0x2d;
  std::__ndk1::to_string(*(uint *)(in_x0 + 0x28));
  pvVar7 = (void *)((ulong)local_a0 | 1);
  if ((local_a0[0] & 1) != 0) {
    pvVar7 = local_90;
  }
  puVar5 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                     ((char *)&local_88,(ulong)pvVar7);
  uVar10 = puVar5[1];
  uVar9 = *puVar5;
  *puVar5 = 0;
  puVar5[1] = 0;
  uVar6 = puVar5[2];
  puVar5[2] = 0;
  in_x8[1] = uVar10;
  *in_x8 = uVar9;
  in_x8[2] = uVar6;
  if ((local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0037a470  rive::FileAsset::uniqueFilename =====

/* rive::FileAsset::uniqueFilename() const */

void rive::FileAsset::uniqueFilename(void)

{
  long lVar1;
  void *pvVar2;
  long *in_x0;
  ulong *puVar3;
  undefined8 *puVar4;
  undefined8 *in_x8;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte local_80 [16];
  void *local_70;
  byte local_68 [16];
  void *local_58;
  ulong local_50;
  ulong uStack_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uniqueName();
  puVar3 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)local_68);
  uStack_48 = puVar3[1];
  local_50 = *puVar3;
  local_40 = (void *)puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  (**(code **)(*in_x0 + 0x90))(local_80);
  pvVar2 = (void *)((ulong)local_80 | 1);
  if ((local_80[0] & 1) != 0) {
    pvVar2 = local_70;
  }
  puVar4 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                     ((char *)&local_50,(ulong)pvVar2);
  uVar7 = puVar4[1];
  uVar6 = *puVar4;
  *puVar4 = 0;
  puVar4[1] = 0;
  uVar5 = puVar4[2];
  puVar4[2] = 0;
  in_x8[1] = uVar7;
  *in_x8 = uVar6;
  in_x8[2] = uVar5;
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0037a588  rive::FileAsset::copyCdnUuid =====

/* rive::FileAsset::copyCdnUuid(rive::FileAssetBase const&) */

void rive::FileAsset::copyCdnUuid(FileAssetBase *param_1)

{
  return;
}


// ===== 0037a58c  rive::FileAsset::decodeCdnUuid =====

/* rive::FileAsset::decodeCdnUuid(rive::Span<unsigned char const>) */

void rive::FileAsset::decodeCdnUuid(long param_1,void *param_2,ulong param_3)

{
  long lVar1;
  void *__dest;
  void *pvVar2;
  long lVar3;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  if (param_3 == 0) {
    lVar3 = 0;
    __dest = (void *)0x0;
    pvVar2 = *(void **)(param_1 + 0x50);
  }
  else {
    if ((long)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00327f8c(&local_60);
    }
    __dest = operator_new(param_3);
    lVar3 = (long)__dest + param_3;
    memcpy(__dest,param_2,param_3);
    pvVar2 = *(void **)(param_1 + 0x50);
  }
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0x58) = pvVar2;
    operator_delete(pvVar2);
  }
  *(void **)(param_1 + 0x50) = __dest;
  *(long *)(param_1 + 0x58) = lVar3;
  *(long *)(param_1 + 0x60) = lVar3;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0037a648  rive::FileAsset::cdnUuid =====

/* rive::FileAsset::cdnUuid() const */

undefined1  [16] __thiscall rive::FileAsset::cdnUuid(FileAsset *this)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = *(long *)(this + 0x58) - *(long *)(this + 0x50);
  auVar1._0_8_ = *(long *)(this + 0x50);
  return auVar1;
}


// ===== 0037a658  rive::FileAsset::cdnUuidStr =====

/* rive::FileAsset::cdnUuidStr() const */

void rive::FileAsset::cdnUuidStr(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long in_x0;
  long *plVar8;
  undefined2 *in_x8;
  long lVar9;
  long lVar10;
  id local_190 [8];
  undefined *local_188 [2];
  undefined *local_178;
  undefined *local_170 [2];
  undefined8 auStack_160 [6];
  ulong local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined *local_108;
  undefined8 uStack_100;
  undefined4 auStack_f8 [4];
  int aiStack_e8 [30];
  long local_70;
  
  puVar7 = PTR_VTT_0067cff8;
  puVar6 = PTR_vtable_0067cff0;
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  if (*(long *)(in_x0 + 0x58) - *(long *)(in_x0 + 0x50) == 0x10) {
    local_188[0] = *(undefined **)(PTR_VTT_0067cff8 + 0x10);
    puVar1 = PTR_vtable_0067cff0 + 0x68;
    puVar2 = PTR_vtable_0067cff0 + 0x40;
    local_188[1] = (undefined *)0x0;
    local_178 = puVar2;
    local_108 = puVar1;
    *(undefined8 *)((long)local_188 + *(long *)(local_188[0] + -0x18)) =
         *(undefined8 *)(PTR_VTT_0067cff8 + 0x18);
    lVar9 = *(long *)(local_188[0] + -0x18);
    std::__ndk1::ios_base::init((void *)((long)local_188 + lVar9));
    *(undefined8 *)((long)&uStack_100 + lVar9) = 0;
    lVar10 = *(long *)(puVar7 + 8);
    *(undefined4 *)((long)auStack_f8 + lVar9) = 0xffffffff;
    *(undefined8 *)
     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_178 +
     *(long *)(*(long *)(puVar7 + 0x20) + -0x18)) = *(undefined8 *)(puVar7 + 0x28);
    *(undefined8 *)((long)local_188 + *(long *)(lVar10 + -0x18)) = *(undefined8 *)(puVar7 + 0x30);
    local_188[0] = puVar6 + 0x18;
    local_178 = puVar2;
    local_108 = puVar1;
    std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
    local_170[0] = PTR_vtable_0067cc60 + 0x10;
    uStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    local_120 = (void *)0x0;
    local_110 = 0x18;
    *(uint *)((long)local_170 + *(long *)(local_178 + -0x18)) =
         *(uint *)((long)local_170 + *(long *)(local_178 + -0x18)) & 0xffffffb5 | 8;
    lVar9 = *(long *)(local_178 + -0x18);
    if (*(int *)((long)aiStack_e8 + lVar9) == -1) {
      std::__ndk1::ios_base::getloc();
      plVar8 = (long *)std::__ndk1::locale::use_facet(local_190);
      (**(code **)(*plVar8 + 0x38))(plVar8,0x20);
      std::__ndk1::locale::~locale((locale *)local_190);
    }
    lVar10 = 0;
    *(undefined4 *)((long)aiStack_e8 + lVar9) = 0x30;
    do {
      uVar4 = *(uint *)((long)&DAT_00253448 + lVar10);
      lVar9 = *(long *)(in_x0 + 0x50);
      *(undefined8 *)((long)auStack_160 + *(long *)(local_178 + -0x18)) = 2;
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_178,
                 (uint)*(byte *)(lVar9 + (int)uVar4));
      if ((uVar4 < 9) && ((1 << (ulong)(uVar4 & 0x1f) & 0x151U) != 0)) {
        local_190[0] = (id)0x2d;
        FUN_0033586c((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_178,local_190,1);
      }
      lVar10 = lVar10 + 4;
    } while (lVar10 != 0x40);
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    local_188[0] = *(undefined **)PTR_VTT_0067cff8;
    uVar3 = *(undefined8 *)(PTR_VTT_0067cff8 + 0x48);
    *(undefined8 *)((long)local_188 + *(long *)(local_188[0] + -0x18)) =
         *(undefined8 *)(PTR_VTT_0067cff8 + 0x40);
    local_170[0] = PTR_vtable_0067cc60 + 0x10;
    local_178 = (undefined *)uVar3;
    if ((local_130 & 1) != 0) {
      operator_delete(local_120);
    }
    std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
              ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)local_170);
    std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::~basic_iostream
              ((basic_iostream<char,std::__ndk1::char_traits<char>> *)local_188);
    std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
              ((basic_ios<char,std::__ndk1::char_traits<char>> *)&local_108);
  }
  else {
    *in_x8 = 0;
  }
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0037a8f4  FUN_0037a8f4 =====

void FUN_0037a8f4(long *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[0xd];
  *param_1 = (long)(PTR_vtable_0067cfe8 + 0x10);
  if (pvVar1 != (void *)0x0) {
    param_1[0xe] = (long)pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[10];
  if (pvVar1 != (void *)0x0) {
    param_1[0xb] = (long)pvVar1;
    operator_delete(pvVar1);
  }
  *param_1 = (long)&PTR_FUN_0065be68;
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    operator_delete((void *)param_1[8]);
  }
  *param_1 = (long)&PTR_FUN_0065bef8;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[4]);
  return;
}


// ===== 0037a980  FUN_0037a980 =====

void FUN_0037a980(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0065bef8;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[4]);
  return;
}


// ===== 0037a9a0  FUN_0037a9a0 =====

void FUN_0037a9a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0065bef8;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0037a9e0  FUN_0037a9e0 =====

undefined8 FUN_0037a9e0(void)

{
  return 99;
}


// ===== 0037a9e8  FUN_0037a9e8 =====

bool FUN_0037a9e8(undefined8 param_1,short param_2)

{
  return param_2 == 99;
}


// ===== 0037a9f8  FUN_0037a9f8 =====

void FUN_0037a9f8(long param_1,short param_2,long *param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  if (param_2 == 0xcb) {
    pcVar4 = (char *)param_3[2];
    do {
      if ((char *)(*param_3 + param_3[1]) <= pcVar4) {
        param_3[2] = *param_3 + param_3[1];
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_0037aa8c;
      }
      pcVar5 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar5;
    } while (cVar1 < '\0');
    param_3[2] = (long)pcVar5;
    if ((char)param_3[3] == '\0') {
      rive::BinaryReader::readString((ulong)param_3);
    }
    else {
LAB_0037aa8c:
      local_50 = 0;
      uStack_48 = 0;
      local_40 = 0;
    }
    if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
      operator_delete(*(void **)(param_1 + 0x20));
    }
    *(undefined8 *)(param_1 + 0x18) = uStack_48;
    *(undefined8 *)(param_1 + 0x10) = local_50;
    *(undefined8 *)(param_1 + 0x20) = local_40;
  }
  if (*(long *)(lVar2 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_2 == 0xcb);
}


// ===== 0037aae8  FUN_0037aae8 =====

void FUN_0037aae8(void)

{
  return;
}


// ===== 0037aaec  FUN_0037aaec =====

void FUN_0037aaec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0065be68;
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    operator_delete((void *)param_1[8]);
  }
  *param_1 = &PTR_FUN_0065bef8;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[4]);
  return;
}


// ===== 0037ab48  FUN_0037ab48 =====

void FUN_0037ab48(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x37ab4c);
  (*pcVar1)();
}


// ===== 0037ab4c  FUN_0037ab4c =====

undefined8 FUN_0037ab4c(void)

{
  return 0x67;
}


// ===== 0037ab54  FUN_0037ab54 =====

bool FUN_0037ab54(undefined8 param_1,int param_2)

{
  return (param_2 - 99U & 0xfffb) == 0;
}


// ===== 0037ab68  FUN_0037ab68 =====

undefined8 FUN_0037ab68(long *param_1,ushort param_2,long *param_3)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  void *pvVar5;
  byte *pbVar6;
  undefined8 uVar7;
  ulong uVar8;
  byte *pbVar9;
  long lVar10;
  byte *pbVar11;
  char *pcVar12;
  char *pcVar13;
  ulong uVar14;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  lVar4 = tpidr_el0;
  uVar7 = 0;
  lVar10 = *(long *)(lVar4 + 0x28);
  if (param_2 < 0x167) {
    if (param_2 == 0xcb) {
      pcVar12 = (char *)param_3[2];
      do {
        if ((char *)(*param_3 + param_3[1]) <= pcVar12) {
          param_3[2] = *param_3 + param_3[1];
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_0037ad58;
        }
        pcVar13 = pcVar12 + 1;
        cVar2 = *pcVar12;
        pcVar12 = pcVar13;
      } while (cVar2 < '\0');
      param_3[2] = (long)pcVar13;
      if ((char)param_3[3] == '\0') {
        rive::BinaryReader::readString((ulong)param_3);
      }
      else {
LAB_0037ad58:
        local_40 = 0;
        uStack_38 = 0;
        local_30 = 0;
      }
      pbVar6 = (byte *)(param_1 + 2);
      if ((*pbVar6 & 1) != 0) {
        pvVar5 = (void *)param_1[4];
LAB_0037ad70:
        operator_delete(pvVar5);
      }
LAB_0037ad74:
      *(undefined8 *)(pbVar6 + 8) = uStack_38;
      *(undefined8 *)pbVar6 = local_40;
      *(undefined8 *)(pbVar6 + 0x10) = local_30;
    }
    else {
      if (param_2 != 0xcc) goto LAB_0037adb0;
      uVar14 = 0;
      uVar8 = 0;
      pbVar6 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar6) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_0037ad14;
        }
        pbVar11 = pbVar6 + 1;
        bVar1 = *pbVar6;
        uVar3 = uVar14 & 0x3f;
        uVar14 = (ulong)(((uint)uVar14 & 0xff) + 7);
        uVar8 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar8;
        pbVar6 = pbVar11;
      } while ((char)bVar1 < '\0');
      param_3[2] = (long)pbVar11;
      if (uVar8 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_0037ad14:
        uVar8 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 5) = (int)uVar8;
    }
  }
  else {
    if (param_2 != 0x167) {
      if (param_2 != 0x16a) goto LAB_0037adb0;
      pcVar12 = (char *)param_3[2];
      do {
        if ((char *)(*param_3 + param_3[1]) <= pcVar12) {
          param_3[2] = *param_3 + param_3[1];
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_0037ad30;
        }
        pcVar13 = pcVar12 + 1;
        cVar2 = *pcVar12;
        pcVar12 = pcVar13;
      } while (cVar2 < '\0');
      param_3[2] = (long)pcVar13;
      if ((char)param_3[3] == '\0') {
        rive::BinaryReader::readString((ulong)param_3);
      }
      else {
LAB_0037ad30:
        local_40 = 0;
        uStack_38 = 0;
        local_30 = 0;
      }
      pbVar6 = (byte *)(param_1 + 6);
      if ((*pbVar6 & 1) != 0) {
        pvVar5 = (void *)param_1[8];
        goto LAB_0037ad70;
      }
      goto LAB_0037ad74;
    }
    uVar14 = 0;
    uVar8 = 0;
    pbVar6 = (byte *)(*param_3 + param_3[1]);
    pbVar11 = (byte *)param_3[2];
    do {
      if (pbVar6 <= pbVar11) {
        uVar8 = 0;
        *(undefined1 *)(param_3 + 3) = 1;
        pbVar11 = pbVar6;
        goto LAB_0037ad98;
      }
      pbVar9 = pbVar11 + 1;
      bVar1 = *pbVar11;
      uVar3 = uVar14 & 0x3f;
      uVar14 = (ulong)(((uint)uVar14 & 0xff) + 7);
      uVar8 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar8;
      pbVar11 = pbVar9;
    } while ((char)bVar1 < '\0');
    if ((char)param_3[3] != '\0') {
      uVar8 = 0;
    }
    pbVar6 = pbVar9;
    pbVar11 = pbVar9 + uVar8;
LAB_0037ad98:
    param_3[2] = (long)pbVar11;
    (**(code **)(*param_1 + 0x58))(param_1,pbVar6,uVar8);
  }
  uVar7 = 1;
LAB_0037adb0:
  if (*(long *)(lVar4 + 0x28) == lVar10) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0037add8  FUN_0037add8 =====

void FUN_0037add8(void)

{
  return;
}


// ===== 0037addc  FUN_0037addc =====

void FUN_0037addc(void)

{
  return;
}


// ===== 0037ade0  FUN_0037ade0 =====

void FUN_0037ade0(void)

{
  return;
}


// ===== 0037ade4  FUN_0037ade4 =====

void FUN_0037ade4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x37ade8);
  (*pcVar1)();
}


// ===== 0037ade8  FUN_0037ade8 =====

undefined8 FUN_0037ade8(void)

{
  return 1;
}


// ===== 0037adf0  rive::FontAsset::decode =====

/* rive::FontAsset::decode(rive::SimpleArray<unsigned char>&, rive::Factory*) */

void rive::FontAsset::decode(SimpleArray *param_1,Factory *param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  HBFont::Decode(&local_50,*(undefined8 *)param_2,*(undefined8 *)(param_2 + 8));
  plVar1 = local_50;
  plVar7 = *(long **)(param_1 + 0x80);
  local_50 = (long *)0x0;
  *(long **)(param_1 + 0x80) = plVar1;
  if ((plVar7 != (long *)0x0) && (iVar5 = FUN_00340fe0(0xffffffff,plVar7 + 1), iVar5 == 1)) {
    (**(code **)(*plVar7 + 8))(plVar7);
  }
  plVar7 = *(long **)(param_1 + 0x70);
  plVar4 = local_50;
  for (plVar1 = *(long **)(param_1 + 0x68); local_50 = plVar4, plVar1 != plVar7; plVar1 = plVar1 + 1
      ) {
    lVar8 = *plVar1;
    if ((*(ushort *)(lVar8 + -0x50) >> 4 & 1) == 0) {
      *(ushort *)(lVar8 + -0x50) = *(ushort *)(lVar8 + -0x50) | 0x10;
      (**(code **)(*(long *)(lVar8 + -0xb0) + 0x70))((long *)(lVar8 + -0xb0));
      lVar6 = *(long *)(lVar8 + -0x30);
      uVar2 = *(uint *)(lVar8 + -0x78);
      *(undefined1 *)(lVar6 + 0xc32) = 1;
      *(ushort *)(lVar6 + 0x60) = *(ushort *)(lVar6 + 0x60) | 4;
      if (uVar2 < *(uint *)(lVar6 + 0xbd4)) {
        *(uint *)(lVar6 + 0xbd4) = uVar2;
      }
    }
    plVar4 = local_50;
  }
  if ((plVar4 != (long *)0x0) && (iVar5 = FUN_00340fe0(0xffffffff,plVar4 + 1), iVar5 == 1)) {
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(long *)(param_1 + 0x80) != 0);
}


// ===== 0037af34  rive::FontAsset::font =====

/* rive::FontAsset::font(rive::rcp<rive::Font>) */

void __thiscall rive::FontAsset::font(FontAsset *this,undefined8 *param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  uVar4 = *param_2;
  *param_2 = 0;
  plVar7 = *(long **)(this + 0x80);
  *(undefined8 *)(this + 0x80) = uVar4;
  if ((plVar7 != (long *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,plVar7 + 1), iVar3 == 1)) {
    (**(code **)(*plVar7 + 8))(plVar7);
  }
  plVar1 = *(long **)(this + 0x70);
  for (plVar7 = *(long **)(this + 0x68); plVar7 != plVar1; plVar7 = plVar7 + 1) {
    lVar6 = *plVar7;
    if ((*(ushort *)(lVar6 + -0x50) >> 4 & 1) == 0) {
      *(ushort *)(lVar6 + -0x50) = *(ushort *)(lVar6 + -0x50) | 0x10;
      (**(code **)(*(long *)(lVar6 + -0xb0) + 0x70))((long *)(lVar6 + -0xb0));
      lVar5 = *(long *)(lVar6 + -0x30);
      uVar2 = *(uint *)(lVar6 + -0x78);
      *(undefined1 *)(lVar5 + 0xc32) = 1;
      *(ushort *)(lVar5 + 0x60) = *(ushort *)(lVar5 + 0x60) | 4;
      if (uVar2 < *(uint *)(lVar5 + 0xbd4)) {
        *(uint *)(lVar5 + 0xbd4) = uVar2;
      }
    }
  }
  return;
}


// ===== 0037b000  rive::FontAsset::fileExtension =====

/* rive::FontAsset::fileExtension() const */

void __thiscall rive::FontAsset::fileExtension(FontAsset *this)

{
  undefined1 *in_x8;
  
  *in_x8 = 6;
  *(undefined4 *)(in_x8 + 1) = 0x667474;
  return;
}


// ===== 0037b018  FUN_0037b018 =====

void FUN_0037b018(long *param_1)

{
  int iVar1;
  void *pvVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[0x10];
  *param_1 = (long)(PTR_vtable_0067d010 + 0x10);
  if ((plVar3 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar3 + 1), iVar1 == 1)) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  pvVar2 = (void *)param_1[0xd];
  *param_1 = (long)(PTR_vtable_0067cfe8 + 0x10);
  if (pvVar2 != (void *)0x0) {
    param_1[0xe] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[10];
  if (pvVar2 != (void *)0x0) {
    param_1[0xb] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  *param_1 = (long)&PTR_FUN_0065be68;
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    operator_delete((void *)param_1[8]);
  }
  *param_1 = (long)&PTR_FUN_0065bef8;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[4]);
  return;
}


// ===== 0037b0e0  FUN_0037b0e0 =====

void FUN_0037b0e0(long *param_1)

{
  int iVar1;
  void *pvVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[0x10];
  *param_1 = (long)(PTR_vtable_0067d010 + 0x10);
  if ((plVar3 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar3 + 1), iVar1 == 1)) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  pvVar2 = (void *)param_1[0xd];
  *param_1 = (long)(PTR_vtable_0067cfe8 + 0x10);
  if (pvVar2 != (void *)0x0) {
    param_1[0xe] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[10];
  if (pvVar2 != (void *)0x0) {
    param_1[0xb] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  *param_1 = (long)&PTR_FUN_0065be68;
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    operator_delete((void *)param_1[8]);
  }
  *param_1 = (long)&PTR_FUN_0065bef8;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0037b1a4  FUN_0037b1a4 =====

undefined8 FUN_0037b1a4(void)

{
  return 0x8d;
}


// ===== 0037b1ac  FUN_0037b1ac =====

uint FUN_0037b1ac(undefined8 param_1,int param_2)

{
  return (uint)((param_2 - 99U & 0xffff) < 0x2b) &
         (uint)(0x40000000011 >> ((ulong)(param_2 - 99U) & 0x3f));
}


// ===== 0037b1d0  rive::ImageAsset::~ImageAsset =====

/* rive::ImageAsset::~ImageAsset() */

void __thiscall rive::ImageAsset::~ImageAsset(ImageAsset *this)

{
  int iVar1;
  void *pvVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x88);
  *(undefined **)this = PTR_vtable_0067d018 + 0x10;
  if ((plVar3 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar3 + 1), iVar1 == 1)) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  pvVar2 = *(void **)(this + 0x68);
  *(undefined **)this = PTR_vtable_0067cfe8 + 0x10;
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x70) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x50);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x58) = pvVar2;
    operator_delete(pvVar2);
  }
  *(undefined ***)this = &PTR_FUN_0065be68;
  if (((byte)this[0x30] & 1) != 0) {
    operator_delete(*(void **)(this + 0x40));
  }
  *(undefined ***)this = &PTR_FUN_0065bef8;
  if (((byte)this[0x10] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x20));
  return;
}


// ===== 0037b298  rive::ImageAsset::~ImageAsset =====

/* rive::ImageAsset::~ImageAsset() */

void __thiscall rive::ImageAsset::~ImageAsset(ImageAsset *this)

{
  ~ImageAsset(this);
  operator_delete(this);
  return;
}


// ===== 0037b2bc  FUN_0037b2bc =====

undefined8 FUN_0037b2bc(void)

{
  return 0x69;
}


// ===== 0037b2c4  FUN_0037b2c4 =====

uint FUN_0037b2c4(undefined8 param_1,int param_2)

{
  return (uint)((param_2 - 99U & 0xffff) < 7) & 0x71U >> (ulong)(param_2 - 99U & 0x1f);
}


// ===== 0037b2e4  FUN_0037b2e4 =====

undefined8 FUN_0037b2e4(long param_1,short param_2,long *param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  if (param_2 == 0xd0) {
    puVar3 = (undefined4 *)param_3[2];
    puVar2 = (undefined4 *)(*param_3 + param_3[1]);
    if ((long)puVar2 - (long)puVar3 < 4) {
      uVar4 = 0;
      *(undefined1 *)(param_3 + 3) = 1;
    }
    else {
      puVar2 = puVar3 + 1;
      uVar4 = *puVar3;
    }
    *(undefined4 *)(param_1 + 0x84) = uVar4;
  }
  else {
    if (param_2 != 0xcf) {
      uVar1 = FUN_0037ab68();
      return uVar1;
    }
    puVar3 = (undefined4 *)param_3[2];
    puVar2 = (undefined4 *)(*param_3 + param_3[1]);
    if ((long)puVar2 - (long)puVar3 < 4) {
      uVar4 = 0;
      *(undefined1 *)(param_3 + 3) = 1;
    }
    else {
      puVar2 = puVar3 + 1;
      uVar4 = *puVar3;
    }
    *(undefined4 *)(param_1 + 0x80) = uVar4;
  }
  param_3[2] = (long)puVar2;
  return 1;
}


// ===== 0037b374  rive::ImageAsset::decode =====

/* rive::ImageAsset::decode(rive::SimpleArray<unsigned char>&, rive::Factory*) */

void __thiscall rive::ImageAsset::decode(ImageAsset *this,SimpleArray *param_1,Factory *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  (**(code **)(*(long *)param_2 + 0x40))
            (&local_40,param_2,*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  plVar3 = local_40;
  plVar5 = *(long **)(this + 0x88);
  local_40 = (long *)0x0;
  *(long **)(this + 0x88) = plVar3;
  if ((plVar5 != (long *)0x0) && (iVar4 = FUN_00340fe0(0xffffffff,plVar5 + 1), iVar4 == 1)) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  puVar1 = *(undefined8 **)(this + 0x70);
  plVar3 = local_40;
  for (puVar6 = *(undefined8 **)(this + 0x68); local_40 = plVar3, puVar6 != puVar1;
      puVar6 = puVar6 + 1) {
    (**(code **)(*(long *)*puVar6 + 0x20))();
    plVar3 = local_40;
  }
  if ((plVar3 != (long *)0x0) && (iVar4 = FUN_00340fe0(0xffffffff,plVar3 + 1), iVar4 == 1)) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(*(long *)(this + 0x88) != 0);
  }
  return;
}


// ===== 0037b474  rive::ImageAsset::fileExtension =====

/* rive::ImageAsset::fileExtension() const */

void __thiscall rive::ImageAsset::fileExtension(ImageAsset *this)

{
  undefined1 *in_x8;
  
  *in_x8 = 6;
  *(undefined4 *)(in_x8 + 1) = 0x676e70;
  return;
}


// ===== 0037b48c  FUN_0037b48c =====

void FUN_0037b48c(void)

{
  return;
}


// ===== 0037b490  FUN_0037b490 =====

void FUN_0037b490(void)

{
  return;
}


// ===== 0037b494  rive::ImageAsset::renderImage =====

/* rive::ImageAsset::renderImage(rive::rcp<rive::RenderImage>) */

void __thiscall rive::ImageAsset::renderImage(ImageAsset *this,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  uVar3 = *param_2;
  *param_2 = 0;
  plVar4 = *(long **)(this + 0x88);
  *(undefined8 *)(this + 0x88) = uVar3;
  if ((plVar4 != (long *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,plVar4 + 1), iVar2 == 1)) {
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  puVar1 = *(undefined8 **)(this + 0x70);
  for (puVar5 = *(undefined8 **)(this + 0x68); puVar5 != puVar1; puVar5 = puVar5 + 1) {
    (**(code **)(*(long *)*puVar5 + 0x20))();
  }
  return;
}


// ===== 0037b50c  rive::ScriptInput::~ScriptInput =====

/* rive::ScriptInput::~ScriptInput() */

void __thiscall rive::ScriptInput::~ScriptInput(ScriptInput *this)

{
  *(undefined **)this = PTR_vtable_0067d038 + 0x10;
  if ((this[0x18] != (ScriptInput)0x0) && (*(long **)(this + 0x10) != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0037b534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x10) + 8))();
    return;
  }
  return;
}


// ===== 0037b53c  rive::ScriptInput::~ScriptInput =====

/* rive::ScriptInput::~ScriptInput() */

void __thiscall rive::ScriptInput::~ScriptInput(ScriptInput *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x37b540);
  (*pcVar1)();
}


// ===== 0037b540  rive::ScriptInput::initScriptedValue =====

/* rive::ScriptInput::initScriptedValue() */

void rive::ScriptInput::initScriptedValue(void)

{
  return;
}


// ===== 0037b544  rive::ScriptInput::validateForColdScriptInit =====

/* rive::ScriptInput::validateForColdScriptInit() */

void __thiscall rive::ScriptInput::validateForColdScriptInit(ScriptInput *this)

{
                    /* WARNING: Could not recover jumptable at 0x0037b54c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x18))();
  return;
}


// ===== 0037b550  rive::ScriptInput::hydrateScriptInput =====

/* rive::ScriptInput::hydrateScriptInput() */

undefined8 __thiscall rive::ScriptInput::hydrateScriptInput(ScriptInput *this)

{
  (**(code **)(*(long *)this + 0x10))();
  return 1;
}


// ===== 0037b570  rive::ScriptInput::validateHydrationPrerequisites =====

/* rive::ScriptInput::validateHydrationPrerequisites() */

undefined8 rive::ScriptInput::validateHydrationPrerequisites(void)

{
  return 1;
}


// ===== 0037b578  rive::ScriptInput::from =====

/* rive::ScriptInput::from(rive::Core*) */

Core * rive::ScriptInput::from(Core *param_1)

{
  ushort uVar1;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x10))();
  if (uVar1 < 0x26d) {
    if (uVar1 != 0x263) {
      if (uVar1 == 0x264) {
        return param_1 + 0x88;
      }
      if (uVar1 != 0x26a) {
        return (Core *)0x0;
      }
      return param_1 + 0x98;
    }
  }
  else if (uVar1 < 0x273) {
    if ((uVar1 != 0x26d) && (uVar1 != 0x272)) {
      return (Core *)0x0;
    }
  }
  else {
    if (uVar1 == 0x273) {
      return param_1 + 0xa0;
    }
    if (uVar1 != 0x277) {
      return (Core *)0x0;
    }
  }
  return param_1 + 0x90;
}


// ===== 0037b610  rive::OptionalScriptedMethods::verifyImplementation =====

/* rive::OptionalScriptedMethods::verifyImplementation(rive::ScriptedObject*, lua_State*) */

void __thiscall
rive::OptionalScriptedMethods::verifyImplementation
          (OptionalScriptedMethods *this,ScriptedObject *param_1,lua_State *param_2)

{
  char *pcVar1;
  lua_State lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  lua_State *extraout_x1;
  undefined8 *puVar8;
  long *plVar9;
  char *pcVar10;
  uint uVar11;
  long lVar12;
  undefined8 local_88;
  undefined4 local_7c;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  puVar8 = *(undefined8 **)(param_2 + 8);
  if (puVar8 + -2 == &DAT_00285948) {
    uVar11 = 0xffffffff;
    lVar2 = param_2[1];
  }
  else {
    uVar11 = *(uint *)((long)puVar8 + -4);
    lVar2 = param_2[1];
  }
  if (((byte)lVar2 >> 2 & 1) != 0) {
    param_2[1] = (lua_State)((byte)lVar2 & 0xfb);
    *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x30);
    *(lua_State **)(*(long *)(param_2 + 0x18) + 0x30) = param_2;
  }
  puVar8[1] = puVar8[-1];
  *puVar8 = puVar8[-2];
  *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 0x10;
  iVar4 = (**(code **)(**(long **)(param_2 + 0x78) + 0x30))(*(long **)(param_2 + 0x78),param_2,0,1);
  rive_lua_closeOrphanRenderPass((rive *)param_2,extraout_x1);
  lVar12 = *(long *)(param_2 + 8);
  plVar9 = (long *)(lVar12 + -0x10);
  if (iVar4 == 0) {
    if ((plVar9 != &DAT_00285948) && (*(int *)(lVar12 + -4) == 7)) {
      *(undefined4 *)this = 0;
      iVar4 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
      if (iVar4 - 1U < 7) {
        if (((byte)param_2[1] >> 2 & 1) != 0) {
          param_2[1] = (lua_State)((byte)param_2[1] & 0xfb);
          *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x30);
          *(lua_State **)(*(long *)(param_2 + 0x18) + 0x30) = param_2;
        }
        lVar12 = *(long *)(param_2 + 8);
        local_88 = FUN_0062b178(param_2,"update",6);
        local_7c = 6;
        FUN_00642c8c(param_2,lVar12 + -0x10,&local_88,*(undefined8 *)(param_2 + 8));
        lVar12 = *(long *)(param_2 + 8);
        if (*(int *)(lVar12 + 0xc) == 8) {
          *(uint *)this = *(uint *)this | 2;
        }
        *(long *)(param_2 + 8) = lVar12;
        if (((byte)param_2[1] >> 2 & 1) != 0) {
          param_2[1] = (lua_State)((byte)param_2[1] & 0xfb);
          *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x30);
          *(lua_State **)(*(long *)(param_2 + 0x18) + 0x30) = param_2;
        }
        local_88 = FUN_0062b178(param_2,"advance",7);
        local_7c = 6;
        FUN_00642c8c(param_2,lVar12 + -0x10,&local_88,*(undefined8 *)(param_2 + 8));
        lVar12 = *(long *)(param_2 + 8);
        if (*(int *)(lVar12 + 0xc) == 8) {
          *(uint *)this = *(uint *)this | 1;
        }
        *(long *)(param_2 + 8) = lVar12;
        if (((byte)param_2[1] >> 2 & 1) != 0) {
          param_2[1] = (lua_State)((byte)param_2[1] & 0xfb);
          *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x30);
          *(lua_State **)(*(long *)(param_2 + 0x18) + 0x30) = param_2;
        }
        local_88 = FUN_0062b178(param_2,"pointerDown",0xb);
        local_7c = 6;
        FUN_00642c8c(param_2,lVar12 + -0x10,&local_88,*(undefined8 *)(param_2 + 8));
        lVar12 = *(long *)(param_2 + 8);
        if (*(int *)(lVar12 + 0xc) == 8) {
          *(uint *)this = *(uint *)this | 8;
        }
        *(long *)(param_2 + 8) = lVar12;
        if (((byte)param_2[1] >> 2 & 1) != 0) {
          param_2[1] = (lua_State)((byte)param_2[1] & 0xfb);
          *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x30);
          *(lua_State **)(*(long *)(param_2 + 0x18) + 0x30) = param_2;
        }
        local_88 = FUN_0062b178(param_2,"pointerUp",9);
        local_7c = 6;
        FUN_00642c8c(param_2,lVar12 + -0x10,&local_88,*(undefined8 *)(param_2 + 8));
        lVar12 = *(long *)(param_2 + 8);
        if (*(int *)(lVar12 + 0xc) == 8) {
          *(uint *)this = *(uint *)this | 0x20;
        }
        *(long *)(param_2 + 8) = lVar12;
        if (((byte)param_2[1] >> 2 & 1) != 0) {
          param_2[1] = (lua_State)((byte)param_2[1] & 0xfb);
          *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x30);
          *(lua_State **)(*(long *)(param_2 + 0x18) + 0x30) = param_2;
        }
        local_88 = FUN_0062b178(param_2,"pointerMove",0xb);
        local_7c = 6;
        FUN_00642c8c(param_2,lVar12 + -0x10,&local_88,*(undefined8 *)(param_2 + 8));
        lVar12 = *(long *)(param_2 + 8);
        if (*(int *)(lVar12 + 0xc) == 8) {
          *(uint *)this = *(uint *)this | 0x10;
        }
        *(long *)(param_2 + 8) = lVar12;
        if (((byte)param_2[1] >> 2 & 1) != 0) {
          param_2[1] = (lua_State)((byte)param_2[1] & 0xfb);
          *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x30);
          *(lua_State **)(*(long *)(param_2 + 0x18) + 0x30) = param_2;
        }
        local_88 = FUN_0062b178(param_2,"pointerCanceled",0xf);
        local_7c = 6;
        FUN_00642c8c(param_2,lVar12 + -0x10,&local_88,*(undefined8 *)(param_2 + 8));
        lVar12 = *(long *)(param_2 + 8);
        if (*(int *)(lVar12 + 0xc) == 8) {
          *(uint *)this = *(uint *)this | 0x80;
        }
        *(long *)(param_2 + 8) = lVar12;
        if (((byte)param_2[1] >> 2 & 1) != 0) {
          param_2[1] = (lua_State)((byte)param_2[1] & 0xfb);
          *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x30);
          *(lua_State **)(*(long *)(param_2 + 0x18) + 0x30) = param_2;
        }
        local_88 = FUN_0062b178(param_2,"pointerExit",0xb);
        local_7c = 6;
        FUN_00642c8c(param_2,lVar12 + -0x10,&local_88,*(undefined8 *)(param_2 + 8));
        lVar12 = *(long *)(param_2 + 8);
        if (*(int *)(lVar12 + 0xc) == 8) {
          *(uint *)this = *(uint *)this | 0x40;
        }
        *(long *)(param_2 + 8) = lVar12;
        if (((byte)param_2[1] >> 2 & 1) != 0) {
          param_2[1] = (lua_State)((byte)param_2[1] & 0xfb);
          *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x30);
          *(lua_State **)(*(long *)(param_2 + 0x18) + 0x30) = param_2;
        }
        local_88 = FUN_0062b178(param_2,&DAT_00247e7f,4);
        local_7c = 6;
        FUN_00642c8c(param_2,lVar12 + -0x10,&local_88,*(undefined8 *)(param_2 + 8));
        lVar12 = *(long *)(param_2 + 8);
        if (*(int *)(lVar12 + 0xc) == 8) {
          *(uint *)this = *(uint *)this | 0x200;
        }
        *(long *)(param_2 + 8) = lVar12;
      }
      uVar6 = 1;
      if (iVar4 < 3) {
        if (iVar4 == 1) {
          if (((byte)param_2[1] >> 2 & 1) != 0) {
            param_2[1] = (lua_State)((byte)param_2[1] & 0xfb);
            *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x30);
            *(lua_State **)(*(long *)(param_2 + 0x18) + 0x30) = param_2;
          }
          lVar12 = *(long *)(param_2 + 8);
        }
        else {
          if (iVar4 != 2) goto LAB_0037bd10;
          if (((byte)param_2[1] >> 2 & 1) != 0) {
            param_2[1] = (lua_State)((byte)param_2[1] & 0xfb);
            *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x30);
            *(lua_State **)(*(long *)(param_2 + 0x18) + 0x30) = param_2;
          }
          lVar12 = *(long *)(param_2 + 8);
          local_88 = FUN_0062b178(param_2,"measure",7);
          local_7c = 6;
          FUN_00642c8c(param_2,lVar12 + -0x10,&local_88,*(undefined8 *)(param_2 + 8));
          lVar12 = *(long *)(param_2 + 8);
          if (*(int *)(lVar12 + 0xc) == 8) {
            *(uint *)this = *(uint *)this | 4;
          }
          *(long *)(param_2 + 8) = lVar12;
          if (((byte)param_2[1] >> 2 & 1) != 0) {
            param_2[1] = (lua_State)((byte)param_2[1] & 0xfb);
            *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x30);
            *(lua_State **)(*(long *)(param_2 + 0x18) + 0x30) = param_2;
          }
          local_88 = FUN_0062b178(param_2,"resize",6);
          local_7c = 6;
          FUN_00642c8c(param_2,lVar12 + -0x10,&local_88,*(undefined8 *)(param_2 + 8));
          lVar12 = *(long *)(param_2 + 8);
          if (*(int *)(lVar12 + 0xc) == 8) {
            *(uint *)this = *(uint *)this | 0x1000;
          }
          *(long *)(param_2 + 8) = lVar12;
          if (((byte)param_2[1] >> 2 & 1) != 0) {
            param_2[1] = (lua_State)((byte)param_2[1] & 0xfb);
            *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x30);
            *(lua_State **)(*(long *)(param_2 + 0x18) + 0x30) = param_2;
          }
        }
        local_88 = FUN_0062b178(param_2,&DAT_00242835,4);
        local_7c = 6;
        FUN_00642c8c(param_2,lVar12 + -0x10,&local_88,*(undefined8 *)(param_2 + 8));
        lVar12 = *(long *)(param_2 + 8);
        if (*(int *)(lVar12 + 0xc) == 8) {
          *(uint *)this = *(uint *)this | 0x100;
        }
        *(long *)(param_2 + 8) = lVar12;
        if (((byte)param_2[1] >> 2 & 1) != 0) {
          param_2[1] = (lua_State)((byte)param_2[1] & 0xfb);
          *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x30);
          *(lua_State **)(*(long *)(param_2 + 0x18) + 0x30) = param_2;
        }
        local_88 = FUN_0062b178(param_2,"drawCanvas",10);
        local_7c = 6;
        FUN_00642c8c(param_2,lVar12 + -0x10,&local_88,*(undefined8 *)(param_2 + 8));
        lVar12 = *(long *)(param_2 + 8);
        if (*(int *)(lVar12 + 0xc) == 8) {
          *(uint *)this = *(uint *)this | 0x8000;
        }
        *(long *)(param_2 + 8) = lVar12;
        if (((byte)param_2[1] >> 2 & 1) != 0) {
          param_2[1] = (lua_State)((byte)param_2[1] & 0xfb);
          *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x30);
          *(lua_State **)(*(long *)(param_2 + 0x18) + 0x30) = param_2;
        }
        local_88 = FUN_0062b178(param_2,"keyboardEvent",0xd);
        local_7c = 6;
        FUN_00642c8c(param_2,lVar12 + -0x10,&local_88,*(undefined8 *)(param_2 + 8));
        lVar12 = *(long *)(param_2 + 8);
        if (*(int *)(lVar12 + 0xc) == 8) {
          *(uint *)this = *(uint *)this | 0x10000;
        }
        *(long *)(param_2 + 8) = lVar12;
        if (((byte)param_2[1] >> 2 & 1) != 0) {
          param_2[1] = (lua_State)((byte)param_2[1] & 0xfb);
          *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x30);
          *(lua_State **)(*(long *)(param_2 + 0x18) + 0x30) = param_2;
        }
        local_88 = FUN_0062b178(param_2,"textEvent",9);
        local_7c = 6;
        FUN_00642c8c(param_2,lVar12 + -0x10,&local_88,*(undefined8 *)(param_2 + 8));
        lVar12 = *(long *)(param_2 + 8) + 0x10;
        if (*(int *)(*(long *)(param_2 + 8) + 0xc) == 8) {
          uVar11 = 0x20000;
LAB_0037c114:
          *(uint *)this = *(uint *)this | uVar11;
        }
      }
      else if (iVar4 == 3) {
        if (((byte)param_2[1] >> 2 & 1) != 0) {
          param_2[1] = (lua_State)((byte)param_2[1] & 0xfb);
          *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x30);
          *(lua_State **)(*(long *)(param_2 + 0x18) + 0x30) = param_2;
        }
        lVar12 = *(long *)(param_2 + 8);
        local_88 = FUN_0062b178(param_2,"convert",7);
        local_7c = 6;
        FUN_00642c8c(param_2,lVar12 + -0x10,&local_88,*(undefined8 *)(param_2 + 8));
        lVar12 = *(long *)(param_2 + 8);
        if (*(int *)(lVar12 + 0xc) == 8) {
          *(uint *)this = *(uint *)this | 0x400;
        }
        *(long *)(param_2 + 8) = lVar12;
        if (((byte)param_2[1] >> 2 & 1) != 0) {
          param_2[1] = (lua_State)((byte)param_2[1] & 0xfb);
          *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x30);
          *(lua_State **)(*(long *)(param_2 + 0x18) + 0x30) = param_2;
        }
        local_88 = FUN_0062b178(param_2,"reverseConvert",0xe);
        local_7c = 6;
        FUN_00642c8c(param_2,lVar12 + -0x10,&local_88,*(undefined8 *)(param_2 + 8));
        lVar12 = *(long *)(param_2 + 8) + 0x10;
        if (*(int *)(*(long *)(param_2 + 8) + 0xc) == 8) {
          uVar11 = 0x800;
          goto LAB_0037c114;
        }
      }
      else {
        if (iVar4 != 5) goto LAB_0037bd10;
        if (((byte)param_2[1] >> 2 & 1) != 0) {
          param_2[1] = (lua_State)((byte)param_2[1] & 0xfb);
          *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x30);
          *(lua_State **)(*(long *)(param_2 + 0x18) + 0x30) = param_2;
        }
        lVar12 = *(long *)(param_2 + 8);
        local_88 = FUN_0062b178(param_2,"perform",7);
        local_7c = 6;
        FUN_00642c8c(param_2,lVar12 + -0x10,&local_88,*(undefined8 *)(param_2 + 8));
        lVar12 = *(long *)(param_2 + 8);
        if (*(int *)(lVar12 + 0xc) == 8) {
          *(uint *)this = *(uint *)this | 0x2000;
        }
        *(long *)(param_2 + 8) = lVar12;
        if (((byte)param_2[1] >> 2 & 1) != 0) {
          param_2[1] = (lua_State)((byte)param_2[1] & 0xfb);
          *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x30);
          *(lua_State **)(*(long *)(param_2 + 0x18) + 0x30) = param_2;
        }
        local_88 = FUN_0062b178(param_2,"performAction",0xd);
        local_7c = 6;
        FUN_00642c8c(param_2,lVar12 + -0x10,&local_88,*(undefined8 *)(param_2 + 8));
        lVar12 = *(long *)(param_2 + 8) + 0x10;
        if (*(int *)(*(long *)(param_2 + 8) + 0xc) == 8) {
          uVar11 = 0x4000;
          goto LAB_0037c114;
        }
      }
      uVar6 = 1;
      *(long *)(param_2 + 8) = lVar12 + -0x10;
      goto LAB_0037bd10;
    }
    uVar7 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
    fprintf((FILE *)(PTR___sF_0067cee8 + 0x130),
            "Verifying implementation not a table (protocol=%d)?\n",uVar7 & 0xffffffff);
  }
  else {
    iVar4 = *(int *)(lVar12 + -4);
    if (iVar4 == 6) {
LAB_0037b74c:
      pcVar10 = (char *)(*plVar9 + 0x18);
    }
    else {
      if (((byte)param_2[1] >> 2 & 1) != 0) {
        param_2[1] = (lua_State)((byte)param_2[1] & 0xfb);
        *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x30);
        *(lua_State **)(*(long *)(param_2 + 0x18) + 0x30) = param_2;
        iVar4 = *(int *)(lVar12 + -4);
      }
      if (iVar4 == 3) {
        lVar5 = FUN_006292c0(*(undefined8 *)(lVar12 + -0x10),&local_88);
        uVar6 = FUN_0062b178(param_2,&local_88,lVar5 - (long)&local_88);
        *(undefined8 *)(lVar12 + -0x10) = uVar6;
        *(undefined4 *)(lVar12 + -4) = 6;
        if (*(ulong *)(*(long *)(param_2 + 0x18) + 0x40) <=
            *(ulong *)(*(long *)(param_2 + 0x18) + 0x48)) {
          FUN_006239a4(param_2);
        }
        plVar9 = (long *)(*(long *)(param_2 + 8) + -0x10);
        goto LAB_0037b74c;
      }
      pcVar10 = (char *)0x0;
    }
    uVar7 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
    pcVar1 = "(no error message)";
    if (pcVar10 != (char *)0x0) {
      pcVar1 = pcVar10;
    }
    fprintf((FILE *)(PTR___sF_0067cee8 + 0x130),
            "Verifying implementation pcall failed (protocol=%d, top-type-before=%d): %s\n",
            uVar7 & 0xffffffff,(ulong)uVar11,pcVar1);
  }
  uVar6 = 0;
LAB_0037bd10:
  *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + -0x10;
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


// ===== 0037c134  rive::ScriptAsset::scriptingVM =====

/* rive::ScriptAsset::scriptingVM() */

undefined8 __thiscall rive::ScriptAsset::scriptingVM(ScriptAsset *this)

{
  if (*(long *)(this + 0xd8) != 0) {
    return *(undefined8 *)(*(long *)(this + 0xd8) + 0x110);
  }
  return 0;
}


// ===== 0037c14c  rive::ScriptAsset::vm =====

/* rive::ScriptAsset::vm() */

undefined8 __thiscall rive::ScriptAsset::vm(ScriptAsset *this)

{
  long lVar1;
  
  if ((*(long *)(this + 0xd8) != 0) &&
     (lVar1 = *(long *)(*(long *)(this + 0xd8) + 0x110), lVar1 != 0)) {
    return *(undefined8 *)(lVar1 + 8);
  }
  return 0;
}


// ===== 0037c16c  rive::ScriptAsset::initScriptedObject =====

/* rive::ScriptAsset::initScriptedObject(rive::ScriptedObject*) */

undefined8 rive::ScriptAsset::initScriptedObject(ScriptedObject *param_1)

{
  undefined8 uVar1;
  
  if ((*(long *)(param_1 + 0xd8) != 0) && (*(long *)(*(long *)(param_1 + 0xd8) + 0x110) != 0)) {
    uVar1 = initScriptedObjectWith(param_1);
    return uVar1;
  }
  return 0;
}


// ===== 0037c188  rive::ScriptAsset::initScriptedObjectWith =====

/* rive::ScriptAsset::initScriptedObjectWith(rive::ScriptedObject*) */

undefined8 rive::ScriptAsset::initScriptedObjectWith(ScriptedObject *param_1)

{
  ScriptedObject *pSVar1;
  ulong uVar2;
  undefined8 uVar3;
  ScriptedObject *in_x1;
  int in_w2;
  ScriptingVM *pSVar4;
  rive *this;
  
  if ((*(long *)(param_1 + 0xd8) != 0) &&
     (pSVar4 = *(ScriptingVM **)(*(long *)(param_1 + 0xd8) + 0x110), pSVar4 != (ScriptingVM *)0x0))
  {
    if (*(uint *)(param_1 + 0x9c) != 0) {
      this = *(rive **)(pSVar4 + 8);
      rive_lua_pushRef(this,(lua_State *)(ulong)*(uint *)(param_1 + 0x9c),in_w2);
      if (param_1[0xf8] == (ScriptedObject)0x0) {
        uVar2 = OptionalScriptedMethods::verifyImplementation
                          ((OptionalScriptedMethods *)(param_1 + 0xa4),in_x1,(lua_State *)this);
        if ((uVar2 & 1) == 0) {
          *(long *)(this + 8) = *(long *)(this + 8) + -0x10;
          return 0;
        }
        param_1[0xf8] = (ScriptedObject)0x1;
      }
      *(undefined4 *)(in_x1 + 0x30) = *(undefined4 *)(param_1 + 0xa4);
      uVar3 = ScriptedObject::ensureScriptInitialized(in_x1,pSVar4);
      return uVar3;
    }
    pSVar1 = param_1 + 0x11;
    if (((byte)param_1[0x10] & 1) != 0) {
      pSVar1 = *(ScriptedObject **)(param_1 + 0x20);
    }
    fprintf((FILE *)(PTR___sF_0067cee8 + 0x130),
            "ScriptAsset doesn\'t have a generator function %s\n",pSVar1);
  }
  return 0;
}


// ===== 0037c260  rive::ScriptAsset::registrationComplete =====

/* rive::ScriptAsset::registrationComplete(int) */

void __thiscall rive::ScriptAsset::registrationComplete(ScriptAsset *this,int param_1)

{
  if (this[0xa0] != (ScriptAsset)0x0) {
    this[0xe0] = (ScriptAsset)0x1;
    return;
  }
  if (*(int *)(this + 0x9c) != param_1) {
    *(int *)(this + 0x9c) = param_1;
    (**(code **)(*(long *)this + 0xa0))();
  }
  this[0xf8] = (ScriptAsset)0x0;
  return;
}


// ===== 0037c2b4  rive::ScriptAsset::registrationComplete =====

/* non-virtual thunk to rive::ScriptAsset::registrationComplete(int) */

void __thiscall rive::ScriptAsset::registrationComplete(ScriptAsset *this,int param_1)

{
  if (this[-8] != (ScriptAsset)0x0) {
    this[0x38] = (ScriptAsset)0x1;
    return;
  }
  if (*(int *)(this + -0xc) == param_1) {
    this[0x50] = (ScriptAsset)0x0;
    return;
  }
  *(int *)(this + -0xc) = param_1;
  (**(code **)(*(long *)(this + -0xa8) + 0xa0))(this + -0xa8);
  this[0x50] = (ScriptAsset)0x0;
  return;
}


// ===== 0037c324  rive::ScriptAsset::decode =====

/* rive::ScriptAsset::decode(rive::SimpleArray<unsigned char>&, rive::Factory*) */

undefined8 rive::ScriptAsset::decode(SimpleArray *param_1,Factory *param_2)

{
  void *__dest;
  ulong uVar1;
  size_t __size;
  char *pcVar2;
  ulong uVar3;
  
  uVar1 = *(ulong *)(param_2 + 8);
  param_1[0x98] = (SimpleArray)0x0;
  if (uVar1 == 0) {
    return 0;
  }
  pcVar2 = *(char **)param_2;
  if (*pcVar2 < '\0') {
    if (uVar1 < 0x41) {
      return 0;
    }
    uVar3 = 0x41;
  }
  else {
    uVar3 = 1;
  }
  __size = 0;
  if (uVar1 >= uVar3) {
    __size = uVar1 - uVar3;
  }
  if (uVar1 < uVar3 || uVar1 - uVar3 == 0) {
    __dest = (void *)0x0;
  }
  else {
    __dest = malloc(__size);
    if (__dest != (void *)0x0) {
      memcpy(__dest,pcVar2 + uVar3,__size);
      goto LAB_0037c3a8;
    }
  }
  __size = 0;
LAB_0037c3a8:
  free(*(void **)(param_1 + 0xe8));
  *(void **)(param_1 + 0xe8) = __dest;
  *(size_t *)(param_1 + 0xf0) = __size;
  return 1;
}


// ===== 0037c3d4  rive::ScriptAsset::bytecode =====

/* rive::ScriptAsset::bytecode(rive::Span<unsigned char>) */

undefined8 rive::ScriptAsset::bytecode(long param_1,char *param_2,ulong param_3)

{
  int iVar1;
  size_t __size;
  void *__dest;
  
  if (param_3 == 0) goto LAB_0037c440;
  if (*param_2 < '\0') {
    if (param_3 < 0x41) {
LAB_0037c440:
      *(undefined1 *)(param_1 + 0x98) = 0;
      return 0;
    }
    __size = param_3 - 0x41;
    iVar1 = hydro_sign_verify(param_2 + 1,param_2 + 0x41,__size,"RiveCode",
                              PTR_g_scriptVerificationPublicKey_0067d048);
    if (iVar1 != 0) goto LAB_0037c440;
    *(undefined1 *)(param_1 + 0x98) = 1;
    if (param_3 == 0x41) {
      __dest = (void *)0x0;
    }
    else {
      __dest = malloc(__size);
      if (__dest != (void *)0x0) {
        param_2 = param_2 + 0x41;
        goto LAB_0037c464;
      }
    }
  }
  else {
    __size = param_3 - 1;
    *(undefined1 *)(param_1 + 0x98) = 0;
    if (__size == 0) {
      __dest = (void *)0x0;
      goto LAB_0037c4a8;
    }
    __dest = malloc(__size);
    if (__dest != (void *)0x0) {
      param_2 = param_2 + 1;
LAB_0037c464:
      memcpy(__dest,param_2,__size);
      goto LAB_0037c4a8;
    }
  }
  __size = 0;
LAB_0037c4a8:
  free(*(void **)(param_1 + 0xe8));
  *(void **)(param_1 + 0xe8) = __dest;
  *(size_t *)(param_1 + 0xf0) = __size;
  return 1;
}


// ===== 0037c4c8  FUN_0037c4c8 =====

void FUN_0037c4c8(long *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  
  puVar1 = PTR_vtable_0067d040 + 0xf8;
  *param_1 = (long)(PTR_vtable_0067d040 + 0x10);
  param_1[0x15] = (long)puVar1;
  free((void *)param_1[0x1d]);
  param_1[0x15] = (long)&PTR_FUN_00654268;
  puVar2 = (undefined8 *)param_1[0x18];
  while (puVar2 != (undefined8 *)0x0) {
    pvVar3 = (void *)*puVar2;
    if ((*(byte *)(puVar2 + 2) & 1) != 0) {
      operator_delete((void *)puVar2[4]);
    }
    operator_delete(puVar2);
    puVar2 = (undefined8 *)pvVar3;
  }
  pvVar3 = (void *)param_1[0x16];
  param_1[0x16] = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  *param_1 = (long)&PTR_FUN_0065bd10;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    operator_delete((void *)param_1[0x12]);
  }
  pvVar3 = (void *)param_1[0xd];
  *param_1 = (long)(PTR_vtable_0067cfe8 + 0x10);
  if (pvVar3 != (void *)0x0) {
    param_1[0xe] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = (void *)param_1[10];
  if (pvVar3 != (void *)0x0) {
    param_1[0xb] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  *param_1 = (long)&PTR_FUN_0065be68;
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    operator_delete((void *)param_1[8]);
  }
  *param_1 = (long)&PTR_FUN_0065bef8;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
    return;
  }
  return;
}


// ===== 0037c5e8  FUN_0037c5e8 =====

void FUN_0037c5e8(long *param_1)

{
  void *pvVar1;
  
  *param_1 = (long)&PTR_FUN_0065bd10;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    operator_delete((void *)param_1[0x12]);
  }
  pvVar1 = (void *)param_1[0xd];
  *param_1 = (long)(PTR_vtable_0067cfe8 + 0x10);
  if (pvVar1 != (void *)0x0) {
    param_1[0xe] = (long)pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[10];
  if (pvVar1 != (void *)0x0) {
    param_1[0xb] = (long)pvVar1;
    operator_delete(pvVar1);
  }
  *param_1 = (long)&PTR_FUN_0065be68;
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    operator_delete((void *)param_1[8]);
  }
  *param_1 = (long)&PTR_FUN_0065bef8;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[4]);
  return;
}


// ===== 0037c690  FUN_0037c690 =====

void FUN_0037c690(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x37c694);
  (*pcVar1)();
}


// ===== 0037c694  FUN_0037c694 =====

undefined8 FUN_0037c694(void)

{
  return 0x3cb;
}


// ===== 0037c69c  FUN_0037c69c =====

undefined8 FUN_0037c69c(undefined8 param_1,short param_2)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (((param_2 != 99) && (param_2 != 0x67)) && (param_2 != 0x3cb)) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 0037c6c4  FUN_0037c6c4 =====

undefined8 FUN_0037c6c4(long param_1,short param_2,long *param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  if (param_2 == 0x39e) {
    pcVar5 = (char *)param_3[2];
    do {
      if ((char *)(*param_3 + param_3[1]) <= pcVar5) {
        param_3[2] = *param_3 + param_3[1];
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_0037c774;
      }
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 < '\0');
    param_3[2] = (long)pcVar6;
    if ((char)param_3[3] == '\0') {
      rive::BinaryReader::readString((ulong)param_3);
    }
    else {
LAB_0037c774:
      local_40 = 0;
      uStack_38 = 0;
      local_30 = 0;
    }
    if ((*(byte *)(param_1 + 0x80) & 1) != 0) {
      operator_delete(*(void **)(param_1 + 0x90));
    }
    *(undefined8 *)(param_1 + 0x88) = uStack_38;
    *(undefined8 *)(param_1 + 0x80) = local_40;
    *(undefined8 *)(param_1 + 0x90) = local_30;
    if (*(long *)(lVar2 + 0x28) == lVar4) {
      return 1;
    }
  }
  else if (*(long *)(lVar2 + 0x28) == lVar4) {
    uVar3 = FUN_0037ab68();
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0037c7c8  FUN_0037c7c8 =====

void FUN_0037c7c8(void)

{
  return;
}


// ===== 0037c7cc  FUN_0037c7cc =====

void FUN_0037c7cc(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  *param_1 = &PTR_FUN_00654268;
  puVar1 = (undefined8 *)param_1[3];
  while (puVar1 != (undefined8 *)0x0) {
    pvVar2 = (void *)*puVar1;
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = (undefined8 *)pvVar2;
  }
  pvVar2 = (void *)param_1[1];
  param_1[1] = 0;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar2);
  return;
}


// ===== 0037c848  FUN_0037c848 =====

void FUN_0037c848(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x37c84c);
  (*pcVar1)();
}


// ===== 0037c84c  FUN_0037c84c =====

void FUN_0037c84c(void)

{
  return;
}


// ===== 0037c850  FUN_0037c850 =====

undefined1  [16] FUN_0037c850(void)

{
  return ZEXT816(0);
}


// ===== 0037c85c  FUN_0037c85c =====

undefined8 FUN_0037c85c(void)

{
  return 0;
}


// ===== 0037c864  FUN_0037c864 =====

void FUN_0037c864(void *param_1)

{
  FUN_0037c4c8();
  operator_delete(param_1);
  return;
}


// ===== 0037c888  FUN_0037c888 =====

undefined8 FUN_0037c888(void)

{
  return 0x211;
}


// ===== 0037c890  FUN_0037c890 =====

undefined8 FUN_0037c890(undefined8 param_1,ushort param_2)

{
  if (param_2 < 0x211) {
    if ((param_2 != 99) && (param_2 != 0x67)) {
      return 0;
    }
  }
  else if ((param_2 != 0x211) && (param_2 != 0x3cb)) {
    return 0;
  }
  return 1;
}


// ===== 0037c8cc  FUN_0037c8cc =====

undefined8 FUN_0037c8cc(long param_1,short param_2,long *param_3)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  char *pcVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  char *pcVar11;
  ulong uVar12;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  lVar4 = tpidr_el0;
  lVar8 = *(long *)(lVar4 + 0x28);
  if (param_2 == 0x39e) {
    pcVar7 = (char *)param_3[2];
    do {
      if ((char *)(*param_3 + param_3[1]) <= pcVar7) {
        param_3[2] = *param_3 + param_3[1];
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_0037ca10;
      }
      pcVar11 = pcVar7 + 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar11;
    } while (cVar2 < '\0');
    param_3[2] = (long)pcVar11;
    if ((char)param_3[3] == '\0') {
      rive::BinaryReader::readString((ulong)param_3);
    }
    else {
LAB_0037ca10:
      local_40 = 0;
      uStack_38 = 0;
      local_30 = 0;
    }
    if ((*(byte *)(param_1 + 0x80) & 1) != 0) {
      operator_delete(*(void **)(param_1 + 0x90));
    }
    *(undefined8 *)(param_1 + 0x88) = uStack_38;
    *(undefined8 *)(param_1 + 0x80) = local_40;
    *(undefined8 *)(param_1 + 0x90) = local_30;
  }
  else if (param_2 == 0x392) {
    pcVar7 = (char *)param_3[2];
    if ((*param_3 + param_3[1]) - (long)pcVar7 < 1) {
      param_3[2] = *param_3 + param_3[1];
      *(undefined1 *)(param_3 + 3) = 1;
      *(undefined1 *)(param_1 + 0xa0) = 0;
    }
    else {
      param_3[2] = (long)(pcVar7 + 1);
      *(bool *)(param_1 + 0xa0) = *pcVar7 == '\x01';
    }
  }
  else {
    if (param_2 != 0x37d) {
      if (*(long *)(lVar4 + 0x28) == lVar8) {
        uVar5 = FUN_0037ab68();
        return uVar5;
      }
      goto LAB_0037ca8c;
    }
    uVar12 = 0;
    uVar6 = 0;
    pbVar9 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar9) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_0037ca48;
      }
      pbVar10 = pbVar9 + 1;
      bVar1 = *pbVar9;
      uVar3 = uVar12 & 0x3f;
      uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
      uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
      pbVar9 = pbVar10;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar10;
    if (uVar6 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_0037ca48:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x9c) = (int)uVar6;
  }
  if (*(long *)(lVar4 + 0x28) == lVar8) {
    return 1;
  }
LAB_0037ca8c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0037ca90  FUN_0037ca90 =====

void FUN_0037ca90(undefined1 *param_1)

{
  *param_1 = 6;
  *(undefined4 *)(param_1 + 1) = 0x61756c;
  return;
}


// ===== 0037caa8  FUN_0037caa8 =====

void FUN_0037caa8(void)

{
  return;
}


// ===== 0037caac  FUN_0037caac =====

void FUN_0037caac(void)

{
  return;
}


// ===== 0037cab0  FUN_0037cab0 =====

undefined1 FUN_0037cab0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x98);
}


// ===== 0037cab8  FUN_0037cab8 =====

undefined1  [16] FUN_0037cab8(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0xe8);
}


