package s4;

import java.util.Arrays;
import java.util.List;
import l4.v;

/* loaded from: classes.dex */
public final class n implements b {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final List f17795b;

    /* renamed from: c, reason: collision with root package name */
    public final boolean f17796c;

    public n(String str, List list, boolean z5) {
        this.a = str;
        this.f17795b = list;
        this.f17796c = z5;
    }

    @Override // s4.b
    public final n4.c a(v vVar, l4.i iVar, t4.b bVar) {
        return new n4.d(vVar, bVar, this, iVar);
    }

    public final String toString() {
        return "ShapeGroup{name='" + this.a + "' Shapes: " + Arrays.toString(this.f17795b.toArray()) + '}';
    }
}
