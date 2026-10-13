package com.google.android.play.core.integrity;

import com.google.android.play.core.integrity.StandardIntegrityManager;
import di.c0;
import java.util.Objects;
import jg.l;
import xh.s;

/* loaded from: classes3.dex */
public final class e implements StandardIntegrityManager.StandardIntegrityTokenProvider {
    public final /* synthetic */ long a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ long f6181b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ f f6182c;

    public e(f fVar, long j, long j5) {
        this.a = j;
        this.f6181b = j5;
        Objects.requireNonNull(fVar);
        this.f6182c = fVar;
    }

    @Override // com.google.android.play.core.integrity.StandardIntegrityManager.StandardIntegrityTokenProvider
    public final l a(s sVar) {
        c cVar = this.f6182c.a;
        long j = this.f6181b;
        cVar.a.b("requestExpressIntegrityToken(%s)", Long.valueOf(j));
        jg.g gVar = new jg.g();
        xh.l lVar = new xh.l(cVar, gVar, sVar, this.a, j, gVar);
        di.c cVar2 = cVar.f6180e;
        cVar2.getClass();
        cVar2.a().post(new c0(cVar2, gVar, gVar, lVar));
        return gVar.a;
    }
}
