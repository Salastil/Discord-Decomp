package bj;

import f0.e;

/* loaded from: classes3.dex */
public final class b {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final long f3023b;

    /* renamed from: c, reason: collision with root package name */
    public final int f3024c;

    public b(String str, long j, int i5) {
        this.a = str;
        this.f3023b = j;
        this.f3024c = i5;
    }

    public static a1.d a() {
        a1.d dVar = new a1.d(4, (byte) 0);
        dVar.f16v = 0L;
        return dVar;
    }

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof b)) {
            return false;
        }
        b bVar = (b) obj;
        int i5 = bVar.f3024c;
        String str = bVar.a;
        String str2 = this.a;
        if (str2 == null) {
            if (str != null) {
                return false;
            }
        } else if (!str2.equals(str)) {
            return false;
        }
        if (this.f3023b != bVar.f3023b) {
            return false;
        }
        int i6 = this.f3024c;
        return i6 == 0 ? i5 == 0 : e.a(i6, i5);
    }

    public final int hashCode() {
        String str = this.a;
        int hashCode = str == null ? 0 : str.hashCode();
        long j = this.f3023b;
        int i5 = (((hashCode ^ 1000003) * 1000003) ^ ((int) ((j >>> 32) ^ j))) * 1000003;
        int i6 = this.f3024c;
        return (i6 != 0 ? e.b(i6) : 0) ^ i5;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("TokenResult{token=");
        sb2.append(this.a);
        sb2.append(", tokenExpirationTimestamp=");
        sb2.append(this.f3023b);
        sb2.append(", responseCode=");
        int i5 = this.f3024c;
        sb2.append(i5 != 1 ? i5 != 2 ? i5 != 3 ? "null" : "AUTH_ERROR" : "BAD_CONFIG" : "OK");
        sb2.append("}");
        return sb2.toString();
    }
}
