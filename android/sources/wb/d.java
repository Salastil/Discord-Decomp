package wb;

/* loaded from: classes3.dex */
public final class d implements ri.d {
    public static final d a = new d();

    /* renamed from: b, reason: collision with root package name */
    public static final ri.c f19693b = new ri.c("logSource", s4.h.j(s4.h.i(ui.e.class, new ui.a(1))));

    /* renamed from: c, reason: collision with root package name */
    public static final ri.c f19694c = new ri.c("logEventDropped", s4.h.j(s4.h.i(ui.e.class, new ui.a(2))));

    @Override // ri.a
    public final void a(Object obj, Object obj2) {
        zb.e eVar = (zb.e) obj;
        ri.e eVar2 = (ri.e) obj2;
        eVar2.a(f19693b, eVar.a);
        eVar2.a(f19694c, eVar.f21147b);
    }
}
