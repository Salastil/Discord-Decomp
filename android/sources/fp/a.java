package fp;

import java.util.ServiceLoader;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class a implements Function0 {

    /* renamed from: e, reason: collision with root package name */
    public static final a f8848e = new a(0);

    /* renamed from: i, reason: collision with root package name */
    public static final a f8849i = new a(1);

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f8850d;

    public /* synthetic */ a(int i5) {
        this.f8850d = i5;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        switch (this.f8850d) {
            case 0:
                b bVar = b.a;
                ServiceLoader load = ServiceLoader.load(c.class, c.class.getClassLoader());
                Intrinsics.checkNotNull(load);
                c cVar = (c) CollectionsKt.L(load);
                if (cVar != null) {
                    return cVar;
                }
                throw new IllegalStateException("No BuiltInsLoader implementation was found. Please ensure that the META-INF/services/ is not stripped from your application and that the Java virtual machine is not running under a security manager");
            default:
                e eVar = new e(new xq.l("DefaultBuiltIns"));
                eVar.c();
                return eVar;
        }
    }
}
