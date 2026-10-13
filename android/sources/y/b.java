package y;

import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import s.o;
import s.s;

/* loaded from: classes.dex */
public abstract class b extends c {

    /* renamed from: h, reason: collision with root package name */
    public static final int[] f20564h = new int[0];

    /* renamed from: d, reason: collision with root package name */
    public final Function1 f20565d;

    /* renamed from: e, reason: collision with root package name */
    public final Function1 f20566e;

    /* renamed from: f, reason: collision with root package name */
    public int f20567f;

    /* renamed from: g, reason: collision with root package name */
    public o f20568g;

    public b(long j, Function1 function1, Function1 function12) {
        super(j, e.f20577w);
        this.f20565d = function1;
        this.f20566e = function12;
    }

    @Override // y.c
    public boolean d() {
        return false;
    }

    @Override // y.c
    public int f() {
        return this.f20567f;
    }

    @Override // y.c
    public Function1 g() {
        return this.f20566e;
    }

    /* JADX WARN: Code restructure failed: missing block: B:18:0x008f, code lost:
    
        r21 = r6;
     */
    /* JADX WARN: Code restructure failed: missing block: B:19:0x009a, code lost:
    
        if (((r2 & ((~r2) << r17)) & (-9187201950435737472L)) == 0) goto L77;
     */
    /* JADX WARN: Code restructure failed: missing block: B:22:0x009c, code lost:
    
        r2 = r1.a(r7);
        r8 = 255;
     */
    /* JADX WARN: Code restructure failed: missing block: B:23:0x00a4, code lost:
    
        if (r1.f17687e != 0) goto L23;
     */
    /* JADX WARN: Code restructure failed: missing block: B:25:0x00b8, code lost:
    
        if (((r1.a[r2 >> 3] >> ((r2 & 7) << 3)) & 255) != 254) goto L24;
     */
    /* JADX WARN: Code restructure failed: missing block: B:26:0x00c4, code lost:
    
        r2 = r1.f17692c;
     */
    /* JADX WARN: Code restructure failed: missing block: B:27:0x00c6, code lost:
    
        if (r2 <= 8) goto L54;
     */
    /* JADX WARN: Code restructure failed: missing block: B:28:0x00c8, code lost:
    
        r3 = r1.f17693d;
        r19 = fo.f0.f8814e;
        r19 = 128;
     */
    /* JADX WARN: Code restructure failed: missing block: B:29:0x00e4, code lost:
    
        if (java.lang.Long.compare((r3 * 32) ^ Long.MIN_VALUE, (r2 * 25) ^ Long.MIN_VALUE) > 0) goto L53;
     */
    /* JADX WARN: Code restructure failed: missing block: B:30:0x00e6, code lost:
    
        r2 = r1.a;
        r3 = r1.f17692c;
        r4 = r1.f17691b;
        r5 = (r3 + 7) >> 3;
        r6 = 0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:31:0x00f1, code lost:
    
        if (r6 >= r5) goto L81;
     */
    /* JADX WARN: Code restructure failed: missing block: B:32:0x00f3, code lost:
    
        r28 = r8;
        r8 = r2[r6] & (-9187201950435737472L);
        r2[r6] = (-72340172838076674L) & ((~r8) + (r8 >>> 7));
        r6 = r6 + 1;
        r11 = r11;
        r8 = r28;
     */
    /* JADX WARN: Code restructure failed: missing block: B:34:0x010e, code lost:
    
        r28 = r8;
        r26 = r11;
        r12 = 7;
        kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, "<this>");
        r6 = r2.length;
        r8 = r6 - 1;
        r6 = r6 - 2;
        r13 = 72057594037927935L;
        r2[r6] = (r2[r6] & 72057594037927935L) | (-72057594037927936L);
        r2[r8] = r2[0];
        r6 = 0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:35:0x0130, code lost:
    
        if (r6 == r3) goto L82;
     */
    /* JADX WARN: Code restructure failed: missing block: B:36:0x0132, code lost:
    
        r8 = r6 >> 3;
        r11 = (r6 & 7) << 3;
        r9 = (r2[r8] >> r11) & r28;
     */
    /* JADX WARN: Code restructure failed: missing block: B:37:0x013f, code lost:
    
        if (r9 != 128) goto L36;
     */
    /* JADX WARN: Code restructure failed: missing block: B:39:0x0146, code lost:
    
        if (r9 == 254) goto L83;
     */
    /* JADX WARN: Code restructure failed: missing block: B:41:0x0149, code lost:
    
        r9 = r4[r6];
     */
    /* JADX WARN: Code restructure failed: missing block: B:42:0x014b, code lost:
    
        if (r9 == null) goto L42;
     */
    /* JADX WARN: Code restructure failed: missing block: B:43:0x014d, code lost:
    
        r9 = r9.hashCode();
     */
    /* JADX WARN: Code restructure failed: missing block: B:44:0x0153, code lost:
    
        r9 = r9 * r21;
        r10 = (r9 ^ (r9 << 16)) >>> 7;
        r17 = r1.a(r10);
        r10 = r10 & r3;
        r31 = r12;
     */
    /* JADX WARN: Code restructure failed: missing block: B:45:0x016c, code lost:
    
        if ((((r17 - r10) & r3) / 8) != (((r6 - r10) & r3) / 8)) goto L47;
     */
    /* JADX WARN: Code restructure failed: missing block: B:46:0x016e, code lost:
    
        r34 = r13;
        r2[r8] = ((r9 & 127) << r11) | (r2[r8] & (~(r28 << r11)));
        kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, "<this>");
        r2[r2.length - 1] = (r2[0] & r34) | Long.MIN_VALUE;
        r6 = r6 + 1;
        r12 = r31;
     */
    /* JADX WARN: Code restructure failed: missing block: B:47:0x0190, code lost:
    
        r13 = r34;
     */
    /* JADX WARN: Code restructure failed: missing block: B:50:0x0193, code lost:
    
        r34 = r13;
        r10 = r17 >> 3;
        r12 = r2[r10];
        r14 = (r17 & 7) << 3;
     */
    /* JADX WARN: Code restructure failed: missing block: B:51:0x01a3, code lost:
    
        if (((r12 >> r14) & r28) != 128) goto L50;
     */
    /* JADX WARN: Code restructure failed: missing block: B:52:0x01a5, code lost:
    
        r30 = r3;
        r32 = r4;
        r2[r10] = ((~(r28 << r14)) & r12) | ((r9 & 127) << r14);
        r2[r8] = (r2[r8] & (~(r28 << r11))) | (128 << r11);
        r32[r17] = r32[r6];
        r32[r6] = null;
     */
    /* JADX WARN: Code restructure failed: missing block: B:53:0x01e3, code lost:
    
        kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, "<this>");
        r2[r2.length - 1] = (r2[0] & r34) | Long.MIN_VALUE;
        r6 = r6 + 1;
        r3 = r30;
        r12 = r31;
        r4 = r32;
     */
    /* JADX WARN: Code restructure failed: missing block: B:54:0x01ca, code lost:
    
        r30 = r3;
        r32 = r4;
        r2[r10] = ((r9 & 127) << r14) | ((~(r28 << r14)) & r12);
        r3 = r32[r17];
        r32[r17] = r32[r6];
        r32[r6] = r3;
        r6 = r6 - 1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:55:0x0152, code lost:
    
        r9 = 0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:57:0x0141, code lost:
    
        r6 = r6 + 1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:61:0x01fa, code lost:
    
        r1.f17687e = s.q.a(r1.f17692c) - r1.f17693d;
     */
    /* JADX WARN: Code restructure failed: missing block: B:62:0x0285, code lost:
    
        r2 = r1.a(r7);
     */
    /* JADX WARN: Code restructure failed: missing block: B:63:0x0289, code lost:
    
        r18 = r2;
        r1.f17693d++;
        r2 = r1.f17687e;
        r3 = r1.a;
        r4 = r18 >> 3;
        r5 = r3[r4];
        r7 = (r18 & 7) << 3;
     */
    /* JADX WARN: Code restructure failed: missing block: B:64:0x02a3, code lost:
    
        if (((r5 >> r7) & r28) != r19) goto L74;
     */
    /* JADX WARN: Code restructure failed: missing block: B:65:0x02a5, code lost:
    
        r15 = 1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:66:0x02a7, code lost:
    
        r1.f17687e = r2 - r15;
        r2 = r1.f17692c;
        r5 = (r5 & (~(r28 << r7))) | (r26 << r7);
        r3[r4] = r5;
        r3[(((r18 - 7) & r2) + (r2 & 7)) >> 3] = r5;
     */
    /* JADX WARN: Code restructure failed: missing block: B:67:0x0209, code lost:
    
        r28 = 255;
        r26 = r11;
     */
    /* JADX WARN: Code restructure failed: missing block: B:68:0x0213, code lost:
    
        r2 = r1.f17692c;
        r3 = s.q.a;
     */
    /* JADX WARN: Code restructure failed: missing block: B:69:0x0217, code lost:
    
        if (r2 != 0) goto L58;
     */
    /* JADX WARN: Code restructure failed: missing block: B:70:0x0219, code lost:
    
        r3 = r17;
     */
    /* JADX WARN: Code restructure failed: missing block: B:71:0x0220, code lost:
    
        r4 = r1.a;
        r5 = r1.f17691b;
        r1.b(r3);
        r3 = r1.a;
        r6 = r1.f17691b;
        r8 = r1.f17692c;
        r9 = 0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:72:0x022e, code lost:
    
        if (r9 >= r2) goto L89;
     */
    /* JADX WARN: Code restructure failed: missing block: B:74:0x023d, code lost:
    
        if (((r4[r9 >> 3] >> ((r9 & 7) << 3)) & 255) >= r19) goto L68;
     */
    /* JADX WARN: Code restructure failed: missing block: B:75:0x023f, code lost:
    
        r10 = r5[r9];
     */
    /* JADX WARN: Code restructure failed: missing block: B:76:0x0241, code lost:
    
        if (r10 == null) goto L66;
     */
    /* JADX WARN: Code restructure failed: missing block: B:77:0x0243, code lost:
    
        r11 = r10.hashCode();
     */
    /* JADX WARN: Code restructure failed: missing block: B:78:0x0249, code lost:
    
        r11 = r11 * r21;
        r11 = r11 ^ (r11 << 16);
        r12 = r1.a(r11 >>> 7);
        r13 = r11 & 127;
        r11 = r12 >> 3;
        r17 = (r12 & 7) << 3;
        r18 = r2;
        r24 = r3;
        r2 = (r3[r11] & (~(255 << r17))) | (r13 << r17);
        r24[r11] = r2;
        r24[(((r12 - 7) & r8) + (r8 & 7)) >> 3] = r2;
        r6[r12] = r10;
     */
    /* JADX WARN: Code restructure failed: missing block: B:80:0x027e, code lost:
    
        r9 = r9 + 1;
        r2 = r18;
        r3 = r24;
     */
    /* JADX WARN: Code restructure failed: missing block: B:81:0x0248, code lost:
    
        r11 = 0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:82:0x027a, code lost:
    
        r18 = r2;
        r24 = r3;
     */
    /* JADX WARN: Code restructure failed: missing block: B:85:0x021c, code lost:
    
        r3 = (r2 * 2) + 1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:86:0x0210, code lost:
    
        r19 = 128;
     */
    /* JADX WARN: Code restructure failed: missing block: B:87:0x00ba, code lost:
    
        r28 = 255;
        r26 = r11;
        r19 = 128;
     */
    @Override // y.c
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void h(g gVar) {
        int i5;
        int i6;
        int i10;
        o j = j();
        int i11 = 6;
        if (j == null) {
            int i12 = s.a;
            j = new o(6);
            l(j);
        }
        if (gVar != null) {
            j.getClass();
            i5 = gVar.hashCode();
        } else {
            i5 = 0;
        }
        int i13 = -862048943;
        int i14 = i5 * (-862048943);
        int i15 = i14 ^ (i14 << 16);
        int i16 = i15 >>> 7;
        int i17 = i15 & 127;
        int i18 = j.f17692c;
        int i19 = i16 & i18;
        int i20 = 0;
        loop0: while (true) {
            long[] jArr = j.a;
            int i21 = i19 >> 3;
            int i22 = (i19 & 7) << 3;
            int i23 = i11;
            long j5 = (((-i22) >> 63) & (jArr[i21 + 1] << (64 - i22))) | (jArr[i21] >>> i22);
            long j7 = i17;
            int i24 = i17;
            int i25 = 0;
            long j10 = j5 ^ (j7 * 72340172838076673L);
            long j11 = (~j10) & (j10 - 72340172838076673L) & (-9187201950435737472L);
            while (true) {
                if (j11 == 0) {
                    break;
                }
                i10 = (i19 + (Long.numberOfTrailingZeros(j11) >> 3)) & i18;
                int i26 = i13;
                if (Intrinsics.areEqual(j.f17691b[i10], gVar)) {
                    break loop0;
                }
                j11 &= j11 - 1;
                i13 = i26;
            }
            i20 += 8;
            i19 = (i19 + i20) & i18;
            i11 = i23;
            i17 = i24;
            i13 = i6;
        }
        j.f17691b[i10] = gVar;
    }

    @Override // y.c
    public void i(int i5) {
        this.f20567f = i5;
    }

    public o j() {
        return this.f20568g;
    }

    @Override // y.c
    /* renamed from: k, reason: merged with bridge method [inline-methods] */
    public Function1 c() {
        return this.f20565d;
    }

    public void l(o oVar) {
        this.f20568g = oVar;
    }
}
