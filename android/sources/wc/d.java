package wc;

import a5.a0;
import android.util.Pair;
import android.util.SparseArray;
import androidx.recyclerview.widget.RecyclerView;
import androidx.recyclerview.widget.h0;
import com.facebook.imageutils.JfifUtil;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.google.android.exoplayer2.Format;
import fi.c0;
import fi.e0;
import fi.p;
import hc.f0;
import hc.g1;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.UUID;
import jc.p0;
import ke.d0;
import ke.o;
import ke.w;
import kotlin.jvm.internal.ByteCompanionObject;
import nc.i;
import qc.g;
import qc.j;
import qc.k;
import qc.l;
import qc.m;
import qc.n;
import qc.s;
import qc.u;
import qc.v;
import qd.f;
import s4.h;

/* loaded from: classes3.dex */
public final class d implements j {

    /* renamed from: c0, reason: collision with root package name */
    public static final byte[] f19750c0 = {49, 10, 48, 48, 58, 48, 48, 58, 48, 48, 44, 48, 48, 48, 32, 45, 45, 62, 32, 48, 48, 58, 48, 48, 58, 48, 48, 44, 48, 48, 48, 10};

    /* renamed from: d0, reason: collision with root package name */
    public static final byte[] f19751d0;

    /* renamed from: e0, reason: collision with root package name */
    public static final byte[] f19752e0;

    /* renamed from: f0, reason: collision with root package name */
    public static final byte[] f19753f0;

    /* renamed from: g0, reason: collision with root package name */
    public static final UUID f19754g0;
    public static final Map h0;
    public long A;
    public long B;
    public a0 C;
    public a0 D;
    public boolean E;
    public boolean F;
    public int G;
    public long H;
    public long I;
    public int J;
    public int K;
    public int[] L;
    public int M;
    public int N;
    public int O;
    public int P;
    public boolean Q;
    public long R;
    public int S;
    public int T;
    public int U;
    public boolean V;
    public boolean W;
    public boolean X;
    public int Y;
    public byte Z;
    public final b a;
    public boolean a0;

    /* renamed from: b, reason: collision with root package name */
    public final e f19755b;

    /* renamed from: b0, reason: collision with root package name */
    public l f19756b0;

    /* renamed from: c, reason: collision with root package name */
    public final SparseArray f19757c;

    /* renamed from: d, reason: collision with root package name */
    public final boolean f19758d;

    /* renamed from: e, reason: collision with root package name */
    public final w f19759e;

    /* renamed from: f, reason: collision with root package name */
    public final w f19760f;

    /* renamed from: g, reason: collision with root package name */
    public final w f19761g;

    /* renamed from: h, reason: collision with root package name */
    public final w f19762h;

    /* renamed from: i, reason: collision with root package name */
    public final w f19763i;
    public final w j;
    public final w k;

    /* renamed from: l, reason: collision with root package name */
    public final w f19764l;

    /* renamed from: m, reason: collision with root package name */
    public final w f19765m;

    /* renamed from: n, reason: collision with root package name */
    public final w f19766n;

    /* renamed from: o, reason: collision with root package name */
    public ByteBuffer f19767o;

    /* renamed from: p, reason: collision with root package name */
    public long f19768p;

    /* renamed from: q, reason: collision with root package name */
    public long f19769q;

    /* renamed from: r, reason: collision with root package name */
    public long f19770r;

    /* renamed from: s, reason: collision with root package name */
    public long f19771s;

    /* renamed from: t, reason: collision with root package name */
    public long f19772t;

    /* renamed from: u, reason: collision with root package name */
    public c f19773u;

    /* renamed from: v, reason: collision with root package name */
    public boolean f19774v;

    /* renamed from: w, reason: collision with root package name */
    public int f19775w;

    /* renamed from: x, reason: collision with root package name */
    public long f19776x;

    /* renamed from: y, reason: collision with root package name */
    public boolean f19777y;

    /* renamed from: z, reason: collision with root package name */
    public long f19778z;

    static {
        int i5 = d0.a;
        f19751d0 = "Format: Start, End, ReadOrder, Layer, Style, Name, MarginL, MarginR, MarginV, Effect, Text".getBytes(ei.d.f8100c);
        f19752e0 = new byte[]{68, 105, 97, 108, 111, 103, 117, 101, 58, 32, 48, 58, 48, 48, 58, 48, 48, 58, 48, 48, 44, 48, 58, 48, 48, 58, 48, 48, 58, 48, 48, 44};
        f19753f0 = new byte[]{87, 69, 66, 86, 84, 84, 10, 10, 48, 48, 58, 48, 48, 58, 48, 48, 46, 48, 48, 48, 32, 45, 45, 62, 32, 48, 48, 58, 48, 48, 58, 48, 48, 46, 48, 48, 48, 10};
        f19754g0 = new UUID(72057594037932032L, -9223371306706625679L);
        HashMap hashMap = new HashMap();
        h.k(0, hashMap, "htc_video_rotA-000", 90, "htc_video_rotA-090");
        h.k(180, hashMap, "htc_video_rotA-180", 270, "htc_video_rotA-270");
        h0 = Collections.unmodifiableMap(hashMap);
    }

    public d(int i5) {
        b bVar = new b();
        this.f19769q = -1L;
        this.f19770r = -9223372036854775807L;
        this.f19771s = -9223372036854775807L;
        this.f19772t = -9223372036854775807L;
        this.f19778z = -1L;
        this.A = -1L;
        this.B = -9223372036854775807L;
        this.a = bVar;
        bVar.f19723d = new f(10, this);
        this.f19758d = (i5 & 1) == 0;
        this.f19755b = new e();
        this.f19757c = new SparseArray();
        this.f19761g = new w(4);
        this.f19762h = new w(ByteBuffer.allocate(4).putInt(-1).array());
        this.f19763i = new w(4);
        this.f19759e = new w(ke.b.f13278d);
        this.f19760f = new w(4);
        this.j = new w();
        this.k = new w();
        this.f19764l = new w(8);
        this.f19765m = new w();
        this.f19766n = new w();
        this.L = new int[1];
    }

    public static byte[] h(long j, long j5, String str) {
        ke.b.g(j != -9223372036854775807L);
        int i5 = (int) (j / 3600000000L);
        long j7 = j - (i5 * 3600000000L);
        int i6 = (int) (j7 / 60000000);
        long j10 = j7 - (i6 * 60000000);
        int i10 = (int) (j10 / 1000000);
        String format = String.format(Locale.US, str, Integer.valueOf(i5), Integer.valueOf(i6), Integer.valueOf(i10), Integer.valueOf((int) ((j10 - (i10 * 1000000)) / j5)));
        int i11 = d0.a;
        return format.getBytes(ei.d.f8100c);
    }

    @Override // qc.j
    public final void a(l lVar) {
        this.f19756b0 = lVar;
    }

    public final void b(int i5) {
        if (this.C == null || this.D == null) {
            throw g1.a("Element " + i5 + " must be in a Cues", null);
        }
    }

