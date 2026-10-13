package af;

import java.util.Arrays;

/* loaded from: classes3.dex */
public final class a {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final e4.e f532b;

    /* renamed from: c, reason: collision with root package name */
    public final ze.b f533c;

    /* renamed from: d, reason: collision with root package name */
    public final String f534d;

    public a(e4.e eVar, ze.b bVar, String str) {
        this.f532b = eVar;
        this.f533c = bVar;
        this.f534d = str;
        this.a = Arrays.hashCode(new Object[]{eVar, bVar, str});
    }

    public final boolean equals(Object obj) {
        if (obj == null) {
            return false;
        }
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof a)) {
            return false;
        }
        a aVar = (a) obj;
        return bf.t.j(this.f532b, aVar.f532b) && bf.t.j(this.f533c, aVar.f533c) && bf.t.j(this.f534d, aVar.f534d);
    }

    public final int hashCode() {
        return this.a;
    }
}
