package com.margelo.nitro.playagerangedeclaration;

import android.util.Log;
import com.facebook.react.bridge.ReactApplicationContext;
import com.margelo.nitro.NitroModules;
import com.margelo.nitro.rive.HybridFallbackFont;
import com.margelo.nitro.rive.HybridRiveView;
import com.margelo.nitro.rive.v0;
import jg.l;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import nr.g0;
import nr.j;
import nr.x;
import qa.t;
import sr.q;

/* loaded from: classes3.dex */
public final class e extends lo.h implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6527d;

    /* renamed from: e, reason: collision with root package name */
    public int f6528e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f6529i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ e(Object obj, Continuation continuation, int i5) {
        super(1, continuation);
        this.f6527d = i5;
        this.f6529i = obj;
    }

    @Override // lo.a
    public final Continuation create(Continuation continuation) {
        switch (this.f6527d) {
            case 0:
                return new e((PlayAgeRangeDeclaration) this.f6529i, continuation, 0);
            case 1:
                return new e((String) this.f6529i, continuation, 1);
            default:
                return new e((HybridRiveView) this.f6529i, continuation, 2);
        }
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Continuation continuation = (Continuation) obj;
        switch (this.f6527d) {
        }
        return ((e) create(continuation)).invokeSuspend(Unit.a);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        int i5 = this.f6527d;
        int i6 = 2;
        int i10 = 0;
        Continuation continuation = null;
        Object obj2 = this.f6529i;
        switch (i5) {
            case 0:
                ko.a aVar = ko.a.f13464d;
                int i11 = this.f6528e;
                try {
                    if (i11 == 0) {
                        ki.b.R(obj);
                        NitroModules.Companion.getClass();
                        ReactApplicationContext context = NitroModules.applicationContext;
                        if (context == null) {
                            throw new IllegalStateException("Application context not available");
                        }
                        Intrinsics.checkNotNullParameter(context, "context");
                        t tVar = new t(2, new qh.f(context));
                        Intrinsics.checkNotNullExpressionValue(tVar, "create(...)");
                        l8.a aVar2 = new l8.a(16);
                        Intrinsics.checkNotNullExpressionValue(aVar2, "build(...)");
                        this.f6528e = 1;
                        j jVar = new j(1, ko.f.b(this));
                        jVar.t();
                        l g6 = tVar.g(aVar2);
                        c function = new c(jVar, 0);
                        Intrinsics.checkNotNullParameter(function, "function");
                        u4.c cVar = new u4.c();
                        cVar.f18811d = function;
                        g6.getClass();
                        g6.d(jg.h.a, cVar);
                        g6.o(new d(jVar));
                        obj = jVar.r();
                        if (obj == aVar) {
                            Intrinsics.checkNotNullParameter(this, "frame");
                        }
                        if (obj == aVar) {
                            return aVar;
                        }
                    } else {
                        if (i11 != 1) {
                            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                        }
                        ki.b.R(obj);
                    }
                    return (PlayAgeRangeDeclarationResult) obj;
                } catch (Exception e9) {
                    Log.e("PlayAgeRangeDeclaration", "Initialization error", e9);
                    return new PlayAgeRangeDeclarationResult(false, null, null, a3.e.k("AGE_SIGNALS_INIT_ERROR: ", e9.getMessage()), null, null, null);
                }
            case 1:
                ko.a aVar3 = ko.a.f13464d;
                int i12 = this.f6528e;
                if (i12 == 0) {
                    ki.b.R(obj);
                    ur.e eVar = g0.a;
                    ur.d dVar = ur.d.f19093i;
                    com.margelo.nitro.rive.t tVar2 = new com.margelo.nitro.rive.t((String) obj2, continuation, i6);
                    this.f6528e = 1;
                    obj = x.A(dVar, tVar2, this);
                    if (obj == aVar3) {
                        return aVar3;
                    }
                } else {
                    if (i12 != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ki.b.R(obj);
                }
                return new HybridFallbackFont((byte[]) obj);
            default:
                ko.a aVar4 = ko.a.f13464d;
                int i13 = this.f6528e;
                if (i13 != 0) {
                    if (i13 != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ki.b.R(obj);
                    return obj;
                }
                ki.b.R(obj);
                ur.e eVar2 = g0.a;
                or.d dVar2 = q.a;
                v0 v0Var = new v0((HybridRiveView) obj2, continuation, i10);
                this.f6528e = 1;
                Object A = x.A(dVar2, v0Var, this);
                return A == aVar4 ? aVar4 : A;
        }
    }
}
