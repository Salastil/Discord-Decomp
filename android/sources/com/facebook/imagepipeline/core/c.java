package com.facebook.imagepipeline.core;

import android.os.Build;
import com.facebook.common.internal.Supplier;
import com.facebook.fresco.animation.factory.AnimatedFactoryV2Impl;
import com.facebook.imagepipeline.bitmaps.PlatformBitmapFactory;
import com.facebook.imagepipeline.producers.g1;
import ha.e;
import ha.h;
import ha.k;
import ha.l;
import ja.d;
import ja.f;
import ja.g;
import ja.j;
import kotlin.jvm.internal.Intrinsics;
import qa.s;
import qa.v;
import w3.q;

/* loaded from: classes3.dex */
public final class c {

    /* renamed from: p, reason: collision with root package name */
    public static c f4653p;

    /* renamed from: q, reason: collision with root package name */
    public static ImagePipeline f4654q;
    public final g1 a;

    /* renamed from: b, reason: collision with root package name */
    public final f f4655b;

    /* renamed from: c, reason: collision with root package name */
    public final l f4656c;

    /* renamed from: d, reason: collision with root package name */
    public final d f4657d;

    /* renamed from: e, reason: collision with root package name */
    public h f4658e;

    /* renamed from: f, reason: collision with root package name */
    public e4.c f4659f;

    /* renamed from: g, reason: collision with root package name */
    public h f4660g;

    /* renamed from: h, reason: collision with root package name */
    public e4.c f4661h;

    /* renamed from: i, reason: collision with root package name */
    public p9.c f4662i;
    public ua.d j;
    public g k;

    /* renamed from: l, reason: collision with root package name */
    public j f4663l;

    /* renamed from: m, reason: collision with root package name */
    public ga.a f4664m;

    /* renamed from: n, reason: collision with root package name */
    public ra.b f4665n;

    /* renamed from: o, reason: collision with root package name */
    public AnimatedFactoryV2Impl f4666o;

    /* JADX WARN: Type inference failed for: r6v4, types: [java.lang.Object, kotlin.Lazy] */
    public c(f fVar) {
        ta.a.D();
        fVar.getClass();
        this.f4655b = fVar;
        ImagePipelineConfig imagePipelineConfig = (ImagePipelineConfig) fVar;
        b bVar = imagePipelineConfig.f4622u;
        bVar.getClass();
        this.a = new g1(imagePipelineConfig.f4611h.f4591d);
        l8.a aVar = imagePipelineConfig.f4624w;
        l lVar = new l();
        lVar.f9613d = new gj.c(19, aVar);
        this.f4656c = lVar;
        ta.a.D();
        this.f4657d = imagePipelineConfig.f4609f;
        if (bVar.j) {
            ((aa.d) aa.d.f277d.getValue()).f279c = true;
        }
    }

