package qc;

/* loaded from: classes3.dex */
public final class r {
    public final t a;

    /* renamed from: b, reason: collision with root package name */
    public final t f16797b;

    public r(t tVar, t tVar2) {
        this.a = tVar;
        this.f16797b = tVar2;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && r.class == obj.getClass()) {
            r rVar = (r) obj;
            if (this.a.equals(rVar.a) && this.f16797b.equals(rVar.f16797b)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return this.f16797b.hashCode() + (this.a.hashCode() * 31);
    }

    public final String toString() {
        String str;
        StringBuilder sb2 = new StringBuilder("[");
        t tVar = this.a;
        sb2.append(tVar);
        t tVar2 = this.f16797b;
        if (tVar.equals(tVar2)) {
            str = "";
        } else {
            str = ", " + tVar2;
        }
        return com.discord.chat.bridge.botuikit.a.j(sb2, str, "]");
    }
}
