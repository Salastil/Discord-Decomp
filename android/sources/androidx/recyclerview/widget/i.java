package androidx.recyclerview.widget;

import java.util.ArrayList;
import java.util.Iterator;

/* loaded from: classes.dex */
public final class i implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ ArrayList f2403d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ r f2404e;

    public i(r rVar, ArrayList arrayList) {
        this.f2404e = rVar;
        this.f2403d = arrayList;
    }

    @Override // java.lang.Runnable
    public final void run() {
        ArrayList arrayList = this.f2403d;
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            q qVar = (q) it.next();
            this.f2404e.animateMoveImpl(qVar.a, qVar.f2445b, qVar.f2446c, qVar.f2447d, qVar.f2448e);
        }
        arrayList.clear();
        this.f2404e.mMovesList.remove(arrayList);
    }
}
