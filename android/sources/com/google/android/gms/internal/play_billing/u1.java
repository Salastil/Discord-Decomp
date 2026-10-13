package com.google.android.gms.internal.play_billing;

import java.io.Serializable;
import java.util.Iterator;
import java.util.Locale;

/* loaded from: classes3.dex */
public abstract class u1 implements Iterable, Serializable {

    /* renamed from: e, reason: collision with root package name */
    public static final v1 f5850e = new v1(j2.a);

    /* renamed from: d, reason: collision with root package name */
    public int f5851d = 0;

    static {
        int i5 = r1.a;
    }

    public static int k(int i5, int i6, int i10) {
        int i11 = i6 - i5;
        if ((i5 | i6 | i11 | (i10 - i6)) >= 0) {
            return i11;
        }
        if (i5 < 0) {
            throw new IndexOutOfBoundsException(s4.h.e(i5, "Beginning index: ", " < 0"));
        }
        if (i6 < i5) {
            throw new IndexOutOfBoundsException(a3.e.f(i5, i6, "Beginning index larger than ending index: ", ", "));
        }
        throw new IndexOutOfBoundsException(a3.e.f(i6, i10, "End index: ", " >= "));
    }

    public static v1 m(byte[] bArr, int i5, int i6) {
        try {
            k(i5, i5 + i6, bArr.length);
            byte[] bArr2 = new byte[i6];
            System.arraycopy(bArr, i5, bArr2, 0, i6);
            return new v1(bArr2);
        } catch (n2 e9) {
            throw new AssertionError("Expected no InvalidProtocolBufferException as data UTF8 validity is not checked.", e9);
        }
    }

    public static /* bridge */ /* synthetic */ boolean n(int i5, int i6, int i10, byte[] bArr, byte[] bArr2) {
        int i11 = i5 + i10;
        k(i5, i11, bArr.length);
        k(i6, i10 + i6, bArr2.length);
        while (i5 < i11) {
            if (bArr[i5] != bArr2[i6]) {
                return false;
            }
            i5++;
            i6++;
        }
        return true;
    }

    public abstract byte a(int i5);

    public abstract int b(int i5, int i6);

    public abstract int d();

    public abstract u1 e(int i5, int i6);

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof u1)) {
            return false;
        }
        u1 u1Var = (u1) obj;
        int d6 = d();
        if (d6 != u1Var.d()) {
            return false;
        }
        if (d6 == 0) {
            return true;
        }
        int i5 = this.f5851d;
        int i6 = u1Var.f5851d;
        if (i5 == 0 || i6 == 0 || i5 == i6) {
            return j(u1Var);
        }
        return false;
    }

    public abstract void h(byte[] bArr, int i5);

    public final int hashCode() {
        int i5 = this.f5851d;
        if (i5 == 0) {
            int d6 = d();
            i5 = b(d6, d6);
            if (i5 == 0) {
                i5 = 1;
            }
            this.f5851d = i5;
        }
        return i5;
    }

    public abstract void i(w1 w1Var);

    @Override // java.lang.Iterable
    public final /* synthetic */ Iterator iterator() {
        return new androidx.datastore.preferences.protobuf.d(this);
    }

    public abstract boolean j(u1 u1Var);

    public final String toString() {
        byte[] bArr;
        String concat;
        byte[] bArr2;
        Locale locale = Locale.ROOT;
        String hexString = Integer.toHexString(System.identityHashCode(this));
        int d6 = d();
        if (d() <= 50) {
            int d7 = d();
            if (d7 == 0) {
                bArr2 = j2.a;
            } else {
                byte[] bArr3 = new byte[d7];
                h(bArr3, d7);
                bArr2 = bArr3;
            }
            concat = a2.g(bArr2);
        } else {
            u1 e9 = e(0, 47);
            int d8 = e9.d();
            if (d8 == 0) {
                bArr = j2.a;
            } else {
                byte[] bArr4 = new byte[d8];
                e9.h(bArr4, d8);
                bArr = bArr4;
            }
            concat = a2.g(bArr).concat("...");
        }
        return com.discord.chat.bridge.botuikit.a.j(a3.e.s("<ByteString@", hexString, " size=", d6, " contents=\""), concat, "\">");
    }
}
