package s4;

import l4.v;
import n4.t;

/* loaded from: classes.dex */
public final class q implements b {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final r4.b f17808b;

    /* renamed from: c, reason: collision with root package name */
    public final r4.b f17809c;

    /* renamed from: d, reason: collision with root package name */
    public final r4.b f17810d;

    /* renamed from: e, reason: collision with root package name */
    public final boolean f17811e;

    public q(String str, int i5, r4.b bVar, r4.b bVar2, r4.b bVar3, boolean z5) {
        this.a = i5;
        this.f17808b = bVar;
        this.f17809c = bVar2;
        this.f17810d = bVar3;
        this.f17811e = z5;
    }

    @Override // s4.b
    public final n4.c a(v vVar, l4.i iVar, t4.b bVar) {
        return new t(bVar, this);
    }

    public final String toString() {
        return "Trim Path: {start: " + this.f17808b + ", end: " + this.f17809c + ", offset: " + this.f17810d + "}";
    }
}
