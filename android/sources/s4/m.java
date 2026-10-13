package s4;

import android.graphics.Path;
import l4.v;

/* loaded from: classes.dex */
public final class m implements b {
    public final boolean a;

    /* renamed from: b, reason: collision with root package name */
    public final Path.FillType f17790b;

    /* renamed from: c, reason: collision with root package name */
    public final String f17791c;

    /* renamed from: d, reason: collision with root package name */
    public final r4.a f17792d;

    /* renamed from: e, reason: collision with root package name */
    public final r4.a f17793e;

    /* renamed from: f, reason: collision with root package name */
    public final boolean f17794f;

    public m(String str, boolean z5, Path.FillType fillType, r4.a aVar, r4.a aVar2, boolean z6) {
        this.f17791c = str;
        this.a = z5;
        this.f17790b = fillType;
        this.f17792d = aVar;
        this.f17793e = aVar2;
        this.f17794f = z6;
    }

    @Override // s4.b
    public final n4.c a(v vVar, l4.i iVar, t4.b bVar) {
        return new n4.g(vVar, bVar, this);
    }

    public final String toString() {
        return "ShapeFill{color=, fillEnabled=" + this.a + '}';
    }
}
