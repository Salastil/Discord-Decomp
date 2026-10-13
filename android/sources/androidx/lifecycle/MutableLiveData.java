package androidx.lifecycle;

import android.os.Looper;

/* loaded from: classes.dex */
public class MutableLiveData extends LiveData {
    public final void i(Object obj) {
        boolean z5;
        synchronized (this.a) {
            z5 = this.f2155f == LiveData.k;
            this.f2155f = obj;
        }
        if (z5) {
            o.a U = o.a.U();
            a3.h hVar = this.j;
            o.c cVar = U.f15703t;
            if (cVar.f15706v == null) {
                synchronized (cVar.f15704t) {
                    try {
                        if (cVar.f15706v == null) {
                            cVar.f15706v = o.c.U(Looper.getMainLooper());
                        }
                    } finally {
                    }
                }
            }
            cVar.f15706v.post(hVar);
        }
    }
}
