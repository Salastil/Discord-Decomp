package bg;

import java.util.Arrays;

/* loaded from: classes3.dex */
public final class b1 extends h1 {

    /* renamed from: d, reason: collision with root package name */
    public final w0 f2936d;

    public b1(w0 w0Var) {
        this.f2936d = w0Var;
    }

    @Override // bg.h1
    public final int a() {
        return h1.d((byte) 64);
    }

    @Override // java.lang.Comparable
    public final int compareTo(Object obj) {
        h1 h1Var = (h1) obj;
        int a = h1Var.a();
        int d6 = h1.d((byte) 64);
        if (d6 != a) {
            return d6 - h1Var.a();
        }
        w0 w0Var = ((b1) h1Var).f2936d;
        w0 w0Var2 = this.f2936d;
        byte[] bArr = w0Var2.f3005e;
        int length = bArr.length;
        byte[] bArr2 = w0Var.f3005e;
        if (length != bArr2.length) {
            return bArr.length - bArr2.length;
        }
        return t0.a.compare(w0Var2.m(), w0Var.m());
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && b1.class == obj.getClass()) {
            return this.f2936d.equals(((b1) obj).f2936d);
        }
        return false;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{Integer.valueOf(h1.d((byte) 64)), this.f2936d});
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final String toString() {
        n0 n0Var;
        int i5;
        boolean z5;
        o0 o0Var = q0.f2985d;
        q0 q0Var = o0Var.f2987c;
        if (q0Var == null) {
            n0 n0Var2 = o0Var.a;
            char[] cArr = n0Var2.f2969b;
            int i6 = 0;
            while (true) {
                if (i6 >= cArr.length) {
                    n0Var = n0Var2;
                    break;
                }
                char c6 = cArr[i6];
                if (c6 < 'a' || c6 > 'z') {
                    i6++;
                } else {
                    int i10 = 0;
                    while (true) {
                        if (i10 >= cArr.length) {
                            z5 = false;
                            break;
                        }
                        char c8 = cArr[i10];
                        if (c8 >= 'A' && c8 <= 'Z') {
                            z5 = true;
                            break;
                        }
                        i10++;
                    }
                    if (z5) {
                        throw new IllegalStateException("Cannot call upperCase() on a mixed-case alphabet");
                    }
                    char[] cArr2 = new char[cArr.length];
                    for (int i11 = 0; i11 < cArr.length; i11++) {
                        char c10 = cArr[i11];
                        if (c10 >= 97 && c10 <= 122) {
                            c10 ^= 32;
                        }
                        cArr2[i11] = (char) c10;
                    }
                    n0Var = new n0(n0Var2.a.concat(".upperCase()"), cArr2);
                    byte[] bArr = n0Var.f2974g;
                    if (n0Var2.f2975h && !n0Var.f2975h) {
                        byte[] copyOf = Arrays.copyOf(bArr, bArr.length);
                        for (i5 = 65; i5 <= 90; i5++) {
                            int i12 = i5 | 32;
                            byte b10 = bArr[i5];
                            byte b11 = bArr[i12];
                            if (b10 == -1) {
                                copyOf[i5] = b11;
                            } else {
                                char c11 = (char) i5;
                                char c12 = (char) i12;
                                if (b11 != -1) {
                                    throw new IllegalStateException(b.d("Can't ignoreCase() since '%s' and '%s' encode different values", Character.valueOf(c11), Character.valueOf(c12)));
                                }
                                copyOf[i12] = b10;
                            }
                        }
                        n0Var = new n0(n0Var.a.concat(".ignoreCase()"), n0Var.f2969b, copyOf, true);
                    }
                }
            }
            q0Var = n0Var == n0Var2 ? o0Var : new o0(n0Var);
            o0Var.f2987c = q0Var;
        }
        byte[] m5 = this.f2936d.m();
        return s4.h.f("h'", q0Var.c(m5, m5.length), "'");
    }
}
