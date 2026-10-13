package com.margelo.nitro.playagerangedeclaration;

import fo.q;
import kotlin.Result;
import kotlin.jvm.internal.Intrinsics;
import n1.x;
import nr.j;

/* loaded from: classes3.dex */
public final class d implements jg.c, n1.h {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ j f6526d;

    public /* synthetic */ d(j jVar) {
        this.f6526d = jVar;
    }

    @Override // n1.h
    public void e(Object obj) {
        q1.c e9 = (q1.c) obj;
        Intrinsics.checkNotNullParameter(e9, "e");
        j jVar = this.f6526d;
        if (jVar.c()) {
            q qVar = Result.f13476e;
            jVar.resumeWith(ki.b.i(e9));
        }
    }

    @Override // jg.c
    public void onFailure(Exception e9) {
        Intrinsics.checkNotNullParameter(e9, "e");
        String message = e9.getMessage();
        if (message == null) {
            message = "Unknown error";
        }
        String str = message;
        q qVar = Result.f13476e;
        this.f6526d.resumeWith(new PlayAgeRangeDeclarationResult(false, null, null, str, null, null, null));
    }

    @Override // n1.h
    public void onResult(Object obj) {
        x result = (x) obj;
        Intrinsics.checkNotNullParameter(result, "result");
        j jVar = this.f6526d;
        if (jVar.c()) {
            q qVar = Result.f13476e;
            jVar.resumeWith(result);
        }
    }
}
