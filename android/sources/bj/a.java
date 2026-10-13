package bj;

import f0.e;

/* loaded from: classes3.dex */
public final class a {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final String f3019b;

    /* renamed from: c, reason: collision with root package name */
    public final String f3020c;

    /* renamed from: d, reason: collision with root package name */
    public final b f3021d;

    /* renamed from: e, reason: collision with root package name */
    public final int f3022e;

    public a(String str, String str2, String str3, b bVar, int i5) {
        this.a = str;
        this.f3019b = str2;
        this.f3020c = str3;
        this.f3021d = bVar;
        this.f3022e = i5;
    }

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof a)) {
            return false;
        }
        a aVar = (a) obj;
        int i5 = aVar.f3022e;
        b bVar = aVar.f3021d;
        String str = aVar.f3020c;
        String str2 = aVar.f3019b;
        String str3 = aVar.a;
        String str4 = this.a;
        if (str4 == null) {
            if (str3 != null) {
                return false;
            }
        } else if (!str4.equals(str3)) {
            return false;
        }
        String str5 = this.f3019b;
        if (str5 == null) {
            if (str2 != null) {
                return false;
            }
        } else if (!str5.equals(str2)) {
            return false;
        }
        String str6 = this.f3020c;
        if (str6 == null) {
            if (str != null) {
                return false;
            }
        } else if (!str6.equals(str)) {
            return false;
        }
        b bVar2 = this.f3021d;
        if (bVar2 == null) {
            if (bVar != null) {
                return false;
            }
        } else if (!bVar2.equals(bVar)) {
            return false;
        }
        int i6 = this.f3022e;
        return i6 == 0 ? i5 == 0 : e.a(i6, i5);
    }

    public final int hashCode() {
        String str = this.a;
        int hashCode = ((str == null ? 0 : str.hashCode()) ^ 1000003) * 1000003;
        String str2 = this.f3019b;
        int hashCode2 = (hashCode ^ (str2 == null ? 0 : str2.hashCode())) * 1000003;
        String str3 = this.f3020c;
        int hashCode3 = (hashCode2 ^ (str3 == null ? 0 : str3.hashCode())) * 1000003;
        b bVar = this.f3021d;
        int hashCode4 = (hashCode3 ^ (bVar == null ? 0 : bVar.hashCode())) * 1000003;
        int i5 = this.f3022e;
        return (i5 != 0 ? e.b(i5) : 0) ^ hashCode4;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("InstallationResponse{uri=");
        sb2.append(this.a);
        sb2.append(", fid=");
        sb2.append(this.f3019b);
        sb2.append(", refreshToken=");
        sb2.append(this.f3020c);
        sb2.append(", authToken=");
        sb2.append(this.f3021d);
        sb2.append(", responseCode=");
        int i5 = this.f3022e;
        sb2.append(i5 != 1 ? i5 != 2 ? "null" : "BAD_CONFIG" : "OK");
        sb2.append("}");
        return sb2.toString();
    }
}
