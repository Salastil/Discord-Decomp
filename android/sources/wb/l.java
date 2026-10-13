package wb;

import java.util.Arrays;

/* loaded from: classes3.dex */
public final class l {
    public final tb.c a;

    /* renamed from: b, reason: collision with root package name */
    public final byte[] f19713b;

    public l(tb.c cVar, byte[] bArr) {
        if (cVar == null) {
            throw new NullPointerException("encoding is null");
        }
        if (bArr == null) {
            throw new NullPointerException("bytes is null");
        }
        this.a = cVar;
        this.f19713b = bArr;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof l)) {
            return false;
        }
        l lVar = (l) obj;
        if (this.a.equals(lVar.a)) {
            return Arrays.equals(this.f19713b, lVar.f19713b);
        }
        return false;
    }

    public final int hashCode() {
        return ((this.a.hashCode() ^ 1000003) * 1000003) ^ Arrays.hashCode(this.f19713b);
    }

    public final String toString() {
        return "EncodedPayload{encoding=" + this.a + ", bytes=[...]}";
    }
}
