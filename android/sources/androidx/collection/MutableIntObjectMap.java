package androidx.collection;

import kotlin.collections.u;
import s.g;
import s.q;

/* loaded from: classes.dex */
public final class MutableIntObjectMap extends g {

    /* renamed from: f, reason: collision with root package name */
    public int f1205f;

    public final int c(int i5) {
        int i6 = this.f17679d;
        int i10 = i5 & i6;
        int i11 = 0;
        while (true) {
            long[] jArr = this.a;
            int i12 = i10 >> 3;
            int i13 = (i10 & 7) << 3;
            long j = ((jArr[i12 + 1] << (64 - i13)) & ((-i13) >> 63)) | (jArr[i12] >>> i13);
            long j5 = j & ((~j) << 7) & (-9187201950435737472L);
            if (j5 != 0) {
                return (i10 + (Long.numberOfTrailingZeros(j5) >> 3)) & i6;
            }
            i11 += 8;
            i10 = (i10 + i11) & i6;
        }
    }

    public final void d(int i5) {
        long[] jArr;
        int max = i5 > 0 ? Math.max(7, q.b(i5)) : 0;
        this.f17679d = max;
        if (max == 0) {
            jArr = q.a;
        } else {
            jArr = new long[((max + 15) & (-8)) >> 3];
            u.l(jArr, -9187201950435737472L);
        }
        this.a = jArr;
        int i6 = max >> 3;
        long j = 255 << ((max & 7) << 3);
        jArr[i6] = (jArr[i6] & (~j)) | j;
        this.f1205f = q.a(this.f17679d) - this.f17680e;
        this.f17677b = new int[max];
        this.f17678c = new Object[max];
    }

