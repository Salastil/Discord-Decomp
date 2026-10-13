package wb;

/* loaded from: classes3.dex */
public final class g implements ri.d {
    public static final g a = new g();

    /* renamed from: b, reason: collision with root package name */
    public static final ri.c f19697b = new ri.c("startMs", s4.h.j(s4.h.i(ui.e.class, new ui.a(1))));

    /* renamed from: c, reason: collision with root package name */
    public static final ri.c f19698c = new ri.c("endMs", s4.h.j(s4.h.i(ui.e.class, new ui.a(2))));

    @Override // ri.a
    public final void a(Object obj, Object obj2) {
        zb.g gVar = (zb.g) obj;
        ri.e eVar = (ri.e) obj2;
        eVar.e(f19697b, gVar.a);
        eVar.e(f19698c, gVar.f21149b);
    }
}
