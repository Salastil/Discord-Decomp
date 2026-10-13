package com.facebook.imagepipeline.core;

import android.app.ActivityManager;
import android.content.Context;
import android.graphics.Bitmap;
import com.discord.image.fresco.config.FrescoBitmapSupplier;
import com.discord.image.fresco.config.FrescoConfigKt$frescoConfig$2;
import com.discord.image.fresco.config.FrescoEncodedSupplier;
import com.facebook.cache.disk.DiskCacheConfig;
import com.facebook.common.internal.Supplier;
import com.facebook.imagepipeline.cache.DefaultCacheKeyFactory;
import com.facebook.imagepipeline.producers.NetworkFetcher;
import com.facebook.imagepipeline.producers.d0;
import ha.k;
import io.sentry.hints.j;
import ja.d;
import ja.f;
import java.util.HashSet;
import java.util.Set;
import kotlin.collections.o0;
import kotlin.jvm.internal.Intrinsics;
import o8.g;
import o8.h;
import qa.s;
import qa.t;
import qa.u;
import qa.v;

/* loaded from: classes3.dex */
public final class ImagePipelineConfig implements f {
    public final Supplier a;

    /* renamed from: b, reason: collision with root package name */
    public final j f4605b;

    /* renamed from: c, reason: collision with root package name */
    public final DefaultCacheKeyFactory f4606c;

    /* renamed from: d, reason: collision with root package name */
    public final Context f4607d;

    /* renamed from: e, reason: collision with root package name */
    public final DownsampleMode f4608e;

    /* renamed from: f, reason: collision with root package name */
    public final d f4609f;

    /* renamed from: g, reason: collision with root package name */
    public final Supplier f4610g;

    /* renamed from: h, reason: collision with root package name */
    public final DefaultExecutorSupplier f4611h;

    /* renamed from: i, reason: collision with root package name */
    public final k f4612i;
    public final g j;
    public final DiskCacheConfig k;

    /* renamed from: l, reason: collision with root package name */
    public final r8.c f4613l;

    /* renamed from: m, reason: collision with root package name */
    public final NetworkFetcher f4614m;

    /* renamed from: n, reason: collision with root package name */
    public final v f4615n;

    /* renamed from: o, reason: collision with root package name */
    public final gj.c f4616o;

    /* renamed from: p, reason: collision with root package name */
    public final Set f4617p;

    /* renamed from: q, reason: collision with root package name */
    public final o0 f4618q;

    /* renamed from: r, reason: collision with root package name */
    public final o0 f4619r;

    /* renamed from: s, reason: collision with root package name */
    public final boolean f4620s;

    /* renamed from: t, reason: collision with root package name */
    public final DiskCacheConfig f4621t;

    /* renamed from: u, reason: collision with root package name */
    public final b f4622u;

    /* renamed from: v, reason: collision with root package name */
    public final boolean f4623v;

    /* renamed from: w, reason: collision with root package name */
    public final l8.a f4624w;

    /* renamed from: x, reason: collision with root package name */
    public final l8.a f4625x;

    public static final class Builder {
        public FrescoBitmapSupplier a;

        /* renamed from: b, reason: collision with root package name */
        public FrescoConfigKt$frescoConfig$2 f4626b;

        /* renamed from: c, reason: collision with root package name */
        public final Context f4627c;

        /* renamed from: d, reason: collision with root package name */
        public DownsampleMode f4628d;

        /* renamed from: e, reason: collision with root package name */
        public FrescoEncodedSupplier f4629e;

        /* renamed from: f, reason: collision with root package name */
        public DiskCacheConfig f4630f;

        /* renamed from: g, reason: collision with root package name */
        public NetworkFetcher f4631g;

        /* renamed from: h, reason: collision with root package name */
        public v f4632h;

        /* renamed from: i, reason: collision with root package name */
        public HashSet f4633i;
        public final boolean j;
        public DiskCacheConfig k;

        /* renamed from: l, reason: collision with root package name */
        public final int f4634l;

        /* renamed from: m, reason: collision with root package name */
        public final a f4635m;

        /* renamed from: n, reason: collision with root package name */
        public final boolean f4636n;

        /* renamed from: o, reason: collision with root package name */
        public final l8.a f4637o;