    public static synchronized void h(ImagePipelineConfig imagePipelineConfig) {
        synchronized (c.class) {
            try {
                if (f4653p != null) {
                    p8.a.r(c.class, "ImagePipelineFactory has already been initialized! `ImagePipelineFactory.initialize(...)` should only be called once to avoid unexpected behavior.");
                }
                f4653p = new c(imagePipelineConfig);
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public final AnimatedFactoryV2Impl a() {
        if (this.f4666o == null) {
            PlatformBitmapFactory f2 = f();
            f fVar = this.f4655b;
            ImagePipelineConfig imagePipelineConfig = (ImagePipelineConfig) fVar;
            DefaultExecutorSupplier defaultExecutorSupplier = imagePipelineConfig.f4611h;
            e b10 = b();
            b bVar = imagePipelineConfig.f4622u;
            boolean z5 = bVar.f4646c;
            bVar.getClass();
            b bVar2 = imagePipelineConfig.f4622u;
            int i5 = bVar2.f4651h;
            bVar2.getClass();
            fVar.getClass();
            if (!q.a) {
                try {
                    Class cls = Boolean.TYPE;
                    Class cls2 = Integer.TYPE;
                    Object newInstance = AnimatedFactoryV2Impl.class.getConstructor(PlatformBitmapFactory.class, ja.e.class, e.class, cls, cls, cls2, cls2, m8.d.class).newInstance(f2, defaultExecutorSupplier, b10, Boolean.valueOf(z5), Boolean.FALSE, Integer.valueOf(i5), 1000, null);
                    Intrinsics.checkNotNull(newInstance, "null cannot be cast to non-null type com.facebook.imagepipeline.animated.factory.AnimatedFactory");
                    q.f19670b = (AnimatedFactoryV2Impl) newInstance;
                } catch (Throwable unused) {
                }
                if (q.f19670b != null) {
                    q.a = true;
                }
            }
            this.f4666o = q.f19670b;
        }
        return this.f4666o;
    }

    public final e b() {
        if (this.f4658e == null) {
            f fVar = this.f4655b;
            ImagePipelineConfig imagePipelineConfig = (ImagePipelineConfig) fVar;
            l8.a aVar = imagePipelineConfig.f4625x;
            Supplier supplier = imagePipelineConfig.a;
            r8.c cVar = imagePipelineConfig.f4613l;
            io.sentry.hints.j jVar = imagePipelineConfig.f4605b;
            imagePipelineConfig.f4622u.getClass();
            imagePipelineConfig.f4622u.getClass();
            fVar.getClass();
            aVar.getClass();
            h hVar = new h(new j8.c(), supplier);
            cVar.getClass();
            this.f4658e = hVar;
        }
        return this.f4658e;
    }

    public final e4.c c() {
        if (this.f4659f == null) {
            e b10 = b();
            k kVar = ((ImagePipelineConfig) this.f4655b).f4612i;
            kVar.getClass();
            this.f4659f = new e4.c(10, b10, new l(kVar));
        }
        return this.f4659f;
    }

    public final e4.c d() {
        if (this.f4661h == null) {
            f fVar = this.f4655b;
            fVar.getClass();
            if (this.f4660g == null) {
                ImagePipelineConfig imagePipelineConfig = (ImagePipelineConfig) fVar;
                Supplier supplier = imagePipelineConfig.f4610g;
                r8.c cVar = imagePipelineConfig.f4613l;
                h hVar = new h(new lh.f(8), supplier);
                cVar.getClass();
                this.f4660g = hVar;
            }
            h hVar2 = this.f4660g;
            k kVar = ((ImagePipelineConfig) fVar).f4612i;
            kVar.getClass();
            this.f4661h = new e4.c(10, hVar2, new gj.c(13, kVar));
        }
        return this.f4661h;
    }

    /*  JADX ERROR: JadxRuntimeException in pass: ModVisitor
        jadx.core.utils.exceptions.JadxRuntimeException: Can't remove SSA var: r2v0 com.facebook.imagepipeline.core.ImagePipeline, still in use, count: 3, list:
          (r2v0 com.facebook.imagepipeline.core.ImagePipeline) from 0x016f: MOVE (r29v0 com.facebook.imagepipeline.core.ImagePipeline) = (r2v0 com.facebook.imagepipeline.core.ImagePipeline) (LINE:368)
          (r2v0 com.facebook.imagepipeline.core.ImagePipeline) from 0x0129: MOVE (r29v2 com.facebook.imagepipeline.core.ImagePipeline) = (r2v0 com.facebook.imagepipeline.core.ImagePipeline) (LINE:298)
          (r2v0 com.facebook.imagepipeline.core.ImagePipeline) from 0x009c: MOVE (r29v4 com.facebook.imagepipeline.core.ImagePipeline) = (r2v0 com.facebook.imagepipeline.core.ImagePipeline) (LINE:157)
        	at jadx.core.utils.InsnRemover.removeSsaVar(InsnRemover.java:162)
        	at jadx.core.utils.InsnRemover.unbindResult(InsnRemover.java:127)
        	at jadx.core.utils.InsnRemover.unbindInsn(InsnRemover.java:91)
        	at jadx.core.utils.InsnRemover.addAndUnbind(InsnRemover.java:57)
        	at jadx.core.dex.visitors.ModVisitor.removeStep(ModVisitor.java:447)
        	at jadx.core.dex.visitors.ModVisitor.visit(ModVisitor.java:96)
        */
    public final com.facebook.imagepipeline.core.ImagePipeline e() {
        /*
            Method dump skipped, instructions count: 413
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.facebook.imagepipeline.core.c.e():com.facebook.imagepipeline.core.ImagePipeline");
    }

    public final PlatformBitmapFactory f() {
        if (this.f4664m == null) {
            v poolFactory = ((ImagePipelineConfig) this.f4655b).f4615n;
            ra.d platformDecoder = g();
            Intrinsics.checkNotNullParameter(poolFactory, "poolFactory");
            Intrinsics.checkNotNullParameter(platformDecoder, "platformDecoder");
            l closeableReferenceFactory = this.f4656c;
            Intrinsics.checkNotNullParameter(closeableReferenceFactory, "closeableReferenceFactory");
            qa.e b10 = poolFactory.b();
            Intrinsics.checkNotNullExpressionValue(b10, "getBitmapPool(...)");
            this.f4664m = new ga.a(b10, closeableReferenceFactory);
        }
        return this.f4664m;
    }

    public final ra.d g() {
        ra.b aVar;
        if (this.f4665n == null) {
            ImagePipelineConfig imagePipelineConfig = (ImagePipelineConfig) this.f4655b;
            v poolFactory = imagePipelineConfig.f4615n;
            imagePipelineConfig.f4622u.getClass();
            imagePipelineConfig.f4622u.getClass();
            s platformDecoderOptions = imagePipelineConfig.f4622u.f4652i;
            Intrinsics.checkNotNullParameter(poolFactory, "poolFactory");
            Intrinsics.checkNotNullParameter(platformDecoderOptions, "platformDecoderOptions");
            if (Build.VERSION.SDK_INT >= 26) {
                qa.e bitmapPool = poolFactory.b();
                Intrinsics.checkNotNullExpressionValue(bitmapPool, "getBitmapPool(...)");
                k1.b decodeBuffers = jb.a.g(poolFactory);
                Intrinsics.checkNotNullParameter(bitmapPool, "bitmapPool");
                Intrinsics.checkNotNullParameter(decodeBuffers, "decodeBuffers");
                Intrinsics.checkNotNullParameter(platformDecoderOptions, "platformDecoderOptions");
                aVar = new ra.c(bitmapPool, decodeBuffers, platformDecoderOptions);
            } else {
                qa.e bitmapPool2 = poolFactory.b();
                Intrinsics.checkNotNullExpressionValue(bitmapPool2, "getBitmapPool(...)");
                k1.b decodeBuffers2 = jb.a.g(poolFactory);
                Intrinsics.checkNotNullParameter(bitmapPool2, "bitmapPool");
                Intrinsics.checkNotNullParameter(decodeBuffers2, "decodeBuffers");
                Intrinsics.checkNotNullParameter(platformDecoderOptions, "platformDecoderOptions");
                aVar = new ra.a(bitmapPool2, decodeBuffers2, platformDecoderOptions);
            }
            this.f4665n = aVar;
        }
        return this.f4665n;
    }
}
