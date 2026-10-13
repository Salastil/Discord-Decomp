package jf;

import android.content.Context;
import androidx.appcompat.widget.b4;
import e4.r;
import javax.inject.Provider;
import r3.g;
import rd.u;
import ve.i;
import wb.j;
import wb.m;

/* loaded from: classes3.dex */
public final class b {
    public Context a;

    public j a() {
        Context context = this.a;
        if (context == null) {
            throw new IllegalStateException(Context.class.getCanonicalName() + " must be set");
        }
        j jVar = new j();
        jVar.f19706d = yb.a.a(m.a);
        u uVar = new u(11, context);
        jVar.f19707e = uVar;
        jVar.f19708i = yb.a.a(new r(25, uVar, new g(7, uVar)));
        u uVar2 = jVar.f19707e;
        jVar.f19709v = new i(uVar2);
        Provider a = yb.a.a(new u4.c(uVar2));
        jVar.f19710w = a;
        Provider a10 = yb.a.a(new e4.c(8, jVar.f19709v, a));
        jVar.f19711x = a10;
        r8.c cVar = new r8.c(2);
        u uVar3 = jVar.f19707e;
        e4.m mVar = new e4.m(uVar3, a10, cVar, 6);
        Provider provider = jVar.f19706d;
        Provider provider2 = jVar.f19708i;
        jVar.f19712y = yb.a.a(new k2.r(new f9.b(provider, provider2, mVar, a10, a10), new b4(uVar3, provider2, a10, mVar, provider, a10, a10), new e4.i(provider, a10, mVar, a10), 23));
        return jVar;
    }
}
