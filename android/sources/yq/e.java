package yq;

import kotlin.jvm.functions.Function0;

/* loaded from: classes3.dex */
public final class e implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final o0 f21028d;

    /* renamed from: e, reason: collision with root package name */
    public final zq.b f21029e;

    /* renamed from: i, reason: collision with root package name */
    public final cr.e f21030i;

    /* renamed from: v, reason: collision with root package name */
    public final cr.e f21031v;

    public e(o0 o0Var, zq.b bVar, cr.e eVar, cr.e eVar2) {
        this.f21028d = o0Var;
        this.f21029e = bVar;
        this.f21030i = eVar;
        this.f21031v = eVar2;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        cr.e eVar = this.f21031v;
        return Boolean.valueOf(f.j(this.f21028d, this.f21029e.l0(this.f21030i), eVar));
    }
}
