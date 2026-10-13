package com.google.firebase.messaging;

/* loaded from: classes3.dex */
public final class a implements ri.d {
    public static final a a = new a();

    /* renamed from: b, reason: collision with root package name */
    public static final ri.c f6201b = new ri.c("projectNumber", s4.h.j(s4.h.i(ui.e.class, new ui.a(1))));

    /* renamed from: c, reason: collision with root package name */
    public static final ri.c f6202c = new ri.c("messageId", s4.h.j(s4.h.i(ui.e.class, new ui.a(2))));

    /* renamed from: d, reason: collision with root package name */
    public static final ri.c f6203d = new ri.c("instanceId", s4.h.j(s4.h.i(ui.e.class, new ui.a(3))));

    /* renamed from: e, reason: collision with root package name */
    public static final ri.c f6204e = new ri.c("messageType", s4.h.j(s4.h.i(ui.e.class, new ui.a(4))));

    /* renamed from: f, reason: collision with root package name */
    public static final ri.c f6205f = new ri.c("sdkPlatform", s4.h.j(s4.h.i(ui.e.class, new ui.a(5))));

    /* renamed from: g, reason: collision with root package name */
    public static final ri.c f6206g = new ri.c("packageName", s4.h.j(s4.h.i(ui.e.class, new ui.a(6))));

    /* renamed from: h, reason: collision with root package name */
    public static final ri.c f6207h = new ri.c("collapseKey", s4.h.j(s4.h.i(ui.e.class, new ui.a(7))));

    /* renamed from: i, reason: collision with root package name */
    public static final ri.c f6208i = new ri.c("priority", s4.h.j(s4.h.i(ui.e.class, new ui.a(8))));
    public static final ri.c j = new ri.c("ttl", s4.h.j(s4.h.i(ui.e.class, new ui.a(9))));
    public static final ri.c k = new ri.c("topic", s4.h.j(s4.h.i(ui.e.class, new ui.a(10))));

    /* renamed from: l, reason: collision with root package name */
    public static final ri.c f6209l = new ri.c("bulkId", s4.h.j(s4.h.i(ui.e.class, new ui.a(11))));

    /* renamed from: m, reason: collision with root package name */
    public static final ri.c f6210m = new ri.c("event", s4.h.j(s4.h.i(ui.e.class, new ui.a(12))));

    /* renamed from: n, reason: collision with root package name */
    public static final ri.c f6211n = new ri.c("analyticsLabel", s4.h.j(s4.h.i(ui.e.class, new ui.a(13))));

    /* renamed from: o, reason: collision with root package name */
    public static final ri.c f6212o = new ri.c("campaignId", s4.h.j(s4.h.i(ui.e.class, new ui.a(14))));

    /* renamed from: p, reason: collision with root package name */
    public static final ri.c f6213p = new ri.c("composerLabel", s4.h.j(s4.h.i(ui.e.class, new ui.a(15))));

    @Override // ri.a
    public final void a(Object obj, Object obj2) {
        fj.d dVar = (fj.d) obj;
        ri.e eVar = (ri.e) obj2;
        eVar.e(f6201b, dVar.a);
        eVar.a(f6202c, dVar.f8757b);
        eVar.a(f6203d, dVar.f8758c);
        eVar.a(f6204e, dVar.f8759d);
        eVar.a(f6205f, fj.c.ANDROID);
        eVar.a(f6206g, dVar.f8760e);
        eVar.a(f6207h, dVar.f8761f);
        eVar.d(f6208i, 0);
        eVar.d(j, dVar.f8762g);
        eVar.a(k, dVar.f8763h);
        eVar.e(f6209l, 0L);
        eVar.a(f6210m, fj.a.MESSAGE_DELIVERED);
        eVar.a(f6211n, dVar.f8764i);
        eVar.e(f6212o, 0L);
        eVar.a(f6213p, dVar.j);
    }
}
