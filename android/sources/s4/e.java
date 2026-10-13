package s4;

import java.util.ArrayList;
import l4.v;

/* loaded from: classes.dex */
public final class e implements b {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final int f17761b;

    /* renamed from: c, reason: collision with root package name */
    public final r4.a f17762c;

    /* renamed from: d, reason: collision with root package name */
    public final r4.a f17763d;

    /* renamed from: e, reason: collision with root package name */
    public final r4.a f17764e;

    /* renamed from: f, reason: collision with root package name */
    public final r4.a f17765f;

    /* renamed from: g, reason: collision with root package name */
    public final r4.b f17766g;

    /* renamed from: h, reason: collision with root package name */
    public final int f17767h;

    /* renamed from: i, reason: collision with root package name */
    public final int f17768i;
    public final float j;
    public final ArrayList k;

    /* renamed from: l, reason: collision with root package name */
    public final r4.b f17769l;

    /* renamed from: m, reason: collision with root package name */
    public final boolean f17770m;

    public e(String str, int i5, r4.a aVar, r4.a aVar2, r4.a aVar3, r4.a aVar4, r4.b bVar, int i6, int i10, float f2, ArrayList arrayList, r4.b bVar2, boolean z5) {
        this.a = str;
        this.f17761b = i5;
        this.f17762c = aVar;
        this.f17763d = aVar2;
        this.f17764e = aVar3;
        this.f17765f = aVar4;
        this.f17766g = bVar;
        this.f17767h = i6;
        this.f17768i = i10;
        this.j = f2;
        this.k = arrayList;
        this.f17769l = bVar2;
        this.f17770m = z5;
    }

    @Override // s4.b
    public final n4.c a(v vVar, l4.i iVar, t4.b bVar) {
        return new n4.i(vVar, bVar, this);
    }
}
