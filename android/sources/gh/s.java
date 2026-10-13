package gh;

import android.content.Context;
import android.content.IntentFilter;
import android.view.MenuItem;
import androidx.collection.SimpleArrayMap;
import java.util.ArrayList;

/* loaded from: classes3.dex */
public abstract class s {
    public Object a;

    /* renamed from: b, reason: collision with root package name */
    public Object f9324b;

    public s(Context context) {
        this.a = context;
    }

    public static float g(int i5, int i6, int i10) {
        return jb.a.c((i5 - i6) / i10, 0.0f, 1.0f);
    }

    public abstract void c();

    public void d() {
        c4.d dVar = (c4.d) this.a;
        if (dVar != null) {
            try {
                ((androidx.appcompat.app.a) this.f9324b).H.unregisterReceiver(dVar);
            } catch (IllegalArgumentException unused) {
            }
            this.a = null;
        }
    }

    public abstract IntentFilter e();

    public abstract int f();

    public MenuItem h(MenuItem menuItem) {
        if (!(menuItem instanceof d1.a)) {
            return menuItem;
        }
        d1.a aVar = (d1.a) menuItem;
        if (((SimpleArrayMap) this.f9324b) == null) {
            this.f9324b = new SimpleArrayMap(0);
        }
        MenuItem menuItem2 = (MenuItem) ((SimpleArrayMap) this.f9324b).get(aVar);
        if (menuItem2 != null) {
            return menuItem2;
        }
        n.q qVar = new n.q((Context) this.a, aVar);
        ((SimpleArrayMap) this.f9324b).put(aVar, qVar);
        return qVar;
    }

    public abstract void i();

    public abstract void j();

    public abstract String k();

    public abstract void l(c cVar);

    public abstract void m();

    public void n() {
        d();
        IntentFilter e9 = e();
        if (e9.countActions() == 0) {
            return;
        }
        if (((c4.d) this.a) == null) {
            this.a = new c4.d(2, this);
        }
        ((androidx.appcompat.app.a) this.f9324b).H.registerReceiver((c4.d) this.a, e9);
    }

    public abstract void o();

    public abstract void p();

    public s() {
        ArrayList arrayList = new ArrayList();
        this.f9324b = arrayList;
        arrayList.add(new p());
    }

    public s(nj.a aVar) {
        this.a = aVar;
        this.f9324b = new k2.r(aVar);
    }

    public s(androidx.appcompat.app.a aVar) {
        this.f9324b = aVar;
    }
}
