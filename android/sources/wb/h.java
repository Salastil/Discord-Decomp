package wb;

import androidx.appcompat.widget.w;
import java.util.HashMap;
import java.util.Map;

/* loaded from: classes3.dex */
public final class h {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final Integer f19699b;

    /* renamed from: c, reason: collision with root package name */
    public final l f19700c;

    /* renamed from: d, reason: collision with root package name */
    public final long f19701d;

    /* renamed from: e, reason: collision with root package name */
    public final long f19702e;

    /* renamed from: f, reason: collision with root package name */
    public final Map f19703f;

    public h(String str, Integer num, l lVar, long j, long j5, HashMap hashMap) {
        this.a = str;
        this.f19699b = num;
        this.f19700c = lVar;
        this.f19701d = j;
        this.f19702e = j5;
        this.f19703f = hashMap;
    }

    public final String a(String str) {
        String str2 = (String) this.f19703f.get(str);
        return str2 == null ? "" : str2;
    }

    public final int b(String str) {
        String str2 = (String) this.f19703f.get(str);
        if (str2 == null) {
            return 0;
        }
        return Integer.valueOf(str2).intValue();
    }

    public final w c() {
        w wVar = new w();
        String str = this.a;
        if (str == null) {
            throw new NullPointerException("Null transportName");
        }
        wVar.f1141d = str;
        wVar.f1142e = this.f19699b;
        l lVar = this.f19700c;
        if (lVar == null) {
            throw new NullPointerException("Null encodedPayload");
        }
        wVar.f1143i = lVar;
        wVar.f1144v = Long.valueOf(this.f19701d);
        wVar.f1145w = Long.valueOf(this.f19702e);
        wVar.f1146x = new HashMap(this.f19703f);
        return wVar;
    }

    public final boolean equals(Object obj) {
        Integer num;
        if (obj == this) {
            return true;
        }
        if (obj instanceof h) {
            h hVar = (h) obj;
            Integer num2 = hVar.f19699b;
            if (this.a.equals(hVar.a) && ((num = this.f19699b) != null ? num.equals(num2) : num2 == null) && this.f19700c.equals(hVar.f19700c) && this.f19701d == hVar.f19701d && this.f19702e == hVar.f19702e && this.f19703f.equals(hVar.f19703f)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        int hashCode = (this.a.hashCode() ^ 1000003) * 1000003;
        Integer num = this.f19699b;
        int hashCode2 = (((hashCode ^ (num == null ? 0 : num.hashCode())) * 1000003) ^ this.f19700c.hashCode()) * 1000003;
        long j = this.f19701d;
        int i5 = (hashCode2 ^ ((int) (j ^ (j >>> 32)))) * 1000003;
        long j5 = this.f19702e;
        return ((i5 ^ ((int) (j5 ^ (j5 >>> 32)))) * 1000003) ^ this.f19703f.hashCode();
    }

    public final String toString() {
        return "EventInternal{transportName=" + this.a + ", code=" + this.f19699b + ", encodedPayload=" + this.f19700c + ", eventMillis=" + this.f19701d + ", uptimeMillis=" + this.f19702e + ", autoMetadata=" + this.f19703f + "}";
    }
}
