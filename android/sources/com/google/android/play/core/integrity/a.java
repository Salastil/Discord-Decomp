package com.google.android.play.core.integrity;

import a5.k0;
import android.text.TextUtils;
import di.c0;
import jg.h;
import jg.j;
import jg.l;
import xh.k;
import xh.r;

/* loaded from: classes3.dex */
public final class a implements StandardIntegrityManager {
    public final c a;

    /* renamed from: b, reason: collision with root package name */
    public final f f6175b;

    public a(c cVar, f fVar) {
        this.a = cVar;
        this.f6175b = fVar;
    }

    @Override // com.google.android.play.core.integrity.StandardIntegrityManager
    public final l a(r rVar) {
        if (!TextUtils.isEmpty(null)) {
            try {
                return k0.s(new e(this.f6175b, rVar.a, Long.parseLong(null)));
            } catch (NumberFormatException e9) {
                return k0.r(e9);
            }
        }
        long j = rVar.a;
        Object[] objArr = {Long.valueOf(j)};
        c cVar = this.a;
        cVar.a.b("warmUpIntegrityToken(%s)", objArr);
        jg.g gVar = new jg.g();
        k kVar = new k(cVar, gVar, j, gVar);
        di.c cVar2 = cVar.f6180e;
        cVar2.getClass();
        cVar2.a().post(new c0(cVar2, gVar, gVar, kVar));
        e4.l lVar = new e4.l(26, this, rVar);
        l lVar2 = gVar.a;
        lVar2.getClass();
        h4.a aVar = h.a;
        l lVar3 = new l();
        lVar2.f12767b.e(new j(aVar, lVar, lVar3));
        lVar2.t();
        return lVar3;
    }
}
