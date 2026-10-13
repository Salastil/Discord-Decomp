package androidx.recyclerview.widget;

import androidx.recyclerview.widget.RecyclerView;
import java.util.ArrayList;
import java.util.Iterator;

/* loaded from: classes.dex */
public final class k implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ ArrayList f2409d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ r f2410e;

    public k(r rVar, ArrayList arrayList) {
        this.f2410e = rVar;
        this.f2409d = arrayList;
    }

    @Override // java.lang.Runnable
    public final void run() {
        ArrayList arrayList = this.f2409d;
        Iterator it = arrayList.iterator();
        while (true) {
            boolean hasNext = it.hasNext();
            r rVar = this.f2410e;
            if (!hasNext) {
                arrayList.clear();
                rVar.mAdditionsList.remove(arrayList);
                return;
            }
            rVar.animateAddImpl((RecyclerView.ViewHolder) it.next());
        }
    }
}
