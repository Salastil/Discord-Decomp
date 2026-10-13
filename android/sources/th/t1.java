package th;

import android.graphics.Bitmap;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import com.facebook.common.time.RealtimeSinceBootClock;
import com.facebook.imagepipeline.bitmaps.PlatformBitmapFactory;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.ScheduledExecutorService;

/* loaded from: classes3.dex */
public final class t1 implements uh.g, na.a {
    public final Object E;
    public final Object F;
    public final Object G;

    /* renamed from: d, reason: collision with root package name */
    public final Object f18587d;

    /* renamed from: e, reason: collision with root package name */
    public final Object f18588e;

    /* renamed from: i, reason: collision with root package name */
    public final Object f18589i;

    /* renamed from: v, reason: collision with root package name */
    public final Object f18590v;

    /* renamed from: w, reason: collision with root package name */
    public final Object f18591w;

    /* renamed from: x, reason: collision with root package name */
    public final Object f18592x;

    /* renamed from: y, reason: collision with root package name */
    public final Object f18593y;

    public t1(uh.f fVar, qa.t tVar, uh.f fVar2, uh.f fVar3, uh.f fVar4, uh.f fVar5, uh.f fVar6, uh.f fVar7, uh.f fVar8, uh.f fVar9) {
        this.f18587d = fVar;
        this.G = tVar;
        this.f18588e = fVar2;
        this.f18589i = fVar3;
        this.f18590v = fVar4;
        this.f18591w = fVar5;
        this.f18592x = fVar6;
        this.f18593y = fVar7;
        this.E = fVar8;
        this.F = fVar9;
    }

    @Override // na.a
    public Drawable G(oa.c cVar) {
        ba.b bVar;
        e4.i iVar;
        n9.b bVar2;
        p9.c cVar2;
        s9.a aVar;
        p9.a aVar2;
        p9.a aVar3 = null;
        if (!(cVar instanceof oa.b)) {
            return null;
        }
        oa.b bVar3 = (oa.b) cVar;
        synchronized (bVar3) {
            e4.i iVar2 = bVar3.f15803v;
            bVar = iVar2 == null ? null : (ba.b) iVar2.f7952d;
        }
        synchronized (bVar3) {
            iVar = bVar3.f15803v;
        }
        iVar.getClass();
        Bitmap.Config l6 = bVar != null ? bVar.l() : null;
        PlatformBitmapFactory platformBitmapFactory = (PlatformBitmapFactory) this.f18591w;
        k8.c cVar3 = (k8.c) this.f18593y;
        ba.b bVar4 = (ba.b) iVar.f7952d;
        da.a b10 = ((da.b) this.f18587d).b(iVar, new Rect(0, 0, bVar4.getWidth(), bVar4.getHeight()));
        qd.f fVar = new qd.f(b10);
        Integer num = 2;
        int intValue = num.intValue();
        if (intValue == 1) {
            bVar2 = new o9.b(new com.google.firebase.messaging.r(new o9.a(iVar.hashCode(), false), (ha.e) this.f18592x), true);
        } else if (intValue == 2) {
            bVar2 = new o9.b(new com.google.firebase.messaging.r(new o9.a(iVar.hashCode(), false), (ha.e) this.f18592x), false);
        } else if (intValue != 3) {
            bVar2 = new j8.c();
        } else {
            a5.a0 a0Var = new a5.a0(12, (short) 0);
            a0Var.f124e = -1;
            bVar2 = a0Var;
        }
        s9.a aVar4 = new s9.a(bVar2, b10, ((Boolean) cVar3.f13206b).booleanValue());
        Integer num2 = 3;
        int intValue2 = num2.intValue();
        if (intValue2 > 0) {
            aVar3 = new p9.d(intValue2, 0);
            if (l6 == null) {
                l6 = Bitmap.Config.ARGB_8888;
            }
            cVar2 = new p9.c(platformBitmapFactory, aVar4, l6, (ExecutorService) this.f18589i);
        } else {
            cVar2 = null;
        }
        if (((Boolean) cVar3.f13206b).booleanValue()) {
            aVar = aVar4;
            aVar2 = new p9.f((String) iVar.f7953e, fVar, aVar, new r9.e(platformBitmapFactory, ((Integer) ((k8.c) this.F).f13206b).intValue(), ((Integer) ((k8.c) this.G).f13206b).intValue()), ((Boolean) ((k8.c) this.E).f13206b).booleanValue());
        } else {
            aVar = aVar4;
            aVar2 = aVar3;
        }
        n9.a aVar5 = new n9.a((PlatformBitmapFactory) this.f18591w, bVar2, fVar, aVar, ((Boolean) cVar3.f13206b).booleanValue(), aVar2, cVar2);
        return new t9.a(new m9.a(aVar5, aVar5, (v8.a) this.f18590v, (ScheduledExecutorService) this.f18588e));
    }

    @Override // uh.g
    public Object a() {
        Object a = ((uh.f) this.f18587d).a();
        uh.f fVar = new uh.f(new rd.u(7, (qa.t) this.G));
        Object a10 = ((uh.f) this.f18588e).a();
        Object a11 = ((uh.f) this.f18589i).a();
        uh.b bVar = (uh.b) ((uh.f) this.f18590v).a();
        Object a12 = ((uh.f) this.f18591w).a();
        Object a13 = ((uh.f) this.f18592x).a();
        s sVar = (s) a;
        p pVar = (p) a10;
        r rVar = (r) a11;
        v0 v0Var = (v0) a12;
        p0 p0Var = (p0) a13;
        return new s1(sVar, fVar, pVar, rVar, bVar, v0Var, p0Var, new uh.f(new rd.u(7, (uh.f) this.E)), (g1) ((uh.f) this.F).a());
    }

    @Override // na.a
    public boolean h(oa.c cVar) {
        return cVar instanceof oa.b;
    }

    public t1(da.b bVar, m8.e eVar, m8.d dVar, RealtimeSinceBootClock realtimeSinceBootClock, PlatformBitmapFactory platformBitmapFactory, ha.e eVar2, u9.a aVar, u9.a aVar2, k8.c cVar, k8.c cVar2, k8.c cVar3, k8.c cVar4) {
        this.f18587d = bVar;
        this.f18588e = eVar;
        this.f18589i = dVar;
        this.f18590v = realtimeSinceBootClock;
        this.f18591w = platformBitmapFactory;
        this.f18592x = eVar2;
        this.f18593y = cVar;
        this.F = cVar3;
        this.E = cVar2;
        this.G = cVar4;
    }
}
