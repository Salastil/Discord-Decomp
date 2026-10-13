package androidx.recyclerview.widget;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;

/* loaded from: classes.dex */
public final class j implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f2405d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f2406e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f2407i;

    public /* synthetic */ j(int i5, Object obj, Object obj2) {
        this.f2405d = i5;
        this.f2407i = obj;
        this.f2406e = obj2;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f2405d) {
            case 0:
                r rVar = (r) this.f2407i;
                ArrayList arrayList = (ArrayList) this.f2406e;
                Iterator it = arrayList.iterator();
                while (it.hasNext()) {
                    rVar.animateChangeImpl((DefaultItemAnimator$ChangeInfo) it.next());
                }
                arrayList.clear();
                rVar.mChangesList.remove(arrayList);
                break;
            default:
                androidx.fragment.app.t1 t1Var = (androidx.fragment.app.t1) this.f2407i;
                AsyncListDiffer asyncListDiffer = (AsyncListDiffer) t1Var.f2105x;
                if (asyncListDiffer.f2262g == t1Var.f2101e) {
                    List list = t1Var.f2103v;
                    u uVar = (u) this.f2406e;
                    Runnable runnable = (Runnable) t1Var.f2104w;
                    List list2 = asyncListDiffer.f2261f;
                    asyncListDiffer.f2260e = list;
                    asyncListDiffer.f2261f = Collections.unmodifiableList(list);
                    uVar.a(asyncListDiffer.a);
                    asyncListDiffer.a(list2, runnable);
                    break;
                }
                break;
        }
    }
}
