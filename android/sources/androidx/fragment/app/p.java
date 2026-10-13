package androidx.fragment.app;

import android.util.Log;
import android.view.ViewGroup;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Lambda;
import kotlin.jvm.internal.Ref;

/* loaded from: classes.dex */
public final class p extends Lambda implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ q f2068d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ ViewGroup f2069e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f2070i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Ref.ObjectRef f2071v;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public p(q qVar, ViewGroup viewGroup, Object obj, Ref.ObjectRef objectRef) {
        super(0);
        this.f2068d = qVar;
        this.f2069e = viewGroup;
        this.f2070i = obj;
        this.f2071v = objectRef;
    }

    /* JADX WARN: Type inference failed for: r3v2, types: [T, androidx.fragment.app.o] */
    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        if (FragmentManager.M(2)) {
            Log.v("FragmentManager", "Attempting to create TransitionSeekController");
        }
        q qVar = this.f2068d;
        u1 u1Var = qVar.f2076f;
        ViewGroup viewGroup = this.f2069e;
        Object obj = this.f2070i;
        Object i5 = u1Var.i(viewGroup, obj);
        qVar.f2085q = i5;
        if (i5 == null) {
            if (FragmentManager.M(2)) {
                Log.v("FragmentManager", "TransitionSeekController was not created.");
            }
            qVar.f2086r = true;
        } else {
            this.f2071v.element = new o(qVar, obj, viewGroup);
            if (FragmentManager.M(2)) {
                Log.v("FragmentManager", "Started executing operations from " + qVar.f2074d + " to " + qVar.f2075e);
            }
        }
        return Unit.a;
    }
}
