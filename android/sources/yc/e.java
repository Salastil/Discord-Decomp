package yc;

import android.util.Pair;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.metadata.Metadata;
import fi.e0;
import fi.r0;
import hc.f0;
import hc.g1;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import jc.p0;
import ke.d0;
import ke.v;
import ke.w;
import nd.k0;

/* loaded from: classes3.dex */
public abstract class e {
    public static final byte[] a;

    static {
        int i5 = d0.a;
        a = "OpusHead".getBytes(ei.d.f8100c);
    }

    public static k0 a(int i5, w wVar) {
        wVar.F(i5 + 12);
        wVar.G(1);
        b(wVar);
        wVar.G(2);
        int u5 = wVar.u();
        if ((u5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0) {
            wVar.G(2);
        }
        if ((u5 & 64) != 0) {
            wVar.G(wVar.u());
        }
        if ((u5 & 32) != 0) {
            wVar.G(2);
        }
        wVar.G(1);
        b(wVar);
        String e9 = ke.o.e(wVar.u());
        if ("audio/mpeg".equals(e9) || "audio/vnd.dts".equals(e9) || "audio/vnd.dts.hd".equals(e9)) {
            return new k0(e9, null, -1L, -1L);
        }
        wVar.G(4);
        long v5 = wVar.v();
        long v6 = wVar.v();
        wVar.G(1);
        int b10 = b(wVar);
        long j = v6;
        byte[] bArr = new byte[b10];
        wVar.e(bArr, 0, b10);
        if (j <= 0) {
            j = -1;
        }
        return new k0(e9, bArr, j, v5 > 0 ? v5 : -1L);
    }

    public static int b(w wVar) {
        int u5 = wVar.u();
        int i5 = u5 & 127;
        while ((u5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 128) {
            u5 = wVar.u();
            i5 = (i5 << 7) | (u5 & 127);
        }
        return i5;
    }

    public static androidx.recyclerview.widget.h c(w wVar) {
        long j;
        wVar.F(8);
        if (mc.a.e(wVar.g()) == 0) {
            j = wVar.v();
            wVar.G(4);
        } else {
            long o6 = wVar.o();
            wVar.G(8);
            j = o6;
        }
        return new androidx.recyclerview.widget.h(new Metadata(new kc.a((j - 2082844800) * 1000)), wVar.v(), 9);
    }

    public static Pair d(w wVar, int i5, int i6) {
        Integer num;
        p pVar;
        Pair create;
        int i10;
        int i11;
        Integer num2;
        boolean z5;
        int i12 = wVar.f13363b;
        while (i12 - i5 < i6) {
            wVar.F(i12);
            int g6 = wVar.g();
            w3.q.f("childAtomSize must be positive", g6 > 0);
            if (wVar.g() == 1936289382) {
                int i13 = i12 + 8;
                int i14 = 0;
                int i15 = -1;
                Integer num3 = null;
                String str = null;
                while (i13 - i12 < g6) {
                    wVar.F(i13);
                    int g10 = wVar.g();
                    int g11 = wVar.g();
                    if (g11 == 1718775137) {
                        num3 = Integer.valueOf(wVar.g());
                    } else if (g11 == 1935894637) {
                        wVar.G(4);
                        str = wVar.s(4, ei.d.f8100c);
                    } else if (g11 == 1935894633) {
                        i15 = i13;
                        i14 = g10;
                    }
                    i13 += g10;
                }
                byte[] bArr = null;
                if ("cenc".equals(str) || "cbc1".equals(str) || "cens".equals(str) || "cbcs".equals(str)) {
                    w3.q.f("frma atom is mandatory", num3 != null);
                    w3.q.f("schi atom is mandatory", i15 != -1);
                    int i16 = i15 + 8;
                    while (true) {
                        if (i16 - i15 >= i14) {
                            num = num3;
                            pVar = null;
                            break;
                        }
                        wVar.F(i16);
                        int g12 = wVar.g();
                        if (wVar.g() == 1952804451) {
                            int e9 = mc.a.e(wVar.g());
                            wVar.G(1);
                            if (e9 == 0) {
                                wVar.G(1);
                                i11 = 0;
                                i10 = 0;
                            } else {
                                int u5 = wVar.u();
                                i10 = u5 & 15;
                                i11 = (u5 & 240) >> 4;
                            }
                            if (wVar.u() == 1) {
                                num2 = num3;
                                z5 = true;
                            } else {
                                num2 = num3;
                                z5 = false;
                            }
                            int u6 = wVar.u();
                            byte[] bArr2 = new byte[16];
                            wVar.e(bArr2, 0, 16);
                            if (z5 && u6 == 0) {
                                int u10 = wVar.u();
                                byte[] bArr3 = new byte[u10];
                                wVar.e(bArr3, 0, u10);
                                bArr = bArr3;
                            }
                            num = num2;
                            pVar = new p(z5, str, u6, bArr2, i11, i10, bArr);
                        } else {
                            i16 += g12;
                        }
                    }
                    w3.q.f("tenc atom is mandatory", pVar != null);
                    int i17 = d0.a;
                    create = Pair.create(num, pVar);
                } else {
                    create = null;
                }
                if (create != null) {
                    return create;
                }
            }
            i12 += g6;
        }
        return null;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:189:0x023b  */
    /* JADX WARN: Removed duplicated region for block: B:230:0x02f7 A[ADDED_TO_REGION, LOOP:12: B:230:0x02f7->B:233:0x0302, LOOP_START, PHI: r16
      0x02f7: PHI (r16v4 int) = (r16v2 int), (r16v5 int) binds: [B:229:0x02f5, B:233:0x0302] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Removed duplicated region for block: B:246:0x034c  */
    /* JADX WARN: Removed duplicated region for block: B:248:0x034f  */
    /* JADX WARN: Removed duplicated region for block: B:252:0x02e7 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:65:0x036d  */
    /* JADX WARN: Removed duplicated region for block: B:67:0x037d  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static r e(o oVar, a aVar, qc.p pVar) {
        bd.e eVar;
        boolean z5;
        int i5;
        int i6;
        int i10;
        int i11;
        int a10;
        long j;
        int i12;
        w wVar;
        long[] jArr;
        long[] jArr2;
        int[] iArr;
        Format format;
        long j5;
        int i13;
        int i14;
        long j7;
        int i15;
        int i16;
        int i17;
        int i18;
        long[] jArr3;
        int i19;
        long[] jArr4;
        long[] jArr5;
        int[] iArr2;
        int i20;
        int[] iArr3;
        long j10;
        int i21;
        o oVar2;
        int[] iArr4;
        int[] iArr5;
        int[] iArr6;
        long[] jArr6;
        int i22;
        int[] iArr7;
        long j11;
        int i23;
        long j12;
        o oVar3;
        int i24;
        long[] jArr7;
        long[] jArr8;
        int[] iArr8;
        int i25;
        int[] iArr9;
        int i26;
        int i27;
        int i28;
        Format format2 = oVar.f20841f;
        b g6 = aVar.g(1937011578);
        if (g6 != null) {
            a5.g gVar = new a5.g();
            w wVar2 = g6.f20762i;
            gVar.f157i = wVar2;
            wVar2.F(12);
            int x5 = wVar2.x();
            if ("audio/raw".equals(format2.I)) {
                int x10 = d0.x(format2.X, format2.V);
                if (x5 == 0 || x5 % x10 != 0) {
                    ke.b.N("AtomParsers", "Audio sample size mismatch. stsd sample size: " + x10 + ", stsz sample size: " + x5);
                    x5 = x10;
                }
            }
            if (x5 == 0) {
                x5 = -1;
            }
            gVar.f155d = x5;
            gVar.f156e = wVar2.x();
            eVar = gVar;
        } else {
            b g10 = aVar.g(1937013298);
            if (g10 == null) {
                throw g1.a("Track has no sample table size information", null);
            }
            bd.e eVar2 = new bd.e();
            w wVar3 = g10.f20762i;
            eVar2.f2805w = wVar3;
            wVar3.F(12);
            eVar2.f2802e = wVar3.x() & 255;
            eVar2.f2801d = wVar3.x();
            eVar = eVar2;
        }
        int b10 = eVar.b();
        if (b10 == 0) {
            return new r(oVar, new long[0], new int[0], 0, new long[0], new int[0], 0L);
        }
        b g11 = aVar.g(1937007471);
        if (g11 == null) {
            g11 = aVar.g(1668232756);
            g11.getClass();
            z5 = true;
        } else {
            z5 = false;
        }
        w wVar4 = g11.f20762i;
        b g12 = aVar.g(1937011555);
        g12.getClass();
        w wVar5 = g12.f20762i;
        b g13 = aVar.g(1937011827);
        g13.getClass();
        w wVar6 = g13.f20762i;
        b g14 = aVar.g(1937011571);
        w wVar7 = g14 != null ? g14.f20762i : null;
        b g15 = aVar.g(1668576371);
        w wVar8 = g15 != null ? g15.f20762i : null;
        c cVar = new c(wVar5, wVar4, z5);
        wVar6.F(12);
        int x11 = wVar6.x() - 1;
        int x12 = wVar6.x();
        int x13 = wVar6.x();
        if (wVar8 != null) {
            wVar8.F(12);
            i5 = wVar8.x();
        } else {
            i5 = 0;
        }
        if (wVar7 != null) {
            wVar7.F(12);
            i6 = wVar7.x();
            if (i6 > 0) {
                i11 = wVar7.x() - 1;
                i10 = 0;
                a10 = eVar.a();
                j = oVar.f20838c;
                i12 = oVar.f20837b;
                wVar = wVar8;
                long[] jArr9 = oVar.f20844i;
                jArr = oVar.f20843h;
                bd.e eVar3 = eVar;
                String str = format2.I;
                long j13 = 0;
                if (a10 == -1 && (("audio/raw".equals(str) || "audio/g711-mlaw".equals(str) || "audio/g711-alaw".equals(str)) && x11 == 0 && i5 == 0 && i6 == 0)) {
                    int i29 = cVar.a;
                    long[] jArr10 = new long[i29];
                    int[] iArr10 = new int[i29];
                    while (cVar.a()) {
                        int i30 = cVar.f20763b;
                        long[] jArr11 = jArr10;
                        jArr11[i30] = cVar.f20765d;
                        iArr10[i30] = cVar.f20764c;
                        jArr10 = jArr11;
                        a10 = a10;
                    }
                    int i31 = a10;
                    long[] jArr12 = jArr10;
                    long j14 = x13;
                    int i32 = 8192 / i31;
                    int i33 = i10;
                    int i34 = i33;
                    while (i33 < i29) {
                        i34 += d0.f(iArr10[i33], i32);
                        i33++;
                        j14 = j14;
                    }
                    long j15 = j14;
                    long[] jArr13 = new long[i34];
                    int[] iArr11 = new int[i34];
                    jArr5 = new long[i34];
                    iArr7 = new int[i34];
                    int i35 = i10;
                    int i36 = i35;
                    i22 = i36;
                    int i37 = i22;
                    while (i35 < i29) {
                        int i38 = iArr10[i35];
                        long j16 = jArr12[i35];
                        int i39 = i37;
                        int i40 = i29;
                        int i41 = i22;
                        int i42 = i39;
                        int i43 = i35;
                        int i44 = i38;
                        while (i44 > 0) {
                            int min = Math.min(i32, i44);
                            jArr13[i42] = j16;
                            int i45 = i44;
                            int i46 = i31 * min;
                            iArr11[i42] = i46;
                            int max = Math.max(i41, i46);
                            jArr5[i42] = i36 * j15;
                            iArr7[i42] = 1;
                            j16 += iArr11[i42];
                            i36 += min;
                            i44 = i45 - min;
                            i42++;
                            i41 = max;
                        }
                        i35 = i43 + 1;
                        int i47 = i42;
                        i22 = i41;
                        i29 = i40;
                        i37 = i47;
                    }
                    jArr3 = jArr;
                    oVar2 = oVar;
                    format = format2;
                    i16 = i12;
                    j10 = j15 * i36;
                    j5 = j;
                    jArr6 = jArr13;
                    iArr6 = iArr11;
                } else {
                    jArr2 = new long[b10];
                    iArr = new int[b10];
                    long[] jArr14 = new long[b10];
                    int[] iArr12 = new int[b10];
                    format = format2;
                    j5 = j;
                    int i48 = x13;
                    int i49 = i11;
                    int i50 = i10;
                    i13 = i50;
                    i14 = i13;
                    long j17 = 0;
                    j7 = 0;
                    i15 = x11;
                    i16 = i12;
                    w wVar9 = wVar7;
                    i17 = i14;
                    i18 = x12;
                    jArr3 = jArr;
                    int i51 = i17;
                    while (true) {
                        if (i17 < b10) {
                            int[] iArr13 = iArr;
                            i19 = i51;
                            jArr4 = jArr2;
                            jArr5 = jArr14;
                            iArr2 = iArr12;
                            i20 = i13;
                            iArr3 = iArr13;
                            break;
                        }
                        j11 = j7;
                        i23 = i13;
                        boolean z6 = true;
                        while (i23 == 0) {
                            z6 = cVar.a();
                            if (!z6) {
                                break;
                            }
                            j11 = cVar.f20765d;
                            i23 = cVar.f20764c;
                            i51 = i51;
                        }
                        int i52 = i51;
                        if (!z6) {
                            ke.b.N("AtomParsers", "Unexpected end of chunk data");
                            long[] copyOf = Arrays.copyOf(jArr2, i17);
                            iArr3 = Arrays.copyOf(iArr, i17);
                            long[] copyOf2 = Arrays.copyOf(jArr14, i17);
                            iArr2 = Arrays.copyOf(iArr12, i17);
                            jArr4 = copyOf;
                            jArr5 = copyOf2;
                            b10 = i17;
                            i20 = i23;
                            i19 = i52;
                            break;
                        }
                        i51 = i52;
                        if (wVar != null) {
                            int i53 = i14;
                            while (i53 == 0 && i5 > 0) {
                                i53 = wVar.x();
                                i51 = wVar.g();
                                i5--;
                            }
                            i14 = i53 - 1;
                        }
                        jArr2[i17] = j11;
                        int c6 = eVar3.c();
                        iArr[i17] = c6;
                        if (c6 > i50) {
                            i50 = c6;
                        }
                        long[] jArr15 = jArr2;
                        int[] iArr14 = iArr;
                        jArr14[i17] = j17 + i51;
                        iArr12[i17] = wVar9 == null ? 1 : i10;
                        if (i17 == i49) {
                            iArr12[i17] = 1;
                            i6--;
                            if (i6 > 0) {
                                wVar9.getClass();
                                i49 = wVar9.x() - 1;
                            }
                        }
                        j17 += i48;
                        i18--;
                        if (i18 == 0 && i15 > 0) {
                            i15--;
                            i18 = wVar6.x();
                            i48 = wVar6.g();
                        }
                        long j18 = j11 + iArr14[i17];
                        i13 = i23 - 1;
                        i17++;
                        j7 = j18;
                        iArr = iArr14;
                        jArr2 = jArr15;
                    }
                    j10 = j17 + i19;
                    if (wVar != null) {
                        while (i5 > 0) {
                            if (wVar.x() != 0) {
                                i21 = i10;
                                break;
                            }
                            wVar.g();
                            i5--;
                        }
                    }
                    i21 = 1;
                    if (i6 != 0 && i18 == 0 && i20 == 0 && i15 == 0 && i14 == 0 && i21 != 0) {
                        oVar2 = oVar;
                        iArr4 = iArr3;
                        iArr5 = iArr2;
                    } else {
                        StringBuilder sb2 = new StringBuilder("Inconsistent stbl box for track ");
                        oVar2 = oVar;
                        iArr4 = iArr3;
                        int i54 = i21;
                        iArr5 = iArr2;
                        a3.e.y(sb2, oVar2.a, ": remainingSynchronizationSamples ", i6, ", remainingSamplesAtTimestampDelta ");
                        a3.e.y(sb2, i18, ", remainingSamplesInChunk ", i20, ", remainingTimestampDeltaChanges ");
                        sb2.append(i15);
                        sb2.append(", remainingSamplesAtTimestampOffset ");
                        sb2.append(i14);
                        sb2.append(i54 != 0 ? ", ctts invalid" : "");
                        ke.b.N("AtomParsers", sb2.toString());
                    }
                    iArr6 = iArr4;
                    jArr6 = jArr4;
                    i22 = i50;
                    iArr7 = iArr5;
                }
                long P = d0.P(j10, 1000000L, oVar2.f20838c);
                if (jArr3 != null) {
                    d0.Q(jArr5, j5);
                    return new r(oVar2, jArr6, iArr6, i22, jArr5, iArr7, P);
                }
                long[] jArr16 = jArr6;
                int i55 = b10;
                long j19 = j10;
                long[] jArr17 = jArr5;
                int[] iArr15 = iArr7;
                int i56 = i22;
                long[] jArr18 = jArr3;
                long j20 = j5;
                if (jArr18.length == 1) {
                    i24 = i16;
                    if (i24 != 1 || jArr17.length < 2) {
                        j12 = j19;
                    } else {
                        jArr9.getClass();
                        long j21 = jArr9[i10];
                        int[] iArr16 = iArr6;
                        long P2 = d0.P(jArr18[i10], oVar2.f20838c, oVar2.f20839d) + j21;
                        int length = jArr17.length - 1;
                        int i57 = i10;
                        int i58 = d0.i(4, i57, length);
                        int i59 = d0.i(jArr17.length - 4, i57, length);
                        long j22 = jArr17[i57];
                        if (j22 <= j21 && j21 < jArr17[i58] && jArr17[i59] < P2 && P2 <= j19) {
                            long j23 = j19 - P2;
                            Format format3 = format;
                            j12 = j19;
                            long P3 = d0.P(j21 - j22, format3.W, oVar2.f20838c);
                            long P4 = d0.P(j23, format3.W, oVar2.f20838c);
                            if (!(P3 == 0 && P4 == 0) && P3 <= 2147483647L && P4 <= 2147483647L) {
                                pVar.a = (int) P3;
                                pVar.f16793b = (int) P4;
                                d0.Q(jArr17, j20);
                                return new r(oVar2, jArr16, iArr16, i56, jArr17, iArr15, d0.P(jArr18[0], 1000000L, oVar2.f20839d));
                            }
                            iArr6 = iArr16;
                            iArr15 = iArr15;
                        } else {
                            iArr6 = iArr16;
                            j12 = j19;
                        }
                        i56 = i56;
                    }
                    oVar3 = oVar2;
                } else {
                    j12 = j19;
                    oVar3 = oVar2;
                    i24 = i16;
                }
                int i60 = 1;
                if (jArr18.length == 1) {
                    if (jArr18[0] == 0) {
                        jArr9.getClass();
                        long j24 = jArr9[0];
                        for (int i61 = 0; i61 < jArr17.length; i61++) {
                            jArr17[i61] = d0.P(jArr17[i61] - j24, 1000000L, oVar3.f20838c);
                        }
                        return new r(oVar3, jArr16, iArr6, i56, jArr17, iArr15, d0.P(j12 - j24, 1000000L, oVar3.f20838c));
                    }
                    i60 = 1;
                }
                boolean z7 = i24 == i60;
                int[] iArr17 = new int[jArr18.length];
                int[] iArr18 = new int[jArr18.length];
                jArr9.getClass();
                int i62 = 0;
                boolean z8 = false;
                int i63 = 0;
                int i64 = 0;
                while (i62 < jArr18.length) {
                    int i65 = i62;
                    boolean z10 = z8;
                    long j25 = jArr9[i65];
                    if (j25 != -1) {
                        iArr9 = iArr6;
                        i26 = i56;
                        long P5 = d0.P(jArr18[i65], oVar3.f20838c, oVar3.f20839d);
                        i25 = i65;
                        int i66 = 1;
                        iArr17[i25] = d0.e(jArr17, j25, true);
                        iArr18[i25] = d0.b(jArr17, j25 + P5, z7);
                        while (true) {
                            i27 = iArr17[i25];
                            i28 = iArr18[i25];
                            if (i27 >= i28 || (iArr15[i27] & i66) != 0) {
                                break;
                            }
                            iArr17[i25] = i27 + 1;
                            i66 = 1;
                        }
                        i63 = (i28 - i27) + i63;
                        z8 = z10 | (i64 != i27);
                        i64 = i28;
                    } else {
                        i25 = i65;
                        iArr9 = iArr6;
                        i26 = i56;
                        z8 = z10;
                    }
                    i62 = i25 + 1;
                    i56 = i26;
                    iArr6 = iArr9;
                }
                int[] iArr19 = iArr6;
                int i67 = i56;
                boolean z11 = z8 | (i63 != i55);
                long[] jArr19 = z11 ? new long[i63] : jArr16;
                int[] iArr20 = z11 ? new int[i63] : iArr19;
                int i68 = z11 ? 0 : i67;
                int[] iArr21 = z11 ? new int[i63] : iArr15;
                long[] jArr20 = new long[i63];
                int i69 = 0;
                int i70 = 0;
                long j26 = 0;
                while (i69 < jArr18.length) {
                    long j27 = jArr9[i69];
                    boolean z12 = z11;
                    int i71 = iArr17[i69];
                    long[] jArr21 = jArr18;
                    int i72 = iArr18[i69];
                    if (z12) {
                        jArr8 = jArr17;
                        int i73 = i72 - i71;
                        System.arraycopy(jArr16, i71, jArr19, i70, i73);
                        jArr7 = jArr19;
                        iArr8 = iArr19;
                        System.arraycopy(iArr8, i71, iArr20, i70, i73);
                        System.arraycopy(iArr15, i71, iArr21, i70, i73);
                    } else {
                        jArr7 = jArr19;
                        jArr8 = jArr17;
                        iArr8 = iArr19;
                    }
                    int i74 = i68;
                    while (i71 < i72) {
                        int i75 = i72;
                        int[] iArr22 = iArr8;
                        long P6 = d0.P(j26, 1000000L, oVar3.f20839d);
                        long P7 = d0.P(jArr8[i71] - j27, 1000000L, oVar3.f20838c);
                        int i76 = i71;
                        long j28 = j13;
                        if (i24 != 1) {
                            P7 = Math.max(j28, P7);
                        }
                        jArr20[i70] = P6 + P7;
                        if (z12 && iArr20[i70] > i74) {
                            i74 = iArr22[i76];
                        }
                        i70++;
                        j13 = j28;
                        i71 = i76 + 1;
                        iArr8 = iArr22;
                        oVar3 = oVar;
                        i72 = i75;
                    }
                    iArr19 = iArr8;
                    j26 += jArr21[i69];
                    i69++;
                    i68 = i74;
                    jArr17 = jArr8;
                    jArr19 = jArr7;
                    jArr18 = jArr21;
                    oVar3 = oVar;
                    z11 = z12;
                }
                return new r(oVar, jArr19, iArr20, i68, jArr20, iArr21, d0.P(j26, 1000000L, oVar.f20839d));
            }
            i10 = 0;
            wVar7 = null;
        } else {
            i6 = 0;
            i10 = 0;
        }
        i11 = -1;
        a10 = eVar.a();
        j = oVar.f20838c;
        i12 = oVar.f20837b;
        wVar = wVar8;
        long[] jArr92 = oVar.f20844i;
        jArr = oVar.f20843h;
        bd.e eVar32 = eVar;
        String str2 = format2.I;
        long j132 = 0;
        if (a10 == -1) {
        }
        jArr2 = new long[b10];
        iArr = new int[b10];
        long[] jArr142 = new long[b10];
        int[] iArr122 = new int[b10];
        format = format2;
        j5 = j;
        int i482 = x13;
        int i492 = i11;
        int i502 = i10;
        i13 = i502;
        i14 = i13;
        long j172 = 0;
        j7 = 0;
        i15 = x11;
        i16 = i12;
        w wVar92 = wVar7;
        i17 = i14;
        i18 = x12;
        jArr3 = jArr;
        int i512 = i17;
        while (true) {
            if (i17 < b10) {
            }
            long j182 = j11 + iArr14[i17];
            i13 = i23 - 1;
            i17++;
            j7 = j182;
            iArr = iArr14;
            jArr2 = jArr15;
        }
        j10 = j172 + i19;
        if (wVar != null) {
        }
        i21 = 1;
        if (i6 != 0) {
        }
        StringBuilder sb22 = new StringBuilder("Inconsistent stbl box for track ");
        oVar2 = oVar;
        iArr4 = iArr3;
        int i542 = i21;
        iArr5 = iArr2;
        a3.e.y(sb22, oVar2.a, ": remainingSynchronizationSamples ", i6, ", remainingSamplesAtTimestampDelta ");
        a3.e.y(sb22, i18, ", remainingSamplesInChunk ", i20, ", remainingTimestampDeltaChanges ");
        sb22.append(i15);
        sb22.append(", remainingSamplesAtTimestampOffset ");
        sb22.append(i14);
        sb22.append(i542 != 0 ? ", ctts invalid" : "");
        ke.b.N("AtomParsers", sb22.toString());
        iArr6 = iArr4;
        jArr6 = jArr4;
        i22 = i502;
        iArr7 = iArr5;
        long P8 = d0.P(j10, 1000000L, oVar2.f20838c);
        if (jArr3 != null) {
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:37:0x00de, code lost:
    
        if (r11 == 0) goto L49;
     */
    /* JADX WARN: Code restructure failed: missing block: B:38:0x00e0, code lost:
    
        r11 = -9223372036854775807L;
     */
    /* JADX WARN: Removed duplicated region for block: B:17:0x0e6c  */
    /* JADX WARN: Removed duplicated region for block: B:19:0x0e71  */
    /* JADX WARN: Removed duplicated region for block: B:218:0x05af  */
    /* JADX WARN: Removed duplicated region for block: B:337:0x0952  */
    /* JADX WARN: Removed duplicated region for block: B:49:0x0135  */
    /* JADX WARN: Removed duplicated region for block: B:52:0x0146  */
    /* JADX WARN: Removed duplicated region for block: B:56:0x0182  */
    /* JADX WARN: Removed duplicated region for block: B:59:0x0190  */
    /* JADX WARN: Removed duplicated region for block: B:625:0x0e45  */
    /* JADX WARN: Removed duplicated region for block: B:626:0x0e49  */
    /* JADX WARN: Removed duplicated region for block: B:62:0x01d3  */
    /* JADX WARN: Removed duplicated region for block: B:647:0x0ea5 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:650:0x0192  */
    /* JADX WARN: Removed duplicated region for block: B:651:0x0185  */
    /* JADX WARN: Removed duplicated region for block: B:652:0x014c  */
    /* JADX WARN: Removed duplicated region for block: B:653:0x0138  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static ArrayList f(a aVar, qc.p pVar, long j, nc.i iVar, boolean z5, boolean z6, ei.e eVar) {
        long j5;
        long j7;
        int i5;
        int i6;
        long j10;
        long j11;
        b g6;
        ArrayList arrayList;
        ArrayList arrayList2;
        int i10;
        long[] jArr;
        long[] jArr2;
        ei.e eVar2;
        o oVar;
        Pair create;
        ArrayList arrayList3;
        a aVar2;
        Pair pair;
        int i11;
        int i12;
        p[] pVarArr;
        int i13;
        int i14;
        int i15;
        nc.i iVar2;
        int i16;
        String str;
        List list;
        int i17;
        int i18;
        int i19;
        int i20;
        int i21;
        int i22;
        float f2;
        byte[] bArr;
        int i23;
        byte[] bArr2;
        int i24;
        String str2;
        int i25;
        int i26;
        int i27;
        String str3;
        int i28;
        int[] iArr;
        int[] iArr2;
        int i29;
        int g10;
        int i30;
        int i31;
        int i32;
        nc.i iVar3;
        String str4;
        String str5;
        int i33;
        String str6;
        int i34;
        int i35;
        int i36;
        k0 k0Var;
        List list2;
        int i37;
        String str7;
        int i38;
        int i39;
        String str8;
        String str9;
        String str10;
        int i40;
        int i41;
        int i42;
        String str11;
        k0 k0Var2;
        String str12;
        String str13;
        int i43;
        List s2;
        String str14;
        int i44;
        nc.i x5;
        long j12;
        r0 r0Var;
        o oVar2;
        ArrayList arrayList4;
        a aVar3 = aVar;
        nc.i iVar4 = iVar;
        ArrayList arrayList5 = aVar3.f20761w;
        ArrayList arrayList6 = new ArrayList();
        int i45 = 0;
        while (i45 < arrayList5.size()) {
            a aVar4 = (a) arrayList5.get(i45);
            if (aVar4.f14426e != 1953653099) {
                arrayList = arrayList5;
                arrayList4 = arrayList6;
                i10 = i45;
            } else {
                b g11 = aVar3.g(1836476516);
                g11.getClass();
                a f10 = aVar4.f(1835297121);
                f10.getClass();
                b g12 = f10.g(1751411826);
                g12.getClass();
                w wVar = g12.f20762i;
                wVar.F(16);
                int g13 = wVar.g();
                int i46 = g13 == 1936684398 ? 1 : g13 == 1986618469 ? 2 : (g13 == 1952807028 || g13 == 1935832172 || g13 == 1937072756 || g13 == 1668047728) ? 3 : g13 == 1835365473 ? 5 : -1;
                if (i46 == -1) {
                    eVar2 = eVar;
                    arrayList = arrayList5;
                    arrayList2 = arrayList6;
                    i10 = i45;
                } else {
                    b g14 = aVar4.g(1953196132);
                    g14.getClass();
                    w wVar2 = g14.f20762i;
                    wVar2.F(8);
                    int e9 = mc.a.e(wVar2.g());
                    wVar2.G(e9 == 0 ? 8 : 16);
                    int g15 = wVar2.g();
                    wVar2.G(4);
                    int i47 = wVar2.f13363b;
                    int i48 = e9 == 0 ? 4 : 8;
                    int i49 = 0;
                    while (true) {
                        j5 = -9223372036854775807L;
                        if (i49 >= i48) {
                            wVar2.G(i48);
                            break;
                        }
                        if (wVar2.a[i47 + i49] != -1) {
                            j7 = e9 == 0 ? wVar2.v() : wVar2.y();
                        } else {
                            i49++;
                        }
                    }
                    wVar2.G(16);
                    int g16 = wVar2.g();
                    int g17 = wVar2.g();
                    wVar2.G(4);
                    int g18 = wVar2.g();
                    int g19 = wVar2.g();
                    if (g16 == 0 && g17 == 65536) {
                        i5 = -65536;
                        if (g18 == -65536 && g19 == 0) {
                            i6 = 90;
                            j10 = j == -9223372036854775807L ? j7 : j;
                            long j13 = c(g11.f20762i).f2401e;
                            if (j10 == -9223372036854775807L) {
                                j11 = j13;
                            } else {
                                j11 = j13;
                                j5 = d0.P(j10, 1000000L, j11);
                            }
                            a f11 = f10.f(1835626086);
                            f11.getClass();
                            a f12 = f11.f(1937007212);
                            f12.getClass();
                            b g20 = f10.g(1835296868);
                            g20.getClass();
                            w wVar3 = g20.f20762i;
                            wVar3.F(8);
                            int e10 = mc.a.e(wVar3.g());
                            wVar3.G(e10 == 0 ? 8 : 16);
                            long v5 = wVar3.v();
                            wVar3.G(e10 == 0 ? 4 : 8);
                            int z7 = wVar3.z();
                            Pair create2 = Pair.create(Long.valueOf(v5), "" + ((char) (((z7 >> 10) & 31) + 96)) + ((char) (((z7 >> 5) & 31) + 96)) + ((char) ((z7 & 31) + 96)));
                            g6 = f12.g(1937011556);
                            if (g6 == null) {
                                throw g1.a("Malformed sample table (stbl) missing sample description (stsd)", null);
                            }
                            w wVar4 = g6.f20762i;
                            String str15 = (String) create2.second;
                            wVar4.F(12);
                            int g21 = wVar4.g();
                            p[] pVarArr2 = new p[g21];
                            long j14 = j5;
                            int i50 = 0;
                            Format format = null;
                            int i51 = 0;
                            int i52 = 0;
                            while (i50 < g21) {
                                int i53 = wVar4.f13363b;
                                int g22 = wVar4.g();
                                ArrayList arrayList7 = arrayList5;
                                int i54 = g15;
                                String str16 = "childAtomSize must be positive";
                                w3.q.f("childAtomSize must be positive", g22 > 0);
                                int g23 = wVar4.g();
                                int i55 = i45;
                                if (g23 == 1635148593 || g23 == 1635148595 || g23 == 1701733238 || g23 == 1831958048 || g23 == 1836070006 || g23 == 1752589105 || g23 == 1751479857 || g23 == 1932670515 || g23 == 1211250227 || g23 == 1987063864 || g23 == 1987063865 || g23 == 1635135537 || g23 == 1685479798 || g23 == 1685479729 || g23 == 1685481573 || g23 == 1685481521) {
                                    int i56 = i6;
                                    arrayList3 = arrayList6;
                                    String str17 = "childAtomSize must be positive";
                                    aVar2 = aVar4;
                                    pair = create2;
                                    i11 = i46;
                                    i12 = g21;
                                    pVarArr = pVarArr2;
                                    i13 = i50;
                                    wVar4.F(i53 + 16);
                                    wVar4.G(16);
                                    int z8 = wVar4.z();
                                    int z10 = wVar4.z();
                                    wVar4.G(50);
                                    int i57 = wVar4.f13363b;
                                    if (g23 == 1701733238) {
                                        i14 = i53;
                                        i15 = g22;
                                        Pair d6 = d(wVar4, i14, i15);
                                        if (d6 != null) {
                                            g23 = ((Integer) d6.first).intValue();
                                            iVar2 = iVar == null ? null : iVar.x(((p) d6.second).f20845b);
                                            pVarArr[i13] = (p) d6.second;
                                        } else {
                                            iVar2 = iVar;
                                        }
                                        wVar4.F(i57);
                                    } else {
                                        i14 = i53;
                                        i15 = g22;
                                        iVar2 = iVar;
                                    }
                                    int i58 = i57;
                                    i16 = i14;
                                    str = str15;
                                    nc.i iVar5 = iVar2;
                                    String str18 = g23 == 1831958048 ? "video/mpeg" : g23 == 1211250227 ? "video/3gpp" : null;
                                    float f13 = 1.0f;
                                    int i59 = i52;
                                    List list3 = null;
                                    int i60 = -1;
                                    int i61 = -1;
                                    String str19 = null;
                                    byte[] bArr3 = null;
                                    ByteBuffer byteBuffer = null;
                                    k0 k0Var3 = null;
                                    int i62 = -1;
                                    boolean z11 = false;
                                    int i63 = -1;
                                    while (true) {
                                        if (i58 - i16 >= i15) {
                                            list = list3;
                                            break;
                                        }
                                        wVar4.F(i58);
                                        int i64 = wVar4.f13363b;
                                        int i65 = i58;
                                        int g24 = wVar4.g();
                                        list = list3;
                                        if (g24 == 0 && wVar4.f13363b - i16 == i15) {
                                            break;
                                        }
                                        w3.q.f(str17, g24 > 0);
                                        int g25 = wVar4.g();
                                        String str20 = str17;
                                        if (g25 == 1635148611) {
                                            w3.q.f(null, str18 == null);
                                            wVar4.F(i64 + 8);
                                            le.a a10 = le.a.a(wVar4);
                                            list3 = a10.a;
                                            i24 = a10.f13845b;
                                            if (!z11) {
                                                f13 = a10.f13851h;
                                            }
                                            str2 = a10.f13852i;
                                            i25 = a10.f13848e;
                                            i26 = a10.f13849f;
                                            i27 = a10.f13850g;
                                            str3 = "video/avc";
                                        } else if (g25 == 1752589123) {
                                            w3.q.f(null, str18 == null);
                                            wVar4.F(i64 + 8);
                                            le.e a11 = le.e.a(wVar4);
                                            list3 = a11.a;
                                            i24 = a11.f13871b;
                                            if (!z11) {
                                                f13 = a11.f13875f;
                                            }
                                            str2 = a11.f13876g;
                                            i25 = a11.f13872c;
                                            i26 = a11.f13873d;
                                            i27 = a11.f13874e;
                                            str3 = "video/hevc";
                                        } else {
                                            if (g25 == 1685480259 || g25 == 1685485123) {
                                                i19 = z8;
                                                i20 = g23;
                                                i21 = z10;
                                                i22 = i15;
                                                f2 = f13;
                                                bArr = bArr3;
                                                i23 = i63;
                                                a5.m i66 = a5.m.i(wVar4);
                                                if (i66 != null) {
                                                    str19 = i66.f193d;
                                                    str18 = "video/dolby-vision";
                                                }
                                            } else {
                                                if (g25 == 1987076931) {
                                                    w3.q.f(null, str18 == null);
                                                    String str21 = g23 == 1987063864 ? "video/x-vnd.on2.vp8" : "video/x-vnd.on2.vp9";
                                                    wVar4.F(i64 + 12);
                                                    wVar4.G(2);
                                                    boolean z12 = (wVar4.u() & 1) != 0;
                                                    int u5 = wVar4.u();
                                                    int u6 = wVar4.u();
                                                    i60 = le.b.b(u5);
                                                    int i67 = z12 ? 1 : 2;
                                                    i61 = le.b.c(u6);
                                                    i19 = z8;
                                                    i20 = g23;
                                                    i21 = z10;
                                                    i62 = i67;
                                                    i22 = i15;
                                                    str18 = str21;
                                                    list3 = list;
                                                } else {
                                                    if (g25 == 1635135811) {
                                                        w3.q.f(null, str18 == null);
                                                        str18 = "video/av01";
                                                    } else if (g25 == 1668050025) {
                                                        if (byteBuffer == null) {
                                                            byteBuffer = ByteBuffer.allocate(25).order(ByteOrder.LITTLE_ENDIAN);
                                                        }
                                                        ByteBuffer byteBuffer2 = byteBuffer;
                                                        byteBuffer2.position(21);
                                                        byteBuffer2.putShort(wVar4.r());
                                                        byteBuffer2.putShort(wVar4.r());
                                                        byteBuffer = byteBuffer2;
                                                    } else {
                                                        if (g25 == 1835295606) {
                                                            if (byteBuffer == null) {
                                                                byteBuffer = ByteBuffer.allocate(25).order(ByteOrder.LITTLE_ENDIAN);
                                                            }
                                                            ByteBuffer byteBuffer3 = byteBuffer;
                                                            short r5 = wVar4.r();
                                                            short r7 = wVar4.r();
                                                            i20 = g23;
                                                            short r10 = wVar4.r();
                                                            i22 = i15;
                                                            short r11 = wVar4.r();
                                                            i23 = i63;
                                                            short r12 = wVar4.r();
                                                            bArr = bArr3;
                                                            short r13 = wVar4.r();
                                                            f2 = f13;
                                                            short r14 = wVar4.r();
                                                            i21 = z10;
                                                            short r15 = wVar4.r();
                                                            long v6 = wVar4.v();
                                                            long v7 = wVar4.v();
                                                            i19 = z8;
                                                            byteBuffer3.position(1);
                                                            byteBuffer3.putShort(r12);
                                                            byteBuffer3.putShort(r13);
                                                            byteBuffer3.putShort(r5);
                                                            byteBuffer3.putShort(r7);
                                                            byteBuffer3.putShort(r10);
                                                            byteBuffer3.putShort(r11);
                                                            byteBuffer3.putShort(r14);
                                                            byteBuffer3.putShort(r15);
                                                            byteBuffer3.putShort((short) (v6 / 10000));
                                                            byteBuffer3.putShort((short) (v7 / 10000));
                                                            byteBuffer = byteBuffer3;
                                                        } else {
                                                            i19 = z8;
                                                            i20 = g23;
                                                            i21 = z10;
                                                            i22 = i15;
                                                            f2 = f13;
                                                            bArr = bArr3;
                                                            i23 = i63;
                                                            if (g25 == 1681012275) {
                                                                w3.q.f(null, str18 == null);
                                                                str18 = "video/3gpp";
                                                            } else {
                                                                if (g25 == 1702061171) {
                                                                    w3.q.f(null, str18 == null);
                                                                    k0 a12 = a(i64, wVar4);
                                                                    String str22 = (String) a12.f15122i;
                                                                    byte[] bArr4 = (byte[]) a12.f15123v;
                                                                    list3 = bArr4 != null ? e0.s(bArr4) : list;
                                                                    k0Var3 = a12;
                                                                    str18 = str22;
                                                                    i63 = i23;
                                                                    bArr3 = bArr;
                                                                } else if (g25 == 1885434736) {
                                                                    wVar4.F(i64 + 8);
                                                                    f13 = wVar4.x() / wVar4.x();
                                                                    list3 = list;
                                                                    i63 = i23;
                                                                    bArr3 = bArr;
                                                                    z11 = true;
                                                                } else if (g25 == 1937126244) {
                                                                    int i68 = i64 + 8;
                                                                    while (true) {
                                                                        if (i68 - i64 >= g24) {
                                                                            bArr2 = null;
                                                                            break;
                                                                        }
                                                                        wVar4.F(i68);
                                                                        int g26 = wVar4.g();
                                                                        if (wVar4.g() == 1886547818) {
                                                                            bArr2 = Arrays.copyOfRange(wVar4.a, i68, g26 + i68);
                                                                            break;
                                                                        }
                                                                        i68 += g26;
                                                                    }
                                                                    bArr3 = bArr2;
                                                                    list3 = list;
                                                                    i63 = i23;
                                                                } else if (g25 == 1936995172) {
                                                                    int u10 = wVar4.u();
                                                                    wVar4.G(3);
                                                                    if (u10 == 0) {
                                                                        int u11 = wVar4.u();
                                                                        if (u11 == 0) {
                                                                            i23 = 0;
                                                                        } else if (u11 == 1) {
                                                                            i23 = 1;
                                                                        } else if (u11 == 2) {
                                                                            i23 = 2;
                                                                        } else if (u11 == 3) {
                                                                            i23 = 3;
                                                                        }
                                                                    }
                                                                } else if (g25 == 1668246642 && i60 == -1 && i61 == -1) {
                                                                    int g27 = wVar4.g();
                                                                    if (g27 == 1852009592 || g27 == 1852009571) {
                                                                        int z13 = wVar4.z();
                                                                        int z14 = wVar4.z();
                                                                        wVar4.G(2);
                                                                        boolean z15 = g24 == 19 && (wVar4.u() & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0;
                                                                        int b10 = le.b.b(z13);
                                                                        int i69 = z15 ? 1 : 2;
                                                                        i60 = b10;
                                                                        i61 = le.b.c(z14);
                                                                        i62 = i69;
                                                                    } else {
                                                                        ke.b.N("AtomParsers", "Unsupported color type: " + mc.a.b(g27));
                                                                    }
                                                                }
                                                                f13 = f2;
                                                            }
                                                        }
                                                        list3 = list;
                                                        i63 = i23;
                                                        bArr3 = bArr;
                                                        f13 = f2;
                                                    }
                                                    i19 = z8;
                                                    i20 = g23;
                                                    i21 = z10;
                                                    i22 = i15;
                                                    list3 = list;
                                                }
                                                i58 = i65 + g24;
                                                str17 = str20;
                                                g23 = i20;
                                                i15 = i22;
                                                z10 = i21;
                                                z8 = i19;
                                            }
                                            list3 = list;
                                            i63 = i23;
                                            bArr3 = bArr;
                                            f13 = f2;
                                            i58 = i65 + g24;
                                            str17 = str20;
                                            g23 = i20;
                                            i15 = i22;
                                            z10 = i21;
                                            z8 = i19;
                                        }
                                        i19 = z8;
                                        i20 = g23;
                                        i21 = z10;
                                        i59 = i24;
                                        i22 = i15;
                                        i62 = i26;
                                        str18 = str3;
                                        str19 = str2;
                                        i60 = i25;
                                        i61 = i27;
                                        i58 = i65 + g24;
                                        str17 = str20;
                                        g23 = i20;
                                        i15 = i22;
                                        z10 = i21;
                                        z8 = i19;
                                    }
                                    int i70 = z8;
                                    int i71 = z10;
                                    i17 = i15;
                                    float f14 = f13;
                                    byte[] bArr5 = bArr3;
                                    int i72 = i63;
                                    if (str18 == null) {
                                        i18 = i56;
                                    } else {
                                        f0 f0Var = new f0();
                                        f0Var.a = Integer.toString(i54);
                                        f0Var.k = str18;
                                        f0Var.f9676h = str19;
                                        f0Var.f9682p = i70;
                                        f0Var.f9683q = i71;
                                        f0Var.f9686t = f14;
                                        i18 = i56;
                                        f0Var.f9685s = i18;
                                        f0Var.f9687u = bArr5;
                                        f0Var.f9688v = i72;
                                        f0Var.f9679m = list;
                                        f0Var.f9680n = iVar5;
                                        int i73 = i62;
                                        if (i60 != -1 || i73 != -1 || i61 != -1 || byteBuffer != null) {
                                            f0Var.f9689w = new le.b(i60, i73, i61, byteBuffer != null ? byteBuffer.array() : null);
                                        }
                                        if (k0Var3 != null) {
                                            k0 k0Var4 = k0Var3;
                                            f0Var.f9674f = ki.b.O(k0Var4.f15120d);
                                            f0Var.f9675g = ki.b.O(k0Var4.f15121e);
                                        }
                                        format = new Format(f0Var);
                                    }
                                    i52 = i59;
                                } else {
                                    i11 = i46;
                                    if (g23 == 1836069985 || g23 == 1701733217 || g23 == 1633889587 || g23 == 1700998451 || g23 == 1633889588 || g23 == 1835823201 || g23 == 1685353315 || g23 == 1685353317 || g23 == 1685353320 || g23 == 1685353324 || g23 == 1685353336 || g23 == 1935764850 || g23 == 1935767394 || g23 == 1819304813 || g23 == 1936684916 || g23 == 1953984371 || g23 == 778924082 || g23 == 778924083 || g23 == 1835557169 || g23 == 1835560241 || g23 == 1634492771 || g23 == 1634492791 || g23 == 1970037111 || g23 == 1332770163 || g23 == 1716281667) {
                                        i12 = g21;
                                        pVarArr = pVarArr2;
                                        int[] iArr3 = jc.a.f12497f;
                                        int[] iArr4 = jc.a.f12495d;
                                        wVar4.F(i53 + 16);
                                        if (z6) {
                                            int z16 = wVar4.z();
                                            wVar4.G(6);
                                            i28 = z16;
                                        } else {
                                            wVar4.G(8);
                                            i28 = 0;
                                        }
                                        if (i28 == 0 || i28 == 1) {
                                            iArr = iArr3;
                                            iArr2 = iArr4;
                                            int z17 = wVar4.z();
                                            wVar4.G(6);
                                            byte[] bArr6 = wVar4.a;
                                            i29 = z17;
                                            int i74 = wVar4.f13363b;
                                            int i75 = i74 + 1;
                                            wVar4.f13363b = i75;
                                            int i76 = (bArr6[i74] & 255) << 8;
                                            wVar4.f13363b = i74 + 2;
                                            int i77 = i76 | (bArr6[i75] & 255);
                                            wVar4.f13363b = i74 + 4;
                                            wVar4.F(i74);
                                            g10 = wVar4.g();
                                            if (i28 == 1) {
                                                wVar4.G(16);
                                            }
                                            i30 = i77;
                                        } else if (i28 == 2) {
                                            wVar4.G(16);
                                            iArr = iArr3;
                                            iArr2 = iArr4;
                                            i30 = (int) Math.round(Double.longBitsToDouble(wVar4.o()));
                                            int x10 = wVar4.x();
                                            wVar4.G(20);
                                            i29 = x10;
                                            g10 = 0;
                                        } else {
                                            i32 = i6;
                                            arrayList3 = arrayList6;
                                            aVar2 = aVar4;
                                            pair = create2;
                                            i13 = i50;
                                            i16 = i53;
                                            i31 = g22;
                                            str = str15;
                                            i18 = i32;
                                            i17 = i31;
                                        }
                                        int i78 = wVar4.f13363b;
                                        int i79 = i30;
                                        if (g23 == 1701733217) {
                                            Pair d7 = d(wVar4, i53, g22);
                                            if (d7 != null) {
                                                int intValue = ((Integer) d7.first).intValue();
                                                if (iVar4 == null) {
                                                    i44 = intValue;
                                                    x5 = null;
                                                } else {
                                                    i44 = intValue;
                                                    x5 = iVar4.x(((p) d7.second).f20845b);
                                                }
                                                pVarArr[i50] = (p) d7.second;
                                                iVar3 = x5;
                                                g23 = i44;
                                            } else {
                                                iVar3 = iVar4;
                                            }
                                            wVar4.F(i78);
                                        } else {
                                            iVar3 = iVar4;
                                        }
                                        int[] iArr5 = iArr;
                                        String str23 = "audio/ac3";
                                        i13 = i50;
                                        if (g23 == 1633889587) {
                                            str5 = "audio/ac3";
                                        } else if (g23 == 1700998451) {
                                            str5 = "audio/eac3";
                                        } else if (g23 == 1633889588) {
                                            str5 = "audio/ac4";
                                        } else {
                                            if (g23 == 1685353315) {
                                                str4 = "audio/vnd.dts";
                                            } else if (g23 == 1685353320 || g23 == 1685353324) {
                                                str4 = "audio/vnd.dts.hd";
                                            } else if (g23 == 1685353317) {
                                                str4 = "audio/vnd.dts.hd;profile=lbr";
                                            } else if (g23 == 1685353336) {
                                                str4 = "audio/vnd.dts.uhd;profile=p2";
                                            } else if (g23 == 1935764850) {
                                                str4 = "audio/3gpp";
                                            } else if (g23 == 1935767394) {
                                                str4 = "audio/amr-wb";
                                            } else {
                                                str5 = "audio/raw";
                                                if (g23 == 1819304813 || g23 == 1936684916) {
                                                    i33 = 2;
                                                } else if (g23 == 1953984371) {
                                                    i33 = 268435456;
                                                } else if (g23 == 778924082 || g23 == 778924083) {
                                                    str4 = "audio/mpeg";
                                                } else if (g23 == 1835557169) {
                                                    str4 = "audio/mha1";
                                                } else if (g23 == 1835560241) {
                                                    str4 = "audio/mhm1";
                                                } else if (g23 == 1634492771) {
                                                    str4 = "audio/alac";
                                                } else if (g23 == 1634492791) {
                                                    str4 = "audio/g711-alaw";
                                                } else if (g23 == 1970037111) {
                                                    str4 = "audio/g711-mlaw";
                                                } else if (g23 == 1332770163) {
                                                    str4 = "audio/opus";
                                                } else if (g23 == 1716281667) {
                                                    str4 = "audio/flac";
                                                } else if (g23 == 1835823201) {
                                                    str4 = "audio/true-hd";
                                                } else {
                                                    i33 = -1;
                                                    str5 = null;
                                                }
                                                i32 = i6;
                                                arrayList3 = arrayList6;
                                                aVar2 = aVar4;
                                                pair = create2;
                                                i16 = i53;
                                                str6 = str5;
                                                i34 = i78;
                                                i35 = i29;
                                                i36 = i79;
                                                List list4 = null;
                                                String str24 = null;
                                                k0Var = null;
                                                while (i34 - i16 < g22) {
                                                    wVar4.F(i34);
                                                    int g28 = wVar4.g();
                                                    int i80 = g22;
                                                    w3.q.f(str16, g28 > 0);
                                                    int g29 = wVar4.g();
                                                    List list5 = list4;
                                                    if (g29 == 1835557187) {
                                                        int i81 = g28 - 13;
                                                        byte[] bArr7 = new byte[i81];
                                                        i38 = i33;
                                                        wVar4.F(i34 + 13);
                                                        wVar4.e(bArr7, 0, i81);
                                                        list5 = e0.s(bArr7);
                                                        str11 = str16;
                                                        str10 = str23;
                                                        i42 = g28;
                                                    } else {
                                                        i38 = i33;
                                                        if (g29 == 1702061171) {
                                                            i39 = g28;
                                                            str8 = str16;
                                                            str9 = str24;
                                                            str10 = str23;
                                                            i40 = 1702061171;
                                                        } else if (z6 && g29 == 2002876005) {
                                                            i39 = g28;
                                                            str8 = str16;
                                                            str9 = str24;
                                                            str10 = str23;
                                                            i40 = 1702061171;
                                                        } else {
                                                            if (g29 == 1684103987) {
                                                                wVar4.F(i34 + 8);
                                                                String num = Integer.toString(i54);
                                                                v vVar = new v();
                                                                vVar.n(wVar4);
                                                                int i82 = iArr2[vVar.i(2)];
                                                                str13 = str24;
                                                                vVar.s(8);
                                                                int i83 = iArr5[vVar.i(3)];
                                                                int i84 = vVar.i(1) != 0 ? i83 + 1 : i83;
                                                                str12 = str16;
                                                                int i85 = jc.a.f12498g[vVar.i(5)] * 1000;
                                                                vVar.c();
                                                                wVar4.F(vVar.f());
                                                                f0 f0Var2 = new f0();
                                                                f0Var2.a = num;
                                                                f0Var2.k = str23;
                                                                f0Var2.f9690x = i84;
                                                                f0Var2.f9691y = i82;
                                                                f0Var2.f9680n = iVar3;
                                                                f0Var2.f9671c = str15;
                                                                f0Var2.f9674f = i85;
                                                                f0Var2.f9675g = i85;
                                                                format = new Format(f0Var2);
                                                                i43 = g28;
                                                                str10 = str23;
                                                            } else {
                                                                str12 = str16;
                                                                str13 = str24;
                                                                if (g29 == 1684366131) {
                                                                    wVar4.F(i34 + 8);
                                                                    String num2 = Integer.toString(i54);
                                                                    v vVar2 = new v();
                                                                    vVar2.n(wVar4);
                                                                    int i86 = vVar2.i(13) * 1000;
                                                                    vVar2.s(3);
                                                                    int i87 = iArr2[vVar2.i(2)];
                                                                    str10 = str23;
                                                                    vVar2.s(10);
                                                                    int i88 = iArr5[vVar2.i(3)];
                                                                    if (vVar2.i(1) != 0) {
                                                                        i88++;
                                                                    }
                                                                    vVar2.s(3);
                                                                    int i89 = vVar2.i(4);
                                                                    vVar2.s(1);
                                                                    int i90 = i88;
                                                                    if (i89 > 0) {
                                                                        vVar2.s(6);
                                                                        if (vVar2.i(1) != 0) {
                                                                            i90 += 2;
                                                                        }
                                                                        vVar2.s(1);
                                                                        i88 = i90;
                                                                    }
                                                                    i43 = g28;
                                                                    if (vVar2.b() > 7) {
                                                                        vVar2.s(7);
                                                                        if (vVar2.i(1) != 0) {
                                                                            str14 = "audio/eac3-joc";
                                                                            vVar2.c();
                                                                            wVar4.F(vVar2.f());
                                                                            f0 f0Var3 = new f0();
                                                                            f0Var3.a = num2;
                                                                            f0Var3.k = str14;
                                                                            f0Var3.f9690x = i88;
                                                                            f0Var3.f9691y = i87;
                                                                            f0Var3.f9680n = iVar3;
                                                                            f0Var3.f9671c = str15;
                                                                            f0Var3.f9675g = i86;
                                                                            format = new Format(f0Var3);
                                                                        }
                                                                    }
                                                                    str14 = "audio/eac3";
                                                                    vVar2.c();
                                                                    wVar4.F(vVar2.f());
                                                                    f0 f0Var32 = new f0();
                                                                    f0Var32.a = num2;
                                                                    f0Var32.k = str14;
                                                                    f0Var32.f9690x = i88;
                                                                    f0Var32.f9691y = i87;
                                                                    f0Var32.f9680n = iVar3;
                                                                    f0Var32.f9671c = str15;
                                                                    f0Var32.f9675g = i86;
                                                                    format = new Format(f0Var32);
                                                                } else {
                                                                    i43 = g28;
                                                                    str10 = str23;
                                                                    if (g29 == 1684103988) {
                                                                        wVar4.F(i34 + 8);
                                                                        String num3 = Integer.toString(i54);
                                                                        wVar4.G(1);
                                                                        int i91 = ((wVar4.u() & 32) >> 5) == 1 ? 48000 : 44100;
                                                                        f0 f0Var4 = new f0();
                                                                        f0Var4.a = num3;
                                                                        f0Var4.k = "audio/ac4";
                                                                        f0Var4.f9690x = 2;
                                                                        f0Var4.f9691y = i91;
                                                                        f0Var4.f9680n = iVar3;
                                                                        f0Var4.f9671c = str15;
                                                                        format = new Format(f0Var4);
                                                                    } else if (g29 != 1684892784) {
                                                                        if (g29 == 1684305011 || g29 == 1969517683) {
                                                                            f0 f0Var5 = new f0();
                                                                            f0Var5.a = Integer.toString(i54);
                                                                            f0Var5.k = str6;
                                                                            f0Var5.f9690x = i35;
                                                                            f0Var5.f9691y = i36;
                                                                            f0Var5.f9680n = iVar3;
                                                                            f0Var5.f9671c = str15;
                                                                            format = new Format(f0Var5);
                                                                        } else {
                                                                            if (g29 == 1682927731) {
                                                                                int i92 = i43 - 8;
                                                                                byte[] bArr8 = a;
                                                                                byte[] copyOf = Arrays.copyOf(bArr8, bArr8.length + i92);
                                                                                wVar4.F(i34 + 8);
                                                                                wVar4.e(copyOf, bArr8.length, i92);
                                                                                s2 = jc.a.b(copyOf);
                                                                            } else if (g29 == 1684425825) {
                                                                                byte[] bArr9 = new byte[i43 - 8];
                                                                                bArr9[0] = 102;
                                                                                bArr9[1] = 76;
                                                                                bArr9[2] = 97;
                                                                                bArr9[3] = 67;
                                                                                wVar4.F(i34 + 12);
                                                                                wVar4.e(bArr9, 4, i43 - 12);
                                                                                s2 = e0.s(bArr9);
                                                                            } else if (g29 == 1634492771) {
                                                                                int i93 = i43 - 12;
                                                                                byte[] bArr10 = new byte[i93];
                                                                                wVar4.F(i34 + 12);
                                                                                wVar4.e(bArr10, 0, i93);
                                                                                w wVar5 = new w(bArr10);
                                                                                wVar5.F(9);
                                                                                int u12 = wVar5.u();
                                                                                wVar5.F(20);
                                                                                Pair create3 = Pair.create(Integer.valueOf(wVar5.x()), Integer.valueOf(u12));
                                                                                int intValue2 = ((Integer) create3.first).intValue();
                                                                                i35 = ((Integer) create3.second).intValue();
                                                                                list5 = e0.s(bArr10);
                                                                                i36 = intValue2;
                                                                            }
                                                                            list5 = s2;
                                                                            str24 = str13;
                                                                            str11 = str12;
                                                                            i42 = i43;
                                                                        }
                                                                        str24 = str13;
                                                                        str11 = str12;
                                                                        i42 = i43;
                                                                    } else {
                                                                        if (g10 <= 0) {
                                                                            throw g1.a("Invalid sample rate for Dolby TrueHD MLP stream: " + g10, null);
                                                                        }
                                                                        i36 = g10;
                                                                        str24 = str13;
                                                                        str11 = str12;
                                                                        i42 = i43;
                                                                        i35 = 2;
                                                                    }
                                                                    str24 = str13;
                                                                    str11 = str12;
                                                                    i42 = i43;
                                                                }
                                                            }
                                                            str24 = str13;
                                                            str11 = str12;
                                                            i42 = i43;
                                                        }
                                                        if (g29 != i40) {
                                                            i41 = wVar4.f13363b;
                                                            w3.q.f(null, i41 >= i34);
                                                            while (true) {
                                                                i42 = i39;
                                                                if (i41 - i34 >= i42) {
                                                                    str11 = str8;
                                                                    i41 = -1;
                                                                    break;
                                                                }
                                                                wVar4.F(i41);
                                                                int g30 = wVar4.g();
                                                                str11 = str8;
                                                                w3.q.f(str11, g30 > 0);
                                                                if (wVar4.g() == 1702061171) {
                                                                    break;
                                                                }
                                                                i41 += g30;
                                                                str8 = str11;
                                                                i39 = i42;
                                                            }
                                                        } else {
                                                            i41 = i34;
                                                            str11 = str8;
                                                            i42 = i39;
                                                        }
                                                        if (i41 != -1) {
                                                            k0Var2 = a(i41, wVar4);
                                                            str6 = (String) k0Var2.f15122i;
                                                            byte[] bArr11 = (byte[]) k0Var2.f15123v;
                                                            if (bArr11 != null) {
                                                                if ("audio/mp4a-latm".equals(str6)) {
                                                                    p0 i94 = jc.a.i(new v(bArr11, bArr11.length), false);
                                                                    i36 = i94.a;
                                                                    i35 = i94.f12603b;
                                                                    str24 = (String) i94.f12604c;
                                                                } else {
                                                                    str24 = str9;
                                                                }
                                                                list5 = e0.s(bArr11);
                                                                k0Var = k0Var2;
                                                            }
                                                        } else {
                                                            k0Var2 = k0Var;
                                                        }
                                                        str24 = str9;
                                                        k0Var = k0Var2;
                                                    }
                                                    i34 += i42;
                                                    str16 = str11;
                                                    list4 = list5;
                                                    i33 = i38;
                                                    g22 = i80;
                                                    str23 = str10;
                                                }
                                                list2 = list4;
                                                i37 = i33;
                                                str7 = str24;
                                                i31 = g22;
                                                if (format == null && str6 != null) {
                                                    f0 f0Var6 = new f0();
                                                    f0Var6.a = Integer.toString(i54);
                                                    f0Var6.k = str6;
                                                    f0Var6.f9676h = str7;
                                                    f0Var6.f9690x = i35;
                                                    f0Var6.f9691y = i36;
                                                    f0Var6.f9692z = i37;
                                                    f0Var6.f9679m = list2;
                                                    f0Var6.f9680n = iVar3;
                                                    f0Var6.f9671c = str15;
                                                    if (k0Var != null) {
                                                        k0 k0Var5 = k0Var;
                                                        f0Var6.f9674f = ki.b.O(k0Var5.f15120d);
                                                        f0Var6.f9675g = ki.b.O(k0Var5.f15121e);
                                                    }
                                                    format = new Format(f0Var6);
                                                }
                                                str = str15;
                                                i18 = i32;
                                                i17 = i31;
                                            }
                                            str5 = str4;
                                        }
                                        i33 = -1;
                                        i32 = i6;
                                        arrayList3 = arrayList6;
                                        aVar2 = aVar4;
                                        pair = create2;
                                        i16 = i53;
                                        str6 = str5;
                                        i34 = i78;
                                        i35 = i29;
                                        i36 = i79;
                                        List list42 = null;
                                        String str242 = null;
                                        k0Var = null;
                                        while (i34 - i16 < g22) {
                                        }
                                        list2 = list42;
                                        i37 = i33;
                                        str7 = str242;
                                        i31 = g22;
                                        if (format == null) {
                                            f0 f0Var62 = new f0();
                                            f0Var62.a = Integer.toString(i54);
                                            f0Var62.k = str6;
                                            f0Var62.f9676h = str7;
                                            f0Var62.f9690x = i35;
                                            f0Var62.f9691y = i36;
                                            f0Var62.f9692z = i37;
                                            f0Var62.f9679m = list2;
                                            f0Var62.f9680n = iVar3;
                                            f0Var62.f9671c = str15;
                                            if (k0Var != null) {
                                            }
                                            format = new Format(f0Var62);
                                        }
                                        str = str15;
                                        i18 = i32;
                                        i17 = i31;
                                    } else {
                                        if (g23 == 1414810956 || g23 == 1954034535 || g23 == 2004251764 || g23 == 1937010800 || g23 == 1664495672) {
                                            wVar4.F(i53 + 16);
                                            String str25 = "application/ttml+xml";
                                            if (g23 != 1414810956) {
                                                if (g23 == 1954034535) {
                                                    int i95 = g22 - 16;
                                                    byte[] bArr12 = new byte[i95];
                                                    wVar4.e(bArr12, 0, i95);
                                                    r0Var = e0.s(bArr12);
                                                    str25 = "application/x-quicktime-tx3g";
                                                    i12 = g21;
                                                    j12 = Long.MAX_VALUE;
                                                } else if (g23 == 2004251764) {
                                                    str25 = "application/x-mp4-vtt";
                                                } else if (g23 == 1937010800) {
                                                    i12 = g21;
                                                    r0Var = null;
                                                    j12 = 0;
                                                } else {
                                                    if (g23 != 1664495672) {
                                                        throw new IllegalStateException();
                                                    }
                                                    str25 = "application/x-mp4-cea-608";
                                                    i12 = g21;
                                                    j12 = Long.MAX_VALUE;
                                                    r0Var = null;
                                                    i51 = 1;
                                                }
                                                f0 f0Var7 = new f0();
                                                pVarArr = pVarArr2;
                                                f0Var7.a = Integer.toString(i54);
                                                f0Var7.k = str25;
                                                f0Var7.f9671c = str15;
                                                f0Var7.f9681o = j12;
                                                f0Var7.f9679m = r0Var;
                                                i18 = i6;
                                                format = new Format(f0Var7);
                                                arrayList3 = arrayList6;
                                                aVar2 = aVar4;
                                                pair = create2;
                                                str = str15;
                                            }
                                            i12 = g21;
                                            j12 = Long.MAX_VALUE;
                                            r0Var = null;
                                            f0 f0Var72 = new f0();
                                            pVarArr = pVarArr2;
                                            f0Var72.a = Integer.toString(i54);
                                            f0Var72.k = str25;
                                            f0Var72.f9671c = str15;
                                            f0Var72.f9681o = j12;
                                            f0Var72.f9679m = r0Var;
                                            i18 = i6;
                                            format = new Format(f0Var72);
                                            arrayList3 = arrayList6;
                                            aVar2 = aVar4;
                                            pair = create2;
                                            str = str15;
                                        } else {
                                            if (g23 == 1835365492) {
                                                wVar4.F(i53 + 16);
                                                if (g23 == 1835365492) {
                                                    wVar4.p();
                                                    String p3 = wVar4.p();
                                                    if (p3 != null) {
                                                        f0 f0Var8 = new f0();
                                                        f0Var8.a = Integer.toString(i54);
                                                        f0Var8.k = p3;
                                                        format = new Format(f0Var8);
                                                    }
                                                }
                                            } else if (g23 == 1667329389) {
                                                f0 f0Var9 = new f0();
                                                f0Var9.a = Integer.toString(i54);
                                                f0Var9.k = "application/x-camera-motion";
                                                i18 = i6;
                                                arrayList3 = arrayList6;
                                                format = new Format(f0Var9);
                                                aVar2 = aVar4;
                                                pair = create2;
                                                str = str15;
                                                i12 = g21;
                                                pVarArr = pVarArr2;
                                            }
                                            i18 = i6;
                                            arrayList3 = arrayList6;
                                            aVar2 = aVar4;
                                            pair = create2;
                                            str = str15;
                                            i12 = g21;
                                            pVarArr = pVarArr2;
                                        }
                                        i13 = i50;
                                        i16 = i53;
                                        i17 = g22;
                                    }
                                }
                                wVar4.F(i16 + i17);
                                i50 = i13 + 1;
                                i6 = i18;
                                arrayList5 = arrayList7;
                                g15 = i54;
                                i45 = i55;
                                g21 = i12;
                                str15 = str;
                                arrayList6 = arrayList3;
                                create2 = pair;
                                aVar4 = aVar2;
                                i46 = i11;
                                pVarArr2 = pVarArr;
                                iVar4 = iVar;
                            }
                            arrayList = arrayList5;
                            arrayList2 = arrayList6;
                            int i96 = g15;
                            i10 = i45;
                            a aVar5 = aVar4;
                            Pair pair2 = create2;
                            int i97 = i46;
                            p[] pVarArr3 = pVarArr2;
                            if (z5) {
                                aVar4 = aVar5;
                            } else {
                                aVar4 = aVar5;
                                a f15 = aVar4.f(1701082227);
                                if (f15 != null) {
                                    b g31 = f15.g(1701606260);
                                    if (g31 == null) {
                                        create = null;
                                    } else {
                                        w wVar6 = g31.f20762i;
                                        wVar6.F(8);
                                        int e11 = mc.a.e(wVar6.g());
                                        int x11 = wVar6.x();
                                        long[] jArr3 = new long[x11];
                                        long[] jArr4 = new long[x11];
                                        for (int i98 = 0; i98 < x11; i98++) {
                                            jArr3[i98] = e11 == 1 ? wVar6.y() : wVar6.v();
                                            jArr4[i98] = e11 == 1 ? wVar6.o() : wVar6.g();
                                            if (wVar6.r() != 1) {
                                                throw new IllegalArgumentException("Unsupported media rate.");
                                            }
                                            wVar6.G(2);
                                        }
                                        create = Pair.create(jArr3, jArr4);
                                    }
                                    if (create != null) {
                                        jArr = (long[]) create.first;
                                        jArr2 = (long[]) create.second;
                                        if (format != null) {
                                            eVar2 = eVar;
                                        } else {
                                            eVar2 = eVar;
                                            oVar = new o(i96, i97, ((Long) pair2.first).longValue(), j11, j14, format, i51, pVarArr3, i52, jArr, jArr2);
                                            oVar2 = (o) eVar2.apply(oVar);
                                            if (oVar2 != null) {
                                                arrayList4 = arrayList2;
                                            } else {
                                                a f16 = aVar4.f(1835297121);
                                                f16.getClass();
                                                a f17 = f16.f(1835626086);
                                                f17.getClass();
                                                a f18 = f17.f(1937007212);
                                                f18.getClass();
                                                r e12 = e(oVar2, f18, pVar);
                                                arrayList4 = arrayList2;
                                                arrayList4.add(e12);
                                            }
                                        }
                                    }
                                }
                            }
                            jArr = null;
                            jArr2 = null;
                            if (format != null) {
                            }
                        }
                    } else {
                        i5 = -65536;
                    }
                    if (g16 == 0 && g17 == i5) {
                        if (g18 == 65536 && g19 == 0) {
                            i6 = 270;
                            if (j == -9223372036854775807L) {
                            }
                            long j132 = c(g11.f20762i).f2401e;
                            if (j10 == -9223372036854775807L) {
                            }
                            a f112 = f10.f(1835626086);
                            f112.getClass();
                            a f122 = f112.f(1937007212);
                            f122.getClass();
                            b g202 = f10.g(1835296868);
                            g202.getClass();
                            w wVar32 = g202.f20762i;
                            wVar32.F(8);
                            int e102 = mc.a.e(wVar32.g());
                            wVar32.G(e102 == 0 ? 8 : 16);
                            long v52 = wVar32.v();
                            wVar32.G(e102 == 0 ? 4 : 8);
                            int z72 = wVar32.z();
                            Pair create22 = Pair.create(Long.valueOf(v52), "" + ((char) (((z72 >> 10) & 31) + 96)) + ((char) (((z72 >> 5) & 31) + 96)) + ((char) ((z72 & 31) + 96)));
                            g6 = f122.g(1937011556);
                            if (g6 == null) {
                            }
                        } else {
                            i5 = -65536;
                        }
                    }
                    i6 = (g16 == i5 && g17 == 0 && g18 == 0 && g19 == i5) ? 180 : 0;
                    if (j == -9223372036854775807L) {
                    }
                    long j1322 = c(g11.f20762i).f2401e;
                    if (j10 == -9223372036854775807L) {
                    }
                    a f1122 = f10.f(1835626086);
                    f1122.getClass();
                    a f1222 = f1122.f(1937007212);
                    f1222.getClass();
                    b g2022 = f10.g(1835296868);
                    g2022.getClass();
                    w wVar322 = g2022.f20762i;
                    wVar322.F(8);
                    int e1022 = mc.a.e(wVar322.g());
                    wVar322.G(e1022 == 0 ? 8 : 16);
                    long v522 = wVar322.v();
                    wVar322.G(e1022 == 0 ? 4 : 8);
                    int z722 = wVar322.z();
                    Pair create222 = Pair.create(Long.valueOf(v522), "" + ((char) (((z722 >> 10) & 31) + 96)) + ((char) (((z722 >> 5) & 31) + 96)) + ((char) ((z722 & 31) + 96)));
                    g6 = f1222.g(1937011556);
                    if (g6 == null) {
                    }
                }
                oVar = null;
                oVar2 = (o) eVar2.apply(oVar);
                if (oVar2 != null) {
                }
            }
            i45 = i10 + 1;
            aVar3 = aVar;
            iVar4 = iVar;
            arrayList6 = arrayList4;
            arrayList5 = arrayList;
        }
        return arrayList6;
    }
}
