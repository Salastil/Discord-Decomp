package s;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public abstract class r {
    public long[] a;

    /* renamed from: b, reason: collision with root package name */
    public Object[] f17691b;

    /* renamed from: c, reason: collision with root package name */
    public int f17692c;

    /* renamed from: d, reason: collision with root package name */
    public int f17693d;

    /* JADX WARN: Code restructure failed: missing block: B:40:0x00d2, code lost:
    
        if (((r3 & ((~r3) << 6)) & (-9187201950435737472L)) == 0) goto L40;
     */
    /* JADX WARN: Code restructure failed: missing block: B:43:0x00d4, code lost:
    
        r11 = -1;
     */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r17v3 */
    /* JADX WARN: Type inference failed for: r17v4 */
    /* JADX WARN: Type inference failed for: r17v5, types: [boolean] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean equals(Object obj) {
        boolean z5;
        Object[] objArr;
        int i5;
        boolean z6;
        Object[] objArr2;
        ?? r17;
        long j;
        int i6;
        int i10;
        int i11;
        boolean z7 = true;
        if (obj == this) {
            return true;
        }
        int i12 = 0;
        if (!(obj instanceof r)) {
            return false;
        }
        r rVar = (r) obj;
        if (rVar.f17693d != this.f17693d) {
            return false;
        }
        Object[] objArr3 = this.f17691b;
        long[] jArr = this.a;
        int length = jArr.length - 2;
        if (length < 0) {
            return true;
        }
        int i13 = 0;
        while (true) {
            long j5 = jArr[i13];
            if ((((~j5) << 7) & j5 & (-9187201950435737472L)) != -9187201950435737472L) {
                int i14 = 8;
                int i15 = 8 - ((~(i13 - length)) >>> 31);
                int i16 = i12;
                while (i16 < i15) {
                    if ((255 & j5) < 128) {
                        Object obj2 = objArr3[(i13 << 3) + i16];
                        if (obj2 != null) {
                            rVar.getClass();
                            i10 = obj2.hashCode();
                        } else {
                            i10 = 0;
                        }
                        int i17 = i10 * (-862048943);
                        int i18 = i17 ^ (i17 << 16);
                        z6 = z7;
                        int i19 = i18 & 127;
                        r17 = i12;
                        int i20 = rVar.f17692c;
                        int i21 = (i18 >>> 7) & i20;
                        int i22 = 0;
                        while (true) {
                            long[] jArr2 = rVar.a;
                            int i23 = i21 >> 3;
                            i6 = i14;
                            int i24 = (i21 & 7) << 3;
                            long j7 = jArr2[i23] >>> i24;
                            long j10 = jArr2[i23 + 1] << (64 - i24);
                            objArr2 = objArr3;
                            int i25 = i20;
                            long j11 = j7 | (j10 & ((-i24) >> 63));
                            j = j5;
                            long j12 = (i19 * 72340172838076673L) ^ j11;
                            long j13 = (j12 - 72340172838076673L) & (~j12) & (-9187201950435737472L);
                            while (true) {
                                if (j13 == 0) {
                                    break;
                                }
                                i11 = ((Long.numberOfTrailingZeros(j13) >> 3) + i21) & i25;
                                if (Intrinsics.areEqual(rVar.f17691b[i11], obj2)) {
                                    break;
                                }
                                j13 &= j13 - 1;
                            }
                            i22 += 8;
                            i21 = (i21 + i22) & i25;
                            objArr3 = objArr2;
                            i20 = i25;
                            i14 = i6;
                            j5 = j;
                        }
                        if (!(i11 >= 0)) {
                            return r17;
                        }
                    } else {
                        z6 = z7;
                        objArr2 = objArr3;
                        r17 = i12;
                        j = j5;
                        i6 = i14;
                    }
                    j5 = j >> i6;
                    i16++;
                    objArr3 = objArr2;
                    z7 = z6;
                    i12 = r17;
                    i14 = i6;
                }
                z5 = z7;
                objArr = objArr3;
                i5 = i12;
                if (i15 != i14) {
                    return z5;
                }
            } else {
                z5 = z7;
                objArr = objArr3;
                i5 = i12;
            }
            if (i13 == length) {
                return z5;
            }
            i13++;
            objArr3 = objArr;
            z7 = z5;
            i12 = i5;
        }
    }

    public final int hashCode() {
        int i5 = (this.f17692c * 31) + this.f17693d;
        Object[] objArr = this.f17691b;
        long[] jArr = this.a;
        int length = jArr.length - 2;
        if (length >= 0) {
            int i6 = 0;
            while (true) {
                long j = jArr[i6];
                if ((((~j) << 7) & j & (-9187201950435737472L)) != -9187201950435737472L) {
                    int i10 = 8 - ((~(i6 - length)) >>> 31);
                    for (int i11 = 0; i11 < i10; i11++) {
                        if ((255 & j) < 128) {
                            Object obj = objArr[(i6 << 3) + i11];
                            if (!Intrinsics.areEqual(obj, this)) {
                                i5 += obj != null ? obj.hashCode() : 0;
                            }
                        }
                        j >>= 8;
                    }
                    if (i10 != 8) {
                        return i5;
                    }
                }
                if (i6 == length) {
                    break;
                }
                i6++;
            }
        }
        return i5;
    }

    public final String toString() {
        int i5;
        androidx.fragment.app.s sVar = new androidx.fragment.app.s(5, this);
        Intrinsics.checkNotNullParameter(", ", "separator");
        Intrinsics.checkNotNullParameter("[", "prefix");
        Intrinsics.checkNotNullParameter("]", "postfix");
        Intrinsics.checkNotNullParameter("...", "truncated");
        StringBuilder sb2 = new StringBuilder("[");
        Object[] objArr = this.f17691b;
        long[] jArr = this.a;
        int length = jArr.length - 2;
        if (length >= 0) {
            int i6 = 0;
            int i10 = 0;
            loop0: while (true) {
                long j = jArr[i6];
                if ((((~j) << 7) & j & (-9187201950435737472L)) != -9187201950435737472L) {
                    int i11 = 8;
                    int i12 = 8 - ((~(i6 - length)) >>> 31);
                    int i13 = 0;
                    while (i13 < i12) {
                        if ((j & 255) < 128) {
                            i5 = i11;
                            Object obj = objArr[(i6 << 3) + i13];
                            if (i10 == -1) {
                                sb2.append((CharSequence) "...");
                                break loop0;
                            }
                            if (i10 != 0) {
                                sb2.append((CharSequence) ", ");
                            }
                            sb2.append((CharSequence) sVar.invoke(obj));
                            i10++;
                        } else {
                            i5 = i11;
                        }
                        j >>= i5;
                        i13++;
                        i11 = i5;
                    }
                    if (i12 != i11) {
                        break;
                    }
                }
                if (i6 == length) {
                    break;
                }
                i6++;
            }
        }
        sb2.append((CharSequence) "]");
        String sb3 = sb2.toString();
        Intrinsics.checkNotNullExpressionValue(sb3, "toString(...)");
        return sb3;
    }
}
