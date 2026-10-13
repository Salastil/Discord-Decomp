package vr;

import kotlin.jvm.functions.Function3;
import nr.i0;
import sr.u;

/* loaded from: classes3.dex */
public final class c {
    public final Object a;

    /* renamed from: b, reason: collision with root package name */
    public final Function3 f19544b;

    /* renamed from: c, reason: collision with root package name */
    public final Function3 f19545c;

    /* renamed from: d, reason: collision with root package name */
    public final Object f19546d;

    /* renamed from: e, reason: collision with root package name */
    public final lo.h f19547e;

    /* renamed from: f, reason: collision with root package name */
    public final Function3 f19548f;

    /* renamed from: g, reason: collision with root package name */
    public Object f19549g;

    /* renamed from: h, reason: collision with root package name */
    public int f19550h = -1;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ e f19551i;

    public c(e eVar, Object obj, Function3 function3, Function3 function32, a5.h hVar, lo.h hVar2, Function3 function33) {
        this.f19551i = eVar;
        this.a = obj;
        this.f19544b = function3;
        this.f19545c = function32;
        this.f19546d = hVar;
        this.f19547e = hVar2;
        this.f19548f = function33;
    }

    public final void a() {
        Object obj = this.f19549g;
        if (obj instanceof u) {
            ((u) obj).h(this.f19550h, this.f19551i.f19557d);
            return;
        }
        i0 i0Var = obj instanceof i0 ? (i0) obj : null;
        if (i0Var != null) {
            i0Var.dispose();
        }
    }
}
