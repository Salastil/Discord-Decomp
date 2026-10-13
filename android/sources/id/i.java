package id;

import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.google.android.exoplayer2.metadata.Metadata;
import com.reactnativecommunity.clipboard.ClipboardModule;
import fi.c0;
import fi.e0;
import fi.p;
import fi.r0;
import fi.y;
import java.nio.ByteBuffer;
import java.nio.charset.Charset;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Locale;
import ke.d0;
import ke.v;
import ke.w;

/* loaded from: classes3.dex */
public final class i extends nt.a {

    /* renamed from: b, reason: collision with root package name */
    public static final i7.a f10635b = new i7.a(3);
    public final g a;

    public i(g gVar) {
        this.a = gVar;
    }

    public static a N(w wVar, int i5, int i6) {
        int a0;
        String concat;
        int u5 = wVar.u();
        Charset X = X(u5);
        int i10 = i5 - 1;
        byte[] bArr = new byte[i10];
        wVar.e(bArr, 0, i10);
        if (i6 == 2) {
            concat = "image/" + tn.g.x(new String(bArr, 0, 3, ei.d.f8099b));
            if (ClipboardModule.MIMETYPE_JPG.equals(concat)) {
                concat = ClipboardModule.MIMETYPE_JPEG;
            }
            a0 = 2;
        } else {
            a0 = a0(bArr, 0);
            String x5 = tn.g.x(new String(bArr, 0, a0, ei.d.f8099b));
            concat = x5.indexOf(47) == -1 ? "image/".concat(x5) : x5;
        }
        int i11 = bArr[a0 + 1] & 255;
        int i12 = a0 + 2;
        int Z = Z(bArr, i12, u5);
        String str = new String(bArr, i12, Z - i12, X);
        int W = W(u5) + Z;
        return new a(concat, str, i11, i10 <= W ? d0.f13298f : Arrays.copyOfRange(bArr, W, i10));
    }

    public static c O(w wVar, int i5, int i6, boolean z5, int i10, g gVar) {
        int i11 = wVar.f13363b;
        int a0 = a0(wVar.a, i11);
        String str = new String(wVar.a, i11, a0 - i11, ei.d.f8099b);
        wVar.F(a0 + 1);
        int g6 = wVar.g();
        int g10 = wVar.g();
        long v5 = wVar.v();
        if (v5 == 4294967295L) {
            v5 = -1;
        }
        long v6 = wVar.v();
        long j = v6 == 4294967295L ? -1L : v6;
        ArrayList arrayList = new ArrayList();
        int i12 = i11 + i5;
        while (wVar.f13363b < i12) {
            j R = R(i6, wVar, z5, i10, gVar);
            if (R != null) {
                arrayList.add(R);
            }
        }
        return new c(str, g6, g10, v5, j, (j[]) arrayList.toArray(new j[0]));
    }

    public static d P(w wVar, int i5, int i6, boolean z5, int i10, g gVar) {
        int i11 = wVar.f13363b;
        int a0 = a0(wVar.a, i11);
        String str = new String(wVar.a, i11, a0 - i11, ei.d.f8099b);
        wVar.F(a0 + 1);
        int u5 = wVar.u();
        boolean z6 = (u5 & 2) != 0;
        boolean z7 = (u5 & 1) != 0;
        int u6 = wVar.u();
        String[] strArr = new String[u6];
        for (int i12 = 0; i12 < u6; i12++) {
            int i13 = wVar.f13363b;
            int a02 = a0(wVar.a, i13);
            strArr[i12] = new String(wVar.a, i13, a02 - i13, ei.d.f8099b);
            wVar.F(a02 + 1);
        }
        ArrayList arrayList = new ArrayList();
        int i14 = i11 + i5;
        while (wVar.f13363b < i14) {
            j R = R(i6, wVar, z5, i10, gVar);
            if (R != null) {
                arrayList.add(R);
            }
        }
        return new d(str, z6, z7, strArr, (j[]) arrayList.toArray(new j[0]));
    }

