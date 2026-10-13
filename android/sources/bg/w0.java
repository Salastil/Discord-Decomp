package bg;

import java.io.ByteArrayInputStream;
import java.io.Serializable;
import java.util.Iterator;
import java.util.Locale;

/* loaded from: classes3.dex */
public class w0 implements Iterable, Serializable {

    /* renamed from: i, reason: collision with root package name */
    public static final w0 f3003i = new w0(x0.a);

    /* renamed from: d, reason: collision with root package name */
    public int f3004d = 0;

    /* renamed from: e, reason: collision with root package name */
    public final byte[] f3005e;

    static {
        int i5 = u0.a;
    }

    public w0(byte[] bArr) {
        bArr.getClass();
        this.f3005e = bArr;
    }

    public static int j(int i5, int i6, int i10) {
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

    public static w0 k(byte[] bArr, int i5) {
        j(0, i5, bArr.length);
        byte[] bArr2 = new byte[i5];
        System.arraycopy(bArr, 0, bArr2, 0, i5);
        return new w0(bArr2);
    }

    public byte a(int i5) {
        return this.f3005e[i5];
    }

    public byte b(int i5) {
        return this.f3005e[i5];
    }

    public int d() {
        return 0;
    }

    public int e() {
        return this.f3005e.length;
    }

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof w0) || e() != ((w0) obj).e()) {
            return false;
        }
        if (e() == 0) {
            return true;
        }
        if (!(obj instanceof w0)) {
            return obj.equals(this);
        }
        w0 w0Var = (w0) obj;
        int i5 = this.f3004d;
        int i6 = w0Var.f3004d;
        if (i5 != 0 && i6 != 0 && i5 != i6) {
            return false;
        }
        int e9 = e();
        if (e9 > w0Var.e()) {
            throw new IllegalArgumentException("Length too large: " + e9 + e());
        }
        if (e9 > w0Var.e()) {
            throw new IllegalArgumentException(a3.e.f(e9, w0Var.e(), "Ran off end of other: 0, ", ", "));
        }
        byte[] bArr = w0Var.f3005e;
        int d6 = d() + e9;
        int d7 = d();
        int d8 = w0Var.d();
        while (d7 < d6) {
            if (this.f3005e[d7] != bArr[d8]) {
                return false;
            }
            d7++;
            d8++;
        }
        return true;
    }

    public void h(byte[] bArr, int i5) {
        System.arraycopy(this.f3005e, 0, bArr, 0, i5);
    }

    public final int hashCode() {
        int i5 = this.f3004d;
        if (i5 != 0) {
            return i5;
        }
        int e9 = e();
        int d6 = d();
        byte[] bArr = x0.a;
        int i6 = e9;
        for (int i10 = d6; i10 < d6 + e9; i10++) {
            i6 = (i6 * 31) + this.f3005e[i10];
        }
        if (i6 == 0) {
            i6 = 1;
        }
        this.f3004d = i6;
        return i6;
    }

    public final ByteArrayInputStream i() {
        return new ByteArrayInputStream(this.f3005e, d(), e());
    }

    @Override // java.lang.Iterable
    public final /* synthetic */ Iterator iterator() {
        return new androidx.datastore.preferences.protobuf.d(this);
    }

    public final byte[] m() {
        int e9 = e();
        if (e9 == 0) {
            return x0.a;
        }
        byte[] bArr = new byte[e9];
        h(bArr, e9);
        return bArr;
    }

    public final String toString() {
        w0 v0Var;
        String concat;
        Locale locale = Locale.ROOT;
        String hexString = Integer.toHexString(System.identityHashCode(this));
        int e9 = e();
        if (e() <= 50) {
            concat = b.c(this);
        } else {
            int j = j(0, 47, e());
            if (j == 0) {
                v0Var = f3003i;
            } else {
                v0Var = new v0(this.f3005e, d(), j);
            }
            concat = b.c(v0Var).concat("...");
        }
        return com.discord.chat.bridge.botuikit.a.j(a3.e.s("<ByteString@", hexString, " size=", e9, " contents=\""), concat, "\">");
    }
}
