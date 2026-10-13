package androidx.fragment.app;

import android.util.Log;
import android.view.ViewGroup;
import java.util.ArrayList;
import java.util.Iterator;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;

/* loaded from: classes.dex */
public final class o extends Lambda implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f2062d = 0;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ q f2063e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f2064i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ ViewGroup f2065v;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public o(q qVar, ViewGroup viewGroup, Object obj) {
        super(0);
        this.f2063e = qVar;
        this.f2065v = viewGroup;
        this.f2064i = obj;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        switch (this.f2062d) {
            case 0:
                this.f2063e.f2076f.e(this.f2065v, this.f2064i);
                break;
            default:
                q qVar = this.f2063e;
                ArrayList arrayList = qVar.f2073c;
                u1 u1Var = qVar.f2076f;
                if (!arrayList.isEmpty()) {
                    Iterator it = arrayList.iterator();
                    while (it.hasNext()) {
                        if (!((r) it.next()).a.f2129g) {
                            if (FragmentManager.M(2)) {
                                Log.v("FragmentManager", "Completing animating immediately");
                            }
                            f1.b bVar = new f1.b();
                            u1Var.u(((r) arrayList.get(0)).a.f2125c, this.f2064i, bVar, new y(3, qVar));
                            bVar.a();
                            break;
                        }
                    }
                }
                if (FragmentManager.M(2)) {
                    Log.v("FragmentManager", "Animating to start");
                }
                Object obj = qVar.f2085q;
                Intrinsics.checkNotNull(obj);
                u1Var.d(obj, new d(1, qVar, this.f2065v));
        }
        return Unit.a;
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public o(q qVar, Object obj, ViewGroup viewGroup) {
        super(0);
        this.f2063e = qVar;
        this.f2064i = obj;
        this.f2065v = viewGroup;
    }
}