    public final void c(int i5) {
        if (this.f19773u != null) {
            return;
        }
        throw g1.a("Element " + i5 + " must be in a TrackEntry", null);
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x00d6  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void d(c cVar, long j, int i5, int i6, int i10) {
        byte[] h6;
        int i11;
        int i12;
        qc.w wVar = cVar.T;
        if (wVar != null) {
            wVar.b(cVar.X, j, i5, i6, i10, cVar.j);
        } else {
            if ("S_TEXT/UTF8".equals(cVar.f19727b) || "S_TEXT/ASS".equals(cVar.f19727b) || "S_TEXT/WEBVTT".equals(cVar.f19727b)) {
                if (this.K > 1) {
                    ke.b.N("MatroskaExtractor", "Skipping subtitle sample in laced block.");
                } else {
                    long j5 = this.I;
                    if (j5 == -9223372036854775807L) {
                        ke.b.N("MatroskaExtractor", "Skipping subtitle sample with no duration.");
                    } else {
                        String str = cVar.f19727b;
                        w wVar2 = this.k;
                        byte[] bArr = wVar2.a;
                        str.getClass();
                        switch (str) {
                            case "S_TEXT/ASS":
                                h6 = h(j5, 10000L, "%01d:%02d:%02d:%02d");
                                i11 = 21;
                                break;
                            case "S_TEXT/WEBVTT":
                                h6 = h(j5, 1000L, "%02d:%02d:%02d.%03d");
                                i11 = 25;
                                break;
                            case "S_TEXT/UTF8":
                                h6 = h(j5, 1000L, "%02d:%02d:%02d,%03d");
                                i11 = 19;
                                break;
                            default:
                                throw new IllegalArgumentException();
                        }
                        System.arraycopy(h6, 0, bArr, i11, h6.length);
                        int i13 = wVar2.f13363b;
                        while (true) {
                            if (i13 < wVar2.f13364c) {
                                if (wVar2.a[i13] == 0) {
                                    wVar2.E(i13);
                                } else {
                                    i13++;
                                }
                            }
                        }
                        cVar.X.d(wVar2.f13364c, wVar2);
                        i12 = i6 + wVar2.f13364c;
                        if ((i5 & 268435456) != 0) {
                            int i14 = this.K;
                            w wVar3 = this.f19766n;
                            if (i14 > 1) {
                                wVar3.C(0);
                            } else {
                                int i15 = wVar3.f13364c;
                                cVar.X.d(i15, wVar3);
                                i12 += i15;
                            }
                        }
                        cVar.X.b(j, i5, i12, i10, cVar.j);
                    }
                }
            }
            i12 = i6;
            if ((i5 & 268435456) != 0) {
            }
            cVar.X.b(j, i5, i12, i10, cVar.j);
        }
        this.F = true;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code restructure failed: missing block: B:388:0x0897, code lost:
    
        if (r1.o() == r12.getLeastSignificantBits()) goto L499;
     */
    /* JADX WARN: Code restructure failed: missing block: B:55:0x0b97, code lost:
    
        r5 = true;
     */
    /* JADX WARN: Code restructure failed: missing block: B:56:0x0f2b, code lost:
    
        if (r5 == false) goto L831;
     */
    /* JADX WARN: Code restructure failed: missing block: B:57:0x0f2d, code lost:
    
        r1 = ((qc.g) r0).f16773v;
        r3 = r36;
     */
    /* JADX WARN: Code restructure failed: missing block: B:58:0x0f36, code lost:
    
        if (r3.f19777y == false) goto L825;
     */
    /* JADX WARN: Code restructure failed: missing block: B:59:0x0f45, code lost:
    
        r35 = true;
     */
    /* JADX WARN: Code restructure failed: missing block: B:60:0x0f4b, code lost:
    
        if (r3.f19774v == false) goto L884;
     */
    /* JADX WARN: Code restructure failed: missing block: B:61:0x0f4d, code lost:
    
        r6 = r3.A;
     */
    /* JADX WARN: Code restructure failed: missing block: B:62:0x0f53, code lost:
    
        if (r6 == (-1)) goto L885;
     */
    /* JADX WARN: Code restructure failed: missing block: B:64:0x0f55, code lost:
    
        r38.a = r6;
        r3.A = -1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:65:0x0f59, code lost:
    
        return 1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:68:0x0f60, code lost:
    
        r0 = r3;
        r4 = r35;
     */
    /* JADX WARN: Code restructure failed: missing block: B:69:0x0f60, code lost:
    
        continue;
     */
    /* JADX WARN: Code restructure failed: missing block: B:71:0x0f38, code lost:
    
        r3.A = r1;
        r38.a = r3.f19778z;
        r3.f19777y = r15;
     */
    /* JADX WARN: Code restructure failed: missing block: B:72:0x0f44, code lost:
    
        return 1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:73:0x0f5a, code lost:
    
        r35 = true;
        r3 = r36;
     */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:130:0x08df  */
    /* JADX WARN: Removed duplicated region for block: B:135:0x08f6  */
    /* JADX WARN: Removed duplicated region for block: B:138:0x0909  */
    /* JADX WARN: Removed duplicated region for block: B:141:0x0acb  */
    /* JADX WARN: Removed duplicated region for block: B:145:0x0916  */
    /* JADX WARN: Removed duplicated region for block: B:233:0x08f8  */
    /* JADX WARN: Type inference failed for: r1v100 */
    /* JADX WARN: Type inference failed for: r1v101, types: [java.lang.RuntimeException] */
    /* JADX WARN: Type inference failed for: r2v3 */
    /* JADX WARN: Type inference failed for: r2v52, types: [boolean, int] */
    /* JADX WARN: Type inference failed for: r2v58 */
    /* JADX WARN: Type inference failed for: r3v129 */
    /* JADX WARN: Type inference failed for: r3v133 */
    /* JADX WARN: Type inference failed for: r3v134 */
    /* JADX WARN: Type inference failed for: r5v18, types: [qc.g] */
    /* JADX WARN: Type inference failed for: r9v10 */
    @Override // qc.j
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final int e(k kVar, m mVar) {
        k kVar2;
        boolean z5;
        int i5;
        boolean z6;
        String str;
        ?? r5;
        int i6;
        int a;
        boolean z7;
        char c6;
        l lVar;
        int i10;
        List singletonList;
        int w5;
        int i11;
        RuntimeException runtimeException;
        Pair pair;
        String str2;
        String str3;
        List list;
        String str4;
        f0 f0Var;
        boolean j;
        int i12;
        int i13;
        le.b bVar;
        int i14;
        byte[] bArr;
        int i15;
        String str5;
        a5.m i16;
        s nVar;
        int i17;
        d dVar = this;
        dVar.F = false;
        boolean z8 = true;
        boolean z10 = true;
        while (z10 && !dVar.F) {
            b bVar2 = dVar.a;
            e eVar = bVar2.f19722c;
            ArrayDeque arrayDeque = bVar2.f19721b;
            ke.b.l(bVar2.f19723d);
            while (true) {
                a aVar = (a) arrayDeque.peek();
                if (aVar == null || ((g) kVar).f16773v < aVar.f19720b) {
                    ?? r22 = 0;
                    if (bVar2.f19724e == 0) {
                        kVar2 = kVar;
                        int i18 = 4;
                        long b10 = eVar.b(kVar2, true, false, 4);
                        if (b10 == -2) {
                            byte[] bArr2 = bVar2.a;
                            ((g) kVar2).f16775x = 0;
                            while (true) {
                                r5 = (g) kVar2;
                                r5.j(bArr2, r22, i18, r22);
                                byte b11 = bArr2[r22];
                                int i19 = 0;
                                while (true) {
                                    if (i19 >= 8) {
                                        i6 = -1;
                                    } else if ((e.f19779d[i19] & b11) != 0) {
                                        i6 = i19 + 1;
                                    } else {
                                        i19++;
                                    }
                                }
                                if (i6 != -1 && i6 <= 4) {
                                    a = (int) e.a(bArr2, i6, false);
                                    Object obj = bVar2.f19723d.f16831e;
                                    if (a == 357149030 || a == 524531317 || a == 475249515 || a == 374648427) {
                                    }
                                }
                                r5.u(1);
                                r22 = 0;
                                i18 = 4;
                            }
                            r5.u(i6);
                            b10 = a;
                        }
                        z5 = true;
                        if (b10 == -1) {
                            z10 = false;
                            z6 = false;
                        } else {
                            bVar2.f19725f = (int) b10;
                            bVar2.f19724e = 1;
                        }
                    } else {
                        kVar2 = kVar;
                        z5 = true;
                    }
                    if (bVar2.f19724e == z5) {
                        bVar2.f19726g = eVar.b(kVar2, false, z5, 8);
                        bVar2.f19724e = 2;
                    }
                    f fVar = bVar2.f19723d;
                    int i20 = bVar2.f19725f;
                    Object obj2 = fVar.f16831e;
                    switch (i20) {
                        case 131:
                        case 136:
                        case 155:
                        case 159:
                        case 176:
                        case 179:
                        case 186:
                        case JfifUtil.MARKER_RST7 /* 215 */:
                        case 231:
                        case 238:
                        case 241:
                        case 251:
                        case 16871:
                        case 16980:
                        case 17029:
                        case 17143:
                        case 18401:
                        case 18408:
                        case 20529:
                        case 20530:
                        case 21420:
                        case 21432:
                        case 21680:
                        case 21682:
                        case 21690:
                        case 21930:
                        case 21945:
                        case 21946:
                        case 21947:
                        case 21948:
                        case 21949:
                        case 21998:
                        case 22186:
                        case 22203:
                        case 25188:
                        case 30114:
                        case 30321:
                        case 2352003:
                        case 2807729:
                            i5 = 2;
                            break;
                        case 134:
                        case 17026:
                        case 21358:
                        case 2274716:
                            i5 = 3;
                            break;
                        case 160:
                        case 166:
                        case 174:
                        case 183:
                        case 187:
                        case 224:
                        case JfifUtil.MARKER_APP1 /* 225 */:
                        case 16868:
                        case 18407:
                        case 19899:
                        case 20532:
                        case 20533:
                        case 21936:
                        case 21968:
                        case 25152:
                        case 28032:
                        case 30113:
                        case 30320:
                        case 290298740:
                        case 357149030:
                        case 374648427:
                        case 408125543:
                        case 440786851:
                        case 475249515:
                        case 524531317:
                            i5 = 1;
                            break;
                        case 161:
                        case 163:
                        case 165:
                        case 16877:
                        case 16981:
                        case 18402:
                        case 21419:
                        case 25506:
                        case 30322:
                            i5 = 4;
                            break;
                        case 181:
                        case 17545:
                        case 21969:
                        case 21970:
                        case 21971:
                        case 21972:
                        case 21973:
                        case 21974:
                        case 21975:
                        case 21976:
                        case 21977:
                        case 21978:
                        case 30323:
                        case 30324:
                        case 30325:
                            i5 = 5;
                            break;
                        default:
                            i5 = 0;
                            break;
                    }
                    if (i5 == 0) {
                        ((g) kVar2).u((int) bVar2.f19726g);
                        bVar2.f19724e = 0;
                        z8 = true;
                    } else if (i5 == 1) {
                        long j5 = ((g) kVar2).f16773v;
                        arrayDeque.push(new a(i20, bVar2.f19726g + j5));
                        f fVar2 = bVar2.f19723d;
                        int i21 = bVar2.f19725f;
                        long j7 = bVar2.f19726g;
                        d dVar2 = (d) fVar2.f16831e;
                        ke.b.l(dVar2.f19756b0);
                        if (i21 != 160) {
                            if (i21 == 174) {
                                c cVar = new c();
                                cVar.f19736m = -1;
                                cVar.f19737n = -1;
                                cVar.f19738o = -1;
                                cVar.f19739p = -1;
                                cVar.f19740q = 0;
                                cVar.f19741r = -1;
                                cVar.f19742s = 0.0f;
                                cVar.f19743t = 0.0f;
                                cVar.f19744u = 0.0f;
                                cVar.f19745v = null;
                                cVar.f19746w = -1;
                                cVar.f19747x = false;
                                cVar.f19748y = -1;
                                cVar.f19749z = -1;
                                cVar.A = -1;
                                cVar.B = 1000;
                                cVar.C = h0.DEFAULT_DRAG_ANIMATION_DURATION;
                                cVar.D = -1.0f;
                                cVar.E = -1.0f;
                                cVar.F = -1.0f;
                                cVar.G = -1.0f;
                                cVar.H = -1.0f;
                                cVar.I = -1.0f;
                                cVar.J = -1.0f;
                                cVar.K = -1.0f;
                                cVar.L = -1.0f;
                                cVar.M = -1.0f;
                                cVar.O = 1;
                                cVar.P = -1;
                                cVar.Q = 8000;
                                cVar.R = 0L;
                                cVar.S = 0L;
                                cVar.V = true;
                                cVar.W = "eng";
                                dVar2.f19773u = cVar;
                            } else if (i21 == 187) {
                                z6 = false;
                                dVar2.E = false;
                            } else if (i21 == 19899) {
                                dVar2.f19775w = -1;
                                dVar2.f19776x = -1L;
                            } else if (i21 == 20533) {
                                dVar2.c(i21);
                                dVar2.f19773u.f19733h = true;
                            } else if (i21 == 21968) {
                                dVar2.c(i21);
                                dVar2.f19773u.f19747x = true;
                            } else if (i21 == 408125543) {
                                long j10 = dVar2.f19769q;
                                if (j10 != -1 && j10 != j5) {
                                    throw g1.a("Multiple Segment elements not supported", null);
                                }
                                dVar2.f19769q = j5;
                                dVar2.f19768p = j7;
                            } else if (i21 == 475249515) {
                                dVar2.C = new a0((char) 0, 9);
                                dVar2.D = new a0((char) 0, 9);
                            } else if (i21 == 524531317 && !dVar2.f19774v) {
                                if (!dVar2.f19758d || dVar2.f19778z == -1) {
                                    dVar2.f19756b0.c(new n(dVar2.f19772t));
                                    dVar2.f19774v = true;
                                } else {
                                    dVar2.f19777y = true;
                                }
                            }
                            z6 = false;
                        } else {
                            z6 = false;
                            dVar2.Q = false;
                            dVar2.R = 0L;
                        }
                        bVar2.f19724e = z6 ? 1 : 0;
                    } else if (i5 == 2) {
                        long j11 = bVar2.f19726g;
                        if (j11 > 8) {
                            throw g1.a("Invalid integer size: " + bVar2.f19726g, null);
                        }
                        fVar.f(i20, bVar2.a(kVar2, (int) j11));
                        z6 = false;
                        bVar2.f19724e = 0;
                    } else if (i5 == 3) {
                        long j12 = bVar2.f19726g;
                        if (j12 > 2147483647L) {
                            throw g1.a("String element size: " + bVar2.f19726g, null);
                        }
                        int i22 = (int) j12;
                        if (i22 == 0) {
                            str = "";
                        } else {
                            byte[] bArr3 = new byte[i22];
                            ((g) kVar2).a(bArr3, 0, i22, false);
                            while (i22 > 0 && bArr3[i22 - 1] == 0) {
                                i22--;
                            }
                            str = new String(bArr3, 0, i22);
                        }
                        d dVar3 = (d) fVar.f16831e;
                        if (i20 == 134) {
                            dVar3.c(i20);
                            dVar3.f19773u.f19727b = str;
                        } else if (i20 != 17026) {
                            if (i20 == 21358) {
                                dVar3.c(i20);
                                dVar3.f19773u.a = str;
                            } else if (i20 == 2274716) {
                                dVar3.c(i20);
                                dVar3.f19773u.W = str;
                            }
                        } else if (!"webm".equals(str) && !"matroska".equals(str)) {
                            throw g1.a("DocType " + str + " not supported", null);
                        }
                        z6 = false;
                        bVar2.f19724e = 0;
                    } else if (i5 == 4) {
                        fVar.c(i20, (int) bVar2.f19726g, kVar2);
                        z6 = false;
                        bVar2.f19724e = 0;
                    } else {
                        if (i5 != 5) {
                            throw g1.a("Invalid element type " + i5, null);
                        }
                        long j13 = bVar2.f19726g;
                        if (j13 != 4 && j13 != 8) {
                            throw g1.a("Invalid float size: " + bVar2.f19726g, null);
                        }
                        int i23 = (int) j13;
                        double intBitsToFloat = i23 == 4 ? Float.intBitsToFloat((int) r4) : Double.longBitsToDouble(bVar2.a(kVar2, i23));
                        d dVar4 = (d) fVar.f16831e;
                        if (i20 == 181) {
                            dVar4.c(i20);
                            dVar4.f19773u.Q = (int) intBitsToFloat;
                        } else if (i20 != 17545) {
                            switch (i20) {
                                case 21969:
                                    dVar4.c(i20);
                                    dVar4.f19773u.D = (float) intBitsToFloat;
                                    break;
                                case 21970:
                                    dVar4.c(i20);
                                    dVar4.f19773u.E = (float) intBitsToFloat;
                                    break;
                                case 21971:
                                    dVar4.c(i20);
                                    dVar4.f19773u.F = (float) intBitsToFloat;
                                    break;
                                case 21972:
                                    dVar4.c(i20);
                                    dVar4.f19773u.G = (float) intBitsToFloat;
                                    break;
                                case 21973:
                                    dVar4.c(i20);
                                    dVar4.f19773u.H = (float) intBitsToFloat;
                                    break;
                                case 21974:
                                    dVar4.c(i20);
                                    dVar4.f19773u.I = (float) intBitsToFloat;
                                    break;
                                case 21975:
                                    dVar4.c(i20);
                                    dVar4.f19773u.J = (float) intBitsToFloat;
                                    break;
                                case 21976:
                                    dVar4.c(i20);
                                    dVar4.f19773u.K = (float) intBitsToFloat;
                                    break;
                                case 21977:
                                    dVar4.c(i20);
                                    dVar4.f19773u.L = (float) intBitsToFloat;
                                    break;
                                case 21978:
                                    dVar4.c(i20);
                                    dVar4.f19773u.M = (float) intBitsToFloat;
                                    break;
                                default:
                                    switch (i20) {
                                        case 30323:
                                            dVar4.c(i20);
                                            dVar4.f19773u.f19742s = (float) intBitsToFloat;
                                            break;
                                        case 30324:
                                            dVar4.c(i20);
                                            dVar4.f19773u.f19743t = (float) intBitsToFloat;
                                            break;
                                        case 30325:
                                            dVar4.c(i20);
                                            dVar4.f19773u.f19744u = (float) intBitsToFloat;
                                            break;
                                    }
                            }
                        } else {
                            dVar4.f19771s = (long) intBitsToFloat;
                        }
                        z6 = false;
                        bVar2.f19724e = 0;
                    }
                } else {
                    f fVar3 = bVar2.f19723d;
                    int i24 = ((a) arrayDeque.pop()).a;
                    d dVar5 = (d) fVar3.f16831e;
                    SparseArray sparseArray = dVar5.f19757c;
                    ke.b.l(dVar5.f19756b0);
                    if (i24 != 160) {
                        if (i24 == 174) {
                            c cVar2 = dVar5.f19773u;
                            ke.b.l(cVar2);
                            String str6 = cVar2.f19727b;
                            if (str6 == null) {
                                throw g1.a("CodecId is missing in TrackEntry element", null);
                            }
                            switch (str6) {
                                case "V_MPEG4/ISO/AP":
                                case "V_MPEG4/ISO/SP":
                                case "A_MS/ACM":
                                case "A_TRUEHD":
                                case "A_VORBIS":
                                case "A_MPEG/L2":
                                case "A_MPEG/L3":
                                case "V_MS/VFW/FOURCC":
                                case "S_DVBSUB":
                                case "V_MPEG4/ISO/ASP":
                                case "V_MPEG4/ISO/AVC":
                                case "S_VOBSUB":
                                case "A_DTS/LOSSLESS":
                                case "A_AAC":
                                case "A_AC3":
                                case "A_DTS":
                                case "V_AV1":
                                case "V_VP8":
                                case "V_VP9":
                                case "S_HDMV/PGS":
                                case "V_THEORA":
                                case "A_DTS/EXPRESS":
                                case "A_PCM/FLOAT/IEEE":
                                case "A_PCM/INT/BIG":
                                case "A_PCM/INT/LIT":
                                case "S_TEXT/ASS":
                                case "V_MPEGH/ISO/HEVC":
                                case "S_TEXT/WEBVTT":
                                case "S_TEXT/UTF8":
                                case "V_MPEG2":
                                case "A_EAC3":
                                case "A_FLAC":
                                case "A_OPUS":
                                    l lVar2 = dVar5.f19756b0;
                                    int i25 = cVar2.f19728c;
                                    switch (str6.hashCode()) {
                                        case -2095576542:
                                            if (str6.equals("V_MPEG4/ISO/AP")) {
                                                c6 = 0;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -2095575984:
                                            if (str6.equals("V_MPEG4/ISO/SP")) {
                                                c6 = 1;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -1985379776:
                                            if (str6.equals("A_MS/ACM")) {
                                                c6 = 2;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -1784763192:
                                            if (str6.equals("A_TRUEHD")) {
                                                c6 = 3;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -1730367663:
                                            if (str6.equals("A_VORBIS")) {
                                                c6 = 4;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -1482641358:
                                            if (str6.equals("A_MPEG/L2")) {
                                                c6 = 5;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -1482641357:
                                            if (str6.equals("A_MPEG/L3")) {
                                                c6 = 6;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -1373388978:
                                            if (str6.equals("V_MS/VFW/FOURCC")) {
                                                c6 = 7;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -933872740:
                                            if (str6.equals("S_DVBSUB")) {
                                                c6 = '\b';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -538363189:
                                            if (str6.equals("V_MPEG4/ISO/ASP")) {
                                                c6 = '\t';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -538363109:
                                            if (str6.equals("V_MPEG4/ISO/AVC")) {
                                                c6 = '\n';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -425012669:
                                            if (str6.equals("S_VOBSUB")) {
                                                c6 = 11;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -356037306:
                                            if (str6.equals("A_DTS/LOSSLESS")) {
                                                c6 = '\f';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 62923557:
                                            if (str6.equals("A_AAC")) {
                                                c6 = '\r';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 62923603:
                                            if (str6.equals("A_AC3")) {
                                                c6 = 14;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 62927045:
                                            if (str6.equals("A_DTS")) {
                                                c6 = 15;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 82318131:
                                            if (str6.equals("V_AV1")) {
                                                c6 = 16;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 82338133:
                                            if (str6.equals("V_VP8")) {
                                                c6 = 17;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 82338134:
                                            if (str6.equals("V_VP9")) {
                                                c6 = 18;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 99146302:
                                            if (str6.equals("S_HDMV/PGS")) {
                                                c6 = 19;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 444813526:
                                            if (str6.equals("V_THEORA")) {
                                                c6 = 20;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 542569478:
                                            if (str6.equals("A_DTS/EXPRESS")) {
                                                c6 = 21;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 635596514:
                                            if (str6.equals("A_PCM/FLOAT/IEEE")) {
                                                c6 = 22;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 725948237:
                                            if (str6.equals("A_PCM/INT/BIG")) {
                                                c6 = 23;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 725957860:
                                            if (str6.equals("A_PCM/INT/LIT")) {
                                                c6 = 24;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 738597099:
                                            if (str6.equals("S_TEXT/ASS")) {
                                                c6 = 25;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 855502857:
                                            if (str6.equals("V_MPEGH/ISO/HEVC")) {
                                                c6 = 26;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 1045209816:
                                            if (str6.equals("S_TEXT/WEBVTT")) {
                                                c6 = 27;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 1422270023:
                                            if (str6.equals("S_TEXT/UTF8")) {
                                                c6 = 28;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 1809237540:
                                            if (str6.equals("V_MPEG2")) {
                                                c6 = 29;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 1950749482:
                                            if (str6.equals("A_EAC3")) {
                                                c6 = 30;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 1950789798:
                                            if (str6.equals("A_FLAC")) {
                                                c6 = 31;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 1951062397:
                                            if (str6.equals("A_OPUS")) {
                                                c6 = ' ';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        default:
                                            c6 = 65535;
                                            break;
                                    }
                                    String str7 = "video/x-unknown";
                                    switch (c6) {
                                        case 0:
                                        case 1:
                                        case '\t':
                                            lVar = lVar2;
                                            i10 = i25;
                                            byte[] bArr4 = cVar2.k;
                                            str7 = "video/mp4v-es";
                                            singletonList = bArr4 == null ? null : Collections.singletonList(bArr4);
                                            w5 = -1;
                                            i11 = -1;
                                            str3 = null;
                                            if (cVar2.N != null && (i16 = a5.m.i(new w(cVar2.N))) != null) {
                                                str3 = i16.f193d;
                                                str7 = "video/dolby-vision";
                                            }
                                            int i26 = (cVar2.V ? 1 : 0) | (cVar2.U ? 2 : 0);
                                            f0Var = new f0();
                                            j = o.j(str7);
                                            Map map = h0;
                                            if (j) {
                                                f0Var.f9690x = cVar2.O;
                                                f0Var.f9691y = cVar2.Q;
                                                f0Var.f9692z = w5;
                                                i12 = 1;
                                            } else if (o.l(str7)) {
                                                if (cVar2.f19740q == 0) {
                                                    int i27 = cVar2.f19738o;
                                                    i13 = -1;
                                                    if (i27 == -1) {
                                                        i27 = cVar2.f19736m;
                                                    }
                                                    cVar2.f19738o = i27;
                                                    int i28 = cVar2.f19739p;
                                                    if (i28 == -1) {
                                                        i28 = cVar2.f19737n;
                                                    }
                                                    cVar2.f19739p = i28;
                                                } else {
                                                    i13 = -1;
                                                }
                                                float f2 = (cVar2.f19738o == i13 || (i15 = cVar2.f19739p) == i13) ? -1.0f : (cVar2.f19737n * r1) / (cVar2.f19736m * i15);
                                                if (cVar2.f19747x) {
                                                    if (cVar2.D == -1.0f || cVar2.E == -1.0f || cVar2.F == -1.0f || cVar2.G == -1.0f || cVar2.H == -1.0f || cVar2.I == -1.0f || cVar2.J == -1.0f || cVar2.K == -1.0f || cVar2.L == -1.0f || cVar2.M == -1.0f) {
                                                        bArr = null;
                                                    } else {
                                                        bArr = new byte[25];
                                                        ByteBuffer order = ByteBuffer.wrap(bArr).order(ByteOrder.LITTLE_ENDIAN);
                                                        order.put((byte) 0);
                                                        order.putShort((short) ((cVar2.D * 50000.0f) + 0.5f));
                                                        order.putShort((short) ((cVar2.E * 50000.0f) + 0.5f));
                                                        order.putShort((short) ((cVar2.F * 50000.0f) + 0.5f));
                                                        order.putShort((short) ((cVar2.G * 50000.0f) + 0.5f));
                                                        order.putShort((short) ((cVar2.H * 50000.0f) + 0.5f));
                                                        order.putShort((short) ((cVar2.I * 50000.0f) + 0.5f));
                                                        order.putShort((short) ((cVar2.J * 50000.0f) + 0.5f));
                                                        order.putShort((short) ((cVar2.K * 50000.0f) + 0.5f));
                                                        order.putShort((short) (cVar2.L + 0.5f));
                                                        order.putShort((short) (cVar2.M + 0.5f));
                                                        order.putShort((short) cVar2.B);
                                                        order.putShort((short) cVar2.C);
                                                    }
                                                    bVar = new le.b(cVar2.f19748y, cVar2.A, cVar2.f19749z, bArr);
                                                } else {
                                                    bVar = null;
                                                }
                                                String str8 = cVar2.a;
                                                int intValue = (str8 == null || !map.containsKey(str8)) ? -1 : ((Integer) map.get(cVar2.a)).intValue();
                                                if (cVar2.f19741r == 0 && Float.compare(cVar2.f19742s, 0.0f) == 0 && Float.compare(cVar2.f19743t, 0.0f) == 0) {
                                                    if (Float.compare(cVar2.f19744u, 0.0f) == 0) {
                                                        i14 = 0;
                                                    } else if (Float.compare(cVar2.f19743t, 90.0f) == 0) {
                                                        i14 = 90;
                                                    } else if (Float.compare(cVar2.f19743t, -180.0f) == 0 || Float.compare(cVar2.f19743t, 180.0f) == 0) {
                                                        i14 = 180;
                                                    } else if (Float.compare(cVar2.f19743t, -90.0f) == 0) {
                                                        i14 = 270;
                                                    }
                                                    f0Var.f9682p = cVar2.f19736m;
                                                    f0Var.f9683q = cVar2.f19737n;
                                                    f0Var.f9686t = f2;
                                                    f0Var.f9685s = i14;
                                                    f0Var.f9687u = cVar2.f19745v;
                                                    f0Var.f9688v = cVar2.f19746w;
                                                    f0Var.f9689w = bVar;
                                                    i12 = 2;
                                                }
                                                i14 = intValue;
                                                f0Var.f9682p = cVar2.f19736m;
                                                f0Var.f9683q = cVar2.f19737n;
                                                f0Var.f9686t = f2;
                                                f0Var.f9685s = i14;
                                                f0Var.f9687u = cVar2.f19745v;
                                                f0Var.f9688v = cVar2.f19746w;
                                                f0Var.f9689w = bVar;
                                                i12 = 2;
                                            } else {
                                                if (!"application/x-subrip".equals(str7) && !"text/x-ssa".equals(str7) && !"text/vtt".equals(str7) && !"application/vobsub".equals(str7) && !"application/pgs".equals(str7) && !"application/dvbsubs".equals(str7)) {
                                                    throw g1.a("Unexpected MIME type.", null);
                                                }
                                                i12 = 3;
                                            }
                                            str5 = cVar2.a;
                                            if (str5 != null && !map.containsKey(str5)) {
                                                f0Var.f9670b = cVar2.a;
                                            }
                                            f0Var.a = Integer.toString(i10);
                                            f0Var.k = str7;
                                            f0Var.f9678l = i11;
                                            f0Var.f9671c = cVar2.W;
                                            f0Var.f9672d = i26;
                                            f0Var.f9679m = singletonList;
                                            f0Var.f9676h = str3;
                                            f0Var.f9680n = cVar2.f19735l;
                                            Format format = new Format(f0Var);
                                            v y5 = lVar.y(cVar2.f19728c, i12);
                                            cVar2.X = y5;
                                            y5.e(format);
                                            sparseArray.put(cVar2.f19728c, cVar2);
                                            dVar5 = dVar5;
                                            break;
                                        case 2:
                                            lVar = lVar2;
                                            i10 = i25;
                                            w wVar = new w(cVar2.a(cVar2.f19727b));
                                            try {
                                                int n6 = wVar.n();
                                                if (n6 != 1) {
                                                    if (n6 == 65534) {
                                                        wVar.F(24);
                                                        long o6 = wVar.o();
                                                        UUID uuid = f19754g0;
                                                        if (o6 == uuid.getMostSignificantBits()) {
                                                            break;
                                                        }
                                                    }
                                                    ke.b.N("MatroskaExtractor", "Non-PCM MS/ACM is unsupported. Setting mimeType to audio/x-unknown");
                                                    str7 = "audio/x-unknown";
                                                    w5 = -1;
                                                    i11 = -1;
                                                    singletonList = null;
                                                    str3 = null;
                                                    if (cVar2.N != null) {
                                                        str3 = i16.f193d;
                                                        str7 = "video/dolby-vision";
                                                        break;
                                                    }
                                                    int i262 = (cVar2.V ? 1 : 0) | (cVar2.U ? 2 : 0);
                                                    f0Var = new f0();
                                                    j = o.j(str7);
                                                    Map map2 = h0;
                                                    if (j) {
                                                    }
                                                    str5 = cVar2.a;
                                                    if (str5 != null) {
                                                        f0Var.f9670b = cVar2.a;
                                                        break;
                                                    }
                                                    f0Var.a = Integer.toString(i10);
                                                    f0Var.k = str7;
                                                    f0Var.f9678l = i11;
                                                    f0Var.f9671c = cVar2.W;
                                                    f0Var.f9672d = i262;
                                                    f0Var.f9679m = singletonList;
                                                    f0Var.f9676h = str3;
                                                    f0Var.f9680n = cVar2.f19735l;
                                                    Format format2 = new Format(f0Var);
                                                    v y52 = lVar.y(cVar2.f19728c, i12);
                                                    cVar2.X = y52;
                                                    y52.e(format2);
                                                    sparseArray.put(cVar2.f19728c, cVar2);
                                                    dVar5 = dVar5;
                                                }
                                                w5 = d0.w(cVar2.P);
                                                if (w5 == 0) {
                                                    ke.b.N("MatroskaExtractor", "Unsupported PCM bit depth: " + cVar2.P + ". Setting mimeType to audio/x-unknown");
                                                    str7 = "audio/x-unknown";
                                                    w5 = -1;
                                                    i11 = -1;
                                                    singletonList = null;
                                                    str3 = null;
                                                    if (cVar2.N != null) {
                                                    }
                                                    int i2622 = (cVar2.V ? 1 : 0) | (cVar2.U ? 2 : 0);
                                                    f0Var = new f0();
                                                    j = o.j(str7);
                                                    Map map22 = h0;
                                                    if (j) {
                                                    }
                                                    str5 = cVar2.a;
                                                    if (str5 != null) {
                                                    }
                                                    f0Var.a = Integer.toString(i10);
                                                    f0Var.k = str7;
                                                    f0Var.f9678l = i11;
                                                    f0Var.f9671c = cVar2.W;
                                                    f0Var.f9672d = i2622;
                                                    f0Var.f9679m = singletonList;
                                                    f0Var.f9676h = str3;
                                                    f0Var.f9680n = cVar2.f19735l;
                                                    Format format22 = new Format(f0Var);
                                                    v y522 = lVar.y(cVar2.f19728c, i12);
                                                    cVar2.X = y522;
                                                    y522.e(format22);
                                                    sparseArray.put(cVar2.f19728c, cVar2);
                                                    dVar5 = dVar5;
                                                }
                                                str7 = "audio/raw";
                                                i11 = -1;
                                                singletonList = null;
                                                str3 = null;
                                                if (cVar2.N != null) {
                                                }
                                                int i26222 = (cVar2.V ? 1 : 0) | (cVar2.U ? 2 : 0);
                                                f0Var = new f0();
                                                j = o.j(str7);
                                                Map map222 = h0;
                                                if (j) {
                                                }
                                                str5 = cVar2.a;
                                                if (str5 != null) {
                                                }
                                                f0Var.a = Integer.toString(i10);
                                                f0Var.k = str7;
                                                f0Var.f9678l = i11;
                                                f0Var.f9671c = cVar2.W;
                                                f0Var.f9672d = i26222;
                                                f0Var.f9679m = singletonList;
                                                f0Var.f9676h = str3;
                                                f0Var.f9680n = cVar2.f19735l;
                                                Format format222 = new Format(f0Var);
                                                v y5222 = lVar.y(cVar2.f19728c, i12);
                                                cVar2.X = y5222;
                                                y5222.e(format222);
                                                sparseArray.put(cVar2.f19728c, cVar2);
                                                dVar5 = dVar5;
                                            } catch (ArrayIndexOutOfBoundsException unused) {
                                                throw g1.a("Error parsing MS/ACM codec private", null);
                                            }
                                            break;
                                        case 3:
                                            lVar = lVar2;
                                            i10 = i25;
                                            cVar2.T = new qc.w();
                                            str7 = "audio/true-hd";
                                            w5 = -1;
                                            i11 = -1;
                                            singletonList = null;
                                            str3 = null;
                                            if (cVar2.N != null) {
                                            }
                                            int i262222 = (cVar2.V ? 1 : 0) | (cVar2.U ? 2 : 0);
                                            f0Var = new f0();
                                            j = o.j(str7);
                                            Map map2222 = h0;
                                            if (j) {
                                            }
                                            str5 = cVar2.a;
                                            if (str5 != null) {
                                            }
                                            f0Var.a = Integer.toString(i10);
                                            f0Var.k = str7;
                                            f0Var.f9678l = i11;
                                            f0Var.f9671c = cVar2.W;
                                            f0Var.f9672d = i262222;
                                            f0Var.f9679m = singletonList;
                                            f0Var.f9676h = str3;
                                            f0Var.f9680n = cVar2.f19735l;
                                            Format format2222 = new Format(f0Var);
                                            v y52222 = lVar.y(cVar2.f19728c, i12);
                                            cVar2.X = y52222;
                                            y52222.e(format2222);
                                            sparseArray.put(cVar2.f19728c, cVar2);
                                            dVar5 = dVar5;
                                            break;
                                        case 4:
                                            lVar = lVar2;
                                            byte[] a10 = cVar2.a(str6);
                                            try {
                                            } catch (ArrayIndexOutOfBoundsException unused2) {
                                                a10 = 0;
                                            }
                                            try {
                                                if (a10[0] != 2) {
                                                    throw g1.a("Error parsing vorbis codec private", null);
                                                }
                                                int i29 = 0;
                                                int i30 = 1;
                                                while (true) {
                                                    int i31 = a10[i30] & 255;
                                                    if (i31 == 255) {
                                                        i29 += 255;
                                                        i30++;
                                                    } else {
                                                        int i32 = i29 + i31;
                                                        int i33 = i30 + 1;
                                                        int i34 = 0;
                                                        while (true) {
                                                            int i35 = a10[i33] & 255;
                                                            if (i35 == 255) {
                                                                i34 += 255;
                                                                i33++;
                                                            } else {
                                                                int i36 = i33 + 1;
                                                                int i37 = i34 + i35;
                                                                if (a10[i36] != 1) {
                                                                    throw g1.a("Error parsing vorbis codec private", null);
                                                                }
                                                                byte[] bArr5 = new byte[i32];
                                                                System.arraycopy(a10, i36, bArr5, 0, i32);
                                                                int i38 = i36 + i32;
                                                                if (a10[i38] != 3) {
                                                                    throw g1.a("Error parsing vorbis codec private", null);
                                                                }
                                                                int i39 = i38 + i37;
                                                                if (a10[i39] != 5) {
                                                                    throw g1.a("Error parsing vorbis codec private", null);
                                                                }
                                                                byte[] bArr6 = new byte[a10.length - i39];
                                                                i10 = i25;
                                                                System.arraycopy(a10, i39, bArr6, 0, a10.length - i39);
                                                                ArrayList arrayList = new ArrayList(2);
                                                                arrayList.add(bArr5);
                                                                arrayList.add(bArr6);
                                                                str7 = "audio/vorbis";
                                                                i11 = 8192;
                                                                singletonList = arrayList;
                                                                w5 = -1;
                                                                str3 = null;
                                                                if (cVar2.N != null) {
                                                                }
                                                                int i2622222 = (cVar2.V ? 1 : 0) | (cVar2.U ? 2 : 0);
                                                                f0Var = new f0();
                                                                j = o.j(str7);
                                                                Map map22222 = h0;
                                                                if (j) {
                                                                }
                                                                str5 = cVar2.a;
                                                                if (str5 != null) {
                                                                }
                                                                f0Var.a = Integer.toString(i10);
                                                                f0Var.k = str7;
                                                                f0Var.f9678l = i11;
                                                                f0Var.f9671c = cVar2.W;
                                                                f0Var.f9672d = i2622222;
                                                                f0Var.f9679m = singletonList;
                                                                f0Var.f9676h = str3;
                                                                f0Var.f9680n = cVar2.f19735l;
                                                                Format format22222 = new Format(f0Var);
                                                                v y522222 = lVar.y(cVar2.f19728c, i12);
                                                                cVar2.X = y522222;
                                                                y522222.e(format22222);
                                                                sparseArray.put(cVar2.f19728c, cVar2);
                                                                dVar5 = dVar5;
                                                            }
                                                        }
                                                    }
                                                }
                                            } catch (ArrayIndexOutOfBoundsException unused3) {
                                                throw g1.a("Error parsing vorbis codec private", a10);
                                            }
                                            break;
                                        case 5:
                                            lVar = lVar2;
                                            str7 = "audio/mpeg-L2";
                                            i10 = i25;
                                            w5 = -1;
                                            i11 = RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT;
                                            singletonList = null;
                                            str3 = null;
                                            if (cVar2.N != null) {
                                            }
                                            int i26222222 = (cVar2.V ? 1 : 0) | (cVar2.U ? 2 : 0);
                                            f0Var = new f0();
                                            j = o.j(str7);
                                            Map map222222 = h0;
                                            if (j) {
                                            }
                                            str5 = cVar2.a;
                                            if (str5 != null) {
                                            }
                                            f0Var.a = Integer.toString(i10);
                                            f0Var.k = str7;
                                            f0Var.f9678l = i11;
                                            f0Var.f9671c = cVar2.W;
                                            f0Var.f9672d = i26222222;
                                            f0Var.f9679m = singletonList;
                                            f0Var.f9676h = str3;
                                            f0Var.f9680n = cVar2.f19735l;
                                            Format format222222 = new Format(f0Var);
                                            v y5222222 = lVar.y(cVar2.f19728c, i12);
                                            cVar2.X = y5222222;
                                            y5222222.e(format222222);
                                            sparseArray.put(cVar2.f19728c, cVar2);
                                            dVar5 = dVar5;
                                            break;
                                        case 6:
                                            lVar = lVar2;
                                            str7 = "audio/mpeg";
                                            i10 = i25;
                                            w5 = -1;
                                            i11 = RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT;
                                            singletonList = null;
                                            str3 = null;
                                            if (cVar2.N != null) {
                                            }
                                            int i262222222 = (cVar2.V ? 1 : 0) | (cVar2.U ? 2 : 0);
                                            f0Var = new f0();
                                            j = o.j(str7);
                                            Map map2222222 = h0;
                                            if (j) {
                                            }
                                            str5 = cVar2.a;
                                            if (str5 != null) {
                                            }
                                            f0Var.a = Integer.toString(i10);
                                            f0Var.k = str7;
                                            f0Var.f9678l = i11;
                                            f0Var.f9671c = cVar2.W;
                                            f0Var.f9672d = i262222222;
                                            f0Var.f9679m = singletonList;
                                            f0Var.f9676h = str3;
                                            f0Var.f9680n = cVar2.f19735l;
                                            Format format2222222 = new Format(f0Var);
                                            v y52222222 = lVar.y(cVar2.f19728c, i12);
                                            cVar2.X = y52222222;
                                            y52222222.e(format2222222);
                                            sparseArray.put(cVar2.f19728c, cVar2);
                                            dVar5 = dVar5;
                                            break;
                                        case 7:
                                            lVar = lVar2;
                                            w wVar2 = new w(cVar2.a(cVar2.f19727b));
                                            try {
                                                wVar2.G(16);
                                                long l6 = wVar2.l();
                                                if (l6 == 1482049860) {
                                                    runtimeException = null;
                                                    try {
                                                        pair = new Pair("video/divx", null);
                                                    } catch (ArrayIndexOutOfBoundsException unused4) {
                                                        throw g1.a("Error parsing FourCC private data", runtimeException);
                                                    }
                                                } else if (l6 == 859189832) {
                                                    pair = new Pair("video/3gpp", null);
                                                } else {
                                                    if (l6 == 826496599) {
                                                        byte[] bArr7 = wVar2.a;
                                                        for (int i40 = wVar2.f13363b + 20; i40 < bArr7.length - 4; i40++) {
                                                            if (bArr7[i40] == 0 && bArr7[i40 + 1] == 0 && bArr7[i40 + 2] == 1) {
                                                                if (bArr7[i40 + 3] == 15) {
                                                                    pair = new Pair("video/wvc1", Collections.singletonList(Arrays.copyOfRange(bArr7, i40, bArr7.length)));
                                                                }
                                                            }
                                                        }
                                                        try {
                                                            throw g1.a("Failed to find FourCC VC1 initialization data", null);
                                                        } catch (ArrayIndexOutOfBoundsException unused5) {
                                                            runtimeException = null;
                                                            throw g1.a("Error parsing FourCC private data", runtimeException);
                                                        }
                                                    }
                                                    ke.b.N("MatroskaExtractor", "Unknown FourCC. Setting mimeType to video/x-unknown");
                                                    str2 = null;
                                                    pair = new Pair("video/x-unknown", null);
                                                    str7 = (String) pair.first;
                                                    str3 = str2;
                                                    i10 = i25;
                                                    singletonList = (List) pair.second;
                                                    w5 = -1;
                                                    i11 = -1;
                                                    if (cVar2.N != null) {
                                                    }
                                                    int i2622222222 = (cVar2.V ? 1 : 0) | (cVar2.U ? 2 : 0);
                                                    f0Var = new f0();
                                                    j = o.j(str7);
                                                    Map map22222222 = h0;
                                                    if (j) {
                                                    }
                                                    str5 = cVar2.a;
                                                    if (str5 != null) {
                                                    }
                                                    f0Var.a = Integer.toString(i10);
                                                    f0Var.k = str7;
                                                    f0Var.f9678l = i11;
                                                    f0Var.f9671c = cVar2.W;
                                                    f0Var.f9672d = i2622222222;
                                                    f0Var.f9679m = singletonList;
                                                    f0Var.f9676h = str3;
                                                    f0Var.f9680n = cVar2.f19735l;
                                                    Format format22222222 = new Format(f0Var);
                                                    v y522222222 = lVar.y(cVar2.f19728c, i12);
                                                    cVar2.X = y522222222;
                                                    y522222222.e(format22222222);
                                                    sparseArray.put(cVar2.f19728c, cVar2);
                                                    dVar5 = dVar5;
                                                }
                                                str2 = null;
                                                str7 = (String) pair.first;
                                                str3 = str2;
                                                i10 = i25;
                                                singletonList = (List) pair.second;
                                                w5 = -1;
                                                i11 = -1;
                                                if (cVar2.N != null) {
                                                }
                                                int i26222222222 = (cVar2.V ? 1 : 0) | (cVar2.U ? 2 : 0);
                                                f0Var = new f0();
                                                j = o.j(str7);
                                                Map map222222222 = h0;
                                                if (j) {
                                                }
                                                str5 = cVar2.a;
                                                if (str5 != null) {
                                                }
                                                f0Var.a = Integer.toString(i10);
                                                f0Var.k = str7;
                                                f0Var.f9678l = i11;
                                                f0Var.f9671c = cVar2.W;
                                                f0Var.f9672d = i26222222222;
                                                f0Var.f9679m = singletonList;
                                                f0Var.f9676h = str3;
                                                f0Var.f9680n = cVar2.f19735l;
                                                Format format222222222 = new Format(f0Var);
                                                v y5222222222 = lVar.y(cVar2.f19728c, i12);
                                                cVar2.X = y5222222222;
                                                y5222222222.e(format222222222);
                                                sparseArray.put(cVar2.f19728c, cVar2);
                                                dVar5 = dVar5;
                                            } catch (ArrayIndexOutOfBoundsException unused6) {
                                                runtimeException = null;
                                            }
                                            break;
                                        case '\b':
                                            lVar = lVar2;
                                            byte[] bArr8 = new byte[4];
                                            System.arraycopy(cVar2.a(str6), 0, bArr8, 0, 4);
                                            singletonList = e0.s(bArr8);
                                            str7 = "application/dvbsubs";
                                            i10 = i25;
                                            w5 = -1;
                                            i11 = -1;
                                            str3 = null;
                                            if (cVar2.N != null) {
                                            }
                                            int i262222222222 = (cVar2.V ? 1 : 0) | (cVar2.U ? 2 : 0);
                                            f0Var = new f0();
                                            j = o.j(str7);
                                            Map map2222222222 = h0;
                                            if (j) {
                                            }
                                            str5 = cVar2.a;
                                            if (str5 != null) {
                                            }
                                            f0Var.a = Integer.toString(i10);
                                            f0Var.k = str7;
                                            f0Var.f9678l = i11;
                                            f0Var.f9671c = cVar2.W;
                                            f0Var.f9672d = i262222222222;
                                            f0Var.f9679m = singletonList;
                                            f0Var.f9676h = str3;
                                            f0Var.f9680n = cVar2.f19735l;
                                            Format format2222222222 = new Format(f0Var);
                                            v y52222222222 = lVar.y(cVar2.f19728c, i12);
                                            cVar2.X = y52222222222;
                                            y52222222222.e(format2222222222);
                                            sparseArray.put(cVar2.f19728c, cVar2);
                                            dVar5 = dVar5;
                                            break;
                                        case '\n':
                                            lVar = lVar2;
                                            le.a a11 = le.a.a(new w(cVar2.a(cVar2.f19727b)));
                                            list = a11.a;
                                            cVar2.Y = a11.f13845b;
                                            str4 = a11.f13852i;
                                            str7 = "video/avc";
                                            str3 = str4;
                                            singletonList = list;
                                            i10 = i25;
                                            w5 = -1;
                                            i11 = -1;
                                            if (cVar2.N != null) {
                                            }
                                            int i2622222222222 = (cVar2.V ? 1 : 0) | (cVar2.U ? 2 : 0);
                                            f0Var = new f0();
                                            j = o.j(str7);
                                            Map map22222222222 = h0;
                                            if (j) {
                                            }
                                            str5 = cVar2.a;
                                            if (str5 != null) {
                                            }
                                            f0Var.a = Integer.toString(i10);
                                            f0Var.k = str7;
                                            f0Var.f9678l = i11;
                                            f0Var.f9671c = cVar2.W;
                                            f0Var.f9672d = i2622222222222;
                                            f0Var.f9679m = singletonList;
                                            f0Var.f9676h = str3;
                                            f0Var.f9680n = cVar2.f19735l;
                                            Format format22222222222 = new Format(f0Var);
                                            v y522222222222 = lVar.y(cVar2.f19728c, i12);
                                            cVar2.X = y522222222222;
                                            y522222222222.e(format22222222222);
                                            sparseArray.put(cVar2.f19728c, cVar2);
                                            dVar5 = dVar5;
                                            break;
                                        case 11:
                                            lVar = lVar2;
                                            singletonList = e0.s(cVar2.a(str6));
                                            str7 = "application/vobsub";
                                            i10 = i25;
                                            w5 = -1;
                                            i11 = -1;
                                            str3 = null;
                                            if (cVar2.N != null) {
                                            }
                                            int i26222222222222 = (cVar2.V ? 1 : 0) | (cVar2.U ? 2 : 0);
                                            f0Var = new f0();
                                            j = o.j(str7);
                                            Map map222222222222 = h0;
                                            if (j) {
                                            }
                                            str5 = cVar2.a;
                                            if (str5 != null) {
                                            }
                                            f0Var.a = Integer.toString(i10);
                                            f0Var.k = str7;
                                            f0Var.f9678l = i11;
                                            f0Var.f9671c = cVar2.W;
                                            f0Var.f9672d = i26222222222222;
                                            f0Var.f9679m = singletonList;
                                            f0Var.f9676h = str3;
                                            f0Var.f9680n = cVar2.f19735l;
                                            Format format222222222222 = new Format(f0Var);
                                            v y5222222222222 = lVar.y(cVar2.f19728c, i12);
                                            cVar2.X = y5222222222222;
                                            y5222222222222.e(format222222222222);
                                            sparseArray.put(cVar2.f19728c, cVar2);
                                            dVar5 = dVar5;
                                            break;
                                        case '\f':
                                            lVar = lVar2;
                                            str7 = "audio/vnd.dts.hd";
                                            i10 = i25;
                                            w5 = -1;
                                            i11 = -1;
                                            singletonList = null;
                                            str3 = null;
                                            if (cVar2.N != null) {
                                            }
                                            int i262222222222222 = (cVar2.V ? 1 : 0) | (cVar2.U ? 2 : 0);
                                            f0Var = new f0();
                                            j = o.j(str7);
                                            Map map2222222222222 = h0;
                                            if (j) {
                                            }
                                            str5 = cVar2.a;
                                            if (str5 != null) {
                                            }
                                            f0Var.a = Integer.toString(i10);
                                            f0Var.k = str7;
                                            f0Var.f9678l = i11;
                                            f0Var.f9671c = cVar2.W;
                                            f0Var.f9672d = i262222222222222;
                                            f0Var.f9679m = singletonList;
                                            f0Var.f9676h = str3;
                                            f0Var.f9680n = cVar2.f19735l;
                                            Format format2222222222222 = new Format(f0Var);
                                            v y52222222222222 = lVar.y(cVar2.f19728c, i12);
                                            cVar2.X = y52222222222222;
                                            y52222222222222.e(format2222222222222);
                                            sparseArray.put(cVar2.f19728c, cVar2);
                                            dVar5 = dVar5;
                                            break;
                                        case '\r':
                                            lVar = lVar2;
                                            List singletonList2 = Collections.singletonList(cVar2.a(str6));
                                            byte[] bArr9 = cVar2.k;
                                            p0 i41 = jc.a.i(new ke.v(bArr9, bArr9.length), false);
                                            cVar2.Q = i41.a;
                                            cVar2.O = i41.f12603b;
                                            String str9 = (String) i41.f12604c;
                                            str7 = "audio/mp4a-latm";
                                            singletonList = singletonList2;
                                            str3 = str9;
                                            i10 = i25;
                                            w5 = -1;
                                            i11 = -1;
                                            if (cVar2.N != null) {
                                            }
                                            int i2622222222222222 = (cVar2.V ? 1 : 0) | (cVar2.U ? 2 : 0);
                                            f0Var = new f0();
                                            j = o.j(str7);
                                            Map map22222222222222 = h0;
                                            if (j) {
                                            }
                                            str5 = cVar2.a;
                                            if (str5 != null) {
                                            }
                                            f0Var.a = Integer.toString(i10);
                                            f0Var.k = str7;
                                            f0Var.f9678l = i11;
                                            f0Var.f9671c = cVar2.W;
                                            f0Var.f9672d = i2622222222222222;
                                            f0Var.f9679m = singletonList;
                                            f0Var.f9676h = str3;
                                            f0Var.f9680n = cVar2.f19735l;
                                            Format format22222222222222 = new Format(f0Var);
                                            v y522222222222222 = lVar.y(cVar2.f19728c, i12);
                                            cVar2.X = y522222222222222;
                                            y522222222222222.e(format22222222222222);
                                            sparseArray.put(cVar2.f19728c, cVar2);
                                            dVar5 = dVar5;
                                            break;
                                        case 14:
                                            lVar = lVar2;
                                            str7 = "audio/ac3";
                                            i10 = i25;
                                            w5 = -1;
                                            i11 = -1;
                                            singletonList = null;
                                            str3 = null;
                                            if (cVar2.N != null) {
                                            }
                                            int i26222222222222222 = (cVar2.V ? 1 : 0) | (cVar2.U ? 2 : 0);
                                            f0Var = new f0();
                                            j = o.j(str7);
                                            Map map222222222222222 = h0;
                                            if (j) {
                                            }
                                            str5 = cVar2.a;
                                            if (str5 != null) {
                                            }
                                            f0Var.a = Integer.toString(i10);
                                            f0Var.k = str7;
                                            f0Var.f9678l = i11;
                                            f0Var.f9671c = cVar2.W;
                                            f0Var.f9672d = i26222222222222222;
                                            f0Var.f9679m = singletonList;
                                            f0Var.f9676h = str3;
                                            f0Var.f9680n = cVar2.f19735l;
                                            Format format222222222222222 = new Format(f0Var);
                                            v y5222222222222222 = lVar.y(cVar2.f19728c, i12);
                                            cVar2.X = y5222222222222222;
                                            y5222222222222222.e(format222222222222222);
                                            sparseArray.put(cVar2.f19728c, cVar2);
                                            dVar5 = dVar5;
                                            break;
                                        case 15:
                                        case 21:
                                            lVar = lVar2;
                                            str7 = "audio/vnd.dts";
                                            i10 = i25;
                                            w5 = -1;
                                            i11 = -1;
                                            singletonList = null;
                                            str3 = null;
                                            if (cVar2.N != null) {
                                            }
                                            int i262222222222222222 = (cVar2.V ? 1 : 0) | (cVar2.U ? 2 : 0);
                                            f0Var = new f0();
                                            j = o.j(str7);
                                            Map map2222222222222222 = h0;
                                            if (j) {
                                            }
                                            str5 = cVar2.a;
                                            if (str5 != null) {
                                            }
                                            f0Var.a = Integer.toString(i10);
                                            f0Var.k = str7;
                                            f0Var.f9678l = i11;
                                            f0Var.f9671c = cVar2.W;
                                            f0Var.f9672d = i262222222222222222;
                                            f0Var.f9679m = singletonList;
                                            f0Var.f9676h = str3;
                                            f0Var.f9680n = cVar2.f19735l;
                                            Format format2222222222222222 = new Format(f0Var);
                                            v y52222222222222222 = lVar.y(cVar2.f19728c, i12);
                                            cVar2.X = y52222222222222222;
                                            y52222222222222222.e(format2222222222222222);
                                            sparseArray.put(cVar2.f19728c, cVar2);
                                            dVar5 = dVar5;
                                            break;
                                        case 16:
                                            lVar = lVar2;
                                            str7 = "video/av01";
                                            i10 = i25;
                                            w5 = -1;
                                            i11 = -1;
                                            singletonList = null;
                                            str3 = null;
                                            if (cVar2.N != null) {
                                            }
                                            int i2622222222222222222 = (cVar2.V ? 1 : 0) | (cVar2.U ? 2 : 0);
                                            f0Var = new f0();
                                            j = o.j(str7);
                                            Map map22222222222222222 = h0;
                                            if (j) {
                                            }
                                            str5 = cVar2.a;
                                            if (str5 != null) {
                                            }
                                            f0Var.a = Integer.toString(i10);
                                            f0Var.k = str7;
                                            f0Var.f9678l = i11;
                                            f0Var.f9671c = cVar2.W;
                                            f0Var.f9672d = i2622222222222222222;
                                            f0Var.f9679m = singletonList;
                                            f0Var.f9676h = str3;
                                            f0Var.f9680n = cVar2.f19735l;
                                            Format format22222222222222222 = new Format(f0Var);
                                            v y522222222222222222 = lVar.y(cVar2.f19728c, i12);
                                            cVar2.X = y522222222222222222;
                                            y522222222222222222.e(format22222222222222222);
                                            sparseArray.put(cVar2.f19728c, cVar2);
                                            dVar5 = dVar5;
                                            break;
                                        case 17:
                                            lVar = lVar2;
                                            str7 = "video/x-vnd.on2.vp8";
                                            i10 = i25;
                                            w5 = -1;
                                            i11 = -1;
                                            singletonList = null;
                                            str3 = null;
                                            if (cVar2.N != null) {
                                            }
                                            int i26222222222222222222 = (cVar2.V ? 1 : 0) | (cVar2.U ? 2 : 0);
                                            f0Var = new f0();
                                            j = o.j(str7);
                                            Map map222222222222222222 = h0;
                                            if (j) {
                                            }
                                            str5 = cVar2.a;
                                            if (str5 != null) {
                                            }
                                            f0Var.a = Integer.toString(i10);
                                            f0Var.k = str7;
                                            f0Var.f9678l = i11;
                                            f0Var.f9671c = cVar2.W;
                                            f0Var.f9672d = i26222222222222222222;
                                            f0Var.f9679m = singletonList;
                                            f0Var.f9676h = str3;
                                            f0Var.f9680n = cVar2.f19735l;
                                            Format format222222222222222222 = new Format(f0Var);
                                            v y5222222222222222222 = lVar.y(cVar2.f19728c, i12);
                                            cVar2.X = y5222222222222222222;
                                            y5222222222222222222.e(format222222222222222222);
                                            sparseArray.put(cVar2.f19728c, cVar2);
                                            dVar5 = dVar5;
                                            break;
                                        case 18:
                                            lVar = lVar2;
                                            str7 = "video/x-vnd.on2.vp9";
                                            i10 = i25;
                                            w5 = -1;
                                            i11 = -1;
                                            singletonList = null;
                                            str3 = null;
                                            if (cVar2.N != null) {
                                            }
                                            int i262222222222222222222 = (cVar2.V ? 1 : 0) | (cVar2.U ? 2 : 0);
                                            f0Var = new f0();
                                            j = o.j(str7);
                                            Map map2222222222222222222 = h0;
                                            if (j) {
                                            }
                                            str5 = cVar2.a;
                                            if (str5 != null) {
                                            }
                                            f0Var.a = Integer.toString(i10);
                                            f0Var.k = str7;
                                            f0Var.f9678l = i11;
                                            f0Var.f9671c = cVar2.W;
                                            f0Var.f9672d = i262222222222222222222;
                                            f0Var.f9679m = singletonList;
                                            f0Var.f9676h = str3;
                                            f0Var.f9680n = cVar2.f19735l;
                                            Format format2222222222222222222 = new Format(f0Var);
                                            v y52222222222222222222 = lVar.y(cVar2.f19728c, i12);
                                            cVar2.X = y52222222222222222222;
                                            y52222222222222222222.e(format2222222222222222222);
                                            sparseArray.put(cVar2.f19728c, cVar2);
                                            dVar5 = dVar5;
                                            break;
                                        case 19:
                                            lVar = lVar2;
                                            str7 = "application/pgs";
                                            i10 = i25;
                                            w5 = -1;
                                            i11 = -1;
                                            singletonList = null;
                                            str3 = null;
                                            if (cVar2.N != null) {
                                            }
                                            int i2622222222222222222222 = (cVar2.V ? 1 : 0) | (cVar2.U ? 2 : 0);
                                            f0Var = new f0();
                                            j = o.j(str7);
                                            Map map22222222222222222222 = h0;
                                            if (j) {
                                            }
                                            str5 = cVar2.a;
                                            if (str5 != null) {
                                            }
                                            f0Var.a = Integer.toString(i10);
                                            f0Var.k = str7;
                                            f0Var.f9678l = i11;
                                            f0Var.f9671c = cVar2.W;
                                            f0Var.f9672d = i2622222222222222222222;
                                            f0Var.f9679m = singletonList;
                                            f0Var.f9676h = str3;
                                            f0Var.f9680n = cVar2.f19735l;
                                            Format format22222222222222222222 = new Format(f0Var);
                                            v y522222222222222222222 = lVar.y(cVar2.f19728c, i12);
                                            cVar2.X = y522222222222222222222;
                                            y522222222222222222222.e(format22222222222222222222);
                                            sparseArray.put(cVar2.f19728c, cVar2);
                                            dVar5 = dVar5;
                                            break;
                                        case 20:
                                            lVar = lVar2;
                                            i10 = i25;
                                            w5 = -1;
                                            i11 = -1;
                                            singletonList = null;
                                            str3 = null;
                                            if (cVar2.N != null) {
                                            }
                                            int i26222222222222222222222 = (cVar2.V ? 1 : 0) | (cVar2.U ? 2 : 0);
                                            f0Var = new f0();
                                            j = o.j(str7);
                                            Map map222222222222222222222 = h0;
                                            if (j) {
                                            }
                                            str5 = cVar2.a;
                                            if (str5 != null) {
                                            }
                                            f0Var.a = Integer.toString(i10);
                                            f0Var.k = str7;
                                            f0Var.f9678l = i11;
                                            f0Var.f9671c = cVar2.W;
                                            f0Var.f9672d = i26222222222222222222222;
                                            f0Var.f9679m = singletonList;
                                            f0Var.f9676h = str3;
                                            f0Var.f9680n = cVar2.f19735l;
                                            Format format222222222222222222222 = new Format(f0Var);
                                            v y5222222222222222222222 = lVar.y(cVar2.f19728c, i12);
                                            cVar2.X = y5222222222222222222222;
                                            y5222222222222222222222.e(format222222222222222222222);
                                            sparseArray.put(cVar2.f19728c, cVar2);
                                            dVar5 = dVar5;
                                            break;
                                        case 22:
                                            lVar = lVar2;
                                            if (cVar2.P == 32) {
                                                i10 = i25;
                                                str7 = "audio/raw";
                                                w5 = 4;
                                                i11 = -1;
                                                singletonList = null;
                                                str3 = null;
                                                if (cVar2.N != null) {
                                                }
                                                int i262222222222222222222222 = (cVar2.V ? 1 : 0) | (cVar2.U ? 2 : 0);
                                                f0Var = new f0();
                                                j = o.j(str7);
                                                Map map2222222222222222222222 = h0;
                                                if (j) {
                                                }
                                                str5 = cVar2.a;
                                                if (str5 != null) {
                                                }
                                                f0Var.a = Integer.toString(i10);
                                                f0Var.k = str7;
                                                f0Var.f9678l = i11;
                                                f0Var.f9671c = cVar2.W;
                                                f0Var.f9672d = i262222222222222222222222;
                                                f0Var.f9679m = singletonList;
                                                f0Var.f9676h = str3;
                                                f0Var.f9680n = cVar2.f19735l;
                                                Format format2222222222222222222222 = new Format(f0Var);
                                                v y52222222222222222222222 = lVar.y(cVar2.f19728c, i12);
                                                cVar2.X = y52222222222222222222222;
                                                y52222222222222222222222.e(format2222222222222222222222);
                                                sparseArray.put(cVar2.f19728c, cVar2);
                                                dVar5 = dVar5;
                                            } else {
                                                ke.b.N("MatroskaExtractor", "Unsupported floating point PCM bit depth: " + cVar2.P + ". Setting mimeType to audio/x-unknown");
                                                i10 = i25;
                                                str7 = "audio/x-unknown";
                                                w5 = -1;
                                                i11 = -1;
                                                singletonList = null;
                                                str3 = null;
                                                if (cVar2.N != null) {
                                                }
                                                int i2622222222222222222222222 = (cVar2.V ? 1 : 0) | (cVar2.U ? 2 : 0);
                                                f0Var = new f0();
                                                j = o.j(str7);
                                                Map map22222222222222222222222 = h0;
                                                if (j) {
                                                }
                                                str5 = cVar2.a;
                                                if (str5 != null) {
                                                }
                                                f0Var.a = Integer.toString(i10);
                                                f0Var.k = str7;
                                                f0Var.f9678l = i11;
                                                f0Var.f9671c = cVar2.W;
                                                f0Var.f9672d = i2622222222222222222222222;
                                                f0Var.f9679m = singletonList;
                                                f0Var.f9676h = str3;
                                                f0Var.f9680n = cVar2.f19735l;
                                                Format format22222222222222222222222 = new Format(f0Var);
                                                v y522222222222222222222222 = lVar.y(cVar2.f19728c, i12);
                                                cVar2.X = y522222222222222222222222;
                                                y522222222222222222222222.e(format22222222222222222222222);
                                                sparseArray.put(cVar2.f19728c, cVar2);
                                                dVar5 = dVar5;
                                            }
                                            break;
                                        case 23:
                                            lVar = lVar2;
                                            int i42 = cVar2.P;
                                            if (i42 == 8) {
                                                i10 = i25;
                                                str7 = "audio/raw";
                                                w5 = 3;
                                                i11 = -1;
                                                singletonList = null;
                                                str3 = null;
                                                if (cVar2.N != null) {
                                                }
                                                int i26222222222222222222222222 = (cVar2.V ? 1 : 0) | (cVar2.U ? 2 : 0);
                                                f0Var = new f0();
                                                j = o.j(str7);
                                                Map map222222222222222222222222 = h0;
                                                if (j) {
                                                }
                                                str5 = cVar2.a;
                                                if (str5 != null) {
                                                }
                                                f0Var.a = Integer.toString(i10);
                                                f0Var.k = str7;
                                                f0Var.f9678l = i11;
                                                f0Var.f9671c = cVar2.W;
                                                f0Var.f9672d = i26222222222222222222222222;
                                                f0Var.f9679m = singletonList;
                                                f0Var.f9676h = str3;
                                                f0Var.f9680n = cVar2.f19735l;
                                                Format format222222222222222222222222 = new Format(f0Var);
                                                v y5222222222222222222222222 = lVar.y(cVar2.f19728c, i12);
                                                cVar2.X = y5222222222222222222222222;
                                                y5222222222222222222222222.e(format222222222222222222222222);
                                                sparseArray.put(cVar2.f19728c, cVar2);
                                                dVar5 = dVar5;
                                            } else if (i42 == 16) {
                                                w5 = 268435456;
                                                i10 = i25;
                                                str7 = "audio/raw";
                                                i11 = -1;
                                                singletonList = null;
                                                str3 = null;
                                                if (cVar2.N != null) {
                                                }
                                                int i262222222222222222222222222 = (cVar2.V ? 1 : 0) | (cVar2.U ? 2 : 0);
                                                f0Var = new f0();
                                                j = o.j(str7);
                                                Map map2222222222222222222222222 = h0;
                                                if (j) {
                                                }
                                                str5 = cVar2.a;
                                                if (str5 != null) {
                                                }
                                                f0Var.a = Integer.toString(i10);
                                                f0Var.k = str7;
                                                f0Var.f9678l = i11;
                                                f0Var.f9671c = cVar2.W;
                                                f0Var.f9672d = i262222222222222222222222222;
                                                f0Var.f9679m = singletonList;
                                                f0Var.f9676h = str3;
                                                f0Var.f9680n = cVar2.f19735l;
                                                Format format2222222222222222222222222 = new Format(f0Var);
                                                v y52222222222222222222222222 = lVar.y(cVar2.f19728c, i12);
                                                cVar2.X = y52222222222222222222222222;
                                                y52222222222222222222222222.e(format2222222222222222222222222);
                                                sparseArray.put(cVar2.f19728c, cVar2);
                                                dVar5 = dVar5;
                                            } else {
                                                ke.b.N("MatroskaExtractor", "Unsupported big endian PCM bit depth: " + cVar2.P + ". Setting mimeType to audio/x-unknown");
                                                i10 = i25;
                                                str7 = "audio/x-unknown";
                                                w5 = -1;
                                                i11 = -1;
                                                singletonList = null;
                                                str3 = null;
                                                if (cVar2.N != null) {
                                                }
                                                int i2622222222222222222222222222 = (cVar2.V ? 1 : 0) | (cVar2.U ? 2 : 0);
                                                f0Var = new f0();
                                                j = o.j(str7);
                                                Map map22222222222222222222222222 = h0;
                                                if (j) {
                                                }
                                                str5 = cVar2.a;
                                                if (str5 != null) {
                                                }
                                                f0Var.a = Integer.toString(i10);
                                                f0Var.k = str7;
                                                f0Var.f9678l = i11;
                                                f0Var.f9671c = cVar2.W;
                                                f0Var.f9672d = i2622222222222222222222222222;
                                                f0Var.f9679m = singletonList;
                                                f0Var.f9676h = str3;
                                                f0Var.f9680n = cVar2.f19735l;
                                                Format format22222222222222222222222222 = new Format(f0Var);
                                                v y522222222222222222222222222 = lVar.y(cVar2.f19728c, i12);
                                                cVar2.X = y522222222222222222222222222;
                                                y522222222222222222222222222.e(format22222222222222222222222222);
                                                sparseArray.put(cVar2.f19728c, cVar2);
                                                dVar5 = dVar5;
                                            }
                                            break;
                                        case 24:
                                            lVar = lVar2;
                                            w5 = d0.w(cVar2.P);
                                            if (w5 == 0) {
                                                ke.b.N("MatroskaExtractor", "Unsupported little endian PCM bit depth: " + cVar2.P + ". Setting mimeType to audio/x-unknown");
                                                i10 = i25;
                                                str7 = "audio/x-unknown";
                                                w5 = -1;
                                                i11 = -1;
                                                singletonList = null;
                                                str3 = null;
                                                if (cVar2.N != null) {
                                                }
                                                int i26222222222222222222222222222 = (cVar2.V ? 1 : 0) | (cVar2.U ? 2 : 0);
                                                f0Var = new f0();
                                                j = o.j(str7);
                                                Map map222222222222222222222222222 = h0;
                                                if (j) {
                                                }
                                                str5 = cVar2.a;
                                                if (str5 != null) {
                                                }
                                                f0Var.a = Integer.toString(i10);
                                                f0Var.k = str7;
                                                f0Var.f9678l = i11;
                                                f0Var.f9671c = cVar2.W;
                                                f0Var.f9672d = i26222222222222222222222222222;
                                                f0Var.f9679m = singletonList;
                                                f0Var.f9676h = str3;
                                                f0Var.f9680n = cVar2.f19735l;
                                                Format format222222222222222222222222222 = new Format(f0Var);
                                                v y5222222222222222222222222222 = lVar.y(cVar2.f19728c, i12);
                                                cVar2.X = y5222222222222222222222222222;
                                                y5222222222222222222222222222.e(format222222222222222222222222222);
                                                sparseArray.put(cVar2.f19728c, cVar2);
                                                dVar5 = dVar5;
                                            }
                                            i10 = i25;
                                            str7 = "audio/raw";
                                            i11 = -1;
                                            singletonList = null;
                                            str3 = null;
                                            if (cVar2.N != null) {
                                            }
                                            int i262222222222222222222222222222 = (cVar2.V ? 1 : 0) | (cVar2.U ? 2 : 0);
                                            f0Var = new f0();
                                            j = o.j(str7);
                                            Map map2222222222222222222222222222 = h0;
                                            if (j) {
                                            }
                                            str5 = cVar2.a;
                                            if (str5 != null) {
                                            }
                                            f0Var.a = Integer.toString(i10);
                                            f0Var.k = str7;
                                            f0Var.f9678l = i11;
                                            f0Var.f9671c = cVar2.W;
                                            f0Var.f9672d = i262222222222222222222222222222;
                                            f0Var.f9679m = singletonList;
                                            f0Var.f9676h = str3;
                                            f0Var.f9680n = cVar2.f19735l;
                                            Format format2222222222222222222222222222 = new Format(f0Var);
                                            v y52222222222222222222222222222 = lVar.y(cVar2.f19728c, i12);
                                            cVar2.X = y52222222222222222222222222222;
                                            y52222222222222222222222222222.e(format2222222222222222222222222222);
                                            sparseArray.put(cVar2.f19728c, cVar2);
                                            dVar5 = dVar5;
                                            break;
                                        case 25:
                                            lVar = lVar2;
                                            byte[] a12 = cVar2.a(str6);
                                            c0 c0Var = e0.f8656e;
                                            Object[] objArr = {f19751d0, a12};
                                            p.b(2, objArr);
                                            singletonList = e0.j(2, objArr);
                                            str7 = "text/x-ssa";
                                            i10 = i25;
                                            w5 = -1;
                                            i11 = -1;
                                            str3 = null;
                                            if (cVar2.N != null) {
                                            }
                                            int i2622222222222222222222222222222 = (cVar2.V ? 1 : 0) | (cVar2.U ? 2 : 0);
                                            f0Var = new f0();
                                            j = o.j(str7);
                                            Map map22222222222222222222222222222 = h0;
                                            if (j) {
                                            }
                                            str5 = cVar2.a;
                                            if (str5 != null) {
                                            }
                                            f0Var.a = Integer.toString(i10);
                                            f0Var.k = str7;
                                            f0Var.f9678l = i11;
                                            f0Var.f9671c = cVar2.W;
                                            f0Var.f9672d = i2622222222222222222222222222222;
                                            f0Var.f9679m = singletonList;
                                            f0Var.f9676h = str3;
                                            f0Var.f9680n = cVar2.f19735l;
                                            Format format22222222222222222222222222222 = new Format(f0Var);
                                            v y522222222222222222222222222222 = lVar.y(cVar2.f19728c, i12);
                                            cVar2.X = y522222222222222222222222222222;
                                            y522222222222222222222222222222.e(format22222222222222222222222222222);
                                            sparseArray.put(cVar2.f19728c, cVar2);
                                            dVar5 = dVar5;
                                            break;
                                        case 26:
                                            lVar = lVar2;
                                            le.e a13 = le.e.a(new w(cVar2.a(cVar2.f19727b)));
                                            list = a13.a;
                                            cVar2.Y = a13.f13871b;
                                            str4 = a13.f13876g;
                                            str7 = "video/hevc";
                                            str3 = str4;
                                            singletonList = list;
                                            i10 = i25;
                                            w5 = -1;
                                            i11 = -1;
                                            if (cVar2.N != null) {
                                            }
                                            int i26222222222222222222222222222222 = (cVar2.V ? 1 : 0) | (cVar2.U ? 2 : 0);
                                            f0Var = new f0();
                                            j = o.j(str7);
                                            Map map222222222222222222222222222222 = h0;
                                            if (j) {
                                            }
                                            str5 = cVar2.a;
                                            if (str5 != null) {
                                            }
                                            f0Var.a = Integer.toString(i10);
                                            f0Var.k = str7;
                                            f0Var.f9678l = i11;
                                            f0Var.f9671c = cVar2.W;
                                            f0Var.f9672d = i26222222222222222222222222222222;
                                            f0Var.f9679m = singletonList;
                                            f0Var.f9676h = str3;
                                            f0Var.f9680n = cVar2.f19735l;
                                            Format format222222222222222222222222222222 = new Format(f0Var);
                                            v y5222222222222222222222222222222 = lVar.y(cVar2.f19728c, i12);
                                            cVar2.X = y5222222222222222222222222222222;
                                            y5222222222222222222222222222222.e(format222222222222222222222222222222);
                                            sparseArray.put(cVar2.f19728c, cVar2);
                                            dVar5 = dVar5;
                                            break;
                                        case 27:
                                            lVar = lVar2;
                                            str7 = "text/vtt";
                                            i10 = i25;
                                            w5 = -1;
                                            i11 = -1;
                                            singletonList = null;
                                            str3 = null;
                                            if (cVar2.N != null) {
                                            }
                                            int i262222222222222222222222222222222 = (cVar2.V ? 1 : 0) | (cVar2.U ? 2 : 0);
                                            f0Var = new f0();
                                            j = o.j(str7);
                                            Map map2222222222222222222222222222222 = h0;
                                            if (j) {
                                            }
                                            str5 = cVar2.a;
                                            if (str5 != null) {
                                            }
                                            f0Var.a = Integer.toString(i10);
                                            f0Var.k = str7;
                                            f0Var.f9678l = i11;
                                            f0Var.f9671c = cVar2.W;
                                            f0Var.f9672d = i262222222222222222222222222222222;
                                            f0Var.f9679m = singletonList;
                                            f0Var.f9676h = str3;
                                            f0Var.f9680n = cVar2.f19735l;
                                            Format format2222222222222222222222222222222 = new Format(f0Var);
                                            v y52222222222222222222222222222222 = lVar.y(cVar2.f19728c, i12);
                                            cVar2.X = y52222222222222222222222222222222;
                                            y52222222222222222222222222222222.e(format2222222222222222222222222222222);
                                            sparseArray.put(cVar2.f19728c, cVar2);
                                            dVar5 = dVar5;
                                            break;
                                        case 28:
                                            lVar = lVar2;
                                            str7 = "application/x-subrip";
                                            i10 = i25;
                                            w5 = -1;
                                            i11 = -1;
                                            singletonList = null;
                                            str3 = null;
                                            if (cVar2.N != null) {
                                            }
                                            int i2622222222222222222222222222222222 = (cVar2.V ? 1 : 0) | (cVar2.U ? 2 : 0);
                                            f0Var = new f0();
                                            j = o.j(str7);
                                            Map map22222222222222222222222222222222 = h0;
                                            if (j) {
                                            }
                                            str5 = cVar2.a;
                                            if (str5 != null) {
                                            }
                                            f0Var.a = Integer.toString(i10);
                                            f0Var.k = str7;
                                            f0Var.f9678l = i11;
                                            f0Var.f9671c = cVar2.W;
                                            f0Var.f9672d = i2622222222222222222222222222222222;
                                            f0Var.f9679m = singletonList;
                                            f0Var.f9676h = str3;
                                            f0Var.f9680n = cVar2.f19735l;
                                            Format format22222222222222222222222222222222 = new Format(f0Var);
                                            v y522222222222222222222222222222222 = lVar.y(cVar2.f19728c, i12);
                                            cVar2.X = y522222222222222222222222222222222;
                                            y522222222222222222222222222222222.e(format22222222222222222222222222222222);
                                            sparseArray.put(cVar2.f19728c, cVar2);
                                            dVar5 = dVar5;
                                            break;
                                        case 29:
                                            lVar = lVar2;
                                            str7 = "video/mpeg2";
                                            i10 = i25;
                                            w5 = -1;
                                            i11 = -1;
                                            singletonList = null;
                                            str3 = null;
                                            if (cVar2.N != null) {
                                            }
                                            int i26222222222222222222222222222222222 = (cVar2.V ? 1 : 0) | (cVar2.U ? 2 : 0);
                                            f0Var = new f0();
                                            j = o.j(str7);
                                            Map map222222222222222222222222222222222 = h0;
                                            if (j) {
                                            }
                                            str5 = cVar2.a;
                                            if (str5 != null) {
                                            }
                                            f0Var.a = Integer.toString(i10);
                                            f0Var.k = str7;
                                            f0Var.f9678l = i11;
                                            f0Var.f9671c = cVar2.W;
                                            f0Var.f9672d = i26222222222222222222222222222222222;
                                            f0Var.f9679m = singletonList;
                                            f0Var.f9676h = str3;
                                            f0Var.f9680n = cVar2.f19735l;
                                            Format format222222222222222222222222222222222 = new Format(f0Var);
                                            v y5222222222222222222222222222222222 = lVar.y(cVar2.f19728c, i12);
                                            cVar2.X = y5222222222222222222222222222222222;
                                            y5222222222222222222222222222222222.e(format222222222222222222222222222222222);
                                            sparseArray.put(cVar2.f19728c, cVar2);
                                            dVar5 = dVar5;
                                            break;
                                        case 30:
                                            lVar = lVar2;
                                            str7 = "audio/eac3";
                                            i10 = i25;
                                            w5 = -1;
                                            i11 = -1;
                                            singletonList = null;
                                            str3 = null;
                                            if (cVar2.N != null) {
                                            }
                                            int i262222222222222222222222222222222222 = (cVar2.V ? 1 : 0) | (cVar2.U ? 2 : 0);
                                            f0Var = new f0();
                                            j = o.j(str7);
                                            Map map2222222222222222222222222222222222 = h0;
                                            if (j) {
                                            }
                                            str5 = cVar2.a;
                                            if (str5 != null) {
                                            }
                                            f0Var.a = Integer.toString(i10);
                                            f0Var.k = str7;
                                            f0Var.f9678l = i11;
                                            f0Var.f9671c = cVar2.W;
                                            f0Var.f9672d = i262222222222222222222222222222222222;
                                            f0Var.f9679m = singletonList;
                                            f0Var.f9676h = str3;
                                            f0Var.f9680n = cVar2.f19735l;
                                            Format format2222222222222222222222222222222222 = new Format(f0Var);
                                            v y52222222222222222222222222222222222 = lVar.y(cVar2.f19728c, i12);
                                            cVar2.X = y52222222222222222222222222222222222;
                                            y52222222222222222222222222222222222.e(format2222222222222222222222222222222222);
                                            sparseArray.put(cVar2.f19728c, cVar2);
                                            dVar5 = dVar5;
                                            break;
                                        case 31:
                                            lVar = lVar2;
                                            str7 = "audio/flac";
                                            singletonList = Collections.singletonList(cVar2.a(str6));
                                            i10 = i25;
                                            w5 = -1;
                                            i11 = -1;
                                            str3 = null;
                                            if (cVar2.N != null) {
                                            }
                                            int i2622222222222222222222222222222222222 = (cVar2.V ? 1 : 0) | (cVar2.U ? 2 : 0);
                                            f0Var = new f0();
                                            j = o.j(str7);
                                            Map map22222222222222222222222222222222222 = h0;
                                            if (j) {
                                            }
                                            str5 = cVar2.a;
                                            if (str5 != null) {
                                            }
                                            f0Var.a = Integer.toString(i10);
                                            f0Var.k = str7;
                                            f0Var.f9678l = i11;
                                            f0Var.f9671c = cVar2.W;
                                            f0Var.f9672d = i2622222222222222222222222222222222222;
                                            f0Var.f9679m = singletonList;
                                            f0Var.f9676h = str3;
                                            f0Var.f9680n = cVar2.f19735l;
                                            Format format22222222222222222222222222222222222 = new Format(f0Var);
                                            v y522222222222222222222222222222222222 = lVar.y(cVar2.f19728c, i12);
                                            cVar2.X = y522222222222222222222222222222222222;
                                            y522222222222222222222222222222222222.e(format22222222222222222222222222222222222);
                                            sparseArray.put(cVar2.f19728c, cVar2);
                                            dVar5 = dVar5;
                                            break;
                                        case ' ':
                                            ArrayList arrayList2 = new ArrayList(3);
                                            arrayList2.add(cVar2.a(cVar2.f19727b));
                                            ByteBuffer allocate = ByteBuffer.allocate(8);
                                            ByteOrder byteOrder = ByteOrder.LITTLE_ENDIAN;
                                            lVar = lVar2;
                                            arrayList2.add(allocate.order(byteOrder).putLong(cVar2.R).array());
                                            arrayList2.add(ByteBuffer.allocate(8).order(byteOrder).putLong(cVar2.S).array());
                                            str7 = "audio/opus";
                                            i11 = 5760;
                                            singletonList = arrayList2;
                                            i10 = i25;
                                            w5 = -1;
                                            str3 = null;
                                            if (cVar2.N != null) {
                                            }
                                            int i26222222222222222222222222222222222222 = (cVar2.V ? 1 : 0) | (cVar2.U ? 2 : 0);
                                            f0Var = new f0();
                                            j = o.j(str7);
                                            Map map222222222222222222222222222222222222 = h0;
                                            if (j) {
                                            }
                                            str5 = cVar2.a;
                                            if (str5 != null) {
                                            }
                                            f0Var.a = Integer.toString(i10);
                                            f0Var.k = str7;
                                            f0Var.f9678l = i11;
                                            f0Var.f9671c = cVar2.W;
                                            f0Var.f9672d = i26222222222222222222222222222222222222;
                                            f0Var.f9679m = singletonList;
                                            f0Var.f9676h = str3;
                                            f0Var.f9680n = cVar2.f19735l;
                                            Format format222222222222222222222222222222222222 = new Format(f0Var);
                                            v y5222222222222222222222222222222222222 = lVar.y(cVar2.f19728c, i12);
                                            cVar2.X = y5222222222222222222222222222222222222;
                                            y5222222222222222222222222222222222222.e(format222222222222222222222222222222222222);
                                            sparseArray.put(cVar2.f19728c, cVar2);
                                            dVar5 = dVar5;
                                            break;
                                        default:
                                            throw g1.a("Unrecognized codec identifier.", null);
                                    }
                                default:
                                    dVar5.f19773u = null;
                                    break;
                            }
                        } else {
                            if (i24 == 19899) {
                                int i43 = dVar5.f19775w;
                                if (i43 != -1) {
                                    long j14 = dVar5.f19776x;
                                    if (j14 != -1) {
                                        if (i43 == 475249515) {
                                            dVar5.f19778z = j14;
                                        }
                                    }
                                }
                                throw g1.a("Mandatory element SeekID or SeekPosition not found", null);
                            }
                            if (i24 == 25152) {
                                dVar5.c(i24);
                                c cVar3 = dVar5.f19773u;
                                if (cVar3.f19733h) {
                                    u uVar = cVar3.j;
                                    if (uVar == null) {
                                        throw g1.a("Encrypted Track found but ContentEncKeyID was not found", null);
                                    }
                                    cVar3.f19735l = new i(new nc.h(hc.h.a, null, "video/webm", uVar.f16800b));
                                }
                            } else if (i24 == 28032) {
                                dVar5.c(i24);
                                c cVar4 = dVar5.f19773u;
                                if (cVar4.f19733h && cVar4.f19734i != null) {
                                    throw g1.a("Combining encryption and compression is not supported", null);
                                }
                            } else if (i24 == 357149030) {
                                if (dVar5.f19770r == -9223372036854775807L) {
                                    dVar5.f19770r = 1000000L;
                                }
                                long j15 = dVar5.f19771s;
                                if (j15 != -9223372036854775807L) {
                                    dVar5.f19772t = dVar5.k(j15);
                                }
                            } else if (i24 == 374648427) {
                                if (sparseArray.size() == 0) {
                                    throw g1.a("No valid tracks were found", null);
                                }
                                dVar5.f19756b0.r();
                            } else if (i24 == 475249515) {
                                if (!dVar5.f19774v) {
                                    l lVar3 = dVar5.f19756b0;
                                    a0 a0Var = dVar5.C;
                                    a0 a0Var2 = dVar5.D;
                                    if (dVar5.f19769q == -1 || dVar5.f19772t == -9223372036854775807L || a0Var == null || (i17 = a0Var.f124e) == 0 || a0Var2 == null || a0Var2.f124e != i17) {
                                        nVar = new n(dVar5.f19772t);
                                    } else {
                                        int[] iArr = new int[i17];
                                        long[] jArr = new long[i17];
                                        long[] jArr2 = new long[i17];
                                        long[] jArr3 = new long[i17];
                                        for (int i44 = 0; i44 < i17; i44++) {
                                            jArr3[i44] = a0Var.o(i44);
                                            jArr[i44] = a0Var2.o(i44) + dVar5.f19769q;
                                        }
                                        int i45 = 0;
                                        while (true) {
                                            int i46 = i17 - 1;
                                            if (i45 < i46) {
                                                int i47 = i45 + 1;
                                                iArr[i45] = (int) (jArr[i47] - jArr[i45]);
                                                jArr2[i45] = jArr3[i47] - jArr3[i45];
                                                i45 = i47;
                                            } else {
                                                iArr[i46] = (int) ((dVar5.f19769q + dVar5.f19768p) - jArr[i46]);
                                                long j16 = dVar5.f19772t - jArr3[i46];
                                                jArr2[i46] = j16;
                                                if (j16 <= 0) {
                                                    ke.b.N("MatroskaExtractor", "Discarding last cue point with unexpected duration: " + j16);
                                                    iArr = Arrays.copyOf(iArr, i46);
                                                    jArr = Arrays.copyOf(jArr, i46);
                                                    jArr2 = Arrays.copyOf(jArr2, i46);
                                                    jArr3 = Arrays.copyOf(jArr3, i46);
                                                }
                                                nVar = new qc.f(iArr, jArr, jArr2, jArr3);
                                            }
                                        }
                                    }
                                    lVar3.c(nVar);
                                    dVar5.f19774v = z8;
                                }
                                dVar5.C = null;
                                dVar5.D = null;
                            }
                        }
                    } else if (dVar5.G == 2) {
                        c cVar5 = (c) sparseArray.get(dVar5.M);
                        cVar5.X.getClass();
                        if (dVar5.R > 0 && "A_OPUS".equals(cVar5.f19727b)) {
                            w wVar3 = dVar5.f19766n;
                            byte[] array = ByteBuffer.allocate(8).order(ByteOrder.LITTLE_ENDIAN).putLong(dVar5.R).array();
                            wVar3.getClass();
                            wVar3.D(array, array.length);
                        }
                        int i48 = 0;
                        for (int i49 = 0; i49 < dVar5.K; i49++) {
                            i48 += dVar5.L[i49];
                        }
                        int i50 = 0;
                        while (i50 < dVar5.K) {
                            long j17 = dVar5.H + ((cVar5.f19730e * i50) / 1000);
                            int i51 = dVar5.O;
                            if (i50 == 0 && !dVar5.Q) {
                                i51 |= 1;
                            }
                            int i52 = dVar5.L[i50];
                            int i53 = i48 - i52;
                            dVar5.d(cVar5, j17, i51, i52, i53);
                            i50++;
                            i48 = i53;
                        }
                        z7 = false;
                        dVar5.G = 0;
                        kVar2 = kVar;
                        z6 = z7;
                    }
                    z7 = false;
                    kVar2 = kVar;
                    z6 = z7;
                }
            }
        }
        d dVar6 = dVar;
        if (z10) {
            return 0;
        }
        int i54 = 0;
        while (true) {
            SparseArray sparseArray2 = dVar6.f19757c;
            if (i54 >= sparseArray2.size()) {
                return -1;
            }
            c cVar6 = (c) sparseArray2.valueAt(i54);
            cVar6.X.getClass();
            qc.w wVar4 = cVar6.T;
            if (wVar4 != null) {
                wVar4.a(cVar6.X, cVar6.j);
            }
            i54++;
        }
    }

    @Override // qc.j
    public final boolean f(k kVar) {
        a0 a0Var = new a0((char) 0, 19);
        w wVar = (w) a0Var.f125i;
        g gVar = (g) kVar;
        long j = gVar.f16772i;
        long j5 = 1024;
        if (j != -1 && j <= 1024) {
            j5 = j;
        }
        int i5 = (int) j5;
        gVar.j(wVar.a, 0, 4, false);
        long v5 = wVar.v();
        a0Var.f124e = 4;
        while (true) {
            if (v5 != 440786851) {
                int i6 = a0Var.f124e + 1;
                a0Var.f124e = i6;
                if (i6 == i5) {
                    break;
                }
                gVar.j(wVar.a, 0, 1, false);
                v5 = ((v5 << 8) & (-256)) | (wVar.a[0] & 255);
            } else {
                long z5 = a0Var.z(gVar);
                long j7 = a0Var.f124e;
                if (z5 != Long.MIN_VALUE && (j == -1 || j7 + z5 < j)) {
                    while (true) {
                        long j10 = a0Var.f124e;
                        long j11 = j7 + z5;
                        if (j10 < j11) {
                            if (a0Var.z(gVar) != Long.MIN_VALUE) {
                                long z6 = a0Var.z(gVar);
                                if (z6 < 0 || z6 > 2147483647L) {
                                    break;
                                }
                                if (z6 != 0) {
                                    int i10 = (int) z6;
                                    gVar.b(i10, false);
                                    a0Var.f124e += i10;
                                }
                            } else {
                                break;
                            }
                        } else if (j10 == j11) {
                            return true;
                        }
                    }
                }
            }
        }
        return false;
    }

    @Override // qc.j
    public final void g(long j, long j5) {
        this.B = -9223372036854775807L;
        this.G = 0;
        b bVar = this.a;
        bVar.f19724e = 0;
        bVar.f19721b.clear();
        e eVar = bVar.f19722c;
        eVar.f19780b = 0;
        eVar.f19781c = 0;
        e eVar2 = this.f19755b;
        eVar2.f19780b = 0;
        eVar2.f19781c = 0;
        j();
        int i5 = 0;
        while (true) {
            SparseArray sparseArray = this.f19757c;
            if (i5 >= sparseArray.size()) {
                return;
            }
            qc.w wVar = ((c) sparseArray.valueAt(i5)).T;
            if (wVar != null) {
                wVar.f16803b = false;
                wVar.f16804c = 0;
            }
            i5++;
        }
    }

    public final void i(k kVar, int i5) {
        w wVar = this.f19761g;
        if (wVar.f13364c >= i5) {
            return;
        }
        byte[] bArr = wVar.a;
        if (bArr.length < i5) {
            wVar.b(Math.max(bArr.length * 2, i5));
        }
        byte[] bArr2 = wVar.a;
        int i6 = wVar.f13364c;
        kVar.readFully(bArr2, i6, i5 - i6);
        wVar.E(i5);
    }

    public final void j() {
        this.S = 0;
        this.T = 0;
        this.U = 0;
        this.V = false;
        this.W = false;
        this.X = false;
        this.Y = 0;
        this.Z = (byte) 0;
        this.a0 = false;
        this.j.C(0);
    }

    public final long k(long j) {
        long j5 = this.f19770r;
        if (j5 != -9223372036854775807L) {
            return d0.P(j, j5, 1000L);
        }
        throw g1.a("Can't scale timecode prior to timecodeScale being set.", null);
    }

    public final int l(k kVar, c cVar, int i5, boolean z5) {
        int c6;
        int c8;
        int i6;
        if ("S_TEXT/UTF8".equals(cVar.f19727b)) {
            m(kVar, f19750c0, i5);
            int i10 = this.T;
            j();
            return i10;
        }
        if ("S_TEXT/ASS".equals(cVar.f19727b)) {
            m(kVar, f19752e0, i5);
            int i11 = this.T;
            j();
            return i11;
        }
        if ("S_TEXT/WEBVTT".equals(cVar.f19727b)) {
            m(kVar, f19753f0, i5);
            int i12 = this.T;
            j();
            return i12;
        }
        v vVar = cVar.X;
        boolean z6 = this.V;
        w wVar = this.j;
        if (!z6) {
            boolean z7 = cVar.f19733h;
            w wVar2 = this.f19761g;
            if (z7) {
                this.O &= -1073741825;
                boolean z8 = this.W;
                int i13 = IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                if (!z8) {
                    kVar.readFully(wVar2.a, 0, 1);
                    this.S++;
                    byte b10 = wVar2.a[0];
                    if ((b10 & ByteCompanionObject.MIN_VALUE) == 128) {
                        throw g1.a("Extension bit is set in signal byte", null);
                    }
                    this.Z = b10;
                    this.W = true;
                }
                byte b11 = this.Z;
                if ((b11 & 1) == 1) {
                    boolean z10 = (b11 & 2) == 2;
                    this.O |= 1073741824;
                    if (!this.a0) {
                        w wVar3 = this.f19764l;
                        kVar.readFully(wVar3.a, 0, 8);
                        this.S += 8;
                        this.a0 = true;
                        byte[] bArr = wVar2.a;
                        if (!z10) {
                            i13 = 0;
                        }
                        bArr[0] = (byte) (i13 | 8);
                        wVar2.F(0);
                        vVar.d(1, wVar2);
                        this.T++;
                        wVar3.F(0);
                        vVar.d(8, wVar3);
                        this.T += 8;
                    }
                    if (z10) {
                        if (!this.X) {
                            kVar.readFully(wVar2.a, 0, 1);
                            this.S++;
                            wVar2.F(0);
                            this.Y = wVar2.u();
                            this.X = true;
                        }
                        int i14 = this.Y * 4;
                        wVar2.C(i14);
                        kVar.readFully(wVar2.a, 0, i14);
                        this.S += i14;
                        short s2 = (short) ((this.Y / 2) + 1);
                        int i15 = (s2 * 6) + 2;
                        ByteBuffer byteBuffer = this.f19767o;
                        if (byteBuffer == null || byteBuffer.capacity() < i15) {
                            this.f19767o = ByteBuffer.allocate(i15);
                        }
                        this.f19767o.position(0);
                        this.f19767o.putShort(s2);
                        int i16 = 0;
                        int i17 = 0;
                        while (true) {
                            i6 = this.Y;
                            if (i16 >= i6) {
                                break;
                            }
                            int x5 = wVar2.x();
                            if (i16 % 2 == 0) {
                                this.f19767o.putShort((short) (x5 - i17));
                            } else {
                                this.f19767o.putInt(x5 - i17);
                            }
                            i16++;
                            i17 = x5;
                        }
                        int i18 = (i5 - this.S) - i17;
                        if (i6 % 2 == 1) {
                            this.f19767o.putInt(i18);
                        } else {
                            this.f19767o.putShort((short) i18);
                            this.f19767o.putInt(0);
                        }
                        byte[] array = this.f19767o.array();
                        w wVar4 = this.f19765m;
                        wVar4.D(array, i15);
                        vVar.d(i15, wVar4);
                        this.T += i15;
                    }
                }
            } else {
                byte[] bArr2 = cVar.f19734i;
                if (bArr2 != null) {
                    wVar.D(bArr2, bArr2.length);
                }
            }
            if ("A_OPUS".equals(cVar.f19727b) ? z5 : cVar.f19731f > 0) {
                this.O |= 268435456;
                this.f19766n.C(0);
                int i19 = (wVar.f13364c + i5) - this.S;
                wVar2.C(4);
                byte[] bArr3 = wVar2.a;
                bArr3[0] = (byte) ((i19 >> 24) & 255);
                bArr3[1] = (byte) ((i19 >> 16) & 255);
                bArr3[2] = (byte) ((i19 >> 8) & 255);
                bArr3[3] = (byte) (i19 & 255);
                vVar.d(4, wVar2);
                this.T += 4;
            }
            this.V = true;
        }
        int i20 = i5 + wVar.f13364c;
        if (!"V_MPEG4/ISO/AVC".equals(cVar.f19727b) && !"V_MPEGH/ISO/HEVC".equals(cVar.f19727b)) {
            if (cVar.T != null) {
                ke.b.k(wVar.f13364c == 0);
                cVar.T.c(kVar);
            }
            while (true) {
                int i21 = this.S;
                if (i21 >= i20) {
                    break;
                }
                int i22 = i20 - i21;
                int a = wVar.a();
                if (a > 0) {
                    c8 = Math.min(i22, a);
                    vVar.d(c8, wVar);
                } else {
                    c8 = vVar.c(kVar, i22, false);
                }
                this.S += c8;
                this.T += c8;
            }
        } else {
            w wVar5 = this.f19760f;
            byte[] bArr4 = wVar5.a;
            bArr4[0] = 0;
            bArr4[1] = 0;
            bArr4[2] = 0;
            int i23 = cVar.Y;
            int i24 = 4 - i23;
            while (this.S < i20) {
                int i25 = this.U;
                if (i25 == 0) {
                    int min = Math.min(i23, wVar.a());
                    kVar.readFully(bArr4, i24 + min, i23 - min);
                    if (min > 0) {
                        wVar.e(bArr4, i24, min);
                    }
                    this.S += i23;
                    wVar5.F(0);
                    this.U = wVar5.x();
                    w wVar6 = this.f19759e;
                    wVar6.F(0);
                    vVar.d(4, wVar6);
                    this.T += 4;
                } else {
                    int a10 = wVar.a();
                    if (a10 > 0) {
                        c6 = Math.min(i25, a10);
                        vVar.d(c6, wVar);
                    } else {
                        c6 = vVar.c(kVar, i25, false);
                    }
                    this.S += c6;
                    this.T += c6;
                    this.U -= c6;
                }
            }
        }
        if ("A_VORBIS".equals(cVar.f19727b)) {
            w wVar7 = this.f19762h;
            wVar7.F(0);
            vVar.d(4, wVar7);
            this.T += 4;
        }
        int i26 = this.T;
        j();
        return i26;
    }

    public final void m(k kVar, byte[] bArr, int i5) {
        int length = bArr.length + i5;
        w wVar = this.k;
        byte[] bArr2 = wVar.a;
        if (bArr2.length < length) {
            byte[] copyOf = Arrays.copyOf(bArr, length + i5);
            wVar.getClass();
            wVar.D(copyOf, copyOf.length);
        } else {
            System.arraycopy(bArr, 0, bArr2, 0, bArr.length);
        }
        kVar.readFully(wVar.a, bArr.length, i5);
        wVar.F(0);
        wVar.E(length);
    }

    @Override // qc.j
    public final void release() {
    }
}
