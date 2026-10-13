package s4;

import l4.v;
import l4.w;

/* loaded from: classes.dex */
public final class g implements b {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final boolean f17774b;

    public g(String str, int i5, boolean z5) {
        this.a = i5;
        this.f17774b = z5;
    }

    @Override // s4.b
    public final n4.c a(v vVar, l4.i iVar, t4.b bVar) {
        if (vVar.K.a.contains(w.f13805d)) {
            return new n4.l(this);
        }
        x4.c.b("Animation contains merge paths but they are disabled.");
        return null;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("MergePaths{mode=");
        int i5 = this.a;
        sb2.append(i5 != 1 ? i5 != 2 ? i5 != 3 ? i5 != 4 ? i5 != 5 ? "null" : "EXCLUDE_INTERSECTIONS" : "INTERSECT" : "SUBTRACT" : "ADD" : "MERGE");
        sb2.append('}');
        return sb2.toString();
    }
}
