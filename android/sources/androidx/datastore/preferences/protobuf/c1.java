package androidx.datastore.preferences.protobuf;

import com.google.android.gms.internal.play_billing.a3;
import com.google.android.gms.internal.play_billing.b3;
import java.util.AbstractMap;
import java.util.Iterator;
import java.util.Map;
import java.util.Objects;

/* loaded from: classes.dex */
public final class c1 implements Iterator {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f1724d;

    /* renamed from: e, reason: collision with root package name */
    public int f1725e;

    /* renamed from: i, reason: collision with root package name */
    public boolean f1726i;

    /* renamed from: v, reason: collision with root package name */
    public Iterator f1727v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ AbstractMap f1728w;

    public /* synthetic */ c1(AbstractMap abstractMap, int i5) {
        this.f1724d = i5;
        this.f1728w = abstractMap;
        this.f1725e = -1;
    }

    public Iterator a() {
        switch (this.f1724d) {
            case 0:
                if (this.f1727v == null) {
                    this.f1727v = ((y0) this.f1728w).f1847i.entrySet().iterator();
                }
                break;
            default:
                if (this.f1727v == null) {
                    this.f1727v = ((iq.y) this.f1728w).f12253i.entrySet().iterator();
                }
                break;
        }
        return this.f1727v;
    }

    public Iterator b() {
        if (this.f1727v == null) {
            this.f1727v = ((a3) this.f1728w).f5690i.entrySet().iterator();
        }
        return this.f1727v;
    }

    @Override // java.util.Iterator
    public final boolean hasNext() {
        switch (this.f1724d) {
            case 0:
                int i5 = this.f1725e + 1;
                y0 y0Var = (y0) this.f1728w;
                if (i5 >= y0Var.f1846e.size()) {
                    return !y0Var.f1847i.isEmpty() && a().hasNext();
                }
                return true;
            case 1:
                int i6 = this.f1725e + 1;
                a3 a3Var = (a3) this.f1728w;
                if (i6 >= a3Var.f5689e) {
                    return !a3Var.f5690i.isEmpty() && b().hasNext();
                }
                return true;
            default:
                return this.f1725e + 1 < ((iq.y) this.f1728w).f12252e.size() || a().hasNext();
        }
    }

    @Override // java.util.Iterator
    public final Object next() {
        switch (this.f1724d) {
            case 0:
                this.f1726i = true;
                int i5 = this.f1725e + 1;
                this.f1725e = i5;
                y0 y0Var = (y0) this.f1728w;
                return i5 < y0Var.f1846e.size() ? (Map.Entry) y0Var.f1846e.get(this.f1725e) : (Map.Entry) a().next();
            case 1:
                this.f1726i = true;
                int i6 = this.f1725e + 1;
                this.f1725e = i6;
                a3 a3Var = (a3) this.f1728w;
                return i6 < a3Var.f5689e ? (b3) a3Var.f5688d[i6] : (Map.Entry) b().next();
            default:
                this.f1726i = true;
                int i10 = this.f1725e + 1;
                this.f1725e = i10;
                iq.y yVar = (iq.y) this.f1728w;
                return i10 < yVar.f12252e.size() ? (Map.Entry) yVar.f12252e.get(this.f1725e) : (Map.Entry) a().next();
        }
    }

    @Override // java.util.Iterator
    public final void remove() {
        int i5 = this.f1724d;
        AbstractMap abstractMap = this.f1728w;
        switch (i5) {
            case 0:
                y0 y0Var = (y0) abstractMap;
                if (!this.f1726i) {
                    throw new IllegalStateException("remove() was called before next()");
                }
                this.f1726i = false;
                int i6 = y0.f1844y;
                y0Var.b();
                if (this.f1725e >= y0Var.f1846e.size()) {
                    a().remove();
                    return;
                }
                int i10 = this.f1725e;
                this.f1725e = i10 - 1;
                y0Var.g(i10);
                return;
            case 1:
                if (!this.f1726i) {
                    throw new IllegalStateException("remove() was called before next()");
                }
                this.f1726i = false;
                a3 a3Var = (a3) abstractMap;
                int i11 = a3.f5687y;
                a3Var.f();
                int i12 = this.f1725e;
                if (i12 >= a3Var.f5689e) {
                    b().remove();
                    return;
                }
                this.f1725e = i12 - 1;
                a3Var.f();
                Object[] objArr = a3Var.f5688d;
                Object obj = ((b3) objArr[i12]).f5706d;
                System.arraycopy(objArr, i12 + 1, objArr, i12, (a3Var.f5689e - i12) - 1);
                a3Var.f5689e--;
                if (a3Var.f5690i.isEmpty()) {
                    return;
                }
                Iterator it = a3Var.e().entrySet().iterator();
                Object[] objArr2 = a3Var.f5688d;
                int i13 = a3Var.f5689e;
                Map.Entry entry = (Map.Entry) it.next();
                if (entry.getKey() != null) {
                    throw new ClassCastException();
                }
                objArr2[i13] = new b3(a3Var, entry.getValue());
                a3Var.f5689e++;
                it.remove();
                return;
            default:
                iq.y yVar = (iq.y) abstractMap;
                if (!this.f1726i) {
                    throw new IllegalStateException("remove() was called before next()");
                }
                this.f1726i = false;
                int i14 = iq.y.f12250x;
                yVar.b();
                if (this.f1725e >= yVar.f12252e.size()) {
                    a().remove();
                    return;
                }
                int i15 = this.f1725e;
                this.f1725e = i15 - 1;
                yVar.f(i15);
                return;
        }
    }

    public /* synthetic */ c1(a3 a3Var) {
        this.f1724d = 1;
        Objects.requireNonNull(a3Var);
        this.f1728w = a3Var;
        this.f1725e = -1;
    }
}