    /* JADX WARN: Code restructure failed: missing block: B:17:0x0061, code lost:
    
        if (((r4 & ((~r4) << 6)) & (-9187201950435737472L)) == 0) goto L18;
     */
    /* JADX WARN: Code restructure failed: missing block: B:20:0x0063, code lost:
    
        r10 = -1;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object e(int i5) {
        int i6;
        int hashCode = Integer.hashCode(i5) * (-862048943);
        int i10 = hashCode ^ (hashCode << 16);
        int i11 = i10 & 127;
        int i12 = this.f17679d;
        int i13 = (i10 >>> 7) & i12;
        int i14 = 0;
        loop0: while (true) {
            long[] jArr = this.a;
            int i15 = i13 >> 3;
            int i16 = (i13 & 7) << 3;
            long j = ((jArr[i15 + 1] << (64 - i16)) & ((-i16) >> 63)) | (jArr[i15] >>> i16);
            long j5 = (i11 * 72340172838076673L) ^ j;
            long j7 = (~j5) & (j5 - 72340172838076673L) & (-9187201950435737472L);
            while (true) {
                if (j7 == 0) {
                    break;
                }
                i6 = ((Long.numberOfTrailingZeros(j7) >> 3) + i13) & i12;
                if (this.f17677b[i6] == i5) {
                    break loop0;
                }
                j7 &= j7 - 1;
            }
            i14 += 8;
            i13 = (i13 + i14) & i12;
        }
        if (i6 < 0) {
            return null;
        }
        this.f17680e--;
        long[] jArr2 = this.a;
        int i17 = this.f17679d;
        int i18 = i6 >> 3;
        int i19 = (i6 & 7) << 3;
        long j10 = (jArr2[i18] & (~(255 << i19))) | (254 << i19);
        jArr2[i18] = j10;
        jArr2[(((i6 - 7) & i17) + (i17 & 7)) >> 3] = j10;
        Object[] objArr = this.f17678c;
        Object obj = objArr[i6];
        objArr[i6] = null;
        return obj;
    }

    /* JADX WARN: Code restructure failed: missing block: B:13:0x006e, code lost:
    
        r21 = r3;
        r3 = 6;
     */
    /* JADX WARN: Code restructure failed: missing block: B:14:0x007a, code lost:
    
        if (((r7 & ((~r7) << 6)) & (-9187201950435737472L)) == 0) goto L63;
     */
    /* JADX WARN: Code restructure failed: missing block: B:17:0x007c, code lost:
    
        r2 = c(r4);
        r11 = 255;
     */
    /* JADX WARN: Code restructure failed: missing block: B:18:0x0084, code lost:
    
        if (r38.f1205f != 0) goto L16;
     */
    /* JADX WARN: Code restructure failed: missing block: B:20:0x0098, code lost:
    
        if (((r38.a[r2 >> 3] >> ((r2 & 7) << 3)) & 255) != 254) goto L17;
     */
    /* JADX WARN: Code restructure failed: missing block: B:21:0x00a6, code lost:
    
        r2 = r38.f17679d;
     */
    /* JADX WARN: Code restructure failed: missing block: B:22:0x00a8, code lost:
    
        if (r2 <= 8) goto L42;
     */
    /* JADX WARN: Code restructure failed: missing block: B:23:0x00aa, code lost:
    
        r19 = 128;
        r6 = r38.f17680e;
        r5 = fo.f0.f8814e;
        r24 = r9;
        r10 = 8;
     */
    /* JADX WARN: Code restructure failed: missing block: B:24:0x00c7, code lost:
    
        if (java.lang.Long.compare((r6 * 32) ^ Long.MIN_VALUE, (r2 * 25) ^ Long.MIN_VALUE) > 0) goto L41;
     */
    /* JADX WARN: Code restructure failed: missing block: B:25:0x00c9, code lost:
    
        r2 = r38.a;
        r3 = r38.f17679d;
        r5 = r38.f17677b;
        r6 = r38.f17678c;
        r7 = (r3 + 7) >> 3;
        r8 = 0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:26:0x00d6, code lost:
    
        if (r8 >= r7) goto L67;
     */
    /* JADX WARN: Code restructure failed: missing block: B:27:0x00d8, code lost:
    
        r9 = r10;
        r10 = r2[r8] & (-9187201950435737472L);
        r2[r8] = (-72340172838076674L) & ((~r10) + (r10 >>> 7));
        r8 = r8 + 1;
        r10 = r9;
        r14 = r14;
        r11 = r11;
     */
    /* JADX WARN: Code restructure failed: missing block: B:29:0x00f5, code lost:
    
        r9 = r10;
        r30 = r11;
        r12 = r14;
        kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, "<this>");
        r8 = r2.length;
        r10 = r8 - 1;
        r8 = r8 - 2;
        r2[r8] = (r2[r8] & 72057594037927935L) | (-72057594037927936L);
        r2[r10] = r2[0];
        r8 = 0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:30:0x0119, code lost:
    
        if (r8 == r3) goto L68;
     */
    /* JADX WARN: Code restructure failed: missing block: B:31:0x011b, code lost:
    
        r10 = r8 >> 3;
        r11 = (r8 & 7) << 3;
        r13 = (r2[r10] >> r11) & r30;
     */
    /* JADX WARN: Code restructure failed: missing block: B:32:0x0128, code lost:
    
        if (r13 != 128) goto L29;
     */
    /* JADX WARN: Code restructure failed: missing block: B:34:0x012f, code lost:
    
        if (r13 == 254) goto L69;
     */
    /* JADX WARN: Code restructure failed: missing block: B:36:0x0132, code lost:
    
        r13 = java.lang.Integer.hashCode(r5[r8]) * r21;
        r14 = (r13 ^ (r13 << 16)) >>> 7;
        r28 = c(r14);
        r14 = r14 & r3;
        r32 = r9;
     */
    /* JADX WARN: Code restructure failed: missing block: B:37:0x0151, code lost:
    
        if ((((r28 - r14) & r3) / 8) != (((r8 - r14) & r3) / 8)) goto L70;
     */
    /* JADX WARN: Code restructure failed: missing block: B:39:0x0179, code lost:
    
        r9 = r12;
        r12 = r28 >> 3;
        r33 = r2[r12];
        r14 = (r28 & 7) << 3;
     */
    /* JADX WARN: Code restructure failed: missing block: B:40:0x0188, code lost:
    
        if (((r33 >> r14) & r30) != 128) goto L38;
     */
    /* JADX WARN: Code restructure failed: missing block: B:41:0x018a, code lost:
    
        r29 = r9;
        r36 = r5;
        r37 = r6;
        r2[r12] = (r33 & (~(r30 << r14))) | ((r13 & 127) << r14);
        r2[r10] = (r2[r10] & (~(r30 << r11))) | (128 << r11);
        r36[r28] = r36[r8];
        r36[r8] = 0;
        r37[r28] = r37[r8];
        r37[r8] = null;
     */
    /* JADX WARN: Code restructure failed: missing block: B:42:0x01db, code lost:
    
        kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, "<this>");
        r2[r2.length - 1] = (r2[0] & 72057594037927935L) | Long.MIN_VALUE;
        r8 = r8 + 1;
        r12 = r29;
        r9 = r32;
        r5 = r36;
        r6 = r37;
     */
    /* JADX WARN: Code restructure failed: missing block: B:45:0x01b7, code lost:
    
        r36 = r5;
        r37 = r6;
        r29 = r9;
        r2[r12] = ((r13 & 127) << r14) | (r33 & (~(r30 << r14)));
        r5 = r36[r28];
        r36[r28] = r36[r8];
        r36[r8] = r5;
        r5 = r37[r28];
        r37[r28] = r37[r8];
        r37[r8] = r5;
        r8 = r8 - 1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:47:0x0153, code lost:
    
        r9 = r12;
        r2[r10] = (r2[r10] & (~(r30 << r11))) | ((r13 & 127) << r11);
        kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, "<this>");
        r2[r2.length - r9] = (r2[0] & 72057594037927935L) | Long.MIN_VALUE;
        r8 = r8 + 1;
        r12 = r9;
        r9 = r32;
     */
    /* JADX WARN: Code restructure failed: missing block: B:50:0x012a, code lost:
    
        r8 = r8 + 1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:54:0x01f5, code lost:
    
        r29 = r12;
        r38.f1205f = s.q.a(r38.f17679d) - r38.f17680e;
     */
    /* JADX WARN: Code restructure failed: missing block: B:55:0x0284, code lost:
    
        r13 = c(r4);
     */
    /* JADX WARN: Code restructure failed: missing block: B:56:0x028b, code lost:
    
        r38.f17680e++;
        r1 = r38.f1205f;
        r2 = r38.a;
        r3 = r13 >> 3;
        r4 = r2[r3];
        r6 = (r13 & 7) << 3;
     */
    /* JADX WARN: Code restructure failed: missing block: B:57:0x02a3, code lost:
    
        if (((r4 >> r6) & r30) != r19) goto L59;
     */
    /* JADX WARN: Code restructure failed: missing block: B:58:0x02a5, code lost:
    
        r7 = r29;
     */
    /* JADX WARN: Code restructure failed: missing block: B:59:0x02a9, code lost:
    
        r38.f1205f = r1 - r7;
        r1 = r38.f17679d;
        r4 = (r4 & (~(r30 << r6))) | (r24 << r6);
        r2[r3] = r4;
        r2[(((r13 - 7) & r1) + (r1 & 7)) >> 3] = r4;
     */
    /* JADX WARN: Code restructure failed: missing block: B:60:0x02a8, code lost:
    
        r7 = 0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:61:0x0204, code lost:
    
        r30 = 255;
        r29 = 1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:62:0x0210, code lost:
    
        r2 = r38.f17679d;
        r5 = s.q.a;
     */
    /* JADX WARN: Code restructure failed: missing block: B:63:0x0214, code lost:
    
        if (r2 != 0) goto L46;
     */
    /* JADX WARN: Code restructure failed: missing block: B:64:0x0217, code lost:
    
        r3 = (r2 * 2) + 1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:65:0x021b, code lost:
    
        r5 = r38.a;
        r6 = r38.f17677b;
        r7 = r38.f17678c;
        d(r3);
        r3 = r38.a;
        r8 = r38.f17677b;
        r9 = r38.f17678c;
        r10 = r38.f17679d;
        r11 = 0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:66:0x022d, code lost:
    
        if (r11 >= r2) goto L78;
     */
    /* JADX WARN: Code restructure failed: missing block: B:68:0x023c, code lost:
    
        if (((r5[r11 >> 3] >> ((r11 & 7) << 3)) & 255) >= r19) goto L52;
     */
    /* JADX WARN: Code restructure failed: missing block: B:69:0x023e, code lost:
    
        r12 = r6[r11];
        r13 = java.lang.Integer.hashCode(r12) * r21;
        r13 = r13 ^ (r13 << 16);
        r14 = c(r13 >>> 7);
        r17 = r2;
        r1 = r13 & 127;
        r13 = r14 >> 3;
        r18 = (r14 & 7) << 3;
        r1 = (r3[r13] & (~(255 << r18))) | (r1 << r18);
        r3[r13] = r1;
        r3[(((r14 - 7) & r10) + (r10 & 7)) >> 3] = r1;
        r8[r14] = r12;
        r9[r14] = r7[r11];
     */
    /* JADX WARN: Code restructure failed: missing block: B:71:0x027d, code lost:
    
        r11 = r11 + 1;
        r2 = r17;
     */
    /* JADX WARN: Code restructure failed: missing block: B:72:0x027b, code lost:
    
        r17 = r2;
     */
    /* JADX WARN: Code restructure failed: missing block: B:75:0x020b, code lost:
    
        r24 = r9;
        r19 = 128;
     */
    /* JADX WARN: Code restructure failed: missing block: B:76:0x009a, code lost:
    
        r24 = r9;
        r30 = 255;
        r29 = 1;
        r19 = 128;
     */
    /* JADX WARN: Code restructure failed: missing block: B:77:0x028a, code lost:
    
        r13 = r2;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void f(int i5, Object obj) {
        int i6;
        int i10;
        int i11 = i5;
        int i12 = -862048943;
        int hashCode = Integer.hashCode(i11) * (-862048943);
        int i13 = hashCode ^ (hashCode << 16);
        int i14 = i13 >>> 7;
        int i15 = i13 & 127;
        int i16 = this.f17679d;
        int i17 = i14 & i16;
        int i18 = 0;
        loop0: while (true) {
            long[] jArr = this.a;
            int i19 = i17 >> 3;
            int i20 = (i17 & 7) << 3;
            int i21 = 1;
            int i22 = i18;
            long j = (((-i20) >> 63) & (jArr[i19 + 1] << (64 - i20))) | (jArr[i19] >>> i20);
            long j5 = i15;
            long j7 = j ^ (j5 * 72340172838076673L);
            long j10 = (j7 - 72340172838076673L) & (~j7) & (-9187201950435737472L);
            while (true) {
                if (j10 == 0) {
                    break;
                }
                i10 = ((Long.numberOfTrailingZeros(j10) >> 3) + i17) & i16;
                int i23 = i12;
                if (this.f17677b[i10] == i11) {
                    break loop0;
                }
                j10 &= j10 - 1;
                i12 = i23;
            }
            i18 = i22 + 8;
            i17 = (i17 + i18) & i16;
            i11 = i5;
            i12 = i6;
        }
        this.f17677b[i10] = i5;
        this.f17678c[i10] = obj;
    }
}
