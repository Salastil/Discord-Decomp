package wb;

/* loaded from: classes3.dex */
public final class f implements ri.d {
    public static final f a = new f();

    /* renamed from: b, reason: collision with root package name */
    public static final ri.c f19695b = new ri.c("currentCacheSizeBytes", s4.h.j(s4.h.i(ui.e.class, new ui.a(1))));

    /* renamed from: c, reason: collision with root package name */
    public static final ri.c f19696c = new ri.c("maxCacheSizeBytes", s4.h.j(s4.h.i(ui.e.class, new ui.a(2))));

    @Override // ri.a
    public final void a(Object obj, Object obj2) {
        zb.f fVar = (zb.f) obj;
        ri.e eVar = (ri.e) obj2;
        eVar.e(f19695b, fVar.a);
        eVar.e(f19696c, fVar.f21148b);
    }
}
