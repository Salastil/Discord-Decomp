package vb;

/* loaded from: classes3.dex */
public final class h extends a {
    public final Integer a;

    /* renamed from: b, reason: collision with root package name */
    public final String f19293b;

    /* renamed from: c, reason: collision with root package name */
    public final String f19294c;

    /* renamed from: d, reason: collision with root package name */
    public final String f19295d;

    /* renamed from: e, reason: collision with root package name */
    public final String f19296e;

    /* renamed from: f, reason: collision with root package name */
    public final String f19297f;

    /* renamed from: g, reason: collision with root package name */
    public final String f19298g;

    /* renamed from: h, reason: collision with root package name */
    public final String f19299h;

    /* renamed from: i, reason: collision with root package name */
    public final String f19300i;
    public final String j;
    public final String k;

    /* renamed from: l, reason: collision with root package name */
    public final String f19301l;

    public h(Integer num, String str, String str2, String str3, String str4, String str5, String str6, String str7, String str8, String str9, String str10, String str11) {
        this.a = num;
        this.f19293b = str;
        this.f19294c = str2;
        this.f19295d = str3;
        this.f19296e = str4;
        this.f19297f = str5;
        this.f19298g = str6;
        this.f19299h = str7;
        this.f19300i = str8;
        this.j = str9;
        this.k = str10;
        this.f19301l = str11;
    }

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (obj instanceof a) {
            a aVar = (a) obj;
            Integer num = this.a;
            if (num != null ? num.equals(((h) aVar).a) : ((h) aVar).a == null) {
                String str = this.f19293b;
                if (str != null ? str.equals(((h) aVar).f19293b) : ((h) aVar).f19293b == null) {
                    String str2 = this.f19294c;
                    if (str2 != null ? str2.equals(((h) aVar).f19294c) : ((h) aVar).f19294c == null) {
                        String str3 = this.f19295d;
                        if (str3 != null ? str3.equals(((h) aVar).f19295d) : ((h) aVar).f19295d == null) {
                            String str4 = this.f19296e;
                            if (str4 != null ? str4.equals(((h) aVar).f19296e) : ((h) aVar).f19296e == null) {
                                String str5 = this.f19297f;
                                if (str5 != null ? str5.equals(((h) aVar).f19297f) : ((h) aVar).f19297f == null) {
                                    String str6 = this.f19298g;
                                    if (str6 != null ? str6.equals(((h) aVar).f19298g) : ((h) aVar).f19298g == null) {
                                        String str7 = this.f19299h;
                                        if (str7 != null ? str7.equals(((h) aVar).f19299h) : ((h) aVar).f19299h == null) {
                                            String str8 = this.f19300i;
                                            if (str8 != null ? str8.equals(((h) aVar).f19300i) : ((h) aVar).f19300i == null) {
                                                String str9 = this.j;
                                                if (str9 != null ? str9.equals(((h) aVar).j) : ((h) aVar).j == null) {
                                                    String str10 = this.k;
                                                    if (str10 != null ? str10.equals(((h) aVar).k) : ((h) aVar).k == null) {
                                                        String str11 = this.f19301l;
                                                        if (str11 != null ? str11.equals(((h) aVar).f19301l) : ((h) aVar).f19301l == null) {
                                                            return true;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        return false;
    }

    public final int hashCode() {
        Integer num = this.a;
        int hashCode = ((num == null ? 0 : num.hashCode()) ^ 1000003) * 1000003;
        String str = this.f19293b;
        int hashCode2 = (hashCode ^ (str == null ? 0 : str.hashCode())) * 1000003;
        String str2 = this.f19294c;
        int hashCode3 = (hashCode2 ^ (str2 == null ? 0 : str2.hashCode())) * 1000003;
        String str3 = this.f19295d;
        int hashCode4 = (hashCode3 ^ (str3 == null ? 0 : str3.hashCode())) * 1000003;
        String str4 = this.f19296e;
        int hashCode5 = (hashCode4 ^ (str4 == null ? 0 : str4.hashCode())) * 1000003;
        String str5 = this.f19297f;
        int hashCode6 = (hashCode5 ^ (str5 == null ? 0 : str5.hashCode())) * 1000003;
        String str6 = this.f19298g;
        int hashCode7 = (hashCode6 ^ (str6 == null ? 0 : str6.hashCode())) * 1000003;
        String str7 = this.f19299h;
        int hashCode8 = (hashCode7 ^ (str7 == null ? 0 : str7.hashCode())) * 1000003;
        String str8 = this.f19300i;
        int hashCode9 = (hashCode8 ^ (str8 == null ? 0 : str8.hashCode())) * 1000003;
        String str9 = this.j;
        int hashCode10 = (hashCode9 ^ (str9 == null ? 0 : str9.hashCode())) * 1000003;
        String str10 = this.k;
        int hashCode11 = (hashCode10 ^ (str10 == null ? 0 : str10.hashCode())) * 1000003;
        String str11 = this.f19301l;
        return (str11 != null ? str11.hashCode() : 0) ^ hashCode11;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("AndroidClientInfo{sdkVersion=");
        sb2.append(this.a);
        sb2.append(", model=");
        sb2.append(this.f19293b);
        sb2.append(", hardware=");
        sb2.append(this.f19294c);
        sb2.append(", device=");
        sb2.append(this.f19295d);
        sb2.append(", product=");
        sb2.append(this.f19296e);
        sb2.append(", osBuild=");
        sb2.append(this.f19297f);
        sb2.append(", manufacturer=");
        sb2.append(this.f19298g);
        sb2.append(", fingerprint=");
        sb2.append(this.f19299h);
        sb2.append(", locale=");
        sb2.append(this.f19300i);
        sb2.append(", country=");
        sb2.append(this.j);
        sb2.append(", mccMnc=");
        sb2.append(this.k);
        sb2.append(", applicationBuild=");
        return com.discord.chat.bridge.botuikit.a.j(sb2, this.f19301l, "}");
    }
}
