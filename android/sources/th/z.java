package th;

import java.util.Arrays;

/* loaded from: classes3.dex */
public final class z {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final long f18630b;

    /* renamed from: c, reason: collision with root package name */
    public final int f18631c;

    /* renamed from: d, reason: collision with root package name */
    public final boolean f18632d;

    /* renamed from: e, reason: collision with root package name */
    public final boolean f18633e;

    /* renamed from: f, reason: collision with root package name */
    public final byte[] f18634f;

    public z(String str, long j, int i5, boolean z5, boolean z6, byte[] bArr) {
        this.a = str;
        this.f18630b = j;
        this.f18631c = i5;
        this.f18632d = z5;
        this.f18633e = z6;
        this.f18634f = bArr;
    }

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof z)) {
            return false;
        }
        z zVar = (z) obj;
        String str = zVar.a;
        String str2 = this.a;
        if (str2 == null) {
            if (str != null) {
                return false;
            }
        } else if (!str2.equals(str)) {
            return false;
        }
        return this.f18630b == zVar.f18630b && this.f18631c == zVar.f18631c && this.f18632d == zVar.f18632d && this.f18633e == zVar.f18633e && Arrays.equals(this.f18634f, zVar.f18634f);
    }

    public final int hashCode() {
        String str = this.a;
        int hashCode = str == null ? 0 : str.hashCode();
        int i5 = true != this.f18632d ? 1237 : 1231;
        long j = this.f18630b;
        return ((((((((((hashCode ^ 1000003) * 1000003) ^ ((int) ((j >>> 32) ^ j))) * 1000003) ^ this.f18631c) * 1000003) ^ i5) * 1000003) ^ (true != this.f18633e ? 1237 : 1231)) * 1000003) ^ Arrays.hashCode(this.f18634f);
    }

    public final String toString() {
        return "ZipEntry{name=" + this.a + ", size=" + this.f18630b + ", compressionMethod=" + this.f18631c + ", isPartial=" + this.f18632d + ", isEndOfArchive=" + this.f18633e + ", headerBytes=" + Arrays.toString(this.f18634f) + "}";
    }
}
