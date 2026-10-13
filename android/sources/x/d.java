package x;

/* loaded from: classes.dex */
public final class d {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final long[] f20167b;

    /* renamed from: c, reason: collision with root package name */
    public final Object[] f20168c;

    public d(int i5, long[] jArr, Object[] objArr) {
        this.a = i5;
        this.f20167b = jArr;
        this.f20168c = objArr;
    }

    public final int a(long j) {
        int i5 = this.a - 1;
        if (i5 != -1) {
            long[] jArr = this.f20167b;
            int i6 = 0;
            if (i5 != 0) {
                while (i6 <= i5) {
                    int i10 = (i6 + i5) >>> 1;
                    long j5 = jArr[i10] - j;
                    if (j5 < 0) {
                        i6 = i10 + 1;
                    } else {
                        if (j5 <= 0) {
                            return i10;
                        }
                        i5 = i10 - 1;
                    }
                }
                return -(i6 + 1);
            }
            long j7 = jArr[0];
            if (j7 == j) {
                return 0;
            }
            if (j7 > j) {
                return -2;
            }
        }
        return -1;
    }

    public final d b(long j, Object obj) {
        long[] jArr;
        int i5;
        Object[] objArr = this.f20168c;
        int i6 = 0;
        int i10 = 0;
        for (Object obj2 : objArr) {
            if (obj2 != null) {
                i10++;
            }
        }
        int i11 = i10 + 1;
        long[] jArr2 = new long[i11];
        Object[] objArr2 = new Object[i11];
        if (i11 > 1) {
            int i12 = 0;
            while (true) {
                jArr = this.f20167b;
                i5 = this.a;
                if (i6 >= i11 || i12 >= i5) {
                    break;
                }
                long j5 = jArr[i12];
                Object obj3 = objArr[i12];
                if (j5 > j) {
                    jArr2[i6] = j;
                    objArr2[i6] = obj;
                    i6++;
                    break;
                }
                if (obj3 != null) {
                    jArr2[i6] = j5;
                    objArr2[i6] = obj3;
                    i6++;
                }
                i12++;
            }
            if (i12 == i5) {
                jArr2[i10] = j;
                objArr2[i10] = obj;
            } else {
                while (i6 < i11) {
                    long j7 = jArr[i12];
                    Object obj4 = objArr[i12];
                    if (obj4 != null) {
                        jArr2[i6] = j7;
                        objArr2[i6] = obj4;
                        i6++;
                    }
                    i12++;
                }
            }
        } else {
            jArr2[0] = j;
            objArr2[0] = obj;
        }
        return new d(i11, jArr2, objArr2);
    }
}
