package com.margelo.nitro.core;

import fo.q;
import kotlin.Result;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class g implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6521d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ jo.c f6522e;

    public /* synthetic */ g(jo.c cVar, int i5) {
        this.f6521d = i5;
        this.f6522e = cVar;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        int i5 = this.f6521d;
        jo.c cVar = this.f6522e;
        switch (i5) {
            case 0:
                q qVar = Result.f13476e;
                cVar.resumeWith(obj);
                break;
            default:
                Throwable error = (Throwable) obj;
                Intrinsics.checkNotNullParameter(error, "error");
                q qVar2 = Result.f13476e;
                cVar.resumeWith(ki.b.i(error));
                break;
        }
        return Unit.a;
    }
}
