package s;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public abstract class p {
    public long[] a;

    /* renamed from: b, reason: collision with root package name */
    public Object[] f17688b;

    /* renamed from: c, reason: collision with root package name */
    public Object[] f17689c;

    /* renamed from: d, reason: collision with root package name */
    public int f17690d;

    /* JADX WARN: Code restructure failed: missing block: B:19:0x0069, code lost:
    
        if (((r4 & ((~r4) << 6)) & (-9187201950435737472L)) == 0) goto L22;
     */
    /* JADX WARN: Code restructure failed: missing block: B:22:0x006b, code lost:
    
        r10 = -1;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object a(Object obj) {
        int i5;
        int i6 = 0;
        int hashCode = (obj != null ? obj.hashCode() : 0) * (-862048943);
        int i10 = hashCode ^ (hashCode << 16);
        int i11 = i10 & 127;
        int i12 = this.f17690d;
        int i13 = i10 >>> 7;
        loop0: while (true) {
            int i14 = i13 & i12;
            long[] jArr = this.a;
            int i15 = i14 >> 3;
            int i16 = (i14 & 7) << 3;
            long j = ((jArr[i15 + 1] << (64 - i16)) & ((-i16) >> 63)) | (jArr[i15] >>> i16);
            long j5 = (i11 * 72340172838076673L) ^ j;
            long j7 = (~j5) & (j5 - 72340172838076673L) & (-9187201950435737472L);
            while (true) {
                if (j7 == 0) {
                    break;
                }
                i5 = ((Long.numberOfTrailingZeros(j7) >> 3) + i14) & i12;
                if (Intrinsics.areEqual(this.f17688b[i5], obj)) {
                    break loop0;
                }
                j7 &= j7 - 1;
            }
            i6 += 8;
            i13 = i14 + i6;
        }
        if (i5 >= 0) {
            return this.f17689c[i5];
        }
        return null;
    }

    /* JADX WARN: Code restructure failed: missing block: B:41:0x00db, code lost:
    
        if (((r3 & ((~r3) << 6)) & (-9187201950435737472L)) == 0) goto L40;
     */
    /* JADX WARN: Code restructure failed: missing block: B:44:0x00dd, code lost:
    
        r26 = -1;
     */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r18v3 */
    /* JADX WARN: Type inference failed for: r18v4 */
    /* JADX WARN: Type inference failed for: r18v5, types: [boolean] */
    /* JADX WARN: Type inference failed for: r18v6, types: [boolean] */
    /* JADX WARN: Type inference failed for: r18v7, types: [boolean] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean equals(Object obj) {
        boolean z5;
        Object[] objArr;
        int i5;
        Object[] objArr2;
        long[] jArr;
        boolean z6;
        Object[] objArr3;
        ?? r18;
        long[] jArr2;
        int i6;
        Object[] objArr4;
        int i10;
        int i11;
        boolean z7 = true;
        if (obj == this) {
            return true;
        }
        int i12 = 0;
        if (!(obj instanceof p)) {
            return false;
        }
        p pVar = (p) obj;
        Object[] objArr5 = this.f17688b;
        Object[] objArr6 = this.f17689c;
        long[] jArr3 = this.a;
        int length = jArr3.length - 2;
        if (length < 0) {
            return true;
        }
        int i13 = 0;
        while (true) {
            long j = jArr3[i13];
            if ((((~j) << 7) & j & (-9187201950435737472L)) != -9187201950435737472L) {
                int i14 = 8;
                int i15 = 8 - ((~(i13 - length)) >>> 31);
                int i16 = i12;
                while (i16 < i15) {
                    if ((255 & j) < 128) {
                        int i17 = (i13 << 3) + i16;
                        Object obj2 = objArr5[i17];
                        Object obj3 = objArr6[i17];
                        if (obj3 != null) {
                            z6 = z7;
                            objArr3 = objArr5;
                            r18 = i12;
                            jArr2 = jArr3;
                            i6 = i14;
                            objArr4 = objArr6;
                            if (!Intrinsics.areEqual(obj3, pVar.a(obj2))) {
                                return r18;
                            }
                        } else {
                            if (pVar.a(obj2) != null) {
                                return i12;
                            }
                            if (obj2 != null) {
                                pVar.getClass();
                                i10 = obj2.hashCode();
                            } else {
                                i10 = 0;
                            }
                            int i18 = i10 * (-862048943);
                            int i19 = i18 ^ (i18 << 16);
                            z6 = z7;
                            int i20 = i19 & 127;
                            r18 = i12;
                            int i21 = pVar.f17690d;
                            int i22 = (i19 >>> 7) & i21;
                            int i23 = 0;
                            while (true) {
                                long[] jArr4 = pVar.a;
                                int i24 = i22 >> 3;
                                i6 = i14;
                                int i25 = (i22 & 7) << 3;
                                long j5 = jArr4[i24] >>> i25;
                                long j7 = jArr4[i24 + 1] << (64 - i25);
                                objArr3 = objArr5;
                                int i26 = i21;
                                long j10 = j5 | (j7 & ((-i25) >> 63));
                                objArr4 = objArr6;
                                jArr2 = jArr3;
                                long j11 = (i20 * 72340172838076673L) ^ j10;
                                long j12 = (j11 - 72340172838076673L) & (~j11) & (-9187201950435737472L);
                                while (true) {
                                    if (j12 == 0) {
                                        break;
                                    }
                                    i11 = (i22 + (Long.numberOfTrailingZeros(j12) >> 3)) & i26;
                                    if (Intrinsics.areEqual(pVar.f17688b[i11], obj2)) {
                                        break;
                                    }
                                    j12 &= j12 - 1;
                                }
                                i23 += 8;
                                i22 = (i22 + i23) & i26;
                                objArr6 = objArr4;
                                i21 = i26;
                                objArr5 = objArr3;
                                i14 = i6;
                                jArr3 = jArr2;
                            }
                            if (!(i11 >= 0)) {
                                return r18;
                            }
                        }
                    } else {
                        z6 = z7;
                        objArr3 = objArr5;
                        r18 = i12;
                        jArr2 = jArr3;
                        i6 = i14;
                        objArr4 = objArr6;
                    }
                    j >>= i6;
                    i16++;
                    objArr6 = objArr4;
                    z7 = z6;
                    i12 = r18;
                    objArr5 = objArr3;
                    i14 = i6;
                    jArr3 = jArr2;
                }
                z5 = z7;
                objArr = objArr5;
                i5 = i12;
                jArr = jArr3;
                int i27 = i14;
                objArr2 = objArr6;
                if (i15 != i27) {
                    return z5;
                }
            } else {
                z5 = z7;
                objArr = objArr5;
                i5 = i12;
                objArr2 = objArr6;
                jArr = jArr3;
            }
            if (i13 == length) {
                return z5;
            }
            i13++;
            objArr6 = objArr2;
            z7 = z5;
            i12 = i5;
            objArr5 = objArr;
            jArr3 = jArr;
        }
    }

    public final int hashCode() {
        Object[] objArr = this.f17688b;
        Object[] objArr2 = this.f17689c;
        long[] jArr = this.a;
        int length = jArr.length - 2;
        if (length < 0) {
            return 0;
        }
        int i5 = 0;
        int i6 = 0;
        while (true) {
            long j = jArr[i5];
            if ((((~j) << 7) & j & (-9187201950435737472L)) != -9187201950435737472L) {
                int i10 = 8 - ((~(i5 - length)) >>> 31);
                for (int i11 = 0; i11 < i10; i11++) {
                    if ((255 & j) < 128) {
                        int i12 = (i5 << 3) + i11;
                        Object obj = objArr[i12];
                        Object obj2 = objArr2[i12];
                        i6 += (obj2 != null ? obj2.hashCode() : 0) ^ (obj != null ? obj.hashCode() : 0);
                    }
                    j >>= 8;
                }
                if (i10 != 8) {
                    return i6;
                }
            }
            if (i5 == length) {
                return i6;
            }
            i5++;
        }
    }

    public final String toString() {
        return "{}";
    }
}
