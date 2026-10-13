package com.facebook.imagepipeline.producers;

import java.util.concurrent.atomic.AtomicBoolean;

/* loaded from: classes3.dex */
public final class o extends f {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ Object f4780b;

    public /* synthetic */ o(int i5, Object obj) {
        this.a = i5;
        this.f4780b = obj;
    }

    @Override // com.facebook.imagepipeline.producers.f
    public final void a() {
        switch (this.a) {
            case 0:
                break;
            case 1:
                ((AtomicBoolean) this.f4780b).set(true);
                break;
            case 2:
                ((l0) this.f4780b).a();
                break;
            case 3:
                ((n0) this.f4780b).a();
                break;
            case 4:
                ((p0) this.f4780b).a();
                break;
            case 5:
                ((n0) this.f4780b).a();
                break;
            default:
                y0 y0Var = (y0) this.f4780b;
                if (y0Var.m()) {
                    y0Var.f4801b.a();
                    break;
                }
                break;
        }
    }

    @Override // com.facebook.imagepipeline.producers.f
    public void b() {
        switch (this.a) {
            case 0:
                p pVar = (p) this.f4780b;
                if (pVar.f4782c.P()) {
                    pVar.f4787h.c();
                    break;
                }
                break;
        }
    }

    private final void e() {
    }
}