    public static e Q(int i5, w wVar) {
        if (i5 < 4) {
            return null;
        }
        int u5 = wVar.u();
        Charset X = X(u5);
        byte[] bArr = new byte[3];
        wVar.e(bArr, 0, 3);
        String str = new String(bArr, 0, 3);
        int i6 = i5 - 4;
        byte[] bArr2 = new byte[i6];
        wVar.e(bArr2, 0, i6);
        int Z = Z(bArr2, 0, u5);
        String str2 = new String(bArr2, 0, Z, X);
        int W = W(u5) + Z;
        return new e(str, str2, U(bArr2, W, Z(bArr2, W, u5), X));
    }

    /* JADX WARN: Code restructure failed: missing block: B:151:0x022a, code lost:
    
        if (r4 == 67) goto L144;
     */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:62:0x02ae A[Catch: all -> 0x0286, TRY_LEAVE, TryCatch #2 {all -> 0x0286, blocks: (B:62:0x02ae, B:138:0x0281, B:146:0x0298, B:147:0x029d), top: B:52:0x0111 }] */
    /* JADX WARN: Type inference failed for: r1v16 */
    /* JADX WARN: Type inference failed for: r1v17, types: [ke.w] */
    /* JADX WARN: Type inference failed for: r1v18 */
    /* JADX WARN: Type inference failed for: r1v20 */
    /* JADX WARN: Type inference failed for: r1v28 */
    /* JADX WARN: Type inference failed for: r1v29 */
    /* JADX WARN: Type inference failed for: r1v30 */
    /* JADX WARN: Type inference failed for: r1v5 */
    /* JADX WARN: Type inference failed for: r1v6, types: [int] */
    /* JADX WARN: Type inference failed for: r1v8 */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static j R(int i5, w wVar, boolean z5, int i6, g gVar) {
        int x5;
        ?? r12;
        int i10;
        int i11;
        int i12;
        boolean z6;
        boolean z7;
        boolean z8;
        boolean z10;
        boolean z11;
        w wVar2;
        int i13;
        int i14;
        int i15;
        int i16;
        w wVar3;
        int i17 = i5;
        int u5 = wVar.u();
        int u6 = wVar.u();
        int u10 = wVar.u();
        int u11 = i17 >= 3 ? wVar.u() : 0;
        if (i17 == 4) {
            x5 = wVar.x();
            if (!z5) {
                x5 = (((x5 >> 24) & 255) << 21) | (x5 & 255) | (((x5 >> 8) & 255) << 7) | (((x5 >> 16) & 255) << 14);
            }
        } else {
            x5 = i17 == 3 ? wVar.x() : wVar.w();
        }
        int i18 = x5;
        int z12 = i17 >= 3 ? wVar.z() : 0;
        j jVar = null;
        if (u5 == 0 && u6 == 0 && u10 == 0 && u11 == 0 && i18 == 0 && z12 == 0) {
            wVar.F(wVar.f13364c);
            return null;
        }
        int i19 = wVar.f13363b + i18;
        if (i19 > wVar.f13364c) {
            ke.b.N("Id3Decoder", "Frame size exceeds remaining tag data");
            wVar.F(wVar.f13364c);
            return null;
        }
        if (gVar != null) {
            boolean f2 = gVar.f(i17, u5, u6, u10, u11);
            i17 = i17;
            r12 = u6;
            i10 = u5;
            i11 = u10;
            i12 = u11;
            if (!f2) {
                wVar.F(i19);
                return null;
            }
        } else {
            r12 = u6;
            i10 = u5;
            i11 = u10;
            i12 = u11;
        }
        if (i17 == 3) {
            z6 = (z12 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0;
            z11 = false;
            z10 = (z12 & 64) != 0;
            z8 = (z12 & 32) != 0;
            z7 = z6;
        } else if (i17 == 4) {
            boolean z13 = (z12 & 64) != 0;
            boolean z14 = (z12 & 8) != 0;
            z10 = (z12 & 4) != 0;
            z11 = (z12 & 2) != 0;
            z7 = (z12 & 1) != 0;
            boolean z15 = z14;
            z8 = z13;
            z6 = z15;
        } else {
            z6 = false;
            z7 = false;
            z8 = false;
            z10 = false;
            z11 = false;
        }
        if (z6 || z10) {
            ke.b.N("Id3Decoder", "Skipping unsupported compressed or encrypted frame");
            wVar.F(i19);
            return null;
        }
        if (z8) {
            i18--;
            wVar.G(1);
        }
        if (z7) {
            i18 -= 4;
            wVar.G(4);
        }
        if (z11) {
            i18 = b0(i18, wVar);
        }
        try {
            try {
            } catch (Throwable th2) {
                th = th2;
                wVar2 = wVar;
            }
        } catch (Throwable th3) {
            th = th3;
            wVar2 = r12;
        }
        if (i10 == 84 && r12 == 88 && i11 == 88 && (i17 == 2 || i12 == 88)) {
            if (i18 >= 1) {
                int u12 = wVar.u();
                int i20 = i18 - 1;
                byte[] bArr = new byte[i20];
                wVar.e(bArr, 0, i20);
                int Z = Z(bArr, 0, u12);
                jVar = new n("TXXX", new String(bArr, 0, Z, X(u12)), V(bArr, u12, W(u12) + Z));
            }
        } else if (i10 == 84) {
            String Y = Y(i17, i10, r12, i11, i12);
            if (i18 >= 1) {
                int u13 = wVar.u();
                int i21 = i18 - 1;
                byte[] bArr2 = new byte[i21];
                wVar.e(bArr2, 0, i21);
                jVar = new n(Y, null, V(bArr2, u13, 0));
            }
        } else if (i10 == 87 && r12 == 88 && i11 == 88 && (i17 == 2 || i12 == 88)) {
            if (i18 >= 1) {
                int u14 = wVar.u();
                int i22 = i18 - 1;
                byte[] bArr3 = new byte[i22];
                wVar.e(bArr3, 0, i22);
                int Z2 = Z(bArr3, 0, u14);
                String str = new String(bArr3, 0, Z2, X(u14));
                int W = W(u14) + Z2;
                jVar = new o("WXXX", str, U(bArr3, W, a0(bArr3, W), ei.d.f8099b));
            }
        } else if (i10 == 87) {
            String Y2 = Y(i17, i10, r12, i11, i12);
            byte[] bArr4 = new byte[i18];
            wVar.e(bArr4, 0, i18);
            jVar = new o(Y2, null, new String(bArr4, 0, a0(bArr4, 0), ei.d.f8099b));
        } else if (i10 == 80 && r12 == 82 && i11 == 73 && i12 == 86) {
            byte[] bArr5 = new byte[i18];
            wVar.e(bArr5, 0, i18);
            int a0 = a0(bArr5, 0);
            String str2 = new String(bArr5, 0, a0, ei.d.f8099b);
            int i23 = a0 + 1;
            jVar = new m(i18 <= i23 ? d0.f13298f : Arrays.copyOfRange(bArr5, i23, i18), str2);
        } else {
            if (i10 != 71 || r12 != 69 || i11 != 79 || (i12 != 66 && i17 != 2)) {
                if (i17 != 2) {
                    if (i10 == 65) {
                        if (r12 == 80) {
                            if (i11 == 73) {
                            }
                        }
                    }
                    if (i10 == 67) {
                    }
                    if (i10 != 67) {
                    }
                    int i24 = i18;
                    i13 = i11;
                    i14 = i24;
                    i15 = r12;
                    i16 = i12;
                    if (i10 != 67) {
                    }
                    i17 = i5;
                    wVar3 = wVar;
                    if (i10 != 77) {
                    }
                    String Y3 = Y(i17, i10, i15, i13, i16);
                    byte[] bArr6 = new byte[i14];
                    wVar3.e(bArr6, 0, i14);
                    jVar = new b(bArr6, Y3);
                    r12 = wVar3;
                    if (jVar == null) {
                    }
                    r12.F(i19);
                    return jVar;
                }
                if (i10 == 80 && r12 == 73 && i11 == 67) {
                    jVar = N(wVar, i18, i17);
                }
                if (i10 == 67 || r12 != 79 || i11 != 77 || (i12 != 77 && i17 != 2)) {
                    if (i10 != 67 && r12 == 72 && i11 == 65 && i12 == 80) {
                        int i25 = i18;
                        i13 = i11;
                        i14 = i25;
                        i15 = r12;
                        i16 = i12;
                        try {
                            jVar = O(wVar, i14, i17, z5, i6, gVar);
                            i17 = i5;
                            r12 = wVar;
                        } catch (Throwable th4) {
                            th = th4;
                            wVar2 = wVar;
                        }
                    } else {
                        int i242 = i18;
                        i13 = i11;
                        i14 = i242;
                        i15 = r12;
                        i16 = i12;
                        if (i10 != 67 && i15 == 84 && i13 == 79 && i16 == 67) {
                            i17 = i5;
                            w wVar4 = wVar;
                            jVar = P(wVar4, i14, i17, z5, i6, gVar);
                            r12 = wVar4;
                        } else {
                            i17 = i5;
                            wVar3 = wVar;
                            if (i10 != 77 && i15 == 76 && i13 == 76 && i16 == 84) {
                                jVar = T(i14, wVar3);
                                r12 = wVar3;
                            } else {
                                String Y32 = Y(i17, i10, i15, i13, i16);
                                byte[] bArr62 = new byte[i14];
                                wVar3.e(bArr62, 0, i14);
                                jVar = new b(bArr62, Y32);
                                r12 = wVar3;
                            }
                        }
                    }
                    if (jVar == null) {
                        ke.b.N("Id3Decoder", "Failed to decode frame: id=" + Y(i17, i10, i15, i13, i16) + ", frameSize=" + i14);
                    }
                    r12.F(i19);
                    return jVar;
                }
                jVar = Q(i18, wVar);
                th = th3;
                wVar2 = r12;
                wVar2.F(i19);
                throw th;
            }
            jVar = S(i18, wVar);
        }
        int i26 = i18;
        i13 = i11;
        i14 = i26;
        i15 = r12;
        i16 = i12;
        r12 = wVar;
        if (jVar == null) {
        }
        r12.F(i19);
        return jVar;
    }

    public static f S(int i5, w wVar) {
        int u5 = wVar.u();
        Charset X = X(u5);
        int i6 = i5 - 1;
        byte[] bArr = new byte[i6];
        wVar.e(bArr, 0, i6);
        int a0 = a0(bArr, 0);
        String str = new String(bArr, 0, a0, ei.d.f8099b);
        int i10 = a0 + 1;
        int Z = Z(bArr, i10, u5);
        String U = U(bArr, i10, Z, X);
        int W = W(u5) + Z;
        int Z2 = Z(bArr, W, u5);
        String U2 = U(bArr, W, Z2, X);
        int W2 = W(u5) + Z2;
        return new f(str, U, U2, i6 <= W2 ? d0.f13298f : Arrays.copyOfRange(bArr, W2, i6));
    }

    public static l T(int i5, w wVar) {
        int z5 = wVar.z();
        int w5 = wVar.w();
        int w6 = wVar.w();
        int u5 = wVar.u();
        int u6 = wVar.u();
        v vVar = new v();
        vVar.n(wVar);
        int i6 = ((i5 - 10) * 8) / (u5 + u6);
        int[] iArr = new int[i6];
        int[] iArr2 = new int[i6];
        for (int i10 = 0; i10 < i6; i10++) {
            int i11 = vVar.i(u5);
            int i12 = vVar.i(u6);
            iArr[i10] = i11;
            iArr2[i10] = i12;
        }
        return new l(z5, w5, iArr, iArr2, w6);
    }

    public static String U(byte[] bArr, int i5, int i6, Charset charset) {
        return (i6 <= i5 || i6 > bArr.length) ? "" : new String(bArr, i5, i6 - i5, charset);
    }

    public static r0 V(byte[] bArr, int i5, int i6) {
        Object[] objArr;
        if (i6 >= bArr.length) {
            return e0.s("");
        }
        c0 c0Var = e0.f8656e;
        p.c(4, "initialCapacity");
        Object[] objArr2 = new Object[4];
        int Z = Z(bArr, i6, i5);
        int i10 = 0;
        boolean z5 = false;
        while (i6 < Z) {
            String str = new String(bArr, i6, Z - i6, X(i5));
            int i11 = i10 + 1;
            if (objArr2.length < i11) {
                objArr = Arrays.copyOf(objArr2, y.d(objArr2.length, i11));
            } else if (z5) {
                objArr = (Object[]) objArr2.clone();
            } else {
                objArr2[i10] = str;
                int W = Z + W(i5);
                i10++;
                i6 = W;
                Z = Z(bArr, W, i5);
            }
            objArr2 = objArr;
            z5 = false;
            objArr2[i10] = str;
            int W2 = Z + W(i5);
            i10++;
            i6 = W2;
            Z = Z(bArr, W2, i5);
        }
        r0 j = e0.j(i10, objArr2);
        return j.isEmpty() ? e0.s("") : j;
    }

    public static int W(int i5) {
        return (i5 == 0 || i5 == 3) ? 1 : 2;
    }

    public static Charset X(int i5) {
        return i5 != 1 ? i5 != 2 ? i5 != 3 ? ei.d.f8099b : ei.d.f8100c : ei.d.f8101d : ei.d.f8103f;
    }

    public static String Y(int i5, int i6, int i10, int i11, int i12) {
        return i5 == 2 ? String.format(Locale.US, "%c%c%c", Integer.valueOf(i6), Integer.valueOf(i10), Integer.valueOf(i11)) : String.format(Locale.US, "%c%c%c%c", Integer.valueOf(i6), Integer.valueOf(i10), Integer.valueOf(i11), Integer.valueOf(i12));
    }

    public static int Z(byte[] bArr, int i5, int i6) {
        int a0 = a0(bArr, i5);
        if (i6 == 0 || i6 == 3) {
            return a0;
        }
        while (a0 < bArr.length - 1) {
            if ((a0 - i5) % 2 == 0 && bArr[a0 + 1] == 0) {
                return a0;
            }
            a0 = a0(bArr, a0 + 1);
        }
        return bArr.length;
    }

    public static int a0(byte[] bArr, int i5) {
        while (i5 < bArr.length) {
            if (bArr[i5] == 0) {
                return i5;
            }
            i5++;
        }
        return bArr.length;
    }

    public static int b0(int i5, w wVar) {
        byte[] bArr = wVar.a;
        int i6 = wVar.f13363b;
        int i10 = i6;
        while (true) {
            int i11 = i10 + 1;
            if (i11 >= i6 + i5) {
                return i5;
            }
            if ((bArr[i10] & 255) == 255 && bArr[i11] == 0) {
                System.arraycopy(bArr, i10 + 2, bArr, i11, (i5 - (i10 - i6)) - 2);
                i5--;
            }
            i10 = i11;
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:31:0x0077, code lost:
    
        if ((r10 & 1) != 0) goto L45;
     */
    /* JADX WARN: Code restructure failed: missing block: B:32:0x007a, code lost:
    
        r4 = false;
     */
    /* JADX WARN: Code restructure failed: missing block: B:54:0x0087, code lost:
    
        if ((r10 & com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0) goto L45;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static boolean c0(w wVar, int i5, int i6, boolean z5) {
        int w5;
        long w6;
        int i10;
        int i11;
        int i12 = wVar.f13363b;
        while (true) {
            try {
                boolean z6 = true;
                if (wVar.a() < i6) {
                    wVar.F(i12);
                    return true;
                }
                if (i5 >= 3) {
                    w5 = wVar.g();
                    w6 = wVar.v();
                    i10 = wVar.z();
                } else {
                    w5 = wVar.w();
                    w6 = wVar.w();
                    i10 = 0;
                }
                if (w5 == 0 && w6 == 0 && i10 == 0) {
                    wVar.F(i12);
                    return true;
                }
                if (i5 == 4 && !z5) {
                    if ((8421504 & w6) != 0) {
                        wVar.F(i12);
                        return false;
                    }
                    w6 = (((w6 >> 24) & 255) << 21) | (w6 & 255) | (((w6 >> 8) & 255) << 7) | (((w6 >> 16) & 255) << 14);
                }
                if (i5 == 4) {
                    i11 = (i10 & 64) != 0 ? 1 : 0;
                } else {
                    if (i5 == 3) {
                        i11 = (i10 & 32) != 0 ? 1 : 0;
                    } else {
                        i11 = 0;
                        z6 = false;
                    }
                    if (z6) {
                        i11 += 4;
                    }
                    if (w6 < i11) {
                        wVar.F(i12);
                        return false;
                    }
                    if (wVar.a() < w6) {
                        wVar.F(i12);
                        return false;
                    }
                    wVar.G((int) w6);
                }
            } catch (Throwable th2) {
                wVar.F(i12);
                throw th2;
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:6:0x009b A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:8:0x009c  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Metadata M(byte[] bArr, int i5) {
        h hVar;
        ArrayList arrayList = new ArrayList();
        w wVar = new w(bArr, i5);
        boolean z5 = false;
        if (wVar.a() < 10) {
            ke.b.N("Id3Decoder", "Data too short to be an ID3 tag");
        } else {
            int w5 = wVar.w();
            if (w5 == 4801587) {
                int u5 = wVar.u();
                wVar.G(1);
                int u6 = wVar.u();
                int t5 = wVar.t();
                if (u5 == 2) {
                    if ((u6 & 64) != 0) {
                        ke.b.N("Id3Decoder", "Skipped ID3 tag with majorVersion=2 and undefined compression scheme");
                    }
                    hVar = new h(u5, t5, u5 >= 4 && (u6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0);
                } else {
                    if (u5 == 3) {
                        if ((u6 & 64) != 0) {
                            int g6 = wVar.g();
                            wVar.G(g6);
                            t5 -= g6 + 4;
                        }
                    } else if (u5 == 4) {
                        if ((u6 & 64) != 0) {
                            int t10 = wVar.t();
                            wVar.G(t10 - 4);
                            t5 -= t10;
                        }
                        if ((u6 & 16) != 0) {
                            t5 -= 10;
                        }
                    } else {
                        com.discord.chat.bridge.botuikit.a.q(u5, "Skipped ID3 tag with unsupported majorVersion=", "Id3Decoder");
                    }
                    hVar = new h(u5, t5, u5 >= 4 && (u6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0);
                }
                if (hVar != null) {
                    return null;
                }
                int i6 = hVar.a;
                int i10 = wVar.f13363b;
                int i11 = i6 == 2 ? 6 : 10;
                int i12 = hVar.f10634c;
                if (hVar.f10633b) {
                    i12 = b0(i12, wVar);
                }
                wVar.E(i10 + i12);
                if (!c0(wVar, i6, i11, false)) {
                    if (i6 != 4 || !c0(wVar, 4, i11, true)) {
                        com.discord.chat.bridge.botuikit.a.q(i6, "Failed to validate ID3 tag with majorVersion=", "Id3Decoder");
                        return null;
                    }
                    z5 = true;
                }
                while (wVar.a() >= i11) {
                    j R = R(i6, wVar, z5, i11, this.a);
                    if (R != null) {
                        arrayList.add(R);
                    }
                }
                return new Metadata(arrayList);
            }
            ke.b.N("Id3Decoder", "Unexpected first three bytes of ID3 tag header: 0x".concat(String.format("%06X", Integer.valueOf(w5))));
        }
        hVar = null;
        if (hVar != null) {
        }
    }

    @Override // nt.a
    public final Metadata m(dd.d dVar, ByteBuffer byteBuffer) {
        return M(byteBuffer.array(), byteBuffer.limit());
    }
}
