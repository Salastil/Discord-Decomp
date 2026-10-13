package rd;

import ke.d0;

/* loaded from: classes3.dex */
public final class f {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final String f17236b;

    /* renamed from: c, reason: collision with root package name */
    public final String f17237c;

    public f(String str, String str2, String str3) {
        this.a = str;
        this.f17236b = str2;
        this.f17237c = str3;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && f.class == obj.getClass()) {
            f fVar = (f) obj;
            if (d0.a(this.a, fVar.a) && d0.a(this.f17236b, fVar.f17236b) && d0.a(this.f17237c, fVar.f17237c)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        int hashCode = this.a.hashCode() * 31;
        String str = this.f17236b;
        int hashCode2 = (hashCode + (str != null ? str.hashCode() : 0)) * 31;
        String str2 = this.f17237c;
        return hashCode2 + (str2 != null ? str2.hashCode() : 0);
    }
}
