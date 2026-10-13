package y8;

import com.facebook.common.internal.Supplier;
import com.facebook.datasource.DataSource;
import java.util.ArrayList;
import java.util.Map;
import java.util.concurrent.atomic.AtomicInteger;

/* loaded from: classes3.dex */
public final class e extends a {

    /* renamed from: h, reason: collision with root package name */
    public ArrayList f20677h;

    /* renamed from: i, reason: collision with root package name */
    public int f20678i;
    public int j;
    public AtomicInteger k;

    /* renamed from: l, reason: collision with root package name */
    public Throwable f20679l;

    /* renamed from: m, reason: collision with root package name */
    public Map f20680m;

    /* renamed from: n, reason: collision with root package name */
    public final /* synthetic */ f f20681n;

    public e(f fVar) {
        this.f20681n = fVar;
        if (this.k != null) {
            return;
        }
        synchronized (this) {
            try {
                if (this.k == null) {
                    this.k = new AtomicInteger(0);
                    int size = this.f20681n.a.size();
                    this.j = size;
                    this.f20678i = size;
                    this.f20677h = new ArrayList(size);
                    for (int i5 = 0; i5 < size; i5++) {
                        DataSource dataSource = (DataSource) ((Supplier) this.f20681n.a.get(i5)).get();
                        this.f20677h.add(dataSource);
                        dataSource.d(new d(this, i5), m8.a.f14400d);
                        if (!dataSource.a()) {
                        }
                    }
                }
            } finally {
            }
        }
    }

    public static void l(e eVar, int i5, DataSource dataSource) {
        DataSource m5;
        Throwable th2;
        synchronized (eVar) {
            m5 = dataSource == eVar.o() ? null : dataSource == eVar.n(i5) ? eVar.m(i5) : dataSource;
        }
        if (m5 != null) {
            m5.close();
        }
        if (i5 == 0) {
            eVar.f20679l = dataSource.b();
            eVar.f20680m = dataSource.getExtras();
        }
        if (eVar.k.incrementAndGet() != eVar.j || (th2 = eVar.f20679l) == null) {
            return;
        }
        eVar.h(th2, eVar.f20680m);
    }

    @Override // y8.a, com.facebook.datasource.DataSource
    public final synchronized boolean a() {
        boolean z5;
        DataSource o6 = o();
        if (o6 != null) {
            z5 = o6.a();
        }
        return z5;
    }

    @Override // y8.a, com.facebook.datasource.DataSource
    public final boolean close() {
        synchronized (this) {
            try {
                if (!super.close()) {
                    return false;
                }
                ArrayList arrayList = this.f20677h;
                this.f20677h = null;
                if (arrayList == null) {
                    return true;
                }
                for (int i5 = 0; i5 < arrayList.size(); i5++) {
                    DataSource dataSource = (DataSource) arrayList.get(i5);
                    if (dataSource != null) {
                        dataSource.close();
                    }
                }
                return true;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    @Override // y8.a, com.facebook.datasource.DataSource
    public final synchronized Object getResult() {
        DataSource o6;
        o6 = o();
        return o6 != null ? o6.getResult() : null;
    }

    public final synchronized DataSource m(int i5) {
        DataSource dataSource;
        ArrayList arrayList = this.f20677h;
        dataSource = null;
        if (arrayList != null && i5 < arrayList.size()) {
            dataSource = (DataSource) this.f20677h.set(i5, null);
        }
        return dataSource;
    }

    public final synchronized DataSource n(int i5) {
        ArrayList arrayList;
        arrayList = this.f20677h;
        return (arrayList == null || i5 >= arrayList.size()) ? null : (DataSource) this.f20677h.get(i5);
    }

    public final synchronized DataSource o() {
        return n(this.f20678i);
    }
}
