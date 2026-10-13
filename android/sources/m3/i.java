package m3;

import androidx.transition.Transition;
import java.util.ArrayList;

/* loaded from: classes.dex */
public final class i extends u {
    public final /* synthetic */ Object a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ ArrayList f14361b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ Object f14362c;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ ArrayList f14363d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ k f14364e;

    public i(k kVar, Object obj, ArrayList arrayList, Object obj2, ArrayList arrayList2) {
        this.f14364e = kVar;
        this.a = obj;
        this.f14361b = arrayList;
        this.f14362c = obj2;
        this.f14363d = arrayList2;
    }

    @Override // m3.u, m3.s
    public final void onTransitionEnd(Transition transition) {
        transition.D(this);
    }

    @Override // m3.u, m3.s
    public final void onTransitionStart(Transition transition) {
        k kVar = this.f14364e;
        Object obj = this.a;
        if (obj != null) {
            kVar.z(obj, this.f14361b, null);
        }
        Object obj2 = this.f14362c;
        if (obj2 != null) {
            kVar.z(obj2, this.f14363d, null);
        }
    }
}
