package ja;

import a5.a0;
import com.facebook.imagepipeline.core.DefaultExecutorSupplier;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.concurrent.ExecutorService;
import kotlin.collections.u0;
import kotlin.collections.v0;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import qa.v;

/* loaded from: classes3.dex */
public final /* synthetic */ class b implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f12440d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ c f12441e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ d f12442i;

    public /* synthetic */ b(c cVar, d dVar, int i5) {
        this.f12440d = i5;
        this.f12441e = cVar;
        this.f12442i = dVar;
    }

    /* JADX WARN: Type inference failed for: r0v12, types: [java.lang.Object, kotlin.Lazy] */
    /* JADX WARN: Type inference failed for: r0v3, types: [java.lang.Object, kotlin.Lazy] */
    /* JADX WARN: Type inference failed for: r2v4, types: [java.lang.Object, kotlin.Lazy] */
    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        switch (this.f12440d) {
            case 0:
                c this$0 = this.f12441e;
                Intrinsics.checkNotNullParameter(this$0, "this$0");
                d this$1 = this.f12442i;
                Intrinsics.checkNotNullParameter(this$1, "this$1");
                k8.i iVar = (k8.i) this$0.a.getValue();
                v vVar = this$1.f12448b;
                e4.c c6 = vVar.c(0);
                Intrinsics.checkNotNullExpressionValue(c6, "getPooledByteBufferFactory(...)");
                a0 d6 = vVar.d();
                Intrinsics.checkNotNullExpressionValue(d6, "getPooledByteStreams(...)");
                DefaultExecutorSupplier defaultExecutorSupplier = (DefaultExecutorSupplier) this$1.f12449c;
                ExecutorService executorService = defaultExecutorSupplier.a;
                Intrinsics.checkNotNullExpressionValue(executorService, "forLocalStorageRead(...)");
                ExecutorService executorService2 = defaultExecutorSupplier.a;
                Intrinsics.checkNotNullExpressionValue(executorService2, "forLocalStorageWrite(...)");
                return new ha.b(iVar, c6, d6, executorService, executorService2, this$1.f12450d);
            case 1:
                c this$02 = this.f12441e;
                Intrinsics.checkNotNullParameter(this$02, "this$0");
                d this$12 = this.f12442i;
                Intrinsics.checkNotNullParameter(this$12, "this$1");
                k8.i iVar2 = (k8.i) this$02.f12444c.getValue();
                v vVar2 = this$12.f12448b;
                e4.c c8 = vVar2.c(0);
                Intrinsics.checkNotNullExpressionValue(c8, "getPooledByteBufferFactory(...)");
                a0 d7 = vVar2.d();
                Intrinsics.checkNotNullExpressionValue(d7, "getPooledByteStreams(...)");
                DefaultExecutorSupplier defaultExecutorSupplier2 = (DefaultExecutorSupplier) this$12.f12449c;
                ExecutorService executorService3 = defaultExecutorSupplier2.a;
                Intrinsics.checkNotNullExpressionValue(executorService3, "forLocalStorageRead(...)");
                ExecutorService executorService4 = defaultExecutorSupplier2.a;
                Intrinsics.checkNotNullExpressionValue(executorService4, "forLocalStorageWrite(...)");
                return new ha.b(iVar2, c8, d7, executorService3, executorService4, this$12.f12450d);
            case 2:
                Intrinsics.checkNotNullParameter(this.f12442i, "this$0");
                Intrinsics.checkNotNullParameter(this.f12441e, "this$1");
                return v0.d();
            default:
                d this$13 = this.f12442i;
                v vVar3 = this$13.f12448b;
                c this$03 = this.f12441e;
                Intrinsics.checkNotNullParameter(this$03, "this$0");
                Intrinsics.checkNotNullParameter(this$13, "this$1");
                Map map = (Map) this$03.f12446e.getValue();
                LinkedHashMap linkedHashMap = new LinkedHashMap(u0.a(map.size()));
                for (Map.Entry entry : map.entrySet()) {
                    Object key = entry.getKey();
                    k8.i iVar3 = (k8.i) entry.getValue();
                    e eVar = this$13.f12449c;
                    e4.c c10 = vVar3.c(0);
                    Intrinsics.checkNotNullExpressionValue(c10, "getPooledByteBufferFactory(...)");
                    a0 d8 = vVar3.d();
                    Intrinsics.checkNotNullExpressionValue(d8, "getPooledByteStreams(...)");
                    DefaultExecutorSupplier defaultExecutorSupplier3 = (DefaultExecutorSupplier) eVar;
                    ExecutorService executorService5 = defaultExecutorSupplier3.a;
                    Intrinsics.checkNotNullExpressionValue(executorService5, "forLocalStorageRead(...)");
                    ExecutorService executorService6 = defaultExecutorSupplier3.a;
                    Intrinsics.checkNotNullExpressionValue(executorService6, "forLocalStorageWrite(...)");
                    linkedHashMap.put(key, new ha.b(iVar3, c10, d8, executorService5, executorService6, this$13.f12450d));
                }
                return new o8.e(linkedHashMap);
        }
    }

    public /* synthetic */ b(d dVar, c cVar) {
        this.f12440d = 2;
        this.f12442i = dVar;
        this.f12441e = cVar;
    }
}
