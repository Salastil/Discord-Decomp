package com.google.android.play.core.integrity;

import android.os.Bundle;
import android.os.Process;
import di.a0;
import java.util.Objects;
import s4.h;
import xh.m;

/* loaded from: classes3.dex */
public final class b extends m {

    /* renamed from: i, reason: collision with root package name */
    public final a0 f6176i;
    public final /* synthetic */ c j;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public b(c cVar, jg.g gVar) {
        super(cVar, gVar);
        Objects.requireNonNull(cVar);
        this.j = cVar;
        this.f6176i = new a0("OnRequestIntegrityTokenCallback");
    }

    @Override // xh.m, di.w
    public final void f(Bundle bundle) {
        super.f(bundle);
        this.f6176i.b("onRequestExpressIntegrityToken", new Object[0]);
        ze.e a = this.j.f6179d.a(bundle);
        jg.g gVar = this.f20484g;
        if (a != null) {
            gVar.c(a);
            return;
        }
        bundle.getLong("request.token.sid");
        h.d(Process.myUid(), "UID: [", Process.myPid(), "]  PID: [", "] ").concat("IntegrityDialogWrapper");
        String string = bundle.getString("token");
        if (string == null) {
            throw new NullPointerException("Null token");
        }
        gVar.d(new d(string));
    }
}
