package bg;

import java.io.IOException;
import java.math.RoundingMode;
import java.util.Objects;

/* loaded from: classes3.dex */
public class q0 {

    /* renamed from: d, reason: collision with root package name */
    public static final o0 f2985d;
    public final n0 a;

    /* renamed from: b, reason: collision with root package name */
    public final Character f2986b;

    /* renamed from: c, reason: collision with root package name */
    public volatile q0 f2987c;

    static {
        new p0("base64()", "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/");
        new p0("base64Url()", "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_");
        new q0("base32()", "ABCDEFGHIJKLMNOPQRSTUVWXYZ234567");
        new q0("base32Hex()", "0123456789ABCDEFGHIJKLMNOPQRSTUV");
        f2985d = new o0(new n0("base16()", "0123456789ABCDEF".toCharArray()));
    }

    public q0(n0 n0Var, Character ch2) {
        this.a = n0Var;
        if (ch2 != null) {
            byte[] bArr = n0Var.f2974g;
            if (bArr.length > 61 && bArr[61] != -1) {
                throw new IllegalArgumentException(b.d("Padding character %s was already in alphabet", ch2));
            }
        }
        this.f2986b = ch2;
    }

    public void a(StringBuilder sb2, byte[] bArr, int i5) {
        int i6 = 0;
        b.m(0, i5, bArr.length);
        while (i6 < i5) {
            n0 n0Var = this.a;
            b(sb2, bArr, i6, Math.min(n0Var.f2973f, i5 - i6));
            i6 += n0Var.f2973f;
        }
    }

    public final void b(StringBuilder sb2, byte[] bArr, int i5, int i6) {
        b.m(i5, i5 + i6, bArr.length);
        n0 n0Var = this.a;
        int i10 = n0Var.f2973f;
        int i11 = n0Var.f2971d;
        if (i6 > i10) {
            throw new IllegalArgumentException();
        }
        int i12 = 0;
        long j = 0;
        for (int i13 = 0; i13 < i6; i13++) {
            j = (j | (bArr[i5 + i13] & 255)) << 8;
        }
        int i14 = (i6 + 1) * 8;
        while (i12 < i6 * 8) {
            sb2.append(n0Var.f2969b[((int) (j >>> ((i14 - i11) - i12))) & n0Var.f2970c]);
            i12 += i11;
        }
        if (this.f2986b != null) {
            while (i12 < n0Var.f2973f * 8) {
                sb2.append('=');
                i12 += i11;
            }
        }
    }

    public final String c(byte[] bArr, int i5) {
        b.m(0, i5, bArr.length);
        n0 n0Var = this.a;
        int i6 = n0Var.f2973f;
        RoundingMode roundingMode = RoundingMode.CEILING;
        StringBuilder sb2 = new StringBuilder(n0Var.f2972e * b.a(i5, i6));
        try {
            a(sb2, bArr, i5);
            return sb2.toString();
        } catch (IOException e9) {
            throw new AssertionError(e9);
        }
    }

    public final boolean equals(Object obj) {
        if (obj instanceof q0) {
            q0 q0Var = (q0) obj;
            if (this.a.equals(q0Var.a) && Objects.equals(this.f2986b, q0Var.f2986b)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return this.a.hashCode() ^ Objects.hashCode(this.f2986b);
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("BaseEncoding.");
        n0 n0Var = this.a;
        sb2.append(n0Var);
        if (8 % n0Var.f2971d != 0) {
            Character ch2 = this.f2986b;
            if (ch2 == null) {
                sb2.append(".omitPadding()");
            } else {
                sb2.append(".withPadChar('");
                sb2.append(ch2);
                sb2.append("')");
            }
        }
        return sb2.toString();
    }

    public q0(String str, String str2) {
        this(new n0(str, str2.toCharArray()), (Character) '=');
    }
}
