package sr;

import android.os.CancellationSignal;
import androidx.credentials.playservices.CredentialProviderPlayServicesImpl;
import java.util.ArrayList;
import java.util.List;
import kotlin.Unit;
import kotlin.coroutines.CoroutineContext;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KClass;
import kotlin.reflect.KType;
import kotlinx.serialization.KSerializer;
import nr.n1;

/* loaded from: classes3.dex */
public final /* synthetic */ class x implements Function2 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f18128d;

    public /* synthetic */ x(int i5) {
        this.f18128d = i5;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        final int i5 = 1;
        switch (this.f18128d) {
            case 0:
                n1 n1Var = (n1) obj;
                CoroutineContext.Element element = (CoroutineContext.Element) obj2;
                if (n1Var != null) {
                    return n1Var;
                }
                if (element instanceof n1) {
                    return (n1) element;
                }
                return null;
            case 1:
                return (a0) obj;
            case 2:
                Function0 f2 = (Function0) obj2;
                Intrinsics.checkNotNullParameter(f2, "f");
                t1.a aVar = t1.d.a;
                t1.c.a((CancellationSignal) obj, f2);
                return Unit.a;
            case 3:
                Function0 onResultOrException = (Function0) obj2;
                Intrinsics.checkNotNullParameter(onResultOrException, "f");
                Intrinsics.checkNotNullParameter(onResultOrException, "onResultOrException");
                CredentialProviderPlayServicesImpl.Companion.getClass();
                if (!s1.f.a((CancellationSignal) obj)) {
                    onResultOrException.invoke();
                }
                return Unit.a;
            case 4:
                Function0 onResultOrException2 = (Function0) obj2;
                Intrinsics.checkNotNullParameter(onResultOrException2, "f");
                Intrinsics.checkNotNullParameter(onResultOrException2, "onResultOrException");
                CredentialProviderPlayServicesImpl.Companion.getClass();
                if (!s1.f.a((CancellationSignal) obj)) {
                    onResultOrException2.invoke();
                }
                return Unit.a;
            case 5:
                Function0 onResultOrException3 = (Function0) obj2;
                Intrinsics.checkNotNullParameter(onResultOrException3, "f");
                Intrinsics.checkNotNullParameter(onResultOrException3, "onResultOrException");
                CredentialProviderPlayServicesImpl.Companion.getClass();
                if (!s1.f.a((CancellationSignal) obj)) {
                    onResultOrException3.invoke();
                }
                return Unit.a;
            case 6:
                KClass clazz = (KClass) obj;
                final List types = (List) obj2;
                Intrinsics.checkNotNullParameter(clazz, "clazz");
                Intrinsics.checkNotNullParameter(types, "types");
                ArrayList E = zk.a.E(es.b.a, types, true);
                Intrinsics.checkNotNull(E);
                final int i6 = 0;
                return zk.a.x(clazz, E, new Function0() { // from class: xr.g
                    @Override // kotlin.jvm.functions.Function0
                    public final Object invoke() {
                        switch (i6) {
                        }
                        return ((KType) types.get(0)).getClassifier();
                    }
                });
            default:
                KClass clazz2 = (KClass) obj;
                final List types2 = (List) obj2;
                Intrinsics.checkNotNullParameter(clazz2, "clazz");
                Intrinsics.checkNotNullParameter(types2, "types");
                ArrayList E2 = zk.a.E(es.b.a, types2, true);
                Intrinsics.checkNotNull(E2);
                KSerializer x5 = zk.a.x(clazz2, E2, new Function0() { // from class: xr.g
                    @Override // kotlin.jvm.functions.Function0
                    public final Object invoke() {
                        switch (i5) {
                        }
                        return ((KType) types2.get(0)).getClassifier();
                    }
                });
                if (x5 != null) {
                    return nf.e.o(x5);
                }
                return null;
        }
    }
}
