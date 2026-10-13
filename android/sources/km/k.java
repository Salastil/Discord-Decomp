package km;

import android.util.SparseArray;
import android.view.View;
import com.facebook.react.bridge.UiThreadUtil;
import io.sentry.android.core.h1;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.Map;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class k {
    public final SparseArray a = new SparseArray();

    /* renamed from: b, reason: collision with root package name */
    public final SparseArray f13439b = new SparseArray();

    /* renamed from: c, reason: collision with root package name */
    public final SparseArray f13440c = new SparseArray();

    /* renamed from: d, reason: collision with root package name */
    public final LinkedHashMap f13441d = new LinkedHashMap();

    public final synchronized boolean a(int i5, int i6, int i10, f fVar) {
        boolean z5;
        jm.f fVar2 = (jm.f) this.a.get(i5);
        if (fVar2 != null) {
            d(fVar2);
            fVar2.f12881m = i10;
            fVar2.f12877g = fVar;
            i(i6, fVar2);
            z5 = true;
        } else {
            z5 = false;
        }
        return z5;
    }

    public final synchronized void b(f owner, int i5) {
        Intrinsics.checkNotNullParameter(owner, "owner");
        Map map = (Map) this.f13441d.get(Integer.valueOf(i5));
        if (map == null) {
            return;
        }
        map.remove(owner);
        if (map.isEmpty()) {
            this.f13441d.remove(Integer.valueOf(i5));
        }
    }

    public final synchronized void c(f fVar, int i5) {
        jm.f fVar2 = (jm.f) this.a.get(i5);
        if (fVar2 != null) {
            if (!Intrinsics.areEqual(fVar2.f12877g, fVar)) {
            } else {
                d(fVar2);
            }
        }
    }

    public final synchronized void d(jm.f fVar) {
        try {
            Integer num = (Integer) this.f13439b.get(fVar.f12874d);
            if (num != null) {
                this.f13439b.remove(fVar.f12874d);
                ArrayList arrayList = (ArrayList) this.f13440c.get(num.intValue());
                if (arrayList != null) {
                    synchronized (arrayList) {
                        arrayList.remove(fVar);
                    }
                    if (arrayList.size() == 0) {
                        this.f13440c.remove(num.intValue());
                    }
                }
            }
            if (fVar.f12876f != null) {
                UiThreadUtil.runOnUiThread(new jm.c(1, fVar));
            }
        } catch (Throwable th2) {
            throw th2;
        }
    }

    public final synchronized void e(int i5) {
        jm.f fVar = (jm.f) this.a.get(i5);
        if (fVar != null) {
            d(fVar);
            this.a.remove(i5);
        }
    }

    public final synchronized jm.f f(int i5) {
        return (jm.f) this.a.get(i5);
    }

    public final synchronized ArrayList g(View view) {
        ArrayList arrayList;
        Intrinsics.checkNotNullParameter(view, "view");
        int id2 = view.getId();
        synchronized (this) {
            arrayList = (ArrayList) this.f13440c.get(id2);
        }
        return arrayList;
        return arrayList;
    }

    public final void h(jm.f handler) {
        boolean z5;
        Intrinsics.checkNotNullParameter(handler, "handler");
        synchronized (this) {
            this.a.put(handler.f12874d, handler);
            z5 = false;
            if (((Map) this.f13441d.get(Integer.valueOf(handler.f12874d))) != null) {
                if (!r0.isEmpty()) {
                    z5 = true;
                }
            }
        }
        if (z5) {
            k6.b bVar = new k6.b(1, this, handler);
            if (UiThreadUtil.isOnUiThread()) {
                bVar.invoke();
            } else {
                UiThreadUtil.runOnUiThread(new h1(17, bVar));
            }
        }
    }

    public final synchronized void i(int i5, jm.f fVar) {
        try {
            if (this.f13439b.get(fVar.f12874d) != null) {
                throw new IllegalStateException(("Handler " + fVar + " already attached").toString());
            }
            this.f13439b.put(fVar.f12874d, Integer.valueOf(i5));
            Object obj = this.f13440c.get(i5);
            if (obj == null) {
                ArrayList arrayList = new ArrayList(1);
                arrayList.add(fVar);
                this.f13440c.put(i5, arrayList);
            } else {
                synchronized (obj) {
                    ((ArrayList) obj).add(fVar);
                }
            }
        } catch (Throwable th2) {
            throw th2;
        }
    }
}
