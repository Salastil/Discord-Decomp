package vb;

import java.util.Arrays;

/* loaded from: classes3.dex */
public final class k extends r {
    public final long a;

    /* renamed from: b, reason: collision with root package name */
    public final Integer f19302b;

    /* renamed from: c, reason: collision with root package name */
    public final long f19303c;

    /* renamed from: d, reason: collision with root package name */
    public final byte[] f19304d;

    /* renamed from: e, reason: collision with root package name */
    public final String f19305e;

    /* renamed from: f, reason: collision with root package name */
    public final long f19306f;

    /* renamed from: g, reason: collision with root package name */
    public final v f19307g;

    public k(long j, Integer num, long j5, byte[] bArr, String str, long j7, v vVar) {
        this.a = j;
        this.f19302b = num;
        this.f19303c = j5;
        this.f19304d = bArr;
        this.f19305e = str;
        this.f19306f = j7;
        this.f19307g = vVar;
    }

    public final boolean equals(Object obj) {
        Integer num;
        String str;
        v vVar;
        if (obj == this) {
            return true;
        }
        if (obj instanceof r) {
            r rVar = (r) obj;
            k kVar = (k) rVar;
            v vVar2 = kVar.f19307g;
            String str2 = kVar.f19305e;
            Integer num2 = kVar.f19302b;
            if (this.a == kVar.a && ((num = this.f19302b) != null ? num.equals(num2) : num2 == null) && this.f19303c == kVar.f19303c) {
                if (Arrays.equals(this.f19304d, rVar instanceof k ? ((k) rVar).f19304d : kVar.f19304d) && ((str = this.f19305e) != null ? str.equals(str2) : str2 == null) && this.f19306f == kVar.f19306f && ((vVar = this.f19307g) != null ? vVar.equals(vVar2) : vVar2 == null)) {
                    return true;
                }
            }
        }
        return false;
    }

    public final int hashCode() {
        long j = this.a;
        int i5 = (((int) (j ^ (j >>> 32))) ^ 1000003) * 1000003;
        Integer num = this.f19302b;
        int hashCode = (i5 ^ (num == null ? 0 : num.hashCode())) * 1000003;
        long j5 = this.f19303c;
        int hashCode2 = (((hashCode ^ ((int) (j5 ^ (j5 >>> 32)))) * 1000003) ^ Arrays.hashCode(this.f19304d)) * 1000003;
        String str = this.f19305e;
        int hashCode3 = (hashCode2 ^ (str == null ? 0 : str.hashCode())) * 1000003;
        long j7 = this.f19306f;
        int i6 = (hashCode3 ^ ((int) (j7 ^ (j7 >>> 32)))) * 1000003;
        v vVar = this.f19307g;
        return i6 ^ (vVar != null ? vVar.hashCode() : 0);
    }

    public final String toString() {
        return "LogEvent{eventTimeMs=" + this.a + ", eventCode=" + this.f19302b + ", eventUptimeMs=" + this.f19303c + ", sourceExtension=" + Arrays.toString(this.f19304d) + ", sourceExtensionJsonProto3=" + this.f19305e + ", timezoneOffsetSeconds=" + this.f19306f + ", networkConnectionInfo=" + this.f19307g + "}";
    }
}
