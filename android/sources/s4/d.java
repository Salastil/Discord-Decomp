package s4;

import android.graphics.Path;
import l4.v;

/* loaded from: classes.dex */
public final class d implements b {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final Path.FillType f17754b;

    /* renamed from: c, reason: collision with root package name */
    public final r4.a f17755c;

    /* renamed from: d, reason: collision with root package name */
    public final r4.a f17756d;

    /* renamed from: e, reason: collision with root package name */
    public final r4.a f17757e;

    /* renamed from: f, reason: collision with root package name */
    public final r4.a f17758f;

    /* renamed from: g, reason: collision with root package name */
    public final String f17759g;

    /* renamed from: h, reason: collision with root package name */
    public final boolean f17760h;

    public d(String str, int i5, Path.FillType fillType, r4.a aVar, r4.a aVar2, r4.a aVar3, r4.a aVar4, boolean z5) {
        this.a = i5;
        this.f17754b = fillType;
        this.f17755c = aVar;
        this.f17756d = aVar2;
        this.f17757e = aVar3;
        this.f17758f = aVar4;
        this.f17759g = str;
        this.f17760h = z5;
    }

    @Override // s4.b
    public final n4.c a(v vVar, l4.i iVar, t4.b bVar) {
        return new n4.h(vVar, iVar, bVar, this);
    }
}
