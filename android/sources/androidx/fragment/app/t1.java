package androidx.fragment.app;

import android.view.View;
import androidx.recyclerview.widget.AsyncListDiffer;
import java.util.ArrayList;
import java.util.List;
import java.util.WeakHashMap;

/* loaded from: classes.dex */
public final class t1 implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f2100d = 0;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f2101e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ List f2102i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ List f2103v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ Object f2104w;

    /* renamed from: x, reason: collision with root package name */
    public final /* synthetic */ Object f2105x;

    public t1(int i5, ArrayList arrayList, ArrayList arrayList2, ArrayList arrayList3, ArrayList arrayList4) {
        this.f2101e = i5;
        this.f2102i = arrayList;
        this.f2103v = arrayList2;
        this.f2104w = arrayList3;
        this.f2105x = arrayList4;
    }

    @Override // java.lang.Runnable
    public final void run() {
        int i5 = this.f2100d;
        Object obj = this.f2105x;
        switch (i5) {
            case 0:
                for (int i6 = 0; i6 < this.f2101e; i6++) {
                    View view = (View) ((ArrayList) this.f2102i).get(i6);
                    String str = (String) ((ArrayList) this.f2103v).get(i6);
                    WeakHashMap weakHashMap = androidx.core.view.s0.a;
                    androidx.core.view.j0.n(view, str);
                    androidx.core.view.j0.n((View) ((ArrayList) this.f2104w).get(i6), (String) ((ArrayList) obj).get(i6));
                }
                break;
            default:
                ((AsyncListDiffer) obj).f2258c.execute(new androidx.recyclerview.widget.j(1, this, androidx.recyclerview.widget.c.a(new androidx.recyclerview.widget.e(this), true)));
                break;
        }
    }

    public t1(AsyncListDiffer asyncListDiffer, List list, List list2, int i5, Runnable runnable) {
        this.f2105x = asyncListDiffer;
        this.f2102i = list;
        this.f2103v = list2;
        this.f2101e = i5;
        this.f2104w = runnable;
    }
}
