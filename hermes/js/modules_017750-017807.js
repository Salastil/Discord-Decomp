// Decompiled with hermes-dec from index.android.bundle (Hermes v98)
// top-level function index 17750..17807

// ===== top-level #17750  fn#17711  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    _fun17711: for(var _fun17711_ip = 0; ; ) switch(_fun17711_ip) {
case 0:
        r6 = a1;
        var _closure0_slot0 = r6;
        r3 = a2;
        r2 = a5;
        r5 = a6;
        var _closure0_slot1 = r5;
        r1 = global;
        r9 = r1.Object;
        r8 = r9.defineProperty;
        r4 = '__esModule';
        r1 = {'value': true};
        r1 = r8.bind(r9)(r2, r4, r1);
        r1 = r5[r0];
        r0 = undefined;
        r1 = r3.bind(r0)(r1);
        var _closure0_slot2 = r1;
        r4 = r5[r1];
        r1 = a3;
        r1 = r1.bind(r0)(r4);
        var _closure0_slot3 = r1;
        r1 = r5[r2];
        r1 = r3.bind(r0)(r1);
        var _closure0_slot4 = r1;
        r1 = r5[r3];
        r1 = r3.bind(r0)(r1);
        var _closure0_slot5 = r1;
        r1 = r5[r4];
        r1 = r6.bind(r0)(r1);
        r1 = r1.UserLinkStatus;
        var _closure0_slot6 = r1;
        r1 = r5[r5];
        r3 = r6.bind(r0)(r1);
        r1 = r3.isReactCompilerEnabled;
        r1 = r1.bind(r3)();
        if(r1) { _fun17711_ip = 163; continue _fun17711 }
case 154:
        r4 = function(a0, a1) { // Environment: r7
            r5 = a0;
            var _closure1_slot0 = r5;
            r8 = a1;
            var _closure1_slot1 = r8;
            r4 = _closure0_slot0;
            r3 = _closure0_slot1;
            r6 = r3[r7];
            r0 = undefined;
            r10 = r4.bind(r0)(r6);
            r9 = r10.useStateFromStores;
            r6 = _closure0_slot4;
            r7 = new Array(1);
            r7[0] = r6;
            r6 = function() { // Environment: r2
                r1 = _closure0_slot4;
                r0 = r1.getLinkedUsers;
                r0 = r0.bind(r1)();
                return r0;
            };
            r7 = r9.bind(r10)(r7, r6);
            var _closure1_slot2 = r7;
            r3 = r3[r7];
            r9 = r4.bind(r0)(r3);
            r6 = r9.useStateFromStores;
            r3 = _closure0_slot5;
            r4 = new Array(1);
            r4[0] = r3;
            r3 = function() { // Environment: r2
                _fun131460: for(var _fun131460_ip = 0; ; ) switch(_fun131460_ip) {
case 0:
                    r2 = _closure0_slot5;
                    r1 = r2.getCurrentUser;
                    r2 = r1.bind(r2)();
                    r0 = null;
                    r0 = r2 == r0;
                    r1 = undefined;
                    if(r0) { _fun131460_ip = 32; continue _fun131460 }
case 27:
                    r1 = r2.id;
case 32:
                    return r1;
                }
            };
            r6 = r6.bind(r9)(r4, r3);
            var _closure1_slot3 = r6;
            r4 = _closure0_slot3;
            r3 = r4.useMemo;
            r2 = new Array(4);
            r2[0] = r8;
            r2[1] = r7;
            r2[2] = r6;
            r2[3] = r5;
            r1 = function() { // Environment: r1
                _fun131461: for(var _fun131461_ip = 0; ; ) switch(_fun131461_ip) {
case 0:
                    r6 = undefined;
                    r9 = undefined;
                    r8 = undefined;
                    r7 = undefined;
                    r0 = _closure1_slot1;
                    if(r0) { _fun131461_ip = 24; continue _fun131461 }
case 18:
                    r0 = _closure1_slot0;
                    return r0;
case 24:
                    r1 = global;
                    r3 = r1.Map;
                    r4 = _closure1_slot0;
                    r2 = r4.map;
                    r0 = function(a0) {
                        r1 = a0;
                        r2 = r1.parent_id;
                        r0 = new Array(2);
                        r0[0] = r2;
                        r0[1] = r1;
                        return r0;
                    };
                    r17 = r2.bind(r4)(r0);
                    r2 = Object.create(r3.prototype);
                    r18 = r2;
                    r0 = new r19[r3](r18, r17);
                    r5 = r0 instanceof Object ? r0 : r2;
                    r0 = new Array(0);
                    r3 = r1.Object;
                    r2 = r3.values;
                    r1 = _closure1_slot2;
                    r1 = r2.bind(r3)(r1);
                    r4 = r1;
                    r2 = r4[Symbol.iterator];
                    r4 = r2().next;
                    r3 = null;
case 103:
                    r11 = r4;
                    r11 = r11().value;
                    r12 = r2;
                    if(!(r12 !== r6)) { _fun131461_ip = 383; continue _fun131461 }
case 120:
                    r9 = r11;
                    if(!(r3 != r11)) { _fun131461_ip = 371; continue _fun131461 }
case 130:
                    r11 = r9;
                    r12 = r11.link_status;
                    r11 = _closure0_slot6;
                    r11 = r11.PENDING;
                    if(!(r12 === r11)) { _fun131461_ip = 371; continue _fun131461 }
case 156:
                    r11 = r9;
                    r12 = r11.requestor_id;
                    r11 = _closure1_slot3;
                    if(!(r12 !== r11)) { _fun131461_ip = 371; continue _fun131461 }
case 176:
                    r14 = _closure0_slot5;
                    r12 = r14.getUser;
                    r13 = r9;
                    r11 = r13.user_id;
                    r14 = r12.bind(r14)(r11);
                    r8 = r14;
                    r12 = r5.get;
                    r11 = r13.user_id;
                    r7 = r12.bind(r5)(r11);
                    r12 = r0.push;
                    r11 = {'parent_id': null, 'parent_username': null, 'parent_avatar': null, 'created_at': null};
                    r13 = r13.user_id;
                    r11[0] = r13;
                    r15 = r14 == r3;
                    r13 = undefined;
                    if(r15) { _fun131461_ip = 258; continue _fun131461 }
case 253:
                    r13 = r14.username;
case 258:
                    if(!(r13 == r3)) { _fun131461_ip = 283; continue _fun131461 }
case 262:
                    r15 = r7;
                    r16 = r15 == r3;
                    r14 = undefined;
                    if(r16) { _fun131461_ip = 280; continue _fun131461 }
case 274:
                    r14 = r15.parent_username;
case 280:
                    r13 = r14;
case 283:
                    if(!(r13 == r3)) { _fun131461_ip = 296; continue _fun131461 }
case 287:
                    r14 = r9;
                    r13 = r14.user_id;
case 296:
                    r11[1] = r13;
                    r14 = r8;
                    r15 = r14 == r3;
                    r13 = undefined;
                    if(r15) { _fun131461_ip = 318; continue _fun131461 }
case 312:
                    r13 = r14.avatar;
case 318:
                    if(!(r13 == r3)) { _fun131461_ip = 343; continue _fun131461 }
case 322:
                    r15 = r7;
                    r16 = r15 == r3;
                    r14 = undefined;
                    if(r16) { _fun131461_ip = 340; continue _fun131461 }
case 334:
                    r14 = r15.parent_avatar;
case 340:
                    r13 = r14;
case 343:
                    if(!(r13 == r3)) { _fun131461_ip = 349; continue _fun131461 }
case 347:
                    r13 = null;
case 349:
                    r11[2] = r13;
                    r13 = r9;
                    r13 = r13.created_at;
                    r11[3] = r13;
                    r11 = r12.bind(r0)(r11);
case 371:
                    _fun131461_ip = 103; continue _fun131461;
case 376:
                    CatchBlockStart(arg_register=1);
                    r2.return();
                    throw r1;
case 383:
                    return r0;
                }
            };
            r1 = r3.bind(r4)(r1, r2);
            return r1;
        };
        _fun17711_ip = 170; continue _fun17711;
case 163:
        r4 = function(a0, a1) { // Environment: r7
            _fun78525: for(var _fun78525_ip = 0; ; ) switch(_fun78525_ip) {
case 0:
                r10 = undefined;
                r13 = undefined;
                r12 = undefined;
                r11 = undefined;
                r2 = _closure0_slot0;
                r0 = _closure0_slot1;
                r1 = r0[r6];
                r4 = r2.bind(r10)(r1);
                r3 = r4.c;
                r1 = 11;
                r4 = r3.bind(r4)(r1);
                r5 = r4[r0];
                r3 = global;
                r6 = r3.Symbol;
                r1 = r6.for;
                r15 = 'react.memo_cache_sentinel';
                r1 = r1.bind(r6)(r15);
                if(!(r5 !== r1)) { _fun78525_ip = 83; continue _fun78525 }
case 73:
                r7 = r4[r0];
                r6 = r4[r1];
                _fun78525_ip = 121; continue _fun78525;
case 83:
                r5 = _closure0_slot4;
                r1 = new Array(1);
                r1[0] = r5;
                r5 = function() { // Original name: c, environment: r14
                    r1 = _closure0_slot4;
                    r0 = r1.getLinkedUsers;
                    r0 = r0.bind(r1)();
                    return r0;
                };
                r8 = 0;
                r4[r8] = r1;
                r8 = 1;
                r4[r8] = r5;
                r6 = r5;
                r7 = r1;
case 121:
                r1 = r0[r7];
                r5 = r2.bind(r10)(r1);
                r1 = r5.useStateFromStores;
                r6 = r1.bind(r5)(r7, r6);
                r5 = r4[r2];
                r7 = r3.Symbol;
                r1 = r7.for;
                r1 = r1.bind(r7)(r15);
                if(!(r5 !== r1)) { _fun78525_ip = 175; continue _fun78525 }
case 165:
                r7 = r4[r2];
                r5 = r4[r3];
                _fun78525_ip = 214; continue _fun78525;
case 175:
                r8 = _closure0_slot5;
                r1 = new Array(1);
                r1[0] = r8;
                r8 = function() { // Original name: p, environment: r14
                    _fun131457: for(var _fun131457_ip = 0; ; ) switch(_fun131457_ip) {
case 0:
                        r2 = _closure0_slot5;
                        r1 = r2.getCurrentUser;
                        r2 = r1.bind(r2)();
                        r0 = null;
                        r0 = r2 == r0;
                        r1 = undefined;
                        if(r0) { _fun131457_ip = 32; continue _fun131457 }
case 27:
                        r1 = r2.id;
case 32:
                        return r1;
                    }
                };
                r9 = 2;
                r4[r9] = r1;
                r9 = 3;
                r4[r9] = r8;
                r5 = r8;
                r7 = r1;
case 214:
                r8 = a0;
                r1 = a1;
                r0 = r0[r7];
                r2 = r2.bind(r10)(r0);
                r0 = r2.useStateFromStores;
                r7 = r0.bind(r2)(r7, r5);
                r0 = r8;
                if(!r1) { _fun78525_ip = 729; continue _fun78525 }
case 249:
                r1 = r4[r4];
                if(!(r1 === r8)) { _fun78525_ip = 263; continue _fun78525 }
case 257:
                r5 = r4[r5];
                _fun78525_ip = 358; continue _fun78525;
case 263:
                r2 = r4[r6];
                r9 = r3.Symbol;
                r1 = r9.for;
                r1 = r1.bind(r9)(r15);
                if(!(r2 !== r1)) { _fun78525_ip = 293; continue _fun78525 }
case 287:
                r2 = r4[r6];
                _fun78525_ip = 310; continue _fun78525;
case 293:
                r1 = function(a0) { // Original name: A
                    r1 = a0;
                    r2 = r1.parent_id;
                    r0 = new Array(2);
                    r0[0] = r2;
                    r0[1] = r1;
                    return r0;
                };
                r9 = 6;
                r4[r9] = r1;
                r2 = r1;
case 310:
                r9 = r3.Map;
                r1 = r8.map;
                r22 = r1.bind(r8)(r2);
                r2 = Object.create(r9.prototype);
                r23 = r2;
                r1 = new r24[r9](r23, r22);
                r1 = r1 instanceof Object ? r1 : r2;
                r2 = 4;
                r4[r2] = r8;
                r2 = 5;
                r4[r2] = r1;
                r5 = r1;
case 358:
                r1 = r4[r7];
                if(!(r1 === r7)) { _fun78525_ip = 391; continue _fun78525 }
case 366:
                r1 = r4[r8];
                if(!(r1 === r6)) { _fun78525_ip = 391; continue _fun78525 }
case 374:
                r1 = r4[r9];
                if(!(r1 === r5)) { _fun78525_ip = 391; continue _fun78525 }
case 382:
                r1 = r4[r10];
                _fun78525_ip = 726; continue _fun78525;
case 391:
                r2 = new Array(0);
                r8 = r3.Object;
                r3 = r8.values;
                r3 = r3.bind(r8)(r6);
                r9 = r3;
                r8 = r9[Symbol.iterator];
                r9 = r8().next;
                r3 = null;
case 419:
                r15 = r9;
                r15 = r15().value;
                r16 = r8;
                if(!(r16 !== r10)) { _fun78525_ip = 695; continue _fun78525 }
case 436:
                r13 = r15;
                if(!(r3 != r15)) { _fun78525_ip = 683; continue _fun78525 }
case 446:
                r15 = r13;
                r16 = r15.link_status;
                r15 = _closure0_slot6;
                r15 = r15.PENDING;
                if(!(r16 === r15)) { _fun78525_ip = 683; continue _fun78525 }
case 472:
                r15 = r13;
                r15 = r15.requestor_id;
                if(!(r15 !== r7)) { _fun78525_ip = 683; continue _fun78525 }
case 488:
                r18 = _closure0_slot5;
                r16 = r18.getUser;
                r17 = r13;
                r15 = r17.user_id;
                r18 = r16.bind(r18)(r15);
                r12 = r18;
                r16 = r5.get;
                r15 = r17.user_id;
                r11 = r16.bind(r5)(r15);
                r16 = r2.push;
                r15 = {'parent_id': null, 'parent_username': null, 'parent_avatar': null, 'created_at': null};
                r17 = r17.user_id;
                r15[0] = r17;
                r19 = r18 == r3;
                r17 = undefined;
                if(r19) { _fun78525_ip = 570; continue _fun78525 }
case 565:
                r17 = r18.username;
case 570:
                if(!(r17 == r3)) { _fun78525_ip = 595; continue _fun78525 }
case 574:
                r19 = r11;
                r20 = r19 == r3;
                r18 = undefined;
                if(r20) { _fun78525_ip = 592; continue _fun78525 }
case 586:
                r18 = r19.parent_username;
case 592:
                r17 = r18;
case 595:
                if(!(r17 == r3)) { _fun78525_ip = 608; continue _fun78525 }
case 599:
                r18 = r13;
                r17 = r18.user_id;
case 608:
                r15[1] = r17;
                r18 = r12;
                r19 = r18 == r3;
                r17 = undefined;
                if(r19) { _fun78525_ip = 630; continue _fun78525 }
case 624:
                r17 = r18.avatar;
case 630:
                if(!(r17 == r3)) { _fun78525_ip = 655; continue _fun78525 }
case 634:
                r19 = r11;
                r20 = r19 == r3;
                r18 = undefined;
                if(r20) { _fun78525_ip = 652; continue _fun78525 }
case 646:
                r18 = r19.parent_avatar;
case 652:
                r17 = r18;
case 655:
                if(!(r17 == r3)) { _fun78525_ip = 661; continue _fun78525 }
case 659:
                r17 = null;
case 661:
                r15[2] = r17;
                r17 = r13;
                r17 = r17.created_at;
                r15[3] = r17;
                r15 = r16.bind(r2)(r15);
case 683:
                _fun78525_ip = 419; continue _fun78525;
case 688:
                CatchBlockStart(arg_register=3);
                r8.return();
                throw r3;
case 695:
                r3 = 7;
                r4[r3] = r7;
                r3 = 8;
                r4[r3] = r6;
                r3 = 9;
                r4[r3] = r5;
                r3 = 10;
                r4[r3] = r2;
                r1 = r2;
case 726:
                r0 = r1;
case 729:
                return r0;
            }
        };
case 170:
        r1 = r5[r5];
        r3 = r6.bind(r0)(r1);
        r1 = r3.isReactCompilerEnabled;
        r1 = r1.bind(r3)();
        if(r1) { _fun17711_ip = 200; continue _fun17711 }
case 191:
        r3 = function(a0) { // Environment: r7
            _fun78528: for(var _fun78528_ip = 0; ; ) switch(_fun78528_ip) {
case 0:
                r4 = a0;
                r14 = r4.pendingRequests;
                var _closure1_slot0 = r14;
                r18 = r4.linkedUsersProcessed;
                r4 = r4.onActionError;
                var _closure1_slot1 = r4;
                r1 = undefined;
                var _closure1_slot2 = r1;
                var _closure1_slot3 = r1;
                var _closure1_slot4 = r1;
                var _closure1_slot5 = r1;
                var _closure1_slot6 = r1;
                var _closure1_slot7 = r1;
                var _closure1_slot8 = r1;
                r5 = _closure0_slot0;
                r4 = _closure0_slot1;
                r6 = r4[r8];
                r8 = r5.bind(r1)(r6);
                r6 = r8.useHasMaxConnections;
                r10 = r6.bind(r8)();
                r19 = _closure0_slot3;
                r6 = r19.useState;
                r2 = null;
                r6 = r6.bind(r19)(r2);
                r17 = _closure0_slot2;
                r0 = 2;
                r6 = r17.bind(r1)(r6, r0);
                r9 = r6[r0];
                r6 = r6[r1];
                _closure1_slot2 = r6;
                r4 = r4[r9];
                r6 = r5.bind(r1)(r4);
                r5 = r6.useFamilyCenterActions;
                r4 = {'onSuccess': null, 'onError': null};
                r7 = function() { // Original name: onSuccess, environment: r3
                    r2 = _closure1_slot2;
                    r0 = null;
                    r1 = undefined;
                    r2 = r2.bind(r1)(r0);
                    return r2;
                };
                r4[0] = r7;
                r7 = function() { // Original name: onError, environment: r3
                    r3 = _closure1_slot2;
                    r1 = null;
                    r0 = undefined;
                    r3 = r3.bind(r0)(r1);
                    r2 = _closure1_slot1;
                    r2 = r2.bind(r0)();
                    return r0;
                };
                r4[1] = r7;
                r6 = r5.bind(r6)(r4);
                r5 = r6.acceptLinkRequest;
                _closure1_slot3 = r5;
                r4 = r6.declineLinkRequest;
                _closure1_slot4 = r4;
                r8 = r6.isAcceptLoading;
                r7 = r6.isDeclineLoading;
                r6 = r8;
                if(r6) { _fun78528_ip = 229; continue _fun78528 }
case 226:
                r6 = r7;
case 229:
                _closure1_slot5 = r6;
                r12 = r19.useState;
                r11 = function() {
                    r0 = global;
                    r0 = r0.Set;
                    r1 = Object.create(r0.prototype);
                    r2 = r1;
                    r0 = new r3[r0](r2);
                    r0 = r0 instanceof Object ? r0 : r1;
                    return r0;
                };
                r11 = r12.bind(r19)(r11);
                r11 = r17.bind(r1)(r11, r0);
                r12 = r11[r0];
                _closure1_slot6 = r12;
                r11 = r11[r1];
                _closure1_slot7 = r11;
                r13 = r19.useCallback;
                r12 = new Array(0);
                r11 = function(a0) { // Environment: r3
                    r2 = a0;
                    var _closure2_slot0 = r2;
                    r2 = _closure1_slot7;
                    r0 = undefined;
                    r1 = function(a0) { // Environment: r1
                        _fun147692: for(var _fun147692_ip = 0; ; ) switch(_fun147692_ip) {
case 0:
                            r0 = a0;
                            r1 = r0.has;
                            r3 = _closure2_slot0;
                            r1 = r1.bind(r0)(r3);
                            if(r1) { _fun147692_ip = 61; continue _fun147692 }
case 23:
                            r1 = global;
                            r1 = r1.Set;
                            r2 = Object.create(r1.prototype);
                            r5 = r2;
                            r4 = r0;
                            r1 = new r6[r1](r5, r4);
                            r1 = r1 instanceof Object ? r1 : r2;
                            r2 = r1.add;
                            r2 = r2.bind(r1)(r3);
                            return r1;
case 61:
                            return r0;
                        }
                    };
                    r1 = r2.bind(r0)(r1);
                    return r0;
                };
                r13 = r13.bind(r19)(r11, r12);
                _closure1_slot8 = r13;
                r12 = r19.useCallback;
                r11 = new Array(3);
                r11[0] = r6;
                r11[1] = r13;
                r11[2] = r5;
                r5 = function(a0) { // Environment: r3
                    _fun131474: for(var _fun131474_ip = 0; ; ) switch(_fun131474_ip) {
case 0:
                        r2 = _closure1_slot5;
                        if(r2) { _fun131474_ip = 42; continue _fun131474 }
case 10:
                        r2 = a0;
                        r3 = _closure1_slot8;
                        r0 = undefined;
                        r3 = r3.bind(r0)(r2);
                        r3 = _closure1_slot2;
                        r3 = r3.bind(r0)(r2);
                        r1 = _closure1_slot3;
                        r1 = r1.bind(r0)(r2);
case 42:
                        r0 = undefined;
                        return r0;
                    }
                };
                r5 = r12.bind(r19)(r5, r11);
                r12 = r19.useCallback;
                r11 = new Array(3);
                r11[0] = r6;
                r11[1] = r13;
                r11[2] = r4;
                r4 = function(a0) { // Environment: r3
                    _fun131475: for(var _fun131475_ip = 0; ; ) switch(_fun131475_ip) {
case 0:
                        r2 = _closure1_slot5;
                        if(r2) { _fun131475_ip = 42; continue _fun131475 }
case 10:
                        r2 = a0;
                        r3 = _closure1_slot8;
                        r0 = undefined;
                        r3 = r3.bind(r0)(r2);
                        r3 = _closure1_slot2;
                        r3 = r3.bind(r0)(r2);
                        r1 = _closure1_slot4;
                        r1 = r1.bind(r0)(r2);
case 42:
                        r0 = undefined;
                        return r0;
                    }
                };
                r4 = r12.bind(r19)(r4, r11);
                r11 = r19.useState;
                r11 = r11.bind(r19)(r14);
                r12 = r17.bind(r1)(r11, r0);
                r11 = r12[r0];
                r12 = r12[r1];
                r13 = r19.useState;
                r13 = r13.bind(r19)(r14);
                r13 = r17.bind(r1)(r13, r0);
                r15 = r13[r0];
                r13 = r13[r1];
                r16 = r19.useState;
                r16 = r16.bind(r19)(r18);
                r16 = r17.bind(r1)(r16, r0);
                r17 = r16[r0];
                r16 = r16[r1];
                if(!r18) { _fun78528_ip = 470; continue _fun78528 }
case 441:
                if(r17) { _fun78528_ip = 470; continue _fun78528 }
case 444:
                r2 = true;
                r16 = r16.bind(r1)(r2);
                r16 = r13.bind(r1)(r14);
                r16 = function(a0) { // Environment: r3
                    _fun131476: for(var _fun131476_ip = 0; ; ) switch(_fun131476_ip) {
case 0:
                        r4 = undefined;
                        r6 = undefined;
                        r0 = global;
                        r2 = r0.Map;
                        r3 = Object.create(r2.prototype);
                        r12 = r3;
                        r2 = new r13[r2](r12);
                        r3 = r2 instanceof Object ? r2 : r3;
                        r2 = a0;
                        r5 = r2[Symbol.iterator];
                        r2 = r5().next;
case 36:
                        r7 = r2;
                        r7 = r7().value;
                        r8 = r5;
                        if(!(r8 !== r4)) { _fun131476_ip = 105; continue _fun131476 }
case 50:
                        r6 = r7;
                        r9 = _closure1_slot6;
                        r8 = r9.has;
                        r7 = r7.parent_id;
                        r7 = r8.bind(r9)(r7);
                        if(!r7) { _fun131476_ip = 96; continue _fun131476 }
case 76:
                        r9 = r3.set;
                        r8 = r6;
                        r7 = r8.parent_id;
                        r7 = r9.bind(r3)(r7, r8);
case 96:
                        _fun131476_ip = 36; continue _fun131476;
case 98:
                        CatchBlockStart(arg_register=2);
                        r5.return();
                        throw r2;
case 105:
                        r5 = _closure1_slot0;
                        r1 = r5;
                        r2 = r1[Symbol.iterator];
                        r1 = r2().next;
case 115:
                        r5 = r1;
                        r7 = r5().value;
                        r5 = r2;
                        if(!(r5 !== r4)) { _fun131476_ip = 155; continue _fun131476 }
case 129:
                        r6 = r3.set;
                        r5 = r7.parent_id;
                        r5 = r6.bind(r3)(r5, r7);
                        _fun131476_ip = 115; continue _fun131476;
case 148:
                        CatchBlockStart(arg_register=1);
                        r2.return();
                        throw r1;
case 155:
                        r2 = r0.Array;
                        r1 = r2.from;
                        r0 = r3.values;
                        r0 = r0.bind(r3)();
                        r0 = r1.bind(r2)(r0);
                        return r0;
                    }
                };
                r16 = r12.bind(r1)(r16);
                _fun78528_ip = 491; continue _fun78528;
case 470:
                if(!(r14 !== r15)) { _fun78528_ip = 491; continue _fun78528 }
case 474:
                r13 = r13.bind(r1)(r14);
                r3 = function(a0) { // Environment: r3
                    _fun131477: for(var _fun131477_ip = 0; ; ) switch(_fun131477_ip) {
case 0:
                        r5 = a0;
                        r0 = global;
                        r3 = r0.Map;
                        r2 = r5.map;
                        r4 = undefined;
                        r1 = function(a0) {
                            r1 = a0;
                            r2 = r1.parent_id;
                            r0 = new Array(2);
                            r0[0] = r2;
                            r0[1] = r1;
                            return r0;
                        };
                        r9 = r2.bind(r5)(r1);
                        r2 = Object.create(r3.prototype);
                        r10 = r2;
                        r1 = new r11[r3](r10, r9);
                        r3 = r1 instanceof Object ? r1 : r2;
                        r5 = _closure1_slot0;
                        r1 = r5;
                        r2 = r1[Symbol.iterator];
                        r1 = r2().next;
case 58:
                        r5 = r1;
                        r7 = r5().value;
                        r5 = r2;
                        if(!(r5 !== r4)) { _fun131477_ip = 98; continue _fun131477 }
case 72:
                        r6 = r3.set;
                        r5 = r7.parent_id;
                        r5 = r6.bind(r3)(r5, r7);
                        _fun131477_ip = 58; continue _fun131477;
case 91:
                        CatchBlockStart(arg_register=1);
                        r2.return();
                        throw r1;
case 98:
                        r2 = r0.Array;
                        r1 = r2.from;
                        r0 = r3.values;
                        r0 = r0.bind(r3)();
                        r0 = r1.bind(r2)(r0);
                        return r0;
                    }
                };
                r3 = r12.bind(r1)(r3);
case 491:
                r3 = {'seenRequests': null, 'hasMaxConnections': null, 'actioningUserId': null, 'isAcceptLoading': null, 'isDeclineLoading': null, 'actionsDisabled': null, 'handleAccept': null, 'handleDecline': null};
                r3[0] = r11;
                r3[1] = r10;
                r3[2] = r9;
                r3[3] = r8;
                r3[4] = r7;
                r3[5] = r6;
                r3[6] = r5;
                r3[7] = r4;
                return r3;
            }
        };
        _fun17711_ip = 207; continue _fun17711;
case 200:
        r3 = function(a0) { // Environment: r7
            _fun78527: for(var _fun78527_ip = 0; ; ) switch(_fun78527_ip) {
case 0:
                r5 = a0;
                r8 = _closure0_slot0;
                r7 = _closure0_slot1;
                r6 = r7[r6];
                r2 = undefined;
                r10 = r8.bind(r2)(r6);
                r6 = r10.c;
                r0 = 20;
                r6 = r6.bind(r10)(r0);
                r16 = r5.pendingRequests;
                var _closure1_slot0 = r16;
                r20 = r5.linkedUsersProcessed;
                r12 = r5.onActionError;
                var _closure1_slot1 = r12;
                r5 = r7[r8];
                r10 = r8.bind(r2)(r5);
                r5 = r10.useHasMaxConnections;
                r11 = r5.bind(r10)();
                r21 = _closure0_slot3;
                r5 = r21.useState;
                r3 = null;
                r5 = r5.bind(r21)(r3);
                r19 = _closure0_slot2;
                r0 = 2;
                r5 = r19.bind(r2)(r5, r0);
                r14 = r5[r0];
                r5 = r5[r1];
                var _closure1_slot2 = r5;
                r10 = r6[r0];
                r5 = global;
                r13 = r5.Symbol;
                r9 = r13.for;
                r17 = 'react.memo_cache_sentinel';
                r9 = r9.bind(r13)(r17);
                if(!(r10 !== r9)) { _fun78527_ip = 168; continue _fun78527 }
case 162:
                r13 = r6[r0];
                _fun78527_ip = 184; continue _fun78527;
case 168:
                r9 = function() { // Original name: u, environment: r4
                    r2 = _closure1_slot2;
                    r0 = null;
                    r1 = undefined;
                    r2 = r2.bind(r1)(r0);
                    return r2;
                };
                r1 = 0;
                r6[r1] = r9;
                r13 = r9;
case 184:
                r9 = r6[r1];
                if(!(r9 === r12)) { _fun78527_ip = 198; continue _fun78527 }
case 192:
                r9 = r6[r2];
                _fun78527_ip = 237; continue _fun78527;
case 198:
                r10 = {'onSuccess': null, 'onError': null};
                r10[0] = r13;
                r13 = function() { // Original name: onError, environment: r4
                    r3 = _closure1_slot2;
                    r1 = null;
                    r0 = undefined;
                    r3 = r3.bind(r0)(r1);
                    r2 = _closure1_slot1;
                    r2 = r2.bind(r0)();
                    return r0;
                };
                r10[1] = r13;
                r1 = 1;
                r6[r1] = r12;
                r6[r0] = r10;
                r9 = r10;
case 237:
                r7 = r7[r9];
                r8 = r8.bind(r2)(r7);
                r7 = r8.useFamilyCenterActions;
                r8 = r7.bind(r8)(r9);
                r12 = r8.acceptLinkRequest;
                var _closure1_slot3 = r12;
                r7 = r8.declineLinkRequest;
                var _closure1_slot4 = r7;
                r10 = r8.isAcceptLoading;
                r9 = r8.isDeclineLoading;
                r8 = r10;
                if(r8) { _fun78527_ip = 298; continue _fun78527 }
case 295:
                r8 = r9;
case 298:
                var _closure1_slot5 = r8;
                r15 = r6[r3];
                r18 = r5.Symbol;
                r13 = r18.for;
                r13 = r13.bind(r18)(r17);
                if(!(r15 !== r13)) { _fun78527_ip = 332; continue _fun78527 }
case 326:
                r15 = r6[r3];
                _fun78527_ip = 349; continue _fun78527;
case 332:
                r13 = function() { // Original name: A
                    r0 = global;
                    r0 = r0.Set;
                    r1 = Object.create(r0.prototype);
                    r2 = r1;
                    r0 = new r3[r0](r2);
                    r0 = r0 instanceof Object ? r0 : r1;
                    return r0;
                };
                r1 = 3;
                r6[r1] = r13;
                r15 = r13;
case 349:
                r13 = r21.useState;
                r13 = r13.bind(r21)(r15);
                r13 = r19.bind(r2)(r13, r0);
                r15 = r13[r0];
                var _closure1_slot6 = r15;
                r13 = r13[r1];
                var _closure1_slot7 = r13;
                r13 = r6[r4];
                r15 = r5.Symbol;
                r5 = r15.for;
                r5 = r5.bind(r15)(r17);
                if(!(r13 !== r5)) { _fun78527_ip = 411; continue _fun78527 }
case 405:
                r5 = r6[r4];
                _fun78527_ip = 428; continue _fun78527;
case 411:
                r13 = function(a0) { // Original name: y, environment: r4
                    r2 = a0;
                    var _closure2_slot0 = r2;
                    r2 = _closure1_slot7;
                    r0 = undefined;
                    r1 = function(a0) { // Environment: r1
                        _fun147690: for(var _fun147690_ip = 0; ; ) switch(_fun147690_ip) {
case 0:
                            r0 = a0;
                            r1 = r0.has;
                            r3 = _closure2_slot0;
                            r1 = r1.bind(r0)(r3);
                            if(r1) { _fun147690_ip = 61; continue _fun147690 }
case 23:
                            r1 = global;
                            r1 = r1.Set;
                            r2 = Object.create(r1.prototype);
                            r5 = r2;
                            r4 = r0;
                            r1 = new r6[r1](r5, r4);
                            r1 = r1 instanceof Object ? r1 : r2;
                            r2 = r1.add;
                            r2 = r2.bind(r1)(r3);
                            return r1;
case 61:
                            return r0;
                        }
                    };
                    r1 = r2.bind(r0)(r1);
                    return r0;
                };
                r1 = 4;
                r6[r1] = r13;
                r5 = r13;
case 428:
                var _closure1_slot8 = r5;
                r5 = r6[r5];
                if(!(r5 === r12)) { _fun78527_ip = 454; continue _fun78527 }
case 440:
                r5 = r6[r6];
                if(!(r5 === r8)) { _fun78527_ip = 454; continue _fun78527 }
case 448:
                r13 = r6[r7];
                _fun78527_ip = 485; continue _fun78527;
case 454:
                r5 = function(a0) { // Original name: M, environment: r4
                    _fun131466: for(var _fun131466_ip = 0; ; ) switch(_fun131466_ip) {
case 0:
                        r2 = _closure1_slot5;
                        if(r2) { _fun131466_ip = 42; continue _fun131466 }
case 10:
                        r2 = a0;
                        r3 = _closure1_slot8;
                        r0 = undefined;
                        r3 = r3.bind(r0)(r2);
                        r3 = _closure1_slot2;
                        r3 = r3.bind(r0)(r2);
                        r1 = _closure1_slot3;
                        r1 = r1.bind(r0)(r2);
case 42:
                        r0 = undefined;
                        return r0;
                    }
                };
                r1 = 5;
                r6[r1] = r12;
                r1 = 6;
                r6[r1] = r8;
                r1 = 7;
                r6[r1] = r5;
                r13 = r5;
case 485:
                r5 = r6[r8];
                if(!(r5 === r7)) { _fun78527_ip = 507; continue _fun78527 }
case 493:
                r5 = r6[r9];
                if(!(r5 === r8)) { _fun78527_ip = 507; continue _fun78527 }
case 501:
                r12 = r6[r10];
                _fun78527_ip = 538; continue _fun78527;
case 507:
                r5 = function(a0) { // Original name: w, environment: r4
                    _fun131467: for(var _fun131467_ip = 0; ; ) switch(_fun131467_ip) {
case 0:
                        r2 = _closure1_slot5;
                        if(r2) { _fun131467_ip = 42; continue _fun131467 }
case 10:
                        r2 = a0;
                        r3 = _closure1_slot8;
                        r0 = undefined;
                        r3 = r3.bind(r0)(r2);
                        r3 = _closure1_slot2;
                        r3 = r3.bind(r0)(r2);
                        r1 = _closure1_slot4;
                        r1 = r1.bind(r0)(r2);
case 42:
                        r0 = undefined;
                        return r0;
                    }
                };
                r1 = 8;
                r6[r1] = r7;
                r1 = 9;
                r6[r1] = r8;
                r1 = 10;
                r6[r1] = r5;
                r12 = r5;
case 538:
                r5 = r21.useState;
                r5 = r5.bind(r21)(r16);
                r5 = r19.bind(r2)(r5, r0);
                r7 = r5[r0];
                r5 = r5[r1];
                r15 = r21.useState;
                r15 = r15.bind(r21)(r16);
                r15 = r19.bind(r2)(r15, r0);
                r17 = r15[r0];
                r15 = r15[r1];
                r18 = r21.useState;
                r18 = r18.bind(r21)(r20);
                r18 = r19.bind(r2)(r18, r0);
                r19 = r18[r0];
                r18 = r18[r1];
                if(!r20) { _fun78527_ip = 642; continue _fun78527 }
case 613:
                if(r19) { _fun78527_ip = 642; continue _fun78527 }
case 616:
                r3 = true;
                r18 = r18.bind(r2)(r3);
                r18 = r15.bind(r2)(r16);
                r18 = function(a0) { // Environment: r4
                    _fun131468: for(var _fun131468_ip = 0; ; ) switch(_fun131468_ip) {
case 0:
                        r4 = undefined;
                        r6 = undefined;
                        r0 = global;
                        r2 = r0.Map;
                        r3 = Object.create(r2.prototype);
                        r12 = r3;
                        r2 = new r13[r2](r12);
                        r3 = r2 instanceof Object ? r2 : r3;
                        r2 = a0;
                        r5 = r2[Symbol.iterator];
                        r2 = r5().next;
case 36:
                        r7 = r2;
                        r7 = r7().value;
                        r8 = r5;
                        if(!(r8 !== r4)) { _fun131468_ip = 105; continue _fun131468 }
case 50:
                        r6 = r7;
                        r9 = _closure1_slot6;
                        r8 = r9.has;
                        r7 = r7.parent_id;
                        r7 = r8.bind(r9)(r7);
                        if(!r7) { _fun131468_ip = 96; continue _fun131468 }
case 76:
                        r9 = r3.set;
                        r8 = r6;
                        r7 = r8.parent_id;
                        r7 = r9.bind(r3)(r7, r8);
case 96:
                        _fun131468_ip = 36; continue _fun131468;
case 98:
                        CatchBlockStart(arg_register=2);
                        r5.return();
                        throw r2;
case 105:
                        r5 = _closure1_slot0;
                        r1 = r5;
                        r2 = r1[Symbol.iterator];
                        r1 = r2().next;
case 115:
                        r5 = r1;
                        r7 = r5().value;
                        r5 = r2;
                        if(!(r5 !== r4)) { _fun131468_ip = 155; continue _fun131468 }
case 129:
                        r6 = r3.set;
                        r5 = r7.parent_id;
                        r5 = r6.bind(r3)(r5, r7);
                        _fun131468_ip = 115; continue _fun131468;
case 148:
                        CatchBlockStart(arg_register=1);
                        r2.return();
                        throw r1;
case 155:
                        r2 = r0.Array;
                        r1 = r2.from;
                        r0 = r3.values;
                        r0 = r0.bind(r3)();
                        r0 = r1.bind(r2)(r0);
                        return r0;
                    }
                };
                r18 = r5.bind(r2)(r18);
                _fun78527_ip = 663; continue _fun78527;
case 642:
                if(!(r16 !== r17)) { _fun78527_ip = 663; continue _fun78527 }
case 646:
                r15 = r15.bind(r2)(r16);
                r4 = function(a0) { // Environment: r4
                    _fun131469: for(var _fun131469_ip = 0; ; ) switch(_fun131469_ip) {
case 0:
                        r5 = a0;
                        r0 = global;
                        r3 = r0.Map;
                        r2 = r5.map;
                        r4 = undefined;
                        r1 = function(a0) {
                            r1 = a0;
                            r2 = r1.parent_id;
                            r0 = new Array(2);
                            r0[0] = r2;
                            r0[1] = r1;
                            return r0;
                        };
                        r9 = r2.bind(r5)(r1);
                        r2 = Object.create(r3.prototype);
                        r10 = r2;
                        r1 = new r11[r3](r10, r9);
                        r3 = r1 instanceof Object ? r1 : r2;
                        r5 = _closure1_slot0;
                        r1 = r5;
                        r2 = r1[Symbol.iterator];
                        r1 = r2().next;
case 58:
                        r5 = r1;
                        r7 = r5().value;
                        r5 = r2;
                        if(!(r5 !== r4)) { _fun131469_ip = 98; continue _fun131469 }
case 72:
                        r6 = r3.set;
                        r5 = r7.parent_id;
                        r5 = r6.bind(r3)(r5, r7);
                        _fun131469_ip = 58; continue _fun131469;
case 91:
                        CatchBlockStart(arg_register=1);
                        r2.return();
                        throw r1;
case 98:
                        r2 = r0.Array;
                        r1 = r2.from;
                        r0 = r3.values;
                        r0 = r0.bind(r3)();
                        r0 = r1.bind(r2)(r0);
                        return r0;
                    }
                };
                r4 = r5.bind(r2)(r4);
case 663:
                r4 = r6[r11];
                if(!(r4 === r14)) { _fun78527_ip = 733; continue _fun78527 }
case 671:
                r4 = r6[r12];
                if(!(r4 === r13)) { _fun78527_ip = 733; continue _fun78527 }
case 679:
                r4 = r6[r13];
                if(!(r4 === r12)) { _fun78527_ip = 733; continue _fun78527 }
case 687:
                r4 = r6[r14];
                if(!(r4 === r11)) { _fun78527_ip = 733; continue _fun78527 }
case 695:
                r4 = r6[r15];
                if(!(r4 === r10)) { _fun78527_ip = 733; continue _fun78527 }
case 703:
                r4 = r6[r16];
                if(!(r4 === r9)) { _fun78527_ip = 733; continue _fun78527 }
case 711:
                r4 = r6[r17];
                if(!(r4 === r8)) { _fun78527_ip = 733; continue _fun78527 }
case 719:
                r4 = r6[r18];
                if(!(r4 === r7)) { _fun78527_ip = 733; continue _fun78527 }
case 727:
                r4 = r6[r19];
                _fun78527_ip = 837; continue _fun78527;
case 733:
                r5 = {'seenRequests': null, 'hasMaxConnections': null, 'actioningUserId': null, 'isAcceptLoading': null, 'isDeclineLoading': null, 'actionsDisabled': null, 'handleAccept': null, 'handleDecline': null};
                r5[0] = r7;
                r5[1] = r11;
                r5[2] = r14;
                r5[3] = r10;
                r5[4] = r9;
                r5[5] = r8;
                r5[6] = r13;
                r5[7] = r12;
                r0 = 11;
                r6[r0] = r14;
                r0 = 12;
                r6[r0] = r13;
                r0 = 13;
                r6[r0] = r12;
                r0 = 14;
                r6[r0] = r11;
                r0 = 15;
                r6[r0] = r10;
                r0 = 16;
                r6[r0] = r9;
                r0 = 17;
                r6[r0] = r8;
                r0 = 18;
                r6[r0] = r7;
                r0 = 19;
                r6[r0] = r5;
                r4 = r5;
case 837:
                return r4;
            }
        };
case 207:
        r1 = r5[r5];
        r8 = r6.bind(r0)(r1);
        r1 = r8.isReactCompilerEnabled;
        r1 = r1.bind(r8)();
        if(r1) { _fun17711_ip = 237; continue _fun17711 }
case 228:
        r1 = function(a0) { // Environment: r7
            _fun78530: for(var _fun78530_ip = 0; ; ) switch(_fun78530_ip) {
case 0:
                r7 = a0;
                var _closure1_slot0 = r7;
                r8 = _closure0_slot0;
                r7 = _closure0_slot1;
                r7 = r7[r7];
                r1 = undefined;
                r10 = r8.bind(r1)(r7);
                r9 = r10.useStateFromStores;
                r7 = _closure0_slot4;
                r8 = new Array(1);
                r8[0] = r7;
                r7 = function() { // Environment: r6
                    _fun131480: for(var _fun131480_ip = 0; ; ) switch(_fun131480_ip) {
case 0:
                        r2 = _closure0_slot4;
                        r1 = r2.getLinkedUsers;
                        r2 = r1.bind(r2)();
                        r1 = _closure1_slot0;
                        r2 = r2[r1];
                        r0 = null;
                        r0 = r2 == r0;
                        r1 = undefined;
                        if(r0) { _fun131480_ip = 45; continue _fun131480 }
case 39:
                        r1 = r2.link_status;
case 45:
                        return r1;
                    }
                };
                r9 = r9.bind(r10)(r8, r7);
                var _closure1_slot1 = r9;
                r11 = _closure0_slot3;
                r7 = r11.useState;
                r6 = function() { // Environment: r6
                    _fun131481: for(var _fun131481_ip = 0; ; ) switch(_fun131481_ip) {
case 0:
                        r4 = _closure1_slot1;
                        r2 = _closure0_slot6;
                        r3 = r2.ACTIVE;
                        r1 = 'connected';
                        if(!(r4 !== r3)) { _fun131481_ip = 55; continue _fun131481 }
case 28:
                        r0 = null;
                        if(!(r0 != r4)) { _fun131481_ip = 50; continue _fun131481 }
case 34:
                        r3 = r2.PENDING;
                        r2 = 'declined';
                        if(!(r4 === r3)) { _fun131481_ip = 52; continue _fun131481 }
case 50:
                        r2 = null;
case 52:
                        r1 = r2;
case 55:
                        return r1;
                    }
                };
                r6 = r7.bind(r11)(r6);
                r10 = _closure0_slot2;
                r0 = 2;
                r7 = r10.bind(r1)(r6, r0);
                r6 = r7[r0];
                r7 = r7[r1];
                r8 = r11.useState;
                r8 = r8.bind(r11)(r9);
                r10 = r10.bind(r1)(r8, r0);
                r8 = r10[r0];
                r10 = r10[r1];
                if(!(r9 !== r8)) { _fun78530_ip = 228; continue _fun78530 }
case 136:
                r10 = r10.bind(r1)(r9);
                r5 = _closure0_slot6;
                r10 = r5.ACTIVE;
                if(!(r9 !== r10)) { _fun78530_ip = 219; continue _fun78530 }
case 155:
                r10 = r5.PENDING;
                if(!(r9 !== r10)) { _fun78530_ip = 210; continue _fun78530 }
case 165:
                r3 = null;
                r2 = r3 != r9;
                if(r2) { _fun78530_ip = 194; continue _fun78530 }
case 174:
                r3 = r3 != r8;
                if(!r3) { _fun78530_ip = 191; continue _fun78530 }
case 181:
                r5 = r5.ACTIVE;
                r3 = r8 !== r5;
case 191:
                r2 = r3;
case 194:
                if(!r2) { _fun78530_ip = 228; continue _fun78530 }
case 197:
                r5 = 'declined';
                r5 = r7.bind(r1)(r5);
                _fun78530_ip = 228; continue _fun78530;
case 210:
                r2 = null;
                r5 = r7.bind(r1)(r2);
                _fun78530_ip = 228; continue _fun78530;
case 219:
                r5 = 'connected';
                r5 = r7.bind(r1)(r5);
case 228:
                r5 = 'connected';
                r1 = r5 === r6;
                r5 = 'declined';
                r2 = r5 === r6;
                r5 = {'isConnected': null, 'isDeclined': null, 'isResolved': null};
                r5[0] = r1;
                r5[1] = r2;
                if(r1) { _fun78530_ip = 270; continue _fun78530 }
case 267:
                r1 = r2;
case 270:
                r5[2] = r1;
                return r5;
            }
        };
        _fun17711_ip = 244; continue _fun17711;
case 237:
        r1 = function(a0) { // Environment: r7
            _fun78529: for(var _fun78529_ip = 0; ; ) switch(_fun78529_ip) {
case 0:
                r13 = a0;
                var _closure1_slot0 = r13;
                r9 = _closure0_slot0;
                r8 = _closure0_slot1;
                r7 = r8[r6];
                r1 = undefined;
                r10 = r9.bind(r1)(r7);
                r7 = r10.c;
                r0 = 9;
                r7 = r7.bind(r10)(r0);
                r11 = r7[r0];
                r10 = global;
                r14 = r10.Symbol;
                r12 = r14.for;
                r10 = 'react.memo_cache_sentinel';
                r10 = r12.bind(r14)(r10);
                if(!(r11 !== r10)) { _fun78529_ip = 83; continue _fun78529 }
case 77:
                r11 = r7[r0];
                _fun78529_ip = 104; continue _fun78529;
case 83:
                r12 = _closure0_slot4;
                r10 = new Array(1);
                r10[0] = r12;
                r0 = 0;
                r7[r0] = r10;
                r11 = r10;
case 104:
                r10 = r7[r1];
                if(!(r10 === r13)) { _fun78529_ip = 118; continue _fun78529 }
case 112:
                r10 = r7[r2];
                _fun78529_ip = 142; continue _fun78529;
case 118:
                r12 = function() { // Original name: c, environment: r6
                    _fun131478: for(var _fun131478_ip = 0; ; ) switch(_fun131478_ip) {
case 0:
                        r2 = _closure0_slot4;
                        r1 = r2.getLinkedUsers;
                        r2 = r1.bind(r2)();
                        r1 = _closure1_slot0;
                        r2 = r2[r1];
                        r0 = null;
                        r0 = r2 == r0;
                        r1 = undefined;
                        if(r0) { _fun131478_ip = 45; continue _fun131478 }
case 39:
                        r1 = r2.link_status;
case 45:
                        return r1;
                    }
                };
                r0 = 1;
                r7[r0] = r13;
                r0 = 2;
                r7[r0] = r12;
                r10 = r12;
case 142:
                r8 = r8[r7];
                r9 = r9.bind(r1)(r8);
                r8 = r9.useStateFromStores;
                r10 = r8.bind(r9)(r11, r10);
                var _closure1_slot1 = r10;
                r8 = r7[r3];
                if(!(r8 === r10)) { _fun78529_ip = 180; continue _fun78529 }
case 174:
                r8 = r7[r4];
                _fun78529_ip = 204; continue _fun78529;
case 180:
                r6 = function() { // Original name: v, environment: r6
                    _fun131479: for(var _fun131479_ip = 0; ; ) switch(_fun131479_ip) {
case 0:
                        r4 = _closure1_slot1;
                        r2 = _closure0_slot6;
                        r3 = r2.ACTIVE;
                        r1 = 'connected';
                        if(!(r4 !== r3)) { _fun131479_ip = 55; continue _fun131479 }
case 28:
                        r0 = null;
                        if(!(r0 != r4)) { _fun131479_ip = 50; continue _fun131479 }
case 34:
                        r3 = r2.PENDING;
                        r2 = 'declined';
                        if(!(r4 === r3)) { _fun131479_ip = 52; continue _fun131479 }
case 50:
                        r2 = null;
case 52:
                        r1 = r2;
case 55:
                        return r1;
                    }
                };
                r0 = 3;
                r7[r0] = r10;
                r0 = 4;
                r7[r0] = r6;
                r8 = r6;
case 204:
                r12 = _closure0_slot3;
                r6 = r12.useState;
                r6 = r6.bind(r12)(r8);
                r11 = _closure0_slot2;
                r0 = 2;
                r8 = r11.bind(r1)(r6, r0);
                r6 = r8[r0];
                r8 = r8[r1];
                r9 = r12.useState;
                r9 = r9.bind(r12)(r10);
                r11 = r11.bind(r1)(r9, r0);
                r9 = r11[r0];
                r11 = r11[r1];
                if(!(r10 !== r9)) { _fun78529_ip = 359; continue _fun78529 }
case 267:
                r11 = r11.bind(r1)(r10);
                r5 = _closure0_slot6;
                r11 = r5.ACTIVE;
                if(!(r10 !== r11)) { _fun78529_ip = 350; continue _fun78529 }
case 286:
                r11 = r5.PENDING;
                if(!(r10 !== r11)) { _fun78529_ip = 341; continue _fun78529 }
case 296:
                r2 = null;
                r3 = r2 != r10;
                if(r3) { _fun78529_ip = 325; continue _fun78529 }
case 305:
                r2 = r2 != r9;
                if(!r2) { _fun78529_ip = 322; continue _fun78529 }
case 312:
                r5 = r5.ACTIVE;
                r2 = r9 !== r5;
case 322:
                r3 = r2;
case 325:
                if(!r3) { _fun78529_ip = 359; continue _fun78529 }
case 328:
                r5 = 'declined';
                r5 = r8.bind(r1)(r5);
                _fun78529_ip = 359; continue _fun78529;
case 341:
                r3 = null;
                r5 = r8.bind(r1)(r3);
                _fun78529_ip = 359; continue _fun78529;
case 350:
                r5 = 'connected';
                r5 = r8.bind(r1)(r5);
case 359:
                r5 = 'connected';
                r2 = r5 === r6;
                r5 = 'declined';
                r3 = r5 === r6;
                r1 = r2;
                if(r1) { _fun78529_ip = 386; continue _fun78529 }
case 383:
                r1 = r3;
case 386:
                r5 = r7[r5];
                if(!(r5 === r2)) { _fun78529_ip = 416; continue _fun78529 }
case 394:
                r5 = r7[r6];
                if(!(r5 === r3)) { _fun78529_ip = 416; continue _fun78529 }
case 402:
                r5 = r7[r7];
                if(!(r5 === r1)) { _fun78529_ip = 416; continue _fun78529 }
case 410:
                r5 = r7[r8];
                _fun78529_ip = 469; continue _fun78529;
case 416:
                r6 = {'isConnected': null, 'isDeclined': null, 'isResolved': null};
                r6[0] = r2;
                r6[1] = r3;
                r6[2] = r1;
                r0 = 5;
                r7[r0] = r2;
                r0 = 6;
                r7[r0] = r3;
                r0 = 7;
                r7[r0] = r1;
                r0 = 8;
                r7[r0] = r6;
                r5 = r6;
case 469:
                return r5;
            }
        };
case 244:
        r5 = r5[r10];
        r7 = r6.bind(r0)(r5);
        r6 = r7.fileFinishedImporting;
        r5 = 'modules/safety_flows/usePendingParentRequests.tsx';
        r5 = r6.bind(r7)(r5);
        r2['useDerivedPendingRequests'] = r4;
        r2['usePendingRequestListController'] = r3;
        r2['usePendingRequestResolution'] = r1;
        return r0;
    }
}

// ===== top-level #17751  fn#17712  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    _fun17712: for(var _fun17712_ip = 0; ; ) switch(_fun17712_ip) {
case 0:
        r4 = a1;
        var _closure0_slot0 = r4;
        r1 = a2;
        var _closure0_slot1 = r1;
        r2 = a5;
        r3 = a6;
        var _closure0_slot2 = r3;
        r1 = global;
        r8 = r1.Object;
        r7 = r8.defineProperty;
        r6 = '__esModule';
        r1 = {'value': true};
        r1 = r7.bind(r8)(r2, r6, r1);
        r6 = r3[r0];
        r0 = undefined;
        r1 = a3;
        r1 = r1.bind(r0)(r6);
        r1 = r3[r1];
        r1 = r4.bind(r0)(r1);
        r1 = r1.jsx;
        var _closure0_slot3 = r1;
        r1 = r3[r2];
        r7 = r4.bind(r0)(r1);
        r6 = r7.createStyles;
        r1 = {'text': null};
        r8 = {'textAlign': 'center'};
        r1[0] = r8;
        r1 = r6.bind(r7)(r1);
        var _closure0_slot4 = r1;
        r1 = r3[r3];
        r6 = r4.bind(r0)(r1);
        r1 = r6.isReactCompilerEnabled;
        r1 = r1.bind(r6)();
        if(r1) { _fun17712_ip = 170; continue _fun17712 }
case 161:
        r1 = function() { // Environment: r5
            r1 = _closure0_slot4;
            r0 = undefined;
            r5 = r1.bind(r0)();
            r3 = _closure0_slot3;
            r6 = _closure0_slot0;
            r4 = _closure0_slot2;
            r1 = r4[r9];
            r1 = r6.bind(r0)(r1);
            r2 = r1.Text;
            r1 = {'variant': 'text-md/medium', 'color': 'text-muted', 'style': null, 'children': null};
            r5 = r5.text;
            r1[2] = r5;
            r5 = r4[r5];
            r5 = r6.bind(r0)(r5);
            r7 = r5.intl;
            r6 = r7.format;
            r5 = _closure0_slot1;
            r4 = r4[r6];
            r4 = r5.bind(r0)(r4);
            r5 = r4.ifObbX;
            r4 = {'handleAgeVerifyHook': null};
            r8 = function() { // Original name: handleAgeVerifyHook, environment: r8
                r2 = _closure0_slot1;
                r4 = _closure0_slot2;
                r1 = r4[r7];
                r0 = undefined;
                r3 = r2.bind(r0)(r1);
                r2 = r3.showAgeVerificationGetStartedModal;
                r1 = {'entryPoint': null};
                r5 = _closure0_slot0;
                r4 = r4[r8];
                r4 = r5.bind(r0)(r4);
                r4 = r4.AgeVerificationModalEntryPoint;
                r4 = r4.PARENTAL_CONSENT_LOCKOUT;
                r1[0] = r4;
                r1 = r2.bind(r3)(r1);
                return r1;
            };
            r4[0] = r8;
            r4 = r6.bind(r7)(r5, r4);
            r1[3] = r4;
            r1 = r3.bind(r0)(r2, r1);
            return r1;
        };
        _fun17712_ip = 177; continue _fun17712;
case 170:
        r1 = function() { // Environment: r5
            _fun78531: for(var _fun78531_ip = 0; ; ) switch(_fun78531_ip) {
case 0:
                r6 = _closure0_slot0;
                r3 = _closure0_slot2;
                r2 = r3[r4];
                r1 = undefined;
                r4 = r6.bind(r1)(r2);
                r2 = r4.c;
                r0 = 3;
                r4 = r2.bind(r4)(r0);
                r2 = _closure0_slot4;
                r5 = r2.bind(r1)();
                r9 = r5.text;
                r8 = r4[r0];
                r2 = global;
                r11 = r2.Symbol;
                r10 = r11.for;
                r2 = 'react.memo_cache_sentinel';
                r2 = r10.bind(r11)(r2);
                if(!(r8 !== r2)) { _fun78531_ip = 86; continue _fun78531 }
case 80:
                r8 = r4[r0];
                _fun78531_ip = 162; continue _fun78531;
case 86:
                r2 = r3[r5];
                r2 = r6.bind(r1)(r2);
                r12 = r2.intl;
                r11 = r12.format;
                r10 = _closure0_slot1;
                r2 = r3[r6];
                r2 = r10.bind(r1)(r2);
                r10 = r2.ifObbX;
                r2 = {'handleAgeVerifyHook': null};
                r13 = function() { // Original name: handleAgeVerifyHook, environment: r7
                    r2 = _closure0_slot1;
                    r4 = _closure0_slot2;
                    r1 = r4[r7];
                    r0 = undefined;
                    r3 = r2.bind(r0)(r1);
                    r2 = r3.showAgeVerificationGetStartedModal;
                    r1 = {'entryPoint': null};
                    r5 = _closure0_slot0;
                    r4 = r4[r8];
                    r4 = r5.bind(r0)(r4);
                    r4 = r4.AgeVerificationModalEntryPoint;
                    r4 = r4.PARENTAL_CONSENT_LOCKOUT;
                    r1[0] = r4;
                    r1 = r2.bind(r3)(r1);
                    return r1;
                };
                r2[0] = r13;
                r2 = r11.bind(r12)(r10, r2);
                r0 = 0;
                r4[r0] = r2;
                r8 = r2;
case 162:
                r10 = r4[r1];
                r2 = r5.text;
                if(!(r10 === r2)) { _fun78531_ip = 181; continue _fun78531 }
case 175:
                r2 = r4[r2];
                _fun78531_ip = 245; continue _fun78531;
case 181:
                r7 = _closure0_slot3;
                r3 = r3[r9];
                r3 = r6.bind(r1)(r3);
                r6 = r3.Text;
                r3 = {'variant': 'text-md/medium', 'color': 'text-muted', 'style': null, 'children': null};
                r3[2] = r9;
                r3[3] = r8;
                r3 = r7.bind(r1)(r6, r3);
                r5 = r5.text;
                r0 = 1;
                r4[r0] = r5;
                r0 = 2;
                r4[r0] = r3;
                r2 = r3;
case 245:
                return r2;
            }
        };
case 177:
        r3 = r3[r10];
        r5 = r4.bind(r0)(r3);
        r4 = r5.fileFinishedImporting;
        r3 = 'modules/parental_consent/native/AgeUpdateFooter.tsx';
        r3 = r4.bind(r5)(r3);
        r2['default'] = r1;
        return r0;
    }
}

// ===== top-level #17752  fn#17713  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    _fun17713: for(var _fun17713_ip = 0; ; ) switch(_fun17713_ip) {
case 0:
        r6 = a1;
        var _closure0_slot0 = r6;
        r11 = a2;
        var _closure0_slot1 = r11;
        r3 = a5;
        r5 = a6;
        var _closure0_slot2 = r5;
        r2 = global;
        r9 = r2.Object;
        r8 = r9.defineProperty;
        r4 = '__esModule';
        r2 = {'value': true};
        r2 = r8.bind(r9)(r3, r4, r2);
        r4 = r5[r0];
        r1 = undefined;
        r2 = a3;
        r2 = r2.bind(r1)(r4);
        var _closure0_slot3 = r2;
        r2 = r5[r1];
        r2 = r6.bind(r1)(r2);
        r4 = r2.ActivityIndicator;
        var _closure0_slot4 = r4;
        r2 = r2.View;
        var _closure0_slot5 = r2;
        r2 = r5[r2];
        r2 = r11.bind(r1)(r2);
        var _closure0_slot6 = r2;
        r2 = r5[r3];
        r2 = r6.bind(r1)(r2);
        r4 = r2.jsx;
        var _closure0_slot7 = r4;
        r2 = r2.jsxs;
        var _closure0_slot8 = r2;
        r2 = r5[r4];
        r8 = r6.bind(r1)(r2);
        r4 = r8.createStyles;
        r2 = {'card': null, 'row': null, 'divider': null, 'avatar': null, 'details': null, 'actions': null, 'actionButton': null, 'acceptButton': null, 'declineButton': null, 'acceptIcon': null, 'declineIcon': null, 'inviteIconContainer': null, 'inviteQrButton': null, 'inviteShareButton': null, 'dividerRow': null, 'dividerLine': null, 'dividerLabel': null};
        r9 = {'borderRadius': null, 'backgroundColor': null, 'overflow': 'hidden'};
        r10 = r5[r5];
        r10 = r11.bind(r1)(r10);
        r10 = r10.radii;
        r10 = r10.lg;
        r9[0] = r10;
        r10 = r5[r5];
        r10 = r11.bind(r1)(r10);
        r10 = r10.colors;
        r10 = r10.BACKGROUND_SURFACE_HIGH;
        r9[1] = r10;
        r2[0] = r9;
        r9 = {'flexDirection': 'row', 'alignItems': 'center', 'paddingVertical': null, 'paddingHorizontal': null};
        r10 = r5[r5];
        r10 = r11.bind(r1)(r10);
        r10 = r10.space;
        r10 = r10.PX_12;
        r9[2] = r10;
        r10 = r5[r5];
        r10 = r11.bind(r1)(r10);
        r10 = r10.space;
        r10 = r10.PX_16;
        r9[3] = r10;
        r2[1] = r9;
        r9 = {'height': 1, 'backgroundColor': null, 'marginLeft': null};
        r10 = r5[r5];
        r10 = r11.bind(r1)(r10);
        r10 = r10.colors;
        r10 = r10.BORDER_SUBTLE;
        r9[1] = r10;
        r10 = r5[r5];
        r10 = r11.bind(r1)(r10);
        r10 = r10.space;
        r12 = r10.PX_16;
        r10 = r5[r6];
        r10 = r6.bind(r1)(r10);
        r13 = r10.AVATAR_SIZE_MAP;
        r10 = r5[r6];
        r10 = r6.bind(r1)(r10);
        r10 = r10.AvatarSizes;
        r10 = r10.NORMAL;
        r10 = r13[r10];
        r12 = r12 + r10;
        r10 = r5[r5];
        r10 = r11.bind(r1)(r10);
        r10 = r10.space;
        r10 = r10.PX_12;
        r10 = r12 + r10;
        r9[2] = r10;
        r2[2] = r9;
        r9 = {'borderRadius': null, 'backgroundColor': null};
        r10 = r5[r6];
        r10 = r6.bind(r1)(r10);
        r12 = r10.AVATAR_SIZE_MAP;
        r10 = r5[r6];
        r10 = r6.bind(r1)(r10);
        r10 = r10.AvatarSizes;
        r10 = r10.NORMAL;
        r10 = r12[r10];
        r0 = 2;
        r0 = r10 / r0;
        r9[0] = r0;
        r10 = r5[r5];
        r10 = r11.bind(r1)(r10);
        r10 = r10.colors;
        r10 = r10.BACKGROUND_SURFACE_HIGHEST;
        r9[1] = r10;
        r2[3] = r9;
        r9 = {'flexGrow': 1, 'flexShrink': 1, 'paddingLeft': null, 'paddingRight': null};
        r10 = r5[r5];
        r10 = r11.bind(r1)(r10);
        r10 = r10.space;
        r10 = r10.PX_12;
        r9[2] = r10;
        r10 = r5[r5];
        r10 = r11.bind(r1)(r10);
        r10 = r10.space;
        r10 = r10.PX_4;
        r9[3] = r10;
        r2[4] = r9;
        r9 = {'flexDirection': 'row', 'alignItems': 'center'};
        r2[5] = r9;
        r9 = {'height': 36, 'width': 36, 'borderRadius': null, 'alignItems': 'center', 'justifyContent': 'center'};
        r10 = r5[r5];
        r10 = r11.bind(r1)(r10);
        r10 = r10.radii;
        r10 = r10.round;
        r9[2] = r10;
        r2[6] = r9;
        r9 = {'backgroundColor': null, 'marginRight': null};
        r10 = r5[r5];
        r10 = r11.bind(r1)(r10);
        r10 = r10.colors;
        r10 = r10.STATUS_POSITIVE;
        r9[0] = r10;
        r10 = r5[r5];
        r10 = r11.bind(r1)(r10);
        r10 = r10.space;
        r10 = r10.PX_8;
        r9[1] = r10;
        r2[7] = r9;
        r9 = {'backgroundColor': null, 'borderWidth': 1, 'borderColor': null};
        r10 = r5[r5];
        r10 = r11.bind(r1)(r10);
        r10 = r10.colors;
        r10 = r10.BACKGROUND_SURFACE_HIGHEST;
        r9[0] = r10;
        r10 = r5[r5];
        r10 = r11.bind(r1)(r10);
        r10 = r10.colors;
        r10 = r10.BORDER_STRONG;
        r9[2] = r10;
        r2[8] = r9;
        r9 = {'color': null};
        r10 = r5[r5];
        r10 = r11.bind(r1)(r10);
        r10 = r10.colors;
        r10 = r10.WHITE;
        r9[0] = r10;
        r2[9] = r9;
        r9 = {'color': null};
        r10 = r5[r5];
        r10 = r11.bind(r1)(r10);
        r10 = r10.colors;
        r10 = r10.INTERACTIVE_TEXT_DEFAULT;
        r9[0] = r10;
        r2[10] = r9;
        r9 = {'width': null, 'height': null, 'alignItems': 'center', 'justifyContent': 'center'};
        r10 = r5[r6];
        r10 = r6.bind(r1)(r10);
        r12 = r10.AVATAR_SIZE_MAP;
        r10 = r5[r6];
        r10 = r6.bind(r1)(r10);
        r10 = r10.AvatarSizes;
        r10 = r10.NORMAL;
        r10 = r12[r10];
        r9[0] = r10;
        r10 = r5[r6];
        r10 = r6.bind(r1)(r10);
        r12 = r10.AVATAR_SIZE_MAP;
        r10 = r5[r6];
        r10 = r6.bind(r1)(r10);
        r10 = r10.AvatarSizes;
        r10 = r10.NORMAL;
        r10 = r12[r10];
        r9[1] = r10;
        r2[11] = r9;
        r9 = {'backgroundColor': null, 'borderWidth': 1, 'borderColor': null};
        r10 = r5[r5];
        r10 = r11.bind(r1)(r10);
        r10 = r10.colors;
        r10 = r10.BACKGROUND_SURFACE_HIGHEST;
        r9[0] = r10;
        r10 = r5[r5];
        r10 = r11.bind(r1)(r10);
        r10 = r10.colors;
        r10 = r10.BORDER_STRONG;
        r9[2] = r10;
        r2[12] = r9;
        r9 = {'backgroundColor': null, 'borderWidth': 1, 'borderColor': null, 'marginRight': null};
        r10 = r5[r5];
        r10 = r11.bind(r1)(r10);
        r10 = r10.colors;
        r10 = r10.BACKGROUND_SURFACE_HIGHEST;
        r9[0] = r10;
        r10 = r5[r5];
        r10 = r11.bind(r1)(r10);
        r10 = r10.colors;
        r10 = r10.BORDER_STRONG;
        r9[2] = r10;
        r10 = r5[r5];
        r10 = r11.bind(r1)(r10);
        r10 = r10.space;
        r10 = r10.PX_8;
        r9[3] = r10;
        r2[13] = r9;
        r9 = {'flexDirection': 'row', 'alignItems': 'center'};
        r2[14] = r9;
        r9 = {'flexGrow': 1, 'flexShrink': 1, 'height': 1, 'backgroundColor': null};
        r10 = r5[r5];
        r10 = r11.bind(r1)(r10);
        r10 = r10.colors;
        r10 = r10.BORDER_SUBTLE;
        r9[3] = r10;
        r2[15] = r9;
        r9 = {'marginHorizontal': null};
        r10 = r5[r5];
        r10 = r11.bind(r1)(r10);
        r10 = r10.space;
        r10 = r10.PX_12;
        r9[0] = r10;
        r2[16] = r9;
        r2 = r4.bind(r8)(r2);
        var _closure0_slot9 = r2;
        r2 = r5[r7];
        r4 = r6.bind(r1)(r2);
        r2 = r4.isReactCompilerEnabled;
        r2 = r2.bind(r4)();
        if(r2) { _fun17713_ip = 1194; continue _fun17713 }
case 1185:
        r2 = function(a0) { // Environment: r7
            _fun78534: for(var _fun78534_ip = 0; ; ) switch(_fun78534_ip) {
case 0:
                r3 = a0;
                r25 = r3.request;
                var _closure1_slot0 = r25;
                r9 = r3.hasMaxConnections;
                r21 = r3.isAcceptLoading;
                r16 = r3.isDeclineLoading;
                r20 = r3.actionsDisabled;
                r4 = r3.onAccept;
                var _closure1_slot1 = r4;
                r3 = r3.onDecline;
                var _closure1_slot2 = r3;
                r3 = _closure0_slot9;
                r0 = undefined;
                r19 = r3.bind(r0)();
                r13 = _closure0_slot0;
                r8 = _closure0_slot2;
                r3 = r8[r9];
                r6 = r13.bind(r0)(r3);
                r5 = r6.useStateFromStores;
                r3 = _closure0_slot6;
                r4 = new Array(1);
                r4[0] = r3;
                r3 = function() { // Environment: r18
                    r2 = _closure0_slot6;
                    r1 = r2.getUser;
                    r0 = _closure1_slot0;
                    r0 = r0.parent_id;
                    r0 = r1.bind(r2)(r0);
                    return r0;
                };
                r3 = r5.bind(r6)(r4, r3);
                r1 = null;
                r2 = r3 == r1;
                r22 = undefined;
                if(r2) { _fun78534_ip = 137; continue _fun78534 }
case 131:
                r22 = r3.globalName;
case 137:
                if(!(r22 == r1)) { _fun78534_ip = 158; continue _fun78534 }
case 141:
                r2 = r3 == r1;
                r4 = undefined;
                if(r2) { _fun78534_ip = 155; continue _fun78534 }
case 150:
                r4 = r3.username;
case 155:
                r22 = r4;
case 158:
                if(!(r22 == r1)) { _fun78534_ip = 168; continue _fun78534 }
case 162:
                r22 = r25.parent_username;
case 168:
                r2 = r3 == r1;
                r27 = undefined;
                if(r2) { _fun78534_ip = 182; continue _fun78534 }
case 177:
                r27 = r3.username;
case 182:
                if(!(r27 == r1)) { _fun78534_ip = 192; continue _fun78534 }
case 186:
                r27 = r25.parent_username;
case 192:
                r2 = r3 == r1;
                r28 = undefined;
                if(r2) { _fun78534_ip = 207; continue _fun78534 }
case 201:
                r28 = r3.avatar;
case 207:
                if(!(r28 == r1)) { _fun78534_ip = 217; continue _fun78534 }
case 211:
                r28 = r25.parent_avatar;
case 217:
                r3 = r8[r10];
                r5 = r13.bind(r0)(r3);
                r4 = r5.usePendingRequestResolution;
                r3 = r25.parent_id;
                r3 = r4.bind(r5)(r3);
                r11 = r3.isConnected;
                r7 = r3.isResolved;
                r3 = r8[r11];
                r5 = r13.bind(r0)(r3);
                r4 = r5.formatPendingRequestSentText;
                r3 = r25.created_at;
                r24 = r4.bind(r5)(r3);
                r5 = _closure0_slot8;
                r4 = _closure0_slot5;
                r3 = {'style': null, 'children': null};
                r6 = r19.row;
                r3[0] = r6;
                r10 = _closure0_slot7;
                r6 = r8[r6];
                r6 = r13.bind(r0)(r6);
                r12 = r6.Avatar;
                r6 = {'avatarStyle': null, 'source': null, 'disablePlaceholder': true};
                r14 = r19.avatar;
                r6[0] = r14;
                r14 = _closure0_slot1;
                r15 = r8[r12];
                r26 = r14.bind(r0)(r15);
                r23 = r26.getUserAvatarSource;
                r15 = {'id': null, 'avatar': null};
                r29 = r25.parent_id;
                r15[0] = r29;
                r15[1] = r28;
                r15 = r23.bind(r26)(r15);
                r6[1] = r15;
                r12 = r10.bind(r0)(r12, r6);
                r6 = new Array(3);
                r6[0] = r12;
                r12 = {'style': null, 'children': null};
                r15 = r19.details;
                r12[0] = r15;
                r15 = r8[r13];
                r15 = r13.bind(r0)(r15);
                r23 = r15.Text;
                r15 = {'variant': 'text-md/semibold', 'color': 'mobile-text-heading-primary', 'lineClamp': 1, 'children': null};
                r15[3] = r22;
                r23 = r10.bind(r0)(r23, r15);
                r15 = new Array(3);
                r15[0] = r23;
                r22 = r27 !== r22;
                if(!r22) { _fun78534_ip = 517; continue _fun78534 }
case 483:
                r23 = r8[r13];
                r23 = r13.bind(r0)(r23);
                r26 = r23.Text;
                r23 = {'variant': 'text-sm/medium', 'color': 'text-default', 'lineClamp': 1, 'children': null};
                r23[3] = r27;
                r22 = r10.bind(r0)(r26, r23);
case 517:
                r15[1] = r22;
                r22 = r8[r13];
                r22 = r13.bind(r0)(r22);
                r23 = r22.Text;
                r22 = {'variant': 'text-xs/medium', 'color': 'text-muted', 'children': null};
                r22[2] = r24;
                r22 = r10.bind(r0)(r23, r22);
                r15[2] = r22;
                r12[1] = r15;
                r12 = r5.bind(r0)(r4, r12);
                r6[1] = r12;
                if(r7) { _fun78534_ip = 1139; continue _fun78534 }
case 579:
                r7 = {'style': null, 'children': null};
                r12 = r19.actions;
                r7[0] = r12;
                r12 = !r9;
                if(r9) { _fun78534_ip = 845; continue _fun78534 }
case 608:
                r9 = r8[r16];
                r9 = r13.bind(r0)(r9);
                r15 = r9.PressableOpacity;
                r9 = {'accessibilityRole': 'button', 'accessibilityLabel': null, 'disabled': null, 'onPress': null, 'style': null, 'children': null};
                r22 = r8[r14];
                r22 = r13.bind(r0)(r22);
                r26 = r22.intl;
                r24 = r26.formatToPlainString;
                r22 = r8[r17];
                r22 = r14.bind(r0)(r22);
                r23 = r22.jc1Ip7;
                r22 = {'name': null};
                r27 = r25.parent_username;
                r22[0] = r27;
                r22 = r24.bind(r26)(r23, r22);
                r9[1] = r22;
                r9[2] = r20;
                r22 = function() { // Original name: onPress, environment: r18
                    r2 = _closure1_slot1;
                    r1 = _closure1_slot0;
                    r1 = r1.parent_id;
                    r0 = undefined;
                    r1 = r2.bind(r0)(r1);
                    return r1;
                };
                r9[3] = r22;
                r23 = r19.actionButton;
                r22 = new Array(2);
                r22[0] = r23;
                r23 = r19.acceptButton;
                r22[1] = r23;
                r9[4] = r22;
                if(r21) { _fun78534_ip = 800; continue _fun78534 }
case 743:
                r21 = r8[r18];
                r21 = r13.bind(r0)(r21);
                r22 = r21.CheckmarkLargeBoldIcon;
                r21 = {'size': 'sm', 'color': null};
                r23 = r8[r5];
                r23 = r14.bind(r0)(r23);
                r23 = r23.colors;
                r23 = r23.WHITE;
                r21[1] = r23;
                r21 = r10.bind(r0)(r22, r21);
                _fun78534_ip = 835; continue _fun78534;
case 800:
                r23 = _closure0_slot4;
                r22 = {'size': 'small', 'color': null};
                r24 = r19.acceptIcon;
                r24 = r24.color;
                r22[1] = r24;
                r21 = r10.bind(r0)(r23, r22);
case 835:
                r9[5] = r21;
                r12 = r10.bind(r0)(r15, r9);
case 845:
                r9 = new Array(2);
                r9[0] = r12;
                r12 = r8[r16];
                r12 = r13.bind(r0)(r12);
                r15 = r12.PressableOpacity;
                r12 = {'accessibilityRole': 'button', 'accessibilityLabel': null, 'disabled': null, 'onPress': null, 'style': null, 'children': null};
                r21 = r8[r14];
                r21 = r13.bind(r0)(r21);
                r24 = r21.intl;
                r23 = r24.formatToPlainString;
                r21 = r8[r17];
                r21 = r14.bind(r0)(r21);
                r22 = r21["4GtllP"];
                r21 = {'name': null};
                r25 = r25.parent_username;
                r21[0] = r25;
                r21 = r23.bind(r24)(r22, r21);
                r12[1] = r21;
                r12[2] = r20;
                r18 = function() { // Original name: onPress, environment: r18
                    r2 = _closure1_slot2;
                    r1 = _closure1_slot0;
                    r1 = r1.parent_id;
                    r0 = undefined;
                    r1 = r2.bind(r0)(r1);
                    return r1;
                };
                r12[3] = r18;
                r20 = r19.actionButton;
                r18 = new Array(2);
                r18[0] = r20;
                r20 = r19.declineButton;
                r18[1] = r20;
                r12[4] = r18;
                if(r16) { _fun78534_ip = 1078; continue _fun78534 }
case 988:
                r16 = r8[r6];
                r16 = r13.bind(r0)(r16);
                r18 = r16.Icon;
                r16 = {'size': null, 'color': null, 'source': null};
                r20 = r8[r6];
                r20 = r13.bind(r0)(r20);
                r20 = r20.Icon;
                r20 = r20.Sizes;
                r20 = r20.SMALL;
                r16[0] = r20;
                r20 = r19.declineIcon;
                r20 = r20.color;
                r16[1] = r20;
                r20 = r8[r19];
                r20 = r14.bind(r0)(r20);
                r16[2] = r20;
                r16 = r10.bind(r0)(r18, r16);
                _fun78534_ip = 1113; continue _fun78534;
case 1078:
                r18 = _closure0_slot4;
                r17 = {'size': 'small', 'color': null};
                r19 = r19.declineIcon;
                r19 = r19.color;
                r17[1] = r19;
                r16 = r10.bind(r0)(r18, r17);
case 1113:
                r12[5] = r16;
                r12 = r10.bind(r0)(r15, r12);
                r9[1] = r12;
                r7[1] = r9;
                r7 = r5.bind(r0)(r4, r7);
                _fun78534_ip = 1227; continue _fun78534;
case 1139:
                r9 = r8[r13];
                r9 = r13.bind(r0)(r9);
                r9 = r9.Text;
                r12 = r8[r14];
                r12 = r13.bind(r0)(r12);
                r13 = r12.intl;
                r12 = r13.string;
                r8 = r8[r15];
                r8 = r14.bind(r0)(r8);
                if(r11) { _fun78534_ip = 1194; continue _fun78534 }
case 1184:
                r11 = r8["2HvOvh"];
                _fun78534_ip = 1202; continue _fun78534;
case 1194:
                r11 = r8.YQP5dE;
case 1202:
                r8 = {'variant': 'text-sm/normal', 'color': 'text-muted', 'children': null};
                r11 = r12.bind(r13)(r11);
                r8[2] = r11;
                r7 = r10.bind(r0)(r9, r8);
case 1227:
                r6[2] = r7;
                r3[1] = r6;
                r3 = r5.bind(r0)(r4, r3);
                return r3;
            }
        };
        _fun17713_ip = 1201; continue _fun17713;
case 1194:
        r2 = function(a0) { // Environment: r7
            _fun78533: for(var _fun78533_ip = 0; ; ) switch(_fun78533_ip) {
case 0:
                r4 = a0;
                r25 = _closure0_slot0;
                r21 = _closure0_slot2;
                r6 = r21[r8];
                r1 = undefined;
                r7 = r25.bind(r1)(r6);
                r6 = r7.c;
                r0 = 45;
                r6 = r6.bind(r7)(r0);
                r11 = r4.request;
                var _closure1_slot0 = r11;
                r19 = r4.hasMaxConnections;
                r18 = r4.isAcceptLoading;
                r16 = r4.isDeclineLoading;
                r20 = r4.actionsDisabled;
                r14 = r4.onAccept;
                var _closure1_slot1 = r14;
                r12 = r4.onDecline;
                var _closure1_slot2 = r12;
                r4 = _closure0_slot9;
                r10 = r4.bind(r1)();
                r7 = r6[r0];
                r4 = global;
                r9 = r4.Symbol;
                r8 = r9.for;
                r4 = 'react.memo_cache_sentinel';
                r4 = r8.bind(r9)(r4);
                if(!(r7 !== r4)) { _fun78533_ip = 141; continue _fun78533 }
case 135:
                r9 = r6[r0];
                _fun78533_ip = 162; continue _fun78533;
case 141:
                r7 = _closure0_slot6;
                r4 = new Array(1);
                r4[0] = r7;
                r0 = 0;
                r6[r0] = r4;
                r9 = r4;
case 162:
                r7 = r6[r1];
                r4 = r11.parent_id;
                if(!(r7 === r4)) { _fun78533_ip = 182; continue _fun78533 }
case 176:
                r8 = r6[r2];
                _fun78533_ip = 212; continue _fun78533;
case 182:
                r4 = function() { // Original name: s, environment: r29
                    r2 = _closure0_slot6;
                    r1 = r2.getUser;
                    r0 = _closure1_slot0;
                    r0 = r0.parent_id;
                    r0 = r1.bind(r2)(r0);
                    return r0;
                };
                r7 = r11.parent_id;
                r0 = 1;
                r6[r0] = r7;
                r0 = 2;
                r6[r0] = r4;
                r8 = r4;
case 212:
                r4 = r21[r9];
                r7 = r25.bind(r1)(r4);
                r4 = r7.useStateFromStores;
                r7 = r4.bind(r7)(r9, r8);
                r2 = null;
                r3 = r7 == r2;
                r4 = undefined;
                if(r3) { _fun78533_ip = 249; continue _fun78533 }
case 243:
                r4 = r7.globalName;
case 249:
                if(!(r4 == r2)) { _fun78533_ip = 270; continue _fun78533 }
case 253:
                r3 = r7 == r2;
                r8 = undefined;
                if(r3) { _fun78533_ip = 267; continue _fun78533 }
case 262:
                r8 = r7.username;
case 267:
                r4 = r8;
case 270:
                if(!(r4 == r2)) { _fun78533_ip = 280; continue _fun78533 }
case 274:
                r4 = r11.parent_username;
case 280:
                r3 = r7 == r2;
                r23 = undefined;
                if(r3) { _fun78533_ip = 294; continue _fun78533 }
case 289:
                r23 = r7.username;
case 294:
                if(!(r23 == r2)) { _fun78533_ip = 304; continue _fun78533 }
case 298:
                r23 = r11.parent_username;
case 304:
                r3 = r7 == r2;
                r8 = undefined;
                if(r3) { _fun78533_ip = 319; continue _fun78533 }
case 313:
                r8 = r7.avatar;
case 319:
                if(!(r8 == r2)) { _fun78533_ip = 329; continue _fun78533 }
case 323:
                r8 = r11.parent_avatar;
case 329:
                r7 = r21[r10];
                r13 = r25.bind(r1)(r7);
                r9 = r13.usePendingRequestResolution;
                r7 = r11.parent_id;
                r7 = r9.bind(r13)(r7);
                r17 = r7.isConnected;
                r15 = r7.isResolved;
                r9 = r6[r3];
                r7 = r11.created_at;
                if(!(r9 === r7)) { _fun78533_ip = 387; continue _fun78533 }
case 381:
                r9 = r6[r4];
                _fun78533_ip = 436; continue _fun78533;
case 387:
                r7 = r21[r11];
                r22 = r25.bind(r1)(r7);
                r13 = r22.formatPendingRequestSentText;
                r7 = r11.created_at;
                r7 = r13.bind(r22)(r7);
                r13 = r11.created_at;
                r0 = 3;
                r6[r0] = r13;
                r0 = 4;
                r6[r0] = r7;
                r9 = r7;
case 436:
                r13 = r10.row;
                r27 = r10.avatar;
                r7 = r6[r5];
                if(!(r7 === r8)) { _fun78533_ip = 476; continue _fun78533 }
case 456:
                r22 = r6[r6];
                r7 = r11.parent_id;
                if(!(r22 === r7)) { _fun78533_ip = 476; continue _fun78533 }
case 470:
                r22 = r6[r7];
                _fun78533_ip = 554; continue _fun78533;
case 476:
                r24 = _closure0_slot1;
                r7 = r21[r12];
                r26 = r24.bind(r1)(r7);
                r24 = r26.getUserAvatarSource;
                r7 = {'id': null, 'avatar': null};
                r28 = r11.parent_id;
                r7[0] = r28;
                r7[1] = r8;
                r7 = r24.bind(r26)(r7);
                r0 = 5;
                r6[r0] = r8;
                r8 = r11.parent_id;
                r0 = 6;
                r6[r0] = r8;
                r0 = 7;
                r6[r0] = r7;
                r22 = r7;
case 554:
                r8 = r6[r8];
                r7 = r10.avatar;
                if(!(r8 === r7)) { _fun78533_ip = 582; continue _fun78533 }
case 568:
                r7 = r6[r9];
                if(!(r7 === r22)) { _fun78533_ip = 582; continue _fun78533 }
case 576:
                r7 = r6[r10];
                _fun78533_ip = 655; continue _fun78533;
case 582:
                r26 = _closure0_slot7;
                r8 = r21[r6];
                r8 = r25.bind(r1)(r8);
                r24 = r8.Avatar;
                r8 = {'avatarStyle': null, 'source': null, 'disablePlaceholder': true};
                r8[0] = r27;
                r8[1] = r22;
                r8 = r26.bind(r1)(r24, r8);
                r24 = r10.avatar;
                r0 = 8;
                r6[r0] = r24;
                r0 = 9;
                r6[r0] = r22;
                r0 = 10;
                r6[r0] = r8;
                r7 = r8;
case 655:
                r8 = r6[r11];
                if(!(r8 === r4)) { _fun78533_ip = 669; continue _fun78533 }
case 663:
                r22 = r6[r12];
                _fun78533_ip = 724; continue _fun78533;
case 669:
                r26 = _closure0_slot7;
                r8 = r21[r13];
                r8 = r25.bind(r1)(r8);
                r24 = r8.Text;
                r8 = {'variant': 'text-md/semibold', 'color': 'mobile-text-heading-primary', 'lineClamp': 1, 'children': null};
                r8[3] = r4;
                r8 = r26.bind(r1)(r24, r8);
                r0 = 11;
                r6[r0] = r4;
                r0 = 12;
                r6[r0] = r8;
                r22 = r8;
case 724:
                r2 = r23 !== r4;
                r4 = r6[r13];
                if(!(r4 === r2)) { _fun78533_ip = 750; continue _fun78533 }
case 736:
                r4 = r6[r14];
                if(!(r4 === r23)) { _fun78533_ip = 750; continue _fun78533 }
case 744:
                r8 = r6[r15];
                _fun78533_ip = 818; continue _fun78533;
case 750:
                r4 = r2;
                if(!r4) { _fun78533_ip = 794; continue _fun78533 }
case 756:
                r27 = _closure0_slot7;
                r24 = r21[r13];
                r24 = r25.bind(r1)(r24);
                r26 = r24.Text;
                r24 = {'variant': 'text-sm/medium', 'color': 'text-default', 'lineClamp': 1, 'children': null};
                r24[3] = r23;
                r4 = r27.bind(r1)(r26, r24);
case 794:
                r0 = 13;
                r6[r0] = r2;
                r0 = 14;
                r6[r0] = r23;
                r0 = 15;
                r6[r0] = r4;
                r8 = r4;
case 818:
                r4 = r6[r16];
                if(!(r4 === r9)) { _fun78533_ip = 832; continue _fun78533 }
case 826:
                r23 = r6[r17];
                _fun78533_ip = 887; continue _fun78533;
case 832:
                r26 = _closure0_slot7;
                r4 = r21[r13];
                r4 = r25.bind(r1)(r4);
                r24 = r4.Text;
                r4 = {'variant': 'text-xs/medium', 'color': 'text-muted', 'children': null};
                r4[2] = r9;
                r4 = r26.bind(r1)(r24, r4);
                r0 = 16;
                r6[r0] = r9;
                r0 = 17;
                r6[r0] = r4;
                r23 = r4;
case 887:
                r9 = r6[r18];
                r4 = r10.details;
                if(!(r9 === r4)) { _fun78533_ip = 931; continue _fun78533 }
case 901:
                r4 = r6[r19];
                if(!(r4 === r23)) { _fun78533_ip = 931; continue _fun78533 }
case 909:
                r4 = r6[r20];
                if(!(r4 === r22)) { _fun78533_ip = 931; continue _fun78533 }
case 917:
                r4 = r6[r21];
                if(!(r4 === r8)) { _fun78533_ip = 931; continue _fun78533 }
case 925:
                r9 = r6[r22];
                _fun78533_ip = 1029; continue _fun78533;
case 931:
                r26 = _closure0_slot8;
                r24 = _closure0_slot5;
                r4 = {'style': null, 'children': null};
                r27 = r10.details;
                r4[0] = r27;
                r27 = new Array(3);
                r27[0] = r22;
                r27[1] = r8;
                r27[2] = r23;
                r4[1] = r27;
                r4 = r26.bind(r1)(r24, r4);
                r24 = r10.details;
                r0 = 18;
                r6[r0] = r24;
                r0 = 19;
                r6[r0] = r23;
                r0 = 20;
                r6[r0] = r22;
                r0 = 21;
                r6[r0] = r8;
                r0 = 22;
                r6[r0] = r4;
                r9 = r4;
case 1029:
                r4 = r6[r23];
                if(!(r4 === r20)) { _fun78533_ip = 1238; continue _fun78533 }
case 1040:
                r4 = r6[r24];
                if(!(r4 === r19)) { _fun78533_ip = 1238; continue _fun78533 }
case 1051:
                r4 = r6[r25];
                if(!(r4 === r18)) { _fun78533_ip = 1238; continue _fun78533 }
case 1062:
                r4 = r6[r26];
                if(!(r4 === r17)) { _fun78533_ip = 1238; continue _fun78533 }
case 1073:
                r4 = r6[r27];
                if(!(r4 === r16)) { _fun78533_ip = 1238; continue _fun78533 }
case 1084:
                r4 = r6[r28];
                if(!(r4 === r15)) { _fun78533_ip = 1238; continue _fun78533 }
case 1095:
                r4 = r6[r29];
                if(!(r4 === r14)) { _fun78533_ip = 1238; continue _fun78533 }
case 1106:
                r4 = r6[r30];
                if(!(r4 === r12)) { _fun78533_ip = 1238; continue _fun78533 }
case 1117:
                r8 = r6[r31];
                r4 = r11.parent_id;
                if(!(r8 === r4)) { _fun78533_ip = 1238; continue _fun78533 }
case 1131:
                r8 = r6[r32];
                r4 = r11.parent_username;
                if(!(r8 === r4)) { _fun78533_ip = 1238; continue _fun78533 }
case 1145:
                r8 = r6[r33];
                r4 = r10.acceptButton;
                if(!(r8 === r4)) { _fun78533_ip = 1238; continue _fun78533 }
case 1159:
                r8 = r6[r34];
                r4 = r10.acceptIcon;
                if(!(r8 === r4)) { _fun78533_ip = 1238; continue _fun78533 }
case 1173:
                r8 = r6[r35];
                r4 = r10.actionButton;
                if(!(r8 === r4)) { _fun78533_ip = 1238; continue _fun78533 }
case 1187:
                r8 = r6[r36];
                r4 = r10.actions;
                if(!(r8 === r4)) { _fun78533_ip = 1238; continue _fun78533 }
case 1201:
                r8 = r6[r37];
                r4 = r10.declineButton;
                if(!(r8 === r4)) { _fun78533_ip = 1238; continue _fun78533 }
case 1215:
                r8 = r6[r38];
                r4 = r10.declineIcon;
                if(!(r8 === r4)) { _fun78533_ip = 1238; continue _fun78533 }
case 1229:
                r8 = r6[r39];
                _fun78533_ip = 2094; continue _fun78533;
case 1238:
                if(r15) { _fun78533_ip = 1828; continue _fun78533 }
case 1244:
                r23 = _closure0_slot8;
                r22 = _closure0_slot5;
                r4 = {'style': null, 'children': null};
                r24 = r10.actions;
                r4[0] = r24;
                r26 = !r19;
                if(r19) { _fun78533_ip = 1526; continue _fun78533 }
case 1281:
                r28 = _closure0_slot7;
                r24 = r21[r16];
                r24 = r25.bind(r1)(r24);
                r27 = r24.PressableOpacity;
                r24 = {'accessibilityRole': 'button', 'accessibilityLabel': null, 'disabled': null, 'onPress': null, 'style': null, 'children': null};
                r30 = r21[r14];
                r30 = r25.bind(r1)(r30);
                r34 = r30.intl;
                r32 = r34.formatToPlainString;
                r33 = _closure0_slot1;
                r30 = r21[r17];
                r30 = r33.bind(r1)(r30);
                r31 = r30.jc1Ip7;
                r30 = {'name': null};
                r35 = r11.parent_username;
                r30[0] = r35;
                r30 = r32.bind(r34)(r31, r30);
                r24[1] = r30;
                r24[2] = r20;
                r30 = function() { // Original name: onPress, environment: r29
                    r2 = _closure1_slot1;
                    r1 = _closure1_slot0;
                    r1 = r1.parent_id;
                    r0 = undefined;
                    r1 = r2.bind(r0)(r1);
                    return r1;
                };
                r24[3] = r30;
                r31 = r10.actionButton;
                r30 = new Array(2);
                r30[0] = r31;
                r31 = r10.acceptButton;
                r30[1] = r31;
                r24[4] = r30;
                if(r18) { _fun78533_ip = 1481; continue _fun78533 }
case 1424:
                r30 = r21[r18];
                r30 = r25.bind(r1)(r30);
                r31 = r30.CheckmarkLargeBoldIcon;
                r30 = {'size': 'sm', 'color': null};
                r32 = r21[r5];
                r32 = r33.bind(r1)(r32);
                r32 = r32.colors;
                r32 = r32.WHITE;
                r30[1] = r32;
                r30 = r28.bind(r1)(r31, r30);
                _fun78533_ip = 1516; continue _fun78533;
case 1481:
                r32 = _closure0_slot4;
                r31 = {'size': 'small', 'color': null};
                r33 = r10.acceptIcon;
                r33 = r33.color;
                r31[1] = r33;
                r30 = r28.bind(r1)(r32, r31);
case 1516:
                r24[5] = r30;
                r26 = r28.bind(r1)(r27, r24);
case 1526:
                r24 = new Array(2);
                r24[0] = r26;
                r28 = _closure0_slot7;
                r26 = r21[r16];
                r26 = r25.bind(r1)(r26);
                r27 = r26.PressableOpacity;
                r26 = {'accessibilityRole': 'button', 'accessibilityLabel': null, 'disabled': null, 'onPress': null, 'style': null, 'children': null};
                r30 = r21[r14];
                r30 = r25.bind(r1)(r30);
                r34 = r30.intl;
                r33 = r34.formatToPlainString;
                r32 = _closure0_slot1;
                r30 = r21[r17];
                r30 = r32.bind(r1)(r30);
                r31 = r30["4GtllP"];
                r30 = {'name': null};
                r35 = r11.parent_username;
                r30[0] = r35;
                r30 = r33.bind(r34)(r31, r30);
                r26[1] = r30;
                r26[2] = r20;
                r29 = function() { // Original name: onPress, environment: r29
                    r2 = _closure1_slot2;
                    r1 = _closure1_slot0;
                    r1 = r1.parent_id;
                    r0 = undefined;
                    r1 = r2.bind(r0)(r1);
                    return r1;
                };
                r26[3] = r29;
                r30 = r10.actionButton;
                r29 = new Array(2);
                r29[0] = r30;
                r30 = r10.declineButton;
                r29[1] = r30;
                r26[4] = r29;
                if(r16) { _fun78533_ip = 1767; continue _fun78533 }
case 1677:
                r29 = r21[r6];
                r29 = r25.bind(r1)(r29);
                r30 = r29.Icon;
                r29 = {'size': null, 'color': null, 'source': null};
                r31 = r21[r6];
                r31 = r25.bind(r1)(r31);
                r31 = r31.Icon;
                r31 = r31.Sizes;
                r31 = r31.SMALL;
                r29[0] = r31;
                r31 = r10.declineIcon;
                r31 = r31.color;
                r29[1] = r31;
                r31 = r21[r19];
                r31 = r32.bind(r1)(r31);
                r29[2] = r31;
                r29 = r28.bind(r1)(r30, r29);
                _fun78533_ip = 1802; continue _fun78533;
case 1767:
                r31 = _closure0_slot4;
                r30 = {'size': 'small', 'color': null};
                r32 = r10.declineIcon;
                r32 = r32.color;
                r30[1] = r32;
                r29 = r28.bind(r1)(r31, r30);
case 1802:
                r26[5] = r29;
                r26 = r28.bind(r1)(r27, r26);
                r24[1] = r26;
                r4[1] = r24;
                r4 = r23.bind(r1)(r22, r4);
                _fun78533_ip = 1924; continue _fun78533;
case 1828:
                r23 = _closure0_slot7;
                r22 = r21[r13];
                r22 = r25.bind(r1)(r22);
                r22 = r22.Text;
                r24 = r21[r14];
                r24 = r25.bind(r1)(r24);
                r26 = r24.intl;
                r25 = r26.string;
                r24 = _closure0_slot1;
                r21 = r21[r15];
                r21 = r24.bind(r1)(r21);
                if(r17) { _fun78533_ip = 1891; continue _fun78533 }
case 1881:
                r24 = r21["2HvOvh"];
                _fun78533_ip = 1899; continue _fun78533;
case 1891:
                r24 = r21.YQP5dE;
case 1899:
                r21 = {'variant': 'text-sm/normal', 'color': 'text-muted', 'children': null};
                r24 = r25.bind(r26)(r24);
                r21[2] = r24;
                r4 = r23.bind(r1)(r22, r21);
case 1924:
                r0 = 23;
                r6[r0] = r20;
                r0 = 24;
                r6[r0] = r19;
                r0 = 25;
                r6[r0] = r18;
                r0 = 26;
                r6[r0] = r17;
                r0 = 27;
                r6[r0] = r16;
                r0 = 28;
                r6[r0] = r15;
                r0 = 29;
                r6[r0] = r14;
                r0 = 30;
                r6[r0] = r12;
                r12 = r11.parent_id;
                r0 = 31;
                r6[r0] = r12;
                r11 = r11.parent_username;
                r0 = 32;
                r6[r0] = r11;
                r11 = r10.acceptButton;
                r0 = 33;
                r6[r0] = r11;
                r11 = r10.acceptIcon;
                r0 = 34;
                r6[r0] = r11;
                r11 = r10.actionButton;
                r0 = 35;
                r6[r0] = r11;
                r11 = r10.actions;
                r0 = 36;
                r6[r0] = r11;
                r11 = r10.declineButton;
                r0 = 37;
                r6[r0] = r11;
                r11 = r10.declineIcon;
                r0 = 38;
                r6[r0] = r11;
                r0 = 39;
                r6[r0] = r4;
                r8 = r4;
case 2094:
                r11 = r6[r40];
                r4 = r10.row;
                if(!(r11 === r4)) { _fun78533_ip = 2138; continue _fun78533 }
case 2108:
                r4 = r6[r41];
                if(!(r4 === r9)) { _fun78533_ip = 2138; continue _fun78533 }
case 2116:
                r4 = r6[r42];
                if(!(r4 === r8)) { _fun78533_ip = 2138; continue _fun78533 }
case 2124:
                r4 = r6[r43];
                if(!(r4 === r7)) { _fun78533_ip = 2138; continue _fun78533 }
case 2132:
                r4 = r6[r44];
                _fun78533_ip = 2230; continue _fun78533;
case 2138:
                r12 = _closure0_slot8;
                r11 = _closure0_slot5;
                r5 = {'style': null, 'children': null};
                r5[0] = r13;
                r13 = new Array(3);
                r13[0] = r7;
                r13[1] = r9;
                r13[2] = r8;
                r5[1] = r13;
                r5 = r12.bind(r1)(r11, r5);
                r10 = r10.row;
                r0 = 40;
                r6[r0] = r10;
                r0 = 41;
                r6[r0] = r9;
                r0 = 42;
                r6[r0] = r8;
                r0 = 43;
                r6[r0] = r7;
                r0 = 44;
                r6[r0] = r5;
                r4 = r5;
case 2230:
                return r4;
            }
        };
case 1201:
        var _closure0_slot10 = r2;
        r4 = r5[r7];
        r8 = r6.bind(r1)(r4);
        r4 = r8.isReactCompilerEnabled;
        r4 = r4.bind(r8)();
        if(r4) { _fun17713_ip = 1235; continue _fun17713 }
case 1226:
        r4 = function(a0) { // Environment: r7
            _fun78536: for(var _fun78536_ip = 0; ; ) switch(_fun78536_ip) {
case 0:
                r2 = a0;
                r6 = r2.pendingRequests;
                r5 = r2.linkedUsersProcessed;
                r4 = r2.expiresAt;
                r3 = r2.onRefreshLinkCode;
                r17 = r2.onInviteAnotherGuardian;
                r12 = r2.onShare;
                r1 = undefined;
                var _closure1_slot0 = r1;
                var _closure1_slot1 = r1;
                var _closure1_slot2 = r1;
                var _closure1_slot3 = r1;
                var _closure1_slot4 = r1;
                var _closure1_slot5 = r1;
                var _closure1_slot6 = r1;
                var _closure1_slot7 = r1;
                r2 = _closure0_slot9;
                r16 = r2.bind(r1)();
                _closure1_slot0 = r16;
                r21 = _closure0_slot1;
                r14 = _closure0_slot2;
                r2 = r14[r20];
                r2 = r21.bind(r1)(r2);
                r2 = r2.bind(r1)(r4, r3);
                r15 = _closure0_slot0;
                r2 = r14[r10];
                r4 = r15.bind(r1)(r2);
                r3 = r4.usePendingRequestListController;
                r2 = {'pendingRequests': null, 'linkedUsersProcessed': null, 'onActionError': null};
                r2[0] = r6;
                r2[1] = r5;
                r5 = function() { // Original name: onActionError, environment: r8
                    r7 = _closure0_slot1;
                    r4 = _closure0_slot2;
                    r1 = r4[r21];
                    r0 = undefined;
                    r3 = r7.bind(r0)(r1);
                    r2 = r3.open;
                    r1 = {'key': 'SAFETY_FLOWS_PARENTAL_CONSENT_LINK_UPDATE_ERROR', 'content': null};
                    r6 = _closure0_slot0;
                    r5 = r4[r14];
                    r5 = r6.bind(r0)(r5);
                    r6 = r5.intl;
                    r5 = r6.string;
                    r4 = r4[r17];
                    r4 = r7.bind(r0)(r4);
                    r4 = r4.Wu8BK2;
                    r4 = r5.bind(r6)(r4);
                    r1[1] = r4;
                    r1 = r2.bind(r3)(r1);
                    return r0;
                };
                r2[2] = r5;
                r2 = r3.bind(r4)(r2);
                r13 = r2.seenRequests;
                r3 = r2.hasMaxConnections;
                _closure1_slot1 = r3;
                r3 = r2.actioningUserId;
                _closure1_slot2 = r3;
                r3 = r2.isAcceptLoading;
                _closure1_slot3 = r3;
                r3 = r2.isDeclineLoading;
                _closure1_slot4 = r3;
                r3 = r2.actionsDisabled;
                _closure1_slot5 = r3;
                r3 = r2.handleAccept;
                _closure1_slot6 = r3;
                r2 = r2.handleDecline;
                _closure1_slot7 = r2;
                r4 = _closure0_slot8;
                r2 = r14[r25];
                r2 = r15.bind(r1)(r2);
                r3 = r2.Stack;
                r2 = {'spacing': null, 'children': null};
                r5 = r14[r5];
                r5 = r21.bind(r1)(r5);
                r5 = r5.space;
                r5 = r5.PX_16;
                r2[0] = r5;
                r5 = r13.length;
                r0 = 0;
                r6 = r5 > r0;
                if(!r6) { _fun78536_ip = 364; continue _fun78536 }
case 309:
                r9 = _closure0_slot7;
                r7 = _closure0_slot5;
                r5 = {'style': null, 'children': null};
                r11 = r16.card;
                r5[0] = r11;
                r11 = r13.map;
                r10 = function(a0, a1) { // Environment: r10
                    _fun131493: for(var _fun131493_ip = 0; ; ) switch(_fun131493_ip) {
case 0:
                        r5 = _closure0_slot8;
                        r2 = _closure0_slot3;
                        r4 = r2.Fragment;
                        r0 = 0;
                        r2 = a1;
                        r7 = r2 > r0;
                        if(!r7) { _fun131493_ip = 72; continue _fun131493 }
case 32:
                        r8 = _closure0_slot7;
                        r6 = _closure0_slot5;
                        r2 = {'style': null};
                        r9 = _closure1_slot0;
                        r9 = r9.divider;
                        r2[0] = r9;
                        r1 = undefined;
                        r7 = r8.bind(r1)(r6, r2);
case 72:
                        r2 = a0;
                        r6 = new Array(2);
                        r6[0] = r7;
                        r9 = _closure0_slot7;
                        r8 = _closure0_slot10;
                        r7 = {'request': null, 'hasMaxConnections': null, 'isAcceptLoading': null, 'isDeclineLoading': null, 'actionsDisabled': null, 'onAccept': null, 'onDecline': null};
                        r7[0] = r2;
                        r3 = _closure1_slot1;
                        r7[1] = r3;
                        r3 = _closure1_slot3;
                        if(!r3) { _fun131493_ip = 134; continue _fun131493 }
case 120:
                        r12 = _closure1_slot2;
                        r11 = r2.parent_id;
                        r3 = r12 === r11;
case 134:
                        r7[2] = r3;
                        r11 = _closure1_slot4;
                        if(!r11) { _fun131493_ip = 159; continue _fun131493 }
case 145:
                        r12 = _closure1_slot2;
                        r3 = r2.parent_id;
                        r11 = r12 === r3;
case 159:
                        r3 = {'children': null};
                        r7[3] = r11;
                        r11 = _closure1_slot5;
                        r7[4] = r11;
                        r11 = _closure1_slot6;
                        r7[5] = r11;
                        r10 = _closure1_slot7;
                        r7[6] = r10;
                        r1 = undefined;
                        r7 = r9.bind(r1)(r8, r7);
                        r6[1] = r7;
                        r3[0] = r6;
                        r2 = r2.parent_id;
                        r2 = r5.bind(r1)(r4, r3, r2);
                        return r2;
                    }
                };
                r10 = r11.bind(r13)(r10);
                r5[1] = r10;
                r6 = r9.bind(r1)(r7, r5);
case 364:
                r5 = new Array(3);
                r5[0] = r6;
                r7 = _closure0_slot5;
                r6 = {'style': null, 'children': null};
                r9 = r16.dividerRow;
                r6[0] = r9;
                r13 = _closure0_slot7;
                r8 = {'style': null};
                r9 = r16.dividerLine;
                r8[0] = r9;
                r9 = r13.bind(r1)(r7, r8);
                r8 = new Array(3);
                r8[0] = r9;
                r9 = r14[r13];
                r9 = r15.bind(r1)(r9);
                r10 = r9.Text;
                r9 = {'style': null, 'variant': 'text-sm/medium', 'color': 'text-muted', 'children': null};
                r11 = r16.dividerLabel;
                r9[0] = r11;
                r11 = r14[r14];
                r11 = r15.bind(r1)(r11);
                r19 = r11.intl;
                r18 = r19.string;
                r11 = r14[r15];
                r11 = r21.bind(r1)(r11);
                r11 = r11["/SbB94"];
                r11 = r18.bind(r19)(r11);
                r9[3] = r11;
                r9 = r13.bind(r1)(r10, r9);
                r8[1] = r9;
                r9 = {'style': null};
                r10 = r16.dividerLine;
                r9[0] = r10;
                r9 = r13.bind(r1)(r7, r9);
                r8[2] = r9;
                r6[1] = r8;
                r6 = r4.bind(r1)(r7, r6);
                r5[1] = r6;
                r6 = {'style': null, 'children': null};
                r9 = r16.card;
                r8 = new Array(2);
                r8[0] = r9;
                r9 = r16.row;
                r8[1] = r9;
                r6[0] = r8;
                r8 = {'style': null, 'children': null};
                r9 = r16.inviteIconContainer;
                r8[0] = r9;
                r9 = r14[r22];
                r9 = r15.bind(r1)(r9);
                r10 = r9.PlaneIllocon;
                r9 = {'size': 32};
                r9 = r13.bind(r1)(r10, r9);
                r8[1] = r9;
                r9 = r13.bind(r1)(r7, r8);
                r8 = new Array(3);
                r8[0] = r9;
                r9 = {'style': null, 'children': null};
                r10 = r16.details;
                r9[0] = r10;
                r10 = r14[r13];
                r10 = r15.bind(r1)(r10);
                r11 = r10.Text;
                r10 = {'variant': 'text-md/semibold', 'color': 'mobile-text-heading-primary', 'children': null};
                r18 = r14[r14];
                r18 = r15.bind(r1)(r18);
                r20 = r18.intl;
                r19 = r20.string;
                r18 = r14[r15];
                r18 = r21.bind(r1)(r18);
                r18 = r18.z9gkwZ;
                r18 = r19.bind(r20)(r18);
                r10[2] = r18;
                r11 = r13.bind(r1)(r11, r10);
                r10 = new Array(2);
                r10[0] = r11;
                r11 = r14[r13];
                r11 = r15.bind(r1)(r11);
                r18 = r11.Text;
                r11 = {'variant': 'text-xs/medium', 'color': 'text-default', 'children': null};
                r19 = r14[r14];
                r19 = r15.bind(r1)(r19);
                r22 = r19.intl;
                r20 = r22.string;
                r19 = r14[r15];
                r19 = r21.bind(r1)(r19);
                r19 = r19["9t4+vC"];
                r19 = r20.bind(r22)(r19);
                r11[2] = r19;
                r11 = r13.bind(r1)(r18, r11);
                r10[1] = r11;
                r9[1] = r10;
                r9 = r4.bind(r1)(r7, r9);
                r8[1] = r9;
                r9 = {'style': null, 'children': null};
                r10 = r16.actions;
                r9[0] = r10;
                r10 = r14[r16];
                r10 = r15.bind(r1)(r10);
                r11 = r10.PressableOpacity;
                r10 = {'accessibilityRole': 'button', 'accessibilityLabel': null, 'onPress': null, 'style': null, 'children': null};
                r18 = r14[r14];
                r18 = r15.bind(r1)(r18);
                r20 = r18.intl;
                r19 = r20.string;
                r18 = r14[r14];
                r18 = r15.bind(r1)(r18);
                r18 = r18.t;
                r18 = r18.Ej3B3Y;
                r18 = r19.bind(r20)(r18);
                r10[1] = r18;
                r10[2] = r12;
                r18 = r16.actionButton;
                r12 = new Array(2);
                r12[0] = r18;
                r18 = r16.inviteShareButton;
                r12[1] = r18;
                r10[3] = r12;
                r12 = r14[r23];
                r12 = r15.bind(r1)(r12);
                r18 = r12.ShareIcon;
                r12 = {'size': 'sm', 'color': null};
                r19 = r16.declineIcon;
                r19 = r19.color;
                r12[1] = r19;
                r12 = r13.bind(r1)(r18, r12);
                r10[4] = r12;
                r11 = r13.bind(r1)(r11, r10);
                r10 = new Array(2);
                r10[0] = r11;
                r11 = r14[r16];
                r11 = r15.bind(r1)(r11);
                r12 = r11.PressableOpacity;
                r11 = {'accessibilityRole': 'button', 'accessibilityLabel': null, 'onPress': null, 'style': null, 'children': null};
                r18 = r14[r14];
                r18 = r15.bind(r1)(r18);
                r20 = r18.intl;
                r19 = r20.string;
                r18 = r14[r15];
                r18 = r21.bind(r1)(r18);
                r18 = r18.z9gkwZ;
                r18 = r19.bind(r20)(r18);
                r11[1] = r18;
                r11[2] = r17;
                r18 = r16.actionButton;
                r17 = new Array(2);
                r17[0] = r18;
                r18 = r16.inviteQrButton;
                r17[1] = r18;
                r11[3] = r17;
                r14 = r14[r24];
                r14 = r15.bind(r1)(r14);
                r15 = r14.QrCodeIcon;
                r14 = {'size': 'sm', 'color': null};
                r16 = r16.declineIcon;
                r16 = r16.color;
                r14[1] = r16;
                r14 = r13.bind(r1)(r15, r14);
                r11[4] = r14;
                r11 = r13.bind(r1)(r12, r11);
                r10[1] = r11;
                r9[1] = r10;
                r9 = r4.bind(r1)(r7, r9);
                r8[2] = r9;
                r6[1] = r8;
                r6 = r4.bind(r1)(r7, r6);
                r5[2] = r6;
                r2[1] = r5;
                r2 = r4.bind(r1)(r3, r2);
                return r2;
            }
        };
        _fun17713_ip = 1242; continue _fun17713;
case 1235:
        r4 = function(a0) { // Environment: r7
            _fun78535: for(var _fun78535_ip = 0; ; ) switch(_fun78535_ip) {
case 0:
                r2 = a0;
                r8 = _closure0_slot0;
                r10 = _closure0_slot2;
                r4 = r10[r8];
                r1 = undefined;
                r5 = r8.bind(r1)(r4);
                r4 = r5.c;
                r0 = 70;
                r4 = r4.bind(r5)(r0);
                r6 = r2.pendingRequests;
                r9 = r2.linkedUsersProcessed;
                r7 = r2.expiresAt;
                r5 = r2.onRefreshLinkCode;
                r18 = r2.onInviteAnotherGuardian;
                r21 = r2.onShare;
                r2 = _closure0_slot9;
                r16 = r2.bind(r1)();
                var _closure1_slot0 = r16;
                r11 = _closure0_slot1;
                r2 = r10[r20];
                r2 = r11.bind(r1)(r2);
                r2 = r2.bind(r1)(r7, r5);
                r7 = r4[r0];
                r2 = global;
                r12 = r2.Symbol;
                r5 = r12.for;
                r17 = 'react.memo_cache_sentinel';
                r5 = r5.bind(r12)(r17);
                if(!(r7 !== r5)) { _fun78535_ip = 146; continue _fun78535 }
case 140:
                r12 = r4[r0];
                _fun78535_ip = 162; continue _fun78535;
case 146:
                r5 = function() { // Original name: o, environment: r3
                    r7 = _closure0_slot1;
                    r4 = _closure0_slot2;
                    r1 = r4[r21];
                    r0 = undefined;
                    r3 = r7.bind(r0)(r1);
                    r2 = r3.open;
                    r1 = {'key': 'SAFETY_FLOWS_PARENTAL_CONSENT_LINK_UPDATE_ERROR', 'content': null};
                    r6 = _closure0_slot0;
                    r5 = r4[r14];
                    r5 = r6.bind(r0)(r5);
                    r6 = r5.intl;
                    r5 = r6.string;
                    r4 = r4[r17];
                    r4 = r7.bind(r0)(r4);
                    r4 = r4.Wu8BK2;
                    r4 = r5.bind(r6)(r4);
                    r1[1] = r4;
                    r1 = r2.bind(r3)(r1);
                    return r0;
                };
                r0 = 0;
                r4[r0] = r5;
                r12 = r5;
case 162:
                r5 = r4[r1];
                if(!(r5 === r9)) { _fun78535_ip = 184; continue _fun78535 }
case 170:
                r5 = r4[r2];
                if(!(r5 === r6)) { _fun78535_ip = 184; continue _fun78535 }
case 178:
                r7 = r4[r3];
                _fun78535_ip = 230; continue _fun78535;
case 184:
                r5 = {'pendingRequests': null, 'linkedUsersProcessed': null, 'onActionError': null};
                r5[0] = r6;
                r5[1] = r9;
                r5[2] = r12;
                r0 = 1;
                r4[r0] = r9;
                r0 = 2;
                r4[r0] = r6;
                r0 = 3;
                r4[r0] = r5;
                r7 = r5;
case 230:
                r5 = r10[r10];
                r6 = r8.bind(r1)(r5);
                r5 = r6.usePendingRequestListController;
                r5 = r5.bind(r6)(r7);
                r7 = r5.seenRequests;
                r13 = r5.hasMaxConnections;
                var _closure1_slot1 = r13;
                r20 = r5.actioningUserId;
                var _closure1_slot2 = r20;
                r12 = r5.isAcceptLoading;
                var _closure1_slot3 = r12;
                r9 = r5.isDeclineLoading;
                var _closure1_slot4 = r9;
                r19 = r5.actionsDisabled;
                var _closure1_slot5 = r19;
                r15 = r5.handleAccept;
                var _closure1_slot6 = r15;
                r14 = r5.handleDecline;
                var _closure1_slot7 = r14;
                r5 = r4[r4];
                if(!(r5 === r20)) { _fun78535_ip = 427; continue _fun78535 }
case 334:
                r5 = r4[r5];
                if(!(r5 === r19)) { _fun78535_ip = 427; continue _fun78535 }
case 342:
                r5 = r4[r6];
                if(!(r5 === r15)) { _fun78535_ip = 427; continue _fun78535 }
case 350:
                r5 = r4[r7];
                if(!(r5 === r14)) { _fun78535_ip = 427; continue _fun78535 }
case 358:
                r5 = r4[r8];
                if(!(r5 === r13)) { _fun78535_ip = 427; continue _fun78535 }
case 366:
                r5 = r4[r9];
                if(!(r5 === r12)) { _fun78535_ip = 427; continue _fun78535 }
case 374:
                r5 = r4[r10];
                if(!(r5 === r9)) { _fun78535_ip = 427; continue _fun78535 }
case 382:
                r5 = r4[r11];
                if(!(r5 === r7)) { _fun78535_ip = 427; continue _fun78535 }
case 390:
                r6 = r4[r12];
                r5 = r16.card;
                if(!(r6 === r5)) { _fun78535_ip = 427; continue _fun78535 }
case 404:
                r6 = r4[r13];
                r5 = r16.divider;
                if(!(r6 === r5)) { _fun78535_ip = 427; continue _fun78535 }
case 418:
                r5 = r4[r14];
                _fun78535_ip = 588; continue _fun78535;
case 427:
                r6 = r7.length;
                r0 = 0;
                r6 = r6 > r0;
                if(!r6) { _fun78535_ip = 496; continue _fun78535 }
case 441:
                r24 = _closure0_slot7;
                r23 = _closure0_slot5;
                r22 = {'style': null, 'children': null};
                r26 = r16.card;
                r22[0] = r26;
                r26 = r7.map;
                r25 = function(a0, a1) { // Environment: r25
                    _fun131491: for(var _fun131491_ip = 0; ; ) switch(_fun131491_ip) {
case 0:
                        r5 = _closure0_slot8;
                        r2 = _closure0_slot3;
                        r4 = r2.Fragment;
                        r0 = 0;
                        r2 = a1;
                        r7 = r2 > r0;
                        if(!r7) { _fun131491_ip = 72; continue _fun131491 }
case 32:
                        r8 = _closure0_slot7;
                        r6 = _closure0_slot5;
                        r2 = {'style': null};
                        r9 = _closure1_slot0;
                        r9 = r9.divider;
                        r2[0] = r9;
                        r1 = undefined;
                        r7 = r8.bind(r1)(r6, r2);
case 72:
                        r2 = a0;
                        r6 = new Array(2);
                        r6[0] = r7;
                        r9 = _closure0_slot7;
                        r8 = _closure0_slot10;
                        r7 = {'request': null, 'hasMaxConnections': null, 'isAcceptLoading': null, 'isDeclineLoading': null, 'actionsDisabled': null, 'onAccept': null, 'onDecline': null};
                        r7[0] = r2;
                        r3 = _closure1_slot1;
                        r7[1] = r3;
                        r3 = _closure1_slot3;
                        if(!r3) { _fun131491_ip = 134; continue _fun131491 }
case 120:
                        r12 = _closure1_slot2;
                        r11 = r2.parent_id;
                        r3 = r12 === r11;
case 134:
                        r7[2] = r3;
                        r11 = _closure1_slot4;
                        if(!r11) { _fun131491_ip = 159; continue _fun131491 }
case 145:
                        r12 = _closure1_slot2;
                        r3 = r2.parent_id;
                        r11 = r12 === r3;
case 159:
                        r3 = {'children': null};
                        r7[3] = r11;
                        r11 = _closure1_slot5;
                        r7[4] = r11;
                        r11 = _closure1_slot6;
                        r7[5] = r11;
                        r10 = _closure1_slot7;
                        r7[6] = r10;
                        r1 = undefined;
                        r7 = r9.bind(r1)(r8, r7);
                        r6[1] = r7;
                        r3[0] = r6;
                        r2 = r2.parent_id;
                        r2 = r5.bind(r1)(r4, r3, r2);
                        return r2;
                    }
                };
                r25 = r26.bind(r7)(r25);
                r22[1] = r25;
                r6 = r24.bind(r1)(r23, r22);
case 496:
                r0 = 4;
                r4[r0] = r20;
                r0 = 5;
                r4[r0] = r19;
                r0 = 6;
                r4[r0] = r15;
                r0 = 7;
                r4[r0] = r14;
                r0 = 8;
                r4[r0] = r13;
                r0 = 9;
                r4[r0] = r12;
                r0 = 10;
                r4[r0] = r9;
                r0 = 11;
                r4[r0] = r7;
                r7 = r16.card;
                r0 = 12;
                r4[r0] = r7;
                r7 = r16.divider;
                r0 = 13;
                r4[r0] = r7;
                r0 = 14;
                r4[r0] = r6;
                r5 = r6;
case 588:
                r19 = r16.dividerRow;
                r7 = r4[r15];
                r6 = r16.dividerLine;
                if(!(r7 === r6)) { _fun78535_ip = 614; continue _fun78535 }
case 608:
                r13 = r4[r16];
                _fun78535_ip = 671; continue _fun78535;
case 614:
                r9 = _closure0_slot7;
                r7 = _closure0_slot5;
                r6 = {'style': null};
                r12 = r16.dividerLine;
                r6[0] = r12;
                r6 = r9.bind(r1)(r7, r6);
                r7 = r16.dividerLine;
                r0 = 15;
                r4[r0] = r7;
                r0 = 16;
                r4[r0] = r6;
                r13 = r6;
case 671:
                r15 = r16.dividerLabel;
                r7 = r4[r17];
                r9 = r2.Symbol;
                r6 = r9.for;
                r6 = r6.bind(r9)(r17);
                if(!(r7 !== r6)) { _fun78535_ip = 707; continue _fun78535 }
case 701:
                r14 = r4[r17];
                _fun78535_ip = 758; continue _fun78535;
case 707:
                r6 = r10[r14];
                r6 = r8.bind(r1)(r6);
                r9 = r6.intl;
                r7 = r9.string;
                r6 = r10[r15];
                r6 = r11.bind(r1)(r6);
                r6 = r6["/SbB94"];
                r6 = r7.bind(r9)(r6);
                r0 = 17;
                r4[r0] = r6;
                r14 = r6;
case 758:
                r7 = r4[r18];
                r6 = r16.dividerLabel;
                if(!(r7 === r6)) { _fun78535_ip = 778; continue _fun78535 }
case 772:
                r12 = r4[r19];
                _fun78535_ip = 843; continue _fun78535;
case 778:
                r9 = _closure0_slot7;
                r6 = r10[r13];
                r6 = r8.bind(r1)(r6);
                r7 = r6.Text;
                r6 = {'style': null, 'variant': 'text-sm/medium', 'color': 'text-muted', 'children': null};
                r6[0] = r15;
                r6[3] = r14;
                r6 = r9.bind(r1)(r7, r6);
                r7 = r16.dividerLabel;
                r0 = 18;
                r4[r0] = r7;
                r0 = 19;
                r4[r0] = r6;
                r12 = r6;
case 843:
                r7 = r4[r20];
                r6 = r16.dividerLine;
                if(!(r7 === r6)) { _fun78535_ip = 863; continue _fun78535 }
case 857:
                r9 = r4[r21];
                _fun78535_ip = 920; continue _fun78535;
case 863:
                r14 = _closure0_slot7;
                r7 = _closure0_slot5;
                r6 = {'style': null};
                r15 = r16.dividerLine;
                r6[0] = r15;
                r6 = r14.bind(r1)(r7, r6);
                r7 = r16.dividerLine;
                r0 = 20;
                r4[r0] = r7;
                r0 = 21;
                r4[r0] = r6;
                r9 = r6;
case 920:
                r7 = r4[r22];
                r6 = r16.dividerRow;
                if(!(r7 === r6)) { _fun78535_ip = 964; continue _fun78535 }
case 934:
                r6 = r4[r23];
                if(!(r6 === r13)) { _fun78535_ip = 964; continue _fun78535 }
case 942:
                r6 = r4[r24];
                if(!(r6 === r12)) { _fun78535_ip = 964; continue _fun78535 }
case 950:
                r6 = r4[r25];
                if(!(r6 === r9)) { _fun78535_ip = 964; continue _fun78535 }
case 958:
                r7 = r4[r26];
                _fun78535_ip = 1056; continue _fun78535;
case 964:
                r15 = _closure0_slot8;
                r14 = _closure0_slot5;
                r6 = {'style': null, 'children': null};
                r6[0] = r19;
                r19 = new Array(3);
                r19[0] = r13;
                r19[1] = r12;
                r19[2] = r9;
                r6[1] = r19;
                r6 = r15.bind(r1)(r14, r6);
                r14 = r16.dividerRow;
                r0 = 22;
                r4[r0] = r14;
                r0 = 23;
                r4[r0] = r13;
                r0 = 24;
                r4[r0] = r12;
                r0 = 25;
                r4[r0] = r9;
                r0 = 26;
                r4[r0] = r6;
                r7 = r6;
case 1056:
                r9 = r4[r27];
                r6 = r16.card;
                if(!(r9 === r6)) { _fun78535_ip = 1090; continue _fun78535 }
case 1070:
                r9 = r4[r28];
                r6 = r16.row;
                if(!(r9 === r6)) { _fun78535_ip = 1090; continue _fun78535 }
case 1084:
                r14 = r4[r29];
                _fun78535_ip = 1150; continue _fun78535;
case 1090:
                r9 = r16.card;
                r6 = new Array(2);
                r6[0] = r9;
                r9 = r16.row;
                r6[1] = r9;
                r9 = r16.card;
                r0 = 27;
                r4[r0] = r9;
                r9 = r16.row;
                r0 = 28;
                r4[r0] = r9;
                r0 = 29;
                r4[r0] = r6;
                r14 = r6;
case 1150:
                r9 = r4[r30];
                r12 = r2.Symbol;
                r6 = r12.for;
                r6 = r6.bind(r12)(r17);
                if(!(r9 !== r6)) { _fun78535_ip = 1180; continue _fun78535 }
case 1174:
                r15 = r4[r30];
                _fun78535_ip = 1221; continue _fun78535;
case 1180:
                r12 = _closure0_slot7;
                r6 = r10[r22];
                r6 = r8.bind(r1)(r6);
                r9 = r6.PlaneIllocon;
                r6 = {'size': 32};
                r6 = r12.bind(r1)(r9, r6);
                r0 = 30;
                r4[r0] = r6;
                r15 = r6;
case 1221:
                r9 = r4[r31];
                r6 = r16.inviteIconContainer;
                if(!(r9 === r6)) { _fun78535_ip = 1241; continue _fun78535 }
case 1235:
                r13 = r4[r32];
                _fun78535_ip = 1302; continue _fun78535;
case 1241:
                r12 = _closure0_slot7;
                r9 = _closure0_slot5;
                r6 = {'style': null, 'children': null};
                r19 = r16.inviteIconContainer;
                r6[0] = r19;
                r6[1] = r15;
                r6 = r12.bind(r1)(r9, r6);
                r9 = r16.inviteIconContainer;
                r0 = 31;
                r4[r0] = r9;
                r0 = 32;
                r4[r0] = r6;
                r13 = r6;
case 1302:
                r9 = r4[r33];
                r12 = r2.Symbol;
                r6 = r12.for;
                r6 = r6.bind(r12)(r17);
                if(!(r9 !== r6)) { _fun78535_ip = 1332; continue _fun78535 }
case 1326:
                r22 = r4[r33];
                _fun78535_ip = 1419; continue _fun78535;
case 1332:
                r12 = _closure0_slot7;
                r6 = r10[r13];
                r6 = r8.bind(r1)(r6);
                r9 = r6.Text;
                r6 = {'variant': 'text-md/semibold', 'color': 'mobile-text-heading-primary', 'children': null};
                r15 = r10[r14];
                r15 = r8.bind(r1)(r15);
                r20 = r15.intl;
                r19 = r20.string;
                r15 = r10[r15];
                r15 = r11.bind(r1)(r15);
                r15 = r15.z9gkwZ;
                r15 = r19.bind(r20)(r15);
                r6[2] = r15;
                r6 = r12.bind(r1)(r9, r6);
                r0 = 33;
                r4[r0] = r6;
                r22 = r6;
case 1419:
                r9 = r4[r34];
                r12 = r2.Symbol;
                r6 = r12.for;
                r6 = r6.bind(r12)(r17);
                if(!(r9 !== r6)) { _fun78535_ip = 1449; continue _fun78535 }
case 1443:
                r20 = r4[r34];
                _fun78535_ip = 1538; continue _fun78535;
case 1449:
                r12 = _closure0_slot7;
                r6 = r10[r13];
                r6 = r8.bind(r1)(r6);
                r9 = r6.Text;
                r6 = {'variant': 'text-xs/medium', 'color': 'text-default', 'children': null};
                r15 = r10[r14];
                r15 = r8.bind(r1)(r15);
                r23 = r15.intl;
                r19 = r23.string;
                r15 = r10[r15];
                r15 = r11.bind(r1)(r15);
                r15 = r15["9t4+vC"];
                r15 = r19.bind(r23)(r15);
                r6[2] = r15;
                r6 = r12.bind(r1)(r9, r6);
                r0 = 34;
                r4[r0] = r6;
                r20 = r6;
case 1538:
                r9 = r4[r35];
                r6 = r16.details;
                if(!(r9 === r6)) { _fun78535_ip = 1558; continue _fun78535 }
case 1552:
                r12 = r4[r36];
                _fun78535_ip = 1631; continue _fun78535;
case 1558:
                r15 = _closure0_slot8;
                r9 = _closure0_slot5;
                r6 = {'style': null, 'children': null};
                r19 = r16.details;
                r6[0] = r19;
                r19 = new Array(2);
                r19[0] = r22;
                r19[1] = r20;
                r6[1] = r19;
                r6 = r15.bind(r1)(r9, r6);
                r9 = r16.details;
                r0 = 35;
                r4[r0] = r9;
                r0 = 36;
                r4[r0] = r6;
                r12 = r6;
case 1631:
                r19 = r16.actions;
                r9 = r4[r37];
                r15 = r2.Symbol;
                r6 = r15.for;
                r6 = r6.bind(r15)(r17);
                if(!(r9 !== r6)) { _fun78535_ip = 1667; continue _fun78535 }
case 1661:
                r24 = r4[r37];
                _fun78535_ip = 1721; continue _fun78535;
case 1667:
                r6 = r10[r14];
                r6 = r8.bind(r1)(r6);
                r15 = r6.intl;
                r9 = r15.string;
                r6 = r10[r14];
                r6 = r8.bind(r1)(r6);
                r6 = r6.t;
                r6 = r6.Ej3B3Y;
                r6 = r9.bind(r15)(r6);
                r0 = 37;
                r4[r0] = r6;
                r24 = r6;
case 1721:
                r9 = r4[r38];
                r6 = r16.actionButton;
                if(!(r9 === r6)) { _fun78535_ip = 1755; continue _fun78535 }
case 1735:
                r9 = r4[r39];
                r6 = r16.inviteShareButton;
                if(!(r9 === r6)) { _fun78535_ip = 1755; continue _fun78535 }
case 1749:
                r20 = r4[r40];
                _fun78535_ip = 1815; continue _fun78535;
case 1755:
                r9 = r16.actionButton;
                r6 = new Array(2);
                r6[0] = r9;
                r9 = r16.inviteShareButton;
                r6[1] = r9;
                r9 = r16.actionButton;
                r0 = 38;
                r4[r0] = r9;
                r9 = r16.inviteShareButton;
                r0 = 39;
                r4[r0] = r9;
                r0 = 40;
                r4[r0] = r6;
                r20 = r6;
case 1815:
                r9 = r4[r41];
                r6 = r16.declineIcon;
                r6 = r6.color;
                if(!(r9 === r6)) { _fun78535_ip = 1840; continue _fun78535 }
case 1834:
                r9 = r4[r42];
                _fun78535_ip = 1918; continue _fun78535;
case 1840:
                r22 = _closure0_slot7;
                r6 = r10[r23];
                r6 = r8.bind(r1)(r6);
                r15 = r6.ShareIcon;
                r6 = {'size': 'sm', 'color': null};
                r23 = r16.declineIcon;
                r23 = r23.color;
                r6[1] = r23;
                r6 = r22.bind(r1)(r15, r6);
                r15 = r16.declineIcon;
                r15 = r15.color;
                r0 = 41;
                r4[r0] = r15;
                r0 = 42;
                r4[r0] = r6;
                r9 = r6;
case 1918:
                r6 = r4[r43];
                if(!(r6 === r21)) { _fun78535_ip = 1948; continue _fun78535 }
case 1926:
                r6 = r4[r44];
                if(!(r6 === r20)) { _fun78535_ip = 1948; continue _fun78535 }
case 1934:
                r6 = r4[r45];
                if(!(r6 === r9)) { _fun78535_ip = 1948; continue _fun78535 }
case 1942:
                r15 = r4[r46];
                _fun78535_ip = 2030; continue _fun78535;
case 1948:
                r23 = _closure0_slot7;
                r6 = r10[r16];
                r6 = r8.bind(r1)(r6);
                r22 = r6.PressableOpacity;
                r6 = {'accessibilityRole': 'button', 'accessibilityLabel': null, 'onPress': null, 'style': null, 'children': null};
                r6[1] = r24;
                r6[2] = r21;
                r6[3] = r20;
                r6[4] = r9;
                r6 = r23.bind(r1)(r22, r6);
                r0 = 43;
                r4[r0] = r21;
                r0 = 44;
                r4[r0] = r20;
                r0 = 45;
                r4[r0] = r9;
                r0 = 46;
                r4[r0] = r6;
                r15 = r6;
case 2030:
                r6 = r4[r47];
                r9 = r2.Symbol;
                r2 = r9.for;
                r2 = r2.bind(r9)(r17);
                if(!(r6 !== r2)) { _fun78535_ip = 2060; continue _fun78535 }
case 2054:
                r22 = r4[r47];
                _fun78535_ip = 2109; continue _fun78535;
case 2060:
                r2 = r10[r14];
                r2 = r8.bind(r1)(r2);
                r9 = r2.intl;
                r6 = r9.string;
                r2 = r10[r15];
                r2 = r11.bind(r1)(r2);
                r2 = r2.z9gkwZ;
                r2 = r6.bind(r9)(r2);
                r0 = 47;
                r4[r0] = r2;
                r22 = r2;
case 2109:
                r6 = r4[r48];
                r2 = r16.actionButton;
                if(!(r6 === r2)) { _fun78535_ip = 2143; continue _fun78535 }
case 2123:
                r6 = r4[r49];
                r2 = r16.inviteQrButton;
                if(!(r6 === r2)) { _fun78535_ip = 2143; continue _fun78535 }
case 2137:
                r17 = r4[r50];
                _fun78535_ip = 2203; continue _fun78535;
case 2143:
                r6 = r16.actionButton;
                r2 = new Array(2);
                r2[0] = r6;
                r6 = r16.inviteQrButton;
                r2[1] = r6;
                r6 = r16.actionButton;
                r0 = 48;
                r4[r0] = r6;
                r6 = r16.inviteQrButton;
                r0 = 49;
                r4[r0] = r6;
                r0 = 50;
                r4[r0] = r2;
                r17 = r2;
case 2203:
                r6 = r4[r51];
                r2 = r16.declineIcon;
                r2 = r2.color;
                if(!(r6 === r2)) { _fun78535_ip = 2228; continue _fun78535 }
case 2222:
                r9 = r4[r52];
                _fun78535_ip = 2306; continue _fun78535;
case 2228:
                r20 = _closure0_slot7;
                r2 = r10[r24];
                r2 = r8.bind(r1)(r2);
                r6 = r2.QrCodeIcon;
                r2 = {'size': 'sm', 'color': null};
                r21 = r16.declineIcon;
                r21 = r21.color;
                r2[1] = r21;
                r2 = r20.bind(r1)(r6, r2);
                r6 = r16.declineIcon;
                r6 = r6.color;
                r0 = 51;
                r4[r0] = r6;
                r0 = 52;
                r4[r0] = r2;
                r9 = r2;
case 2306:
                r2 = r4[r53];
                if(!(r2 === r18)) { _fun78535_ip = 2336; continue _fun78535 }
case 2314:
                r2 = r4[r54];
                if(!(r2 === r17)) { _fun78535_ip = 2336; continue _fun78535 }
case 2322:
                r2 = r4[r55];
                if(!(r2 === r9)) { _fun78535_ip = 2336; continue _fun78535 }
case 2330:
                r6 = r4[r56];
                _fun78535_ip = 2418; continue _fun78535;
case 2336:
                r21 = _closure0_slot7;
                r2 = r10[r16];
                r2 = r8.bind(r1)(r2);
                r20 = r2.PressableOpacity;
                r2 = {'accessibilityRole': 'button', 'accessibilityLabel': null, 'onPress': null, 'style': null, 'children': null};
                r2[1] = r22;
                r2[2] = r18;
                r2[3] = r17;
                r2[4] = r9;
                r2 = r21.bind(r1)(r20, r2);
                r0 = 53;
                r4[r0] = r18;
                r0 = 54;
                r4[r0] = r17;
                r0 = 55;
                r4[r0] = r9;
                r0 = 56;
                r4[r0] = r2;
                r6 = r2;
case 2418:
                r9 = r4[r57];
                r2 = r16.actions;
                if(!(r9 === r2)) { _fun78535_ip = 2454; continue _fun78535 }
case 2432:
                r2 = r4[r58];
                if(!(r2 === r15)) { _fun78535_ip = 2454; continue _fun78535 }
case 2440:
                r2 = r4[r59];
                if(!(r2 === r6)) { _fun78535_ip = 2454; continue _fun78535 }
case 2448:
                r9 = r4[r60];
                _fun78535_ip = 2535; continue _fun78535;
case 2454:
                r18 = _closure0_slot8;
                r17 = _closure0_slot5;
                r2 = {'style': null, 'children': null};
                r2[0] = r19;
                r19 = new Array(2);
                r19[0] = r15;
                r19[1] = r6;
                r2[1] = r19;
                r2 = r18.bind(r1)(r17, r2);
                r16 = r16.actions;
                r0 = 57;
                r4[r0] = r16;
                r0 = 58;
                r4[r0] = r15;
                r0 = 59;
                r4[r0] = r6;
                r0 = 60;
                r4[r0] = r2;
                r9 = r2;
case 2535:
                r2 = r4[r61];
                if(!(r2 === r14)) { _fun78535_ip = 2573; continue _fun78535 }
case 2543:
                r2 = r4[r62];
                if(!(r2 === r13)) { _fun78535_ip = 2573; continue _fun78535 }
case 2551:
                r2 = r4[r63];
                if(!(r2 === r12)) { _fun78535_ip = 2573; continue _fun78535 }
case 2559:
                r2 = r4[r64];
                if(!(r2 === r9)) { _fun78535_ip = 2573; continue _fun78535 }
case 2567:
                r6 = r4[r65];
                _fun78535_ip = 2659; continue _fun78535;
case 2573:
                r16 = _closure0_slot8;
                r15 = _closure0_slot5;
                r2 = {'style': null, 'children': null};
                r2[0] = r14;
                r17 = new Array(3);
                r17[0] = r13;
                r17[1] = r12;
                r17[2] = r9;
                r2[1] = r17;
                r2 = r16.bind(r1)(r15, r2);
                r0 = 61;
                r4[r0] = r14;
                r0 = 62;
                r4[r0] = r13;
                r0 = 63;
                r4[r0] = r12;
                r0 = 64;
                r4[r0] = r9;
                r0 = 65;
                r4[r0] = r2;
                r6 = r2;
case 2659:
                r2 = r4[r66];
                if(!(r2 === r7)) { _fun78535_ip = 2689; continue _fun78535 }
case 2667:
                r2 = r4[r67];
                if(!(r2 === r6)) { _fun78535_ip = 2689; continue _fun78535 }
case 2675:
                r2 = r4[r68];
                if(!(r2 === r5)) { _fun78535_ip = 2689; continue _fun78535 }
case 2683:
                r2 = r4[r69];
                _fun78535_ip = 2798; continue _fun78535;
case 2689:
                r9 = _closure0_slot8;
                r3 = r10[r25];
                r3 = r8.bind(r1)(r3);
                r8 = r3.Stack;
                r3 = {'spacing': null, 'children': null};
                r10 = r10[r5];
                r10 = r11.bind(r1)(r10);
                r10 = r10.space;
                r10 = r10.PX_16;
                r3[0] = r10;
                r10 = new Array(3);
                r10[0] = r5;
                r10[1] = r7;
                r10[2] = r6;
                r3[1] = r10;
                r3 = r9.bind(r1)(r8, r3);
                r0 = 66;
                r4[r0] = r7;
                r0 = 67;
                r4[r0] = r6;
                r0 = 68;
                r4[r0] = r5;
                r0 = 69;
                r4[r0] = r3;
                r2 = r3;
case 2798:
                return r2;
            }
        };
case 1242:
        r5 = r5[r26];
        r7 = r6.bind(r1)(r5);
        r6 = r7.fileFinishedImporting;
        r5 = 'modules/safety_flows/native/tasks/PendingRequestList.tsx';
        r5 = r6.bind(r7)(r5);
        r3['default'] = r4;
        r3['PendingRequestRow'] = r2;
        return r1;
    }
}

// ===== top-level #17753  fn#17714  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    r4 = a1;
    var _closure0_slot0 = r4;
    r2 = a2;
    var _closure0_slot1 = r2;
    r2 = a5;
    r3 = a6;
    var _closure0_slot2 = r3;
    r5 = global;
    r8 = r5.Object;
    r7 = r8.defineProperty;
    r6 = '__esModule';
    r5 = {'value': true};
    r5 = r7.bind(r8)(r2, r6, r5);
    r5 = function() { // Original name: SENT_TIMESTAMP_FORMATTER, environment: r1
        r1 = {'seconds': null, 'minutes': null, 'hours': null, 'yesterday': null, 'days': null, 'date': null};
        r5 = _closure0_slot0;
        r2 = _closure0_slot2;
        r4 = r2[r0];
        r0 = undefined;
        r4 = r5.bind(r0)(r4);
        r7 = r4.intl;
        r6 = r7.string;
        r3 = _closure0_slot1;
        r4 = r2[r1];
        r4 = r3.bind(r0)(r4);
        r4 = r4.M4NOO3;
        r4 = r6.bind(r7)(r4);
        r1[0] = r4;
        r4 = r2[r1];
        r4 = r3.bind(r0)(r4);
        r4 = r4["9nem85"];
        r1[1] = r4;
        r4 = r2[r1];
        r4 = r3.bind(r0)(r4);
        r4 = r4.sJjWRY;
        r1[2] = r4;
        r4 = r2[r0];
        r4 = r5.bind(r0)(r4);
        r6 = r4.intl;
        r5 = r6.string;
        r4 = r2[r1];
        r4 = r3.bind(r0)(r4);
        r4 = r4["7SxW32"];
        r4 = r5.bind(r6)(r4);
        r1[3] = r4;
        r4 = r2[r1];
        r4 = r3.bind(r0)(r4);
        r4 = r4.tVHevX;
        r1[4] = r4;
        r2 = r2[r1];
        r2 = r3.bind(r0)(r2);
        r2 = r2.q6jzya;
        r1[5] = r2;
        return r1;
    };
    var _closure0_slot3 = r5;
    r3 = r3[r3];
    r0 = undefined;
    r5 = r4.bind(r0)(r3);
    r4 = r5.fileFinishedImporting;
    r3 = 'modules/safety_flows/pendingRequestTimestamp.tsx';
    r3 = r4.bind(r5)(r3);
    r1 = function(a0) { // Original name: formatPendingRequestSentText, environment: r1
        r3 = _closure0_slot0;
        r2 = _closure0_slot2;
        r2 = r2[r2];
        r0 = undefined;
        r4 = r3.bind(r0)(r2);
        r3 = r4.formatLinkTimestamp;
        r2 = global;
        r6 = r2.Date;
        r5 = r6.parse;
        r2 = a0;
        r2 = r5.bind(r6)(r2);
        r1 = _closure0_slot3;
        r1 = r3.bind(r4)(r2, r1);
        return r1;
    };
    r2['formatPendingRequestSentText'] = r1;
    return r0;
}

// ===== top-level #17754  fn#17715  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    _fun17715: for(var _fun17715_ip = 0; ; ) switch(_fun17715_ip) {
case 0:
        r4 = a1;
        var _closure0_slot0 = r4;
        r1 = a2;
        var _closure0_slot1 = r1;
        r2 = a5;
        r3 = a6;
        var _closure0_slot2 = r3;
        r1 = global;
        r8 = r1.Object;
        r7 = r8.defineProperty;
        r6 = '__esModule';
        r1 = {'value': true};
        r1 = r7.bind(r8)(r2, r6, r1);
        r1 = r3[r0];
        r0 = undefined;
        r1 = r4.bind(r0)(r1);
        r1 = r1.jsx;
        var _closure0_slot3 = r1;
        r1 = r3[r1];
        r6 = r4.bind(r0)(r1);
        r1 = r6.isReactCompilerEnabled;
        r1 = r1.bind(r6)();
        if(r1) { _fun17715_ip = 111; continue _fun17715 }
case 102:
        r1 = function(a0) { // Environment: r5
            _fun78540: for(var _fun78540_ip = 0; ; ) switch(_fun78540_ip) {
case 0:
                r2 = a0;
                r7 = r2.accessible;
                r6 = r2.accessibilityLabel;
                r5 = r2.resizeMode;
                r8 = r2.size;
                r1 = undefined;
                if(!(r8 === r1)) { _fun78540_ip = 34; continue _fun78540 }
case 31:
                r8 = 64;
case 34:
                r4 = _closure0_slot3;
                r11 = _closure0_slot1;
                r10 = _closure0_slot2;
                r2 = r10[r4];
                r3 = r11.bind(r1)(r2);
                r2 = {'fadeDuration': 0, 'source': null, 'style': null, 'accessible': null, 'accessibilityLabel': null, 'resizeMode': null};
                r9 = {'uri': null};
                r10 = r10[r3];
                r10 = r11.bind(r1)(r10);
                r9[0] = r10;
                r2[1] = r9;
                r9 = {'width': null, 'height': null};
                r9[0] = r8;
                r9[1] = r8;
                r8 = new Array(1);
                r8[0] = r9;
                r2[2] = r8;
                r2[3] = r7;
                r2[4] = r6;
                r2[5] = r5;
                r2 = r4.bind(r1)(r3, r2);
                return r2;
            }
        };
        _fun17715_ip = 118; continue _fun17715;
case 111:
        r1 = function(a0) { // Environment: r5
            _fun78539: for(var _fun78539_ip = 0; ; ) switch(_fun78539_ip) {
case 0:
                r2 = a0;
                r5 = _closure0_slot0;
                r3 = _closure0_slot2;
                r4 = r3[r2];
                r1 = undefined;
                r5 = r5.bind(r1)(r4);
                r4 = r5.c;
                r0 = 8;
                r4 = r4.bind(r5)(r0);
                r7 = r2.accessible;
                r8 = r2.accessibilityLabel;
                r6 = r2.resizeMode;
                r2 = r2.size;
                r10 = 64;
                if(!(r1 !== r2)) { _fun78539_ip = 70; continue _fun78539 }
case 67:
                r10 = r2;
case 70:
                r5 = r4[r0];
                r2 = global;
                r12 = r2.Symbol;
                r11 = r12.for;
                r2 = 'react.memo_cache_sentinel';
                r2 = r11.bind(r12)(r2);
                if(!(r5 !== r2)) { _fun78539_ip = 108; continue _fun78539 }
case 102:
                r11 = r4[r0];
                _fun78539_ip = 144; continue _fun78539;
case 108:
                r2 = {'uri': null};
                r12 = _closure0_slot1;
                r5 = r3[r3];
                r5 = r12.bind(r1)(r5);
                r2[0] = r5;
                r0 = 0;
                r4[r0] = r2;
                r11 = r2;
case 144:
                r2 = r4[r1];
                if(!(r2 === r10)) { _fun78539_ip = 158; continue _fun78539 }
case 152:
                r5 = r4[r2];
                _fun78539_ip = 201; continue _fun78539;
case 158:
                r12 = {'width': null, 'height': null};
                r12[0] = r10;
                r12[1] = r10;
                r2 = new Array(1);
                r2[0] = r12;
                r0 = 1;
                r4[r0] = r10;
                r0 = 2;
                r4[r0] = r2;
                r5 = r2;
case 201:
                r2 = r4[r3];
                if(!(r2 === r8)) { _fun78539_ip = 239; continue _fun78539 }
case 209:
                r2 = r4[r4];
                if(!(r2 === r7)) { _fun78539_ip = 239; continue _fun78539 }
case 217:
                r2 = r4[r5];
                if(!(r2 === r6)) { _fun78539_ip = 239; continue _fun78539 }
case 225:
                r2 = r4[r6];
                if(!(r2 === r5)) { _fun78539_ip = 239; continue _fun78539 }
case 233:
                r2 = r4[r7];
                _fun78539_ip = 330; continue _fun78539;
case 239:
                r10 = _closure0_slot3;
                r9 = _closure0_slot1;
                r3 = r3[r4];
                r9 = r9.bind(r1)(r3);
                r3 = {'fadeDuration': 0, 'source': null, 'style': null, 'accessible': null, 'accessibilityLabel': null, 'resizeMode': null};
                r3[1] = r11;
                r3[2] = r5;
                r3[3] = r7;
                r3[4] = r8;
                r3[5] = r6;
                r3 = r10.bind(r1)(r9, r3);
                r0 = 3;
                r4[r0] = r8;
                r0 = 4;
                r4[r0] = r7;
                r0 = 5;
                r4[r0] = r6;
                r0 = 6;
                r4[r0] = r5;
                r0 = 7;
                r4[r0] = r3;
                r2 = r3;
case 330:
                return r2;
            }
        };
case 118:
        r3 = r3[r5];
        r5 = r4.bind(r0)(r3);
        r4 = r5.fileFinishedImporting;
        r3 = 'design/components/mana-assets/native/generated/PlaneIllocon.native.tsx';
        r3 = r4.bind(r5)(r3);
        r2['PlaneIllocon'] = r1;
        return r0;
    }
}

// ===== top-level #17755  fn#17716  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    _fun17716: for(var _fun17716_ip = 0; ; ) switch(_fun17716_ip) {
case 0:
        r4 = a1;
        var _closure0_slot0 = r4;
        r10 = a2;
        var _closure0_slot1 = r10;
        r2 = a5;
        r3 = a6;
        var _closure0_slot2 = r3;
        r1 = global;
        r8 = r1.Object;
        r7 = r8.defineProperty;
        r6 = '__esModule';
        r1 = {'value': true};
        r1 = r7.bind(r8)(r2, r6, r1);
        r6 = r3[r0];
        r0 = undefined;
        r1 = a3;
        r1 = r1.bind(r0)(r6);
        var _closure0_slot3 = r1;
        r1 = r3[r1];
        r1 = r4.bind(r0)(r1);
        r1 = r1.View;
        var _closure0_slot4 = r1;
        r1 = r3[r2];
        r1 = r4.bind(r0)(r1);
        r6 = r1.jsx;
        var _closure0_slot5 = r6;
        r1 = r1.jsxs;
        var _closure0_slot6 = r1;
        r1 = 'https://support.discord.com/hc/en-us/articles/42855178312087';
        var _closure0_slot7 = r1;
        r1 = r3[r3];
        r7 = r4.bind(r0)(r1);
        r6 = r7.createStyles;
        r1 = {'content': null, 'upperHalf': null, 'lowerHalf': null, 'text': null, 'body': null};
        r8 = {'flexGrow': 1, 'width': '100%'};
        r1[0] = r8;
        r8 = {'flex': 1, 'justifyContent': 'flex-end', 'alignItems': 'center'};
        r1[1] = r8;
        r8 = {'flex': 1};
        r1[2] = r8;
        r8 = {'textAlign': 'center'};
        r1[3] = r8;
        r8 = {'paddingHorizontal': null};
        r9 = r3[r4];
        r9 = r10.bind(r0)(r9);
        r9 = r9.space;
        r9 = r9.PX_16;
        r8[0] = r9;
        r1[4] = r8;
        r1 = r6.bind(r7)(r1);
        var _closure0_slot8 = r1;
        r1 = r3[r5];
        r6 = r4.bind(r0)(r1);
        r1 = r6.isReactCompilerEnabled;
        r1 = r1.bind(r6)();
        if(r1) { _fun17716_ip = 290; continue _fun17716 }
case 281:
        r1 = function() { // Environment: r5
            r1 = _closure0_slot8;
            r0 = undefined;
            r12 = r1.bind(r0)();
            r4 = _closure0_slot3;
            r3 = r4.useCallback;
            r2 = new Array(0);
            r1 = function() { // Environment: r15
                r3 = _closure0_slot1;
                r2 = _closure0_slot2;
                r2 = r2[r7];
                r0 = undefined;
                r3 = r3.bind(r0)(r2);
                r2 = r3.openURL;
                r1 = _closure0_slot7;
                r1 = r2.bind(r3)(r1);
                return r0;
            };
            r11 = r3.bind(r4)(r1, r2);
            r3 = _closure0_slot6;
            r13 = _closure0_slot0;
            r14 = _closure0_slot2;
            r1 = r14[r17];
            r1 = r13.bind(r0)(r1);
            r2 = r1.ModalScreen;
            r1 = {'children': null};
            r10 = _closure0_slot5;
            r4 = r14[r12];
            r4 = r13.bind(r0)(r4);
            r5 = r4.ModalContent;
            r4 = {'children': null};
            r7 = _closure0_slot4;
            r6 = {'style': null, 'children': null};
            r8 = r12.content;
            r6[0] = r8;
            r8 = {'style': null, 'children': null};
            r9 = r12.upperHalf;
            r8[0] = r9;
            r9 = r14[r11];
            r9 = r13.bind(r0)(r9);
            r16 = r9.Stack;
            r9 = {'align': 'center', 'spacing': null, 'children': null};
            r15 = _closure0_slot1;
            r17 = r14[r4];
            r17 = r15.bind(r0)(r17);
            r17 = r17.space;
            r17 = r17.PX_16;
            r9[1] = r17;
            r17 = r14[r10];
            r17 = r13.bind(r0)(r17);
            r18 = r17.Text;
            r17 = {'accessibilityRole': 'header', 'variant': 'heading-xl/bold', 'color': 'mobile-text-heading-primary', 'style': null, 'children': null};
            r19 = r12.text;
            r17[3] = r19;
            r19 = r14[r8];
            r19 = r13.bind(r0)(r19);
            r21 = r19.intl;
            r20 = r21.string;
            r19 = r14[r9];
            r19 = r15.bind(r0)(r19);
            r19 = r19.Z87TFb;
            r19 = r20.bind(r21)(r19);
            r17[4] = r19;
            r18 = r10.bind(r0)(r18, r17);
            r17 = new Array(2);
            r17[0] = r18;
            r18 = r14[r11];
            r18 = r13.bind(r0)(r18);
            r19 = r18.Stack;
            r18 = {'align': 'center', 'spacing': null, 'style': null, 'children': null};
            r20 = r14[r4];
            r20 = r15.bind(r0)(r20);
            r20 = r20.space;
            r20 = r20.PX_16;
            r18[1] = r20;
            r20 = r12.body;
            r18[2] = r20;
            r20 = r14[r10];
            r20 = r13.bind(r0)(r20);
            r21 = r20.Text;
            r20 = {'variant': 'text-md/medium', 'color': 'text-subtle', 'style': null, 'children': null};
            r22 = r12.text;
            r20[2] = r22;
            r22 = r14[r8];
            r22 = r13.bind(r0)(r22);
            r24 = r22.intl;
            r23 = r24.string;
            r22 = r14[r9];
            r22 = r15.bind(r0)(r22);
            r22 = r22.VS98dM;
            r22 = r23.bind(r24)(r22);
            r20[3] = r22;
            r21 = r10.bind(r0)(r21, r20);
            r20 = new Array(2);
            r20[0] = r21;
            r21 = r14[r10];
            r21 = r13.bind(r0)(r21);
            r22 = r21.Text;
            r21 = {'variant': 'text-md/medium', 'color': 'text-subtle', 'style': null, 'children': null};
            r23 = r12.text;
            r21[2] = r23;
            r23 = r14[r8];
            r23 = r13.bind(r0)(r23);
            r25 = r23.intl;
            r24 = r25.string;
            r23 = r14[r9];
            r23 = r15.bind(r0)(r23);
            r23 = r23.BaI6L4;
            r23 = r24.bind(r25)(r23);
            r21[3] = r23;
            r21 = r10.bind(r0)(r22, r21);
            r20[1] = r21;
            r18[3] = r20;
            r18 = r3.bind(r0)(r19, r18);
            r17[1] = r18;
            r9[2] = r17;
            r9 = r3.bind(r0)(r16, r9);
            r8[1] = r9;
            r9 = r10.bind(r0)(r7, r8);
            r8 = new Array(2);
            r8[0] = r9;
            r9 = {'style': null};
            r12 = r12.lowerHalf;
            r9[0] = r12;
            r9 = r10.bind(r0)(r7, r9);
            r8[1] = r9;
            r6[1] = r8;
            r6 = r3.bind(r0)(r7, r6);
            r4[0] = r6;
            r5 = r10.bind(r0)(r5, r4);
            r4 = new Array(2);
            r4[0] = r5;
            r5 = r14[r14];
            r5 = r13.bind(r0)(r5);
            r6 = r5.ModalFooter;
            r5 = {'children': null};
            r7 = r14[r13];
            r8 = r15.bind(r0)(r7);
            r7 = {};
            r8 = r10.bind(r0)(r8, r7);
            r7 = new Array(2);
            r7[0] = r8;
            r8 = r14[r15];
            r8 = r13.bind(r0)(r8);
            r9 = r8.ModalActionButton;
            r8 = {'variant': 'primary', 'text': null, 'icon': null, 'iconPosition': 'end', 'onPress': null};
            r12 = r14[r8];
            r12 = r13.bind(r0)(r12);
            r17 = r12.intl;
            r16 = r17.string;
            r12 = r14[r9];
            r12 = r15.bind(r0)(r12);
            r12 = r12["6FXIU6"];
            r12 = r16.bind(r17)(r12);
            r8[1] = r12;
            r12 = r14[r16];
            r12 = r13.bind(r0)(r12);
            r13 = r12.LinkExternalSmallIcon;
            r12 = {'color': null};
            r14 = r14[r4];
            r14 = r15.bind(r0)(r14);
            r14 = r14.colors;
            r14 = r14.WHITE;
            r12[0] = r14;
            r12 = r10.bind(r0)(r13, r12);
            r8[2] = r12;
            r8[4] = r11;
            r8 = r10.bind(r0)(r9, r8);
            r7[1] = r8;
            r5[0] = r7;
            r5 = r3.bind(r0)(r6, r5);
            r4[1] = r5;
            r1[0] = r4;
            r1 = r3.bind(r0)(r2, r1);
            return r1;
        };
        _fun17716_ip = 297; continue _fun17716;
case 290:
        r1 = function() { // Environment: r5
            _fun78541: for(var _fun78541_ip = 0; ; ) switch(_fun78541_ip) {
case 0:
                r6 = _closure0_slot0;
                r3 = _closure0_slot2;
                r2 = r3[r6];
                r1 = undefined;
                r4 = r6.bind(r1)(r2);
                r2 = r4.c;
                r0 = 30;
                r4 = r2.bind(r4)(r0);
                r2 = _closure0_slot8;
                r12 = r2.bind(r1)();
                r8 = r4[r0];
                r2 = global;
                r9 = r2.Symbol;
                r5 = r9.for;
                r10 = 'react.memo_cache_sentinel';
                r5 = r5.bind(r9)(r10);
                if(!(r8 !== r5)) { _fun78541_ip = 81; continue _fun78541 }
case 75:
                r15 = r4[r0];
                _fun78541_ip = 97; continue _fun78541;
case 81:
                r5 = function() { // Original name: t, environment: r7
                    r3 = _closure0_slot1;
                    r2 = _closure0_slot2;
                    r2 = r2[r7];
                    r0 = undefined;
                    r3 = r3.bind(r0)(r2);
                    r2 = r3.openURL;
                    r1 = _closure0_slot7;
                    r1 = r2.bind(r3)(r1);
                    return r0;
                };
                r0 = 0;
                r4[r0] = r5;
                r15 = r5;
case 97:
                r19 = r12.content;
                r14 = r12.upperHalf;
                r16 = r12.text;
                r8 = r4[r1];
                r9 = r2.Symbol;
                r5 = r9.for;
                r5 = r5.bind(r9)(r10);
                if(!(r8 !== r5)) { _fun78541_ip = 143; continue _fun78541 }
case 137:
                r13 = r4[r1];
                _fun78541_ip = 196; continue _fun78541;
case 143:
                r5 = r3[r8];
                r5 = r6.bind(r1)(r5);
                r9 = r5.intl;
                r8 = r9.string;
                r11 = _closure0_slot1;
                r5 = r3[r9];
                r5 = r11.bind(r1)(r5);
                r5 = r5.Z87TFb;
                r5 = r8.bind(r9)(r5);
                r0 = 1;
                r4[r0] = r5;
                r13 = r5;
case 196:
                r8 = r4[r2];
                r5 = r12.text;
                if(!(r8 === r5)) { _fun78541_ip = 215; continue _fun78541 }
case 209:
                r9 = r4[r3];
                _fun78541_ip = 279; continue _fun78541;
case 215:
                r11 = _closure0_slot5;
                r5 = r3[r10];
                r5 = r6.bind(r1)(r5);
                r8 = r5.Text;
                r5 = {'accessibilityRole': 'header', 'variant': 'heading-xl/bold', 'color': 'mobile-text-heading-primary', 'style': null, 'children': null};
                r5[3] = r16;
                r5[4] = r13;
                r5 = r11.bind(r1)(r8, r5);
                r8 = r12.text;
                r0 = 2;
                r4[r0] = r8;
                r0 = 3;
                r4[r0] = r5;
                r9 = r5;
case 279:
                r18 = r12.body;
                r17 = r12.text;
                r8 = r4[r4];
                r11 = r2.Symbol;
                r5 = r11.for;
                r5 = r5.bind(r11)(r10);
                if(!(r8 !== r5)) { _fun78541_ip = 319; continue _fun78541 }
case 313:
                r16 = r4[r4];
                _fun78541_ip = 374; continue _fun78541;
case 319:
                r5 = r3[r8];
                r5 = r6.bind(r1)(r5);
                r11 = r5.intl;
                r8 = r11.string;
                r13 = _closure0_slot1;
                r5 = r3[r9];
                r5 = r13.bind(r1)(r5);
                r5 = r5.VS98dM;
                r5 = r8.bind(r11)(r5);
                r0 = 4;
                r4[r0] = r5;
                r16 = r5;
case 374:
                r8 = r4[r5];
                r5 = r12.text;
                if(!(r8 === r5)) { _fun78541_ip = 393; continue _fun78541 }
case 387:
                r8 = r4[r6];
                _fun78541_ip = 457; continue _fun78541;
case 393:
                r13 = _closure0_slot5;
                r5 = r3[r10];
                r5 = r6.bind(r1)(r5);
                r11 = r5.Text;
                r5 = {'variant': 'text-md/medium', 'color': 'text-subtle', 'style': null, 'children': null};
                r5[2] = r17;
                r5[3] = r16;
                r5 = r13.bind(r1)(r11, r5);
                r11 = r12.text;
                r0 = 5;
                r4[r0] = r11;
                r0 = 6;
                r4[r0] = r5;
                r8 = r5;
case 457:
                r20 = r12.text;
                r11 = r4[r7];
                r13 = r2.Symbol;
                r5 = r13.for;
                r5 = r5.bind(r13)(r10);
                if(!(r11 !== r5)) { _fun78541_ip = 492; continue _fun78541 }
case 486:
                r17 = r4[r7];
                _fun78541_ip = 547; continue _fun78541;
case 492:
                r5 = r3[r8];
                r5 = r6.bind(r1)(r5);
                r13 = r5.intl;
                r11 = r13.string;
                r16 = _closure0_slot1;
                r5 = r3[r9];
                r5 = r16.bind(r1)(r5);
                r5 = r5.BaI6L4;
                r5 = r11.bind(r13)(r5);
                r0 = 7;
                r4[r0] = r5;
                r17 = r5;
case 547:
                r11 = r4[r8];
                r5 = r12.text;
                if(!(r11 === r5)) { _fun78541_ip = 566; continue _fun78541 }
case 560:
                r13 = r4[r9];
                _fun78541_ip = 630; continue _fun78541;
case 566:
                r16 = _closure0_slot5;
                r5 = r3[r10];
                r5 = r6.bind(r1)(r5);
                r11 = r5.Text;
                r5 = {'variant': 'text-md/medium', 'color': 'text-subtle', 'style': null, 'children': null};
                r5[2] = r20;
                r5[3] = r17;
                r5 = r16.bind(r1)(r11, r5);
                r11 = r12.text;
                r0 = 8;
                r4[r0] = r11;
                r0 = 9;
                r4[r0] = r5;
                r13 = r5;
case 630:
                r11 = r4[r10];
                r5 = r12.body;
                if(!(r11 === r5)) { _fun78541_ip = 665; continue _fun78541 }
case 643:
                r5 = r4[r11];
                if(!(r5 === r13)) { _fun78541_ip = 665; continue _fun78541 }
case 651:
                r5 = r4[r12];
                if(!(r5 === r8)) { _fun78541_ip = 665; continue _fun78541 }
case 659:
                r11 = r4[r13];
                _fun78541_ip = 783; continue _fun78541;
case 665:
                r17 = _closure0_slot6;
                r5 = r3[r11];
                r5 = r6.bind(r1)(r5);
                r16 = r5.Stack;
                r5 = {'align': 'center', 'spacing': null, 'style': null, 'children': null};
                r21 = _closure0_slot1;
                r20 = r3[r4];
                r20 = r21.bind(r1)(r20);
                r20 = r20.space;
                r20 = r20.PX_16;
                r5[1] = r20;
                r5[2] = r18;
                r18 = new Array(2);
                r18[0] = r8;
                r18[1] = r13;
                r5[3] = r18;
                r5 = r17.bind(r1)(r16, r5);
                r16 = r12.body;
                r0 = 10;
                r4[r0] = r16;
                r0 = 11;
                r4[r0] = r13;
                r0 = 12;
                r4[r0] = r8;
                r0 = 13;
                r4[r0] = r5;
                r11 = r5;
case 783:
                r5 = r4[r14];
                if(!(r5 === r11)) { _fun78541_ip = 805; continue _fun78541 }
case 791:
                r5 = r4[r15];
                if(!(r5 === r9)) { _fun78541_ip = 805; continue _fun78541 }
case 799:
                r8 = r4[r16];
                _fun78541_ip = 907; continue _fun78541;
case 805:
                r16 = _closure0_slot6;
                r5 = r3[r11];
                r5 = r6.bind(r1)(r5);
                r13 = r5.Stack;
                r5 = {'align': 'center', 'spacing': null, 'children': null};
                r18 = _closure0_slot1;
                r17 = r3[r4];
                r17 = r18.bind(r1)(r17);
                r17 = r17.space;
                r17 = r17.PX_16;
                r5[1] = r17;
                r17 = new Array(2);
                r17[0] = r9;
                r17[1] = r11;
                r5[2] = r17;
                r5 = r16.bind(r1)(r13, r5);
                r0 = 14;
                r4[r0] = r11;
                r0 = 15;
                r4[r0] = r9;
                r0 = 16;
                r4[r0] = r5;
                r8 = r5;
case 907:
                r9 = r4[r17];
                r5 = r12.upperHalf;
                if(!(r9 === r5)) { _fun78541_ip = 935; continue _fun78541 }
case 921:
                r5 = r4[r18];
                if(!(r5 === r8)) { _fun78541_ip = 935; continue _fun78541 }
case 929:
                r11 = r4[r19];
                _fun78541_ip = 997; continue _fun78541;
case 935:
                r13 = _closure0_slot5;
                r9 = _closure0_slot4;
                r5 = {'style': null, 'children': null};
                r5[0] = r14;
                r5[1] = r8;
                r5 = r13.bind(r1)(r9, r5);
                r9 = r12.upperHalf;
                r0 = 17;
                r4[r0] = r9;
                r0 = 18;
                r4[r0] = r8;
                r0 = 19;
                r4[r0] = r5;
                r11 = r5;
case 997:
                r8 = r4[r20];
                r5 = r12.lowerHalf;
                if(!(r8 === r5)) { _fun78541_ip = 1017; continue _fun78541 }
case 1011:
                r9 = r4[r21];
                _fun78541_ip = 1074; continue _fun78541;
case 1017:
                r13 = _closure0_slot5;
                r8 = _closure0_slot4;
                r5 = {'style': null};
                r14 = r12.lowerHalf;
                r5[0] = r14;
                r5 = r13.bind(r1)(r8, r5);
                r8 = r12.lowerHalf;
                r0 = 20;
                r4[r0] = r8;
                r0 = 21;
                r4[r0] = r5;
                r9 = r5;
case 1074:
                r8 = r4[r22];
                r5 = r12.content;
                if(!(r8 === r5)) { _fun78541_ip = 1109; continue _fun78541 }
case 1087:
                r5 = r4[r23];
                if(!(r5 === r11)) { _fun78541_ip = 1109; continue _fun78541 }
case 1095:
                r5 = r4[r24];
                if(!(r5 === r9)) { _fun78541_ip = 1109; continue _fun78541 }
case 1103:
                r5 = r4[r25];
                _fun78541_ip = 1228; continue _fun78541;
case 1109:
                r14 = _closure0_slot5;
                r8 = r3[r12];
                r8 = r6.bind(r1)(r8);
                r13 = r8.ModalContent;
                r8 = {'children': null};
                r18 = _closure0_slot6;
                r17 = _closure0_slot4;
                r16 = {'style': null, 'children': null};
                r16[0] = r19;
                r19 = new Array(2);
                r19[0] = r11;
                r19[1] = r9;
                r16[1] = r19;
                r16 = r18.bind(r1)(r17, r16);
                r8[0] = r16;
                r8 = r14.bind(r1)(r13, r8);
                r12 = r12.content;
                r0 = 22;
                r4[r0] = r12;
                r0 = 23;
                r4[r0] = r11;
                r0 = 24;
                r4[r0] = r9;
                r0 = 25;
                r4[r0] = r8;
                r5 = r8;
case 1228:
                r9 = r4[r26];
                r11 = r2.Symbol;
                r8 = r11.for;
                r8 = r8.bind(r11)(r10);
                if(!(r9 !== r8)) { _fun78541_ip = 1258; continue _fun78541 }
case 1252:
                r12 = r4[r26];
                _fun78541_ip = 1293; continue _fun78541;
case 1258:
                r11 = _closure0_slot5;
                r9 = _closure0_slot1;
                r8 = r3[r13];
                r9 = r9.bind(r1)(r8);
                r8 = {};
                r8 = r11.bind(r1)(r9, r8);
                r0 = 26;
                r4[r0] = r8;
                r12 = r8;
case 1293:
                r8 = r4[r27];
                r9 = r2.Symbol;
                r2 = r9.for;
                r2 = r2.bind(r9)(r10);
                if(!(r8 !== r2)) { _fun78541_ip = 1326; continue _fun78541 }
case 1317:
                r9 = r4[r27];
                _fun78541_ip = 1534; continue _fun78541;
case 1326:
                r10 = _closure0_slot6;
                r2 = r3[r14];
                r2 = r6.bind(r1)(r2);
                r8 = r2.ModalFooter;
                r2 = {'children': null};
                r11 = new Array(2);
                r11[0] = r12;
                r14 = _closure0_slot5;
                r12 = r3[r15];
                r12 = r6.bind(r1)(r12);
                r13 = r12.ModalActionButton;
                r12 = {'variant': 'primary', 'text': null, 'icon': null, 'iconPosition': 'end', 'onPress': null};
                r16 = r3[r8];
                r16 = r6.bind(r1)(r16);
                r18 = r16.intl;
                r17 = r18.string;
                r19 = _closure0_slot1;
                r16 = r3[r9];
                r16 = r19.bind(r1)(r16);
                r16 = r16["6FXIU6"];
                r16 = r17.bind(r18)(r16);
                r12[1] = r16;
                r16 = r3[r16];
                r16 = r6.bind(r1)(r16);
                r17 = r16.LinkExternalSmallIcon;
                r16 = {'color': null};
                r18 = r3[r4];
                r18 = r19.bind(r1)(r18);
                r18 = r18.colors;
                r18 = r18.WHITE;
                r16[0] = r18;
                r16 = r14.bind(r1)(r17, r16);
                r12[2] = r16;
                r12[4] = r15;
                r12 = r14.bind(r1)(r13, r12);
                r11[1] = r12;
                r2[0] = r11;
                r2 = r10.bind(r1)(r8, r2);
                r0 = 27;
                r4[r0] = r2;
                r9 = r2;
case 1534:
                r2 = r4[r28];
                if(!(r2 === r5)) { _fun78541_ip = 1548; continue _fun78541 }
case 1542:
                r2 = r4[r29];
                _fun78541_ip = 1616; continue _fun78541;
case 1548:
                r7 = _closure0_slot6;
                r3 = r3[r17];
                r3 = r6.bind(r1)(r3);
                r6 = r3.ModalScreen;
                r3 = {'children': null};
                r8 = new Array(2);
                r8[0] = r5;
                r8[1] = r9;
                r3[0] = r8;
                r3 = r7.bind(r1)(r6, r3);
                r0 = 28;
                r4[r0] = r5;
                r0 = 29;
                r4[r0] = r3;
                r2 = r3;
case 1616:
                return r2;
            }
        };
case 297:
        r3 = r3[r18];
        r5 = r4.bind(r0)(r3);
        r4 = r5.fileFinishedImporting;
        r3 = 'modules/safety_flows/native/tasks/AppStoreParentalRevocationScreen.tsx';
        r3 = r4.bind(r5)(r3);
        r2['default'] = r1;
        return r0;
    }
}

// ===== top-level #17756  fn#17717  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    r4 = a1;
    var _closure0_slot0 = r4;
    r10 = a2;
    var _closure0_slot1 = r10;
    r2 = a5;
    r3 = a6;
    var _closure0_slot2 = r3;
    r5 = global;
    r8 = r5.Object;
    r7 = r8.defineProperty;
    r6 = '__esModule';
    r5 = {'value': true};
    r5 = r7.bind(r8)(r2, r6, r5);
    r5 = r3[r0];
    r0 = undefined;
    r5 = r10.bind(r0)(r5);
    var _closure0_slot3 = r5;
    r5 = r3[r1];
    r5 = r10.bind(r0)(r5);
    var _closure0_slot4 = r5;
    r6 = r3[r2];
    r5 = a3;
    r5 = r5.bind(r0)(r6);
    var _closure0_slot5 = r5;
    r5 = r3[r3];
    r5 = r4.bind(r0)(r5);
    r5 = r5.View;
    var _closure0_slot6 = r5;
    r5 = r3[r4];
    r5 = r4.bind(r0)(r5);
    r6 = r5.jsx;
    var _closure0_slot7 = r6;
    r5 = r5.jsxs;
    var _closure0_slot8 = r5;
    r5 = r3[r5];
    r7 = r4.bind(r0)(r5);
    r6 = r7.createStyles;
    r5 = {'container': null, 'buttonContainer': null};
    r8 = {'flexDirection': 'column', 'justifyContent': 'center', 'gap': null, 'padding': null, 'alignItems': 'center'};
    r9 = r3[r6];
    r9 = r10.bind(r0)(r9);
    r9 = r9.space;
    r9 = r9.PX_8;
    r8[2] = r9;
    r9 = r3[r6];
    r9 = r10.bind(r0)(r9);
    r9 = r9.space;
    r9 = r9.PX_16;
    r8[3] = r9;
    r5[0] = r8;
    r8 = {'marginTop': null};
    r9 = r3[r6];
    r9 = r10.bind(r0)(r9);
    r9 = r9.space;
    r9 = r9.PX_8;
    r8[0] = r9;
    r5[1] = r8;
    r5 = r6.bind(r7)(r5);
    var _closure0_slot9 = r5;
    r3 = r3[r15];
    r5 = r4.bind(r0)(r3);
    r4 = r5.fileFinishedImporting;
    r3 = 'modules/safety_flows/native/ErrorScreen.tsx';
    r3 = r4.bind(r5)(r3);
    r1 = function() { // Original name: ErrorScreen, environment: r1
        r2 = function() { // Original name: _handleRetry, environment: r14
            _fun131496: for(var _fun131496_ip = 0; ; ) switch(_fun131496_ip) {
case 0:
                r0 = undefined;
                r1 = undefined;
                r3 = this;
                r5 = _closure0_slot3;
                r2 = function() { // Environment: r4
                    r0 = 0;
                    var _closure2_slot4 = r0;
                    var _closure2_slot5 = r0;
                    var _closure2_slot3 = r0;
                    r1 = function* () { // Original name: ?anon_0_, environment: r1
                        _fun152134: for(var _fun152134_ip = 0; ; ) switch(_fun152134_ip) {
case 0:
                            r0 = _closure2_slot5;
                            r2 = r0;
                            r4 = 2;
                            if(!(r0 !== r4)) { _fun152134_ip = 471; continue _fun152134 }
case 20:
                            r0 = arguments[1];
                            r3 = arguments[0];
                            r15 = r2;
                            r7 = 3;
                            r5 = 1;
                            r14 = 0;
                            r12 = undefined;
                            r11 = true;
                            r9 = false;
                            r8 = null;
                            if(!(r15 !== r7)) { _fun152134_ip = 433; continue _fun152134 }
case 59:
                            r2 = r4;
                            _closure2_slot5 = r4;
                            r15 = _closure2_slot4;
                            if(!(r14 !== r15)) { _fun152134_ip = 273; continue _fun152134 }
case 77:
                            if(!(r5 !== r15)) { _fun152134_ip = 247; continue _fun152134 }
case 84:
                            if(!(r3 !== r5)) { _fun152134_ip = 238; continue _fun152134 }
case 91:
                            if(!(r3 !== r4)) { _fun152134_ip = 198; continue _fun152134 }
case 95:
                            r15 = _closure2_slot0;
                            _env_r15_slot0 = r0;
                            r15 = _env_r15_slot0;
                            if(!(r8 != r15)) { _fun152134_ip = 162; continue _fun152134 }
case 111:
                            r15 = _closure2_slot0;
                            r16 = _closure2_slot1;
                            r18 = _closure1_slot0;
                            r17 = _closure1_slot2;
                            r17 = r17[r9];
                            r18 = r18.bind(r12)(r17);
                            r17 = r18.navigateToScreenForTask;
                            r16 = _env_r16_slot1;
                            r15 = _env_r15_slot0;
                            r15 = r17.bind(r18)(r16, r15);
case 162:
                            _closure2_slot3 = r14;
                            r15 = _closure2_slot1;
                            r15 = _env_r15_slot0;
                            r15 = r15.bind(r12)(r9);
                            r2 = r7;
                            _closure2_slot5 = r7;
                            r15 = {'value': undefined, 'done': true};
                            return r15;
case 198:
                            _closure2_slot3 = r14;
                            r15 = _closure2_slot1;
                            r15 = _env_r15_slot0;
                            r15 = r15.bind(r12)(r9);
                            r2 = r7;
                            _closure2_slot5 = r7;
                            r15 = {'value': null, 'done': true};
                            r15[0] = r0;
                            return r15;
case 238:
                            r2 = r7;
                            _closure2_slot5 = r7;
                            throw r0;
case 247:
                            r16 = _closure2_slot1;
                            r15 = _closure2_slot2;
                            r6 = r15;
                            _closure2_slot3 = r14;
                            r16 = _env_r16_slot0;
                            r16 = r16.bind(r12)(r9);
                            throw r15;
case 273:
                            if(!(r3 !== r5)) { _fun152134_ip = 389; continue _fun152134 }
case 277:
                            if(!(r3 !== r4)) { _fun152134_ip = 366; continue _fun152134 }
case 281:
                            var _closure2_slot1 = r13;
                            var _closure2_slot0 = r15;
                            var _closure3_slot0 = r12;
                            _closure2_slot3 = r5;
                            r15 = _closure1_slot0;
                            r15 = r15.bind(r12)(r11);
                            r16 = _closure1_slot0;
                            r15 = _closure1_slot2;
                            r15 = r15[r8];
                            r16 = r16.bind(r12)(r15);
                            r15 = r16.getCurrentTask;
                            r16 = r15.bind(r16)();
                            _closure2_slot4 = r4;
                            r2 = r5;
                            _closure2_slot5 = r5;
                            r15 = {'value': null, 'done': false};
                            r15[0] = r16;
                            return r15;
case 366:
                            r2 = r7;
                            _closure2_slot5 = r7;
                            r15 = {'value': null, 'done': true};
                            r15[0] = r0;
                            return r15;
case 389:
                            r2 = r7;
                            _closure2_slot5 = r7;
                            throw r0;
case 398:
                            CatchBlockStart(arg_register=15);
                            r6 = r15;
                            var _closure2_slot2 = r15;
                            r15 = _closure2_slot3;
                            if(!(r14 !== r15)) { _fun152134_ip = 424; continue _fun152134 }
case 415:
                            _closure2_slot4 = r5;
                            _fun152134_ip = 59; continue _fun152134;
case 424:
                            r2 = r7;
                            _closure2_slot5 = r7;
                            throw r6;
case 433:
                            if(!(r3 !== r5)) { _fun152134_ip = 469; continue _fun152134 }
case 437:
                            if(!(r3 !== r4)) { _fun152134_ip = 453; continue _fun152134 }
case 441:
                            r3 = {'value': undefined, 'done': true};
                            return r3;
case 453:
                            r3 = {'value': null, 'done': true};
                            r3[0] = r0;
                            return r3;
case 469:
                            throw r0;
case 471:
                            r0 = 3;
                            r2 = r0;
                            _closure2_slot5 = r0;
                            r20 = 'Generator functions may not be called on executing generators';
                            r0 = throwTypeError(r21);
                        }
                    };
                    return r1;
                };
                r2 = r5.bind(r0)(r2);
                _closure1_slot2 = r2;
                r4 = r2.apply;
                if(r4) { _fun131496_ip = 52; continue _fun131496 }
case 42:
                r1 = arguments;
                r1 = r4.bind(r2)(r3, r1);
                _fun131496_ip = 62; continue _fun131496;
case 52:
                r7 = r2;
                r6 = r3;
                r1 = applyArguments(r8, r7);
case 62:
                return r1;
            }
        };
        var _closure1_slot2 = r2;
        r3 = _closure0_slot5;
        r2 = r3.useState;
        r1 = false;
        r3 = r2.bind(r3)(r1);
        r2 = _closure0_slot4;
        r0 = 2;
        r1 = undefined;
        r2 = r2.bind(r1)(r3, r0);
        r12 = r2[r0];
        r2 = r2[r1];
        var _closure1_slot0 = r2;
        r16 = _closure0_slot0;
        r13 = _closure0_slot2;
        r2 = r13[r7];
        r3 = r16.bind(r1)(r2);
        r2 = r3.useNavigation;
        r2 = r2.bind(r3)();
        var _closure1_slot1 = r2;
        r2 = _closure0_slot9;
        r8 = r2.bind(r1)();
        r4 = _closure0_slot8;
        r3 = _closure0_slot6;
        r2 = {'style': null, 'children': null};
        r5 = r8.container;
        r2[0] = r5;
        r11 = _closure0_slot7;
        r5 = r13[r10];
        r5 = r16.bind(r1)(r5);
        r6 = r5.Text;
        r5 = {'variant': 'heading-lg/semibold', 'children': null};
        r7 = r13[r11];
        r7 = r16.bind(r1)(r7);
        r15 = r7.intl;
        r9 = r15.string;
        r7 = r13[r11];
        r7 = r16.bind(r1)(r7);
        r7 = r7.t;
        r7 = r7.c6kn6F;
        r7 = r9.bind(r15)(r7);
        r5[1] = r7;
        r6 = r11.bind(r1)(r6, r5);
        r5 = new Array(3);
        r5[0] = r6;
        r6 = r13[r10];
        r6 = r16.bind(r1)(r6);
        r7 = r6.Text;
        r6 = {'variant': 'text-md/normal', 'color': 'text-muted', 'children': null};
        r9 = r13[r11];
        r9 = r16.bind(r1)(r9);
        r17 = r9.intl;
        r15 = r17.string;
        r9 = r13[r11];
        r9 = r16.bind(r1)(r9);
        r9 = r9.t;
        r9 = r9.ZUEGFn;
        r9 = r15.bind(r17)(r9);
        r6[2] = r9;
        r6 = r11.bind(r1)(r7, r6);
        r5[1] = r6;
        r6 = r13[r12];
        r6 = r16.bind(r1)(r6);
        r7 = r6.Stack;
        r6 = {'style': null, 'spacing': 8, 'children': null};
        r8 = r8.buttonContainer;
        r6[0] = r8;
        r8 = r13[r13];
        r8 = r16.bind(r1)(r8);
        r9 = r8.Button;
        r8 = {'onPress': null, 'text': null, 'variant': 'secondary', 'size': 'md'};
        r10 = function() { // Original name: onPress, environment: r10
            r2 = _closure0_slot1;
            r1 = _closure0_slot2;
            r1 = r1[r14];
            r0 = undefined;
            r3 = r2.bind(r0)(r1);
            r2 = r3.logout;
            r1 = 'safety_flows_error_screen';
            r1 = r2.bind(r3)(r1);
            return r1;
        };
        r8[0] = r10;
        r10 = r13[r11];
        r10 = r16.bind(r1)(r10);
        r17 = r10.intl;
        r15 = r17.string;
        r10 = r13[r11];
        r10 = r16.bind(r1)(r10);
        r10 = r10.t;
        r10 = r10["2jxGer"];
        r10 = r15.bind(r17)(r10);
        r8[1] = r10;
        r9 = r11.bind(r1)(r9, r8);
        r8 = new Array(2);
        r8[0] = r9;
        r9 = r13[r13];
        r9 = r16.bind(r1)(r9);
        r10 = r9.Button;
        r9 = {'onPress': null, 'text': null, 'variant': 'primary', 'size': 'md', 'loading': null};
        r14 = function() { // Original name: handleRetry, environment: r14
            _fun131498: for(var _fun131498_ip = 0; ; ) switch(_fun131498_ip) {
case 0:
                r1 = undefined;
                r3 = this;
                r2 = _closure1_slot2;
                r4 = r2.apply;
                if(r4) { _fun131498_ip = 31; continue _fun131498 }
case 21:
                r1 = arguments;
                r1 = r4.bind(r2)(r3, r1);
                _fun131498_ip = 41; continue _fun131498;
case 31:
                r6 = r2;
                r5 = r3;
                r1 = applyArguments(r7, r6);
case 41:
                return r1;
            }
        };
        r9[0] = r14;
        r14 = r13[r11];
        r14 = r16.bind(r1)(r14);
        r15 = r14.intl;
        r14 = r15.string;
        r13 = r13[r11];
        r13 = r16.bind(r1)(r13);
        r13 = r13.t;
        r13 = r13["7NqTJn"];
        r13 = r14.bind(r15)(r13);
        r9[1] = r13;
        r9[4] = r12;
        r9 = r11.bind(r1)(r10, r9);
        r8[1] = r9;
        r6[2] = r8;
        r6 = r4.bind(r1)(r7, r6);
        r5[2] = r6;
        r2[1] = r5;
        r2 = r4.bind(r1)(r3, r2);
        return r2;
    };
    r2['default'] = r1;
    return r0;
}

// ===== top-level #17757  fn#17718  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    r4 = a1;
    var _closure0_slot0 = r4;
    r2 = a5;
    r3 = a6;
    var _closure0_slot1 = r3;
    r1 = function(a0) { // Original name: handleUserApplicationIdentityGatewayEvent, environment: r5
        r2 = _closure0_slot0;
        r1 = _closure0_slot1;
        r1 = r1[r0];
        r0 = undefined;
        r1 = r2.bind(r0)(r1);
        r3 = r1.useUserApplicationIdentities;
        r2 = r3.refetch;
        r1 = a0;
        r1 = r1.user_id;
        r1 = r2.bind(r3)(r1);
        return r0;
    };
    var _closure0_slot2 = r1;
    r1 = global;
    r8 = r1.Object;
    r7 = r8.defineProperty;
    r6 = '__esModule';
    r1 = {'value': true};
    r1 = r7.bind(r8)(r2, r6, r1);
    r6 = r3[r1];
    r0 = undefined;
    r1 = a2;
    r6 = r1.bind(r0)(r6);
    r1 = __createDerivedClass(r5, function() { // Original name: UserApplicationIdentityManager
        r0 = _env_r2_slot3;
        r3 = r0.__proto__;
        r1 = new.target;
        r5 = Object.create(r3.prototype);
        r6 = r3;
        r4 = r1;
        r0 = applyArguments(r7, r6, r5);
        r1 = {'USER_APPLICATION_IDENTITY_UPDATE': null, 'USER_APPLICATION_IDENTITY_REMOVE': null};
        r2 = _env_r2_slot2;
        r1[0] = r2;
        r1[1] = r2;
        r0['actions'] = r1;
        return r0;
    });
    r1 = r1.prototype;
    var _closure0_slot3 = r1;
    r12 = undefined;
    r1 = new r13[r1](r12);
    r3 = r3[r2];
    r5 = r4.bind(r0)(r3);
    r4 = r5.fileFinishedImporting;
    r3 = 'modules/user_application_identity/UserApplicationIdentityManager.tsx';
    r3 = r4.bind(r5)(r3);
    r2['default'] = r1;
    return r0;
}

// ===== top-level #17758  fn#17719  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    r5 = a1;
    r7 = a2;
    var _closure0_slot0 = r7;
    r3 = a5;
    r4 = a6;
    var _closure0_slot1 = r4;
    r1 = undefined;
    r2 = function(a0) { // Original name: makeLogLine
        _fun78546: for(var _fun78546_ip = 0; ; ) switch(_fun78546_ip) {
case 0:
            r5 = a0;
            r2 = r5.channelId;
            r4 = new Array(4);
            r4[0] = r2;
            r2 = r5.localMessageDetails;
            r0 = null;
            r1 = r0 != r2;
            r2 = '-1';
            r3 = r2;
            if(!r1) { _fun78546_ip = 60; continue _fun78546 }
case 38:
            r6 = r5.localMessageDetails;
            r7 = r6.loadTime;
            r6 = r5.startTime;
            r3 = r7 - r6;
case 60:
            r4[1] = r3;
            r3 = r5.networkMessageDetails;
            r1 = r0 != r3;
            if(!r1) { _fun78546_ip = 99; continue _fun78546 }
case 77:
            r3 = r5.networkMessageDetails;
            r6 = r3.loadTime;
            r3 = r5.startTime;
            r2 = r6 - r3;
case 99:
            r4[2] = r2;
            r2 = r5.localMessageDetails;
            r1 = r0 == r2;
            r3 = 'incomplete';
            r2 = r3;
            if(r1) { _fun78546_ip = 212; continue _fun78546 }
case 123:
            r6 = r5.networkMessageDetails;
            r0 = r0 == r6;
            r2 = r3;
            if(r0) { _fun78546_ip = 212; continue _fun78546 }
case 139:
            r3 = r5.localMessageDetails;
            r8 = r3.count;
            r3 = r5.networkMessageDetails;
            r6 = r3.count;
            r7 = 'mismatch';
            r3 = r7;
            if(!(r8 === r6)) { _fun78546_ip = 209; continue _fun78546 }
case 174:
            r6 = r5.localMessageDetails;
            r6 = r6.lastMessageId;
            r5 = r5.networkMessageDetails;
            r5 = r5.lastMessageId;
            r3 = r7;
            if(!(r6 === r5)) { _fun78546_ip = 209; continue _fun78546 }
case 205:
            r3 = 'match';
case 209:
            r2 = r3;
case 212:
            r4[3] = r2;
            r3 = r4.join;
            r2 = ':';
            r2 = r3.bind(r4)(r2);
            return r2;
        }
    };
    var _closure0_slot5 = r2;
    r2 = function(a0) { // Original name: handleAppStateUpdate, environment: r6
        _fun78547: for(var _fun78547_ip = 0; ; ) switch(_fun78547_ip) {
case 0:
            r2 = a0;
            r3 = r2.state;
            r2 = _closure0_slot3;
            r2 = r2.BACKGROUND;
            if(!(r3 === r2)) { _fun78547_ip = 226; continue _fun78547 }
case 28:
            r2 = global;
            r4 = r2.Array;
            r3 = r4.from;
            r9 = _closure0_slot0;
            r8 = _closure0_slot1;
            r2 = r8[r1];
            r1 = undefined;
            r2 = r9.bind(r1)(r2);
            r5 = r2.fetchLogs;
            r2 = r5.values;
            r2 = r2.bind(r5)();
            r4 = r3.bind(r4)(r2);
            r3 = r4.map;
            r2 = _closure0_slot5;
            r6 = r3.bind(r4)(r2);
            r2 = r8[r2];
            r5 = r9.bind(r1)(r2);
            r4 = r5.track;
            r2 = _closure0_slot2;
            r3 = r2.CACHE_STATS_RECORDED;
            r2 = {'num_channels_fetch_started': null, 'num_channels_local_cached': null, 'num_channels_fetched_network': null, 'num_times_backgrounded': null, 'fetch_entries': null};
            r10 = r8[r1];
            r10 = r9.bind(r1)(r10);
            r10 = r10.channelsFetchStarted;
            r10 = r10.size;
            r2[0] = r10;
            r10 = r8[r1];
            r10 = r9.bind(r1)(r10);
            r10 = r10.channelsFetchedWithLocalMessages;
            r10 = r10.size;
            r2[1] = r10;
            r8 = r8[r1];
            r8 = r9.bind(r1)(r8);
            r8 = r8.channelsFetchedNetwork;
            r8 = r8.size;
            r2[2] = r8;
            r1 = _closure0_slot4;
            r0 = r1 + 1;
            _closure0_slot4 = r0;
            r2[3] = r0;
            r2[4] = r6;
            r2 = r4.bind(r5)(r3, r2);
case 226:
            r1 = undefined;
            return r1;
        }
    };
    var _closure0_slot6 = r2;
    r2 = global;
    r10 = r2.Object;
    r9 = r10.defineProperty;
    r8 = '__esModule';
    r2 = {'value': true};
    r2 = r9.bind(r10)(r3, r8, r2);
    r2 = r4[r0];
    r2 = r5.bind(r1)(r2);
    r8 = r2.AnalyticEvents;
    var _closure0_slot2 = r8;
    r2 = r2.AppStates;
    var _closure0_slot3 = r2;
    r0 = 0;
    var _closure0_slot4 = r0;
    r2 = r4[r3];
    r7 = r7.bind(r1)(r2);
    r2 = __createDerivedClass(r6, function() { // Original name: LocalMessageCacheStatsManager
        r0 = _env_r2_slot7;
        r3 = r0.__proto__;
        r1 = new.target;
        r5 = Object.create(r3.prototype);
        r6 = r3;
        r4 = r1;
        r0 = applyArguments(r7, r6, r5);
        r1 = {'APP_STATE_UPDATE': null};
        r2 = _env_r2_slot6;
        r1[0] = r2;
        r0['actions'] = r1;
        return r0;
    });
    r2 = r2.prototype;
    var _closure0_slot7 = r2;
    r14 = undefined;
    r2 = new r15[r2](r14);
    r4 = r4[r4];
    r6 = r5.bind(r1)(r4);
    r5 = r6.fileFinishedImporting;
    r4 = 'modules/local_message_caching/LocalMessageCacheStatsManager.tsx';
    r4 = r5.bind(r6)(r4);
    r3['default'] = r2;
    return r1;
}

// ===== top-level #17759  fn#17720  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    r5 = a2;
    var _closure0_slot0 = r5;
    r2 = a5;
    r3 = a6;
    var _closure0_slot1 = r3;
    r0 = undefined;
    r1 = function(a0, a1) { // Original name: isLikelyControl
        _fun78549: for(var _fun78549_ip = 0; ; ) switch(_fun78549_ip) {
case 0:
            r2 = a0;
            r0 = null;
            if(!(r0 != r2)) { _fun78549_ip = 77; continue _fun78549 }
case 9:
            r4 = a1;
            r3 = r2.variations;
            r6 = r3[r4];
            r0 = r0 == r6;
            if(r0) { _fun78549_ip = 75; continue _fun78549 }
case 29:
            r4 = global;
            r5 = r4.JSON;
            r3 = r5.stringify;
            r3 = r3.bind(r5)(r6);
            r5 = r4.JSON;
            r4 = r5.stringify;
            r2 = r2.defaultConfig;
            r2 = r4.bind(r5)(r2);
            r0 = r3 === r2;
case 75:
            return r0;
case 77:
            r0 = true;
            return r0;
        }
    };
    var _closure0_slot5 = r1;
    r1 = function(a0, a1) { // Original name: flushFlags, environment: r4
        _fun78550: for(var _fun78550_ip = 0; ; ) switch(_fun78550_ip) {
case 0:
            r1 = a0;
            r5 = a1;
            r0 = undefined;
            r6 = undefined;
            r2 = r1.sort;
            r2 = r2.bind(r1)();
            r4 = r1;
            r2 = r4[Symbol.iterator];
            r4 = r2().next;
            r3 = true;
            r1 = null;
case 33:
            r8 = r4;
            r10 = r8().value;
            r8 = r2;
            if(!(r8 !== r0)) { _fun78550_ip = 105; continue _fun78550 }
case 47:
            r6 = r10;
            r9 = _closure0_slot0;
            r8 = _closure0_slot1;
            r8 = r8[r3];
            r9 = r9.bind(r0)(r8);
            r8 = r9.addFeatureFlag;
            r8 = r8.bind(r9)(r10, r3);
            if(!(r5 != r1)) { _fun78550_ip = 96; continue _fun78550 }
case 83:
            r9 = r5.add;
            r8 = r6;
            r8 = r9.bind(r5)(r8);
case 96:
            _fun78550_ip = 33; continue _fun78550;
case 98:
            CatchBlockStart(arg_register=1);
            r2.return();
            throw r1;
case 105:
            return r0;
        }
    };
    var _closure0_slot7 = r1;
    r1 = function() { // Original name: syncAllExperimentFlags, environment: r4
        _fun78551: for(var _fun78551_ip = 0; ; ) switch(_fun78551_ip) {
case 0:
            r0 = undefined;
            r23 = undefined;
            r22 = undefined;
            r21 = undefined;
            r14 = undefined;
            r13 = undefined;
            r12 = undefined;
            r11 = undefined;
            r4 = 0;
            r2 = function() { // Original name: resetGuildFlags, environment: r1
                _fun131499: for(var _fun131499_ip = 0; ; ) switch(_fun131499_ip) {
case 0:
                    r0 = _closure0_slot6;
                    r4 = r0;
                    r3 = r4[Symbol.iterator];
                    r4 = r3().next;
                    r0 = undefined;
                    r2 = false;
case 17:
                    r5 = r4;
                    r7 = r5().value;
                    r5 = r3;
                    if(!(r5 !== r0)) { _fun131499_ip = 69; continue _fun131499 }
case 31:
                    r6 = _closure0_slot0;
                    r5 = _closure0_slot1;
                    r5 = r5[r3];
                    r6 = r6.bind(r0)(r5);
                    r5 = r6.addFeatureFlag;
                    r5 = r5.bind(r6)(r7, r2);
                    _fun131499_ip = 17; continue _fun131499;
case 62:
                    CatchBlockStart(arg_register=2);
                    r3.return();
                    throw r2;
case 69:
                    r2 = _closure0_slot6;
                    r1 = r2.clear;
                    r1 = r1.bind(r2)();
                    return r0;
                }
            };
            r2 = r2.bind(r4)();
            r9 = new Array(0);
            r8 = new Array(0);
            r7 = new Array(0);
            r5 = new Array(0);
            r3 = _closure0_slot4;
            r2 = r3.getGuildId;
            r10 = r2.bind(r3)();
            r3 = _closure0_slot2;
            r2 = r3.getAllExperimentAssignments;
            r24 = r2.bind(r3)();
            r15 = r24;
            r20 = ':';
            r19 = global;
            r18 = '';
            r17 = null;
            for(r2 in r15)
case 102:
            {
case 114:
                r27 = r2;
                r28 = r24[r27];
                r25 = r17 == r28;
                if(r25) { _fun78551_ip = 132; continue _fun78551 }
case 128:
                r25 = r28 <= r4;
case 132:
                if(r25) { _fun78551_ip = 102; continue _fun78551 }
case 135:
                r25 = r27.includes;
                r25 = r25.bind(r27)(r20);
                if(r25) { _fun78551_ip = 178; continue _fun78551 }
case 148:
                r26 = r9.push;
                r25 = r19.HermesInternal;
                r25 = r25.concat;
                r25 = r25.bind(r18)(r27, r20, r28);
                r25 = r26.bind(r9)(r25);
                _fun78551_ip = 102; continue _fun78551;
case 178:
                r25 = r17 != r10;
                if(!r25) { _fun78551_ip = 213; continue _fun78551 }
case 185:
                r29 = r27.startsWith;
                r26 = r19.HermesInternal;
                r26 = r26.concat;
                r26 = r26.bind(r18)(r10, r20);
                r25 = r29.bind(r27)(r26);
case 213:
                if(!r25) { _fun78551_ip = 102; continue _fun78551 }
case 216:
                r26 = r8.push;
                r25 = r27.split;
                r25 = r25.bind(r27)(r20);
                r27 = r25[r1];
                r25 = r19.HermesInternal;
                r25 = r25.concat;
                r25 = r25.bind(r18)(r27, r20, r28);
                r25 = r26.bind(r8)(r25);
                _fun78551_ip = 102; continue _fun78551;
            }
case 263:
            r3 = _closure0_slot3;
            r2 = r3.getRegisteredExperiments;
            r16 = r2.bind(r3)();
            r2 = function() { // Original name: getHashToName, environment: r1
                _fun131500: for(var _fun131500_ip = 0; ; ) switch(_fun131500_ip) {
case 0:
                    r3 = _closure0_slot3;
                    r2 = r3.getRegisteredExperiments;
                    r3 = r2.bind(r3)();
                    r2 = {};
                    r4 = r3;
                    for(r3 in r4)
case 30:
                    {
case 39:
                        r8 = r3;
                        r9 = _closure0_slot3;
                        r7 = r9.getHash;
                        r7 = r7.bind(r9)(r8);
                        r2[r7] = r8;
                        _fun131500_ip = 30; continue _fun131500;
                    }
case 63:
                    return r2;
                }
            };
            r15 = r2.bind(r4)();
            r2 = r3.getState;
            r2 = r2.bind(r3)();
            r2 = r2.evaluatedExperiments;
            r3 = ['user', 'installation'];
            r6 = r3[Symbol.iterator];
            r3 = r6().next;
case 317:
            r24 = r3;
            r24 = r24().value;
            r25 = r6;
            if(!(r25 !== r0)) { _fun78551_ip = 554; continue _fun78551 }
case 334:
            r23 = r24;
            r25 = r2 == r17;
            r24 = undefined;
            if(r25) { _fun78551_ip = 353; continue _fun78551 }
case 346:
            r25 = r23;
            r24 = r2[r25];
case 353:
            r32 = r24;
            for(r29 in r32)
case 367:
            {
case 379:
                r22 = r29;
                r24 = r23;
                r26 = r2[r24];
                r25 = r26 == r17;
                r24 = undefined;
                if(r25) { _fun78551_ip = 405; continue _fun78551 }
case 398:
                r25 = r22;
                r24 = r26[r25];
case 405:
                if(!(r24 == r17)) { _fun78551_ip = 411; continue _fun78551 }
case 409:
                r24 = {};
case 411:
                r24 = r24.assignments;
                r21 = r24;
                r27 = r24;
                ForInLoopInit(obj_props_register=28, obj_register=27, iter_index_register=26, iter_size_register=25);
                if(r28 === undefined) { _fun78551_ip = 367; continue _fun78551 }
case 431:
                ForInLoopNextIter(next_value_register=24, obj_props_register=28, obj_register=27, iter_index_register=26, iter_size_register=25);
                if(r24 === undefined) { _fun78551_ip = 367; continue _fun78551 }
case 440:
                r34 = r24;
                r14 = r34;
                r34 = r15[r34];
                r13 = r34;
                if(r17 == r34) { _fun78551_ip = 431; continue _fun78551 }
case 457:
                r35 = r21;
                r34 = r14;
                r34 = r35[r34];
                r34 = r34.variantId;
                r12 = r34;
                if(r17 == r34) { _fun78551_ip = 431; continue _fun78551 }
case 480:
                r34 = r13;
                r36 = r12;
                r35 = r19.HermesInternal;
                r35 = r35.concat;
                r11 = r35.bind(r18)(r34, r20, r36);
                r35 = _closure0_slot5;
                r34 = r16[r34];
                r34 = r35.bind(r4)(r34, r36);
                r36 = r5;
                if(!r34) { _fun78551_ip = 527; continue _fun78551 }
case 524:
                r36 = r7;
case 527:
                r35 = r36.push;
                r34 = r11;
                r34 = r35.bind(r36)(r34);
                _fun78551_ip = 431; continue _fun78551;
            }
case 542:
            _fun78551_ip = 317; continue _fun78551;
case 547:
            CatchBlockStart(arg_register=3);
            r6.return();
            throw r3;
case 554:
            r6 = new Array(0);
            r3 = new Array(0);
            if(!(r17 != r10)) { _fun78551_ip = 707; continue _fun78551 }
case 569:
            r11 = r2 == r17;
            r14 = undefined;
            if(r11) { _fun78551_ip = 596; continue _fun78551 }
case 578:
            r2 = r2.guild;
            r11 = r2 == r17;
            r14 = undefined;
            if(r11) { _fun78551_ip = 596; continue _fun78551 }
case 592:
            r14 = r2[r10];
case 596:
            if(!(r17 != r14)) { _fun78551_ip = 707; continue _fun78551 }
case 600:
            r12 = r14.assignments;
            for(r2 in r12)
case 614:
            {
case 623:
                r23 = r2;
                r21 = r15[r23];
                if(r17 == r21) { _fun78551_ip = 614; continue _fun78551 }
case 634:
                r22 = r14.assignments;
                r22 = r22[r23];
                r24 = r22.variantId;
                if(r17 == r24) { _fun78551_ip = 614; continue _fun78551 }
case 654:
                r22 = r19.HermesInternal;
                r22 = r22.concat;
                r23 = r22.bind(r18)(r21, r20, r24);
                r22 = _closure0_slot5;
                r21 = r16[r21];
                r21 = r22.bind(r4)(r21, r24);
                r22 = r3;
                if(!r21) { _fun78551_ip = 695; continue _fun78551 }
case 692:
                r22 = r6;
case 695:
                r21 = r22.push;
                r21 = r21.bind(r22)(r23);
                _fun78551_ip = 614; continue _fun78551;
            }
case 707:
            r2 = _closure0_slot7;
            r9 = r2.bind(r4)(r9);
            r1 = _closure0_slot6;
            r8 = r2.bind(r4)(r8, r1);
            r7 = r2.bind(r4)(r7);
            r6 = r2.bind(r4)(r6, r1);
            r5 = r2.bind(r4)(r5);
            r1 = r2.bind(r4)(r3, r1);
            return r0;
        }
    };
    var _closure0_slot8 = r1;
    r1 = global;
    r9 = r1.Object;
    r8 = r9.defineProperty;
    r7 = '__esModule';
    r6 = {'value': true};
    r6 = r8.bind(r9)(r2, r7, r6);
    r6 = r3[r0];
    r6 = r5.bind(r0)(r6);
    var _closure0_slot2 = r6;
    r6 = r3[r1];
    r6 = r5.bind(r0)(r6);
    var _closure0_slot3 = r6;
    r6 = r3[r2];
    r6 = r5.bind(r0)(r6);
    var _closure0_slot4 = r6;
    r1 = r1.Set;
    r6 = Object.create(r1.prototype);
    r13 = r6;
    r1 = new r14[r1](r13);
    r1 = r1 instanceof Object ? r1 : r6;
    var _closure0_slot6 = r1;
    r1 = r3[r4];
    r5 = r5.bind(r0)(r1);
    r1 = __createDerivedClass(r4, function() { // Original name: SentryExperimentFeatureFlagManager
        r0 = _env_r1_slot9;
        r3 = r0.__proto__;
        r2 = new.target;
        r7 = Object.create(r3.prototype);
        r8 = r3;
        r6 = r2;
        r0 = applyArguments(r9, r8, r7);
        r2 = global;
        r2 = r2.Map;
        r3 = Object.create(r2.prototype);
        r9 = r3;
        r2 = new r10[r2](r9);
        r5 = r2 instanceof Object ? r2 : r3;
        r3 = r5.set;
        r2 = _env_r1_slot2;
        r4 = _env_r1_slot8;
        r5 = r3.bind(r5)(r2, r4);
        r3 = r5.set;
        r2 = _env_r1_slot3;
        r3 = r3.bind(r5)(r2, r4);
        r2 = r3.set;
        r1 = _env_r1_slot4;
        r1 = r2.bind(r3)(r1, r4);
        r0['stores'] = r1;
        return r0;
    });
    r1 = r1.prototype;
    var _closure0_slot9 = r1;
    r13 = undefined;
    r1 = new r14[r1](r13);
    r4 = r3[r5];
    r3 = a1;
    r5 = r3.bind(r0)(r4);
    r4 = r5.fileFinishedImporting;
    r3 = 'modules/sentry/SentryExperimentFeatureFlagManager.tsx';
    r3 = r4.bind(r5)(r3);
    r2['default'] = r1;
    return r0;
}

// ===== top-level #17760  fn#17721  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    r6 = a1;
    var _closure0_slot0 = r6;
    r8 = a2;
    var _closure0_slot1 = r8;
    r4 = a5;
    r5 = a6;
    var _closure0_slot2 = r5;
    r3 = function(a0) { // Original name: isQuestProgressable, environment: r7
        _fun78553: for(var _fun78553_ip = 0; ; ) switch(_fun78553_ip) {
case 0:
            r2 = a0;
            r4 = _closure0_slot0;
            r3 = _closure0_slot2;
            r3 = r3[r14];
            r0 = undefined;
            r4 = r4.bind(r0)(r3);
            r3 = r4.isQuestExpired;
            r3 = r3.bind(r4)(r2);
            r0 = !r3;
            if(r3) { _fun78553_ip = 54; continue _fun78553 }
case 42:
            r3 = r2.userStatus;
            r1 = null;
            r0 = r1 != r3;
case 54:
            if(!r0) { _fun78553_ip = 75; continue _fun78553 }
case 57:
            r3 = r2.userStatus;
            r3 = r3.enrolledAt;
            r1 = null;
            r0 = r1 != r3;
case 75:
            if(!r0) { _fun78553_ip = 96; continue _fun78553 }
case 78:
            r2 = r2.userStatus;
            r2 = r2.completedAt;
            r1 = null;
            r0 = r1 == r2;
case 96:
            return r0;
        }
    };
    var _closure0_slot17 = r3;
    r3 = function(a0) { // Original name: handleEmbeddedActivityLaunchSuccess, environment: r7
        _fun78554: for(var _fun78554_ip = 0; ; ) switch(_fun78554_ip) {
case 0:
            r0 = undefined;
            r1 = undefined;
            r5 = _closure0_slot11;
            r2 = r5.getState;
            r2 = r2.bind(r5)();
            r6 = r2.autoEnroll;
            r2 = _closure0_slot10;
            r9 = r2.quests;
            r5 = _closure0_slot0;
            r4 = r5;
            r2 = _closure0_slot2;
            r3 = r2;
            r2 = r2[r15];
            r8 = r5.bind(r0)(r2);
            r5 = r8.getEligibleQuestsForApplicationId;
            r2 = a0;
            r8 = r5.bind(r8)(r9, r2);
            r5 = r8;
            r2 = r5[Symbol.iterator];
            r5 = r2().next;
case 81:
            r8 = r5;
            r8 = r8().value;
            r9 = r2;
            if(!(r9 !== r0)) { _fun78554_ip = 301; continue _fun78554 }
case 98:
            r1 = r8;
            if(!r6) { _fun78554_ip = 167; continue _fun78554 }
case 104:
            r8 = r1;
            r8 = r8.config;
            r10 = r8.features;
            r9 = r10.includes;
            r11 = _closure0_slot0;
            r4 = r11;
            r8 = _closure0_slot2;
            r3 = r8;
            r8 = r8[r16];
            r8 = r11.bind(r0)(r8);
            r8 = r8.QuestVariants;
            r8 = r8.MOBILE_ACTIVITY_QUEST;
            r8 = r9.bind(r10)(r8);
            if(r8) { _fun78554_ip = 169; continue _fun78554 }
case 167:
            _fun78554_ip = 81; continue _fun78554;
case 169:
            r7 = r4;
            r6 = r3;
            r3 = r6[r17];
            r5 = r7.bind(r0)(r3);
            r4 = r5.enrollInQuest;
            r3 = r1.id;
            r1 = {'questContent': null, 'questContentCTA': null, 'sourceQuestContent': null};
            r8 = r6[r18];
            r8 = r7.bind(r0)(r8);
            r8 = r8.QuestContent;
            r8 = r8.RUNNING_ACTIVITY;
            r1[0] = r8;
            r8 = r6[r19];
            r8 = r7.bind(r0)(r8);
            r8 = r8.QuestContentCTA;
            r8 = r8.START_QUEST;
            r1[1] = r8;
            r6 = r6[r18];
            r6 = r7.bind(r0)(r6);
            r6 = r6.QuestContent;
            r6 = r6.RUNNING_ACTIVITY;
            r1[2] = r6;
            r1 = r4.bind(r5)(r3, r1);
            r3 = r2;
            r3.return();
            return r1;
case 294:
            CatchBlockStart(arg_register=1);
            r2.return();
            throw r1;
case 301:
            return r0;
        }
    };
    var _closure0_slot18 = r3;
    r3 = function(a0, a1) { // Original name: isQuestRobloxRelated, environment: r7
        _fun78555: for(var _fun78555_ip = 0; ; ) switch(_fun78555_ip) {
case 0:
            r5 = a1;
            r0 = null;
            r1 = r0 != r5;
            if(!r1) { _fun78555_ip = 74; continue _fun78555 }
case 12:
            r6 = a0;
            r4 = r6.some;
            r2 = function(a0) { // Environment: r3
                r2 = _closure0_slot0;
                r1 = _closure0_slot2;
                r1 = r1[r20];
                r0 = undefined;
                r1 = r2.bind(r0)(r1);
                r2 = r1.ROBLOX_APPLICATION_ID;
                r1 = a0;
                r0 = r1 === r2;
                return r0;
            };
            r2 = r4.bind(r6)(r2);
            if(!r2) { _fun78555_ip = 71; continue _fun78555 }
case 39:
            r4 = _closure0_slot0;
            r3 = _closure0_slot2;
            r3 = r3[r21];
            r0 = undefined;
            r4 = r4.bind(r0)(r3);
            r3 = r4.isRobloxSubgame;
            r2 = r3.bind(r4)(r5);
case 71:
            r1 = r2;
case 74:
            return r1;
        }
    };
    var _closure0_slot19 = r3;
    r3 = global;
    r11 = r3.Object;
    r10 = r11.defineProperty;
    r9 = '__esModule';
    r3 = {'value': true};
    r3 = r10.bind(r11)(r4, r9, r3);
    r3 = r5[r0];
    r2 = undefined;
    r3 = r8.bind(r2)(r3);
    var _closure0_slot3 = r3;
    r3 = r5[r1];
    r3 = r8.bind(r2)(r3);
    r3 = r5[r2];
    r3 = r8.bind(r2)(r3);
    var _closure0_slot4 = r3;
    r3 = r5[r3];
    r3 = r8.bind(r2)(r3);
    var _closure0_slot5 = r3;
    r3 = r5[r4];
    r3 = r8.bind(r2)(r3);
    var _closure0_slot6 = r3;
    r3 = r5[r5];
    r3 = r8.bind(r2)(r3);
    var _closure0_slot7 = r3;
    r3 = r5[r6];
    r3 = r8.bind(r2)(r3);
    var _closure0_slot8 = r3;
    r3 = r5[r7];
    r3 = r8.bind(r2)(r3);
    var _closure0_slot9 = r3;
    r3 = r5[r8];
    r3 = r8.bind(r2)(r3);
    var _closure0_slot10 = r3;
    r3 = r5[r9];
    r3 = r8.bind(r2)(r3);
    var _closure0_slot11 = r3;
    r3 = r5[r10];
    r3 = r6.bind(r2)(r3);
    r9 = r3.DISCORD_APPLICATION_ID;
    var _closure0_slot12 = r9;
    r11 = r3.QuestsExperimentLocations;
    r3 = r5[r11];
    r3 = r6.bind(r2)(r3);
    r3 = r3.isLaunched;
    var _closure0_slot13 = r3;
    r3 = r5[r12];
    r3 = r8.bind(r2)(r3);
    r3 = r3.Millis;
    r3 = r3.MINUTE;
    r0 = 1;
    r1 = r0 * r3;
    var _closure0_slot14 = r1;
    r3 = r5[r12];
    r3 = r8.bind(r2)(r3);
    r3 = r3.Millis;
    r3 = r3.SECOND;
    r0 = r0 * r3;
    var _closure0_slot15 = r0;
    r3 = r5[r13];
    r10 = r6.bind(r2)(r3);
    r9 = r10.getQuestLogger;
    r3 = {'location': null};
    r11 = r11.QUESTS_MANAGER;
    r3[0] = r11;
    r3 = r9.bind(r10)(r3);
    var _closure0_slot16 = r3;
    r3 = r5[r22];
    r3 = r8.bind(r2)(r3);
    r3 = __createDerivedClass(r7, function() { // Original name: QuestProgressManager
        r1 = _env_r5_slot20;
        r3 = r1.__proto__;
        r2 = new.target;
        r12 = Object.create(r3.prototype);
        r13 = r3;
        r11 = r2;
        r1 = applyArguments(r14, r13, r12);
        var _closure0_slot0 = r1;
        r2 = {};
        r7 = _env_r5_slot0;
        r6 = _env_r5_slot2;
        r4 = r6[r23];
        r0 = undefined;
        r4 = r7.bind(r0)(r4);
        r4 = r4.FirstPartyQuestTaskTypes;
        r9 = r4.PLAY_ON_DESKTOP;
        r4 = global;
        r8 = r4.Map;
        r10 = Object.create(r8.prototype);
        r14 = r10;
        r8 = new r15[r8](r14);
        r8 = r8 instanceof Object ? r8 : r10;
        r2[9] = r8;
        r8 = r6[r23];
        r8 = r7.bind(r0)(r8);
        r8 = r8.FirstPartyQuestTaskTypes;
        r9 = r8.STREAM_ON_DESKTOP;
        r8 = r4.Map;
        r10 = Object.create(r8.prototype);
        r14 = r10;
        r8 = new r15[r8](r14);
        r8 = r8 instanceof Object ? r8 : r10;
        r2[9] = r8;
        r6 = r6[r23];
        r6 = r7.bind(r0)(r6);
        r6 = r6.FirstPartyQuestTaskTypes;
        r6 = r6.PLAY_ACTIVITY;
        r4 = r4.Map;
        r7 = Object.create(r4.prototype);
        r14 = r7;
        r4 = new r15[r4](r14);
        r4 = r4 instanceof Object ? r4 : r7;
        r2[6] = r4;
        r1['heartbeats'] = r2;
        r2 = function(a0) { // Original name: calculateHeartbeatDurationMs, environment: r5
            _fun131502: for(var _fun131502_ip = 0; ; ) switch(_fun131502_ip) {
case 0:
                r3 = _env_r2_slot10;
                r5 = r3.quests;
                r4 = r5.get;
                r3 = a0;
                r7 = r4.bind(r5)(r3);
                r1 = null;
                if(!(r1 != r7)) { _fun131502_ip = 199; continue _fun131502 }
case 35:
                r3 = r7.config;
                if(!(r1 != r3)) { _fun131502_ip = 199; continue _fun131502 }
case 48:
                r3 = r7.userStatus;
                if(!(r1 != r3)) { _fun131502_ip = 199; continue _fun131502 }
case 61:
                r8 = _env_r2_slot0;
                r3 = _env_r2_slot2;
                r4 = r3[r24];
                r1 = undefined;
                r6 = r8.bind(r1)(r4);
                r5 = r6.getQuestTaskDetails;
                r4 = r3[r23];
                r4 = r8.bind(r1)(r4);
                r4 = r4.FirstPartyQuestTaskTypesSets;
                r4 = r4.DESKTOP;
                r4 = r5.bind(r6)(r7, r4);
                r7 = r4.progressSeconds;
                r6 = r4.targetSeconds;
                r4 = global;
                r5 = r4.Math;
                r4 = r5.max;
                r6 = r6 - r7;
                r7 = _env_r2_slot1;
                r3 = r3[r12];
                r3 = r7.bind(r1)(r3);
                r3 = r3.Millis;
                r3 = r3.SECOND;
                r3 = r6 * r3;
                r0 = 0;
                r4 = r4.bind(r5)(r0, r3);
                r3 = _env_r2_slot14;
                if(!(!(r4 <= r3))) { _fun131502_ip = 189; continue _fun131502 }
case 187:
                _fun131502_ip = 197; continue _fun131502;
case 189:
                r1 = _env_r2_slot15;
                r3 = r4 + r1;
case 197:
                return r3;
case 199:
                r1 = _env_r2_slot14;
                return r1;
            }
        };
        r1['calculateHeartbeatDurationMs'] = r2;
        r2 = function(a0, a1, a2) { // Original name: initiateHeartbeat, environment: r3
            _fun131503: for(var _fun131503_ip = 0; ; ) switch(_fun131503_ip) {
case 0:
                r5 = a0;
                var _closure1_slot0 = r5;
                r2 = a1;
                var _closure1_slot1 = r2;
                r1 = a2;
                var _closure1_slot2 = r1;
                r1 = _closure0_slot0;
                r1 = r1.heartbeats;
                r2 = r1[r2];
                var _closure1_slot3 = r2;
                r1 = r2.has;
                r2 = r1.bind(r2)(r5);
                if(r2) { _fun131503_ip = 119; continue _fun131503 }
case 61:
                r2 = function() { // Original name: maybeSendHeartbeat, environment: r3
                    _fun147695: for(var _fun147695_ip = 0; ; ) switch(_fun147695_ip) {
case 0:
                        r6 = _closure0_slot0;
                        r3 = r6.getActivelyProgressingQuests;
                        r5 = _closure1_slot1;
                        r8 = r3.bind(r6)(r5);
                        r3 = r8.has;
                        r4 = _closure1_slot0;
                        r3 = r3.bind(r8)(r4);
                        if(r3) { _fun147695_ip = 110; continue _fun147695 }
case 44:
                        r10 = _closure0_slot16;
                        r9 = r10.log;
                        r3 = global;
                        r3 = r3.HermesInternal;
                        r12 = r3.concat;
                        r11 = ' is no longer actively progressing, terminating heartbeat';
                        r3 = '~ initiateHeartbeat -> Quest ';
                        r3 = r12.bind(r3)(r4, r11);
                        r3 = r9.bind(r10)(r3);
                        r3 = r6.terminateHeartbeat;
                        r3 = r3.bind(r6)(r4, r5);
                        _fun147695_ip = 527; continue _fun147695;
case 110:
                        r3 = r8.get;
                        r3 = r3.bind(r8)(r4);
                        r1 = null;
                        r2 = r3 == r1;
                        r0 = undefined;
                        r13 = undefined;
                        if(r2) { _fun147695_ip = 138; continue _fun147695 }
case 133:
                        r13 = r3.applicationId;
case 138:
                        if(!(r13 == r1)) { _fun147695_ip = 163; continue _fun147695 }
case 142:
                        r9 = _closure1_slot2;
                        r2 = r9 == r1;
                        r8 = undefined;
                        if(r2) { _fun147695_ip = 160; continue _fun147695 }
case 155:
                        r8 = r9.applicationId;
case 160:
                        r13 = r8;
case 163:
                        r2 = r3 == r1;
                        r11 = undefined;
                        if(r2) { _fun147695_ip = 178; continue _fun147695 }
case 172:
                        r11 = r3.executableFingerprint;
case 178:
                        r2 = r3 == r1;
                        r12 = undefined;
                        if(r2) { _fun147695_ip = 193; continue _fun147695 }
case 187:
                        r12 = r3.executablePath;
case 193:
                        if(!(r12 == r1)) { _fun147695_ip = 219; continue _fun147695 }
case 197:
                        r8 = _closure1_slot2;
                        r2 = r8 == r1;
                        r3 = undefined;
                        if(r2) { _fun147695_ip = 216; continue _fun147695 }
case 210:
                        r3 = r8.executablePath;
case 216:
                        r12 = r3;
case 219:
                        r9 = _closure0_slot0;
                        r8 = _closure0_slot2;
                        r10 = r8[r23];
                        r10 = r9.bind(r0)(r10);
                        r10 = r10.FirstPartyQuestTaskTypes;
                        r10 = r10.STREAM_ON_DESKTOP;
                        if(!(r5 !== r10)) { _fun147695_ip = 345; continue _fun147695 }
case 255:
                        r15 = _closure0_slot16;
                        r14 = r15.log;
                        r10 = global;
                        r10 = r10.HermesInternal;
                        r16 = r10.concat;
                        r10 = '~ initiateHeartbeat -> Sending heartbeat for questId: ';
                        r10 = r16.bind(r10)(r4);
                        r10 = r14.bind(r15)(r10);
                        r10 = r8[r17];
                        r15 = r9.bind(r0)(r10);
                        r14 = r15.sendHeartbeat;
                        r10 = {'questId': null, 'applicationId': null, 'executablePath': null, 'executableFingerprint': null};
                        r10[0] = r4;
                        r10[1] = r13;
                        r10[2] = r12;
                        r10[3] = r11;
                        r10 = r14.bind(r15)(r10);
                        _fun147695_ip = 475; continue _fun147695;
case 345:
                        r14 = _closure0_slot7;
                        r10 = r14.getCurrentUserActiveStream;
                        r15 = r10.bind(r14)();
                        if(!(r1 != r15)) { _fun147695_ip = 531; continue _fun147695 }
case 366:
                        r10 = r8[r25];
                        r14 = r9.bind(r0)(r10);
                        r10 = r14.encodeStreamKey;
                        r14 = r10.bind(r14)(r15);
                        r16 = _closure0_slot16;
                        r15 = r16.log;
                        r10 = global;
                        r10 = r10.HermesInternal;
                        r17 = r10.concat;
                        r10 = '~ initiateHeartbeat -> Sending heartbeat for questId: ';
                        r10 = r17.bind(r10)(r4);
                        r10 = r15.bind(r16)(r10);
                        r8 = r8[r17];
                        r10 = r9.bind(r0)(r8);
                        r9 = r10.sendHeartbeat;
                        r8 = {'questId': null, 'streamKey': null, 'applicationId': null, 'executablePath': null, 'executableFingerprint': null};
                        r8[0] = r4;
                        r8[1] = r14;
                        r8[2] = r13;
                        r8[3] = r12;
                        r8[4] = r11;
                        r8 = r9.bind(r10)(r8);
case 475:
                        r8 = r6.calculateHeartbeatDurationMs;
                        r11 = r8.bind(r6)(r4);
                        r8 = global;
                        r10 = r8.window;
                        r9 = r10.setTimeout;
                        r8 = _closure1_slot4;
                        r9 = r9.bind(r10)(r8, r11);
                        r8 = _closure1_slot3;
                        r7 = r8.set;
                        r7 = r7.bind(r8)(r4, r9);
case 527:
                        r0 = undefined;
                        return r0;
case 531:
                        r8 = _closure0_slot16;
                        r7 = r8.log;
                        r3 = global;
                        r3 = r3.HermesInternal;
                        r9 = r3.concat;
                        r3 = '~ initiateHeartbeat -> Attempted to beat for stream quest but no active stream, terminating heartbeat for questId: ';
                        r3 = r9.bind(r3)(r4);
                        r3 = r7.bind(r8)(r3);
                        r3 = r6.terminateHeartbeat;
                        r3 = r3.bind(r6)(r4, r5);
                        r0 = undefined;
                        return r0;
                    }
                };
                var _closure1_slot4 = r2;
                r6 = _closure0_slot16;
                r4 = r6.log;
                r3 = global;
                r3 = r3.HermesInternal;
                r7 = r3.concat;
                r3 = '~ initiateHeartbeat -> Initiating heartbeat for Quest ';
                r3 = r7.bind(r3)(r5);
                r3 = r4.bind(r6)(r3);
                r0 = undefined;
                r0 = r2.bind(r0)();
                _fun131503_ip = 158; continue _fun131503;
case 119:
                r3 = _closure0_slot16;
                r2 = r3.log;
                r1 = global;
                r1 = r1.HermesInternal;
                r4 = r1.concat;
                r1 = '~ initiateHeartbeat -> Heartbeat already initiated for questId: ';
                r1 = r4.bind(r1)(r5);
                r1 = r2.bind(r3)(r1);
case 158:
                r0 = undefined;
                return r0;
            }
        };
        r1['initiateHeartbeat'] = r2;
        r2 = function(a0, a1) { // Original name: terminateHeartbeat, environment: r3
            _fun131504: for(var _fun131504_ip = 0; ; ) switch(_fun131504_ip) {
case 0:
                r7 = a0;
                r4 = _closure0_slot0;
                r5 = r4.heartbeats;
                r4 = a1;
                r10 = r5[r4];
                r5 = _closure0_slot10;
                r9 = r5.quests;
                r5 = r10.get;
                r12 = r5.bind(r10)(r7);
                r2 = null;
                if(!(r2 != r12)) { _fun131504_ip = 305; continue _fun131504 }
case 55:
                r8 = _closure0_slot16;
                r11 = r8.log;
                r5 = global;
                r6 = r5.HermesInternal;
                r13 = r6.concat;
                r6 = '~ terminateHeartbeat -> Terminating heartbeat for questId: ';
                r6 = r13.bind(r6)(r7);
                r6 = r11.bind(r8)(r6);
                r11 = r5.window;
                r6 = r11.clearTimeout;
                r6 = r6.bind(r11)(r12);
                r6 = r10.delete;
                r6 = r6.bind(r10)(r7);
                r6 = r9.get;
                r6 = r6.bind(r9)(r7);
                r1 = r2 != r6;
                if(!r1) { _fun131504_ip = 225; continue _fun131504 }
case 138:
                r10 = _closure0_slot0;
                r9 = _closure0_slot2;
                r9 = r9[r14];
                r0 = undefined;
                r10 = r10.bind(r0)(r9);
                r9 = r10.isQuestExpired;
                r9 = r9.bind(r10)(r6);
                r0 = !r9;
                if(r9) { _fun131504_ip = 184; continue _fun131504 }
case 174:
                r9 = r6.userStatus;
                r0 = r2 != r9;
case 184:
                if(!r0) { _fun131504_ip = 203; continue _fun131504 }
case 187:
                r9 = r6.userStatus;
                r9 = r9.enrolledAt;
                r0 = r2 != r9;
case 203:
                if(!r0) { _fun131504_ip = 222; continue _fun131504 }
case 206:
                r6 = r6.userStatus;
                r6 = r6.completedAt;
                r0 = r2 == r6;
case 222:
                r1 = r0;
case 225:
                if(!r1) { _fun131504_ip = 305; continue _fun131504 }
case 228:
                r6 = r8.log;
                r5 = r5.HermesInternal;
                r9 = r5.concat;
                r5 = '~ terminateHeartbeat -> Sending terminal heartbeat for questId: ';
                r5 = r9.bind(r5)(r7);
                r5 = r6.bind(r8)(r5);
                r5 = _closure0_slot0;
                r4 = _closure0_slot2;
                r4 = r4[r17];
                r1 = undefined;
                r6 = r5.bind(r1)(r4);
                r5 = r6.sendHeartbeat;
                r4 = {'questId': null, 'terminal': true};
                r4[0] = r7;
                r4 = r5.bind(r6)(r4);
case 305:
                r1 = undefined;
                return r1;
            }
        };
        r1['terminateHeartbeat'] = r2;
        r2 = function(a0) { // Original name: handleSendHeartbeatSuccess, environment: r3
            _fun131505: for(var _fun131505_ip = 0; ; ) switch(_fun131505_ip) {
case 0:
                r0 = a0;
                r4 = r0.questId;
                r1 = r0.userStatus;
                r5 = _env_r0_slot16;
                r3 = r5.log;
                r0 = global;
                r2 = r0.HermesInternal;
                r7 = r2.concat;
                r6 = ')';
                r2 = '~ handleSendHeartbeatSuccess -> Heartbeat succeeded for questId: ';
                r2 = r7.bind(r2)(r4, r6);
                r2 = r3.bind(r5)(r2);
                r2 = r1.completedAt;
                r1 = null;
                if(!(r1 != r2)) { _fun131505_ip = 192; continue _fun131505 }
case 76:
                r2 = r5.log;
                r1 = r0.HermesInternal;
                r7 = r1.concat;
                r6 = ' completed, terminating any heartbeats for it';
                r1 = '~ handleSendHeartbeatSuccess -> Quest ';
                r1 = r7.bind(r1)(r4, r6);
                r1 = r2.bind(r5)(r1);
                r2 = r0.Object;
                r1 = r2.keys;
                r0 = _closure0_slot0;
                r0 = r0.heartbeats;
                r0 = r1.bind(r2)(r0);
                r2 = r0;
                r1 = r2[Symbol.iterator];
                r2 = r1().next;
                r0 = undefined;
case 153:
                r5 = r2;
                r7 = r5().value;
                r5 = r1;
                if(!(r5 !== r0)) { _fun131505_ip = 192; continue _fun131505 }
case 167:
                r6 = _closure0_slot0;
                r5 = r6.terminateHeartbeat;
                r5 = r5.bind(r6)(r4, r7);
                _fun131505_ip = 153; continue _fun131505;
case 185:
                CatchBlockStart(arg_register=0);
                r1.return();
                throw r0;
case 192:
                r0 = undefined;
                return r0;
            }
        };
        r1['handleSendHeartbeatSuccess'] = r2;
        r2 = function(a0) { // Original name: handleSendHeartbeatFailure, environment: r5
            r1 = a0;
            r5 = r1.questId;
            r3 = _env_r1_slot16;
            r2 = r3.log;
            r1 = global;
            r1 = r1.HermesInternal;
            r4 = r1.concat;
            r1 = '~ handleSendHeartbeatFailure -> Heartbeat failed for questId: ';
            r1 = r4.bind(r1)(r5);
            r1 = r2.bind(r3)(r1);
            r0 = undefined;
            return r0;
        };
        r1['handleSendHeartbeatFailure'] = r2;
        r2 = {'QUESTS_FETCH_CURRENT_QUESTS_SUCCESS': null, 'QUESTS_ENROLL_SUCCESS': null, 'QUESTS_SEND_HEARTBEAT_SUCCESS': null, 'QUESTS_SEND_HEARTBEAT_FAILURE': null, 'QUESTS_PREVIEW_UPDATE_SUCCESS': null, 'GAME_FETCH_SUCCESS': null, 'APPLICATIONS_FETCH_SUCCESS': null, 'RUNNING_GAMES_CHANGE': null, 'RUNNING_NON_GAMES_CHANGE': null, 'LOCAL_ACTIVITY_UPDATE': null, 'RPC_APP_DISCONNECTED': null, 'STREAM_START': null, 'STREAM_CREATE': null, 'STREAM_CLOSE': null, 'PASSIVE_UPDATE_V2': null, 'VOICE_STATE_UPDATES': null, 'EMBEDDED_ACTIVITY_LAUNCH_SUCCESS': null, 'FRAME_LAUNCH': null, 'FRAME_STOP': null, 'EMBEDDED_ACTIVITY_UPDATE_V2': null, 'QUEST_APPLICATION_START_TIMER': null};
        r4 = function() { // Original name: QUESTS_FETCH_CURRENT_QUESTS_SUCCESS, environment: r3
            r4 = _closure0_slot0;
            r3 = r4.syncHeartbeats;
            r5 = _closure0_slot0;
            r1 = _closure0_slot2;
            r2 = r1[r23];
            r0 = undefined;
            r2 = r5.bind(r0)(r2);
            r2 = r2.FirstPartyQuestTaskTypes;
            r6 = r2.PLAY_ON_DESKTOP;
            r2 = new Array(2);
            r2[0] = r6;
            r1 = r1[r23];
            r1 = r5.bind(r0)(r1);
            r1 = r1.FirstPartyQuestTaskTypes;
            r1 = r1.STREAM_ON_DESKTOP;
            r2[1] = r1;
            r1 = 'QUESTS_FETCH_CURRENT_QUESTS_SUCCESS';
            r1 = r3.bind(r4)(r2, r1);
            return r1;
        };
        r2[0] = r4;
        r4 = function() { // Original name: QUESTS_ENROLL_SUCCESS, environment: r3
            r5 = _closure0_slot0;
            r4 = r5.syncHeartbeats;
            r6 = _closure0_slot0;
            r2 = _closure0_slot2;
            r3 = r2[r23];
            r0 = undefined;
            r3 = r6.bind(r0)(r3);
            r3 = r3.FirstPartyQuestTaskTypes;
            r7 = r3.PLAY_ON_DESKTOP;
            r3 = new Array(3);
            r3[0] = r7;
            r7 = r2[r23];
            r7 = r6.bind(r0)(r7);
            r7 = r7.FirstPartyQuestTaskTypes;
            r7 = r7.STREAM_ON_DESKTOP;
            r3[1] = r7;
            r2 = r2[r23];
            r2 = r6.bind(r0)(r2);
            r2 = r2.FirstPartyQuestTaskTypes;
            r2 = r2.PLAY_ACTIVITY;
            r3[2] = r2;
            r2 = 'QUESTS_ENROLL_SUCCESS';
            r1 = function(a0) { // Environment: r1
                _fun147696: for(var _fun147696_ip = 0; ; ) switch(_fun147696_ip) {
case 0:
                    r3 = a0;
                    r0 = null;
                    r1 = r0 != r3;
                    if(!r1) { _fun147696_ip = 68; continue _fun147696 }
case 12:
                    r3 = r3.config;
                    r4 = r3.features;
                    r3 = r4.includes;
                    r5 = _closure0_slot0;
                    r2 = _closure0_slot2;
                    r2 = r2[r16];
                    r0 = undefined;
                    r2 = r5.bind(r0)(r2);
                    r2 = r2.QuestVariants;
                    r2 = r2.MANUAL_HEARTBEAT_INITIALIZATION;
                    r1 = r3.bind(r4)(r2);
case 68:
                    r0 = !r1;
                    return r0;
                }
            };
            r1 = r4.bind(r5)(r3, r2, r1);
            return r1;
        };
        r2[1] = r4;
        r4 = r1.handleSendHeartbeatSuccess;
        r2[2] = r4;
        r4 = r1.handleSendHeartbeatFailure;
        r2[3] = r4;
        r4 = function() { // Original name: QUESTS_PREVIEW_UPDATE_SUCCESS, environment: r3
            r4 = _closure0_slot0;
            r3 = r4.syncHeartbeats;
            r5 = _closure0_slot0;
            r1 = _closure0_slot2;
            r2 = r1[r23];
            r0 = undefined;
            r2 = r5.bind(r0)(r2);
            r2 = r2.FirstPartyQuestTaskTypes;
            r6 = r2.PLAY_ON_DESKTOP;
            r2 = new Array(3);
            r2[0] = r6;
            r6 = r1[r23];
            r6 = r5.bind(r0)(r6);
            r6 = r6.FirstPartyQuestTaskTypes;
            r6 = r6.STREAM_ON_DESKTOP;
            r2[1] = r6;
            r1 = r1[r23];
            r1 = r5.bind(r0)(r1);
            r1 = r1.FirstPartyQuestTaskTypes;
            r1 = r1.PLAY_ACTIVITY;
            r2[2] = r1;
            r1 = 'QUESTS_PREVIEW_UPDATE_SUCCESS';
            r1 = r3.bind(r4)(r2, r1);
            return r1;
        };
        r2[4] = r4;
        r4 = function() { // Original name: GAME_FETCH_SUCCESS, environment: r3
            r2 = _env_r1_slot1;
            r1 = _env_r1_slot2;
            r1 = r1[r29];
            r0 = undefined;
            r3 = r2.bind(r0)(r1);
            r2 = r3.wait;
            r1 = function() { // Environment: r1
                r4 = _closure0_slot0;
                r3 = r4.syncHeartbeats;
                r2 = _closure0_slot0;
                r1 = _closure0_slot2;
                r1 = r1[r23];
                r0 = undefined;
                r1 = r2.bind(r0)(r1);
                r1 = r1.FirstPartyQuestTaskTypes;
                r1 = r1.PLAY_ON_DESKTOP;
                r2 = new Array(1);
                r2[0] = r1;
                r1 = 'GAME_FETCH_SUCCESS';
                r1 = r3.bind(r4)(r2, r1);
                return r0;
            };
            r1 = r2.bind(r3)(r1);
            return r1;
        };
        r2[5] = r4;
        r4 = function() { // Original name: APPLICATIONS_FETCH_SUCCESS, environment: r3
            r2 = _env_r1_slot1;
            r1 = _env_r1_slot2;
            r1 = r1[r29];
            r0 = undefined;
            r3 = r2.bind(r0)(r1);
            r2 = r3.wait;
            r1 = function() { // Environment: r1
                r4 = _closure0_slot0;
                r3 = r4.syncHeartbeats;
                r2 = _closure0_slot0;
                r1 = _closure0_slot2;
                r1 = r1[r23];
                r0 = undefined;
                r1 = r2.bind(r0)(r1);
                r1 = r1.FirstPartyQuestTaskTypes;
                r1 = r1.PLAY_ON_DESKTOP;
                r2 = new Array(1);
                r2[0] = r1;
                r1 = 'APPLICATIONS_FETCH_SUCCESS';
                r1 = r3.bind(r4)(r2, r1);
                return r0;
            };
            r1 = r2.bind(r3)(r1);
            return r1;
        };
        r2[6] = r4;
        r4 = function() { // Original name: RUNNING_GAMES_CHANGE, environment: r3
            r4 = _closure0_slot0;
            r3 = r4.syncHeartbeats;
            r2 = _closure0_slot0;
            r1 = _closure0_slot2;
            r1 = r1[r23];
            r0 = undefined;
            r1 = r2.bind(r0)(r1);
            r1 = r1.FirstPartyQuestTaskTypes;
            r1 = r1.PLAY_ON_DESKTOP;
            r2 = new Array(1);
            r2[0] = r1;
            r1 = 'RUNNING_GAMES_CHANGE';
            r1 = r3.bind(r4)(r2, r1);
            return r1;
        };
        r2[7] = r4;
        r4 = function() { // Original name: RUNNING_NON_GAMES_CHANGE, environment: r3
            r4 = _closure0_slot0;
            r3 = r4.syncHeartbeats;
            r2 = _closure0_slot0;
            r1 = _closure0_slot2;
            r1 = r1[r23];
            r0 = undefined;
            r1 = r2.bind(r0)(r1);
            r1 = r1.FirstPartyQuestTaskTypes;
            r1 = r1.PLAY_ON_DESKTOP;
            r2 = new Array(1);
            r2[0] = r1;
            r1 = 'RUNNING_NON_GAMES_CHANGE';
            r1 = r3.bind(r4)(r2, r1);
            return r1;
        };
        r2[8] = r4;
        r4 = function() { // Original name: LOCAL_ACTIVITY_UPDATE, environment: r3
            r2 = _env_r1_slot1;
            r1 = _env_r1_slot2;
            r1 = r1[r29];
            r0 = undefined;
            r3 = r2.bind(r0)(r1);
            r2 = r3.wait;
            r1 = function() { // Environment: r1
                r4 = _closure0_slot0;
                r3 = r4.syncHeartbeats;
                r2 = _closure0_slot0;
                r1 = _closure0_slot2;
                r1 = r1[r23];
                r0 = undefined;
                r1 = r2.bind(r0)(r1);
                r1 = r1.FirstPartyQuestTaskTypes;
                r1 = r1.PLAY_ON_DESKTOP;
                r2 = new Array(1);
                r2[0] = r1;
                r1 = 'LOCAL_ACTIVITY_UPDATE';
                r1 = r3.bind(r4)(r2, r1);
                return r0;
            };
            r1 = r2.bind(r3)(r1);
            return r1;
        };
        r2[9] = r4;
        r4 = function() { // Original name: RPC_APP_DISCONNECTED, environment: r3
            r2 = _env_r1_slot1;
            r1 = _env_r1_slot2;
            r1 = r1[r29];
            r0 = undefined;
            r3 = r2.bind(r0)(r1);
            r2 = r3.wait;
            r1 = function() { // Environment: r1
                r4 = _closure0_slot0;
                r3 = r4.syncHeartbeats;
                r2 = _closure0_slot0;
                r1 = _closure0_slot2;
                r1 = r1[r23];
                r0 = undefined;
                r1 = r2.bind(r0)(r1);
                r1 = r1.FirstPartyQuestTaskTypes;
                r1 = r1.PLAY_ON_DESKTOP;
                r2 = new Array(1);
                r2[0] = r1;
                r1 = 'RPC_APP_DISCONNECTED';
                r1 = r3.bind(r4)(r2, r1);
                return r0;
            };
            r1 = r2.bind(r3)(r1);
            return r1;
        };
        r2[10] = r4;
        r4 = function() { // Original name: STREAM_START, environment: r3
            r4 = _closure0_slot0;
            r3 = r4.syncHeartbeats;
            r2 = _closure0_slot0;
            r1 = _closure0_slot2;
            r1 = r1[r23];
            r0 = undefined;
            r1 = r2.bind(r0)(r1);
            r1 = r1.FirstPartyQuestTaskTypes;
            r1 = r1.STREAM_ON_DESKTOP;
            r2 = new Array(1);
            r2[0] = r1;
            r1 = 'STREAM_START';
            r1 = r3.bind(r4)(r2, r1);
            return r1;
        };
        r2[11] = r4;
        r4 = function() { // Original name: STREAM_CREATE, environment: r3
            r4 = _closure0_slot0;
            r3 = r4.syncHeartbeats;
            r2 = _closure0_slot0;
            r1 = _closure0_slot2;
            r1 = r1[r23];
            r0 = undefined;
            r1 = r2.bind(r0)(r1);
            r1 = r1.FirstPartyQuestTaskTypes;
            r1 = r1.STREAM_ON_DESKTOP;
            r2 = new Array(1);
            r2[0] = r1;
            r1 = 'STREAM_CREATE';
            r1 = r3.bind(r4)(r2, r1);
            return r1;
        };
        r2[12] = r4;
        r4 = function() { // Original name: STREAM_CLOSE, environment: r3
            r4 = _closure0_slot0;
            r3 = r4.syncHeartbeats;
            r2 = _closure0_slot0;
            r1 = _closure0_slot2;
            r1 = r1[r23];
            r0 = undefined;
            r1 = r2.bind(r0)(r1);
            r1 = r1.FirstPartyQuestTaskTypes;
            r1 = r1.STREAM_ON_DESKTOP;
            r2 = new Array(1);
            r2[0] = r1;
            r1 = 'STREAM_CLOSE';
            r1 = r3.bind(r4)(r2, r1);
            return r1;
        };
        r2[13] = r4;
        r4 = function() { // Original name: PASSIVE_UPDATE_V2, environment: r3
            r4 = _closure0_slot0;
            r3 = r4.syncHeartbeats;
            r2 = _closure0_slot0;
            r1 = _closure0_slot2;
            r1 = r1[r23];
            r0 = undefined;
            r1 = r2.bind(r0)(r1);
            r1 = r1.FirstPartyQuestTaskTypes;
            r1 = r1.STREAM_ON_DESKTOP;
            r2 = new Array(1);
            r2[0] = r1;
            r1 = 'PASSIVE_UPDATE_V2';
            r1 = r3.bind(r4)(r2, r1);
            return r1;
        };
        r2[14] = r4;
        r4 = function() { // Original name: VOICE_STATE_UPDATES, environment: r3
            r4 = _closure0_slot0;
            r3 = r4.syncHeartbeats;
            r2 = _closure0_slot0;
            r1 = _closure0_slot2;
            r1 = r1[r23];
            r0 = undefined;
            r1 = r2.bind(r0)(r1);
            r1 = r1.FirstPartyQuestTaskTypes;
            r1 = r1.STREAM_ON_DESKTOP;
            r2 = new Array(1);
            r2[0] = r1;
            r1 = 'VOICE_STATE_UPDATES';
            r1 = r3.bind(r4)(r2, r1);
            return r1;
        };
        r2[15] = r4;
        r4 = function(a0) { // Original name: EMBEDDED_ACTIVITY_LAUNCH_SUCCESS, environment: r5
            r2 = a0;
            r3 = r2.applicationId;
            r2 = _env_r2_slot18;
            r0 = 0;
            r2 = r2.bind(r0)(r3);
            r1 = undefined;
            return r1;
        };
        r2[16] = r4;
        var _closure0_slot0 = r0;
        var _closure0_slot1 = r1;
        r6 = _env_r5_slot3;
        r5 = function(a0) { // Environment: r4
            r2 = a0;
            var _closure1_slot0 = r2;
            r0 = 0;
            var _closure1_slot3 = r0;
            var _closure1_slot4 = r0;
            r1 = function* (a0) { // Original name: ?anon_0_, environment: r1
                _fun152135: for(var _fun152135_ip = 0; ; ) switch(_fun152135_ip) {
case 0:
                    r0 = _closure1_slot4;
                    r2 = r0;
                    r4 = 2;
                    if(!(r0 !== r4)) { _fun152135_ip = 465; continue _fun152135 }
case 20:
                    r0 = arguments[1];
                    r3 = a0;
                    r5 = r2;
                    r6 = 3;
                    if(!(r5 !== r6)) { _fun152135_ip = 424; continue _fun152135 }
case 39:
                    r2 = r4;
                    _closure1_slot4 = r4;
                    r7 = _closure1_slot3;
                    r9 = 0;
                    if(!(r9 !== r7)) { _fun152135_ip = 306; continue _fun152135 }
case 59:
                    r5 = 1;
                    if(!(r5 !== r7)) { _fun152135_ip = 214; continue _fun152135 }
case 69:
                    if(!(r3 !== r5)) { _fun152135_ip = 205; continue _fun152135 }
case 76:
                    if(!(r3 !== r4)) { _fun152135_ip = 182; continue _fun152135 }
case 80:
                    r7 = _closure1_slot1;
                    r8 = _closure1_slot2;
                    r12 = _env_r8_slot1;
                    r11 = r12.syncHeartbeats;
                    r13 = _closure0_slot0;
                    r8 = _closure0_slot2;
                    r10 = r8[r23];
                    r8 = undefined;
                    r8 = r13.bind(r8)(r10);
                    r8 = r8.FirstPartyQuestTaskTypes;
                    r8 = r8.PLAY_ACTIVITY;
                    r10 = new Array(1);
                    r10[0] = r8;
                    r8 = 'FRAME_LAUNCH';
                    r7 = function(a0) { // Environment: r7
                        _fun153352: for(var _fun153352_ip = 0; ; ) switch(_fun153352_ip) {
case 0:
                            r3 = a0;
                            r0 = null;
                            r1 = r0 != r3;
                            if(!r1) { _fun153352_ip = 68; continue _fun153352 }
case 12:
                            r3 = r3.config;
                            r4 = r3.features;
                            r3 = r4.includes;
                            r5 = _closure0_slot0;
                            r2 = _closure0_slot2;
                            r2 = r2[r16];
                            r0 = undefined;
                            r2 = r5.bind(r0)(r2);
                            r2 = r2.QuestVariants;
                            r2 = r2.MANUAL_HEARTBEAT_INITIALIZATION;
                            r1 = r3.bind(r4)(r2);
case 68:
                            r0 = !r1;
                            return r0;
                        }
                    };
                    r7 = r11.bind(r12)(r10, r8, r7);
                    r2 = r6;
                    _closure1_slot4 = r6;
                    r7 = {'value': undefined, 'done': true};
                    return r7;
case 182:
                    r2 = r6;
                    _closure1_slot4 = r6;
                    r7 = {'value': null, 'done': true};
                    r7[0] = r0;
                    return r7;
case 205:
                    r2 = r6;
                    _closure1_slot4 = r6;
                    throw r0;
case 214:
                    if(!(r3 !== r5)) { _fun152135_ip = 297; continue _fun152135 }
case 218:
                    if(!(r3 !== r4)) { _fun152135_ip = 274; continue _fun152135 }
case 222:
                    r7 = _closure1_slot1;
                    r8 = _closure1_slot2;
                    r8 = _closure0_slot18;
                    r7 = _closure0_slot0;
                    r7 = r8.bind(r9)(r7);
                    _closure1_slot3 = r4;
                    r2 = r5;
                    _closure1_slot4 = r5;
                    r5 = {'value': null, 'done': false};
                    r5[0] = r7;
                    return r5;
case 274:
                    r2 = r6;
                    _closure1_slot4 = r6;
                    r5 = {'value': null, 'done': true};
                    r5[0] = r0;
                    return r5;
case 297:
                    r2 = r6;
                    _closure1_slot4 = r6;
                    throw r0;
case 306:
                    r5 = 1;
                    if(!(r3 !== r5)) { _fun152135_ip = 404; continue _fun152135 }
case 313:
                    if(!(r3 !== r4)) { _fun152135_ip = 381; continue _fun152135 }
case 317:
                    var _closure1_slot2 = r7;
                    var _closure1_slot1 = r8;
                    r7 = undefined;
                    var _closure1_slot0 = r7;
                    r7 = _closure1_slot0;
                    r7 = r7.applicationId;
                    _closure1_slot0 = r7;
                    _closure1_slot3 = r5;
                    r2 = r5;
                    _closure1_slot4 = r5;
                    r5 = {'value': undefined, 'done': false};
                    return r5;
case 381:
                    r2 = r6;
                    _closure1_slot4 = r6;
                    r5 = {'value': null, 'done': true};
                    r5[0] = r0;
                    return r5;
case 404:
                    r2 = r6;
                    _closure1_slot4 = r6;
                    throw r0;
case 413:
                    CatchBlockStart(arg_register=5);
                    r2 = r6;
                    _closure1_slot4 = r6;
                    throw r5;
case 424:
                    r5 = 1;
                    if(!(r3 !== r5)) { _fun152135_ip = 463; continue _fun152135 }
case 431:
                    if(!(r3 !== r4)) { _fun152135_ip = 447; continue _fun152135 }
case 435:
                    r3 = {'value': undefined, 'done': true};
                    return r3;
case 447:
                    r3 = {'value': null, 'done': true};
                    r3[0] = r0;
                    return r3;
case 463:
                    throw r0;
case 465:
                    r0 = 3;
                    r2 = r0;
                    _closure1_slot4 = r0;
                    r16 = 'Generator functions may not be called on executing generators';
                    r0 = throwTypeError(r17);
                }
            };
            r2 = r1.next;
            r2 = r2.bind(r1)();
            return r1;
        };
        r5 = r6.bind(r0)(r5);
        _closure0_slot0 = r5;
        r4 = function(a0) { // Original name: FRAME_LAUNCH, environment: r4
            _fun147702: for(var _fun147702_ip = 0; ; ) switch(_fun147702_ip) {
case 0:
                r1 = undefined;
                r3 = this;
                r2 = _closure0_slot0;
                r4 = r2.apply;
                if(r4) { _fun147702_ip = 31; continue _fun147702 }
case 21:
                r1 = arguments;
                r1 = r4.bind(r2)(r3, r1);
                _fun147702_ip = 41; continue _fun147702;
case 31:
                r6 = r2;
                r5 = r3;
                r1 = applyArguments(r7, r6);
case 41:
                return r1;
            }
        };
        r2[17] = r4;
        r4 = function() { // Original name: FRAME_STOP, environment: r3
            r4 = _closure0_slot0;
            r3 = r4.syncHeartbeats;
            r2 = _closure0_slot0;
            r1 = _closure0_slot2;
            r1 = r1[r23];
            r0 = undefined;
            r1 = r2.bind(r0)(r1);
            r1 = r1.FirstPartyQuestTaskTypes;
            r1 = r1.PLAY_ACTIVITY;
            r2 = new Array(1);
            r2[0] = r1;
            r1 = 'FRAME_STOP';
            r1 = r3.bind(r4)(r2, r1);
            return r0;
        };
        r2[18] = r4;
        r4 = function() { // Original name: EMBEDDED_ACTIVITY_UPDATE_V2, environment: r3
            r5 = _closure0_slot0;
            r4 = r5.syncHeartbeats;
            r3 = _closure0_slot0;
            r2 = _closure0_slot2;
            r2 = r2[r23];
            r0 = undefined;
            r2 = r3.bind(r0)(r2);
            r2 = r2.FirstPartyQuestTaskTypes;
            r2 = r2.PLAY_ACTIVITY;
            r3 = new Array(1);
            r3[0] = r2;
            r2 = 'EMBEDDED_ACTIVITY_UPDATE_V2';
            r1 = function(a0) { // Environment: r1
                _fun147703: for(var _fun147703_ip = 0; ; ) switch(_fun147703_ip) {
case 0:
                    r3 = a0;
                    r0 = null;
                    r1 = r0 != r3;
                    if(!r1) { _fun147703_ip = 68; continue _fun147703 }
case 12:
                    r3 = r3.config;
                    r4 = r3.features;
                    r3 = r4.includes;
                    r5 = _closure0_slot0;
                    r2 = _closure0_slot2;
                    r2 = r2[r16];
                    r0 = undefined;
                    r2 = r5.bind(r0)(r2);
                    r2 = r2.QuestVariants;
                    r2 = r2.MANUAL_HEARTBEAT_INITIALIZATION;
                    r1 = r3.bind(r4)(r2);
case 68:
                    r0 = !r1;
                    return r0;
                }
            };
            r1 = r4.bind(r5)(r3, r2, r1);
            return r0;
        };
        r2[19] = r4;
        r3 = function(a0) { // Original name: QUEST_APPLICATION_START_TIMER, environment: r3
            NewInnerEnvironmentToken(dest_register=1, parent_register=2, number_of_slots=1);
            r3 = a0;
            r3 = r3.questId;
            _env_r1_slot0 = r3;
            r5 = _closure0_slot0;
            r4 = r5.syncHeartbeats;
            r3 = _env_r2_slot0;
            r2 = _env_r2_slot2;
            r2 = r2[r23];
            r0 = undefined;
            r2 = r3.bind(r0)(r2);
            r2 = r2.FirstPartyQuestTaskTypes;
            r2 = r2.PLAY_ACTIVITY;
            r3 = new Array(1);
            r3[0] = r2;
            r2 = 'QUEST_APPLICATION_START_TIMER';
            r1 = function(a0) { // Environment: r1
                _fun147704: for(var _fun147704_ip = 0; ; ) switch(_fun147704_ip) {
case 0:
                    r5 = a0;
                    r0 = null;
                    r2 = r0 != r5;
                    if(!r2) { _fun147704_ip = 28; continue _fun147704 }
case 12:
                    r4 = r5.id;
                    r3 = _env_r3_slot0;
                    r2 = r4 === r3;
case 28:
                    if(!r2) { _fun147704_ip = 97; continue _fun147704 }
case 31:
                    r3 = r0 != r5;
                    if(!r3) { _fun147704_ip = 94; continue _fun147704 }
case 38:
                    r5 = r5.config;
                    r6 = r5.features;
                    r5 = r6.includes;
                    r7 = _env_r4_slot0;
                    r4 = _env_r4_slot2;
                    r4 = r4[r16];
                    r0 = undefined;
                    r4 = r7.bind(r0)(r4);
                    r4 = r4.QuestVariants;
                    r4 = r4.MANUAL_HEARTBEAT_INITIALIZATION;
                    r3 = r5.bind(r6)(r4);
case 94:
                    r2 = r3;
case 97:
                    return r2;
                }
            };
            r1 = r4.bind(r5)(r3, r2, r1);
            return r0;
        };
        r2[20] = r3;
        r1['actions'] = r2;
        return r1;
    });
    r8 = r3.prototype;
    r10 = r8;
    r9 = 'syncHeartbeats';
    r8 = function(a0, a1, a2) { // Original name: syncHeartbeats
        r0 = undefined;
        return r0;
    };
    r10[9] = r8;
    r9 = 'getActivelyProgressingQuests';
    r8 = function(a0) { // Original name: getActivelyProgressingQuests, environment: r7
        _fun78558: for(var _fun78558_ip = 0; ; ) switch(_fun78558_ip) {
case 0:
            r2 = this;
            r4 = a0;
            r3 = _closure0_slot0;
            r1 = _closure0_slot2;
            r5 = r1[r23];
            r0 = undefined;
            r5 = r3.bind(r0)(r5);
            r5 = r5.FirstPartyQuestTaskTypes;
            r5 = r5.PLAY_ON_DESKTOP;
            if(!(r5 !== r4)) { _fun78558_ip = 144; continue _fun78558 }
case 44:
            r5 = r1[r23];
            r5 = r3.bind(r0)(r5);
            r5 = r5.FirstPartyQuestTaskTypes;
            r5 = r5.STREAM_ON_DESKTOP;
            if(!(r5 !== r4)) { _fun78558_ip = 130; continue _fun78558 }
case 69:
            r5 = r1[r23];
            r5 = r3.bind(r0)(r5);
            r5 = r5.FirstPartyQuestTaskTypes;
            r5 = r5.PLAY_ACTIVITY;
            if(!(r5 !== r4)) { _fun78558_ip = 116; continue _fun78558 }
case 94:
            r1 = r1[r26];
            r3 = r3.bind(r0)(r1);
            r1 = r3.assertNever;
            r1 = r1.bind(r3)(r4);
            return r0;
case 116:
            r1 = r2.getActivelyProgressingActivityQuests;
            r1 = r1.bind(r2)();
            return r1;
case 130:
            r1 = r2.getActivelyProgressingStreamOnDesktopQuests;
            r1 = r1.bind(r2)();
            return r1;
case 144:
            r1 = r2.getActivelyProgressingPlayOnDesktopQuests;
            r1 = r1.bind(r2)();
            return r1;
        }
    };
    r10[9] = r8;
    r9 = 'getActivelyProgressingPlayOnDesktopQuests';
    r8 = function() { // Original name: getActivelyProgressingPlayOnDesktopQuests, environment: r7
        _fun78559: for(var _fun78559_ip = 0; ; ) switch(_fun78559_ip) {
case 0:
            r7 = undefined;
            r13 = undefined;
            r12 = undefined;
            r11 = undefined;
            r9 = undefined;
            r1 = global;
            r0 = r1.Map;
            r4 = Object.create(r0.prototype);
            r22 = r4;
            r0 = new r23[r0](r22);
            r0 = r0 instanceof Object ? r0 : r4;
            var _closure1_slot0 = r0;
            r5 = _closure0_slot6;
            r4 = r5.getRunningGames;
            r8 = r4.bind(r5)();
            r4 = r5.getRunningNonGames;
            r10 = r4.bind(r5)();
            r4 = _closure0_slot10;
            r4 = r4.quests;
            var _closure1_slot1 = r4;
            r14 = _closure0_slot16;
            r6 = r14.log;
            r19 = 'Running non-games: ';
            r21 = '~ getActivelyProgressingPlayOnDesktopQuestIds -> Running games: ';
            r22 = r14;
            r20 = r8;
            r18 = r10;
            r4 = r23[r6](r22, r21, r20, r19, r18);
            r5 = {};
            var _closure1_slot2 = r5;
            r4 = r8;
            r6 = r4[Symbol.iterator];
            r4 = r6().next;
            r8 = null;
case 130:
            r14 = r4;
            r14 = r14().value;
            r15 = r6;
            if(!(r15 !== r7)) { _fun78559_ip = 344; continue _fun78559 }
case 147:
            r13 = r14;
            r14 = r14.isLauncher;
            if(r14) { _fun78559_ip = 332; continue _fun78559 }
case 162:
            r14 = r13;
            r14 = r14.id;
            r12 = r14;
            if(!(r8 == r14)) { _fun78559_ip = 247; continue _fun78559 }
case 177:
            r16 = _closure0_slot6;
            r15 = r16.getOverrideForGame;
            r14 = r13;
            r11 = r15.bind(r16)(r14);
            r14 = r14.distributor;
            if(!(r8 == r14)) { _fun78559_ip = 212; continue _fun78559 }
case 205:
            r14 = r11;
            if(!(r8 == r14)) { _fun78559_ip = 327; continue _fun78559 }
case 212:
            r16 = _closure0_slot8;
            r15 = r16.findGame;
            r14 = r13;
            r15 = r15.bind(r16)(r14);
            r16 = r15 == r8;
            r14 = undefined;
            if(r16) { _fun78559_ip = 244; continue _fun78559 }
case 239:
            r14 = r15.id;
case 244:
            r12 = r14;
case 247:
            r14 = r12;
            if(!(r8 != r14)) { _fun78559_ip = 332; continue _fun78559 }
case 254:
            r15 = _closure0_slot0;
            r14 = _closure0_slot2;
            r14 = r14[r15];
            r17 = r15.bind(r7)(r14);
            r16 = r17.getQuestApplicationIdsForRunningGame;
            r15 = r13;
            r14 = r12;
            r16 = r16.bind(r17)(r15, r14);
            r14 = r16;
            r15 = r14[Symbol.iterator];
            r14 = r15().next;
case 297:
            r16 = r14;
            r17 = r16().value;
            r16 = r15;
            if(!(r16 !== r7)) { _fun78559_ip = 332; continue _fun78559 }
case 311:
            r16 = r13;
            r5[r17] = r16;
            _fun78559_ip = 297; continue _fun78559;
case 320:
            CatchBlockStart(arg_register=14);
            r15.return();
            throw r14;
case 327:
            _fun78559_ip = 130; continue _fun78559;
case 332:
            _fun78559_ip = 130; continue _fun78559;
case 337:
            CatchBlockStart(arg_register=4);
            r6.return();
            throw r4;
case 344:
            r4 = r10;
            r6 = r4[Symbol.iterator];
            r4 = r6().next;
case 350:
            r10 = r4;
            r10 = r10().value;
            r11 = r6;
            if(!(r11 !== r7)) { _fun78559_ip = 397; continue _fun78559 }
case 364:
            r9 = r10;
            r10 = r10.id;
            if(!(r8 != r10)) { _fun78559_ip = 388; continue _fun78559 }
case 376:
            r11 = r9;
            r10 = r11.id;
            r5[r10] = r11;
case 388:
            _fun78559_ip = 350; continue _fun78559;
case 390:
            CatchBlockStart(arg_register=4);
            r6.return();
            throw r4;
case 397:
            r6 = function(a0) { // Original name: _loop, environment: r3
                _fun131525: for(var _fun131525_ip = 0; ; ) switch(_fun131525_ip) {
case 0:
                    r2 = a0;
                    var _closure2_slot0 = r2;
                    r0 = undefined;
                    r13 = undefined;
                    r12 = undefined;
                    r11 = undefined;
                    r1 = _closure1_slot2;
                    r9 = r1[r2];
                    r2 = _closure0_slot0;
                    r8 = r2;
                    r1 = _closure0_slot2;
                    r7 = r1;
                    r1 = r1[r27];
                    r3 = r2.bind(r0)(r1);
                    r2 = r3.removeExecutablePathPrefix;
                    r1 = r9.exePath;
                    r5 = r2.bind(r3)(r1);
                    r2 = _closure1_slot1;
                    r1 = r2.values;
                    r1 = r1.bind(r2)();
                    r4 = r1;
                    r2 = r4[Symbol.iterator];
                    r4 = r2().next;
                    r3 = 0;
                    r1 = null;
case 98:
                    r15 = r4;
                    r16 = r15().value;
                    r15 = r2;
                    if(!(r15 !== r0)) { _fun131525_ip = 363; continue _fun131525 }
case 115:
                    r13 = r16;
                    r17 = _closure0_slot0;
                    r8 = r17;
                    r15 = _closure0_slot2;
                    r7 = r15;
                    r15 = r15[r24];
                    r17 = r17.bind(r0)(r15);
                    r15 = r17.getDesktopApplicationIds;
                    r12 = r15.bind(r17)(r16);
                    r15 = _closure0_slot17;
                    r15 = r15.bind(r3)(r16);
                    if(!r15) { _fun131525_ip = 351; continue _fun131525 }
case 167:
                    r15 = r12;
                    if(!(r1 != r15)) { _fun131525_ip = 351; continue _fun131525 }
case 177:
                    r17 = r12;
                    r16 = r17.find;
                    r15 = function(a0) { // Environment: r10
                        r2 = _closure2_slot0;
                        r1 = a0;
                        r0 = r1 === r2;
                        return r0;
                    };
                    r15 = r16.bind(r17)(r15);
                    r11 = r15;
                    if(!(r1 == r15)) { _fun131525_ip = 297; continue _fun131525 }
case 204:
                    r16 = _closure0_slot19;
                    r15 = r12;
                    r15 = r16.bind(r3)(r15, r9);
                    if(!r15) { _fun131525_ip = 351; continue _fun131525 }
case 223:
                    r18 = _closure1_slot0;
                    r17 = r18.set;
                    r15 = r13;
                    r16 = r15.id;
                    r15 = {'applicationId': null, 'executablePath': null, 'executableFingerprint': null};
                    r20 = r8;
                    r19 = r7;
                    r19 = r19[r20];
                    r19 = r20.bind(r0)(r19);
                    r19 = r19.ROBLOX_APPLICATION_ID;
                    r15[0] = r19;
                    r15[1] = r5;
                    r19 = r9.executableFingerprint;
                    r15[2] = r19;
                    r15 = r17.bind(r18)(r16, r15);
                    _fun131525_ip = 351; continue _fun131525;
case 297:
                    r18 = _closure1_slot0;
                    r17 = r18.set;
                    r15 = r13;
                    r16 = r15.id;
                    r15 = {'applicationId': null, 'executablePath': null, 'executableFingerprint': null};
                    r19 = r11;
                    r15[0] = r19;
                    r15[1] = r5;
                    r19 = r9.executableFingerprint;
                    r15[2] = r19;
                    r15 = r17.bind(r18)(r16, r15);
case 351:
                    _fun131525_ip = 98; continue _fun131525;
case 356:
                    CatchBlockStart(arg_register=1);
                    r2.return();
                    throw r1;
case 363:
                    return r0;
                }
            };
            r4 = r1.Object;
            r3 = r4.keys;
            r3 = r3.bind(r4)(r5);
            r5 = r3;
            r4 = r5[Symbol.iterator];
            r5 = r4().next;
            r3 = 0;
case 428:
            r8 = r5;
            r8 = r8().value;
            r9 = r4;
            if(!(r9 !== r7)) { _fun78559_ip = 456; continue _fun78559 }
case 442:
            r8 = r6.bind(r3)(r8);
            _fun78559_ip = 428; continue _fun78559;
case 449:
            CatchBlockStart(arg_register=3);
            r4.return();
            throw r3;
case 456:
            r4 = _closure0_slot16;
            r3 = r4.log;
            r5 = r1.Array;
            r2 = r5.from;
            r1 = r0.keys;
            r1 = r1.bind(r0)();
            r2 = r2.bind(r5)(r1);
            r1 = '~ getActivelyProgressingPlayOnDesktopQuestIds -> Actively progressing questIds: ';
            r1 = r3.bind(r4)(r1, r2);
            return r0;
        }
    };
    r10[9] = r8;
    r9 = 'getActivelyProgressingStreamOnDesktopQuests';
    r8 = function() { // Original name: getActivelyProgressingStreamOnDesktopQuests, environment: r7
        _fun78560: for(var _fun78560_ip = 0; ; ) switch(_fun78560_ip) {
case 0:
            r8 = undefined;
            r10 = undefined;
            r9 = undefined;
            r1 = global;
            r0 = r1.Map;
            r3 = Object.create(r0.prototype);
            r16 = r3;
            r0 = new r17[r0](r16);
            r0 = r0 instanceof Object ? r0 : r3;
            r4 = _closure0_slot7;
            r3 = r4.getCurrentUserActiveStream;
            r3 = r3.bind(r4)();
            r7 = null;
            if(!(r7 != r3)) { _fun78560_ip = 337; continue _fun78560 }
case 55:
            r6 = _closure0_slot9;
            r5 = r6.countVoiceStatesForChannel;
            r3 = r3.channelId;
            r5 = r5.bind(r6)(r3);
            r3 = 2;
            if(!(!(r5 < r3))) { _fun78560_ip = 335; continue _fun78560 }
case 85:
            r3 = r4.getStreamerActiveStreamMetadata;
            r3 = r3.bind(r4)();
            if(!(r7 != r3)) { _fun78560_ip = 333; continue _fun78560 }
case 102:
            r6 = _closure0_slot16;
            r5 = r6.log;
            r4 = '~ getActivelyProgressingStreamOnDesktopQuestIds -> Active stream metadata: ';
            r4 = r5.bind(r6)(r4, r3);
            r6 = r3.id;
            if(!(r7 != r6)) { _fun78560_ip = 331; continue _fun78560 }
case 136:
            r3 = _closure0_slot10;
            r4 = r3.quests;
            r3 = r4.values;
            r3 = r3.bind(r4)();
            r5 = r3;
            r4 = r5[Symbol.iterator];
            r5 = r4().next;
            r3 = 0;
case 163:
            r11 = r5;
            r12 = r11().value;
            r11 = r4;
            if(!(r11 !== r8)) { _fun78560_ip = 281; continue _fun78560 }
case 177:
            r10 = r12;
            r13 = _closure0_slot0;
            r11 = _closure0_slot2;
            r11 = r11[r24];
            r13 = r13.bind(r8)(r11);
            r11 = r13.getStreamingApplicationId;
            r9 = r11.bind(r13)(r12);
            r11 = _closure0_slot17;
            r11 = r11.bind(r3)(r12);
            if(!r11) { _fun78560_ip = 229; continue _fun78560 }
case 222:
            r12 = r9;
            r11 = r7 != r12;
case 229:
            if(!r11) { _fun78560_ip = 272; continue _fun78560 }
case 232:
            r11 = r9;
            if(!(r11 === r6)) { _fun78560_ip = 272; continue _fun78560 }
case 239:
            r13 = r0.set;
            r11 = r10;
            r12 = r11.id;
            r11 = {'applicationId': null};
            r11[0] = r6;
            r11 = r13.bind(r0)(r12, r11);
case 272:
            _fun78560_ip = 163; continue _fun78560;
case 274:
            CatchBlockStart(arg_register=3);
            r4.return();
            throw r3;
case 281:
            r4 = _closure0_slot16;
            r3 = r4.log;
            r5 = r1.Array;
            r2 = r5.from;
            r1 = r0.keys;
            r1 = r1.bind(r0)();
            r2 = r2.bind(r5)(r1);
            r1 = '~ getActivelyProgressingStreamOnDesktopQuestIds -> Actively progressing questIds: ';
            r1 = r3.bind(r4)(r1, r2);
            return r0;
case 331:
            return r0;
case 333:
            return r0;
case 335:
            return r0;
case 337:
            return r0;
        }
    };
    r10[9] = r8;
    r9 = 'getActivelyProgressingActivityQuests';
    r8 = function() { // Original name: getActivelyProgressingActivityQuests, environment: r7
        _fun78561: for(var _fun78561_ip = 0; ; ) switch(_fun78561_ip) {
case 0:
            r6 = undefined;
            r12 = undefined;
            r11 = undefined;
            r10 = undefined;
            r7 = undefined;
            r1 = global;
            r0 = r1.Map;
            r4 = Object.create(r0.prototype);
            r21 = r4;
            r0 = new r22[r0](r21);
            r5 = _closure0_slot4;
            r3 = r5.getSelfEmbeddedActivities;
            r8 = r3.bind(r5)();
            r5 = _closure0_slot5;
            r3 = r5.getMainFrame;
            r5 = r3.bind(r5)();
            r9 = r1.Set;
            r3 = r8.keys;
            r20 = r3.bind(r8)();
            r8 = Object.create(r9.prototype);
            r21 = r8;
            r3 = new r22[r9](r21, r20);
            r3 = r3 instanceof Object ? r3 : r8;
            r8 = _closure0_slot13;
            r8 = r8.bind(r6)(r5);
            if(!r8) { _fun78561_ip = 117; continue _fun78561 }
case 102:
            r8 = r3.add;
            r5 = r5.applicationId;
            r5 = r8.bind(r3)(r5);
case 117:
            r0 = r0 instanceof Object ? r0 : r4;
            r9 = _closure0_slot16;
            r8 = r9.log;
            r5 = r1.Array;
            r4 = r5.from;
            r5 = r4.bind(r5)(r3);
            r4 = '~ getActivelyProgressingActivityQuestIds -> Running activity applicationIds: ';
            r4 = r8.bind(r9)(r4, r5);
            r4 = r3.size;
            r5 = 0;
            if(!(r5 !== r4)) { _fun78561_ip = 535; continue _fun78561 }
case 174:
            r4 = _closure0_slot10;
            r4 = r4.quests;
            r9 = r3;
            r8 = r9[Symbol.iterator];
            r9 = r8().next;
            r3 = null;
case 192:
            r13 = r9;
            r13 = r13().value;
            r14 = r8;
            if(!(r14 !== r6)) { _fun78561_ip = 361; continue _fun78561 }
case 209:
            r12 = r13;
            r13 = r4.values;
            r15 = r13.bind(r4)();
            r13 = r15;
            r14 = r13[Symbol.iterator];
            r13 = r14().next;
case 227:
            r15 = r13;
            r16 = r15().value;
            r15 = r14;
            if(!(r15 !== r6)) { _fun78561_ip = 349; continue _fun78561 }
case 241:
            r11 = r16;
            r17 = _closure0_slot0;
            r15 = _closure0_slot2;
            r15 = r15[r24];
            r17 = r17.bind(r6)(r15);
            r15 = r17.getPlayActivityApplicationId;
            r10 = r15.bind(r17)(r16);
            r15 = _closure0_slot17;
            r15 = r15.bind(r5)(r16);
            if(!r15) { _fun78561_ip = 291; continue _fun78561 }
case 284:
            r16 = r10;
            r15 = r3 != r16;
case 291:
            if(!r15) { _fun78561_ip = 340; continue _fun78561 }
case 294:
            r16 = r10;
            r15 = r12;
            if(!(r16 === r15)) { _fun78561_ip = 340; continue _fun78561 }
case 304:
            r17 = r0.set;
            r15 = r11;
            r16 = r15.id;
            r15 = {'applicationId': null};
            r18 = r12;
            r15[0] = r18;
            r15 = r17.bind(r0)(r16, r15);
case 340:
            _fun78561_ip = 227; continue _fun78561;
case 342:
            CatchBlockStart(arg_register=13);
            r14.return();
            throw r13;
case 349:
            _fun78561_ip = 192; continue _fun78561;
case 354:
            CatchBlockStart(arg_register=3);
            r8.return();
            throw r3;
case 361:
            r3 = r4.values;
            r8 = r3.bind(r4)();
            r3 = r8;
            r4 = r3[Symbol.iterator];
            r3 = r4().next;
case 376:
            r8 = r3;
            r9 = r8().value;
            r8 = r4;
            if(!(r8 !== r6)) { _fun78561_ip = 485; continue _fun78561 }
case 390:
            r7 = r9;
            r8 = _closure0_slot17;
            r8 = r8.bind(r5)(r9);
            if(!r8) { _fun78561_ip = 436; continue _fun78561 }
case 405:
            r10 = _closure0_slot0;
            r9 = _closure0_slot2;
            r9 = r9[r28];
            r11 = r10.bind(r6)(r9);
            r10 = r11.isPlayAnyActivityQuest;
            r9 = r7;
            r8 = r10.bind(r11)(r9);
case 436:
            if(!r8) { _fun78561_ip = 476; continue _fun78561 }
case 439:
            r10 = r0.set;
            r8 = r7;
            r9 = r8.id;
            r8 = {'applicationId': null};
            r11 = _closure0_slot12;
            r8[0] = r11;
            r8 = r10.bind(r0)(r9, r8);
case 476:
            _fun78561_ip = 376; continue _fun78561;
case 478:
            CatchBlockStart(arg_register=3);
            r4.return();
            throw r3;
case 485:
            r4 = _closure0_slot16;
            r3 = r4.log;
            r5 = r1.Array;
            r2 = r5.from;
            r1 = r0.keys;
            r1 = r1.bind(r0)();
            r2 = r2.bind(r5)(r1);
            r1 = '~ getActivelyProgressingActivityQuestIds -> Actively progressing questIds: ';
            r1 = r3.bind(r4)(r1, r2);
            return r0;
case 535:
            return r0;
        }
    };
    r10[9] = r8;
    var _closure0_slot20 = r3;
    r15 = undefined;
    r3 = new r16[r3](r15);
    r5 = r5[r30];
    r7 = r6.bind(r2)(r5);
    r6 = r7.fileFinishedImporting;
    r5 = 'modules/quests/managers/QuestProgressManager.tsx';
    r5 = r6.bind(r7)(r5);
    r4['default'] = r3;
    return r2;
}

// ===== top-level #17761  fn#17722  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    r4 = a1;
    var _closure0_slot0 = r4;
    r2 = a5;
    r3 = a6;
    var _closure0_slot1 = r3;
    r1 = global;
    r8 = r1.Object;
    r7 = r8.defineProperty;
    r5 = '__esModule';
    r1 = {'value': true};
    r1 = r7.bind(r8)(r2, r5, r1);
    r1 = r3[r0];
    r0 = undefined;
    r1 = r4.bind(r0)(r1);
    r1 = r1.AccountLinkManager;
    r1 = __createDerivedClass(r6, function() { // Original name: AccountLinkManagerNative
        r1 = _env_r1_slot3;
        r3 = r1.__proto__;
        r2 = new.target;
        r5 = Object.create(r3.prototype);
        r6 = r3;
        r4 = r2;
        r1 = applyArguments(r7, r6, r5);
        r0 = null;
        r1['unsubscribeBrowser'] = r0;
        r0 = false;
        r1['isBrowserOpen'] = r0;
        return r1;
    });
    r5 = r1.prototype;
    r8 = '_initialize';
    r7 = function() { // Original name: _initialize, environment: r6
        r2 = this;
        var _closure1_slot0 = r2;
        r4 = _closure0_slot2;
        r4 = r4.__proto__;
        r4 = r4._initialize;
        r4 = r4.bind(r2)();
        r4 = _closure0_slot0;
        r3 = _closure0_slot1;
        r3 = r3[r1];
        r0 = undefined;
        r4 = r4.bind(r0)(r3);
        r3 = r4.subscribeToIsInAppBrowserOpen;
        r1 = function(a0, a1) { // Environment: r1
            _fun131526: for(var _fun131526_ip = 0; ; ) switch(_fun131526_ip) {
case 0:
                r2 = _closure1_slot0;
                r1 = a0;
                r2['isBrowserOpen'] = r1;
                r1 = a1;
                if(!r1) { _fun131526_ip = 32; continue _fun131526 }
case 22:
                r1 = r2.evaluatePending;
                r1 = r1.bind(r2)();
case 32:
                r0 = undefined;
                return r0;
            }
        };
        r1 = r3.bind(r4)(r1);
        r2['unsubscribeBrowser'] = r1;
        return r0;
    };
    r5[8] = r7;
    r8 = '_terminate';
    r7 = function() { // Original name: _terminate, environment: r6
        _fun78564: for(var _fun78564_ip = 0; ; ) switch(_fun78564_ip) {
case 0:
            r1 = this;
            r2 = _closure0_slot2;
            r2 = r2.__proto__;
            r2 = r2._terminate;
            r2 = r2.bind(r1)();
            r2 = r1.unsubscribeBrowser;
            r0 = null;
            if(!(r2 != r0)) { _fun78564_ip = 42; continue _fun78564 }
case 38:
            r2 = r2.bind(r1)();
case 42:
            r1['unsubscribeBrowser'] = r0;
            r0 = undefined;
            return r0;
        }
    };
    r5[8] = r7;
    r8 = 'evaluatePending';
    r7 = function() { // Original name: evaluatePending, environment: r6
        _fun78565: for(var _fun78565_ip = 0; ; ) switch(_fun78565_ip) {
case 0:
            r2 = this;
            r1 = r2.isBrowserOpen;
            if(r1) { _fun78565_ip = 35; continue _fun78565 }
case 12:
            r1 = _closure0_slot2;
            r1 = r1.__proto__;
            r1 = r1.evaluatePending;
            r1 = r1.bind(r2)();
case 35:
            r0 = undefined;
            return r0;
        }
    };
    r5[8] = r7;
    var _closure0_slot3 = r1;
    var _closure0_slot2 = r5;
    r12 = undefined;
    r1 = new r13[r1](r12);
    r3 = r3[r2];
    r5 = r4.bind(r0)(r3);
    r4 = r5.fileFinishedImporting;
    r3 = 'modules/application_account_linking/native/AccountLinkManagerNative.tsx';
    r3 = r4.bind(r5)(r3);
    r2['default'] = r1;
    return r0;
}

// ===== top-level #17762  fn#17723  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    r2 = a2;
    var _closure0_slot0 = r2;
    r2 = a5;
    r3 = a6;
    var _closure0_slot1 = r3;
    r4 = function(a0) { // Original name: populateMap, environment: r1
        _fun78566: for(var _fun78566_ip = 0; ; ) switch(_fun78566_ip) {
case 0:
            r3 = a0;
            r0 = undefined;
            r4 = undefined;
            r8 = r3.actions;
            r1 = null;
            if(!(r8 == r1)) { _fun78566_ip = 26; continue _fun78566 }
case 22:
            r8 = new Array(0);
case 26:
            r1 = r3.hasStoreChangeListeners;
            if(r1) { _fun78566_ip = 41; continue _fun78566 }
case 35:
            r1 = r3.loadAfterConnectionOpen;
case 41:
            r9 = r8;
            if(!r1) { _fun78566_ip = 94; continue _fun78566 }
case 47:
            r1 = r8.includes;
            r7 = 'POST_CONNECTION_OPEN';
            r2 = r1.bind(r8)(r7);
            r1 = r8;
            if(r2) { _fun78566_ip = 91; continue _fun78566 }
case 67:
            r2 = new Array(1);
            r10 = 0;
            r12 = r2;
            r11 = r8;
            r6 = arraySpread(r13, r12, r11);
            r2[6] = r7;
            r1 = r2;
case 91:
            r9 = r1;
case 94:
            r1 = r3.loadRightBeforeConnectionOpen;
            r6 = r9;
            if(!r1) { _fun78566_ip = 153; continue _fun78566 }
case 106:
            r1 = r9.includes;
            r8 = 'CONNECTION_OPEN';
            r2 = r1.bind(r9)(r8);
            r1 = r9;
            if(r2) { _fun78566_ip = 150; continue _fun78566 }
case 126:
            r2 = new Array(1);
            r10 = 0;
            r12 = r2;
            r11 = r9;
            r7 = arraySpread(r13, r12, r11);
            r2[7] = r8;
            r1 = r2;
case 150:
            r6 = r1;
case 153:
            r1 = r6;
            r2 = r1[Symbol.iterator];
            r1 = r2().next;
case 159:
            r6 = r1;
            r6 = r6().value;
            r7 = r2;
            if(!(r7 !== r0)) { _fun78566_ip = 224; continue _fun78566 }
case 173:
            r4 = r6;
            r7 = _closure0_slot2;
            r6 = r6 in r7;
            if(r6) { _fun78566_ip = 198; continue _fun78566 }
case 187:
            r8 = r4;
            r6 = new Array(0);
            r7[r8] = r6;
case 198:
            r6 = r4;
            r7 = r7[r6];
            r6 = r7.push;
            r6 = r6.bind(r7)(r3);
            _fun78566_ip = 159; continue _fun78566;
case 217:
            CatchBlockStart(arg_register=1);
            r2.return();
            throw r1;
case 224:
            return r0;
        }
    };
    var _closure0_slot4 = r4;
    r4 = function(a0) { // Original name: handleAction, environment: r1
        _fun78567: for(var _fun78567_ip = 0; ; ) switch(_fun78567_ip) {
case 0:
            r0 = a0;
            r5 = undefined;
            r6 = undefined;
            r2 = r0.type;
            r1 = 'CONNECTION_OPEN';
            r2 = r1 !== r2;
            if(!r2) { _fun78567_ip = 36; continue _fun78567 }
case 23:
            r3 = r0.type;
            r1 = 'OVERLAY_INITIALIZE';
            r2 = r1 !== r3;
case 36:
            if(r2) { _fun78567_ip = 48; continue _fun78567 }
case 42:
            r2 = true;
            _closure0_slot3 = r2;
case 48:
            r2 = r0.type;
            r4 = _closure0_slot2;
            r2 = r2 in r4;
            if(!r2) { _fun78567_ip = 209; continue _fun78567 }
case 67:
            r2 = new Array(0);
            r3 = r0.type;
            r7 = r4[r3];
            r3 = r7;
            r4 = r3[Symbol.iterator];
            r3 = r4().next;
case 86:
            r7 = r3;
            r7 = r7().value;
            r8 = r4;
            if(!(r8 !== r5)) { _fun78567_ip = 169; continue _fun78567 }
case 100:
            r6 = r7;
            r7 = _closure0_slot3;
            if(r7) { _fun78567_ip = 137; continue _fun78567 }
case 110:
            r7 = r6;
            r7 = r7.neverLoadBeforeConnectionOpen;
            if(!r7) { _fun78567_ip = 137; continue _fun78567 }
case 122:
            r8 = r2.push;
            r7 = r6;
            r7 = r8.bind(r2)(r7);
            _fun78567_ip = 160; continue _fun78567;
case 137:
            r8 = r6;
            r7 = r8.inlineRequire;
            r8 = r7.bind(r8)();
            r7 = r8.initialize;
            r7 = r7.bind(r8)();
case 160:
            _fun78567_ip = 86; continue _fun78567;
case 162:
            CatchBlockStart(arg_register=3);
            r4.return();
            throw r3;
case 169:
            r4 = r2.length;
            r3 = 0;
            if(!(!(r4 > r3))) { _fun78567_ip = 196; continue _fun78567 }
case 180:
            r4 = _closure0_slot2;
            r3 = r0.type;
            r3 = delete r4[r3];
            _fun78567_ip = 209; continue _fun78567;
case 196:
            r1 = _closure0_slot2;
            r0 = r0.type;
            r1[r0] = r2;
case 209:
            r0 = false;
            return r0;
        }
    };
    var _closure0_slot5 = r4;
    r4 = global;
    r8 = r4.Object;
    r7 = r8.defineProperty;
    r6 = '__esModule';
    r5 = {'value': true};
    r5 = r7.bind(r8)(r2, r6, r5);
    r6 = r4.Set;
    r12 = Object.create(r6.prototype);
    r11 = ['CHANNEL_SELECT', 'CHANNEL_PRELOAD', 'MESSAGE_CREATE'];
    r4 = new r13[r6](r12, r11);
    r4 = {};
    var _closure0_slot2 = r4;
    r0 = false;
    var _closure0_slot3 = r0;
    r4 = r3[r1];
    r0 = undefined;
    r3 = a1;
    r5 = r3.bind(r0)(r4);
    r4 = r5.fileFinishedImporting;
    r3 = 'modules/app_startup/ManagerRegistryShared.tsx';
    r3 = r4.bind(r5)(r3);
    r1 = function(a0) { // Original name: initialize, environment: r1
        _fun78568: for(var _fun78568_ip = 0; ; ) switch(_fun78568_ip) {
case 0:
            r8 = a0;
            r6 = r8;
            r0 = 0;
            for(r5 in r6)
case 19:
            {
case 28:
                r9 = r5;
                r10 = r8[r9];
                r9 = r10.actions;
                r9 = _closure0_slot4;
                r3 = r9.bind(r0)(r10);
                _fun78568_ip = 19; continue _fun78568;
            }
case 52:
            r6 = _closure0_slot0;
            r5 = _closure0_slot1;
            r5 = r5[r0];
            r3 = undefined;
            r6 = r6.bind(r3)(r5);
            r5 = r6.addInterceptor;
            r4 = _closure0_slot5;
            r4 = r5.bind(r6)(r4);
            return r3;
        }
    };
    r2['initialize'] = r1;
    return r0;
}

// ===== top-level #17763  fn#17724  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    r2 = a5;
    r1 = global;
    r5 = r1.Object;
    r4 = r5.defineProperty;
    r3 = '__esModule';
    r1 = {'value': true};
    r1 = r4.bind(r5)(r2, r3, r1);
    r1 = {};
    r3 = 'firebase';
    r1['Firebase'] = r3;
    r3 = 'os';
    r1['OS'] = r3;
    r3 = 'iterable';
    r1['Iterable'] = r3;
    r3 = 'appsflyer';
    r1['AppsFlyer'] = r3;
    r3 = 'appsflyer_deferred';
    r1['AppsFlyerDeferred'] = r3;
    r3 = 'react_native_linking';
    r1['ReactNativeLinking'] = r3;
    r3 = a6;
    r4 = r3[r0];
    r0 = undefined;
    r3 = a1;
    r5 = r3.bind(r0)(r4);
    r4 = r5.fileFinishedImporting;
    r3 = 'modules/deep_link/DeepLinkTypes.tsx';
    r3 = r4.bind(r5)(r3);
    r2['DeeplinkSource'] = r1;
    return r0;
}

// ===== top-level #17764  fn#17725  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    r4 = a1;
    var _closure0_slot0 = r4;
    r6 = a2;
    var _closure0_slot1 = r6;
    r2 = a5;
    r3 = a6;
    var _closure0_slot2 = r3;
    r5 = function() { // Original name: _handleIncomingURL, environment: r1
        _fun78569: for(var _fun78569_ip = 0; ; ) switch(_fun78569_ip) {
case 0:
            r0 = undefined;
            r1 = undefined;
            r3 = this;
            r5 = _closure0_slot3;
            r2 = function(a0, a1) { // Environment: r4
                r2 = a0;
                var _closure1_slot0 = r2;
                r2 = a1;
                var _closure1_slot1 = r2;
                r0 = 0;
                var _closure1_slot7 = r0;
                var _closure1_slot8 = r0;
                var _closure1_slot6 = r0;
                r1 = function* (a0, a1) { // Original name: ?anon_0_, environment: r1
                    _fun147706: for(var _fun147706_ip = 0; ; ) switch(_fun147706_ip) {
case 0:
                        r0 = _closure1_slot8;
                        r2 = r0;
                        r4 = 2;
                        if(!(r0 !== r4)) { _fun147706_ip = 2906; continue _fun147706 }
case 20:
                        r0 = a1;
                        r3 = a0;
                        r42 = r2;
                        r7 = 3;
                        r5 = 1;
                        r41 = 0;
                        r40 = 'Empty or whitespace-only URL fragment in AppsFlyer legacy URL';
                        r39 = undefined;
                        r38 = 'dynamicIsland';
                        r37 = 'source';
                        r36 = 'lockScreen';
                        r35 = 'LiveActivity';
                        r34 = '?';
                        r33 = global;
                        r32 = '';
                        r31 = null;
                        r30 = 'join';
                        r29 = 'wave';
                        r28 = 'invite';
                        r27 = 'user';
                        r26 = '/';
                        r25 = 'voice/';
                        r24 = 'discordwidget:///open-voice-panel';
                        r23 = true;
                        r22 = 'Parsed url as: ';
                        r21 = 'l.discord.com';
                        r20 = 'discordwidget:///';
                        r19 = 'Extracted clean URL from AppsFlyer legacy URL: ';
                        r18 = 'No hash mark found in AppsFlyer legacy URL';
                        r17 = '#';
                        r16 = -1;
                        r15 = 'discord://app/open';
                        r14 = 'launcher';
                        r13 = 'deeplink';
                        r11 = ']';
                        r10 = ' [';
                        r9 = 'Opening url: ';
                        r8 = 'Failed to parse URL from AppsFlyer legacy URL';
                        if(!(r42 !== r7)) { _fun147706_ip = 2868; continue _fun147706 }
case 203:
                        r2 = r4;
                        _closure1_slot8 = r4;
                        r42 = _closure1_slot7;
                        if(!(r41 !== r42)) { _fun147706_ip = 430; continue _fun147706 }
case 221:
                        if(!(r5 !== r42)) { _fun147706_ip = 322; continue _fun147706 }
case 225:
                        if(!(r3 !== r5)) { _fun147706_ip = 313; continue _fun147706 }
case 229:
                        if(!(r3 !== r4)) { _fun147706_ip = 290; continue _fun147706 }
case 233:
                        r43 = _closure1_slot3;
                        r42 = _closure1_slot4;
                        r44 = r0.url;
                        _env_r43_slot2 = r44;
                        r44 = _env_r42_slot0;
                        r42 = _env_r42_slot2;
                        r42 = r42[r7];
                        r42 = r44.bind(r39)(r42);
                        r42 = r42.DeeplinkSource;
                        r42 = r42.Iterable;
                        _env_r43_slot3 = r42;
                        _fun147706_ip = 1071; continue _fun147706;
case 290:
                        r2 = r7;
                        _closure1_slot8 = r7;
                        r42 = {'value': null, 'done': true};
                        r42[0] = r0;
                        return r42;
case 313:
                        r2 = r7;
                        _closure1_slot8 = r7;
                        throw r0;
case 322:
                        r45 = _closure1_slot3;
                        r42 = _closure1_slot4;
                        r43 = _closure1_slot5;
                        r6 = r43;
                        _closure1_slot6 = r41;
                        _env_r45_slot17 = r43;
                        r44 = _env_r42_slot10;
                        r43 = r44.warn;
                        r42 = {'originalUrl': null, 'extractedUrlString': null, 'error': null};
                        r46 = _env_r45_slot0;
                        r46 = r46.url;
                        r42[0] = r46;
                        r46 = _env_r45_slot4;
                        r42[1] = r46;
                        r45 = _env_r45_slot17;
                        r45 = r45.message;
                        r42[2] = r45;
                        r42 = r43.bind(r44)(r8, r42);
                        r2 = r7;
                        _closure1_slot8 = r7;
                        r43 = undefined;
                        r42 = {'value': null, 'done': true};
                        r42[0] = r43;
                        return r42;
case 430:
                        if(!(r3 !== r5)) { _fun147706_ip = 2824; continue _fun147706 }
case 437:
                        if(!(r3 !== r4)) { _fun147706_ip = 2801; continue _fun147706 }
case 444:
                        var _closure1_slot4 = r12;
                        var _closure1_slot3 = r45;
                        r42 = _closure1_slot0;
                        var _closure2_slot0 = r42;
                        r43 = _closure1_slot1;
                        var _closure2_slot1 = r43;
                        var _closure2_slot2 = r39;
                        var _closure2_slot3 = r39;
                        var _closure2_slot4 = r39;
                        var _closure2_slot5 = r39;
                        var _closure2_slot6 = r39;
                        var _closure2_slot7 = r39;
                        var _closure2_slot8 = r39;
                        var _closure2_slot9 = r39;
                        var _closure2_slot10 = r39;
                        var _closure2_slot11 = r39;
                        var _closure2_slot12 = r39;
                        var _closure2_slot13 = r39;
                        var _closure2_slot14 = r39;
                        var _closure2_slot15 = r39;
                        var _closure2_slot16 = r39;
                        r43 = r42.url;
                        _closure2_slot2 = r43;
                        r42 = r42.source;
                        _closure2_slot3 = r42;
                        r44 = _closure0_slot10;
                        r43 = r44.log;
                        r55 = _closure2_slot2;
                        r53 = _closure2_slot3;
                        r42 = r33.HermesInternal;
                        r42 = r42.concat;
                        r56 = r9;
                        r54 = r10;
                        r52 = r11;
                        r42 = r57[r42](r56, r55, r54, r53, r52);
                        r42 = r43.bind(r44)(r42);
                        r43 = _closure0_slot6;
                        r42 = r43.getState;
                        r43 = r42.bind(r43)();
                        r42 = _closure0_slot7;
                        r42 = r42.ACTIVE;
                        if(!(r43 !== r42)) { _fun147706_ip = 672; continue _fun147706 }
case 627:
                        r43 = _closure0_slot0;
                        r42 = _closure0_slot2;
                        r42 = r42[r6];
                        r44 = r43.bind(r39)(r42);
                        r43 = r44.trackAppOpened;
                        r42 = _closure2_slot2;
                        r46 = r31 == r42;
                        r42 = r13;
                        if(!r46) { _fun147706_ip = 667; continue _fun147706 }
case 664:
                        r42 = r14;
case 667:
                        r42 = r43.bind(r44)(r42);
case 672:
                        r42 = _closure2_slot2;
                        if(!(r31 != r42)) { _fun147706_ip = 2441; continue _fun147706 }
case 683:
                        r43 = _closure2_slot2;
                        r42 = r43.startsWith;
                        r42 = r42.bind(r43)(r15);
                        if(!r42) { _fun147706_ip = 1012; continue _fun147706 }
case 704:
                        r43 = _closure2_slot2;
                        r42 = r43.indexOf;
                        r42 = r42.bind(r43)(r17);
                        if(!(r16 === r42)) { _fun147706_ip = 762; continue _fun147706 }
case 723:
                        r46 = _closure0_slot10;
                        r44 = r46.warn;
                        r43 = {'originalUrl': null};
                        r47 = _closure2_slot2;
                        r43[0] = r47;
                        r43 = r44.bind(r46)(r18, r43);
                        _fun147706_ip = 1012; continue _fun147706;
case 762:
                        r44 = _closure2_slot2;
                        r43 = r44.substring;
                        r42 = r42 + r5;
                        r44 = r43.bind(r44)(r42);
                        _closure2_slot4 = r44;
                        if(!(r32 !== r44)) { _fun147706_ip = 2742; continue _fun147706 }
case 792:
                        r42 = r44.trim;
                        r42 = r42.bind(r44)();
                        if(!(r32 !== r42)) { _fun147706_ip = 2742; continue _fun147706 }
case 809:
                        _closure1_slot6 = r5;
                        r42 = r33.URL;
                        r43 = Object.create(r42.prototype);
                        r56 = r43;
                        r55 = r44;
                        r42 = new r57[r42](r56, r55);
                        r43 = r42 instanceof Object ? r42 : r43;
                        _closure2_slot5 = r43;
                        r42 = ['campaign', 'deep_link_value', 'media_source'];
                        _closure2_slot6 = r42;
                        var _closure1_slot2 = r41;
                        r44 = r43.searchParams;
                        r42 = r44.keys;
                        r54 = r42.bind(r44)();
                        r46 = new Array(0);
                        r53 = _closure1_slot2;
                        r55 = r46;
                        r42 = arraySpread(r56, r55, r54);
                        _closure1_slot2 = r42;
                        r44 = r46.filter;
                        r42 = function(a0) { // Environment: r45
                            _fun152136: for(var _fun152136_ip = 0; ; ) switch(_fun152136_ip) {
case 0:
                                r3 = a0;
                                r1 = r3.startsWith;
                                r0 = 'af_';
                                r0 = r1.bind(r3)(r0);
                                if(r0) { _fun152136_ip = 40; continue _fun152136 }
case 23:
                                r2 = _closure2_slot6;
                                r1 = r2.includes;
                                r0 = r1.bind(r2)(r3);
case 40:
                                return r0;
                            }
                        };
                        r46 = r44.bind(r46)(r42);
                        r44 = r46.forEach;
                        r42 = function(a0) { // Environment: r45
                            r0 = _closure2_slot5;
                            r2 = r0.searchParams;
                            r1 = r2.delete;
                            r0 = a0;
                            r0 = r1.bind(r2)(r0);
                            return r0;
                        };
                        r42 = r44.bind(r46)(r42);
                        r42 = r43.toString;
                        r42 = r42.bind(r43)();
                        _closure2_slot2 = r42;
                        r43 = _closure0_slot0;
                        r42 = _closure0_slot2;
                        r42 = r42[r7];
                        r42 = r43.bind(r39)(r42);
                        r42 = r42.DeeplinkSource;
                        r42 = r42.AppsFlyer;
                        _closure2_slot3 = r42;
                        r44 = _closure0_slot10;
                        r43 = r44.log;
                        r46 = _closure2_slot2;
                        r42 = r33.HermesInternal;
                        r42 = r42.concat;
                        r42 = r42.bind(r19)(r46);
                        r42 = r43.bind(r44)(r42);
                        _closure1_slot6 = r41;
case 1012:
                        r43 = _closure2_slot2;
                        r42 = r43.startsWith;
                        r42 = r42.bind(r43)(r20);
                        if(r42) { _fun147706_ip = 1979; continue _fun147706 }
case 1033:
                        r44 = r33.URL;
                        r55 = _closure2_slot2;
                        r43 = Object.create(r44.prototype);
                        r56 = r43;
                        r42 = new r57[r44](r56, r55);
                        r42 = r42 instanceof Object ? r42 : r43;
                        r42 = r42.hostname;
                        if(!(r21 !== r42)) { _fun147706_ip = 1926; continue _fun147706 }
case 1071:
                        r42 = _closure1_slot3;
                        r43 = _closure1_slot4;
                        r46 = _env_r43_slot1;
                        r44 = _env_r43_slot2;
                        r44 = r44[r11];
                        r46 = r46.bind(r39)(r44);
                        r44 = _env_r42_slot2;
                        r44 = r46.bind(r39)(r44, r23);
                        _env_r42_slot7 = r44;
                        r44 = _env_r42_slot7;
                        r44 = r44.fingerprint;
                        _env_r42_slot8 = r44;
                        r44 = _env_r42_slot7;
                        r44 = r44.attemptId;
                        _env_r42_slot9 = r44;
                        r44 = _env_r42_slot7;
                        r44 = r44.payload;
                        _env_r42_slot10 = r44;
                        r44 = _env_r42_slot7;
                        r44 = r44.installationId;
                        _env_r42_slot11 = r44;
                        r44 = _env_r42_slot7;
                        r44 = r44.didRegister;
                        _env_r42_slot12 = r44;
                        r46 = _env_r43_slot10;
                        r44 = r46.log;
                        r43 = _env_r42_slot7;
                        r43 = r44.bind(r46)(r22, r43);
                        r43 = _env_r42_slot10;
                        r43 = r43.inviteCode;
                        _env_r42_slot13 = r43;
                        r43 = _env_r42_slot10;
                        r43 = r43.guildTemplateCode;
                        _env_r42_slot14 = r43;
                        r43 = _env_r42_slot10;
                        r43 = r43.authToken;
                        _env_r42_slot15 = r43;
                        r42 = _env_r42_slot13;
                        r42 = r31 != r42;
                        r43 = null;
                        if(!r42) { _fun147706_ip = 1297; continue _fun147706 }
case 1257:
                        r42 = _closure1_slot3;
                        r44 = _closure1_slot4;
                        r46 = _env_r44_slot0;
                        r44 = _env_r44_slot2;
                        r44 = r44[r12];
                        r46 = r46.bind(r39)(r44);
                        r44 = r46.parseInviteCodeFromInviteKey;
                        r42 = _env_r42_slot13;
                        r43 = r44.bind(r46)(r42);
case 1297:
                        r42 = _closure1_slot3;
                        _env_r42_slot16 = r43;
                        r42 = _env_r42_slot8;
                        r42 = r31 == r42;
                        if(!r42) { _fun147706_ip = 1328; continue _fun147706 }
case 1316:
                        r43 = _closure1_slot3;
                        r43 = _env_r43_slot9;
                        r42 = r31 == r43;
case 1328:
                        if(!r42) { _fun147706_ip = 1343; continue _fun147706 }
case 1331:
                        r43 = _closure1_slot3;
                        r43 = _env_r43_slot13;
                        r42 = r31 == r43;
case 1343:
                        if(!r42) { _fun147706_ip = 1358; continue _fun147706 }
case 1346:
                        r43 = _closure1_slot3;
                        r43 = _env_r43_slot14;
                        r42 = r31 == r43;
case 1358:
                        if(!r42) { _fun147706_ip = 1373; continue _fun147706 }
case 1361:
                        r43 = _closure1_slot3;
                        r43 = _env_r43_slot15;
                        r42 = r31 == r43;
case 1373:
                        if(!r42) { _fun147706_ip = 1388; continue _fun147706 }
case 1376:
                        r43 = _closure1_slot3;
                        r43 = _env_r43_slot3;
                        r42 = r31 == r43;
case 1388:
                        if(!r42) { _fun147706_ip = 1403; continue _fun147706 }
case 1391:
                        r43 = _closure1_slot3;
                        r43 = _env_r43_slot11;
                        r42 = r31 == r43;
case 1403:
                        if(r42) { _fun147706_ip = 1711; continue _fun147706 }
case 1409:
                        r47 = _closure1_slot3;
                        r42 = _closure1_slot4;
                        r44 = _env_r42_slot1;
                        r43 = _env_r42_slot2;
                        r43 = r43[r9];
                        r46 = r44.bind(r39)(r43);
                        r44 = r46.track;
                        r42 = _env_r42_slot8;
                        r43 = r42.EXTERNAL_DYNAMIC_LINK_RECEIVED;
                        r42 = {'invite_code': null, 'guild_template_code': null, 'has_auth_token': null, 'is_backgrounded': null, 'attempt_id': null, 'deeplink_source': null, 'link_type': null, 'is_cold_start': null, 'received_installation_id': null};
                        r48 = _env_r47_slot16;
                        r42[0] = r48;
                        r48 = _env_r47_slot14;
                        r42[1] = r48;
                        r47 = _env_r47_slot15;
                        r49 = r31 != r47;
                        if(!r49) { _fun147706_ip = 1503; continue _fun147706 }
case 1486:
                        r47 = _closure1_slot3;
                        r47 = _env_r47_slot15;
                        r47 = r47.length;
                        r49 = r41 === r47;
case 1503:
                        r47 = _closure1_slot3;
                        r48 = _closure1_slot4;
                        r42[2] = r49;
                        r50 = _env_r48_slot6;
                        r49 = r50.getState;
                        r49 = r49.bind(r50)();
                        r48 = _env_r48_slot7;
                        r48 = r48.BACKGROUND;
                        r48 = r49 === r48;
                        r42[3] = r48;
                        r48 = _env_r47_slot9;
                        r42[4] = r48;
                        r48 = _env_r47_slot3;
                        r42[5] = r48;
                        r48 = _env_r47_slot10;
                        r48 = r48.type;
                        r42[6] = r48;
                        r48 = _env_r47_slot1;
                        r42[7] = r48;
                        r48 = _env_r47_slot11;
                        r42[8] = r48;
                        r47 = _env_r47_slot12;
                        r48 = null;
                        if(!r47) { _fun147706_ip = 1611; continue _fun147706 }
case 1601:
                        r48 = {'did_register': true};
case 1611:
                        r47 = _closure1_slot3;
                        r55 = r42;
                        r54 = r48;
                        r48 = copyDataProperties(r56, r55);
                        r47 = _env_r47_slot8;
                        r48 = r31 != r47;
                        r47 = null;
                        if(!r48) { _fun147706_ip = 1695; continue _fun147706 }
case 1638:
                        r49 = _closure1_slot3;
                        r50 = _closure1_slot4;
                        r48 = {'fingerprint': null};
                        r51 = _env_r50_slot0;
                        r50 = _env_r50_slot2;
                        r50 = r50[r13];
                        r51 = r51.bind(r39)(r50);
                        r50 = r51.extractId;
                        r49 = _env_r49_slot8;
                        r49 = r50.bind(r51)(r49);
                        r48[0] = r49;
                        r47 = r48;
case 1695:
                        r55 = r42;
                        r54 = r47;
                        r47 = copyDataProperties(r56, r55);
                        r42 = r44.bind(r46)(r43, r42);
case 1711:
                        r42 = _closure1_slot3;
                        r42 = _env_r42_slot16;
                        r42 = r31 != r42;
                        if(!r42) { _fun147706_ip = 1738; continue _fun147706 }
case 1726:
                        r43 = _closure1_slot3;
                        r43 = _env_r43_slot11;
                        r42 = r31 != r43;
case 1738:
                        if(!r42) { _fun147706_ip = 1788; continue _fun147706 }
case 1741:
                        r42 = _closure1_slot3;
                        r43 = _closure1_slot4;
                        r44 = _env_r43_slot1;
                        r43 = _env_r43_slot2;
                        r43 = r43[r14];
                        r46 = r44.bind(r39)(r43);
                        r44 = r46.setReceivedInstallationIdForInviteCode;
                        r43 = _env_r42_slot16;
                        r42 = _env_r42_slot11;
                        r42 = r44.bind(r46)(r43, r42);
case 1788:
                        r42 = _closure1_slot3;
                        r42 = _env_r42_slot16;
                        r42 = r31 != r42;
                        if(!r42) { _fun147706_ip = 1811; continue _fun147706 }
case 1803:
                        r43 = _closure1_slot3;
                        r42 = _env_r43_slot12;
case 1811:
                        if(!r42) { _fun147706_ip = 1847; continue _fun147706 }
case 1814:
                        r42 = _closure1_slot4;
                        r43 = _env_r42_slot0;
                        r42 = _env_r42_slot2;
                        r42 = r42[r15];
                        r43 = r43.bind(r39)(r42);
                        r42 = r43.setRegistrationHandoff;
                        r42 = r42.bind(r43)();
case 1847:
                        r44 = _closure1_slot3;
                        r42 = _closure1_slot4;
                        r46 = _env_r42_slot1;
                        r43 = _env_r42_slot2;
                        r43 = r43[r16];
                        r46 = r46.bind(r39)(r43);
                        r43 = _env_r44_slot2;
                        r43 = r46.bind(r39)(r43);
                        r43 = _env_r42_slot1;
                        r42 = _env_r42_slot2;
                        r42 = r42[r10];
                        r43 = r43.bind(r39)(r42);
                        r42 = {'payload': null};
                        r44 = _env_r44_slot10;
                        r42[0] = r44;
                        r42 = r43.bind(r39)(r42);
                        _fun147706_ip = 2441; continue _fun147706;
case 1926:
                        r44 = r33.fetch;
                        r43 = _closure2_slot2;
                        r42 = {'method': 'HEAD', 'redirect': 'follow'};
                        r43 = r44.bind(r39)(r43, r42);
                        _closure1_slot7 = r4;
                        r2 = r5;
                        _closure1_slot8 = r5;
                        r42 = {'value': null, 'done': false};
                        r42[0] = r43;
                        return r42;
case 1979:
                        r43 = _closure2_slot2;
                        r42 = r43.startsWith;
                        r42 = r42.bind(r43)(r24);
                        if(r42) { _fun147706_ip = 2498; continue _fun147706 }
case 2000:
                        r43 = _closure2_slot2;
                        r42 = r43.split;
                        r42 = r42.bind(r43)(r25);
                        r43 = r42.length;
                        if(!(r4 === r43)) { _fun147706_ip = 2479; continue _fun147706 }
case 2026:
                        r43 = r42[r1];
                        r42 = r43.split;
                        r42 = r42.bind(r43)(r26);
                        r43 = r42.length;
                        if(!(r41 !== r43)) { _fun147706_ip = 2460; continue _fun147706 }
case 2052:
                        r43 = r42[r0];
                        if(!(r27 !== r43)) { _fun147706_ip = 2441; continue _fun147706 }
case 2063:
                        r43 = r42[r0];
                        if(!(r28 !== r43)) { _fun147706_ip = 2365; continue _fun147706 }
case 2074:
                        r43 = r42[r0];
                        if(!(r29 !== r43)) { _fun147706_ip = 2287; continue _fun147706 }
case 2085:
                        r43 = r42[r0];
                        if(!(r30 !== r43)) { _fun147706_ip = 2206; continue _fun147706 }
case 2093:
                        r43 = r42.length;
                        if(!(r4 === r43)) { _fun147706_ip = 2441; continue _fun147706 }
case 2105:
                        r48 = r42[r0];
                        r47 = r42[r1];
                        r44 = _closure0_slot1;
                        r43 = _closure0_slot2;
                        r43 = r43[r10];
                        r44 = r44.bind(r39)(r43);
                        r43 = {'payload': null};
                        r46 = {'type': null, 'guildId': null, 'channelId': null};
                        r49 = _closure0_slot9;
                        r49 = r49.CHANNEL;
                        r46[0] = r49;
                        r46[1] = r48;
                        r46[2] = r47;
                        r43[0] = r46;
                        r43 = r44.bind(r39)(r43);
                        r2 = r7;
                        _closure1_slot8 = r7;
                        r44 = undefined;
                        r43 = {'value': null, 'done': true};
                        r43[0] = r44;
                        return r43;
case 2206:
                        r48 = r42[r1];
                        r47 = r42[r2];
                        r44 = _closure0_slot1;
                        r43 = _closure0_slot2;
                        r43 = r43[r10];
                        r44 = r44.bind(r39)(r43);
                        r43 = {'payload': null};
                        r46 = {'type': null, 'guildId': null, 'channelId': null};
                        r49 = _closure0_slot9;
                        r49 = r49.CHANNEL;
                        r46[0] = r49;
                        r46[1] = r48;
                        r46[2] = r47;
                        r43[0] = r46;
                        r43 = r44.bind(r39)(r43);
                        _fun147706_ip = 2441; continue _fun147706;
case 2287:
                        r48 = r42[r1];
                        r47 = r42[r2];
                        r44 = _closure0_slot1;
                        r43 = _closure0_slot2;
                        r43 = r43[r10];
                        r44 = r44.bind(r39)(r43);
                        r43 = {'payload': null};
                        r46 = {'type': null, 'guildId': null, 'channelId': null};
                        r49 = _closure0_slot9;
                        r49 = r49.SEND_VOICE_HANGOUT_WAVE;
                        r46[0] = r49;
                        r46[1] = r48;
                        r46[2] = r47;
                        r43[0] = r46;
                        r43 = r44.bind(r39)(r43);
                        _fun147706_ip = 2441; continue _fun147706;
case 2365:
                        r47 = r42[r1];
                        r46 = r42[r2];
                        r43 = _closure0_slot1;
                        r42 = _closure0_slot2;
                        r42 = r42[r10];
                        r43 = r43.bind(r39)(r42);
                        r42 = {'payload': null};
                        r44 = {'type': null, 'guildId': null, 'channelId': null};
                        r48 = _closure0_slot9;
                        r48 = r48.CREATE_VOICE_INVITE;
                        r44[0] = r48;
                        r44[1] = r47;
                        r44[2] = r46;
                        r42[0] = r44;
                        r42 = r43.bind(r39)(r42);
case 2441:
                        r2 = r7;
                        _closure1_slot8 = r7;
                        r42 = {'value': undefined, 'done': true};
                        return r42;
case 2460:
                        r2 = r7;
                        _closure1_slot8 = r7;
                        r42 = {'value': undefined, 'done': true};
                        return r42;
case 2479:
                        r2 = r7;
                        _closure1_slot8 = r7;
                        r42 = {'value': undefined, 'done': true};
                        return r42;
case 2498:
                        r43 = _closure0_slot5;
                        r42 = r43.getChannelId;
                        r44 = r42.bind(r43)();
                        r42 = r31 != r44;
                        r48 = null;
                        if(!r42) { _fun147706_ip = 2535; continue _fun147706 }
case 2521:
                        r43 = _closure0_slot4;
                        r42 = r43.getChannel;
                        r48 = r42.bind(r43)(r44);
case 2535:
                        if(!(r31 != r48)) { _fun147706_ip = 2723; continue _fun147706 }
case 2542:
                        r43 = _closure0_slot0;
                        r42 = _closure0_slot2;
                        r42 = r42[r8];
                        r43 = r43.bind(r39)(r42);
                        r42 = r43.navigateToVoiceChannel;
                        r42 = r42.bind(r43)(r48, r35);
                        r43 = _closure2_slot2;
                        r42 = r43.indexOf;
                        r43 = r42.bind(r43)(r34);
                        r44 = r33.URLSearchParams;
                        r46 = r43 >= r41;
                        r42 = r32;
                        if(!r46) { _fun147706_ip = 2620; continue _fun147706 }
case 2602:
                        r47 = _closure2_slot2;
                        r46 = r47.slice;
                        r43 = r43 + r5;
                        r42 = r46.bind(r47)(r43);
case 2620:
                        r43 = Object.create(r44.prototype);
                        r56 = r43;
                        r55 = r42;
                        r42 = new r57[r44](r56, r55);
                        r43 = r42 instanceof Object ? r42 : r43;
                        r42 = r43.get;
                        r47 = r42.bind(r43)(r37);
                        r42 = r36 !== r47;
                        if(!r42) { _fun147706_ip = 2659; continue _fun147706 }
case 2655:
                        r42 = r38 !== r47;
case 2659:
                        if(r42) { _fun147706_ip = 2723; continue _fun147706 }
case 2662:
                        r43 = _closure0_slot1;
                        r42 = _closure0_slot2;
                        r42 = r42[r9];
                        r46 = r43.bind(r39)(r42);
                        r44 = r46.track;
                        r42 = _closure0_slot8;
                        r43 = r42.LIVE_ACTIVITY_INTERACTED;
                        r42 = {'action': 'Open Voice Panel', 'channel_id': null, 'surface': null};
                        r48 = r48.id;
                        r42[1] = r48;
                        r42[2] = r47;
                        r42 = r44.bind(r46)(r43, r42);
case 2723:
                        r2 = r7;
                        _closure1_slot8 = r7;
                        r42 = {'value': undefined, 'done': true};
                        return r42;
case 2742:
                        r44 = _closure0_slot10;
                        r43 = r44.warn;
                        r42 = {'originalUrl': null};
                        r45 = _closure2_slot2;
                        r42[0] = r45;
                        r42 = r43.bind(r44)(r40, r42);
                        r2 = r7;
                        _closure1_slot8 = r7;
                        r43 = undefined;
                        r42 = {'value': null, 'done': true};
                        r42[0] = r43;
                        return r42;
case 2801:
                        r2 = r7;
                        _closure1_slot8 = r7;
                        r42 = {'value': null, 'done': true};
                        r42[0] = r0;
                        return r42;
case 2824:
                        r2 = r7;
                        _closure1_slot8 = r7;
                        throw r0;
case 2833:
                        CatchBlockStart(arg_register=42);
                        r6 = r42;
                        var _closure1_slot5 = r42;
                        r42 = _closure1_slot6;
                        if(!(r41 !== r42)) { _fun147706_ip = 2859; continue _fun147706 }
case 2850:
                        _closure1_slot7 = r5;
                        _fun147706_ip = 203; continue _fun147706;
case 2859:
                        r2 = r7;
                        _closure1_slot8 = r7;
                        throw r6;
case 2868:
                        if(!(r3 !== r5)) { _fun147706_ip = 2904; continue _fun147706 }
case 2872:
                        if(!(r3 !== r4)) { _fun147706_ip = 2888; continue _fun147706 }
case 2876:
                        r3 = {'value': undefined, 'done': true};
                        return r3;
case 2888:
                        r3 = {'value': null, 'done': true};
                        r3[0] = r0;
                        return r3;
case 2904:
                        throw r0;
case 2906:
                        r0 = 3;
                        r2 = r0;
                        _closure1_slot8 = r0;
                        r55 = 'Generator functions may not be called on executing generators';
                        r0 = throwTypeError(r56);
                    }
                };
                return r1;
            };
            r2 = r5.bind(r0)(r2);
            _closure0_slot11 = r2;
            r4 = r2.apply;
            if(r4) { _fun78569_ip = 49; continue _fun78569 }
case 39:
            r1 = arguments;
            r1 = r4.bind(r2)(r3, r1);
            _fun78569_ip = 59; continue _fun78569;
case 49:
            r7 = r2;
            r6 = r3;
            r1 = applyArguments(r8, r7);
case 59:
            return r1;
        }
    };
    var _closure0_slot11 = r5;
    r5 = global;
    r9 = r5.Object;
    r8 = r9.defineProperty;
    r7 = '__esModule';
    r5 = {'value': true};
    r5 = r8.bind(r9)(r2, r7, r5);
    r5 = r3[r0];
    r0 = undefined;
    r5 = r6.bind(r0)(r5);
    var _closure0_slot3 = r5;
    r5 = r3[r1];
    r5 = r6.bind(r0)(r5);
    var _closure0_slot4 = r5;
    r5 = r3[r2];
    r5 = r6.bind(r0)(r5);
    var _closure0_slot5 = r5;
    r5 = r3[r3];
    r5 = r6.bind(r0)(r5);
    var _closure0_slot6 = r5;
    r5 = r3[r4];
    r5 = r4.bind(r0)(r5);
    r7 = r5.AppStates;
    var _closure0_slot7 = r7;
    r7 = r5.AnalyticEvents;
    var _closure0_slot8 = r7;
    r5 = r5.LinkingTypes;
    var _closure0_slot9 = r5;
    r5 = r3[r5];
    r7 = r6.bind(r0)(r5);
    r6 = Object.create(r7.prototype);
    r12 = 'index.native.tsx';
    r13 = r6;
    r5 = new r14[r7](r13, r12);
    r5 = r5 instanceof Object ? r5 : r6;
    var _closure0_slot10 = r5;
    r3 = r3[r17];
    r5 = r4.bind(r0)(r3);
    r4 = r5.fileFinishedImporting;
    r3 = 'modules/links/native/handleIncomingURL.tsx';
    r3 = r4.bind(r5)(r3);
    r1 = function() { // Original name: handleIncomingURL, environment: r1
        _fun78570: for(var _fun78570_ip = 0; ; ) switch(_fun78570_ip) {
case 0:
            r1 = undefined;
            r3 = this;
            r2 = _closure0_slot11;
            r4 = r2.apply;
            if(r4) { _fun78570_ip = 31; continue _fun78570 }
case 21:
            r1 = arguments;
            r1 = r4.bind(r2)(r3, r1);
            _fun78570_ip = 41; continue _fun78570;
case 31:
            r6 = r2;
            r5 = r3;
            r1 = applyArguments(r7, r6);
case 41:
            return r1;
        }
    };
    r2['default'] = r1;
    return r0;
}

// ===== top-level #17765  fn#17726  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    r4 = a1;
    var _closure0_slot0 = r4;
    r6 = a2;
    var _closure0_slot1 = r6;
    r2 = a5;
    r3 = a6;
    var _closure0_slot2 = r3;
    r5 = global;
    r9 = r5.Object;
    r8 = r9.defineProperty;
    r7 = '__esModule';
    r5 = {'value': true};
    r5 = r8.bind(r9)(r2, r7, r5);
    r5 = r3[r0];
    r0 = undefined;
    r5 = r6.bind(r0)(r5);
    var _closure0_slot3 = r5;
    r3 = r3[r3];
    r5 = r4.bind(r0)(r3);
    r4 = r5.fileFinishedImporting;
    r3 = 'modules/auth/externalFingerprint.tsx';
    r3 = r4.bind(r5)(r3);
    r1 = function(a0) { // Original name: externalFingerprint, environment: r1
        _fun78571: for(var _fun78571_ip = 0; ; ) switch(_fun78571_ip) {
case 0:
            r4 = _closure0_slot3;
            r2 = r4.isAuthenticated;
            r2 = r2.bind(r4)();
            if(r2) { _fun78571_ip = 122; continue _fun78571 }
case 20:
            r8 = a0;
            r7 = _closure0_slot0;
            r2 = _closure0_slot2;
            r4 = r2[r1];
            r0 = undefined;
            r6 = r7.bind(r0)(r4);
            r5 = r6.parse;
            r4 = r2[r1];
            r7 = r7.bind(r0)(r4);
            r4 = r7.extract;
            r4 = r4.bind(r7)(r8);
            r4 = r5.bind(r6)(r4);
            r5 = r4.fingerprint;
            r1 = null;
            if(!(r1 != r5)) { _fun78571_ip = 122; continue _fun78571 }
case 85:
            r3 = _closure0_slot1;
            r2 = r2[r2];
            r4 = r3.bind(r0)(r2);
            r3 = r4.dispatch;
            r2 = {'type': 'FINGERPRINT', 'fingerprint': null};
            r2[1] = r5;
            r2 = r3.bind(r4)(r2);
case 122:
            r0 = undefined;
            return r0;
        }
    };
    r2['default'] = r1;
    return r0;
}

// ===== top-level #17766  fn#17727  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    r2 = a0;
    var _closure0_slot0 = r2;
    r2 = a5;
    r3 = global;
    r6 = r3.Object;
    r5 = r6.defineProperty;
    r4 = '__esModule';
    r3 = {'value': true};
    r3 = r5.bind(r6)(r2, r4, r3);
    r3 = a6;
    r4 = r3[r0];
    r0 = undefined;
    r3 = a1;
    r5 = r3.bind(r0)(r4);
    r4 = r5.fileFinishedImporting;
    r3 = 'lib/websocketTelemetryHook.android.tsx';
    r3 = r4.bind(r5)(r3);
    r1 = function(a0) { // Original name: installWebsocketTelemetryHook, environment: r1
        _fun78572: for(var _fun78572_ip = 0; ; ) switch(_fun78572_ip) {
case 0:
            r3 = a0;
            var _closure1_slot0 = r3;
            r3 = function(a0, a1) { // Original name: handleMessage, environment: r4
                _fun131528: for(var _fun131528_ip = 0; ; ) switch(_fun131528_ip) {
case 0:
                    r0 = undefined;
                    r1 = undefined;
                    r5 = undefined;
                    r2 = {};
                    r7 = 0;
                    r4 = function(a0) { // Original name: sanitizeUrl
                        _fun147707: for(var _fun147707_ip = 0; ; ) switch(_fun147707_ip) {
case 0:
                            r2 = a0;
                            r4 = undefined;
                            r3 = undefined;
                            r1 = global;
                            r0 = r1.URL;
                            r5 = Object.create(r0.prototype);
                            r9 = r5;
                            r8 = r2;
                            r0 = new r10[r0](r9, r8);
                            r5 = r0 instanceof Object ? r0 : r5;
                            r0 = r5.hostname;
                            r4 = r0;
                            r3 = r5.pathname;
                            r6 = null;
                            if(!(r6 != r0)) { _fun147707_ip = 65; continue _fun147707 }
case 54:
                            r0 = r4;
                            r5 = '';
                            if(!(r5 === r0)) { _fun147707_ip = 67; continue _fun147707 }
case 65:
                            _fun147707_ip = 118; continue _fun147707;
case 67:
                            r0 = r3;
                            if(!(r6 != r0)) { _fun147707_ip = 92; continue _fun147707 }
case 74:
                            r0 = r3;
                            if(!(r5 !== r0)) { _fun147707_ip = 92; continue _fun147707 }
case 81:
                            r6 = r3;
                            r0 = '/';
                            if(!(r0 === r6)) { _fun147707_ip = 97; continue _fun147707 }
case 92:
                            r0 = r4;
                            _fun147707_ip = 114; continue _fun147707;
case 97:
                            r1 = r1.HermesInternal;
                            r1 = r1.concat;
                            r0 = r1.bind(r5)(r4, r3);
case 114:
                            return r0;
case 116:
                            CatchBlockStart(arg_register=0);
case 118:
                            r1 = r2.split;
                            r0 = '?';
                            r0 = r1.bind(r2)(r0);
                            r1 = r0[r0];
                            r2 = '';
                            r0 = null;
                            if(!(r2 !== r1)) { _fun147707_ip = 151; continue _fun147707 }
case 148:
                            r0 = r1;
case 151:
                            return r0;
                        }
                    };
                    r3 = a0;
                    r3 = r4.bind(r7)(r3);
                    r4 = null;
                    if(!(r4 != r3)) { _fun131528_ip = 37; continue _fun131528 }
case 31:
                    r2['url'] = r3;
case 37:
                    r3 = a1;
                    r1 = false;
                    if(!(typeof r3 === 'boolean')) { _fun131528_ip = 283; continue _fun131528 }
case 50:
                    r6 = r3.length;
                    if(!(r6 > r7)) { _fun131528_ip = 283; continue _fun131528 }
case 62:
                    r7 = r3[r0];
                    r6 = '{';
                    if(!(r6 === r7)) { _fun131528_ip = 283; continue _fun131528 }
case 77:
                    r6 = global;
                    r7 = r6.JSON;
                    r6 = r7.parse;
                    r6 = r6.bind(r7)(r3);
                    r5 = r6;
                    r6 = r4 != r6;
                    if(!r6) { _fun131528_ip = 114; continue _fun131528 }
case 106:
                    r7 = r5;
                    r6 = (typeof r7 === 'function' || r7 === null);
case 114:
                    if(!r6) { _fun131528_ip = 279; continue _fun131528 }
case 120:
                    r6 = r5;
                    r6 = r6.op;
                    if(!(r4 != r6)) { _fun131528_ip = 146; continue _fun131528 }
case 132:
                    r6 = r5;
                    r6 = r6.op;
                    r2['op'] = r6;
case 146:
                    r6 = r5;
                    r6 = r6.s;
                    if(!(r4 != r6)) { _fun131528_ip = 172; continue _fun131528 }
case 158:
                    r6 = r5;
                    r6 = r6.s;
                    r2['s'] = r6;
case 172:
                    r6 = r5;
                    r6 = r6.t;
                    if(!(r4 != r6)) { _fun131528_ip = 198; continue _fun131528 }
case 184:
                    r6 = r5;
                    r6 = r6.t;
                    r2['t'] = r6;
case 198:
                    r6 = r5;
                    r6 = r6.type;
                    if(!(r4 != r6)) { _fun131528_ip = 224; continue _fun131528 }
case 210:
                    r6 = r5;
                    r6 = r6.type;
                    r2['type'] = r6;
case 224:
                    r6 = r5;
                    r6 = r6.evt;
                    if(!(r4 != r6)) { _fun131528_ip = 252; continue _fun131528 }
case 237:
                    r6 = r5;
                    r6 = r6.evt;
                    r2['evt'] = r6;
case 252:
                    r6 = r5;
                    r6 = r6.cmd;
                    if(!(r4 != r6)) { _fun131528_ip = 277; continue _fun131528 }
case 265:
                    r5 = r5.cmd;
                    r2['cmd'] = r5;
case 277:
                    r1 = true;
case 279:
                    _fun131528_ip = 283; continue _fun131528;
case 281:
                    CatchBlockStart(arg_register=5);
case 283:
                    if(r1) { _fun131528_ip = 290; continue _fun131528 }
case 286:
                    r1 = r4 == r3;
case 290:
                    if(r1) { _fun131528_ip = 298; continue _fun131528 }
case 293:
                    r1 = typeof r3 === 'boolean';
case 298:
                    if(r1) { _fun131528_ip = 311; continue _fun131528 }
case 301:
                    r1 = 'binary';
                    r2['type'] = r1;
case 311:
                    r1 = _closure1_slot0;
                    r1 = r1.bind(r0)(r2);
                    _fun131528_ip = 327; continue _fun131528;
case 325:
                    CatchBlockStart(arg_register=1);
case 327:
                    return r0;
                }
            };
            var _closure1_slot2 = r3;
            r5 = global;
            r3 = r5.globalThis;
            if(!(typeof r3 === 'undefined')) { _fun78572_ip = 79; continue _fun78572 }
case 40:
            r3 = _closure0_slot0;
            r1 = undefined;
            if(!(r1 === r3)) { _fun78572_ip = 77; continue _fun78572 }
case 53:
            r7 = r5.window;
            r6 = null;
            if(!(typeof r7 !== 'undefined')) { _fun78572_ip = 74; continue _fun78572 }
case 68:
            r6 = r5.window;
case 74:
            r3 = r6;
case 77:
            _fun78572_ip = 85; continue _fun78572;
case 79:
            r3 = r5.globalThis;
case 85:
            r0 = null;
            r2 = r3 == r0;
            r1 = undefined;
            r6 = undefined;
            if(r2) { _fun78572_ip = 104; continue _fun78572 }
case 98:
            r6 = r3.WebSocket;
case 104:
            if(!(r0 != r6)) { _fun78572_ip = 181; continue _fun78572 }
case 108:
            r6 = r3.__discordWebsocketTelemetryPatched;
            if(r6) { _fun78572_ip = 181; continue _fun78572 }
case 119:
            r7 = r3.WebSocket;
            var _closure1_slot1 = r7;
            r4 = function() { // Original name: PatchedWebSocket, environment: r4
                _fun131529: for(var _fun131529_ip = 0; ; ) switch(_fun131529_ip) {
case 0:
                    r8 = 0;
                    r3 = copyRestArgs(r9);
                    r4 = _closure1_slot1;
                    r2 = new Array(0);
                    r8 = r2;
                    r7 = r3;
                    r6 = 0;
                    r0 = arraySpread(r9, r8, r7);
                    r8 = r4;
                    r7 = r2;
                    r2 = apply(r9, r8);
                    r4 = r3[r0];
                    if(!(typeof r4 !== 'boolean')) { _fun131529_ip = 68; continue _fun131529 }
case 51:
                    r4 = r2.url;
                    r1 = null;
                    if(!(r4 == r1)) { _fun131529_ip = 66; continue _fun131529 }
case 62:
                    r4 = '';
case 66:
                    _fun131529_ip = 72; continue _fun131529;
case 68:
                    r4 = r3[r0];
case 72:
                    var _closure2_slot0 = r4;
                    r4 = r2.addEventListener;
                    if(!(typeof r4 === 'object')) { _fun131529_ip = 116; continue _fun131529 }
case 93:
                    r5 = r2.addEventListener;
                    r4 = 'message';
                    r3 = function(a0) { // Environment: r3
                        _fun152138: for(var _fun152138_ip = 0; ; ) switch(_fun152138_ip) {
case 0:
                            r6 = a0;
                            r5 = _closure1_slot2;
                            r4 = _closure2_slot0;
                            r1 = null;
                            r2 = r6 == r1;
                            r1 = undefined;
                            r3 = undefined;
                            if(r2) { _fun152138_ip = 35; continue _fun152138 }
case 30:
                            r3 = r6.data;
case 35:
                            r0 = 0;
                            r2 = r5.bind(r0)(r4, r3);
                            return r1;
                        }
                    };
                    r3 = r5.bind(r2)(r4, r3);
case 116:
                    return r2;
                }
            };
            r6 = r7.prototype;
            r4['prototype'] = r6;
            r6 = r5.Object;
            r5 = r6.assign;
            r5 = r5.bind(r6)(r4, r7);
            r3['WebSocket'] = r4;
            r0 = true;
            r3['__discordWebsocketTelemetryPatched'] = r0;
case 181:
            return r1;
        }
    };
    r2['installWebsocketTelemetryHook'] = r1;
    return r0;
}

// ===== top-level #17767  fn#17728  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    r5 = a1;
    var _closure0_slot0 = r5;
    r2 = a2;
    var _closure0_slot1 = r2;
    r3 = a5;
    r4 = a6;
    var _closure0_slot2 = r4;
    r2 = global;
    r9 = r2.Object;
    r8 = r9.defineProperty;
    r7 = '__esModule';
    r2 = {'value': true};
    r2 = r8.bind(r9)(r3, r7, r2);
    r2 = r4[r0];
    r0 = undefined;
    r2 = r5.bind(r0)(r2);
    r2 = r2.NativeModules;
    var _closure0_slot3 = r2;
    r1 = false;
    var _closure0_slot4 = r1;
    r2 = {'prepareUpdate': null, 'deferUpdate': null};
    r7 = function(a0) { // Original name: prepareUpdate, environment: r6
        _fun78573: for(var _fun78573_ip = 0; ; ) switch(_fun78573_ip) {
case 0:
            r1 = a0;
            if(!r1) { _fun78573_ip = 273; continue _fun78573 }
case 9:
            r3 = _closure0_slot1;
            r5 = _closure0_slot2;
            r2 = r5[r1];
            r0 = undefined;
            r4 = r3.bind(r0)(r2);
            r3 = r4.show;
            r2 = {'title': null, 'body': null, 'confirmText': null, 'cancelText': null, 'onConfirm': null};
            r8 = _closure0_slot0;
            r6 = r5[r2];
            r6 = r8.bind(r0)(r6);
            r9 = r6.intl;
            r7 = r9.string;
            r6 = r5[r2];
            r6 = r8.bind(r0)(r6);
            r6 = r6.t;
            r6 = r6.GQZdmI;
            r6 = r7.bind(r9)(r6);
            r2[0] = r6;
            r6 = r5[r2];
            r6 = r8.bind(r0)(r6);
            r9 = r6.intl;
            r7 = r9.string;
            r6 = r5[r2];
            r6 = r8.bind(r0)(r6);
            r6 = r6.t;
            r6 = r6.Fizu9y;
            r6 = r7.bind(r9)(r6);
            r2[1] = r6;
            r6 = r5[r2];
            r6 = r8.bind(r0)(r6);
            r9 = r6.intl;
            r7 = r9.string;
            r6 = r5[r2];
            r6 = r8.bind(r0)(r6);
            r6 = r6.t;
            r6 = r6.UefCDS;
            r6 = r7.bind(r9)(r6);
            r2[2] = r6;
            r6 = r5[r2];
            r6 = r8.bind(r0)(r6);
            r7 = r6.intl;
            r6 = r7.string;
            r5 = r5[r2];
            r5 = r8.bind(r0)(r5);
            r5 = r5.t;
            r5 = r5["1SzcG6"];
            r5 = r6.bind(r7)(r5);
            r2[3] = r5;
            r5 = function() { // Original name: onConfirm, environment: r1
                r0 = _closure0_slot3;
                r1 = r0.BundleUpdaterManager;
                r0 = r1.reload;
                r0 = r0.bind(r1)();
                return r0;
            };
            r2[4] = r5;
            r2 = r3.bind(r4)(r2);
            r0 = true;
            _closure0_slot4 = r0;
case 273:
            r0 = undefined;
            return r0;
        }
    };
    r2[0] = r7;
    r6 = function() { // Original name: deferUpdate, environment: r6
        _fun78574: for(var _fun78574_ip = 0; ; ) switch(_fun78574_ip) {
case 0:
            r0 = _closure0_slot4;
            if(!r0) { _fun78574_ip = 36; continue _fun78574 }
case 10:
            r0 = false;
            _closure0_slot4 = r0;
            r1 = _closure0_slot3;
            r2 = r1.BundleUpdaterManager;
            r1 = r2.reload;
            r1 = r1.bind(r2)();
case 36:
            r0 = undefined;
            return r0;
        }
    };
    r2[1] = r6;
    r4 = r4[r3];
    r6 = r5.bind(r0)(r4);
    r5 = r6.fileFinishedImporting;
    r4 = 'actions/native/BundleUpdaterActionCreators.tsx';
    r4 = r5.bind(r6)(r4);
    r3['default'] = r2;
    return r0;
}

// ===== top-level #17768  fn#17729  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    r4 = a1;
    var _closure0_slot0 = r4;
    r6 = a2;
    var _closure0_slot1 = r6;
    r2 = a5;
    r3 = a6;
    var _closure0_slot2 = r3;
    r5 = global;
    r9 = r5.Object;
    r8 = r9.defineProperty;
    r7 = '__esModule';
    r5 = {'value': true};
    r5 = r8.bind(r9)(r2, r7, r5);
    r5 = r3[r0];
    r0 = undefined;
    r5 = r6.bind(r0)(r5);
    var _closure0_slot3 = r5;
    r5 = r3[r1];
    r5 = r6.bind(r0)(r5);
    var _closure0_slot4 = r5;
    r5 = r3[r2];
    r5 = r4.bind(r0)(r5);
    r7 = r5.AnalyticEvents;
    var _closure0_slot5 = r7;
    r5 = r5.AppStates;
    var _closure0_slot6 = r5;
    r5 = r3[r3];
    r7 = r6.bind(r0)(r5);
    r6 = Object.create(r7.prototype);
    r12 = 'index.native.tsx';
    r13 = r6;
    r5 = new r14[r7](r13, r12);
    r5 = r5 instanceof Object ? r5 : r6;
    var _closure0_slot7 = r5;
    r3 = r3[r12];
    r5 = r4.bind(r0)(r3);
    r4 = r5.fileFinishedImporting;
    r3 = 'modules/core/native/handleAppStateChanged.tsx';
    r3 = r4.bind(r5)(r3);
    r1 = function(a0) { // Original name: handleAppStateChanged, environment: r1
        _fun78575: for(var _fun78575_ip = 0; ; ) switch(_fun78575_ip) {
case 0:
            r8 = a0;
            r5 = _closure0_slot4;
            r4 = r5.getState;
            r10 = r4.bind(r5)();
            r5 = _closure0_slot1;
            r4 = _closure0_slot2;
            r6 = r4[r4];
            r1 = undefined;
            r12 = r5.bind(r1)(r6);
            r11 = r12.markAndLog;
            r9 = _closure0_slot7;
            r6 = global;
            r6 = r6.HermesInternal;
            r13 = r6.concat;
            r7 = ' to ';
            r6 = 'AppState changing from ';
            r7 = r13.bind(r6)(r10, r7, r8);
            r6 = '🏃';
            r6 = r11.bind(r12)(r9, r6, r7);
            r6 = r4[r5];
            r9 = r5.bind(r1)(r6);
            r7 = r9.dispatch;
            r6 = {'type': 'APP_STATE_UPDATE', 'state': null};
            r6[1] = r8;
            r6 = r7.bind(r9)(r6);
            r6 = _closure0_slot6;
            r7 = r6.BACKGROUND;
            r7 = r10 === r7;
            if(!r7) { _fun78575_ip = 152; continue _fun78575 }
case 142:
            r9 = r6.ACTIVE;
            r7 = r8 === r9;
case 152:
            r9 = r6.ACTIVE;
            r0 = r10 === r9;
            if(!r0) { _fun78575_ip = 175; continue _fun78575 }
case 165:
            r9 = r6.ACTIVE;
            r0 = r8 !== r9;
case 175:
            if(!r7) { _fun78575_ip = 192; continue _fun78575 }
case 178:
            r10 = _closure0_slot3;
            r9 = r10.isAuthenticated;
            r7 = r9.bind(r10)();
case 192:
            if(!r7) { _fun78575_ip = 225; continue _fun78575 }
case 195:
            r10 = _closure0_slot0;
            r9 = r4[r6];
            r9 = r10.bind(r1)(r9);
            r10 = r9.default;
            r9 = r10.isDisconnected;
            r7 = r9.bind(r10)();
case 225:
            if(!r7) { _fun78575_ip = 249; continue _fun78575 }
case 228:
            r7 = r4[r7];
            r9 = r5.bind(r1)(r7);
            r7 = r9.deferUpdate;
            r7 = r7.bind(r9)();
case 249:
            r6 = r6.ACTIVE;
            if(!(r8 === r6)) { _fun78575_ip = 310; continue _fun78575 }
case 259:
            r7 = _closure0_slot0;
            r6 = r4[r8];
            r10 = r7.bind(r1)(r6);
            r9 = r10.trackAppOpened;
            r6 = 'launcher';
            r6 = r9.bind(r10)(r6);
            r6 = r4[r9];
            r7 = r7.bind(r1)(r6);
            r6 = r7.setSystemThemeIfNeeded;
            r6 = r6.bind(r7)();
case 310:
            r6 = r4[r10];
            r7 = r5.bind(r1)(r6);
            r6 = r7.appStateChanged;
            r6 = r6.bind(r7)(r8);
            if(!r0) { _fun78575_ip = 365; continue _fun78575 }
case 333:
            r4 = r4[r11];
            r6 = r5.bind(r1)(r4);
            r5 = r6.track;
            r3 = _closure0_slot5;
            r4 = r3.APP_BACKGROUND;
            r3 = {};
            r3 = r5.bind(r6)(r4, r3);
case 365:
            return r1;
        }
    };
    r2['default'] = r1;
    return r0;
}

// ===== top-level #17769  fn#17730  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    r4 = a1;
    var _closure0_slot0 = r4;
    r6 = a2;
    var _closure0_slot1 = r6;
    r2 = a3;
    var _closure0_slot2 = r2;
    r2 = a5;
    r3 = a6;
    var _closure0_slot3 = r3;
    r5 = function() { // Original name: onStageConnectionError, environment: r1
        r5 = _closure0_slot1;
        r4 = _closure0_slot3;
        r1 = r4[r12];
        r0 = undefined;
        r3 = r5.bind(r0)(r1);
        r2 = r3.open;
        r1 = {'key': 'STAGE_DISCOVERY_CONNECTION_ERROR_GENERIC', 'content': null, 'icon': null};
        r9 = _closure0_slot0;
        r6 = r4[r13];
        r6 = r9.bind(r0)(r6);
        r8 = r6.intl;
        r7 = r8.string;
        r6 = r4[r13];
        r6 = r9.bind(r0)(r6);
        r6 = r6.t;
        r6 = r6.ah3RLk;
        r6 = r7.bind(r8)(r6);
        r1[1] = r6;
        r4 = r4[r14];
        r4 = r5.bind(r0)(r4);
        r1[2] = r4;
        r1 = r2.bind(r3)(r1);
        return r0;
    };
    var _closure0_slot19 = r5;
    r5 = function() { // Original name: waitForConnection, environment: r1
        r0 = global;
        r2 = r0.Promise;
        r1 = Object.create(r2.prototype);
        r3 = function(a0) { // Environment: r0
            r2 = _closure0_slot5;
            r0 = undefined;
            r1 = a0;
            r1 = r2.bind(r0)(r1);
            return r0;
        };
        r4 = r1;
        r0 = new r5[r2](r4, r3);
        r0 = r0 instanceof Object ? r0 : r1;
        return r0;
    };
    var _closure0_slot20 = r5;
    r5 = function() { // Original name: waitForDataOrConnection, environment: r1
        _fun78578: for(var _fun78578_ip = 0; ; ) switch(_fun78578_ip) {
case 0:
            r1 = undefined;
            r0 = this;
            r2 = _closure0_slot22;
            r3 = r2.apply;
            if(r3) { _fun78578_ip = 31; continue _fun78578 }
case 21:
            r1 = arguments;
            r1 = r3.bind(r2)(r0, r1);
            _fun78578_ip = 41; continue _fun78578;
case 31:
            r5 = r2;
            r4 = r0;
            r1 = applyArguments(r6, r5);
case 41:
            return r1;
        }
    };
    var _closure0_slot21 = r5;
    r5 = function() { // Original name: _waitForDataOrConnection, environment: r1
        _fun78579: for(var _fun78579_ip = 0; ; ) switch(_fun78579_ip) {
case 0:
            r0 = undefined;
            r1 = undefined;
            r3 = this;
            r5 = _closure0_slot4;
            r2 = function(a0, a1) { // Environment: r4
                r2 = a0;
                var _closure1_slot0 = r2;
                r2 = a1;
                var _closure1_slot1 = r2;
                r0 = 0;
                var _closure1_slot3 = r0;
                var _closure1_slot4 = r0;
                r1 = function* (a0, a1) { // Original name: ?anon_0_, environment: r1
                    _fun147708: for(var _fun147708_ip = 0; ; ) switch(_fun147708_ip) {
case 0:
                        r0 = _closure1_slot4;
                        r2 = r0;
                        r4 = 2;
                        if(!(r0 !== r4)) { _fun147708_ip = 376; continue _fun147708 }
case 20:
                        r0 = a1;
                        r3 = a0;
                        r5 = r2;
                        r6 = 3;
                        if(!(r5 !== r6)) { _fun147708_ip = 335; continue _fun147708 }
case 39:
                        r2 = r4;
                        _closure1_slot4 = r4;
                        r5 = _closure1_slot3;
                        r9 = 0;
                        if(!(r9 !== r5)) { _fun147708_ip = 114; continue _fun147708 }
case 56:
                        r5 = 1;
                        if(!(r3 !== r5)) { _fun147708_ip = 105; continue _fun147708 }
case 63:
                        if(!(r3 !== r4)) { _fun147708_ip = 82; continue _fun147708 }
case 67:
                        r7 = _closure1_slot2;
                        r5 = true;
                        _env_r7_slot2 = r5;
                        _fun147708_ip = 273; continue _fun147708;
case 82:
                        r2 = r6;
                        _closure1_slot4 = r6;
                        r5 = {'value': null, 'done': true};
                        r5[0] = r0;
                        return r5;
case 105:
                        r2 = r6;
                        _closure1_slot4 = r6;
                        throw r0;
case 114:
                        r5 = 1;
                        if(!(r3 !== r5)) { _fun147708_ip = 315; continue _fun147708 }
case 124:
                        if(!(r3 !== r4)) { _fun147708_ip = 292; continue _fun147708 }
case 131:
                        var _closure1_slot2 = r10;
                        r7 = _closure1_slot0;
                        var _closure2_slot0 = r7;
                        r8 = _closure1_slot1;
                        var _closure2_slot1 = r8;
                        r7 = undefined;
                        var _closure2_slot2 = r7;
                        r7 = r8.bind(r7)();
                        if(r7) { _fun147708_ip = 273; continue _fun147708 }
case 170:
                        r7 = false;
                        _closure2_slot2 = r7;
                        r7 = global;
                        r11 = r7.Promise;
                        r12 = Object.create(r11.prototype);
                        r13 = function(a0) { // Environment: r10
                            r2 = a0;
                            var _closure3_slot0 = r2;
                            r3 = _closure2_slot0;
                            r2 = r3.addConditionalChangeListener;
                            r1 = function() { // Environment: r1
                                _fun153353: for(var _fun153353_ip = 0; ; ) switch(_fun153353_ip) {
case 0:
                                    r0 = _closure2_slot2;
                                    r1 = !r0;
                                    if(r0) { _fun153353_ip = 45; continue _fun153353 }
case 13:
                                    r3 = _closure2_slot1;
                                    r2 = undefined;
                                    r3 = r3.bind(r2)();
                                    r0 = !r3;
                                    if(!r3) { _fun153353_ip = 42; continue _fun153353 }
case 29:
                                    r3 = _closure3_slot0;
                                    r3 = r3.bind(r2)();
                                    r0 = false;
case 42:
                                    r1 = r0;
case 45:
                                    return r1;
                                }
                            };
                            r1 = r2.bind(r3)(r1);
                            r0 = undefined;
                            return r0;
                        };
                        r14 = r12;
                        r11 = new r15[r11](r14, r13);
                        r8 = _closure0_slot20;
                        r10 = r8.bind(r9)();
                        r9 = r7.Promise;
                        r8 = r9.race;
                        r7 = new Array(2);
                        r11 = r11 instanceof Object ? r11 : r12;
                        r7[0] = r11;
                        r7[1] = r10;
                        r7 = r8.bind(r9)(r7);
                        _closure1_slot3 = r5;
                        r2 = r5;
                        _closure1_slot4 = r5;
                        r5 = {'value': null, 'done': false};
                        r5[0] = r7;
                        return r5;
case 273:
                        r2 = r6;
                        _closure1_slot4 = r6;
                        r5 = {'value': undefined, 'done': true};
                        return r5;
case 292:
                        r2 = r6;
                        _closure1_slot4 = r6;
                        r5 = {'value': null, 'done': true};
                        r5[0] = r0;
                        return r5;
case 315:
                        r2 = r6;
                        _closure1_slot4 = r6;
                        throw r0;
case 324:
                        CatchBlockStart(arg_register=5);
                        r2 = r6;
                        _closure1_slot4 = r6;
                        throw r5;
case 335:
                        r5 = 1;
                        if(!(r3 !== r5)) { _fun147708_ip = 374; continue _fun147708 }
case 342:
                        if(!(r3 !== r4)) { _fun147708_ip = 358; continue _fun147708 }
case 346:
                        r3 = {'value': undefined, 'done': true};
                        return r3;
case 358:
                        r3 = {'value': null, 'done': true};
                        r3[0] = r0;
                        return r3;
case 374:
                        throw r0;
case 376:
                        r0 = 3;
                        r2 = r0;
                        _closure1_slot4 = r0;
                        r13 = 'Generator functions may not be called on executing generators';
                        r0 = throwTypeError(r14);
                    }
                };
                return r1;
            };
            r2 = r5.bind(r0)(r2);
            _closure0_slot22 = r2;
            r4 = r2.apply;
            if(r4) { _fun78579_ip = 49; continue _fun78579 }
case 39:
            r1 = arguments;
            r1 = r4.bind(r2)(r3, r1);
            _fun78579_ip = 59; continue _fun78579;
case 49:
            r7 = r2;
            r6 = r3;
            r1 = applyArguments(r8, r7);
case 59:
            return r1;
        }
    };
    var _closure0_slot22 = r5;
    r5 = function() { // Original name: waitForNavigationReady, environment: r1
        _fun78580: for(var _fun78580_ip = 0; ; ) switch(_fun78580_ip) {
case 0:
            r1 = undefined;
            r0 = this;
            r2 = _closure0_slot24;
            r3 = r2.apply;
            if(r3) { _fun78580_ip = 31; continue _fun78580 }
case 21:
            r1 = arguments;
            r1 = r3.bind(r2)(r0, r1);
            _fun78580_ip = 41; continue _fun78580;
case 31:
            r5 = r2;
            r4 = r0;
            r1 = applyArguments(r6, r5);
case 41:
            return r1;
        }
    };
    var _closure0_slot23 = r5;
    r5 = function() { // Original name: _waitForNavigationReady, environment: r1
        _fun78581: for(var _fun78581_ip = 0; ; ) switch(_fun78581_ip) {
case 0:
            r0 = undefined;
            r1 = undefined;
            r3 = this;
            r5 = _closure0_slot4;
            r2 = function() { // Environment: r4
                r0 = 0;
                var _closure1_slot1 = r0;
                var _closure1_slot0 = r0;
                r1 = function* () { // Original name: ?anon_0_, environment: r1
                    _fun147709: for(var _fun147709_ip = 0; ; ) switch(_fun147709_ip) {
case 0:
                        r0 = _closure1_slot0;
                        r2 = r0;
                        r4 = 2;
                        if(!(r0 !== r4)) { _fun147709_ip = 333; continue _fun147709 }
case 20:
                        r0 = arguments[1];
                        r3 = arguments[0];
                        r5 = r2;
                        r6 = 3;
                        if(!(r5 !== r6)) { _fun147709_ip = 292; continue _fun147709 }
case 39:
                        r2 = r4;
                        _closure1_slot0 = r4;
                        r7 = _closure1_slot1;
                        r5 = 0;
                        if(!(r5 !== r7)) { _fun147709_ip = 102; continue _fun147709 }
case 56:
                        r5 = 1;
                        if(!(r3 !== r5)) { _fun147709_ip = 93; continue _fun147709 }
case 63:
                        if(!(r3 === r4)) { _fun147709_ip = 230; continue _fun147709 }
case 70:
                        r2 = r6;
                        _closure1_slot0 = r6;
                        r5 = {'value': null, 'done': true};
                        r5[0] = r0;
                        return r5;
case 93:
                        r2 = r6;
                        _closure1_slot0 = r6;
                        throw r0;
case 102:
                        r8 = 1;
                        if(!(r3 !== r8)) { _fun147709_ip = 272; continue _fun147709 }
case 112:
                        if(!(r3 !== r4)) { _fun147709_ip = 249; continue _fun147709 }
case 119:
                        r10 = _closure0_slot0;
                        r7 = _closure0_slot3;
                        r9 = r7[r15];
                        r7 = undefined;
                        r9 = r10.bind(r7)(r9);
                        r7 = r9.getRootNavigationRef;
                        r10 = r7.bind(r9)();
                        r7 = null;
                        r7 = r7 != r10;
                        if(!r7) { _fun147709_ip = 170; continue _fun147709 }
case 160:
                        r9 = r10.isReady;
                        r7 = r9.bind(r10)();
case 170:
                        if(r7) { _fun147709_ip = 230; continue _fun147709 }
case 173:
                        r7 = global;
                        r9 = r7.Promise;
                        r7 = Object.create(r9.prototype);
                        r11 = function(a0) { // Environment: r5
                            r3 = a0;
                            var _closure1_slot0 = r3;
                            r4 = _closure0_slot0;
                            r3 = _closure0_slot3;
                            r3 = r3[r16];
                            r0 = undefined;
                            r3 = r4.bind(r0)(r3);
                            r4 = r3.ComponentDispatch;
                            r3 = r4.subscribeOnce;
                            r2 = _closure0_slot12;
                            r2 = r2.NAVIGATOR_READY;
                            r1 = function() { // Environment: r1
                                r1 = _closure1_slot0;
                                r0 = undefined;
                                r1 = r1.bind(r0)();
                                return r0;
                            };
                            r1 = r3.bind(r4)(r2, r1);
                            return r0;
                        };
                        r12 = r7;
                        r5 = new r13[r9](r12, r11);
                        _closure1_slot1 = r8;
                        r2 = r8;
                        _closure1_slot0 = r8;
                        r7 = r5 instanceof Object ? r5 : r7;
                        r5 = {'value': null, 'done': false};
                        r5[0] = r7;
                        return r5;
case 230:
                        r2 = r6;
                        _closure1_slot0 = r6;
                        r5 = {'value': undefined, 'done': true};
                        return r5;
case 249:
                        r2 = r6;
                        _closure1_slot0 = r6;
                        r5 = {'value': null, 'done': true};
                        r5[0] = r0;
                        return r5;
case 272:
                        r2 = r6;
                        _closure1_slot0 = r6;
                        throw r0;
case 281:
                        CatchBlockStart(arg_register=5);
                        r2 = r6;
                        _closure1_slot0 = r6;
                        throw r5;
case 292:
                        r5 = 1;
                        if(!(r3 !== r5)) { _fun147709_ip = 331; continue _fun147709 }
case 299:
                        if(!(r3 !== r4)) { _fun147709_ip = 315; continue _fun147709 }
case 303:
                        r3 = {'value': undefined, 'done': true};
                        return r3;
case 315:
                        r3 = {'value': null, 'done': true};
                        r3[0] = r0;
                        return r3;
case 331:
                        throw r0;
case 333:
                        r0 = 3;
                        r2 = r0;
                        _closure1_slot0 = r0;
                        r11 = 'Generator functions may not be called on executing generators';
                        r0 = throwTypeError(r12);
                    }
                };
                return r1;
            };
            r2 = r5.bind(r0)(r2);
            _closure0_slot24 = r2;
            r4 = r2.apply;
            if(r4) { _fun78581_ip = 49; continue _fun78581 }
case 39:
            r1 = arguments;
            r1 = r4.bind(r2)(r3, r1);
            _fun78581_ip = 59; continue _fun78581;
case 49:
            r7 = r2;
            r6 = r3;
            r1 = applyArguments(r8, r7);
case 59:
            return r1;
        }
    };
    var _closure0_slot24 = r5;
    r5 = function() { // Original name: _connectToStage, environment: r1
        _fun78582: for(var _fun78582_ip = 0; ; ) switch(_fun78582_ip) {
case 0:
            r1 = undefined;
            r0 = this;
            r2 = _closure0_slot26;
            r3 = r2.apply;
            if(r3) { _fun78582_ip = 31; continue _fun78582 }
case 21:
            r1 = arguments;
            r1 = r3.bind(r2)(r0, r1);
            _fun78582_ip = 41; continue _fun78582;
case 31:
            r5 = r2;
            r4 = r0;
            r1 = applyArguments(r6, r5);
case 41:
            return r1;
        }
    };
    var _closure0_slot25 = r5;
    r5 = function() { // Original name: _connectToStage2, environment: r1
        _fun78583: for(var _fun78583_ip = 0; ; ) switch(_fun78583_ip) {
case 0:
            r0 = undefined;
            r1 = undefined;
            r3 = this;
            r5 = _closure0_slot4;
            r2 = function(a0, a1) { // Environment: r4
                r2 = a0;
                var _closure1_slot0 = r2;
                r2 = a1;
                var _closure1_slot1 = r2;
                r0 = 0;
                var _closure1_slot6 = r0;
                var _closure1_slot7 = r0;
                var _closure1_slot5 = r0;
                r1 = function* (a0, a1) { // Original name: ?anon_0_, environment: r1
                    _fun147710: for(var _fun147710_ip = 0; ; ) switch(_fun147710_ip) {
case 0:
                        r0 = _closure1_slot7;
                        r2 = r0;
                        r4 = 2;
                        if(!(r0 !== r4)) { _fun147710_ip = 515; continue _fun147710 }
case 20:
                        r0 = a1;
                        r3 = a0;
                        r13 = r2;
                        r7 = 3;
                        r12 = 0;
                        r10 = undefined;
                        r5 = 1;
                        r9 = true;
                        r8 = null;
                        if(!(r13 !== r7)) { _fun147710_ip = 477; continue _fun147710 }
case 53:
                        r2 = r4;
                        _closure1_slot7 = r4;
                        r13 = _closure1_slot6;
                        if(!(r12 !== r13)) { _fun147710_ip = 333; continue _fun147710 }
case 71:
                        if(!(r5 !== r13)) { _fun147710_ip = 216; continue _fun147710 }
case 78:
                        if(!(r4 !== r13)) { _fun147710_ip = 177; continue _fun147710 }
case 82:
                        if(!(r3 !== r5)) { _fun147710_ip = 168; continue _fun147710 }
case 86:
                        if(!(r3 !== r4)) { _fun147710_ip = 141; continue _fun147710 }
case 90:
                        r13 = _closure1_slot2;
                        r14 = _closure1_slot3;
                        _env_r13_slot2 = r0;
                        r15 = _env_r14_slot0;
                        r14 = _env_r14_slot3;
                        r14 = r14[r17];
                        r15 = r15.bind(r10)(r14);
                        r14 = r15.navigateToStage;
                        r13 = _env_r13_slot2;
                        r13 = r14.bind(r15)(r13, r8);
                        _closure1_slot5 = r12;
                        _fun147710_ip = 197; continue _fun147710;
case 141:
                        _closure1_slot5 = r12;
                        r2 = r7;
                        _closure1_slot7 = r7;
                        r13 = {'value': null, 'done': true};
                        r13[0] = r0;
                        return r13;
case 168:
                        r2 = r7;
                        _closure1_slot7 = r7;
                        throw r0;
case 177:
                        r13 = _closure1_slot3;
                        r6 = _closure1_slot4;
                        _closure1_slot5 = r12;
                        r13 = _env_r13_slot19;
                        r13 = r13.bind(r12)();
case 197:
                        r2 = r7;
                        _closure1_slot7 = r7;
                        r13 = {'value': undefined, 'done': true};
                        return r13;
case 216:
                        if(!(r3 !== r5)) { _fun147710_ip = 324; continue _fun147710 }
case 220:
                        if(!(r3 !== r4)) { _fun147710_ip = 301; continue _fun147710 }
case 224:
                        r13 = _closure1_slot2;
                        r14 = _closure1_slot3;
                        _closure1_slot5 = r5;
                        r15 = _env_r14_slot0;
                        r14 = _env_r14_slot3;
                        r14 = r14[r17];
                        r16 = r15.bind(r10)(r14);
                        r15 = r16.connectOrLurkStage;
                        r14 = _env_r13_slot0;
                        r13 = _env_r13_slot1;
                        r14 = r15.bind(r16)(r14, r13, r9);
                        _closure1_slot6 = r7;
                        r2 = r5;
                        _closure1_slot7 = r5;
                        r13 = {'value': null, 'done': false};
                        r13[0] = r14;
                        return r13;
case 301:
                        r2 = r7;
                        _closure1_slot7 = r7;
                        r13 = {'value': null, 'done': true};
                        r13[0] = r0;
                        return r13;
case 324:
                        r2 = r7;
                        _closure1_slot7 = r7;
                        throw r0;
case 333:
                        if(!(r3 !== r5)) { _fun147710_ip = 433; continue _fun147710 }
case 337:
                        if(!(r3 !== r4)) { _fun147710_ip = 410; continue _fun147710 }
case 341:
                        var _closure1_slot3 = r11;
                        var _closure1_slot2 = r13;
                        r14 = _closure1_slot0;
                        var _closure2_slot0 = r14;
                        r14 = _closure1_slot1;
                        var _closure2_slot1 = r14;
                        var _closure2_slot2 = r10;
                        r13 = _closure0_slot20;
                        r14 = r13.bind(r12)();
                        _closure1_slot6 = r5;
                        r2 = r5;
                        _closure1_slot7 = r5;
                        r13 = {'value': null, 'done': false};
                        r13[0] = r14;
                        return r13;
case 410:
                        r2 = r7;
                        _closure1_slot7 = r7;
                        r13 = {'value': null, 'done': true};
                        r13[0] = r0;
                        return r13;
case 433:
                        r2 = r7;
                        _closure1_slot7 = r7;
                        throw r0;
case 442:
                        CatchBlockStart(arg_register=13);
                        r6 = r13;
                        var _closure1_slot4 = r13;
                        r13 = _closure1_slot5;
                        if(!(r12 !== r13)) { _fun147710_ip = 468; continue _fun147710 }
case 459:
                        _closure1_slot6 = r4;
                        _fun147710_ip = 53; continue _fun147710;
case 468:
                        r2 = r7;
                        _closure1_slot7 = r7;
                        throw r6;
case 477:
                        if(!(r3 !== r5)) { _fun147710_ip = 513; continue _fun147710 }
case 481:
                        if(!(r3 !== r4)) { _fun147710_ip = 497; continue _fun147710 }
case 485:
                        r3 = {'value': undefined, 'done': true};
                        return r3;
case 497:
                        r3 = {'value': null, 'done': true};
                        r3[0] = r0;
                        return r3;
case 513:
                        throw r0;
case 515:
                        r0 = 3;
                        r2 = r0;
                        _closure1_slot7 = r0;
                        r19 = 'Generator functions may not be called on executing generators';
                        r0 = throwTypeError(r20);
                    }
                };
                return r1;
            };
            r2 = r5.bind(r0)(r2);
            _closure0_slot26 = r2;
            r4 = r2.apply;
            if(r4) { _fun78583_ip = 49; continue _fun78583 }
case 39:
            r1 = arguments;
            r1 = r4.bind(r2)(r3, r1);
            _fun78583_ip = 59; continue _fun78583;
case 49:
            r7 = r2;
            r6 = r3;
            r1 = applyArguments(r8, r7);
case 59:
            return r1;
        }
    };
    var _closure0_slot26 = r5;
    r5 = function() { // Original name: _handleStageNotification, environment: r1
        _fun78584: for(var _fun78584_ip = 0; ; ) switch(_fun78584_ip) {
case 0:
            r0 = undefined;
            r1 = undefined;
            r3 = this;
            r5 = _closure0_slot4;
            r2 = function(a0) { // Environment: r4
                r2 = a0;
                var _closure1_slot0 = r2;
                r0 = 0;
                var _closure1_slot2 = r0;
                var _closure1_slot1 = r0;
                r1 = function* (a0) { // Original name: ?anon_0_, environment: r1
                    _fun147711: for(var _fun147711_ip = 0; ; ) switch(_fun147711_ip) {
case 0:
                        r0 = _closure1_slot1;
                        r2 = r0;
                        r4 = 2;
                        if(!(r0 !== r4)) { _fun147711_ip = 269; continue _fun147711 }
case 20:
                        r0 = arguments[1];
                        r3 = a0;
                        r5 = r2;
                        r6 = 3;
                        if(!(r5 !== r6)) { _fun147711_ip = 228; continue _fun147711 }
case 39:
                        r2 = r4;
                        _closure1_slot1 = r4;
                        r7 = _closure1_slot2;
                        r5 = 0;
                        if(!(r5 !== r7)) { _fun147711_ip = 118; continue _fun147711 }
case 56:
                        r5 = 1;
                        if(!(r3 !== r5)) { _fun147711_ip = 109; continue _fun147711 }
case 63:
                        if(!(r3 !== r4)) { _fun147711_ip = 86; continue _fun147711 }
case 67:
                        r2 = r6;
                        _closure1_slot1 = r6;
                        r5 = {'value': undefined, 'done': true};
                        return r5;
case 86:
                        r2 = r6;
                        _closure1_slot1 = r6;
                        r5 = {'value': null, 'done': true};
                        r5[0] = r0;
                        return r5;
case 109:
                        r2 = r6;
                        _closure1_slot1 = r6;
                        throw r0;
case 118:
                        r5 = 1;
                        if(!(r3 !== r5)) { _fun147711_ip = 208; continue _fun147711 }
case 125:
                        if(!(r3 !== r4)) { _fun147711_ip = 185; continue _fun147711 }
case 129:
                        r7 = _closure1_slot0;
                        r10 = _closure0_slot25;
                        r9 = r7.guild_id;
                        r8 = r7.channel_id;
                        r7 = undefined;
                        r7 = r10.bind(r7)(r9, r8);
                        _closure1_slot2 = r5;
                        r2 = r5;
                        _closure1_slot1 = r5;
                        r5 = {'value': null, 'done': false};
                        r5[0] = r7;
                        return r5;
case 185:
                        r2 = r6;
                        _closure1_slot1 = r6;
                        r5 = {'value': null, 'done': true};
                        r5[0] = r0;
                        return r5;
case 208:
                        r2 = r6;
                        _closure1_slot1 = r6;
                        throw r0;
case 217:
                        CatchBlockStart(arg_register=5);
                        r2 = r6;
                        _closure1_slot1 = r6;
                        throw r5;
case 228:
                        r5 = 1;
                        if(!(r3 !== r5)) { _fun147711_ip = 267; continue _fun147711 }
case 235:
                        if(!(r3 !== r4)) { _fun147711_ip = 251; continue _fun147711 }
case 239:
                        r3 = {'value': undefined, 'done': true};
                        return r3;
case 251:
                        r3 = {'value': null, 'done': true};
                        r3[0] = r0;
                        return r3;
case 267:
                        throw r0;
case 269:
                        r0 = 3;
                        r2 = r0;
                        _closure1_slot1 = r0;
                        r12 = 'Generator functions may not be called on executing generators';
                        r0 = throwTypeError(r13);
                    }
                };
                return r1;
            };
            r2 = r5.bind(r0)(r2);
            _closure0_slot27 = r2;
            r4 = r2.apply;
            if(r4) { _fun78584_ip = 49; continue _fun78584 }
case 39:
            r1 = arguments;
            r1 = r4.bind(r2)(r3, r1);
            _fun78584_ip = 59; continue _fun78584;
case 49:
            r7 = r2;
            r6 = r3;
            r1 = applyArguments(r8, r7);
case 59:
            return r1;
        }
    };
    var _closure0_slot27 = r5;
    r5 = function() { // Original name: _handleGuildEventNotification, environment: r1
        _fun78585: for(var _fun78585_ip = 0; ; ) switch(_fun78585_ip) {
case 0:
            r0 = undefined;
            r1 = undefined;
            r3 = this;
            r5 = _closure0_slot4;
            r2 = function(a0) { // Environment: r4
                r2 = a0;
                var _closure1_slot0 = r2;
                r0 = 0;
                var _closure1_slot3 = r0;
                var _closure1_slot4 = r0;
                r1 = function* (a0) { // Original name: ?anon_0_, environment: r1
                    _fun147712: for(var _fun147712_ip = 0; ; ) switch(_fun147712_ip) {
case 0:
                        r0 = _closure1_slot4;
                        r2 = r0;
                        r4 = 2;
                        if(!(r0 !== r4)) { _fun147712_ip = 853; continue _fun147712 }
case 20:
                        r0 = arguments[1];
                        r3 = a0;
                        r5 = r2;
                        r6 = 3;
                        if(!(r5 !== r6)) { _fun147712_ip = 812; continue _fun147712 }
case 39:
                        r2 = r4;
                        _closure1_slot4 = r4;
                        r7 = _closure1_slot3;
                        r9 = 0;
                        if(!(r9 !== r7)) { _fun147712_ip = 389; continue _fun147712 }
case 59:
                        r5 = 1;
                        if(!(r5 !== r7)) { _fun147712_ip = 209; continue _fun147712 }
case 69:
                        if(!(r4 !== r7)) { _fun147712_ip = 162; continue _fun147712 }
case 73:
                        if(!(r3 !== r5)) { _fun147712_ip = 153; continue _fun147712 }
case 77:
                        if(!(r3 !== r4)) { _fun147712_ip = 130; continue _fun147712 }
case 81:
                        r7 = _closure1_slot1;
                        r8 = _closure1_slot2;
                        r11 = _env_r8_slot0;
                        r8 = _env_r8_slot3;
                        r10 = r8[r18];
                        r8 = undefined;
                        r10 = r11.bind(r8)(r10);
                        r8 = r10.transitionToChannel;
                        r7 = _env_r7_slot0;
                        r7 = r8.bind(r10)(r7);
                        r13 = undefined;
                        _fun147712_ip = 660; continue _fun147712;
case 130:
                        r2 = r6;
                        _closure1_slot4 = r6;
                        r7 = {'value': null, 'done': true};
                        r7[0] = r0;
                        return r7;
case 153:
                        r2 = r6;
                        _closure1_slot4 = r6;
                        throw r0;
case 162:
                        if(!(r3 !== r5)) { _fun147712_ip = 200; continue _fun147712 }
case 166:
                        if(!(r3 !== r4)) { _fun147712_ip = 177; continue _fun147712 }
case 170:
                        r7 = undefined;
                        _fun147712_ip = 746; continue _fun147712;
case 177:
                        r2 = r6;
                        _closure1_slot4 = r6;
                        r8 = {'value': null, 'done': true};
                        r8[0] = r0;
                        return r8;
case 200:
                        r2 = r6;
                        _closure1_slot4 = r6;
                        throw r0;
case 209:
                        if(!(r3 !== r5)) { _fun147712_ip = 380; continue _fun147712 }
case 216:
                        if(!(r3 !== r4)) { _fun147712_ip = 357; continue _fun147712 }
case 223:
                        r5 = _closure1_slot1;
                        r8 = _closure1_slot2;
                        r11 = _env_r8_slot6;
                        r10 = r11.getGuildScheduledEvent;
                        r8 = _env_r5_slot1;
                        r8 = r10.bind(r11)(r8);
                        _env_r5_slot2 = r8;
                        r8 = _env_r5_slot2;
                        r5 = null;
                        if(!(r5 != r8)) { _fun147712_ip = 338; continue _fun147712 }
case 264:
                        r11 = _closure1_slot1;
                        r5 = _closure1_slot2;
                        r10 = _env_r5_slot0;
                        r5 = _env_r5_slot3;
                        r8 = r5[r20];
                        r5 = undefined;
                        r10 = r10.bind(r5)(r8);
                        r8 = r10.openGuildEventDetails;
                        r5 = {'eventId': null, 'event': null};
                        r12 = _env_r11_slot2;
                        r12 = r12.id;
                        r5[0] = r12;
                        r11 = _env_r11_slot2;
                        r5[1] = r11;
                        r5 = r8.bind(r10)(r5);
                        _fun147712_ip = 500; continue _fun147712;
case 338:
                        r2 = r6;
                        _closure1_slot4 = r6;
                        r5 = {'value': undefined, 'done': true};
                        return r5;
case 357:
                        r2 = r6;
                        _closure1_slot4 = r6;
                        r5 = {'value': null, 'done': true};
                        r5[0] = r0;
                        return r5;
case 380:
                        r2 = r6;
                        _closure1_slot4 = r6;
                        throw r0;
case 389:
                        r10 = 1;
                        if(!(r3 !== r10)) { _fun147712_ip = 792; continue _fun147712 }
case 399:
                        if(!(r3 !== r4)) { _fun147712_ip = 769; continue _fun147712 }
case 406:
                        var _closure1_slot2 = r8;
                        var _closure1_slot1 = r12;
                        r11 = _closure1_slot0;
                        r5 = undefined;
                        var _closure1_slot0 = r5;
                        var _closure1_slot1 = r5;
                        var _closure1_slot2 = r5;
                        r14 = global;
                        r15 = r14.Number;
                        r14 = r11.guild_scheduled_event_entity_type;
                        r15 = r15.bind(r5)(r14);
                        r14 = _closure0_slot16;
                        r16 = r14.STAGE_INSTANCE;
                        if(!(r16 !== r15)) { _fun147712_ip = 683; continue _fun147712 }
case 480:
                        r16 = r14.VOICE;
                        if(!(r16 !== r15)) { _fun147712_ip = 597; continue _fun147712 }
case 490:
                        r14 = r14.EXTERNAL;
                        if(!(r14 !== r15)) { _fun147712_ip = 519; continue _fun147712 }
case 500:
                        r2 = r6;
                        _closure1_slot4 = r6;
                        r14 = {'value': undefined, 'done': true};
                        return r14;
case 519:
                        r16 = r11.guild_id;
                        r14 = r11.guild_scheduled_event_id;
                        _closure1_slot1 = r14;
                        r15 = _closure0_slot0;
                        r14 = _closure0_slot3;
                        r14 = r14[r19];
                        r15 = r15.bind(r5)(r14);
                        r14 = r15.transitionToGuild;
                        r14 = r14.bind(r15)(r16);
                        r14 = _closure0_slot20;
                        r15 = r14.bind(r9)();
                        _closure1_slot3 = r10;
                        r2 = r10;
                        _closure1_slot4 = r10;
                        r14 = {'value': null, 'done': false};
                        r14[0] = r15;
                        return r14;
case 597:
                        r14 = r11.channel_id;
                        _closure1_slot0 = r14;
                        r12 = null;
                        if(!(r12 != r14)) { _fun147712_ip = 647; continue _fun147712 }
case 612:
                        r12 = _closure0_slot20;
                        r14 = r12.bind(r9)();
                        _closure1_slot3 = r6;
                        r2 = r10;
                        _closure1_slot4 = r10;
                        r12 = {'value': null, 'done': false};
                        r12[0] = r14;
                        return r12;
case 647:
                        r12 = function() { // Original name: onVoiceConnectionError, environment: r8
                            r5 = _closure0_slot1;
                            r4 = _closure0_slot3;
                            r1 = r4[r12];
                            r0 = undefined;
                            r3 = r5.bind(r0)(r1);
                            r2 = r3.open;
                            r1 = {'key': 'VOICE_CONNECTION_ERROR_GENERIC', 'content': null, 'icon': null};
                            r9 = _closure0_slot0;
                            r6 = r4[r13];
                            r6 = r9.bind(r0)(r6);
                            r8 = r6.intl;
                            r7 = r8.string;
                            r6 = r4[r13];
                            r6 = r9.bind(r0)(r6);
                            r6 = r6.t;
                            r6 = r6.S69lJR;
                            r6 = r7.bind(r8)(r6);
                            r1[1] = r6;
                            r4 = r4[r14];
                            r4 = r5.bind(r0)(r4);
                            r1[2] = r4;
                            r1 = r2.bind(r3)(r1);
                            return r0;
                        };
                        r12 = r12.bind(r9)();
                        r13 = undefined;
case 660:
                        r2 = r6;
                        _closure1_slot4 = r6;
                        r12 = {'value': null, 'done': true};
                        r12[0] = r13;
                        return r12;
case 683:
                        r13 = r11.channel_id;
                        r12 = null;
                        if(!(r12 != r13)) { _fun147712_ip = 736; continue _fun147712 }
case 694:
                        r12 = _closure0_slot25;
                        r11 = r11.guild_id;
                        r11 = r12.bind(r5)(r11, r13);
                        _closure1_slot3 = r4;
                        r2 = r10;
                        _closure1_slot4 = r10;
                        r10 = {'value': null, 'done': false};
                        r10[0] = r11;
                        return r10;
case 736:
                        r8 = _closure0_slot19;
                        r8 = r8.bind(r9)();
                        r7 = undefined;
case 746:
                        r2 = r6;
                        _closure1_slot4 = r6;
                        r5 = {'value': null, 'done': true};
                        r5[0] = r7;
                        return r5;
case 769:
                        r2 = r6;
                        _closure1_slot4 = r6;
                        r5 = {'value': null, 'done': true};
                        r5[0] = r0;
                        return r5;
case 792:
                        r2 = r6;
                        _closure1_slot4 = r6;
                        throw r0;
case 801:
                        CatchBlockStart(arg_register=5);
                        r2 = r6;
                        _closure1_slot4 = r6;
                        throw r5;
case 812:
                        r5 = 1;
                        if(!(r3 !== r5)) { _fun147712_ip = 851; continue _fun147712 }
case 819:
                        if(!(r3 !== r4)) { _fun147712_ip = 835; continue _fun147712 }
case 823:
                        r3 = {'value': undefined, 'done': true};
                        return r3;
case 835:
                        r3 = {'value': null, 'done': true};
                        r3[0] = r0;
                        return r3;
case 851:
                        throw r0;
case 853:
                        r0 = 3;
                        r2 = r0;
                        _closure1_slot4 = r0;
                        r18 = 'Generator functions may not be called on executing generators';
                        r0 = throwTypeError(r19);
                    }
                };
                return r1;
            };
            r2 = r5.bind(r0)(r2);
            _closure0_slot28 = r2;
            r4 = r2.apply;
            if(r4) { _fun78585_ip = 49; continue _fun78585 }
case 39:
            r1 = arguments;
            r1 = r4.bind(r2)(r3, r1);
            _fun78585_ip = 59; continue _fun78585;
case 49:
            r7 = r2;
            r6 = r3;
            r1 = applyArguments(r8, r7);
case 59:
            return r1;
        }
    };
    var _closure0_slot28 = r5;
    r5 = function() { // Original name: _handleRelationshipAddNotification, environment: r1
        _fun78586: for(var _fun78586_ip = 0; ; ) switch(_fun78586_ip) {
case 0:
            r0 = undefined;
            r1 = undefined;
            r3 = this;
            r5 = _closure0_slot4;
            r2 = function(a0) { // Environment: r4
                r2 = a0;
                var _closure1_slot0 = r2;
                r0 = 0;
                var _closure1_slot3 = r0;
                var _closure1_slot4 = r0;
                r1 = function* (a0) { // Original name: ?anon_0_, environment: r1
                    _fun147713: for(var _fun147713_ip = 0; ; ) switch(_fun147713_ip) {
case 0:
                        r0 = _closure1_slot4;
                        r2 = r0;
                        r4 = 2;
                        if(!(r0 !== r4)) { _fun147713_ip = 859; continue _fun147713 }
case 20:
                        r0 = arguments[1];
                        r3 = a0;
                        r5 = r2;
                        r6 = 3;
                        if(!(r5 !== r6)) { _fun147713_ip = 818; continue _fun147713 }
case 39:
                        r2 = r4;
                        _closure1_slot4 = r4;
                        r7 = _closure1_slot3;
                        r5 = 0;
                        if(!(r5 !== r7)) { _fun147713_ip = 693; continue _fun147713 }
case 59:
                        r5 = 1;
                        if(!(r5 !== r7)) { _fun147713_ip = 222; continue _fun147713 }
case 69:
                        if(!(r3 !== r5)) { _fun147713_ip = 213; continue _fun147713 }
case 76:
                        if(!(r3 !== r4)) { _fun147713_ip = 190; continue _fun147713 }
case 80:
                        r11 = _closure1_slot1;
                        r10 = _closure1_slot2;
                        r8 = _env_r10_slot1;
                        r7 = _env_r10_slot3;
                        r7 = r7[r24];
                        r9 = undefined;
                        r8 = r8.bind(r9)(r7);
                        r7 = {'userId': null, 'sourceAnalyticsLocations': null};
                        r11 = _env_r11_slot2;
                        r7[0] = r11;
                        r11 = _env_r10_slot1;
                        r10 = _env_r10_slot3;
                        r10 = r10[r25];
                        r10 = r11.bind(r9)(r10);
                        r11 = r10.PUSH_NOTIFICATION;
                        r10 = new Array(1);
                        r10[0] = r11;
                        r7[1] = r10;
                        r7 = r8.bind(r9)(r7);
                        r2 = r6;
                        _closure1_slot4 = r6;
                        r8 = undefined;
                        r7 = {'value': null, 'done': true};
                        r7[0] = r8;
                        return r7;
case 190:
                        r2 = r6;
                        _closure1_slot4 = r6;
                        r7 = {'value': null, 'done': true};
                        r7[0] = r0;
                        return r7;
case 213:
                        r2 = r6;
                        _closure1_slot4 = r6;
                        throw r0;
case 222:
                        if(!(r3 !== r5)) { _fun147713_ip = 684; continue _fun147713 }
case 229:
                        if(!(r3 !== r4)) { _fun147713_ip = 661; continue _fun147713 }
case 236:
                        r8 = _closure1_slot1;
                        r7 = _closure1_slot2;
                        r9 = global;
                        r11 = r9.Number;
                        r9 = _env_r8_slot0;
                        r9 = r9.rel_type;
                        r10 = undefined;
                        r9 = r11.bind(r10)(r9);
                        _env_r8_slot1 = r9;
                        r8 = _env_r8_slot1;
                        r7 = _env_r7_slot13;
                        r7 = r7.PENDING_INCOMING;
                        if(!(r8 !== r7)) { _fun147713_ip = 496; continue _fun147713 }
case 294:
                        r8 = _closure1_slot1;
                        r7 = _closure1_slot2;
                        r8 = _env_r8_slot1;
                        r7 = _env_r7_slot13;
                        r7 = r7.FRIEND;
                        if(!(r8 === r7)) { _fun147713_ip = 382; continue _fun147713 }
case 320:
                        r11 = _closure1_slot1;
                        r7 = _closure1_slot2;
                        r8 = _env_r7_slot1;
                        r7 = _env_r7_slot3;
                        r7 = r7[r26];
                        r9 = r8.bind(r10)(r7);
                        r8 = r9.openPrivateChannel;
                        r7 = {'recipientIds': null};
                        r11 = _env_r11_slot0;
                        r11 = r11.user_id;
                        r7[0] = r11;
                        r7 = r8.bind(r9)(r7);
                        _fun147713_ip = 477; continue _fun147713;
case 382:
                        r8 = _closure1_slot1;
                        r7 = _closure1_slot2;
                        r8 = _env_r8_slot0;
                        r8 = r8.notification_type;
                        r7 = _env_r7_slot10;
                        r7 = r7.REMINDER;
                        if(!(r8 === r7)) { _fun147713_ip = 477; continue _fun147713 }
case 414:
                        r7 = _closure1_slot2;
                        r8 = _env_r7_slot0;
                        r7 = _env_r7_slot3;
                        r7 = r7[r15];
                        r8 = r8.bind(r10)(r7);
                        r7 = r8.getRootNavigationRef;
                        r11 = r7.bind(r8)();
                        r7 = null;
                        if(!(r11 != r7)) { _fun147713_ip = 477; continue _fun147713 }
case 451:
                        r9 = r11.navigate;
                        r8 = 'friends';
                        r7 = {'screen': 'requests'};
                        r7 = r9.bind(r11)(r8, r7);
case 477:
                        r2 = r6;
                        _closure1_slot4 = r6;
                        r7 = {'value': undefined, 'done': true};
                        return r7;
case 496:
                        r7 = _closure1_slot1;
                        r8 = _closure1_slot2;
                        r9 = _env_r7_slot0;
                        r9 = r9.user_id;
                        _env_r7_slot2 = r9;
                        r11 = _env_r8_slot0;
                        r9 = _env_r8_slot3;
                        r9 = r9[r21];
                        r12 = r11.bind(r10)(r9);
                        r11 = r12.navigateToRootTab;
                        r9 = {'screen': 'notifications'};
                        r9 = r11.bind(r12)(r9);
                        r11 = _env_r8_slot2;
                        r9 = _env_r8_slot3;
                        r9 = r9[r22];
                        r12 = r11.bind(r10)(r9);
                        r11 = r12.setTab;
                        r13 = _env_r8_slot0;
                        r9 = _env_r8_slot3;
                        r9 = r9[r23];
                        r9 = r13.bind(r10)(r9);
                        r9 = r9.NotificationCenterTabs;
                        r9 = r9.ForYou;
                        r9 = r11.bind(r12)(r9);
                        r9 = _env_r8_slot21;
                        r8 = _env_r8_slot9;
                        r7 = function() { // Environment: r7
                            r3 = _env_r1_slot9;
                            r2 = r3.getUser;
                            r1 = _env_r1_slot2;
                            r1 = r2.bind(r3)(r1);
                            r0 = null;
                            r0 = r0 != r1;
                            return r0;
                        };
                        r7 = r9.bind(r10)(r8, r7);
                        _closure1_slot3 = r4;
                        r2 = r5;
                        _closure1_slot4 = r5;
                        r5 = {'value': null, 'done': false};
                        r5[0] = r7;
                        return r5;
case 661:
                        r2 = r6;
                        _closure1_slot4 = r6;
                        r5 = {'value': null, 'done': true};
                        r5[0] = r0;
                        return r5;
case 684:
                        r2 = r6;
                        _closure1_slot4 = r6;
                        throw r0;
case 693:
                        r5 = 1;
                        if(!(r3 !== r5)) { _fun147713_ip = 798; continue _fun147713 }
case 700:
                        if(!(r3 !== r4)) { _fun147713_ip = 775; continue _fun147713 }
case 704:
                        var _closure1_slot2 = r7;
                        var _closure1_slot1 = r9;
                        r8 = _closure1_slot0;
                        var _closure1_slot0 = r8;
                        r8 = undefined;
                        var _closure1_slot1 = r8;
                        var _closure1_slot2 = r8;
                        r7 = _closure0_slot23;
                        r7 = r7.bind(r8)();
                        _closure1_slot3 = r5;
                        r2 = r5;
                        _closure1_slot4 = r5;
                        r5 = {'value': null, 'done': false};
                        r5[0] = r7;
                        return r5;
case 775:
                        r2 = r6;
                        _closure1_slot4 = r6;
                        r5 = {'value': null, 'done': true};
                        r5[0] = r0;
                        return r5;
case 798:
                        r2 = r6;
                        _closure1_slot4 = r6;
                        throw r0;
case 807:
                        CatchBlockStart(arg_register=5);
                        r2 = r6;
                        _closure1_slot4 = r6;
                        throw r5;
case 818:
                        r5 = 1;
                        if(!(r3 !== r5)) { _fun147713_ip = 857; continue _fun147713 }
case 825:
                        if(!(r3 !== r4)) { _fun147713_ip = 841; continue _fun147713 }
case 829:
                        r3 = {'value': undefined, 'done': true};
                        return r3;
case 841:
                        r3 = {'value': null, 'done': true};
                        r3[0] = r0;
                        return r3;
case 857:
                        throw r0;
case 859:
                        r0 = 3;
                        r2 = r0;
                        _closure1_slot4 = r0;
                        r15 = 'Generator functions may not be called on executing generators';
                        r0 = throwTypeError(r16);
                    }
                };
                return r1;
            };
            r2 = r5.bind(r0)(r2);
            _closure0_slot29 = r2;
            r4 = r2.apply;
            if(r4) { _fun78586_ip = 49; continue _fun78586 }
case 39:
            r1 = arguments;
            r1 = r4.bind(r2)(r3, r1);
            _fun78586_ip = 59; continue _fun78586;
case 49:
            r7 = r2;
            r6 = r3;
            r1 = applyArguments(r8, r7);
case 59:
            return r1;
        }
    };
    var _closure0_slot29 = r5;
    r5 = function() { // Original name: _handleCallRingNotification, environment: r1
        _fun78587: for(var _fun78587_ip = 0; ; ) switch(_fun78587_ip) {
case 0:
            r0 = undefined;
            r1 = undefined;
            r3 = this;
            r5 = _closure0_slot4;
            r2 = function(a0) { // Environment: r4
                r2 = a0;
                var _closure1_slot0 = r2;
                r0 = 0;
                var _closure1_slot3 = r0;
                var _closure1_slot4 = r0;
                r1 = function* (a0) { // Original name: ?anon_0_, environment: r1
                    _fun147714: for(var _fun147714_ip = 0; ; ) switch(_fun147714_ip) {
case 0:
                        r0 = _closure1_slot4;
                        r2 = r0;
                        r4 = 2;
                        if(!(r0 !== r4)) { _fun147714_ip = 336; continue _fun147714 }
case 20:
                        r0 = arguments[1];
                        r3 = a0;
                        r5 = r2;
                        r6 = 3;
                        if(!(r5 !== r6)) { _fun147714_ip = 295; continue _fun147714 }
case 39:
                        r2 = r4;
                        _closure1_slot4 = r4;
                        r7 = _closure1_slot3;
                        r5 = 0;
                        if(!(r5 !== r7)) { _fun147714_ip = 165; continue _fun147714 }
case 56:
                        r5 = 1;
                        if(!(r3 !== r5)) { _fun147714_ip = 156; continue _fun147714 }
case 63:
                        if(!(r3 !== r4)) { _fun147714_ip = 133; continue _fun147714 }
case 67:
                        r5 = _closure1_slot1;
                        r7 = _closure1_slot2;
                        r9 = _env_r7_slot0;
                        r7 = _env_r7_slot3;
                        r8 = r7[r18];
                        r7 = undefined;
                        r8 = r9.bind(r7)(r8);
                        r7 = r8.transitionToChannel;
                        r5 = _env_r5_slot0;
                        r5 = r5.channel_id;
                        r5 = r7.bind(r8)(r5);
                        r2 = r6;
                        _closure1_slot4 = r6;
                        r5 = {'value': undefined, 'done': true};
                        return r5;
case 133:
                        r2 = r6;
                        _closure1_slot4 = r6;
                        r5 = {'value': null, 'done': true};
                        r5[0] = r0;
                        return r5;
case 156:
                        r2 = r6;
                        _closure1_slot4 = r6;
                        throw r0;
case 165:
                        r5 = 1;
                        if(!(r3 !== r5)) { _fun147714_ip = 275; continue _fun147714 }
case 172:
                        if(!(r3 !== r4)) { _fun147714_ip = 252; continue _fun147714 }
case 176:
                        var _closure1_slot2 = r8;
                        var _closure1_slot1 = r7;
                        r9 = _closure1_slot0;
                        var _closure1_slot0 = r9;
                        r10 = _closure0_slot21;
                        r9 = _closure0_slot8;
                        r8 = undefined;
                        r7 = function() { // Environment: r7
                            r3 = _closure0_slot8;
                            r2 = r3.getChannel;
                            r1 = _closure1_slot0;
                            r1 = r1.channel_id;
                            r1 = r2.bind(r3)(r1);
                            r0 = null;
                            r0 = r0 != r1;
                            return r0;
                        };
                        r7 = r10.bind(r8)(r9, r7);
                        _closure1_slot3 = r5;
                        r2 = r5;
                        _closure1_slot4 = r5;
                        r5 = {'value': null, 'done': false};
                        r5[0] = r7;
                        return r5;
case 252:
                        r2 = r6;
                        _closure1_slot4 = r6;
                        r5 = {'value': null, 'done': true};
                        r5[0] = r0;
                        return r5;
case 275:
                        r2 = r6;
                        _closure1_slot4 = r6;
                        throw r0;
case 284:
                        CatchBlockStart(arg_register=5);
                        r2 = r6;
                        _closure1_slot4 = r6;
                        throw r5;
case 295:
                        r5 = 1;
                        if(!(r3 !== r5)) { _fun147714_ip = 334; continue _fun147714 }
case 302:
                        if(!(r3 !== r4)) { _fun147714_ip = 318; continue _fun147714 }
case 306:
                        r3 = {'value': undefined, 'done': true};
                        return r3;
case 318:
                        r3 = {'value': null, 'done': true};
                        r3[0] = r0;
                        return r3;
case 334:
                        throw r0;
case 336:
                        r0 = 3;
                        r2 = r0;
                        _closure1_slot4 = r0;
                        r12 = 'Generator functions may not be called on executing generators';
                        r0 = throwTypeError(r13);
                    }
                };
                return r1;
            };
            r2 = r5.bind(r0)(r2);
            _closure0_slot30 = r2;
            r4 = r2.apply;
            if(r4) { _fun78587_ip = 49; continue _fun78587 }
case 39:
            r1 = arguments;
            r1 = r4.bind(r2)(r3, r1);
            _fun78587_ip = 59; continue _fun78587;
case 49:
            r7 = r2;
            r6 = r3;
            r1 = applyArguments(r8, r7);
case 59:
            return r1;
        }
    };
    var _closure0_slot30 = r5;
    r5 = function() { // Original name: _handleCallConnectNotification, environment: r1
        _fun78588: for(var _fun78588_ip = 0; ; ) switch(_fun78588_ip) {
case 0:
            r0 = undefined;
            r1 = undefined;
            r3 = this;
            r5 = _closure0_slot4;
            r2 = function(a0) { // Environment: r4
                r2 = a0;
                var _closure1_slot0 = r2;
                r0 = 0;
                var _closure1_slot3 = r0;
                var _closure1_slot4 = r0;
                r1 = function* (a0) { // Original name: ?anon_0_, environment: r1
                    _fun147715: for(var _fun147715_ip = 0; ; ) switch(_fun147715_ip) {
case 0:
                        r0 = _closure1_slot4;
                        r2 = r0;
                        r4 = 2;
                        if(!(r0 !== r4)) { _fun147715_ip = 828; continue _fun147715 }
case 20:
                        r0 = arguments[1];
                        r3 = a0;
                        r5 = r2;
                        r6 = 3;
                        if(!(r5 !== r6)) { _fun147715_ip = 787; continue _fun147715 }
case 39:
                        r2 = r4;
                        _closure1_slot4 = r4;
                        r7 = _closure1_slot3;
                        r8 = 0;
                        if(!(r8 !== r7)) { _fun147715_ip = 657; continue _fun147715 }
case 59:
                        r5 = 1;
                        if(!(r5 !== r7)) { _fun147715_ip = 535; continue _fun147715 }
case 69:
                        if(!(r3 !== r5)) { _fun147715_ip = 526; continue _fun147715 }
case 76:
                        if(!(r3 !== r4)) { _fun147715_ip = 503; continue _fun147715 }
case 83:
                        r14 = _closure1_slot1;
                        r7 = _closure1_slot2;
                        r11 = _env_r7_slot1;
                        r9 = _env_r7_slot3;
                        r9 = r9[r27];
                        r10 = undefined;
                        r12 = r11.bind(r10)(r9);
                        r13 = r12.call;
                        r9 = _env_r14_slot0;
                        r11 = r9.channel_id;
                        if(r13) { _fun147715_ip = 139; continue _fun147715 }
case 128:
                        r9 = false;
                        r9 = r13.bind(r12)(r11, r9, r9);
                        _fun147715_ip = 147; continue _fun147715;
case 139:
                        r9 = false;
                        r9 = r12.bind(r11)(r9, r9);
case 147:
                        r11 = _env_r7_slot1;
                        r9 = _env_r7_slot3;
                        r9 = r9[r28];
                        r13 = r11.bind(r10)(r9);
                        r12 = r13.track;
                        r9 = _env_r7_slot11;
                        r11 = r9.RING_CALL_ACCEPTED;
                        r9 = {'location': null, 'guild_id': null, 'ringer_user_id': null};
                        r16 = _env_r7_slot1;
                        r15 = _env_r7_slot3;
                        r15 = r15[r25];
                        r15 = r16.bind(r10)(r15);
                        r15 = r15.PUSH_NOTIFICATION;
                        r9[0] = r15;
                        r15 = _env_r14_slot0;
                        r15 = r15.guild_id;
                        r9[1] = r15;
                        r15 = _env_r14_slot0;
                        r15 = r15.user_id;
                        r9[2] = r15;
                        r16 = _env_r7_slot0;
                        r15 = _env_r7_slot3;
                        r15 = r15[r29];
                        r16 = r16.bind(r10)(r15);
                        r15 = r16.collectChannelAnalyticsMetadataFromId;
                        r14 = _env_r14_slot0;
                        r14 = r14.channel_id;
                        r18 = r15.bind(r16)(r14);
                        r19 = r9;
                        r14 = copyDataProperties(r20, r19);
                        r9 = r12.bind(r13)(r11, r9);
                        r9 = _env_r7_slot0;
                        r7 = _env_r7_slot3;
                        r7 = r7[r30];
                        r9 = r9.bind(r10)(r7);
                        r7 = r9.isAndroid;
                        r7 = r7.bind(r9)();
                        if(!r7) { _fun147715_ip = 484; continue _fun147715 }
case 326:
                        r7 = _closure1_slot1;
                        r7 = _env_r7_slot0;
                        r7 = r7.is_fullscreen_call_ui;
                        if(!r7) { _fun147715_ip = 445; continue _fun147715 }
case 345:
                        r13 = _closure1_slot1;
                        r14 = _closure1_slot2;
                        r9 = _env_r14_slot1;
                        r7 = _env_r14_slot3;
                        r7 = r7[r28];
                        r12 = r9.bind(r10)(r7);
                        r11 = r12.track;
                        r7 = _env_r14_slot11;
                        r9 = r7.CALLKIT_CLICKED;
                        r7 = {'action_type': 'join'};
                        r15 = _env_r14_slot0;
                        r14 = _env_r14_slot3;
                        r14 = r14[r29];
                        r15 = r15.bind(r10)(r14);
                        r14 = r15.collectChannelAnalyticsMetadataFromId;
                        r13 = _env_r13_slot0;
                        r13 = r13.channel_id;
                        r18 = r14.bind(r15)(r13);
                        r19 = r7;
                        r13 = copyDataProperties(r20, r19);
                        r7 = r11.bind(r12)(r9, r7);
case 445:
                        r7 = _closure1_slot1;
                        r9 = _closure1_slot2;
                        r11 = _env_r9_slot1;
                        r9 = _env_r9_slot3;
                        r9 = r9[r31];
                        r9 = r11.bind(r10)(r9);
                        r7 = _env_r7_slot0;
                        r7 = r7.channel_id;
                        r7 = r9.bind(r10)(r7);
case 484:
                        r2 = r6;
                        _closure1_slot4 = r6;
                        r7 = {'value': undefined, 'done': true};
                        return r7;
case 503:
                        r2 = r6;
                        _closure1_slot4 = r6;
                        r7 = {'value': null, 'done': true};
                        r7[0] = r0;
                        return r7;
case 526:
                        r2 = r6;
                        _closure1_slot4 = r6;
                        throw r0;
case 535:
                        if(!(r3 !== r5)) { _fun147715_ip = 648; continue _fun147715 }
case 539:
                        if(!(r3 !== r4)) { _fun147715_ip = 625; continue _fun147715 }
case 543:
                        r9 = _closure1_slot1;
                        r7 = _closure1_slot2;
                        r12 = _env_r7_slot0;
                        r10 = _env_r7_slot3;
                        r11 = r10[r18];
                        r10 = undefined;
                        r11 = r12.bind(r10)(r11);
                        r10 = r11.transitionToChannel;
                        r9 = _env_r9_slot0;
                        r9 = r9.channel_id;
                        r9 = r10.bind(r11)(r9);
                        r7 = _env_r7_slot20;
                        r7 = r7.bind(r8)();
                        _closure1_slot3 = r4;
                        r2 = r5;
                        _closure1_slot4 = r5;
                        r5 = {'value': null, 'done': false};
                        r5[0] = r7;
                        return r5;
case 625:
                        r2 = r6;
                        _closure1_slot4 = r6;
                        r5 = {'value': null, 'done': true};
                        r5[0] = r0;
                        return r5;
case 648:
                        r2 = r6;
                        _closure1_slot4 = r6;
                        throw r0;
case 657:
                        r5 = 1;
                        if(!(r3 !== r5)) { _fun147715_ip = 767; continue _fun147715 }
case 664:
                        if(!(r3 !== r4)) { _fun147715_ip = 744; continue _fun147715 }
case 668:
                        var _closure1_slot2 = r8;
                        var _closure1_slot1 = r7;
                        r9 = _closure1_slot0;
                        var _closure1_slot0 = r9;
                        r10 = _closure0_slot21;
                        r9 = _closure0_slot8;
                        r8 = undefined;
                        r7 = function() { // Environment: r7
                            r3 = _closure0_slot8;
                            r2 = r3.getChannel;
                            r1 = _closure1_slot0;
                            r1 = r1.channel_id;
                            r1 = r2.bind(r3)(r1);
                            r0 = null;
                            r0 = r0 != r1;
                            return r0;
                        };
                        r7 = r10.bind(r8)(r9, r7);
                        _closure1_slot3 = r5;
                        r2 = r5;
                        _closure1_slot4 = r5;
                        r5 = {'value': null, 'done': false};
                        r5[0] = r7;
                        return r5;
case 744:
                        r2 = r6;
                        _closure1_slot4 = r6;
                        r5 = {'value': null, 'done': true};
                        r5[0] = r0;
                        return r5;
case 767:
                        r2 = r6;
                        _closure1_slot4 = r6;
                        throw r0;
case 776:
                        CatchBlockStart(arg_register=5);
                        r2 = r6;
                        _closure1_slot4 = r6;
                        throw r5;
case 787:
                        r5 = 1;
                        if(!(r3 !== r5)) { _fun147715_ip = 826; continue _fun147715 }
case 794:
                        if(!(r3 !== r4)) { _fun147715_ip = 810; continue _fun147715 }
case 798:
                        r3 = {'value': undefined, 'done': true};
                        return r3;
case 810:
                        r3 = {'value': null, 'done': true};
                        r3[0] = r0;
                        return r3;
case 826:
                        throw r0;
case 828:
                        r0 = 3;
                        r2 = r0;
                        _closure1_slot4 = r0;
                        r19 = 'Generator functions may not be called on executing generators';
                        r0 = throwTypeError(r20);
                    }
                };
                return r1;
            };
            r2 = r5.bind(r0)(r2);
            _closure0_slot31 = r2;
            r4 = r2.apply;
            if(r4) { _fun78588_ip = 49; continue _fun78588 }
case 39:
            r1 = arguments;
            r1 = r4.bind(r2)(r3, r1);
            _fun78588_ip = 59; continue _fun78588;
case 49:
            r7 = r2;
            r6 = r3;
            r1 = applyArguments(r8, r7);
case 59:
            return r1;
        }
    };
    var _closure0_slot31 = r5;
    r5 = function() { // Original name: _handleFriendSuggestionCreateNotification, environment: r1
        _fun78589: for(var _fun78589_ip = 0; ; ) switch(_fun78589_ip) {
case 0:
            r0 = undefined;
            r1 = undefined;
            r3 = this;
            r5 = _closure0_slot4;
            r2 = function(a0) { // Environment: r4
                r2 = a0;
                var _closure1_slot0 = r2;
                r0 = 0;
                var _closure1_slot3 = r0;
                var _closure1_slot4 = r0;
                r1 = function* (a0) { // Original name: ?anon_0_, environment: r1
                    _fun147716: for(var _fun147716_ip = 0; ; ) switch(_fun147716_ip) {
case 0:
                        r0 = _closure1_slot4;
                        r2 = r0;
                        r4 = 2;
                        if(!(r0 !== r4)) { _fun147716_ip = 593; continue _fun147716 }
case 20:
                        r0 = arguments[1];
                        r3 = a0;
                        r5 = r2;
                        r6 = 3;
                        if(!(r5 !== r6)) { _fun147716_ip = 552; continue _fun147716 }
case 39:
                        r2 = r4;
                        _closure1_slot4 = r4;
                        r7 = _closure1_slot3;
                        r5 = 0;
                        if(!(r5 !== r7)) { _fun147716_ip = 427; continue _fun147716 }
case 59:
                        r5 = 1;
                        if(!(r5 !== r7)) { _fun147716_ip = 212; continue _fun147716 }
case 69:
                        if(!(r3 !== r5)) { _fun147716_ip = 203; continue _fun147716 }
case 76:
                        if(!(r3 !== r4)) { _fun147716_ip = 180; continue _fun147716 }
case 80:
                        r12 = _closure1_slot1;
                        r10 = _closure1_slot2;
                        r11 = _env_r10_slot1;
                        r7 = _env_r10_slot3;
                        r7 = r7[r24];
                        r9 = undefined;
                        r8 = r11.bind(r9)(r7);
                        r7 = {'userId': null, 'sourceAnalyticsLocations': null};
                        r12 = _env_r12_slot2;
                        r7[0] = r12;
                        r10 = _env_r10_slot3;
                        r10 = r10[r25];
                        r10 = r11.bind(r9)(r10);
                        r11 = r10.PUSH_NOTIFICATION;
                        r10 = new Array(1);
                        r10[0] = r11;
                        r7[1] = r10;
                        r7 = r8.bind(r9)(r7);
                        r2 = r6;
                        _closure1_slot4 = r6;
                        r7 = {'value': undefined, 'done': true};
                        return r7;
case 180:
                        r2 = r6;
                        _closure1_slot4 = r6;
                        r7 = {'value': null, 'done': true};
                        r7[0] = r0;
                        return r7;
case 203:
                        r2 = r6;
                        _closure1_slot4 = r6;
                        throw r0;
case 212:
                        if(!(r3 !== r5)) { _fun147716_ip = 418; continue _fun147716 }
case 219:
                        if(!(r3 !== r4)) { _fun147716_ip = 395; continue _fun147716 }
case 226:
                        r7 = _closure1_slot1;
                        r8 = _closure1_slot2;
                        r9 = _env_r8_slot0;
                        r8 = _env_r8_slot3;
                        r8 = r8[r15];
                        r10 = undefined;
                        r9 = r9.bind(r10)(r8);
                        r8 = r9.getRootNavigationRef;
                        r8 = r8.bind(r9)();
                        _env_r7_slot1 = r8;
                        r8 = _env_r7_slot1;
                        r7 = null;
                        if(!(r7 != r8)) { _fun147716_ip = 325; continue _fun147716 }
case 277:
                        r7 = _closure1_slot1;
                        r11 = _env_r7_slot1;
                        r9 = r11.navigate;
                        r8 = {'screen': 'add-friends', 'params': null};
                        r7 = {'sourcePage': 'Notifications'};
                        r8[1] = r7;
                        r7 = 'friends';
                        r7 = r9.bind(r11)(r7, r8);
case 325:
                        r7 = _closure1_slot1;
                        r8 = _closure1_slot2;
                        r9 = _env_r7_slot0;
                        r9 = r9.user_id;
                        _env_r7_slot2 = r9;
                        r9 = _env_r8_slot21;
                        r8 = _env_r8_slot9;
                        r7 = function() { // Environment: r7
                            r3 = _env_r1_slot9;
                            r2 = r3.getUser;
                            r1 = _env_r1_slot2;
                            r1 = r2.bind(r3)(r1);
                            r0 = null;
                            r0 = r0 != r1;
                            return r0;
                        };
                        r7 = r9.bind(r10)(r8, r7);
                        _closure1_slot3 = r4;
                        r2 = r5;
                        _closure1_slot4 = r5;
                        r5 = {'value': null, 'done': false};
                        r5[0] = r7;
                        return r5;
case 395:
                        r2 = r6;
                        _closure1_slot4 = r6;
                        r5 = {'value': null, 'done': true};
                        r5[0] = r0;
                        return r5;
case 418:
                        r2 = r6;
                        _closure1_slot4 = r6;
                        throw r0;
case 427:
                        r5 = 1;
                        if(!(r3 !== r5)) { _fun147716_ip = 532; continue _fun147716 }
case 434:
                        if(!(r3 !== r4)) { _fun147716_ip = 509; continue _fun147716 }
case 438:
                        var _closure1_slot2 = r7;
                        var _closure1_slot1 = r9;
                        r8 = _closure1_slot0;
                        var _closure1_slot0 = r8;
                        r8 = undefined;
                        var _closure1_slot1 = r8;
                        var _closure1_slot2 = r8;
                        r7 = _closure0_slot23;
                        r7 = r7.bind(r8)();
                        _closure1_slot3 = r5;
                        r2 = r5;
                        _closure1_slot4 = r5;
                        r5 = {'value': null, 'done': false};
                        r5[0] = r7;
                        return r5;
case 509:
                        r2 = r6;
                        _closure1_slot4 = r6;
                        r5 = {'value': null, 'done': true};
                        r5[0] = r0;
                        return r5;
case 532:
                        r2 = r6;
                        _closure1_slot4 = r6;
                        throw r0;
case 541:
                        CatchBlockStart(arg_register=5);
                        r2 = r6;
                        _closure1_slot4 = r6;
                        throw r5;
case 552:
                        r5 = 1;
                        if(!(r3 !== r5)) { _fun147716_ip = 591; continue _fun147716 }
case 559:
                        if(!(r3 !== r4)) { _fun147716_ip = 575; continue _fun147716 }
case 563:
                        r3 = {'value': undefined, 'done': true};
                        return r3;
case 575:
                        r3 = {'value': null, 'done': true};
                        r3[0] = r0;
                        return r3;
case 591:
                        throw r0;
case 593:
                        r0 = 3;
                        r2 = r0;
                        _closure1_slot4 = r0;
                        r14 = 'Generator functions may not be called on executing generators';
                        r0 = throwTypeError(r15);
                    }
                };
                return r1;
            };
            r2 = r5.bind(r0)(r2);
            _closure0_slot32 = r2;
            r4 = r2.apply;
            if(r4) { _fun78589_ip = 49; continue _fun78589 }
case 39:
            r1 = arguments;
            r1 = r4.bind(r2)(r3, r1);
            _fun78589_ip = 59; continue _fun78589;
case 49:
            r7 = r2;
            r6 = r3;
            r1 = applyArguments(r8, r7);
case 59:
            return r1;
        }
    };
    var _closure0_slot32 = r5;
    r5 = function() { // Original name: _maybeAckNotificationCenter, environment: r1
        _fun78590: for(var _fun78590_ip = 0; ; ) switch(_fun78590_ip) {
case 0:
            r0 = undefined;
            r1 = undefined;
            r3 = this;
            r5 = _closure0_slot4;
            r2 = function(a0) { // Environment: r4
                r2 = a0;
                var _closure1_slot0 = r2;
                r0 = 0;
                var _closure1_slot3 = r0;
                var _closure1_slot4 = r0;
                r1 = function* (a0) { // Original name: ?anon_0_, environment: r1
                    _fun147717: for(var _fun147717_ip = 0; ; ) switch(_fun147717_ip) {
case 0:
                        r0 = _closure1_slot4;
                        r2 = r0;
                        r4 = 2;
                        if(!(r0 !== r4)) { _fun147717_ip = 703; continue _fun147717 }
case 20:
                        r0 = arguments[1];
                        r3 = a0;
                        r5 = r2;
                        r6 = 3;
                        if(!(r5 !== r6)) { _fun147717_ip = 662; continue _fun147717 }
case 39:
                        r2 = r4;
                        _closure1_slot4 = r4;
                        r7 = _closure1_slot3;
                        r8 = 0;
                        if(!(r8 !== r7)) { _fun147717_ip = 380; continue _fun147717 }
case 59:
                        r5 = 1;
                        if(!(r5 !== r7)) { _fun147717_ip = 155; continue _fun147717 }
case 66:
                        if(!(r3 !== r5)) { _fun147717_ip = 146; continue _fun147717 }
case 70:
                        if(!(r3 !== r4)) { _fun147717_ip = 123; continue _fun147717 }
case 74:
                        r7 = _closure1_slot1;
                        r9 = _closure1_slot2;
                        r11 = _env_r9_slot0;
                        r9 = _env_r9_slot3;
                        r10 = r9[r33];
                        r9 = undefined;
                        r10 = r11.bind(r9)(r10);
                        r9 = r10.markNotificationCenterRemoteItemAcked;
                        r7 = _env_r7_slot1;
                        r7 = r9.bind(r10)(r7);
                        _fun147717_ip = 530; continue _fun147717;
case 123:
                        r2 = r6;
                        _closure1_slot4 = r6;
                        r7 = {'value': null, 'done': true};
                        r7[0] = r0;
                        return r7;
case 146:
                        r2 = r6;
                        _closure1_slot4 = r6;
                        throw r0;
case 155:
                        if(!(r3 !== r5)) { _fun147717_ip = 371; continue _fun147717 }
case 162:
                        if(!(r3 !== r4)) { _fun147717_ip = 348; continue _fun147717 }
case 169:
                        r10 = _closure1_slot1;
                        r7 = _closure1_slot2;
                        r9 = _env_r7_slot1;
                        r5 = _env_r7_slot3;
                        r5 = r5[r32];
                        r11 = undefined;
                        r13 = r9.bind(r11)(r5);
                        r12 = r13.fromTimestamp;
                        r5 = global;
                        r15 = r5.Date;
                        r14 = r5.String;
                        r9 = _env_r10_slot0;
                        r9 = r9.since;
                        r18 = r14.bind(r11)(r9);
                        r14 = Object.create(r15.prototype);
                        r19 = r14;
                        r9 = new r20[r15](r19, r18);
                        r14 = r9 instanceof Object ? r9 : r14;
                        r9 = r14.getTime;
                        r9 = r9.bind(r14)();
                        r9 = r12.bind(r13)(r9);
                        _env_r10_slot2 = r9;
                        r9 = _env_r7_slot0;
                        r7 = _env_r7_slot3;
                        r7 = r7[r33];
                        r9 = r9.bind(r11)(r7);
                        r7 = r9.markNotificationCenterLocalItemsAcked;
                        r11 = _env_r10_slot0;
                        r13 = r11.user_id;
                        r12 = _env_r10_slot2;
                        r5 = r5.HermesInternal;
                        r11 = r5.concat;
                        r10 = '_';
                        r5 = 'incoming_friend_requests_';
                        r10 = r11.bind(r5)(r13, r10, r12);
                        r5 = new Array(1);
                        r5[0] = r10;
                        r5 = r7.bind(r9)(r5);
                        _fun147717_ip = 530; continue _fun147717;
case 348:
                        r2 = r6;
                        _closure1_slot4 = r6;
                        r5 = {'value': null, 'done': true};
                        r5[0] = r0;
                        return r5;
case 371:
                        r2 = r6;
                        _closure1_slot4 = r6;
                        throw r0;
case 380:
                        r5 = 1;
                        if(!(r3 !== r5)) { _fun147717_ip = 642; continue _fun147717 }
case 390:
                        if(!(r3 !== r4)) { _fun147717_ip = 619; continue _fun147717 }
case 397:
                        var _closure1_slot2 = r7;
                        var _closure1_slot1 = r11;
                        r12 = _closure1_slot0;
                        var _closure2_slot0 = r12;
                        r14 = undefined;
                        var _closure2_slot1 = r14;
                        var _closure2_slot2 = r14;
                        r9 = 'notification_center_id';
                        r13 = r9 in r12;
                        r10 = null;
                        r9 = null;
                        if(!r13) { _fun147717_ip = 453; continue _fun147717 }
case 447:
                        r9 = r12.notification_center_id;
case 453:
                        _closure2_slot1 = r9;
                        r11 = 'since';
                        r13 = r11 in r12;
                        r11 = null;
                        if(!r13) { _fun147717_ip = 476; continue _fun147717 }
case 470:
                        r11 = r12.since;
case 476:
                        r15 = r12.type;
                        r13 = 'RELATIONSHIP_ADD';
                        if(!(r13 === r15)) { _fun147717_ip = 526; continue _fun147717 }
case 489:
                        r13 = global;
                        r13 = r13.Number;
                        r12 = r12.rel_type;
                        r13 = r13.bind(r14)(r12);
                        r12 = _closure0_slot13;
                        r12 = r12.PENDING_INCOMING;
                        if(!(r13 === r12)) { _fun147717_ip = 526; continue _fun147717 }
case 522:
                        if(!(r10 == r11)) { _fun147717_ip = 584; continue _fun147717 }
case 526:
                        if(!(r10 == r9)) { _fun147717_ip = 549; continue _fun147717 }
case 530:
                        r2 = r6;
                        _closure1_slot4 = r6;
                        r9 = {'value': undefined, 'done': true};
                        return r9;
case 549:
                        r9 = _closure0_slot20;
                        r10 = r9.bind(r8)();
                        _closure1_slot3 = r4;
                        r2 = r5;
                        _closure1_slot4 = r5;
                        r9 = {'value': null, 'done': false};
                        r9[0] = r10;
                        return r9;
case 584:
                        r7 = _closure0_slot20;
                        r7 = r7.bind(r8)();
                        _closure1_slot3 = r5;
                        r2 = r5;
                        _closure1_slot4 = r5;
                        r5 = {'value': null, 'done': false};
                        r5[0] = r7;
                        return r5;
case 619:
                        r2 = r6;
                        _closure1_slot4 = r6;
                        r5 = {'value': null, 'done': true};
                        r5[0] = r0;
                        return r5;
case 642:
                        r2 = r6;
                        _closure1_slot4 = r6;
                        throw r0;
case 651:
                        CatchBlockStart(arg_register=5);
                        r2 = r6;
                        _closure1_slot4 = r6;
                        throw r5;
case 662:
                        r5 = 1;
                        if(!(r3 !== r5)) { _fun147717_ip = 701; continue _fun147717 }
case 669:
                        if(!(r3 !== r4)) { _fun147717_ip = 685; continue _fun147717 }
case 673:
                        r3 = {'value': undefined, 'done': true};
                        return r3;
case 685:
                        r3 = {'value': null, 'done': true};
                        r3[0] = r0;
                        return r3;
case 701:
                        throw r0;
case 703:
                        r0 = 3;
                        r2 = r0;
                        _closure1_slot4 = r0;
                        r18 = 'Generator functions may not be called on executing generators';
                        r0 = throwTypeError(r19);
                    }
                };
                return r1;
            };
            r2 = r5.bind(r0)(r2);
            _closure0_slot33 = r2;
            r4 = r2.apply;
            if(r4) { _fun78590_ip = 49; continue _fun78590 }
case 39:
            r1 = arguments;
            r1 = r4.bind(r2)(r3, r1);
            _fun78590_ip = 59; continue _fun78590;
case 49:
            r7 = r2;
            r6 = r3;
            r1 = applyArguments(r8, r7);
case 59:
            return r1;
        }
    };
    var _closure0_slot33 = r5;
    r5 = function(a0) { // Original name: receiveNotification_, environment: r1
        _fun78591: for(var _fun78591_ip = 0; ; ) switch(_fun78591_ip) {
case 0:
            r6 = a0;
            var _closure1_slot0 = r6;
            r9 = _closure0_slot0;
            r8 = _closure0_slot3;
            r11 = r8[r41];
            r3 = undefined;
            r12 = r9.bind(r3)(r11);
            r11 = r12.initializeRouteManagerIfNeeded;
            r11 = r11.bind(r12)();
            r12 = r6.type;
            r11 = 'MESSAGE_CREATE';
            if(!(r11 !== r12)) { _fun78591_ip = 740; continue _fun78591 }
case 58:
            r12 = r6.type;
            r11 = 'GENERIC_PUSH_NOTIFICATION_SENT';
            r2 = false;
            r4 = false;
            if(!(r11 === r12)) { _fun78591_ip = 691; continue _fun78591 }
case 80:
            r11 = r6.deeplink;
            r0 = null;
            r5 = r0 != r11;
            r2 = false;
            r4 = false;
            if(!r5) { _fun78591_ip = 691; continue _fun78591 }
case 102:
            r12 = r6.deeplink;
            r11 = '';
            r2 = false;
            r4 = false;
            if(!(r11 !== r12)) { _fun78591_ip = 691; continue _fun78591 }
case 123:
            r12 = _closure0_slot1;
            r11 = r8[r43];
            r13 = r12.bind(r3)(r11);
            r11 = r6.deeplink;
            r11 = r13.bind(r3)(r11);
            r14 = r11.payload;
            r13 = r14.type;
            r11 = r8[r44];
            r11 = r9.bind(r3)(r11);
            r11 = r11.LinkingTypes;
            r11 = r11.MESSAGE;
            if(!(r13 !== r11)) { _fun78591_ip = 541; continue _fun78591 }
case 186:
            r13 = r14.type;
            r11 = r8[r44];
            r11 = r9.bind(r3)(r11);
            r11 = r11.LinkingTypes;
            r11 = r11.ICYMI;
            if(!(r13 === r11)) { _fun78591_ip = 238; continue _fun78591 }
case 216:
            r11 = r6.channel_id;
            if(!(r0 != r11)) { _fun78591_ip = 238; continue _fun78591 }
case 225:
            r11 = r6.message_id;
            if(!(r0 == r11)) { _fun78591_ip = 498; continue _fun78591 }
case 238:
            r13 = r14.type;
            r11 = r8[r44];
            r11 = r9.bind(r3)(r11);
            r11 = r11.LinkingTypes;
            r11 = r11.ICYMI;
            r2 = false;
            r4 = false;
            if(!(r13 === r11)) { _fun78591_ip = 691; continue _fun78591 }
case 275:
            r11 = r6.user_id;
            r5 = r0 != r11;
            r2 = false;
            r4 = false;
            if(!r5) { _fun78591_ip = 691; continue _fun78591 }
case 295:
            r11 = r6.notification_center_id;
            r5 = r0 != r11;
            r2 = false;
            r4 = false;
            if(!r5) { _fun78591_ip = 691; continue _fun78591 }
case 315:
            r11 = r6.status_emoji_id;
            r5 = r0 != r11;
            r13 = null;
            if(!r5) { _fun78591_ip = 354; continue _fun78591 }
case 330:
            r15 = r6.status_emoji_id;
            r11 = '0';
            r13 = null;
            if(!(r11 !== r15)) { _fun78591_ip = 354; continue _fun78591 }
case 348:
            r13 = r6.status_emoji_id;
case 354:
            r15 = {'id': null, 'type': null, 'score': 1000, 'data': null};
            r11 = r6.notification_center_id;
            r15[0] = r11;
            r11 = r8[r47];
            r11 = r9.bind(r3)(r11);
            r11 = r11.ICYMIItemTypes;
            r11 = r11.CUSTOM_STATUS;
            r15[1] = r11;
            r11 = {'user_id': null, 'text': null, 'emoji_id': null, 'emoji_name': null, 'emoji_animated': null};
            r16 = r6.user_id;
            r11[0] = r16;
            r16 = r6.status_text;
            r11[1] = r16;
            r11[2] = r13;
            r13 = r6.status_emoji_name;
            r11[3] = r13;
            r13 = r6.status_emoji_animated;
            r5 = !r13;
            r5 = !r5;
            r11[4] = r5;
            r15[3] = r11;
            r11 = r8[r46];
            r13 = r12.bind(r3)(r11);
            r11 = r13.fetchForStatusNotification;
            r11 = r11.bind(r13)(r15);
            r2 = false;
            r4 = false;
            _fun78591_ip = 691; continue _fun78591;
case 498:
            r11 = r8[r46];
            r16 = r12.bind(r3)(r11);
            r15 = r16.fetchForNotification;
            r13 = r6.channel_id;
            r11 = r6.message_id;
            r11 = r15.bind(r16)(r13, r11);
            r2 = false;
            r4 = false;
            _fun78591_ip = 691; continue _fun78591;
case 541:
            r1 = r6 == r0;
            r17 = undefined;
            if(r1) { _fun78591_ip = 556; continue _fun78591 }
case 550:
            r17 = r6.tracking_type;
case 556:
            if(!(r17 == r0)) { _fun78591_ip = 565; continue _fun78591 }
case 560:
            r17 = r6.type;
case 565:
            r1 = r0 != r17;
            if(!r1) { _fun78591_ip = 581; continue _fun78591 }
case 572:
            r11 = r14.messageId;
            r1 = r0 != r11;
case 581:
            if(!r1) { _fun78591_ip = 593; continue _fun78591 }
case 584:
            r11 = r14.channelId;
            r1 = r0 != r11;
case 593:
            if(!r1) { _fun78591_ip = 630; continue _fun78591 }
case 596:
            r11 = r8[r45];
            r16 = r9.bind(r3)(r11);
            r15 = r16.receivedNotification;
            r13 = r14.messageId;
            r11 = r14.channelId;
            r11 = r15.bind(r16)(r13, r11, r17);
case 630:
            r11 = r8[r42];
            r13 = r12.bind(r3)(r11);
            r12 = r13.fetchMessages;
            r11 = {'guildId': null, 'channelId': null, 'messageId': null, 'isPreload': true};
            r15 = r14.guildId;
            r11[0] = r15;
            r15 = r14.channelId;
            r11[1] = r15;
            r14 = r14.messageId;
            r11[2] = r14;
            r11 = r12.bind(r13)(r11);
            r2 = true;
            r4 = true;
case 691:
            r13 = _closure0_slot18;
            r12 = r13.log;
            r15 = r6.type;
            r11 = global;
            r11 = r11.HermesInternal;
            r14 = r11.concat;
            r11 = 'Notification clicked of type ';
            r11 = r14.bind(r11)(r15);
            r11 = r12.bind(r13)(r11);
            _fun78591_ip = 883; continue _fun78591;
case 740:
            r13 = _closure0_slot18;
            r12 = r13.log;
            r28 = r6.type;
            r26 = r6.guild_id;
            r24 = r6.channel_id;
            r22 = r6.message_id;
            r11 = global;
            r11 = r11.HermesInternal;
            r17 = r11.concat;
            r23 = ' message:';
            r25 = ' channel:';
            r27 = ' with guild:';
            r29 = 'Notification clicked of type ';
            r11 = r30[r17](r29, r28, r27, r26, r25, r24, r23, r22);
            r11 = r12.bind(r13)(r11);
            r12 = _closure0_slot1;
            r11 = r8[r42];
            r13 = r12.bind(r3)(r11);
            r12 = r13.fetchMessages;
            r11 = {'guildId': null, 'channelId': null, 'messageId': null, 'isPreload': true};
            r14 = r6.guild_id;
            r11[0] = r14;
            r14 = r6.channel_id;
            r11[1] = r14;
            r14 = r6.message_id;
            r11[2] = r14;
            r11 = r12.bind(r13)(r11);
            r2 = true;
            r4 = true;
case 883:
            r11 = r6.type;
            // StringSwitchImm: switch(r11) { default: goto 1874 };
case 906:
            r11 = _closure0_slot1;
            r12 = r8[r48];
            r14 = r11.bind(r3)(r12);
            r13 = r14.dispatch;
            r12 = {'type': 'PUSH_NOTIFICATION_CLICK'};
            r12 = r13.bind(r14)(r12);
            r12 = r8[r28];
            r15 = r11.bind(r3)(r12);
            r14 = r15.track;
            r12 = _closure0_slot11;
            r13 = r12.NOTIFICATION_CLICKED;
            r12 = 'tracking_type';
            r1 = r12 in r6;
            if(r1) { _fun78591_ip = 981; continue _fun78591 }
case 974:
            r16 = r6.type;
            _fun78591_ip = 987; continue _fun78591;
case 981:
            r16 = r6.tracking_type;
case 987:
            r12 = {'notif_type': null, 'notif_user_id': null, 'message_id': null, 'message_type': null, 'has_message': null, 'guild_id': null, 'channel_id': null, 'channel_type': null, 'rel_type': null, 'notification_id': null, 'has_image_thumbnail': null, 'join_id': null, 'notif_instance_id': null, 'notif_type_id': null, 'mention_type': null};
            r12[0] = r16;
            r16 = 'user_id';
            r0 = r16 in r6;
            r1 = null;
            r16 = null;
            if(!r0) { _fun78591_ip = 1022; continue _fun78591 }
case 1016:
            r16 = r6.user_id;
case 1022:
            r12[1] = r16;
            r16 = 'message_id';
            r0 = r16 in r6;
            r16 = null;
            if(!r0) { _fun78591_ip = 1045; continue _fun78591 }
case 1039:
            r16 = r6.message_id;
case 1045:
            r12[2] = r16;
            r16 = 'message_type_';
            r0 = r16 in r6;
            r16 = null;
            if(!r0) { _fun78591_ip = 1072; continue _fun78591 }
case 1064:
            r16 = r6.message_type_;
case 1072:
            r12[3] = r16;
            r16 = 'message';
            r0 = r16 in r6;
            if(!r0) { _fun78591_ip = 1096; continue _fun78591 }
case 1087:
            r16 = r6.message;
            r0 = r1 != r16;
case 1096:
            r12[4] = r0;
            r16 = 'guild_id';
            r0 = r16 in r6;
            r16 = null;
            if(!r0) { _fun78591_ip = 1118; continue _fun78591 }
case 1113:
            r16 = r6.guild_id;
case 1118:
            r12[5] = r16;
            r16 = 'channel_id';
            r0 = r16 in r6;
            r16 = null;
            if(!r0) { _fun78591_ip = 1140; continue _fun78591 }
case 1135:
            r16 = r6.channel_id;
case 1140:
            r12[6] = r16;
            r16 = 'channel_type';
            r0 = r16 in r6;
            r16 = null;
            if(!r0) { _fun78591_ip = 1163; continue _fun78591 }
case 1157:
            r16 = r6.channel_type;
case 1163:
            r12[7] = r16;
            r16 = 'rel_type';
            r0 = r16 in r6;
            r16 = null;
            if(!r0) { _fun78591_ip = 1199; continue _fun78591 }
case 1180:
            r17 = global;
            r18 = r17.Number;
            r17 = r6.rel_type;
            r16 = r18.bind(r3)(r17);
case 1199:
            r12[8] = r16;
            r16 = 'notification_id';
            r0 = r16 in r6;
            r16 = null;
            if(!r0) { _fun78591_ip = 1226; continue _fun78591 }
case 1218:
            r16 = r6.notification_id;
case 1226:
            r12[9] = r16;
            r16 = 'image_url';
            r0 = r16 in r6;
            if(!r0) { _fun78591_ip = 1251; continue _fun78591 }
case 1241:
            r16 = r6.image_url;
            r0 = r1 != r16;
case 1251:
            r12[10] = r0;
            r16 = 'join_id';
            r0 = r16 in r6;
            r16 = null;
            if(!r0) { _fun78591_ip = 1274; continue _fun78591 }
case 1268:
            r16 = r6.join_id;
case 1274:
            r12[11] = r16;
            r16 = 'notif_instance_id';
            r0 = r16 in r6;
            r16 = null;
            if(!r0) { _fun78591_ip = 1297; continue _fun78591 }
case 1291:
            r16 = r6.notif_instance_id;
case 1297:
            r12[12] = r16;
            r16 = 'notif_type_id';
            r0 = r16 in r6;
            r16 = null;
            if(!r0) { _fun78591_ip = 1320; continue _fun78591 }
case 1314:
            r16 = r6.notif_type_id;
case 1320:
            r12[13] = r16;
            r16 = 'mention_type';
            r0 = r16 in r6;
            r16 = null;
            if(!r0) { _fun78591_ip = 1343; continue _fun78591 }
case 1337:
            r16 = r6.mention_type;
case 1343:
            r12[14] = r16;
            r12 = r14.bind(r15)(r13, r12);
            r12 = function() { // Original name: maybeAckNotificationCenter, environment: r7
                _fun147718: for(var _fun147718_ip = 0; ; ) switch(_fun147718_ip) {
case 0:
                    r1 = undefined;
                    r0 = this;
                    r2 = _closure0_slot33;
                    r3 = r2.apply;
                    if(r3) { _fun147718_ip = 31; continue _fun147718 }
case 21:
                    r1 = arguments;
                    r1 = r3.bind(r2)(r0, r1);
                    _fun147718_ip = 41; continue _fun147718;
case 31:
                    r5 = r2;
                    r4 = r0;
                    r1 = applyArguments(r6, r5);
case 41:
                    return r1;
                }
            };
            r12 = r12.bind(r3)(r6);
            r12 = r6.type;
            // StringSwitchImm: switch(r12) { default: goto 1872 };
case 1388:
            r12 = r6.deeplink;
            if(!(r1 != r12)) { _fun78591_ip = 1872; continue _fun78591 }
case 1401:
            r13 = r6.deeplink;
            r12 = '';
            if(!(r12 !== r13)) { _fun78591_ip = 1872; continue _fun78591 }
case 1418:
            r12 = r8[r43];
            r13 = r11.bind(r3)(r12);
            r12 = r6.deeplink;
            r12 = r13.bind(r3)(r12);
            r14 = r12.payload;
            r12 = r8[r52];
            r13 = r11.bind(r3)(r12);
            r12 = {'payload': null, 'waitForConnection': false, 'skipMessageFetch': null};
            r12[0] = r14;
            r12[2] = r2;
            r12 = r13.bind(r3)(r12);
            _fun78591_ip = 1872; continue _fun78591;
case 1481:
            r12 = function() { // Original name: handleStageNotification, environment: r7
                _fun147725: for(var _fun147725_ip = 0; ; ) switch(_fun147725_ip) {
case 0:
                    r1 = undefined;
                    r0 = this;
                    r2 = _closure0_slot27;
                    r3 = r2.apply;
                    if(r3) { _fun147725_ip = 31; continue _fun147725 }
case 21:
                    r1 = arguments;
                    r1 = r3.bind(r2)(r0, r1);
                    _fun147725_ip = 41; continue _fun147725;
case 31:
                    r5 = r2;
                    r4 = r0;
                    r1 = applyArguments(r6, r5);
case 41:
                    return r1;
                }
            };
            r12 = r12.bind(r3)(r6);
            r0 = !r12;
            _fun78591_ip = 1872; continue _fun78591;
case 1501:
            r12 = function() { // Original name: handleGuildEventNotification, environment: r7
                _fun147724: for(var _fun147724_ip = 0; ; ) switch(_fun147724_ip) {
case 0:
                    r1 = undefined;
                    r0 = this;
                    r2 = _closure0_slot28;
                    r3 = r2.apply;
                    if(r3) { _fun147724_ip = 31; continue _fun147724 }
case 21:
                    r1 = arguments;
                    r1 = r3.bind(r2)(r0, r1);
                    _fun147724_ip = 41; continue _fun147724;
case 31:
                    r5 = r2;
                    r4 = r0;
                    r1 = applyArguments(r6, r5);
case 41:
                    return r1;
                }
            };
            r12 = r12.bind(r3)(r6);
            r0 = !r12;
            _fun78591_ip = 1872; continue _fun78591;
case 1521:
            r12 = r8[r51];
            r13 = r11.bind(r3)(r12);
            r12 = {'streamType': null, 'ownerId': null, 'guildId': null, 'channelId': null};
            r14 = _closure0_slot15;
            r14 = r14.GUILD;
            r12[0] = r14;
            r14 = r6.user_id;
            r12[1] = r14;
            r14 = r6.guild_id;
            r12[2] = r14;
            r14 = r6.channel_id;
            r12[3] = r14;
            r12 = r13.bind(r3)(r12);
            _fun78591_ip = 1872; continue _fun78591;
case 1592:
            r12 = function() { // Original name: handleFriendSuggestionCreateNotification, environment: r7
                _fun147723: for(var _fun147723_ip = 0; ; ) switch(_fun147723_ip) {
case 0:
                    r1 = undefined;
                    r0 = this;
                    r2 = _closure0_slot32;
                    r3 = r2.apply;
                    if(r3) { _fun147723_ip = 31; continue _fun147723 }
case 21:
                    r1 = arguments;
                    r1 = r3.bind(r2)(r0, r1);
                    _fun147723_ip = 41; continue _fun147723;
case 31:
                    r5 = r2;
                    r4 = r0;
                    r1 = applyArguments(r6, r5);
case 41:
                    return r1;
                }
            };
            r12 = r12.bind(r3)(r6);
            r0 = !r12;
            _fun78591_ip = 1872; continue _fun78591;
case 1612:
            r12 = function() { // Original name: handleCallConnectNotification, environment: r7
                _fun147722: for(var _fun147722_ip = 0; ; ) switch(_fun147722_ip) {
case 0:
                    r1 = undefined;
                    r0 = this;
                    r2 = _closure0_slot31;
                    r3 = r2.apply;
                    if(r3) { _fun147722_ip = 31; continue _fun147722 }
case 21:
                    r1 = arguments;
                    r1 = r3.bind(r2)(r0, r1);
                    _fun147722_ip = 41; continue _fun147722;
case 31:
                    r5 = r2;
                    r4 = r0;
                    r1 = applyArguments(r6, r5);
case 41:
                    return r1;
                }
            };
            r12 = r12.bind(r3)(r6);
            r0 = !r12;
            _fun78591_ip = 1872; continue _fun78591;
case 1632:
            r12 = function() { // Original name: handleCallRingNotification, environment: r7
                _fun147721: for(var _fun147721_ip = 0; ; ) switch(_fun147721_ip) {
case 0:
                    r1 = undefined;
                    r0 = this;
                    r2 = _closure0_slot30;
                    r3 = r2.apply;
                    if(r3) { _fun147721_ip = 31; continue _fun147721 }
case 21:
                    r1 = arguments;
                    r1 = r3.bind(r2)(r0, r1);
                    _fun147721_ip = 41; continue _fun147721;
case 31:
                    r5 = r2;
                    r4 = r0;
                    r1 = applyArguments(r6, r5);
case 41:
                    return r1;
                }
            };
            r12 = r12.bind(r3)(r6);
            r0 = !r12;
            _fun78591_ip = 1872; continue _fun78591;
case 1652:
            r12 = function() { // Original name: handleRelationshipAddNotification, environment: r7
                _fun147720: for(var _fun147720_ip = 0; ; ) switch(_fun147720_ip) {
case 0:
                    r1 = undefined;
                    r0 = this;
                    r2 = _closure0_slot29;
                    r3 = r2.apply;
                    if(r3) { _fun147720_ip = 31; continue _fun147720 }
case 21:
                    r1 = arguments;
                    r1 = r3.bind(r2)(r0, r1);
                    _fun147720_ip = 41; continue _fun147720;
case 31:
                    r5 = r2;
                    r4 = r0;
                    r1 = applyArguments(r6, r5);
case 41:
                    return r1;
                }
            };
            r12 = r12.bind(r3)(r6);
            r0 = !r12;
            _fun78591_ip = 1872; continue _fun78591;
case 1672:
            r12 = global;
            r14 = r12.Promise;
            r13 = Object.create(r14.prototype);
            r28 = function(a0) { // Environment: r7
                r2 = _closure0_slot5;
                r0 = undefined;
                r1 = a0;
                r1 = r2.bind(r0)(r1);
                return r0;
            };
            r29 = r13;
            r12 = new r30[r14](r29, r28);
            r13 = r12 instanceof Object ? r12 : r13;
            r12 = r13.then;
            r10 = function() { // Environment: r10
                r3 = _closure0_slot0;
                r2 = _closure0_slot3;
                r2 = r2[r50];
                r0 = undefined;
                r4 = r3.bind(r0)(r2);
                r3 = r4.transitionTo;
                r6 = _closure0_slot14;
                r5 = r6.CHANNEL;
                r1 = _closure1_slot0;
                r2 = r1.guild_id;
                r1 = r1.channel_id;
                r2 = r5.bind(r6)(r2, r1);
                r1 = {'navigationReplace': true, 'openChannel': true};
                r1 = r3.bind(r4)(r2, r1);
                return r0;
            };
            r10 = r12.bind(r13)(r10);
            _fun78591_ip = 1872; continue _fun78591;
case 1724:
            r10 = r6.message;
            if(!(r1 != r10)) { _fun78591_ip = 1785; continue _fun78591 }
case 1733:
            r10 = r8[r48];
            r13 = r11.bind(r3)(r10);
            r12 = r13.dispatch;
            r10 = {'type': 'MESSAGE_CREATE', 'channelId': null, 'message': null, 'optimistic': true, 'isPushNotification': true};
            r14 = r6.message;
            r14 = r14.channel_id;
            r10[1] = r14;
            r14 = r6.message;
            r10[2] = r14;
            r10 = r12.bind(r13)(r10);
case 1785:
            r10 = r8[r49];
            r11 = r11.bind(r3)(r10);
            r10 = r11.popAll;
            r10 = r10.bind(r11)();
            r8 = r8[r50];
            r9 = r9.bind(r3)(r8);
            r8 = r9.transitionTo;
            r12 = _closure0_slot14;
            r11 = r12.CHANNEL;
            r10 = r6.guild_id;
            r7 = r6.channel_id;
            r6 = r6.message_id;
            r7 = r11.bind(r12)(r10, r7, r6);
            r6 = {'navigationReplace': true, 'openChannel': true, 'skipMessageFetch': null};
            r6[2] = r2;
            r6 = r8.bind(r9)(r7, r6);
case 1872:
            return r4;
case 1874:
            return r4;
        }
    };
    var _closure0_slot34 = r5;
    r5 = global;
    r9 = r5.Object;
    r8 = r9.defineProperty;
    r7 = '__esModule';
    r5 = {'value': true};
    r5 = r8.bind(r9)(r2, r7, r5);
    r5 = r3[r0];
    r0 = undefined;
    r5 = r6.bind(r0)(r5);
    var _closure0_slot4 = r5;
    r5 = r3[r1];
    r5 = r4.bind(r0)(r5);
    r5 = r5.addPostConnectionCallback;
    var _closure0_slot5 = r5;
    r5 = r3[r2];
    r5 = r6.bind(r0)(r5);
    var _closure0_slot6 = r5;
    r5 = r3[r3];
    r5 = r6.bind(r0)(r5);
    var _closure0_slot7 = r5;
    r5 = r3[r4];
    r5 = r6.bind(r0)(r5);
    var _closure0_slot8 = r5;
    r5 = r3[r5];
    r5 = r6.bind(r0)(r5);
    var _closure0_slot9 = r5;
    r5 = r3[r6];
    r5 = r4.bind(r0)(r5);
    r5 = r5.NotificationTypes;
    var _closure0_slot10 = r5;
    r5 = r3[r7];
    r5 = r4.bind(r0)(r5);
    r7 = r5.AnalyticEvents;
    var _closure0_slot11 = r7;
    r7 = r5.ComponentActions;
    var _closure0_slot12 = r7;
    r7 = r5.RelationshipTypes;
    var _closure0_slot13 = r7;
    r5 = r5.Routes;
    var _closure0_slot14 = r5;
    r5 = r3[r8];
    r5 = r4.bind(r0)(r5);
    r5 = r5.StreamTypes;
    var _closure0_slot15 = r5;
    r5 = r3[r9];
    r5 = r4.bind(r0)(r5);
    r5 = r5.GuildScheduledEventEntityTypes;
    var _closure0_slot16 = r5;
    r5 = r3[r10];
    r5 = r4.bind(r0)(r5);
    r5 = r5.MultiAccountSwitchLocation;
    var _closure0_slot17 = r5;
    r5 = r3[r11];
    r7 = r6.bind(r0)(r5);
    r6 = Object.create(r7.prototype);
    r12 = 'receiveNotification';
    r13 = r6;
    r5 = new r14[r7](r13, r12);
    r5 = r5 instanceof Object ? r5 : r6;
    var _closure0_slot18 = r5;
    r3 = r3[r53];
    r5 = r4.bind(r0)(r3);
    r4 = r5.fileFinishedImporting;
    r3 = 'modules/push_notifications/native/receiveNotification.tsx';
    r3 = r4.bind(r5)(r3);
    r1 = function(a0, a1) { // Original name: receiveNotification, environment: r1
        _fun78592: for(var _fun78592_ip = 0; ; ) switch(_fun78592_ip) {
case 0:
            r4 = a0;
            r2 = r4.getData;
            r1 = null;
            if(!(r1 != r2)) { _fun78592_ip = 317; continue _fun78592 }
case 18:
            r7 = _closure0_slot0;
            r6 = _closure0_slot3;
            r2 = r6[r34];
            r0 = undefined;
            r9 = r7.bind(r0)(r2);
            r5 = r9.trackAppOpened;
            r2 = 'notification';
            r2 = r5.bind(r9)(r2);
            r2 = r4.getData;
            r5 = r2.bind(r4)();
            var _closure1_slot0 = r5;
            r4 = _closure0_slot1;
            r2 = r6[r35];
            r11 = r4.bind(r0)(r2);
            r10 = r11.mark;
            r12 = r5.type;
            r2 = global;
            r2 = r2.HermesInternal;
            r9 = r2.concat;
            r2 = 'Receive notification ';
            r9 = r9.bind(r2)(r12);
            r2 = '❗';
            r2 = r10.bind(r11)(r2, r9);
            r2 = r5.receiving_user_id;
            if(!(r1 != r2)) { _fun78592_ip = 178; continue _fun78592 }
case 140:
            r10 = _closure0_slot7;
            r2 = r10.getId;
            r2 = r2.bind(r10)();
            if(!(r1 != r2)) { _fun78592_ip = 178; continue _fun78592 }
case 158:
            r9 = r5.receiving_user_id;
            r2 = r10.getId;
            r2 = r2.bind(r10)();
            if(!(r9 === r2)) { _fun78592_ip = 213; continue _fun78592 }
case 178:
            r2 = r6[r40];
            r2 = r4.bind(r0)(r2);
            r9 = r2.Emitter;
            r4 = r9.batched;
            r2 = function() { // Environment: r3
                r3 = _closure0_slot34;
                r2 = _closure1_slot0;
                r0 = 0;
                r1 = r3.bind(r0)(r2);
                return r1;
            };
            r2 = r4.bind(r9)(r2);
            _fun78592_ip = 315; continue _fun78592;
case 213:
            r4 = a1;
            r9 = r6[r36];
            r9 = r7.bind(r0)(r9);
            r9 = r6[r37];
            r9 = r7.bind(r0)(r9);
            r9 = r6[r38];
            r9 = r7.bind(r0)(r9);
            r6 = r6[r39];
            r7 = r7.bind(r0)(r6);
            r6 = r7.switchAccount;
            r5 = r5.receiving_user_id;
            r8 = _closure0_slot17;
            if(r4) { _fun78592_ip = 279; continue _fun78592 }
case 271:
            r4 = r8.PUSH_NOTIFICATION;
            _fun78592_ip = 287; continue _fun78592;
case 279:
            r4 = r8.PUSH_NOTIFICATION_INITIAL;
case 287:
            r0 = false;
            r5 = r6.bind(r7)(r5, r0, r4);
            r4 = r5.then;
            r3 = function() { // Environment: r3
                r2 = _closure0_slot1;
                r1 = _closure0_slot3;
                r1 = r1[r40];
                r0 = undefined;
                r1 = r2.bind(r0)(r1);
                r3 = r1.Emitter;
                r2 = r3.batched;
                r1 = function() { // Environment: r1
                    r3 = _closure0_slot34;
                    r2 = _closure1_slot0;
                    r0 = 0;
                    r1 = r3.bind(r0)(r2);
                    return r1;
                };
                r1 = r2.bind(r3)(r1);
                return r0;
            };
            r3 = r4.bind(r5)(r3);
            r2 = true;
case 315:
            return r2;
case 317:
            r0 = false;
            return r0;
        }
    };
    r2['default'] = r1;
    return r0;
}

// ===== top-level #17770  fn#17731  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    r4 = a1;
    var _closure0_slot0 = r4;
    r2 = a2;
    var _closure0_slot1 = r2;
    r2 = a5;
    r3 = a6;
    var _closure0_slot2 = r3;
    r5 = global;
    r8 = r5.Object;
    r7 = r8.defineProperty;
    r6 = '__esModule';
    r5 = {'value': true};
    r5 = r7.bind(r8)(r2, r6, r5);
    r5 = r3[r0];
    r0 = undefined;
    r5 = r4.bind(r0)(r5);
    r5 = r5.LocalNotificationTypes;
    var _closure0_slot3 = r5;
    r5 = r3[r1];
    r5 = r4.bind(r0)(r5);
    r6 = r5.AnalyticEvents;
    var _closure0_slot4 = r6;
    r5 = r5.Routes;
    var _closure0_slot5 = r5;
    r5 = r3[r2];
    r5 = r4.bind(r0)(r5);
    r5 = r5.StaticChannelRoute;
    var _closure0_slot6 = r5;
    r3 = r3[r13];
    r5 = r4.bind(r0)(r3);
    r4 = r5.fileFinishedImporting;
    r3 = 'modules/local_push_notification/native/LocalPushNotificationActionCreators.tsx';
    r3 = r4.bind(r5)(r3);
    r1 = function(a0) { // Original name: receiveLocalNotification, environment: r1
        _fun78593: for(var _fun78593_ip = 0; ; ) switch(_fun78593_ip) {
case 0:
            r6 = a0;
            r2 = r6.getData;
            r0 = null;
            if(!(r0 != r2)) { _fun78593_ip = 175; continue _fun78593 }
case 18:
            r7 = _closure0_slot0;
            r2 = _closure0_slot2;
            r5 = r2[r3];
            r0 = undefined;
            r8 = r7.bind(r0)(r5);
            r7 = r8.trackAppOpened;
            r5 = 'notification';
            r5 = r7.bind(r8)(r5);
            r5 = r6.getData;
            r5 = r5.bind(r6)();
            var _closure1_slot0 = r5;
            r6 = r5.type;
            r5 = _closure0_slot3;
            r7 = r5.GUILD_VERIFICATION;
            if(!(r7 !== r6)) { _fun78593_ip = 123; continue _fun78593 }
case 91:
            r7 = r5.CALL_RING;
            if(!(r7 !== r6)) { _fun78593_ip = 123; continue _fun78593 }
case 101:
            r7 = r5.MESSAGE_SEND_FAILED;
            if(!(r7 !== r6)) { _fun78593_ip = 123; continue _fun78593 }
case 111:
            r5 = r5.VIBEGRATIONS;
            if(!(r5 !== r6)) { _fun78593_ip = 123; continue _fun78593 }
case 121:
            return r0;
case 123:
            r3 = function() { // Original name: dispatch, environment: r3
                _fun131544: for(var _fun131544_ip = 0; ; ) switch(_fun131544_ip) {
case 0:
                    r5 = _closure0_slot1;
                    r4 = _closure0_slot2;
                    r3 = r4[r4];
                    r0 = undefined;
                    r9 = r5.bind(r0)(r3);
                    r8 = r9.dispatch;
                    r3 = {'type': 'PUSH_NOTIFICATION_CLICK'};
                    r3 = r8.bind(r9)(r3);
                    r3 = r4[r5];
                    r10 = r5.bind(r0)(r3);
                    r9 = r10.addBreadcrumb;
                    r8 = {'message': 'Notification Clicked', 'data': null};
                    r11 = {'type': null};
                    r3 = _closure1_slot0;
                    r12 = r3.type;
                    r11[0] = r12;
                    r8[1] = r11;
                    r8 = r9.bind(r10)(r8);
                    r8 = r4[r6];
                    r11 = r5.bind(r0)(r8);
                    r10 = r11.track;
                    r8 = _closure0_slot4;
                    r9 = r8.NOTIFICATION_CLICKED;
                    r8 = {'notif_type': null, 'guild_id': null};
                    r12 = r3.type;
                    r8[0] = r12;
                    r12 = 'guildId';
                    r2 = r12 in r3;
                    r1 = null;
                    r12 = null;
                    if(!r2) { _fun131544_ip = 165; continue _fun131544 }
case 160:
                    r12 = r3.guildId;
case 165:
                    r8[1] = r12;
                    r8 = r10.bind(r11)(r9, r8);
                    r9 = r3.type;
                    r8 = _closure0_slot3;
                    r10 = r8.GUILD_VERIFICATION;
                    if(!(r10 !== r9)) { _fun131544_ip = 408; continue _fun131544 }
case 197:
                    r10 = r8.CALL_RING;
                    if(!(r10 !== r9)) { _fun131544_ip = 361; continue _fun131544 }
case 210:
                    r10 = r8.MESSAGE_SEND_FAILED;
                    if(!(r10 !== r9)) { _fun131544_ip = 314; continue _fun131544 }
case 220:
                    r8 = r8.VIBEGRATIONS;
                    if(!(r8 === r9)) { _fun131544_ip = 433; continue _fun131544 }
case 233:
                    r8 = r3.guildId;
                    if(!(r1 != r8)) { _fun131544_ip = 433; continue _fun131544 }
case 245:
                    r9 = r3.guildId;
                    var _closure2_slot0 = r9;
                    r9 = r3.projectId;
                    var _closure2_slot1 = r9;
                    r10 = _closure0_slot0;
                    r9 = r4[r9];
                    r11 = r10.bind(r0)(r9);
                    r10 = r4[r12];
                    r9 = r4.paths;
                    r10 = r11.bind(r0)(r10, r9);
                    r9 = r10.then;
                    r8 = function(a0) { // Environment: r8
                        r2 = a0;
                        r2 = r2.transitionTo;
                        r6 = _closure0_slot5;
                        r5 = r6.CHANNEL;
                        r4 = _closure2_slot0;
                        r3 = _closure0_slot6;
                        r3 = r3.VIBEGRATIONS;
                        r1 = _closure2_slot1;
                        r1 = r5.bind(r6)(r4, r3, r1);
                        r0 = undefined;
                        r1 = r2.bind(r0)(r1);
                        return r1;
                    };
                    r8 = r9.bind(r10)(r8);
                    _fun131544_ip = 433; continue _fun131544;
case 314:
                    r9 = _closure0_slot0;
                    r8 = r4[r9];
                    r10 = r9.bind(r0)(r8);
                    r9 = r4[r10];
                    r8 = r4.paths;
                    r10 = r10.bind(r0)(r9, r8);
                    r9 = r10.then;
                    r8 = function(a0) { // Environment: r6
                        r1 = a0;
                        r4 = r1.transitionToMessage;
                        r1 = _closure1_slot0;
                        r3 = r1.channelId;
                        r2 = r1.messageId;
                        r1 = {'jumpType': null};
                        r6 = _closure0_slot0;
                        r5 = _closure0_slot2;
                        r5 = r5[r11];
                        r0 = undefined;
                        r5 = r6.bind(r0)(r5);
                        r5 = r5.JumpType;
                        r5 = r5.INSTANT;
                        r1[0] = r5;
                        r1 = r4.bind(r0)(r3, r2, r1);
                        return r1;
                    };
                    r8 = r9.bind(r10)(r8);
                    _fun131544_ip = 433; continue _fun131544;
case 361:
                    r8 = _closure0_slot0;
                    r7 = r4[r9];
                    r9 = r8.bind(r0)(r7);
                    r8 = r4[r8];
                    r7 = r4.paths;
                    r8 = r9.bind(r0)(r8, r7);
                    r7 = r8.then;
                    r6 = function(a0) { // Environment: r6
                        r1 = a0;
                        r2 = r1.default;
                        r1 = _closure1_slot0;
                        r1 = r1.channelId;
                        r0 = undefined;
                        r1 = r2.bind(r0)(r1);
                        return r1;
                    };
                    r6 = r7.bind(r8)(r6);
                    _fun131544_ip = 433; continue _fun131544;
case 408:
                    r4 = r4[r7];
                    r5 = r5.bind(r0)(r4);
                    r4 = r5.transitionToGuildSync;
                    r3 = r3.guildId;
                    r3 = r4.bind(r5)(r3);
case 433:
                    return r0;
                }
            };
            r4 = _closure0_slot1;
            r2 = r2[r4];
            r4 = r4.bind(r0)(r2);
            r2 = r4.isDispatching;
            r2 = r2.bind(r4)();
            if(r2) { _fun78593_ip = 162; continue _fun78593 }
case 156:
            r1 = r3.bind(r0)();
            _fun78593_ip = 175; continue _fun78593;
case 162:
            r2 = global;
            r2 = r2.setImmediate;
            r2 = r2.bind(r0)(r3);
case 175:
            r0 = undefined;
            return r0;
        }
    };
    r2['receiveLocalNotification'] = r1;
    return r0;
}

// ===== top-level #17771  fn#17732  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    _fun17732: for(var _fun17732_ip = 0; ; ) switch(_fun17732_ip) {
case 0:
        r4 = a1;
        var _closure0_slot0 = r4;
        r2 = a5;
        r3 = a6;
        var _closure0_slot1 = r3;
        r5 = global;
        r8 = r5.Object;
        r7 = r8.defineProperty;
        r6 = '__esModule';
        r5 = {'value': true};
        r5 = r7.bind(r8)(r2, r6, r5);
        r5 = r3[r0];
        r0 = undefined;
        r5 = r4.bind(r0)(r5);
        r5 = r5.NativeModules;
        r6 = r3[r1];
        r7 = r4.bind(r0)(r6);
        r6 = r7.isAndroid;
        r6 = r6.bind(r7)();
        if(r6) { _fun17732_ip = 103; continue _fun17732 }
case 93:
        r5 = r5.i18nManager;
        _fun17732_ip = 115; continue _fun17732;
case 103:
        r7 = a2;
        r6 = r3[r2];
        r5 = r7.bind(r0)(r6);
case 115:
        var _closure0_slot2 = r5;
        r3 = r3[r5];
        r5 = r4.bind(r0)(r3);
        r4 = r5.fileFinishedImporting;
        r3 = 'i18n/native/i18nMessagesProvider.tsx';
        r3 = r4.bind(r5)(r3);
        r1 = function() { // Original name: newIntlMessagesProvider, environment: r1
            r0 = global;
            r2 = r0.Promise;
            r1 = Object.create(r2.prototype);
            r3 = function(a0) { // Environment: r0
                r2 = a0;
                var _closure1_slot0 = r2;
                r3 = _closure0_slot2;
                r2 = r3.keysRequest;
                r1 = function(a0) { // Environment: r1
                    r5 = a0;
                    r4 = r5.map;
                    r3 = function(a0) { // Environment: r2
                        _fun152146: for(var _fun152146_ip = 0; ; ) switch(_fun152146_ip) {
case 0:
                            r4 = _closure0_slot0;
                            r3 = _closure0_slot1;
                            r2 = r3[r3];
                            r0 = undefined;
                            r6 = r4.bind(r0)(r2);
                            r5 = r6.runtimeHashMessageKey;
                            r2 = a0;
                            r5 = r5.bind(r6)(r2);
                            r2 = r3[r4];
                            r2 = r4.bind(r0)(r2);
                            r2 = r2.t;
                            r5 = r2[r5];
                            r1 = null;
                            r1 = r1 == r5;
                            r2 = '';
                            if(r1) { _fun152146_ip = 92; continue _fun152146 }
case 67:
                            r3 = r3[r4];
                            r3 = r4.bind(r0)(r3);
                            r4 = r3.intl;
                            r3 = r4.reserialize;
                            r2 = r3.bind(r4)(r5);
case 92:
                            return r2;
                        }
                    };
                    r4 = r4.bind(r5)(r3);
                    r3 = _closure0_slot2;
                    r2 = r3.valuesResult;
                    r2 = r2.bind(r3)(r4);
                    r2 = _closure1_slot0;
                    r0 = true;
                    r1 = undefined;
                    r2 = r2.bind(r1)(r0);
                    return r1;
                };
                r1 = r2.bind(r3)(r1);
                r0 = undefined;
                return r0;
            };
            r4 = r1;
            r0 = new r5[r2](r4, r3);
            r0 = r0 instanceof Object ? r0 : r1;
            return r0;
        };
        r2['default'] = r1;
        return r0;
    }
}

// ===== top-level #17772  fn#17733  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    r4 = a1;
    r2 = a5;
    r3 = a6;
    r1 = global;
    r7 = r1.Object;
    r6 = r7.defineProperty;
    r5 = '__esModule';
    r1 = {'value': true};
    r1 = r6.bind(r7)(r2, r5, r1);
    r1 = r3[r0];
    r0 = undefined;
    r1 = r4.bind(r0)(r1);
    r6 = r1.TurboModuleRegistry;
    r5 = r6.getEnforcing;
    r1 = 'NativeI18nModule';
    r1 = r5.bind(r6)(r1);
    r3 = r3[r1];
    r5 = r4.bind(r0)(r3);
    r4 = r5.fileFinishedImporting;
    r3 = '../discord_common/js/packages/rtn-codegen/js/NativeI18nModule.tsx';
    r3 = r4.bind(r5)(r3);
    r2['default'] = r1;
    return r0;
}

// ===== top-level #17773  fn#17734  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    _fun17734: for(var _fun17734_ip = 0; ; ) switch(_fun17734_ip) {
case 0:
        r4 = a1;
        var _closure0_slot0 = r4;
        r2 = a5;
        r3 = a6;
        var _closure0_slot1 = r3;
        r5 = global;
        r8 = r5.Object;
        r7 = r8.defineProperty;
        r6 = '__esModule';
        r5 = {'value': true};
        r5 = r7.bind(r8)(r2, r6, r5);
        r5 = r3[r0];
        r0 = undefined;
        r5 = r4.bind(r0)(r5);
        r6 = r5.Image;
        var _closure0_slot2 = r6;
        r5 = r5.NativeModules;
        r6 = r3[r1];
        r7 = r4.bind(r0)(r6);
        r6 = r7.isAndroid;
        r6 = r6.bind(r7)();
        if(r6) { _fun17734_ip = 113; continue _fun17734 }
case 103:
        r5 = r5.NativeReactAssetModule;
        _fun17734_ip = 125; continue _fun17734;
case 113:
        r7 = a2;
        r6 = r3[r2];
        r5 = r7.bind(r0)(r6);
case 125:
        var _closure0_slot3 = r5;
        r3 = r3[r4];
        r5 = r4.bind(r0)(r3);
        r4 = r5.fileFinishedImporting;
        r3 = 'modules/react_asset/native/reactAssetProvider.tsx';
        r3 = r4.bind(r5)(r3);
        r1 = function() { // Original name: reactAssetProvider, environment: r1
            r0 = global;
            r2 = r0.Promise;
            r1 = Object.create(r2.prototype);
            r3 = function(a0) { // Environment: r0
                r2 = a0;
                var _closure1_slot0 = r2;
                r3 = _closure0_slot3;
                r2 = r3.keysRequest;
                r1 = function(a0) { // Environment: r1
                    r5 = a0;
                    r6 = _closure0_slot0;
                    r4 = _closure0_slot1;
                    r4 = r4[r3];
                    r0 = undefined;
                    r4 = r6.bind(r0)(r4);
                    r4 = r4.NATIVE_REQUIRED_ASSETS;
                    var _closure1_slot0 = r4;
                    r4 = r5.map;
                    r3 = function(a0) { // Environment: r3
                        _fun152147: for(var _fun152147_ip = 0; ; ) switch(_fun152147_ip) {
case 0:
                            r5 = a0;
                            r2 = _closure1_slot0;
                            r1 = r2[r5];
                            r0 = null;
                            r0 = r0 != r1;
                            r1 = '';
                            if(!r0) { _fun152147_ip = 54; continue _fun152147 }
case 27:
                            r4 = _closure0_slot2;
                            r3 = r4.resolveAssetSource;
                            r2 = r2[r5];
                            r2 = r3.bind(r4)(r2);
                            r1 = r2.uri;
case 54:
                            return r1;
                        }
                    };
                    r4 = r4.bind(r5)(r3);
                    r3 = _closure0_slot3;
                    r2 = r3.valuesResult;
                    r2 = r2.bind(r3)(r4);
                    r2 = _closure1_slot0;
                    r1 = true;
                    r2 = r2.bind(r0)(r1);
                    return r0;
                };
                r1 = r2.bind(r3)(r1);
                r0 = undefined;
                return r0;
            };
            r4 = r1;
            r0 = new r5[r2](r4, r3);
            r0 = r0 instanceof Object ? r0 : r1;
            return r0;
        };
        r2['default'] = r1;
        return r0;
    }
}

// ===== top-level #17774  fn#17735  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    r4 = a1;
    r2 = a5;
    r3 = a6;
    r1 = global;
    r7 = r1.Object;
    r6 = r7.defineProperty;
    r5 = '__esModule';
    r1 = {'value': true};
    r1 = r6.bind(r7)(r2, r5, r1);
    r1 = r3[r0];
    r0 = undefined;
    r1 = r4.bind(r0)(r1);
    r6 = r1.TurboModuleRegistry;
    r5 = r6.getEnforcing;
    r1 = 'NativeReactAssetModule';
    r1 = r5.bind(r6)(r1);
    r3 = r3[r1];
    r5 = r4.bind(r0)(r3);
    r4 = r5.fileFinishedImporting;
    r3 = '../discord_common/js/packages/rtn-codegen/js/NativeReactAssetModule.tsx';
    r3 = r4.bind(r5)(r3);
    r2['default'] = r1;
    return r0;
}

// ===== top-level #17775  fn#17736  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    r4 = a1;
    r2 = a5;
    r3 = a6;
    r1 = global;
    r7 = r1.Object;
    r6 = r7.defineProperty;
    r5 = '__esModule';
    r1 = {'value': true};
    r1 = r6.bind(r7)(r2, r5, r1);
    r1 = {};
    r5 = r3[r0];
    r0 = undefined;
    r5 = r4.bind(r0)(r5);
    r9 = r5.NATIVE_REQUIRED_ASSETS_ICONS;
    r10 = r1;
    r5 = copyDataProperties(r11, r10);
    r5 = r3[r1];
    r5 = r4.bind(r0)(r5);
    r9 = r5.NATIVE_REQUIRED_ASSETS_MISC;
    r10 = r1;
    r5 = copyDataProperties(r11, r10);
    r3 = r3[r2];
    r5 = r4.bind(r0)(r3);
    r4 = r5.fileFinishedImporting;
    r3 = 'modules/react_asset/native/native_required_assets.tsx';
    r3 = r4.bind(r5)(r3);
    r2['NATIVE_REQUIRED_ASSETS'] = r1;
    return r0;
}

// ===== top-level #17776  fn#17737  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    r5 = a2;
    r2 = a5;
    r3 = a6;
    r1 = global;
    r7 = r1.Object;
    r6 = r7.defineProperty;
    r4 = '__esModule';
    r1 = {'value': true};
    r1 = r6.bind(r7)(r2, r4, r1);
    r1 = {'AnnouncementsIcon': null, 'AppsIcon': null, 'ArrowAngleLeftUpIcon': null, 'ArrowAngleRightUpIcon': null, 'ArrowLargeLeftIcon': null, 'ArrowLargeRightIcon': null, 'AttachmentIcon': null, 'BellZIcon': null, 'BoostGemIcon': null, 'ChannelListMagnifyingGlassIcon': null, 'CheckmarkLargeIcon': null, 'ChatXIcon': null, 'CheckmarkSmallIcon': null, 'ChevronSmallDownIcon': null, 'ChevronSmallRightIcon': null, 'CircleErrorIcon': null, 'CircleInformationIcon': null, 'CircleQuestionIcon': null, 'ClipsIcon': null, 'ClockWarningIcon': null, 'ConnectionAverageIcon': null, 'ConnectionBadIcon': null, 'ConnectionFineIcon': null, 'ConnectionUnknownIcon': null, 'DownloadIcon': null, 'EyeIcon': null, 'EyeSlashIcon': null, 'GameControllerIcon': null, 'GifIcon': null, 'GroupIcon': null, 'HandRequestSpeakIcon': null, 'HomeIcon': null, 'ImageBrokenIcon': null, 'ImageIcon': null, 'ImageWarningIcon': null, 'LinkIcon': null, 'LockIcon': null, 'LockUnlockedIcon': null, 'MicrophoneArrowRightIcon': null, 'MicrophoneIcon': null, 'MicrophoneSlashIcon': null, 'MoreHorizontalIcon': null, 'MusicIcon': null, 'PaperIcon': null, 'PauseIcon': null, 'PencilIcon': null, 'PhoneCallIcon': null, 'PhoneHangUpIcon': null, 'PinIcon': null, 'PlayIcon': null, 'PlaystationNeutralIcon': null, 'PollsIcon': null, 'ReactionIcon': null, 'RefreshIcon': null, 'ScreenIcon': null, 'SignPostIcon': null, 'SlashBoxIcon': null, 'SpotifyNeutralIcon': null, 'StageIcon': null, 'StickerIcon': null, 'SuperReactionIcon': null, 'ThreadIcon': null, 'TicketIcon': null, 'TopicsIcon': null, 'UserCheckIcon': null, 'VoiceNormalIcon': null, 'VoiceXIcon': null, 'WarningIcon': null, 'WindowLaunchIcon': null, 'XSmallIcon': null, 'XboxNeutralIcon': null};
    r4 = r3[r0];
    r0 = undefined;
    r4 = r5.bind(r0)(r4);
    r1[0] = r4;
    r4 = r3[r1];
    r4 = r5.bind(r0)(r4);
    r1[1] = r4;
    r4 = r3[r2];
    r4 = r5.bind(r0)(r4);
    r1[2] = r4;
    r4 = r3[r3];
    r4 = r5.bind(r0)(r4);
    r1[3] = r4;
    r4 = r3[r4];
    r4 = r5.bind(r0)(r4);
    r1[4] = r4;
    r4 = r3[r5];
    r4 = r5.bind(r0)(r4);
    r1[5] = r4;
    r4 = r3[r6];
    r4 = r5.bind(r0)(r4);
    r1[6] = r4;
    r4 = r3[r7];
    r4 = r5.bind(r0)(r4);
    r1[7] = r4;
    r4 = r3[r8];
    r4 = r5.bind(r0)(r4);
    r1[8] = r4;
    r4 = r3[r9];
    r4 = r5.bind(r0)(r4);
    r1[9] = r4;
    r4 = r3[r10];
    r4 = r5.bind(r0)(r4);
    r1[10] = r4;
    r4 = r3[r11];
    r4 = r5.bind(r0)(r4);
    r1[11] = r4;
    r4 = r3[r12];
    r4 = r5.bind(r0)(r4);
    r1[12] = r4;
    r4 = r3[r13];
    r4 = r5.bind(r0)(r4);
    r1[13] = r4;
    r4 = r3[r14];
    r4 = r5.bind(r0)(r4);
    r1[14] = r4;
    r4 = r3[r15];
    r4 = r5.bind(r0)(r4);
    r1[15] = r4;
    r4 = r3[r16];
    r4 = r5.bind(r0)(r4);
    r1[16] = r4;
    r4 = r3[r17];
    r4 = r5.bind(r0)(r4);
    r1[17] = r4;
    r4 = r3[r18];
    r4 = r5.bind(r0)(r4);
    r1[18] = r4;
    r4 = r3[r19];
    r4 = r5.bind(r0)(r4);
    r1[19] = r4;
    r4 = r3[r20];
    r4 = r5.bind(r0)(r4);
    r1[20] = r4;
    r4 = r3[r21];
    r4 = r5.bind(r0)(r4);
    r1[21] = r4;
    r4 = r3[r22];
    r4 = r5.bind(r0)(r4);
    r1[22] = r4;
    r4 = r3[r23];
    r4 = r5.bind(r0)(r4);
    r1[23] = r4;
    r4 = r3[r24];
    r4 = r5.bind(r0)(r4);
    r1[24] = r4;
    r4 = r3[r25];
    r4 = r5.bind(r0)(r4);
    r1[25] = r4;
    r4 = r3[r26];
    r4 = r5.bind(r0)(r4);
    r1[26] = r4;
    r4 = r3[r27];
    r4 = r5.bind(r0)(r4);
    r1[27] = r4;
    r4 = r3[r28];
    r4 = r5.bind(r0)(r4);
    r1[28] = r4;
    r4 = r3[r29];
    r4 = r5.bind(r0)(r4);
    r1[29] = r4;
    r4 = r3[r30];
    r4 = r5.bind(r0)(r4);
    r1[30] = r4;
    r4 = r3[r31];
    r4 = r5.bind(r0)(r4);
    r1[31] = r4;
    r4 = r3[r32];
    r4 = r5.bind(r0)(r4);
    r1[32] = r4;
    r4 = r3[r33];
    r4 = r5.bind(r0)(r4);
    r1[33] = r4;
    r4 = r3[r34];
    r4 = r5.bind(r0)(r4);
    r1[34] = r4;
    r4 = r3[r35];
    r4 = r5.bind(r0)(r4);
    r1[35] = r4;
    r4 = r3[r36];
    r4 = r5.bind(r0)(r4);
    r1[36] = r4;
    r4 = r3[r37];
    r4 = r5.bind(r0)(r4);
    r1[37] = r4;
    r4 = r3[r38];
    r4 = r5.bind(r0)(r4);
    r1[38] = r4;
    r4 = r3[r39];
    r4 = r5.bind(r0)(r4);
    r1[39] = r4;
    r4 = r3[r40];
    r4 = r5.bind(r0)(r4);
    r1[40] = r4;
    r4 = r3[r41];
    r4 = r5.bind(r0)(r4);
    r1[41] = r4;
    r4 = r3[r42];
    r4 = r5.bind(r0)(r4);
    r1[42] = r4;
    r4 = r3[r43];
    r4 = r5.bind(r0)(r4);
    r1[43] = r4;
    r4 = r3[r44];
    r4 = r5.bind(r0)(r4);
    r1[44] = r4;
    r4 = r3[r45];
    r4 = r5.bind(r0)(r4);
    r1[45] = r4;
    r4 = r3[r46];
    r4 = r5.bind(r0)(r4);
    r1[46] = r4;
    r4 = r3[r47];
    r4 = r5.bind(r0)(r4);
    r1[47] = r4;
    r4 = r3[r48];
    r4 = r5.bind(r0)(r4);
    r1[48] = r4;
    r4 = r3[r49];
    r4 = r5.bind(r0)(r4);
    r1[49] = r4;
    r4 = r3[r50];
    r4 = r5.bind(r0)(r4);
    r1[50] = r4;
    r4 = r3[r51];
    r4 = r5.bind(r0)(r4);
    r1[51] = r4;
    r4 = r3[r52];
    r4 = r5.bind(r0)(r4);
    r1[52] = r4;
    r4 = r3[r53];
    r4 = r5.bind(r0)(r4);
    r1[53] = r4;
    r4 = r3[r54];
    r4 = r5.bind(r0)(r4);
    r1[54] = r4;
    r4 = r3[r55];
    r4 = r5.bind(r0)(r4);
    r1[55] = r4;
    r4 = r3[r56];
    r4 = r5.bind(r0)(r4);
    r1[56] = r4;
    r4 = r3[r57];
    r4 = r5.bind(r0)(r4);
    r1[57] = r4;
    r4 = r3[r58];
    r4 = r5.bind(r0)(r4);
    r1[58] = r4;
    r4 = r3[r59];
    r4 = r5.bind(r0)(r4);
    r1[59] = r4;
    r4 = r3[r60];
    r4 = r5.bind(r0)(r4);
    r1[60] = r4;
    r4 = r3[r61];
    r4 = r5.bind(r0)(r4);
    r1[61] = r4;
    r4 = r3[r62];
    r4 = r5.bind(r0)(r4);
    r1[62] = r4;
    r4 = r3[r63];
    r4 = r5.bind(r0)(r4);
    r1[63] = r4;
    r4 = r3[r64];
    r4 = r5.bind(r0)(r4);
    r1[64] = r4;
    r4 = r3[r65];
    r4 = r5.bind(r0)(r4);
    r1[65] = r4;
    r4 = r3[r66];
    r4 = r5.bind(r0)(r4);
    r1[66] = r4;
    r4 = r3[r67];
    r4 = r5.bind(r0)(r4);
    r1[67] = r4;
    r4 = r3[r68];
    r4 = r5.bind(r0)(r4);
    r1[68] = r4;
    r4 = r3[r69];
    r4 = r5.bind(r0)(r4);
    r1[69] = r4;
    r4 = r3[r70];
    r4 = r5.bind(r0)(r4);
    r1[70] = r4;
    r4 = r3[r71];
    r3 = a1;
    r5 = r3.bind(r0)(r4);
    r4 = r5.fileFinishedImporting;
    r3 = 'modules/react_asset/native/native_required_assets_icons.tsx';
    r3 = r4.bind(r5)(r3);
    r2['NATIVE_REQUIRED_ASSETS_ICONS'] = r1;
    return r0;
}

// ===== top-level #17777  fn#17738  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    r1 = a6;
    r2 = r1[r0];
    r0 = undefined;
    r1 = a1;
    r3 = r1.bind(r0)(r2);
    r2 = r3.registerAsset;
    r1 = {'__packager_asset': true, 'httpServerLocation': '/assets/design/components/Icon/native/redesign/generated/images', 'width': 24, 'height': 24, 'scales': null, 'hash': 'f1884e5c4915e02981c5e72330110f57', 'name': 'CircleErrorIcon', 'type': 'png'};
    r4 = [2, 3];
    r1[4] = r4;
    r2 = r2.bind(r3)(r1);
    r1 = a4;
    r1['exports'] = r2;
    return r0;
}

// ===== top-level #17778  fn#17739  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    r1 = a6;
    r2 = r1[r0];
    r0 = undefined;
    r1 = a1;
    r3 = r1.bind(r0)(r2);
    r2 = r3.registerAsset;
    r1 = {'__packager_asset': true, 'httpServerLocation': '/assets/design/components/Icon/native/redesign/generated/images', 'width': 24, 'height': 24, 'scales': null, 'hash': 'b7c23ecf7d498084060048eec006835a', 'name': 'CircleInformationIcon', 'type': 'png'};
    r4 = [2, 3];
    r1[4] = r4;
    r2 = r2.bind(r3)(r1);
    r1 = a4;
    r1['exports'] = r2;
    return r0;
}

// ===== top-level #17779  fn#17740  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    r1 = a6;
    r2 = r1[r0];
    r0 = undefined;
    r1 = a1;
    r3 = r1.bind(r0)(r2);
    r2 = r3.registerAsset;
    r1 = {'__packager_asset': true, 'httpServerLocation': '/assets/design/components/Icon/native/redesign/generated/images', 'width': 24, 'height': 24, 'scales': null, 'hash': '296c2ec8ad1d8af66f5b6c763e93cbfa', 'name': 'ConnectionAverageIcon', 'type': 'png'};
    r4 = [2, 3];
    r1[4] = r4;
    r2 = r2.bind(r3)(r1);
    r1 = a4;
    r1['exports'] = r2;
    return r0;
}

// ===== top-level #17780  fn#17741  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    r1 = a6;
    r2 = r1[r0];
    r0 = undefined;
    r1 = a1;
    r3 = r1.bind(r0)(r2);
    r2 = r3.registerAsset;
    r1 = {'__packager_asset': true, 'httpServerLocation': '/assets/design/components/Icon/native/redesign/generated/images', 'width': 24, 'height': 24, 'scales': null, 'hash': '9b5a14aaf9d24f5535f3266845d28080', 'name': 'ConnectionBadIcon', 'type': 'png'};
    r4 = [2, 3];
    r1[4] = r4;
    r2 = r2.bind(r3)(r1);
    r1 = a4;
    r1['exports'] = r2;
    return r0;
}

// ===== top-level #17781  fn#17742  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    r1 = a6;
    r2 = r1[r0];
    r0 = undefined;
    r1 = a1;
    r3 = r1.bind(r0)(r2);
    r2 = r3.registerAsset;
    r1 = {'__packager_asset': true, 'httpServerLocation': '/assets/design/components/Icon/native/redesign/generated/images', 'width': 24, 'height': 24, 'scales': null, 'hash': '3cfafdcd8589d496d2b3358a1b5ec72d', 'name': 'ImageBrokenIcon', 'type': 'png'};
    r4 = [2, 3];
    r1[4] = r4;
    r2 = r2.bind(r3)(r1);
    r1 = a4;
    r1['exports'] = r2;
    return r0;
}

// ===== top-level #17782  fn#17743  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    r5 = a2;
    r2 = a5;
    r3 = a6;
    r1 = global;
    r7 = r1.Object;
    r6 = r7.defineProperty;
    r4 = '__esModule';
    r1 = {'value': true};
    r1 = r6.bind(r7)(r2, r4, r1);
    r1 = {'DefaultAvatar0': null, 'DefaultAvatar1': null, 'DefaultAvatar2': null, 'DefaultAvatar3': null, 'DefaultAvatar4': null, 'DefaultGroup0': null, 'DefaultGroup1': null, 'DefaultGroup2': null, 'DefaultGroup3': null, 'DefaultGroup4': null, 'DefaultGroup5': null, 'DefaultGroup6': null, 'DefaultGroup7': null, 'PoopDark': null, 'PoopLight': null, 'RoleSubscriptionBadge': null, 'RoleSubscriptionLanyard': null, 'RoleSubscriptionPurchaseCard': null, 'SummaryIndicatorEnd': null, 'SummaryIndicatorStart': null};
    r4 = r3[r0];
    r0 = undefined;
    r4 = r5.bind(r0)(r4);
    r1[0] = r4;
    r4 = r3[r1];
    r4 = r5.bind(r0)(r4);
    r1[1] = r4;
    r4 = r3[r2];
    r4 = r5.bind(r0)(r4);
    r1[2] = r4;
    r4 = r3[r3];
    r4 = r5.bind(r0)(r4);
    r1[3] = r4;
    r4 = r3[r4];
    r4 = r5.bind(r0)(r4);
    r1[4] = r4;
    r4 = r3[r5];
    r4 = r5.bind(r0)(r4);
    r1[5] = r4;
    r4 = r3[r6];
    r4 = r5.bind(r0)(r4);
    r1[6] = r4;
    r4 = r3[r7];
    r4 = r5.bind(r0)(r4);
    r1[7] = r4;
    r4 = r3[r8];
    r4 = r5.bind(r0)(r4);
    r1[8] = r4;
    r4 = r3[r9];
    r4 = r5.bind(r0)(r4);
    r1[9] = r4;
    r4 = r3[r10];
    r4 = r5.bind(r0)(r4);
    r1[10] = r4;
    r4 = r3[r11];
    r4 = r5.bind(r0)(r4);
    r1[11] = r4;
    r4 = r3[r12];
    r4 = r5.bind(r0)(r4);
    r1[12] = r4;
    r4 = r3[r13];
    r4 = r5.bind(r0)(r4);
    r1[13] = r4;
    r4 = r3[r14];
    r4 = r5.bind(r0)(r4);
    r1[14] = r4;
    r4 = r3[r15];
    r4 = r5.bind(r0)(r4);
    r1[15] = r4;
    r4 = r3[r16];
    r4 = r5.bind(r0)(r4);
    r1[16] = r4;
    r4 = r3[r17];
    r4 = r5.bind(r0)(r4);
    r1[17] = r4;
    r4 = r3[r18];
    r4 = r5.bind(r0)(r4);
    r1[18] = r4;
    r4 = r3[r19];
    r4 = r5.bind(r0)(r4);
    r1[19] = r4;
    r4 = r3[r20];
    r3 = a1;
    r5 = r3.bind(r0)(r4);
    r4 = r5.fileFinishedImporting;
    r3 = 'modules/react_asset/native/native_required_assets_misc.tsx';
    r3 = r4.bind(r5)(r3);
    r2['NATIVE_REQUIRED_ASSETS_MISC'] = r1;
    return r0;
}

// ===== top-level #17783  fn#17744  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    r1 = a6;
    r2 = r1[r0];
    r0 = undefined;
    r1 = a1;
    r3 = r1.bind(r0)(r2);
    r2 = r3.registerAsset;
    r1 = {'__packager_asset': true, 'httpServerLocation': '/assets/images/native', 'width': 120, 'height': 62, 'scales': null, 'hash': '9344f1089c1146b314e038ef9542fb46', 'name': 'poop_dark_large', 'type': 'png'};
    r4 = [2, 3];
    r1[4] = r4;
    r2 = r2.bind(r3)(r1);
    r1 = a4;
    r1['exports'] = r2;
    return r0;
}

// ===== top-level #17784  fn#17745  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    r1 = a6;
    r2 = r1[r0];
    r0 = undefined;
    r1 = a1;
    r3 = r1.bind(r0)(r2);
    r2 = r3.registerAsset;
    r1 = {'__packager_asset': true, 'httpServerLocation': '/assets/images/native', 'width': 120, 'height': 62, 'scales': null, 'hash': '45f60dd7d404beac5f4bf97c97606d27', 'name': 'poop_light_large', 'type': 'png'};
    r4 = [2, 3];
    r1[4] = r4;
    r2 = r2.bind(r3)(r1);
    r1 = a4;
    r1['exports'] = r2;
    return r0;
}

// ===== top-level #17785  fn#17746  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    r1 = a6;
    r2 = r1[r0];
    r0 = undefined;
    r1 = a1;
    r3 = r1.bind(r0)(r2);
    r2 = r3.registerAsset;
    r1 = {'__packager_asset': true, 'httpServerLocation': '/assets/images/native/guild_role_subscription', 'width': 67.5, 'height': 92.5, 'scales': null, 'hash': '1da146fe37f3351b22cf5b5c1c44b1cf', 'name': 'image_role_subscription_badge', 'type': 'png'};
    r4 = [2, 3];
    r1[4] = r4;
    r2 = r2.bind(r3)(r1);
    r1 = a4;
    r1['exports'] = r2;
    return r0;
}

// ===== top-level #17786  fn#17747  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    r1 = a6;
    r2 = r1[r0];
    r0 = undefined;
    r1 = a1;
    r3 = r1.bind(r0)(r2);
    r2 = r3.registerAsset;
    r1 = {'__packager_asset': true, 'httpServerLocation': '/assets/images/native/guild_role_subscription', 'width': 55, 'height': 128, 'scales': null, 'hash': '3ad934bc4ddf8afa206b19b9a38876a2', 'name': 'image_role_subscription_lanyard', 'type': 'png'};
    r4 = [2, 3];
    r1[4] = r4;
    r2 = r2.bind(r3)(r1);
    r1 = a4;
    r1['exports'] = r2;
    return r0;
}

// ===== top-level #17787  fn#17748  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    r1 = a6;
    r2 = r1[r0];
    r0 = undefined;
    r1 = a1;
    r3 = r1.bind(r0)(r2);
    r2 = r3.registerAsset;
    r1 = {'__packager_asset': true, 'httpServerLocation': '/assets/images/native/guild_role_subscription', 'width': 330, 'height': 112, 'scales': null, 'hash': '78e617e8087401b333ebcab08d27a76a', 'name': 'image_role_subscription_purchase_card_bg', 'type': 'png'};
    r4 = [2, 3];
    r1[4] = r4;
    r2 = r2.bind(r3)(r1);
    r1 = a4;
    r1['exports'] = r2;
    return r0;
}

// ===== top-level #17788  fn#17749  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    r1 = a6;
    r2 = r1[r0];
    r0 = undefined;
    r1 = a1;
    r3 = r1.bind(r0)(r2);
    r2 = r3.registerAsset;
    r1 = {'__packager_asset': true, 'httpServerLocation': '/assets/modules/summaries/native/images', 'width': 14, 'height': 18, 'scales': null, 'hash': '813d44b12eef1bb0afea69b8182d002f', 'name': 'summary_indicator_end', 'type': 'png'};
    r4 = [2, 3];
    r1[4] = r4;
    r2 = r2.bind(r3)(r1);
    r1 = a4;
    r1['exports'] = r2;
    return r0;
}

// ===== top-level #17789  fn#17750  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    r1 = a6;
    r2 = r1[r0];
    r0 = undefined;
    r1 = a1;
    r3 = r1.bind(r0)(r2);
    r2 = r3.registerAsset;
    r1 = {'__packager_asset': true, 'httpServerLocation': '/assets/modules/summaries/native/images', 'width': 14, 'height': 18, 'scales': null, 'hash': 'a62b86dc1d2c11cbfe0a98b586c4b359', 'name': 'summary_indicator_start', 'type': 'png'};
    r4 = [2, 3];
    r1[4] = r4;
    r2 = r2.bind(r3)(r1);
    r1 = a4;
    r1['exports'] = r2;
    return r0;
}

// ===== top-level #17790  fn#17751  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    r4 = a1;
    var _closure0_slot0 = r4;
    r12 = a2;
    var _closure0_slot1 = r12;
    r2 = a5;
    r3 = a6;
    var _closure0_slot2 = r3;
    r5 = global;
    r9 = r5.Object;
    r8 = r9.defineProperty;
    r7 = '__esModule';
    r6 = {'value': true};
    r6 = r8.bind(r9)(r2, r7, r6);
    r6 = r3[r0];
    r0 = undefined;
    r6 = r12.bind(r0)(r6);
    var _closure0_slot3 = r6;
    r6 = r3[r1];
    r8 = r12.bind(r0)(r6);
    r6 = r3[r2];
    r6 = r12.bind(r0)(r6);
    r7 = r3[r3];
    r11 = r12.bind(r0)(r7);
    r7 = r3[r4];
    r7 = r12.bind(r0)(r7);
    var _closure0_slot4 = r7;
    r7 = r3[r5];
    r9 = r12.bind(r0)(r7);
    r7 = r3[r6];
    r10 = r12.bind(r0)(r7);
    r7 = r3[r7];
    r7 = r4.bind(r0)(r7);
    r7 = r7.AnalyticEvents;
    var _closure0_slot5 = r7;
    r7 = r3[r8];
    r13 = r12.bind(r0)(r7);
    r12 = Object.create(r13.prototype);
    r16 = 'DispatcherBridge';
    r17 = r12;
    r7 = new r18[r13](r17, r16);
    r7 = r7 instanceof Object ? r7 : r12;
    var _closure0_slot6 = r7;
    r7 = new Array(5);
    r7[0] = r11;
    r7[1] = r10;
    r7[2] = r9;
    r7[3] = r8;
    r7[4] = r6;
    r6 = {'GUILD_MEMBER_ADD': null, 'CONNECTION_OPEN': null, 'CACHE_LOADED': null, 'CACHE_LOADED_LAZY': null, 'BACKGROUND_SYNC': null};
    r8 = function(a0) { // Original name: GUILD_MEMBER_ADD, environment: r1
        r0 = {};
        r3 = a0;
        r4 = r0;
        r1 = copyDataProperties(r5, r4);
        r2 = _closure0_slot4;
        r1 = r2.getId;
        r1 = r1.bind(r2)();
        r0['currentUserId'] = r1;
        return r0;
    };
    r6[0] = r8;
    r8 = function(a0) { // Original name: CONNECTION_OPEN
        r1 = a0;
        r0 = {'guilds': null, 'unavailableGuilds': null};
        r2 = r1.guilds;
        r0[0] = r2;
        r1 = r1.unavailableGuilds;
        r0[1] = r1;
        return r0;
    };
    r6[1] = r8;
    r8 = function(a0) { // Original name: CACHE_LOADED
        r0 = {'guilds': null};
        r1 = a0;
        r1 = r1.guilds;
        r0[0] = r1;
        return r0;
    };
    r6[2] = r8;
    r8 = function(a0) { // Original name: CACHE_LOADED_LAZY
        r0 = {'guilds': null};
        r1 = a0;
        r1 = r1.guilds;
        r0[0] = r1;
        return r0;
    };
    r6[3] = r8;
    r8 = function(a0) { // Original name: BACKGROUND_SYNC
        r0 = {'guilds': null};
        r1 = a0;
        r1 = r1.guilds;
        r0[0] = r1;
        return r0;
    };
    r6[4] = r8;
    var _closure0_slot7 = r6;
    r8 = r5.Set;
    r6 = Object.create(r8.prototype);
    r16 = ['libdiscore', 'typescript-libdiscore-dual-read'];
    r17 = r6;
    r5 = new r18[r8](r17, r16);
    r5 = r5 instanceof Object ? r5 : r6;
    var _closure0_slot8 = r5;
    r5 = function() { // Original name: <instance_members_initializer:DispatcherBridge>
        r1 = this;
        r2 = global;
        r2 = r2.Map;
        r3 = Object.create(r2.prototype);
        r4 = r3;
        r2 = new r5[r2](r4);
        r2 = r2 instanceof Object ? r2 : r3;
        r1['tokenToStore'] = r2;
        r0 = false;
        r1['disabledFromFatalError'] = r0;
        r0 = undefined;
        return r0;
    };
    var _closure0_slot9 = r5;
    r5 = __createBaseClass(function(a0) { // Original name: DispatcherBridge, environment: r1
        _fun78602: for(var _fun78602_ip = 0; ; ) switch(_fun78602_ip) {
case 0:
            r8 = a0;
            r5 = undefined;
            r3 = undefined;
            r0 = new.target;
            r0 = r0.prototype;
            r0 = Object.create(r0);
            var _closure1_slot4 = r0;
            r4 = _closure0_slot9;
            r4 = r4.bind(r0)();
            var _closure1_slot0 = r0;
            r6 = r8.length;
            r4 = 0;
            if(!(r4 !== r6)) { _fun78602_ip = 579; continue _fun78602 }
case 53:
            r6 = _closure0_slot0;
            r4 = _closure0_slot2;
            r4 = r4[r9];
            r4 = r6.bind(r5)(r4);
            r6 = r4.FLUX_API;
            var _closure1_slot1 = r6;
            r4 = null;
            if(!(r4 == r6)) { _fun78602_ip = 112; continue _fun78602 }
case 86:
            r9 = _closure0_slot6;
            r7 = r9.info;
            r4 = 'Not initializing DispatcherBridge, because kvStoreApi is unavailable.';
            r4 = r7.bind(r9)(r4);
            _fun78602_ip = 579; continue _fun78602;
case 112:
            r3 = new Array(0);
            r13 = r8;
            r9 = r13[Symbol.iterator];
            r13 = r9().next;
            r4 = global;
            r12 = ']';
            r11 = ', mode: ';
            r10 = ' => [token: ';
            r7 = '';
case 144:
            r14 = r13;
            r17 = r14().value;
            r14 = r9;
            if(!(r14 !== r5)) { _fun78602_ip = 261; continue _fun78602 }
case 158:
            r14 = r17.getName;
            r19 = r14.bind(r17)();
            r14 = r17.connectWithLibdiscore;
            r18 = r14.bind(r17)(r6);
            r15 = r0.tokenToStore;
            r14 = r15.set;
            r14 = r14.bind(r15)(r18, r17);
            r16 = r3;
            r15 = r16.push;
            r14 = r17.getMode;
            r21 = r14.bind(r17)();
            r14 = r4.HermesInternal;
            r14 = r14.concat;
            r26 = r7;
            r25 = r19;
            r24 = r10;
            r23 = r18;
            r22 = r11;
            r20 = r12;
            r14 = r27[r14](r26, r25, r24, r23, r22, r21, r20);
            r14 = r15.bind(r16)(r14);
            _fun78602_ip = 144; continue _fun78602;
case 254:
            CatchBlockStart(arg_register=7);
            r9.return();
            throw r7;
case 261:
            r7 = _closure0_slot6;
            r9 = r7.info;
            r14 = r8.length;
            r10 = r3;
            r3 = r10.join;
            r8 = ', ';
            r23 = r3.bind(r10)(r8);
            r3 = r4.HermesInternal;
            r11 = r3.concat;
            r13 = '.';
            r24 = ' store(s), mapping: ';
            r26 = 'Connected ';
            r25 = r14;
            r22 = r13;
            r3 = r27[r11](r26, r25, r24, r23, r22);
            r3 = r9.bind(r7)(r3);
            r3 = r6.getRegisteredActionTypes;
            r9 = r3.bind(r6)();
            r6 = r7.info;
            r12 = r9.length;
            r3 = r9.join;
            r23 = r3.bind(r9)(r8);
            r3 = r4.HermesInternal;
            r10 = r3.concat;
            r24 = ' bridged action(s): ';
            r26 = 'Registering ';
            r25 = r12;
            r3 = r27[r10](r26, r25, r24, r23, r22);
            r3 = r6.bind(r7)(r3);
            r3 = function(a0) { // Original name: actionHandler, environment: r2
                _fun131547: for(var _fun131547_ip = 0; ; ) switch(_fun131547_ip) {
case 0:
                    r10 = a0;
                    var _closure2_slot0 = r10;
                    r0 = undefined;
                    r15 = undefined;
                    r1 = _closure1_slot4;
                    r13 = r1;
                    r1 = r1.disabledFromFatalError;
                    if(r1) { _fun131547_ip = 993; continue _fun131547 }
case 36:
                    r3 = _closure0_slot7;
                    r1 = r10.type;
                    r6 = r3[r1];
                    r8 = global;
                    r3 = r8.performance;
                    r1 = r3.now;
                    r7 = r1.bind(r3)();
                    r4 = null;
                    if(!(r4 == r6)) { _fun131547_ip = 94; continue _fun131547 }
case 75:
                    r3 = r8.JSON;
                    r1 = r3.stringify;
                    r9 = r1.bind(r3)(r10);
                    _fun131547_ip = 142; continue _fun131547;
case 94:
                    r5 = r8.JSON;
                    r3 = r5.stringify;
                    r1 = {'type': null};
                    r14 = r10.type;
                    r1[0] = r14;
                    r23 = r6.bind(r0)(r10);
                    r24 = r1;
                    r6 = copyDataProperties(r25, r24);
                    r9 = r3.bind(r5)(r1);
case 142:
                    r1 = {'kind': 'json_stringify_action', 'durationMillis': null};
                    r5 = r8.performance;
                    r3 = r5.now;
                    r3 = r3.bind(r5)();
                    r3 = r3 - r7;
                    r1[1] = r3;
                    r5 = _closure0_slot0;
                    r3 = _closure0_slot2;
                    r3 = r3[r10];
                    r3 = r5.bind(r0)(r3);
                    r5 = r3.TelemetryExperiment;
                    r3 = r5.shouldCollectMetrics;
                    r3 = r3.bind(r5)();
                    r6 = _closure1_slot1;
                    r5 = r6.dispatchAction;
                    r5 = r5.bind(r6)(r9, r3);
                    r6 = r5.ok;
                    if(r6) { _fun131547_ip = 267; continue _fun131547 }
case 235:
                    r16 = r13;
                    r14 = r16.handleFatalError;
                    r9 = r5.error;
                    r6 = r10.type;
                    r6 = r14.bind(r16)(r9, r6);
                    _fun131547_ip = 993; continue _fun131547;
case 267:
                    r9 = r8.performance;
                    r6 = r9.now;
                    r6 = r6.bind(r9)();
                    r9 = r6 - r7;
                    r5 = r5.value;
                    r7 = r5.metrics;
                    r16 = r5.storeResults;
                    r14 = new Array(0);
                    r5 = r16;
                    r6 = r5[Symbol.iterator];
                    r5 = r6().next;
case 315:
                    r16 = r5;
                    r16 = r16().value;
                    r17 = r6;
                    if(!(r17 !== r0)) { _fun131547_ip = 394; continue _fun131547 }
case 329:
                    r15 = r16;
                    r16 = r16.error;
                    if(!(r4 == r16)) { _fun131547_ip = 356; continue _fun131547 }
case 341:
                    r17 = r14.push;
                    r16 = r15;
                    r16 = r17.bind(r14)(r16);
                    _fun131547_ip = 385; continue _fun131547;
case 356:
                    r19 = _closure1_slot4;
                    r13 = r19;
                    r18 = r19.handleStoreError;
                    r17 = r15;
                    r16 = r10.type;
                    r16 = r18.bind(r19)(r17, r16);
case 385:
                    _fun131547_ip = 315; continue _fun131547;
case 387:
                    CatchBlockStart(arg_register=5);
                    r6.return();
                    throw r5;
case 394:
                    r16 = function(a0) { // Original name: _loop, environment: r11
                        r2 = a0;
                        var _closure3_slot0 = r2;
                        r5 = _closure1_slot0;
                        r4 = r5.withStoreToken;
                        r3 = r2.storeToken;
                        r2 = _closure2_slot0;
                        r2 = r2.type;
                        r1 = function(a0) { // Environment: r1
                            r3 = a0;
                            r2 = r3.applyChanges;
                            r1 = _closure3_slot0;
                            r1 = r1.databaseChanges;
                            r1 = r2.bind(r3)(r1);
                            r0 = undefined;
                            return r0;
                        };
                        r1 = r4.bind(r5)(r3, r2, r1);
                        r0 = undefined;
                        return r0;
                    };
                    r15 = r14;
                    r6 = r15[Symbol.iterator];
                    r15 = r6().next;
                    r5 = 0;
case 409:
                    r17 = r15;
                    r17 = r17().value;
                    r18 = r6;
                    if(!(r18 !== r0)) { _fun131547_ip = 437; continue _fun131547 }
case 423:
                    r17 = r16.bind(r5)(r17);
                    _fun131547_ip = 409; continue _fun131547;
case 430:
                    CatchBlockStart(arg_register=5);
                    r6.return();
                    throw r5;
case 437:
                    r5 = r14;
                    r6 = r5[Symbol.iterator];
                    r5 = r6().next;
case 443:
                    r14 = r5;
                    r14 = r14().value;
                    r15 = r6;
                    if(!(r15 !== r0)) { _fun131547_ip = 504; continue _fun131547 }
case 457:
                    r18 = _closure1_slot4;
                    r13 = r18;
                    r17 = r18.withStoreToken;
                    r16 = r14.storeToken;
                    r15 = r10.type;
                    r14 = function(a0) { // Environment: r11
                        r3 = a0;
                        r2 = r3.doEmitChanges;
                        r1 = _closure2_slot0;
                        r1 = r2.bind(r3)(r1);
                        r0 = undefined;
                        return r0;
                    };
                    r14 = r17.bind(r18)(r16, r15, r14);
                    _fun131547_ip = 443; continue _fun131547;
case 497:
                    CatchBlockStart(arg_register=5);
                    r6.return();
                    throw r5;
case 504:
                    if(!(r4 != r7)) { _fun131547_ip = 993; continue _fun131547 }
case 511:
                    if(!r3) { _fun131547_ip = 993; continue _fun131547 }
case 517:
                    r11 = new Array(1);
                    r11[0] = r1;
                    r23 = r7.timings;
                    r22 = 1;
                    r24 = r11;
                    r1 = arraySpread(r25, r24, r23);
                    r4 = _closure0_slot3;
                    r3 = r4.get;
                    r1 = 'libdiscore_verbose_telemetry_logging';
                    r1 = r3.bind(r4)(r1);
                    if(!r1) { _fun131547_ip = 828; continue _fun131547 }
case 567:
                    r3 = r11.map;
                    r1 = function(a0) {
                        r0 = a0;
                        r9 = r0.kind;
                        r7 = r0.durationMillis;
                        r0 = global;
                        r0 = r0.HermesInternal;
                        r3 = r0.concat;
                        r6 = 'ms';
                        r8 = ': ';
                        r10 = ' - ';
                        r0 = r11[r3](r10, r9, r8, r7, r6);
                        return r0;
                    };
                    r3 = r3.bind(r11)(r1);
                    r1 = r3.join;
                    r5 = '\n';
                    r3 = r1.bind(r3)(r5);
                    r1 = ['Timings'];
                    r1[1] = r3;
                    r4 = new Array(3);
                    r4[0] = r1;
                    r6 = r7.mutations;
                    r3 = r6.map;
                    r1 = function(a0) {
                        r1 = a0;
                        r5 = r1.recordType;
                        r4 = r1.metrics;
                        r1 = global;
                        r3 = r1.Object;
                        r2 = r3.entries;
                        r4 = r2.bind(r3)(r4);
                        r3 = r4.filter;
                        r0 = undefined;
                        r2 = function(a0) {
                            _fun152149: for(var _fun152149_ip = 0; ; ) switch(_fun152149_ip) {
case 0:
                                r6 = a0;
                                r5 = r6[Symbol.iterator];
                                r6 = r5().next;
                                r4 = r6;
                                r4 = r4().value;
                                r4 = r5;
                                r2 = undefined;
                                r1 = r4 === r2;
                                r4 = undefined;
                                if(r1) { _fun152149_ip = 52; continue _fun152149 }
case 27:
                                r6 = r6().value;
                                r7 = r5;
                                r3 = r7 === r2;
                                r4 = undefined;
                                r1 = r3;
                                if(r3) { _fun152149_ip = 52; continue _fun152149 }
case 46:
                                r4 = r6;
                                r1 = r3;
case 52:
                                if(r1) { _fun152149_ip = 58; continue _fun152149 }
case 55:
                                r5.return();
case 58:
                                r0 = 0;
                                r1 = r0 !== r4;
                                return r1;
                            }
                        };
                        r4 = r3.bind(r4)(r2);
                        r3 = r4.map;
                        r2 = function(a0) {
                            _fun152150: for(var _fun152150_ip = 0; ; ) switch(_fun152150_ip) {
case 0:
                                r4 = a0;
                                r3 = r4[Symbol.iterator];
                                r4 = r3().next;
                                r5 = r4;
                                r5 = r5().value;
                                r6 = r3;
                                r1 = undefined;
                                r0 = r6 === r1;
                                r7 = undefined;
                                if(r0) { _fun152150_ip = 30; continue _fun152150 }
case 27:
                                r7 = r5;
case 30:
                                r6 = undefined;
                                if(r0) { _fun152150_ip = 60; continue _fun152150 }
case 35:
                                r4 = r4().value;
                                r5 = r3;
                                r2 = r5 === r1;
                                r6 = undefined;
                                r0 = r2;
                                if(r2) { _fun152150_ip = 60; continue _fun152150 }
case 54:
                                r6 = r4;
                                r0 = r2;
case 60:
                                if(r0) { _fun152150_ip = 66; continue _fun152150 }
case 63:
                                r3.return();
case 66:
                                r3 = global;
                                r3 = r3.HermesInternal;
                                r5 = r3.concat;
                                r4 = ': ';
                                r3 = ' - ';
                                r3 = r5.bind(r3)(r7, r4, r6);
                                return r3;
                            }
                        };
                        r3 = r3.bind(r4)(r2);
                        r2 = r3.join;
                        r4 = '\n';
                        r3 = r2.bind(r3)(r4);
                        r1 = r1.HermesInternal;
                        r2 = r1.concat;
                        r1 = ' * Record Type: ';
                        r1 = r2.bind(r1)(r5, r4, r3);
                        return r1;
                    };
                    r3 = r3.bind(r6)(r1);
                    r1 = r3.join;
                    r3 = r1.bind(r3)(r5);
                    r1 = ['Mutations'];
                    r1[1] = r3;
                    r4[1] = r1;
                    r6 = r7.memory;
                    r3 = r6.map;
                    r1 = function(a0) {
                        r1 = a0;
                        r5 = r1.recordType;
                        r4 = r1.statistics;
                        r1 = global;
                        r3 = r1.Object;
                        r2 = r3.entries;
                        r4 = r2.bind(r3)(r4);
                        r3 = r4.map;
                        r0 = undefined;
                        r2 = function(a0) {
                            _fun152151: for(var _fun152151_ip = 0; ; ) switch(_fun152151_ip) {
case 0:
                                r4 = a0;
                                r3 = r4[Symbol.iterator];
                                r4 = r3().next;
                                r5 = r4;
                                r5 = r5().value;
                                r6 = r3;
                                r1 = undefined;
                                r0 = r6 === r1;
                                r7 = undefined;
                                if(r0) { _fun152151_ip = 30; continue _fun152151 }
case 27:
                                r7 = r5;
case 30:
                                r6 = undefined;
                                if(r0) { _fun152151_ip = 60; continue _fun152151 }
case 35:
                                r4 = r4().value;
                                r5 = r3;
                                r2 = r5 === r1;
                                r6 = undefined;
                                r0 = r2;
                                if(r2) { _fun152151_ip = 60; continue _fun152151 }
case 54:
                                r6 = r4;
                                r0 = r2;
case 60:
                                if(r0) { _fun152151_ip = 66; continue _fun152151 }
case 63:
                                r3.return();
case 66:
                                r3 = global;
                                r5 = r3.JSON;
                                r4 = r5.stringify;
                                r6 = r4.bind(r5)(r6);
                                r3 = r3.HermesInternal;
                                r5 = r3.concat;
                                r4 = ': ';
                                r3 = ' - ';
                                r3 = r5.bind(r3)(r7, r4, r6);
                                return r3;
                            }
                        };
                        r3 = r3.bind(r4)(r2);
                        r2 = r3.join;
                        r4 = '\n';
                        r3 = r2.bind(r3)(r4);
                        r1 = r1.HermesInternal;
                        r2 = r1.concat;
                        r1 = ' * Record Type: ';
                        r1 = r2.bind(r1)(r5, r4, r3);
                        return r1;
                    };
                    r3 = r3.bind(r6)(r1);
                    r1 = r3.join;
                    r3 = r1.bind(r3)(r5);
                    r1 = ['Memory Usage'];
                    r1[1] = r3;
                    r4[2] = r1;
                    r3 = r4.filter;
                    r1 = function(a0) {
                        _fun147737: for(var _fun147737_ip = 0; ; ) switch(_fun147737_ip) {
case 0:
                            r3 = a0;
                            r1 = r3[Symbol.iterator];
                            r3 = r1().next;
                            r0 = r3;
                            r0 = r0().value;
                            r0 = r1;
                            r5 = undefined;
                            r2 = r0 === r5;
                            r0 = undefined;
                            if(r2) { _fun147737_ip = 52; continue _fun147737 }
case 27:
                            r4 = r3().value;
                            r3 = r1;
                            r3 = r3 === r5;
                            r0 = undefined;
                            r2 = r3;
                            if(r3) { _fun147737_ip = 52; continue _fun147737 }
case 46:
                            r0 = r4;
                            r2 = r3;
case 52:
                            if(r2) { _fun147737_ip = 61; continue _fun147737 }
case 55:
                            r2 = r1;
                            r2.return();
case 61:
                            r2 = r0.length;
                            r0 = 0;
                            r0 = r2 > r0;
                            return r0;
case 74:
                            CatchBlockStart(arg_register=0);
                            r1.return();
                            throw r0;
                        }
                    };
                    r4 = r3.bind(r4)(r1);
                    r3 = r4.map;
                    r1 = function(a0) {
                        _fun147738: for(var _fun147738_ip = 0; ; ) switch(_fun147738_ip) {
case 0:
                            r4 = a0;
                            r3 = r4[Symbol.iterator];
                            r4 = r3().next;
                            r5 = r4;
                            r5 = r5().value;
                            r6 = r3;
                            r1 = undefined;
                            r0 = r6 === r1;
                            r7 = undefined;
                            if(r0) { _fun147738_ip = 30; continue _fun147738 }
case 27:
                            r7 = r5;
case 30:
                            r6 = undefined;
                            if(r0) { _fun147738_ip = 60; continue _fun147738 }
case 35:
                            r4 = r4().value;
                            r5 = r3;
                            r2 = r5 === r1;
                            r6 = undefined;
                            r0 = r2;
                            if(r2) { _fun147738_ip = 60; continue _fun147738 }
case 54:
                            r6 = r4;
                            r0 = r2;
case 60:
                            if(r0) { _fun147738_ip = 66; continue _fun147738 }
case 63:
                            r3.return();
case 66:
                            r3 = global;
                            r3 = r3.HermesInternal;
                            r5 = r3.concat;
                            r4 = ':\n';
                            r3 = '';
                            r3 = r5.bind(r3)(r7, r4, r6);
                            return r3;
                        }
                    };
                    r4 = r3.bind(r4)(r1);
                    r3 = r4.join;
                    r1 = '\n\n';
                    r20 = r3.bind(r4)(r1);
                    r4 = _closure0_slot6;
                    r3 = r4.info;
                    r24 = r10.type;
                    r1 = r8.HermesInternal;
                    r12 = r1.concat;
                    r21 = 'ms\n';
                    r23 = ' took ';
                    r25 = 'Handling action ';
                    r22 = r9;
                    r1 = r26[r12](r25, r24, r23, r22, r21, r20);
                    r1 = r3.bind(r4)(r1);
case 828:
                    r4 = _closure0_slot1;
                    r1 = _closure0_slot2;
                    r3 = r1[r11];
                    r6 = r4.bind(r0)(r3);
                    r5 = r6.track;
                    r3 = _closure0_slot5;
                    r4 = r3.LIBDISCORE_DISPATCH_BRIDGE_TELEMETRY;
                    r3 = {'action_type': null, 'total_duration_millis': null, 'timings': null, 'mutations': null, 'memory_usage': null};
                    r10 = r10.type;
                    r3[0] = r10;
                    r3[1] = r9;
                    r10 = r8.JSON;
                    r9 = r10.stringify;
                    r9 = r9.bind(r10)(r11);
                    r3[2] = r9;
                    r11 = r8.JSON;
                    r10 = r11.stringify;
                    r9 = r7.mutations;
                    r9 = r10.bind(r11)(r9);
                    r3[3] = r9;
                    r9 = r8.JSON;
                    r8 = r9.stringify;
                    r7 = r7.memory;
                    r7 = r8.bind(r9)(r7);
                    r3[4] = r7;
                    r3 = r5.bind(r6)(r4, r3);
                    r2 = _closure0_slot0;
                    r1 = r1[r10];
                    r1 = r2.bind(r0)(r1);
                    r2 = r1.TelemetryExperiment;
                    r1 = r2.didEmit;
                    r1 = r1.bind(r2)();
case 993:
                    return r0;
                }
            };
            var _closure1_slot2 = r3;
            r7 = _closure0_slot1;
            r3 = _closure0_slot2;
            r6 = r3[r12];
            r11 = r7.bind(r5)(r6);
            r10 = r11.register;
            r7 = r4.Object;
            r6 = r7.fromEntries;
            r8 = r9.map;
            r4 = function(a0) { // Environment: r2
                r0 = new Array(2);
                r1 = a0;
                r0[0] = r1;
                r1 = _closure1_slot2;
                r0[1] = r1;
                return r0;
            };
            r4 = r8.bind(r9)(r4);
            r24 = r6.bind(r7)(r4);
            r4 = _closure0_slot0;
            r6 = r3[r12];
            r6 = r4.bind(r5)(r6);
            r6 = r6.DispatchBand;
            r22 = r6.Database;
            r25 = 'LibDiscoreDispatcherBridge';
            r23 = function() {
                r0 = undefined;
                return r0;
            };
            r26 = r11;
            r6 = r27[r10](r26, r25, r24, r23, r22);
            r3 = r3[r13];
            r3 = r4.bind(r5)(r3);
            r4 = r3.default;
            var _closure1_slot3 = r4;
            r3 = r4.addChangeListener;
            r2 = function() { // Environment: r2
                _fun131550: for(var _fun131550_ip = 0; ; ) switch(_fun131550_ip) {
case 0:
                    r3 = _closure1_slot3;
                    r1 = r3.getState;
                    r3 = r1.bind(r3)();
                    r1 = 'active';
                    if(!(r1 !== r3)) { _fun131550_ip = 95; continue _fun131550 }
case 25:
                    r3 = global;
                    r4 = r3.Date;
                    r3 = r4.now;
                    r3 = r3.bind(r4)();
                    var _closure1_slot0 = r3;
                    r3 = _closure1_slot1;
                    r2 = r3.flushReplicationStates;
                    r3 = r2.bind(r3)();
                    r0 = null;
                    if(!(r3 != r0)) { _fun131550_ip = 95; continue _fun131550 }
case 78:
                    r2 = r3.then;
                    r1 = function(a0) { // Environment: r1
                        _fun147739: for(var _fun147739_ip = 0; ; ) switch(_fun147739_ip) {
case 0:
                            r1 = a0;
                            if(!r1) { _fun147739_ip = 79; continue _fun147739 }
case 6:
                            r3 = _closure0_slot6;
                            r2 = r3.info;
                            r1 = global;
                            r6 = r1.Date;
                            r5 = r6.now;
                            r5 = r5.bind(r6)();
                            r4 = _closure1_slot0;
                            r6 = r5 - r4;
                            r1 = r1.HermesInternal;
                            r5 = r1.concat;
                            r4 = 'ms';
                            r1 = 'Successfully flushed replication states in ';
                            r1 = r5.bind(r1)(r6, r4);
                            r1 = r2.bind(r3)(r1);
case 79:
                            r0 = undefined;
                            return r0;
                        }
                    };
                    r1 = r2.bind(r3)(r1);
case 95:
                    r0 = undefined;
                    return r0;
                }
            };
            r2 = r3.bind(r4)(r2);
            _fun78602_ip = 579; continue _fun78602;
case 556:
            CatchBlockStart(arg_register=4);
            r3 = _closure0_slot6;
            r2 = r3.error;
            r1 = 'Failed to initialize the dispatcher bridge';
            r1 = r2.bind(r3)(r1, r4);
case 579:
            return r0;
        }
    });
    r6 = r5.prototype;
    r9 = r6;
    r8 = 'handleFatalError';
    r6 = function(a0, a1) { // Original name: handleFatalError, environment: r1
        _fun78603: for(var _fun78603_ip = 0; ; ) switch(_fun78603_ip) {
case 0:
            r4 = this;
            r11 = a1;
            r0 = global;
            r3 = r0.Error;
            r1 = Object.create(r3.prototype);
            r16 = a0;
            r17 = r1;
            r0 = new r18[r3](r17, r16);
            r0 = r0 instanceof Object ? r0 : r1;
            r1 = r4.hasAnyAuthoritativeStore;
            r5 = r1.bind(r4)();
            r7 = _closure0_slot6;
            r6 = r7.error;
            r14 = 'hasAuthoritativeStore:';
            r16 = 'Fatal dispatch error for action';
            r17 = r7;
            r15 = r11;
            r13 = r5;
            r12 = r0;
            r1 = r18[r6](r17, r16, r15, r14, r13, r12);
            r8 = _closure0_slot1;
            r1 = _closure0_slot2;
            r6 = r1[r14];
            r3 = undefined;
            r9 = r8.bind(r3)(r6);
            r8 = r9.captureException;
            r6 = {'extra': null, 'tags': null};
            r10 = {'actionType': null, 'hasAuthoritativeStore': null};
            r10[0] = r11;
            r10[1] = r5;
            r6[0] = r10;
            r10 = {'source': 'libdiscore', 'errorKind': 'fatal_dispatch'};
            r6[1] = r10;
            r6 = r8.bind(r9)(r0, r6);
            if(r5) { _fun78603_ip = 245; continue _fun78603 }
case 164:
            r6 = r7.warn;
            r5 = 'Disabling DispatcherBridge until restart';
            r5 = r6.bind(r7)(r5);
            r5 = true;
            r4['disabledFromFatalError'] = r5;
            r5 = r4.tokenToStore;
            r4 = r5.values;
            r6 = r4.bind(r5)();
            r4 = r6;
            r5 = r4[Symbol.iterator];
            r4 = r5().next;
case 210:
            r6 = r4;
            r7 = r6().value;
            r6 = r5;
            if(!(r6 !== r3)) { _fun78603_ip = 243; continue _fun78603 }
case 224:
            r6 = r7.disableDualReadValidation;
            r6 = r6.bind(r7)();
            _fun78603_ip = 210; continue _fun78603;
case 236:
            CatchBlockStart(arg_register=4);
            r5.return();
            throw r4;
case 243:
            return r3;
case 245:
            r2 = _closure0_slot0;
            r1 = r1[r10];
            r2 = r2.bind(r3)(r1);
            r1 = r2.clearLibdiscoreExperimentCache;
            r1 = r1.bind(r2)();
            throw r0;
        }
    };
    r9[8] = r6;
    r8 = 'handleStoreError';
    r6 = function(a0, a1) { // Original name: handleStoreError, environment: r1
        _fun78604: for(var _fun78604_ip = 0; ; ) switch(_fun78604_ip) {
case 0:
            r4 = a0;
            r3 = this;
            r6 = r3.tokenToStore;
            r5 = r6.get;
            r3 = r4.storeToken;
            r8 = r5.bind(r6)(r3);
            r1 = null;
            r2 = r8 == r1;
            r0 = undefined;
            r11 = undefined;
            if(r2) { _fun78604_ip = 51; continue _fun78604 }
case 41:
            r3 = r8.getName;
            r11 = r3.bind(r8)();
case 51:
            if(!(r11 == r1)) { _fun78604_ip = 92; continue _fun78604 }
case 55:
            r7 = r4.storeToken;
            r3 = global;
            r3 = r3.HermesInternal;
            r6 = r3.concat;
            r5 = ')';
            r3 = 'unknown(token:';
            r11 = r6.bind(r3)(r7, r5);
case 92:
            r2 = r8 == r1;
            r10 = undefined;
            if(r2) { _fun78604_ip = 111; continue _fun78604 }
case 101:
            r3 = r8.getMode;
            r10 = r3.bind(r8)();
case 111:
            r3 = global;
            r7 = r3.Error;
            r4 = r4.error;
            if(!(r4 == r1)) { _fun78604_ip = 134; continue _fun78604 }
case 128:
            r4 = 'unknown store error';
case 134:
            r15 = a1;
            r5 = Object.create(r7.prototype);
            r23 = r5;
            r22 = r4;
            r4 = new r24[r7](r23, r22);
            r4 = r4 instanceof Object ? r4 : r5;
            r12 = _closure0_slot6;
            r13 = r12.error;
            r18 = 'mode:';
            r20 = 'failed to handle action';
            r22 = 'Store';
            r23 = r12;
            r21 = r11;
            r19 = r15;
            r17 = r10;
            r16 = r4;
            r5 = r24[r13](r23, r22, r21, r20, r19, r18, r17, r16);
            r9 = _closure0_slot1;
            r5 = _closure0_slot2;
            r7 = r5[r14];
            r13 = r9.bind(r0)(r7);
            r9 = r13.captureException;
            r7 = {'extra': null, 'tags': null};
            r14 = {'actionType': null, 'storeName': null, 'storeMode': null};
            r14[0] = r15;
            r14[1] = r11;
            r14[2] = r10;
            r7[0] = r14;
            r14 = {'source': 'libdiscore', 'errorKind': 'store_dispatch'};
            r7[1] = r14;
            r7 = r9.bind(r13)(r4, r7);
            r7 = 'typescript-libdiscore-dual-read';
            if(!(r7 === r10)) { _fun78604_ip = 347; continue _fun78604 }
case 291:
            r9 = r12.warn;
            r7 = r3.HermesInternal;
            r14 = r7.concat;
            r13 = ' had unexpected error in Rust implementation, disabling moving forward';
            r7 = 'Store: ';
            r7 = r14.bind(r7)(r11, r13);
            r7 = r9.bind(r12)(r7);
            if(!(r8 != r1)) { _fun78604_ip = 345; continue _fun78604 }
case 335:
            r7 = r8.disableDualReadValidation;
            r7 = r7.bind(r8)();
case 345:
            return r0;
case 347:
            r7 = 'libdiscore';
            if(!(r7 !== r10)) { _fun78604_ip = 410; continue _fun78604 }
case 357:
            r8 = r3.Error;
            r3 = r3.HermesInternal;
            r9 = r3.concat;
            r7 = "' for store ";
            r3 = "unexpected storeMode '";
            r22 = r9.bind(r3)(r10, r7, r11);
            r7 = Object.create(r8.prototype);
            r23 = r7;
            r3 = new r24[r8](r23, r22);
            r3 = r3 instanceof Object ? r3 : r7;
            _fun78604_ip = 436; continue _fun78604;
case 410:
            r6 = _closure0_slot0;
            r5 = r5[r10];
            r6 = r6.bind(r0)(r5);
            r5 = r6.clearLibdiscoreExperimentCache;
            r5 = r5.bind(r6)();
            r3 = r4;
case 436:
            throw r3;
        }
    };
    r9[8] = r6;
    r8 = 'withStoreToken';
    r6 = function(a0, a1, a2) { // Original name: withStoreToken, environment: r1
        _fun78605: for(var _fun78605_ip = 0; ; ) switch(_fun78605_ip) {
case 0:
            r7 = a0;
            r1 = this;
            r2 = r1.tokenToStore;
            r1 = r2.get;
            r2 = r1.bind(r2)(r7);
            r0 = null;
            if(!(r0 != r2)) { _fun78605_ip = 40; continue _fun78605 }
case 28:
            r1 = a2;
            r0 = undefined;
            r1 = r1.bind(r0)(r2);
            _fun78605_ip = 84; continue _fun78605;
case 40:
            r11 = a1;
            r5 = _closure0_slot6;
            r4 = r5.warn;
            r8 = 'that is unknown';
            r10 = 'we got a store token';
            r12 = 'When dispatching action';
            r13 = r5;
            r9 = r7;
            r1 = r14[r4](r13, r12, r11, r10, r9, r8);
case 84:
            r0 = undefined;
            return r0;
        }
    };
    r9[8] = r6;
    r8 = 'hasAnyAuthoritativeStore';
    r6 = function() { // Original name: hasAnyAuthoritativeStore
        _fun78606: for(var _fun78606_ip = 0; ; ) switch(_fun78606_ip) {
case 0:
            r0 = this;
            r1 = r0.tokenToStore;
            r0 = r1.values;
            r0 = r0.bind(r1)();
            r3 = r0;
            r1 = r3[Symbol.iterator];
            r3 = r1().next;
            r2 = 'libdiscore';
            r0 = undefined;
case 32:
            r4 = r3;
            r5 = r4().value;
            r4 = r1;
            if(!(r4 !== r0)) { _fun78606_ip = 79; continue _fun78606 }
case 46:
            r4 = r5.getMode;
            r4 = r4.bind(r5)();
            if(!(r2 !== r4)) { _fun78606_ip = 62; continue _fun78606 }
case 60:
            _fun78606_ip = 32; continue _fun78606;
case 62:
            r0 = r1;
            r0.return();
            r0 = true;
            return r0;
case 72:
            CatchBlockStart(arg_register=0);
            r1.return();
            throw r0;
case 79:
            r0 = false;
            return r0;
        }
    };
    r9[8] = r6;
    r6 = r7.filter;
    r1 = function(a0) { // Environment: r1
        r3 = a0;
        r2 = _closure0_slot8;
        r1 = r2.has;
        r0 = r3.getMode;
        r0 = r0.bind(r3)();
        r0 = r1.bind(r2)(r0);
        return r0;
    };
    r16 = r6.bind(r7)(r1);
    r17 = undefined;
    r1 = new r18[r5](r17, r16);
    r3 = r3[r15];
    r5 = r4.bind(r0)(r3);
    r4 = r5.fileFinishedImporting;
    r3 = 'modules/libdiscore/DispatcherBridge.tsx';
    r3 = r4.bind(r5)(r3);
    r2['default'] = r1;
    return r0;
}

// ===== top-level #17791  fn#17752  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    r7 = a1;
    var _closure0_slot0 = r7;
    r10 = a2;
    var _closure0_slot1 = r10;
    r3 = a5;
    r6 = a6;
    var _closure0_slot2 = r6;
    r5 = function() { // Original name: libDiscoreSmokeTest, environment: r8
        _fun78607: for(var _fun78607_ip = 0; ; ) switch(_fun78607_ip) {
case 0:
            r1 = undefined;
            r3 = this;
            r2 = _closure0_slot7;
            r4 = r2.apply;
            if(r4) { _fun78607_ip = 31; continue _fun78607 }
case 21:
            r1 = arguments;
            r1 = r4.bind(r2)(r3, r1);
            _fun78607_ip = 41; continue _fun78607;
case 31:
            r6 = r2;
            r5 = r3;
            r1 = applyArguments(r7, r6);
case 41:
            return r1;
        }
    };
    r2 = function() { // Original name: _libDiscoreSmokeTest, environment: r8
        _fun78608: for(var _fun78608_ip = 0; ; ) switch(_fun78608_ip) {
case 0:
            r0 = undefined;
            r1 = undefined;
            r3 = this;
            r5 = _closure0_slot3;
            r2 = function() { // Environment: r4
                r0 = 0;
                var _closure1_slot4 = r0;
                var _closure1_slot5 = r0;
                var _closure1_slot3 = r0;
                r1 = function* () { // Original name: ?anon_0_, environment: r1
                    _fun147740: for(var _fun147740_ip = 0; ; ) switch(_fun147740_ip) {
case 0:
                        r0 = _closure1_slot5;
                        r2 = r0;
                        r4 = 2;
                        if(!(r0 !== r4)) { _fun147740_ip = 456; continue _fun147740 }
case 20:
                        r0 = arguments[1];
                        r3 = arguments[0];
                        r15 = r2;
                        r7 = 3;
                        r5 = 1;
                        r14 = 0;
                        r13 = undefined;
                        r11 = true;
                        r10 = 7;
                        r9 = 6;
                        r8 = 'The answer for life the universe and everything is:';
                        if(!(r15 !== r7)) { _fun147740_ip = 418; continue _fun147740 }
case 63:
                        r2 = r4;
                        _closure1_slot5 = r4;
                        r15 = _closure1_slot4;
                        if(!(r14 !== r15)) { _fun147740_ip = 238; continue _fun147740 }
case 81:
                        if(!(r5 !== r15)) { _fun147740_ip = 204; continue _fun147740 }
case 85:
                        if(!(r3 !== r5)) { _fun147740_ip = 195; continue _fun147740 }
case 89:
                        if(!(r3 !== r4)) { _fun147740_ip = 168; continue _fun147740 }
case 93:
                        r16 = _closure1_slot0;
                        r15 = _closure1_slot1;
                        r18 = _env_r15_slot0;
                        r17 = _env_r15_slot2;
                        r17 = r17[r4];
                        r18 = r18.bind(r13)(r17);
                        r17 = r18.rustMultiply;
                        r17 = r17.bind(r18)(r9, r10);
                        _env_r16_slot0 = r17;
                        r18 = _env_r15_slot5;
                        r17 = r18.info;
                        r16 = _env_r16_slot0;
                        r16 = r17.bind(r18)(r8, r16);
                        r15 = _env_r15_slot8;
                        r15 = r15.bind(r13)();
                        _closure1_slot3 = r14;
                        _fun147740_ip = 228; continue _fun147740;
case 168:
                        _closure1_slot3 = r14;
                        r2 = r7;
                        _closure1_slot5 = r7;
                        r15 = {'value': null, 'done': true};
                        r15[0] = r0;
                        return r15;
case 195:
                        r2 = r7;
                        _closure1_slot5 = r7;
                        throw r0;
case 204:
                        r15 = _closure1_slot1;
                        r16 = _closure1_slot2;
                        r6 = r16;
                        _closure1_slot3 = r14;
                        r15 = _env_r15_slot9;
                        r15 = r15.bind(r13)(r16);
case 228:
                        r15 = _closure1_slot1;
                        _env_r15_slot6 = r11;
                        _fun147740_ip = 332; continue _fun147740;
case 238:
                        if(!(r3 !== r5)) { _fun147740_ip = 374; continue _fun147740 }
case 245:
                        if(!(r3 !== r4)) { _fun147740_ip = 351; continue _fun147740 }
case 249:
                        var _closure1_slot1 = r12;
                        var _closure1_slot0 = r15;
                        var _closure2_slot0 = r13;
                        r15 = _closure0_slot6;
                        if(r15) { _fun147740_ip = 332; continue _fun147740 }
case 274:
                        _closure1_slot3 = r5;
                        r16 = _closure0_slot0;
                        r15 = _closure0_slot2;
                        r15 = r15[r3];
                        r16 = r16.bind(r13)(r15);
                        r15 = r16.initLibdiscore;
                        r16 = r15.bind(r16)();
                        _closure1_slot4 = r4;
                        r2 = r5;
                        _closure1_slot5 = r5;
                        r15 = {'value': null, 'done': false};
                        r15[0] = r16;
                        return r15;
case 332:
                        r2 = r7;
                        _closure1_slot5 = r7;
                        r15 = {'value': undefined, 'done': true};
                        return r15;
case 351:
                        r2 = r7;
                        _closure1_slot5 = r7;
                        r15 = {'value': null, 'done': true};
                        r15[0] = r0;
                        return r15;
case 374:
                        r2 = r7;
                        _closure1_slot5 = r7;
                        throw r0;
case 383:
                        CatchBlockStart(arg_register=15);
                        r6 = r15;
                        var _closure1_slot2 = r15;
                        r15 = _closure1_slot3;
                        if(!(r14 !== r15)) { _fun147740_ip = 409; continue _fun147740 }
case 400:
                        _closure1_slot4 = r5;
                        _fun147740_ip = 63; continue _fun147740;
case 409:
                        r2 = r7;
                        _closure1_slot5 = r7;
                        throw r6;
case 418:
                        if(!(r3 !== r5)) { _fun147740_ip = 454; continue _fun147740 }
case 422:
                        if(!(r3 !== r4)) { _fun147740_ip = 438; continue _fun147740 }
case 426:
                        r3 = {'value': undefined, 'done': true};
                        return r3;
case 438:
                        r3 = {'value': null, 'done': true};
                        r3[0] = r0;
                        return r3;
case 454:
                        throw r0;
case 456:
                        r0 = 3;
                        r2 = r0;
                        _closure1_slot5 = r0;
                        r20 = 'Generator functions may not be called on executing generators';
                        r0 = throwTypeError(r21);
                    }
                };
                return r1;
            };
            r2 = r5.bind(r0)(r2);
            _closure0_slot7 = r2;
            r4 = r2.apply;
            if(r4) { _fun78608_ip = 49; continue _fun78608 }
case 39:
            r1 = arguments;
            r1 = r4.bind(r2)(r3, r1);
            _fun78608_ip = 59; continue _fun78608;
case 49:
            r7 = r2;
            r6 = r3;
            r1 = applyArguments(r8, r7);
case 59:
            return r1;
        }
    };
    var _closure0_slot7 = r2;
    r4 = function() { // Original name: trackLibdiscoreSuccess, environment: r8
        r5 = new Array(0);
        var _closure1_slot0 = r5;
        r6 = _closure0_slot0;
        r2 = _closure0_slot2;
        r4 = r2[r5];
        r0 = undefined;
        r4 = r6.bind(r0)(r4);
        r6 = r4.ALL_LIBDISCORE_EXPERIMENTS;
        r4 = r6.forEach;
        r3 = function(a0) { // Environment: r3
            _fun131553: for(var _fun131553_ip = 0; ; ) switch(_fun131553_ip) {
case 0:
                r2 = a0;
                r1 = r2.getEnabledFeatureName;
                r3 = r1.bind(r2)();
                r0 = null;
                if(!(r0 != r3)) { _fun131553_ip = 36; continue _fun131553 }
case 19:
                r2 = _closure1_slot0;
                r1 = r2.push;
                r1 = r1.bind(r2)(r3);
case 36:
                r0 = undefined;
                return r0;
            }
        };
        r3 = r4.bind(r6)(r3);
        r3 = _closure0_slot1;
        r2 = r2[r6];
        r4 = r3.bind(r0)(r2);
        r3 = r4.track;
        r1 = _closure0_slot4;
        r2 = r1.LIBDISCORE_LOADED;
        r1 = {'success': true, 'experimental_features': null};
        r1[1] = r5;
        r1 = r3.bind(r4)(r2, r1);
        return r0;
    };
    var _closure0_slot8 = r4;
    r2 = function(a0) { // Original name: trackLibdiscoreFailure, environment: r8
        _fun78611: for(var _fun78611_ip = 0; ; ) switch(_fun78611_ip) {
case 0:
            r7 = a0;
            r6 = _closure0_slot5;
            r5 = r6.error;
            r4 = 'Failed to execute smoke test:';
            r4 = r5.bind(r6)(r4, r7);
            r4 = global;
            r5 = r4.Error;
            r2 = r7 instanceof r5;
            if(r2) { _fun78611_ip = 74; continue _fun78611 }
case 42:
            r9 = null;
            r2 = r9 != r7;
            r6 = 'Unknown error';
            if(!r2) { _fun78611_ip = 70; continue _fun78611 }
case 57:
            r5 = r4.String;
            r2 = undefined;
            r6 = r5.bind(r2)(r7);
case 70:
            r9 = null;
            _fun78611_ip = 84; continue _fun78611;
case 74:
            r6 = r7.message;
            r9 = r7.name;
case 84:
            r5 = r6.length;
            r0 = 1000;
            r8 = r6;
            if(!(r5 > r0)) { _fun78611_ip = 132; continue _fun78611 }
case 102:
            r5 = r6.substring;
            r1 = 997;
            r0 = 0;
            r6 = r5.bind(r6)(r0, r1);
            r5 = '...';
            r8 = r6 + r5;
case 132:
            r2 = null;
            r7 = r8;
            if(!(r2 != r9)) { _fun78611_ip = 169; continue _fun78611 }
case 141:
            r4 = r4.HermesInternal;
            r6 = r4.concat;
            r5 = ': ';
            r4 = '';
            r7 = r6.bind(r4)(r9, r5, r8);
case 169:
            r5 = _closure0_slot1;
            r4 = _closure0_slot2;
            r4 = r4[r6];
            r2 = undefined;
            r6 = r5.bind(r2)(r4);
            r5 = r6.track;
            r3 = _closure0_slot4;
            r4 = r3.LIBDISCORE_LOADED;
            r3 = {'success': false, 'error': null};
            r3[1] = r7;
            r3 = r5.bind(r6)(r4, r3);
            return r2;
        }
    };
    var _closure0_slot9 = r2;
    r9 = global;
    r13 = r9.Object;
    r12 = r13.defineProperty;
    r11 = '__esModule';
    r9 = {'value': true};
    r9 = r12.bind(r13)(r3, r11, r9);
    r9 = r6[r0];
    r0 = undefined;
    r9 = r10.bind(r0)(r9);
    var _closure0_slot3 = r9;
    r9 = r6[r1];
    r9 = r7.bind(r0)(r9);
    r9 = r9.AnalyticEvents;
    var _closure0_slot4 = r9;
    r9 = r6[r2];
    r11 = r10.bind(r0)(r9);
    r10 = Object.create(r11.prototype);
    r16 = 'libdiscore';
    r17 = r10;
    r9 = new r18[r11](r17, r16);
    r9 = r9 instanceof Object ? r9 : r10;
    var _closure0_slot5 = r9;
    r1 = false;
    var _closure0_slot6 = r1;
    r6 = r6[r7];
    r8 = r7.bind(r0)(r6);
    r7 = r8.fileFinishedImporting;
    r6 = 'modules/libdiscore/libDiscoreSmokeTest.tsx';
    r6 = r7.bind(r8)(r6);
    r3['default'] = r5;
    r3['libDiscoreSmokeTest'] = r5;
    r3['trackLibdiscoreSuccess'] = r4;
    r4 = function(a0) { // Original name: formatErrorMessage
        _fun78610: for(var _fun78610_ip = 0; ; ) switch(_fun78610_ip) {
case 0:
            r6 = a0;
            r4 = global;
            r3 = r4.Error;
            r2 = r6 instanceof r3;
            if(r2) { _fun78610_ip = 50; continue _fun78610 }
case 18:
            r8 = null;
            r2 = r8 != r6;
            r5 = 'Unknown error';
            if(!r2) { _fun78610_ip = 46; continue _fun78610 }
case 33:
            r3 = r4.String;
            r2 = undefined;
            r5 = r3.bind(r2)(r6);
case 46:
            r8 = null;
            _fun78610_ip = 60; continue _fun78610;
case 50:
            r5 = r6.message;
            r8 = r6.name;
case 60:
            r3 = r5.length;
            r0 = 1000;
            r7 = r5;
            if(!(r3 > r0)) { _fun78610_ip = 108; continue _fun78610 }
case 78:
            r3 = r5.substring;
            r1 = 997;
            r0 = 0;
            r5 = r3.bind(r5)(r0, r1);
            r3 = '...';
            r7 = r5 + r3;
case 108:
            r2 = null;
            r3 = r7;
            if(!(r2 != r8)) { _fun78610_ip = 145; continue _fun78610 }
case 117:
            r4 = r4.HermesInternal;
            r6 = r4.concat;
            r5 = ': ';
            r4 = '';
            r3 = r6.bind(r4)(r8, r5, r7);
case 145:
            return r3;
        }
    };
    r3['formatErrorMessage'] = r4;
    r3['trackLibdiscoreFailure'] = r2;
    return r0;
}

// ===== top-level #17792  fn#17753  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    r5 = a1;
    r7 = a2;
    var _closure0_slot0 = r7;
    r3 = a3;
    var _closure0_slot1 = r3;
    r3 = a5;
    r4 = a6;
    var _closure0_slot2 = r4;
    r6 = function(a0, a1, a2, a3) { // Original name: onTimersDelayCallback, environment: r2
        _fun78613: for(var _fun78613_ip = 0; ; ) switch(_fun78613_ip) {
case 0:
            r5 = _closure0_slot5;
            r4 = r5.push;
            r2 = {'timerId': null, 'expectedDelay': null, 'actualDelay': null, 'executionTime': null};
            r6 = a0;
            r2[0] = r6;
            r6 = a1;
            r2[1] = r6;
            r6 = a2;
            r2[2] = r6;
            r6 = a3;
            r2[3] = r6;
            r2 = r4.bind(r5)(r2);
            r2 = _closure0_slot5;
            r2 = r2.length;
            r0 = 10;
            if(!(!(r2 >= r0))) { _fun78613_ip = 86; continue _fun78613 }
case 71:
            r2 = _closure0_slot6;
            r1 = undefined;
            r2 = r2.bind(r1)();
            _fun78613_ip = 247; continue _fun78613;
case 86:
            r2 = _closure0_slot5;
            r2 = r2.length;
            r0 = 0;
            if(!(r0 !== r2)) { _fun78613_ip = 247; continue _fun78613 }
case 104:
            r6 = _closure0_slot4;
            r5 = r6.warn;
            r2 = _closure0_slot5;
            r9 = r2.length;
            r7 = global;
            r2 = r7.HermesInternal;
            r8 = r2.concat;
            r4 = ' delay logs';
            r2 = '[libdiscore.timers] Flushing ';
            r4 = r8.bind(r2)(r9, r4);
            r2 = _closure0_slot5;
            r2 = r5.bind(r6)(r4, r2);
            r4 = _closure0_slot0;
            r2 = _closure0_slot2;
            r2 = r2[r2];
            r1 = undefined;
            r6 = r4.bind(r1)(r2);
            r5 = r6.track;
            r2 = _closure0_slot3;
            r4 = r2.LIBDISCORE_SLOW_TIMERS;
            r2 = {'delay_reports': null};
            r9 = r7.JSON;
            r8 = r9.stringify;
            r7 = _closure0_slot5;
            r7 = r8.bind(r9)(r7);
            r2[0] = r7;
            r2 = r5.bind(r6)(r4, r2);
            r2 = new Array(0);
            _closure0_slot5 = r2;
case 247:
            r1 = undefined;
            return r1;
        }
    };
    var _closure0_slot7 = r6;
    r6 = global;
    r10 = r6.Object;
    r9 = r10.defineProperty;
    r8 = '__esModule';
    r6 = {'value': true};
    r6 = r9.bind(r10)(r3, r8, r6);
    r6 = r4[r0];
    r1 = undefined;
    r6 = r5.bind(r1)(r6);
    r6 = r6.AnalyticEvents;
    var _closure0_slot3 = r6;
    r6 = r4[r1];
    r9 = r7.bind(r1)(r6);
    r8 = Object.create(r9.prototype);
    r13 = 'libdiscore.timers';
    r14 = r8;
    r6 = new r15[r9](r14, r13);
    r6 = r6 instanceof Object ? r6 : r8;
    var _closure0_slot4 = r6;
    r6 = new Array(0);
    var _closure0_slot5 = r6;
    r6 = r4[r3];
    r7 = r7.bind(r1)(r6);
    r0 = 5000;
    r6 = function() { // Original name: flushDelayLogs, environment: r2
        _fun78612: for(var _fun78612_ip = 0; ; ) switch(_fun78612_ip) {
case 0:
            r2 = _closure0_slot5;
            r2 = r2.length;
            r0 = 0;
            if(!(r0 !== r2)) { _fun78612_ip = 164; continue _fun78612 }
case 21:
            r6 = _closure0_slot4;
            r5 = r6.warn;
            r2 = _closure0_slot5;
            r9 = r2.length;
            r7 = global;
            r2 = r7.HermesInternal;
            r8 = r2.concat;
            r4 = ' delay logs';
            r2 = '[libdiscore.timers] Flushing ';
            r4 = r8.bind(r2)(r9, r4);
            r2 = _closure0_slot5;
            r2 = r5.bind(r6)(r4, r2);
            r4 = _closure0_slot0;
            r2 = _closure0_slot2;
            r2 = r2[r2];
            r1 = undefined;
            r6 = r4.bind(r1)(r2);
            r5 = r6.track;
            r2 = _closure0_slot3;
            r4 = r2.LIBDISCORE_SLOW_TIMERS;
            r2 = {'delay_reports': null};
            r9 = r7.JSON;
            r8 = r9.stringify;
            r7 = _closure0_slot5;
            r7 = r8.bind(r9)(r7);
            r2[0] = r7;
            r2 = r5.bind(r6)(r4, r2);
            r2 = new Array(0);
            _closure0_slot5 = r2;
case 164:
            r1 = undefined;
            return r1;
        }
    };
    r6 = r7.bind(r1)(r6, r0);
    var _closure0_slot6 = r6;
    r4 = r4[r5];
    r6 = r5.bind(r1)(r4);
    r5 = r6.fileFinishedImporting;
    r4 = 'modules/libdiscore/timerUtils.tsx';
    r4 = r5.bind(r6)(r4);
    r2 = function() { // Original name: setupLibdiscoreTimersMonitor, environment: r2
        r3 = _closure0_slot1;
        r2 = _closure0_slot2;
        r2 = r2[r4];
        r0 = undefined;
        r3 = r3.bind(r0)(r2);
        r2 = r3.setTimersMonitorCallback;
        r1 = _closure0_slot7;
        r1 = r2.bind(r3)(r1);
        return r0;
    };
    r3['setupLibdiscoreTimersMonitor'] = r2;
    return r1;
}

// ===== top-level #17793  fn#17754  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    r4 = a1;
    r2 = a5;
    r3 = a6;
    r5 = global;
    r8 = r5.Object;
    r7 = r8.defineProperty;
    r6 = '__esModule';
    r5 = {'value': true};
    r5 = r7.bind(r8)(r2, r6, r5);
    r5 = r3[r0];
    r0 = undefined;
    r5 = r4.bind(r0)(r5);
    r5 = r5.NativeModules;
    r5 = r5.CrashReportingManager;
    var _closure0_slot0 = r5;
    r3 = r3[r1];
    r5 = r4.bind(r0)(r3);
    r4 = r5.fileFinishedImporting;
    r3 = 'modules/debug/native/AppCrashedFatalReport.android.tsx';
    r3 = r4.bind(r5)(r3);
    r1 = function() { // Original name: init, environment: r1
        r2 = _closure0_slot0;
        r1 = r2.initializeManager;
        r1 = r1.bind(r2)();
        r0 = undefined;
        return r0;
    };
    r2['init'] = r1;
    return r0;
}

// ===== top-level #17794  fn#17755  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    _fun17755: for(var _fun17755_ip = 0; ; ) switch(_fun17755_ip) {
case 0:
        r4 = a1;
        var _closure0_slot0 = r4;
        r6 = a2;
        var _closure0_slot1 = r6;
        r2 = a5;
        r3 = a6;
        var _closure0_slot2 = r3;
        r1 = global;
        r9 = r1.Object;
        r8 = r9.defineProperty;
        r7 = '__esModule';
        r1 = {'value': true};
        r1 = r8.bind(r9)(r2, r7, r1);
        r1 = r3[r0];
        r0 = undefined;
        r1 = r6.bind(r0)(r1);
        var _closure0_slot3 = r1;
        r7 = r3[r1];
        r1 = a3;
        r1 = r1.bind(r0)(r7);
        var _closure0_slot4 = r1;
        r1 = r3[r2];
        r1 = r4.bind(r0)(r1);
        r7 = r1.BackHandler;
        var _closure0_slot5 = r7;
        r1 = r1.NativeModules;
        var _closure0_slot6 = r1;
        r1 = r3[r3];
        r1 = r4.bind(r0)(r1);
        r1 = r3[r4];
        r1 = r4.bind(r0)(r1);
        r1 = r3[r5];
        r1 = r6.bind(r0)(r1);
        var _closure0_slot7 = r1;
        r1 = r3[r6];
        r1 = r4.bind(r0)(r1);
        r1 = r1.AnalyticEvents;
        var _closure0_slot8 = r1;
        r1 = r3[r7];
        r1 = r4.bind(r0)(r1);
        r1 = r1.MultiAccountSwitchLocation;
        var _closure0_slot9 = r1;
        r1 = r3[r8];
        r1 = r4.bind(r0)(r1);
        r6 = r1.jsx;
        var _closure0_slot10 = r6;
        r1 = r1.jsxs;
        var _closure0_slot11 = r1;
        r1 = r3[r9];
        r6 = r4.bind(r0)(r1);
        r1 = r6.isReactCompilerEnabled;
        r1 = r1.bind(r6)();
        if(r1) { _fun17755_ip = 247; continue _fun17755 }
case 238:
        r1 = function() { // Environment: r5
            r4 = _closure0_slot0;
            r3 = _closure0_slot2;
            r3 = r3[r11];
            r0 = undefined;
            r6 = r4.bind(r0)(r3);
            r5 = r6.useStateFromStores;
            r3 = _closure0_slot7;
            r4 = new Array(1);
            r4[0] = r3;
            r3 = function() { // Environment: r2
                r1 = _closure0_slot7;
                r0 = r1.isAuthenticated;
                r0 = r0.bind(r1)();
                return r0;
            };
            r5 = r5.bind(r6)(r4, r3);
            var _closure1_slot0 = r5;
            r4 = _closure0_slot4;
            r3 = r4.useEffect;
            r2 = new Array(1);
            r2[0] = r5;
            r1 = function() { // Environment: r1
                _fun131557: for(var _fun131557_ip = 0; ; ) switch(_fun131557_ip) {
case 0:
                    r1 = _closure1_slot0;
                    if(!r1) { _fun131557_ip = 103; continue _fun131557 }
case 10:
                    r4 = _closure0_slot1;
                    r2 = _closure0_slot2;
                    r3 = r2[r12];
                    r0 = undefined;
                    r5 = r4.bind(r0)(r3);
                    r4 = r5.startSession;
                    r6 = _closure0_slot7;
                    r3 = r6.getToken;
                    r3 = r3.bind(r6)();
                    r3 = r4.bind(r5)(r3);
                    r3 = _closure0_slot0;
                    r2 = r2[r13];
                    r3 = r3.bind(r0)(r2);
                    r2 = r3.isAndroid;
                    r2 = r2.bind(r3)();
                    if(!r2) { _fun131557_ip = 103; continue _fun131557 }
case 83:
                    r1 = _closure0_slot6;
                    r2 = r1.NativePermissionManager;
                    r1 = r2.requestNotificationAuthorization;
                    r1 = r1.bind(r2)();
case 103:
                    r0 = undefined;
                    return r0;
                }
            };
            r1 = r3.bind(r4)(r1, r2);
            return r0;
        };
        _fun17755_ip = 254; continue _fun17755;
case 247:
        r1 = function() { // Environment: r5
            _fun78616: for(var _fun78616_ip = 0; ; ) switch(_fun78616_ip) {
case 0:
                r5 = _closure0_slot0;
                r4 = _closure0_slot2;
                r3 = r4[r10];
                r1 = undefined;
                r6 = r5.bind(r1)(r3);
                r3 = r6.c;
                r0 = 5;
                r7 = r3.bind(r6)(r0);
                r6 = r7[r0];
                r3 = global;
                r9 = r3.Symbol;
                r8 = r9.for;
                r3 = 'react.memo_cache_sentinel';
                r3 = r8.bind(r9)(r3);
                if(!(r6 !== r3)) { _fun78616_ip = 77; continue _fun78616 }
case 67:
                r8 = r7[r0];
                r6 = r7[r1];
                _fun78616_ip = 115; continue _fun78616;
case 77:
                r9 = _closure0_slot7;
                r3 = new Array(1);
                r3[0] = r9;
                r9 = function() { // Original name: s, environment: r2
                    r1 = _closure0_slot7;
                    r0 = r1.isAuthenticated;
                    r0 = r0.bind(r1)();
                    return r0;
                };
                r0 = 0;
                r7[r0] = r3;
                r0 = 1;
                r7[r0] = r9;
                r6 = r9;
                r8 = r3;
case 115:
                r4 = r4[r11];
                r5 = r5.bind(r1)(r4);
                r4 = r5.useStateFromStores;
                r8 = r4.bind(r5)(r8, r6);
                var _closure1_slot0 = r8;
                r4 = r7[r2];
                if(!(r4 === r8)) { _fun78616_ip = 160; continue _fun78616 }
case 150:
                r5 = r7[r3];
                r4 = r7[r4];
                _fun78616_ip = 202; continue _fun78616;
case 160:
                r3 = function() { // Original name: u, environment: r3
                    _fun131555: for(var _fun131555_ip = 0; ; ) switch(_fun131555_ip) {
case 0:
                        r1 = _closure1_slot0;
                        if(!r1) { _fun131555_ip = 103; continue _fun131555 }
case 10:
                        r4 = _closure0_slot1;
                        r2 = _closure0_slot2;
                        r3 = r2[r12];
                        r0 = undefined;
                        r5 = r4.bind(r0)(r3);
                        r4 = r5.startSession;
                        r6 = _closure0_slot7;
                        r3 = r6.getToken;
                        r3 = r3.bind(r6)();
                        r3 = r4.bind(r5)(r3);
                        r3 = _closure0_slot0;
                        r2 = r2[r13];
                        r3 = r3.bind(r0)(r2);
                        r2 = r3.isAndroid;
                        r2 = r2.bind(r3)();
                        if(!r2) { _fun131555_ip = 103; continue _fun131555 }
case 83:
                        r1 = _closure0_slot6;
                        r2 = r1.NativePermissionManager;
                        r1 = r2.requestNotificationAuthorization;
                        r1 = r1.bind(r2)();
case 103:
                        r0 = undefined;
                        return r0;
                    }
                };
                r6 = new Array(1);
                r6[0] = r8;
                r0 = 2;
                r7[r0] = r8;
                r0 = 3;
                r7[r0] = r3;
                r0 = 4;
                r7[r0] = r6;
                r4 = r6;
                r5 = r3;
case 202:
                r3 = _closure0_slot4;
                r2 = r3.useEffect;
                r2 = r2.bind(r3)(r5, r4);
                return r1;
            }
        };
case 254:
        var _closure0_slot12 = r1;
        r1 = r3[r9];
        r6 = r4.bind(r0)(r1);
        r1 = r6.isReactCompilerEnabled;
        r1 = r1.bind(r6)();
        if(r1) { _fun17755_ip = 288; continue _fun17755 }
case 279:
        r1 = function(a0) { // Environment: r5
            _fun78619: for(var _fun78619_ip = 0; ; ) switch(_fun78619_ip) {
case 0:
                r4 = a0;
                r10 = r4.targetUserId;
                var _closure1_slot0 = r10;
                r2 = undefined;
                var _closure1_slot1 = r2;
                var _closure1_slot2 = r2;
                var _closure1_slot3 = r2;
                r9 = _closure0_slot4;
                r4 = r9.useState;
                r1 = false;
                r4 = r4.bind(r9)(r1);
                r7 = _closure0_slot3;
                r0 = 2;
                r5 = r7.bind(r2)(r4, r0);
                r4 = r5[r0];
                _closure1_slot1 = r4;
                r5 = r5[r1];
                _closure1_slot2 = r5;
                r5 = r9.useState;
                r1 = null;
                r1 = r1 == r10;
                if(r1) { _fun78619_ip = 110; continue _fun78619 }
case 92:
                r11 = _closure0_slot7;
                r8 = r11.getId;
                r8 = r8.bind(r11)();
                r1 = r8 === r10;
case 110:
                r5 = r5.bind(r9)(r1);
                r7 = r7.bind(r2)(r5, r0);
                r5 = r7[r0];
                r7 = r7[r1];
                _closure1_slot3 = r7;
                r11 = r9.useEffect;
                r8 = new Array(1);
                r8[0] = r4;
                r7 = function() { // Environment: r6
                    _fun131560: for(var _fun131560_ip = 0; ; ) switch(_fun131560_ip) {
case 0:
                        r3 = _closure1_slot1;
                        if(r3) { _fun131560_ip = 53; continue _fun131560 }
case 10:
                        r4 = _closure0_slot1;
                        r3 = _closure0_slot2;
                        r3 = r3[r14];
                        r0 = undefined;
                        r4 = r4.bind(r0)(r3);
                        r3 = r4.init;
                        r3 = r3.bind(r4)();
                        r2 = _closure1_slot2;
                        r1 = true;
                        r2 = r2.bind(r0)(r1);
case 53:
                        r1 = undefined;
                        return r1;
                    }
                };
                r7 = r11.bind(r9)(r7, r8);
                r8 = r9.useEffect;
                r7 = new Array(1);
                r7[0] = r10;
                r6 = function() { // Environment: r6
                    _fun131561: for(var _fun131561_ip = 0; ; ) switch(_fun131561_ip) {
case 0:
                        r5 = _closure1_slot0;
                        r1 = null;
                        r1 = r1 != r5;
                        if(!r1) { _fun131561_ip = 37; continue _fun131561 }
case 16:
                        r6 = _closure0_slot7;
                        r4 = r6.getId;
                        r4 = r4.bind(r6)();
                        r1 = r4 !== r5;
case 37:
                        if(!r1) { _fun131561_ip = 66; continue _fun131561 }
case 40:
                        r4 = global;
                        r4 = r4.setTimeout;
                        r0 = 18;
                        r1 = undefined;
                        r3 = function() { // Environment: r3
                            r5 = _closure0_slot0;
                            r4 = _closure0_slot2;
                            r4 = r4[r15];
                            r1 = undefined;
                            r6 = r5.bind(r1)(r4);
                            r5 = r6.switchAccount;
                            r4 = _closure1_slot0;
                            r3 = _closure0_slot9;
                            r3 = r3.SHARE_EXTENSION;
                            r0 = false;
                            r4 = r5.bind(r6)(r4, r0, r3);
                            r3 = r4.then;
                            r2 = function() { // Environment: r2
                                r2 = _closure1_slot3;
                                r0 = true;
                                r1 = undefined;
                                r2 = r2.bind(r1)(r0);
                                return r1;
                            };
                            r2 = r3.bind(r4)(r2);
                            return r1;
                        };
                        r3 = r4.bind(r1)(r3, r0);
case 66:
                        r1 = undefined;
                        return r1;
                    }
                };
                r6 = r8.bind(r9)(r6, r7);
                if(!r4) { _fun78619_ip = 191; continue _fun78619 }
case 188:
                r4 = r5;
case 191:
                return r4;
            }
        };
        _fun17755_ip = 295; continue _fun17755;
case 288:
        r1 = function(a0) { // Environment: r5
            _fun78618: for(var _fun78618_ip = 0; ; ) switch(_fun78618_ip) {
case 0:
                r8 = _closure0_slot0;
                r5 = _closure0_slot2;
                r5 = r5[r10];
                r3 = undefined;
                r8 = r8.bind(r3)(r5);
                r5 = r8.c;
                r0 = 8;
                r12 = r5.bind(r8)(r0);
                r5 = a0;
                r13 = r5.targetUserId;
                var _closure1_slot0 = r13;
                r10 = _closure0_slot4;
                r5 = r10.useState;
                r2 = false;
                r5 = r5.bind(r10)(r2);
                r8 = _closure0_slot3;
                r0 = 2;
                r9 = r8.bind(r3)(r5, r0);
                r5 = r9[r0];
                var _closure1_slot1 = r5;
                r9 = r9[r1];
                var _closure1_slot2 = r9;
                r9 = r12[r0];
                if(!(r9 === r13)) { _fun78618_ip = 110; continue _fun78618 }
case 104:
                r9 = r12[r1];
                _fun78618_ip = 153; continue _fun78618;
case 110:
                r2 = null;
                r2 = r2 == r13;
                if(r2) { _fun78618_ip = 137; continue _fun78618 }
case 119:
                r11 = _closure0_slot7;
                r6 = r11.getId;
                r6 = r6.bind(r11)();
                r2 = r6 === r13;
case 137:
                r1 = 0;
                r12[r1] = r13;
                r1 = 1;
                r12[r1] = r2;
                r9 = r2;
case 153:
                r6 = r10.useState;
                r6 = r6.bind(r10)(r9);
                r8 = r8.bind(r3)(r6, r0);
                r6 = r8[r0];
                r8 = r8[r1];
                var _closure1_slot3 = r8;
                r8 = r12[r2];
                if(!(r8 === r5)) { _fun78618_ip = 199; continue _fun78618 }
case 189:
                r11 = r12[r3];
                r9 = r12[r4];
                _fun78618_ip = 238; continue _fun78618;
case 199:
                r8 = function() { // Original name: A, environment: r7
                    _fun131558: for(var _fun131558_ip = 0; ; ) switch(_fun131558_ip) {
case 0:
                        r3 = _closure1_slot1;
                        if(r3) { _fun131558_ip = 53; continue _fun131558 }
case 10:
                        r4 = _closure0_slot1;
                        r3 = _closure0_slot2;
                        r3 = r3[r14];
                        r0 = undefined;
                        r4 = r4.bind(r0)(r3);
                        r3 = r4.init;
                        r3 = r3.bind(r4)();
                        r2 = _closure1_slot2;
                        r1 = true;
                        r2 = r2.bind(r0)(r1);
case 53:
                        r1 = undefined;
                        return r1;
                    }
                };
                r14 = new Array(1);
                r14[0] = r5;
                r12[r0] = r5;
                r0 = 3;
                r12[r0] = r8;
                r0 = 4;
                r12[r0] = r14;
                r9 = r14;
                r11 = r8;
case 238:
                r8 = r10.useEffect;
                r8 = r8.bind(r10)(r11, r9);
                r8 = r12[r5];
                if(!(r8 === r13)) { _fun78618_ip = 267; continue _fun78618 }
case 257:
                r9 = r12[r6];
                r8 = r12[r7];
                _fun78618_ip = 309; continue _fun78618;
case 267:
                r7 = function() { // Original name: _, environment: r7
                    _fun131559: for(var _fun131559_ip = 0; ; ) switch(_fun131559_ip) {
case 0:
                        r5 = _closure1_slot0;
                        r1 = null;
                        r1 = r1 != r5;
                        if(!r1) { _fun131559_ip = 37; continue _fun131559 }
case 16:
                        r6 = _closure0_slot7;
                        r4 = r6.getId;
                        r4 = r4.bind(r6)();
                        r1 = r4 !== r5;
case 37:
                        if(!r1) { _fun131559_ip = 66; continue _fun131559 }
case 40:
                        r4 = global;
                        r4 = r4.setTimeout;
                        r0 = 18;
                        r1 = undefined;
                        r3 = function() { // Environment: r3
                            r5 = _closure0_slot0;
                            r4 = _closure0_slot2;
                            r4 = r4[r15];
                            r1 = undefined;
                            r6 = r5.bind(r1)(r4);
                            r5 = r6.switchAccount;
                            r4 = _closure1_slot0;
                            r3 = _closure0_slot9;
                            r3 = r3.SHARE_EXTENSION;
                            r0 = false;
                            r4 = r5.bind(r6)(r4, r0, r3);
                            r3 = r4.then;
                            r2 = function() { // Environment: r2
                                r2 = _closure1_slot3;
                                r0 = true;
                                r1 = undefined;
                                r2 = r2.bind(r1)(r0);
                                return r1;
                            };
                            r2 = r3.bind(r4)(r2);
                            return r1;
                        };
                        r3 = r4.bind(r1)(r3, r0);
case 66:
                        r1 = undefined;
                        return r1;
                    }
                };
                r11 = new Array(1);
                r11[0] = r13;
                r0 = 5;
                r12[r0] = r13;
                r0 = 6;
                r12[r0] = r7;
                r0 = 7;
                r12[r0] = r11;
                r8 = r11;
                r9 = r7;
case 309:
                r7 = r10.useEffect;
                r7 = r7.bind(r10)(r9, r8);
                if(!r5) { _fun78618_ip = 326; continue _fun78618 }
case 323:
                r5 = r6;
case 326:
                return r5;
            }
        };
case 295:
        var _closure0_slot13 = r1;
        r1 = 'share';
        var _closure0_slot14 = r1;
        r1 = r3[r9];
        r6 = r4.bind(r0)(r1);
        r1 = r6.isReactCompilerEnabled;
        r1 = r1.bind(r6)();
        if(r1) { _fun17755_ip = 337; continue _fun17755 }
case 328:
        r1 = function(a0) { // Environment: r5
            _fun78621: for(var _fun78621_ip = 0; ; ) switch(_fun78621_ip) {
case 0:
                r12 = a0;
                var _closure1_slot0 = r12;
                r2 = _closure0_slot13;
                r0 = undefined;
                r4 = r2.bind(r0)(r12);
                r2 = _closure0_slot12;
                r2 = r2.bind(r0)();
                r6 = _closure0_slot4;
                r5 = r6.useEffect;
                r2 = r12.attachments;
                r2 = r2.length;
                r3 = new Array(2);
                r3[0] = r2;
                r2 = r12.text;
                r3[1] = r2;
                r2 = function() { // Environment: r1
                    _fun131564: for(var _fun131564_ip = 0; ; ) switch(_fun131564_ip) {
case 0:
                        r6 = _closure0_slot1;
                        r5 = _closure0_slot2;
                        r5 = r5[r17];
                        r2 = undefined;
                        r7 = r6.bind(r2)(r5);
                        r6 = r7.track;
                        r4 = _closure0_slot8;
                        r5 = r4.EXTERNAL_SHARE_OPENED;
                        r8 = _closure1_slot0;
                        r4 = r8.text;
                        r1 = null;
                        r1 = r1 != r4;
                        if(!r1) { _fun131564_ip = 74; continue _fun131564 }
case 58:
                        r4 = r8.text;
                        r4 = r4.length;
                        r0 = 0;
                        r1 = r4 > r0;
case 74:
                        r4 = {'has_content': null, 'has_attachment': null};
                        r4[0] = r1;
                        r8 = r8.attachments;
                        r8 = r8.length;
                        r0 = 0;
                        r1 = r8 > r0;
                        r4[1] = r1;
                        r4 = r6.bind(r7)(r5, r4);
                        return r2;
                    }
                };
                r2 = r5.bind(r6)(r2, r3);
                r9 = _closure0_slot1;
                r5 = _closure0_slot2;
                r2 = r5[r18];
                r2 = r9.bind(r0)(r2);
                r1 = function() { // Environment: r1
                    r1 = _closure1_slot0;
                    r3 = r1.attachments;
                    r5 = r3.length;
                    r4 = r1.attachments;
                    r3 = r4.map;
                    r0 = undefined;
                    r1 = function(a0) {
                        _fun147744: for(var _fun147744_ip = 0; ; ) switch(_fun147744_ip) {
case 0:
                            r1 = a0;
                            r1 = r1.mimeType;
                            r0 = null;
                            if(!(r1 == r0)) { _fun147744_ip = 19; continue _fun147744 }
case 15:
                            r1 = 'unknown';
case 19:
                            return r1;
                        }
                    };
                    r1 = r3.bind(r4)(r1);
                    r3 = _closure0_slot0;
                    r2 = _closure0_slot2;
                    r2 = r2[r16];
                    r4 = r3.bind(r0)(r2);
                    r3 = r4.trackAppUIViewed;
                    r2 = {'share_num_attachments': null, 'share_attachment_mimetypes': null};
                    r2[0] = r5;
                    r2[1] = r1;
                    r1 = 'share';
                    r1 = r3.bind(r4)(r1, r2);
                    return r0;
                };
                r1 = r2.bind(r0)(r1);
                r3 = _closure0_slot11;
                r1 = r5[r26];
                r2 = r9.bind(r0)(r1);
                r1 = {'appEntryKey': null, 'children': null};
                r11 = _closure0_slot14;
                r1[0] = r11;
                r10 = _closure0_slot10;
                if(r4) { _fun78621_ip = 181; continue _fun78621 }
case 149:
                r6 = _closure0_slot0;
                r4 = r5[r22];
                r4 = r6.bind(r0)(r4);
                r7 = r4.SceneLoadingIndicator;
                r4 = {};
                r8 = r10.bind(r0)(r7, r4);
                r7 = r10;
                _fun78621_ip = 277; continue _fun78621;
case 181:
                r4 = r5[r19];
                r13 = r9.bind(r0)(r4);
                r4 = {'appEntryKey': null, 'sharedContent': null, 'onClose': null};
                r4[0] = r11;
                r4[1] = r12;
                r12 = _closure0_slot0;
                r15 = r5[r20];
                r16 = r12.bind(r0)(r15);
                r15 = r16.isMetaQuest;
                r15 = r15.bind(r16)();
                if(r15) { _fun78621_ip = 246; continue _fun78621 }
case 234:
                r14 = _closure0_slot5;
                r14 = r14.exitApp;
                _fun78621_ip = 261; continue _fun78621;
case 246:
                r15 = r5[r21];
                r15 = r9.bind(r0)(r15);
                r14 = r15.close;
case 261:
                r4[2] = r14;
                r8 = r10.bind(r0)(r13, r4);
                r6 = r12;
                r7 = r10;
case 277:
                r4 = new Array(4);
                r4[0] = r8;
                r8 = r5[r23];
                r8 = r6.bind(r0)(r8);
                r10 = r8.ActionSheetContainer;
                r8 = {'appEntryKey': null};
                r8[0] = r11;
                r8 = r7.bind(r0)(r10, r8);
                r4[1] = r8;
                r8 = r5[r24];
                r9 = r9.bind(r0)(r8);
                r8 = {};
                r8 = r7.bind(r0)(r9, r8);
                r4[2] = r8;
                r5 = r5[r25];
                r5 = r6.bind(r0)(r5);
                r6 = r5.AlertModalContainer;
                r5 = {};
                r5 = r7.bind(r0)(r6, r5);
                r4[3] = r5;
                r1[1] = r4;
                r1 = r3.bind(r0)(r2, r1);
                return r1;
            }
        };
        _fun17755_ip = 344; continue _fun17755;
case 337:
        r1 = function(a0) { // Environment: r5
            _fun78620: for(var _fun78620_ip = 0; ; ) switch(_fun78620_ip) {
case 0:
                r7 = a0;
                var _closure1_slot0 = r7;
                r13 = _closure0_slot0;
                r3 = _closure0_slot2;
                r4 = r3[r10];
                r1 = undefined;
                r5 = r13.bind(r1)(r4);
                r4 = r5.c;
                r0 = 14;
                r4 = r4.bind(r5)(r0);
                r5 = _closure0_slot13;
                r9 = r5.bind(r1)(r7);
                r5 = _closure0_slot12;
                r5 = r5.bind(r1)();
                r6 = r4[r0];
                r5 = r7.attachments;
                r5 = r5.length;
                if(!(r6 === r5)) { _fun78620_ip = 104; continue _fun78620 }
case 81:
                r6 = r4[r1];
                r5 = r7.text;
                if(!(r6 === r5)) { _fun78620_ip = 104; continue _fun78620 }
case 94:
                r11 = r4[r2];
                r10 = r4[r3];
                _fun78620_ip = 188; continue _fun78620;
case 104:
                r5 = function() { // Original name: s, environment: r2
                    _fun131562: for(var _fun131562_ip = 0; ; ) switch(_fun131562_ip) {
case 0:
                        r6 = _closure0_slot1;
                        r5 = _closure0_slot2;
                        r5 = r5[r17];
                        r2 = undefined;
                        r7 = r6.bind(r2)(r5);
                        r6 = r7.track;
                        r4 = _closure0_slot8;
                        r5 = r4.EXTERNAL_SHARE_OPENED;
                        r8 = _closure1_slot0;
                        r4 = r8.text;
                        r1 = null;
                        r1 = r1 != r4;
                        if(!r1) { _fun131562_ip = 74; continue _fun131562 }
case 58:
                        r4 = r8.text;
                        r4 = r4.length;
                        r0 = 0;
                        r1 = r4 > r0;
case 74:
                        r4 = {'has_content': null, 'has_attachment': null};
                        r4[0] = r1;
                        r8 = r8.attachments;
                        r8 = r8.length;
                        r0 = 0;
                        r1 = r8 > r0;
                        r4[1] = r1;
                        r4 = r6.bind(r7)(r5, r4);
                        return r2;
                    }
                };
                r6 = r7.attachments;
                r12 = r6.length;
                r6 = new Array(2);
                r6[0] = r12;
                r12 = r7.text;
                r6[1] = r12;
                r12 = r7.attachments;
                r12 = r12.length;
                r0 = 0;
                r4[r0] = r12;
                r12 = r7.text;
                r0 = 1;
                r4[r0] = r12;
                r0 = 2;
                r4[r0] = r5;
                r0 = 3;
                r4[r0] = r6;
                r10 = r6;
                r11 = r5;
case 188:
                r6 = _closure0_slot4;
                r5 = r6.useEffect;
                r5 = r5.bind(r6)(r11, r10);
                r6 = r4[r4];
                r5 = r7.attachments;
                if(!(r6 === r5)) { _fun78620_ip = 223; continue _fun78620 }
case 217:
                r5 = r4[r5];
                _fun78620_ip = 253; continue _fun78620;
case 223:
                r2 = function() { // Original name: h, environment: r2
                    r1 = _closure1_slot0;
                    r3 = r1.attachments;
                    r5 = r3.length;
                    r4 = r1.attachments;
                    r3 = r4.map;
                    r0 = undefined;
                    r1 = function(a0) {
                        _fun147743: for(var _fun147743_ip = 0; ; ) switch(_fun147743_ip) {
case 0:
                            r1 = a0;
                            r1 = r1.mimeType;
                            r0 = null;
                            if(!(r1 == r0)) { _fun147743_ip = 19; continue _fun147743 }
case 15:
                            r1 = 'unknown';
case 19:
                            return r1;
                        }
                    };
                    r1 = r3.bind(r4)(r1);
                    r3 = _closure0_slot0;
                    r2 = _closure0_slot2;
                    r2 = r2[r16];
                    r4 = r3.bind(r0)(r2);
                    r3 = r4.trackAppUIViewed;
                    r2 = {'share_num_attachments': null, 'share_attachment_mimetypes': null};
                    r2[0] = r5;
                    r2[1] = r1;
                    r1 = 'share';
                    r1 = r3.bind(r4)(r1, r2);
                    return r0;
                };
                r6 = r7.attachments;
                r0 = 4;
                r4[r0] = r6;
                r0 = 5;
                r4[r0] = r2;
                r5 = r2;
case 253:
                r6 = _closure0_slot1;
                r2 = r3[r18];
                r2 = r6.bind(r1)(r2);
                r2 = r2.bind(r1)(r5);
                r2 = r4[r6];
                if(!(r2 === r9)) { _fun78620_ip = 296; continue _fun78620 }
case 279:
                r2 = r4[r7];
                if(!(r2 === r7)) { _fun78620_ip = 296; continue _fun78620 }
case 287:
                r5 = r4[r8];
                _fun78620_ip = 442; continue _fun78620;
case 296:
                r12 = _closure0_slot10;
                if(r9) { _fun78620_ip = 328; continue _fun78620 }
case 303:
                r2 = r3[r22];
                r2 = r13.bind(r1)(r2);
                r10 = r2.SceneLoadingIndicator;
                r2 = {};
                r2 = r12.bind(r1)(r10, r2);
                _fun78620_ip = 418; continue _fun78620;
case 328:
                r10 = r3[r19];
                r11 = r6.bind(r1)(r10);
                r10 = {'appEntryKey': null, 'sharedContent': null, 'onClose': null};
                r14 = _closure0_slot14;
                r10[0] = r14;
                r10[1] = r7;
                r14 = r3[r20];
                r15 = r13.bind(r1)(r14);
                r14 = r15.isMetaQuest;
                r14 = r14.bind(r15)();
                if(r14) { _fun78620_ip = 393; continue _fun78620 }
case 381:
                r14 = _closure0_slot5;
                r14 = r14.exitApp;
                _fun78620_ip = 408; continue _fun78620;
case 393:
                r15 = r3[r21];
                r15 = r6.bind(r1)(r15);
                r14 = r15.close;
case 408:
                r10[2] = r14;
                r2 = r12.bind(r1)(r11, r10);
case 418:
                r0 = 6;
                r4[r0] = r9;
                r0 = 7;
                r4[r0] = r7;
                r0 = 8;
                r4[r0] = r2;
                r5 = r2;
case 442:
                r7 = r4[r9];
                r2 = global;
                r10 = r2.Symbol;
                r9 = r10.for;
                r2 = 'react.memo_cache_sentinel';
                r2 = r9.bind(r10)(r2);
                if(!(r7 !== r2)) { _fun78620_ip = 488; continue _fun78620 }
case 474:
                r11 = r4[r9];
                r10 = r4[r10];
                r9 = r4[r11];
                _fun78620_ip = 601; continue _fun78620;
case 488:
                r14 = _closure0_slot10;
                r2 = r3[r23];
                r2 = r13.bind(r1)(r2);
                r7 = r2.ActionSheetContainer;
                r2 = {'appEntryKey': null};
                r12 = _closure0_slot14;
                r2[0] = r12;
                r2 = r14.bind(r1)(r7, r2);
                r7 = r3[r24];
                r12 = r6.bind(r1)(r7);
                r7 = {};
                r7 = r14.bind(r1)(r12, r7);
                r12 = r3[r25];
                r12 = r13.bind(r1)(r12);
                r13 = r12.AlertModalContainer;
                r12 = {};
                r12 = r14.bind(r1)(r13, r12);
                r0 = 9;
                r4[r0] = r2;
                r0 = 10;
                r4[r0] = r7;
                r0 = 11;
                r4[r0] = r12;
                r9 = r12;
                r10 = r7;
                r11 = r2;
case 601:
                r2 = r4[r12];
                if(!(r2 === r5)) { _fun78620_ip = 615; continue _fun78620 }
case 609:
                r2 = r4[r13];
                _fun78620_ip = 693; continue _fun78620;
case 615:
                r7 = _closure0_slot11;
                r3 = r3[r26];
                r6 = r6.bind(r1)(r3);
                r3 = {'appEntryKey': null, 'children': null};
                r8 = _closure0_slot14;
                r3[0] = r8;
                r8 = new Array(4);
                r8[0] = r5;
                r8[1] = r11;
                r8[2] = r10;
                r8[3] = r9;
                r3[1] = r8;
                r3 = r7.bind(r1)(r6, r3);
                r0 = 12;
                r4[r0] = r5;
                r0 = 13;
                r4[r0] = r3;
                r2 = r3;
case 693:
                return r2;
            }
        };
case 344:
        r3 = r3[r27];
        r5 = r4.bind(r0)(r3);
        r4 = r5.fileFinishedImporting;
        r3 = 'modules/share/native/AppShare.tsx';
        r3 = r4.bind(r5)(r3);
        r2['default'] = r1;
        return r0;
    }
}

// ===== top-level #17795  fn#17756  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    r4 = a1;
    var _closure0_slot0 = r4;
    r6 = a2;
    var _closure0_slot1 = r6;
    r2 = a3;
    var _closure0_slot2 = r2;
    r2 = a5;
    r3 = a6;
    var _closure0_slot3 = r3;
    r5 = function() { // Original name: _executeHeadlessTask, environment: r1
        _fun78622: for(var _fun78622_ip = 0; ; ) switch(_fun78622_ip) {
case 0:
            r0 = undefined;
            r1 = undefined;
            r3 = this;
            r5 = _closure0_slot4;
            r2 = function(a0, a1, a2) { // Environment: r4
                r2 = a0;
                var _closure1_slot0 = r2;
                r2 = a1;
                var _closure1_slot1 = r2;
                r2 = a2;
                var _closure1_slot2 = r2;
                r0 = 0;
                var _closure1_slot11 = r0;
                var _closure1_slot12 = r0;
                var _closure1_slot9 = r0;
                r1 = function* (a0, a1, a2) { // Original name: ?anon_0_, environment: r1
                    _fun147745: for(var _fun147745_ip = 0; ; ) switch(_fun147745_ip) {
case 0:
                        r0 = _closure1_slot12;
                        r2 = r0;
                        r4 = 2;
                        if(!(r0 !== r4)) { _fun147745_ip = 3806; continue _fun147745 }
case 20:
                        r0 = a1;
                        r3 = a0;
                        r38 = r2;
                        r7 = 3;
                        r5 = 1;
                        r37 = 5;
                        r36 = 7;
                        r35 = 10;
                        r34 = 12;
                        r33 = 4;
                        r32 = 0;
                        r31 = undefined;
                        r30 = 'Pausing socket in headless task because app state is not active';
                        r29 = true;
                        r28 = 'active';
                        r26 = global;
                        r25 = 'Task ';
                        r24 = false;
                        r23 = 'ms';
                        r22 = 'Unpausing socket';
                        r21 = 'headless_task:';
                        r20 = 1500;
                        r19 = 14;
                        r18 = 'Failed to submit analytics';
                        r17 = 6;
                        r16 = 'initHeadlessTask completed';
                        r15 = 8;
                        r14 = 9;
                        r13 = 'Analytics Initialized';
                        r12 = 'Analytics Init skipped; not authenticated';
                        r11 = 'Flux Initialized';
                        r10 = 11;
                        r9 = 'Task completed successfully';
                        r8 = 13;
                        if(!(r38 !== r7)) { _fun147745_ip = 3768; continue _fun147745 }
case 162:
                        r2 = r4;
                        _closure1_slot12 = r4;
                        r38 = _closure1_slot11;
                        SwitchImm(value_reg=38, jump_table_address=3826, default_jump_address=3614, unsigned_min_value=0, unsigned_max_value=13) // Switch table: [3110, 2694, 2650, 2161, 1507, 1441, 1391, 1325, 1275, 415, 349, 299, 241, 191];
case 191:
                        if(!(r3 !== r5)) { _fun147745_ip = 232; continue _fun147745 }
case 195:
                        if(!(r3 !== r4)) { _fun147745_ip = 205; continue _fun147745 }
case 199:
                        _closure1_slot9 = r32;
                        _fun147745_ip = 280; continue _fun147745;
case 205:
                        _closure1_slot9 = r32;
                        r2 = r7;
                        _closure1_slot12 = r7;
                        r38 = {'value': null, 'done': true};
                        r38[0] = r0;
                        return r38;
case 232:
                        r2 = r7;
                        _closure1_slot12 = r7;
                        throw r0;
case 241:
                        r38 = _closure1_slot8;
                        r39 = _closure1_slot10;
                        r6 = r39;
                        _closure1_slot9 = r32;
                        _env_r38_slot8 = r39;
                        r40 = _env_r38_slot3;
                        r39 = r40.warn;
                        r38 = _env_r38_slot8;
                        r38 = r39.bind(r40)(r18, r38);
case 280:
                        r2 = r7;
                        _closure1_slot12 = r7;
                        r38 = {'value': undefined, 'done': true};
                        return r38;
case 299:
                        if(!(r3 !== r5)) { _fun147745_ip = 340; continue _fun147745 }
case 303:
                        if(!(r3 !== r4)) { _fun147745_ip = 313; continue _fun147745 }
case 307:
                        _closure1_slot9 = r32;
                        _fun147745_ip = 388; continue _fun147745;
case 313:
                        _closure1_slot9 = r32;
                        r2 = r7;
                        _closure1_slot12 = r7;
                        r38 = {'value': null, 'done': true};
                        r38[0] = r0;
                        return r38;
case 340:
                        r2 = r7;
                        _closure1_slot12 = r7;
                        throw r0;
case 349:
                        r38 = _closure1_slot8;
                        r39 = _closure1_slot10;
                        r6 = r39;
                        _closure1_slot9 = r32;
                        _env_r38_slot8 = r39;
                        r40 = _env_r38_slot3;
                        r39 = r40.warn;
                        r38 = _env_r38_slot8;
                        r38 = r39.bind(r40)(r18, r38);
case 388:
                        r2 = r7;
                        _closure1_slot12 = r7;
                        r39 = _closure1_slot3;
                        r38 = {'value': null, 'done': true};
                        r38[0] = r39;
                        return r38;
case 415:
                        if(!(r3 !== r5)) { _fun147745_ip = 1266; continue _fun147745 }
case 422:
                        var _closure1_slot3 = r0;
                        if(!(r3 !== r4)) { _fun147745_ip = 861; continue _fun147745 }
case 433:
                        r38 = _closure1_slot8;
                        _env_r38_slot5 = r29;
                        r39 = _env_r38_slot3;
                        r38 = r39.log;
                        r38 = r38.bind(r39)(r9);
                        _closure1_slot9 = r32;
                        r39 = _closure1_slot8;
                        r38 = _closure1_slot7;
                        r41 = r26.Date;
                        r40 = r41.now;
                        r41 = r40.bind(r41)();
                        r40 = _env_r39_slot4;
                        r40 = r41 - r40;
                        _env_r39_slot6 = r40;
                        r41 = _env_r38_slot1;
                        r40 = _env_r38_slot3;
                        r40 = r40[r6];
                        r42 = r41.bind(r31)(r40);
                        r41 = r42.addBreadcrumb;
                        r40 = {'message': 'Finished headless task.', 'data': null};
                        r43 = {'name': null, 'success': null, 'duration': null};
                        r44 = _env_r39_slot0;
                        r43[0] = r44;
                        r44 = _env_r39_slot5;
                        r43[1] = r44;
                        r44 = _env_r39_slot6;
                        r44 = r44 + r23;
                        r43[2] = r44;
                        r40[1] = r43;
                        r40 = r41.bind(r42)(r40);
                        r41 = _env_r39_slot3;
                        r40 = r41.log;
                        r40 = r40.bind(r41)(r22);
                        r41 = _env_r38_slot2;
                        r40 = _env_r38_slot3;
                        r40 = r40[r10];
                        r41 = r41.bind(r31)(r40);
                        r40 = r41.setIsPaused;
                        r40 = r40.bind(r41)(r24);
                        r41 = _env_r38_slot1;
                        r40 = _env_r38_slot3;
                        r40 = r40[r13];
                        r41 = r41.bind(r31)(r40);
                        r42 = _env_r39_slot0;
                        r40 = r26.HermesInternal;
                        r40 = r40.concat;
                        r40 = r40.bind(r21)(r42);
                        r40 = r41.bind(r31)(r40);
                        r41 = _env_r38_slot1;
                        r40 = _env_r38_slot3;
                        r40 = r40[r11];
                        r43 = r41.bind(r31)(r40);
                        r42 = r43.track;
                        r40 = _env_r38_slot9;
                        r41 = r40.HEADLESS_TASK_COMPLETED;
                        r40 = {'client_app_state': null, 'name': null, 'success': null, 'duration_ms': null};
                        r38 = _env_r38_slot5;
                        r38 = r38.currentState;
                        r40[0] = r38;
                        r38 = _env_r39_slot0;
                        r40[1] = r38;
                        r38 = _env_r39_slot5;
                        r40[2] = r38;
                        r38 = _env_r39_slot6;
                        r40[3] = r38;
                        r38 = {'flush': true};
                        r38 = r42.bind(r43)(r41, r40, r38);
                        _env_r39_slot7 = r38;
                        r38 = _closure1_slot8;
                        r41 = _closure1_slot7;
                        _closure1_slot9 = r17;
                        r40 = r26.Promise;
                        r39 = r40.race;
                        r42 = _env_r38_slot7;
                        r38 = new Array(2);
                        r38[0] = r42;
                        r42 = _env_r41_slot0;
                        r41 = _env_r41_slot3;
                        r41 = r41[r14];
                        r42 = r42.bind(r31)(r41);
                        r41 = r42.timeoutPromise;
                        r41 = r41.bind(r42)(r20);
                        r38[1] = r41;
                        r39 = r39.bind(r40)(r38);
                        _closure1_slot11 = r8;
                        r2 = r5;
                        _closure1_slot12 = r5;
                        r38 = {'value': null, 'done': false};
                        r38[0] = r39;
                        return r38;
case 861:
                        _closure1_slot9 = r32;
                        r39 = _closure1_slot8;
                        r38 = _closure1_slot7;
                        r41 = r26.Date;
                        r40 = r41.now;
                        r41 = r40.bind(r41)();
                        r40 = _env_r39_slot4;
                        r40 = r41 - r40;
                        _env_r39_slot6 = r40;
                        r41 = _env_r38_slot1;
                        r40 = _env_r38_slot3;
                        r40 = r40[r6];
                        r42 = r41.bind(r31)(r40);
                        r41 = r42.addBreadcrumb;
                        r40 = {'message': 'Finished headless task.', 'data': null};
                        r43 = {'name': null, 'success': null, 'duration': null};
                        r44 = _env_r39_slot0;
                        r43[0] = r44;
                        r44 = _env_r39_slot5;
                        r43[1] = r44;
                        r44 = _env_r39_slot6;
                        r44 = r44 + r23;
                        r43[2] = r44;
                        r40[1] = r43;
                        r40 = r41.bind(r42)(r40);
                        r41 = _env_r39_slot3;
                        r40 = r41.log;
                        r40 = r40.bind(r41)(r22);
                        r41 = _env_r38_slot2;
                        r40 = _env_r38_slot3;
                        r40 = r40[r10];
                        r41 = r41.bind(r31)(r40);
                        r40 = r41.setIsPaused;
                        r40 = r40.bind(r41)(r24);
                        r41 = _env_r38_slot1;
                        r40 = _env_r38_slot3;
                        r40 = r40[r13];
                        r41 = r41.bind(r31)(r40);
                        r42 = _env_r39_slot0;
                        r40 = r26.HermesInternal;
                        r40 = r40.concat;
                        r40 = r40.bind(r21)(r42);
                        r40 = r41.bind(r31)(r40);
                        r41 = _env_r38_slot1;
                        r40 = _env_r38_slot3;
                        r40 = r40[r11];
                        r43 = r41.bind(r31)(r40);
                        r42 = r43.track;
                        r40 = _env_r38_slot9;
                        r41 = r40.HEADLESS_TASK_COMPLETED;
                        r40 = {'client_app_state': null, 'name': null, 'success': null, 'duration_ms': null};
                        r38 = _env_r38_slot5;
                        r38 = r38.currentState;
                        r40[0] = r38;
                        r38 = _env_r39_slot0;
                        r40[1] = r38;
                        r38 = _env_r39_slot5;
                        r40[2] = r38;
                        r38 = _env_r39_slot6;
                        r40[3] = r38;
                        r38 = {'flush': true};
                        r38 = r42.bind(r43)(r41, r40, r38);
                        _env_r39_slot7 = r38;
                        r38 = _closure1_slot8;
                        r41 = _closure1_slot7;
                        _closure1_slot9 = r37;
                        r40 = r26.Promise;
                        r39 = r40.race;
                        r42 = _env_r38_slot7;
                        r38 = new Array(2);
                        r38[0] = r42;
                        r42 = _env_r41_slot0;
                        r41 = _env_r41_slot3;
                        r41 = r41[r14];
                        r42 = r42.bind(r31)(r41);
                        r41 = r42.timeoutPromise;
                        r41 = r41.bind(r42)(r20);
                        r38[1] = r41;
                        r39 = r39.bind(r40)(r38);
                        _closure1_slot11 = r10;
                        r2 = r5;
                        _closure1_slot12 = r5;
                        r38 = {'value': null, 'done': false};
                        r38[0] = r39;
                        return r38;
case 1266:
                        r2 = r7;
                        _closure1_slot12 = r7;
                        throw r0;
case 1275:
                        if(!(r3 !== r5)) { _fun147745_ip = 1316; continue _fun147745 }
case 1279:
                        if(!(r3 !== r4)) { _fun147745_ip = 1289; continue _fun147745 }
case 1283:
                        _closure1_slot9 = r32;
                        _fun147745_ip = 1364; continue _fun147745;
case 1289:
                        _closure1_slot9 = r32;
                        r2 = r7;
                        _closure1_slot12 = r7;
                        r38 = {'value': null, 'done': true};
                        r38[0] = r0;
                        return r38;
case 1316:
                        r2 = r7;
                        _closure1_slot12 = r7;
                        throw r0;
case 1325:
                        r38 = _closure1_slot8;
                        r39 = _closure1_slot10;
                        r6 = r39;
                        _closure1_slot9 = r32;
                        _env_r38_slot8 = r39;
                        r40 = _env_r38_slot3;
                        r39 = r40.warn;
                        r38 = _env_r38_slot8;
                        r38 = r39.bind(r40)(r18, r38);
case 1364:
                        r2 = r7;
                        _closure1_slot12 = r7;
                        r39 = _closure1_slot4;
                        r38 = {'value': null, 'done': true};
                        r38[0] = r39;
                        return r38;
case 1391:
                        if(!(r3 !== r5)) { _fun147745_ip = 1432; continue _fun147745 }
case 1395:
                        if(!(r3 !== r4)) { _fun147745_ip = 1405; continue _fun147745 }
case 1399:
                        _closure1_slot9 = r32;
                        _fun147745_ip = 1480; continue _fun147745;
case 1405:
                        _closure1_slot9 = r32;
                        r2 = r7;
                        _closure1_slot12 = r7;
                        r38 = {'value': null, 'done': true};
                        r38[0] = r0;
                        return r38;
case 1432:
                        r2 = r7;
                        _closure1_slot12 = r7;
                        throw r0;
case 1441:
                        r38 = _closure1_slot8;
                        r39 = _closure1_slot10;
                        r6 = r39;
                        _closure1_slot9 = r32;
                        _env_r38_slot8 = r39;
                        r40 = _env_r38_slot3;
                        r39 = r40.warn;
                        r38 = _env_r38_slot8;
                        r38 = r39.bind(r40)(r18, r38);
case 1480:
                        r2 = r7;
                        _closure1_slot12 = r7;
                        r39 = _closure1_slot5;
                        r38 = {'value': null, 'done': true};
                        r38[0] = r39;
                        return r38;
case 1507:
                        if(!(r3 !== r5)) { _fun147745_ip = 2152; continue _fun147745 }
case 1514:
                        var _closure1_slot4 = r0;
                        if(!(r3 !== r4)) { _fun147745_ip = 1747; continue _fun147745 }
case 1525:
                        r39 = _closure1_slot8;
                        r38 = _closure1_slot7;
                        r40 = _env_r39_slot3;
                        r39 = r40.log;
                        r39 = r39.bind(r40)(r11);
                        r39 = _env_r38_slot6;
                        r38 = r39.isAuthenticated;
                        r39 = r38.bind(r39)();
                        r38 = _closure1_slot8;
                        if(r39) { _fun147745_ip = 1586; continue _fun147745 }
case 1569:
                        r40 = _env_r38_slot3;
                        r39 = r40.log;
                        r39 = r39.bind(r40)(r12);
                        _fun147745_ip = 1699; continue _fun147745;
case 1586:
                        r43 = _closure1_slot7;
                        r40 = _env_r43_slot0;
                        r39 = _env_r43_slot3;
                        r39 = r39[r12];
                        r39 = r40.bind(r31)(r39);
                        r41 = r39.AnalyticsActionHandlers;
                        r40 = r41.handleConnectionOpen;
                        r39 = {'analyticsToken': null, 'user': null};
                        r44 = _env_r43_slot6;
                        r42 = r44.getAnalyticsToken;
                        r42 = r42.bind(r44)();
                        r39[0] = r42;
                        r42 = {'id': null};
                        r44 = _env_r43_slot6;
                        r43 = r44.getId;
                        r43 = r43.bind(r44)();
                        r42[0] = r43;
                        r39[1] = r42;
                        r39 = r40.bind(r41)(r39);
                        r39 = _env_r38_slot3;
                        r38 = r39.log;
                        r38 = r38.bind(r39)(r13);
case 1699:
                        r38 = _closure1_slot8;
                        r39 = _env_r38_slot1;
                        r39 = r39.bind(r31)();
                        r38 = _env_r38_slot2;
                        r39 = r39.bind(r31)(r38);
                        _closure1_slot11 = r14;
                        r2 = r5;
                        _closure1_slot12 = r5;
                        r38 = {'value': null, 'done': false};
                        r38[0] = r39;
                        return r38;
case 1747:
                        _closure1_slot9 = r32;
                        r39 = _closure1_slot8;
                        r38 = _closure1_slot7;
                        r41 = r26.Date;
                        r40 = r41.now;
                        r41 = r40.bind(r41)();
                        r40 = _env_r39_slot4;
                        r40 = r41 - r40;
                        _env_r39_slot6 = r40;
                        r41 = _env_r38_slot1;
                        r40 = _env_r38_slot3;
                        r40 = r40[r6];
                        r42 = r41.bind(r31)(r40);
                        r41 = r42.addBreadcrumb;
                        r40 = {'message': 'Finished headless task.', 'data': null};
                        r43 = {'name': null, 'success': null, 'duration': null};
                        r44 = _env_r39_slot0;
                        r43[0] = r44;
                        r44 = _env_r39_slot5;
                        r43[1] = r44;
                        r44 = _env_r39_slot6;
                        r44 = r44 + r23;
                        r43[2] = r44;
                        r40[1] = r43;
                        r40 = r41.bind(r42)(r40);
                        r41 = _env_r39_slot3;
                        r40 = r41.log;
                        r40 = r40.bind(r41)(r22);
                        r41 = _env_r38_slot2;
                        r40 = _env_r38_slot3;
                        r40 = r40[r10];
                        r41 = r41.bind(r31)(r40);
                        r40 = r41.setIsPaused;
                        r40 = r40.bind(r41)(r24);
                        r41 = _env_r38_slot1;
                        r40 = _env_r38_slot3;
                        r40 = r40[r13];
                        r41 = r41.bind(r31)(r40);
                        r42 = _env_r39_slot0;
                        r40 = r26.HermesInternal;
                        r40 = r40.concat;
                        r40 = r40.bind(r21)(r42);
                        r40 = r41.bind(r31)(r40);
                        r41 = _env_r38_slot1;
                        r40 = _env_r38_slot3;
                        r40 = r40[r11];
                        r43 = r41.bind(r31)(r40);
                        r42 = r43.track;
                        r40 = _env_r38_slot9;
                        r41 = r40.HEADLESS_TASK_COMPLETED;
                        r40 = {'client_app_state': null, 'name': null, 'success': null, 'duration_ms': null};
                        r38 = _env_r38_slot5;
                        r38 = r38.currentState;
                        r40[0] = r38;
                        r38 = _env_r39_slot0;
                        r40[1] = r38;
                        r38 = _env_r39_slot5;
                        r40[2] = r38;
                        r38 = _env_r39_slot6;
                        r40[3] = r38;
                        r38 = {'flush': true};
                        r38 = r42.bind(r43)(r41, r40, r38);
                        _env_r39_slot7 = r38;
                        r38 = _closure1_slot8;
                        r41 = _closure1_slot7;
                        _closure1_slot9 = r33;
                        r40 = r26.Promise;
                        r39 = r40.race;
                        r42 = _env_r38_slot7;
                        r38 = new Array(2);
                        r38[0] = r42;
                        r42 = _env_r41_slot0;
                        r41 = _env_r41_slot3;
                        r41 = r41[r14];
                        r42 = r42.bind(r31)(r41);
                        r41 = r42.timeoutPromise;
                        r41 = r41.bind(r42)(r20);
                        r38[1] = r41;
                        r39 = r39.bind(r40)(r38);
                        _closure1_slot11 = r15;
                        r2 = r5;
                        _closure1_slot12 = r5;
                        r38 = {'value': null, 'done': false};
                        r38[0] = r39;
                        return r38;
case 2152:
                        r2 = r7;
                        _closure1_slot12 = r7;
                        throw r0;
case 2161:
                        if(!(r3 !== r5)) { _fun147745_ip = 2641; continue _fun147745 }
case 2168:
                        var _closure1_slot5 = r0;
                        if(!(r3 !== r4)) { _fun147745_ip = 2236; continue _fun147745 }
case 2176:
                        r39 = _closure1_slot8;
                        r38 = _closure1_slot7;
                        r40 = _env_r39_slot3;
                        r39 = r40.log;
                        r39 = r39.bind(r40)(r16);
                        r38 = _env_r38_slot8;
                        r39 = r38.promise;
                        _closure1_slot11 = r33;
                        r2 = r5;
                        _closure1_slot12 = r5;
                        r38 = {'value': null, 'done': false};
                        r38[0] = r39;
                        return r38;
case 2236:
                        _closure1_slot9 = r32;
                        r39 = _closure1_slot8;
                        r38 = _closure1_slot7;
                        r41 = r26.Date;
                        r40 = r41.now;
                        r41 = r40.bind(r41)();
                        r40 = _env_r39_slot4;
                        r40 = r41 - r40;
                        _env_r39_slot6 = r40;
                        r41 = _env_r38_slot1;
                        r40 = _env_r38_slot3;
                        r40 = r40[r6];
                        r42 = r41.bind(r31)(r40);
                        r41 = r42.addBreadcrumb;
                        r40 = {'message': 'Finished headless task.', 'data': null};
                        r43 = {'name': null, 'success': null, 'duration': null};
                        r44 = _env_r39_slot0;
                        r43[0] = r44;
                        r44 = _env_r39_slot5;
                        r43[1] = r44;
                        r44 = _env_r39_slot6;
                        r44 = r44 + r23;
                        r43[2] = r44;
                        r40[1] = r43;
                        r40 = r41.bind(r42)(r40);
                        r41 = _env_r39_slot3;
                        r40 = r41.log;
                        r40 = r40.bind(r41)(r22);
                        r41 = _env_r38_slot2;
                        r40 = _env_r38_slot3;
                        r40 = r40[r10];
                        r41 = r41.bind(r31)(r40);
                        r40 = r41.setIsPaused;
                        r40 = r40.bind(r41)(r24);
                        r41 = _env_r38_slot1;
                        r40 = _env_r38_slot3;
                        r40 = r40[r13];
                        r41 = r41.bind(r31)(r40);
                        r42 = _env_r39_slot0;
                        r40 = r26.HermesInternal;
                        r40 = r40.concat;
                        r40 = r40.bind(r21)(r42);
                        r40 = r41.bind(r31)(r40);
                        r41 = _env_r38_slot1;
                        r40 = _env_r38_slot3;
                        r40 = r40[r11];
                        r43 = r41.bind(r31)(r40);
                        r42 = r43.track;
                        r40 = _env_r38_slot9;
                        r41 = r40.HEADLESS_TASK_COMPLETED;
                        r40 = {'client_app_state': null, 'name': null, 'success': null, 'duration_ms': null};
                        r38 = _env_r38_slot5;
                        r38 = r38.currentState;
                        r40[0] = r38;
                        r38 = _env_r39_slot0;
                        r40[1] = r38;
                        r38 = _env_r39_slot5;
                        r40[2] = r38;
                        r38 = _env_r39_slot6;
                        r40[3] = r38;
                        r38 = {'flush': true};
                        r38 = r42.bind(r43)(r41, r40, r38);
                        _env_r39_slot7 = r38;
                        r38 = _closure1_slot8;
                        r41 = _closure1_slot7;
                        _closure1_slot9 = r7;
                        r40 = r26.Promise;
                        r39 = r40.race;
                        r42 = _env_r38_slot7;
                        r38 = new Array(2);
                        r38[0] = r42;
                        r42 = _env_r41_slot0;
                        r41 = _env_r41_slot3;
                        r41 = r41[r14];
                        r42 = r42.bind(r31)(r41);
                        r41 = r42.timeoutPromise;
                        r41 = r41.bind(r42)(r20);
                        r38[1] = r41;
                        r39 = r39.bind(r40)(r38);
                        _closure1_slot11 = r17;
                        r2 = r5;
                        _closure1_slot12 = r5;
                        r38 = {'value': null, 'done': false};
                        r38[0] = r39;
                        return r38;
case 2641:
                        r2 = r7;
                        _closure1_slot12 = r7;
                        throw r0;
case 2650:
                        r38 = _closure1_slot8;
                        r39 = _closure1_slot10;
                        r6 = r39;
                        _closure1_slot9 = r32;
                        _env_r38_slot8 = r39;
                        r40 = _env_r38_slot3;
                        r39 = r40.warn;
                        r38 = _env_r38_slot8;
                        r38 = r39.bind(r40)(r18, r38);
                        _fun147745_ip = 3626; continue _fun147745;
case 2694:
                        r39 = _closure1_slot8;
                        r38 = _closure1_slot7;
                        r40 = _closure1_slot10;
                        r6 = r40;
                        var _closure1_slot6 = r40;
                        _closure1_slot9 = r32;
                        r41 = r26.Date;
                        r40 = r41.now;
                        r41 = r40.bind(r41)();
                        r40 = _env_r39_slot4;
                        r40 = r41 - r40;
                        _env_r39_slot6 = r40;
                        r41 = _env_r38_slot1;
                        r40 = _env_r38_slot3;
                        r40 = r40[r6];
                        r42 = r41.bind(r31)(r40);
                        r41 = r42.addBreadcrumb;
                        r40 = {'message': 'Finished headless task.', 'data': null};
                        r43 = {'name': null, 'success': null, 'duration': null};
                        r44 = _env_r39_slot0;
                        r43[0] = r44;
                        r44 = _env_r39_slot5;
                        r43[1] = r44;
                        r44 = _env_r39_slot6;
                        r44 = r44 + r23;
                        r43[2] = r44;
                        r40[1] = r43;
                        r40 = r41.bind(r42)(r40);
                        r41 = _env_r39_slot3;
                        r40 = r41.log;
                        r40 = r40.bind(r41)(r22);
                        r41 = _env_r38_slot2;
                        r40 = _env_r38_slot3;
                        r40 = r40[r10];
                        r41 = r41.bind(r31)(r40);
                        r40 = r41.setIsPaused;
                        r40 = r40.bind(r41)(r24);
                        r41 = _env_r38_slot1;
                        r40 = _env_r38_slot3;
                        r40 = r40[r13];
                        r41 = r41.bind(r31)(r40);
                        r42 = _env_r39_slot0;
                        r40 = r26.HermesInternal;
                        r40 = r40.concat;
                        r40 = r40.bind(r21)(r42);
                        r40 = r41.bind(r31)(r40);
                        r41 = _env_r38_slot1;
                        r40 = _env_r38_slot3;
                        r40 = r40[r11];
                        r43 = r41.bind(r31)(r40);
                        r42 = r43.track;
                        r40 = _env_r38_slot9;
                        r41 = r40.HEADLESS_TASK_COMPLETED;
                        r40 = {'client_app_state': null, 'name': null, 'success': null, 'duration_ms': null};
                        r38 = _env_r38_slot5;
                        r38 = r38.currentState;
                        r40[0] = r38;
                        r38 = _env_r39_slot0;
                        r40[1] = r38;
                        r38 = _env_r39_slot5;
                        r40[2] = r38;
                        r38 = _env_r39_slot6;
                        r40[3] = r38;
                        r38 = {'flush': true};
                        r38 = r42.bind(r43)(r41, r40, r38);
                        _env_r39_slot7 = r38;
                        r38 = _closure1_slot8;
                        r41 = _closure1_slot7;
                        _closure1_slot9 = r4;
                        r40 = r26.Promise;
                        r39 = r40.race;
                        r42 = _env_r38_slot7;
                        r38 = new Array(2);
                        r38[0] = r42;
                        r42 = _env_r41_slot0;
                        r41 = _env_r41_slot3;
                        r41 = r41[r14];
                        r42 = r42.bind(r31)(r41);
                        r41 = r42.timeoutPromise;
                        r41 = r41.bind(r42)(r20);
                        r38[1] = r41;
                        r39 = r39.bind(r40)(r38);
                        _closure1_slot11 = r19;
                        r2 = r5;
                        _closure1_slot12 = r5;
                        r38 = {'value': null, 'done': false};
                        r38[0] = r39;
                        return r38;
case 3110:
                        if(!(r3 !== r5)) { _fun147745_ip = 3605; continue _fun147745 }
case 3117:
                        if(!(r3 !== r4)) { _fun147745_ip = 3582; continue _fun147745 }
case 3124:
                        var _closure1_slot7 = r27;
                        var _closure1_slot8 = r38;
                        r42 = _closure1_slot0;
                        var _closure2_slot0 = r42;
                        r39 = _closure1_slot1;
                        var _closure2_slot1 = r39;
                        r39 = _closure1_slot2;
                        var _closure2_slot2 = r39;
                        var _closure2_slot3 = r31;
                        var _closure2_slot4 = r31;
                        var _closure2_slot5 = r31;
                        var _closure2_slot6 = r31;
                        var _closure2_slot7 = r31;
                        r40 = _closure0_slot1;
                        r39 = _closure0_slot3;
                        r39 = r39[r5];
                        r41 = r40.bind(r31)(r39);
                        r39 = r26.HermesInternal;
                        r39 = r39.concat;
                        r47 = r39.bind(r25)(r42);
                        r40 = Object.create(r41.prototype);
                        r48 = r40;
                        r39 = new r49[r41](r48, r47);
                        r39 = r39 instanceof Object ? r39 : r40;
                        _closure2_slot3 = r39;
                        r41 = r26.Date;
                        r40 = r41.now;
                        r40 = r40.bind(r41)();
                        _closure2_slot4 = r40;
                        r41 = _closure0_slot1;
                        r40 = _closure0_slot3;
                        r40 = r40[r6];
                        r43 = r41.bind(r31)(r40);
                        r41 = r43.addBreadcrumb;
                        r40 = {'message': 'Executing headless task.', 'data': null};
                        r44 = {'name': null};
                        r44[0] = r42;
                        r40[1] = r44;
                        r40 = r41.bind(r43)(r40);
                        r41 = _closure0_slot2;
                        r40 = _closure0_slot3;
                        r40 = r40[r7];
                        r41 = r41.bind(r31)(r40);
                        r40 = r41.recordStartHeadlessTask;
                        r40 = r40.bind(r41)();
                        r41 = _closure0_slot0;
                        r40 = _closure0_slot3;
                        r40 = r40[r8];
                        r41 = r41.bind(r31)(r40);
                        r40 = r41.closeFastConnectSocket;
                        r40 = r40.bind(r41)();
                        _closure2_slot5 = r24;
                        _closure1_slot9 = r5;
                        r40 = _closure0_slot1;
                        r38 = _closure0_slot3;
                        r38 = r38[r9];
                        r38 = r40.bind(r31)(r38);
                        r38 = r38.wasEverActive;
                        if(r38) { _fun147745_ip = 3428; continue _fun147745 }
case 3399:
                        r40 = _closure0_slot1;
                        r38 = _closure0_slot3;
                        r38 = r38[r9];
                        r38 = r40.bind(r31)(r38);
                        r38 = r38.extraProperties;
                        r38['headless_task_ran'] = r29;
case 3428:
                        r38 = _closure0_slot5;
                        r38 = r38.currentState;
                        if(!(r28 !== r38)) { _fun147745_ip = 3481; continue _fun147745 }
case 3442:
                        r38 = r39.log;
                        r38 = r38.bind(r39)(r30);
                        r39 = _closure0_slot2;
                        r38 = _closure0_slot3;
                        r38 = r38[r10];
                        r39 = r39.bind(r31)(r38);
                        r38 = r39.setIsPaused;
                        r38 = r38.bind(r39)(r29);
case 3481:
                        r39 = _closure0_slot1;
                        r38 = _closure0_slot3;
                        r38 = r38[r11];
                        r41 = r39.bind(r31)(r38);
                        r40 = r41.track;
                        r38 = _closure0_slot9;
                        r39 = r38.HEADLESS_TASK_INVOKED;
                        r38 = {'client_app_state': null, 'name': null};
                        r43 = _closure0_slot5;
                        r43 = r43.currentState;
                        r38[0] = r43;
                        r38[1] = r42;
                        r38 = r40.bind(r41)(r39, r38);
                        r38 = _closure0_slot7;
                        r39 = r38.bind(r31)();
                        _closure1_slot11 = r7;
                        r2 = r5;
                        _closure1_slot12 = r5;
                        r38 = {'value': null, 'done': false};
                        r38[0] = r39;
                        return r38;
case 3582:
                        r2 = r7;
                        _closure1_slot12 = r7;
                        r38 = {'value': null, 'done': true};
                        r38[0] = r0;
                        return r38;
case 3605:
                        r2 = r7;
                        _closure1_slot12 = r7;
                        throw r0;
case 3614:
                        if(!(r3 !== r5)) { _fun147745_ip = 3659; continue _fun147745 }
case 3618:
                        if(!(r3 !== r4)) { _fun147745_ip = 3632; continue _fun147745 }
case 3622:
                        _closure1_slot9 = r32;
case 3626:
                        r38 = _closure1_slot6;
                        throw r38;
case 3632:
                        _closure1_slot9 = r32;
                        r2 = r7;
                        _closure1_slot12 = r7;
                        r38 = {'value': null, 'done': true};
                        r38[0] = r0;
                        return r38;
case 3659:
                        r2 = r7;
                        _closure1_slot12 = r7;
                        throw r0;
case 3668:
                        CatchBlockStart(arg_register=38);
                        r6 = r38;
                        var _closure1_slot10 = r38;
                        r38 = _closure1_slot9;
                        if(!(r32 !== r38)) { _fun147745_ip = 3759; continue _fun147745 }
case 3685:
                        if(!(r5 !== r38)) { _fun147745_ip = 3750; continue _fun147745 }
case 3689:
                        if(!(r4 !== r38)) { _fun147745_ip = 3741; continue _fun147745 }
case 3693:
                        if(!(r7 !== r38)) { _fun147745_ip = 3732; continue _fun147745 }
case 3697:
                        if(!(r33 !== r38)) { _fun147745_ip = 3723; continue _fun147745 }
case 3701:
                        if(!(r37 !== r38)) { _fun147745_ip = 3714; continue _fun147745 }
case 3705:
                        _closure1_slot11 = r34;
                        _fun147745_ip = 162; continue _fun147745;
case 3714:
                        _closure1_slot11 = r35;
                        _fun147745_ip = 162; continue _fun147745;
case 3723:
                        _closure1_slot11 = r36;
                        _fun147745_ip = 162; continue _fun147745;
case 3732:
                        _closure1_slot11 = r37;
                        _fun147745_ip = 162; continue _fun147745;
case 3741:
                        _closure1_slot11 = r4;
                        _fun147745_ip = 162; continue _fun147745;
case 3750:
                        _closure1_slot11 = r5;
                        _fun147745_ip = 162; continue _fun147745;
case 3759:
                        r2 = r7;
                        _closure1_slot12 = r7;
                        throw r6;
case 3768:
                        if(!(r3 !== r5)) { _fun147745_ip = 3804; continue _fun147745 }
case 3772:
                        if(!(r3 !== r4)) { _fun147745_ip = 3788; continue _fun147745 }
case 3776:
                        r3 = {'value': undefined, 'done': true};
                        return r3;
case 3788:
                        r3 = {'value': null, 'done': true};
                        r3[0] = r0;
                        return r3;
case 3804:
                        throw r0;
case 3806:
                        r0 = 3;
                        r2 = r0;
                        _closure1_slot12 = r0;
                        r47 = 'Generator functions may not be called on executing generators';
                        r0 = throwTypeError(r48);
                    }
                };
                return r1;
            };
            r2 = r5.bind(r0)(r2);
            _closure0_slot10 = r2;
            r4 = r2.apply;
            if(r4) { _fun78622_ip = 49; continue _fun78622 }
case 39:
            r1 = arguments;
            r1 = r4.bind(r2)(r3, r1);
            _fun78622_ip = 59; continue _fun78622;
case 49:
            r7 = r2;
            r6 = r3;
            r1 = applyArguments(r8, r7);
case 59:
            return r1;
        }
    };
    var _closure0_slot10 = r5;
    r5 = global;
    r9 = r5.Object;
    r8 = r9.defineProperty;
    r7 = '__esModule';
    r5 = {'value': true};
    r5 = r8.bind(r9)(r2, r7, r5);
    r5 = r3[r0];
    r0 = undefined;
    r5 = r6.bind(r0)(r5);
    var _closure0_slot4 = r5;
    r5 = r3[r1];
    r5 = r4.bind(r0)(r5);
    r5 = r5.AppState;
    var _closure0_slot5 = r5;
    r5 = r3[r2];
    r5 = r6.bind(r0)(r5);
    var _closure0_slot6 = r5;
    r5 = r3[r3];
    r5 = r4.bind(r0)(r5);
    r6 = r5.initHeadlessTask;
    var _closure0_slot7 = r6;
    r5 = r5.applicationReady;
    var _closure0_slot8 = r5;
    r5 = r3[r4];
    r5 = r4.bind(r0)(r5);
    r5 = r5.AnalyticEvents;
    var _closure0_slot9 = r5;
    r3 = r3[r15];
    r5 = r4.bind(r0)(r3);
    r4 = r5.fileFinishedImporting;
    r3 = 'modules/app_startup/native/executeHeadlessTask.tsx';
    r3 = r4.bind(r5)(r3);
    r1 = function() { // Original name: executeHeadlessTask, environment: r1
        _fun78623: for(var _fun78623_ip = 0; ; ) switch(_fun78623_ip) {
case 0:
            r1 = undefined;
            r3 = this;
            r2 = _closure0_slot10;
            r4 = r2.apply;
            if(r4) { _fun78623_ip = 31; continue _fun78623 }
case 21:
            r1 = arguments;
            r1 = r4.bind(r2)(r3, r1);
            _fun78623_ip = 41; continue _fun78623;
case 31:
            r6 = r2;
            r5 = r3;
            r1 = applyArguments(r7, r6);
case 41:
            return r1;
        }
    };
    r2['default'] = r1;
    return r0;
}

// ===== top-level #17796  fn#17757  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    r2 = a1;
    var _closure0_slot0 = r2;
    r5 = a2;
    var _closure0_slot1 = r5;
    r1 = a6;
    var _closure0_slot2 = r1;
    r4 = r1[r0];
    r0 = undefined;
    r4 = r5.bind(r0)(r4);
    var _closure0_slot3 = r4;
    r4 = r1[r1];
    r4 = r5.bind(r0)(r4);
    var _closure0_slot4 = r4;
    r4 = r1[r2];
    r4 = r5.bind(r0)(r4);
    var _closure0_slot5 = r4;
    r4 = r1[r3];
    r6 = r5.bind(r0)(r4);
    r5 = Object.create(r6.prototype);
    r7 = 'BackgroundSync';
    r8 = r5;
    r4 = new r9[r6](r8, r7);
    r4 = r4 instanceof Object ? r4 : r5;
    var _closure0_slot6 = r4;
    r4 = function(a0) { // Environment: r3
        _fun78624: for(var _fun78624_ip = 0; ; ) switch(_fun78624_ip) {
case 0:
            r3 = a0;
            var _closure1_slot0 = r3;
            r4 = _closure0_slot5;
            r3 = r4.getState;
            r4 = r3.bind(r4)();
            r3 = 'active';
            if(!(r3 !== r4)) { _fun78624_ip = 143; continue _fun78624 }
case 35:
            r5 = _closure0_slot3;
            r3 = r5.isConnected;
            r3 = r3.bind(r5)();
            if(r3) { _fun78624_ip = 64; continue _fun78624 }
case 52:
            r4 = r5.isTryingToConnect;
            r3 = r4.bind(r5)();
case 64:
            if(r3) { _fun78624_ip = 111; continue _fun78624 }
case 67:
            r4 = _closure0_slot1;
            r3 = _closure0_slot2;
            r3 = r3[r4];
            r0 = undefined;
            r4 = r4.bind(r0)(r3);
            r3 = r4.carefullyOpenDatabase;
            r5 = _closure0_slot4;
            r2 = r5.getId;
            r2 = r2.bind(r5)();
            r2 = r3.bind(r4)(r2);
case 111:
            r2 = global;
            r3 = r2.Promise;
            r2 = Object.create(r3.prototype);
            r6 = function(a0) { // Environment: r1
                r5 = _closure0_slot6;
                r4 = r5.log;
                r3 = _closure1_slot0;
                r2 = 'Executing BackgroundSync with ';
                r2 = r4.bind(r5)(r2, r3);
                r2 = _closure0_slot0;
                r1 = _closure0_slot2;
                r1 = r1[r5];
                r0 = undefined;
                r3 = r2.bind(r0)(r1);
                r2 = r3.backgroundSync;
                r1 = {};
                r3 = r2.bind(r3)(r1);
                r2 = r3.then;
                r1 = a0;
                r1 = r2.bind(r3)(r1);
                return r0;
            };
            r7 = r2;
            r1 = new r8[r3](r7, r6);
            r1 = r1 instanceof Object ? r1 : r2;
            _fun78624_ip = 161; continue _fun78624;
case 143:
            r2 = global;
            r3 = r2.Promise;
            r2 = r3.resolve;
            r1 = r2.bind(r3)();
case 161:
            return r1;
        }
    };
    r3 = a4;
    r3['exports'] = r4;
    r1 = r1[r6];
    r3 = r2.bind(r0)(r1);
    r2 = r3.fileFinishedImporting;
    r1 = 'modules/headless_tasks/android/BackgroundSync.tsx';
    r1 = r2.bind(r3)(r1);
    return r0;
}

// ===== top-level #17797  fn#17758  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    r2 = a1;
    var _closure0_slot0 = r2;
    r7 = a2;
    var _closure0_slot1 = r7;
    r1 = a6;
    var _closure0_slot2 = r1;
    r4 = function(a0, a1, a2) { // Original name: sendReply, environment: r3
        r2 = global;
        r4 = r2.JSON;
        r3 = r4.stringify;
        r2 = {'type': 'response', 'status': null, 'message': null};
        r5 = a0;
        r2[1] = r5;
        r5 = a1;
        r2[2] = r5;
        r6 = a2;
        r7 = r2;
        r5 = copyDataProperties(r8, r7);
        r3 = r3.bind(r4)(r2);
        r2 = _closure0_slot1;
        r1 = _closure0_slot2;
        r1 = r1[r10];
        r0 = undefined;
        r2 = r2.bind(r0)(r1);
        r1 = r2.logToDevice;
        r1 = r1.bind(r2)(r3);
        return r0;
    };
    var _closure0_slot16 = r4;
    r4 = function(a0) { // Original name: sendStatus, environment: r3
        r5 = a0;
        r3 = _closure0_slot14;
        r2 = r3.log;
        r2 = r2.bind(r3)(r5);
        r2 = global;
        r4 = r2.JSON;
        r3 = r4.stringify;
        r2 = {'type': 'status', 'message': null};
        r2[1] = r5;
        r3 = r3.bind(r4)(r2);
        r2 = _closure0_slot1;
        r1 = _closure0_slot2;
        r1 = r1[r10];
        r0 = undefined;
        r2 = r2.bind(r0)(r1);
        r1 = r2.logToDevice;
        r1 = r1.bind(r2)(r3);
        return r0;
    };
    var _closure0_slot17 = r4;
    r4 = function() { // Original name: _captureNavigationTTI, environment: r3
        _fun78627: for(var _fun78627_ip = 0; ; ) switch(_fun78627_ip) {
case 0:
            r0 = undefined;
            r1 = undefined;
            r3 = this;
            r5 = _closure0_slot4;
            r2 = function(a0) { // Environment: r4
                r2 = a0;
                var _closure1_slot0 = r2;
                r0 = 0;
                var _closure1_slot4 = r0;
                var _closure1_slot5 = r0;
                r1 = function* (a0) { // Original name: ?anon_0_, environment: r1
                    _fun147746: for(var _fun147746_ip = 0; ; ) switch(_fun147746_ip) {
case 0:
                        r0 = _closure1_slot5;
                        r2 = r0;
                        r4 = 2;
                        if(!(r0 !== r4)) { _fun147746_ip = 1324; continue _fun147746 }
case 20:
                        r0 = arguments[1];
                        r3 = a0;
                        r5 = r2;
                        r6 = 3;
                        if(!(r5 !== r6)) { _fun147746_ip = 1283; continue _fun147746 }
case 39:
                        r2 = r4;
                        _closure1_slot5 = r4;
                        r5 = _closure1_slot4;
                        r10 = 0;
                        if(!(r10 !== r5)) { _fun147746_ip = 1122; continue _fun147746 }
case 59:
                        r8 = 1;
                        if(!(r8 !== r5)) { _fun147746_ip = 833; continue _fun147746 }
case 69:
                        if(!(r4 !== r5)) { _fun147746_ip = 535; continue _fun147746 }
case 76:
                        if(!(r3 !== r8)) { _fun147746_ip = 526; continue _fun147746 }
case 83:
                        if(!(r3 !== r4)) { _fun147746_ip = 503; continue _fun147746 }
case 90:
                        r5 = _closure1_slot2;
                        r5 = _env_r5_slot0;
                        r5 = r5.coldMessageCache;
                        r7 = true;
                        if(!(r7 === r5)) { _fun147746_ip = 205; continue _fun147746 }
case 112:
                        r5 = _closure1_slot2;
                        r9 = _closure1_slot3;
                        r12 = _env_r9_slot17;
                        r11 = _env_r5_slot0;
                        r14 = r11.toChannelId;
                        r11 = global;
                        r11 = r11.HermesInternal;
                        r13 = r11.concat;
                        r11 = 'Clearing the in-memory message cache for ';
                        r11 = r13.bind(r11)(r14);
                        r11 = r12.bind(r10)(r11);
                        r12 = _env_r9_slot1;
                        r9 = _env_r9_slot2;
                        r11 = r9[r18];
                        r9 = undefined;
                        r11 = r12.bind(r9)(r11);
                        r9 = r11.clearChannel;
                        r5 = _env_r5_slot0;
                        r5 = r5.toChannelId;
                        r5 = r9.bind(r11)(r5);
case 205:
                        r5 = _closure1_slot2;
                        r9 = _closure1_slot3;
                        r12 = _env_r9_slot0;
                        r9 = _env_r9_slot2;
                        r9 = r9[r19];
                        r11 = undefined;
                        r14 = r12.bind(r11)(r9);
                        r13 = r14.armNavigationTTIDebugFreeze;
                        r9 = _env_r5_slot0;
                        r12 = r9.freeze;
                        r9 = {'destinationKey': null};
                        r15 = _env_r5_slot0;
                        r15 = r15.toChannelId;
                        r9[0] = r15;
                        r9 = r13.bind(r14)(r12, r9);
                        r5 = _env_r5_slot0;
                        r5 = r5.coldMessageCache;
                        if(!(r7 === r5)) { _fun147746_ip = 371; continue _fun147746 }
case 294:
                        r12 = _closure1_slot2;
                        r5 = _closure1_slot3;
                        r7 = _env_r5_slot1;
                        r5 = _env_r5_slot2;
                        r5 = r5[r20];
                        r9 = r7.bind(r11)(r5);
                        r7 = r9.fetchMessages;
                        r5 = {'guildId': null, 'channelId': null, 'forceFetch': true, 'skipLocalFetch': true};
                        r14 = _env_r12_slot1;
                        r13 = r14.getGuildId;
                        r13 = r13.bind(r14)();
                        r5[0] = r13;
                        r12 = _env_r12_slot1;
                        r12 = r12.id;
                        r5[1] = r12;
                        r5 = r7.bind(r9)(r5);
case 371:
                        r5 = _closure1_slot2;
                        r7 = _closure1_slot3;
                        r13 = _env_r7_slot16;
                        r12 = 'Navigation TTI freeze armed';
                        r9 = 'success';
                        r9 = r13.bind(r10)(r9, r12);
                        r12 = _env_r7_slot17;
                        r9 = _env_r5_slot0;
                        r15 = r9.toChannelId;
                        r9 = global;
                        r9 = r9.HermesInternal;
                        r14 = r9.concat;
                        r13 = ' from the channel list';
                        r9 = 'Selecting capture channel ';
                        r9 = r14.bind(r9)(r15, r13);
                        r9 = r12.bind(r10)(r9);
                        r9 = _env_r7_slot0;
                        r7 = _env_r7_slot2;
                        r7 = r7[r21];
                        r11 = r9.bind(r11)(r7);
                        r9 = r11.transitionToChannel;
                        r5 = _env_r5_slot0;
                        r7 = r5.toChannelId;
                        r5 = {'navigationReplace': false};
                        r5 = r9.bind(r11)(r7, r5);
                        _fun147746_ip = 1012; continue _fun147746;
case 503:
                        r2 = r6;
                        _closure1_slot5 = r6;
                        r5 = {'value': null, 'done': true};
                        r5[0] = r0;
                        return r5;
case 526:
                        r2 = r6;
                        _closure1_slot5 = r6;
                        throw r0;
case 535:
                        if(!(r3 !== r8)) { _fun147746_ip = 824; continue _fun147746 }
case 542:
                        if(!(r3 !== r4)) { _fun147746_ip = 801; continue _fun147746 }
case 549:
                        r9 = _closure1_slot2;
                        r5 = _closure1_slot3;
                        r12 = _env_r5_slot17;
                        r7 = _env_r9_slot0;
                        r14 = r7.toChannelId;
                        r7 = global;
                        r11 = r7.HermesInternal;
                        r13 = r11.concat;
                        r11 = 'Opening the channel list for ';
                        r11 = r13.bind(r11)(r14);
                        r11 = r12.bind(r10)(r11);
                        r12 = _env_r5_slot0;
                        r5 = _env_r5_slot2;
                        r11 = r5[r17];
                        r5 = undefined;
                        r12 = r12.bind(r5)(r11);
                        r11 = r12.navigateToRootTab;
                        r13 = _env_r9_slot1;
                        r9 = r13.getGuildId;
                        r13 = r9.bind(r13)();
                        var _closure1_slot1 = r13;
                        r9 = null;
                        if(!(r13 == r9)) { _fun147746_ip = 661; continue _fun147746 }
case 649:
                        r9 = _closure1_slot3;
                        r9 = _env_r9_slot12;
                        _closure1_slot1 = r9;
case 661:
                        r9 = {'screen': 'guilds', 'guildId': null, 'resetRoot': true, 'forceNavigate': true, 'drawerOpen': true};
                        r13 = _closure1_slot1;
                        r9[1] = r13;
                        r9 = r11.bind(r12)(r9);
                        if(r9) { _fun147746_ip = 746; continue _fun147746 }
case 687:
                        r9 = _closure1_slot2;
                        r11 = _closure1_slot3;
                        r12 = _env_r11_slot16;
                        r9 = _env_r9_slot0;
                        r13 = r9.toChannelId;
                        r9 = r7.HermesInternal;
                        r11 = r9.concat;
                        r9 = 'Unable to open the channel list for ';
                        r11 = r11.bind(r9)(r13);
                        r9 = 'error';
                        r9 = r12.bind(r10)(r9, r11);
                        _fun147746_ip = 1012; continue _fun147746;
case 746:
                        r9 = r7.Promise;
                        r7 = Object.create(r9.prototype);
                        r17 = function(a0) { // Environment: r5
                            r2 = global;
                            r3 = r2.setTimeout;
                            r0 = 1000;
                            r1 = undefined;
                            r2 = a0;
                            r2 = r3.bind(r1)(r2, r0);
                            return r2;
                        };
                        r18 = r7;
                        r5 = new r19[r9](r18, r17);
                        _closure1_slot4 = r6;
                        r2 = r8;
                        _closure1_slot5 = r8;
                        r7 = r5 instanceof Object ? r5 : r7;
                        r5 = {'value': null, 'done': false};
                        r5[0] = r7;
                        return r5;
case 801:
                        r2 = r6;
                        _closure1_slot5 = r6;
                        r5 = {'value': null, 'done': true};
                        r5[0] = r0;
                        return r5;
case 824:
                        r2 = r6;
                        _closure1_slot5 = r6;
                        throw r0;
case 833:
                        if(!(r3 !== r8)) { _fun147746_ip = 1113; continue _fun147746 }
case 840:
                        if(!(r3 !== r4)) { _fun147746_ip = 1090; continue _fun147746 }
case 847:
                        r5 = _closure1_slot2;
                        r7 = _closure1_slot3;
                        r11 = _env_r7_slot9;
                        r9 = r11.getChannel;
                        r7 = _env_r5_slot0;
                        r7 = r7.toChannelId;
                        r7 = r9.bind(r11)(r7);
                        _env_r5_slot1 = r7;
                        r7 = _env_r5_slot1;
                        r5 = null;
                        if(!(r5 == r7)) { _fun147746_ip = 958; continue _fun147746 }
case 893:
                        r5 = _closure1_slot2;
                        r7 = _closure1_slot3;
                        r9 = _env_r7_slot16;
                        r5 = _env_r5_slot0;
                        r12 = r5.toChannelId;
                        r5 = global;
                        r5 = r5.HermesInternal;
                        r11 = r5.concat;
                        r7 = ' because it does not exist on the client';
                        r5 = 'Unable to switch to channel ';
                        r7 = r11.bind(r5)(r12, r7);
                        r5 = 'error';
                        r5 = r9.bind(r10)(r5, r7);
                        _fun147746_ip = 1012; continue _fun147746;
case 958:
                        r5 = _closure1_slot3;
                        r9 = _env_r5_slot17;
                        r7 = 'Resetting navigation to DMs';
                        r7 = r9.bind(r10)(r7);
                        r5 = _env_r5_slot19;
                        r5 = r5.bind(r10)();
                        if(r5) { _fun147746_ip = 1031; continue _fun147746 }
case 988:
                        r5 = _closure1_slot3;
                        r9 = _env_r5_slot16;
                        r7 = 'Unable to reset navigation to DMs';
                        r5 = 'error';
                        r5 = r9.bind(r10)(r5, r7);
case 1012:
                        r2 = r6;
                        _closure1_slot5 = r6;
                        r5 = {'value': undefined, 'done': true};
                        return r5;
case 1031:
                        r5 = global;
                        r9 = r5.Promise;
                        r7 = Object.create(r9.prototype);
                        r5 = undefined;
                        r17 = function(a0) { // Environment: r5
                            r2 = global;
                            r3 = r2.setTimeout;
                            r0 = 1000;
                            r1 = undefined;
                            r2 = a0;
                            r2 = r3.bind(r1)(r2, r0);
                            return r2;
                        };
                        r18 = r7;
                        r5 = new r19[r9](r18, r17);
                        _closure1_slot4 = r4;
                        r2 = r8;
                        _closure1_slot5 = r8;
                        r7 = r5 instanceof Object ? r5 : r7;
                        r5 = {'value': null, 'done': false};
                        r5[0] = r7;
                        return r5;
case 1090:
                        r2 = r6;
                        _closure1_slot5 = r6;
                        r5 = {'value': null, 'done': true};
                        r5[0] = r0;
                        return r5;
case 1113:
                        r2 = r6;
                        _closure1_slot5 = r6;
                        throw r0;
case 1122:
                        r8 = 1;
                        if(!(r3 !== r8)) { _fun147746_ip = 1263; continue _fun147746 }
case 1132:
                        if(!(r3 !== r4)) { _fun147746_ip = 1240; continue _fun147746 }
case 1136:
                        var _closure1_slot3 = r5;
                        var _closure1_slot2 = r9;
                        r7 = _closure1_slot0;
                        var _closure1_slot0 = r7;
                        r7 = undefined;
                        var _closure1_slot1 = r7;
                        r9 = _closure0_slot17;
                        r7 = 'Waiting for socket connection';
                        r7 = r9.bind(r10)(r7);
                        r7 = global;
                        r9 = r7.Promise;
                        r7 = Object.create(r9.prototype);
                        r17 = function(a0) { // Environment: r5
                            r2 = _closure0_slot7;
                            r0 = undefined;
                            r1 = a0;
                            r1 = r2.bind(r0)(r1);
                            return r1;
                        };
                        r18 = r7;
                        r5 = new r19[r9](r18, r17);
                        _closure1_slot4 = r8;
                        r2 = r8;
                        _closure1_slot5 = r8;
                        r7 = r5 instanceof Object ? r5 : r7;
                        r5 = {'value': null, 'done': false};
                        r5[0] = r7;
                        return r5;
case 1240:
                        r2 = r6;
                        _closure1_slot5 = r6;
                        r5 = {'value': null, 'done': true};
                        r5[0] = r0;
                        return r5;
case 1263:
                        r2 = r6;
                        _closure1_slot5 = r6;
                        throw r0;
case 1272:
                        CatchBlockStart(arg_register=5);
                        r2 = r6;
                        _closure1_slot5 = r6;
                        throw r5;
case 1283:
                        r5 = 1;
                        if(!(r3 !== r5)) { _fun147746_ip = 1322; continue _fun147746 }
case 1290:
                        if(!(r3 !== r4)) { _fun147746_ip = 1306; continue _fun147746 }
case 1294:
                        r3 = {'value': undefined, 'done': true};
                        return r3;
case 1306:
                        r3 = {'value': null, 'done': true};
                        r3[0] = r0;
                        return r3;
case 1322:
                        throw r0;
case 1324:
                        r0 = 3;
                        r2 = r0;
                        _closure1_slot5 = r0;
                        r17 = 'Generator functions may not be called on executing generators';
                        r0 = throwTypeError(r18);
                    }
                };
                return r1;
            };
            r2 = r5.bind(r0)(r2);
            _closure0_slot18 = r2;
            r4 = r2.apply;
            if(r4) { _fun78627_ip = 49; continue _fun78627 }
case 39:
            r1 = arguments;
            r1 = r4.bind(r2)(r3, r1);
            _fun78627_ip = 59; continue _fun78627;
case 49:
            r7 = r2;
            r6 = r3;
            r1 = applyArguments(r8, r7);
case 59:
            return r1;
        }
    };
    var _closure0_slot18 = r4;
    r4 = function() { // Original name: resetNavigationToDMs, environment: r3
        r2 = _closure0_slot0;
        r1 = _closure0_slot2;
        r1 = r1[r17];
        r0 = undefined;
        r3 = r2.bind(r0)(r1);
        r2 = r3.navigateToRootTab;
        r1 = {'screen': 'guilds', 'guildId': null, 'resetRoot': true, 'forceNavigate': true, 'drawerOpen': false};
        r4 = _closure0_slot12;
        r1[1] = r4;
        r1 = r2.bind(r3)(r1);
        return r1;
    };
    var _closure0_slot19 = r4;
    r4 = function() { // Original name: _navigateToDMs, environment: r3
        _fun78629: for(var _fun78629_ip = 0; ; ) switch(_fun78629_ip) {
case 0:
            r0 = undefined;
            r1 = undefined;
            r3 = this;
            r5 = _closure0_slot4;
            r2 = function() { // Environment: r4
                r0 = 0;
                var _closure1_slot2 = r0;
                var _closure1_slot3 = r0;
                r1 = function* () { // Original name: ?anon_0_, environment: r1
                    _fun147747: for(var _fun147747_ip = 0; ; ) switch(_fun147747_ip) {
case 0:
                        r0 = _closure1_slot3;
                        r2 = r0;
                        r4 = 2;
                        if(!(r0 !== r4)) { _fun147747_ip = 455; continue _fun147747 }
case 20:
                        r0 = arguments[1];
                        r3 = arguments[0];
                        r5 = r2;
                        r6 = 3;
                        if(!(r5 !== r6)) { _fun147747_ip = 414; continue _fun147747 }
case 39:
                        r2 = r4;
                        _closure1_slot3 = r4;
                        r5 = _closure1_slot2;
                        r10 = 0;
                        if(!(r10 !== r5)) { _fun147747_ip = 292; continue _fun147747 }
case 59:
                        r8 = 1;
                        if(!(r8 !== r5)) { _fun147747_ip = 132; continue _fun147747 }
case 66:
                        if(!(r3 !== r8)) { _fun147747_ip = 123; continue _fun147747 }
case 70:
                        if(!(r3 !== r4)) { _fun147747_ip = 100; continue _fun147747 }
case 74:
                        r5 = _closure1_slot1;
                        r9 = _env_r5_slot16;
                        r7 = 'Navigation reset to DMs';
                        r5 = 'success';
                        r5 = r9.bind(r10)(r5, r7);
                        _fun147747_ip = 182; continue _fun147747;
case 100:
                        r2 = r6;
                        _closure1_slot3 = r6;
                        r5 = {'value': null, 'done': true};
                        r5[0] = r0;
                        return r5;
case 123:
                        r2 = r6;
                        _closure1_slot3 = r6;
                        throw r0;
case 132:
                        if(!(r3 !== r8)) { _fun147747_ip = 283; continue _fun147747 }
case 139:
                        if(!(r3 !== r4)) { _fun147747_ip = 260; continue _fun147747 }
case 143:
                        r5 = _closure1_slot1;
                        r5 = _env_r5_slot19;
                        r5 = r5.bind(r10)();
                        if(r5) { _fun147747_ip = 201; continue _fun147747 }
case 158:
                        r5 = _closure1_slot1;
                        r9 = _env_r5_slot16;
                        r7 = 'Unable to reset navigation to DMs';
                        r5 = 'error';
                        r5 = r9.bind(r10)(r5, r7);
case 182:
                        r2 = r6;
                        _closure1_slot3 = r6;
                        r5 = {'value': undefined, 'done': true};
                        return r5;
case 201:
                        r5 = global;
                        r9 = r5.Promise;
                        r7 = Object.create(r9.prototype);
                        r5 = undefined;
                        r12 = function(a0) { // Environment: r5
                            r2 = global;
                            r3 = r2.setTimeout;
                            r0 = 1000;
                            r1 = undefined;
                            r2 = a0;
                            r2 = r3.bind(r1)(r2, r0);
                            return r2;
                        };
                        r13 = r7;
                        r5 = new r14[r9](r13, r12);
                        _closure1_slot2 = r4;
                        r2 = r8;
                        _closure1_slot3 = r8;
                        r7 = r5 instanceof Object ? r5 : r7;
                        r5 = {'value': null, 'done': false};
                        r5[0] = r7;
                        return r5;
case 260:
                        r2 = r6;
                        _closure1_slot3 = r6;
                        r5 = {'value': null, 'done': true};
                        r5[0] = r0;
                        return r5;
case 283:
                        r2 = r6;
                        _closure1_slot3 = r6;
                        throw r0;
case 292:
                        r8 = 1;
                        if(!(r3 !== r8)) { _fun147747_ip = 394; continue _fun147747 }
case 299:
                        if(!(r3 !== r4)) { _fun147747_ip = 371; continue _fun147747 }
case 303:
                        var _closure1_slot1 = r5;
                        var _closure1_slot0 = r5;
                        r7 = global;
                        r9 = r7.Promise;
                        r7 = Object.create(r9.prototype);
                        r12 = function(a0) { // Environment: r5
                            r2 = _closure0_slot7;
                            r0 = undefined;
                            r1 = a0;
                            r1 = r2.bind(r0)(r1);
                            return r1;
                        };
                        r13 = r7;
                        r5 = new r14[r9](r13, r12);
                        _closure1_slot2 = r8;
                        r2 = r8;
                        _closure1_slot3 = r8;
                        r7 = r5 instanceof Object ? r5 : r7;
                        r5 = {'value': null, 'done': false};
                        r5[0] = r7;
                        return r5;
case 371:
                        r2 = r6;
                        _closure1_slot3 = r6;
                        r5 = {'value': null, 'done': true};
                        r5[0] = r0;
                        return r5;
case 394:
                        r2 = r6;
                        _closure1_slot3 = r6;
                        throw r0;
case 403:
                        CatchBlockStart(arg_register=5);
                        r2 = r6;
                        _closure1_slot3 = r6;
                        throw r5;
case 414:
                        r5 = 1;
                        if(!(r3 !== r5)) { _fun147747_ip = 453; continue _fun147747 }
case 421:
                        if(!(r3 !== r4)) { _fun147747_ip = 437; continue _fun147747 }
case 425:
                        r3 = {'value': undefined, 'done': true};
                        return r3;
case 437:
                        r3 = {'value': null, 'done': true};
                        r3[0] = r0;
                        return r3;
case 453:
                        throw r0;
case 455:
                        r0 = 3;
                        r2 = r0;
                        _closure1_slot3 = r0;
                        r12 = 'Generator functions may not be called on executing generators';
                        r0 = throwTypeError(r13);
                    }
                };
                return r1;
            };
            r2 = r5.bind(r0)(r2);
            _closure0_slot20 = r2;
            r4 = r2.apply;
            if(r4) { _fun78629_ip = 49; continue _fun78629 }
case 39:
            r1 = arguments;
            r1 = r4.bind(r2)(r3, r1);
            _fun78629_ip = 59; continue _fun78629;
case 49:
            r7 = r2;
            r6 = r3;
            r1 = applyArguments(r8, r7);
case 59:
            return r1;
        }
    };
    var _closure0_slot20 = r4;
    r0 = undefined;
    r4 = function(a0) { // Original name: getErrorDetails
        _fun78630: for(var _fun78630_ip = 0; ; ) switch(_fun78630_ip) {
case 0:
            r0 = a0;
            r3 = null;
            if(!(r3 != r0)) { _fun78630_ip = 173; continue _fun78630 }
case 12:
            if(!((typeof r0 === 'function' || r0 === null))) { _fun78630_ip = 173; continue _fun78630 }
case 20:
            r2 = global;
            r1 = r2.Set;
            r4 = Object.create(r1.prototype);
            r12 = r4;
            r1 = new r13[r1](r12);
            r5 = r1 instanceof Object ? r1 : r4;
            r4 = undefined;
            r1 = r0;
            if(!(r3 != r1)) { _fun78630_ip = 132; continue _fun78630 }
case 52:
            r7 = r2.Object;
            r6 = r7.getOwnPropertyNames;
            r8 = r6.bind(r7)(r1);
            r6 = r8;
            r7 = r6[Symbol.iterator];
            r6 = r7().next;
            r8 = r1;
case 78:
            r9 = r6;
            r10 = r9().value;
            r9 = r7;
            if(!(r9 !== r4)) { _fun78630_ip = 111; continue _fun78630 }
case 92:
            r9 = r5.add;
            r9 = r9.bind(r5)(r10);
            _fun78630_ip = 78; continue _fun78630;
case 104:
            CatchBlockStart(arg_register=6);
            r7.return();
            throw r6;
case 111:
            r7 = r2.Object;
            r6 = r7.getPrototypeOf;
            r1 = r6.bind(r7)(r8);
            if(r3 != r1) { _fun78630_ip = 52; continue _fun78630 }
case 132:
            r1 = {};
            r2 = r5;
            r3 = r2[Symbol.iterator];
            r2 = r3().next;
case 140:
            r5 = r2;
            r6 = r5().value;
            r5 = r3;
            if(!(r5 !== r4)) { _fun78630_ip = 171; continue _fun78630 }
case 154:
            r5 = r0[r6];
            r1[r6] = r5;
            _fun78630_ip = 140; continue _fun78630;
case 164:
            CatchBlockStart(arg_register=2);
            r3.return();
            throw r2;
case 171:
            return r1;
case 173:
            return r0;
        }
    };
    var _closure0_slot21 = r4;
    r6 = function() { // Original name: setupTTITest, environment: r3
        _fun78631: for(var _fun78631_ip = 0; ; ) switch(_fun78631_ip) {
case 0:
            r1 = undefined;
            r3 = this;
            r2 = _closure0_slot23;
            r4 = r2.apply;
            if(r4) { _fun78631_ip = 31; continue _fun78631 }
case 21:
            r1 = arguments;
            r1 = r4.bind(r2)(r3, r1);
            _fun78631_ip = 41; continue _fun78631;
case 31:
            r6 = r2;
            r5 = r3;
            r1 = applyArguments(r7, r6);
case 41:
            return r1;
        }
    };
    var _closure0_slot22 = r6;
    r4 = function() { // Original name: _setupTTITest, environment: r3
        _fun78632: for(var _fun78632_ip = 0; ; ) switch(_fun78632_ip) {
case 0:
            r0 = undefined;
            r1 = undefined;
            r3 = this;
            r5 = _closure0_slot4;
            r2 = function(a0) { // Environment: r4
                r2 = a0;
                var _closure1_slot0 = r2;
                r2 = arguments[1];
                var _closure1_slot1 = r2;
                r0 = 0;
                var _closure1_slot6 = r0;
                var _closure1_slot7 = r0;
                var _closure1_slot5 = r0;
                r1 = function* (a0) { // Original name: ?anon_0_, environment: r1
                    _fun147748: for(var _fun147748_ip = 0; ; ) switch(_fun147748_ip) {
case 0:
                        r0 = _closure1_slot7;
                        r2 = r0;
                        r4 = 2;
                        if(!(r0 !== r4)) { _fun147748_ip = 3092; continue _fun147748 }
case 20:
                        r0 = arguments[1];
                        r3 = a0;
                        r49 = r2;
                        r7 = 3;
                        r48 = 0;
                        r47 = 'Sending reply';
                        r46 = 'Setup Complete';
                        r45 = 'success';
                        r5 = 1;
                        r44 = undefined;
                        r43 = false;
                        r41 = 'Logging out old user';
                        r40 = 'TTI_test';
                        r39 = 5;
                        r38 = 'Logging in new user';
                        r37 = global;
                        r36 = 4;
                        r35 = 'Waiting for socket connection';
                        r34 = null;
                        r33 = 'error';
                        r32 = 8;
                        r31 = 6;
                        r30 = 7;
                        r29 = ' after login but was ';
                        r28 = ', expected id ';
                        r27 = 'Unable to login ';
                        r26 = 9;
                        r25 = 'Inviting to target guild';
                        r24 = ' because it does not exist on the client';
                        r23 = 'Unable to switch to channel ';
                        r22 = 20000;
                        r21 = 11;
                        r20 = 'Switching to desired channel';
                        r19 = 'Setup finished with no stored auth token, so measured launches would cold start on the login screen regardless of the startup route.';
                        r18 = 13;
                        r17 = 'Writing caches';
                        r16 = 10;
                        r15 = 'Invite API call finished';
                        r14 = 12;
                        r13 = '). Measured launches would cold start somewhere other than the scenario channel.';
                        r12 = ' (persisted=';
                        r11 = ' but DefaultRouteStore holds ';
                        r10 = ': expected ';
                        r9 = 'Setup could not establish the startup route for channel ';
                        r8 = 14;
                        if(!(r49 !== r7)) { _fun147748_ip = 3054; continue _fun147748 }
case 228:
                        r2 = r4;
                        _closure1_slot7 = r4;
                        r49 = _closure1_slot6;
                        SwitchImm(value_reg=49, jump_table_address=3112, default_jump_address=2926, unsigned_min_value=0, unsigned_max_value=13) // Switch table: [2771, 2269, 2203, 2108, 2029, 1982, 1862, 1711, 911, 788, 745, 606, 352, 257];
case 257:
                        if(!(r3 !== r5)) { _fun147748_ip = 343; continue _fun147748 }
case 261:
                        if(!(r3 !== r4)) { _fun147748_ip = 320; continue _fun147748 }
case 265:
                        r51 = r37.Promise;
                        r50 = Object.create(r51.prototype);
                        r63 = function(a0) {
                            r2 = global;
                            r3 = r2.setTimeout;
                            r0 = 1000;
                            r1 = undefined;
                            r2 = a0;
                            r2 = r3.bind(r1)(r2, r0);
                            return r2;
                        };
                        r64 = r50;
                        r49 = new r65[r51](r64, r63);
                        _closure1_slot6 = r8;
                        r2 = r5;
                        _closure1_slot7 = r5;
                        r50 = r49 instanceof Object ? r49 : r50;
                        r49 = {'value': null, 'done': false};
                        r49[0] = r50;
                        return r49;
case 320:
                        r2 = r7;
                        _closure1_slot7 = r7;
                        r49 = {'value': null, 'done': true};
                        r49[0] = r0;
                        return r49;
case 343:
                        r2 = r7;
                        _closure1_slot7 = r7;
                        throw r0;
case 352:
                        if(!(r3 !== r5)) { _fun147748_ip = 597; continue _fun147748 }
case 359:
                        if(!(r3 !== r4)) { _fun147748_ip = 574; continue _fun147748 }
case 366:
                        r49 = _closure1_slot2;
                        _env_r49_slot11 = r0;
                        r50 = _env_r49_slot11;
                        if(!(r43 !== r50)) { _fun147748_ip = 407; continue _fun147748 }
case 382:
                        r50 = _closure1_slot3;
                        r50 = _env_r50_slot10;
                        r50 = r50.lastNonVoiceRoute;
                        r49 = _env_r49_slot9;
                        if(!(r50 !== r49)) { _fun147748_ip = 1016; continue _fun147748 }
case 407:
                        r49 = _closure1_slot2;
                        r50 = _closure1_slot3;
                        r52 = r37.Error;
                        r51 = _env_r49_slot0;
                        r55 = r51.channelId;
                        r61 = _env_r49_slot9;
                        r50 = _env_r50_slot10;
                        r59 = r50.lastNonVoiceRoute;
                        r51 = r37.String;
                        r50 = _env_r49_slot11;
                        r50 = r43 !== r50;
                        r57 = r51.bind(r44)(r50);
                        r50 = r37.HermesInternal;
                        r50 = r50.concat;
                        r64 = r9;
                        r63 = r55;
                        r62 = r10;
                        r60 = r11;
                        r58 = r12;
                        r56 = r13;
                        r63 = r65[r50](r64, r63, r62, r61, r60, r59, r58, r57, r56);
                        r51 = Object.create(r52.prototype);
                        r64 = r51;
                        r50 = new r65[r52](r64, r63);
                        r50 = r50 instanceof Object ? r50 : r51;
                        _env_r49_slot12 = r50;
                        r50 = _env_r49_slot1;
                        r49 = _closure1_slot2;
                        if(r50) { _fun147748_ip = 568; continue _fun147748 }
case 526:
                        r50 = _closure1_slot3;
                        r51 = _env_r50_slot16;
                        r50 = _env_r49_slot12;
                        r50 = r50.message;
                        r50 = r51.bind(r48)(r33, r50);
                        r2 = r7;
                        _closure1_slot7 = r7;
                        r50 = {'value': undefined, 'done': true};
                        return r50;
case 568:
                        r49 = _env_r49_slot12;
                        throw r49;
case 574:
                        r2 = r7;
                        _closure1_slot7 = r7;
                        r49 = {'value': null, 'done': true};
                        r49[0] = r0;
                        return r49;
case 597:
                        r2 = r7;
                        _closure1_slot7 = r7;
                        throw r0;
case 606:
                        if(!(r3 !== r5)) { _fun147748_ip = 736; continue _fun147748 }
case 613:
                        if(!(r3 !== r4)) { _fun147748_ip = 713; continue _fun147748 }
case 617:
                        r49 = _closure1_slot2;
                        _env_r49_slot10 = r0;
                        r50 = _env_r49_slot10;
                        if(r50) { _fun147748_ip = 668; continue _fun147748 }
case 632:
                        r50 = _closure1_slot3;
                        r51 = _env_r50_slot0;
                        r50 = _env_r50_slot2;
                        r50 = r50[r25];
                        r51 = r51.bind(r44)(r50);
                        r50 = r51.saveLastNonVoiceRoute;
                        r49 = _env_r49_slot9;
                        r49 = r50.bind(r51)(r49);
case 668:
                        r49 = _closure1_slot3;
                        r50 = _env_r49_slot10;
                        r49 = r50.asyncPersist;
                        r50 = r49.bind(r50)();
                        _closure1_slot6 = r14;
                        r2 = r5;
                        _closure1_slot7 = r5;
                        r49 = {'value': null, 'done': false};
                        r49[0] = r50;
                        return r49;
case 713:
                        r2 = r7;
                        _closure1_slot7 = r7;
                        r49 = {'value': null, 'done': true};
                        r49[0] = r0;
                        return r49;
case 736:
                        r2 = r7;
                        _closure1_slot7 = r7;
                        throw r0;
case 745:
                        if(!(r3 !== r5)) { _fun147748_ip = 779; continue _fun147748 }
case 749:
                        if(!(r3 === r4)) { _fun147748_ip = 996; continue _fun147748 }
case 756:
                        r2 = r7;
                        _closure1_slot7 = r7;
                        r49 = {'value': null, 'done': true};
                        r49[0] = r0;
                        return r49;
case 779:
                        r2 = r7;
                        _closure1_slot7 = r7;
                        throw r0;
case 788:
                        if(!(r3 !== r5)) { _fun147748_ip = 902; continue _fun147748 }
case 792:
                        if(!(r3 !== r4)) { _fun147748_ip = 879; continue _fun147748 }
case 796:
                        r49 = _closure1_slot2;
                        r49 = _env_r49_slot1;
                        if(r49) { _fun147748_ip = 820; continue _fun147748 }
case 807:
                        r49 = _closure1_slot3;
                        r49 = _env_r49_slot17;
                        r49 = r49.bind(r48)(r15);
case 820:
                        r49 = _closure1_slot2;
                        r51 = r37.Promise;
                        r50 = Object.create(r51.prototype);
                        r63 = function(a0, a1) { // Environment: r49
                            r3 = a0;
                            var _closure0_slot0 = r3;
                            r3 = global;
                            r4 = r3.setTimeout;
                            r0 = 15000;
                            r1 = undefined;
                            r3 = a1;
                            r3 = r4.bind(r1)(r3, r0);
                            var _closure0_slot1 = r3;
                            r4 = _env_r3_slot11;
                            r3 = r4.addConditionalChangeListener;
                            r2 = function() { // Environment: r2
                                _fun153358: for(var _fun153358_ip = 0; ; ) switch(_fun153358_ip) {
case 0:
                                    r5 = _env_r1_slot11;
                                    r4 = r5.getGuild;
                                    r3 = _env_r2_slot0;
                                    r3 = r3.invite;
                                    r3 = r3.expectedGuildId;
                                    r3 = r4.bind(r5)(r3);
                                    r0 = null;
                                    if(!(r0 == r3)) { _fun153358_ip = 48; continue _fun153358 }
case 44:
                                    r0 = undefined;
                                    return r0;
case 48:
                                    r2 = _env_r2_slot1;
                                    if(r2) { _fun153358_ip = 135; continue _fun153358 }
case 55:
                                    r4 = _env_r1_slot14;
                                    r3 = r4.log;
                                    r2 = 'Invited guild available in the store';
                                    r2 = r3.bind(r4)(r2);
                                    r2 = global;
                                    r4 = r2.JSON;
                                    r3 = r4.stringify;
                                    r2 = {'type': 'status', 'message': 'Invited guild available in the store'};
                                    r3 = r3.bind(r4)(r2);
                                    r2 = _env_r1_slot1;
                                    r1 = _env_r1_slot2;
                                    r1 = r1[r10];
                                    r0 = undefined;
                                    r2 = r2.bind(r0)(r1);
                                    r1 = r2.logToDevice;
                                    r1 = r1.bind(r2)(r3);
case 135:
                                    r2 = global;
                                    r3 = r2.clearTimeout;
                                    r2 = _closure0_slot1;
                                    r0 = undefined;
                                    r2 = r3.bind(r0)(r2);
                                    r1 = _closure0_slot0;
                                    r1 = r1.bind(r0)();
                                    r0 = false;
                                    return r0;
                                }
                            };
                            r2 = r3.bind(r4)(r2);
                            return r1;
                        };
                        r64 = r50;
                        r49 = new r65[r51](r64, r63);
                        _closure1_slot6 = r16;
                        r2 = r5;
                        _closure1_slot7 = r5;
                        r50 = r49 instanceof Object ? r49 : r50;
                        r49 = {'value': null, 'done': false};
                        r49[0] = r50;
                        return r49;
case 879:
                        r2 = r7;
                        _closure1_slot7 = r7;
                        r49 = {'value': null, 'done': true};
                        r49[0] = r0;
                        return r49;
case 902:
                        r2 = r7;
                        _closure1_slot7 = r7;
                        throw r0;
case 911:
                        if(!(r3 !== r5)) { _fun147748_ip = 1702; continue _fun147748 }
case 918:
                        if(!(r3 !== r4)) { _fun147748_ip = 1679; continue _fun147748 }
case 925:
                        r49 = _closure1_slot2;
                        r49 = _env_r49_slot0;
                        r49 = r49.invite;
                        r49 = r34 != r49;
                        if(!r49) { _fun147748_ip = 990; continue _fun147748 }
case 946:
                        r50 = _closure1_slot2;
                        r51 = _closure1_slot3;
                        r52 = _env_r51_slot11;
                        r51 = r52.getGuild;
                        r50 = _env_r50_slot0;
                        r50 = r50.invite;
                        r50 = r50.expectedGuildId;
                        r50 = r51.bind(r52)(r50);
                        r49 = r34 == r50;
case 990:
                        if(r49) { _fun147748_ip = 1549; continue _fun147748 }
case 996:
                        r49 = _closure1_slot2;
                        r49 = _env_r49_slot0;
                        r49 = r49.channelId;
                        if(!(r34 == r49)) { _fun147748_ip = 1211; continue _fun147748 }
case 1016:
                        r49 = _closure1_slot3;
                        r50 = _env_r49_slot8;
                        r49 = r50.getToken;
                        r49 = r49.bind(r50)();
                        if(!(r34 != r49)) { _fun147748_ip = 1120; continue _fun147748 }
case 1038:
                        r49 = _closure1_slot2;
                        r49 = _env_r49_slot1;
                        if(r49) { _fun147748_ip = 1062; continue _fun147748 }
case 1049:
                        r49 = _closure1_slot3;
                        r49 = _env_r49_slot17;
                        r49 = r49.bind(r48)(r17);
case 1062:
                        r49 = _closure1_slot3;
                        r50 = _env_r49_slot0;
                        r49 = _env_r49_slot2;
                        r49 = r49[r26];
                        r50 = r50.bind(r44)(r49);
                        r49 = r50.writeCaches;
                        r50 = r49.bind(r50)();
                        _closure1_slot6 = r18;
                        r2 = r5;
                        _closure1_slot7 = r5;
                        r49 = {'value': null, 'done': false};
                        r49[0] = r50;
                        return r49;
case 1120:
                        r49 = _closure1_slot2;
                        r50 = r37.Error;
                        r51 = Object.create(r50.prototype);
                        r64 = r51;
                        r63 = r19;
                        r50 = new r65[r50](r64, r63);
                        r50 = r50 instanceof Object ? r50 : r51;
                        _env_r49_slot13 = r50;
                        r50 = _env_r49_slot1;
                        r49 = _closure1_slot2;
                        if(r50) { _fun147748_ip = 1205; continue _fun147748 }
case 1163:
                        r50 = _closure1_slot3;
                        r51 = _env_r50_slot16;
                        r50 = _env_r49_slot13;
                        r50 = r50.message;
                        r50 = r51.bind(r48)(r33, r50);
                        r2 = r7;
                        _closure1_slot7 = r7;
                        r50 = {'value': undefined, 'done': true};
                        return r50;
case 1205:
                        r49 = _env_r49_slot13;
                        throw r49;
case 1211:
                        r49 = _closure1_slot2;
                        r50 = _closure1_slot3;
                        r52 = _env_r50_slot9;
                        r51 = r52.getChannel;
                        r50 = _env_r49_slot0;
                        r50 = r50.channelId;
                        r50 = r51.bind(r52)(r50);
                        _env_r49_slot7 = r50;
                        r49 = _env_r49_slot7;
                        if(!(r34 != r49)) { _fun147748_ip = 1435; continue _fun147748 }
case 1257:
                        r49 = _closure1_slot2;
                        r49 = _env_r49_slot1;
                        if(r49) { _fun147748_ip = 1281; continue _fun147748 }
case 1268:
                        r49 = _closure1_slot3;
                        r49 = _env_r49_slot17;
                        r49 = r49.bind(r48)(r20);
case 1281:
                        r49 = _closure1_slot2;
                        r50 = _closure1_slot3;
                        r52 = _env_r50_slot0;
                        r51 = _env_r50_slot2;
                        r51 = r51[r21];
                        r53 = r52.bind(r44)(r51);
                        r52 = r53.transitionToChannel;
                        r51 = _env_r49_slot0;
                        r51 = r51.channelId;
                        r51 = r52.bind(r53)(r51);
                        r53 = _env_r50_slot13;
                        r52 = r53.CHANNEL;
                        r51 = _env_r50_slot0;
                        r50 = _env_r50_slot2;
                        r50 = r50[r24];
                        r54 = r51.bind(r44)(r50);
                        r51 = r54.getGuildIdForGenericRedirect;
                        r50 = _env_r49_slot7;
                        r51 = r51.bind(r54)(r50);
                        r50 = _env_r49_slot7;
                        r50 = r50.id;
                        r50 = r52.bind(r53)(r51, r50);
                        _env_r49_slot9 = r50;
                        r50 = _env_r49_slot9;
                        r49 = function(a0, a1) { // Original name: waitForStartupRoute, environment: r49
                            _fun152164: for(var _fun152164_ip = 0; ; ) switch(_fun152164_ip) {
case 0:
                                r4 = a0;
                                var _closure1_slot0 = r4;
                                r0 = 20000;
                                var _closure1_slot1 = r0;
                                r3 = _closure0_slot10;
                                r3 = r3.lastNonVoiceRoute;
                                if(!(r3 !== r4)) { _fun152164_ip = 69; continue _fun152164 }
case 37:
                                r3 = global;
                                r4 = r3.Promise;
                                r3 = Object.create(r4.prototype);
                                r5 = function(a0) { // Environment: r2
                                    r2 = a0;
                                    var _closure2_slot0 = r2;
                                    r4 = function() { // Original name: onChange, environment: r3
                                        _fun153746: for(var _fun153746_ip = 0; ; ) switch(_fun153746_ip) {
case 0:
                                            r5 = _closure0_slot10;
                                            r3 = r5.lastNonVoiceRoute;
                                            r2 = _closure1_slot0;
                                            if(!(r3 === r2)) { _fun153746_ip = 72; continue _fun153746 }
case 24:
                                            r3 = global;
                                            r4 = r3.clearTimeout;
                                            r3 = _closure2_slot2;
                                            r0 = undefined;
                                            r3 = r4.bind(r0)(r3);
                                            r4 = r5.removeChangeListener;
                                            r3 = _closure2_slot1;
                                            r3 = r4.bind(r5)(r3);
                                            r2 = _closure2_slot0;
                                            r1 = true;
                                            r2 = r2.bind(r0)(r1);
case 72:
                                            r1 = undefined;
                                            return r1;
                                        }
                                    };
                                    var _closure2_slot1 = r4;
                                    r2 = global;
                                    r5 = r2.setTimeout;
                                    r0 = _closure1_slot1;
                                    r1 = undefined;
                                    r2 = function() { // Environment: r3
                                        r5 = _closure0_slot10;
                                        r4 = r5.removeChangeListener;
                                        r3 = _closure2_slot1;
                                        r3 = r4.bind(r5)(r3);
                                        r2 = _closure2_slot0;
                                        r0 = false;
                                        r1 = undefined;
                                        r2 = r2.bind(r1)(r0);
                                        return r1;
                                    };
                                    r2 = r5.bind(r1)(r2, r0);
                                    var _closure2_slot2 = r2;
                                    r3 = _closure0_slot10;
                                    r2 = r3.addChangeListener;
                                    r2 = r2.bind(r3)(r4);
                                    return r1;
                                };
                                r6 = r3;
                                r2 = new r7[r4](r6, r5);
                                r2 = r2 instanceof Object ? r2 : r3;
                                _fun152164_ip = 90; continue _fun152164;
case 69:
                                r3 = global;
                                r4 = r3.Promise;
                                r3 = r4.resolve;
                                r1 = true;
                                r2 = r3.bind(r4)(r1);
case 90:
                                return r2;
                            }
                        };
                        r50 = r49.bind(r48)(r50, r22);
                        _closure1_slot6 = r21;
                        r2 = r5;
                        _closure1_slot7 = r5;
                        r49 = {'value': null, 'done': false};
                        r49[0] = r50;
                        return r49;
case 1435:
                        r49 = _closure1_slot2;
                        r52 = r37.Error;
                        r50 = _closure0_slot0;
                        r51 = r50.channelId;
                        r50 = r37.HermesInternal;
                        r50 = r50.concat;
                        r63 = r50.bind(r23)(r51, r24);
                        r51 = Object.create(r52.prototype);
                        r64 = r51;
                        r50 = new r65[r52](r64, r63);
                        r50 = r50 instanceof Object ? r50 : r51;
                        _closure0_slot8 = r50;
                        r50 = _closure0_slot1;
                        r49 = _closure1_slot2;
                        if(r50) { _fun147748_ip = 1543; continue _fun147748 }
case 1501:
                        r50 = _closure1_slot3;
                        r51 = _env_r50_slot16;
                        r50 = _closure0_slot8;
                        r50 = r50.message;
                        r50 = r51.bind(r48)(r33, r50);
                        r2 = r7;
                        _closure1_slot7 = r7;
                        r50 = {'value': undefined, 'done': true};
                        return r50;
case 1543:
                        r49 = _closure0_slot8;
                        throw r49;
case 1549:
                        r49 = _closure1_slot2;
                        r49 = _closure0_slot1;
                        if(r49) { _fun147748_ip = 1573; continue _fun147748 }
case 1560:
                        r49 = _closure1_slot3;
                        r49 = _closure0_slot17;
                        r49 = r49.bind(r48)(r25);
case 1573:
                        r52 = _closure1_slot2;
                        r49 = _closure1_slot3;
                        r50 = _closure0_slot1;
                        r49 = _closure0_slot2;
                        r49 = r49[r23];
                        r51 = r50.bind(r44)(r49);
                        r50 = r51.acceptInvite;
                        r49 = {'inviteKey': null, 'context': null, 'skipOnboarding': true};
                        r52 = _env_r52_slot0;
                        r52 = r52.invite;
                        r52 = r52.code;
                        r49[0] = r52;
                        r52 = {'location': 'tti_tests'};
                        r49[1] = r52;
                        r50 = r50.bind(r51)(r49);
                        _closure1_slot6 = r26;
                        r2 = r5;
                        _closure1_slot7 = r5;
                        r49 = {'value': null, 'done': false};
                        r49[0] = r50;
                        return r49;
case 1679:
                        r2 = r7;
                        _closure1_slot7 = r7;
                        r49 = {'value': null, 'done': true};
                        r49[0] = r0;
                        return r49;
case 1702:
                        r2 = r7;
                        _closure1_slot7 = r7;
                        throw r0;
case 1711:
                        if(!(r3 !== r5)) { _fun147748_ip = 1853; continue _fun147748 }
case 1718:
                        if(!(r3 !== r4)) { _fun147748_ip = 1826; continue _fun147748 }
case 1722:
                        r49 = _closure1_slot2;
                        r50 = _closure1_slot3;
                        r51 = _env_r50_slot8;
                        r50 = r51.getId;
                        r50 = r50.bind(r51)();
                        _closure0_slot6 = r50;
                        r50 = _closure0_slot6;
                        r49 = _closure0_slot4;
                        if(!(r50 !== r49)) { _fun147748_ip = 2461; continue _fun147748 }
case 1763:
                        r49 = _closure1_slot2;
                        r51 = r37.Error;
                        r63 = _closure0_slot2;
                        r61 = _closure0_slot4;
                        r59 = _closure0_slot6;
                        r49 = r37.HermesInternal;
                        r49 = r49.concat;
                        r64 = r27;
                        r62 = r28;
                        r60 = r29;
                        r63 = r65[r49](r64, r63, r62, r61, r60, r59);
                        r50 = Object.create(r51.prototype);
                        r64 = r50;
                        r49 = new r65[r51](r64, r63);
                        r49 = r49 instanceof Object ? r49 : r50;
                        throw r49;
case 1826:
                        _closure1_slot5 = r48;
                        r2 = r7;
                        _closure1_slot7 = r7;
                        r49 = {'value': null, 'done': true};
                        r49[0] = r0;
                        return r49;
case 1853:
                        r2 = r7;
                        _closure1_slot7 = r7;
                        throw r0;
case 1862:
                        if(!(r3 !== r5)) { _fun147748_ip = 1973; continue _fun147748 }
case 1866:
                        if(!(r3 !== r4)) { _fun147748_ip = 1946; continue _fun147748 }
case 1870:
                        r49 = _closure1_slot2;
                        r50 = _closure1_slot3;
                        r50 = _env_r50_slot17;
                        r50 = r50.bind(r48)(r35);
                        r51 = r37.Promise;
                        r50 = Object.create(r51.prototype);
                        r63 = function(a0) { // Environment: r49
                            r2 = _closure0_slot7;
                            r0 = undefined;
                            r1 = a0;
                            r1 = r2.bind(r0)(r1);
                            return r1;
                        };
                        r64 = r50;
                        r49 = new r65[r51](r64, r63);
                        _closure1_slot6 = r30;
                        r2 = r5;
                        _closure1_slot7 = r5;
                        r50 = r49 instanceof Object ? r49 : r50;
                        r49 = {'value': null, 'done': false};
                        r49[0] = r50;
                        return r49;
case 1946:
                        _closure1_slot5 = r48;
                        r2 = r7;
                        _closure1_slot7 = r7;
                        r49 = {'value': null, 'done': true};
                        r49[0] = r0;
                        return r49;
case 1973:
                        r2 = r7;
                        _closure1_slot7 = r7;
                        throw r0;
case 1982:
                        if(!(r3 !== r5)) { _fun147748_ip = 2020; continue _fun147748 }
case 1986:
                        if(!(r3 === r4)) { _fun147748_ip = 2431; continue _fun147748 }
case 1993:
                        _closure1_slot5 = r48;
                        r2 = r7;
                        _closure1_slot7 = r7;
                        r49 = {'value': null, 'done': true};
                        r49[0] = r0;
                        return r49;
case 2020:
                        r2 = r7;
                        _closure1_slot7 = r7;
                        throw r0;
case 2029:
                        if(!(r3 !== r5)) { _fun147748_ip = 2099; continue _fun147748 }
case 2033:
                        if(!(r3 !== r4)) { _fun147748_ip = 2072; continue _fun147748 }
case 2037:
                        r49 = _closure1_slot2;
                        r50 = _closure0_slot5;
                        _closure1_slot6 = r31;
                        r2 = r5;
                        _closure1_slot7 = r5;
                        r49 = {'value': null, 'done': false};
                        r49[0] = r50;
                        return r49;
case 2072:
                        _closure1_slot5 = r48;
                        r2 = r7;
                        _closure1_slot7 = r7;
                        r49 = {'value': null, 'done': true};
                        r49[0] = r0;
                        return r49;
case 2099:
                        r2 = r7;
                        _closure1_slot7 = r7;
                        throw r0;
case 2108:
                        if(!(r3 !== r5)) { _fun147748_ip = 2194; continue _fun147748 }
case 2112:
                        if(!(r3 !== r4)) { _fun147748_ip = 2171; continue _fun147748 }
case 2116:
                        r51 = r37.Promise;
                        r50 = Object.create(r51.prototype);
                        r63 = function(a0) {
                            r2 = global;
                            r3 = r2.setTimeout;
                            r0 = 1000;
                            r1 = undefined;
                            r2 = a0;
                            r2 = r3.bind(r1)(r2, r0);
                            return r2;
                        };
                        r64 = r50;
                        r49 = new r65[r51](r64, r63);
                        _closure1_slot6 = r32;
                        r2 = r5;
                        _closure1_slot7 = r5;
                        r50 = r49 instanceof Object ? r49 : r50;
                        r49 = {'value': null, 'done': false};
                        r49[0] = r50;
                        return r49;
case 2171:
                        r2 = r7;
                        _closure1_slot7 = r7;
                        r49 = {'value': null, 'done': true};
                        r49[0] = r0;
                        return r49;
case 2194:
                        r2 = r7;
                        _closure1_slot7 = r7;
                        throw r0;
case 2203:
                        r50 = _closure1_slot2;
                        r49 = _closure1_slot4;
                        r6 = r49;
                        _closure1_slot5 = r48;
                        _env_r50_slot14 = r49;
                        r50 = _env_r50_slot1;
                        if(r50) { _fun147748_ip = 2267; continue _fun147748 }
case 2229:
                        r50 = _closure1_slot3;
                        r51 = _env_r50_slot16;
                        r50 = r49.message;
                        r50 = r51.bind(r48)(r33, r50);
                        r2 = r7;
                        _closure1_slot7 = r7;
                        r50 = {'value': undefined, 'done': true};
                        return r50;
case 2267:
                        throw r49;
case 2269:
                        if(!(r3 !== r5)) { _fun147748_ip = 2762; continue _fun147748 }
case 2276:
                        if(!(r3 !== r4)) { _fun147748_ip = 2739; continue _fun147748 }
case 2283:
                        r49 = _closure1_slot2;
                        r49 = _closure0_slot0;
                        r49 = r49.user;
                        if(!(r34 != r49)) { _fun147748_ip = 2465; continue _fun147748 }
case 2303:
                        r50 = _closure1_slot2;
                        r49 = _env_r50_slot0;
                        r49 = r49.user;
                        r49 = r49.email;
                        _env_r50_slot2 = r49;
                        r49 = _env_r50_slot0;
                        r49 = r49.user;
                        r49 = r49.password;
                        _env_r50_slot3 = r49;
                        r49 = _env_r50_slot0;
                        r49 = r49.user;
                        r49 = r49.expectedId;
                        _env_r50_slot4 = r49;
                        r49 = _closure1_slot3;
                        _closure1_slot5 = r5;
                        r50 = _closure0_slot8;
                        r49 = r50.getId;
                        r49 = r49.bind(r50)();
                        r49 = r34 != r49;
                        if(!r49) { _fun147748_ip = 2425; continue _fun147748 }
case 2395:
                        r50 = _closure1_slot2;
                        r51 = _closure1_slot3;
                        r52 = _env_r51_slot8;
                        r51 = r52.getId;
                        r51 = r51.bind(r52)();
                        r50 = _env_r50_slot4;
                        r49 = r51 !== r50;
case 2425:
                        if(r49) { _fun147748_ip = 2671; continue _fun147748 }
case 2431:
                        r49 = _closure1_slot2;
                        r50 = _closure1_slot3;
                        r51 = _env_r50_slot8;
                        r50 = r51.getId;
                        r50 = r50.bind(r51)();
                        r49 = _closure0_slot4;
                        if(!(r50 === r49)) { _fun147748_ip = 2541; continue _fun147748 }
case 2461:
                        _closure1_slot5 = r48;
case 2465:
                        r49 = _closure1_slot2;
                        r50 = _closure1_slot3;
                        r50 = _env_r50_slot17;
                        r50 = r50.bind(r48)(r35);
                        r51 = r37.Promise;
                        r50 = Object.create(r51.prototype);
                        r63 = function(a0) { // Environment: r49
                            r2 = _closure0_slot7;
                            r0 = undefined;
                            r1 = a0;
                            r1 = r2.bind(r0)(r1);
                            return r1;
                        };
                        r64 = r50;
                        r49 = new r65[r51](r64, r63);
                        _closure1_slot6 = r7;
                        r2 = r5;
                        _closure1_slot7 = r5;
                        r50 = r49 instanceof Object ? r49 : r50;
                        r49 = {'value': null, 'done': false};
                        r49[0] = r50;
                        return r49;
case 2541:
                        r52 = _closure1_slot2;
                        r49 = _closure1_slot3;
                        r50 = _closure0_slot17;
                        r50 = r50.bind(r48)(r38);
                        r53 = r37.Promise;
                        r51 = Object.create(r53.prototype);
                        r63 = function(a0, a1) {
                            _fun152159: for(var _fun152159_ip = 0; ; ) switch(_fun152159_ip) {
case 0:
                                r0 = a0;
                                var _closure0_slot0 = r0;
                                r0 = a1;
                                var _closure0_slot1 = r0;
                                r4 = function(a0, a1) { // Original name: subscribeOnce, environment: r0
                                    r4 = a0;
                                    var _closure0_slot0 = r4;
                                    r2 = a1;
                                    var _closure0_slot1 = r2;
                                    r2 = _env_r1_slot1;
                                    r1 = _env_r1_slot2;
                                    r1 = r1[r13];
                                    r0 = undefined;
                                    r3 = r2.bind(r0)(r1);
                                    r2 = r3.subscribe;
                                    r1 = function() { // Original name: handler, environment: r5
                                        r2 = _closure0_slot1;
                                        r4 = _closure0_slot0;
                                        r0 = undefined;
                                        r2 = r2.bind(r0)(r4);
                                        r3 = _env_r2_slot1;
                                        r2 = _env_r2_slot2;
                                        r2 = r2[r13];
                                        r3 = r3.bind(r0)(r2);
                                        r2 = r3.unsubscribe;
                                        r1 = _closure0_slot2;
                                        r1 = r2.bind(r3)(r4, r1);
                                        return r0;
                                    };
                                    var _closure0_slot2 = r1;
                                    r1 = r2.bind(r3)(r4, r1);
                                    return r0;
                                };
                                r2 = ['LOGIN_MFA_STEP', 'LOGIN_SUSPENDED_USER', 'LOGIN_ACCOUNT_SCHEDULED_FOR_DELETION', 'LOGIN_ACCOUNT_DISABLED', 'LOGIN_PHONE_IP_AUTHORIZATION_REQUIRED', 'LOGIN_FAILURE'];
                                r5 = r2[Symbol.iterator];
                                r2 = r5().next;
                                r3 = 0;
                                r0 = undefined;
case 44:
                                r6 = r2;
                                r7 = r6().value;
                                r6 = r5;
                                if(!(r6 !== r0)) { _fun152159_ip = 80; continue _fun152159 }
case 58:
                                r6 = function(a0) { // Environment: r1
                                    r2 = _closure0_slot1;
                                    r1 = global;
                                    r4 = r1.Error;
                                    r12 = _env_r3_slot2;
                                    r1 = r1.HermesInternal;
                                    r7 = r1.concat;
                                    r9 = "'";
                                    r11 = ". Login failed with event '";
                                    r13 = 'Unable to login ';
                                    r10 = a0;
                                    r12 = r14[r7](r13, r12, r11, r10, r9);
                                    r3 = Object.create(r4.prototype);
                                    r13 = r3;
                                    r1 = new r14[r4](r13, r12);
                                    r0 = undefined;
                                    r1 = r1 instanceof Object ? r1 : r3;
                                    r1 = r2.bind(r0)(r1);
                                    return r0;
                                };
                                r6 = r4.bind(r3)(r7, r6);
                                _fun152159_ip = 44; continue _fun152159;
case 73:
                                CatchBlockStart(arg_register=2);
                                r5.return();
                                throw r2;
case 80:
                                r2 = 'LOGIN_SUCCESS';
                                r1 = function() { // Environment: r1
                                    r1 = _closure0_slot0;
                                    r0 = undefined;
                                    r1 = r1.bind(r0)();
                                    return r1;
                                };
                                r1 = r4.bind(r3)(r2, r1);
                                return r0;
                            }
                        };
                        r64 = r51;
                        r50 = new r65[r53](r64, r63);
                        r50 = r50 instanceof Object ? r50 : r51;
                        _env_r52_slot5 = r50;
                        r50 = _closure0_slot1;
                        r49 = _closure0_slot2;
                        r49 = r49[r22];
                        r51 = r50.bind(r44)(r49);
                        r50 = r51.login;
                        r49 = {'login': null, 'password': null};
                        r53 = _env_r52_slot2;
                        r49[0] = r53;
                        r52 = _env_r52_slot3;
                        r49[1] = r52;
                        r50 = r50.bind(r51)(r49);
                        _closure1_slot6 = r36;
                        r2 = r5;
                        _closure1_slot7 = r5;
                        r49 = {'value': null, 'done': false};
                        r49[0] = r50;
                        return r49;
case 2671:
                        r49 = _closure1_slot3;
                        r50 = _closure0_slot17;
                        r50 = r50.bind(r48)(r41);
                        r50 = _closure0_slot1;
                        r49 = _closure0_slot2;
                        r49 = r49[r22];
                        r50 = r50.bind(r44)(r49);
                        r49 = r50.logout;
                        r50 = r49.bind(r50)(r40);
                        _closure1_slot6 = r39;
                        r2 = r5;
                        _closure1_slot7 = r5;
                        r49 = {'value': null, 'done': false};
                        r49[0] = r50;
                        return r49;
case 2739:
                        r2 = r7;
                        _closure1_slot7 = r7;
                        r49 = {'value': null, 'done': true};
                        r49[0] = r0;
                        return r49;
case 2762:
                        r2 = r7;
                        _closure1_slot7 = r7;
                        throw r0;
case 2771:
                        if(!(r3 !== r5)) { _fun147748_ip = 2917; continue _fun147748 }
case 2778:
                        if(!(r3 !== r4)) { _fun147748_ip = 2894; continue _fun147748 }
case 2782:
                        var _closure1_slot3 = r42;
                        var _closure1_slot2 = r49;
                        var _closure1_slot1 = r44;
                        r50 = _closure1_slot0;
                        var _closure1_slot0 = r50;
                        r50 = _closure1_slot1;
                        if(!(r50 === r44)) { _fun147748_ip = 2819; continue _fun147748 }
case 2817:
                        r50 = false;
case 2819:
                        _closure1_slot1 = r50;
                        var _closure1_slot2 = r44;
                        var _closure1_slot3 = r44;
                        var _closure1_slot4 = r44;
                        var _closure1_slot5 = r44;
                        var _closure1_slot6 = r44;
                        var _closure1_slot7 = r44;
                        var _closure1_slot8 = r44;
                        var _closure1_slot9 = r44;
                        var _closure1_slot10 = r44;
                        var _closure1_slot11 = r44;
                        var _closure1_slot12 = r44;
                        var _closure1_slot13 = r44;
                        _closure1_slot6 = r5;
                        r2 = r5;
                        _closure1_slot7 = r5;
                        r49 = {'value': undefined, 'done': false};
                        return r49;
case 2894:
                        r2 = r7;
                        _closure1_slot7 = r7;
                        r49 = {'value': null, 'done': true};
                        r49[0] = r0;
                        return r49;
case 2917:
                        r2 = r7;
                        _closure1_slot7 = r7;
                        throw r0;
case 2926:
                        if(!(r3 !== r5)) { _fun147748_ip = 3010; continue _fun147748 }
case 2930:
                        if(!(r3 !== r4)) { _fun147748_ip = 2987; continue _fun147748 }
case 2934:
                        r49 = _closure1_slot2;
                        r49 = _closure1_slot1;
                        if(r49) { _fun147748_ip = 2968; continue _fun147748 }
case 2945:
                        r49 = _closure1_slot3;
                        r50 = _closure1_slot17;
                        r50 = r50.bind(r48)(r47);
                        r49 = _closure1_slot16;
                        r49 = r49.bind(r48)(r45, r46);
case 2968:
                        r2 = r7;
                        _closure1_slot7 = r7;
                        r49 = {'value': undefined, 'done': true};
                        return r49;
case 2987:
                        r2 = r7;
                        _closure1_slot7 = r7;
                        r49 = {'value': null, 'done': true};
                        r49[0] = r0;
                        return r49;
case 3010:
                        r2 = r7;
                        _closure1_slot7 = r7;
                        throw r0;
case 3019:
                        CatchBlockStart(arg_register=49);
                        r6 = r49;
                        var _closure1_slot4 = r49;
                        r49 = _closure1_slot5;
                        if(!(r48 !== r49)) { _fun147748_ip = 3045; continue _fun147748 }
case 3036:
                        _closure1_slot6 = r4;
                        _fun147748_ip = 228; continue _fun147748;
case 3045:
                        r2 = r7;
                        _closure1_slot7 = r7;
                        throw r6;
case 3054:
                        if(!(r3 !== r5)) { _fun147748_ip = 3090; continue _fun147748 }
case 3058:
                        if(!(r3 !== r4)) { _fun147748_ip = 3074; continue _fun147748 }
case 3062:
                        r3 = {'value': undefined, 'done': true};
                        return r3;
case 3074:
                        r3 = {'value': null, 'done': true};
                        r3[0] = r0;
                        return r3;
case 3090:
                        throw r0;
case 3092:
                        r0 = 3;
                        r2 = r0;
                        _closure1_slot7 = r0;
                        r63 = 'Generator functions may not be called on executing generators';
                        r0 = throwTypeError(r64);
                    }
                };
                r2 = r1.next;
                r2 = r2.bind(r1)();
                return r1;
            };
            r2 = r5.bind(r0)(r2);
            _closure0_slot23 = r2;
            r4 = r2.apply;
            if(r4) { _fun78632_ip = 49; continue _fun78632 }
case 39:
            r1 = arguments;
            r1 = r4.bind(r2)(r3, r1);
            _fun78632_ip = 59; continue _fun78632;
case 49:
            r7 = r2;
            r6 = r3;
            r1 = applyArguments(r8, r7);
case 59:
            return r1;
        }
    };
    var _closure0_slot23 = r4;
    r4 = function() { // Original name: apiLogin, environment: r3
        _fun78633: for(var _fun78633_ip = 0; ; ) switch(_fun78633_ip) {
case 0:
            r1 = undefined;
            r3 = this;
            r2 = _closure0_slot25;
            r4 = r2.apply;
            if(r4) { _fun78633_ip = 31; continue _fun78633 }
case 21:
            r1 = arguments;
            r1 = r4.bind(r2)(r3, r1);
            _fun78633_ip = 41; continue _fun78633;
case 31:
            r6 = r2;
            r5 = r3;
            r1 = applyArguments(r7, r6);
case 41:
            return r1;
        }
    };
    var _closure0_slot24 = r4;
    r4 = function() { // Original name: _apiLogin, environment: r3
        _fun78634: for(var _fun78634_ip = 0; ; ) switch(_fun78634_ip) {
case 0:
            r0 = undefined;
            r1 = undefined;
            r3 = this;
            r5 = _closure0_slot4;
            r2 = function(a0, a1, a2, a3) { // Environment: r4
                r2 = a0;
                var _closure1_slot0 = r2;
                r2 = a1;
                var _closure1_slot1 = r2;
                r2 = a2;
                var _closure1_slot2 = r2;
                r2 = a3;
                var _closure1_slot3 = r2;
                r0 = 0;
                var _closure1_slot6 = r0;
                var _closure1_slot7 = r0;
                r1 = function* (a0, a1, a2, a3) { // Original name: ?anon_0_, environment: r1
                    _fun147749: for(var _fun147749_ip = 0; ; ) switch(_fun147749_ip) {
case 0:
                        r0 = _closure1_slot7;
                        r2 = r0;
                        r4 = 2;
                        if(!(r0 !== r4)) { _fun147749_ip = 1295; continue _fun147749 }
case 20:
                        r0 = a1;
                        r3 = a0;
                        r5 = r2;
                        r6 = 3;
                        if(!(r5 !== r6)) { _fun147749_ip = 1254; continue _fun147749 }
case 39:
                        r2 = r4;
                        _closure1_slot7 = r4;
                        r7 = _closure1_slot6;
                        r5 = 0;
                        if(!(r5 !== r7)) { _fun147749_ip = 786; continue _fun147749 }
case 59:
                        r8 = 1;
                        if(!(r8 !== r7)) { _fun147749_ip = 674; continue _fun147749 }
case 69:
                        if(!(r4 !== r7)) { _fun147749_ip = 547; continue _fun147749 }
case 76:
                        if(!(r6 !== r7)) { _fun147749_ip = 504; continue _fun147749 }
case 83:
                        r5 = 4;
                        if(!(r5 !== r7)) { _fun147749_ip = 396; continue _fun147749 }
case 93:
                        r5 = 5;
                        if(!(r5 !== r7)) { _fun147749_ip = 292; continue _fun147749 }
case 103:
                        if(!(r3 !== r8)) { _fun147749_ip = 283; continue _fun147749 }
case 110:
                        if(!(r3 !== r4)) { _fun147749_ip = 260; continue _fun147749 }
case 117:
                        r5 = _closure1_slot4;
                        r7 = _closure1_slot5;
                        r9 = _env_r7_slot8;
                        r7 = r9.getId;
                        r7 = r7.bind(r9)();
                        _env_r5_slot4 = r7;
                        r7 = _env_r5_slot4;
                        r5 = _env_r5_slot3;
                        if(!(r7 === r5)) { _fun147749_ip = 186; continue _fun147749 }
case 155:
                        r5 = _closure1_slot4;
                        r7 = _env_r5_slot2;
                        r2 = r6;
                        _closure1_slot7 = r6;
                        r5 = {'value': null, 'done': true};
                        r5[0] = r7;
                        return r5;
case 186:
                        r7 = _closure1_slot4;
                        r5 = global;
                        r9 = r5.Error;
                        r19 = _env_r7_slot0;
                        r17 = _env_r7_slot3;
                        r15 = _env_r7_slot4;
                        r5 = r5.HermesInternal;
                        r11 = r5.concat;
                        r16 = ' after login but was ';
                        r18 = ', expected id ';
                        r20 = 'Unable to login ';
                        r19 = r21[r11](r20, r19, r18, r17, r16, r15);
                        r7 = Object.create(r9.prototype);
                        r20 = r7;
                        r5 = new r21[r9](r20, r19);
                        r5 = r5 instanceof Object ? r5 : r7;
                        throw r5;
case 260:
                        r2 = r6;
                        _closure1_slot7 = r6;
                        r5 = {'value': null, 'done': true};
                        r5[0] = r0;
                        return r5;
case 283:
                        r2 = r6;
                        _closure1_slot7 = r6;
                        throw r0;
case 292:
                        if(!(r3 !== r8)) { _fun147749_ip = 387; continue _fun147749 }
case 296:
                        if(!(r3 !== r4)) { _fun147749_ip = 364; continue _fun147749 }
case 300:
                        r5 = _closure1_slot4;
                        r7 = _closure1_slot5;
                        r9 = _env_r7_slot8;
                        r7 = r9.getId;
                        r7 = r7.bind(r9)();
                        r5 = _env_r5_slot3;
                        if(!(r7 === r5)) { _fun147749_ip = 948; continue _fun147749 }
case 333:
                        r5 = _closure1_slot4;
                        r7 = _env_r5_slot2;
                        r2 = r6;
                        _closure1_slot7 = r6;
                        r5 = {'value': null, 'done': true};
                        r5[0] = r7;
                        return r5;
case 364:
                        r2 = r6;
                        _closure1_slot7 = r6;
                        r5 = {'value': null, 'done': true};
                        r5[0] = r0;
                        return r5;
case 387:
                        r2 = r6;
                        _closure1_slot7 = r6;
                        throw r0;
case 396:
                        if(!(r3 !== r8)) { _fun147749_ip = 495; continue _fun147749 }
case 400:
                        if(!(r3 !== r4)) { _fun147749_ip = 472; continue _fun147749 }
case 404:
                        r5 = _closure1_slot4;
                        r7 = global;
                        r9 = r7.Promise;
                        r7 = Object.create(r9.prototype);
                        r19 = function(a0) { // Environment: r5
                            r2 = _closure0_slot7;
                            r0 = undefined;
                            r1 = a0;
                            r1 = r2.bind(r0)(r1);
                            return r1;
                        };
                        r20 = r7;
                        r5 = new r21[r9](r20, r19);
                        r9 = 5;
                        _closure1_slot6 = r9;
                        r2 = r8;
                        _closure1_slot7 = r8;
                        r7 = r5 instanceof Object ? r5 : r7;
                        r5 = {'value': null, 'done': false};
                        r5[0] = r7;
                        return r5;
case 472:
                        r2 = r6;
                        _closure1_slot7 = r6;
                        r5 = {'value': null, 'done': true};
                        r5[0] = r0;
                        return r5;
case 495:
                        r2 = r6;
                        _closure1_slot7 = r6;
                        throw r0;
case 504:
                        if(!(r3 !== r8)) { _fun147749_ip = 538; continue _fun147749 }
case 508:
                        if(!(r3 === r4)) { _fun147749_ip = 934; continue _fun147749 }
case 515:
                        r2 = r6;
                        _closure1_slot7 = r6;
                        r5 = {'value': null, 'done': true};
                        r5[0] = r0;
                        return r5;
case 538:
                        r2 = r6;
                        _closure1_slot7 = r6;
                        throw r0;
case 547:
                        if(!(r3 !== r8)) { _fun147749_ip = 665; continue _fun147749 }
case 551:
                        if(!(r3 !== r4)) { _fun147749_ip = 642; continue _fun147749 }
case 555:
                        r5 = r0.ok;
                        if(!r5) { _fun147749_ip = 948; continue _fun147749 }
case 567:
                        r5 = _closure1_slot4;
                        r7 = _closure1_slot5;
                        r10 = _env_r7_slot1;
                        r7 = _env_r7_slot2;
                        r9 = r7[r22];
                        r7 = undefined;
                        r10 = r10.bind(r7)(r9);
                        r9 = r10.loginToken;
                        r7 = _closure0_slot2;
                        r5 = false;
                        r7 = r9.bind(r10)(r7, r5);
                        r5 = 4;
                        _closure1_slot6 = r5;
                        r2 = r8;
                        _closure1_slot7 = r8;
                        r5 = {'value': null, 'done': false};
                        r5[0] = r7;
                        return r5;
case 642:
                        r2 = r6;
                        _closure1_slot7 = r6;
                        r5 = {'value': null, 'done': true};
                        r5[0] = r0;
                        return r5;
case 665:
                        r2 = r6;
                        _closure1_slot7 = r6;
                        throw r0;
case 674:
                        if(!(r3 !== r8)) { _fun147749_ip = 777; continue _fun147749 }
case 678:
                        if(!(r3 !== r4)) { _fun147749_ip = 754; continue _fun147749 }
case 682:
                        r5 = _closure1_slot4;
                        _closure0_slot2 = r0;
                        r7 = global;
                        r9 = r7.Promise;
                        r7 = Object.create(r9.prototype);
                        r19 = function(a0) { // Environment: r5
                            r2 = _closure0_slot7;
                            r0 = undefined;
                            r1 = a0;
                            r1 = r2.bind(r0)(r1);
                            return r1;
                        };
                        r20 = r7;
                        r5 = new r21[r9](r20, r19);
                        r9 = 6;
                        _closure1_slot6 = r9;
                        r2 = r8;
                        _closure1_slot7 = r8;
                        r7 = r5 instanceof Object ? r5 : r7;
                        r5 = {'value': null, 'done': false};
                        r5[0] = r7;
                        return r5;
case 754:
                        r2 = r6;
                        _closure1_slot7 = r6;
                        r5 = {'value': null, 'done': true};
                        r5[0] = r0;
                        return r5;
case 777:
                        r2 = r6;
                        _closure1_slot7 = r6;
                        throw r0;
case 786:
                        r7 = 1;
                        if(!(r3 !== r7)) { _fun147749_ip = 1234; continue _fun147749 }
case 796:
                        if(!(r3 !== r4)) { _fun147749_ip = 1211; continue _fun147749 }
case 803:
                        var _closure1_slot5 = r9;
                        var _closure1_slot4 = r5;
                        r8 = _closure1_slot0;
                        var _closure1_slot0 = r8;
                        r8 = _closure1_slot1;
                        var _closure1_slot1 = r8;
                        r8 = _closure1_slot2;
                        var _closure1_slot2 = r8;
                        r10 = _closure1_slot3;
                        var _closure1_slot3 = r10;
                        r11 = undefined;
                        var _closure1_slot4 = r11;
                        r12 = _closure0_slot8;
                        r8 = r12.getId;
                        r8 = r8.bind(r12)();
                        if(!(r8 === r10)) { _fun147749_ip = 911; continue _fun147749 }
case 877:
                        r8 = _closure1_slot2;
                        r10 = null;
                        if(!(r10 == r8)) { _fun147749_ip = 1184; continue _fun147749 }
case 890:
                        r12 = _closure0_slot8;
                        r8 = r12.getToken;
                        r8 = r8.bind(r12)();
                        if(!(r10 == r8)) { _fun147749_ip = 1161; continue _fun147749 }
case 911:
                        r12 = _closure0_slot8;
                        r10 = r12.getId;
                        r12 = r10.bind(r12)();
                        r10 = null;
                        if(!(r10 == r12)) { _fun147749_ip = 1100; continue _fun147749 }
case 934:
                        r10 = _closure1_slot4;
                        r12 = _env_r10_slot2;
                        r10 = null;
                        if(!(r10 == r12)) { _fun147749_ip = 1012; continue _fun147749 }
case 948:
                        r10 = _closure1_slot4;
                        r12 = global;
                        r13 = r12.Promise;
                        r12 = Object.create(r13.prototype);
                        r19 = function(a0, a1) {
                            _fun152167: for(var _fun152167_ip = 0; ; ) switch(_fun152167_ip) {
case 0:
                                r0 = a0;
                                var _closure0_slot0 = r0;
                                r0 = a1;
                                var _closure0_slot1 = r0;
                                r4 = function(a0) { // Original name: _loop, environment: r3
                                    r4 = a0;
                                    var _closure1_slot0 = r4;
                                    r3 = _env_r2_slot1;
                                    r2 = _env_r2_slot2;
                                    r2 = r2[r13];
                                    r0 = undefined;
                                    r3 = r3.bind(r0)(r2);
                                    var _closure1_slot0 = r3;
                                    var _closure1_slot1 = r4;
                                    r1 = function() { // Environment: r1
                                        r2 = _closure0_slot1;
                                        r1 = global;
                                        r4 = r1.Error;
                                        r12 = _env_r3_slot0;
                                        r10 = _closure1_slot0;
                                        r1 = r1.HermesInternal;
                                        r6 = r1.concat;
                                        r9 = "'";
                                        r11 = ". Login failed with action '";
                                        r13 = 'Unable to login ';
                                        r12 = r14[r6](r13, r12, r11, r10, r9);
                                        r3 = Object.create(r4.prototype);
                                        r13 = r3;
                                        r1 = new r14[r4](r13, r12);
                                        r0 = undefined;
                                        r1 = r1 instanceof Object ? r1 : r3;
                                        r1 = r2.bind(r0)(r1);
                                        return r0;
                                    };
                                    var _closure1_slot2 = r1;
                                    r2 = r3.subscribe;
                                    r1 = function(a0) { // Original name: handler, environment: r5
                                        r5 = _closure1_slot0;
                                        r4 = r5.unsubscribe;
                                        r3 = _closure1_slot1;
                                        r2 = _closure1_slot3;
                                        r2 = r4.bind(r5)(r3, r2);
                                        r2 = _closure1_slot2;
                                        r0 = undefined;
                                        r1 = a0;
                                        r1 = r2.bind(r0)(r1);
                                        return r1;
                                    };
                                    var _closure1_slot3 = r1;
                                    r1 = r2.bind(r3)(r4, r1);
                                    return r0;
                                };
                                r1 = ['LOGIN_FAILURE', 'PASSWORDLESS_FAILURE', 'LOGIN_ACCOUNT_SCHEDULED_FOR_DELETION', 'LOGIN_ACCOUNT_DISABLED', 'LOGIN_PHONE_IP_AUTHORIZATION_REQUIRED'];
                                r2 = r1[Symbol.iterator];
                                r1 = r2().next;
                                r8 = 0;
                                r0 = undefined;
case 41:
                                r5 = r1;
                                r5 = r5().value;
                                r6 = r2;
                                if(!(r6 !== r0)) { _fun152167_ip = 69; continue _fun152167 }
case 55:
                                r5 = r4.bind(r8)(r5);
                                _fun152167_ip = 41; continue _fun152167;
case 62:
                                CatchBlockStart(arg_register=1);
                                r2.return();
                                throw r1;
case 69:
                                r7 = _env_r1_slot26;
                                r2 = _env_r1_slot1;
                                r1 = _env_r1_slot2;
                                r5 = r1[r13];
                                r6 = r2.bind(r0)(r5);
                                r5 = 'LOGIN_SUCCESS';
                                r3 = function(a0) { // Environment: r3
                                    r2 = _closure0_slot0;
                                    r1 = a0;
                                    r1 = r1.token;
                                    r0 = undefined;
                                    r1 = r2.bind(r0)(r1);
                                    return r1;
                                };
                                r3 = r7.bind(r8)(r6, r5, r3);
                                r1 = r1[r22];
                                r3 = r2.bind(r0)(r1);
                                r2 = r3.login;
                                r1 = {'login': null, 'password': null};
                                r5 = _env_r4_slot0;
                                r1[0] = r5;
                                r4 = _env_r4_slot1;
                                r1[1] = r4;
                                r1 = r2.bind(r3)(r1);
                                return r0;
                            }
                        };
                        r20 = r12;
                        r10 = new r21[r13](r20, r19);
                        r13 = 1;
                        _closure1_slot6 = r13;
                        r2 = r13;
                        _closure1_slot7 = r13;
                        r12 = r10 instanceof Object ? r10 : r12;
                        r10 = {'value': null, 'done': false};
                        r10[0] = r12;
                        return r10;
case 1012:
                        r12 = _closure1_slot4;
                        r10 = global;
                        r14 = r10.fetch;
                        r13 = {'method': 'HEAD', 'headers': null};
                        r10 = {'Authorization': null};
                        r12 = _env_r12_slot2;
                        r10[0] = r12;
                        r13[1] = r10;
                        r12 = 'https://discord.com/api/users/@me/settings-proto/2';
                        r10 = undefined;
                        r12 = r14.bind(r10)(r12, r13);
                        _closure1_slot6 = r4;
                        r10 = 1;
                        r2 = r10;
                        _closure1_slot7 = r10;
                        r10 = {'value': null, 'done': false};
                        r10[0] = r12;
                        return r10;
case 1100:
                        r10 = _closure0_slot1;
                        r9 = _closure0_slot2;
                        r9 = r9[r22];
                        r11 = r10.bind(r11)(r9);
                        r10 = r11.logout;
                        r9 = 'TTI_test';
                        r9 = r10.bind(r11)(r9);
                        _closure1_slot6 = r6;
                        r2 = r7;
                        _closure1_slot7 = r7;
                        r7 = {'value': null, 'done': false};
                        r7[0] = r9;
                        return r7;
case 1161:
                        r2 = r6;
                        _closure1_slot7 = r6;
                        r7 = {'value': null, 'done': true};
                        r7[0] = r8;
                        return r7;
case 1184:
                        r7 = _closure1_slot2;
                        r2 = r6;
                        _closure1_slot7 = r6;
                        r5 = {'value': null, 'done': true};
                        r5[0] = r7;
                        return r5;
case 1211:
                        r2 = r6;
                        _closure1_slot7 = r6;
                        r5 = {'value': null, 'done': true};
                        r5[0] = r0;
                        return r5;
case 1234:
                        r2 = r6;
                        _closure1_slot7 = r6;
                        throw r0;
case 1243:
                        CatchBlockStart(arg_register=5);
                        r2 = r6;
                        _closure1_slot7 = r6;
                        throw r5;
case 1254:
                        r5 = 1;
                        if(!(r3 !== r5)) { _fun147749_ip = 1293; continue _fun147749 }
case 1261:
                        if(!(r3 !== r4)) { _fun147749_ip = 1277; continue _fun147749 }
case 1265:
                        r3 = {'value': undefined, 'done': true};
                        return r3;
case 1277:
                        r3 = {'value': null, 'done': true};
                        r3[0] = r0;
                        return r3;
case 1293:
                        throw r0;
case 1295:
                        r0 = 3;
                        r2 = r0;
                        _closure1_slot7 = r0;
                        r19 = 'Generator functions may not be called on executing generators';
                        r0 = throwTypeError(r20);
                    }
                };
                return r1;
            };
            r2 = r5.bind(r0)(r2);
            _closure0_slot25 = r2;
            r4 = r2.apply;
            if(r4) { _fun78634_ip = 49; continue _fun78634 }
case 39:
            r1 = arguments;
            r1 = r4.bind(r2)(r3, r1);
            _fun78634_ip = 59; continue _fun78634;
case 49:
            r7 = r2;
            r6 = r3;
            r1 = applyArguments(r8, r7);
case 59:
            return r1;
        }
    };
    var _closure0_slot25 = r4;
    r4 = function(a0, a1, a2) { // Original name: subscribeOnce
        r3 = a0;
        var _closure0_slot0 = r3;
        r2 = 'LOGIN_SUCCESS';
        var _closure0_slot1 = r2;
        r0 = a2;
        var _closure0_slot2 = r0;
        r1 = r3.subscribe;
        r0 = function(a0) { // Original name: handler, environment: r4
            r5 = _closure0_slot0;
            r4 = r5.unsubscribe;
            r3 = _closure0_slot1;
            r2 = _closure0_slot3;
            r2 = r4.bind(r5)(r3, r2);
            r2 = _closure0_slot2;
            r0 = undefined;
            r1 = a0;
            r1 = r2.bind(r0)(r1);
            return r1;
        };
        var _closure0_slot3 = r0;
        r0 = r1.bind(r3)(r2, r0);
        return r0;
    };
    var _closure0_slot26 = r4;
    r4 = r1[r0];
    r5 = r7.bind(r0)(r4);
    var _closure0_slot4 = r5;
    r4 = r1[r1];
    r4 = r2.bind(r0)(r4);
    r4 = r4.applicationReady;
    var _closure0_slot5 = r4;
    r4 = r1[r2];
    r4 = r7.bind(r0)(r4);
    var _closure0_slot6 = r4;
    r4 = r1[r3];
    r4 = r2.bind(r0)(r4);
    r4 = r4.addPostConnectionCallback;
    var _closure0_slot7 = r4;
    r4 = r1[r4];
    r4 = r7.bind(r0)(r4);
    var _closure0_slot8 = r4;
    r4 = r1[r5];
    r4 = r7.bind(r0)(r4);
    var _closure0_slot9 = r4;
    r4 = r1[r6];
    r4 = r7.bind(r0)(r4);
    var _closure0_slot10 = r4;
    r4 = r1[r7];
    r4 = r7.bind(r0)(r4);
    var _closure0_slot11 = r4;
    r4 = r1[r8];
    r4 = r2.bind(r0)(r4);
    r8 = r4.ME;
    var _closure0_slot12 = r8;
    r4 = r4.Routes;
    var _closure0_slot13 = r4;
    r4 = r1[r9];
    r8 = r7.bind(r0)(r4);
    r7 = Object.create(r8.prototype);
    r9 = 'TTITestAction';
    r10 = r7;
    r4 = new r11[r8](r10, r9);
    r4 = r4 instanceof Object ? r4 : r7;
    var _closure0_slot14 = r4;
    r4 = {'setup-test': null, 'capture-navigation-tti': null, 'navigate-to-dms': null, 'ping': null, 'reset-component-profiler': null, 'pause-component-profiler': null, 'resume-component-profiler': null, 'dump-component-profiler-stats': null, 'dump-jank-stats': null, 'set-jank-multiplier': null, 'start-jank-stats': null, 'flux-dispatch': null, 'get-token': null, 'get-resource-usage': null, 'backchannel': null};
    r4[0] = r6;
    r6 = function() { // Original name: captureNavigationTTI, environment: r3
        _fun78636: for(var _fun78636_ip = 0; ; ) switch(_fun78636_ip) {
case 0:
            r1 = undefined;
            r3 = this;
            r2 = _closure0_slot18;
            r4 = r2.apply;
            if(r4) { _fun78636_ip = 31; continue _fun78636 }
case 21:
            r1 = arguments;
            r1 = r4.bind(r2)(r3, r1);
            _fun78636_ip = 41; continue _fun78636;
case 31:
            r6 = r2;
            r5 = r3;
            r1 = applyArguments(r7, r6);
case 41:
            return r1;
        }
    };
    r4[1] = r6;
    r6 = function() { // Original name: navigateToDMs, environment: r3
        _fun78637: for(var _fun78637_ip = 0; ; ) switch(_fun78637_ip) {
case 0:
            r1 = undefined;
            r3 = this;
            r2 = _closure0_slot20;
            r4 = r2.apply;
            if(r4) { _fun78637_ip = 31; continue _fun78637 }
case 21:
            r1 = arguments;
            r1 = r4.bind(r2)(r3, r1);
            _fun78637_ip = 41; continue _fun78637;
case 31:
            r6 = r2;
            r5 = r3;
            r1 = applyArguments(r7, r6);
case 41:
            return r1;
        }
    };
    r4[2] = r6;
    r6 = function() { // Original name: ping, environment: r3
        r2 = global;
        r4 = r2.JSON;
        r3 = r4.stringify;
        r2 = {'type': 'pong'};
        r3 = r3.bind(r4)(r2);
        r2 = _closure0_slot1;
        r1 = _closure0_slot2;
        r1 = r1[r10];
        r0 = undefined;
        r2 = r2.bind(r0)(r1);
        r1 = r2.logToDevice;
        r1 = r1.bind(r2)(r3);
        return r0;
    };
    r4[3] = r6;
    r6 = function() { // Original name: reset-component-profiler, environment: r3
        r4 = _closure0_slot0;
        r1 = _closure0_slot2;
        r3 = r1[r11];
        r0 = undefined;
        r4 = r4.bind(r0)(r3);
        r3 = r4.resetComponentProfiler;
        r3 = r3.bind(r4)();
        r3 = global;
        r5 = r3.JSON;
        r4 = r5.stringify;
        r3 = {'type': 'response', 'status': 'success', 'message': 'reset-component-profiler'};
        r8 = r3;
        r7 = undefined;
        r6 = copyDataProperties(r9, r8);
        r3 = r4.bind(r5)(r3);
        r2 = _closure0_slot1;
        r1 = r1[r10];
        r2 = r2.bind(r0)(r1);
        r1 = r2.logToDevice;
        r1 = r1.bind(r2)(r3);
        return r0;
    };
    r4[4] = r6;
    r6 = function() { // Original name: pause-component-profiler, environment: r3
        r4 = _closure0_slot0;
        r1 = _closure0_slot2;
        r3 = r1[r11];
        r0 = undefined;
        r4 = r4.bind(r0)(r3);
        r3 = r4.pauseComponentProfiler;
        r3 = r3.bind(r4)();
        r3 = global;
        r5 = r3.JSON;
        r4 = r5.stringify;
        r3 = {'type': 'response', 'status': 'success', 'message': 'pause-component-profiler'};
        r8 = r3;
        r7 = undefined;
        r6 = copyDataProperties(r9, r8);
        r3 = r4.bind(r5)(r3);
        r2 = _closure0_slot1;
        r1 = r1[r10];
        r2 = r2.bind(r0)(r1);
        r1 = r2.logToDevice;
        r1 = r1.bind(r2)(r3);
        return r0;
    };
    r4[5] = r6;
    r6 = function() { // Original name: resume-component-profiler, environment: r3
        r4 = _closure0_slot0;
        r1 = _closure0_slot2;
        r3 = r1[r11];
        r0 = undefined;
        r4 = r4.bind(r0)(r3);
        r3 = r4.resumeComponentProfiler;
        r3 = r3.bind(r4)();
        r3 = global;
        r5 = r3.JSON;
        r4 = r5.stringify;
        r3 = {'type': 'response', 'status': 'success', 'message': 'resume-component-profiler'};
        r8 = r3;
        r7 = undefined;
        r6 = copyDataProperties(r9, r8);
        r3 = r4.bind(r5)(r3);
        r2 = _closure0_slot1;
        r1 = r1[r10];
        r2 = r2.bind(r0)(r1);
        r1 = r2.logToDevice;
        r1 = r1.bind(r2)(r3);
        return r0;
    };
    r4[6] = r6;
    r6 = function() { // Original name: dump-component-profiler-stats, environment: r3
        r6 = {'stats': null};
        r4 = _closure0_slot0;
        r1 = _closure0_slot2;
        r3 = r1[r11];
        r0 = undefined;
        r4 = r4.bind(r0)(r3);
        r3 = r4.dumpStats;
        r3 = r3.bind(r4)();
        r6[0] = r3;
        r3 = global;
        r5 = r3.JSON;
        r4 = r5.stringify;
        r3 = {'type': 'response', 'status': 'success', 'message': 'dump-component-profiler-stats'};
        r8 = r3;
        r7 = r6;
        r6 = copyDataProperties(r9, r8);
        r3 = r4.bind(r5)(r3);
        r2 = _closure0_slot1;
        r1 = r1[r10];
        r2 = r2.bind(r0)(r1);
        r1 = r2.logToDevice;
        r1 = r1.bind(r2)(r3);
        return r0;
    };
    r4[7] = r6;
    r6 = function() { // Original name: dump-jank-stats, environment: r3
        _fun78643: for(var _fun78643_ip = 0; ; ) switch(_fun78643_ip) {
case 0:
            r3 = _closure0_slot1;
            r2 = _closure0_slot2;
            r4 = r2[r12];
            r0 = undefined;
            r6 = r3.bind(r0)(r4);
            r1 = null;
            r1 = r6 == r1;
            r4 = undefined;
            if(r1) { _fun78643_ip = 45; continue _fun78643 }
case 33:
            r5 = r6.requestReport;
            r4 = r5.bind(r6)();
case 45:
            r7 = {'report': null};
            r7[0] = r4;
            r4 = global;
            r6 = r4.JSON;
            r5 = r6.stringify;
            r4 = {'type': 'response', 'status': 'success', 'message': 'dump-jank-stats'};
            r9 = r4;
            r8 = r7;
            r7 = copyDataProperties(r10, r9);
            r4 = r5.bind(r6)(r4);
            r2 = r2[r10];
            r3 = r3.bind(r0)(r2);
            r2 = r3.logToDevice;
            r2 = r2.bind(r3)(r4);
            return r0;
        }
    };
    r4[8] = r6;
    r6 = function(a0) { // Original name: set-jank-multiplier, environment: r3
        _fun78644: for(var _fun78644_ip = 0; ; ) switch(_fun78644_ip) {
case 0:
            r3 = _closure0_slot1;
            r2 = _closure0_slot2;
            r4 = r2[r12];
            r0 = undefined;
            r6 = r3.bind(r0)(r4);
            r1 = null;
            if(!(r6 != r1)) { _fun78644_ip = 50; continue _fun78644 }
case 28:
            r4 = a0;
            r5 = r6.setJankHeuristicMultiplier;
            r4 = r4.multiplier;
            r4 = r5.bind(r6)(r4);
case 50:
            r4 = global;
            r6 = r4.JSON;
            r5 = r6.stringify;
            r4 = {'type': 'response', 'status': 'success', 'message': 'set-jank-multiplier'};
            r9 = r4;
            r8 = undefined;
            r7 = copyDataProperties(r10, r9);
            r4 = r5.bind(r6)(r4);
            r2 = r2[r10];
            r3 = r3.bind(r0)(r2);
            r2 = r3.logToDevice;
            r2 = r2.bind(r3)(r4);
            return r0;
        }
    };
    r4[9] = r6;
    r6 = function() { // Original name: start-jank-stats, environment: r3
        _fun78645: for(var _fun78645_ip = 0; ; ) switch(_fun78645_ip) {
case 0:
            r3 = _closure0_slot1;
            r2 = _closure0_slot2;
            r4 = r2[r12];
            r0 = undefined;
            r5 = r3.bind(r0)(r4);
            r1 = null;
            if(!(r5 != r1)) { _fun78645_ip = 38; continue _fun78645 }
case 28:
            r4 = r5.startTracking;
            r4 = r4.bind(r5)();
case 38:
            r4 = global;
            r6 = r4.JSON;
            r5 = r6.stringify;
            r4 = {'type': 'response', 'status': 'success', 'message': 'start-jank-stats'};
            r9 = r4;
            r8 = undefined;
            r7 = copyDataProperties(r10, r9);
            r4 = r5.bind(r6)(r4);
            r2 = r2[r10];
            r3 = r3.bind(r0)(r2);
            r2 = r3.logToDevice;
            r2 = r2.bind(r3)(r4);
            return r0;
        }
    };
    r4[10] = r6;
    r6 = function(a0) { // Original name: flux-dispatch, environment: r3
        r2 = _closure0_slot1;
        r1 = _closure0_slot2;
        r3 = r1[r13];
        r0 = undefined;
        r5 = r2.bind(r0)(r3);
        r4 = r5.dispatch;
        r3 = a0;
        r3 = r3.action;
        r3 = r4.bind(r5)(r3);
        r3 = global;
        r5 = r3.JSON;
        r4 = r5.stringify;
        r3 = {'type': 'response', 'status': 'success', 'message': 'flux-dispatch'};
        r8 = r3;
        r7 = undefined;
        r6 = copyDataProperties(r9, r8);
        r3 = r4.bind(r5)(r3);
        r1 = r1[r10];
        r2 = r2.bind(r0)(r1);
        r1 = r2.logToDevice;
        r1 = r1.bind(r2)(r3);
        return r0;
    };
    r4[11] = r6;
    r6 = function() { // Original name: get-token, environment: r3
        r5 = {'token': null};
        r3 = _closure0_slot8;
        r2 = r3.getToken;
        r2 = r2.bind(r3)();
        r5[0] = r2;
        r2 = global;
        r4 = r2.JSON;
        r3 = r4.stringify;
        r2 = {'type': 'response', 'status': 'success', 'message': 'get-token'};
        r7 = r2;
        r6 = r5;
        r5 = copyDataProperties(r8, r7);
        r3 = r3.bind(r4)(r2);
        r2 = _closure0_slot1;
        r1 = _closure0_slot2;
        r1 = r1[r10];
        r0 = undefined;
        r2 = r2.bind(r0)(r1);
        r1 = r2.logToDevice;
        r1 = r1.bind(r2)(r3);
        return r0;
    };
    r4[12] = r6;
    r6 = function() { // Original name: get-resource-usage, environment: r3
        r6 = {'cumulativeCPU': null, 'currentMemoryUsage': null};
        r2 = _closure0_slot1;
        r1 = _closure0_slot2;
        r3 = r1[r14];
        r0 = undefined;
        r4 = r2.bind(r0)(r3);
        r3 = r4.getCumulativeCPUUsage;
        r3 = r3.bind(r4)();
        r6[0] = r3;
        r3 = r1[r14];
        r4 = r2.bind(r0)(r3);
        r3 = r4.getCurrentMemoryUsageKB;
        r3 = r3.bind(r4)();
        r6[1] = r3;
        r3 = global;
        r5 = r3.JSON;
        r4 = r5.stringify;
        r3 = {'type': 'response', 'status': 'success', 'message': 'get-resource-usage'};
        r8 = r3;
        r7 = r6;
        r6 = copyDataProperties(r9, r8);
        r3 = r4.bind(r5)(r3);
        r1 = r1[r10];
        r2 = r2.bind(r0)(r1);
        r1 = r2.logToDevice;
        r1 = r1.bind(r2)(r3);
        return r0;
    };
    r4[13] = r6;
    r6 = function(a0) { // Environment: r3
        r2 = a0;
        var _closure1_slot0 = r2;
        r0 = 0;
        var _closure1_slot11 = r0;
        var _closure1_slot12 = r0;
        var _closure1_slot9 = r0;
        r1 = function* (a0) { // Original name: ?anon_0_, environment: r1
            _fun131573: for(var _fun131573_ip = 0; ; ) switch(_fun131573_ip) {
case 0:
                r0 = _closure1_slot12;
                r2 = r0;
                r4 = 2;
                if(!(r0 !== r4)) { _fun131573_ip = 1838; continue _fun131573 }
case 20:
                r0 = arguments[1];
                r3 = a0;
                r21 = r2;
                r7 = 3;
                r5 = 1;
                r20 = 0;
                r19 = global;
                r18 = 'imports';
                r17 = undefined;
                r15 = null;
                r14 = 6;
                r13 = 5;
                r12 = 4;
                r11 = 'Backchannel reply sent';
                r10 = 'success';
                r9 = 'Failed to send backchannel reply';
                r8 = 'error';
                if(!(r21 !== r7)) { _fun131573_ip = 1800; continue _fun131573 }
case 86:
                r2 = r4;
                _closure1_slot12 = r4;
                r21 = _closure1_slot11;
                if(!(r20 !== r21)) { _fun131573_ip = 1031; continue _fun131573 }
case 104:
                if(!(r5 !== r21)) { _fun131573_ip = 902; continue _fun131573 }
case 111:
                if(!(r4 !== r21)) { _fun131573_ip = 696; continue _fun131573 }
case 118:
                if(!(r7 !== r21)) { _fun131573_ip = 514; continue _fun131573 }
case 125:
                if(!(r12 !== r21)) { _fun131573_ip = 393; continue _fun131573 }
case 132:
                if(!(r13 !== r21)) { _fun131573_ip = 266; continue _fun131573 }
case 139:
                if(!(r3 !== r5)) { _fun131573_ip = 257; continue _fun131573 }
case 143:
                if(!(r3 !== r4)) { _fun131573_ip = 234; continue _fun131573 }
case 147:
                r21 = _closure1_slot7;
                _env_r21_slot2 = r0;
                r21 = _env_r21_slot2;
                r21 = r21.ok;
                if(r21) { _fun131573_ip = 215; continue _fun131573 }
case 168:
                r23 = _closure1_slot7;
                r21 = _closure1_slot8;
                r22 = _env_r21_slot16;
                r21 = {'status': null};
                r23 = _env_r23_slot2;
                r23 = r23.status;
                r21[0] = r23;
                r21 = r22.bind(r20)(r8, r9, r21);
                _fun131573_ip = 933; continue _fun131573;
case 215:
                r21 = _closure1_slot8;
                r21 = _env_r21_slot16;
                r21 = r21.bind(r20)(r10, r11);
                _fun131573_ip = 933; continue _fun131573;
case 234:
                r2 = r7;
                _closure1_slot12 = r7;
                r21 = {'value': null, 'done': true};
                r21[0] = r0;
                return r21;
case 257:
                r2 = r7;
                _closure1_slot12 = r7;
                throw r0;
case 266:
                if(!(r3 !== r5)) { _fun131573_ip = 384; continue _fun131573 }
case 270:
                if(!(r3 !== r4)) { _fun131573_ip = 361; continue _fun131573 }
case 274:
                r21 = _closure1_slot7;
                _env_r21_slot2 = r0;
                r21 = _env_r21_slot2;
                r21 = r21.ok;
                if(r21) { _fun131573_ip = 342; continue _fun131573 }
case 295:
                r23 = _closure1_slot7;
                r21 = _closure1_slot8;
                r22 = _env_r21_slot16;
                r21 = {'status': null};
                r23 = _env_r23_slot2;
                r23 = r23.status;
                r21[0] = r23;
                r21 = r22.bind(r20)(r8, r9, r21);
                _fun131573_ip = 791; continue _fun131573;
case 342:
                r21 = _closure1_slot8;
                r21 = _env_r21_slot16;
                r21 = r21.bind(r20)(r10, r11);
                _fun131573_ip = 791; continue _fun131573;
case 361:
                r2 = r7;
                _closure1_slot12 = r7;
                r21 = {'value': null, 'done': true};
                r21[0] = r0;
                return r21;
case 384:
                r2 = r7;
                _closure1_slot12 = r7;
                throw r0;
case 393:
                if(!(r3 !== r5)) { _fun131573_ip = 505; continue _fun131573 }
case 397:
                if(!(r3 !== r4)) { _fun131573_ip = 482; continue _fun131573 }
case 401:
                r21 = _closure1_slot7;
                _env_r21_slot2 = r0;
                r21 = _env_r21_slot2;
                r21 = r21.ok;
                if(r21) { _fun131573_ip = 466; continue _fun131573 }
case 422:
                r23 = _closure1_slot7;
                r21 = _closure1_slot8;
                r22 = _env_r21_slot16;
                r21 = {'status': null};
                r23 = _env_r23_slot2;
                r23 = r23.status;
                r21[0] = r23;
                r21 = r22.bind(r20)(r8, r9, r21);
                _fun131573_ip = 568; continue _fun131573;
case 466:
                r21 = _closure1_slot8;
                r21 = _env_r21_slot16;
                r21 = r21.bind(r20)(r10, r11);
                _fun131573_ip = 568; continue _fun131573;
case 482:
                r2 = r7;
                _closure1_slot12 = r7;
                r21 = {'value': null, 'done': true};
                r21[0] = r0;
                return r21;
case 505:
                r2 = r7;
                _closure1_slot12 = r7;
                throw r0;
case 514:
                if(!(r3 !== r5)) { _fun131573_ip = 687; continue _fun131573 }
case 521:
                var _closure1_slot4 = r0;
                if(!(r3 !== r4)) { _fun131573_ip = 548; continue _fun131573 }
case 529:
                r21 = _closure1_slot5;
                r21['result'] = r0;
                _closure1_slot9 = r5;
                _fun131573_ip = 771; continue _fun131573;
case 548:
                _closure1_slot9 = r20;
                r24 = _closure1_slot7;
                r21 = _env_r24_slot0;
                if(!(typeof r21 !== 'boolean')) { _fun131573_ip = 595; continue _fun131573 }
case 568:
                r2 = r7;
                _closure1_slot12 = r7;
                r22 = _closure1_slot4;
                r21 = {'value': null, 'done': true};
                r21[0] = r22;
                return r21;
case 595:
                r23 = r19.fetch;
                r22 = _env_r24_slot0;
                r21 = {'method': 'PUT', 'body': null, 'headers': null};
                r26 = r19.JSON;
                r25 = r26.stringify;
                r24 = _env_r24_slot1;
                r24 = r25.bind(r26)(r24);
                r21[1] = r24;
                r24 = {'Content-Type': 'application/json'};
                r21[2] = r24;
                r22 = r23.bind(r17)(r22, r21);
                _closure1_slot11 = r12;
                r2 = r5;
                _closure1_slot12 = r5;
                r21 = {'value': null, 'done': false};
                r21[0] = r22;
                return r21;
case 687:
                r2 = r7;
                _closure1_slot12 = r7;
                throw r0;
case 696:
                r23 = _closure1_slot7;
                r24 = _closure1_slot8;
                r25 = _closure1_slot10;
                r6 = r25;
                _closure1_slot9 = r5;
                _env_r23_slot3 = r25;
                r22 = _env_r23_slot1;
                r21 = {'details': null, 'string': null};
                r24 = _env_r24_slot21;
                r24 = r24.bind(r20)(r25);
                r21[0] = r24;
                r24 = r19.String;
                r23 = _env_r23_slot3;
                r23 = r24.bind(r17)(r23);
                r21[1] = r23;
                r22['error'] = r21;
case 771:
                _closure1_slot9 = r20;
                r24 = _closure1_slot7;
                r21 = _env_r24_slot0;
                if(!(typeof r21 !== 'boolean')) { _fun131573_ip = 810; continue _fun131573 }
case 791:
                r2 = r7;
                _closure1_slot12 = r7;
                r21 = {'value': undefined, 'done': true};
                return r21;
case 810:
                r23 = r19.fetch;
                r22 = _env_r24_slot0;
                r21 = {'method': 'PUT', 'body': null, 'headers': null};
                r26 = r19.JSON;
                r25 = r26.stringify;
                r24 = _env_r24_slot1;
                r24 = r25.bind(r26)(r24);
                r21[1] = r24;
                r24 = {'Content-Type': 'application/json'};
                r21[2] = r24;
                r22 = r23.bind(r17)(r22, r21);
                _closure1_slot11 = r13;
                r2 = r5;
                _closure1_slot12 = r5;
                r21 = {'value': null, 'done': false};
                r21[0] = r22;
                return r21;
case 902:
                r24 = _closure1_slot7;
                r21 = _closure1_slot10;
                r6 = r21;
                var _closure1_slot6 = r21;
                _closure1_slot9 = r20;
                r21 = _env_r24_slot0;
                if(!(typeof r21 !== 'boolean')) { _fun131573_ip = 939; continue _fun131573 }
case 933:
                r21 = _closure1_slot6;
                throw r21;
case 939:
                r23 = r19.fetch;
                r22 = _env_r24_slot0;
                r21 = {'method': 'PUT', 'body': null, 'headers': null};
                r26 = r19.JSON;
                r25 = r26.stringify;
                r24 = _env_r24_slot1;
                r24 = r25.bind(r26)(r24);
                r21[1] = r24;
                r24 = {'Content-Type': 'application/json'};
                r21[2] = r24;
                r22 = r23.bind(r17)(r22, r21);
                _closure1_slot11 = r14;
                r2 = r5;
                _closure1_slot12 = r5;
                r21 = {'value': null, 'done': false};
                r21[0] = r22;
                return r21;
case 1031:
                if(!(r3 !== r5)) { _fun131573_ip = 1743; continue _fun131573 }
case 1038:
                if(!(r3 !== r4)) { _fun131573_ip = 1720; continue _fun131573 }
case 1045:
                var _closure1_slot8 = r16;
                var _closure1_slot7 = r23;
                r21 = _closure1_slot0;
                var _closure2_slot0 = r17;
                var _closure2_slot1 = r17;
                var _closure2_slot2 = r17;
                r22 = r21.reply;
                _closure2_slot0 = r22;
                r28 = r21.source;
                r22 = r21.args;
                r24 = {'ClientInfoUtils': null, 'ComponentProfiler': null, 'Dispatcher': null, 'ExperimentStore': null, 'NativeJankStats': null, 'ProcessUtils': null, 'AnalyticsUtils': null, 'TTITestAction': null};
                r21 = {'getConstants': null};
                r26 = _closure0_slot0;
                r25 = _closure0_slot2;
                r27 = r25[r15];
                r27 = r26.bind(r17)(r27);
                r27 = r27.getConstants;
                r21[0] = r27;
                r24[0] = r21;
                r21 = {'resetComponentProfiler': null, 'resumeComponentProfiler': null, 'pauseComponentProfiler': null, 'dumpStats': null};
                r27 = r25[r11];
                r27 = r26.bind(r17)(r27);
                r27 = r27.resetComponentProfiler;
                r21[0] = r27;
                r27 = r25[r11];
                r27 = r26.bind(r17)(r27);
                r27 = r27.resumeComponentProfiler;
                r21[1] = r27;
                r27 = r25[r11];
                r27 = r26.bind(r17)(r27);
                r27 = r27.pauseComponentProfiler;
                r21[2] = r27;
                r27 = r25[r11];
                r27 = r26.bind(r17)(r27);
                r27 = r27.dumpStats;
                r21[3] = r27;
                r24[1] = r21;
                r27 = _closure0_slot1;
                r21 = r25[r13];
                r21 = r27.bind(r17)(r21);
                r24[2] = r21;
                r21 = _closure0_slot6;
                r24[3] = r21;
                r21 = r25[r12];
                r21 = r27.bind(r17)(r21);
                r24[4] = r21;
                r21 = r25[r14];
                r21 = r27.bind(r17)(r21);
                r24[5] = r21;
                r21 = {'startRecordingAnalyticsEvents': null, 'stopRecordingAnalyticsEvents': null, 'getAnalyticsEventsRecording': null, 'clearAnalyticsEventsRecording': null};
                r27 = r25[r16];
                r27 = r26.bind(r17)(r27);
                r27 = r27.startRecordingAnalyticsEvents;
                r21[0] = r27;
                r27 = r25[r16];
                r27 = r26.bind(r17)(r27);
                r27 = r27.stopRecordingAnalyticsEvents;
                r21[1] = r27;
                r27 = r25[r16];
                r27 = r26.bind(r17)(r27);
                r27 = r27.getAnalyticsEventsRecording;
                r21[2] = r27;
                r25 = r25[r16];
                r25 = r26.bind(r17)(r25);
                r25 = r25.clearAnalyticsEventsRecording;
                r21[3] = r25;
                r24[6] = r21;
                r21 = {'apiLogin': null, 'setupTTITest': null};
                r25 = _closure0_slot24;
                r21[0] = r25;
                r25 = _closure0_slot22;
                r21[1] = r25;
                r24[7] = r21;
                r25 = _closure0_slot4;
                r21 = function() {
                    r0 = 0;
                    var _closure0_slot0 = r0;
                    r1 = function* () { // Original name: ?anon_0_, environment: r1
                        _fun152169: for(var _fun152169_ip = 0; ; ) switch(_fun152169_ip) {
case 0:
                            r0 = _closure0_slot0;
                            r2 = r0;
                            r4 = 2;
                            if(!(r0 !== r4)) { _fun152169_ip = 157; continue _fun152169 }
case 20:
                            r0 = arguments[1];
                            r3 = arguments[0];
                            r5 = r2;
                            r6 = 3;
                            if(!(r5 !== r6)) { _fun152169_ip = 116; continue _fun152169 }
case 36:
                            r2 = r4;
                            _closure0_slot0 = r4;
                            r5 = 1;
                            if(!(r3 !== r5)) { _fun152169_ip = 96; continue _fun152169 }
case 50:
                            if(!(r3 !== r4)) { _fun152169_ip = 73; continue _fun152169 }
case 54:
                            r2 = r6;
                            _closure0_slot0 = r6;
                            r5 = {'value': undefined, 'done': true};
                            return r5;
case 73:
                            r2 = r6;
                            _closure0_slot0 = r6;
                            r5 = {'value': null, 'done': true};
                            r5[0] = r0;
                            return r5;
case 96:
                            r2 = r6;
                            _closure0_slot0 = r6;
                            throw r0;
case 105:
                            CatchBlockStart(arg_register=5);
                            r2 = r6;
                            _closure0_slot0 = r6;
                            throw r5;
case 116:
                            r5 = 1;
                            if(!(r3 !== r5)) { _fun152169_ip = 155; continue _fun152169 }
case 123:
                            if(!(r3 !== r4)) { _fun152169_ip = 139; continue _fun152169 }
case 127:
                            r3 = {'value': undefined, 'done': true};
                            return r3;
case 139:
                            r3 = {'value': null, 'done': true};
                            r3[0] = r0;
                            return r3;
case 155:
                            throw r0;
case 157:
                            r0 = 3;
                            r2 = r0;
                            _closure0_slot0 = r0;
                            r7 = 'Generator functions may not be called on executing generators';
                            r0 = throwTypeError(r8);
                        }
                    };
                    return r1;
                };
                r21 = r25.bind(r17)(r21);
                r26 = r21.constructor;
                r21 = {};
                _closure2_slot1 = r21;
                var _closure1_slot1 = r22;
                if(!(r22 == r15)) { _fun131573_ip = 1445; continue _fun131573 }
case 1439:
                r22 = {};
                _closure1_slot1 = r22;
case 1445:
                r27 = _closure1_slot1;
                r23 = r19.Object;
                r22 = r23.keys;
                r25 = r22.bind(r23)(r24);
                r23 = r19.Object;
                r22 = r23.values;
                r23 = r22.bind(r23)(r24);
                r24 = r19.Object;
                r22 = r24.keys;
                r29 = r22.bind(r24)(r27);
                r24 = r19.Object;
                r22 = r24.values;
                r24 = r22.bind(r24)(r27);
                _closure1_slot9 = r4;
                var _closure1_slot2 = r20;
                r22 = new Array(2);
                r32 = r22;
                r31 = r25;
                r30 = 0;
                r27 = arraySpread(r33, r32, r31);
                _closure1_slot2 = r27;
                r22[27] = r18;
                r27 = _closure1_slot2;
                r27 = r27 + r5;
                _closure1_slot2 = r27;
                r32 = r22;
                r31 = r29;
                r30 = r27;
                r27 = arraySpread(r33, r32, r31);
                _closure1_slot2 = r27;
                r27 = r19.String;
                r28 = r27.bind(r17)(r28);
                r27 = _closure1_slot2;
                r22[27] = r28;
                r27 = _closure1_slot2;
                r27 = r27 + r5;
                _closure1_slot2 = r27;
                r32 = r26;
                r31 = r22;
                r30 = undefined;
                r22 = apply(r33, r32, r31);
                var _closure1_slot5 = r21;
                var _closure1_slot3 = r20;
                r21 = new Array(1);
                r32 = r21;
                r31 = r23;
                r30 = 0;
                r23 = arraySpread(r33, r32, r31);
                _closure1_slot3 = r23;
                r21[23] = r25;
                r23 = _closure1_slot3;
                r23 = r23 + r5;
                _closure1_slot3 = r23;
                r32 = r21;
                r31 = r24;
                r30 = r23;
                r23 = arraySpread(r33, r32, r31);
                _closure1_slot3 = r23;
                r32 = r22;
                r31 = r21;
                r30 = undefined;
                r22 = apply(r33, r32, r31);
                _closure1_slot11 = r7;
                r2 = r5;
                _closure1_slot12 = r5;
                r21 = {'value': null, 'done': false};
                r21[0] = r22;
                return r21;
case 1720:
                r2 = r7;
                _closure1_slot12 = r7;
                r21 = {'value': null, 'done': true};
                r21[0] = r0;
                return r21;
case 1743:
                r2 = r7;
                _closure1_slot12 = r7;
                throw r0;
case 1752:
                CatchBlockStart(arg_register=21);
                r6 = r21;
                var _closure1_slot10 = r21;
                r21 = _closure1_slot9;
                if(!(r20 !== r21)) { _fun131573_ip = 1791; continue _fun131573 }
case 1769:
                if(!(r5 !== r21)) { _fun131573_ip = 1782; continue _fun131573 }
case 1773:
                _closure1_slot11 = r4;
                _fun131573_ip = 86; continue _fun131573;
case 1782:
                _closure1_slot11 = r5;
                _fun131573_ip = 86; continue _fun131573;
case 1791:
                r2 = r7;
                _closure1_slot12 = r7;
                throw r6;
case 1800:
                if(!(r3 !== r5)) { _fun131573_ip = 1836; continue _fun131573 }
case 1804:
                if(!(r3 !== r4)) { _fun131573_ip = 1820; continue _fun131573 }
case 1808:
                r3 = {'value': undefined, 'done': true};
                return r3;
case 1820:
                r3 = {'value': null, 'done': true};
                r3[0] = r0;
                return r3;
case 1836:
                throw r0;
case 1838:
                r0 = 3;
                r2 = r0;
                _closure1_slot12 = r0;
                r32 = 'Generator functions may not be called on executing generators';
                r0 = throwTypeError(r33);
            }
        };
        return r1;
    };
    r6 = r5.bind(r0)(r6);
    var _closure0_slot3 = r6;
    r6 = function() { // Environment: r3
        _fun78650: for(var _fun78650_ip = 0; ; ) switch(_fun78650_ip) {
case 0:
            r1 = undefined;
            r3 = this;
            r2 = _closure0_slot3;
            r4 = r2.apply;
            if(r4) { _fun78650_ip = 31; continue _fun78650 }
case 21:
            r1 = arguments;
            r1 = r4.bind(r2)(r3, r1);
            _fun78650_ip = 41; continue _fun78650;
case 31:
            r6 = r2;
            r5 = r3;
            r1 = applyArguments(r7, r6);
case 41:
            return r1;
        }
    };
    r4[14] = r6;
    var _closure0_slot15 = r4;
    var _closure1_slot0 = r0;
    r4 = function(a0) { // Environment: r3
        r2 = a0;
        var _closure2_slot0 = r2;
        r0 = 0;
        var _closure2_slot3 = r0;
        var _closure2_slot4 = r0;
        r1 = function* (a0) { // Original name: ?anon_0_, environment: r1
            _fun147751: for(var _fun147751_ip = 0; ; ) switch(_fun147751_ip) {
case 0:
                r0 = _closure2_slot4;
                r2 = r0;
                r4 = 2;
                if(!(r0 !== r4)) { _fun147751_ip = 509; continue _fun147751 }
case 20:
                r0 = arguments[1];
                r3 = a0;
                r5 = r2;
                r6 = 3;
                if(!(r5 !== r6)) { _fun147751_ip = 468; continue _fun147751 }
case 39:
                r2 = r4;
                _closure2_slot4 = r4;
                r7 = _closure2_slot3;
                r5 = 0;
                if(!(r5 !== r7)) { _fun147751_ip = 181; continue _fun147751 }
case 59:
                r5 = 1;
                if(!(r3 !== r5)) { _fun147751_ip = 172; continue _fun147751 }
case 66:
                if(!(r3 !== r4)) { _fun147751_ip = 149; continue _fun147751 }
case 70:
                r5 = _closure2_slot1;
                r7 = _closure2_slot2;
                r8 = _closure1_slot15;
                r7 = _env_r5_slot0;
                r7 = r7.type;
                r7 = r8[r7];
                r5 = _env_r5_slot0;
                r5 = r7.bind(r8)(r5);
                r5 = global;
                r7 = r5.Promise;
                r5 = r7.resolve;
                r7 = r5.bind(r7)();
                r2 = r6;
                _closure2_slot4 = r6;
                r5 = {'value': null, 'done': true};
                r5[0] = r7;
                return r5;
case 149:
                r2 = r6;
                _closure2_slot4 = r6;
                r5 = {'value': null, 'done': true};
                r5[0] = r0;
                return r5;
case 172:
                r2 = r6;
                _closure2_slot4 = r6;
                throw r0;
case 181:
                r5 = 1;
                if(!(r3 !== r5)) { _fun147751_ip = 448; continue _fun147751 }
case 191:
                if(!(r3 !== r4)) { _fun147751_ip = 425; continue _fun147751 }
case 198:
                var _closure2_slot2 = r7;
                var _closure2_slot1 = r9;
                r10 = _closure2_slot0;
                r12 = undefined;
                var _closure3_slot0 = r12;
                r8 = global;
                r14 = r8.TextDecoder;
                r13 = Object.create(r14.prototype);
                r17 = 'utf-8';
                r18 = r13;
                r11 = new r19[r14](r18, r17);
                r13 = r11 instanceof Object ? r11 : r13;
                r11 = r13.decode;
                r15 = _closure1_slot0;
                r14 = _closure1_slot2;
                r14 = r14[r27];
                r15 = r15.bind(r12)(r14);
                r14 = r15.base64decode;
                r10 = r10.actionData;
                r10 = r14.bind(r15)(r10);
                r11 = r11.bind(r13)(r10);
                r10 = r8.JSON;
                r8 = r10.parse;
                r8 = r8.bind(r10)(r11);
                _closure3_slot0 = r8;
                r11 = _closure1_slot14;
                r10 = r11.log;
                r9 = {};
                r17 = r9;
                r16 = r8;
                r13 = copyDataProperties(r18, r17);
                r13 = r8.user;
                r8 = null;
                r13 = r8 == r13;
                r8 = 'redacted';
                if(!r13) { _fun147751_ip = 370; continue _fun147751 }
case 368:
                r8 = undefined;
case 370:
                r9['user'] = r8;
                r8 = 'Received TTI Test Action';
                r8 = r10.bind(r11)(r8, r9);
                r7 = _closure1_slot5;
                r7 = r7.promise;
                _closure2_slot3 = r5;
                r2 = r5;
                _closure2_slot4 = r5;
                r5 = {'value': null, 'done': false};
                r5[0] = r7;
                return r5;
case 425:
                r2 = r6;
                _closure2_slot4 = r6;
                r5 = {'value': null, 'done': true};
                r5[0] = r0;
                return r5;
case 448:
                r2 = r6;
                _closure2_slot4 = r6;
                throw r0;
case 457:
                CatchBlockStart(arg_register=5);
                r2 = r6;
                _closure2_slot4 = r6;
                throw r5;
case 468:
                r5 = 1;
                if(!(r3 !== r5)) { _fun147751_ip = 507; continue _fun147751 }
case 475:
                if(!(r3 !== r4)) { _fun147751_ip = 491; continue _fun147751 }
case 479:
                r3 = {'value': undefined, 'done': true};
                return r3;
case 491:
                r3 = {'value': null, 'done': true};
                r3[0] = r0;
                return r3;
case 507:
                throw r0;
case 509:
                r0 = 3;
                r2 = r0;
                _closure2_slot4 = r0;
                r17 = 'Generator functions may not be called on executing generators';
                r0 = throwTypeError(r18);
            }
        };
        return r1;
    };
    r4 = r5.bind(r0)(r4);
    _closure1_slot0 = r4;
    r4 = function(a0) { // Environment: r3
        _fun131575: for(var _fun131575_ip = 0; ; ) switch(_fun131575_ip) {
case 0:
            r1 = undefined;
            r3 = this;
            r2 = _closure1_slot0;
            r4 = r2.apply;
            if(r4) { _fun131575_ip = 31; continue _fun131575 }
case 21:
            r1 = arguments;
            r1 = r4.bind(r2)(r3, r1);
            _fun131575_ip = 41; continue _fun131575;
case 31:
            r6 = r2;
            r5 = r3;
            r1 = applyArguments(r7, r6);
case 41:
            return r1;
        }
    };
    r3 = a4;
    r3['exports'] = r4;
    r1 = r1[r28];
    r3 = r2.bind(r0)(r1);
    r2 = r3.fileFinishedImporting;
    r1 = 'modules/headless_tasks/android/TTITestAction.tsx';
    r1 = r2.bind(r3)(r1);
    return r0;
}

// ===== top-level #17798  fn#17759  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    r2 = a1;
    var _closure0_slot0 = r2;
    r5 = a2;
    var _closure0_slot1 = r5;
    r1 = a6;
    var _closure0_slot2 = r1;
    r4 = r1[r0];
    r0 = undefined;
    r4 = r5.bind(r0)(r4);
    var _closure0_slot3 = r4;
    r4 = function(a0) { // Environment: r3
        r1 = a0;
        r1 = r1.channelId;
        var _closure1_slot0 = r1;
        r1 = global;
        r2 = r1.Promise;
        r1 = Object.create(r2.prototype);
        r3 = function(a0) { // Environment: r0
            r2 = a0;
            var _closure2_slot0 = r2;
            r3 = _closure0_slot1;
            r2 = _closure0_slot2;
            r2 = r2[r1];
            r0 = undefined;
            r3 = r3.bind(r0)(r2);
            r2 = r3.awaitStorage;
            r1 = function() { // Environment: r1
                _fun147752: for(var _fun147752_ip = 0; ; ) switch(_fun147752_ip) {
case 0:
                    r5 = _closure0_slot3;
                    r4 = r5.getChannel;
                    r3 = _closure1_slot0;
                    r4 = r4.bind(r5)(r3);
                    r0 = null;
                    if(!(r0 != r4)) { _fun147752_ip = 60; continue _fun147752 }
case 30:
                    r3 = _closure0_slot0;
                    r2 = _closure0_slot2;
                    r2 = r2[r2];
                    r0 = undefined;
                    r3 = r3.bind(r0)(r2);
                    r2 = r3.handleDisconnect;
                    r2 = r2.bind(r3)(r4);
case 60:
                    r2 = _closure2_slot0;
                    r1 = true;
                    r0 = undefined;
                    r2 = r2.bind(r0)(r1);
                    return r0;
                }
            };
            r1 = r2.bind(r3)(r1);
            return r0;
        };
        r4 = r1;
        r0 = new r5[r2](r4, r3);
        r0 = r0 instanceof Object ? r0 : r1;
        return r0;
    };
    r3 = a4;
    r3['exports'] = r4;
    r1 = r1[r3];
    r3 = r2.bind(r0)(r1);
    r2 = r3.fileFinishedImporting;
    r1 = 'modules/headless_tasks/android/Disconnect.tsx';
    r1 = r2.bind(r3)(r1);
    return r0;
}

// ===== top-level #17799  fn#17760  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    r4 = a1;
    var _closure0_slot0 = r4;
    r2 = a5;
    r3 = a6;
    var _closure0_slot1 = r3;
    r1 = global;
    r8 = r1.Object;
    r7 = r8.defineProperty;
    r6 = '__esModule';
    r1 = {'value': true};
    r1 = r7.bind(r8)(r2, r6, r1);
    r1 = r3[r0];
    r0 = undefined;
    r1 = r4.bind(r0)(r1);
    r1 = r1.TOKEN_KEY;
    var _closure0_slot2 = r1;
    r1 = {'awaitStorage': null};
    r5 = function(a0) { // Original name: awaitStorage, environment: r5
        r3 = a0;
        var _closure1_slot0 = r3;
        r4 = _closure0_slot0;
        r3 = _closure0_slot1;
        r3 = r3[r1];
        r0 = undefined;
        r3 = r4.bind(r0)(r3);
        r4 = r3.Storage;
        r3 = r4.asyncGet;
        r2 = _closure0_slot2;
        r1 = function() { // Environment: r1
            r1 = _closure1_slot0;
            r0 = undefined;
            r1 = r1.bind(r0)();
            return r0;
        };
        r1 = r3.bind(r4)(r2, r1);
        return r0;
    };
    r1[0] = r5;
    r3 = r3[r2];
    r5 = r4.bind(r0)(r3);
    r4 = r5.fileFinishedImporting;
    r3 = 'modules/headless_tasks/HeadlessTaskUtils.tsx';
    r3 = r4.bind(r5)(r3);
    r2['default'] = r1;
    return r0;
}

// ===== top-level #17800  fn#17761  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    r2 = a1;
    var _closure0_slot0 = r2;
    r1 = a6;
    var _closure0_slot1 = r1;
    r4 = r1[r0];
    r0 = undefined;
    r4 = r2.bind(r0)(r4);
    r5 = r4.AnalyticsObjectTypes;
    var _closure0_slot2 = r5;
    r4 = r4.AnalyticsObjects;
    var _closure0_slot3 = r4;
    r4 = function(a0) { // Environment: r3
        r1 = a0;
        var _closure1_slot0 = r1;
        r1 = global;
        r2 = r1.Promise;
        r1 = Object.create(r2.prototype);
        r3 = function(a0) { // Environment: r0
            r3 = _closure0_slot0;
            r2 = _closure0_slot1;
            r2 = r2[r1];
            r1 = undefined;
            r6 = r3.bind(r1)(r2);
            r5 = r6.ack;
            r2 = _closure1_slot0;
            r13 = r2.channelId;
            r3 = {'object': null, 'objectType': null};
            r8 = _closure0_slot3;
            r8 = r8.MARK_CHANNEL_AS_READ_FROM_NOTIFICATION;
            r3[0] = r8;
            r7 = _closure0_slot2;
            r7 = r7.ACK_MANUAL;
            r3[1] = r7;
            r9 = r2.messageId;
            r0 = true;
            r14 = r6;
            r12 = r3;
            r11 = true;
            r10 = true;
            r2 = r15[r5](r14, r13, r12, r11, r10, r9);
            r2 = a0;
            r2 = r2.bind(r1)(r0);
            return r1;
        };
        r4 = r1;
        r0 = new r5[r2](r4, r3);
        r0 = r0 instanceof Object ? r0 : r1;
        return r0;
    };
    r3 = a4;
    r3['exports'] = r4;
    r1 = r1[r2];
    r3 = r2.bind(r0)(r1);
    r2 = r3.fileFinishedImporting;
    r1 = 'modules/headless_tasks/android/MarkAsRead.tsx';
    r1 = r2.bind(r3)(r1);
    return r0;
}

// ===== top-level #17801  fn#17762  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    r2 = a1;
    var _closure0_slot0 = r2;
    r1 = a2;
    var _closure0_slot1 = r1;
    r1 = a6;
    var _closure0_slot2 = r1;
    r4 = r1[r0];
    r0 = undefined;
    r4 = r2.bind(r0)(r4);
    r4 = r4.MuteUntilSeconds;
    var _closure0_slot3 = r4;
    r4 = function(a0) { // Environment: r3
        r1 = a0;
        var _closure1_slot0 = r1;
        r1 = global;
        r2 = r1.Promise;
        r1 = Object.create(r2.prototype);
        r3 = function(a0) { // Environment: r0
            r2 = a0;
            var _closure2_slot0 = r2;
            r3 = _closure0_slot1;
            r2 = _closure0_slot2;
            r2 = r2[r1];
            r0 = undefined;
            r3 = r3.bind(r0)(r2);
            r2 = r3.awaitStorage;
            r1 = function() { // Environment: r1
                _fun147753: for(var _fun147753_ip = 0; ; ) switch(_fun147753_ip) {
case 0:
                    r8 = _closure1_slot0;
                    r3 = r8.muteTime;
                    r1 = null;
                    r0 = -1;
                    r10 = null;
                    if(!(r0 !== r3)) { _fun147753_ip = 102; continue _fun147753 }
case 29:
                    r5 = _closure0_slot1;
                    r4 = _closure0_slot2;
                    r4 = r4[r2];
                    r2 = undefined;
                    r4 = r5.bind(r2)(r4);
                    r6 = r4.bind(r2)();
                    r5 = r6.add;
                    r4 = r8.muteTime;
                    if(!(r4 == r1)) { _fun147753_ip = 82; continue _fun147753 }
case 72:
                    r3 = _closure0_slot3;
                    r4 = r3.HOURS_1;
case 82:
                    r3 = 'second';
                    r4 = r5.bind(r6)(r4, r3);
                    r3 = r4.toISOString;
                    r10 = r3.bind(r4)();
case 102:
                    r5 = _closure0_slot1;
                    r4 = _closure0_slot2;
                    r4 = r4[r3];
                    r1 = undefined;
                    r6 = r5.bind(r1)(r4);
                    r5 = r6.updateChannelOverrideSettings;
                    r4 = {'guildId': null, 'channelId': null, 'settings': null, 'label': null};
                    r9 = r8.guildId;
                    r4[0] = r9;
                    r8 = r8.channelId;
                    r4[1] = r8;
                    r8 = {'muted': true, 'mute_config': null};
                    r9 = {'selected_time_window': null, 'end_time': null};
                    r11 = _closure0_slot3;
                    r11 = r11.HOURS_1;
                    r9[0] = r11;
                    r9[1] = r10;
                    r8[1] = r9;
                    r4[2] = r8;
                    r8 = _closure0_slot0;
                    r7 = _closure0_slot2;
                    r7 = r7[r4];
                    r7 = r8.bind(r1)(r7);
                    r7 = r7.NotificationLabels;
                    r7 = r7.Muted;
                    r4[3] = r7;
                    r4 = r5.bind(r6)(r4);
                    r3 = _closure2_slot0;
                    r2 = true;
                    r3 = r3.bind(r1)(r2);
                    return r1;
                }
            };
            r1 = r2.bind(r3)(r1);
            return r0;
        };
        r4 = r1;
        r0 = new r5[r2](r4, r3);
        r0 = r0 instanceof Object ? r0 : r1;
        return r0;
    };
    r3 = a4;
    r3['exports'] = r4;
    r1 = r1[r5];
    r3 = r2.bind(r0)(r1);
    r2 = r3.fileFinishedImporting;
    r1 = 'modules/headless_tasks/android/MuteAction.tsx';
    r1 = r2.bind(r3)(r1);
    return r0;
}

// ===== top-level #17802  fn#17763  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    r2 = a1;
    var _closure0_slot0 = r2;
    r5 = a2;
    var _closure0_slot1 = r5;
    r1 = a6;
    var _closure0_slot2 = r1;
    r4 = r1[r0];
    r0 = undefined;
    r4 = r5.bind(r0)(r4);
    var _closure0_slot3 = r4;
    r4 = function(a0) { // Environment: r3
        r1 = a0;
        r1 = r1.channelId;
        var _closure1_slot0 = r1;
        r1 = global;
        r2 = r1.Promise;
        r1 = Object.create(r2.prototype);
        r3 = function(a0) { // Environment: r0
            r2 = a0;
            var _closure2_slot0 = r2;
            r3 = _closure0_slot1;
            r2 = _closure0_slot2;
            r2 = r2[r1];
            r0 = undefined;
            r3 = r3.bind(r0)(r2);
            r2 = r3.awaitStorage;
            r1 = function() { // Environment: r1
                r5 = _closure0_slot3;
                r4 = r5.getChannel;
                r3 = _closure1_slot0;
                r6 = r4.bind(r5)(r3);
                r3 = _closure0_slot0;
                r2 = _closure0_slot2;
                r4 = r2[r2];
                r0 = undefined;
                r5 = r3.bind(r0)(r4);
                r4 = r5.getDeafStates;
                r4 = r4.bind(r5)(r6);
                r2 = r2[r3];
                r3 = r3.bind(r0)(r2);
                r2 = r3.createDeafHandler;
                r2 = r2.bind(r3)(r4);
                r2 = r2.onPress;
                r2 = r2.bind(r0)();
                r2 = _closure2_slot0;
                r1 = true;
                r2 = r2.bind(r0)(r1);
                return r0;
            };
            r1 = r2.bind(r3)(r1);
            return r0;
        };
        r4 = r1;
        r0 = new r5[r2](r4, r3);
        r0 = r0 instanceof Object ? r0 : r1;
        return r0;
    };
    r3 = a4;
    r3['exports'] = r4;
    r1 = r1[r4];
    r3 = r2.bind(r0)(r1);
    r2 = r3.fileFinishedImporting;
    r1 = 'modules/headless_tasks/android/ToggleDeafen.tsx';
    r1 = r2.bind(r3)(r1);
    return r0;
}

// ===== top-level #17803  fn#17764  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    r2 = a1;
    var _closure0_slot0 = r2;
    r5 = a2;
    var _closure0_slot1 = r5;
    r1 = a6;
    var _closure0_slot2 = r1;
    r4 = r1[r0];
    r0 = undefined;
    r4 = r5.bind(r0)(r4);
    var _closure0_slot3 = r4;
    r4 = function(a0) { // Environment: r3
        r1 = a0;
        r1 = r1.channelId;
        var _closure1_slot0 = r1;
        r1 = global;
        r2 = r1.Promise;
        r1 = Object.create(r2.prototype);
        r3 = function(a0) { // Environment: r0
            r2 = a0;
            var _closure2_slot0 = r2;
            r3 = _closure0_slot1;
            r2 = _closure0_slot2;
            r2 = r2[r1];
            r0 = undefined;
            r3 = r3.bind(r0)(r2);
            r2 = r3.awaitStorage;
            r1 = function() { // Environment: r1
                r5 = _closure0_slot3;
                r4 = r5.getChannel;
                r3 = _closure1_slot0;
                r7 = r4.bind(r5)(r3);
                r3 = _closure0_slot0;
                r2 = _closure0_slot2;
                r4 = r2[r2];
                r0 = undefined;
                r6 = r3.bind(r0)(r4);
                r5 = r6.getMuteStates;
                r4 = {'channel': null};
                r4[0] = r7;
                r4 = r5.bind(r6)(r4);
                r2 = r2[r3];
                r3 = r3.bind(r0)(r2);
                r2 = r3.createMuteHandler;
                r2 = r2.bind(r3)(r4);
                r2 = r2.onPress;
                r2 = r2.bind(r0)();
                r2 = _closure2_slot0;
                r1 = true;
                r2 = r2.bind(r0)(r1);
                return r0;
            };
            r1 = r2.bind(r3)(r1);
            return r0;
        };
        r4 = r1;
        r0 = new r5[r2](r4, r3);
        r0 = r0 instanceof Object ? r0 : r1;
        return r0;
    };
    r3 = a4;
    r3['exports'] = r4;
    r1 = r1[r4];
    r3 = r2.bind(r0)(r1);
    r2 = r3.fileFinishedImporting;
    r1 = 'modules/headless_tasks/android/ToggleSelfMute.tsx';
    r1 = r2.bind(r3)(r1);
    return r0;
}

// ===== top-level #17804  fn#17765  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    r2 = a1;
    var _closure0_slot0 = r2;
    r1 = a2;
    var _closure0_slot1 = r1;
    r1 = a6;
    var _closure0_slot2 = r1;
    r4 = r1[r0];
    r0 = undefined;
    r4 = r2.bind(r0)(r4);
    r4 = r4.AnalyticEvents;
    var _closure0_slot3 = r4;
    r4 = function(a0) { // Environment: r3
        r1 = a0;
        var _closure1_slot0 = r1;
        r1 = global;
        r2 = r1.Promise;
        r1 = Object.create(r2.prototype);
        r3 = function(a0) { // Environment: r0
            r2 = a0;
            var _closure2_slot0 = r2;
            r3 = _closure0_slot1;
            r2 = _closure0_slot2;
            r2 = r2[r1];
            r0 = undefined;
            r3 = r3.bind(r0)(r2);
            r2 = r3.awaitStorage;
            r1 = function() { // Environment: r1
                _fun147756: for(var _fun147756_ip = 0; ; ) switch(_fun147756_ip) {
case 0:
                    r3 = _closure1_slot0;
                    r2 = r3.isFullscreenCallUI;
                    if(!r2) { _fun147756_ip = 111; continue _fun147756 }
case 18:
                    r4 = _closure0_slot1;
                    r2 = _closure0_slot2;
                    r2 = r2[r2];
                    r0 = undefined;
                    r6 = r4.bind(r0)(r2);
                    r5 = r6.track;
                    r2 = _closure0_slot3;
                    r4 = r2.CALLKIT_CLICKED;
                    r2 = {'action_type': 'decline'};
                    r8 = _closure0_slot0;
                    r7 = _closure0_slot2;
                    r7 = r7[r3];
                    r9 = r8.bind(r0)(r7);
                    r8 = r9.collectChannelAnalyticsMetadataFromId;
                    r7 = r3.channelId;
                    r12 = r8.bind(r9)(r7);
                    r13 = r2;
                    r7 = copyDataProperties(r14, r13);
                    r2 = r5.bind(r6)(r4, r2);
case 111:
                    r6 = _closure0_slot1;
                    r5 = _closure0_slot2;
                    r5 = r5[r2];
                    r0 = undefined;
                    r8 = r6.bind(r0)(r5);
                    r7 = r8.track;
                    r5 = _closure0_slot3;
                    r6 = r5.RING_CALL_DECLINED;
                    r5 = {'location': null, 'guild_id': null, 'ringer_user_id': null};
                    r10 = _closure0_slot1;
                    r9 = _closure0_slot2;
                    r9 = r9[r4];
                    r9 = r10.bind(r0)(r9);
                    r9 = r9.PUSH_NOTIFICATION;
                    r5[0] = r9;
                    r9 = r3.guildId;
                    r5[1] = r9;
                    r9 = r3.userId;
                    r5[2] = r9;
                    r10 = _closure0_slot0;
                    r9 = _closure0_slot2;
                    r9 = r9[r3];
                    r11 = r10.bind(r0)(r9);
                    r10 = r11.collectChannelAnalyticsMetadataFromId;
                    r9 = r3.channelId;
                    r12 = r10.bind(r11)(r9);
                    r13 = r5;
                    r9 = copyDataProperties(r14, r13);
                    r5 = r7.bind(r8)(r6, r5);
                    r5 = _closure0_slot1;
                    r4 = _closure0_slot2;
                    r4 = r4[r5];
                    r5 = r5.bind(r0)(r4);
                    r4 = r5.stopRinging;
                    r3 = r3.channelId;
                    r3 = r4.bind(r5)(r3);
                    r2 = _closure2_slot0;
                    r1 = true;
                    r2 = r2.bind(r0)(r1);
                    return r0;
                }
            };
            r1 = r2.bind(r3)(r1);
            return r0;
        };
        r4 = r1;
        r0 = new r5[r2](r4, r3);
        r0 = r0 instanceof Object ? r0 : r1;
        return r0;
    };
    r3 = a4;
    r3['exports'] = r4;
    r1 = r1[r6];
    r3 = r2.bind(r0)(r1);
    r2 = r3.fileFinishedImporting;
    r1 = 'modules/headless_tasks/android/DismissCallAction.tsx';
    r1 = r2.bind(r3)(r1);
    return r0;
}

// ===== top-level #17805  fn#17766  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    r2 = a1;
    r5 = a2;
    var _closure0_slot0 = r5;
    r1 = a6;
    var _closure0_slot1 = r1;
    r4 = r1[r0];
    r0 = undefined;
    r4 = r5.bind(r0)(r4);
    var _closure0_slot2 = r4;
    r4 = r1[r1];
    r4 = r2.bind(r0)(r4);
    r4 = r4.NativeModules;
    var _closure0_slot3 = r4;
    r4 = r1[r2];
    r4 = r2.bind(r0)(r4);
    r4 = r4.MessageSendLocation;
    var _closure0_slot4 = r4;
    r4 = r1[r3];
    r6 = r5.bind(r0)(r4);
    r5 = Object.create(r6.prototype);
    r7 = 'DirectReply';
    r8 = r5;
    r4 = new r9[r6](r8, r7);
    r4 = r4 instanceof Object ? r4 : r5;
    var _closure0_slot5 = r4;
    r4 = function(a0) { // Environment: r3
        r1 = a0;
        var _closure1_slot0 = r1;
        r1 = global;
        r2 = r1.Promise;
        r1 = Object.create(r2.prototype);
        r3 = function(a0) { // Environment: r0
            r2 = a0;
            var _closure2_slot0 = r2;
            r5 = _closure0_slot5;
            r4 = r5.log;
            r3 = 'Executing DirectReply';
            r3 = r4.bind(r5)(r3);
            r3 = _closure0_slot3;
            r5 = r3.PushNotificationAndroid;
            r4 = r5.markNotificationAsDirectReply;
            r3 = _closure1_slot0;
            r3 = r3.channelId;
            r3 = r4.bind(r5)(r3);
            r3 = _closure0_slot0;
            r2 = _closure0_slot1;
            r2 = r2[r4];
            r0 = undefined;
            r3 = r3.bind(r0)(r2);
            r2 = r3.awaitStorage;
            r1 = function() { // Environment: r1
                r2 = function() { // Original name: _sendMessage, environment: r1
                    _fun152170: for(var _fun152170_ip = 0; ; ) switch(_fun152170_ip) {
case 0:
                        r0 = undefined;
                        r1 = undefined;
                        r3 = this;
                        r5 = _closure0_slot2;
                        r2 = function(a0) { // Environment: r4
                            r2 = a0;
                            var _closure4_slot0 = r2;
                            r0 = 0;
                            var _closure4_slot3 = r0;
                            var _closure4_slot4 = r0;
                            r1 = function* (a0) { // Original name: ?anon_0_, environment: r1
                                _fun153749: for(var _fun153749_ip = 0; ; ) switch(_fun153749_ip) {
case 0:
                                    r0 = _closure4_slot4;
                                    r2 = r0;
                                    r4 = 2;
                                    if(!(r0 !== r4)) { _fun153749_ip = 560; continue _fun153749 }
case 20:
                                    r0 = arguments[1];
                                    r3 = a0;
                                    r5 = r2;
                                    r6 = 3;
                                    if(!(r5 !== r6)) { _fun153749_ip = 519; continue _fun153749 }
case 39:
                                    r2 = r4;
                                    _closure4_slot4 = r4;
                                    r7 = _closure4_slot3;
                                    r5 = 0;
                                    if(!(r5 !== r7)) { _fun153749_ip = 292; continue _fun153749 }
case 59:
                                    r5 = 1;
                                    if(!(r3 !== r5)) { _fun153749_ip = 283; continue _fun153749 }
case 69:
                                    if(!(r3 !== r4)) { _fun153749_ip = 260; continue _fun153749 }
case 76:
                                    r5 = _closure4_slot1;
                                    r7 = _closure4_slot2;
                                    _env_r5_slot1 = r0;
                                    r10 = _closure1_slot5;
                                    r9 = r10.log;
                                    r7 = _env_r5_slot1;
                                    r8 = r7.ok;
                                    r7 = 'Sent message, ok:';
                                    r7 = r9.bind(r10)(r7, r8);
                                    r5 = _env_r5_slot1;
                                    r5 = r5.ok;
                                    if(!r5) { _fun153749_ip = 220; continue _fun153749 }
case 137:
                                    r11 = _closure4_slot1;
                                    r5 = _closure4_slot2;
                                    r5 = _closure1_slot3;
                                    r8 = r5.PushNotificationAndroid;
                                    r7 = r8.handleDirectReplySuccess;
                                    r5 = global;
                                    r10 = r5.JSON;
                                    r9 = r10.stringify;
                                    r5 = {};
                                    r12 = _env_r11_slot1;
                                    r15 = r12.body;
                                    r16 = r5;
                                    r12 = copyDataProperties(r17, r16);
                                    r15 = _env_r11_slot0;
                                    r16 = r5;
                                    r11 = copyDataProperties(r17, r16);
                                    r5 = r9.bind(r10)(r5);
                                    r5 = r7.bind(r8)(r5);
case 220:
                                    r5 = _closure4_slot2;
                                    r8 = _closure3_slot0;
                                    r7 = true;
                                    r5 = undefined;
                                    r5 = r8.bind(r5)(r7);
                                    r2 = r6;
                                    _closure4_slot4 = r6;
                                    r5 = {'value': undefined, 'done': true};
                                    return r5;
case 260:
                                    r2 = r6;
                                    _closure4_slot4 = r6;
                                    r5 = {'value': null, 'done': true};
                                    r5[0] = r0;
                                    return r5;
case 283:
                                    r2 = r6;
                                    _closure4_slot4 = r6;
                                    throw r0;
case 292:
                                    r5 = 1;
                                    if(!(r3 !== r5)) { _fun153749_ip = 499; continue _fun153749 }
case 302:
                                    if(!(r3 !== r4)) { _fun153749_ip = 476; continue _fun153749 }
case 309:
                                    var _closure4_slot2 = r7;
                                    var _closure4_slot1 = r9;
                                    r8 = _closure4_slot0;
                                    var _closure5_slot0 = r8;
                                    r11 = undefined;
                                    var _closure5_slot1 = r11;
                                    r10 = _closure1_slot0;
                                    r9 = _closure1_slot1;
                                    r9 = r9[r5];
                                    r12 = r10.bind(r11)(r9);
                                    r11 = r12.sendMessage;
                                    r16 = r8.channelId;
                                    r9 = {'content': null, 'tts': false, 'invalidEmojis': null, 'validNonShortcutEmojis': null};
                                    r8 = r8.channelReplyText;
                                    r9[0] = r8;
                                    r8 = new Array(0);
                                    r9[2] = r8;
                                    r8 = new Array(0);
                                    r9[3] = r8;
                                    r8 = {'eagerDispatch': false, 'location': null};
                                    r7 = _closure1_slot4;
                                    r7 = r7.PUSH_NOTIFICATION;
                                    r8[1] = r7;
                                    r14 = false;
                                    r17 = r12;
                                    r15 = r9;
                                    r13 = r8;
                                    r7 = r18[r11](r17, r16, r15, r14, r13);
                                    _closure4_slot3 = r5;
                                    r2 = r5;
                                    _closure4_slot4 = r5;
                                    r5 = {'value': null, 'done': false};
                                    r5[0] = r7;
                                    return r5;
case 476:
                                    r2 = r6;
                                    _closure4_slot4 = r6;
                                    r5 = {'value': null, 'done': true};
                                    r5[0] = r0;
                                    return r5;
case 499:
                                    r2 = r6;
                                    _closure4_slot4 = r6;
                                    throw r0;
case 508:
                                    CatchBlockStart(arg_register=5);
                                    r2 = r6;
                                    _closure4_slot4 = r6;
                                    throw r5;
case 519:
                                    r5 = 1;
                                    if(!(r3 !== r5)) { _fun153749_ip = 558; continue _fun153749 }
case 526:
                                    if(!(r3 !== r4)) { _fun153749_ip = 542; continue _fun153749 }
case 530:
                                    r3 = {'value': undefined, 'done': true};
                                    return r3;
case 542:
                                    r3 = {'value': null, 'done': true};
                                    r3[0] = r0;
                                    return r3;
case 558:
                                    throw r0;
case 560:
                                    r0 = 3;
                                    r2 = r0;
                                    _closure4_slot4 = r0;
                                    r16 = 'Generator functions may not be called on executing generators';
                                    r0 = throwTypeError(r17);
                                }
                            };
                            return r1;
                        };
                        r2 = r5.bind(r0)(r2);
                        _closure3_slot0 = r2;
                        r4 = r2.apply;
                        if(r4) { _fun152170_ip = 52; continue _fun152170 }
case 42:
                        r1 = arguments;
                        r1 = r4.bind(r2)(r3, r1);
                        _fun152170_ip = 62; continue _fun152170;
case 52:
                        r7 = r2;
                        r6 = r3;
                        r1 = applyArguments(r8, r7);
case 62:
                        return r1;
                    }
                };
                var _closure3_slot0 = r2;
                r4 = _closure0_slot5;
                r3 = r4.log;
                r2 = 'Storage loaded';
                r2 = r3.bind(r4)(r2);
                r2 = _closure1_slot0;
                r0 = undefined;
                r1 = function(a0) { // Original name: sendMessage, environment: r1
                    _fun152171: for(var _fun152171_ip = 0; ; ) switch(_fun152171_ip) {
case 0:
                        r1 = undefined;
                        r0 = this;
                        r2 = _closure3_slot0;
                        r3 = r2.apply;
                        if(r3) { _fun152171_ip = 31; continue _fun152171 }
case 21:
                        r1 = arguments;
                        r1 = r3.bind(r2)(r0, r1);
                        _fun152171_ip = 41; continue _fun152171;
case 31:
                        r5 = r2;
                        r4 = r0;
                        r1 = applyArguments(r6, r5);
case 41:
                        return r1;
                    }
                };
                r1 = r1.bind(r0)(r2);
                return r0;
            };
            r1 = r2.bind(r3)(r1);
            return r0;
        };
        r4 = r1;
        r0 = new r5[r2](r4, r3);
        r0 = r0 instanceof Object ? r0 : r1;
        return r0;
    };
    r3 = a4;
    r3['exports'] = r4;
    r1 = r1[r6];
    r3 = r2.bind(r0)(r1);
    r2 = r3.fileFinishedImporting;
    r1 = 'modules/headless_tasks/android/DirectReply.tsx';
    r1 = r2.bind(r3)(r1);
    return r0;
}

// ===== top-level #17806  fn#17767  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    r2 = a1;
    var _closure0_slot0 = r2;
    r5 = a2;
    var _closure0_slot1 = r5;
    r1 = a6;
    var _closure0_slot2 = r1;
    r4 = r1[r0];
    r0 = undefined;
    r4 = r5.bind(r0)(r4);
    var _closure0_slot3 = r4;
    r4 = r1[r1];
    r4 = r5.bind(r0)(r4);
    var _closure0_slot4 = r4;
    r4 = function(a0) { // Environment: r3
        r1 = a0;
        r2 = r1.channelId;
        var _closure1_slot0 = r2;
        r1 = r1.connectToVoice;
        var _closure1_slot1 = r1;
        r1 = global;
        r2 = r1.Promise;
        r1 = Object.create(r2.prototype);
        r3 = function(a0) { // Environment: r0
            r2 = a0;
            var _closure2_slot0 = r2;
            r3 = _closure0_slot1;
            r2 = _closure0_slot2;
            r2 = r2[r2];
            r0 = undefined;
            r3 = r3.bind(r0)(r2);
            r2 = r3.awaitStorage;
            r1 = function() { // Environment: r1
                _fun147758: for(var _fun147758_ip = 0; ; ) switch(_fun147758_ip) {
case 0:
                    r2 = _closure1_slot1;
                    if(!r2) { _fun147758_ip = 47; continue _fun147758 }
case 10:
                    r3 = _closure0_slot1;
                    r2 = _closure0_slot2;
                    r2 = r2[r3];
                    r0 = undefined;
                    r5 = r3.bind(r0)(r2);
                    r3 = r5.selectVoiceChannel;
                    r2 = _closure1_slot0;
                    r2 = r3.bind(r5)(r2);
case 47:
                    r5 = _closure0_slot4;
                    r3 = r5.getChannelId;
                    r3 = r3.bind(r5)();
                    r5 = _closure1_slot0;
                    if(!(r3 !== r5)) { _fun147758_ip = 104; continue _fun147758 }
case 72:
                    r4 = _closure0_slot0;
                    r3 = _closure0_slot2;
                    r3 = r3[r5];
                    r0 = undefined;
                    r4 = r4.bind(r0)(r3);
                    r3 = r4.transitionToChannel;
                    r3 = r3.bind(r4)(r5);
                    _fun147758_ip = 154; continue _fun147758;
case 104:
                    r4 = _closure0_slot3;
                    r3 = r4.getChannel;
                    r4 = r3.bind(r4)(r5);
                    r0 = null;
                    if(!(r0 != r4)) { _fun147758_ip = 154; continue _fun147758 }
case 124:
                    r3 = _closure0_slot0;
                    r2 = _closure0_slot2;
                    r2 = r2[r4];
                    r0 = undefined;
                    r3 = r3.bind(r0)(r2);
                    r2 = r3.navigateToVoiceChannel;
                    r2 = r2.bind(r3)(r4);
case 154:
                    r2 = _closure2_slot0;
                    r1 = true;
                    r0 = undefined;
                    r2 = r2.bind(r0)(r1);
                    return r0;
                }
            };
            r1 = r2.bind(r3)(r1);
            return r0;
        };
        r4 = r1;
        r0 = new r5[r2](r4, r3);
        r0 = r0 instanceof Object ? r0 : r1;
        return r0;
    };
    r3 = a4;
    r3['exports'] = r4;
    r1 = r1[r6];
    r3 = r2.bind(r0)(r1);
    r2 = r3.fileFinishedImporting;
    r1 = 'modules/headless_tasks/android/SelectVoiceChannel.tsx';
    r1 = r2.bind(r3)(r1);
    return r0;
}

// ===== top-level #17807  fn#17768  [ok] =====
function(a0, a1, a2, a3, a4, a5, a6) {
    r2 = a1;
    r1 = a2;
    var _closure0_slot0 = r1;
    r1 = a6;
    var _closure0_slot1 = r1;
    r4 = r1[r0];
    r0 = undefined;
    r4 = r2.bind(r0)(r4);
    r4 = r4.NativeModules;
    var _closure0_slot2 = r4;
    r4 = function(a0) { // Environment: r3
        r1 = a0;
        r1 = r1.channelId;
        var _closure1_slot0 = r1;
        r1 = global;
        r2 = r1.Promise;
        r1 = Object.create(r2.prototype);
        r3 = function(a0) { // Environment: r0
            r2 = a0;
            var _closure2_slot0 = r2;
            r3 = _closure0_slot0;
            r2 = _closure0_slot1;
            r2 = r2[r1];
            r0 = undefined;
            r3 = r3.bind(r0)(r2);
            r2 = r3.awaitStorage;
            r1 = function() { // Environment: r1
                r2 = _closure0_slot0;
                r1 = _closure0_slot1;
                r1 = r1[r2];
                r0 = undefined;
                r5 = r2.bind(r0)(r1);
                r4 = r5.createInvite;
                r3 = _closure1_slot0;
                r2 = 'Mobile Voice Overlay';
                r1 = {};
                r3 = r4.bind(r5)(r3, r1, r2);
                r2 = r3.then;
                r1 = function(a0) { // Environment: r1
                    r3 = _closure0_slot2;
                    r4 = r3.RNCClipboard;
                    r3 = r4.setString;
                    r5 = _closure0_slot0;
                    r2 = _closure0_slot1;
                    r2 = r2[r3];
                    r0 = undefined;
                    r5 = r5.bind(r0)(r2);
                    r2 = a0;
                    r2 = r2.code;
                    r2 = r5.bind(r0)(r2);
                    r2 = r3.bind(r4)(r2);
                    r2 = _closure2_slot0;
                    r1 = true;
                    r2 = r2.bind(r0)(r1);
                    return r0;
                };
                r1 = r2.bind(r3)(r1);
                return r0;
            };
            r1 = r2.bind(r3)(r1);
            return r0;
        };
        r4 = r1;
        r0 = new r5[r2](r4, r3);
        r0 = r0 instanceof Object ? r0 : r1;
        return r0;
    };
    r3 = a4;
    r3['exports'] = r4;
    r1 = r1[r4];
    r3 = r2.bind(r0)(r1);
    r2 = r3.fileFinishedImporting;
    r1 = 'modules/headless_tasks/android/GenerateInvite.tsx';
    r1 = r2.bind(r3)(r1);
    return r0;
}

