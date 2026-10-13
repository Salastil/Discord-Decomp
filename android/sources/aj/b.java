package aj;

import f0.e;

/* loaded from: classes3.dex */
public final class b {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final int f641b;

    /* renamed from: c, reason: collision with root package name */
    public final String f642c;

    /* renamed from: d, reason: collision with root package name */
    public final String f643d;

    /* renamed from: e, reason: collision with root package name */
    public final long f644e;

    /* renamed from: f, reason: collision with root package name */
    public final long f645f;

    /* renamed from: g, reason: collision with root package name */
    public final String f646g;

    public b(String str, int i5, String str2, String str3, long j, long j5, String str4) {
        this.a = str;
        this.f641b = i5;
        this.f642c = str2;
        this.f643d = str3;
        this.f644e = j;
        this.f645f = j5;
        this.f646g = str4;
    }

    public final a a() {
        a aVar = new a();
        aVar.f634b = this.a;
        aVar.f635c = this.f641b;
        aVar.f636d = this.f642c;
        aVar.f637e = this.f643d;
        aVar.f639g = Long.valueOf(this.f644e);
        aVar.f640h = Long.valueOf(this.f645f);
        aVar.f638f = this.f646g;
        return aVar;
    }

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof b)) {
            return false;
        }
        b bVar = (b) obj;
        String str = bVar.f646g;
        String str2 = bVar.f643d;
        String str3 = bVar.f642c;
        String str4 = bVar.a;
        String str5 = this.a;
        if (str5 == null) {
            if (str4 != null) {
                return false;
            }
        } else if (!str5.equals(str4)) {
            return false;
        }
        if (!e.a(this.f641b, bVar.f641b)) {
            return false;
        }
        String str6 = this.f642c;
        if (str6 == null) {
            if (str3 != null) {
                return false;
            }
        } else if (!str6.equals(str3)) {
            return false;
        }
        String str7 = this.f643d;
        if (str7 == null) {
            if (str2 != null) {
                return false;
            }
        } else if (!str7.equals(str2)) {
            return false;
        }
        if (this.f644e != bVar.f644e || this.f645f != bVar.f645f) {
            return false;
        }
        String str8 = this.f646g;
        return str8 == null ? str == null : str8.equals(str);
    }

    public final int hashCode() {
        String str = this.a;
        int hashCode = ((((str == null ? 0 : str.hashCode()) ^ 1000003) * 1000003) ^ e.b(this.f641b)) * 1000003;
        String str2 = this.f642c;
        int hashCode2 = (hashCode ^ (str2 == null ? 0 : str2.hashCode())) * 1000003;
        String str3 = this.f643d;
        int hashCode3 = (hashCode2 ^ (str3 == null ? 0 : str3.hashCode())) * 1000003;
        long j = this.f644e;
        int i5 = (hashCode3 ^ ((int) (j ^ (j >>> 32)))) * 1000003;
        long j5 = this.f645f;
        int i6 = (i5 ^ ((int) (j5 ^ (j5 >>> 32)))) * 1000003;
        String str4 = this.f646g;
        return (str4 != null ? str4.hashCode() : 0) ^ i6;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("PersistedInstallationEntry{firebaseInstallationId=");
        sb2.append(this.a);
        sb2.append(", registrationStatus=");
        int i5 = this.f641b;
        sb2.append(i5 != 1 ? i5 != 2 ? i5 != 3 ? i5 != 4 ? i5 != 5 ? "null" : "REGISTER_ERROR" : "REGISTERED" : "UNREGISTERED" : "NOT_GENERATED" : "ATTEMPT_MIGRATION");
        sb2.append(", authToken=");
        sb2.append(this.f642c);
        sb2.append(", refreshToken=");
        sb2.append(this.f643d);
        sb2.append(", expiresInSecs=");
        sb2.append(this.f644e);
        sb2.append(", tokenCreationEpochInSecs=");
        sb2.append(this.f645f);
        sb2.append(", fisError=");
        return com.discord.chat.bridge.botuikit.a.j(sb2, this.f646g, "}");
    }
}
