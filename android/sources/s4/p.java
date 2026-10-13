package s4;

import java.util.ArrayList;
import l4.v;
import n4.s;

/* loaded from: classes.dex */
public final class p implements b {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final r4.b f17800b;

    /* renamed from: c, reason: collision with root package name */
    public final ArrayList f17801c;

    /* renamed from: d, reason: collision with root package name */
    public final r4.a f17802d;

    /* renamed from: e, reason: collision with root package name */
    public final r4.a f17803e;

    /* renamed from: f, reason: collision with root package name */
    public final r4.b f17804f;

    /* renamed from: g, reason: collision with root package name */
    public final int f17805g;

    /* renamed from: h, reason: collision with root package name */
    public final int f17806h;

    /* renamed from: i, reason: collision with root package name */
    public final float f17807i;
    public final boolean j;

    public p(String str, r4.b bVar, ArrayList arrayList, r4.a aVar, r4.a aVar2, r4.b bVar2, int i5, int i6, float f2, boolean z5) {
        this.a = str;
        this.f17800b = bVar;
        this.f17801c = arrayList;
        this.f17802d = aVar;
        this.f17803e = aVar2;
        this.f17804f = bVar2;
        this.f17805g = i5;
        this.f17806h = i6;
        this.f17807i = f2;
        this.j = z5;
    }

    @Override // s4.b
    public final n4.c a(v vVar, l4.i iVar, t4.b bVar) {
        return new s(vVar, bVar, this);
    }
}
