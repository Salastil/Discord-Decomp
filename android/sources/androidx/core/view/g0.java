package androidx.core.view;

import android.os.Build;
import android.view.View;
import java.nio.ByteBuffer;
import java.util.ConcurrentModificationException;

/* loaded from: classes.dex */
public abstract class g0 {

    /* renamed from: d, reason: collision with root package name */
    public int f1591d;

    /* renamed from: e, reason: collision with root package name */
    public int f1592e;

    /* renamed from: i, reason: collision with root package name */
    public int f1593i;

    /* renamed from: v, reason: collision with root package name */
    public Object f1594v;

    public g0() {
        if (j8.c.f12428e == null) {
            j8.c.f12428e = new j8.c();
        }
    }

    public int a(int i5) {
        if (i5 < this.f1593i) {
            return ((ByteBuffer) this.f1594v).getShort(this.f1592e + i5);
        }
        return 0;
    }

    public void b() {
        if (((go.i) this.f1594v).E != this.f1593i) {
            throw new ConcurrentModificationException();
        }
    }

    public abstract Object c(View view);

    public abstract void d(View view, Object obj);

    public void e() {
        while (true) {
            int i5 = this.f1591d;
            go.i iVar = (go.i) this.f1594v;
            if (i5 >= iVar.f9413x || iVar.f9410i[i5] >= 0) {
                return;
            } else {
                this.f1591d = i5 + 1;
            }
        }
    }

    public void f(View view, Object obj) {
        Object tag;
        if (Build.VERSION.SDK_INT >= this.f1592e) {
            d(view, obj);
            return;
        }
        if (Build.VERSION.SDK_INT >= this.f1592e) {
            tag = c(view);
        } else {
            tag = view.getTag(this.f1591d);
            if (!((Class) this.f1594v).isInstance(tag)) {
                tag = null;
            }
        }
        if (g(tag, obj)) {
            b e9 = s0.e(view);
            if (e9 == null) {
                e9 = new b();
            }
            s0.p(view, e9);
            view.setTag(this.f1591d, obj);
            s0.j(this.f1593i, view);
        }
    }

    public abstract boolean g(Object obj, Object obj2);

    public boolean hasNext() {
        return this.f1591d < ((go.i) this.f1594v).f9413x;
    }

    public void remove() {
        go.i iVar = (go.i) this.f1594v;
        b();
        if (this.f1592e == -1) {
            throw new IllegalStateException("Call next() before removing element from the iterator.");
        }
        iVar.c();
        iVar.l(this.f1592e);
        this.f1592e = -1;
        this.f1593i = iVar.E;
    }
}
