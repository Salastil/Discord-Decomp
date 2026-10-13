package rd;

import ke.d0;

/* loaded from: classes3.dex */
public final class i {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final String f17244b;

    /* renamed from: c, reason: collision with root package name */
    public final String f17245c;

    /* renamed from: d, reason: collision with root package name */
    public final String f17246d;

    /* renamed from: e, reason: collision with root package name */
    public final String f17247e;

    public i(String str, String str2, String str3, String str4, String str5) {
        this.a = str;
        this.f17244b = str2;
        this.f17245c = str3;
        this.f17246d = str4;
        this.f17247e = str5;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof i)) {
            return false;
        }
        i iVar = (i) obj;
        return d0.a(this.a, iVar.a) && d0.a(this.f17244b, iVar.f17244b) && d0.a(this.f17245c, iVar.f17245c) && d0.a(this.f17246d, iVar.f17246d) && d0.a(this.f17247e, iVar.f17247e);
    }

    public final int hashCode() {
        String str = this.a;
        int hashCode = (527 + (str != null ? str.hashCode() : 0)) * 31;
        String str2 = this.f17244b;
        int hashCode2 = (hashCode + (str2 != null ? str2.hashCode() : 0)) * 31;
        String str3 = this.f17245c;
        int hashCode3 = (hashCode2 + (str3 != null ? str3.hashCode() : 0)) * 31;
        String str4 = this.f17246d;
        int hashCode4 = (hashCode3 + (str4 != null ? str4.hashCode() : 0)) * 31;
        String str5 = this.f17247e;
        return hashCode4 + (str5 != null ? str5.hashCode() : 0);
    }
}