        public Builder(Context context) {
            Intrinsics.checkNotNullParameter(context, "context");
            this.f4628d = DownsampleMode.f4593e;
            this.j = true;
            this.f4634l = -1;
            Intrinsics.checkNotNullParameter(this, "configBuilder");
            a aVar = new a();
            k8.c cVar = new k8.c(1, Boolean.FALSE);
            Intrinsics.checkNotNullExpressionValue(cVar, "of(...)");
            aVar.f4638b = cVar;
            aVar.f4639c = true;
            aVar.f4640d = true;
            aVar.f4641e = 20;
            aVar.f4642f = 30;
            aVar.f4643g = new s();
            this.f4635m = aVar;
            this.f4636n = true;
            this.f4637o = new l8.a(12);
            this.f4627c = context;
        }
    }

    public ImagePipelineConfig(Builder builder) {
        k kVar;
        ta.a.D();
        a aVar = builder.f4635m;
        aVar.getClass();
        this.f4622u = new b(aVar);
        Supplier supplier = builder.a;
        if (supplier == null) {
            Object systemService = builder.f4627c.getSystemService("activity");
            if (systemService == null) {
                throw new IllegalStateException("Required value was null.");
            }
            Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.app.ActivityManager");
            supplier = new ha.f((ActivityManager) systemService);
        }
        this.a = supplier;
        this.f4605b = new j(8);
        Bitmap.Config config = Bitmap.Config.ARGB_8888;
        DefaultCacheKeyFactory defaultCacheKeyFactory = builder.f4626b;
        if (defaultCacheKeyFactory == null) {
            defaultCacheKeyFactory = DefaultCacheKeyFactory.getInstance();
            Intrinsics.checkNotNullExpressionValue(defaultCacheKeyFactory, "getInstance(...)");
        }
        this.f4606c = defaultCacheKeyFactory;
        Context context = builder.f4627c;
        if (context == null) {
            throw new IllegalStateException("Required value was null.");
        }
        this.f4607d = context;
        this.f4608e = builder.f4628d;
        Supplier supplier2 = builder.f4629e;
        this.f4610g = supplier2 == null ? new ha.g() : supplier2;
        synchronized (k.class) {
            try {
                if (k.f9611e == null) {
                    k.f9611e = new k(0);
                }
                kVar = k.f9611e;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        Intrinsics.checkNotNullExpressionValue(kVar, "getInstance(...)");
        this.f4612i = kVar;
        g BOOLEAN_FALSE = h.f15794b;
        Intrinsics.checkNotNullExpressionValue(BOOLEAN_FALSE, "BOOLEAN_FALSE");
        g BOOLEAN_TRUE = h.a;
        Intrinsics.checkNotNullExpressionValue(BOOLEAN_TRUE, "BOOLEAN_TRUE");
        this.j = BOOLEAN_TRUE;
        DiskCacheConfig diskCacheConfig = builder.f4630f;
        if (diskCacheConfig == null) {
            Context context2 = builder.f4627c;
            ta.a.D();
            diskCacheConfig = new DiskCacheConfig(new k8.d(context2));
            Intrinsics.checkNotNullExpressionValue(diskCacheConfig, "traceSection(...)");
        }
        this.k = diskCacheConfig;
        r8.c t5 = r8.c.t();
        Intrinsics.checkNotNullExpressionValue(t5, "getInstance(...)");
        this.f4613l = t5;
        int i5 = builder.f4634l;
        i5 = i5 < 0 ? 30000 : i5;
        ta.a.D();
        NetworkFetcher networkFetcher = builder.f4631g;
        this.f4614m = networkFetcher == null ? new d0(i5) : networkFetcher;
        v vVar = builder.f4632h;
        vVar = vVar == null ? new v(new u(new t(0))) : vVar;
        this.f4615n = vVar;
        this.f4616o = new gj.c(23);
        Set set = builder.f4633i;
        this.f4617p = set == null ? o0.f13515d : set;
        o0 o0Var = o0.f13515d;
        this.f4618q = o0Var;
        this.f4619r = o0Var;
        this.f4620s = builder.j;
        DiskCacheConfig diskCacheConfig2 = builder.k;
        this.f4621t = diskCacheConfig2 != null ? diskCacheConfig2 : diskCacheConfig;
        this.f4611h = new DefaultExecutorSupplier(((u) vVar.f16727d).f16720c.f16736d);
        this.f4623v = builder.f4636n;
        this.f4624w = builder.f4637o;
        this.f4625x = new l8.a(8);
        this.f4609f = new d(new j(10), this);
        ta.a.D();
    }
}
