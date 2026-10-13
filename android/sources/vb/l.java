package vb;

import java.util.ArrayList;

/* loaded from: classes3.dex */
public final class l extends s {
    public final long a;

    /* renamed from: b, reason: collision with root package name */
    public final long f19308b;

    /* renamed from: c, reason: collision with root package name */
    public final j f19309c;

    /* renamed from: d, reason: collision with root package name */
    public final Integer f19310d;

    /* renamed from: e, reason: collision with root package name */
    public final String f19311e;

    /* renamed from: f, reason: collision with root package name */
    public final ArrayList f19312f;

    public l(long j, long j5, j jVar, Integer num, String str, ArrayList arrayList) {
        w wVar = w.f19320d;
        this.a = j;
        this.f19308b = j5;
        this.f19309c = jVar;
        this.f19310d = num;
        this.f19311e = str;
        this.f19312f = arrayList;
    }

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof s)) {
            return false;
        }
        l lVar = (l) ((s) obj);
        Object obj2 = w.f19320d;
        ArrayList arrayList = lVar.f19312f;
        String str = lVar.f19311e;
        Integer num = lVar.f19310d;
        j jVar = lVar.f19309c;
        if (this.a != lVar.a || this.f19308b != lVar.f19308b || !this.f19309c.equals(jVar)) {
            return false;
        }
        Integer num2 = this.f19310d;
        if (num2 == null) {
            if (num != null) {
                return false;
            }
        } else if (!num2.equals(num)) {
            return false;
        }
        String str2 = this.f19311e;
        if (str2 == null) {
            if (str != null) {
                return false;
            }
        } else if (!str2.equals(str)) {
            return false;
        }
        return this.f19312f.equals(arrayList) && obj2.equals(obj2);
    }

    public final int hashCode() {
        long j = this.a;
        long j5 = this.f19308b;
        int hashCode = (((((((int) (j ^ (j >>> 32))) ^ 1000003) * 1000003) ^ ((int) ((j5 >>> 32) ^ j5))) * 1000003) ^ this.f19309c.hashCode()) * 1000003;
        Integer num = this.f19310d;
        int hashCode2 = (hashCode ^ (num == null ? 0 : num.hashCode())) * 1000003;
        String str = this.f19311e;
        return ((((hashCode2 ^ (str != null ? str.hashCode() : 0)) * 1000003) ^ this.f19312f.hashCode()) * 1000003) ^ w.f19320d.hashCode();
    }

    public final String toString() {
        return "LogRequest{requestTimeMs=" + this.a + ", requestUptimeMs=" + this.f19308b + ", clientInfo=" + this.f19309c + ", logSource=" + this.f19310d + ", logSourceName=" + this.f19311e + ", logEvents=" + this.f19312f + ", qosTier=" + w.f19320d + "}";
    }
}
