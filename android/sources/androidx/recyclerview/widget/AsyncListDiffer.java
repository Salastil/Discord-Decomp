package androidx.recyclerview.widget;

import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.Executor;

/* loaded from: classes.dex */
public final class AsyncListDiffer {

    /* renamed from: h, reason: collision with root package name */
    public static final f f2256h = new f();
    public final b a;

    /* renamed from: b, reason: collision with root package name */
    public final d f2257b;

    /* renamed from: e, reason: collision with root package name */
    public List f2260e;

    /* renamed from: g, reason: collision with root package name */
    public int f2262g;

    /* renamed from: d, reason: collision with root package name */
    public final CopyOnWriteArrayList f2259d = new CopyOnWriteArrayList();

    /* renamed from: f, reason: collision with root package name */
    public List f2261f = Collections.EMPTY_LIST;

    /* renamed from: c, reason: collision with root package name */
    public final f f2258c = f2256h;

    public interface ListListener {
        void a(List list, List list2);
    }

    public AsyncListDiffer(b bVar, d dVar) {
        this.a = bVar;
        this.f2257b = dVar;
    }

    public final void a(List list, Runnable runnable) {
        Iterator it = this.f2259d.iterator();
        while (it.hasNext()) {
            ((ListListener) it.next()).a(list, this.f2261f);
        }
        if (runnable != null) {
            runnable.run();
        }
    }

    public final void b(List list, Runnable runnable) {
        int i5 = this.f2262g + 1;
        this.f2262g = i5;
        List list2 = this.f2260e;
        if (list == list2) {
            if (runnable != null) {
                runnable.run();
                return;
            }
            return;
        }
        List list3 = this.f2261f;
        b bVar = this.a;
        if (list == null) {
            int size = list2.size();
            this.f2260e = null;
            this.f2261f = Collections.EMPTY_LIST;
            bVar.c(0, size);
            a(list3, runnable);
            return;
        }
        if (list2 != null) {
            ((Executor) this.f2257b.a).execute(new androidx.fragment.app.t1(this, list2, list, i5, runnable));
            return;
        }
        this.f2260e = list;
        this.f2261f = Collections.unmodifiableList(list);
        bVar.b(0, list.size());
        a(list3, runnable);
    }
}
