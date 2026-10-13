package d9;

import android.content.Context;
import android.content.res.Resources;
import androidx.appcompat.widget.b4;
import com.facebook.common.internal.Supplier;
import com.facebook.common.time.RealtimeSinceBootClock;
import com.facebook.drawee.backends.pipeline.PipelineDraweeControllerBuilder;
import com.facebook.fresco.animation.factory.AnimatedFactoryV2Impl;
import com.facebook.imagepipeline.core.DefaultExecutorSupplier;
import com.facebook.imagepipeline.core.ImagePipeline;
import com.facebook.imagepipeline.core.ImagePipelineConfig;
import ha.i;
import ha.k;
import ha.l;
import m8.d;
import m8.e;
import o8.h;
import th.t1;

/* loaded from: classes3.dex */
public final class c implements Supplier {
    public final Context a;

    /* renamed from: b, reason: collision with root package name */
    public final ImagePipeline f7454b;

    /* renamed from: c, reason: collision with root package name */
    public final b4 f7455c;

    /* JADX WARN: Type inference failed for: r10v3, types: [u9.a] */
    /* JADX WARN: Type inference failed for: r9v1, types: [u9.a] */
    public c(Context context, l lVar) {
        f9.b bVar;
        t1 t1Var;
        com.facebook.imagepipeline.core.c cVar = com.facebook.imagepipeline.core.c.f4653p;
        h.d(cVar, "ImagePipelineFactory was not initialized!");
        this.a = context;
        ImagePipeline e9 = cVar.e();
        this.f7454b = e9;
        b4 b4Var = new b4();
        this.f7455c = b4Var;
        Resources resources = context.getResources();
        synchronized (f9.b.class) {
            try {
                if (f9.b.f8471x == null) {
                    f9.b.f8471x = new f9.b();
                }
                bVar = f9.b.f8471x;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        AnimatedFactoryV2Impl a = cVar.a();
        if (a == null) {
            t1Var = null;
        } else {
            if (a.f4514h == null) {
                final int i5 = 0;
                ?? r92 = new Supplier() { // from class: u9.a
                    @Override // com.facebook.common.internal.Supplier
                    public final Object get() {
                        int i6;
                        switch (i5) {
                            case 0:
                                i6 = 2;
                                break;
                            default:
                                i6 = 3;
                                break;
                        }
                        return Integer.valueOf(i6);
                    }
                };
                d dVar = a.f4515i;
                d bVar2 = dVar == null ? new m8.b(((DefaultExecutorSupplier) a.f4508b).f4589b) : dVar;
                final int i6 = 1;
                ?? r10 = new Supplier() { // from class: u9.a
                    @Override // com.facebook.common.internal.Supplier
                    public final Object get() {
                        int i62;
                        switch (i6) {
                            case 0:
                                i62 = 2;
                                break;
                            default:
                                i62 = 3;
                                break;
                        }
                        return Integer.valueOf(i62);
                    }
                };
                if (a.f4512f == null) {
                    a.f4512f = new rj.b(a);
                }
                a.f4514h = new t1(a.f4512f, e.f(), bVar2, RealtimeSinceBootClock.get(), a.a, a.f4509c, r92, r10, new k8.c(1, Boolean.valueOf(a.k)), new k8.c(1, Boolean.valueOf(a.f4510d)), new k8.c(1, Integer.valueOf(a.j)), new k8.c(1, Integer.valueOf(a.f4516l)));
            }
            t1Var = a.f4514h;
        }
        k kVar = ((ImagePipelineConfig) cVar.f4655b).f4622u.j ? new k(19) : null;
        e f2 = e.f();
        i iVar = e9.f4601f;
        k8.c cVar2 = lVar != null ? (k8.c) lVar.f9613d : null;
        b4Var.f927d = resources;
        b4Var.f928e = bVar;
        b4Var.f929i = t1Var;
        b4Var.f930v = kVar;
        b4Var.f931w = f2;
        b4Var.f932x = iVar;
        b4Var.f933y = cVar2;
    }

    @Override // com.facebook.common.internal.Supplier
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public final PipelineDraweeControllerBuilder get() {
        return new PipelineDraweeControllerBuilder(this.a, this.f7455c, this.f7454b);
    }
}
