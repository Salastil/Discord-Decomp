package androidx.fragment.app;

import android.util.Log;
import java.util.ArrayList;
import java.util.Iterator;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;

/* loaded from: classes.dex */
public final /* synthetic */ class y implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f2120d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f2121e;

    public /* synthetic */ y(int i5, Object obj) {
        this.f2120d = i5;
        this.f2121e = obj;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f2120d) {
            case 0:
                Fragment fragment = (Fragment) this.f2121e;
                FragmentViewLifecycleOwner fragmentViewLifecycleOwner = fragment.mViewLifecycleOwner;
                fragmentViewLifecycleOwner.f1955w.a(fragment.mSavedViewRegistryState);
                fragment.mSavedViewRegistryState = null;
                break;
            case 1:
                Ref.ObjectRef seekCancelLambda = (Ref.ObjectRef) this.f2121e;
                Intrinsics.checkNotNullParameter(seekCancelLambda, "$seekCancelLambda");
                Function0 function0 = (Function0) seekCancelLambda.element;
                if (function0 != null) {
                    function0.invoke();
                    break;
                }
                break;
            case 2:
                ArrayList transitioningViews = (ArrayList) this.f2121e;
                Intrinsics.checkNotNullParameter(transitioningViews, "$transitioningViews");
                n1.c(4, transitioningViews);
                break;
            case 3:
                q this$0 = (q) this.f2121e;
                Intrinsics.checkNotNullParameter(this$0, "this$0");
                if (FragmentManager.M(2)) {
                    Log.v("FragmentManager", "Transition for all operations has completed");
                }
                Iterator it = this$0.f2073c.iterator();
                while (it.hasNext()) {
                    ((r) it.next()).a.c(this$0);
                }
                break;
            default:
                Iterator it2 = ((FragmentManager) this.f2121e).f1924n.iterator();
                while (it2.hasNext()) {
                    ((z0) it2.next()).getClass();
                }
                break;
        }
    }
}
