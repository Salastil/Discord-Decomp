package wb;

/* loaded from: classes3.dex */
public final class c implements ri.d {
    public static final c a = new c();

    /* renamed from: b, reason: collision with root package name */
    public static final ri.c f19691b = new ri.c("eventsDroppedCount", s4.h.j(s4.h.i(ui.e.class, new ui.a(1))));

    /* renamed from: c, reason: collision with root package name */
    public static final ri.c f19692c = new ri.c("reason", s4.h.j(s4.h.i(ui.e.class, new ui.a(3))));

    @Override // ri.a
    public final void a(Object obj, Object obj2) {
        zb.d dVar = (zb.d) obj;
        ri.e eVar = (ri.e) obj2;
        eVar.e(f19691b, dVar.a);
        eVar.a(f19692c, dVar.f21145b);
    }
}
