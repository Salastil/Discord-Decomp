package s;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public abstract class g {
    public long[] a;

    /* renamed from: b, reason: collision with root package name */
    public int[] f17677b;

    /* renamed from: c, reason: collision with root package name */
    public Object[] f17678c;

    /* renamed from: d, reason: collision with root package name */
    public int f17679d;

    /* renamed from: e, reason: collision with root package name */
    public int f17680e;

    /* JADX WARN: Code restructure failed: missing block: B:15:0x0067, code lost:
    
        if (((r6 & ((~r6) << 6)) & (-9187201950435737472L)) == 0) goto L16;
     */
    /* JADX WARN: Code restructure failed: missing block: B:18:0x0069, code lost:
    
        r10 = -1;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean a(int i5) {
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
        return i6 >= 0;
    }

    /* JADX WARN: Code restructure failed: missing block: B:16:0x0061, code lost:
    
        if (((r4 & ((~r4) << 6)) & (-9187201950435737472L)) == 0) goto L18;
     */
    /* JADX WARN: Code restructure failed: missing block: B:19:0x0063, code lost:
    
        r10 = -1;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object b(int i5) {
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
        if (i6 >= 0) {
            return this.f17678c[i6];
        }
        return null;
    }

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof g)) {
            return false;
        }
        g gVar = (g) obj;
        if (gVar.f17680e != this.f17680e) {
            return false;
        }
        int[] iArr = this.f17677b;
        Object[] objArr = this.f17678c;
        long[] jArr = this.a;
        int length = jArr.length - 2;
        if (length >= 0) {
            int i5 = 0;
            loop0: while (true) {
                long j = jArr[i5];
                if ((((~j) << 7) & j & (-9187201950435737472L)) != -9187201950435737472L) {
                    int i6 = 8 - ((~(i5 - length)) >>> 31);
                    for (int i10 = 0; i10 < i6; i10++) {
                        if ((255 & j) < 128) {
                            int i11 = (i5 << 3) + i10;
                            int i12 = iArr[i11];
                            Object obj2 = objArr[i11];
                            if (obj2 == null) {
                                if (gVar.b(i12) != null || !gVar.a(i12)) {
                                    break loop0;
                                }
                            } else if (!Intrinsics.areEqual(obj2, gVar.b(i12))) {
                                return false;
                            }
                        }
                        j >>= 8;
                    }
                    if (i6 != 8) {
                        break;
                    }
                }
                if (i5 == length) {
                    break;
                }
                i5++;
            }
            return false;
        }
        return true;
    }

    public final int hashCode() {
        int[] iArr = this.f17677b;
        Object[] objArr = this.f17678c;
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
                        int i13 = iArr[i12];
                        Object obj = objArr[i12];
                        i6 += (obj != null ? obj.hashCode() : 0) ^ Integer.hashCode(i13);
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
        if (this.f17680e == 0) {
            return "{}";
        }
        StringBuilder sb2 = new StringBuilder("{");
        int[] iArr = this.f17677b;
        Object[] objArr = this.f17678c;
        long[] jArr = this.a;
        int length = jArr.length - 2;
        if (length >= 0) {
            int i5 = 0;
            int i6 = 0;
            while (true) {
                long j = jArr[i5];
                if ((((~j) << 7) & j & (-9187201950435737472L)) != -9187201950435737472L) {
                    int i10 = 8 - ((~(i5 - length)) >>> 31);
                    for (int i11 = 0; i11 < i10; i11++) {
                        if ((255 & j) < 128) {
                            int i12 = (i5 << 3) + i11;
                            int i13 = iArr[i12];
                            Object obj = objArr[i12];
                            sb2.append(i13);
                            sb2.append("=");
                            if (obj == this) {
                                obj = "(this)";
                            }
                            sb2.append(obj);
                            i6++;
                            if (i6 < this.f17680e) {
                                sb2.append(", ");
                            }
                        }
                        j >>= 8;
                    }
                    if (i10 != 8) {
                        break;
                    }
                }
                if (i5 == length) {
                    break;
                }
                i5++;
            }
        }
        sb2.append('}');
        String sb3 = sb2.toString();
        Intrinsics.checkNotNullExpressionValue(sb3, "toString(...)");
        return sb3;
    }
}
