package s4;

import l4.v;
import n4.r;

/* loaded from: classes.dex */
public final class o implements b {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final int f17797b;

    /* renamed from: c, reason: collision with root package name */
    public final r4.a f17798c;

    /* renamed from: d, reason: collision with root package name */
    public final boolean f17799d;

    public o(String str, int i5, r4.a aVar, boolean z5) {
        this.a = str;
        this.f17797b = i5;
        this.f17798c = aVar;
        this.f17799d = z5;
    }

    @Override // s4.b
    public final n4.c a(v vVar, l4.i iVar, t4.b bVar) {
        return new r(vVar, bVar, this);
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("ShapePath{name=");
        sb2.append(this.a);
        sb2.append(", index=");
        return com.discord.chat.bridge.botuikit.a.i(sb2, this.f17797b, '}');
    }
}
