package ja;

import android.content.ContentResolver;
import android.net.Uri;
import android.os.Build;
import com.facebook.imagepipeline.cache.DefaultCacheKeyFactory;
import com.facebook.imagepipeline.core.DefaultExecutorSupplier;
import com.facebook.imagepipeline.core.DownsampleMode;
import com.facebook.imagepipeline.producers.NetworkFetcher;
import com.facebook.imagepipeline.producers.c1;
import com.facebook.imagepipeline.producers.f1;
import com.facebook.imagepipeline.producers.g1;
import com.facebook.imagepipeline.producers.i0;
import com.facebook.imagepipeline.producers.j0;
import com.facebook.imagepipeline.producers.j1;
import com.facebook.imagepipeline.producers.k0;
import com.facebook.imagepipeline.producers.l1;
import com.facebook.imagepipeline.producers.m0;
import com.facebook.imagepipeline.producers.o0;
import com.facebook.imagepipeline.producers.q;
import com.facebook.imagepipeline.producers.q0;
import com.facebook.imagepipeline.producers.w;
import com.facebook.imagepipeline.producers.w0;
import com.facebook.imagepipeline.producers.x;
import com.facebook.imagepipeline.producers.x0;
import com.facebook.imagepipeline.producers.z;
import com.facebook.imagepipeline.producers.z0;
import com.facebook.imagepipeline.request.ImageRequest;
import fo.l;
import fo.u;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.Set;
import java.util.concurrent.ExecutorService;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class j {
    public final u A;
    public final u B;
    public final ContentResolver a;

    /* renamed from: b, reason: collision with root package name */
    public final g f12470b;

    /* renamed from: c, reason: collision with root package name */
    public final NetworkFetcher f12471c;

    /* renamed from: d, reason: collision with root package name */
    public final boolean f12472d;

    /* renamed from: e, reason: collision with root package name */
    public final g1 f12473e;

    /* renamed from: f, reason: collision with root package name */
    public final DownsampleMode f12474f;

    /* renamed from: g, reason: collision with root package name */
    public final boolean f12475g;

    /* renamed from: h, reason: collision with root package name */
    public final ua.b f12476h;

    /* renamed from: i, reason: collision with root package name */
    public final Set f12477i;
    public final LinkedHashMap j;
    public final u k;

    /* renamed from: l, reason: collision with root package name */
    public final u f12478l;

    /* renamed from: m, reason: collision with root package name */
    public final u f12479m;

    /* renamed from: n, reason: collision with root package name */
    public final u f12480n;

    /* renamed from: o, reason: collision with root package name */
    public final u f12481o;

    /* renamed from: p, reason: collision with root package name */
    public final u f12482p;

    /* renamed from: q, reason: collision with root package name */
    public final u f12483q;

    /* renamed from: r, reason: collision with root package name */
    public final u f12484r;

    /* renamed from: s, reason: collision with root package name */
    public final u f12485s;

    /* renamed from: t, reason: collision with root package name */
    public final u f12486t;

    /* renamed from: u, reason: collision with root package name */
    public final u f12487u;

    /* renamed from: v, reason: collision with root package name */
    public final u f12488v;

    /* renamed from: w, reason: collision with root package name */
    public final u f12489w;

    /* renamed from: x, reason: collision with root package name */
    public final u f12490x;

    /* renamed from: y, reason: collision with root package name */
    public final u f12491y;

    /* renamed from: z, reason: collision with root package name */
    public final u f12492z;

    public j(ContentResolver contentResolver, g producerFactory, NetworkFetcher networkFetcher, boolean z5, g1 threadHandoffProducerQueue, DownsampleMode downsampleMode, boolean z6, ua.d imageTranscoderFactory, Set set) {
        Intrinsics.checkNotNullParameter(contentResolver, "contentResolver");
        Intrinsics.checkNotNullParameter(producerFactory, "producerFactory");
        Intrinsics.checkNotNullParameter(networkFetcher, "networkFetcher");
        Intrinsics.checkNotNullParameter(threadHandoffProducerQueue, "threadHandoffProducerQueue");
        Intrinsics.checkNotNullParameter(downsampleMode, "downsampleMode");
        Intrinsics.checkNotNullParameter(imageTranscoderFactory, "imageTranscoderFactory");
        this.a = contentResolver;
        this.f12470b = producerFactory;
        this.f12471c = networkFetcher;
        this.f12472d = z5;
        this.f12473e = threadHandoffProducerQueue;
        this.f12474f = downsampleMode;
        this.f12475g = z6;
        this.f12476h = imageTranscoderFactory;
        this.f12477i = set;
        this.j = new LinkedHashMap();
        new LinkedHashMap();
        new LinkedHashMap();
        final int i5 = 0;
        this.k = l.a(new Function0(this) { // from class: ja.h

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ j f12469e;

            {
                this.f12469e = this;
            }

            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                c1 a;
                boolean z7 = true;
                switch (i5) {
                    case 0:
                        j this$0 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$0, "this$0");
                        ta.a.D();
                        Object value = this$0.f12481o.getValue();
                        Intrinsics.checkNotNullExpressionValue(value, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value);
                    case 1:
                        j this$02 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$02, "this$0");
                        ta.a.D();
                        Object value2 = this$02.f12486t.getValue();
                        Intrinsics.checkNotNullExpressionValue(value2, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value2);
                    case 2:
                        j this$03 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$03, "this$0");
                        ta.a.D();
                        return this$03.f((z0) this$03.f12483q.getValue());
                    case 3:
                        j this$04 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$04, "this$0");
                        ta.a.D();
                        g gVar = this$04.f12470b;
                        z0 z0Var = (z0) this$04.f12483q.getValue();
                        g1 g1Var = this$04.f12473e;
                        gVar.getClass();
                        return new f1(z0Var, g1Var);
                    case 4:
                        j this$05 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$05, "this$0");
                        ta.a.D();
                        g gVar2 = this$05.f12470b;
                        Object value3 = this$05.f12481o.getValue();
                        Intrinsics.checkNotNullExpressionValue(value3, "getValue(...)");
                        gVar2.getClass();
                        return new com.facebook.imagepipeline.producers.b((z0) value3, 2);
                    case 5:
                        j this$06 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$06, "this$0");
                        ta.a.D();
                        NetworkFetcher networkFetcher2 = this$06.f12471c;
                        synchronized (this$06) {
                            try {
                                Intrinsics.checkNotNullParameter(networkFetcher2, "networkFetcher");
                                ta.a.D();
                                g gVar3 = this$06.f12470b;
                                w0 w0Var = new w0(gVar3.j, gVar3.f12456d, networkFetcher2);
                                Intrinsics.checkNotNullExpressionValue(w0Var, "newNetworkFetchProducer(...)");
                                com.facebook.imagepipeline.producers.b bVar = new com.facebook.imagepipeline.producers.b(this$06.h(w0Var), 0);
                                Intrinsics.checkNotNullExpressionValue(bVar, "newAddImageTransformMetaDataProducer(...)");
                                g gVar4 = this$06.f12470b;
                                if (!this$06.f12472d || this$06.f12474f == DownsampleMode.f4594i) {
                                    z7 = false;
                                }
                                a = gVar4.a(bVar, z7, this$06.f12476h);
                            } catch (Throwable th2) {
                                throw th2;
                            }
                        }
                        return a;
                    case 6:
                        j this$07 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$07, "this$0");
                        ta.a.D();
                        g gVar5 = this$07.f12470b;
                        Object value4 = this$07.f12485s.getValue();
                        Intrinsics.checkNotNullExpressionValue(value4, "getValue(...)");
                        gVar5.getClass();
                        return new com.facebook.imagepipeline.producers.b((z0) value4, 2);
                    case 7:
                        j this$08 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$08, "this$0");
                        ta.a.D();
                        g gVar6 = this$08.f12470b;
                        ExecutorService executor = ((DefaultExecutorSupplier) gVar6.f12461i).a;
                        e4.c pooledByteBufferFactory = gVar6.j;
                        Intrinsics.checkNotNullParameter(executor, "executor");
                        Intrinsics.checkNotNullParameter(pooledByteBufferFactory, "pooledByteBufferFactory");
                        com.facebook.imagepipeline.producers.l lVar = new com.facebook.imagepipeline.producers.l(executor, pooledByteBufferFactory, 1);
                        Intrinsics.checkNotNullExpressionValue(lVar, "newLocalFileFetchProducer(...)");
                        x h6 = this$08.h(lVar);
                        g1 g1Var2 = this$08.f12473e;
                        gVar6.getClass();
                        return new f1(h6, g1Var2);
                    case 8:
                        j this$09 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$09, "this$0");
                        ta.a.D();
                        g gVar7 = this$09.f12470b;
                        j0 j0Var = new j0(((DefaultExecutorSupplier) gVar7.f12461i).a, gVar7.j, gVar7.a, 0);
                        Intrinsics.checkNotNullExpressionValue(j0Var, "newLocalContentUriFetchProducer(...)");
                        x h7 = this$09.h(j0Var);
                        g1 g1Var3 = this$09.f12473e;
                        gVar7.getClass();
                        return new f1(h7, g1Var3);
                    case 9:
                        j this$010 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$010, "this$0");
                        g gVar8 = this$010.f12470b;
                        ExecutorService executor2 = ((DefaultExecutorSupplier) gVar8.f12461i).a;
                        e4.c pooledByteBufferFactory2 = gVar8.j;
                        Intrinsics.checkNotNullParameter(executor2, "executor");
                        Intrinsics.checkNotNullParameter(pooledByteBufferFactory2, "pooledByteBufferFactory");
                        com.facebook.imagepipeline.producers.l lVar2 = new com.facebook.imagepipeline.producers.l(executor2, pooledByteBufferFactory2, 1);
                        Intrinsics.checkNotNullExpressionValue(lVar2, "newLocalFileFetchProducer(...)");
                        return this$010.g(lVar2, new l1[]{new m0(((DefaultExecutorSupplier) gVar8.f12461i).a, gVar8.j, gVar8.a)});
                    case 10:
                        j this$011 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$011, "this$0");
                        g gVar9 = this$011.f12470b;
                        q0 q0Var = new q0(((DefaultExecutorSupplier) gVar9.f12461i).a, gVar9.a, 1);
                        Intrinsics.checkNotNullExpressionValue(q0Var, "newLocalVideoThumbnailProducer(...)");
                        return this$011.e(q0Var);
                    case 11:
                        j this$012 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$012, "this$0");
                        g gVar10 = this$012.f12470b;
                        j0 j0Var2 = new j0(((DefaultExecutorSupplier) gVar10.f12461i).a, gVar10.j, gVar10.a, 0);
                        Intrinsics.checkNotNullExpressionValue(j0Var2, "newLocalContentUriFetchProducer(...)");
                        gVar10.getClass();
                        e eVar = gVar10.f12461i;
                        ExecutorService executorService = ((DefaultExecutorSupplier) eVar).a;
                        e4.c cVar = gVar10.j;
                        ContentResolver contentResolver2 = gVar10.a;
                        return this$012.g(j0Var2, new l1[]{new k0(executorService, cVar, contentResolver2), new m0(((DefaultExecutorSupplier) eVar).a, cVar, contentResolver2)});
                    case 12:
                        j this$013 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$013, "this$0");
                        if (Build.VERSION.SDK_INT < 29) {
                            throw new Throwable("Unreachable exception. Just to make linter happy for the lazy block.");
                        }
                        g gVar11 = this$013.f12470b;
                        q0 q0Var2 = new q0(((DefaultExecutorSupplier) gVar11.f12461i).f4590c, gVar11.a, 0);
                        Intrinsics.checkNotNullExpressionValue(q0Var2, "newLocalThumbnailBitmapSdk29Producer(...)");
                        return this$013.e(q0Var2);
                    case 13:
                        j this$014 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$014, "this$0");
                        g gVar12 = this$014.f12470b;
                        j0 j0Var3 = new j0(((DefaultExecutorSupplier) gVar12.f12461i).a, gVar12.j, gVar12.a, 1);
                        Intrinsics.checkNotNullExpressionValue(j0Var3, "newQualifiedResourceFetchProducer(...)");
                        return this$014.g(j0Var3, new l1[]{new m0(((DefaultExecutorSupplier) gVar12.f12461i).a, gVar12.j, gVar12.a)});
                    case 14:
                        j this$015 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$015, "this$0");
                        g gVar13 = this$015.f12470b;
                        i0 i0Var = new i0(((DefaultExecutorSupplier) gVar13.f12461i).a, gVar13.j, gVar13.f12454b);
                        Intrinsics.checkNotNullExpressionValue(i0Var, "newLocalResourceFetchProducer(...)");
                        return this$015.g(i0Var, new l1[]{new m0(((DefaultExecutorSupplier) gVar13.f12461i).a, gVar13.j, gVar13.a)});
                    case 15:
                        j this$016 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$016, "this$0");
                        g gVar14 = this$016.f12470b;
                        i0 i0Var2 = new i0(((DefaultExecutorSupplier) gVar14.f12461i).a, gVar14.j, gVar14.f12455c);
                        Intrinsics.checkNotNullExpressionValue(i0Var2, "newLocalAssetFetchProducer(...)");
                        return this$016.g(i0Var2, new l1[]{new m0(((DefaultExecutorSupplier) gVar14.f12461i).a, gVar14.j, gVar14.a)});
                    case 16:
                        j this$017 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$017, "this$0");
                        g gVar15 = this$017.f12470b;
                        com.facebook.imagepipeline.producers.l lVar3 = new com.facebook.imagepipeline.producers.l(m8.a.f14400d, gVar15.j, 0);
                        Intrinsics.checkNotNullExpressionValue(lVar3, "newDataFetchProducer(...)");
                        return this$017.f(gVar15.a(new com.facebook.imagepipeline.producers.b(lVar3, 0), true, this$017.f12476h));
                    default:
                        j this$018 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$018, "this$0");
                        ta.a.D();
                        Object value5 = this$018.f12485s.getValue();
                        Intrinsics.checkNotNullExpressionValue(value5, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value5);
                }
            }
        });
        final int i6 = 17;
        this.f12478l = l.a(new Function0(this) { // from class: ja.h

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ j f12469e;

            {
                this.f12469e = this;
            }

            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                c1 a;
                boolean z7 = true;
                switch (i6) {
                    case 0:
                        j this$0 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$0, "this$0");
                        ta.a.D();
                        Object value = this$0.f12481o.getValue();
                        Intrinsics.checkNotNullExpressionValue(value, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value);
                    case 1:
                        j this$02 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$02, "this$0");
                        ta.a.D();
                        Object value2 = this$02.f12486t.getValue();
                        Intrinsics.checkNotNullExpressionValue(value2, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value2);
                    case 2:
                        j this$03 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$03, "this$0");
                        ta.a.D();
                        return this$03.f((z0) this$03.f12483q.getValue());
                    case 3:
                        j this$04 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$04, "this$0");
                        ta.a.D();
                        g gVar = this$04.f12470b;
                        z0 z0Var = (z0) this$04.f12483q.getValue();
                        g1 g1Var = this$04.f12473e;
                        gVar.getClass();
                        return new f1(z0Var, g1Var);
                    case 4:
                        j this$05 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$05, "this$0");
                        ta.a.D();
                        g gVar2 = this$05.f12470b;
                        Object value3 = this$05.f12481o.getValue();
                        Intrinsics.checkNotNullExpressionValue(value3, "getValue(...)");
                        gVar2.getClass();
                        return new com.facebook.imagepipeline.producers.b((z0) value3, 2);
                    case 5:
                        j this$06 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$06, "this$0");
                        ta.a.D();
                        NetworkFetcher networkFetcher2 = this$06.f12471c;
                        synchronized (this$06) {
                            try {
                                Intrinsics.checkNotNullParameter(networkFetcher2, "networkFetcher");
                                ta.a.D();
                                g gVar3 = this$06.f12470b;
                                w0 w0Var = new w0(gVar3.j, gVar3.f12456d, networkFetcher2);
                                Intrinsics.checkNotNullExpressionValue(w0Var, "newNetworkFetchProducer(...)");
                                com.facebook.imagepipeline.producers.b bVar = new com.facebook.imagepipeline.producers.b(this$06.h(w0Var), 0);
                                Intrinsics.checkNotNullExpressionValue(bVar, "newAddImageTransformMetaDataProducer(...)");
                                g gVar4 = this$06.f12470b;
                                if (!this$06.f12472d || this$06.f12474f == DownsampleMode.f4594i) {
                                    z7 = false;
                                }
                                a = gVar4.a(bVar, z7, this$06.f12476h);
                            } catch (Throwable th2) {
                                throw th2;
                            }
                        }
                        return a;
                    case 6:
                        j this$07 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$07, "this$0");
                        ta.a.D();
                        g gVar5 = this$07.f12470b;
                        Object value4 = this$07.f12485s.getValue();
                        Intrinsics.checkNotNullExpressionValue(value4, "getValue(...)");
                        gVar5.getClass();
                        return new com.facebook.imagepipeline.producers.b((z0) value4, 2);
                    case 7:
                        j this$08 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$08, "this$0");
                        ta.a.D();
                        g gVar6 = this$08.f12470b;
                        ExecutorService executor = ((DefaultExecutorSupplier) gVar6.f12461i).a;
                        e4.c pooledByteBufferFactory = gVar6.j;
                        Intrinsics.checkNotNullParameter(executor, "executor");
                        Intrinsics.checkNotNullParameter(pooledByteBufferFactory, "pooledByteBufferFactory");
                        com.facebook.imagepipeline.producers.l lVar = new com.facebook.imagepipeline.producers.l(executor, pooledByteBufferFactory, 1);
                        Intrinsics.checkNotNullExpressionValue(lVar, "newLocalFileFetchProducer(...)");
                        x h6 = this$08.h(lVar);
                        g1 g1Var2 = this$08.f12473e;
                        gVar6.getClass();
                        return new f1(h6, g1Var2);
                    case 8:
                        j this$09 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$09, "this$0");
                        ta.a.D();
                        g gVar7 = this$09.f12470b;
                        j0 j0Var = new j0(((DefaultExecutorSupplier) gVar7.f12461i).a, gVar7.j, gVar7.a, 0);
                        Intrinsics.checkNotNullExpressionValue(j0Var, "newLocalContentUriFetchProducer(...)");
                        x h7 = this$09.h(j0Var);
                        g1 g1Var3 = this$09.f12473e;
                        gVar7.getClass();
                        return new f1(h7, g1Var3);
                    case 9:
                        j this$010 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$010, "this$0");
                        g gVar8 = this$010.f12470b;
                        ExecutorService executor2 = ((DefaultExecutorSupplier) gVar8.f12461i).a;
                        e4.c pooledByteBufferFactory2 = gVar8.j;
                        Intrinsics.checkNotNullParameter(executor2, "executor");
                        Intrinsics.checkNotNullParameter(pooledByteBufferFactory2, "pooledByteBufferFactory");
                        com.facebook.imagepipeline.producers.l lVar2 = new com.facebook.imagepipeline.producers.l(executor2, pooledByteBufferFactory2, 1);
                        Intrinsics.checkNotNullExpressionValue(lVar2, "newLocalFileFetchProducer(...)");
                        return this$010.g(lVar2, new l1[]{new m0(((DefaultExecutorSupplier) gVar8.f12461i).a, gVar8.j, gVar8.a)});
                    case 10:
                        j this$011 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$011, "this$0");
                        g gVar9 = this$011.f12470b;
                        q0 q0Var = new q0(((DefaultExecutorSupplier) gVar9.f12461i).a, gVar9.a, 1);
                        Intrinsics.checkNotNullExpressionValue(q0Var, "newLocalVideoThumbnailProducer(...)");
                        return this$011.e(q0Var);
                    case 11:
                        j this$012 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$012, "this$0");
                        g gVar10 = this$012.f12470b;
                        j0 j0Var2 = new j0(((DefaultExecutorSupplier) gVar10.f12461i).a, gVar10.j, gVar10.a, 0);
                        Intrinsics.checkNotNullExpressionValue(j0Var2, "newLocalContentUriFetchProducer(...)");
                        gVar10.getClass();
                        e eVar = gVar10.f12461i;
                        ExecutorService executorService = ((DefaultExecutorSupplier) eVar).a;
                        e4.c cVar = gVar10.j;
                        ContentResolver contentResolver2 = gVar10.a;
                        return this$012.g(j0Var2, new l1[]{new k0(executorService, cVar, contentResolver2), new m0(((DefaultExecutorSupplier) eVar).a, cVar, contentResolver2)});
                    case 12:
                        j this$013 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$013, "this$0");
                        if (Build.VERSION.SDK_INT < 29) {
                            throw new Throwable("Unreachable exception. Just to make linter happy for the lazy block.");
                        }
                        g gVar11 = this$013.f12470b;
                        q0 q0Var2 = new q0(((DefaultExecutorSupplier) gVar11.f12461i).f4590c, gVar11.a, 0);
                        Intrinsics.checkNotNullExpressionValue(q0Var2, "newLocalThumbnailBitmapSdk29Producer(...)");
                        return this$013.e(q0Var2);
                    case 13:
                        j this$014 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$014, "this$0");
                        g gVar12 = this$014.f12470b;
                        j0 j0Var3 = new j0(((DefaultExecutorSupplier) gVar12.f12461i).a, gVar12.j, gVar12.a, 1);
                        Intrinsics.checkNotNullExpressionValue(j0Var3, "newQualifiedResourceFetchProducer(...)");
                        return this$014.g(j0Var3, new l1[]{new m0(((DefaultExecutorSupplier) gVar12.f12461i).a, gVar12.j, gVar12.a)});
                    case 14:
                        j this$015 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$015, "this$0");
                        g gVar13 = this$015.f12470b;
                        i0 i0Var = new i0(((DefaultExecutorSupplier) gVar13.f12461i).a, gVar13.j, gVar13.f12454b);
                        Intrinsics.checkNotNullExpressionValue(i0Var, "newLocalResourceFetchProducer(...)");
                        return this$015.g(i0Var, new l1[]{new m0(((DefaultExecutorSupplier) gVar13.f12461i).a, gVar13.j, gVar13.a)});
                    case 15:
                        j this$016 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$016, "this$0");
                        g gVar14 = this$016.f12470b;
                        i0 i0Var2 = new i0(((DefaultExecutorSupplier) gVar14.f12461i).a, gVar14.j, gVar14.f12455c);
                        Intrinsics.checkNotNullExpressionValue(i0Var2, "newLocalAssetFetchProducer(...)");
                        return this$016.g(i0Var2, new l1[]{new m0(((DefaultExecutorSupplier) gVar14.f12461i).a, gVar14.j, gVar14.a)});
                    case 16:
                        j this$017 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$017, "this$0");
                        g gVar15 = this$017.f12470b;
                        com.facebook.imagepipeline.producers.l lVar3 = new com.facebook.imagepipeline.producers.l(m8.a.f14400d, gVar15.j, 0);
                        Intrinsics.checkNotNullExpressionValue(lVar3, "newDataFetchProducer(...)");
                        return this$017.f(gVar15.a(new com.facebook.imagepipeline.producers.b(lVar3, 0), true, this$017.f12476h));
                    default:
                        j this$018 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$018, "this$0");
                        ta.a.D();
                        Object value5 = this$018.f12485s.getValue();
                        Intrinsics.checkNotNullExpressionValue(value5, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value5);
                }
            }
        });
        final int i10 = 1;
        this.f12479m = l.a(new Function0(this) { // from class: ja.h

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ j f12469e;

            {
                this.f12469e = this;
            }

            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                c1 a;
                boolean z7 = true;
                switch (i10) {
                    case 0:
                        j this$0 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$0, "this$0");
                        ta.a.D();
                        Object value = this$0.f12481o.getValue();
                        Intrinsics.checkNotNullExpressionValue(value, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value);
                    case 1:
                        j this$02 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$02, "this$0");
                        ta.a.D();
                        Object value2 = this$02.f12486t.getValue();
                        Intrinsics.checkNotNullExpressionValue(value2, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value2);
                    case 2:
                        j this$03 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$03, "this$0");
                        ta.a.D();
                        return this$03.f((z0) this$03.f12483q.getValue());
                    case 3:
                        j this$04 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$04, "this$0");
                        ta.a.D();
                        g gVar = this$04.f12470b;
                        z0 z0Var = (z0) this$04.f12483q.getValue();
                        g1 g1Var = this$04.f12473e;
                        gVar.getClass();
                        return new f1(z0Var, g1Var);
                    case 4:
                        j this$05 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$05, "this$0");
                        ta.a.D();
                        g gVar2 = this$05.f12470b;
                        Object value3 = this$05.f12481o.getValue();
                        Intrinsics.checkNotNullExpressionValue(value3, "getValue(...)");
                        gVar2.getClass();
                        return new com.facebook.imagepipeline.producers.b((z0) value3, 2);
                    case 5:
                        j this$06 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$06, "this$0");
                        ta.a.D();
                        NetworkFetcher networkFetcher2 = this$06.f12471c;
                        synchronized (this$06) {
                            try {
                                Intrinsics.checkNotNullParameter(networkFetcher2, "networkFetcher");
                                ta.a.D();
                                g gVar3 = this$06.f12470b;
                                w0 w0Var = new w0(gVar3.j, gVar3.f12456d, networkFetcher2);
                                Intrinsics.checkNotNullExpressionValue(w0Var, "newNetworkFetchProducer(...)");
                                com.facebook.imagepipeline.producers.b bVar = new com.facebook.imagepipeline.producers.b(this$06.h(w0Var), 0);
                                Intrinsics.checkNotNullExpressionValue(bVar, "newAddImageTransformMetaDataProducer(...)");
                                g gVar4 = this$06.f12470b;
                                if (!this$06.f12472d || this$06.f12474f == DownsampleMode.f4594i) {
                                    z7 = false;
                                }
                                a = gVar4.a(bVar, z7, this$06.f12476h);
                            } catch (Throwable th2) {
                                throw th2;
                            }
                        }
                        return a;
                    case 6:
                        j this$07 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$07, "this$0");
                        ta.a.D();
                        g gVar5 = this$07.f12470b;
                        Object value4 = this$07.f12485s.getValue();
                        Intrinsics.checkNotNullExpressionValue(value4, "getValue(...)");
                        gVar5.getClass();
                        return new com.facebook.imagepipeline.producers.b((z0) value4, 2);
                    case 7:
                        j this$08 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$08, "this$0");
                        ta.a.D();
                        g gVar6 = this$08.f12470b;
                        ExecutorService executor = ((DefaultExecutorSupplier) gVar6.f12461i).a;
                        e4.c pooledByteBufferFactory = gVar6.j;
                        Intrinsics.checkNotNullParameter(executor, "executor");
                        Intrinsics.checkNotNullParameter(pooledByteBufferFactory, "pooledByteBufferFactory");
                        com.facebook.imagepipeline.producers.l lVar = new com.facebook.imagepipeline.producers.l(executor, pooledByteBufferFactory, 1);
                        Intrinsics.checkNotNullExpressionValue(lVar, "newLocalFileFetchProducer(...)");
                        x h6 = this$08.h(lVar);
                        g1 g1Var2 = this$08.f12473e;
                        gVar6.getClass();
                        return new f1(h6, g1Var2);
                    case 8:
                        j this$09 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$09, "this$0");
                        ta.a.D();
                        g gVar7 = this$09.f12470b;
                        j0 j0Var = new j0(((DefaultExecutorSupplier) gVar7.f12461i).a, gVar7.j, gVar7.a, 0);
                        Intrinsics.checkNotNullExpressionValue(j0Var, "newLocalContentUriFetchProducer(...)");
                        x h7 = this$09.h(j0Var);
                        g1 g1Var3 = this$09.f12473e;
                        gVar7.getClass();
                        return new f1(h7, g1Var3);
                    case 9:
                        j this$010 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$010, "this$0");
                        g gVar8 = this$010.f12470b;
                        ExecutorService executor2 = ((DefaultExecutorSupplier) gVar8.f12461i).a;
                        e4.c pooledByteBufferFactory2 = gVar8.j;
                        Intrinsics.checkNotNullParameter(executor2, "executor");
                        Intrinsics.checkNotNullParameter(pooledByteBufferFactory2, "pooledByteBufferFactory");
                        com.facebook.imagepipeline.producers.l lVar2 = new com.facebook.imagepipeline.producers.l(executor2, pooledByteBufferFactory2, 1);
                        Intrinsics.checkNotNullExpressionValue(lVar2, "newLocalFileFetchProducer(...)");
                        return this$010.g(lVar2, new l1[]{new m0(((DefaultExecutorSupplier) gVar8.f12461i).a, gVar8.j, gVar8.a)});
                    case 10:
                        j this$011 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$011, "this$0");
                        g gVar9 = this$011.f12470b;
                        q0 q0Var = new q0(((DefaultExecutorSupplier) gVar9.f12461i).a, gVar9.a, 1);
                        Intrinsics.checkNotNullExpressionValue(q0Var, "newLocalVideoThumbnailProducer(...)");
                        return this$011.e(q0Var);
                    case 11:
                        j this$012 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$012, "this$0");
                        g gVar10 = this$012.f12470b;
                        j0 j0Var2 = new j0(((DefaultExecutorSupplier) gVar10.f12461i).a, gVar10.j, gVar10.a, 0);
                        Intrinsics.checkNotNullExpressionValue(j0Var2, "newLocalContentUriFetchProducer(...)");
                        gVar10.getClass();
                        e eVar = gVar10.f12461i;
                        ExecutorService executorService = ((DefaultExecutorSupplier) eVar).a;
                        e4.c cVar = gVar10.j;
                        ContentResolver contentResolver2 = gVar10.a;
                        return this$012.g(j0Var2, new l1[]{new k0(executorService, cVar, contentResolver2), new m0(((DefaultExecutorSupplier) eVar).a, cVar, contentResolver2)});
                    case 12:
                        j this$013 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$013, "this$0");
                        if (Build.VERSION.SDK_INT < 29) {
                            throw new Throwable("Unreachable exception. Just to make linter happy for the lazy block.");
                        }
                        g gVar11 = this$013.f12470b;
                        q0 q0Var2 = new q0(((DefaultExecutorSupplier) gVar11.f12461i).f4590c, gVar11.a, 0);
                        Intrinsics.checkNotNullExpressionValue(q0Var2, "newLocalThumbnailBitmapSdk29Producer(...)");
                        return this$013.e(q0Var2);
                    case 13:
                        j this$014 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$014, "this$0");
                        g gVar12 = this$014.f12470b;
                        j0 j0Var3 = new j0(((DefaultExecutorSupplier) gVar12.f12461i).a, gVar12.j, gVar12.a, 1);
                        Intrinsics.checkNotNullExpressionValue(j0Var3, "newQualifiedResourceFetchProducer(...)");
                        return this$014.g(j0Var3, new l1[]{new m0(((DefaultExecutorSupplier) gVar12.f12461i).a, gVar12.j, gVar12.a)});
                    case 14:
                        j this$015 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$015, "this$0");
                        g gVar13 = this$015.f12470b;
                        i0 i0Var = new i0(((DefaultExecutorSupplier) gVar13.f12461i).a, gVar13.j, gVar13.f12454b);
                        Intrinsics.checkNotNullExpressionValue(i0Var, "newLocalResourceFetchProducer(...)");
                        return this$015.g(i0Var, new l1[]{new m0(((DefaultExecutorSupplier) gVar13.f12461i).a, gVar13.j, gVar13.a)});
                    case 15:
                        j this$016 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$016, "this$0");
                        g gVar14 = this$016.f12470b;
                        i0 i0Var2 = new i0(((DefaultExecutorSupplier) gVar14.f12461i).a, gVar14.j, gVar14.f12455c);
                        Intrinsics.checkNotNullExpressionValue(i0Var2, "newLocalAssetFetchProducer(...)");
                        return this$016.g(i0Var2, new l1[]{new m0(((DefaultExecutorSupplier) gVar14.f12461i).a, gVar14.j, gVar14.a)});
                    case 16:
                        j this$017 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$017, "this$0");
                        g gVar15 = this$017.f12470b;
                        com.facebook.imagepipeline.producers.l lVar3 = new com.facebook.imagepipeline.producers.l(m8.a.f14400d, gVar15.j, 0);
                        Intrinsics.checkNotNullExpressionValue(lVar3, "newDataFetchProducer(...)");
                        return this$017.f(gVar15.a(new com.facebook.imagepipeline.producers.b(lVar3, 0), true, this$017.f12476h));
                    default:
                        j this$018 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$018, "this$0");
                        ta.a.D();
                        Object value5 = this$018.f12485s.getValue();
                        Intrinsics.checkNotNullExpressionValue(value5, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value5);
                }
            }
        });
        final int i11 = 2;
        this.f12480n = l.a(new Function0(this) { // from class: ja.h

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ j f12469e;

            {
                this.f12469e = this;
            }

            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                c1 a;
                boolean z7 = true;
                switch (i11) {
                    case 0:
                        j this$0 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$0, "this$0");
                        ta.a.D();
                        Object value = this$0.f12481o.getValue();
                        Intrinsics.checkNotNullExpressionValue(value, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value);
                    case 1:
                        j this$02 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$02, "this$0");
                        ta.a.D();
                        Object value2 = this$02.f12486t.getValue();
                        Intrinsics.checkNotNullExpressionValue(value2, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value2);
                    case 2:
                        j this$03 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$03, "this$0");
                        ta.a.D();
                        return this$03.f((z0) this$03.f12483q.getValue());
                    case 3:
                        j this$04 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$04, "this$0");
                        ta.a.D();
                        g gVar = this$04.f12470b;
                        z0 z0Var = (z0) this$04.f12483q.getValue();
                        g1 g1Var = this$04.f12473e;
                        gVar.getClass();
                        return new f1(z0Var, g1Var);
                    case 4:
                        j this$05 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$05, "this$0");
                        ta.a.D();
                        g gVar2 = this$05.f12470b;
                        Object value3 = this$05.f12481o.getValue();
                        Intrinsics.checkNotNullExpressionValue(value3, "getValue(...)");
                        gVar2.getClass();
                        return new com.facebook.imagepipeline.producers.b((z0) value3, 2);
                    case 5:
                        j this$06 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$06, "this$0");
                        ta.a.D();
                        NetworkFetcher networkFetcher2 = this$06.f12471c;
                        synchronized (this$06) {
                            try {
                                Intrinsics.checkNotNullParameter(networkFetcher2, "networkFetcher");
                                ta.a.D();
                                g gVar3 = this$06.f12470b;
                                w0 w0Var = new w0(gVar3.j, gVar3.f12456d, networkFetcher2);
                                Intrinsics.checkNotNullExpressionValue(w0Var, "newNetworkFetchProducer(...)");
                                com.facebook.imagepipeline.producers.b bVar = new com.facebook.imagepipeline.producers.b(this$06.h(w0Var), 0);
                                Intrinsics.checkNotNullExpressionValue(bVar, "newAddImageTransformMetaDataProducer(...)");
                                g gVar4 = this$06.f12470b;
                                if (!this$06.f12472d || this$06.f12474f == DownsampleMode.f4594i) {
                                    z7 = false;
                                }
                                a = gVar4.a(bVar, z7, this$06.f12476h);
                            } catch (Throwable th2) {
                                throw th2;
                            }
                        }
                        return a;
                    case 6:
                        j this$07 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$07, "this$0");
                        ta.a.D();
                        g gVar5 = this$07.f12470b;
                        Object value4 = this$07.f12485s.getValue();
                        Intrinsics.checkNotNullExpressionValue(value4, "getValue(...)");
                        gVar5.getClass();
                        return new com.facebook.imagepipeline.producers.b((z0) value4, 2);
                    case 7:
                        j this$08 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$08, "this$0");
                        ta.a.D();
                        g gVar6 = this$08.f12470b;
                        ExecutorService executor = ((DefaultExecutorSupplier) gVar6.f12461i).a;
                        e4.c pooledByteBufferFactory = gVar6.j;
                        Intrinsics.checkNotNullParameter(executor, "executor");
                        Intrinsics.checkNotNullParameter(pooledByteBufferFactory, "pooledByteBufferFactory");
                        com.facebook.imagepipeline.producers.l lVar = new com.facebook.imagepipeline.producers.l(executor, pooledByteBufferFactory, 1);
                        Intrinsics.checkNotNullExpressionValue(lVar, "newLocalFileFetchProducer(...)");
                        x h6 = this$08.h(lVar);
                        g1 g1Var2 = this$08.f12473e;
                        gVar6.getClass();
                        return new f1(h6, g1Var2);
                    case 8:
                        j this$09 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$09, "this$0");
                        ta.a.D();
                        g gVar7 = this$09.f12470b;
                        j0 j0Var = new j0(((DefaultExecutorSupplier) gVar7.f12461i).a, gVar7.j, gVar7.a, 0);
                        Intrinsics.checkNotNullExpressionValue(j0Var, "newLocalContentUriFetchProducer(...)");
                        x h7 = this$09.h(j0Var);
                        g1 g1Var3 = this$09.f12473e;
                        gVar7.getClass();
                        return new f1(h7, g1Var3);
                    case 9:
                        j this$010 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$010, "this$0");
                        g gVar8 = this$010.f12470b;
                        ExecutorService executor2 = ((DefaultExecutorSupplier) gVar8.f12461i).a;
                        e4.c pooledByteBufferFactory2 = gVar8.j;
                        Intrinsics.checkNotNullParameter(executor2, "executor");
                        Intrinsics.checkNotNullParameter(pooledByteBufferFactory2, "pooledByteBufferFactory");
                        com.facebook.imagepipeline.producers.l lVar2 = new com.facebook.imagepipeline.producers.l(executor2, pooledByteBufferFactory2, 1);
                        Intrinsics.checkNotNullExpressionValue(lVar2, "newLocalFileFetchProducer(...)");
                        return this$010.g(lVar2, new l1[]{new m0(((DefaultExecutorSupplier) gVar8.f12461i).a, gVar8.j, gVar8.a)});
                    case 10:
                        j this$011 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$011, "this$0");
                        g gVar9 = this$011.f12470b;
                        q0 q0Var = new q0(((DefaultExecutorSupplier) gVar9.f12461i).a, gVar9.a, 1);
                        Intrinsics.checkNotNullExpressionValue(q0Var, "newLocalVideoThumbnailProducer(...)");
                        return this$011.e(q0Var);
                    case 11:
                        j this$012 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$012, "this$0");
                        g gVar10 = this$012.f12470b;
                        j0 j0Var2 = new j0(((DefaultExecutorSupplier) gVar10.f12461i).a, gVar10.j, gVar10.a, 0);
                        Intrinsics.checkNotNullExpressionValue(j0Var2, "newLocalContentUriFetchProducer(...)");
                        gVar10.getClass();
                        e eVar = gVar10.f12461i;
                        ExecutorService executorService = ((DefaultExecutorSupplier) eVar).a;
                        e4.c cVar = gVar10.j;
                        ContentResolver contentResolver2 = gVar10.a;
                        return this$012.g(j0Var2, new l1[]{new k0(executorService, cVar, contentResolver2), new m0(((DefaultExecutorSupplier) eVar).a, cVar, contentResolver2)});
                    case 12:
                        j this$013 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$013, "this$0");
                        if (Build.VERSION.SDK_INT < 29) {
                            throw new Throwable("Unreachable exception. Just to make linter happy for the lazy block.");
                        }
                        g gVar11 = this$013.f12470b;
                        q0 q0Var2 = new q0(((DefaultExecutorSupplier) gVar11.f12461i).f4590c, gVar11.a, 0);
                        Intrinsics.checkNotNullExpressionValue(q0Var2, "newLocalThumbnailBitmapSdk29Producer(...)");
                        return this$013.e(q0Var2);
                    case 13:
                        j this$014 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$014, "this$0");
                        g gVar12 = this$014.f12470b;
                        j0 j0Var3 = new j0(((DefaultExecutorSupplier) gVar12.f12461i).a, gVar12.j, gVar12.a, 1);
                        Intrinsics.checkNotNullExpressionValue(j0Var3, "newQualifiedResourceFetchProducer(...)");
                        return this$014.g(j0Var3, new l1[]{new m0(((DefaultExecutorSupplier) gVar12.f12461i).a, gVar12.j, gVar12.a)});
                    case 14:
                        j this$015 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$015, "this$0");
                        g gVar13 = this$015.f12470b;
                        i0 i0Var = new i0(((DefaultExecutorSupplier) gVar13.f12461i).a, gVar13.j, gVar13.f12454b);
                        Intrinsics.checkNotNullExpressionValue(i0Var, "newLocalResourceFetchProducer(...)");
                        return this$015.g(i0Var, new l1[]{new m0(((DefaultExecutorSupplier) gVar13.f12461i).a, gVar13.j, gVar13.a)});
                    case 15:
                        j this$016 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$016, "this$0");
                        g gVar14 = this$016.f12470b;
                        i0 i0Var2 = new i0(((DefaultExecutorSupplier) gVar14.f12461i).a, gVar14.j, gVar14.f12455c);
                        Intrinsics.checkNotNullExpressionValue(i0Var2, "newLocalAssetFetchProducer(...)");
                        return this$016.g(i0Var2, new l1[]{new m0(((DefaultExecutorSupplier) gVar14.f12461i).a, gVar14.j, gVar14.a)});
                    case 16:
                        j this$017 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$017, "this$0");
                        g gVar15 = this$017.f12470b;
                        com.facebook.imagepipeline.producers.l lVar3 = new com.facebook.imagepipeline.producers.l(m8.a.f14400d, gVar15.j, 0);
                        Intrinsics.checkNotNullExpressionValue(lVar3, "newDataFetchProducer(...)");
                        return this$017.f(gVar15.a(new com.facebook.imagepipeline.producers.b(lVar3, 0), true, this$017.f12476h));
                    default:
                        j this$018 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$018, "this$0");
                        ta.a.D();
                        Object value5 = this$018.f12485s.getValue();
                        Intrinsics.checkNotNullExpressionValue(value5, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value5);
                }
            }
        });
        final int i12 = 3;
        this.f12481o = l.a(new Function0(this) { // from class: ja.h

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ j f12469e;

            {
                this.f12469e = this;
            }

            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                c1 a;
                boolean z7 = true;
                switch (i12) {
                    case 0:
                        j this$0 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$0, "this$0");
                        ta.a.D();
                        Object value = this$0.f12481o.getValue();
                        Intrinsics.checkNotNullExpressionValue(value, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value);
                    case 1:
                        j this$02 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$02, "this$0");
                        ta.a.D();
                        Object value2 = this$02.f12486t.getValue();
                        Intrinsics.checkNotNullExpressionValue(value2, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value2);
                    case 2:
                        j this$03 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$03, "this$0");
                        ta.a.D();
                        return this$03.f((z0) this$03.f12483q.getValue());
                    case 3:
                        j this$04 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$04, "this$0");
                        ta.a.D();
                        g gVar = this$04.f12470b;
                        z0 z0Var = (z0) this$04.f12483q.getValue();
                        g1 g1Var = this$04.f12473e;
                        gVar.getClass();
                        return new f1(z0Var, g1Var);
                    case 4:
                        j this$05 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$05, "this$0");
                        ta.a.D();
                        g gVar2 = this$05.f12470b;
                        Object value3 = this$05.f12481o.getValue();
                        Intrinsics.checkNotNullExpressionValue(value3, "getValue(...)");
                        gVar2.getClass();
                        return new com.facebook.imagepipeline.producers.b((z0) value3, 2);
                    case 5:
                        j this$06 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$06, "this$0");
                        ta.a.D();
                        NetworkFetcher networkFetcher2 = this$06.f12471c;
                        synchronized (this$06) {
                            try {
                                Intrinsics.checkNotNullParameter(networkFetcher2, "networkFetcher");
                                ta.a.D();
                                g gVar3 = this$06.f12470b;
                                w0 w0Var = new w0(gVar3.j, gVar3.f12456d, networkFetcher2);
                                Intrinsics.checkNotNullExpressionValue(w0Var, "newNetworkFetchProducer(...)");
                                com.facebook.imagepipeline.producers.b bVar = new com.facebook.imagepipeline.producers.b(this$06.h(w0Var), 0);
                                Intrinsics.checkNotNullExpressionValue(bVar, "newAddImageTransformMetaDataProducer(...)");
                                g gVar4 = this$06.f12470b;
                                if (!this$06.f12472d || this$06.f12474f == DownsampleMode.f4594i) {
                                    z7 = false;
                                }
                                a = gVar4.a(bVar, z7, this$06.f12476h);
                            } catch (Throwable th2) {
                                throw th2;
                            }
                        }
                        return a;
                    case 6:
                        j this$07 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$07, "this$0");
                        ta.a.D();
                        g gVar5 = this$07.f12470b;
                        Object value4 = this$07.f12485s.getValue();
                        Intrinsics.checkNotNullExpressionValue(value4, "getValue(...)");
                        gVar5.getClass();
                        return new com.facebook.imagepipeline.producers.b((z0) value4, 2);
                    case 7:
                        j this$08 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$08, "this$0");
                        ta.a.D();
                        g gVar6 = this$08.f12470b;
                        ExecutorService executor = ((DefaultExecutorSupplier) gVar6.f12461i).a;
                        e4.c pooledByteBufferFactory = gVar6.j;
                        Intrinsics.checkNotNullParameter(executor, "executor");
                        Intrinsics.checkNotNullParameter(pooledByteBufferFactory, "pooledByteBufferFactory");
                        com.facebook.imagepipeline.producers.l lVar = new com.facebook.imagepipeline.producers.l(executor, pooledByteBufferFactory, 1);
                        Intrinsics.checkNotNullExpressionValue(lVar, "newLocalFileFetchProducer(...)");
                        x h6 = this$08.h(lVar);
                        g1 g1Var2 = this$08.f12473e;
                        gVar6.getClass();
                        return new f1(h6, g1Var2);
                    case 8:
                        j this$09 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$09, "this$0");
                        ta.a.D();
                        g gVar7 = this$09.f12470b;
                        j0 j0Var = new j0(((DefaultExecutorSupplier) gVar7.f12461i).a, gVar7.j, gVar7.a, 0);
                        Intrinsics.checkNotNullExpressionValue(j0Var, "newLocalContentUriFetchProducer(...)");
                        x h7 = this$09.h(j0Var);
                        g1 g1Var3 = this$09.f12473e;
                        gVar7.getClass();
                        return new f1(h7, g1Var3);
                    case 9:
                        j this$010 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$010, "this$0");
                        g gVar8 = this$010.f12470b;
                        ExecutorService executor2 = ((DefaultExecutorSupplier) gVar8.f12461i).a;
                        e4.c pooledByteBufferFactory2 = gVar8.j;
                        Intrinsics.checkNotNullParameter(executor2, "executor");
                        Intrinsics.checkNotNullParameter(pooledByteBufferFactory2, "pooledByteBufferFactory");
                        com.facebook.imagepipeline.producers.l lVar2 = new com.facebook.imagepipeline.producers.l(executor2, pooledByteBufferFactory2, 1);
                        Intrinsics.checkNotNullExpressionValue(lVar2, "newLocalFileFetchProducer(...)");
                        return this$010.g(lVar2, new l1[]{new m0(((DefaultExecutorSupplier) gVar8.f12461i).a, gVar8.j, gVar8.a)});
                    case 10:
                        j this$011 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$011, "this$0");
                        g gVar9 = this$011.f12470b;
                        q0 q0Var = new q0(((DefaultExecutorSupplier) gVar9.f12461i).a, gVar9.a, 1);
                        Intrinsics.checkNotNullExpressionValue(q0Var, "newLocalVideoThumbnailProducer(...)");
                        return this$011.e(q0Var);
                    case 11:
                        j this$012 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$012, "this$0");
                        g gVar10 = this$012.f12470b;
                        j0 j0Var2 = new j0(((DefaultExecutorSupplier) gVar10.f12461i).a, gVar10.j, gVar10.a, 0);
                        Intrinsics.checkNotNullExpressionValue(j0Var2, "newLocalContentUriFetchProducer(...)");
                        gVar10.getClass();
                        e eVar = gVar10.f12461i;
                        ExecutorService executorService = ((DefaultExecutorSupplier) eVar).a;
                        e4.c cVar = gVar10.j;
                        ContentResolver contentResolver2 = gVar10.a;
                        return this$012.g(j0Var2, new l1[]{new k0(executorService, cVar, contentResolver2), new m0(((DefaultExecutorSupplier) eVar).a, cVar, contentResolver2)});
                    case 12:
                        j this$013 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$013, "this$0");
                        if (Build.VERSION.SDK_INT < 29) {
                            throw new Throwable("Unreachable exception. Just to make linter happy for the lazy block.");
                        }
                        g gVar11 = this$013.f12470b;
                        q0 q0Var2 = new q0(((DefaultExecutorSupplier) gVar11.f12461i).f4590c, gVar11.a, 0);
                        Intrinsics.checkNotNullExpressionValue(q0Var2, "newLocalThumbnailBitmapSdk29Producer(...)");
                        return this$013.e(q0Var2);
                    case 13:
                        j this$014 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$014, "this$0");
                        g gVar12 = this$014.f12470b;
                        j0 j0Var3 = new j0(((DefaultExecutorSupplier) gVar12.f12461i).a, gVar12.j, gVar12.a, 1);
                        Intrinsics.checkNotNullExpressionValue(j0Var3, "newQualifiedResourceFetchProducer(...)");
                        return this$014.g(j0Var3, new l1[]{new m0(((DefaultExecutorSupplier) gVar12.f12461i).a, gVar12.j, gVar12.a)});
                    case 14:
                        j this$015 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$015, "this$0");
                        g gVar13 = this$015.f12470b;
                        i0 i0Var = new i0(((DefaultExecutorSupplier) gVar13.f12461i).a, gVar13.j, gVar13.f12454b);
                        Intrinsics.checkNotNullExpressionValue(i0Var, "newLocalResourceFetchProducer(...)");
                        return this$015.g(i0Var, new l1[]{new m0(((DefaultExecutorSupplier) gVar13.f12461i).a, gVar13.j, gVar13.a)});
                    case 15:
                        j this$016 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$016, "this$0");
                        g gVar14 = this$016.f12470b;
                        i0 i0Var2 = new i0(((DefaultExecutorSupplier) gVar14.f12461i).a, gVar14.j, gVar14.f12455c);
                        Intrinsics.checkNotNullExpressionValue(i0Var2, "newLocalAssetFetchProducer(...)");
                        return this$016.g(i0Var2, new l1[]{new m0(((DefaultExecutorSupplier) gVar14.f12461i).a, gVar14.j, gVar14.a)});
                    case 16:
                        j this$017 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$017, "this$0");
                        g gVar15 = this$017.f12470b;
                        com.facebook.imagepipeline.producers.l lVar3 = new com.facebook.imagepipeline.producers.l(m8.a.f14400d, gVar15.j, 0);
                        Intrinsics.checkNotNullExpressionValue(lVar3, "newDataFetchProducer(...)");
                        return this$017.f(gVar15.a(new com.facebook.imagepipeline.producers.b(lVar3, 0), true, this$017.f12476h));
                    default:
                        j this$018 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$018, "this$0");
                        ta.a.D();
                        Object value5 = this$018.f12485s.getValue();
                        Intrinsics.checkNotNullExpressionValue(value5, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value5);
                }
            }
        });
        final int i13 = 4;
        this.f12482p = l.a(new Function0(this) { // from class: ja.h

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ j f12469e;

            {
                this.f12469e = this;
            }

            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                c1 a;
                boolean z7 = true;
                switch (i13) {
                    case 0:
                        j this$0 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$0, "this$0");
                        ta.a.D();
                        Object value = this$0.f12481o.getValue();
                        Intrinsics.checkNotNullExpressionValue(value, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value);
                    case 1:
                        j this$02 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$02, "this$0");
                        ta.a.D();
                        Object value2 = this$02.f12486t.getValue();
                        Intrinsics.checkNotNullExpressionValue(value2, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value2);
                    case 2:
                        j this$03 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$03, "this$0");
                        ta.a.D();
                        return this$03.f((z0) this$03.f12483q.getValue());
                    case 3:
                        j this$04 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$04, "this$0");
                        ta.a.D();
                        g gVar = this$04.f12470b;
                        z0 z0Var = (z0) this$04.f12483q.getValue();
                        g1 g1Var = this$04.f12473e;
                        gVar.getClass();
                        return new f1(z0Var, g1Var);
                    case 4:
                        j this$05 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$05, "this$0");
                        ta.a.D();
                        g gVar2 = this$05.f12470b;
                        Object value3 = this$05.f12481o.getValue();
                        Intrinsics.checkNotNullExpressionValue(value3, "getValue(...)");
                        gVar2.getClass();
                        return new com.facebook.imagepipeline.producers.b((z0) value3, 2);
                    case 5:
                        j this$06 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$06, "this$0");
                        ta.a.D();
                        NetworkFetcher networkFetcher2 = this$06.f12471c;
                        synchronized (this$06) {
                            try {
                                Intrinsics.checkNotNullParameter(networkFetcher2, "networkFetcher");
                                ta.a.D();
                                g gVar3 = this$06.f12470b;
                                w0 w0Var = new w0(gVar3.j, gVar3.f12456d, networkFetcher2);
                                Intrinsics.checkNotNullExpressionValue(w0Var, "newNetworkFetchProducer(...)");
                                com.facebook.imagepipeline.producers.b bVar = new com.facebook.imagepipeline.producers.b(this$06.h(w0Var), 0);
                                Intrinsics.checkNotNullExpressionValue(bVar, "newAddImageTransformMetaDataProducer(...)");
                                g gVar4 = this$06.f12470b;
                                if (!this$06.f12472d || this$06.f12474f == DownsampleMode.f4594i) {
                                    z7 = false;
                                }
                                a = gVar4.a(bVar, z7, this$06.f12476h);
                            } catch (Throwable th2) {
                                throw th2;
                            }
                        }
                        return a;
                    case 6:
                        j this$07 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$07, "this$0");
                        ta.a.D();
                        g gVar5 = this$07.f12470b;
                        Object value4 = this$07.f12485s.getValue();
                        Intrinsics.checkNotNullExpressionValue(value4, "getValue(...)");
                        gVar5.getClass();
                        return new com.facebook.imagepipeline.producers.b((z0) value4, 2);
                    case 7:
                        j this$08 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$08, "this$0");
                        ta.a.D();
                        g gVar6 = this$08.f12470b;
                        ExecutorService executor = ((DefaultExecutorSupplier) gVar6.f12461i).a;
                        e4.c pooledByteBufferFactory = gVar6.j;
                        Intrinsics.checkNotNullParameter(executor, "executor");
                        Intrinsics.checkNotNullParameter(pooledByteBufferFactory, "pooledByteBufferFactory");
                        com.facebook.imagepipeline.producers.l lVar = new com.facebook.imagepipeline.producers.l(executor, pooledByteBufferFactory, 1);
                        Intrinsics.checkNotNullExpressionValue(lVar, "newLocalFileFetchProducer(...)");
                        x h6 = this$08.h(lVar);
                        g1 g1Var2 = this$08.f12473e;
                        gVar6.getClass();
                        return new f1(h6, g1Var2);
                    case 8:
                        j this$09 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$09, "this$0");
                        ta.a.D();
                        g gVar7 = this$09.f12470b;
                        j0 j0Var = new j0(((DefaultExecutorSupplier) gVar7.f12461i).a, gVar7.j, gVar7.a, 0);
                        Intrinsics.checkNotNullExpressionValue(j0Var, "newLocalContentUriFetchProducer(...)");
                        x h7 = this$09.h(j0Var);
                        g1 g1Var3 = this$09.f12473e;
                        gVar7.getClass();
                        return new f1(h7, g1Var3);
                    case 9:
                        j this$010 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$010, "this$0");
                        g gVar8 = this$010.f12470b;
                        ExecutorService executor2 = ((DefaultExecutorSupplier) gVar8.f12461i).a;
                        e4.c pooledByteBufferFactory2 = gVar8.j;
                        Intrinsics.checkNotNullParameter(executor2, "executor");
                        Intrinsics.checkNotNullParameter(pooledByteBufferFactory2, "pooledByteBufferFactory");
                        com.facebook.imagepipeline.producers.l lVar2 = new com.facebook.imagepipeline.producers.l(executor2, pooledByteBufferFactory2, 1);
                        Intrinsics.checkNotNullExpressionValue(lVar2, "newLocalFileFetchProducer(...)");
                        return this$010.g(lVar2, new l1[]{new m0(((DefaultExecutorSupplier) gVar8.f12461i).a, gVar8.j, gVar8.a)});
                    case 10:
                        j this$011 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$011, "this$0");
                        g gVar9 = this$011.f12470b;
                        q0 q0Var = new q0(((DefaultExecutorSupplier) gVar9.f12461i).a, gVar9.a, 1);
                        Intrinsics.checkNotNullExpressionValue(q0Var, "newLocalVideoThumbnailProducer(...)");
                        return this$011.e(q0Var);
                    case 11:
                        j this$012 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$012, "this$0");
                        g gVar10 = this$012.f12470b;
                        j0 j0Var2 = new j0(((DefaultExecutorSupplier) gVar10.f12461i).a, gVar10.j, gVar10.a, 0);
                        Intrinsics.checkNotNullExpressionValue(j0Var2, "newLocalContentUriFetchProducer(...)");
                        gVar10.getClass();
                        e eVar = gVar10.f12461i;
                        ExecutorService executorService = ((DefaultExecutorSupplier) eVar).a;
                        e4.c cVar = gVar10.j;
                        ContentResolver contentResolver2 = gVar10.a;
                        return this$012.g(j0Var2, new l1[]{new k0(executorService, cVar, contentResolver2), new m0(((DefaultExecutorSupplier) eVar).a, cVar, contentResolver2)});
                    case 12:
                        j this$013 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$013, "this$0");
                        if (Build.VERSION.SDK_INT < 29) {
                            throw new Throwable("Unreachable exception. Just to make linter happy for the lazy block.");
                        }
                        g gVar11 = this$013.f12470b;
                        q0 q0Var2 = new q0(((DefaultExecutorSupplier) gVar11.f12461i).f4590c, gVar11.a, 0);
                        Intrinsics.checkNotNullExpressionValue(q0Var2, "newLocalThumbnailBitmapSdk29Producer(...)");
                        return this$013.e(q0Var2);
                    case 13:
                        j this$014 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$014, "this$0");
                        g gVar12 = this$014.f12470b;
                        j0 j0Var3 = new j0(((DefaultExecutorSupplier) gVar12.f12461i).a, gVar12.j, gVar12.a, 1);
                        Intrinsics.checkNotNullExpressionValue(j0Var3, "newQualifiedResourceFetchProducer(...)");
                        return this$014.g(j0Var3, new l1[]{new m0(((DefaultExecutorSupplier) gVar12.f12461i).a, gVar12.j, gVar12.a)});
                    case 14:
                        j this$015 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$015, "this$0");
                        g gVar13 = this$015.f12470b;
                        i0 i0Var = new i0(((DefaultExecutorSupplier) gVar13.f12461i).a, gVar13.j, gVar13.f12454b);
                        Intrinsics.checkNotNullExpressionValue(i0Var, "newLocalResourceFetchProducer(...)");
                        return this$015.g(i0Var, new l1[]{new m0(((DefaultExecutorSupplier) gVar13.f12461i).a, gVar13.j, gVar13.a)});
                    case 15:
                        j this$016 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$016, "this$0");
                        g gVar14 = this$016.f12470b;
                        i0 i0Var2 = new i0(((DefaultExecutorSupplier) gVar14.f12461i).a, gVar14.j, gVar14.f12455c);
                        Intrinsics.checkNotNullExpressionValue(i0Var2, "newLocalAssetFetchProducer(...)");
                        return this$016.g(i0Var2, new l1[]{new m0(((DefaultExecutorSupplier) gVar14.f12461i).a, gVar14.j, gVar14.a)});
                    case 16:
                        j this$017 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$017, "this$0");
                        g gVar15 = this$017.f12470b;
                        com.facebook.imagepipeline.producers.l lVar3 = new com.facebook.imagepipeline.producers.l(m8.a.f14400d, gVar15.j, 0);
                        Intrinsics.checkNotNullExpressionValue(lVar3, "newDataFetchProducer(...)");
                        return this$017.f(gVar15.a(new com.facebook.imagepipeline.producers.b(lVar3, 0), true, this$017.f12476h));
                    default:
                        j this$018 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$018, "this$0");
                        ta.a.D();
                        Object value5 = this$018.f12485s.getValue();
                        Intrinsics.checkNotNullExpressionValue(value5, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value5);
                }
            }
        });
        final int i14 = 5;
        this.f12483q = l.a(new Function0(this) { // from class: ja.h

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ j f12469e;

            {
                this.f12469e = this;
            }

            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                c1 a;
                boolean z7 = true;
                switch (i14) {
                    case 0:
                        j this$0 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$0, "this$0");
                        ta.a.D();
                        Object value = this$0.f12481o.getValue();
                        Intrinsics.checkNotNullExpressionValue(value, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value);
                    case 1:
                        j this$02 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$02, "this$0");
                        ta.a.D();
                        Object value2 = this$02.f12486t.getValue();
                        Intrinsics.checkNotNullExpressionValue(value2, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value2);
                    case 2:
                        j this$03 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$03, "this$0");
                        ta.a.D();
                        return this$03.f((z0) this$03.f12483q.getValue());
                    case 3:
                        j this$04 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$04, "this$0");
                        ta.a.D();
                        g gVar = this$04.f12470b;
                        z0 z0Var = (z0) this$04.f12483q.getValue();
                        g1 g1Var = this$04.f12473e;
                        gVar.getClass();
                        return new f1(z0Var, g1Var);
                    case 4:
                        j this$05 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$05, "this$0");
                        ta.a.D();
                        g gVar2 = this$05.f12470b;
                        Object value3 = this$05.f12481o.getValue();
                        Intrinsics.checkNotNullExpressionValue(value3, "getValue(...)");
                        gVar2.getClass();
                        return new com.facebook.imagepipeline.producers.b((z0) value3, 2);
                    case 5:
                        j this$06 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$06, "this$0");
                        ta.a.D();
                        NetworkFetcher networkFetcher2 = this$06.f12471c;
                        synchronized (this$06) {
                            try {
                                Intrinsics.checkNotNullParameter(networkFetcher2, "networkFetcher");
                                ta.a.D();
                                g gVar3 = this$06.f12470b;
                                w0 w0Var = new w0(gVar3.j, gVar3.f12456d, networkFetcher2);
                                Intrinsics.checkNotNullExpressionValue(w0Var, "newNetworkFetchProducer(...)");
                                com.facebook.imagepipeline.producers.b bVar = new com.facebook.imagepipeline.producers.b(this$06.h(w0Var), 0);
                                Intrinsics.checkNotNullExpressionValue(bVar, "newAddImageTransformMetaDataProducer(...)");
                                g gVar4 = this$06.f12470b;
                                if (!this$06.f12472d || this$06.f12474f == DownsampleMode.f4594i) {
                                    z7 = false;
                                }
                                a = gVar4.a(bVar, z7, this$06.f12476h);
                            } catch (Throwable th2) {
                                throw th2;
                            }
                        }
                        return a;
                    case 6:
                        j this$07 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$07, "this$0");
                        ta.a.D();
                        g gVar5 = this$07.f12470b;
                        Object value4 = this$07.f12485s.getValue();
                        Intrinsics.checkNotNullExpressionValue(value4, "getValue(...)");
                        gVar5.getClass();
                        return new com.facebook.imagepipeline.producers.b((z0) value4, 2);
                    case 7:
                        j this$08 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$08, "this$0");
                        ta.a.D();
                        g gVar6 = this$08.f12470b;
                        ExecutorService executor = ((DefaultExecutorSupplier) gVar6.f12461i).a;
                        e4.c pooledByteBufferFactory = gVar6.j;
                        Intrinsics.checkNotNullParameter(executor, "executor");
                        Intrinsics.checkNotNullParameter(pooledByteBufferFactory, "pooledByteBufferFactory");
                        com.facebook.imagepipeline.producers.l lVar = new com.facebook.imagepipeline.producers.l(executor, pooledByteBufferFactory, 1);
                        Intrinsics.checkNotNullExpressionValue(lVar, "newLocalFileFetchProducer(...)");
                        x h6 = this$08.h(lVar);
                        g1 g1Var2 = this$08.f12473e;
                        gVar6.getClass();
                        return new f1(h6, g1Var2);
                    case 8:
                        j this$09 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$09, "this$0");
                        ta.a.D();
                        g gVar7 = this$09.f12470b;
                        j0 j0Var = new j0(((DefaultExecutorSupplier) gVar7.f12461i).a, gVar7.j, gVar7.a, 0);
                        Intrinsics.checkNotNullExpressionValue(j0Var, "newLocalContentUriFetchProducer(...)");
                        x h7 = this$09.h(j0Var);
                        g1 g1Var3 = this$09.f12473e;
                        gVar7.getClass();
                        return new f1(h7, g1Var3);
                    case 9:
                        j this$010 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$010, "this$0");
                        g gVar8 = this$010.f12470b;
                        ExecutorService executor2 = ((DefaultExecutorSupplier) gVar8.f12461i).a;
                        e4.c pooledByteBufferFactory2 = gVar8.j;
                        Intrinsics.checkNotNullParameter(executor2, "executor");
                        Intrinsics.checkNotNullParameter(pooledByteBufferFactory2, "pooledByteBufferFactory");
                        com.facebook.imagepipeline.producers.l lVar2 = new com.facebook.imagepipeline.producers.l(executor2, pooledByteBufferFactory2, 1);
                        Intrinsics.checkNotNullExpressionValue(lVar2, "newLocalFileFetchProducer(...)");
                        return this$010.g(lVar2, new l1[]{new m0(((DefaultExecutorSupplier) gVar8.f12461i).a, gVar8.j, gVar8.a)});
                    case 10:
                        j this$011 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$011, "this$0");
                        g gVar9 = this$011.f12470b;
                        q0 q0Var = new q0(((DefaultExecutorSupplier) gVar9.f12461i).a, gVar9.a, 1);
                        Intrinsics.checkNotNullExpressionValue(q0Var, "newLocalVideoThumbnailProducer(...)");
                        return this$011.e(q0Var);
                    case 11:
                        j this$012 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$012, "this$0");
                        g gVar10 = this$012.f12470b;
                        j0 j0Var2 = new j0(((DefaultExecutorSupplier) gVar10.f12461i).a, gVar10.j, gVar10.a, 0);
                        Intrinsics.checkNotNullExpressionValue(j0Var2, "newLocalContentUriFetchProducer(...)");
                        gVar10.getClass();
                        e eVar = gVar10.f12461i;
                        ExecutorService executorService = ((DefaultExecutorSupplier) eVar).a;
                        e4.c cVar = gVar10.j;
                        ContentResolver contentResolver2 = gVar10.a;
                        return this$012.g(j0Var2, new l1[]{new k0(executorService, cVar, contentResolver2), new m0(((DefaultExecutorSupplier) eVar).a, cVar, contentResolver2)});
                    case 12:
                        j this$013 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$013, "this$0");
                        if (Build.VERSION.SDK_INT < 29) {
                            throw new Throwable("Unreachable exception. Just to make linter happy for the lazy block.");
                        }
                        g gVar11 = this$013.f12470b;
                        q0 q0Var2 = new q0(((DefaultExecutorSupplier) gVar11.f12461i).f4590c, gVar11.a, 0);
                        Intrinsics.checkNotNullExpressionValue(q0Var2, "newLocalThumbnailBitmapSdk29Producer(...)");
                        return this$013.e(q0Var2);
                    case 13:
                        j this$014 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$014, "this$0");
                        g gVar12 = this$014.f12470b;
                        j0 j0Var3 = new j0(((DefaultExecutorSupplier) gVar12.f12461i).a, gVar12.j, gVar12.a, 1);
                        Intrinsics.checkNotNullExpressionValue(j0Var3, "newQualifiedResourceFetchProducer(...)");
                        return this$014.g(j0Var3, new l1[]{new m0(((DefaultExecutorSupplier) gVar12.f12461i).a, gVar12.j, gVar12.a)});
                    case 14:
                        j this$015 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$015, "this$0");
                        g gVar13 = this$015.f12470b;
                        i0 i0Var = new i0(((DefaultExecutorSupplier) gVar13.f12461i).a, gVar13.j, gVar13.f12454b);
                        Intrinsics.checkNotNullExpressionValue(i0Var, "newLocalResourceFetchProducer(...)");
                        return this$015.g(i0Var, new l1[]{new m0(((DefaultExecutorSupplier) gVar13.f12461i).a, gVar13.j, gVar13.a)});
                    case 15:
                        j this$016 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$016, "this$0");
                        g gVar14 = this$016.f12470b;
                        i0 i0Var2 = new i0(((DefaultExecutorSupplier) gVar14.f12461i).a, gVar14.j, gVar14.f12455c);
                        Intrinsics.checkNotNullExpressionValue(i0Var2, "newLocalAssetFetchProducer(...)");
                        return this$016.g(i0Var2, new l1[]{new m0(((DefaultExecutorSupplier) gVar14.f12461i).a, gVar14.j, gVar14.a)});
                    case 16:
                        j this$017 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$017, "this$0");
                        g gVar15 = this$017.f12470b;
                        com.facebook.imagepipeline.producers.l lVar3 = new com.facebook.imagepipeline.producers.l(m8.a.f14400d, gVar15.j, 0);
                        Intrinsics.checkNotNullExpressionValue(lVar3, "newDataFetchProducer(...)");
                        return this$017.f(gVar15.a(new com.facebook.imagepipeline.producers.b(lVar3, 0), true, this$017.f12476h));
                    default:
                        j this$018 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$018, "this$0");
                        ta.a.D();
                        Object value5 = this$018.f12485s.getValue();
                        Intrinsics.checkNotNullExpressionValue(value5, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value5);
                }
            }
        });
        final int i15 = 6;
        this.f12484r = l.a(new Function0(this) { // from class: ja.h

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ j f12469e;

            {
                this.f12469e = this;
            }

            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                c1 a;
                boolean z7 = true;
                switch (i15) {
                    case 0:
                        j this$0 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$0, "this$0");
                        ta.a.D();
                        Object value = this$0.f12481o.getValue();
                        Intrinsics.checkNotNullExpressionValue(value, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value);
                    case 1:
                        j this$02 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$02, "this$0");
                        ta.a.D();
                        Object value2 = this$02.f12486t.getValue();
                        Intrinsics.checkNotNullExpressionValue(value2, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value2);
                    case 2:
                        j this$03 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$03, "this$0");
                        ta.a.D();
                        return this$03.f((z0) this$03.f12483q.getValue());
                    case 3:
                        j this$04 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$04, "this$0");
                        ta.a.D();
                        g gVar = this$04.f12470b;
                        z0 z0Var = (z0) this$04.f12483q.getValue();
                        g1 g1Var = this$04.f12473e;
                        gVar.getClass();
                        return new f1(z0Var, g1Var);
                    case 4:
                        j this$05 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$05, "this$0");
                        ta.a.D();
                        g gVar2 = this$05.f12470b;
                        Object value3 = this$05.f12481o.getValue();
                        Intrinsics.checkNotNullExpressionValue(value3, "getValue(...)");
                        gVar2.getClass();
                        return new com.facebook.imagepipeline.producers.b((z0) value3, 2);
                    case 5:
                        j this$06 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$06, "this$0");
                        ta.a.D();
                        NetworkFetcher networkFetcher2 = this$06.f12471c;
                        synchronized (this$06) {
                            try {
                                Intrinsics.checkNotNullParameter(networkFetcher2, "networkFetcher");
                                ta.a.D();
                                g gVar3 = this$06.f12470b;
                                w0 w0Var = new w0(gVar3.j, gVar3.f12456d, networkFetcher2);
                                Intrinsics.checkNotNullExpressionValue(w0Var, "newNetworkFetchProducer(...)");
                                com.facebook.imagepipeline.producers.b bVar = new com.facebook.imagepipeline.producers.b(this$06.h(w0Var), 0);
                                Intrinsics.checkNotNullExpressionValue(bVar, "newAddImageTransformMetaDataProducer(...)");
                                g gVar4 = this$06.f12470b;
                                if (!this$06.f12472d || this$06.f12474f == DownsampleMode.f4594i) {
                                    z7 = false;
                                }
                                a = gVar4.a(bVar, z7, this$06.f12476h);
                            } catch (Throwable th2) {
                                throw th2;
                            }
                        }
                        return a;
                    case 6:
                        j this$07 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$07, "this$0");
                        ta.a.D();
                        g gVar5 = this$07.f12470b;
                        Object value4 = this$07.f12485s.getValue();
                        Intrinsics.checkNotNullExpressionValue(value4, "getValue(...)");
                        gVar5.getClass();
                        return new com.facebook.imagepipeline.producers.b((z0) value4, 2);
                    case 7:
                        j this$08 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$08, "this$0");
                        ta.a.D();
                        g gVar6 = this$08.f12470b;
                        ExecutorService executor = ((DefaultExecutorSupplier) gVar6.f12461i).a;
                        e4.c pooledByteBufferFactory = gVar6.j;
                        Intrinsics.checkNotNullParameter(executor, "executor");
                        Intrinsics.checkNotNullParameter(pooledByteBufferFactory, "pooledByteBufferFactory");
                        com.facebook.imagepipeline.producers.l lVar = new com.facebook.imagepipeline.producers.l(executor, pooledByteBufferFactory, 1);
                        Intrinsics.checkNotNullExpressionValue(lVar, "newLocalFileFetchProducer(...)");
                        x h6 = this$08.h(lVar);
                        g1 g1Var2 = this$08.f12473e;
                        gVar6.getClass();
                        return new f1(h6, g1Var2);
                    case 8:
                        j this$09 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$09, "this$0");
                        ta.a.D();
                        g gVar7 = this$09.f12470b;
                        j0 j0Var = new j0(((DefaultExecutorSupplier) gVar7.f12461i).a, gVar7.j, gVar7.a, 0);
                        Intrinsics.checkNotNullExpressionValue(j0Var, "newLocalContentUriFetchProducer(...)");
                        x h7 = this$09.h(j0Var);
                        g1 g1Var3 = this$09.f12473e;
                        gVar7.getClass();
                        return new f1(h7, g1Var3);
                    case 9:
                        j this$010 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$010, "this$0");
                        g gVar8 = this$010.f12470b;
                        ExecutorService executor2 = ((DefaultExecutorSupplier) gVar8.f12461i).a;
                        e4.c pooledByteBufferFactory2 = gVar8.j;
                        Intrinsics.checkNotNullParameter(executor2, "executor");
                        Intrinsics.checkNotNullParameter(pooledByteBufferFactory2, "pooledByteBufferFactory");
                        com.facebook.imagepipeline.producers.l lVar2 = new com.facebook.imagepipeline.producers.l(executor2, pooledByteBufferFactory2, 1);
                        Intrinsics.checkNotNullExpressionValue(lVar2, "newLocalFileFetchProducer(...)");
                        return this$010.g(lVar2, new l1[]{new m0(((DefaultExecutorSupplier) gVar8.f12461i).a, gVar8.j, gVar8.a)});
                    case 10:
                        j this$011 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$011, "this$0");
                        g gVar9 = this$011.f12470b;
                        q0 q0Var = new q0(((DefaultExecutorSupplier) gVar9.f12461i).a, gVar9.a, 1);
                        Intrinsics.checkNotNullExpressionValue(q0Var, "newLocalVideoThumbnailProducer(...)");
                        return this$011.e(q0Var);
                    case 11:
                        j this$012 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$012, "this$0");
                        g gVar10 = this$012.f12470b;
                        j0 j0Var2 = new j0(((DefaultExecutorSupplier) gVar10.f12461i).a, gVar10.j, gVar10.a, 0);
                        Intrinsics.checkNotNullExpressionValue(j0Var2, "newLocalContentUriFetchProducer(...)");
                        gVar10.getClass();
                        e eVar = gVar10.f12461i;
                        ExecutorService executorService = ((DefaultExecutorSupplier) eVar).a;
                        e4.c cVar = gVar10.j;
                        ContentResolver contentResolver2 = gVar10.a;
                        return this$012.g(j0Var2, new l1[]{new k0(executorService, cVar, contentResolver2), new m0(((DefaultExecutorSupplier) eVar).a, cVar, contentResolver2)});
                    case 12:
                        j this$013 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$013, "this$0");
                        if (Build.VERSION.SDK_INT < 29) {
                            throw new Throwable("Unreachable exception. Just to make linter happy for the lazy block.");
                        }
                        g gVar11 = this$013.f12470b;
                        q0 q0Var2 = new q0(((DefaultExecutorSupplier) gVar11.f12461i).f4590c, gVar11.a, 0);
                        Intrinsics.checkNotNullExpressionValue(q0Var2, "newLocalThumbnailBitmapSdk29Producer(...)");
                        return this$013.e(q0Var2);
                    case 13:
                        j this$014 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$014, "this$0");
                        g gVar12 = this$014.f12470b;
                        j0 j0Var3 = new j0(((DefaultExecutorSupplier) gVar12.f12461i).a, gVar12.j, gVar12.a, 1);
                        Intrinsics.checkNotNullExpressionValue(j0Var3, "newQualifiedResourceFetchProducer(...)");
                        return this$014.g(j0Var3, new l1[]{new m0(((DefaultExecutorSupplier) gVar12.f12461i).a, gVar12.j, gVar12.a)});
                    case 14:
                        j this$015 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$015, "this$0");
                        g gVar13 = this$015.f12470b;
                        i0 i0Var = new i0(((DefaultExecutorSupplier) gVar13.f12461i).a, gVar13.j, gVar13.f12454b);
                        Intrinsics.checkNotNullExpressionValue(i0Var, "newLocalResourceFetchProducer(...)");
                        return this$015.g(i0Var, new l1[]{new m0(((DefaultExecutorSupplier) gVar13.f12461i).a, gVar13.j, gVar13.a)});
                    case 15:
                        j this$016 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$016, "this$0");
                        g gVar14 = this$016.f12470b;
                        i0 i0Var2 = new i0(((DefaultExecutorSupplier) gVar14.f12461i).a, gVar14.j, gVar14.f12455c);
                        Intrinsics.checkNotNullExpressionValue(i0Var2, "newLocalAssetFetchProducer(...)");
                        return this$016.g(i0Var2, new l1[]{new m0(((DefaultExecutorSupplier) gVar14.f12461i).a, gVar14.j, gVar14.a)});
                    case 16:
                        j this$017 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$017, "this$0");
                        g gVar15 = this$017.f12470b;
                        com.facebook.imagepipeline.producers.l lVar3 = new com.facebook.imagepipeline.producers.l(m8.a.f14400d, gVar15.j, 0);
                        Intrinsics.checkNotNullExpressionValue(lVar3, "newDataFetchProducer(...)");
                        return this$017.f(gVar15.a(new com.facebook.imagepipeline.producers.b(lVar3, 0), true, this$017.f12476h));
                    default:
                        j this$018 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$018, "this$0");
                        ta.a.D();
                        Object value5 = this$018.f12485s.getValue();
                        Intrinsics.checkNotNullExpressionValue(value5, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value5);
                }
            }
        });
        final int i16 = 7;
        this.f12485s = l.a(new Function0(this) { // from class: ja.h

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ j f12469e;

            {
                this.f12469e = this;
            }

            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                c1 a;
                boolean z7 = true;
                switch (i16) {
                    case 0:
                        j this$0 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$0, "this$0");
                        ta.a.D();
                        Object value = this$0.f12481o.getValue();
                        Intrinsics.checkNotNullExpressionValue(value, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value);
                    case 1:
                        j this$02 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$02, "this$0");
                        ta.a.D();
                        Object value2 = this$02.f12486t.getValue();
                        Intrinsics.checkNotNullExpressionValue(value2, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value2);
                    case 2:
                        j this$03 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$03, "this$0");
                        ta.a.D();
                        return this$03.f((z0) this$03.f12483q.getValue());
                    case 3:
                        j this$04 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$04, "this$0");
                        ta.a.D();
                        g gVar = this$04.f12470b;
                        z0 z0Var = (z0) this$04.f12483q.getValue();
                        g1 g1Var = this$04.f12473e;
                        gVar.getClass();
                        return new f1(z0Var, g1Var);
                    case 4:
                        j this$05 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$05, "this$0");
                        ta.a.D();
                        g gVar2 = this$05.f12470b;
                        Object value3 = this$05.f12481o.getValue();
                        Intrinsics.checkNotNullExpressionValue(value3, "getValue(...)");
                        gVar2.getClass();
                        return new com.facebook.imagepipeline.producers.b((z0) value3, 2);
                    case 5:
                        j this$06 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$06, "this$0");
                        ta.a.D();
                        NetworkFetcher networkFetcher2 = this$06.f12471c;
                        synchronized (this$06) {
                            try {
                                Intrinsics.checkNotNullParameter(networkFetcher2, "networkFetcher");
                                ta.a.D();
                                g gVar3 = this$06.f12470b;
                                w0 w0Var = new w0(gVar3.j, gVar3.f12456d, networkFetcher2);
                                Intrinsics.checkNotNullExpressionValue(w0Var, "newNetworkFetchProducer(...)");
                                com.facebook.imagepipeline.producers.b bVar = new com.facebook.imagepipeline.producers.b(this$06.h(w0Var), 0);
                                Intrinsics.checkNotNullExpressionValue(bVar, "newAddImageTransformMetaDataProducer(...)");
                                g gVar4 = this$06.f12470b;
                                if (!this$06.f12472d || this$06.f12474f == DownsampleMode.f4594i) {
                                    z7 = false;
                                }
                                a = gVar4.a(bVar, z7, this$06.f12476h);
                            } catch (Throwable th2) {
                                throw th2;
                            }
                        }
                        return a;
                    case 6:
                        j this$07 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$07, "this$0");
                        ta.a.D();
                        g gVar5 = this$07.f12470b;
                        Object value4 = this$07.f12485s.getValue();
                        Intrinsics.checkNotNullExpressionValue(value4, "getValue(...)");
                        gVar5.getClass();
                        return new com.facebook.imagepipeline.producers.b((z0) value4, 2);
                    case 7:
                        j this$08 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$08, "this$0");
                        ta.a.D();
                        g gVar6 = this$08.f12470b;
                        ExecutorService executor = ((DefaultExecutorSupplier) gVar6.f12461i).a;
                        e4.c pooledByteBufferFactory = gVar6.j;
                        Intrinsics.checkNotNullParameter(executor, "executor");
                        Intrinsics.checkNotNullParameter(pooledByteBufferFactory, "pooledByteBufferFactory");
                        com.facebook.imagepipeline.producers.l lVar = new com.facebook.imagepipeline.producers.l(executor, pooledByteBufferFactory, 1);
                        Intrinsics.checkNotNullExpressionValue(lVar, "newLocalFileFetchProducer(...)");
                        x h6 = this$08.h(lVar);
                        g1 g1Var2 = this$08.f12473e;
                        gVar6.getClass();
                        return new f1(h6, g1Var2);
                    case 8:
                        j this$09 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$09, "this$0");
                        ta.a.D();
                        g gVar7 = this$09.f12470b;
                        j0 j0Var = new j0(((DefaultExecutorSupplier) gVar7.f12461i).a, gVar7.j, gVar7.a, 0);
                        Intrinsics.checkNotNullExpressionValue(j0Var, "newLocalContentUriFetchProducer(...)");
                        x h7 = this$09.h(j0Var);
                        g1 g1Var3 = this$09.f12473e;
                        gVar7.getClass();
                        return new f1(h7, g1Var3);
                    case 9:
                        j this$010 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$010, "this$0");
                        g gVar8 = this$010.f12470b;
                        ExecutorService executor2 = ((DefaultExecutorSupplier) gVar8.f12461i).a;
                        e4.c pooledByteBufferFactory2 = gVar8.j;
                        Intrinsics.checkNotNullParameter(executor2, "executor");
                        Intrinsics.checkNotNullParameter(pooledByteBufferFactory2, "pooledByteBufferFactory");
                        com.facebook.imagepipeline.producers.l lVar2 = new com.facebook.imagepipeline.producers.l(executor2, pooledByteBufferFactory2, 1);
                        Intrinsics.checkNotNullExpressionValue(lVar2, "newLocalFileFetchProducer(...)");
                        return this$010.g(lVar2, new l1[]{new m0(((DefaultExecutorSupplier) gVar8.f12461i).a, gVar8.j, gVar8.a)});
                    case 10:
                        j this$011 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$011, "this$0");
                        g gVar9 = this$011.f12470b;
                        q0 q0Var = new q0(((DefaultExecutorSupplier) gVar9.f12461i).a, gVar9.a, 1);
                        Intrinsics.checkNotNullExpressionValue(q0Var, "newLocalVideoThumbnailProducer(...)");
                        return this$011.e(q0Var);
                    case 11:
                        j this$012 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$012, "this$0");
                        g gVar10 = this$012.f12470b;
                        j0 j0Var2 = new j0(((DefaultExecutorSupplier) gVar10.f12461i).a, gVar10.j, gVar10.a, 0);
                        Intrinsics.checkNotNullExpressionValue(j0Var2, "newLocalContentUriFetchProducer(...)");
                        gVar10.getClass();
                        e eVar = gVar10.f12461i;
                        ExecutorService executorService = ((DefaultExecutorSupplier) eVar).a;
                        e4.c cVar = gVar10.j;
                        ContentResolver contentResolver2 = gVar10.a;
                        return this$012.g(j0Var2, new l1[]{new k0(executorService, cVar, contentResolver2), new m0(((DefaultExecutorSupplier) eVar).a, cVar, contentResolver2)});
                    case 12:
                        j this$013 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$013, "this$0");
                        if (Build.VERSION.SDK_INT < 29) {
                            throw new Throwable("Unreachable exception. Just to make linter happy for the lazy block.");
                        }
                        g gVar11 = this$013.f12470b;
                        q0 q0Var2 = new q0(((DefaultExecutorSupplier) gVar11.f12461i).f4590c, gVar11.a, 0);
                        Intrinsics.checkNotNullExpressionValue(q0Var2, "newLocalThumbnailBitmapSdk29Producer(...)");
                        return this$013.e(q0Var2);
                    case 13:
                        j this$014 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$014, "this$0");
                        g gVar12 = this$014.f12470b;
                        j0 j0Var3 = new j0(((DefaultExecutorSupplier) gVar12.f12461i).a, gVar12.j, gVar12.a, 1);
                        Intrinsics.checkNotNullExpressionValue(j0Var3, "newQualifiedResourceFetchProducer(...)");
                        return this$014.g(j0Var3, new l1[]{new m0(((DefaultExecutorSupplier) gVar12.f12461i).a, gVar12.j, gVar12.a)});
                    case 14:
                        j this$015 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$015, "this$0");
                        g gVar13 = this$015.f12470b;
                        i0 i0Var = new i0(((DefaultExecutorSupplier) gVar13.f12461i).a, gVar13.j, gVar13.f12454b);
                        Intrinsics.checkNotNullExpressionValue(i0Var, "newLocalResourceFetchProducer(...)");
                        return this$015.g(i0Var, new l1[]{new m0(((DefaultExecutorSupplier) gVar13.f12461i).a, gVar13.j, gVar13.a)});
                    case 15:
                        j this$016 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$016, "this$0");
                        g gVar14 = this$016.f12470b;
                        i0 i0Var2 = new i0(((DefaultExecutorSupplier) gVar14.f12461i).a, gVar14.j, gVar14.f12455c);
                        Intrinsics.checkNotNullExpressionValue(i0Var2, "newLocalAssetFetchProducer(...)");
                        return this$016.g(i0Var2, new l1[]{new m0(((DefaultExecutorSupplier) gVar14.f12461i).a, gVar14.j, gVar14.a)});
                    case 16:
                        j this$017 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$017, "this$0");
                        g gVar15 = this$017.f12470b;
                        com.facebook.imagepipeline.producers.l lVar3 = new com.facebook.imagepipeline.producers.l(m8.a.f14400d, gVar15.j, 0);
                        Intrinsics.checkNotNullExpressionValue(lVar3, "newDataFetchProducer(...)");
                        return this$017.f(gVar15.a(new com.facebook.imagepipeline.producers.b(lVar3, 0), true, this$017.f12476h));
                    default:
                        j this$018 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$018, "this$0");
                        ta.a.D();
                        Object value5 = this$018.f12485s.getValue();
                        Intrinsics.checkNotNullExpressionValue(value5, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value5);
                }
            }
        });
        final int i17 = 8;
        this.f12486t = l.a(new Function0(this) { // from class: ja.h

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ j f12469e;

            {
                this.f12469e = this;
            }

            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                c1 a;
                boolean z7 = true;
                switch (i17) {
                    case 0:
                        j this$0 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$0, "this$0");
                        ta.a.D();
                        Object value = this$0.f12481o.getValue();
                        Intrinsics.checkNotNullExpressionValue(value, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value);
                    case 1:
                        j this$02 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$02, "this$0");
                        ta.a.D();
                        Object value2 = this$02.f12486t.getValue();
                        Intrinsics.checkNotNullExpressionValue(value2, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value2);
                    case 2:
                        j this$03 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$03, "this$0");
                        ta.a.D();
                        return this$03.f((z0) this$03.f12483q.getValue());
                    case 3:
                        j this$04 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$04, "this$0");
                        ta.a.D();
                        g gVar = this$04.f12470b;
                        z0 z0Var = (z0) this$04.f12483q.getValue();
                        g1 g1Var = this$04.f12473e;
                        gVar.getClass();
                        return new f1(z0Var, g1Var);
                    case 4:
                        j this$05 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$05, "this$0");
                        ta.a.D();
                        g gVar2 = this$05.f12470b;
                        Object value3 = this$05.f12481o.getValue();
                        Intrinsics.checkNotNullExpressionValue(value3, "getValue(...)");
                        gVar2.getClass();
                        return new com.facebook.imagepipeline.producers.b((z0) value3, 2);
                    case 5:
                        j this$06 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$06, "this$0");
                        ta.a.D();
                        NetworkFetcher networkFetcher2 = this$06.f12471c;
                        synchronized (this$06) {
                            try {
                                Intrinsics.checkNotNullParameter(networkFetcher2, "networkFetcher");
                                ta.a.D();
                                g gVar3 = this$06.f12470b;
                                w0 w0Var = new w0(gVar3.j, gVar3.f12456d, networkFetcher2);
                                Intrinsics.checkNotNullExpressionValue(w0Var, "newNetworkFetchProducer(...)");
                                com.facebook.imagepipeline.producers.b bVar = new com.facebook.imagepipeline.producers.b(this$06.h(w0Var), 0);
                                Intrinsics.checkNotNullExpressionValue(bVar, "newAddImageTransformMetaDataProducer(...)");
                                g gVar4 = this$06.f12470b;
                                if (!this$06.f12472d || this$06.f12474f == DownsampleMode.f4594i) {
                                    z7 = false;
                                }
                                a = gVar4.a(bVar, z7, this$06.f12476h);
                            } catch (Throwable th2) {
                                throw th2;
                            }
                        }
                        return a;
                    case 6:
                        j this$07 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$07, "this$0");
                        ta.a.D();
                        g gVar5 = this$07.f12470b;
                        Object value4 = this$07.f12485s.getValue();
                        Intrinsics.checkNotNullExpressionValue(value4, "getValue(...)");
                        gVar5.getClass();
                        return new com.facebook.imagepipeline.producers.b((z0) value4, 2);
                    case 7:
                        j this$08 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$08, "this$0");
                        ta.a.D();
                        g gVar6 = this$08.f12470b;
                        ExecutorService executor = ((DefaultExecutorSupplier) gVar6.f12461i).a;
                        e4.c pooledByteBufferFactory = gVar6.j;
                        Intrinsics.checkNotNullParameter(executor, "executor");
                        Intrinsics.checkNotNullParameter(pooledByteBufferFactory, "pooledByteBufferFactory");
                        com.facebook.imagepipeline.producers.l lVar = new com.facebook.imagepipeline.producers.l(executor, pooledByteBufferFactory, 1);
                        Intrinsics.checkNotNullExpressionValue(lVar, "newLocalFileFetchProducer(...)");
                        x h6 = this$08.h(lVar);
                        g1 g1Var2 = this$08.f12473e;
                        gVar6.getClass();
                        return new f1(h6, g1Var2);
                    case 8:
                        j this$09 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$09, "this$0");
                        ta.a.D();
                        g gVar7 = this$09.f12470b;
                        j0 j0Var = new j0(((DefaultExecutorSupplier) gVar7.f12461i).a, gVar7.j, gVar7.a, 0);
                        Intrinsics.checkNotNullExpressionValue(j0Var, "newLocalContentUriFetchProducer(...)");
                        x h7 = this$09.h(j0Var);
                        g1 g1Var3 = this$09.f12473e;
                        gVar7.getClass();
                        return new f1(h7, g1Var3);
                    case 9:
                        j this$010 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$010, "this$0");
                        g gVar8 = this$010.f12470b;
                        ExecutorService executor2 = ((DefaultExecutorSupplier) gVar8.f12461i).a;
                        e4.c pooledByteBufferFactory2 = gVar8.j;
                        Intrinsics.checkNotNullParameter(executor2, "executor");
                        Intrinsics.checkNotNullParameter(pooledByteBufferFactory2, "pooledByteBufferFactory");
                        com.facebook.imagepipeline.producers.l lVar2 = new com.facebook.imagepipeline.producers.l(executor2, pooledByteBufferFactory2, 1);
                        Intrinsics.checkNotNullExpressionValue(lVar2, "newLocalFileFetchProducer(...)");
                        return this$010.g(lVar2, new l1[]{new m0(((DefaultExecutorSupplier) gVar8.f12461i).a, gVar8.j, gVar8.a)});
                    case 10:
                        j this$011 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$011, "this$0");
                        g gVar9 = this$011.f12470b;
                        q0 q0Var = new q0(((DefaultExecutorSupplier) gVar9.f12461i).a, gVar9.a, 1);
                        Intrinsics.checkNotNullExpressionValue(q0Var, "newLocalVideoThumbnailProducer(...)");
                        return this$011.e(q0Var);
                    case 11:
                        j this$012 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$012, "this$0");
                        g gVar10 = this$012.f12470b;
                        j0 j0Var2 = new j0(((DefaultExecutorSupplier) gVar10.f12461i).a, gVar10.j, gVar10.a, 0);
                        Intrinsics.checkNotNullExpressionValue(j0Var2, "newLocalContentUriFetchProducer(...)");
                        gVar10.getClass();
                        e eVar = gVar10.f12461i;
                        ExecutorService executorService = ((DefaultExecutorSupplier) eVar).a;
                        e4.c cVar = gVar10.j;
                        ContentResolver contentResolver2 = gVar10.a;
                        return this$012.g(j0Var2, new l1[]{new k0(executorService, cVar, contentResolver2), new m0(((DefaultExecutorSupplier) eVar).a, cVar, contentResolver2)});
                    case 12:
                        j this$013 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$013, "this$0");
                        if (Build.VERSION.SDK_INT < 29) {
                            throw new Throwable("Unreachable exception. Just to make linter happy for the lazy block.");
                        }
                        g gVar11 = this$013.f12470b;
                        q0 q0Var2 = new q0(((DefaultExecutorSupplier) gVar11.f12461i).f4590c, gVar11.a, 0);
                        Intrinsics.checkNotNullExpressionValue(q0Var2, "newLocalThumbnailBitmapSdk29Producer(...)");
                        return this$013.e(q0Var2);
                    case 13:
                        j this$014 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$014, "this$0");
                        g gVar12 = this$014.f12470b;
                        j0 j0Var3 = new j0(((DefaultExecutorSupplier) gVar12.f12461i).a, gVar12.j, gVar12.a, 1);
                        Intrinsics.checkNotNullExpressionValue(j0Var3, "newQualifiedResourceFetchProducer(...)");
                        return this$014.g(j0Var3, new l1[]{new m0(((DefaultExecutorSupplier) gVar12.f12461i).a, gVar12.j, gVar12.a)});
                    case 14:
                        j this$015 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$015, "this$0");
                        g gVar13 = this$015.f12470b;
                        i0 i0Var = new i0(((DefaultExecutorSupplier) gVar13.f12461i).a, gVar13.j, gVar13.f12454b);
                        Intrinsics.checkNotNullExpressionValue(i0Var, "newLocalResourceFetchProducer(...)");
                        return this$015.g(i0Var, new l1[]{new m0(((DefaultExecutorSupplier) gVar13.f12461i).a, gVar13.j, gVar13.a)});
                    case 15:
                        j this$016 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$016, "this$0");
                        g gVar14 = this$016.f12470b;
                        i0 i0Var2 = new i0(((DefaultExecutorSupplier) gVar14.f12461i).a, gVar14.j, gVar14.f12455c);
                        Intrinsics.checkNotNullExpressionValue(i0Var2, "newLocalAssetFetchProducer(...)");
                        return this$016.g(i0Var2, new l1[]{new m0(((DefaultExecutorSupplier) gVar14.f12461i).a, gVar14.j, gVar14.a)});
                    case 16:
                        j this$017 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$017, "this$0");
                        g gVar15 = this$017.f12470b;
                        com.facebook.imagepipeline.producers.l lVar3 = new com.facebook.imagepipeline.producers.l(m8.a.f14400d, gVar15.j, 0);
                        Intrinsics.checkNotNullExpressionValue(lVar3, "newDataFetchProducer(...)");
                        return this$017.f(gVar15.a(new com.facebook.imagepipeline.producers.b(lVar3, 0), true, this$017.f12476h));
                    default:
                        j this$018 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$018, "this$0");
                        ta.a.D();
                        Object value5 = this$018.f12485s.getValue();
                        Intrinsics.checkNotNullExpressionValue(value5, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value5);
                }
            }
        });
        final int i18 = 9;
        this.f12487u = l.a(new Function0(this) { // from class: ja.h

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ j f12469e;

            {
                this.f12469e = this;
            }

            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                c1 a;
                boolean z7 = true;
                switch (i18) {
                    case 0:
                        j this$0 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$0, "this$0");
                        ta.a.D();
                        Object value = this$0.f12481o.getValue();
                        Intrinsics.checkNotNullExpressionValue(value, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value);
                    case 1:
                        j this$02 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$02, "this$0");
                        ta.a.D();
                        Object value2 = this$02.f12486t.getValue();
                        Intrinsics.checkNotNullExpressionValue(value2, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value2);
                    case 2:
                        j this$03 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$03, "this$0");
                        ta.a.D();
                        return this$03.f((z0) this$03.f12483q.getValue());
                    case 3:
                        j this$04 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$04, "this$0");
                        ta.a.D();
                        g gVar = this$04.f12470b;
                        z0 z0Var = (z0) this$04.f12483q.getValue();
                        g1 g1Var = this$04.f12473e;
                        gVar.getClass();
                        return new f1(z0Var, g1Var);
                    case 4:
                        j this$05 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$05, "this$0");
                        ta.a.D();
                        g gVar2 = this$05.f12470b;
                        Object value3 = this$05.f12481o.getValue();
                        Intrinsics.checkNotNullExpressionValue(value3, "getValue(...)");
                        gVar2.getClass();
                        return new com.facebook.imagepipeline.producers.b((z0) value3, 2);
                    case 5:
                        j this$06 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$06, "this$0");
                        ta.a.D();
                        NetworkFetcher networkFetcher2 = this$06.f12471c;
                        synchronized (this$06) {
                            try {
                                Intrinsics.checkNotNullParameter(networkFetcher2, "networkFetcher");
                                ta.a.D();
                                g gVar3 = this$06.f12470b;
                                w0 w0Var = new w0(gVar3.j, gVar3.f12456d, networkFetcher2);
                                Intrinsics.checkNotNullExpressionValue(w0Var, "newNetworkFetchProducer(...)");
                                com.facebook.imagepipeline.producers.b bVar = new com.facebook.imagepipeline.producers.b(this$06.h(w0Var), 0);
                                Intrinsics.checkNotNullExpressionValue(bVar, "newAddImageTransformMetaDataProducer(...)");
                                g gVar4 = this$06.f12470b;
                                if (!this$06.f12472d || this$06.f12474f == DownsampleMode.f4594i) {
                                    z7 = false;
                                }
                                a = gVar4.a(bVar, z7, this$06.f12476h);
                            } catch (Throwable th2) {
                                throw th2;
                            }
                        }
                        return a;
                    case 6:
                        j this$07 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$07, "this$0");
                        ta.a.D();
                        g gVar5 = this$07.f12470b;
                        Object value4 = this$07.f12485s.getValue();
                        Intrinsics.checkNotNullExpressionValue(value4, "getValue(...)");
                        gVar5.getClass();
                        return new com.facebook.imagepipeline.producers.b((z0) value4, 2);
                    case 7:
                        j this$08 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$08, "this$0");
                        ta.a.D();
                        g gVar6 = this$08.f12470b;
                        ExecutorService executor = ((DefaultExecutorSupplier) gVar6.f12461i).a;
                        e4.c pooledByteBufferFactory = gVar6.j;
                        Intrinsics.checkNotNullParameter(executor, "executor");
                        Intrinsics.checkNotNullParameter(pooledByteBufferFactory, "pooledByteBufferFactory");
                        com.facebook.imagepipeline.producers.l lVar = new com.facebook.imagepipeline.producers.l(executor, pooledByteBufferFactory, 1);
                        Intrinsics.checkNotNullExpressionValue(lVar, "newLocalFileFetchProducer(...)");
                        x h6 = this$08.h(lVar);
                        g1 g1Var2 = this$08.f12473e;
                        gVar6.getClass();
                        return new f1(h6, g1Var2);
                    case 8:
                        j this$09 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$09, "this$0");
                        ta.a.D();
                        g gVar7 = this$09.f12470b;
                        j0 j0Var = new j0(((DefaultExecutorSupplier) gVar7.f12461i).a, gVar7.j, gVar7.a, 0);
                        Intrinsics.checkNotNullExpressionValue(j0Var, "newLocalContentUriFetchProducer(...)");
                        x h7 = this$09.h(j0Var);
                        g1 g1Var3 = this$09.f12473e;
                        gVar7.getClass();
                        return new f1(h7, g1Var3);
                    case 9:
                        j this$010 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$010, "this$0");
                        g gVar8 = this$010.f12470b;
                        ExecutorService executor2 = ((DefaultExecutorSupplier) gVar8.f12461i).a;
                        e4.c pooledByteBufferFactory2 = gVar8.j;
                        Intrinsics.checkNotNullParameter(executor2, "executor");
                        Intrinsics.checkNotNullParameter(pooledByteBufferFactory2, "pooledByteBufferFactory");
                        com.facebook.imagepipeline.producers.l lVar2 = new com.facebook.imagepipeline.producers.l(executor2, pooledByteBufferFactory2, 1);
                        Intrinsics.checkNotNullExpressionValue(lVar2, "newLocalFileFetchProducer(...)");
                        return this$010.g(lVar2, new l1[]{new m0(((DefaultExecutorSupplier) gVar8.f12461i).a, gVar8.j, gVar8.a)});
                    case 10:
                        j this$011 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$011, "this$0");
                        g gVar9 = this$011.f12470b;
                        q0 q0Var = new q0(((DefaultExecutorSupplier) gVar9.f12461i).a, gVar9.a, 1);
                        Intrinsics.checkNotNullExpressionValue(q0Var, "newLocalVideoThumbnailProducer(...)");
                        return this$011.e(q0Var);
                    case 11:
                        j this$012 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$012, "this$0");
                        g gVar10 = this$012.f12470b;
                        j0 j0Var2 = new j0(((DefaultExecutorSupplier) gVar10.f12461i).a, gVar10.j, gVar10.a, 0);
                        Intrinsics.checkNotNullExpressionValue(j0Var2, "newLocalContentUriFetchProducer(...)");
                        gVar10.getClass();
                        e eVar = gVar10.f12461i;
                        ExecutorService executorService = ((DefaultExecutorSupplier) eVar).a;
                        e4.c cVar = gVar10.j;
                        ContentResolver contentResolver2 = gVar10.a;
                        return this$012.g(j0Var2, new l1[]{new k0(executorService, cVar, contentResolver2), new m0(((DefaultExecutorSupplier) eVar).a, cVar, contentResolver2)});
                    case 12:
                        j this$013 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$013, "this$0");
                        if (Build.VERSION.SDK_INT < 29) {
                            throw new Throwable("Unreachable exception. Just to make linter happy for the lazy block.");
                        }
                        g gVar11 = this$013.f12470b;
                        q0 q0Var2 = new q0(((DefaultExecutorSupplier) gVar11.f12461i).f4590c, gVar11.a, 0);
                        Intrinsics.checkNotNullExpressionValue(q0Var2, "newLocalThumbnailBitmapSdk29Producer(...)");
                        return this$013.e(q0Var2);
                    case 13:
                        j this$014 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$014, "this$0");
                        g gVar12 = this$014.f12470b;
                        j0 j0Var3 = new j0(((DefaultExecutorSupplier) gVar12.f12461i).a, gVar12.j, gVar12.a, 1);
                        Intrinsics.checkNotNullExpressionValue(j0Var3, "newQualifiedResourceFetchProducer(...)");
                        return this$014.g(j0Var3, new l1[]{new m0(((DefaultExecutorSupplier) gVar12.f12461i).a, gVar12.j, gVar12.a)});
                    case 14:
                        j this$015 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$015, "this$0");
                        g gVar13 = this$015.f12470b;
                        i0 i0Var = new i0(((DefaultExecutorSupplier) gVar13.f12461i).a, gVar13.j, gVar13.f12454b);
                        Intrinsics.checkNotNullExpressionValue(i0Var, "newLocalResourceFetchProducer(...)");
                        return this$015.g(i0Var, new l1[]{new m0(((DefaultExecutorSupplier) gVar13.f12461i).a, gVar13.j, gVar13.a)});
                    case 15:
                        j this$016 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$016, "this$0");
                        g gVar14 = this$016.f12470b;
                        i0 i0Var2 = new i0(((DefaultExecutorSupplier) gVar14.f12461i).a, gVar14.j, gVar14.f12455c);
                        Intrinsics.checkNotNullExpressionValue(i0Var2, "newLocalAssetFetchProducer(...)");
                        return this$016.g(i0Var2, new l1[]{new m0(((DefaultExecutorSupplier) gVar14.f12461i).a, gVar14.j, gVar14.a)});
                    case 16:
                        j this$017 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$017, "this$0");
                        g gVar15 = this$017.f12470b;
                        com.facebook.imagepipeline.producers.l lVar3 = new com.facebook.imagepipeline.producers.l(m8.a.f14400d, gVar15.j, 0);
                        Intrinsics.checkNotNullExpressionValue(lVar3, "newDataFetchProducer(...)");
                        return this$017.f(gVar15.a(new com.facebook.imagepipeline.producers.b(lVar3, 0), true, this$017.f12476h));
                    default:
                        j this$018 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$018, "this$0");
                        ta.a.D();
                        Object value5 = this$018.f12485s.getValue();
                        Intrinsics.checkNotNullExpressionValue(value5, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value5);
                }
            }
        });
        final int i19 = 10;
        this.f12488v = l.a(new Function0(this) { // from class: ja.h

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ j f12469e;

            {
                this.f12469e = this;
            }

            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                c1 a;
                boolean z7 = true;
                switch (i19) {
                    case 0:
                        j this$0 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$0, "this$0");
                        ta.a.D();
                        Object value = this$0.f12481o.getValue();
                        Intrinsics.checkNotNullExpressionValue(value, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value);
                    case 1:
                        j this$02 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$02, "this$0");
                        ta.a.D();
                        Object value2 = this$02.f12486t.getValue();
                        Intrinsics.checkNotNullExpressionValue(value2, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value2);
                    case 2:
                        j this$03 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$03, "this$0");
                        ta.a.D();
                        return this$03.f((z0) this$03.f12483q.getValue());
                    case 3:
                        j this$04 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$04, "this$0");
                        ta.a.D();
                        g gVar = this$04.f12470b;
                        z0 z0Var = (z0) this$04.f12483q.getValue();
                        g1 g1Var = this$04.f12473e;
                        gVar.getClass();
                        return new f1(z0Var, g1Var);
                    case 4:
                        j this$05 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$05, "this$0");
                        ta.a.D();
                        g gVar2 = this$05.f12470b;
                        Object value3 = this$05.f12481o.getValue();
                        Intrinsics.checkNotNullExpressionValue(value3, "getValue(...)");
                        gVar2.getClass();
                        return new com.facebook.imagepipeline.producers.b((z0) value3, 2);
                    case 5:
                        j this$06 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$06, "this$0");
                        ta.a.D();
                        NetworkFetcher networkFetcher2 = this$06.f12471c;
                        synchronized (this$06) {
                            try {
                                Intrinsics.checkNotNullParameter(networkFetcher2, "networkFetcher");
                                ta.a.D();
                                g gVar3 = this$06.f12470b;
                                w0 w0Var = new w0(gVar3.j, gVar3.f12456d, networkFetcher2);
                                Intrinsics.checkNotNullExpressionValue(w0Var, "newNetworkFetchProducer(...)");
                                com.facebook.imagepipeline.producers.b bVar = new com.facebook.imagepipeline.producers.b(this$06.h(w0Var), 0);
                                Intrinsics.checkNotNullExpressionValue(bVar, "newAddImageTransformMetaDataProducer(...)");
                                g gVar4 = this$06.f12470b;
                                if (!this$06.f12472d || this$06.f12474f == DownsampleMode.f4594i) {
                                    z7 = false;
                                }
                                a = gVar4.a(bVar, z7, this$06.f12476h);
                            } catch (Throwable th2) {
                                throw th2;
                            }
                        }
                        return a;
                    case 6:
                        j this$07 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$07, "this$0");
                        ta.a.D();
                        g gVar5 = this$07.f12470b;
                        Object value4 = this$07.f12485s.getValue();
                        Intrinsics.checkNotNullExpressionValue(value4, "getValue(...)");
                        gVar5.getClass();
                        return new com.facebook.imagepipeline.producers.b((z0) value4, 2);
                    case 7:
                        j this$08 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$08, "this$0");
                        ta.a.D();
                        g gVar6 = this$08.f12470b;
                        ExecutorService executor = ((DefaultExecutorSupplier) gVar6.f12461i).a;
                        e4.c pooledByteBufferFactory = gVar6.j;
                        Intrinsics.checkNotNullParameter(executor, "executor");
                        Intrinsics.checkNotNullParameter(pooledByteBufferFactory, "pooledByteBufferFactory");
                        com.facebook.imagepipeline.producers.l lVar = new com.facebook.imagepipeline.producers.l(executor, pooledByteBufferFactory, 1);
                        Intrinsics.checkNotNullExpressionValue(lVar, "newLocalFileFetchProducer(...)");
                        x h6 = this$08.h(lVar);
                        g1 g1Var2 = this$08.f12473e;
                        gVar6.getClass();
                        return new f1(h6, g1Var2);
                    case 8:
                        j this$09 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$09, "this$0");
                        ta.a.D();
                        g gVar7 = this$09.f12470b;
                        j0 j0Var = new j0(((DefaultExecutorSupplier) gVar7.f12461i).a, gVar7.j, gVar7.a, 0);
                        Intrinsics.checkNotNullExpressionValue(j0Var, "newLocalContentUriFetchProducer(...)");
                        x h7 = this$09.h(j0Var);
                        g1 g1Var3 = this$09.f12473e;
                        gVar7.getClass();
                        return new f1(h7, g1Var3);
                    case 9:
                        j this$010 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$010, "this$0");
                        g gVar8 = this$010.f12470b;
                        ExecutorService executor2 = ((DefaultExecutorSupplier) gVar8.f12461i).a;
                        e4.c pooledByteBufferFactory2 = gVar8.j;
                        Intrinsics.checkNotNullParameter(executor2, "executor");
                        Intrinsics.checkNotNullParameter(pooledByteBufferFactory2, "pooledByteBufferFactory");
                        com.facebook.imagepipeline.producers.l lVar2 = new com.facebook.imagepipeline.producers.l(executor2, pooledByteBufferFactory2, 1);
                        Intrinsics.checkNotNullExpressionValue(lVar2, "newLocalFileFetchProducer(...)");
                        return this$010.g(lVar2, new l1[]{new m0(((DefaultExecutorSupplier) gVar8.f12461i).a, gVar8.j, gVar8.a)});
                    case 10:
                        j this$011 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$011, "this$0");
                        g gVar9 = this$011.f12470b;
                        q0 q0Var = new q0(((DefaultExecutorSupplier) gVar9.f12461i).a, gVar9.a, 1);
                        Intrinsics.checkNotNullExpressionValue(q0Var, "newLocalVideoThumbnailProducer(...)");
                        return this$011.e(q0Var);
                    case 11:
                        j this$012 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$012, "this$0");
                        g gVar10 = this$012.f12470b;
                        j0 j0Var2 = new j0(((DefaultExecutorSupplier) gVar10.f12461i).a, gVar10.j, gVar10.a, 0);
                        Intrinsics.checkNotNullExpressionValue(j0Var2, "newLocalContentUriFetchProducer(...)");
                        gVar10.getClass();
                        e eVar = gVar10.f12461i;
                        ExecutorService executorService = ((DefaultExecutorSupplier) eVar).a;
                        e4.c cVar = gVar10.j;
                        ContentResolver contentResolver2 = gVar10.a;
                        return this$012.g(j0Var2, new l1[]{new k0(executorService, cVar, contentResolver2), new m0(((DefaultExecutorSupplier) eVar).a, cVar, contentResolver2)});
                    case 12:
                        j this$013 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$013, "this$0");
                        if (Build.VERSION.SDK_INT < 29) {
                            throw new Throwable("Unreachable exception. Just to make linter happy for the lazy block.");
                        }
                        g gVar11 = this$013.f12470b;
                        q0 q0Var2 = new q0(((DefaultExecutorSupplier) gVar11.f12461i).f4590c, gVar11.a, 0);
                        Intrinsics.checkNotNullExpressionValue(q0Var2, "newLocalThumbnailBitmapSdk29Producer(...)");
                        return this$013.e(q0Var2);
                    case 13:
                        j this$014 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$014, "this$0");
                        g gVar12 = this$014.f12470b;
                        j0 j0Var3 = new j0(((DefaultExecutorSupplier) gVar12.f12461i).a, gVar12.j, gVar12.a, 1);
                        Intrinsics.checkNotNullExpressionValue(j0Var3, "newQualifiedResourceFetchProducer(...)");
                        return this$014.g(j0Var3, new l1[]{new m0(((DefaultExecutorSupplier) gVar12.f12461i).a, gVar12.j, gVar12.a)});
                    case 14:
                        j this$015 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$015, "this$0");
                        g gVar13 = this$015.f12470b;
                        i0 i0Var = new i0(((DefaultExecutorSupplier) gVar13.f12461i).a, gVar13.j, gVar13.f12454b);
                        Intrinsics.checkNotNullExpressionValue(i0Var, "newLocalResourceFetchProducer(...)");
                        return this$015.g(i0Var, new l1[]{new m0(((DefaultExecutorSupplier) gVar13.f12461i).a, gVar13.j, gVar13.a)});
                    case 15:
                        j this$016 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$016, "this$0");
                        g gVar14 = this$016.f12470b;
                        i0 i0Var2 = new i0(((DefaultExecutorSupplier) gVar14.f12461i).a, gVar14.j, gVar14.f12455c);
                        Intrinsics.checkNotNullExpressionValue(i0Var2, "newLocalAssetFetchProducer(...)");
                        return this$016.g(i0Var2, new l1[]{new m0(((DefaultExecutorSupplier) gVar14.f12461i).a, gVar14.j, gVar14.a)});
                    case 16:
                        j this$017 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$017, "this$0");
                        g gVar15 = this$017.f12470b;
                        com.facebook.imagepipeline.producers.l lVar3 = new com.facebook.imagepipeline.producers.l(m8.a.f14400d, gVar15.j, 0);
                        Intrinsics.checkNotNullExpressionValue(lVar3, "newDataFetchProducer(...)");
                        return this$017.f(gVar15.a(new com.facebook.imagepipeline.producers.b(lVar3, 0), true, this$017.f12476h));
                    default:
                        j this$018 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$018, "this$0");
                        ta.a.D();
                        Object value5 = this$018.f12485s.getValue();
                        Intrinsics.checkNotNullExpressionValue(value5, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value5);
                }
            }
        });
        final int i20 = 11;
        this.f12489w = l.a(new Function0(this) { // from class: ja.h

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ j f12469e;

            {
                this.f12469e = this;
            }

            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                c1 a;
                boolean z7 = true;
                switch (i20) {
                    case 0:
                        j this$0 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$0, "this$0");
                        ta.a.D();
                        Object value = this$0.f12481o.getValue();
                        Intrinsics.checkNotNullExpressionValue(value, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value);
                    case 1:
                        j this$02 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$02, "this$0");
                        ta.a.D();
                        Object value2 = this$02.f12486t.getValue();
                        Intrinsics.checkNotNullExpressionValue(value2, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value2);
                    case 2:
                        j this$03 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$03, "this$0");
                        ta.a.D();
                        return this$03.f((z0) this$03.f12483q.getValue());
                    case 3:
                        j this$04 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$04, "this$0");
                        ta.a.D();
                        g gVar = this$04.f12470b;
                        z0 z0Var = (z0) this$04.f12483q.getValue();
                        g1 g1Var = this$04.f12473e;
                        gVar.getClass();
                        return new f1(z0Var, g1Var);
                    case 4:
                        j this$05 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$05, "this$0");
                        ta.a.D();
                        g gVar2 = this$05.f12470b;
                        Object value3 = this$05.f12481o.getValue();
                        Intrinsics.checkNotNullExpressionValue(value3, "getValue(...)");
                        gVar2.getClass();
                        return new com.facebook.imagepipeline.producers.b((z0) value3, 2);
                    case 5:
                        j this$06 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$06, "this$0");
                        ta.a.D();
                        NetworkFetcher networkFetcher2 = this$06.f12471c;
                        synchronized (this$06) {
                            try {
                                Intrinsics.checkNotNullParameter(networkFetcher2, "networkFetcher");
                                ta.a.D();
                                g gVar3 = this$06.f12470b;
                                w0 w0Var = new w0(gVar3.j, gVar3.f12456d, networkFetcher2);
                                Intrinsics.checkNotNullExpressionValue(w0Var, "newNetworkFetchProducer(...)");
                                com.facebook.imagepipeline.producers.b bVar = new com.facebook.imagepipeline.producers.b(this$06.h(w0Var), 0);
                                Intrinsics.checkNotNullExpressionValue(bVar, "newAddImageTransformMetaDataProducer(...)");
                                g gVar4 = this$06.f12470b;
                                if (!this$06.f12472d || this$06.f12474f == DownsampleMode.f4594i) {
                                    z7 = false;
                                }
                                a = gVar4.a(bVar, z7, this$06.f12476h);
                            } catch (Throwable th2) {
                                throw th2;
                            }
                        }
                        return a;
                    case 6:
                        j this$07 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$07, "this$0");
                        ta.a.D();
                        g gVar5 = this$07.f12470b;
                        Object value4 = this$07.f12485s.getValue();
                        Intrinsics.checkNotNullExpressionValue(value4, "getValue(...)");
                        gVar5.getClass();
                        return new com.facebook.imagepipeline.producers.b((z0) value4, 2);
                    case 7:
                        j this$08 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$08, "this$0");
                        ta.a.D();
                        g gVar6 = this$08.f12470b;
                        ExecutorService executor = ((DefaultExecutorSupplier) gVar6.f12461i).a;
                        e4.c pooledByteBufferFactory = gVar6.j;
                        Intrinsics.checkNotNullParameter(executor, "executor");
                        Intrinsics.checkNotNullParameter(pooledByteBufferFactory, "pooledByteBufferFactory");
                        com.facebook.imagepipeline.producers.l lVar = new com.facebook.imagepipeline.producers.l(executor, pooledByteBufferFactory, 1);
                        Intrinsics.checkNotNullExpressionValue(lVar, "newLocalFileFetchProducer(...)");
                        x h6 = this$08.h(lVar);
                        g1 g1Var2 = this$08.f12473e;
                        gVar6.getClass();
                        return new f1(h6, g1Var2);
                    case 8:
                        j this$09 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$09, "this$0");
                        ta.a.D();
                        g gVar7 = this$09.f12470b;
                        j0 j0Var = new j0(((DefaultExecutorSupplier) gVar7.f12461i).a, gVar7.j, gVar7.a, 0);
                        Intrinsics.checkNotNullExpressionValue(j0Var, "newLocalContentUriFetchProducer(...)");
                        x h7 = this$09.h(j0Var);
                        g1 g1Var3 = this$09.f12473e;
                        gVar7.getClass();
                        return new f1(h7, g1Var3);
                    case 9:
                        j this$010 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$010, "this$0");
                        g gVar8 = this$010.f12470b;
                        ExecutorService executor2 = ((DefaultExecutorSupplier) gVar8.f12461i).a;
                        e4.c pooledByteBufferFactory2 = gVar8.j;
                        Intrinsics.checkNotNullParameter(executor2, "executor");
                        Intrinsics.checkNotNullParameter(pooledByteBufferFactory2, "pooledByteBufferFactory");
                        com.facebook.imagepipeline.producers.l lVar2 = new com.facebook.imagepipeline.producers.l(executor2, pooledByteBufferFactory2, 1);
                        Intrinsics.checkNotNullExpressionValue(lVar2, "newLocalFileFetchProducer(...)");
                        return this$010.g(lVar2, new l1[]{new m0(((DefaultExecutorSupplier) gVar8.f12461i).a, gVar8.j, gVar8.a)});
                    case 10:
                        j this$011 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$011, "this$0");
                        g gVar9 = this$011.f12470b;
                        q0 q0Var = new q0(((DefaultExecutorSupplier) gVar9.f12461i).a, gVar9.a, 1);
                        Intrinsics.checkNotNullExpressionValue(q0Var, "newLocalVideoThumbnailProducer(...)");
                        return this$011.e(q0Var);
                    case 11:
                        j this$012 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$012, "this$0");
                        g gVar10 = this$012.f12470b;
                        j0 j0Var2 = new j0(((DefaultExecutorSupplier) gVar10.f12461i).a, gVar10.j, gVar10.a, 0);
                        Intrinsics.checkNotNullExpressionValue(j0Var2, "newLocalContentUriFetchProducer(...)");
                        gVar10.getClass();
                        e eVar = gVar10.f12461i;
                        ExecutorService executorService = ((DefaultExecutorSupplier) eVar).a;
                        e4.c cVar = gVar10.j;
                        ContentResolver contentResolver2 = gVar10.a;
                        return this$012.g(j0Var2, new l1[]{new k0(executorService, cVar, contentResolver2), new m0(((DefaultExecutorSupplier) eVar).a, cVar, contentResolver2)});
                    case 12:
                        j this$013 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$013, "this$0");
                        if (Build.VERSION.SDK_INT < 29) {
                            throw new Throwable("Unreachable exception. Just to make linter happy for the lazy block.");
                        }
                        g gVar11 = this$013.f12470b;
                        q0 q0Var2 = new q0(((DefaultExecutorSupplier) gVar11.f12461i).f4590c, gVar11.a, 0);
                        Intrinsics.checkNotNullExpressionValue(q0Var2, "newLocalThumbnailBitmapSdk29Producer(...)");
                        return this$013.e(q0Var2);
                    case 13:
                        j this$014 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$014, "this$0");
                        g gVar12 = this$014.f12470b;
                        j0 j0Var3 = new j0(((DefaultExecutorSupplier) gVar12.f12461i).a, gVar12.j, gVar12.a, 1);
                        Intrinsics.checkNotNullExpressionValue(j0Var3, "newQualifiedResourceFetchProducer(...)");
                        return this$014.g(j0Var3, new l1[]{new m0(((DefaultExecutorSupplier) gVar12.f12461i).a, gVar12.j, gVar12.a)});
                    case 14:
                        j this$015 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$015, "this$0");
                        g gVar13 = this$015.f12470b;
                        i0 i0Var = new i0(((DefaultExecutorSupplier) gVar13.f12461i).a, gVar13.j, gVar13.f12454b);
                        Intrinsics.checkNotNullExpressionValue(i0Var, "newLocalResourceFetchProducer(...)");
                        return this$015.g(i0Var, new l1[]{new m0(((DefaultExecutorSupplier) gVar13.f12461i).a, gVar13.j, gVar13.a)});
                    case 15:
                        j this$016 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$016, "this$0");
                        g gVar14 = this$016.f12470b;
                        i0 i0Var2 = new i0(((DefaultExecutorSupplier) gVar14.f12461i).a, gVar14.j, gVar14.f12455c);
                        Intrinsics.checkNotNullExpressionValue(i0Var2, "newLocalAssetFetchProducer(...)");
                        return this$016.g(i0Var2, new l1[]{new m0(((DefaultExecutorSupplier) gVar14.f12461i).a, gVar14.j, gVar14.a)});
                    case 16:
                        j this$017 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$017, "this$0");
                        g gVar15 = this$017.f12470b;
                        com.facebook.imagepipeline.producers.l lVar3 = new com.facebook.imagepipeline.producers.l(m8.a.f14400d, gVar15.j, 0);
                        Intrinsics.checkNotNullExpressionValue(lVar3, "newDataFetchProducer(...)");
                        return this$017.f(gVar15.a(new com.facebook.imagepipeline.producers.b(lVar3, 0), true, this$017.f12476h));
                    default:
                        j this$018 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$018, "this$0");
                        ta.a.D();
                        Object value5 = this$018.f12485s.getValue();
                        Intrinsics.checkNotNullExpressionValue(value5, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value5);
                }
            }
        });
        final int i21 = 12;
        this.f12490x = l.a(new Function0(this) { // from class: ja.h

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ j f12469e;

            {
                this.f12469e = this;
            }

            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                c1 a;
                boolean z7 = true;
                switch (i21) {
                    case 0:
                        j this$0 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$0, "this$0");
                        ta.a.D();
                        Object value = this$0.f12481o.getValue();
                        Intrinsics.checkNotNullExpressionValue(value, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value);
                    case 1:
                        j this$02 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$02, "this$0");
                        ta.a.D();
                        Object value2 = this$02.f12486t.getValue();
                        Intrinsics.checkNotNullExpressionValue(value2, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value2);
                    case 2:
                        j this$03 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$03, "this$0");
                        ta.a.D();
                        return this$03.f((z0) this$03.f12483q.getValue());
                    case 3:
                        j this$04 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$04, "this$0");
                        ta.a.D();
                        g gVar = this$04.f12470b;
                        z0 z0Var = (z0) this$04.f12483q.getValue();
                        g1 g1Var = this$04.f12473e;
                        gVar.getClass();
                        return new f1(z0Var, g1Var);
                    case 4:
                        j this$05 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$05, "this$0");
                        ta.a.D();
                        g gVar2 = this$05.f12470b;
                        Object value3 = this$05.f12481o.getValue();
                        Intrinsics.checkNotNullExpressionValue(value3, "getValue(...)");
                        gVar2.getClass();
                        return new com.facebook.imagepipeline.producers.b((z0) value3, 2);
                    case 5:
                        j this$06 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$06, "this$0");
                        ta.a.D();
                        NetworkFetcher networkFetcher2 = this$06.f12471c;
                        synchronized (this$06) {
                            try {
                                Intrinsics.checkNotNullParameter(networkFetcher2, "networkFetcher");
                                ta.a.D();
                                g gVar3 = this$06.f12470b;
                                w0 w0Var = new w0(gVar3.j, gVar3.f12456d, networkFetcher2);
                                Intrinsics.checkNotNullExpressionValue(w0Var, "newNetworkFetchProducer(...)");
                                com.facebook.imagepipeline.producers.b bVar = new com.facebook.imagepipeline.producers.b(this$06.h(w0Var), 0);
                                Intrinsics.checkNotNullExpressionValue(bVar, "newAddImageTransformMetaDataProducer(...)");
                                g gVar4 = this$06.f12470b;
                                if (!this$06.f12472d || this$06.f12474f == DownsampleMode.f4594i) {
                                    z7 = false;
                                }
                                a = gVar4.a(bVar, z7, this$06.f12476h);
                            } catch (Throwable th2) {
                                throw th2;
                            }
                        }
                        return a;
                    case 6:
                        j this$07 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$07, "this$0");
                        ta.a.D();
                        g gVar5 = this$07.f12470b;
                        Object value4 = this$07.f12485s.getValue();
                        Intrinsics.checkNotNullExpressionValue(value4, "getValue(...)");
                        gVar5.getClass();
                        return new com.facebook.imagepipeline.producers.b((z0) value4, 2);
                    case 7:
                        j this$08 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$08, "this$0");
                        ta.a.D();
                        g gVar6 = this$08.f12470b;
                        ExecutorService executor = ((DefaultExecutorSupplier) gVar6.f12461i).a;
                        e4.c pooledByteBufferFactory = gVar6.j;
                        Intrinsics.checkNotNullParameter(executor, "executor");
                        Intrinsics.checkNotNullParameter(pooledByteBufferFactory, "pooledByteBufferFactory");
                        com.facebook.imagepipeline.producers.l lVar = new com.facebook.imagepipeline.producers.l(executor, pooledByteBufferFactory, 1);
                        Intrinsics.checkNotNullExpressionValue(lVar, "newLocalFileFetchProducer(...)");
                        x h6 = this$08.h(lVar);
                        g1 g1Var2 = this$08.f12473e;
                        gVar6.getClass();
                        return new f1(h6, g1Var2);
                    case 8:
                        j this$09 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$09, "this$0");
                        ta.a.D();
                        g gVar7 = this$09.f12470b;
                        j0 j0Var = new j0(((DefaultExecutorSupplier) gVar7.f12461i).a, gVar7.j, gVar7.a, 0);
                        Intrinsics.checkNotNullExpressionValue(j0Var, "newLocalContentUriFetchProducer(...)");
                        x h7 = this$09.h(j0Var);
                        g1 g1Var3 = this$09.f12473e;
                        gVar7.getClass();
                        return new f1(h7, g1Var3);
                    case 9:
                        j this$010 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$010, "this$0");
                        g gVar8 = this$010.f12470b;
                        ExecutorService executor2 = ((DefaultExecutorSupplier) gVar8.f12461i).a;
                        e4.c pooledByteBufferFactory2 = gVar8.j;
                        Intrinsics.checkNotNullParameter(executor2, "executor");
                        Intrinsics.checkNotNullParameter(pooledByteBufferFactory2, "pooledByteBufferFactory");
                        com.facebook.imagepipeline.producers.l lVar2 = new com.facebook.imagepipeline.producers.l(executor2, pooledByteBufferFactory2, 1);
                        Intrinsics.checkNotNullExpressionValue(lVar2, "newLocalFileFetchProducer(...)");
                        return this$010.g(lVar2, new l1[]{new m0(((DefaultExecutorSupplier) gVar8.f12461i).a, gVar8.j, gVar8.a)});
                    case 10:
                        j this$011 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$011, "this$0");
                        g gVar9 = this$011.f12470b;
                        q0 q0Var = new q0(((DefaultExecutorSupplier) gVar9.f12461i).a, gVar9.a, 1);
                        Intrinsics.checkNotNullExpressionValue(q0Var, "newLocalVideoThumbnailProducer(...)");
                        return this$011.e(q0Var);
                    case 11:
                        j this$012 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$012, "this$0");
                        g gVar10 = this$012.f12470b;
                        j0 j0Var2 = new j0(((DefaultExecutorSupplier) gVar10.f12461i).a, gVar10.j, gVar10.a, 0);
                        Intrinsics.checkNotNullExpressionValue(j0Var2, "newLocalContentUriFetchProducer(...)");
                        gVar10.getClass();
                        e eVar = gVar10.f12461i;
                        ExecutorService executorService = ((DefaultExecutorSupplier) eVar).a;
                        e4.c cVar = gVar10.j;
                        ContentResolver contentResolver2 = gVar10.a;
                        return this$012.g(j0Var2, new l1[]{new k0(executorService, cVar, contentResolver2), new m0(((DefaultExecutorSupplier) eVar).a, cVar, contentResolver2)});
                    case 12:
                        j this$013 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$013, "this$0");
                        if (Build.VERSION.SDK_INT < 29) {
                            throw new Throwable("Unreachable exception. Just to make linter happy for the lazy block.");
                        }
                        g gVar11 = this$013.f12470b;
                        q0 q0Var2 = new q0(((DefaultExecutorSupplier) gVar11.f12461i).f4590c, gVar11.a, 0);
                        Intrinsics.checkNotNullExpressionValue(q0Var2, "newLocalThumbnailBitmapSdk29Producer(...)");
                        return this$013.e(q0Var2);
                    case 13:
                        j this$014 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$014, "this$0");
                        g gVar12 = this$014.f12470b;
                        j0 j0Var3 = new j0(((DefaultExecutorSupplier) gVar12.f12461i).a, gVar12.j, gVar12.a, 1);
                        Intrinsics.checkNotNullExpressionValue(j0Var3, "newQualifiedResourceFetchProducer(...)");
                        return this$014.g(j0Var3, new l1[]{new m0(((DefaultExecutorSupplier) gVar12.f12461i).a, gVar12.j, gVar12.a)});
                    case 14:
                        j this$015 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$015, "this$0");
                        g gVar13 = this$015.f12470b;
                        i0 i0Var = new i0(((DefaultExecutorSupplier) gVar13.f12461i).a, gVar13.j, gVar13.f12454b);
                        Intrinsics.checkNotNullExpressionValue(i0Var, "newLocalResourceFetchProducer(...)");
                        return this$015.g(i0Var, new l1[]{new m0(((DefaultExecutorSupplier) gVar13.f12461i).a, gVar13.j, gVar13.a)});
                    case 15:
                        j this$016 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$016, "this$0");
                        g gVar14 = this$016.f12470b;
                        i0 i0Var2 = new i0(((DefaultExecutorSupplier) gVar14.f12461i).a, gVar14.j, gVar14.f12455c);
                        Intrinsics.checkNotNullExpressionValue(i0Var2, "newLocalAssetFetchProducer(...)");
                        return this$016.g(i0Var2, new l1[]{new m0(((DefaultExecutorSupplier) gVar14.f12461i).a, gVar14.j, gVar14.a)});
                    case 16:
                        j this$017 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$017, "this$0");
                        g gVar15 = this$017.f12470b;
                        com.facebook.imagepipeline.producers.l lVar3 = new com.facebook.imagepipeline.producers.l(m8.a.f14400d, gVar15.j, 0);
                        Intrinsics.checkNotNullExpressionValue(lVar3, "newDataFetchProducer(...)");
                        return this$017.f(gVar15.a(new com.facebook.imagepipeline.producers.b(lVar3, 0), true, this$017.f12476h));
                    default:
                        j this$018 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$018, "this$0");
                        ta.a.D();
                        Object value5 = this$018.f12485s.getValue();
                        Intrinsics.checkNotNullExpressionValue(value5, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value5);
                }
            }
        });
        final int i22 = 13;
        this.f12491y = l.a(new Function0(this) { // from class: ja.h

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ j f12469e;

            {
                this.f12469e = this;
            }

            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                c1 a;
                boolean z7 = true;
                switch (i22) {
                    case 0:
                        j this$0 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$0, "this$0");
                        ta.a.D();
                        Object value = this$0.f12481o.getValue();
                        Intrinsics.checkNotNullExpressionValue(value, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value);
                    case 1:
                        j this$02 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$02, "this$0");
                        ta.a.D();
                        Object value2 = this$02.f12486t.getValue();
                        Intrinsics.checkNotNullExpressionValue(value2, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value2);
                    case 2:
                        j this$03 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$03, "this$0");
                        ta.a.D();
                        return this$03.f((z0) this$03.f12483q.getValue());
                    case 3:
                        j this$04 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$04, "this$0");
                        ta.a.D();
                        g gVar = this$04.f12470b;
                        z0 z0Var = (z0) this$04.f12483q.getValue();
                        g1 g1Var = this$04.f12473e;
                        gVar.getClass();
                        return new f1(z0Var, g1Var);
                    case 4:
                        j this$05 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$05, "this$0");
                        ta.a.D();
                        g gVar2 = this$05.f12470b;
                        Object value3 = this$05.f12481o.getValue();
                        Intrinsics.checkNotNullExpressionValue(value3, "getValue(...)");
                        gVar2.getClass();
                        return new com.facebook.imagepipeline.producers.b((z0) value3, 2);
                    case 5:
                        j this$06 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$06, "this$0");
                        ta.a.D();
                        NetworkFetcher networkFetcher2 = this$06.f12471c;
                        synchronized (this$06) {
                            try {
                                Intrinsics.checkNotNullParameter(networkFetcher2, "networkFetcher");
                                ta.a.D();
                                g gVar3 = this$06.f12470b;
                                w0 w0Var = new w0(gVar3.j, gVar3.f12456d, networkFetcher2);
                                Intrinsics.checkNotNullExpressionValue(w0Var, "newNetworkFetchProducer(...)");
                                com.facebook.imagepipeline.producers.b bVar = new com.facebook.imagepipeline.producers.b(this$06.h(w0Var), 0);
                                Intrinsics.checkNotNullExpressionValue(bVar, "newAddImageTransformMetaDataProducer(...)");
                                g gVar4 = this$06.f12470b;
                                if (!this$06.f12472d || this$06.f12474f == DownsampleMode.f4594i) {
                                    z7 = false;
                                }
                                a = gVar4.a(bVar, z7, this$06.f12476h);
                            } catch (Throwable th2) {
                                throw th2;
                            }
                        }
                        return a;
                    case 6:
                        j this$07 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$07, "this$0");
                        ta.a.D();
                        g gVar5 = this$07.f12470b;
                        Object value4 = this$07.f12485s.getValue();
                        Intrinsics.checkNotNullExpressionValue(value4, "getValue(...)");
                        gVar5.getClass();
                        return new com.facebook.imagepipeline.producers.b((z0) value4, 2);
                    case 7:
                        j this$08 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$08, "this$0");
                        ta.a.D();
                        g gVar6 = this$08.f12470b;
                        ExecutorService executor = ((DefaultExecutorSupplier) gVar6.f12461i).a;
                        e4.c pooledByteBufferFactory = gVar6.j;
                        Intrinsics.checkNotNullParameter(executor, "executor");
                        Intrinsics.checkNotNullParameter(pooledByteBufferFactory, "pooledByteBufferFactory");
                        com.facebook.imagepipeline.producers.l lVar = new com.facebook.imagepipeline.producers.l(executor, pooledByteBufferFactory, 1);
                        Intrinsics.checkNotNullExpressionValue(lVar, "newLocalFileFetchProducer(...)");
                        x h6 = this$08.h(lVar);
                        g1 g1Var2 = this$08.f12473e;
                        gVar6.getClass();
                        return new f1(h6, g1Var2);
                    case 8:
                        j this$09 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$09, "this$0");
                        ta.a.D();
                        g gVar7 = this$09.f12470b;
                        j0 j0Var = new j0(((DefaultExecutorSupplier) gVar7.f12461i).a, gVar7.j, gVar7.a, 0);
                        Intrinsics.checkNotNullExpressionValue(j0Var, "newLocalContentUriFetchProducer(...)");
                        x h7 = this$09.h(j0Var);
                        g1 g1Var3 = this$09.f12473e;
                        gVar7.getClass();
                        return new f1(h7, g1Var3);
                    case 9:
                        j this$010 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$010, "this$0");
                        g gVar8 = this$010.f12470b;
                        ExecutorService executor2 = ((DefaultExecutorSupplier) gVar8.f12461i).a;
                        e4.c pooledByteBufferFactory2 = gVar8.j;
                        Intrinsics.checkNotNullParameter(executor2, "executor");
                        Intrinsics.checkNotNullParameter(pooledByteBufferFactory2, "pooledByteBufferFactory");
                        com.facebook.imagepipeline.producers.l lVar2 = new com.facebook.imagepipeline.producers.l(executor2, pooledByteBufferFactory2, 1);
                        Intrinsics.checkNotNullExpressionValue(lVar2, "newLocalFileFetchProducer(...)");
                        return this$010.g(lVar2, new l1[]{new m0(((DefaultExecutorSupplier) gVar8.f12461i).a, gVar8.j, gVar8.a)});
                    case 10:
                        j this$011 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$011, "this$0");
                        g gVar9 = this$011.f12470b;
                        q0 q0Var = new q0(((DefaultExecutorSupplier) gVar9.f12461i).a, gVar9.a, 1);
                        Intrinsics.checkNotNullExpressionValue(q0Var, "newLocalVideoThumbnailProducer(...)");
                        return this$011.e(q0Var);
                    case 11:
                        j this$012 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$012, "this$0");
                        g gVar10 = this$012.f12470b;
                        j0 j0Var2 = new j0(((DefaultExecutorSupplier) gVar10.f12461i).a, gVar10.j, gVar10.a, 0);
                        Intrinsics.checkNotNullExpressionValue(j0Var2, "newLocalContentUriFetchProducer(...)");
                        gVar10.getClass();
                        e eVar = gVar10.f12461i;
                        ExecutorService executorService = ((DefaultExecutorSupplier) eVar).a;
                        e4.c cVar = gVar10.j;
                        ContentResolver contentResolver2 = gVar10.a;
                        return this$012.g(j0Var2, new l1[]{new k0(executorService, cVar, contentResolver2), new m0(((DefaultExecutorSupplier) eVar).a, cVar, contentResolver2)});
                    case 12:
                        j this$013 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$013, "this$0");
                        if (Build.VERSION.SDK_INT < 29) {
                            throw new Throwable("Unreachable exception. Just to make linter happy for the lazy block.");
                        }
                        g gVar11 = this$013.f12470b;
                        q0 q0Var2 = new q0(((DefaultExecutorSupplier) gVar11.f12461i).f4590c, gVar11.a, 0);
                        Intrinsics.checkNotNullExpressionValue(q0Var2, "newLocalThumbnailBitmapSdk29Producer(...)");
                        return this$013.e(q0Var2);
                    case 13:
                        j this$014 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$014, "this$0");
                        g gVar12 = this$014.f12470b;
                        j0 j0Var3 = new j0(((DefaultExecutorSupplier) gVar12.f12461i).a, gVar12.j, gVar12.a, 1);
                        Intrinsics.checkNotNullExpressionValue(j0Var3, "newQualifiedResourceFetchProducer(...)");
                        return this$014.g(j0Var3, new l1[]{new m0(((DefaultExecutorSupplier) gVar12.f12461i).a, gVar12.j, gVar12.a)});
                    case 14:
                        j this$015 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$015, "this$0");
                        g gVar13 = this$015.f12470b;
                        i0 i0Var = new i0(((DefaultExecutorSupplier) gVar13.f12461i).a, gVar13.j, gVar13.f12454b);
                        Intrinsics.checkNotNullExpressionValue(i0Var, "newLocalResourceFetchProducer(...)");
                        return this$015.g(i0Var, new l1[]{new m0(((DefaultExecutorSupplier) gVar13.f12461i).a, gVar13.j, gVar13.a)});
                    case 15:
                        j this$016 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$016, "this$0");
                        g gVar14 = this$016.f12470b;
                        i0 i0Var2 = new i0(((DefaultExecutorSupplier) gVar14.f12461i).a, gVar14.j, gVar14.f12455c);
                        Intrinsics.checkNotNullExpressionValue(i0Var2, "newLocalAssetFetchProducer(...)");
                        return this$016.g(i0Var2, new l1[]{new m0(((DefaultExecutorSupplier) gVar14.f12461i).a, gVar14.j, gVar14.a)});
                    case 16:
                        j this$017 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$017, "this$0");
                        g gVar15 = this$017.f12470b;
                        com.facebook.imagepipeline.producers.l lVar3 = new com.facebook.imagepipeline.producers.l(m8.a.f14400d, gVar15.j, 0);
                        Intrinsics.checkNotNullExpressionValue(lVar3, "newDataFetchProducer(...)");
                        return this$017.f(gVar15.a(new com.facebook.imagepipeline.producers.b(lVar3, 0), true, this$017.f12476h));
                    default:
                        j this$018 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$018, "this$0");
                        ta.a.D();
                        Object value5 = this$018.f12485s.getValue();
                        Intrinsics.checkNotNullExpressionValue(value5, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value5);
                }
            }
        });
        final int i23 = 14;
        this.f12492z = l.a(new Function0(this) { // from class: ja.h

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ j f12469e;

            {
                this.f12469e = this;
            }

            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                c1 a;
                boolean z7 = true;
                switch (i23) {
                    case 0:
                        j this$0 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$0, "this$0");
                        ta.a.D();
                        Object value = this$0.f12481o.getValue();
                        Intrinsics.checkNotNullExpressionValue(value, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value);
                    case 1:
                        j this$02 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$02, "this$0");
                        ta.a.D();
                        Object value2 = this$02.f12486t.getValue();
                        Intrinsics.checkNotNullExpressionValue(value2, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value2);
                    case 2:
                        j this$03 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$03, "this$0");
                        ta.a.D();
                        return this$03.f((z0) this$03.f12483q.getValue());
                    case 3:
                        j this$04 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$04, "this$0");
                        ta.a.D();
                        g gVar = this$04.f12470b;
                        z0 z0Var = (z0) this$04.f12483q.getValue();
                        g1 g1Var = this$04.f12473e;
                        gVar.getClass();
                        return new f1(z0Var, g1Var);
                    case 4:
                        j this$05 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$05, "this$0");
                        ta.a.D();
                        g gVar2 = this$05.f12470b;
                        Object value3 = this$05.f12481o.getValue();
                        Intrinsics.checkNotNullExpressionValue(value3, "getValue(...)");
                        gVar2.getClass();
                        return new com.facebook.imagepipeline.producers.b((z0) value3, 2);
                    case 5:
                        j this$06 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$06, "this$0");
                        ta.a.D();
                        NetworkFetcher networkFetcher2 = this$06.f12471c;
                        synchronized (this$06) {
                            try {
                                Intrinsics.checkNotNullParameter(networkFetcher2, "networkFetcher");
                                ta.a.D();
                                g gVar3 = this$06.f12470b;
                                w0 w0Var = new w0(gVar3.j, gVar3.f12456d, networkFetcher2);
                                Intrinsics.checkNotNullExpressionValue(w0Var, "newNetworkFetchProducer(...)");
                                com.facebook.imagepipeline.producers.b bVar = new com.facebook.imagepipeline.producers.b(this$06.h(w0Var), 0);
                                Intrinsics.checkNotNullExpressionValue(bVar, "newAddImageTransformMetaDataProducer(...)");
                                g gVar4 = this$06.f12470b;
                                if (!this$06.f12472d || this$06.f12474f == DownsampleMode.f4594i) {
                                    z7 = false;
                                }
                                a = gVar4.a(bVar, z7, this$06.f12476h);
                            } catch (Throwable th2) {
                                throw th2;
                            }
                        }
                        return a;
                    case 6:
                        j this$07 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$07, "this$0");
                        ta.a.D();
                        g gVar5 = this$07.f12470b;
                        Object value4 = this$07.f12485s.getValue();
                        Intrinsics.checkNotNullExpressionValue(value4, "getValue(...)");
                        gVar5.getClass();
                        return new com.facebook.imagepipeline.producers.b((z0) value4, 2);
                    case 7:
                        j this$08 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$08, "this$0");
                        ta.a.D();
                        g gVar6 = this$08.f12470b;
                        ExecutorService executor = ((DefaultExecutorSupplier) gVar6.f12461i).a;
                        e4.c pooledByteBufferFactory = gVar6.j;
                        Intrinsics.checkNotNullParameter(executor, "executor");
                        Intrinsics.checkNotNullParameter(pooledByteBufferFactory, "pooledByteBufferFactory");
                        com.facebook.imagepipeline.producers.l lVar = new com.facebook.imagepipeline.producers.l(executor, pooledByteBufferFactory, 1);
                        Intrinsics.checkNotNullExpressionValue(lVar, "newLocalFileFetchProducer(...)");
                        x h6 = this$08.h(lVar);
                        g1 g1Var2 = this$08.f12473e;
                        gVar6.getClass();
                        return new f1(h6, g1Var2);
                    case 8:
                        j this$09 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$09, "this$0");
                        ta.a.D();
                        g gVar7 = this$09.f12470b;
                        j0 j0Var = new j0(((DefaultExecutorSupplier) gVar7.f12461i).a, gVar7.j, gVar7.a, 0);
                        Intrinsics.checkNotNullExpressionValue(j0Var, "newLocalContentUriFetchProducer(...)");
                        x h7 = this$09.h(j0Var);
                        g1 g1Var3 = this$09.f12473e;
                        gVar7.getClass();
                        return new f1(h7, g1Var3);
                    case 9:
                        j this$010 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$010, "this$0");
                        g gVar8 = this$010.f12470b;
                        ExecutorService executor2 = ((DefaultExecutorSupplier) gVar8.f12461i).a;
                        e4.c pooledByteBufferFactory2 = gVar8.j;
                        Intrinsics.checkNotNullParameter(executor2, "executor");
                        Intrinsics.checkNotNullParameter(pooledByteBufferFactory2, "pooledByteBufferFactory");
                        com.facebook.imagepipeline.producers.l lVar2 = new com.facebook.imagepipeline.producers.l(executor2, pooledByteBufferFactory2, 1);
                        Intrinsics.checkNotNullExpressionValue(lVar2, "newLocalFileFetchProducer(...)");
                        return this$010.g(lVar2, new l1[]{new m0(((DefaultExecutorSupplier) gVar8.f12461i).a, gVar8.j, gVar8.a)});
                    case 10:
                        j this$011 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$011, "this$0");
                        g gVar9 = this$011.f12470b;
                        q0 q0Var = new q0(((DefaultExecutorSupplier) gVar9.f12461i).a, gVar9.a, 1);
                        Intrinsics.checkNotNullExpressionValue(q0Var, "newLocalVideoThumbnailProducer(...)");
                        return this$011.e(q0Var);
                    case 11:
                        j this$012 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$012, "this$0");
                        g gVar10 = this$012.f12470b;
                        j0 j0Var2 = new j0(((DefaultExecutorSupplier) gVar10.f12461i).a, gVar10.j, gVar10.a, 0);
                        Intrinsics.checkNotNullExpressionValue(j0Var2, "newLocalContentUriFetchProducer(...)");
                        gVar10.getClass();
                        e eVar = gVar10.f12461i;
                        ExecutorService executorService = ((DefaultExecutorSupplier) eVar).a;
                        e4.c cVar = gVar10.j;
                        ContentResolver contentResolver2 = gVar10.a;
                        return this$012.g(j0Var2, new l1[]{new k0(executorService, cVar, contentResolver2), new m0(((DefaultExecutorSupplier) eVar).a, cVar, contentResolver2)});
                    case 12:
                        j this$013 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$013, "this$0");
                        if (Build.VERSION.SDK_INT < 29) {
                            throw new Throwable("Unreachable exception. Just to make linter happy for the lazy block.");
                        }
                        g gVar11 = this$013.f12470b;
                        q0 q0Var2 = new q0(((DefaultExecutorSupplier) gVar11.f12461i).f4590c, gVar11.a, 0);
                        Intrinsics.checkNotNullExpressionValue(q0Var2, "newLocalThumbnailBitmapSdk29Producer(...)");
                        return this$013.e(q0Var2);
                    case 13:
                        j this$014 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$014, "this$0");
                        g gVar12 = this$014.f12470b;
                        j0 j0Var3 = new j0(((DefaultExecutorSupplier) gVar12.f12461i).a, gVar12.j, gVar12.a, 1);
                        Intrinsics.checkNotNullExpressionValue(j0Var3, "newQualifiedResourceFetchProducer(...)");
                        return this$014.g(j0Var3, new l1[]{new m0(((DefaultExecutorSupplier) gVar12.f12461i).a, gVar12.j, gVar12.a)});
                    case 14:
                        j this$015 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$015, "this$0");
                        g gVar13 = this$015.f12470b;
                        i0 i0Var = new i0(((DefaultExecutorSupplier) gVar13.f12461i).a, gVar13.j, gVar13.f12454b);
                        Intrinsics.checkNotNullExpressionValue(i0Var, "newLocalResourceFetchProducer(...)");
                        return this$015.g(i0Var, new l1[]{new m0(((DefaultExecutorSupplier) gVar13.f12461i).a, gVar13.j, gVar13.a)});
                    case 15:
                        j this$016 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$016, "this$0");
                        g gVar14 = this$016.f12470b;
                        i0 i0Var2 = new i0(((DefaultExecutorSupplier) gVar14.f12461i).a, gVar14.j, gVar14.f12455c);
                        Intrinsics.checkNotNullExpressionValue(i0Var2, "newLocalAssetFetchProducer(...)");
                        return this$016.g(i0Var2, new l1[]{new m0(((DefaultExecutorSupplier) gVar14.f12461i).a, gVar14.j, gVar14.a)});
                    case 16:
                        j this$017 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$017, "this$0");
                        g gVar15 = this$017.f12470b;
                        com.facebook.imagepipeline.producers.l lVar3 = new com.facebook.imagepipeline.producers.l(m8.a.f14400d, gVar15.j, 0);
                        Intrinsics.checkNotNullExpressionValue(lVar3, "newDataFetchProducer(...)");
                        return this$017.f(gVar15.a(new com.facebook.imagepipeline.producers.b(lVar3, 0), true, this$017.f12476h));
                    default:
                        j this$018 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$018, "this$0");
                        ta.a.D();
                        Object value5 = this$018.f12485s.getValue();
                        Intrinsics.checkNotNullExpressionValue(value5, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value5);
                }
            }
        });
        final int i24 = 15;
        this.A = l.a(new Function0(this) { // from class: ja.h

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ j f12469e;

            {
                this.f12469e = this;
            }

            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                c1 a;
                boolean z7 = true;
                switch (i24) {
                    case 0:
                        j this$0 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$0, "this$0");
                        ta.a.D();
                        Object value = this$0.f12481o.getValue();
                        Intrinsics.checkNotNullExpressionValue(value, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value);
                    case 1:
                        j this$02 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$02, "this$0");
                        ta.a.D();
                        Object value2 = this$02.f12486t.getValue();
                        Intrinsics.checkNotNullExpressionValue(value2, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value2);
                    case 2:
                        j this$03 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$03, "this$0");
                        ta.a.D();
                        return this$03.f((z0) this$03.f12483q.getValue());
                    case 3:
                        j this$04 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$04, "this$0");
                        ta.a.D();
                        g gVar = this$04.f12470b;
                        z0 z0Var = (z0) this$04.f12483q.getValue();
                        g1 g1Var = this$04.f12473e;
                        gVar.getClass();
                        return new f1(z0Var, g1Var);
                    case 4:
                        j this$05 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$05, "this$0");
                        ta.a.D();
                        g gVar2 = this$05.f12470b;
                        Object value3 = this$05.f12481o.getValue();
                        Intrinsics.checkNotNullExpressionValue(value3, "getValue(...)");
                        gVar2.getClass();
                        return new com.facebook.imagepipeline.producers.b((z0) value3, 2);
                    case 5:
                        j this$06 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$06, "this$0");
                        ta.a.D();
                        NetworkFetcher networkFetcher2 = this$06.f12471c;
                        synchronized (this$06) {
                            try {
                                Intrinsics.checkNotNullParameter(networkFetcher2, "networkFetcher");
                                ta.a.D();
                                g gVar3 = this$06.f12470b;
                                w0 w0Var = new w0(gVar3.j, gVar3.f12456d, networkFetcher2);
                                Intrinsics.checkNotNullExpressionValue(w0Var, "newNetworkFetchProducer(...)");
                                com.facebook.imagepipeline.producers.b bVar = new com.facebook.imagepipeline.producers.b(this$06.h(w0Var), 0);
                                Intrinsics.checkNotNullExpressionValue(bVar, "newAddImageTransformMetaDataProducer(...)");
                                g gVar4 = this$06.f12470b;
                                if (!this$06.f12472d || this$06.f12474f == DownsampleMode.f4594i) {
                                    z7 = false;
                                }
                                a = gVar4.a(bVar, z7, this$06.f12476h);
                            } catch (Throwable th2) {
                                throw th2;
                            }
                        }
                        return a;
                    case 6:
                        j this$07 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$07, "this$0");
                        ta.a.D();
                        g gVar5 = this$07.f12470b;
                        Object value4 = this$07.f12485s.getValue();
                        Intrinsics.checkNotNullExpressionValue(value4, "getValue(...)");
                        gVar5.getClass();
                        return new com.facebook.imagepipeline.producers.b((z0) value4, 2);
                    case 7:
                        j this$08 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$08, "this$0");
                        ta.a.D();
                        g gVar6 = this$08.f12470b;
                        ExecutorService executor = ((DefaultExecutorSupplier) gVar6.f12461i).a;
                        e4.c pooledByteBufferFactory = gVar6.j;
                        Intrinsics.checkNotNullParameter(executor, "executor");
                        Intrinsics.checkNotNullParameter(pooledByteBufferFactory, "pooledByteBufferFactory");
                        com.facebook.imagepipeline.producers.l lVar = new com.facebook.imagepipeline.producers.l(executor, pooledByteBufferFactory, 1);
                        Intrinsics.checkNotNullExpressionValue(lVar, "newLocalFileFetchProducer(...)");
                        x h6 = this$08.h(lVar);
                        g1 g1Var2 = this$08.f12473e;
                        gVar6.getClass();
                        return new f1(h6, g1Var2);
                    case 8:
                        j this$09 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$09, "this$0");
                        ta.a.D();
                        g gVar7 = this$09.f12470b;
                        j0 j0Var = new j0(((DefaultExecutorSupplier) gVar7.f12461i).a, gVar7.j, gVar7.a, 0);
                        Intrinsics.checkNotNullExpressionValue(j0Var, "newLocalContentUriFetchProducer(...)");
                        x h7 = this$09.h(j0Var);
                        g1 g1Var3 = this$09.f12473e;
                        gVar7.getClass();
                        return new f1(h7, g1Var3);
                    case 9:
                        j this$010 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$010, "this$0");
                        g gVar8 = this$010.f12470b;
                        ExecutorService executor2 = ((DefaultExecutorSupplier) gVar8.f12461i).a;
                        e4.c pooledByteBufferFactory2 = gVar8.j;
                        Intrinsics.checkNotNullParameter(executor2, "executor");
                        Intrinsics.checkNotNullParameter(pooledByteBufferFactory2, "pooledByteBufferFactory");
                        com.facebook.imagepipeline.producers.l lVar2 = new com.facebook.imagepipeline.producers.l(executor2, pooledByteBufferFactory2, 1);
                        Intrinsics.checkNotNullExpressionValue(lVar2, "newLocalFileFetchProducer(...)");
                        return this$010.g(lVar2, new l1[]{new m0(((DefaultExecutorSupplier) gVar8.f12461i).a, gVar8.j, gVar8.a)});
                    case 10:
                        j this$011 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$011, "this$0");
                        g gVar9 = this$011.f12470b;
                        q0 q0Var = new q0(((DefaultExecutorSupplier) gVar9.f12461i).a, gVar9.a, 1);
                        Intrinsics.checkNotNullExpressionValue(q0Var, "newLocalVideoThumbnailProducer(...)");
                        return this$011.e(q0Var);
                    case 11:
                        j this$012 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$012, "this$0");
                        g gVar10 = this$012.f12470b;
                        j0 j0Var2 = new j0(((DefaultExecutorSupplier) gVar10.f12461i).a, gVar10.j, gVar10.a, 0);
                        Intrinsics.checkNotNullExpressionValue(j0Var2, "newLocalContentUriFetchProducer(...)");
                        gVar10.getClass();
                        e eVar = gVar10.f12461i;
                        ExecutorService executorService = ((DefaultExecutorSupplier) eVar).a;
                        e4.c cVar = gVar10.j;
                        ContentResolver contentResolver2 = gVar10.a;
                        return this$012.g(j0Var2, new l1[]{new k0(executorService, cVar, contentResolver2), new m0(((DefaultExecutorSupplier) eVar).a, cVar, contentResolver2)});
                    case 12:
                        j this$013 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$013, "this$0");
                        if (Build.VERSION.SDK_INT < 29) {
                            throw new Throwable("Unreachable exception. Just to make linter happy for the lazy block.");
                        }
                        g gVar11 = this$013.f12470b;
                        q0 q0Var2 = new q0(((DefaultExecutorSupplier) gVar11.f12461i).f4590c, gVar11.a, 0);
                        Intrinsics.checkNotNullExpressionValue(q0Var2, "newLocalThumbnailBitmapSdk29Producer(...)");
                        return this$013.e(q0Var2);
                    case 13:
                        j this$014 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$014, "this$0");
                        g gVar12 = this$014.f12470b;
                        j0 j0Var3 = new j0(((DefaultExecutorSupplier) gVar12.f12461i).a, gVar12.j, gVar12.a, 1);
                        Intrinsics.checkNotNullExpressionValue(j0Var3, "newQualifiedResourceFetchProducer(...)");
                        return this$014.g(j0Var3, new l1[]{new m0(((DefaultExecutorSupplier) gVar12.f12461i).a, gVar12.j, gVar12.a)});
                    case 14:
                        j this$015 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$015, "this$0");
                        g gVar13 = this$015.f12470b;
                        i0 i0Var = new i0(((DefaultExecutorSupplier) gVar13.f12461i).a, gVar13.j, gVar13.f12454b);
                        Intrinsics.checkNotNullExpressionValue(i0Var, "newLocalResourceFetchProducer(...)");
                        return this$015.g(i0Var, new l1[]{new m0(((DefaultExecutorSupplier) gVar13.f12461i).a, gVar13.j, gVar13.a)});
                    case 15:
                        j this$016 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$016, "this$0");
                        g gVar14 = this$016.f12470b;
                        i0 i0Var2 = new i0(((DefaultExecutorSupplier) gVar14.f12461i).a, gVar14.j, gVar14.f12455c);
                        Intrinsics.checkNotNullExpressionValue(i0Var2, "newLocalAssetFetchProducer(...)");
                        return this$016.g(i0Var2, new l1[]{new m0(((DefaultExecutorSupplier) gVar14.f12461i).a, gVar14.j, gVar14.a)});
                    case 16:
                        j this$017 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$017, "this$0");
                        g gVar15 = this$017.f12470b;
                        com.facebook.imagepipeline.producers.l lVar3 = new com.facebook.imagepipeline.producers.l(m8.a.f14400d, gVar15.j, 0);
                        Intrinsics.checkNotNullExpressionValue(lVar3, "newDataFetchProducer(...)");
                        return this$017.f(gVar15.a(new com.facebook.imagepipeline.producers.b(lVar3, 0), true, this$017.f12476h));
                    default:
                        j this$018 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$018, "this$0");
                        ta.a.D();
                        Object value5 = this$018.f12485s.getValue();
                        Intrinsics.checkNotNullExpressionValue(value5, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value5);
                }
            }
        });
        final int i25 = 16;
        this.B = l.a(new Function0(this) { // from class: ja.h

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ j f12469e;

            {
                this.f12469e = this;
            }

            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                c1 a;
                boolean z7 = true;
                switch (i25) {
                    case 0:
                        j this$0 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$0, "this$0");
                        ta.a.D();
                        Object value = this$0.f12481o.getValue();
                        Intrinsics.checkNotNullExpressionValue(value, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value);
                    case 1:
                        j this$02 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$02, "this$0");
                        ta.a.D();
                        Object value2 = this$02.f12486t.getValue();
                        Intrinsics.checkNotNullExpressionValue(value2, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value2);
                    case 2:
                        j this$03 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$03, "this$0");
                        ta.a.D();
                        return this$03.f((z0) this$03.f12483q.getValue());
                    case 3:
                        j this$04 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$04, "this$0");
                        ta.a.D();
                        g gVar = this$04.f12470b;
                        z0 z0Var = (z0) this$04.f12483q.getValue();
                        g1 g1Var = this$04.f12473e;
                        gVar.getClass();
                        return new f1(z0Var, g1Var);
                    case 4:
                        j this$05 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$05, "this$0");
                        ta.a.D();
                        g gVar2 = this$05.f12470b;
                        Object value3 = this$05.f12481o.getValue();
                        Intrinsics.checkNotNullExpressionValue(value3, "getValue(...)");
                        gVar2.getClass();
                        return new com.facebook.imagepipeline.producers.b((z0) value3, 2);
                    case 5:
                        j this$06 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$06, "this$0");
                        ta.a.D();
                        NetworkFetcher networkFetcher2 = this$06.f12471c;
                        synchronized (this$06) {
                            try {
                                Intrinsics.checkNotNullParameter(networkFetcher2, "networkFetcher");
                                ta.a.D();
                                g gVar3 = this$06.f12470b;
                                w0 w0Var = new w0(gVar3.j, gVar3.f12456d, networkFetcher2);
                                Intrinsics.checkNotNullExpressionValue(w0Var, "newNetworkFetchProducer(...)");
                                com.facebook.imagepipeline.producers.b bVar = new com.facebook.imagepipeline.producers.b(this$06.h(w0Var), 0);
                                Intrinsics.checkNotNullExpressionValue(bVar, "newAddImageTransformMetaDataProducer(...)");
                                g gVar4 = this$06.f12470b;
                                if (!this$06.f12472d || this$06.f12474f == DownsampleMode.f4594i) {
                                    z7 = false;
                                }
                                a = gVar4.a(bVar, z7, this$06.f12476h);
                            } catch (Throwable th2) {
                                throw th2;
                            }
                        }
                        return a;
                    case 6:
                        j this$07 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$07, "this$0");
                        ta.a.D();
                        g gVar5 = this$07.f12470b;
                        Object value4 = this$07.f12485s.getValue();
                        Intrinsics.checkNotNullExpressionValue(value4, "getValue(...)");
                        gVar5.getClass();
                        return new com.facebook.imagepipeline.producers.b((z0) value4, 2);
                    case 7:
                        j this$08 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$08, "this$0");
                        ta.a.D();
                        g gVar6 = this$08.f12470b;
                        ExecutorService executor = ((DefaultExecutorSupplier) gVar6.f12461i).a;
                        e4.c pooledByteBufferFactory = gVar6.j;
                        Intrinsics.checkNotNullParameter(executor, "executor");
                        Intrinsics.checkNotNullParameter(pooledByteBufferFactory, "pooledByteBufferFactory");
                        com.facebook.imagepipeline.producers.l lVar = new com.facebook.imagepipeline.producers.l(executor, pooledByteBufferFactory, 1);
                        Intrinsics.checkNotNullExpressionValue(lVar, "newLocalFileFetchProducer(...)");
                        x h6 = this$08.h(lVar);
                        g1 g1Var2 = this$08.f12473e;
                        gVar6.getClass();
                        return new f1(h6, g1Var2);
                    case 8:
                        j this$09 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$09, "this$0");
                        ta.a.D();
                        g gVar7 = this$09.f12470b;
                        j0 j0Var = new j0(((DefaultExecutorSupplier) gVar7.f12461i).a, gVar7.j, gVar7.a, 0);
                        Intrinsics.checkNotNullExpressionValue(j0Var, "newLocalContentUriFetchProducer(...)");
                        x h7 = this$09.h(j0Var);
                        g1 g1Var3 = this$09.f12473e;
                        gVar7.getClass();
                        return new f1(h7, g1Var3);
                    case 9:
                        j this$010 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$010, "this$0");
                        g gVar8 = this$010.f12470b;
                        ExecutorService executor2 = ((DefaultExecutorSupplier) gVar8.f12461i).a;
                        e4.c pooledByteBufferFactory2 = gVar8.j;
                        Intrinsics.checkNotNullParameter(executor2, "executor");
                        Intrinsics.checkNotNullParameter(pooledByteBufferFactory2, "pooledByteBufferFactory");
                        com.facebook.imagepipeline.producers.l lVar2 = new com.facebook.imagepipeline.producers.l(executor2, pooledByteBufferFactory2, 1);
                        Intrinsics.checkNotNullExpressionValue(lVar2, "newLocalFileFetchProducer(...)");
                        return this$010.g(lVar2, new l1[]{new m0(((DefaultExecutorSupplier) gVar8.f12461i).a, gVar8.j, gVar8.a)});
                    case 10:
                        j this$011 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$011, "this$0");
                        g gVar9 = this$011.f12470b;
                        q0 q0Var = new q0(((DefaultExecutorSupplier) gVar9.f12461i).a, gVar9.a, 1);
                        Intrinsics.checkNotNullExpressionValue(q0Var, "newLocalVideoThumbnailProducer(...)");
                        return this$011.e(q0Var);
                    case 11:
                        j this$012 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$012, "this$0");
                        g gVar10 = this$012.f12470b;
                        j0 j0Var2 = new j0(((DefaultExecutorSupplier) gVar10.f12461i).a, gVar10.j, gVar10.a, 0);
                        Intrinsics.checkNotNullExpressionValue(j0Var2, "newLocalContentUriFetchProducer(...)");
                        gVar10.getClass();
                        e eVar = gVar10.f12461i;
                        ExecutorService executorService = ((DefaultExecutorSupplier) eVar).a;
                        e4.c cVar = gVar10.j;
                        ContentResolver contentResolver2 = gVar10.a;
                        return this$012.g(j0Var2, new l1[]{new k0(executorService, cVar, contentResolver2), new m0(((DefaultExecutorSupplier) eVar).a, cVar, contentResolver2)});
                    case 12:
                        j this$013 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$013, "this$0");
                        if (Build.VERSION.SDK_INT < 29) {
                            throw new Throwable("Unreachable exception. Just to make linter happy for the lazy block.");
                        }
                        g gVar11 = this$013.f12470b;
                        q0 q0Var2 = new q0(((DefaultExecutorSupplier) gVar11.f12461i).f4590c, gVar11.a, 0);
                        Intrinsics.checkNotNullExpressionValue(q0Var2, "newLocalThumbnailBitmapSdk29Producer(...)");
                        return this$013.e(q0Var2);
                    case 13:
                        j this$014 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$014, "this$0");
                        g gVar12 = this$014.f12470b;
                        j0 j0Var3 = new j0(((DefaultExecutorSupplier) gVar12.f12461i).a, gVar12.j, gVar12.a, 1);
                        Intrinsics.checkNotNullExpressionValue(j0Var3, "newQualifiedResourceFetchProducer(...)");
                        return this$014.g(j0Var3, new l1[]{new m0(((DefaultExecutorSupplier) gVar12.f12461i).a, gVar12.j, gVar12.a)});
                    case 14:
                        j this$015 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$015, "this$0");
                        g gVar13 = this$015.f12470b;
                        i0 i0Var = new i0(((DefaultExecutorSupplier) gVar13.f12461i).a, gVar13.j, gVar13.f12454b);
                        Intrinsics.checkNotNullExpressionValue(i0Var, "newLocalResourceFetchProducer(...)");
                        return this$015.g(i0Var, new l1[]{new m0(((DefaultExecutorSupplier) gVar13.f12461i).a, gVar13.j, gVar13.a)});
                    case 15:
                        j this$016 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$016, "this$0");
                        g gVar14 = this$016.f12470b;
                        i0 i0Var2 = new i0(((DefaultExecutorSupplier) gVar14.f12461i).a, gVar14.j, gVar14.f12455c);
                        Intrinsics.checkNotNullExpressionValue(i0Var2, "newLocalAssetFetchProducer(...)");
                        return this$016.g(i0Var2, new l1[]{new m0(((DefaultExecutorSupplier) gVar14.f12461i).a, gVar14.j, gVar14.a)});
                    case 16:
                        j this$017 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$017, "this$0");
                        g gVar15 = this$017.f12470b;
                        com.facebook.imagepipeline.producers.l lVar3 = new com.facebook.imagepipeline.producers.l(m8.a.f14400d, gVar15.j, 0);
                        Intrinsics.checkNotNullExpressionValue(lVar3, "newDataFetchProducer(...)");
                        return this$017.f(gVar15.a(new com.facebook.imagepipeline.producers.b(lVar3, 0), true, this$017.f12476h));
                    default:
                        j this$018 = this.f12469e;
                        Intrinsics.checkNotNullParameter(this$018, "this$0");
                        ta.a.D();
                        Object value5 = this$018.f12485s.getValue();
                        Intrinsics.checkNotNullExpressionValue(value5, "getValue(...)");
                        return new com.facebook.imagepipeline.producers.b((z0) value5);
                }
            }
        });
    }

    public final z0 a(ImageRequest imageRequest) {
        ta.a.D();
        Uri sourceUri = imageRequest.getSourceUri();
        Intrinsics.checkNotNullExpressionValue(sourceUri, "getSourceUri(...)");
        if (sourceUri == null) {
            throw new IllegalStateException("Uri is null.");
        }
        int sourceUriType = imageRequest.getSourceUriType();
        if (sourceUriType == 0) {
            return (z0) this.f12480n.getValue();
        }
        u uVar = this.f12488v;
        u uVar2 = this.f12490x;
        switch (sourceUriType) {
            case 2:
                return imageRequest.getLoadThumbnailOnlyForAndroidSdkAboveQ() ? (z0) uVar2.getValue() : (z0) uVar.getValue();
            case 3:
                return imageRequest.getLoadThumbnailOnlyForAndroidSdkAboveQ() ? (z0) uVar2.getValue() : (z0) this.f12487u.getValue();
            case 4:
                if (imageRequest.getLoadThumbnailOnlyForAndroidSdkAboveQ()) {
                    return (z0) uVar2.getValue();
                }
                String type = this.a.getType(sourceUri);
                Object obj = q8.a.a;
                return type != null ? kotlin.text.x.o(type, "video/", false) : false ? (z0) uVar.getValue() : (z0) this.f12489w.getValue();
            case 5:
                return (z0) this.A.getValue();
            case 6:
                return (z0) this.f12492z.getValue();
            case 7:
                return (z0) this.B.getValue();
            case 8:
                return (z0) this.f12491y.getValue();
            default:
                Set set = this.f12477i;
                if (set != null) {
                    Iterator it = set.iterator();
                    if (it.hasNext()) {
                        throw s4.h.b(it);
                    }
                }
                throw new IllegalArgumentException(a3.e.k("Unsupported uri scheme! Uri is: ", i.a(sourceUri)));
        }
    }

    public final z0 b(ImageRequest imageRequest) {
        Intrinsics.checkNotNullParameter(imageRequest, "imageRequest");
        if (imageRequest.getLowestPermittedRequestLevel().f4854d > 3) {
            throw new IllegalArgumentException();
        }
        int sourceUriType = imageRequest.getSourceUriType();
        if (sourceUriType == 0) {
            Object value = this.f12482p.getValue();
            Intrinsics.checkNotNullExpressionValue(value, "getValue(...)");
            return (z0) value;
        }
        if (sourceUriType == 2 || sourceUriType == 3) {
            Object value2 = this.f12484r.getValue();
            Intrinsics.checkNotNullExpressionValue(value2, "getValue(...)");
            return (z0) value2;
        }
        Uri sourceUri = imageRequest.getSourceUri();
        Intrinsics.checkNotNullExpressionValue(sourceUri, "getSourceUri(...)");
        throw new IllegalArgumentException(a3.e.k("Unsupported uri scheme for encoded image fetch! Uri is: ", i.a(sourceUri)));
    }

    public final z0 c(ImageRequest imageRequest) {
        Intrinsics.checkNotNullParameter(imageRequest, "imageRequest");
        ta.a.D();
        if (imageRequest.getLowestPermittedRequestLevel().f4854d > 3) {
            throw new IllegalArgumentException();
        }
        Uri sourceUri = imageRequest.getSourceUri();
        Intrinsics.checkNotNullExpressionValue(sourceUri, "getSourceUri(...)");
        int sourceUriType = imageRequest.getSourceUriType();
        if (sourceUriType == 0) {
            return (z0) this.k.getValue();
        }
        if (sourceUriType == 2 || sourceUriType == 3) {
            return (z0) this.f12478l.getValue();
        }
        if (sourceUriType == 4) {
            return (z0) this.f12479m.getValue();
        }
        Set set = this.f12477i;
        if (set != null) {
            Iterator it = set.iterator();
            if (it.hasNext()) {
                throw s4.h.b(it);
            }
        }
        throw new IllegalArgumentException(a3.e.k("Unsupported uri scheme for encoded image fetch! Uri is: ", i.a(sourceUri)));
    }

    public final synchronized z0 d(z0 z0Var) {
        z0 z0Var2;
        z0Var2 = (z0) this.j.get(z0Var);
        if (z0Var2 == null) {
            g gVar = this.f12470b;
            x0 x0Var = new x0(z0Var, gVar.f12465o, ((DefaultExecutorSupplier) gVar.f12461i).f4590c);
            Intrinsics.checkNotNullExpressionValue(x0Var, "newPostprocessorProducer(...)");
            g gVar2 = this.f12470b;
            x0 x0Var2 = new x0(gVar2.f12463m, gVar2.f12464n, x0Var);
            this.j.put(z0Var, x0Var2);
            z0Var2 = x0Var2;
        }
        return z0Var2;
    }

    public final z0 e(z0 z0Var) {
        g gVar = this.f12470b;
        ha.i iVar = gVar.f12463m;
        DefaultCacheKeyFactory cacheKeyFactory = gVar.f12464n;
        com.facebook.imagepipeline.producers.j jVar = new com.facebook.imagepipeline.producers.j(iVar, cacheKeyFactory, z0Var);
        Intrinsics.checkNotNullExpressionValue(jVar, "newBitmapMemoryCacheProducer(...)");
        com.facebook.imagepipeline.producers.h hVar = new com.facebook.imagepipeline.producers.h(cacheKeyFactory, jVar);
        Intrinsics.checkNotNullExpressionValue(hVar, "newBitmapMemoryCacheKeyMultiplexProducer(...)");
        f1 inputProducer = new f1(hVar, this.f12473e);
        Intrinsics.checkNotNullExpressionValue(inputProducer, "newBackgroundThreadHandoffProducer(...)");
        ha.i memoryCache = gVar.f12463m;
        Intrinsics.checkNotNullParameter(memoryCache, "memoryCache");
        Intrinsics.checkNotNullParameter(cacheKeyFactory, "cacheKeyFactory");
        Intrinsics.checkNotNullParameter(inputProducer, "inputProducer");
        com.facebook.imagepipeline.producers.g gVar2 = new com.facebook.imagepipeline.producers.g(memoryCache, cacheKeyFactory, inputProducer);
        Intrinsics.checkNotNullExpressionValue(gVar2, "newBitmapMemoryCacheGetProducer(...)");
        return gVar2;
    }

    public final z0 f(z0 inputProducer) {
        Intrinsics.checkNotNullParameter(inputProducer, "inputProducer");
        ta.a.D();
        g gVar = this.f12470b;
        q qVar = new q(gVar.f12456d, ((DefaultExecutorSupplier) gVar.f12461i).f4589b, gVar.f12457e, gVar.f12458f, gVar.f12459g, gVar.f12460h, inputProducer, gVar.f12467q, gVar.f12466p);
        Intrinsics.checkNotNullExpressionValue(qVar, "newDecodeProducer(...)");
        return e(qVar);
    }

    public final z0 g(o0 o0Var, l1[] l1VarArr) {
        com.facebook.imagepipeline.producers.b bVar = new com.facebook.imagepipeline.producers.b(h(o0Var), 0);
        Intrinsics.checkNotNullExpressionValue(bVar, "newAddImageTransformMetaDataProducer(...)");
        g gVar = this.f12470b;
        ua.b bVar2 = this.f12476h;
        j1 j1Var = new j1(((DefaultExecutorSupplier) gVar.f12461i).f4591d, gVar.a(bVar, true, bVar2));
        Intrinsics.checkNotNullExpressionValue(j1Var, "newThrottlingProducer(...)");
        com.facebook.imagepipeline.producers.b bVar3 = new com.facebook.imagepipeline.producers.b(l1VarArr);
        Intrinsics.checkNotNullExpressionValue(bVar3, "newThumbnailBranchProducer(...)");
        c1 a = gVar.a(bVar3, true, bVar2);
        Intrinsics.checkNotNullExpressionValue(a, "newResizeAndRotateProducer(...)");
        f1 f1Var = new f1(a, j1Var);
        Intrinsics.checkNotNullExpressionValue(f1Var, "newBranchOnSeparateImagesProducer(...)");
        return f(f1Var);
    }

    public final x h(z0 z0Var) {
        boolean z5 = this.f12475g;
        g gVar = this.f12470b;
        if (z5) {
            ta.a.D();
            w wVar = new w(gVar.k, gVar.f12464n, z0Var);
            Intrinsics.checkNotNull(wVar);
            z0Var = new com.facebook.imagepipeline.producers.u(gVar.k, gVar.f12464n, wVar);
            Intrinsics.checkNotNullExpressionValue(z0Var, "newDiskCacheReadProducer(...)");
        }
        ha.i iVar = gVar.f12462l;
        DefaultCacheKeyFactory defaultCacheKeyFactory = gVar.f12464n;
        z zVar = new z(iVar, defaultCacheKeyFactory, z0Var);
        Intrinsics.checkNotNullExpressionValue(zVar, "newEncodedMemoryCacheProducer(...)");
        x xVar = new x(defaultCacheKeyFactory, zVar);
        Intrinsics.checkNotNullExpressionValue(xVar, "newEncodedCacheKeyMultiplexProducer(...)");
        return xVar;
    }
}
